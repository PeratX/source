

Json::Value *__fastcall WorldTemplatesScreenController::addStaticScreenVars(WorldTemplatesScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  WorldTemplatesScreenController *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  char v6; // r1@2
  int v8; // [sp+0h] [bp-38h]@4
  char v9; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$default_tab");
  Json::Value::Value((Json::Value *)&v9, *((_DWORD *)v3 + 124));
  Json::Value::operator=(v4, (const Json::Value *)&v9);
  Json::Value::~Value((Json::Value *)&v9);
  v5 = Json::Value::operator[](v2, "$hide_top_bar");
  if ( *((_BYTE *)v3 + 500) )
    v6 = 1;
  else
    v6 = MinecraftScreenModel::isEduMode(*((MinecraftScreenModel **)v3 + 108));
  Json::Value::Value((Json::Value *)&v8, v6);
  Json::Value::operator=(v5, (const Json::Value *)&v8);
  return Json::Value::~Value((Json::Value *)&v8);
}


void __fastcall WorldTemplatesScreenController::~WorldTemplatesScreenController(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController *v1; // r0@1

  v1 = WorldTemplatesScreenController::~WorldTemplatesScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall WorldTemplatesScreenController::_registerBindings(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController *v1; // r4@1
  char *v2; // r5@1
  size_t v3; // r0@1
  int i; // r1@1
  int v5; // t1@2
  _DWORD *v6; // r0@3
  char *v7; // r5@7
  size_t v8; // r0@7
  int j; // r2@7
  int v10; // t1@8
  char *v11; // r5@13
  size_t v12; // r0@13
  int k; // r2@13
  int v14; // t1@14
  _DWORD *v15; // r0@15
  char *v16; // r5@19
  size_t v17; // r0@19
  int l; // r1@19
  int v19; // t1@20
  _DWORD *v20; // r0@21
  __int64 v21; // r1@21
  __int64 v22; // r1@21
  char *v23; // r5@25
  size_t v24; // r0@25
  int m; // r2@25
  int v26; // t1@26
  _DWORD *v27; // r0@27
  __int64 v28; // r1@27
  __int64 v29; // r1@27
  char *v30; // r5@31
  size_t v31; // r0@31
  int n; // r2@31
  int v33; // t1@32
  _DWORD *v34; // r0@33
  __int64 v35; // r1@33
  __int64 v36; // r1@33
  char *v37; // r5@37
  size_t v38; // r0@37
  int ii; // r1@37
  int v40; // t1@38
  _DWORD *v41; // r0@39
  __int64 v42; // r1@39
  __int64 v43; // r1@39
  char *v44; // r5@43
  size_t v45; // r0@43
  int jj; // r1@43
  int v47; // t1@44
  _DWORD *v48; // r0@45
  __int64 v49; // r1@45
  __int64 v50; // r1@45
  _DWORD *v51; // r0@49
  __int64 v52; // r1@49
  __int64 v53; // r1@49
  char *v54; // r5@53
  size_t v55; // r0@53
  int kk; // r1@53
  int v57; // t1@54
  _DWORD *v58; // r0@55
  __int64 v59; // r1@55
  __int64 v60; // r1@55
  char *v61; // r5@59
  size_t v62; // r0@59
  int ll; // r2@59
  int v64; // t1@60
  void *v65; // r0@61
  __int64 v66; // r1@61
  __int64 v67; // r1@61
  char *v68; // r5@65
  size_t v69; // r0@65
  int mm; // r2@65
  int v71; // t1@66
  void *v72; // r0@67
  __int64 v73; // r1@67
  __int64 v74; // r1@67
  char *v75; // r5@71
  size_t v76; // r0@71
  int nn; // r1@71
  int v78; // t1@72
  void *v79; // r0@73
  __int64 v80; // r1@73
  __int64 v81; // r1@73
  char *v82; // r5@77
  size_t v83; // r0@77
  int i1; // r2@77
  int v85; // t1@78
  void *v86; // r0@79
  __int64 v87; // r1@79
  __int64 v88; // r1@79
  char *v89; // r5@83
  size_t v90; // r0@83
  int i2; // r1@83
  int v92; // t1@84
  void *v93; // r0@85
  __int64 v94; // r1@85
  __int64 v95; // r1@85
  char *v96; // r5@89
  size_t v97; // r0@89
  int i3; // r1@89
  int v99; // t1@90
  void *v100; // r0@91
  __int64 v101; // r1@91
  __int64 v102; // r1@91
  _DWORD *v103; // r0@95
  __int64 v104; // r1@95
  __int64 v105; // r1@95
  char *v106; // r5@99
  size_t v107; // r0@99
  int i4; // r1@99
  int v109; // t1@100
  _DWORD *v110; // r0@101
  __int64 v111; // r1@101
  __int64 v112; // r1@101
  char *v113; // r5@105
  size_t v114; // r0@105
  int i5; // r2@105
  int v116; // t1@106
  void *v117; // r0@107
  __int64 v118; // r1@107
  __int64 v119; // r1@107
  char *v120; // r5@111
  size_t v121; // r0@111
  int i6; // r2@111
  int v123; // t1@112
  void *v124; // r0@113
  __int64 v125; // r1@113
  __int64 v126; // r1@113
  char *v127; // r5@117
  size_t v128; // r0@117
  int i7; // r1@117
  int v130; // t1@118
  void *v131; // r0@119
  __int64 v132; // r1@119
  __int64 v133; // r1@119
  char *v134; // r5@123
  size_t v135; // r0@123
  int i8; // r2@123
  int v137; // t1@124
  void *v138; // r0@125
  __int64 v139; // r1@125
  __int64 v140; // r1@125
  char *v141; // r5@129
  size_t v142; // r0@129
  int i9; // r1@129
  int v144; // t1@130
  void *v145; // r0@131
  __int64 v146; // r1@131
  __int64 v147; // r1@131
  char *v148; // r5@135
  size_t v149; // r0@135
  int i10; // r1@135
  int v151; // t1@136
  void *v152; // r0@137
  __int64 v153; // r1@137
  __int64 v154; // r1@137
  _DWORD *v155; // r0@141
  __int64 v156; // r1@141
  __int64 v157; // r1@141
  _DWORD *v158; // r0@145
  __int64 v159; // r1@145
  __int64 v160; // r1@145
  _DWORD *v161; // r0@149
  __int64 v162; // r1@149
  __int64 v163; // r1@149
  _DWORD *v164; // r0@153
  __int64 v165; // r1@153
  __int64 v166; // r1@153
  _DWORD *v167; // r0@157
  __int64 v168; // r1@157
  __int64 v169; // r1@157
  char *v170; // r0@161
  char *v171; // r0@162
  char *v172; // r0@163
  unsigned int *v173; // r2@165
  signed int v174; // r1@167
  unsigned int *v175; // r2@169
  signed int v176; // r1@171
  unsigned int *v177; // r2@173
  signed int v178; // r1@175
  void *v179; // [sp+4h] [bp-4A4h]@157
  __int64 v180; // [sp+Ch] [bp-49Ch]@157
  _DWORD *v181; // [sp+14h] [bp-494h]@157
  __int64 v182; // [sp+1Ch] [bp-48Ch]@157
  int v183; // [sp+24h] [bp-484h]@157
  void *v184; // [sp+28h] [bp-480h]@153
  __int64 v185; // [sp+30h] [bp-478h]@153
  _DWORD *v186; // [sp+38h] [bp-470h]@153
  __int64 v187; // [sp+40h] [bp-468h]@153
  int v188; // [sp+48h] [bp-460h]@153
  void *v189; // [sp+4Ch] [bp-45Ch]@149
  __int64 v190; // [sp+54h] [bp-454h]@149
  _DWORD *v191; // [sp+5Ch] [bp-44Ch]@149
  __int64 v192; // [sp+64h] [bp-444h]@149
  int v193; // [sp+6Ch] [bp-43Ch]@149
  void *v194; // [sp+70h] [bp-438h]@145
  __int64 v195; // [sp+78h] [bp-430h]@145
  _DWORD *v196; // [sp+80h] [bp-428h]@145
  __int64 v197; // [sp+88h] [bp-420h]@145
  int v198; // [sp+90h] [bp-418h]@145
  void *v199; // [sp+94h] [bp-414h]@141
  __int64 v200; // [sp+9Ch] [bp-40Ch]@141
  _DWORD *v201; // [sp+A4h] [bp-404h]@141
  __int64 v202; // [sp+ACh] [bp-3FCh]@141
  int v203; // [sp+B4h] [bp-3F4h]@141
  void *v204; // [sp+B8h] [bp-3F0h]@137
  __int64 v205; // [sp+C0h] [bp-3E8h]@137
  void *v206; // [sp+C8h] [bp-3E0h]@137
  __int64 v207; // [sp+D0h] [bp-3D8h]@137
  int v208; // [sp+D8h] [bp-3D0h]@137
  int v209; // [sp+DCh] [bp-3CCh]@137
  void *v210; // [sp+E0h] [bp-3C8h]@131
  __int64 v211; // [sp+E8h] [bp-3C0h]@131
  void *v212; // [sp+F0h] [bp-3B8h]@131
  __int64 v213; // [sp+F8h] [bp-3B0h]@131
  int v214; // [sp+100h] [bp-3A8h]@131
  int v215; // [sp+104h] [bp-3A4h]@131
  void *v216; // [sp+108h] [bp-3A0h]@125
  __int64 v217; // [sp+110h] [bp-398h]@125
  void *v218; // [sp+118h] [bp-390h]@125
  __int64 v219; // [sp+120h] [bp-388h]@125
  int v220; // [sp+128h] [bp-380h]@125
  int v221; // [sp+12Ch] [bp-37Ch]@125
  void *v222; // [sp+130h] [bp-378h]@119
  __int64 v223; // [sp+138h] [bp-370h]@119
  void *v224; // [sp+140h] [bp-368h]@119
  __int64 v225; // [sp+148h] [bp-360h]@119
  int v226; // [sp+150h] [bp-358h]@119
  int v227; // [sp+154h] [bp-354h]@119
  void *v228; // [sp+158h] [bp-350h]@113
  __int64 v229; // [sp+160h] [bp-348h]@113
  void *v230; // [sp+168h] [bp-340h]@113
  __int64 v231; // [sp+170h] [bp-338h]@113
  int v232; // [sp+178h] [bp-330h]@113
  int v233; // [sp+17Ch] [bp-32Ch]@113
  void *v234; // [sp+180h] [bp-328h]@107
  __int64 v235; // [sp+188h] [bp-320h]@107
  void *v236; // [sp+190h] [bp-318h]@107
  __int64 v237; // [sp+198h] [bp-310h]@107
  int v238; // [sp+1A0h] [bp-308h]@107
  int v239; // [sp+1A4h] [bp-304h]@107
  void *v240; // [sp+1A8h] [bp-300h]@101
  __int64 v241; // [sp+1B0h] [bp-2F8h]@101
  _DWORD *v242; // [sp+1B8h] [bp-2F0h]@101
  __int64 v243; // [sp+1C0h] [bp-2E8h]@101
  int v244; // [sp+1C8h] [bp-2E0h]@101
  int v245; // [sp+1CCh] [bp-2DCh]@101
  char *v246; // [sp+1D4h] [bp-2D4h]@99
  void *v247; // [sp+1D8h] [bp-2D0h]@95
  __int64 v248; // [sp+1E0h] [bp-2C8h]@95
  _DWORD *v249; // [sp+1E8h] [bp-2C0h]@95
  __int64 v250; // [sp+1F0h] [bp-2B8h]@95
  int v251; // [sp+1F8h] [bp-2B0h]@95
  void *v252; // [sp+1FCh] [bp-2ACh]@91
  __int64 v253; // [sp+204h] [bp-2A4h]@91
  void *v254; // [sp+20Ch] [bp-29Ch]@91
  __int64 v255; // [sp+214h] [bp-294h]@91
  int v256; // [sp+21Ch] [bp-28Ch]@91
  int v257; // [sp+220h] [bp-288h]@91
  void *v258; // [sp+224h] [bp-284h]@85
  __int64 v259; // [sp+22Ch] [bp-27Ch]@85
  void *v260; // [sp+234h] [bp-274h]@85
  __int64 v261; // [sp+23Ch] [bp-26Ch]@85
  int v262; // [sp+244h] [bp-264h]@85
  int v263; // [sp+248h] [bp-260h]@85
  void *v264; // [sp+24Ch] [bp-25Ch]@79
  __int64 v265; // [sp+254h] [bp-254h]@79
  void *v266; // [sp+25Ch] [bp-24Ch]@79
  __int64 v267; // [sp+264h] [bp-244h]@79
  int v268; // [sp+26Ch] [bp-23Ch]@79
  int v269; // [sp+270h] [bp-238h]@79
  void *v270; // [sp+274h] [bp-234h]@73
  __int64 v271; // [sp+27Ch] [bp-22Ch]@73
  void *v272; // [sp+284h] [bp-224h]@73
  __int64 v273; // [sp+28Ch] [bp-21Ch]@73
  int v274; // [sp+294h] [bp-214h]@73
  int v275; // [sp+298h] [bp-210h]@73
  void *v276; // [sp+29Ch] [bp-20Ch]@67
  __int64 v277; // [sp+2A4h] [bp-204h]@67
  void *v278; // [sp+2ACh] [bp-1FCh]@67
  __int64 v279; // [sp+2B4h] [bp-1F4h]@67
  int v280; // [sp+2BCh] [bp-1ECh]@67
  int v281; // [sp+2C0h] [bp-1E8h]@67
  void *v282; // [sp+2C4h] [bp-1E4h]@61
  __int64 v283; // [sp+2CCh] [bp-1DCh]@61
  void *v284; // [sp+2D4h] [bp-1D4h]@61
  __int64 v285; // [sp+2DCh] [bp-1CCh]@61
  int v286; // [sp+2E4h] [bp-1C4h]@61
  int v287; // [sp+2E8h] [bp-1C0h]@61
  void *v288; // [sp+2ECh] [bp-1BCh]@55
  __int64 v289; // [sp+2F4h] [bp-1B4h]@55
  _DWORD *v290; // [sp+2FCh] [bp-1ACh]@55
  __int64 v291; // [sp+304h] [bp-1A4h]@55
  int v292; // [sp+30Ch] [bp-19Ch]@55
  int v293; // [sp+310h] [bp-198h]@55
  char *v294; // [sp+318h] [bp-190h]@53
  void *v295; // [sp+31Ch] [bp-18Ch]@49
  __int64 v296; // [sp+324h] [bp-184h]@49
  _DWORD *v297; // [sp+32Ch] [bp-17Ch]@49
  __int64 v298; // [sp+334h] [bp-174h]@49
  int v299; // [sp+33Ch] [bp-16Ch]@49
  void *v300; // [sp+340h] [bp-168h]@45
  __int64 v301; // [sp+348h] [bp-160h]@45
  _DWORD *v302; // [sp+350h] [bp-158h]@45
  __int64 v303; // [sp+358h] [bp-150h]@45
  int v304; // [sp+360h] [bp-148h]@45
  int v305; // [sp+364h] [bp-144h]@45
  void *v306; // [sp+368h] [bp-140h]@39
  __int64 v307; // [sp+370h] [bp-138h]@39
  _DWORD *v308; // [sp+378h] [bp-130h]@39
  __int64 v309; // [sp+380h] [bp-128h]@39
  int v310; // [sp+388h] [bp-120h]@39
  int v311; // [sp+38Ch] [bp-11Ch]@39
  void *v312; // [sp+390h] [bp-118h]@33
  __int64 v313; // [sp+398h] [bp-110h]@33
  _DWORD *v314; // [sp+3A0h] [bp-108h]@33
  __int64 v315; // [sp+3A8h] [bp-100h]@33
  int v316; // [sp+3B0h] [bp-F8h]@33
  int v317; // [sp+3B4h] [bp-F4h]@33
  void *v318; // [sp+3B8h] [bp-F0h]@27
  __int64 v319; // [sp+3C0h] [bp-E8h]@27
  _DWORD *v320; // [sp+3C8h] [bp-E0h]@27
  __int64 v321; // [sp+3D0h] [bp-D8h]@27
  int v322; // [sp+3D8h] [bp-D0h]@27
  int v323; // [sp+3DCh] [bp-CCh]@27
  void *v324; // [sp+3E0h] [bp-C8h]@21
  __int64 v325; // [sp+3E8h] [bp-C0h]@21
  _DWORD *v326; // [sp+3F0h] [bp-B8h]@21
  __int64 v327; // [sp+3F8h] [bp-B0h]@21
  int v328; // [sp+400h] [bp-A8h]@21
  int v329; // [sp+404h] [bp-A4h]@21
  void *v330; // [sp+408h] [bp-A0h]@15
  void (*v331)(void); // [sp+410h] [bp-98h]@15
  signed int (*v332)(); // [sp+414h] [bp-94h]@15
  _DWORD *v333; // [sp+418h] [bp-90h]@15
  void (*v334)(void); // [sp+420h] [bp-88h]@15
  int *(__fastcall *v335)(int *, int, int); // [sp+424h] [bp-84h]@15
  int v336; // [sp+428h] [bp-80h]@15
  int v337; // [sp+42Ch] [bp-7Ch]@15
  void *v338; // [sp+430h] [bp-78h]@9
  void (*v339)(void); // [sp+438h] [bp-70h]@9
  signed int (*v340)(); // [sp+43Ch] [bp-6Ch]@9
  void *v341; // [sp+440h] [bp-68h]@9
  void (*v342)(void); // [sp+448h] [bp-60h]@9
  void (__fastcall *v343)(int *); // [sp+44Ch] [bp-5Ch]@9
  int v344; // [sp+450h] [bp-58h]@9
  int v345; // [sp+454h] [bp-54h]@9
  void *v346; // [sp+458h] [bp-50h]@3
  void (*v347)(void); // [sp+460h] [bp-48h]@3
  signed int (*v348)(); // [sp+464h] [bp-44h]@3
  _DWORD *v349; // [sp+468h] [bp-40h]@3
  void (*v350)(void); // [sp+470h] [bp-38h]@3
  void (__fastcall *v351)(int *, int, int); // [sp+474h] [bp-34h]@3
  int v352; // [sp+478h] [bp-30h]@3
  int v353; // [sp+47Ch] [bp-2Ch]@3
  char *s; // [sp+484h] [bp-24h]@1

  v1 = this;
  sub_21E94B4((void **)&s, "world_templates");
  v2 = s;
  v3 = strlen(s);
  for ( i = -2128831035; v3; i = 16777619 * (i ^ v5) )
  {
    v5 = (unsigned __int8)*v2++;
    --v3;
  }
  v353 = i;
  v352 = 2091499377;
  v6 = operator new(4u);
  *v6 = v1;
  v349 = v6;
  v351 = sub_129F93C;
  v350 = (void (*)(void))sub_129F95C;
  v346 = operator new(1u);
  v348 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v347 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v353, &v352, (int)&v349, (int)&v346);
  if ( v347 )
    v347();
  if ( v350 )
    v350();
  v7 = s;
  v8 = strlen(s);
  for ( j = -2128831035; v8; j = 16777619 * (j ^ v10) )
    v10 = (unsigned __int8)*v7++;
    --v8;
  v345 = j;
  StringHash::StringHash<char [28]>(&v344, (int)"#world_template_description");
  v341 = operator new(1u);
  v343 = sub_129F994;
  v342 = (void (*)(void))sub_129FA60;
  v338 = operator new(1u);
  v340 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v339 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v345, &v344, (int)&v341, (int)&v338);
  if ( v339 )
    v339();
  if ( v342 )
    v342();
  v11 = s;
  v12 = strlen(s);
  for ( k = -2128831035; v12; k = 16777619 * (k ^ v14) )
    v14 = (unsigned __int8)*v11++;
    --v12;
  v337 = k;
  StringHash::StringHash<char [24]>(&v336, (int)"#world_template_version");
  v15 = operator new(4u);
  *v15 = v1;
  v333 = v15;
  v335 = sub_129FA8E;
  v334 = (void (*)(void))sub_129FAAE;
  v330 = operator new(1u);
  v332 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v331 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v337, &v336, (int)&v333, (int)&v330);
  if ( v331 )
    v331();
  if ( v334 )
    v334();
  v16 = s;
  v17 = strlen(s);
  for ( l = -2128831035; v17; l = 16777619 * (l ^ v19) )
    v19 = (unsigned __int8)*v16++;
    --v17;
  v329 = l;
  v328 = -340927126;
  v20 = operator new(4u);
  LODWORD(v21) = sub_129FB18;
  *v20 = v1;
  HIDWORD(v21) = sub_129FAE4;
  v326 = v20;
  v327 = v21;
  v324 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v325 = v22;
  ScreenController::bindStringForCollection((int)v1, &v329, &v328, (int)&v326, (int)&v324);
  if ( (_DWORD)v325 )
    ((void (*)(void))v325)();
  if ( (_DWORD)v327 )
    ((void (*)(void))v327)();
  v23 = s;
  v24 = strlen(s);
  for ( m = -2128831035; v24; m = 16777619 * (m ^ v26) )
    v26 = (unsigned __int8)*v23++;
    --v24;
  v323 = m;
  StringHash::StringHash<char [24]>(&v322, (int)"#screenshot_file_system");
  v27 = operator new(4u);
  LODWORD(v28) = sub_129FB88;
  *v27 = v1;
  HIDWORD(v28) = sub_129FB4E;
  v320 = v27;
  v321 = v28;
  v318 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v319 = v29;
  ScreenController::bindStringForCollection((int)v1, &v323, &v322, (int)&v320, (int)&v318);
  if ( (_DWORD)v319 )
    ((void (*)(void))v319)();
  if ( (_DWORD)v321 )
    ((void (*)(void))v321)();
  v30 = s;
  v31 = strlen(s);
  for ( n = -2128831035; v31; n = 16777619 * (n ^ v33) )
    v33 = (unsigned __int8)*v30++;
    --v31;
  v317 = n;
  StringHash::StringHash<char [23]>(&v316, (int)"#screenshot_zip_folder");
  v34 = operator new(4u);
  LODWORD(v35) = sub_129FC2C;
  *v34 = v1;
  HIDWORD(v35) = sub_129FBC0;
  v314 = v34;
  v315 = v35;
  v312 = operator new(1u);
  LODWORD(v36) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v36) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v313 = v36;
  ScreenController::bindStringForCollection((int)v1, &v317, &v316, (int)&v314, (int)&v312);
  if ( (_DWORD)v313 )
    ((void (*)(void))v313)();
  if ( (_DWORD)v315 )
    ((void (*)(void))v315)();
  v37 = s;
  v38 = strlen(s);
  for ( ii = -2128831035; v38; ii = 16777619 * (ii ^ v40) )
    v40 = (unsigned __int8)*v37++;
    --v38;
  v311 = ii;
  v310 = -1091652185;
  v41 = operator new(4u);
  LODWORD(v42) = sub_129FC7E;
  *v41 = v1;
  HIDWORD(v42) = sub_129FC62;
  v308 = v41;
  v309 = v42;
  v306 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v307 = v43;
  ScreenController::bindBoolForCollection((int)v1, &v311, &v310, (int)&v308, (int)&v306);
  if ( (_DWORD)v307 )
    ((void (*)(void))v307)();
  if ( (_DWORD)v309 )
    ((void (*)(void))v309)();
  v44 = s;
  v45 = strlen(s);
  for ( jj = -2128831035; v45; jj = 16777619 * (jj ^ v47) )
    v47 = (unsigned __int8)*v44++;
    --v45;
  v305 = jj;
  v304 = 146634656;
  v48 = operator new(4u);
  LODWORD(v49) = sub_129FCD4;
  *v48 = v1;
  HIDWORD(v49) = sub_129FCB4;
  v302 = v48;
  v303 = v49;
  v300 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v301 = v50;
  ScreenController::bindBoolForCollection((int)v1, &v305, &v304, (int)&v302, (int)&v300);
  if ( (_DWORD)v301 )
    ((void (*)(void))v301)();
  if ( (_DWORD)v303 )
    ((void (*)(void))v303)();
  StringHash::StringHash<char [36]>(&v299, (int)"#world_template_item_grid_dimension");
  v51 = operator new(4u);
  LODWORD(v52) = sub_129FD30;
  *v51 = v1;
  HIDWORD(v52) = sub_129FD0A;
  v297 = v51;
  v298 = v52;
  v295 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v296 = v53;
  ScreenController::bindGridSize((int)v1, &v299, (int)&v297, (int)&v295);
  if ( (_DWORD)v296 )
    ((void (*)(void))v296)();
  if ( (_DWORD)v298 )
    ((void (*)(void))v298)();
  sub_21E94B4((void **)&v294, "invalid_world_templates");
  v54 = v294;
  v55 = strlen(v294);
  for ( kk = -2128831035; v55; kk = 16777619 * (kk ^ v57) )
    v57 = (unsigned __int8)*v54++;
    --v55;
  v292 = 2091499377;
  v293 = kk;
  v58 = operator new(4u);
  LODWORD(v59) = sub_129FE98;
  *v58 = v1;
  HIDWORD(v59) = sub_129FD68;
  v290 = v58;
  v291 = v59;
  v288 = operator new(1u);
  LODWORD(v60) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v60) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v289 = v60;
  ScreenController::bindStringForCollection((int)v1, &v293, &v292, (int)&v290, (int)&v288);
  if ( (_DWORD)v289 )
    ((void (*)(void))v289)();
  if ( (_DWORD)v291 )
    ((void (*)(void))v291)();
  v61 = v294;
  v62 = strlen(v294);
  for ( ll = -2128831035; v62; ll = 16777619 * (ll ^ v64) )
    v64 = (unsigned __int8)*v61++;
    --v62;
  v287 = ll;
  StringHash::StringHash<char [28]>(&v286, (int)"#world_template_description");
  v65 = operator new(1u);
  LODWORD(v66) = sub_129FF9C;
  v284 = v65;
  HIDWORD(v66) = sub_129FED0;
  v285 = v66;
  v282 = operator new(1u);
  LODWORD(v67) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v67) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v283 = v67;
  ScreenController::bindStringForCollection((int)v1, &v287, &v286, (int)&v284, (int)&v282);
  if ( (_DWORD)v283 )
    ((void (*)(void))v283)();
  if ( (_DWORD)v285 )
    ((void (*)(void))v285)();
  v68 = v294;
  v69 = strlen(v294);
  for ( mm = -2128831035; v69; mm = 16777619 * (mm ^ v71) )
    v71 = (unsigned __int8)*v68++;
    --v69;
  v281 = mm;
  StringHash::StringHash<char [24]>(&v280, (int)"#world_template_version");
  v72 = operator new(1u);
  LODWORD(v73) = sub_129FFE0;
  v278 = v72;
  HIDWORD(v73) = sub_129FFCC;
  v279 = v73;
  v276 = operator new(1u);
  LODWORD(v74) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v74) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v277 = v74;
  ScreenController::bindStringForCollection((int)v1, &v281, &v280, (int)&v278, (int)&v276);
  if ( (_DWORD)v277 )
    ((void (*)(void))v277)();
  if ( (_DWORD)v279 )
    ((void (*)(void))v279)();
  v75 = v294;
  v76 = strlen(v294);
  for ( nn = -2128831035; v76; nn = 16777619 * (nn ^ v78) )
    v78 = (unsigned __int8)*v75++;
    --v76;
  v274 = -340927126;
  v275 = nn;
  v79 = operator new(1u);
  LODWORD(v80) = sub_12A0024;
  v272 = v79;
  HIDWORD(v80) = sub_12A0010;
  v273 = v80;
  v270 = operator new(1u);
  LODWORD(v81) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v81) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v271 = v81;
  ScreenController::bindStringForCollection((int)v1, &v275, &v274, (int)&v272, (int)&v270);
  if ( (_DWORD)v271 )
    ((void (*)(void))v271)();
  if ( (_DWORD)v273 )
    ((void (*)(void))v273)();
  v82 = v294;
  v83 = strlen(v294);
  for ( i1 = -2128831035; v83; i1 = 16777619 * (i1 ^ v85) )
    v85 = (unsigned __int8)*v82++;
    --v83;
  v269 = i1;
  StringHash::StringHash<char [24]>(&v268, (int)"#screenshot_file_system");
  v86 = operator new(1u);
  LODWORD(v87) = sub_12A0070;
  v266 = v86;
  HIDWORD(v87) = sub_12A0052;
  v267 = v87;
  v264 = operator new(1u);
  LODWORD(v88) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v88) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v265 = v88;
  ScreenController::bindStringForCollection((int)v1, &v269, &v268, (int)&v266, (int)&v264);
  if ( (_DWORD)v265 )
    ((void (*)(void))v265)();
  if ( (_DWORD)v267 )
    ((void (*)(void))v267)();
  v89 = v294;
  v90 = strlen(v294);
  for ( i2 = -2128831035; v90; i2 = 16777619 * (i2 ^ v92) )
    v92 = (unsigned __int8)*v89++;
    --v90;
  v262 = -1091652185;
  v263 = i2;
  v93 = operator new(1u);
  LODWORD(v94) = sub_12A00A2;
  v260 = v93;
  HIDWORD(v94) = sub_12A009E;
  v261 = v94;
  v258 = operator new(1u);
  LODWORD(v95) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v95) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v259 = v95;
  ScreenController::bindBoolForCollection((int)v1, &v263, &v262, (int)&v260, (int)&v258);
  if ( (_DWORD)v259 )
    ((void (*)(void))v259)();
  if ( (_DWORD)v261 )
    ((void (*)(void))v261)();
  v96 = v294;
  v97 = strlen(v294);
  for ( i3 = -2128831035; v97; i3 = 16777619 * (i3 ^ v99) )
    v99 = (unsigned __int8)*v96++;
    --v97;
  v256 = 146634656;
  v257 = i3;
  v100 = operator new(1u);
  LODWORD(v101) = sub_12A00D4;
  v254 = v100;
  HIDWORD(v101) = sub_12A00D0;
  v255 = v101;
  v252 = operator new(1u);
  LODWORD(v102) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v102) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v253 = v102;
  ScreenController::bindBoolForCollection((int)v1, &v257, &v256, (int)&v254, (int)&v252);
  if ( (_DWORD)v253 )
    ((void (*)(void))v253)();
  if ( (_DWORD)v255 )
    ((void (*)(void))v255)();
  StringHash::StringHash<char [44]>(&v251, (int)"#invalid_world_template_item_grid_dimension");
  v103 = operator new(4u);
  LODWORD(v104) = sub_12A0120;
  *v103 = v1;
  HIDWORD(v104) = sub_12A0102;
  v249 = v103;
  v250 = v104;
  v247 = operator new(1u);
  LODWORD(v105) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v105) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v248 = v105;
  ScreenController::bindGridSize((int)v1, &v251, (int)&v249, (int)&v247);
  if ( (_DWORD)v248 )
    ((void (*)(void))v248)();
  if ( (_DWORD)v250 )
    ((void (*)(void))v250)();
  sub_21E94B4((void **)&v246, "loading_world_templates");
  v106 = v246;
  v107 = strlen(v246);
  for ( i4 = -2128831035; v107; i4 = 16777619 * (i4 ^ v109) )
    v109 = (unsigned __int8)*v106++;
    --v107;
  v244 = 2091499377;
  v245 = i4;
  v110 = operator new(4u);
  LODWORD(v111) = sub_12A0288;
  *v110 = v1;
  HIDWORD(v111) = sub_12A0158;
  v242 = v110;
  v243 = v111;
  v240 = operator new(1u);
  LODWORD(v112) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v112) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v241 = v112;
  ScreenController::bindStringForCollection((int)v1, &v245, &v244, (int)&v242, (int)&v240);
  if ( (_DWORD)v241 )
    ((void (*)(void))v241)();
  if ( (_DWORD)v243 )
    ((void (*)(void))v243)();
  v113 = v246;
  v114 = strlen(v246);
  for ( i5 = -2128831035; v114; i5 = 16777619 * (i5 ^ v116) )
    v116 = (unsigned __int8)*v113++;
    --v114;
  v239 = i5;
  StringHash::StringHash<char [28]>(&v238, (int)"#world_template_description");
  v117 = operator new(1u);
  LODWORD(v118) = sub_12A038C;
  v236 = v117;
  HIDWORD(v118) = sub_12A02C0;
  v237 = v118;
  v234 = operator new(1u);
  LODWORD(v119) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v119) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v235 = v119;
  ScreenController::bindStringForCollection((int)v1, &v239, &v238, (int)&v236, (int)&v234);
  if ( (_DWORD)v235 )
    ((void (*)(void))v235)();
  if ( (_DWORD)v237 )
    ((void (*)(void))v237)();
  v120 = v246;
  v121 = strlen(v246);
  for ( i6 = -2128831035; v121; i6 = 16777619 * (i6 ^ v123) )
    v123 = (unsigned __int8)*v120++;
    --v121;
  v233 = i6;
  StringHash::StringHash<char [24]>(&v232, (int)"#world_template_version");
  v124 = operator new(1u);
  LODWORD(v125) = sub_12A03D0;
  v230 = v124;
  HIDWORD(v125) = sub_12A03BC;
  v231 = v125;
  v228 = operator new(1u);
  LODWORD(v126) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v126) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v229 = v126;
  ScreenController::bindStringForCollection((int)v1, &v233, &v232, (int)&v230, (int)&v228);
  if ( (_DWORD)v229 )
    ((void (*)(void))v229)();
  if ( (_DWORD)v231 )
    ((void (*)(void))v231)();
  v127 = v246;
  v128 = strlen(v246);
  for ( i7 = -2128831035; v128; i7 = 16777619 * (i7 ^ v130) )
    v130 = (unsigned __int8)*v127++;
    --v128;
  v226 = -340927126;
  v227 = i7;
  v131 = operator new(1u);
  LODWORD(v132) = sub_12A0414;
  v224 = v131;
  HIDWORD(v132) = sub_12A0400;
  v225 = v132;
  v222 = operator new(1u);
  LODWORD(v133) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v133) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v223 = v133;
  ScreenController::bindStringForCollection((int)v1, &v227, &v226, (int)&v224, (int)&v222);
  if ( (_DWORD)v223 )
    ((void (*)(void))v223)();
  if ( (_DWORD)v225 )
    ((void (*)(void))v225)();
  v134 = v246;
  v135 = strlen(v246);
  for ( i8 = -2128831035; v135; i8 = 16777619 * (i8 ^ v137) )
    v137 = (unsigned __int8)*v134++;
    --v135;
  v221 = i8;
  StringHash::StringHash<char [24]>(&v220, (int)"#screenshot_file_system");
  v138 = operator new(1u);
  LODWORD(v139) = sub_12A0460;
  v218 = v138;
  HIDWORD(v139) = sub_12A0442;
  v219 = v139;
  v216 = operator new(1u);
  LODWORD(v140) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v140) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v217 = v140;
  ScreenController::bindStringForCollection((int)v1, &v221, &v220, (int)&v218, (int)&v216);
  if ( (_DWORD)v217 )
    ((void (*)(void))v217)();
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  v141 = v246;
  v142 = strlen(v246);
  for ( i9 = -2128831035; v142; i9 = 16777619 * (i9 ^ v144) )
    v144 = (unsigned __int8)*v141++;
    --v142;
  v214 = -1091652185;
  v215 = i9;
  v145 = operator new(1u);
  LODWORD(v146) = sub_12A0492;
  v212 = v145;
  HIDWORD(v146) = sub_12A048E;
  v213 = v146;
  v210 = operator new(1u);
  LODWORD(v147) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v147) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v211 = v147;
  ScreenController::bindBoolForCollection((int)v1, &v215, &v214, (int)&v212, (int)&v210);
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  if ( (_DWORD)v213 )
    ((void (*)(void))v213)();
  v148 = v246;
  v149 = strlen(v246);
  for ( i10 = -2128831035; v149; i10 = 16777619 * (i10 ^ v151) )
    v151 = (unsigned __int8)*v148++;
    --v149;
  v208 = 146634656;
  v209 = i10;
  v152 = operator new(1u);
  LODWORD(v153) = sub_12A04C4;
  v206 = v152;
  HIDWORD(v153) = sub_12A04C0;
  v207 = v153;
  v204 = operator new(1u);
  LODWORD(v154) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v154) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v205 = v154;
  ScreenController::bindBoolForCollection((int)v1, &v209, &v208, (int)&v206, (int)&v204);
  if ( (_DWORD)v205 )
    ((void (*)(void))v205)();
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  StringHash::StringHash<char [44]>(&v203, (int)"#loading_world_template_item_grid_dimension");
  v155 = operator new(4u);
  LODWORD(v156) = sub_12A0510;
  *v155 = v1;
  HIDWORD(v156) = sub_12A04F2;
  v201 = v155;
  v202 = v156;
  v199 = operator new(1u);
  LODWORD(v157) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v157) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v200 = v157;
  ScreenController::bindGridSize((int)v1, &v203, (int)&v201, (int)&v199);
  if ( (_DWORD)v200 )
    ((void (*)(void))v200)();
  if ( (_DWORD)v202 )
    ((void (*)(void))v202)();
  StringHash::StringHash<char [29]>(&v198, (int)"#generate_random_button_text");
  v158 = operator new(4u);
  LODWORD(v159) = sub_12A05A0;
  *v158 = v1;
  HIDWORD(v159) = sub_12A0548;
  v196 = v158;
  v197 = v159;
  v194 = operator new(1u);
  LODWORD(v160) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v160) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v195 = v160;
  ScreenController::bindString((int)v1, &v198, (int)&v196, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  v193 = -1011684960;
  v161 = operator new(4u);
  LODWORD(v162) = sub_12A05E8;
  *v161 = v1;
  HIDWORD(v162) = sub_12A05D6;
  v191 = v161;
  v192 = v162;
  v189 = operator new(1u);
  LODWORD(v163) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v163) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v190 = v163;
  ScreenController::bindBool((int)v1, &v193, (int)&v191, (int)&v189);
  if ( (_DWORD)v190 )
    ((void (*)(void))v190)();
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  v188 = 1734166222;
  v164 = operator new(4u);
  LODWORD(v165) = sub_12A062E;
  *v164 = v1;
  HIDWORD(v165) = sub_12A061E;
  v186 = v164;
  v187 = v165;
  v184 = operator new(1u);
  LODWORD(v166) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v166) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v185 = v166;
  ScreenController::bindBool((int)v1, &v188, (int)&v186, (int)&v184);
  if ( (_DWORD)v185 )
    ((void (*)(void))v185)();
  if ( (_DWORD)v187 )
    ((void (*)(void))v187)();
  StringHash::StringHash<char [27]>(&v183, (int)"#templates_padding_visible");
  v167 = operator new(4u);
  LODWORD(v168) = sub_12A069A;
  *v167 = v1;
  HIDWORD(v168) = sub_12A0664;
  v181 = v167;
  v182 = v168;
  v179 = operator new(1u);
  LODWORD(v169) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v169) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v180 = v169;
  ScreenController::bindBool((int)v1, &v183, (int)&v181, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  if ( (_DWORD)v182 )
    ((void (*)(void))v182)();
  v170 = v246 - 12;
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v246 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
    }
    else
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v170);
  v171 = v294 - 12;
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v294 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j__ZdlPv_9(v171);
  v172 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(s - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j__ZdlPv_9(v172);
}


int __fastcall WorldTemplatesScreenController::_getCollectionIndex(WorldTemplatesScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}


void __fastcall WorldTemplatesScreenController::~WorldTemplatesScreenController(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController::~WorldTemplatesScreenController(this);
}


int __fastcall WorldTemplatesScreenController::_showLockedIcon(WorldTemplatesScreenController *this, const WorldTemplateInfo *a2)
{
  int result; // r0@2

  if ( a2 )
    result = WorldTemplateInfo::isPremiumLocked(a2);
  else
    result = 0;
  return result;
}


char *__fastcall WorldTemplatesScreenController::_getScreenshotTexture(WorldTemplatesScreenController *this, const WorldTemplateInfo *a2)
{
  char *result; // r0@1

  result = WorldTemplateInfo::getWorldIconPath(a2);
  if ( !*(_DWORD *)(*(_DWORD *)result - 12) )
    result = (char *)&WorldTemplatesScreenController::DEFAULT_WORLD_SCREENSHOT;
  return result;
}


WorldTemplatesScreenController *__fastcall WorldTemplatesScreenController::~WorldTemplatesScreenController(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26
  void *v12; // r0@31
  int v13; // r1@33
  void *v14; // r0@33
  int v15; // r5@34
  unsigned int *v16; // r1@35
  unsigned int v17; // r0@37
  unsigned int *v18; // r6@41
  unsigned int v19; // r0@43
  unsigned int *v21; // r2@49
  signed int v22; // r1@51

  v1 = this;
  *(_DWORD *)this = &off_26E41F4;
  v3 = (void *)(*(_QWORD *)((char *)this + 468) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 468);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 8;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 117);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*((_QWORD *)v1 + 57) >> 32);
  v7 = (void *)*((_QWORD *)v1 + 57);
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 8;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 114);
  if ( v7 )
    operator delete(v7);
  v12 = (void *)*((_DWORD *)v1 + 111);
  if ( v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 110);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 109);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall WorldTemplatesScreenController::_getLoadingResource(int result, int a2, int a3)
{
  __int64 v3; // kr00_8@2
  int v4; // r4@3

  if ( a3 < 0 || (v3 = *(_QWORD *)(a2 + 468), (HIDWORD(v3) - (signed int)v3) >> 3 <= a3) )
  {
    *(_QWORD *)result = (unsigned int)&unk_28898CC;
  }
  else
    v4 = v3 + 8 * a3;
    result = (int)sub_21E8AF4((int *)result, (int *)(v3 + 8 * a3));
    *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 4);
  return result;
}


char *__fastcall WorldTemplatesScreenController::_getZipFolder(WorldTemplatesScreenController *this, const WorldTemplateInfo *a2)
{
  WorldTemplateInfo *v2; // r4@1
  PackManifest *v3; // r0@1
  char *result; // r0@4

  v2 = a2;
  v3 = (PackManifest *)WorldTemplateInfo::getPackManifest(a2);
  if ( PackManifest::getManifestOrigin(v3) == 1
    && *(_DWORD *)(*(_DWORD *)WorldTemplateInfo::getWorldIconPath(v2) - 12)
    && !WorldTemplateInfo::isWorldIconOverridden(v2) )
  {
    result = WorldTemplateInfo::getWorldPath(v2);
  }
  else
    result = (char *)&Util::EMPTY_STRING;
  return result;
}


signed int __fastcall WorldTemplatesScreenController::_handleInvalidPackClicked(WorldTemplatesScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r6@1
  WorldTemplatesScreenController *v3; // r5@1
  MainMenuScreenModel *v4; // r4@1
  Json::Value *v5; // r6@3
  int v6; // r0@5
  int v7; // r1@6 OVERLAPPED
  int v8; // r2@6
  int v9; // r5@7
  int v10; // r0@7
  char *v11; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  char *v15; // [sp+0h] [bp-20h]@7
  int v16; // [sp+4h] [bp-1Ch]@9

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  v4 = (MainMenuScreenModel *)*((_DWORD *)this + 108);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v5))
    && Json::Value::isUInt(v5) != 1
    || (v6 = Json::Value::asInt(v5, 0), v6 < 0)
    || (*(_QWORD *)&v7 = *((_QWORD *)v3 + 57), (v8 - v7) >> 3 <= v6) )
  {
    v15 = (char *)&unk_28898CC;
    v10 = 0;
  }
  else
    v9 = v7 + 8 * v6;
    sub_21E8AF4((int *)&v15, (int *)v9);
    v10 = *(_DWORD *)(v9 + 4);
  v16 = v10;
  MainMenuScreenModel::navigateToManifestValidationScreen(v4, (const ResourceLocation *)&v15, 0);
  v11 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return 1;
}


void __fastcall WorldTemplatesScreenController::_registerBindings(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController::_registerBindings(this);
}


signed int __fastcall WorldTemplatesScreenController::_getFileSystem(WorldTemplatesScreenController *this, const WorldTemplateInfo *a2)
{
  signed int result; // r0@1

  result = *(_DWORD *)(*(_DWORD *)WorldTemplateInfo::getWorldIconPath(a2) - 12);
  if ( result )
    result = 2;
  return result;
}


int __fastcall WorldTemplatesScreenController::WorldTemplatesScreenController(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r11@1
  int v5; // r6@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r4@14
  unsigned int v13; // r0@16
  int v14; // r0@21
  unsigned int *v15; // r0@22
  unsigned int v16; // r1@24
  char v17; // r0@28
  const InvalidPacksFilterGroup *v18; // r0@34
  __int64 v19; // r8@34
  char *v20; // r1@35
  _DWORD *v21; // r6@35
  unsigned int *v22; // r2@36
  signed int v23; // r7@38
  char *v24; // r4@42
  int *v25; // r0@43
  __int64 v26; // r6@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  int *v29; // r0@57
  __int64 v30; // kr00_8@62
  _DWORD *v31; // r5@63
  unsigned int *v32; // r2@64
  signed int v33; // r1@66
  int *v34; // r0@72
  void *v35; // r5@76
  int v36; // r7@76
  unsigned int *v37; // r2@78
  signed int v38; // r1@80
  int *v39; // r0@86
  void *v41; // [sp+8h] [bp-48h]@62
  void *v42; // [sp+Ch] [bp-44h]@62
  int v43; // [sp+10h] [bp-40h]@62
  int v44; // [sp+14h] [bp-3Ch]@34
  int v45; // [sp+18h] [bp-38h]@34
  int v46; // [sp+1Ch] [bp-34h]@34
  int v47; // [sp+20h] [bp-30h]@1
  int v48; // [sp+24h] [bp-2Ch]@1
  char v49; // [sp+28h] [bp-28h]@35

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v47 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v48 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v47);
  v9 = v48;
  if ( v48 )
    v10 = (unsigned int *)(v48 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
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
  *(_DWORD *)v4 = &off_26E41F4;
  *(_DWORD *)(v4 + 432) = *(_DWORD *)v3;
  v14 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 436) = v14;
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  *(_DWORD *)(v4 + 440) = &unk_28898CC;
  InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)(v4 + 444));
  _aeabi_memclr4(v4 + 456, 44);
  if ( v5 )
    v17 = 1;
  else if ( MinecraftScreenModel::isXBLEnabled(*(MinecraftScreenModel **)v3) == 1 )
    if ( MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)v3) )
      v17 = 1;
      v17 = MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)v3);
  else
  *(_BYTE *)(v4 + 500) = v17;
  MainMenuScreenModel::repopulateWorldTemplates(*(MainMenuScreenModel **)(v4 + 432));
  WorldTemplatesScreenController::_registerBindings((WorldTemplatesScreenController *)v4);
  WorldTemplatesScreenController::_registerEventHandlers((WorldTemplatesScreenController *)v4);
  InvalidPacksFilterGroup::addFilter((unsigned __int64 *)(v4 + 444), 3);
  v18 = (const InvalidPacksFilterGroup *)MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v4 + 432));
  ResourcePackRepository::getInvalidPacks((ResourcePackRepository *)&v44, v18, (_QWORD *)(v4 + 444));
  v19 = *(_QWORD *)(v4 + 456);
  *(_DWORD *)(v4 + 456) = v44;
  v44 = 0;
  *(_DWORD *)(v4 + 460) = v45;
  v45 = 0;
  *(_DWORD *)(v4 + 464) = v46;
  v46 = 0;
  if ( (_DWORD)v19 != HIDWORD(v19) )
    v20 = &v49;
    v21 = (_DWORD *)v19;
    do
      v25 = (int *)(*v21 - 12);
      if ( v25 != &dword_28898C0 )
        v22 = (unsigned int *)(*v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          v24 = v20;
          j_j_j_j__ZdlPv_9(v25);
          v20 = v24;
      v21 += 2;
    while ( v21 != (_DWORD *)HIDWORD(v19) );
  if ( (_DWORD)v19 )
    operator delete((void *)v19);
  v26 = *(_QWORD *)&v44;
  if ( v44 != v45 )
      v29 = (int *)(*(_DWORD *)v26 - 12);
      if ( v29 != &dword_28898C0 )
        v27 = (unsigned int *)(*(_DWORD *)v26 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      LODWORD(v26) = v26 + 8;
    while ( (_DWORD)v26 != HIDWORD(v26) );
    LODWORD(v26) = v44;
  if ( (_DWORD)v26 )
    operator delete((void *)v26);
  PlayScreenModel::getLoadingPacks((int)&v41, *(_DWORD *)(v4 + 432), (char *)3);
  v30 = *(_QWORD *)(v4 + 468);
  *(_DWORD *)(v4 + 468) = v41;
  v41 = 0;
  *(_DWORD *)(v4 + 472) = v42;
  v42 = 0;
  *(_DWORD *)(v4 + 476) = v43;
  v43 = 0;
  if ( (_DWORD)v30 != HIDWORD(v30) )
    v31 = (_DWORD *)v30;
      v34 = (int *)(*v31 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)(*v31 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v31 += 2;
    while ( v31 != (_DWORD *)HIDWORD(v30) );
  if ( (_DWORD)v30 )
    operator delete((void *)v30);
  v36 = (int)v42;
  v35 = v41;
  if ( v41 != v42 )
      v39 = (int *)(*(_DWORD *)v35 - 12);
      if ( v39 != &dword_28898C0 )
        v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v35 = (char *)v35 + 8;
    while ( v35 != (void *)v36 );
    v35 = v41;
  if ( v35 )
    operator delete(v35);
  return v4;
}


int __fastcall WorldTemplatesScreenController::_getInvalidResource(int result, int a2, int a3)
{
  __int64 v3; // kr00_8@2
  int v4; // r4@3

  if ( a3 < 0 || (v3 = *(_QWORD *)(a2 + 456), (HIDWORD(v3) - (signed int)v3) >> 3 <= a3) )
  {
    *(_QWORD *)result = (unsigned int)&unk_28898CC;
  }
  else
    v4 = v3 + 8 * a3;
    result = (int)sub_21E8AF4((int *)result, (int *)(v3 + 8 * a3));
    *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 4);
  return result;
}


void __fastcall WorldTemplatesScreenController::_registerEventHandlers(WorldTemplatesScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  _DWORD *v32; // [sp+4h] [bp-8Ch]@13
  __int64 v33; // [sp+Ch] [bp-84h]@13
  int v34; // [sp+18h] [bp-78h]@13
  _DWORD *v35; // [sp+1Ch] [bp-74h]@10
  __int64 v36; // [sp+24h] [bp-6Ch]@10
  int v37; // [sp+30h] [bp-60h]@10
  _DWORD *v38; // [sp+34h] [bp-5Ch]@7
  __int64 v39; // [sp+3Ch] [bp-54h]@7
  int v40; // [sp+48h] [bp-48h]@7
  _DWORD *v41; // [sp+4Ch] [bp-44h]@4
  __int64 v42; // [sp+54h] [bp-3Ch]@4
  int v43; // [sp+60h] [bp-30h]@4
  _DWORD *v44; // [sp+64h] [bp-2Ch]@1
  __int64 v45; // [sp+6Ch] [bp-24h]@1
  int v46; // [sp+78h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v46, "button.menu_world_template_clicked");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12A097C;
  *v3 = v1;
  HIDWORD(v4) = sub_12A06D0;
  v44 = v3;
  v45 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v43, "button.generate_random");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v43);
  v7 = operator new(4u);
  LODWORD(v8) = sub_12A14A4;
  *v7 = v1;
  HIDWORD(v8) = sub_12A0D34;
  v41 = v7;
  v42 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v9 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v43 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v40, "button.help");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v11 = operator new(4u);
  LODWORD(v12) = sub_12A1CE0;
  *v11 = v1;
  HIDWORD(v12) = sub_12A1C0C;
  v38 = v11;
  v39 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v13 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v40 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v37, "world_toggle");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v15 = operator new(4u);
  LODWORD(v16) = sub_12A1D28;
  *v15 = v1;
  HIDWORD(v16) = sub_12A1D16;
  v35 = v15;
  v36 = v16;
  ScreenController::registerToggleChangeEventHandler((int)v1, v14, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v34, "button.menu_invalid_world_template_clicked");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v34);
  v19 = operator new(4u);
  LODWORD(v20) = sub_12A1D6C;
  *v19 = v1;
  HIDWORD(v20) = sub_12A1D5E;
  v32 = v19;
  v33 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v21 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v34 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


int __fastcall WorldTemplatesScreenController::tick(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController *v1; // r11@1
  int v2; // r9@1
  signed int v3; // r7@1
  bool v4; // cf@1
  __int64 v5; // r0@1
  const InvalidPacksFilterGroup *v6; // r0@9
  __int64 v7; // kr00_8@9
  _DWORD *v8; // r6@9
  _DWORD *v9; // r7@9
  int v10; // r5@11
  _DWORD *v11; // r0@12
  _DWORD *v12; // r1@12
  size_t v13; // r2@12
  int v14; // r0@13
  bool v15; // zf@13
  __int64 v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  int *v19; // r0@30
  signed int v20; // r7@35
  __int64 v21; // r2@35
  signed int v22; // r0@35
  __int64 v23; // kr20_8@42
  _DWORD *v24; // r6@42
  _DWORD *v25; // r7@42
  int v26; // r5@44
  _DWORD *v27; // r0@45
  _DWORD *v28; // r1@45
  size_t v29; // r2@45
  int v30; // r0@46
  bool v31; // zf@46
  const InvalidPacksFilterGroup *v32; // r0@52
  __int64 v33; // r8@52
  char *v34; // r1@53
  _DWORD *v35; // r5@53
  unsigned int *v36; // r2@54
  signed int v37; // r7@56
  char *v38; // r6@60
  int *v39; // r0@61
  __int64 v40; // r6@65
  unsigned int *v41; // r2@67
  signed int v42; // r1@69
  int *v43; // r0@75
  __int64 v44; // r1@81
  unsigned int *v45; // r2@83
  signed int v46; // r1@85
  int *v47; // r0@91
  int v49; // [sp+0h] [bp-58h]@52
  int v50; // [sp+4h] [bp-54h]@52
  int v51; // [sp+8h] [bp-50h]@52
  int v52; // [sp+Ch] [bp-4Ch]@52
  unsigned __int64 v53; // [sp+10h] [bp-48h]@42
  unsigned __int64 v54; // [sp+1Ch] [bp-3Ch]@9
  unsigned int v55; // [sp+28h] [bp-30h]@1
  int v56; // [sp+2Ch] [bp-2Ch]@3
  char v57; // [sp+30h] [bp-28h]@53

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  sub_21E0378(&v55);
  v5 = *((_QWORD *)v1 + 60);
  v3 = 0;
  v4 = (unsigned int)v5 >= v55;
  LODWORD(v5) = 0;
  if ( !v4 )
    LODWORD(v5) = 1;
  if ( SHIDWORD(v5) < v56 )
    v3 = 1;
  if ( HIDWORD(v5) == v56 )
    v3 = v5;
  if ( v3 || MainMenuScreenModel::foundNewWorldTemplates(*((MainMenuScreenModel **)v1 + 108)) == 1 )
  {
    MainMenuScreenModel::repopulateWorldTemplates(*((MainMenuScreenModel **)v1 + 108));
    v6 = (const InvalidPacksFilterGroup *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1
                                                                                          + 108));
    ResourcePackRepository::getInvalidPacks(
      (ResourcePackRepository *)&v54,
      v6,
      (WorldTemplatesScreenController *)((char *)v1 + 444));
    v7 = *((_QWORD *)v1 + 57);
    v8 = (_DWORD *)HIDWORD(v54);
    v9 = (_DWORD *)v54;
    if ( HIDWORD(v7) - (_DWORD)v7 == HIDWORD(v54) - (_DWORD)v54 )
    {
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
LABEL_20:
        HIDWORD(v16) = (unsigned __int64)(*(_QWORD *)&v55 + 5000000000LL) >> 32;
        LODWORD(v16) = v55 + 705032704;
        *((_QWORD *)v1 + 60) = v16;
        if ( v9 != v8 )
        {
          do
          {
            v19 = (int *)(*v9 - 12);
            if ( v19 != &dword_28898C0 )
            {
              v17 = (unsigned int *)(*v9 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v18 = __ldrex(v17);
                while ( __strex(v18 - 1, v17) );
              }
              else
                v18 = (*v17)--;
              if ( v18 <= 0 )
                j_j_j_j__ZdlPv_9(v19);
            }
            v9 += 2;
          }
          while ( v9 != v8 );
          v8 = (_DWORD *)v54;
        }
        v2 |= 1u;
        if ( v8 )
          operator delete(v8);
        goto LABEL_35;
      }
      v10 = 0;
      while ( 1 )
        v11 = *(_DWORD **)(v7 + v10 * 4);
        v12 = (_DWORD *)v9[v10];
        v13 = *(v11 - 3);
        if ( v13 != *(v12 - 3) )
          break;
        v14 = memcmp(v11, v12, v13);
        v15 = v14 == 0;
        if ( !v14 )
          v14 = v7 + v10 * 4;
          v15 = *(_DWORD *)(v7 + v10 * 4 + 4) == v9[v10 + 1];
        if ( !v15 )
        v10 += 2;
        if ( v14 + 8 == HIDWORD(v7) )
          goto LABEL_20;
    }
    std::vector<ResourceLocation,std::allocator<ResourceLocation>>::operator=((int)v1 + 456, &v54);
    goto LABEL_20;
  }
LABEL_35:
  v20 = 0;
  v21 = *((_QWORD *)v1 + 61);
  v22 = 0;
  if ( (unsigned int)v21 >= v55 )
    v22 = 1;
  if ( SHIDWORD(v21) >= v56 )
    v20 = 1;
  if ( HIDWORD(v21) == v56 )
    v20 = v22;
  if ( !v20 )
    PlayScreenModel::getLoadingPacks((int)&v53, *((_DWORD *)v1 + 108), (char *)3);
    v23 = *(_QWORD *)((char *)v1 + 468);
    v24 = (_DWORD *)HIDWORD(v53);
    v25 = (_DWORD *)v53;
    if ( HIDWORD(v23) - (_DWORD)v23 == HIDWORD(v53) - (_DWORD)v53 )
      if ( (_DWORD)v23 == HIDWORD(v23) )
LABEL_81:
        HIDWORD(v44) = (unsigned __int64)(*(_QWORD *)&v55 + 1000000000LL) >> 32;
        LODWORD(v44) = v55 + 1000000000;
        *((_QWORD *)v1 + 61) = v44;
        if ( v25 != v24 )
            v47 = (int *)(*v25 - 12);
            if ( v47 != &dword_28898C0 )
              v45 = (unsigned int *)(*v25 - 4);
                  v46 = __ldrex(v45);
                while ( __strex(v46 - 1, v45) );
                v46 = (*v45)--;
              if ( v46 <= 0 )
                j_j_j_j__ZdlPv_9(v47);
            v25 += 2;
          while ( v25 != v24 );
          v24 = (_DWORD *)v53;
        if ( v24 )
          operator delete(v24);
        return v2;
      v26 = 0;
        v27 = *(_DWORD **)(v23 + v26 * 4);
        v28 = (_DWORD *)v25[v26];
        v29 = *(v27 - 3);
        if ( v29 != *(v28 - 3) )
        v30 = memcmp(v27, v28, v29);
        v31 = v30 == 0;
        if ( !v30 )
          v30 = v23 + v26 * 4;
          v31 = *(_DWORD *)(v23 + v26 * 4 + 4) == v25[v26 + 1];
        if ( !v31 )
        v26 += 2;
        if ( v30 + 8 == HIDWORD(v23) )
          goto LABEL_81;
    v49 = v2;
    std::vector<ResourceLocation,std::allocator<ResourceLocation>>::operator=((int)v1 + 468, &v53);
    v32 = (const InvalidPacksFilterGroup *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1
                                                                                           + 108));
      (ResourcePackRepository *)&v50,
      v32,
    v33 = *((_QWORD *)v1 + 57);
    *((_DWORD *)v1 + 114) = v50;
    v50 = 0;
    *((_DWORD *)v1 + 115) = v51;
    v51 = 0;
    *((_DWORD *)v1 + 116) = v52;
    v52 = 0;
    if ( (_DWORD)v33 != HIDWORD(v33) )
      v34 = &v57;
      v35 = (_DWORD *)v33;
      do
        v39 = (int *)(*v35 - 12);
        if ( v39 != &dword_28898C0 )
          v36 = (unsigned int *)(*v35 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            v38 = v34;
            j_j_j_j__ZdlPv_9(v39);
            v34 = v38;
        v35 += 2;
      while ( v35 != (_DWORD *)HIDWORD(v33) );
    if ( (_DWORD)v33 )
      operator delete((void *)v33);
    v40 = *(_QWORD *)&v50;
    if ( v50 != v51 )
        v43 = (int *)(*(_DWORD *)v40 - 12);
        if ( v43 != &dword_28898C0 )
          v41 = (unsigned int *)(*(_DWORD *)v40 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        LODWORD(v40) = v40 + 8;
      while ( (_DWORD)v40 != HIDWORD(v40) );
      LODWORD(v40) = v50;
    if ( (_DWORD)v40 )
      operator delete((void *)v40);
    v2 = v49 | 1;
    goto LABEL_81;
  return v2;
}


void __fastcall WorldTemplatesScreenController::_registerEventHandlers(WorldTemplatesScreenController *this)
{
  WorldTemplatesScreenController::_registerEventHandlers(this);
}
