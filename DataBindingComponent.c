

DataBindingComponent::DataBinding *__fastcall DataBindingComponent::addCollectionDetailsBinding(int a1, int *a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r7@1
  int v7; // r8@1
  const char *v8; // r7@1
  size_t v9; // r0@1
  int i; // r1@1
  int v11; // t1@2
  __int64 v12; // r0@3
  int v14; // [sp+4h] [bp-6Ch]@1
  int v15; // [sp+8h] [bp-68h]@3
  void *v16; // [sp+Ch] [bp-64h]@1
  int v17; // [sp+10h] [bp-60h]@1
  int v18; // [sp+14h] [bp-5Ch]@1
  int v19; // [sp+18h] [bp-58h]@1
  char v20; // [sp+1Ch] [bp-54h]@1
  void *v21; // [sp+20h] [bp-50h]@1
  void *v22; // [sp+24h] [bp-4Ch]@1
  __int64 v23; // [sp+28h] [bp-48h]@1
  int v24; // [sp+30h] [bp-40h]@1
  int v25; // [sp+34h] [bp-3Ch]@1
  char v26; // [sp+38h] [bp-38h]@1
  __int64 v27; // [sp+3Ch] [bp-34h]@1
  int v28; // [sp+44h] [bp-2Ch]@1
  int v29; // [sp+48h] [bp-28h]@1
  int v30; // [sp+4Ch] [bp-24h]@1
  int v31; // [sp+50h] [bp-20h]@1
  char v32; // [sp+54h] [bp-1Ch]@1
  char v33; // [sp+55h] [bp-1Bh]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v16 = &unk_28898CC;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1;
  v21 = &unk_28898CC;
  v22 = &unk_28898CC;
  v23 = (unsigned int)&unk_28898CC;
  v24 = 0;
  v25 = 0;
  v26 = 1;
  v30 = 0;
  v28 = 0;
  v29 = 0;
  v27 = (unsigned int)&unk_28898CC;
  v31 = -1;
  v32 = 0;
  v33 = 0;
  v14 = 3;
  EntityInteraction::setInteractText((int *)&v22, a2);
  v8 = (const char *)*v6;
  v9 = strlen(v8);
  for ( i = -2128831035; v9; i = 16777619 * (i ^ v11) )
  {
    v11 = *v8++;
    --v9;
  }
  v29 = i;
  EntityInteraction::setInteractText((int *)&v23, v5);
  v15 = v7;
  v12 = *(_QWORD *)(v4 + 12);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>>::_M_emplace_back_aux<DataBindingComponent::DataBinding&>(
      (unsigned __int64 *)(v4 + 8),
      (const DataBindingComponent::DataBinding *)&v14);
  else
    DataBindingComponent::DataBinding::DataBinding(
      (DataBindingComponent::DataBinding *)v12,
    *(_DWORD *)(v4 + 12) += 84;
  return DataBindingComponent::DataBinding::~DataBinding((DataBindingComponent::DataBinding *)&v14);
}


void __fastcall DataBindingComponent::addGlobalBinding(DataBindingComponent *a1, unsigned __int64 *a2, const void **a3, int a4)
{
  DataBindingComponent::addGlobalBinding(a1, a2, a3, a4);
}


signed int __fastcall DataBindingComponent::_isCollectionSizeBinding(DataBindingComponent *this, const DataBindingComponent::DataBinding *a2)
{
  DataBindingComponent *v2; // r8@1
  char *v3; // r5@1
  const char *v4; // r6@3
  size_t v5; // r0@3
  int i; // r4@3
  int v7; // t1@4
  int v8; // r6@5
  char v9; // r0@5
  int v10; // r7@8
  GridComponent *v11; // r0@9
  _DWORD *v12; // r1@10
  size_t v13; // r2@10
  int v14; // r1@11
  signed int result; // r0@11
  bool v16; // zf@11
  int v17; // r6@18
  char v18; // r0@18
  int v19; // r5@21
  int v20; // r0@22

  v2 = this;
  v3 = (char *)a2 + 28;
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 7) - 12) )
    v3 = (char *)a2 + 8;
  v4 = *(const char **)v3;
  v5 = strlen(*(const char **)v3);
  for ( i = -2128831035; v5; i = 16777619 * (v7 ^ i) )
  {
    v7 = *v4++;
    --v5;
  }
  v8 = UIComponent::getOwner(v2);
  v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v9 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v10 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v8, type_id<UIComponent,GridComponent>(void)::id[0]) != 1 )
    goto LABEL_18;
  v11 = *(GridComponent **)(*(_DWORD *)(v8 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v8, v10));
  if ( !v11 )
  v12 = *(_DWORD **)GridComponent::getGridDimensionBinding(v11);
  v13 = *(_DWORD *)(*(_DWORD *)v3 - 12);
  if ( v13 != *(v12 - 3) )
    if ( i == -1041835502 )
      return 1;
  v14 = memcmp(*(const void **)v3, v12, v13);
  result = 1;
  v16 = i == -1041835502;
  if ( i != -1041835502 )
    v16 = v14 == 0;
  if ( !v16 )
LABEL_18:
    v17 = UIComponent::getOwner(v2);
    v18 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
    __dmb();
    if ( !(v18 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
    {
      type_id<UIComponent,CollectionComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
    }
    v19 = type_id<UIComponent,CollectionComponent>(void)::id[0];
    result = 0;
    if ( UIControl::_hasComponent((UIControl *)v17, type_id<UIComponent,CollectionComponent>(void)::id[0]) == 1 )
      v20 = UIControl::_getComponentIndex((UIControl *)v17, v19);
      if ( i == -757362809 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v17 + 108) + 4 * v20) )
          result = 1;
      }
  return result;
}


UIComponent *__fastcall DataBindingComponent::DataBindingComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6A30;
  _aeabi_memclr4((char *)v2 + 8, 37);
  return v2;
}


void __fastcall DataBindingComponent::~DataBindingComponent(DataBindingComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)DataBindingComponent::~DataBindingComponent(this);
  j_j_j__ZdlPv_3(v1);
}


int __fastcall DataBindingComponent::bindLowPriorityBinds(DataBindingComponent *this, ScreenController *a2, int a3)
{
  return j_j_j__ZN20DataBindingComponent5_bindER16ScreenControllerbRSt6vectorINS_11DataBindingESaIS3_EE(
           this,
           (int)a2,
           a3,
           (unsigned __int64 *)this + 1);
}


int __fastcall DataBindingComponent::setDirty(int result, bool a2)
{
  *(_BYTE *)(result + 44) = a2;
  return result;
}


void __fastcall DataBindingComponent::_updateCollectionBindingIndicies(DataBindingComponent *this)
{
  DataBindingComponent *v1; // r4@1
  DataBindingComponent *v2; // [sp+0h] [bp-18h]@1
  int v3; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = this;
  v3 = UIComponent::getOwner(this);
  sub_C2A144((int)&v2, (unsigned __int64 *)v2 + 1);
  sub_C2A144((int)&v2, (unsigned __int64 *)((char *)v1 + 20));
  sub_C2A144((int)&v2, (unsigned __int64 *)v1 + 4);
}


int __fastcall DataBindingComponent::~DataBindingComponent(DataBindingComponent *this)
{
  DataBindingComponent *v1; // r4@1
  DataBindingComponent::DataBinding *v2; // r0@1
  DataBindingComponent::DataBinding *v3; // r5@1
  DataBindingComponent::DataBinding *v4; // r0@6
  DataBindingComponent::DataBinding *v5; // r5@6
  DataBindingComponent::DataBinding *v6; // r0@11
  DataBindingComponent::DataBinding *v7; // r5@11

  v1 = this;
  *(_DWORD *)this = &off_26D6A30;
  v3 = (DataBindingComponent::DataBinding *)(*((_QWORD *)this + 4) >> 32);
  v2 = (DataBindingComponent::DataBinding *)*((_QWORD *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (DataBindingComponent::DataBinding *)((char *)DataBindingComponent::DataBinding::~DataBinding(v2) + 84);
    while ( v3 != v2 );
    v2 = (DataBindingComponent::DataBinding *)*((_DWORD *)v1 + 8);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (DataBindingComponent::DataBinding *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v4 = (DataBindingComponent::DataBinding *)*(_QWORD *)((char *)v1 + 20);
  if ( v4 != v5 )
      v4 = (DataBindingComponent::DataBinding *)((char *)DataBindingComponent::DataBinding::~DataBinding(v4) + 84);
    while ( v5 != v4 );
    v4 = (DataBindingComponent::DataBinding *)*((_DWORD *)v1 + 5);
  if ( v4 )
    operator delete((void *)v4);
  v7 = (DataBindingComponent::DataBinding *)(*((_QWORD *)v1 + 1) >> 32);
  v6 = (DataBindingComponent::DataBinding *)*((_QWORD *)v1 + 1);
  if ( v6 != v7 )
      v6 = (DataBindingComponent::DataBinding *)((char *)DataBindingComponent::DataBinding::~DataBinding(v6) + 84);
    while ( v7 != v6 );
    v6 = (DataBindingComponent::DataBinding *)*((_DWORD *)v1 + 2);
  if ( v6 )
    operator delete((void *)v6);
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


char *__fastcall DataBindingComponent::_getBindings(DataBindingComponent *this)
{
  return (char *)this + 8;
}


Json::Value *__fastcall DataBindingComponent::_updateCustomComponentsPostBinding(int a1, int a2, int a3, UIControl *this, int a5)
{
  UIControl *v5; // r10@1
  const char *v6; // r5@1
  int v7; // r11@1
  int v8; // r6@1
  Json::Value *v9; // r6@1
  const Json::Value *v10; // r0@3
  UIPropertyBag *v11; // r2@6
  __int64 v12; // r0@6
  int v13; // r0@7
  _BYTE *v14; // r1@8
  int v15; // r4@8
  int v16; // t1@9
  char v17; // r0@12
  int v18; // r5@15
  GridComponent *v19; // r7@16
  char v20; // r0@18
  int v21; // r5@21
  CollectionComponent *v22; // r9@22
  _BYTE *v23; // r0@25
  int v24; // r1@25
  _BYTE *v25; // r2@27
  unsigned __int64 v26; // kr00_8@30
  int v27; // r0@32
  int v28; // r5@32
  int v29; // r5@34
  int v30; // r1@36
  int v31; // r8@43
  char *v32; // r7@44
  int v33; // r4@44
  char *v34; // r11@46
  int v35; // r0@46
  char v36; // r0@53
  int v37; // r5@56
  SpriteComponent *v38; // r4@57
  char v39; // r0@66
  int v40; // r5@69
  FocusComponent *v41; // r4@70
  int v42; // r5@72
  Json::Value *v43; // r0@75
  Json::Value *v44; // r0@75
  char v46; // r0@82
  int v47; // r5@85
  UIComponent *v48; // r4@86
  int v49; // r5@92
  int v50; // r0@97
  const char *v51; // r5@97
  Json::Value *v52; // r6@97
  signed int v53; // r0@97
  Json::Value *v57; // r5@99
  char v61; // r0@110
  int v62; // r5@113
  int v63; // r5@114
  Json::Value *v64; // r4@115
  Json::Value *v65; // r4@117
  int v66; // r5@123
  __int64 v67; // kr08_8@127
  char *v68; // r1@128
  _DWORD *v69; // r4@128
  int (**v70)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@128
  unsigned int *v71; // r2@129
  signed int v72; // r5@131
  char *v73; // r5@135
  int (**v74)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@135
  int *v75; // r0@136
  char *v76; // r4@140
  char *v77; // r7@140
  unsigned int *v78; // r2@142
  signed int v79; // r1@144
  int *v80; // r0@150
  char *v81; // r4@156
  unsigned int *v82; // r2@157
  signed int v83; // r1@159
  int *v84; // r0@165
  void *v85; // r0@169
  _BYTE *v86; // r0@170
  const void **v87; // r4@170
  _BYTE *v88; // r0@171
  char *v89; // r0@176
  const void **v90; // r4@176
  const void **v91; // r7@176
  const void **v92; // r6@176
  const void **v93; // r10@176
  const void **v94; // r5@178
  size_t v95; // r2@179
  signed int v96; // r4@183
  char v97; // r0@187
  int v98; // r5@190
  ScrollViewComponent *v99; // r5@191
  int v100; // r0@192
  const char *v101; // r4@192
  Json::Value *v102; // r6@192
  char v103; // r1@193
  char v104; // r0@196
  int v105; // r5@199
  ToggleComponent *v106; // r4@200
  signed int v107; // r5@202
  char v108; // r0@206
  int v109; // r5@209
  UIComponent *v110; // r4@210
  unsigned int *v111; // r2@219
  signed int v112; // r1@221
  char *v113; // r0@227
  char v115; // r0@233
  int v116; // r5@236
  TextEditComponent *v117; // r4@237
  char v118; // r1@239
  char v119; // r0@240
  int v120; // r5@243
  SpriteComponent *v121; // r4@244
  char v122; // r0@248
  int v123; // r5@251
  int v124; // r5@252
  Json::Value *v125; // r4@253
  Json::Value *v126; // r4@255
  char v127; // r0@257
  int v128; // r5@260
  SpriteComponent *v129; // r4@261
  signed int v130; // r0@264
  char v134; // r0@272
  int v135; // r5@275
  SliderComponent *v136; // r4@276
  signed int v137; // r1@278
  signed int v138; // r5@280
  char v139; // r0@281
  int v140; // r5@284
  int v141; // r5@285
  Json::Value *v142; // r4@286
  Json::Value *v143; // r4@288
  char v144; // r0@290
  int v145; // r5@293
  SpriteComponent *v146; // r5@294
  char v148; // r0@303
  int v149; // r5@306
  TextComponent *v150; // r4@307
  char v152; // r0@316
  int v153; // r5@319
  int v154; // r5@320
  int v155; // r6@321
  const char *v156; // r4@321
  Json::Value *v157; // r6@321
  Json::Value *v158; // r4@323
  char v159; // r0@325
  int v160; // r5@328
  SliderComponent *v161; // r4@329
  signed int v162; // r0@330
  int v163; // r2@330
  int v164; // r3@330
  char v167; // r0@334
  int v168; // r5@337
  ToggleComponent *v169; // r4@338
  int v170; // r5@340
  char v171; // r0@341
  int v172; // r5@344
  SpriteComponent *v173; // r4@345
  _BYTE *v174; // r1@348
  char v175; // r0@349
  int v176; // r5@352
  InputComponent *v177; // r4@353
  int v178; // r5@355
  char v179; // r0@356
  int v180; // r5@359
  int v181; // r5@360
  Json::Value *v182; // r4@361
  Json::Value *v183; // r4@363
  signed int v184; // r1@367
  int v185; // r3@369
  int v186; // r7@369
  char v187; // r0@373
  int v188; // r5@376
  AnchoredOffsetComponent *v189; // r0@377
  char *v190; // r0@386
  unsigned int *v191; // r2@387
  signed int v192; // r1@389
  unsigned int *v193; // r2@424
  signed int v194; // r1@426
  char *v195; // r7@429
  char *v196; // r5@429
  size_t v197; // r2@429
  signed int v198; // r6@430
  const void **v199; // r0@432
  char *v200; // r5@432
  size_t v201; // r2@432
  void *v202; // r0@434
  signed int v203; // r5@442
  char *v204; // r0@442
  int v205; // r6@443
  void *v206; // r0@443
  char *v207; // r1@445
  char *v208; // r0@445
  char v209; // r0@451
  int v210; // r5@454
  FocusComponent *v211; // r5@455
  char v212; // r0@456
  int v213; // r5@459
  FocusComponent *v214; // r5@460
  Json::Value *v215; // r4@477
  char *v216; // r0@482
  void *v217; // r0@483
  char *v218; // r0@484
  char v219; // r0@490
  int v220; // r5@493
  SpriteComponent *v221; // r4@494
  __int16 v222; // r1@496
  signed int v223; // r6@503
  signed int v224; // r6@506
  void (__fastcall *v225)(int, int *); // r2@525
  unsigned int v226; // r1@526
  unsigned int *v227; // r0@526
  unsigned int v228; // r3@529
  unsigned int v229; // r7@530
  int v230; // r4@533
  unsigned int *v231; // r1@534
  unsigned int v232; // r0@536
  void (__fastcall *v233)(int, int *); // r2@540
  unsigned int v234; // r1@541
  unsigned int *v235; // r0@541
  unsigned int v236; // r3@544
  unsigned int v237; // r7@545
  unsigned int *v238; // r1@549
  unsigned int v239; // r0@551
  unsigned int *v240; // r5@565
  unsigned int v241; // r0@567
  unsigned int *v242; // r1@580
  signed int v243; // r0@582
  unsigned int *v244; // r2@584
  signed int v245; // r1@586
  unsigned int *v246; // r2@588
  signed int v247; // r1@590
  unsigned int *v248; // r2@592
  signed int v249; // r1@594
  unsigned int *v250; // r2@609
  signed int v251; // r1@611
  unsigned int *v252; // r2@613
  signed int v253; // r1@615
  unsigned int *v254; // r2@617
  signed int v255; // r1@619
  unsigned int *v256; // r2@621
  signed int v257; // r1@623
  int v258; // [sp+0h] [bp-160h]@0
  int v259; // [sp+4h] [bp-15Ch]@0
  int v260; // [sp+8h] [bp-158h]@0
  int v261; // [sp+Ch] [bp-154h]@0
  char *v262; // [sp+Ch] [bp-154h]@46
  int v263; // [sp+10h] [bp-150h]@0
  int v264; // [sp+10h] [bp-150h]@46
  int v265; // [sp+14h] [bp-14Ch]@39
  int v266; // [sp+18h] [bp-148h]@531
  int v267; // [sp+1Ch] [bp-144h]@525
  int v268; // [sp+20h] [bp-140h]@546
  int v269; // [sp+24h] [bp-13Ch]@540
  int v270; // [sp+28h] [bp-138h]@434
  void *v271; // [sp+2Ch] [bp-134h]@60
  char *v272; // [sp+30h] [bp-130h]@445
  char *v273; // [sp+38h] [bp-128h]@445
  signed int v274; // [sp+3Ch] [bp-124h]@445
  int v275; // [sp+40h] [bp-120h]@443
  int v276; // [sp+44h] [bp-11Ch]@443
  _BYTE *v277; // [sp+48h] [bp-118h]@348
  int v278; // [sp+4Ch] [bp-114h]@482
  int v279; // [sp+50h] [bp-110h]@482
  char *v280; // [sp+54h] [bp-10Ch]@482
  char *v281; // [sp+58h] [bp-108h]@482
  int v282; // [sp+5Ch] [bp-104h]@482
  void *s2; // [sp+60h] [bp-100h]@429
  void *s1; // [sp+68h] [bp-F8h]@247
  float v285; // [sp+6Ch] [bp-F4h]@308
  float v289; // [sp+7Ch] [bp-E4h]@295
  char *v293; // [sp+8Ch] [bp-D4h]@289
  char *v294; // [sp+90h] [bp-D0h]@256
  char v295; // [sp+94h] [bp-CCh]@321
  const char *v296; // [sp+98h] [bp-C8h]@321
  char *v297; // [sp+9Ch] [bp-C4h]@324
  char *v298; // [sp+A0h] [bp-C0h]@118
  char *v299; // [sp+A4h] [bp-BCh]@364
  int v300; // [sp+ACh] [bp-B4h]@44
  char *v301; // [sp+B0h] [bp-B0h]@44
  int v302; // [sp+B4h] [bp-ACh]@46
  char *v303; // [sp+B8h] [bp-A8h]@46
  const void **v304; // [sp+BCh] [bp-A4h]@39
  _BYTE *v305; // [sp+C0h] [bp-A0h]@39
  int v306; // [sp+C4h] [bp-9Ch]@39
  unsigned __int64 v307; // [sp+C8h] [bp-98h]@32
  char v308; // [sp+D0h] [bp-90h]@6
  char v309; // [sp+E0h] [bp-80h]@1
  char v310; // [sp+F0h] [bp-70h]@3
  int v311; // [sp+100h] [bp-60h]@1
  _BYTE *v312; // [sp+104h] [bp-5Ch]@1
  char v313; // [sp+108h] [bp-58h]@46
  char v314; // [sp+10Ch] [bp-54h]@364
  char v315; // [sp+110h] [bp-50h]@118
  char v316; // [sp+114h] [bp-4Ch]@324
  char v317; // [sp+118h] [bp-48h]@256
  char v318; // [sp+11Ch] [bp-44h]@289
  char v319; // [sp+120h] [bp-40h]@247
  char v320; // [sp+124h] [bp-3Ch]@348
  char v321; // [sp+128h] [bp-38h]@60
  char v322; // [sp+12Ch] [bp-34h]@128

  v5 = this;
  v6 = (const char *)a3;
  v311 = a2;
  v312 = (_BYTE *)a3;
  v7 = UIControl::getScreenAction(this, 0);
  v8 = UIControl::getPropertyBag(v5);
  Json::Value::Value(&v309, 0);
  v9 = (Json::Value *)(v8 + 8);
  if ( Json::Value::isNull(v9) || Json::Value::isObject(v9) != 1 )
  {
    Json::Value::Value((Json::Value *)&v310, (const Json::Value *)&v309);
  }
  else
    v10 = (const Json::Value *)Json::Value::operator[]((int)v9, v6);
    Json::Value::Value((Json::Value *)&v310, v10);
  Json::Value::~Value((Json::Value *)&v309);
  if ( !UiExpression::empty((UiExpression *)a5) )
    v11 = (UIPropertyBag *)UIControl::getPropertyBag(v5);
    LODWORD(v12) = &v308;
    HIDWORD(v12) = a5;
    UiExpression::evaluate(v12, v11);
    Json::Value::operator=((int)&v310, (const Json::Value *)&v308);
    Json::Value::~Value((Json::Value *)&v308);
  v13 = v311;
  if ( v311 )
    v14 = v312;
    v15 = -2128831035;
    do
    {
      v16 = *v14++;
      --v13;
      v15 = 16777619 * (v16 ^ v15);
    }
    while ( v13 );
  v17 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v17 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v18 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v19 = *(GridComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v18));
    v19 = 0;
  v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
  if ( !(v20 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
    type_id<UIComponent,CollectionComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
  v21 = type_id<UIComponent,CollectionComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,CollectionComponent>(void)::id[0]) == 1 )
    v22 = *(CollectionComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v21));
    v22 = 0;
  if ( v19 )
    v23 = *(_BYTE **)GridComponent::getGridDimensionBinding(v19);
    v24 = *((_DWORD *)v23 - 3);
    if ( v311 == v24 )
      if ( !v24 )
      {
LABEL_30:
        v26 = *(_QWORD *)GridComponent::getGridDimensions(v19);
        if ( UIControl::isVisibleInTree(v5) || !GridComponent::isLowMemoryMode(v19) )
        {
          if ( Json::Value::isNull((Json::Value *)&v310) || Json::Value::isArray((Json::Value *)&v310) != 1 )
          {
            v307 = v26;
            v27 = HIDWORD(v26);
            v28 = v26;
          }
          else
            v43 = (Json::Value *)Json::Value::operator[]((int)&v310, 0);
            v28 = Json::Value::asInt(v43, 0);
            v44 = (Json::Value *)Json::Value::operator[]((int)&v310, 1u);
            v27 = Json::Value::asInt(v44, 0);
            v307 = __PAIR__(v27, v28);
        }
        else
          v27 = 0;
          v28 = 0;
          v307 = 0LL;
        _ZF = (_DWORD)v26 == v28;
        if ( (_DWORD)v26 == v28 )
          _ZF = HIDWORD(v26) == v27;
        if ( !_ZF )
          GridComponent::setGridDimensions((int)v19, (int)&v307);
          GridComponent::refreshGridItems(v19);
          v46 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          __dmb();
          if ( !(v46 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          v47 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
            v48 = *(UIComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v47));
            v48 = 0;
          LayoutComponent::reinitialize(v48, (char *)&unk_262C121, 2);
          LayoutComponent::layout((int)v48, (int)&unk_262C123, 4, 0);
          (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 20))(v7, 8);
        return Json::Value::~Value((Json::Value *)&v310);
      }
      v25 = v312;
      while ( *v25 == *v23 )
        ++v25;
        ++v23;
        if ( !--v24 )
          goto LABEL_30;
    if ( v15 == -1041835502 )
      v29 = GridComponent::getMaximumGridItems(v19);
      if ( UIControl::isVisibleInTree(v5) || !GridComponent::isLowMemoryMode(v19) )
        if ( Json::Value::isNull((Json::Value *)&v310) )
          v30 = 0;
        else if ( Json::Value::isInt((Json::Value *)&v310) || Json::Value::isUInt((Json::Value *)&v310) == 1 )
          v30 = Json::Value::asInt((Json::Value *)&v310, 0);
      else
        v30 = 0;
      if ( v29 != v30 )
        GridComponent::setMaximumGridItems(v19, v30);
        GridComponent::refreshGridItems(v19);
        v108 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        __dmb();
        if ( !(v108 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v109 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v5, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v110 = *(UIComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v109));
          v110 = 0;
        LayoutComponent::reinitialize(v110, (char *)&unk_262C127, 2);
        LayoutComponent::layout((int)v110, (int)&unk_262C129, 4, 0);
        (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 20))(v7, 8);
      return Json::Value::~Value((Json::Value *)&v310);
  if ( v22 && gsl::operator==<char const,-1,char [19],void>((int)&v311, (int)"#collection_length") == 1 )
    v265 = CollectionComponent::getLength(v22);
    v304 = 0;
    v305 = 0;
    v306 = 0;
    if ( UIControl::isVisibleInTree(v5) != 1 )
      v31 = 0;
      goto LABEL_176;
    if ( Json::Value::isNull((Json::Value *)&v310)
      || !Json::Value::isInt((Json::Value *)&v310) && Json::Value::isUInt((Json::Value *)&v310) != 1
      || (v31 = Json::Value::asInt((Json::Value *)&v310, 0), v31 == -1) )
      sub_DA7364((void **)&v300, (const char *)&unk_257BC67);
      v32 = (char *)operator new(4u);
      v33 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v300,
              (int)&v301,
              (int)v32);
      if ( Json::Value::isNull((Json::Value *)&v310) || Json::Value::isArray((Json::Value *)&v310) != 1 )
        v35 = (int)(v32 + 4);
        v264 = v7;
        v34 = 0;
        v301 = v32;
        v302 = v33;
        v303 = v32 + 4;
        v262 = 0;
        jsonValConversion<std::vector<std::string,std::allocator<std::string>>>::as(
          (int)&v301,
          (int)&v313,
          (Json::Value *)&v310);
        v34 = (char *)v33;
        v262 = v32;
        v33 = v302;
        v35 = (int)v303;
        v32 = v301;
      v67 = *(_QWORD *)&v304;
      v304 = (const void **)v32;
      v301 = 0;
      v302 = 0;
      v305 = (_BYTE *)v33;
      v306 = v35;
      v303 = 0;
      if ( (_DWORD)v67 != HIDWORD(v67) )
        v68 = &v322;
        v69 = (_DWORD *)v67;
        v70 = &pthread_create;
        do
          v75 = (int *)(*v69 - 12);
          if ( v75 != &dword_28898C0 )
            v71 = (unsigned int *)(*v69 - 4);
            if ( v70 )
            {
              __dmb();
              do
                v72 = __ldrex(v71);
              while ( __strex(v72 - 1, v71) );
            }
            else
              v72 = (*v71)--;
            if ( v72 <= 0 )
              v73 = v68;
              v74 = v70;
              j_j_j_j_j__ZdlPv_9(v75);
              v70 = v74;
              v68 = v73;
          ++v69;
        while ( v69 != (_DWORD *)HIDWORD(v67) );
      if ( (_DWORD)v67 )
        operator delete((void *)v67);
      v77 = (char *)v302;
      v76 = v301;
      if ( v301 != (char *)v302 )
          v80 = (int *)(*(_DWORD *)v76 - 12);
          if ( v80 != &dword_28898C0 )
            v78 = (unsigned int *)(*(_DWORD *)v76 - 4);
            if ( &pthread_create )
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j_j__ZdlPv_9(v80);
          v76 += 4;
        while ( v76 != v77 );
        v76 = v301;
      if ( v76 )
        operator delete(v76);
      if ( v262 != v34 )
        v81 = v262;
          v84 = (int *)(*(_DWORD *)v81 - 12);
          if ( v84 != &dword_28898C0 )
            v82 = (unsigned int *)(*(_DWORD *)v81 - 4);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 <= 0 )
              j_j_j_j_j__ZdlPv_9(v84);
          v81 += 4;
        while ( v81 != v34 );
      if ( v262 )
        operator delete(v262);
      v7 = v264;
      v85 = (void *)(v300 - 12);
      if ( (int *)(v300 - 12) != &dword_28898C0 )
        v193 = (unsigned int *)(v300 - 4);
        if ( &pthread_create )
          do
            v194 = __ldrex(v193);
          while ( __strex(v194 - 1, v193) );
          v194 = (*v193)--;
        if ( v194 <= 0 )
          j_j_j_j_j__ZdlPv_9(v85);
      v86 = v305;
      v87 = v304;
      if ( v305 - (_BYTE *)v304 != 4 )
        goto LABEL_175;
      v88 = *v304;
      if ( *((_DWORD *)*v304 - 1) >= 0 )
        sub_DA73C4(v304);
        v88 = *v87;
      v31 = v265;
      if ( *v88 )
        v86 = v305;
        v87 = v304;
LABEL_175:
        v31 = (v86 - (_BYTE *)v87) >> 2;
        goto LABEL_176;
LABEL_176:
    v89 = CollectionComponent::getControlBindings(v22);
    v90 = (const void **)v305;
    v91 = v304;
    v93 = (const void **)(*(_QWORD *)v89 >> 32);
    v92 = (const void **)*(_QWORD *)v89;
    if ( (char *)v93 - (char *)v92 == v305 - (_BYTE *)v304 )
      if ( v92 == v93 )
LABEL_182:
        if ( v265 == v31 )
LABEL_217:
          if ( v91 != v90 )
            do
              v113 = (char *)*v91 - 12;
              if ( (int *)v113 != &dword_28898C0 )
              {
                v111 = (unsigned int *)((char *)*v91 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v112 = __ldrex(v111);
                  while ( __strex(v112 - 1, v111) );
                }
                else
                  v112 = (*v111)--;
                if ( v112 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v113);
              }
              ++v91;
            while ( v91 != v90 );
            v90 = v304;
          if ( v90 )
            operator delete(v90);
          return Json::Value::~Value((Json::Value *)&v310);
        v96 = 0;
        v94 = v304;
        while ( 1 )
          v95 = *((_DWORD *)*v92 - 3);
          if ( v95 != *((_DWORD *)*v94 - 3) )
            v96 = 1;
            goto LABEL_214;
          if ( memcmp(*v92, *v94, v95) )
            break;
          ++v92;
          ++v94;
          if ( v93 == v92 )
            goto LABEL_182;
        v96 = 1;
    else
      v96 = 1;
LABEL_214:
    CollectionComponent::setLength(v22, v31);
    if ( v96 == 1 )
      CollectionComponent::setControlBindings(v22, (unsigned __int64 *)&v304);
    CollectionComponent::refreshPanelItems(v22);
    (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 20))(v7, 4);
    goto LABEL_217;
  if ( v15 > 25304198 )
    if ( v15 <= 1278171019 )
      if ( v15 <= 559491911 )
        if ( v15 == 25304199 )
          if ( Json::Value::isNull((Json::Value *)&v310) )
            v138 = 1;
          else if ( Json::Value::isBool((Json::Value *)&v310) == 1 )
            v138 = Json::Value::asBool((Json::Value *)&v310, 0);
          if ( (UIControl::propagateAlpha(v5) ^ v138) == 1 )
            UIControl::setPropagateAlpha(v5, v138);
        if ( v15 == 479170048 )
          v104 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
          if ( !(v104 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
            type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
          v105 = type_id<UIComponent,ToggleComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
            v106 = *(ToggleComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v105));
            if ( v106 )
              if ( Json::Value::isNull((Json::Value *)&v310) )
                v107 = 0;
              else
                v107 = Json::Value::isBool((Json::Value *)&v310) == 1 ? Json::Value::asBool((Json::Value *)&v310, 0) : 0;
              if ( (ToggleComponent::isChecked(v106) ^ v107) == 1 )
                ToggleComponent::setChecked(v106, v107);
        goto LABEL_365;
      if ( v15 == 559491912 )
        v127 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
        if ( !(v127 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
          type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
        v128 = type_id<UIComponent,SpriteComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
          v129 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v128));
          if ( v129 )
            Json::Value::isNull((Json::Value *)&v310);
            __asm
              VLDR            S16, =0.0
              VMOV.F32        S0, S16
            if ( _ZF )
              v130 = Json::Value::isNumeric((Json::Value *)&v310);
              __asm { VMOV.F32        S0, S16 }
              if ( v130 == 1 )
                _R0 = Json::Value::asFloat((Json::Value *)&v310, 0.0);
                __asm { VMOV            S0, R0 }
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
              VMOV.F32        S2, #1.0
              VCMPE.F32       S0, S2
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S16, S0 }
            __asm { VMRS            APSR_nzcv, FPSCR }
              __asm { VMOVGT.F32      S16, S2 }
            _R0 = SpriteComponent::getClipRatio(v129);
              VMOV            S0, R0
              VCMPE.F32       S16, S0
            if ( !_ZF )
              __asm { VMOV            R1, S16 }
              SpriteComponent::setClipRatio(v129, _R1);
      if ( v15 != 1126334437 )
        if ( v15 == 1187065290 )
          v50 = UIControl::getPropertyBag(v5);
          v51 = v312;
          v52 = (Json::Value *)(v50 + 8);
          v53 = Json::Value::isNull((Json::Value *)(v50 + 8));
          __asm { VMOV.F32        S16, #1.0 }
          if ( !v53 && Json::Value::isObject(v52) == 1 )
            v57 = (Json::Value *)Json::Value::operator[]((int)v52, v51);
            if ( Json::Value::isNumeric(v57) == 1 )
              _R0 = Json::Value::asFloat(v57, 0.0);
              __asm { VMOV            S16, R0 }
          _R0 = UIControl::getAlpha(v5);
          __asm
            VMOV            S0, R0
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          if ( !_ZF )
            __asm { VMOV            R1, S16 }
            UIControl::setAlpha(v5, _R1);
      v119 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
      __dmb();
      if ( !(v119 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
        type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
      v120 = type_id<UIComponent,SpriteComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) != 1 )
      v121 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v120));
      if ( !v121 )
      if ( Json::Value::isNull((Json::Value *)&v310) || Json::Value::isString((Json::Value *)&v310) != 1 )
        s1 = &unk_28898CC;
        jsonValConversion<std::string>::as((int *)&s1, (int)&v319, (int)&v310);
      SpriteComponent::getResourceLocation((SpriteComponent *)&s2, (int)v121);
      v195 = (char *)s2;
      v196 = (char *)s2 - 12;
      v197 = *((_DWORD *)s1 - 3);
      if ( v197 == *((_DWORD *)s2 - 3) )
        v198 = memcmp(s1, s2, v197) != 0;
        v198 = 1;
      if ( (int *)v196 != &dword_28898C0 )
        v242 = (unsigned int *)(v195 - 4);
            v243 = __ldrex(v242);
          while ( __strex(v243 - 1, v242) );
          v243 = (*v242)--;
        if ( v243 <= 0 )
          j_j_j_j_j__ZdlPv_9(v196);
      if ( v198 == 1 )
        sub_DA73B4((int *)&v280, (int *)&s1);
        SpriteComponent::getResourceLocation((SpriteComponent *)&v278, (int)v121);
        v281 = v280;
        v282 = v279;
        v280 = (char *)&unk_28898CC;
        SpriteComponent::setResourceLocation(v121, (const ResourceLocation *)&v281);
        v216 = v281 - 12;
        if ( (int *)(v281 - 12) != &dword_28898C0 )
          v250 = (unsigned int *)(v281 - 4);
          if ( &pthread_create )
            __dmb();
              v251 = __ldrex(v250);
            while ( __strex(v251 - 1, v250) );
            v251 = (*v250)--;
          if ( v251 <= 0 )
            j_j_j_j_j__ZdlPv_9(v216);
        v217 = (void *)(v278 - 12);
        if ( (int *)(v278 - 12) != &dword_28898C0 )
          v252 = (unsigned int *)(v278 - 4);
              v253 = __ldrex(v252);
            while ( __strex(v253 - 1, v252) );
            v253 = (*v252)--;
          if ( v253 <= 0 )
            j_j_j_j_j__ZdlPv_9(v217);
        v218 = v280 - 12;
        if ( (int *)(v280 - 12) != &dword_28898C0 )
          v254 = (unsigned int *)(v280 - 4);
              v255 = __ldrex(v254);
            while ( __strex(v255 - 1, v254) );
            v255 = (*v254)--;
          if ( v255 <= 0 )
            j_j_j_j_j__ZdlPv_9(v218);
      v190 = (char *)s1 - 12;
      if ( (int *)((char *)s1 - 12) == &dword_28898C0 )
      v191 = (unsigned int *)((char *)s1 - 4);
      if ( !&pthread_create )
        goto LABEL_520;
      do
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
    else if ( v15 > 1420571695 )
      if ( v15 != 1420571696 )
        if ( v15 == 2116866625 )
          v159 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
          if ( !(v159 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
            type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
          v160 = type_id<UIComponent,SliderComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
            v161 = *(SliderComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v160));
            if ( v161 )
              v162 = Json::Value::isNull((Json::Value *)&v310);
              __asm { VLDR            S16, =0.0 }
              if ( !v162 && Json::Value::isNumeric((Json::Value *)&v310) == 1 )
                __asm { VMOV            S16, R0 }
              SliderComponent::setSliderValue(v161, _R1, v163, v164, v258, v259, v260, v261, v263);
        if ( v15 == 1513325652 )
            v66 = 1;
            v66 = Json::Value::asBool((Json::Value *)&v310, 0);
          if ( (UIControl::getVisible(v5) ^ v66) == 1 )
            UIControl::setVisible(v5, v66, 1, 1);
      v179 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
      if ( !(v179 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
        type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
      v180 = type_id<UIComponent,FocusComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) != 1 )
      v181 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v180));
      if ( !v181 )
      v182 = (Json::Value *)(UIControl::getPropertyBag(v5) + 8);
      if ( Json::Value::isNull(v182)
        || Json::Value::isObject(v182) != 1
        || (v183 = (Json::Value *)Json::Value::operator[]((int)v182, "#focus_identifier"),
            Json::Value::isString(v183) != 1) )
        v299 = (char *)&unk_28898CC;
        jsonValConversion<std::string>::as((int *)&v299, (int)&v314, (int)v183);
      FocusComponent::setFocusIdentifier(v181, (int *)&v299);
      v190 = v299 - 12;
      if ( (int *)(v299 - 12) == &dword_28898C0 )
      v191 = (unsigned int *)(v299 - 4);
      if ( v15 != 1278171020 )
        if ( v15 == 1369007845 )
          v144 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
          if ( !(v144 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
            type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
          v145 = type_id<UIComponent,SpriteComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
            v146 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v145));
            if ( v146 )
              _getDesiredValue<Color>(
                (int)&v289,
                (Json::Value *)&v310,
                Color::WHITE,
                SLODWORD(unk_283E614),
                qword_283E618);
              _R0 = SpriteComponent::getColor(v146);
              __asm
                VLDR            S0, [SP,#0x160+var_E4]
                VLDR            S2, [R0]
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              if ( !_ZF )
                goto LABEL_649;
                VLDR            S0, [SP,#0x160+var_E0]
                VLDR            S2, [R0,#4]
                VLDR            S0, [SP,#0x160+var_DC]
                VLDR            S2, [R0,#8]
                VLDR            S0, [SP,#0x160+var_D8]
                VLDR            S2, [R0,#0xC]
LABEL_649:
                SpriteComponent::setColor(v146, (const Color *)&v289);
          v148 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
          if ( !(v148 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
          v149 = type_id<UIComponent,TextComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
            v150 = *(TextComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v149));
            if ( v150 )
                (int)&v285,
              _R0 = TextComponent::getColor(v150);
                VLDR            S0, [SP,#0x160+var_F4]
                goto LABEL_650;
                VLDR            S0, [SP,#0x160+var_F0]
                VLDR            S0, [SP,#0x160+var_EC]
                VLDR            S0, [SP,#0x160+var_E8]
LABEL_650:
                TextComponent::setColor(v150, (const Color *)&v285);
        if ( v15 == 1386968845 )
          v39 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
          if ( !(v39 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
            type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
          v40 = type_id<UIComponent,FocusComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
            v41 = *(FocusComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v40));
            if ( v41 )
                v42 = 0;
                v42 = Json::Value::isInt((Json::Value *)&v310) || Json::Value::isUInt((Json::Value *)&v310) == 1 ? Json::Value::asInt((Json::Value *)&v310, 0) : 0;
              if ( v42 != FocusComponent::getDefaultFocusPrecedence(v41) )
                FocusComponent::setDefaultFocusPrecedence(v41, v42);
      v171 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
      if ( !(v171 & 1)
      v172 = type_id<UIComponent,SpriteComponent>(void)::id[0];
      v173 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v172));
      if ( !v173 )
        v174 = &unk_28898CC;
        v277 = &unk_28898CC;
        jsonValConversion<std::string>::as((int *)&v277, (int)&v320, (int)&v310);
        v174 = v277;
      v203 = ResourceUtil::pathFromString(*((_DWORD *)v174 - 3), v174);
      v204 = v277 - 12;
      if ( (int *)(v277 - 12) != &dword_28898C0 )
        v244 = (unsigned int *)(v277 - 4);
            v245 = __ldrex(v244);
          while ( __strex(v245 - 1, v244) );
          v245 = (*v244)--;
        if ( v245 <= 0 )
          j_j_j_j_j__ZdlPv_9(v204);
      SpriteComponent::getResourceLocation((SpriteComponent *)&v275, (int)v173);
      v205 = v276;
      v206 = (void *)(v275 - 12);
      if ( (int *)(v275 - 12) != &dword_28898C0 )
        v246 = (unsigned int *)(v275 - 4);
            v247 = __ldrex(v246);
          while ( __strex(v247 - 1, v246) );
          v247 = (*v246)--;
        if ( v247 <= 0 )
          j_j_j_j_j__ZdlPv_9(v206);
      if ( v203 == v205 )
      SpriteComponent::getResourceLocation((SpriteComponent *)&v272, (int)v173);
      v207 = v272;
      v272 = (char *)&unk_28898CC;
      v273 = v207;
      v274 = v203;
      SpriteComponent::setResourceLocation(v173, (const ResourceLocation *)&v273);
      v208 = v273 - 12;
      if ( (int *)(v273 - 12) != &dword_28898C0 )
        v256 = (unsigned int *)(v273 - 4);
            v257 = __ldrex(v256);
          while ( __strex(v257 - 1, v256) );
          v257 = (*v256)--;
        if ( v257 <= 0 )
          j_j_j_j_j__ZdlPv_9(v208);
      v190 = v272 - 12;
      if ( (int *)(v272 - 12) == &dword_28898C0 )
      v191 = (unsigned int *)(v272 - 4);
LABEL_521:
    if ( v192 <= 0 )
      j_j_j_j_j__ZdlPv_9(v190);
    return Json::Value::~Value((Json::Value *)&v310);
  if ( v15 <= -1376768992 )
    if ( v15 <= -1697904180 )
      if ( v15 == -2132711341 )
        v134 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
        if ( !(v134 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
          type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
        v135 = type_id<UIComponent,SliderComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v5, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
          v136 = *(SliderComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v135));
          if ( v136 )
            if ( Json::Value::isNull((Json::Value *)&v310) )
              v137 = 1;
            else if ( Json::Value::isInt((Json::Value *)&v310) || Json::Value::isUInt((Json::Value *)&v310) == 1 )
              v137 = Json::Value::asInt((Json::Value *)&v310, 0);
            SliderComponent::setNumberSteps(v136, v137);
      if ( v15 == -2131812395 )
        v97 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
        if ( !(v97 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
          type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
        v98 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v5, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
          v99 = *(ScrollViewComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v98));
          if ( v99 )
            v100 = UIControl::getPropertyBag(v5);
            v101 = v312;
            v102 = (Json::Value *)(v100 + 8);
            if ( Json::Value::isNull((Json::Value *)(v100 + 8)) )
              v103 = 0;
            else if ( Json::Value::isObject(v102) == 1 )
              v215 = (Json::Value *)Json::Value::operator[]((int)v102, v101);
              if ( Json::Value::isBool(v215) == 1 )
                v103 = Json::Value::asBool(v215, 0);
                v103 = 0;
            ScrollViewComponent::setGestureControlMode(v99, v103);
      goto LABEL_365;
    if ( v15 != -1697904179 )
      if ( v15 == -1600815805 )
        v115 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
        if ( !(v115 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
          type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
        v116 = type_id<UIComponent,TextEditComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v5, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
          v117 = *(TextEditComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v116));
          if ( v117 )
              v118 = 1;
            else if ( Json::Value::isBool((Json::Value *)&v310) == 1 )
              v118 = Json::Value::asBool((Json::Value *)&v310, 0);
            TextEditComponent::setCanBeDeselected(v117, v118);
      if ( v15 == -1483064161 )
          v49 = 1;
        else if ( Json::Value::isBool((Json::Value *)&v310) == 1 )
          v49 = Json::Value::asBool((Json::Value *)&v310, 0);
        if ( (UIControl::getEnabled(v5) ^ v49) == 1 )
          UIControl::setEnabled(v5, v49, 1);
    v122 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
    __dmb();
    if ( !(v122 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
      type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
    v123 = type_id<UIComponent,FocusComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) != 1 )
    v124 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v123));
    if ( !v124 )
    v125 = (Json::Value *)(UIControl::getPropertyBag(v5) + 8);
    if ( Json::Value::isNull(v125)
      || Json::Value::isObject(v125) != 1
      || (v126 = (Json::Value *)Json::Value::operator[]((int)v125, "#focus_change_up"), Json::Value::isString(v126) != 1) )
      v294 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v294, (int)&v317, (int)v126);
    FocusComponent::setFocusChangeOverride(v124, 1u, (int *)&v294);
    v190 = v294 - 12;
    if ( (int *)(v294 - 12) == &dword_28898C0 )
    v191 = (unsigned int *)(v294 - 4);
    if ( !&pthread_create )
      goto LABEL_520;
      v192 = __ldrex(v191);
    while ( __strex(v192 - 1, v191) );
    goto LABEL_521;
  if ( v15 > -1013416630 )
    if ( v15 == -1013416629 )
      v175 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
      if ( !(v175 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
        type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
      v176 = type_id<UIComponent,InputComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v5, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
        v177 = *(InputComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v176));
        if ( v177 )
            v178 = 0;
            v178 = Json::Value::isBool((Json::Value *)&v310) == 1 ? Json::Value::asBool((Json::Value *)&v310, 0) : 0;
          if ( (InputComponent::getModal(v177) ^ v178) == 1 )
            InputComponent::setModal(v177, v178);
    if ( v15 == -416291262 )
      v152 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
      if ( !(v152 & 1)
      v153 = type_id<UIComponent,FocusComponent>(void)::id[0];
      v154 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v153));
      if ( !v154 )
      v155 = UIControl::getPropertyBag(v5);
      gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v295, (int)"#focus_change_right");
      v156 = v296;
      v157 = (Json::Value *)(v155 + 8);
      if ( Json::Value::isNull(v157)
        || Json::Value::isObject(v157) != 1
        || (v158 = (Json::Value *)Json::Value::operator[]((int)v157, v156), Json::Value::isString(v158) != 1) )
        v297 = (char *)&unk_28898CC;
        jsonValConversion<std::string>::as((int *)&v297, (int)&v316, (int)v158);
      FocusComponent::setFocusChangeOverride(v154, 4u, (int *)&v297);
      v190 = v297 - 12;
      if ( (int *)(v297 - 12) == &dword_28898C0 )
      v191 = (unsigned int *)(v297 - 4);
      if ( v15 != -267601119 )
      v61 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
      if ( !(v61 & 1)
      v62 = type_id<UIComponent,FocusComponent>(void)::id[0];
      v63 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v62));
      if ( !v63 )
      v64 = (Json::Value *)(UIControl::getPropertyBag(v5) + 8);
      if ( Json::Value::isNull(v64)
        || Json::Value::isObject(v64) != 1
        || (v65 = (Json::Value *)Json::Value::operator[]((int)v64, "#focus_change_left"), Json::Value::isString(v65) != 1) )
        v298 = (char *)&unk_28898CC;
        jsonValConversion<std::string>::as((int *)&v298, (int)&v315, (int)v65);
      FocusComponent::setFocusChangeOverride(v63, 3u, (int *)&v298);
      v190 = v298 - 12;
      if ( (int *)(v298 - 12) == &dword_28898C0 )
      v191 = (unsigned int *)(v298 - 4);
  if ( v15 == -1376768991 )
    v167 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
    if ( !(v167 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
      type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
    v168 = type_id<UIComponent,ToggleComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
      v169 = *(ToggleComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v168));
      if ( v169 )
          v170 = -1;
          v170 = Json::Value::isInt((Json::Value *)&v310) || Json::Value::isUInt((Json::Value *)&v310) == 1 ? Json::Value::asInt((Json::Value *)&v310, 0) : -1;
        if ( ToggleComponent::getGroupIndex(v169) != v170 )
          ToggleComponent::setForcedGroupIndex(v169, v170);
  if ( v15 == -1362162196 )
    v139 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
    if ( !(v139 & 1)
    v140 = type_id<UIComponent,FocusComponent>(void)::id[0];
    v141 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v140));
    if ( !v141 )
    v142 = (Json::Value *)(UIControl::getPropertyBag(v5) + 8);
    if ( Json::Value::isNull(v142)
      || Json::Value::isObject(v142) != 1
      || (v143 = (Json::Value *)Json::Value::operator[]((int)v142, "#focus_change_down"),
          Json::Value::isString(v143) != 1) )
      v293 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v293, (int)&v318, (int)v143);
    FocusComponent::setFocusChangeOverride(v141, 2u, (int *)&v293);
    v190 = v293 - 12;
    if ( (int *)(v293 - 12) == &dword_28898C0 )
    v191 = (unsigned int *)(v293 - 4);
  if ( v15 == -1264910166 )
    v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
    if ( !(v36 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
      type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
    v37 = type_id<UIComponent,SpriteComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
      v38 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v37));
      if ( v38 )
        if ( Json::Value::isNull((Json::Value *)&v310) || Json::Value::isString((Json::Value *)&v310) != 1 )
          v271 = &unk_28898CC;
          jsonValConversion<std::string>::as((int *)&v271, (int)&v321, (int)&v310);
        v199 = (const void **)SpriteComponent::getZipFolder(v38);
        v200 = (char *)v271;
        v201 = *((_DWORD *)v271 - 3);
        if ( v201 != *((_DWORD *)*v199 - 3) || memcmp(v271, *v199, v201) )
          sub_DA73B4(&v270, (int *)&v271);
          SpriteComponent::setZipFolder((int)v38, &v270);
          v202 = (void *)(v270 - 12);
          if ( (int *)(v270 - 12) != &dword_28898C0 )
            v248 = (unsigned int *)(v270 - 4);
                v249 = __ldrex(v248);
              while ( __strex(v249 - 1, v248) );
              v249 = (*v248)--;
            if ( v249 <= 0 )
              j_j_j_j_j__ZdlPv_9(v202);
          v200 = (char *)v271;
        v190 = v200 - 12;
        if ( (int *)(v200 - 12) != &dword_28898C0 )
          v191 = (unsigned int *)(v200 - 4);
              v192 = __ldrex(v191);
            while ( __strex(v192 - 1, v191) );
            goto LABEL_521;
LABEL_520:
          v192 = (*v191)--;
          goto LABEL_521;
LABEL_365:
  if ( v311 == 10 && *v312 == 35 )
    v184 = 1;
    while ( v184 != 10 )
      v185 = v312[v184];
      v186 = (unsigned __int8)aGrayscale[v184++];
      if ( v185 != v186 )
        goto LABEL_370;
    v219 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
    if ( !(v219 & 1)
    v220 = type_id<UIComponent,SpriteComponent>(void)::id[0];
      v221 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v220));
      if ( v221 )
          v222 = 0;
          v222 = Json::Value::asBool((Json::Value *)&v310, 0);
        SpriteComponent::setGrayscaleEnabled(v221, v222);
LABEL_370:
  if ( v15 == 631063328 )
    v212 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
    if ( !(v212 & 1)
    v213 = type_id<UIComponent,FocusComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
      v214 = *(FocusComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v213));
      v214 = 0;
    if ( Json::Value::isNull((Json::Value *)&v310) )
      v224 = 1;
    else if ( Json::Value::isBool((Json::Value *)&v310) == 1 )
      v224 = Json::Value::asBool((Json::Value *)&v310, 0);
    if ( (FocusComponent::getFocusEnabled(v214) ^ v224) != 1 )
    FocusComponent::setFocusEnabled(v214, v224);
    v233 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 32);
    v269 = *((_DWORD *)v5 + 2);
    if ( !v269 )
      std::__throw_bad_weak_ptr();
    v234 = *(_DWORD *)(v269 + 4);
    v235 = (unsigned int *)(v269 + 4);
      while ( 1 )
        if ( !v234 )
          std::__throw_bad_weak_ptr();
        v236 = __ldrex(v235);
        if ( v236 == v234 )
          break;
        __clrex();
        v234 = v236;
      v237 = __strex(v234 + 1, v235);
      v234 = v236;
    while ( v237 );
    v268 = *((_DWORD *)v5 + 1);
    v233(v7, &v268);
    v230 = v269;
    v238 = (unsigned int *)(v269 + 4);
    if ( &pthread_create )
        v239 = __ldrex(v238);
      while ( __strex(v239 - 1, v238) );
      v239 = (*v238)--;
    if ( v239 != 1 )
    v240 = (unsigned int *)(v230 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v230 + 8))(v230);
        v241 = __ldrex(v240);
      while ( __strex(v241 - 1, v240) );
LABEL_576:
      if ( v241 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v230 + 12))(v230);
LABEL_575:
    v241 = (*v240)--;
    goto LABEL_576;
  if ( v15 != 806600525 )
    if ( v15 == 1778117046 )
      v187 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0];
      if ( !(v187 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id) )
        type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id);
      v188 = type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v5, type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0]) == 1 )
        v189 = *(AnchoredOffsetComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v188));
        if ( v189 )
          AnchoredOffsetComponent::updateLayoutFromPropertyValue(v189);
  v209 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  if ( !(v209 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  v210 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v211 = *(FocusComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v210));
    v211 = 0;
  if ( Json::Value::isNull((Json::Value *)&v310) )
    v223 = 1;
  else if ( Json::Value::isBool((Json::Value *)&v310) == 1 )
    v223 = Json::Value::asBool((Json::Value *)&v310, 0);
  if ( (FocusComponent::getFocusWrapEnabled(v211) ^ v223) == 1 )
    FocusComponent::setFocusWrapEnabled(v211, v223);
    v225 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 32);
    v267 = *((_DWORD *)v5 + 2);
    if ( !v267 )
    v226 = *(_DWORD *)(v267 + 4);
    v227 = (unsigned int *)(v267 + 4);
        if ( !v226 )
        v228 = __ldrex(v227);
        if ( v228 == v226 )
        v226 = v228;
      v229 = __strex(v226 + 1, v227);
      v226 = v228;
    while ( v229 );
    v266 = *((_DWORD *)v5 + 1);
    v225(v7, &v266);
    v230 = v267;
    if ( v267 )
      v231 = (unsigned int *)(v267 + 4);
      if ( &pthread_create )
          v232 = __ldrex(v231);
        while ( __strex(v232 - 1, v231) );
        v232 = (*v231)--;
      if ( v232 == 1 )
        v240 = (unsigned int *)(v230 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v230 + 8))(v230);
            v241 = __ldrex(v240);
          while ( __strex(v241 - 1, v240) );
          goto LABEL_576;
        goto LABEL_575;
  return Json::Value::~Value((Json::Value *)&v310);
}


char *__fastcall DataBindingComponent::_addBinding(DataBindingComponent *this, const DataBindingComponent::DataBinding *a2)
{
  const DataBindingComponent::DataBinding *v2; // r4@1
  DataBindingComponent *v3; // r6@1
  char *v4; // r5@2
  __int64 v5; // r0@5
  char *result; // r0@6

  v2 = a2;
  v3 = this;
  if ( (*((_DWORD *)a2 + 1) & 0xFFFFFFFE) == 2 )
  {
    v4 = (char *)this + 32;
  }
  else
    v4 = (char *)this + 8;
    if ( DataBindingComponent::_isCollectionSizeBinding(this, a2) )
      v4 = (char *)v3 + 20;
  v5 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    result = j_j_j__ZNSt6vectorIN20DataBindingComponent11DataBindingESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_(
               (unsigned __int64 *)v4,
               v2);
    DataBindingComponent::DataBinding::DataBinding((DataBindingComponent::DataBinding *)v5, v2);
    result = (char *)(*((_DWORD *)v4 + 1) + 84);
    *((_DWORD *)v4 + 1) = result;
  return result;
}


DataBindingComponent::DataBinding *__fastcall DataBindingComponent::DataBinding::DataBinding(DataBindingComponent::DataBinding *this, const DataBindingComponent::DataBinding *a2)
{
  const DataBindingComponent::DataBinding *v2; // r6@1
  DataBindingComponent::DataBinding *v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r0@7
  int v8; // r1@7
  int v9; // r2@7
  int v10; // r3@7

  v2 = a2;
  v3 = this;
  *(_QWORD *)this = *(_QWORD *)a2;
  sub_DA73B4((int *)this + 2, (int *)a2 + 2);
  std::vector<ExprToken,std::allocator<ExprToken>>::vector((int)v3 + 12, (unsigned __int64 *)((char *)v2 + 12));
  *((_BYTE *)v3 + 24) = *((_BYTE *)v2 + 24);
  sub_DA73B4((int *)v3 + 7, (int *)v2 + 7);
  sub_DA73B4((int *)v3 + 8, (int *)v2 + 8);
  sub_DA73B4((int *)v3 + 9, (int *)v2 + 9);
  std::vector<ExprToken,std::allocator<ExprToken>>::vector((int)v3 + 40, (unsigned __int64 *)v2 + 5);
  *((_BYTE *)v3 + 52) = *((_BYTE *)v2 + 52);
  sub_DA73B4((int *)v3 + 14, (int *)v2 + 14);
  *((_DWORD *)v3 + 15) = *((_DWORD *)v2 + 15);
  v4 = *((_DWORD *)v2 + 16);
  *((_DWORD *)v3 + 16) = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 8);
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
  v7 = *((_DWORD *)v2 + 17);
  v8 = *((_DWORD *)v2 + 18);
  v9 = *((_DWORD *)v2 + 19);
  *((_WORD *)v3 + 40) = *((_WORD *)v2 + 40);
  v10 = (int)v3 + 68;
  *(_DWORD *)v10 = v7;
  *(_DWORD *)(v10 + 4) = v8;
  *(_DWORD *)(v10 + 8) = v9;
  return v3;
}


int __fastcall DataBindingComponent::reset(DataBindingComponent *this)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED
  int v3; // r1@5 OVERLAPPED
  int v4; // r2@5 OVERLAPPED
  int result; // r0@9
  int i; // r1@9
  __int64 v7; // kr00_8@9

  for ( *(_QWORD *)&v1 = *((_QWORD *)this + 1); v2 != v1; v1 += 84 )
  {
    if ( *(_DWORD *)v1 != 4 )
      *(_BYTE *)(v1 + 80) = 0;
  }
  for ( *(_QWORD *)&v3 = *(_QWORD *)((char *)this + 20); v4 != v3; v3 += 84 )
    if ( *(_DWORD *)v3 != 4 )
      *(_BYTE *)(v3 + 80) = 0;
  v7 = *((_QWORD *)this + 4);
  result = *((_QWORD *)this + 4) >> 32;
  for ( i = v7; result != i; i += 84 )
    if ( *(_DWORD *)i != 4 )
      *(_BYTE *)(i + 80) = 0;
  return result;
}


int __fastcall DataBindingComponent::bindHighPriorityBinds(DataBindingComponent *this, ScreenController *a2, int a3)
{
  return j_j_j__ZN20DataBindingComponent5_bindER16ScreenControllerbRSt6vectorINS_11DataBindingESaIS3_EE(
           this,
           (int)a2,
           a3,
           (unsigned __int64 *)((char *)this + 20));
}


DataBindingComponent::DataBinding *__fastcall DataBindingComponent::addViewBinding(int a1, int a2, int a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r9@1
  int v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r0@5
  int *v11; // r5@5
  unsigned int *v12; // r2@6
  unsigned int v13; // r1@8
  __int64 v14; // r0@12
  int v16; // [sp+0h] [bp-70h]@1
  int v17; // [sp+4h] [bp-6Ch]@12
  void *v18; // [sp+8h] [bp-68h]@1
  int v19; // [sp+Ch] [bp-64h]@1
  int v20; // [sp+10h] [bp-60h]@1
  int v21; // [sp+14h] [bp-5Ch]@1
  char v22; // [sp+18h] [bp-58h]@1
  void *v23; // [sp+1Ch] [bp-54h]@1
  void *v24; // [sp+20h] [bp-50h]@1
  void *v25; // [sp+24h] [bp-4Ch]@1
  int v26; // [sp+28h] [bp-48h]@1
  int v27; // [sp+2Ch] [bp-44h]@1
  int v28; // [sp+30h] [bp-40h]@1
  char v29; // [sp+34h] [bp-3Ch]@1
  void *v30; // [sp+38h] [bp-38h]@1
  int v31; // [sp+3Ch] [bp-34h]@1
  int v32; // [sp+40h] [bp-30h]@1
  int v33; // [sp+44h] [bp-2Ch]@1
  int v34; // [sp+48h] [bp-28h]@1
  int v35; // [sp+4Ch] [bp-24h]@1
  char v36; // [sp+50h] [bp-20h]@1
  char v37; // [sp+51h] [bp-1Fh]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v18 = &unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  v23 = &unk_28898CC;
  v24 = &unk_28898CC;
  v25 = &unk_28898CC;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 1;
  v34 = 0;
  v32 = 0;
  v33 = 0;
  v30 = &unk_28898CC;
  v31 = 0;
  v35 = -1;
  v36 = 0;
  v37 = 0;
  v16 = 4;
  v31 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
    goto LABEL_11;
  v8 = (unsigned int *)(v7 + 8);
  if ( !&pthread_create )
  {
    ++*v8;
LABEL_11:
    v11 = &v32;
    goto LABEL_12;
  }
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 + 1, v8) );
  v10 = v32;
  v11 = &v32;
  if ( v32 )
    v12 = (unsigned int *)(v32 + 8);
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
      (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 12))(v10);
LABEL_12:
  *v11 = v7;
  std::vector<ExprToken,std::allocator<ExprToken>>::operator=((int)&v26, v6);
  v29 = *(_BYTE *)(v6 + 12);
  EntityInteraction::setInteractText((int *)&v30, v5);
  v17 = 1;
  v14 = *(_QWORD *)(v4 + 12);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>>::_M_emplace_back_aux<DataBindingComponent::DataBinding&>(
      (unsigned __int64 *)(v4 + 8),
      (const DataBindingComponent::DataBinding *)&v16);
  else
    DataBindingComponent::DataBinding::DataBinding(
      (DataBindingComponent::DataBinding *)v14,
    *(_DWORD *)(v4 + 12) += 84;
  return DataBindingComponent::DataBinding::~DataBinding((DataBindingComponent::DataBinding *)&v16);
}


int __fastcall DataBindingComponent::bindAlwaysBinds(DataBindingComponent *this, ScreenController *a2, int a3)
{
  return j_j_j__ZN20DataBindingComponent5_bindER16ScreenControllerbRSt6vectorINS_11DataBindingESaIS3_EE(
           this,
           (int)a2,
           a3,
           (unsigned __int64 *)this + 4);
}


char *__fastcall DataBindingComponent::clone(DataBindingComponent *this, UIControl *a2, UIControl *a3)
{
  DataBindingComponent *v3; // r8@1
  UIControl *v4; // r5@1
  UIControl *v5; // r9@1
  void *v6; // r4@1
  char *result; // r0@1
  const DataBindingComponent::DataBinding *v8; // r5@1 OVERLAPPED
  const DataBindingComponent::DataBinding *v9; // r6@1 OVERLAPPED
  __int64 v10; // r0@3
  const DataBindingComponent::DataBinding *v11; // r6@7
  const DataBindingComponent::DataBinding *i; // r7@7
  __int64 v13; // r0@9
  const DataBindingComponent::DataBinding *v14; // r6@13
  const DataBindingComponent::DataBinding *j; // r7@13
  __int64 v16; // r0@15

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x30u);
  UIComponent::UIComponent((UIComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26D6A30;
  result = (char *)_aeabi_memclr4((char *)v6 + 8, 37);
  for ( *(_QWORD *)&v8 = *((_QWORD *)v5 + 1); v9 != v8; v8 = (const DataBindingComponent::DataBinding *)((char *)v8 + 84) )
  {
    result = *(char **)v8;
    if ( *(_DWORD *)v8 != 4 )
    {
      v10 = *(_QWORD *)((char *)v6 + 12);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        result = std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>>::_M_emplace_back_aux<DataBindingComponent::DataBinding const&>(
                   (unsigned __int64 *)v6 + 1,
                   v8);
      }
      else
        DataBindingComponent::DataBinding::DataBinding((DataBindingComponent::DataBinding *)v10, v8);
        result = (char *)(*((_DWORD *)v6 + 3) + 84);
        *((_DWORD *)v6 + 3) = result;
    }
  }
  v11 = (const DataBindingComponent::DataBinding *)(*(_QWORD *)((char *)v5 + 20) >> 32);
  for ( i = (const DataBindingComponent::DataBinding *)*(_QWORD *)((char *)v5 + 20);
        v11 != i;
        i = (const DataBindingComponent::DataBinding *)((char *)i + 84) )
    result = *(char **)i;
    if ( *(_DWORD *)i != 4 )
      v13 = *((_QWORD *)v6 + 3);
      if ( (_DWORD)v13 == HIDWORD(v13) )
                   (unsigned __int64 *)((char *)v6 + 20),
                   i);
        DataBindingComponent::DataBinding::DataBinding((DataBindingComponent::DataBinding *)v13, i);
        result = (char *)(*((_DWORD *)v6 + 6) + 84);
        *((_DWORD *)v6 + 6) = result;
  v14 = (const DataBindingComponent::DataBinding *)(*((_QWORD *)v5 + 4) >> 32);
  for ( j = (const DataBindingComponent::DataBinding *)*((_QWORD *)v5 + 4);
        v14 != j;
        j = (const DataBindingComponent::DataBinding *)((char *)j + 84) )
    result = *(char **)j;
    if ( *(_DWORD *)j != 4 )
      v16 = *(_QWORD *)((char *)v6 + 36);
      if ( (_DWORD)v16 == HIDWORD(v16) )
                   (unsigned __int64 *)v6 + 4,
                   j);
        DataBindingComponent::DataBinding::DataBinding((DataBindingComponent::DataBinding *)v16, j);
        result = (char *)(*((_DWORD *)v6 + 9) + 84);
        *((_DWORD *)v6 + 9) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall DataBindingComponent::addCollectionBinding(DataBindingComponent *a1, int *a2, unsigned __int64 *a3, const void **a4, int a5)
{
  DataBindingComponent *v5; // r5@1
  int *v6; // r9@1
  const void **v7; // r4@1
  __int64 v8; // r6@1
  _BYTE *v9; // r5@3
  size_t v10; // r0@3
  int i; // r1@3
  int v12; // t1@4
  int v13; // r5@6
  char v14; // r9@6
  int v15; // r0@6
  char *v16; // r11@6
  __int64 v17; // r0@7
  unsigned int v18; // r4@7
  int v19; // r2@7
  __int64 v20; // kr08_8@11
  int v21; // r5@11
  void *v22; // r0@12
  const char *v23; // r5@17
  size_t v24; // r0@17
  int k; // r1@17
  int v26; // t1@18
  int v27; // r5@19
  __int64 v28; // r0@22
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  int *v31; // r0@38
  int v32; // [sp+4h] [bp-CCh]@2
  DataBindingComponent *v33; // [sp+8h] [bp-C8h]@2
  int v34; // [sp+10h] [bp-C0h]@2
  const char **v35; // [sp+18h] [bp-B8h]@1
  int *v36; // [sp+2Ch] [bp-A4h]@1
  int *v37; // [sp+30h] [bp-A0h]@1
  const char **v38; // [sp+34h] [bp-9Ch]@6
  char *v39; // [sp+38h] [bp-98h]@6
  char *v40; // [sp+3Ch] [bp-94h]@6
  char *j; // [sp+40h] [bp-90h]@6
  int v42; // [sp+44h] [bp-8Ch]@6
  int v43; // [sp+48h] [bp-88h]@3
  int v44; // [sp+4Ch] [bp-84h]@19
  void *v45; // [sp+50h] [bp-80h]@3
  char *v46; // [sp+54h] [bp-7Ch]@3
  int v47; // [sp+58h] [bp-78h]@3
  int v48; // [sp+5Ch] [bp-74h]@3
  char v49; // [sp+60h] [bp-70h]@3
  void *v50; // [sp+64h] [bp-6Ch]@3
  void *v51; // [sp+68h] [bp-68h]@3
  void *v52; // [sp+6Ch] [bp-64h]@3
  int v53; // [sp+70h] [bp-60h]@3
  int v54; // [sp+74h] [bp-5Ch]@3
  int v55; // [sp+78h] [bp-58h]@3
  char v56; // [sp+7Ch] [bp-54h]@3
  void *v57; // [sp+80h] [bp-50h]@3
  int v58; // [sp+84h] [bp-4Ch]@3
  int v59; // [sp+88h] [bp-48h]@3
  int v60; // [sp+8Ch] [bp-44h]@3
  int v61; // [sp+90h] [bp-40h]@3
  int v62; // [sp+94h] [bp-3Ch]@3
  char v63; // [sp+98h] [bp-38h]@3
  char v64; // [sp+99h] [bp-37h]@3
  const char **v65; // [sp+9Ch] [bp-34h]@1
  const char **v66; // [sp+A0h] [bp-30h]@1

  v5 = a1;
  LODWORD(v8) = a3;
  v6 = a2;
  v7 = a4;
  v37 = (int *)a4;
  v36 = a2;
  UiExpression::getProperties((UiExpression *)&v65, a3);
  UiExpression::updatePropertiesWithOverride((unsigned __int64 *)v8, v7);
  HIDWORD(v8) = v65;
  v35 = v66;
  if ( v65 != v66 )
  {
    v32 = (int)v5 + 8;
    v34 = (int)v5 + 32;
    v33 = v5;
    do
    {
      v45 = &unk_28898CC;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 1;
      v50 = &unk_28898CC;
      v51 = &unk_28898CC;
      v52 = &unk_28898CC;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 1;
      v57 = &unk_28898CC;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = -1;
      v63 = 0;
      v64 = 0;
      v43 = 2;
      EntityInteraction::setInteractText((int *)&v51, v6);
      v9 = (_BYTE *)*v6;
      v10 = strlen((const char *)*v6);
      for ( i = -2128831035; v10; i = 16777619 * (i ^ v12) )
      {
        v12 = *v9++;
        --v10;
      }
      v60 = i;
      EntityInteraction::setInteractText((int *)&v45, (int *)HIDWORD(v8));
      if ( UiExpression::isStatic((UiExpression *)v8) == 1 )
        v13 = 0;
        v14 = 1;
        v38 = (const char **)HIDWORD(v8);
        v15 = 0;
        j = 0;
        v42 = 0;
        v16 = 0;
        v39 = 0;
        v40 = 0;
        LOBYTE(v42) = 1;
      else
        v17 = *(_QWORD *)v8;
        LODWORD(v17) = HIDWORD(v17) - v17;
        v18 = -1431655765 * ((signed int)v17 >> 4);
        v19 = HIDWORD(v17);
        if ( (_DWORD)v17 )
        {
          if ( v18 >= 0x5555556 )
            sub_DA7414();
          v16 = (char *)operator new(v17);
          HIDWORD(v17) = *(_QWORD *)v8 >> 32;
          v19 = *(_QWORD *)v8;
        }
        v39 = v16;
        v40 = v16;
        v13 = (int)&v16[48 * v18];
        j = &v16[48 * v18];
        v15 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                v19,
                SHIDWORD(v17),
                (int)v16);
        v40 = (char *)v15;
        v14 = *(_BYTE *)(v8 + 12);
        LOBYTE(v42) = *(_BYTE *)(v8 + 12);
      v20 = *(_QWORD *)&v46;
      v46 = v16;
      v39 = 0;
      v40 = 0;
      v47 = v15;
      v48 = v13;
      v21 = v20;
      for ( j = 0; HIDWORD(v20) != v21; v21 += 48 )
        std::_Destroy<ExprToken *,ExprToken>(*(_DWORD *)(v21 + 16), *(_DWORD *)(v21 + 20), v21 + 16);
        v22 = *(void **)(v21 + 16);
        if ( v22 )
          operator delete(v22);
        Json::Value::~Value((Json::Value *)v21);
      if ( (_DWORD)v20 )
        operator delete((void *)v20);
      v49 = v14;
      std::_Destroy<ExprToken *,ExprToken>(0, 0, (int)&v39);
      v23 = *v38;
      v24 = strlen(*v38);
      for ( k = -2128831035; v24; k = 16777619 * (k ^ v26) )
        v26 = *v23++;
        --v24;
      v61 = k;
      EntityInteraction::setInteractText((int *)&v50, v37);
      v6 = v36;
      v27 = v34;
      v44 = a5;
      if ( (a5 & 0xFFFFFFFE) != 2 )
        v27 = v32;
        if ( DataBindingComponent::_isCollectionSizeBinding(v33, (const DataBindingComponent::DataBinding *)&v43) )
          v27 = (int)v33 + 20;
      v28 = *(_QWORD *)(v27 + 4);
      if ( (_DWORD)v28 == HIDWORD(v28) )
        std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>>::_M_emplace_back_aux<DataBindingComponent::DataBinding const&>(
          (unsigned __int64 *)v27,
          (const DataBindingComponent::DataBinding *)&v43);
        DataBindingComponent::DataBinding::DataBinding(
          (DataBindingComponent::DataBinding *)v28,
        *(_DWORD *)(v27 + 4) += 84;
      DataBindingComponent::DataBinding::~DataBinding((DataBindingComponent::DataBinding *)&v43);
      HIDWORD(v8) = v38 + 1;
    }
    while ( v38 + 1 != v35 );
    v8 = *(_QWORD *)&v65;
    if ( v65 != v66 )
      do
        v31 = (int *)(*(_DWORD *)v8 - 12);
        if ( v31 != &dword_28898C0 )
          v29 = (unsigned int *)(*(_DWORD *)v8 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j_j__ZdlPv_9(v31);
        LODWORD(v8) = v8 + 4;
      while ( (_DWORD)v8 != HIDWORD(v8) );
      HIDWORD(v8) = v65;
  }
  if ( HIDWORD(v8) )
    operator delete((void *)HIDWORD(v8));
}


int __fastcall DataBindingComponent::resetBindings(DataBindingComponent *this)
{
  int result; // r0@1
  int i; // r1@1
  __int64 v3; // kr00_8@1

  v3 = *((_QWORD *)this + 1);
  result = *((_QWORD *)this + 1) >> 32;
  for ( i = v3; result != i; i += 84 )
  {
    if ( *(_DWORD *)(i + 4) == 1 )
    {
      *(_BYTE *)(i + 80) = 0;
    }
    else if ( *(_DWORD *)i != 4 )
  }
  return result;
}


void __fastcall DataBindingComponent::~DataBindingComponent(DataBindingComponent *this)
{
  DataBindingComponent::~DataBindingComponent(this);
}


DataBindingComponent::DataBinding *__fastcall DataBindingComponent::DataBinding::~DataBinding(DataBindingComponent::DataBinding *this)
{
  DataBindingComponent::DataBinding *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r1@9
  void *v6; // r0@9
  void *v7; // r0@10
  int v8; // r1@12
  void *v9; // r0@12
  int v10; // r1@13
  void *v11; // r0@13
  int v12; // r1@14
  void *v13; // r0@14
  void *v14; // r0@15
  int v15; // r1@17
  void *v16; // r0@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37

  v1 = this;
  v2 = *((_DWORD *)this + 16);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = *((_DWORD *)v1 + 14);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v5 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  std::_Destroy<ExprToken *,ExprToken>(*((_DWORD *)v1 + 10), *((_DWORD *)v1 + 11), (int)v1 + 40);
  v7 = (void *)*((_DWORD *)v1 + 10);
  if ( v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 9);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v8 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 8);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v10 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 7);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v12 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  std::_Destroy<ExprToken *,ExprToken>(*((_DWORD *)v1 + 3), *((_DWORD *)v1 + 4), (int)v1 + 12);
  v14 = (void *)*((_DWORD *)v1 + 3);
  if ( v14 )
    operator delete(v14);
  v15 = *((_DWORD *)v1 + 2);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v15 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  return v1;
}


void __fastcall DataBindingComponent::_updateCollectionBindingIndicies(DataBindingComponent *this)
{
  DataBindingComponent::_updateCollectionBindingIndicies(this);
}


int __fastcall DataBindingComponent::_bind(UIComponent *this, int a2, int a3, unsigned __int64 *a4)
{
  UIComponent *v4; // r10@1
  int v5; // r9@1
  int result; // r0@1
  int v7; // r7@1
  int v8; // r11@1
  int *v9; // r8@2
  int v10; // r0@2
  int v11; // r0@15
  int v12; // r4@18
  void (__fastcall *v13)(int, int, int, int *); // r6@18
  UIControl *v14; // r0@18
  int v15; // r4@19
  int v16; // r0@20
  UIComponent *v17; // r6@20
  int v18; // r10@20
  int v19; // r11@20
  int v20; // ST1C_4@20
  void (__fastcall *v21)(int, int, int, int); // ST18_4@20
  int v22; // r9@20
  UIControl *v23; // r0@20
  int v24; // r5@21
  unsigned int v25; // r0@22
  unsigned int *v26; // r6@22
  unsigned int v27; // r1@25
  unsigned int v28; // r2@26
  UIControl *v29; // r0@27
  bool v30; // zf@27
  int v31; // r4@30
  int v32; // r0@30
  _DWORD *v33; // r0@30
  __int64 v34; // r2@30
  int v35; // r0@32
  unsigned int *v36; // r2@33
  unsigned int v37; // r1@35
  unsigned int v38; // r0@43
  unsigned int *v39; // r4@47
  unsigned int v40; // r0@49
  int v41; // r5@54
  int v42; // r4@54
  UIControl *v43; // r8@54
  signed int v44; // r0@54
  unsigned int v45; // r6@54
  void *v46; // r2@54
  int i; // [sp+20h] [bp-50h]@1
  void *ptr; // [sp+24h] [bp-4Ch]@54
  int v49; // [sp+28h] [bp-48h]@54
  char *v50; // [sp+2Ch] [bp-44h]@54
  unsigned __int8 v51; // [sp+30h] [bp-40h]@57
  _DWORD *v52; // [sp+34h] [bp-3Ch]@30
  void (*v53)(void); // [sp+3Ch] [bp-34h]@30
  Json::Value *(__fastcall *v54)(Json::Value *, int, int, const char *, Json::Value *, int); // [sp+40h] [bp-30h]@30
  char v55; // [sp+44h] [bp-2Ch]@30
  int v56; // [sp+48h] [bp-28h]@32

  v4 = this;
  *((_BYTE *)this + 44) = 0;
  v5 = a3;
  result = *a4 >> 32;
  v7 = *a4;
  v8 = a2;
  for ( i = result; v7 != i; result = i )
  {
    v9 = (int *)(v7 + 28);
    v10 = *(_DWORD *)(v7 + 4);
    if ( !*(_DWORD *)(*(_DWORD *)(v7 + 28) - 12) )
      v9 = (int *)(v7 + 8);
    if ( (unsigned int)(v10 - 3) < 2 )
    {
      if ( v5 )
        goto LABEL_15;
    }
    else if ( v10 == 5 )
      if ( v5 != *(_BYTE *)(v7 + 81) )
      {
        *(_BYTE *)(v7 + 81) = v5;
      }
    else
      if ( v10 != 1 )
      if ( !*(_BYTE *)(v7 + 80) && (!*(_DWORD *)(*(_DWORD *)(v7 + 32) - 12) || *(_DWORD *)(v7 + 76) != -1) )
        *(_BYTE *)(v7 + 80) = 1;
LABEL_15:
        v11 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 == 4 )
        {
          v24 = *(_DWORD *)(v7 + 64);
          if ( v24 )
          {
            v25 = *(_DWORD *)(v24 + 4);
            v26 = (unsigned int *)(v24 + 4);
            while ( v25 )
            {
              __dmb();
              v27 = __ldrex(v26);
              if ( v27 == v25 )
              {
                v28 = __strex(v25 + 1, v26);
                v25 = v27;
                if ( !v28 )
                {
                  __dmb();
                  v29 = (UIControl *)*v26;
                  v30 = *v26 == 0;
                  if ( *v26 )
                  {
                    v29 = *(UIControl **)(v7 + 60);
                    v30 = v29 == 0;
                  }
                  if ( v30 )
                    goto LABEL_64;
                  v31 = UIControl::getPropertyBag(v29);
                  v32 = UIComponent::getOwner(v4);
                  UIControl::weakRef((UIControl *)&v55, v32);
                  v53 = 0;
                  v33 = operator new(4u);
                  *v33 = v4;
                  v52 = v33;
                  LODWORD(v34) = v7 + 56;
                  v54 = sub_C2B54C;
                  v53 = (void (*)(void))sub_C2B6F8;
                  HIDWORD(v34) = &v55;
                  UIPropertyBag::registerForPropertyChangedNotification(
                    v31,
                    (unsigned __int64 *)(v7 + 40),
                    v34,
                    (int)&v52);
                  if ( v53 )
                    v53();
                  v35 = v56;
                  if ( v56 )
                    v36 = (unsigned int *)(v56 + 8);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v37 = __ldrex(v36);
                      while ( __strex(v37 - 1, v36) );
                    }
                    else
                      v37 = (*v36)--;
                    if ( v37 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v35 + 12))();
                  if ( v24 )
LABEL_64:
                        v38 = __ldrex(v26);
                      while ( __strex(v38 - 1, v26) );
                      v38 = (*v26)--;
                    if ( v38 == 1 )
                      v39 = (unsigned int *)(v24 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v40 = __ldrex(v39);
                        while ( __strex(v40 - 1, v39) );
                      }
                      else
                        v40 = (*v39)--;
                      if ( v40 == 1 )
                        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
                  break;
                }
              }
              else
                __clrex();
            }
          }
        }
        else if ( v11 == 2 )
          v15 = *(_DWORD *)(v7 + 76);
          if ( v15 >= 0 )
            v16 = *(_DWORD *)v8;
            v17 = v4;
            v18 = v8;
            v19 = v5;
            v20 = *(_DWORD *)(v7 + 68);
            v21 = *(void (__fastcall **)(int, int, int, int))(v16 + 40);
            v22 = *(_DWORD *)(v7 + 72);
            v23 = (UIControl *)UIComponent::getOwner(v17);
            v5 = v19;
            UIControl::getPropertyBag(v23);
            v8 = v18;
            v4 = v17;
            v21(v8, v7 + 32, v20, v15);
        else if ( v11 == 1 )
          v12 = *(_DWORD *)(v7 + 72);
          v13 = *(void (__fastcall **)(int, int, int, int *))(*(_DWORD *)v8 + 44);
          v14 = (UIControl *)UIComponent::getOwner(v4);
          UIControl::getPropertyBag(v14);
          v13(v8, v7 + 8, v12, v9);
        v41 = *v9;
        v42 = *(_DWORD *)(*v9 - 12);
        v43 = (UIControl *)UIComponent::getOwner(v4);
        v44 = (*(_QWORD *)(v7 + 12) >> 32) - *(_QWORD *)(v7 + 12);
        v45 = -1431655765 * (v44 >> 4);
        v46 = 0;
        ptr = 0;
        v49 = 0;
        v50 = 0;
        if ( v44 )
          if ( v45 >= 0x5555556 )
            sub_DA7414();
          v46 = operator new(v44);
        ptr = v46;
        v49 = (int)v46;
        v50 = (char *)v46 + 48 * v45;
        v49 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                *(_QWORD *)(v7 + 12),
                *(_QWORD *)(v7 + 12) >> 32,
                (int)v46);
        v51 = *(_BYTE *)(v7 + 24);
        DataBindingComponent::_updateCustomComponentsPostBinding(v51, v42, v41, v43, (int)&ptr);
        std::_Destroy<ExprToken *,ExprToken>((int)ptr, v49, (int)&ptr);
        if ( ptr )
          operator delete(ptr);
        goto LABEL_59;
LABEL_59:
    v7 += 84;
  }
  return result;
}


void __fastcall DataBindingComponent::addCollectionBinding(DataBindingComponent *a1, int *a2, unsigned __int64 *a3, const void **a4, int a5)
{
  DataBindingComponent::addCollectionBinding(a1, a2, a3, a4, a5);
}


signed int __fastcall DataBindingComponent::hasAlwaysBinds(DataBindingComponent *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 4);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall DataBindingComponent::addGlobalBinding(DataBindingComponent *a1, unsigned __int64 *a2, const void **a3, int a4)
{
  DataBindingComponent *v4; // r5@1
  const void **v5; // r4@1
  __int64 v6; // r6@1
  int v7; // r5@4
  char v8; // r9@4
  int v9; // r0@4
  char *v10; // r10@4
  __int64 v11; // r0@5
  unsigned int v12; // r4@5
  int v13; // r2@5
  __int64 v14; // kr08_8@9
  int v15; // r5@9
  void *v16; // r0@10
  _BYTE *v17; // r5@15
  size_t v18; // r0@15
  int j; // r1@15
  int v20; // t1@16
  int v21; // r5@17
  __int64 v22; // r0@20
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  int *v25; // r0@36
  int v26; // [sp+8h] [bp-C8h]@2
  DataBindingComponent *v27; // [sp+Ch] [bp-C4h]@2
  int v28; // [sp+14h] [bp-BCh]@2
  int v29; // [sp+1Ch] [bp-B4h]@1
  unsigned __int64 *v30; // [sp+2Ch] [bp-A4h]@1
  int *v31; // [sp+30h] [bp-A0h]@1
  int v32; // [sp+34h] [bp-9Ch]@1
  char *v33; // [sp+38h] [bp-98h]@4
  char *v34; // [sp+3Ch] [bp-94h]@4
  char *i; // [sp+40h] [bp-90h]@4
  int v36; // [sp+44h] [bp-8Ch]@4
  int v37; // [sp+48h] [bp-88h]@3
  int v38; // [sp+4Ch] [bp-84h]@17
  void *v39; // [sp+50h] [bp-80h]@3
  char *v40; // [sp+54h] [bp-7Ch]@3
  int v41; // [sp+58h] [bp-78h]@3
  int v42; // [sp+5Ch] [bp-74h]@3
  char v43; // [sp+60h] [bp-70h]@3
  void *v44; // [sp+64h] [bp-6Ch]@3
  void *v45; // [sp+68h] [bp-68h]@3
  void *v46; // [sp+6Ch] [bp-64h]@3
  int v47; // [sp+70h] [bp-60h]@3
  int v48; // [sp+74h] [bp-5Ch]@3
  int v49; // [sp+78h] [bp-58h]@3
  char v50; // [sp+7Ch] [bp-54h]@3
  void *v51; // [sp+80h] [bp-50h]@3
  int v52; // [sp+84h] [bp-4Ch]@3
  int v53; // [sp+88h] [bp-48h]@3
  int v54; // [sp+8Ch] [bp-44h]@3
  int v55; // [sp+90h] [bp-40h]@3
  int v56; // [sp+94h] [bp-3Ch]@3
  char v57; // [sp+98h] [bp-38h]@3
  char v58; // [sp+99h] [bp-37h]@3
  int v59; // [sp+9Ch] [bp-34h]@1
  int v60; // [sp+A0h] [bp-30h]@1

  v4 = a1;
  v5 = a3;
  LODWORD(v6) = a2;
  v32 = a4;
  v31 = (int *)a3;
  v30 = a2;
  UiExpression::getProperties((UiExpression *)&v59, a2);
  UiExpression::updatePropertiesWithOverride((unsigned __int64 *)v6, v5);
  HIDWORD(v6) = v59;
  v29 = v60;
  if ( v59 != v60 )
  {
    v26 = (int)v4 + 8;
    v28 = (int)v4 + 32;
    v27 = v4;
    do
    {
      v39 = &unk_28898CC;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 1;
      v44 = &unk_28898CC;
      v45 = &unk_28898CC;
      v46 = &unk_28898CC;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 1;
      v51 = &unk_28898CC;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = -1;
      v57 = 0;
      v58 = 0;
      v37 = 1;
      EntityInteraction::setInteractText((int *)&v39, (int *)HIDWORD(v6));
      if ( UiExpression::isStatic((UiExpression *)v6) == 1 )
      {
        v7 = 0;
        v8 = 1;
        i = 0;
        v36 = 0;
        v9 = 0;
        v33 = 0;
        v34 = 0;
        v10 = 0;
        LOBYTE(v36) = 1;
      }
      else
        v11 = *(_QWORD *)v6;
        LODWORD(v11) = HIDWORD(v11) - v11;
        v12 = -1431655765 * ((signed int)v11 >> 4);
        v13 = HIDWORD(v11);
        if ( (_DWORD)v11 )
        {
          if ( v12 >= 0x5555556 )
            sub_DA7414();
          v10 = (char *)operator new(v11);
          HIDWORD(v11) = *(_QWORD *)v6 >> 32;
          v13 = *(_QWORD *)v6;
        }
        v33 = v10;
        v34 = v10;
        v7 = (int)&v10[48 * v12];
        i = &v10[48 * v12];
        v9 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
               v13,
               SHIDWORD(v11),
               (int)v10);
        v34 = (char *)v9;
        v8 = *(_BYTE *)(v6 + 12);
        LOBYTE(v36) = *(_BYTE *)(v6 + 12);
      v14 = *(_QWORD *)&v40;
      v40 = v10;
      v33 = 0;
      v34 = 0;
      v41 = v9;
      v42 = v7;
      v15 = v14;
      for ( i = 0; HIDWORD(v14) != v15; v15 += 48 )
        std::_Destroy<ExprToken *,ExprToken>(*(_DWORD *)(v15 + 16), *(_DWORD *)(v15 + 20), v15 + 16);
        v16 = *(void **)(v15 + 16);
        if ( v16 )
          operator delete(v16);
        Json::Value::~Value((Json::Value *)v15);
      if ( (_DWORD)v14 )
        operator delete((void *)v14);
      v43 = v8;
      std::_Destroy<ExprToken *,ExprToken>(0, 0, (int)&v33);
      v17 = (_BYTE *)*(_DWORD *)HIDWORD(v6);
      v18 = strlen(*(const char **)HIDWORD(v6));
      LODWORD(v6) = v30;
      for ( j = -2128831035; v18; j = 16777619 * (j ^ v20) )
        v20 = *v17++;
        --v18;
      v55 = j;
      EntityInteraction::setInteractText((int *)&v44, v31);
      v21 = v28;
      v38 = v32;
      if ( (v32 & 0xFFFFFFFE) != 2 )
        v21 = v26;
        if ( DataBindingComponent::_isCollectionSizeBinding(v27, (const DataBindingComponent::DataBinding *)&v37) )
          v21 = (int)v27 + 20;
      v22 = *(_QWORD *)(v21 + 4);
      if ( (_DWORD)v22 == HIDWORD(v22) )
        std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>>::_M_emplace_back_aux<DataBindingComponent::DataBinding const&>(
          (unsigned __int64 *)v21,
          (const DataBindingComponent::DataBinding *)&v37);
        DataBindingComponent::DataBinding::DataBinding(
          (DataBindingComponent::DataBinding *)v22,
        *(_DWORD *)(v21 + 4) += 84;
      DataBindingComponent::DataBinding::~DataBinding((DataBindingComponent::DataBinding *)&v37);
      HIDWORD(v6) += 4;
    }
    while ( HIDWORD(v6) != v29 );
    v6 = *(_QWORD *)&v59;
    if ( v59 != v60 )
      do
        v25 = (int *)(*(_DWORD *)v6 - 12);
        if ( v25 != &dword_28898C0 )
          v23 = (unsigned int *)(*(_DWORD *)v6 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j_j__ZdlPv_9(v25);
        LODWORD(v6) = v6 + 4;
      while ( (_DWORD)v6 != HIDWORD(v6) );
      HIDWORD(v6) = v59;
  }
  if ( HIDWORD(v6) )
    operator delete((void *)HIDWORD(v6));
}
