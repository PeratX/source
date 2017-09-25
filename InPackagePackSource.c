

void __fastcall InPackagePackSource::~InPackagePackSource(InPackagePackSource *this)
{
  InPackagePackSource *v1; // r4@1
  Pack **v2; // r5@1 OVERLAPPED
  Pack **v3; // r6@1 OVERLAPPED
  Pack *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26EABF4;
  *(_QWORD *)&v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = Pack::~Pack(*v2);
        operator delete((void *)v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (Pack **)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


RakNet *__fastcall InPackagePackSource::load(int a1, int a2, void *a3, IContentKeyProvider *a4)
{
  int v4; // r6@1
  int v5; // r11@1
  IContentKeyProvider *v6; // r9@1
  void *v7; // r7@1
  int v8; // r4@1
  unsigned int v9; // r0@1
  int v10; // r5@3
  void *v11; // r4@3
  void *v12; // r0@5
  int v13; // r4@5
  int v14; // r0@5
  int v15; // r10@5
  void *v16; // r2@5
  signed int v17; // r0@5
  int v18; // r1@5
  unsigned int v19; // r7@5
  void *v20; // r0@8
  int v21; // r6@8
  int v22; // r0@8
  int v23; // r9@8
  void *v24; // r2@8
  signed int v25; // r0@8
  int v26; // r1@8
  unsigned int v27; // r7@8
  void *v28; // r0@11
  int v29; // r6@11
  int v30; // r0@11
  int v31; // r11@11
  void *v32; // r2@11
  signed int v33; // r0@11
  int v34; // r1@11
  unsigned int v35; // r7@11
  double v36; // r0@14
  void *v37; // r5@14
  void *v38; // r7@14
  char *v39; // r1@15
  unsigned int *v40; // r2@16
  signed int v41; // r6@18
  char *v42; // r4@22
  int *v43; // r0@23
  void *v44; // r5@28
  void *v45; // r7@28
  char *v46; // r1@29
  unsigned int *v47; // r2@30
  signed int v48; // r6@32
  char *v49; // r4@36
  int *v50; // r0@37
  void *v51; // r5@42
  void *v52; // r7@42
  char *v53; // r1@43
  int (**v54)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@43
  unsigned int *v55; // r2@44
  signed int v56; // r6@46
  char *v57; // r4@50
  int (**v58)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@50
  int *v59; // r0@51
  void *v60; // r5@56
  void *v61; // r7@56
  char *v62; // r1@57
  int (**v63)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@57
  unsigned int *v64; // r2@58
  signed int v65; // r6@60
  char *v66; // r4@64
  int (**v67)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@64
  int *v68; // r0@65
  void *v69; // r12@70
  char *v70; // r1@71
  _DWORD *v71; // r5@71
  unsigned int *v72; // r2@72
  signed int v73; // r7@74
  void *v74; // r7@78
  char *v75; // r4@78
  int *v76; // r0@79
  int v77; // r11@83
  _DWORD *v78; // r12@83
  void *v79; // r0@83
  void *v80; // r0@84
  _DWORD *v81; // r5@86
  unsigned int *v82; // r2@87
  signed int v83; // r1@89
  _DWORD *v84; // r4@93
  int *v85; // r0@94
  _DWORD *v86; // r12@98
  void *v87; // r0@98
  void *v88; // r0@99
  _DWORD *v89; // r5@101
  unsigned int *v90; // r2@102
  signed int v91; // r1@104
  _DWORD *v92; // r4@108
  int *v93; // r0@109
  void *v94; // r0@113
  void *v95; // r0@114
  void *v96; // r0@115
  void *v97; // r0@116
  void *v98; // r0@117
  void *v99; // r0@118
  void *v100; // r0@119
  void *v101; // r0@120
  void *v102; // r0@121
  void *v103; // r0@122
  unsigned int v104; // r8@123
  unsigned int v105; // r5@123
  int v106; // r0@123
  int v107; // r6@124
  int v108; // r7@124
  bool v109; // zf@125
  int v110; // r4@128
  int v111; // r11@130
  int v112; // r10@131
  void *v113; // r5@131
  void *v114; // r6@131
  unsigned int *v115; // r2@133
  signed int v116; // r1@135
  int *v117; // r0@141
  RakNet *result; // r0@150
  int v119; // r0@154
  bool v120; // zf@154
  PackReport *v121; // r7@157
  unsigned int *v122; // r2@158
  signed int v123; // r1@160
  unsigned int *v124; // r2@162
  signed int v125; // r1@164
  unsigned int *v126; // r2@166
  signed int v127; // r1@168
  unsigned int *v128; // r2@170
  signed int v129; // r1@172
  unsigned int *v130; // r2@174
  signed int v131; // r1@176
  unsigned int *v132; // r2@178
  signed int v133; // r1@180
  unsigned int *v134; // r2@182
  signed int v135; // r1@184
  unsigned int *v136; // r2@186
  signed int v137; // r1@188
  unsigned int *v138; // r2@190
  signed int v139; // r1@192
  unsigned int *v140; // r2@194
  signed int v141; // r1@196
  unsigned int *v142; // r2@198
  signed int v143; // r1@200
  unsigned int *v144; // r2@202
  signed int v145; // r1@204
  unsigned int *v146; // r2@206
  signed int v147; // r1@208
  unsigned int *v148; // r2@210
  signed int v149; // r1@212
  _DWORD *v150; // r4@219
  _DWORD *v151; // r4@225
  unsigned int *v152; // r2@266
  signed int v153; // r1@268
  unsigned int *v154; // r2@270
  signed int v155; // r1@272
  unsigned int *v156; // r2@282
  signed int v157; // r1@284
  unsigned int *v158; // r2@286
  signed int v159; // r1@288
  unsigned int *v160; // r2@290
  signed int v161; // r1@292
  unsigned int *v162; // r2@294
  signed int v163; // r1@296
  PackReport *v164; // r4@314
  int v165; // r7@316
  char *v166; // r11@316
  size_t v167; // r0@316
  size_t v168; // r6@316
  int v169; // r0@317
  unsigned int v170; // r1@317
  signed int v171; // r7@318
  int v172; // r0@324
  char *v173; // r0@325
  void *v174; // r0@326
  int v175; // r6@328
  signed int v176; // r0@328
  int v177; // r0@330
  int v178; // r1@331
  int v179; // r0@331
  _DWORD *v180; // r0@336
  char *v181; // r6@337
  int v182; // r1@337
  int v183; // r2@337
  int v184; // r3@337
  __int64 v185; // r0@339
  Pack *v186; // r0@342
  int *v187; // r0@344
  void *v188; // r0@345
  void *v189; // r0@346
  void *v190; // r0@347
  char *v191; // r0@352
  char *v192; // r0@353
  int v193; // [sp+24h] [bp-634h]@8
  void *v194; // [sp+28h] [bp-630h]@5
  IContentKeyProvider *v195; // [sp+2Ch] [bp-62Ch]@8
  int v196; // [sp+34h] [bp-624h]@11
  void *ptr; // [sp+38h] [bp-620h]@14
  _DWORD *v198; // [sp+3Ch] [bp-61Ch]@11
  _DWORD *v199; // [sp+40h] [bp-618h]@8
  Pack *v200; // [sp+44h] [bp-614h]@339
  int v201; // [sp+48h] [bp-610h]@337
  int v202; // [sp+4Ch] [bp-60Ch]@337
  int v203; // [sp+50h] [bp-608h]@337
  int v204; // [sp+54h] [bp-604h]@337
  int v205; // [sp+58h] [bp-600h]@337
  int v206; // [sp+60h] [bp-5F8h]@294
  int v207; // [sp+64h] [bp-5F4h]@290
  int v208; // [sp+68h] [bp-5F0h]@286
  char v209; // [sp+70h] [bp-5E8h]@337
  PackManifest *v210; // [sp+78h] [bp-5E0h]@336
  _DWORD *v211; // [sp+7Ch] [bp-5DCh]@336
  int v212; // [sp+80h] [bp-5D8h]@331
  int v213; // [sp+84h] [bp-5D4h]@328
  char v214; // [sp+88h] [bp-5D0h]@157
  char *v215; // [sp+F0h] [bp-568h]@328
  char *v216; // [sp+F4h] [bp-564h]@266
  int v217; // [sp+F8h] [bp-560h]@328
  int v218; // [sp+FCh] [bp-55Ch]@282
  char *s; // [sp+100h] [bp-558h]@270
  int v220; // [sp+114h] [bp-544h]@11
  int v221; // [sp+118h] [bp-540h]@11
  char v222; // [sp+11Ch] [bp-53Ch]@11
  int v223; // [sp+120h] [bp-538h]@11
  char v224; // [sp+124h] [bp-534h]@11
  char v225; // [sp+128h] [bp-530h]@11
  int v226; // [sp+12Ch] [bp-52Ch]@8
  int v227; // [sp+130h] [bp-528h]@8
  char v228; // [sp+134h] [bp-524h]@8
  int v229; // [sp+138h] [bp-520h]@8
  char v230; // [sp+13Ch] [bp-51Ch]@8
  char v231; // [sp+140h] [bp-518h]@8
  int v232; // [sp+144h] [bp-514h]@5
  int v233; // [sp+14Ch] [bp-50Ch]@5
  int v234; // [sp+154h] [bp-504h]@5
  int v235; // [sp+15Ch] [bp-4FCh]@5
  int v236; // [sp+164h] [bp-4F4h]@5
  int v237; // [sp+168h] [bp-4F0h]@5
  char v238; // [sp+16Ch] [bp-4ECh]@5
  int v239; // [sp+170h] [bp-4E8h]@5
  char v240; // [sp+174h] [bp-4E4h]@5
  int v241; // [sp+178h] [bp-4E0h]@5
  char v242; // [sp+17Ch] [bp-4DCh]@5
  int v243; // [sp+180h] [bp-4D8h]@5
  char v244; // [sp+184h] [bp-4D4h]@5
  int v245; // [sp+188h] [bp-4D0h]@5
  char v246; // [sp+18Ch] [bp-4CCh]@5
  int v247; // [sp+190h] [bp-4C8h]@5
  char v248; // [sp+194h] [bp-4C4h]@5
  int v249; // [sp+198h] [bp-4C0h]@5
  char v250; // [sp+19Ch] [bp-4BCh]@5
  int v251; // [sp+1A0h] [bp-4B8h]@5
  char v252; // [sp+1A4h] [bp-4B4h]@5
  int v253; // [sp+1A8h] [bp-4B0h]@5
  char v254; // [sp+1ACh] [bp-4ACh]@5
  int v255; // [sp+1B0h] [bp-4A8h]@5
  char v256; // [sp+1B4h] [bp-4A4h]@5
  char v257; // [sp+1B8h] [bp-4A0h]@5
  void *v258; // [sp+1BCh] [bp-49Ch]@5
  void *v259; // [sp+1C0h] [bp-498h]@5
  int v260; // [sp+1C4h] [bp-494h]@5
  char v261; // [sp+1C8h] [bp-490h]@5
  void *v262; // [sp+1CCh] [bp-48Ch]@5
  void *v263; // [sp+1D0h] [bp-488h]@5
  char *v264; // [sp+1D4h] [bp-484h]@5
  char v265; // [sp+1D8h] [bp-480h]@8
  void *v266; // [sp+1DCh] [bp-47Ch]@8
  void *v267; // [sp+1E0h] [bp-478h]@8
  char *v268; // [sp+1E4h] [bp-474h]@8
  char v269; // [sp+1E8h] [bp-470h]@11
  void *v270; // [sp+1ECh] [bp-46Ch]@11
  void *v271; // [sp+1F0h] [bp-468h]@11
  char *v272; // [sp+1F4h] [bp-464h]@11
  void *v273; // [sp+1F8h] [bp-460h]@14
  unsigned int v274; // [sp+1FCh] [bp-45Ch]@123
  int v275; // [sp+200h] [bp-458h]@130
  int v276; // [sp+204h] [bp-454h]@147
  int v277; // [sp+210h] [bp-448h]@148
  char v278; // [sp+224h] [bp-434h]@15
  unsigned int v279; // [sp+228h] [bp-430h]@316
  char v280; // [sp+22Ch] [bp-42Ch]@316
  int v281; // [sp+62Ch] [bp-2Ch]@316
  RakNet *v282; // [sp+630h] [bp-28h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v282 = _stack_chk_guard;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v8 = a1 + 16;
  *(_DWORD *)(a1 + 20) = 0;
  v9 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v8 - 12) = v9;
  if ( v9 == 1 )
  {
    *(_DWORD *)(v4 + 24) = 0;
    v11 = (void *)(v4 + 24);
  }
  else
    if ( v9 >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)v4 = v11;
  if ( !*(_BYTE *)(v5 + 5) )
    v257 = 3;
    v260 = 0;
    v258 = 0;
    v259 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<InPackagePackSource::PackMetaData const*,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>,InPackagePackSource::PackMetaData*>(
                     0,
                     0);
    sub_21E94B4((void **)&v236, "resource_packs/vanilla");
    sub_21E8AF4(&v237, &v236);
    v238 = 1;
    v239 = 1;
    v240 = 1;
    sub_21E94B4((void **)&v235, "resource_packs/vanilla_vr");
    sub_21E8AF4(&v241, &v235);
    v242 = 1;
    v243 = 1;
    v244 = 1;
    sub_21E94B4((void **)&v234, "resource_packs/vanilla_music");
    sub_21E8AF4(&v245, &v234);
    v246 = 1;
    v247 = 1;
    v248 = 0;
    sub_21E94B4((void **)&v233, "resource_packs/vanilla_base");
    sub_21E8AF4(&v249, &v233);
    v250 = 1;
    v251 = 1;
    v252 = 1;
    sub_21E94B4((void **)&v232, "resource_packs/vanilla_loading_screens");
    sub_21E8AF4(&v253, &v232);
    v194 = v7;
    v254 = 1;
    v255 = 1;
    v256 = 1;
    v12 = operator new(0x50u);
    v13 = (int)v12;
    v14 = std::__uninitialized_copy<false>::__uninit_copy<InPackagePackSource::PackMetaData const*,InPackagePackSource::PackMetaData*>(
            (int)&v237,
            (int)&v257,
            (int)v12);
    v15 = v14;
    v16 = 0;
    v261 = 1;
    v17 = v14 - v13;
    v18 = v13;
    v262 = 0;
    v263 = 0;
    v19 = v17 >> 4;
    v264 = 0;
    if ( v17 >> 4 )
    {
      if ( v19 >= 0x10000000 )
        sub_21E57F4();
      v16 = operator new(v17);
      v18 = v13;
    }
    v199 = (_DWORD *)v18;
    v262 = v16;
    v263 = v16;
    v264 = (char *)v16 + 16 * v19;
    v263 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<InPackagePackSource::PackMetaData const*,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>,InPackagePackSource::PackMetaData*>(
                     v18,
                     v15,
                     (int)v16);
    sub_21E94B4((void **)&v226, "behavior_packs/vanilla");
    sub_21E8AF4(&v227, &v226);
    v195 = v6;
    v228 = 1;
    v229 = 1;
    v193 = v4;
    v230 = 1;
    v20 = operator new(0x10u);
    v21 = (int)v20;
    v22 = std::__uninitialized_copy<false>::__uninit_copy<InPackagePackSource::PackMetaData const*,InPackagePackSource::PackMetaData*>(
            (int)&v227,
            (int)&v231,
            (int)v20);
    v23 = v22;
    v24 = 0;
    v265 = 2;
    v25 = v22 - v21;
    v26 = v21;
    v266 = 0;
    v267 = 0;
    v27 = v25 >> 4;
    v268 = 0;
    if ( v25 >> 4 )
      if ( v27 >= 0x10000000 )
      v24 = operator new(v25);
      v26 = v21;
    v198 = (_DWORD *)v26;
    v266 = v24;
    v267 = v24;
    v268 = (char *)v24 + 16 * v27;
    v267 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<InPackagePackSource::PackMetaData const*,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>,InPackagePackSource::PackMetaData*>(
                     v26,
                     v23,
                     (int)v24);
    sub_21E94B4((void **)&v220, "skin_packs/vanilla");
    sub_21E8AF4(&v221, &v220);
    v222 = 0;
    v223 = 1;
    v196 = v5;
    v224 = 0;
    v28 = operator new(0x10u);
    v29 = (int)v28;
    v30 = std::__uninitialized_copy<false>::__uninit_copy<InPackagePackSource::PackMetaData const*,InPackagePackSource::PackMetaData*>(
            (int)&v221,
            (int)&v225,
            (int)v28);
    v31 = v30;
    v32 = 0;
    v269 = 5;
    v33 = v30 - v29;
    v34 = v29;
    v270 = 0;
    v271 = 0;
    v35 = v33 >> 4;
    v272 = 0;
    if ( v33 >> 4 )
      if ( v35 >= 0x10000000 )
      v32 = operator new(v33);
      v34 = v29;
    ptr = (void *)v34;
    v270 = v32;
    v271 = v32;
    v272 = (char *)v32 + 16 * v35;
    v271 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<InPackagePackSource::PackMetaData const*,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>,InPackagePackSource::PackMetaData*>(
                     v34,
                     v31,
                     (int)v32);
    LODWORD(v36) = &v273;
    std::_Hashtable<PackType,std::pair<PackType const,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>,std::allocator<std::pair<PackType const,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>>>,std::__detail::_Select1st,std::equal_to<PackType>,std::hash<PackType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<PackType const,std::vector<InPackagePackSource::PackMetaData,std::allocator<InPackagePackSource::PackMetaData>>> const*>(
      v36,
      &v273,
      0);
    v38 = v271;
    v37 = v270;
    if ( v270 != v271 )
      v39 = &v278;
      do
      {
        v43 = (int *)(*(_DWORD *)v37 - 12);
        if ( v43 != &dword_28898C0 )
        {
          v40 = (unsigned int *)(*(_DWORD *)v37 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          }
          else
            v41 = (*v40)--;
          if ( v41 <= 0 )
            v42 = v39;
            j_j_j_j__ZdlPv_9(v43);
            v39 = v42;
        }
        v37 = (char *)v37 + 16;
      }
      while ( v37 != v38 );
      v37 = v270;
    if ( v37 )
      operator delete(v37);
    v45 = v267;
    v44 = v266;
    if ( v266 != v267 )
      v46 = &v278;
        v50 = (int *)(*(_DWORD *)v44 - 12);
        if ( v50 != &dword_28898C0 )
          v47 = (unsigned int *)(*(_DWORD *)v44 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            v49 = v46;
            j_j_j_j__ZdlPv_9(v50);
            v46 = v49;
        v44 = (char *)v44 + 16;
      while ( v44 != v45 );
      v44 = v266;
    if ( v44 )
      operator delete(v44);
    v52 = v263;
    v51 = v262;
    if ( v262 != v263 )
      v53 = &v278;
      v54 = &pthread_create;
        v59 = (int *)(*(_DWORD *)v51 - 12);
        if ( v59 != &dword_28898C0 )
          v55 = (unsigned int *)(*(_DWORD *)v51 - 4);
          if ( v54 )
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            v57 = v53;
            v58 = v54;
            j_j_j_j__ZdlPv_9(v59);
            v54 = v58;
            v53 = v57;
        v51 = (char *)v51 + 16;
      while ( v51 != v52 );
      v51 = v262;
    if ( v51 )
      operator delete(v51);
    v61 = v259;
    v60 = v258;
    if ( v258 != v259 )
      v62 = &v278;
      v63 = &pthread_create;
        v68 = (int *)(*(_DWORD *)v60 - 12);
        if ( v68 != &dword_28898C0 )
          v64 = (unsigned int *)(*(_DWORD *)v60 - 4);
          if ( v63 )
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            v66 = v62;
            v67 = v63;
            j_j_j_j__ZdlPv_9(v68);
            v63 = v67;
            v62 = v66;
        v60 = (char *)v60 + 16;
      while ( v60 != v61 );
      v60 = v258;
    if ( v60 )
      operator delete(v60);
    v69 = ptr;
    if ( ptr != (void *)v31 )
      v70 = &v278;
      v71 = ptr;
        v76 = (int *)(*v71 - 12);
        if ( v76 != &dword_28898C0 )
          v72 = (unsigned int *)(*v71 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            v74 = v69;
            v75 = v70;
            j_j_j_j__ZdlPv_9(v76);
            v70 = v75;
            v69 = v74;
        v71 += 4;
      while ( v71 != (_DWORD *)v31 );
    if ( v69 )
      operator delete(v69);
    v77 = v196;
    v78 = v198;
    v79 = (void *)(v221 - 12);
    if ( (int *)(v221 - 12) != &dword_28898C0 )
      v122 = (unsigned int *)(v221 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
      else
        v123 = (*v122)--;
      if ( v123 <= 0 )
        j_j_j_j__ZdlPv_9(v79);
        v78 = v198;
    v80 = (void *)(v220 - 12);
    if ( (int *)(v220 - 12) != &dword_28898C0 )
      v124 = (unsigned int *)(v220 - 4);
          v125 = __ldrex(v124);
        while ( __strex(v125 - 1, v124) );
        v125 = (*v124)--;
      if ( v125 <= 0 )
        v150 = v78;
        j_j_j_j__ZdlPv_9(v80);
        v78 = v150;
    if ( v78 != (_DWORD *)v23 )
      v81 = v78;
        v85 = (int *)(*v81 - 12);
        if ( v85 != &dword_28898C0 )
          v82 = (unsigned int *)(*v81 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            v84 = v78;
            j_j_j_j__ZdlPv_9(v85);
            v78 = v84;
        v81 += 4;
      while ( v81 != (_DWORD *)v23 );
    if ( v78 )
      operator delete(v78);
    v86 = v199;
    v87 = (void *)(v227 - 12);
    if ( (int *)(v227 - 12) != &dword_28898C0 )
      v126 = (unsigned int *)(v227 - 4);
          v127 = __ldrex(v126);
        while ( __strex(v127 - 1, v126) );
        v127 = (*v126)--;
      if ( v127 <= 0 )
        j_j_j_j__ZdlPv_9(v87);
        v86 = v199;
    v88 = (void *)(v226 - 12);
    if ( (int *)(v226 - 12) != &dword_28898C0 )
      v128 = (unsigned int *)(v226 - 4);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 <= 0 )
        v151 = v86;
        j_j_j_j__ZdlPv_9(v88);
        v86 = v151;
    if ( v86 != (_DWORD *)v15 )
      v89 = v86;
        v93 = (int *)(*v89 - 12);
        if ( v93 != &dword_28898C0 )
          v90 = (unsigned int *)(*v89 - 4);
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
            v91 = (*v90)--;
          if ( v91 <= 0 )
            v92 = v86;
            j_j_j_j__ZdlPv_9(v93);
            v86 = v92;
        v89 += 4;
      while ( v89 != (_DWORD *)v15 );
    if ( v86 )
      operator delete(v86);
    v94 = (void *)(v253 - 12);
    if ( (int *)(v253 - 12) != &dword_28898C0 )
      v130 = (unsigned int *)(v253 - 4);
          v131 = __ldrex(v130);
        while ( __strex(v131 - 1, v130) );
        v131 = (*v130)--;
      if ( v131 <= 0 )
        j_j_j_j__ZdlPv_9(v94);
    v95 = (void *)(v249 - 12);
    if ( (int *)(v249 - 12) != &dword_28898C0 )
      v132 = (unsigned int *)(v249 - 4);
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
        v133 = (*v132)--;
      if ( v133 <= 0 )
        j_j_j_j__ZdlPv_9(v95);
    v96 = (void *)(v245 - 12);
    if ( (int *)(v245 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v245 - 4);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v96);
    v97 = (void *)(v241 - 12);
    if ( (int *)(v241 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v241 - 4);
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v97);
    v98 = (void *)(v237 - 12);
    if ( (int *)(v237 - 12) != &dword_28898C0 )
      v138 = (unsigned int *)(v237 - 4);
          v139 = __ldrex(v138);
        while ( __strex(v139 - 1, v138) );
        v139 = (*v138)--;
      if ( v139 <= 0 )
        j_j_j_j__ZdlPv_9(v98);
    v99 = (void *)(v232 - 12);
    if ( (int *)(v232 - 12) != &dword_28898C0 )
      v140 = (unsigned int *)(v232 - 4);
          v141 = __ldrex(v140);
        while ( __strex(v141 - 1, v140) );
        v141 = (*v140)--;
      if ( v141 <= 0 )
        j_j_j_j__ZdlPv_9(v99);
    v100 = (void *)(v233 - 12);
    if ( (int *)(v233 - 12) != &dword_28898C0 )
      v142 = (unsigned int *)(v233 - 4);
          v143 = __ldrex(v142);
        while ( __strex(v143 - 1, v142) );
        v143 = (*v142)--;
      if ( v143 <= 0 )
        j_j_j_j__ZdlPv_9(v100);
    v101 = (void *)(v234 - 12);
    if ( (int *)(v234 - 12) != &dword_28898C0 )
      v144 = (unsigned int *)(v234 - 4);
          v145 = __ldrex(v144);
        while ( __strex(v145 - 1, v144) );
        v145 = (*v144)--;
      if ( v145 <= 0 )
        j_j_j_j__ZdlPv_9(v101);
    v102 = (void *)(v235 - 12);
    if ( (int *)(v235 - 12) != &dword_28898C0 )
      v146 = (unsigned int *)(v235 - 4);
          v147 = __ldrex(v146);
        while ( __strex(v147 - 1, v146) );
        v147 = (*v146)--;
      if ( v147 <= 0 )
        j_j_j_j__ZdlPv_9(v102);
    v103 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v148 = (unsigned int *)(v236 - 4);
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
        v149 = (*v148)--;
      if ( v149 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    v104 = v274;
    v105 = *(_BYTE *)(v196 + 4);
    v106 = *((_DWORD *)v273 + v105 % v274);
    if ( v106 )
      v107 = *(_DWORD *)v106;
      v108 = *(_DWORD *)(*(_DWORD *)v106 + 20);
      while ( 1 )
        v109 = v108 == v105;
        if ( v108 == v105 )
          v109 = v105 == *(_BYTE *)(v107 + 4);
        if ( v109 )
          break;
        v110 = *(_DWORD *)v107;
        if ( *(_DWORD *)v107 )
          v108 = *(_DWORD *)(v110 + 20);
          v106 = v107;
          v107 = *(_DWORD *)v107;
          if ( *(_DWORD *)(v110 + 20) % v274 == v105 % v274 )
            continue;
        goto LABEL_130;
      if ( v106 )
        v119 = *(_DWORD *)v106;
        v120 = v119 == 0;
        if ( v119 )
          v104 = *(_QWORD *)(v119 + 8);
          v198 = (_DWORD *)(*(_QWORD *)(v119 + 8) >> 32);
          v120 = v104 == (_DWORD)v198;
        if ( !v120 )
          v121 = (PackReport *)&v214;
          do
            sub_21E8AF4((int *)&s, (int *)v104);
            v164 = v121;
            if ( *(_BYTE *)(v104 + 12) )
            {
              if ( *(_BYTE *)(v77 + 6) )
              {
                v165 = v77;
                v166 = s;
                v279 = 1023;
                v280 = 0;
                v281 = 0;
                v167 = strlen(s);
                v168 = v167;
                if ( v167 < 0x400 )
                {
                  if ( v167 )
                    _aeabi_memcpy(&v280, v166, v167);
                  *((_BYTE *)&v279 + v168 + 4) = 0;
                  v170 = v279;
                  v169 = v281 + v168;
                }
                else
                  v169 = 0;
                  v170 = 1023;
                  v280 = 0;
                v77 = v165;
                v281 = v169;
                if ( v169 + 4 <= v170 )
                  v173 = (char *)&v279 + v169;
                  *((_DWORD *)v173 + 1) = 1885960750;
                  v173[8] = 0;
                  v172 = v281 + 4;
                  v172 = 0;
                v281 = v172;
                sub_21E94B4((void **)&v218, &v280);
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  (int *)&s,
                  &v218);
                v174 = (void *)(v218 - 12);
                if ( (int *)(v218 - 12) != &dword_28898C0 )
                  v156 = (unsigned int *)(v218 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v157 = __ldrex(v156);
                    while ( __strex(v157 - 1, v156) );
                  }
                  else
                    v157 = (*v156)--;
                  if ( v157 <= 0 )
                    j_j_j_j__ZdlPv_9(v174);
                v171 = 0;
              }
              else
                v171 = 1;
            }
            else
              v171 = 1;
            sub_21E8AF4((int *)&v215, (int *)&s);
            v216 = v215;
            v215 = (char *)&unk_28898CC;
            v217 = 1;
            PackReport::PackReport((int)v164);
            PackAccessStrategyFactory::create(
              (PackAccessStrategyFactory *)&v213,
              (ResourceLocation *)&v216,
              v195,
              v164,
              1);
            v175 = v213;
            v176 = v213;
            if ( v213 )
              v176 = 1;
            v177 = v176 | v171;
            v121 = v164;
            if ( !v177 )
              EntityInteraction::setInteractText((int *)&v216, (int *)v104);
              PackAccessStrategyFactory::create(
                (PackAccessStrategyFactory *)&v212,
                (ResourceLocation *)&v216,
                v195,
                v164,
                1);
              v178 = v212;
              v212 = 0;
              v179 = v213;
              v213 = v178;
              if ( v179 )
                (*(void (**)(void))(*(_DWORD *)v179 + 4))();
                if ( v212 )
                  (*(void (**)(void))(*(_DWORD *)v212 + 4))();
              v175 = v213;
            if ( v175 )
              v180 = operator new(0xCu);
              *v180 = 0;
              v180[1] = 0;
              v180[2] = 0;
              v211 = v180;
              PackManifestFactory::create(&v210, v194, v175, (int)&v216, (int)v164, (int)v180);
              if ( v210 )
                v181 = PackManifest::getIdentity(v210);
                v182 = *((_DWORD *)v181 + 1);
                v183 = *((_DWORD *)v181 + 2);
                v184 = *((_DWORD *)v181 + 3);
                v201 = *(_DWORD *)v181;
                v202 = v182;
                v203 = v183;
                v204 = v184;
                SemVersion::SemVersion((int)&v205, (int)(v181 + 16));
                v209 = v181[40];
                PackManifest::setPackOrigin((int)v210, 1);
                PackManifest::setPackCategory((int)v210, *(_DWORD *)(v104 + 8));
                PackManifest::setHidden(v210, *(_BYTE *)(v104 + 4));
                if ( PackManifest::getPackType(v210) == *(_BYTE *)(v77 + 4) )
                  if ( !PackReport::hasErrors(v164) )
                    std::make_unique<Pack,std::unique_ptr<PackManifest,std::default_delete<PackManifest>>,std::unique_ptr<PackAccessStrategy,std::default_delete<PackAccessStrategy>>,std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>>(
                      &v200,
                      (int *)&v210,
                      &v213,
                      (int *)&v211);
                    v185 = *(_QWORD *)(v77 + 12);
                    if ( (_DWORD)v185 == HIDWORD(v185) )
                    {
                      std::vector<std::unique_ptr<Pack,std::default_delete<Pack>>,std::allocator<std::unique_ptr<Pack,std::default_delete<Pack>>>>::_M_emplace_back_aux<std::unique_ptr<Pack,std::default_delete<Pack>>>(
                        (_QWORD *)(v196 + 8),
                        (int *)&v200);
                      if ( v200 )
                      {
                        v186 = Pack::~Pack(v200);
                        operator delete((void *)v186);
                      }
                    }
                    else
                      HIDWORD(v185) = v200;
                      v200 = 0;
                      *(_DWORD *)v185 = HIDWORD(v185);
                      *(_DWORD *)(v77 + 12) = v185 + 4;
                    v200 = 0;
                  v187 = (int *)std::__detail::_Map_base<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                  v193,
                                  (int)&v201);
                  PackReport::operator=(v187, (int *)v164);
                v188 = (void *)(v208 - 12);
                if ( (int *)(v208 - 12) != &dword_28898C0 )
                  v158 = (unsigned int *)(v208 - 4);
                      v159 = __ldrex(v158);
                    while ( __strex(v159 - 1, v158) );
                    v121 = v164;
                    v159 = (*v158)--;
                  if ( v159 <= 0 )
                    j_j_j_j__ZdlPv_9(v188);
                v189 = (void *)(v207 - 12);
                if ( (int *)(v207 - 12) != &dword_28898C0 )
                  v160 = (unsigned int *)(v207 - 4);
                      v161 = __ldrex(v160);
                    while ( __strex(v161 - 1, v160) );
                    v161 = (*v160)--;
                  if ( v161 <= 0 )
                    j_j_j_j__ZdlPv_9(v189);
                v190 = (void *)(v206 - 12);
                if ( (int *)(v206 - 12) != &dword_28898C0 )
                  v162 = (unsigned int *)(v206 - 4);
                      v163 = __ldrex(v162);
                    while ( __strex(v163 - 1, v162) );
                    v163 = (*v162)--;
                  if ( v163 <= 0 )
                    j_j_j_j__ZdlPv_9(v190);
                if ( v210 )
                  (*(void (**)(void))(*(_DWORD *)v210 + 4))();
              std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr((void **)&v211);
              if ( v213 )
                (*(void (**)(void))(*(_DWORD *)v213 + 4))();
            PackReport::~PackReport(v121);
            v191 = v216 - 12;
            if ( (int *)(v216 - 12) != &dword_28898C0 )
              v152 = (unsigned int *)(v216 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v153 = __ldrex(v152);
                while ( __strex(v153 - 1, v152) );
                v153 = (*v152)--;
              if ( v153 <= 0 )
                j_j_j_j__ZdlPv_9(v191);
            v192 = s - 12;
            if ( (int *)(s - 12) != &dword_28898C0 )
              v154 = (unsigned int *)(s - 4);
                  v155 = __ldrex(v154);
                while ( __strex(v155 - 1, v154) );
                v155 = (*v154)--;
              if ( v155 <= 0 )
                j_j_j_j__ZdlPv_9(v192);
            v104 += 16;
          while ( (_DWORD *)v104 != v198 );
LABEL_130:
    *(_BYTE *)(v77 + 5) = 1;
    v111 = v275;
    if ( v275 )
        v112 = *(_DWORD *)v111;
        v113 = (void *)(*(_QWORD *)(v111 + 8) >> 32);
        v114 = (void *)*(_QWORD *)(v111 + 8);
        if ( v114 != v113 )
            v117 = (int *)(*(_DWORD *)v114 - 12);
            if ( v117 != &dword_28898C0 )
              v115 = (unsigned int *)(*(_DWORD *)v114 - 4);
                  v116 = __ldrex(v115);
                while ( __strex(v116 - 1, v115) );
                v116 = (*v115)--;
              if ( v116 <= 0 )
                j_j_j_j__ZdlPv_9(v117);
            v114 = (char *)v114 + 16;
          while ( v114 != v113 );
          v114 = *(void **)(v111 + 8);
        if ( v114 )
          operator delete(v114);
        operator delete((void *)v111);
        v111 = v112;
      while ( v112 );
    _aeabi_memclr4(v273, 4 * v274);
    v275 = 0;
    v276 = 0;
    if ( v273 && &v277 != v273 )
      operator delete(v273);
  result = (RakNet *)(_stack_chk_guard - v282);
  if ( _stack_chk_guard != v282 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall InPackagePackSource::InPackagePackSource(int result, char a2)
{
  *(_DWORD *)result = &off_26EABF4;
  *(_BYTE *)(result + 4) = a2;
  *(_BYTE *)(result + 5) = 0;
  *(_BYTE *)(result + 6) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


InPackagePackSource *__fastcall InPackagePackSource::~InPackagePackSource(InPackagePackSource *this)
{
  InPackagePackSource *v1; // r4@1
  Pack **v2; // r5@1 OVERLAPPED
  Pack **v3; // r6@1 OVERLAPPED
  Pack *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26EABF4;
  *(_QWORD *)&v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = Pack::~Pack(*v2);
        operator delete((void *)v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (Pack **)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall InPackagePackSource::~InPackagePackSource(InPackagePackSource *this)
{
  InPackagePackSource::~InPackagePackSource(this);
}


int __fastcall InPackagePackSource::forEachPack(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 8);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_21E5F48();
    v5 = *v2;
    ++v2;
  }
  return result;
}


int *__fastcall InPackagePackSource::PackMetaData::PackMetaData(int *a1, int *a2, char a3, int a4, char a5)
{
  int v5; // r4@1
  char v6; // r5@1
  int *result; // r0@1

  v5 = a4;
  v6 = a3;
  result = sub_21E8AF4(a1, a2);
  *((_BYTE *)result + 4) = v6;
  result[2] = v5;
  *((_BYTE *)result + 12) = a5;
  return result;
}


signed int __fastcall InPackagePackSource::getPackOrigin(InPackagePackSource *this)
{
  return 1;
}


int __fastcall InPackagePackSource::forEachPackConst(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 8);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_21E5F48();
    v5 = *v2;
    ++v2;
  }
  return result;
}


int __fastcall InPackagePackSource::setPrefersZips(int result, int a2)
{
  if ( a2 != *(_BYTE *)(result + 6) )
  {
    *(_BYTE *)(result + 6) = a2;
    *(_BYTE *)(result + 5) = 0;
  }
  return result;
}
