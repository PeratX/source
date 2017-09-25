

EndCityPieces::EndCityPiece *__fastcall EndCityPieces::EndCityPiece::~EndCityPiece(EndCityPieces::EndCityPiece *this)
{
  EndCityPieces::EndCityPiece *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_2723710;
  v2 = (void *)*((_DWORD *)this + 30);
  if ( v2 )
    j_operator delete(v2);
  v3 = *((_DWORD *)v1 + 28);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


int __fastcall EndCityPieces::_createPiece(TemplateStructurePiece **a1, int a2, int a3, const StructureSettings *a4, int *a5, __int16 a6, char a7)
{
  int v7; // r7@1
  TemplateStructurePiece **v8; // r4@1
  const StructureSettings *v9; // r6@1
  TemplateStructurePiece *v10; // r5@1
  char v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+14h] [bp-1Ch]@1
  char v15; // [sp+19h] [bp-17h]@1
  __int16 v16; // [sp+1Ah] [bp-16h]@1

  v7 = a3;
  v8 = a1;
  v9 = a4;
  v16 = a6;
  v15 = a7;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    a1,
    a2,
    a5,
    (const BlockPos *)(a3 + 96),
    &v16,
    &v15);
  v10 = *v8;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v12,
    *(const StructureSettings **)(v7 + 36),
    (const BlockPos *)(v7 + 40),
    v9,
    (TemplateStructurePiece *)((char *)*v8 + 40),
    (int)&BlockPos::ZERO);
  return (*(int (__fastcall **)(TemplateStructurePiece *, _DWORD, int, int))(*(_DWORD *)v10 + 8))(
           v10,
           *(_DWORD *)&v12,
           v13,
           v14);
}


int __fastcall EndCityPieces::HouseTowerGenerator::generate(int a1, StructureSettings *a2, int a3, Random *a4, int a5, StructureSettings *a6, int a7, Random *a8)
{
  Random *v8; // r10@1
  _DWORD *v9; // r9@1
  StructureSettings *v10; // r11@1
  __int16 v12; // r7@3
  int v13; // r5@3
  __int64 v14; // r0@3
  int v15; // r4@4
  void *v16; // r0@7
  unsigned int v17; // r0@8
  int v18; // r5@11
  __int64 v19; // r0@11
  int v20; // r5@13
  __int64 v21; // r0@13
  int v22; // r4@14
  int v23; // r5@15
  __int64 v24; // r0@15
  int v25; // r4@16
  void *v26; // r0@19
  int v27; // r5@20
  __int64 v28; // r0@20
  int v29; // r4@21
  void *v30; // r0@24
  int v31; // r5@25
  __int64 v32; // r0@25
  int v33; // r4@26
  void *v34; // r0@29
  unsigned int *v35; // r2@30
  signed int v36; // r1@32
  void *v37; // r0@36
  int *v38; // r0@37
  void *v39; // r0@40
  int v40; // r5@41
  __int64 v41; // r0@41
  void *v42; // r0@45
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  unsigned int *v45; // r2@57
  signed int v46; // r1@59
  unsigned int *v47; // r2@61
  signed int v48; // r1@63
  unsigned int *v49; // r2@65
  signed int v50; // r1@67
  unsigned int *v51; // r2@69
  signed int v52; // r1@71
  unsigned int *v53; // r2@73
  signed int v54; // r1@75
  int v55; // [sp+18h] [bp-130h]@41
  int v56; // [sp+1Ch] [bp-12Ch]@41
  signed int v57; // [sp+20h] [bp-128h]@41
  signed int v58; // [sp+24h] [bp-124h]@41
  int v59; // [sp+28h] [bp-120h]@41
  int v60; // [sp+30h] [bp-118h]@25
  int v61; // [sp+34h] [bp-114h]@25
  signed int v62; // [sp+38h] [bp-110h]@25
  signed int v63; // [sp+3Ch] [bp-10Ch]@25
  int v64; // [sp+40h] [bp-108h]@25
  int v65; // [sp+48h] [bp-100h]@15
  int v66; // [sp+4Ch] [bp-FCh]@15
  int v67; // [sp+50h] [bp-F8h]@15
  signed int v68; // [sp+54h] [bp-F4h]@15
  int v69; // [sp+58h] [bp-F0h]@15
  int v70; // [sp+60h] [bp-E8h]@20
  int v71; // [sp+64h] [bp-E4h]@20
  signed int v72; // [sp+68h] [bp-E0h]@20
  signed int v73; // [sp+6Ch] [bp-DCh]@20
  int v74; // [sp+70h] [bp-D8h]@20
  int v75; // [sp+78h] [bp-D0h]@13
  int v76; // [sp+7Ch] [bp-CCh]@13
  int v77; // [sp+80h] [bp-C8h]@13
  signed int v78; // [sp+84h] [bp-C4h]@13
  int v79; // [sp+88h] [bp-C0h]@13
  int v80; // [sp+90h] [bp-B8h]@11
  int v81; // [sp+94h] [bp-B4h]@11
  signed int v82; // [sp+98h] [bp-B0h]@11
  signed int v83; // [sp+9Ch] [bp-ACh]@11
  int v84; // [sp+A0h] [bp-A8h]@11
  int v85; // [sp+A8h] [bp-A0h]@3
  int v86; // [sp+ACh] [bp-9Ch]@3
  char v87; // [sp+B0h] [bp-98h]@3
  int v88; // [sp+B4h] [bp-94h]@3
  int v89; // [sp+B8h] [bp-90h]@3
  char v90; // [sp+BDh] [bp-8Bh]@3
  __int16 v91; // [sp+BEh] [bp-8Ah]@3
  char v92; // [sp+C0h] [bp-88h]@11
  int v93; // [sp+C4h] [bp-84h]@11
  int v94; // [sp+C8h] [bp-80h]@11
  char v95; // [sp+CDh] [bp-7Bh]@11
  __int16 v96; // [sp+CEh] [bp-7Ah]@11
  char v97; // [sp+D0h] [bp-78h]@13
  int v98; // [sp+D4h] [bp-74h]@13
  int v99; // [sp+D8h] [bp-70h]@13
  char v100; // [sp+DDh] [bp-6Bh]@13
  __int16 v101; // [sp+DEh] [bp-6Ah]@13
  char v102; // [sp+E0h] [bp-68h]@20
  int v103; // [sp+E4h] [bp-64h]@20
  int v104; // [sp+E8h] [bp-60h]@20
  char v105; // [sp+EDh] [bp-5Bh]@20
  __int16 v106; // [sp+EEh] [bp-5Ah]@20
  char v107; // [sp+F0h] [bp-58h]@15
  int v108; // [sp+F4h] [bp-54h]@15
  int v109; // [sp+F8h] [bp-50h]@15
  char v110; // [sp+FDh] [bp-4Bh]@15
  __int16 v111; // [sp+FEh] [bp-4Ah]@15
  char v112; // [sp+100h] [bp-48h]@25
  int v113; // [sp+104h] [bp-44h]@25
  int v114; // [sp+108h] [bp-40h]@25
  char v115; // [sp+10Dh] [bp-3Bh]@25
  __int16 v116; // [sp+10Eh] [bp-3Ah]@25
  char v117; // [sp+110h] [bp-38h]@41
  int v118; // [sp+114h] [bp-34h]@41
  int v119; // [sp+118h] [bp-30h]@41
  char v120; // [sp+11Dh] [bp-2Bh]@41
  __int16 v121; // [sp+11Eh] [bp-2Ah]@41

  v8 = a4;
  v9 = (_DWORD *)a3;
  v10 = a2;
  if ( (signed int)a4 > 8 )
    return 0;
  v12 = *(_WORD *)j_StructureSettings::getRotation((StructureSettings *)(a5 + 40));
  sub_21E94B4((void **)&v85, "base_floor");
  v91 = v12;
  v90 = 1;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    (TemplateStructurePiece **)&v86,
    (int)v10,
    &v85,
    (const BlockPos *)(a5 + 96),
    &v91,
    &v90);
  v13 = v86;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v87,
    *(const StructureSettings **)(a5 + 36),
    (const BlockPos *)(a5 + 40),
    a6,
    (const BlockPos *)(v86 + 40),
    (int)&BlockPos::ZERO);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v13 + 8))(v13, *(_DWORD *)&v87, v88, v89);
  v14 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v14 == HIDWORD(v14) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)a7,
      &v86);
    v15 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v86 )
      (*(void (**)(void))(*(_DWORD *)v86 + 4))();
  }
  else
    v86 = 0;
    *(_DWORD *)v14 = v13;
    *(_DWORD *)(a7 + 4) = v14 + 4;
    v15 = *(_DWORD *)v14;
  v86 = 0;
  v16 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v85 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = j_Random::_genRandInt32(a8) % 3;
  if ( v17 == 2 )
    v66 = -1;
    v67 = 0;
    v68 = -1;
    sub_21E94B4((void **)&v65, "second_floor_2");
    v111 = v12;
    v110 = 0;
    j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
      (TemplateStructurePiece **)&v69,
      (int)v10,
      &v65,
      (const BlockPos *)(v15 + 96),
      &v111,
      &v110);
    v23 = v69;
    j_StructureTemplate::calculateConnectedPosition(
      (StructureTemplate *)&v107,
      *(const StructureSettings **)(v15 + 36),
      (const BlockPos *)(v15 + 40),
      (const StructureSettings *)&v66,
      (const BlockPos *)(v69 + 40),
      (int)&BlockPos::ZERO);
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v23 + 8))(v23, *(_DWORD *)&v107, v108, v109);
    v24 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v24 == HIDWORD(v24) )
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
        (_QWORD *)a7,
        &v69);
      v25 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v69 )
        (*(void (**)(void))(*(_DWORD *)v69 + 4))();
      v69 = 0;
      *(_DWORD *)v24 = v23;
      *(_DWORD *)(a7 + 4) = v24 + 4;
      v25 = *(_DWORD *)v24;
    v69 = 0;
    v30 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v65 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
      }
      else
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v61 = -1;
    v62 = 4;
    v63 = -1;
    sub_21E94B4((void **)&v60, "third_floor_c");
    v116 = v12;
    v115 = 0;
      (TemplateStructurePiece **)&v64,
      &v60,
      (const BlockPos *)(v25 + 96),
      &v116,
      &v115);
    v31 = v64;
      (StructureTemplate *)&v112,
      *(const StructureSettings **)(v25 + 36),
      (const BlockPos *)(v25 + 40),
      (const StructureSettings *)&v61,
      (const BlockPos *)(v64 + 40),
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v31 + 8))(v31, *(_DWORD *)&v112, v113, v114);
    v32 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v32 == HIDWORD(v32) )
        &v64);
      v33 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v64 )
        (*(void (**)(void))(*(_DWORD *)v64 + 4))();
      v64 = 0;
      *(_DWORD *)v32 = v31;
      *(_DWORD *)(a7 + 4) = v32 + 4;
      v33 = *(_DWORD *)v32;
    v64 = 0;
    v39 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v60 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v56 = -1;
    v57 = 8;
    v58 = -1;
    sub_21E94B4((void **)&v55, "third_roof");
    v121 = v12;
    v120 = 1;
      (TemplateStructurePiece **)&v59,
      &v55,
      (const BlockPos *)(v33 + 96),
      &v121,
      &v120);
    v40 = v59;
      (StructureTemplate *)&v117,
      *(const StructureSettings **)(v33 + 36),
      (const BlockPos *)(v33 + 40),
      (const StructureSettings *)&v56,
      (const BlockPos *)(v59 + 40),
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v40 + 8))(v40, *(_DWORD *)&v117, v118, v119);
    v41 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v41 == HIDWORD(v41) )
        &v59);
      v29 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 4))();
      v59 = 0;
      *(_DWORD *)v41 = v40;
      *(_DWORD *)(a7 + 4) = v41 + 4;
      v29 = *(_DWORD *)v41;
    v59 = 0;
    v42 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v55 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v38 = (int *)BlockPos::ZERO;
    if ( v17 != 1 )
      if ( !v17 )
        v81 = -1;
        v82 = 4;
        v83 = -1;
        sub_21E94B4((void **)&v80, "base_roof");
        v96 = v12;
        v95 = 1;
        j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
          (TemplateStructurePiece **)&v84,
          (int)v10,
          &v80,
          (const BlockPos *)(v15 + 96),
          &v96,
          &v95);
        v18 = v84;
        j_StructureTemplate::calculateConnectedPosition(
          (StructureTemplate *)&v92,
          *(const StructureSettings **)(v15 + 36),
          (const BlockPos *)(v15 + 40),
          (const StructureSettings *)&v81,
          (const BlockPos *)(v84 + 40),
          (int)&BlockPos::ZERO);
        (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v18 + 8))(v18, *(_DWORD *)&v92, v93, v94);
        v19 = *(_QWORD *)(a7 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
        {
          j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
            (_QWORD *)a7,
            &v84);
          if ( v84 )
            (*(void (**)(void))(*(_DWORD *)v84 + 4))();
        }
        else
          v84 = 0;
          *(_DWORD *)v19 = v18;
          *(_DWORD *)(a7 + 4) = v19 + 4;
        v84 = 0;
        v34 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v80 - 4);
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
            j_j_j_j__ZdlPv_9(v34);
      return 1;
    v76 = -1;
    v77 = 0;
    v78 = -1;
    sub_21E94B4((void **)&v75, "second_floor_2");
    v101 = v12;
    v100 = 0;
      (TemplateStructurePiece **)&v79,
      &v75,
      &v101,
      &v100);
    v20 = v79;
      (StructureTemplate *)&v97,
      (const StructureSettings *)&v76,
      (const BlockPos *)(v79 + 40),
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v20 + 8))(v20, *(_DWORD *)&v97, v98, v99);
    v21 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v21 == HIDWORD(v21) )
        &v79);
      v22 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 4))();
      v79 = 0;
      *(_DWORD *)v21 = v20;
      *(_DWORD *)(a7 + 4) = v21 + 4;
      v22 = *(_DWORD *)v21;
    v79 = 0;
    v26 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v75 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v71 = -1;
    v72 = 8;
    v73 = -1;
    sub_21E94B4((void **)&v70, "second_roof");
    v106 = v12;
    v105 = 0;
      (TemplateStructurePiece **)&v74,
      &v70,
      (const BlockPos *)(v22 + 96),
      &v106,
      &v105);
    v27 = v74;
      (StructureTemplate *)&v102,
      *(const StructureSettings **)(v22 + 36),
      (const BlockPos *)(v22 + 40),
      (const StructureSettings *)&v71,
      (const BlockPos *)(v74 + 40),
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v27 + 8))(v27, *(_DWORD *)&v102, v103, v104);
    v28 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v28 == HIDWORD(v28) )
        &v74);
      if ( v74 )
        (*(void (**)(void))(*(_DWORD *)v74 + 4))();
      v74 = 0;
      *(_DWORD *)v28 = v27;
      *(_DWORD *)(a7 + 4) = v28 + 4;
      v29 = *(_DWORD *)v28;
    v74 = 0;
    v37 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v70 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
  j_EndCityPieces::_recursiveChildren((int)v10, v9, 0, (signed int)v8 + 1, v29, *v38, a7, a8);
  return 1;
}


int __fastcall EndCityPieces::EndCityPiece::_loadAndSetup(EndCityPieces::EndCityPiece *this, const BlockPos *a2)
{
  EndCityPieces::EndCityPiece *v2; // r5@1
  pthread_mutex_t *v3; // r6@1
  const BlockPos *v4; // r8@1
  const void **v5; // r7@1
  StructureTemplate *v6; // r9@1
  char *v7; // r0@1
  void *v8; // r0@2
  int v9; // r4@4
  int v10; // r6@4
  int v11; // r7@4
  int v12; // r4@4
  int v13; // r6@4
  int v14; // r7@4
  int v15; // r1@4
  int v16; // r0@4
  unsigned int *v18; // r2@5
  signed int v19; // r1@7
  int v20; // [sp+0h] [bp-60h]@4
  int v21; // [sp+4h] [bp-5Ch]@4
  int v22; // [sp+8h] [bp-58h]@4
  int v23; // [sp+Ch] [bp-54h]@4
  int v24; // [sp+10h] [bp-50h]@4
  int v25; // [sp+14h] [bp-4Ch]@4
  int v26; // [sp+18h] [bp-48h]@4
  int v27; // [sp+1Ch] [bp-44h]@4
  int v28; // [sp+20h] [bp-40h]@4
  int v29; // [sp+24h] [bp-3Ch]@4
  int v30; // [sp+28h] [bp-38h]@4
  int v31; // [sp+2Ch] [bp-34h]@4
  int v32; // [sp+30h] [bp-30h]@4
  int v33; // [sp+34h] [bp-2Ch]@4
  char *v34; // [sp+3Ch] [bp-24h]@1

  v2 = this;
  v3 = (pthread_mutex_t *)*((_DWORD *)this + 27);
  v4 = a2;
  v34 = (char *)&unk_28898CC;
  v5 = (const void **)((char *)this + 112);
  sub_21E6FCC((const void **)&v34, *(_DWORD *)(*((_DWORD *)this + 28) - 12) + 8);
  sub_21E7408((const void **)&v34, "endcity/", 8u);
  sub_21E72F0((const void **)&v34, v5);
  v6 = (StructureTemplate *)j_StructureManager::getOrCreate(v3, (int **)&v34);
  v7 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = &EndCityPieces::mOverwriteSettings;
  if ( !*((_BYTE *)v2 + 118) )
    v8 = &EndCityPieces::mInsertSettings;
  v9 = *((_DWORD *)v8 + 1);
  v10 = *((_DWORD *)v8 + 2);
  v11 = *((_DWORD *)v8 + 3);
  v20 = *(_DWORD *)v8;
  v21 = v9;
  v22 = v10;
  v23 = v11;
  v12 = *((_DWORD *)v8 + 5);
  v13 = *((_DWORD *)v8 + 6);
  v14 = *((_DWORD *)v8 + 7);
  v24 = *((_DWORD *)v8 + 4);
  v25 = v12;
  v26 = v13;
  v27 = v14;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v28 = *((_DWORD *)v8 + 8);
  v29 = *((_DWORD *)v8 + 9);
  v30 = *((_DWORD *)v8 + 10);
  v31 = *((_DWORD *)v8 + 11);
  v15 = *((_DWORD *)v8 + 12);
  v16 = *((_DWORD *)v8 + 13);
  v32 = v15;
  v33 = v16;
  j_StructureSettings::setRotation((StructureSettings *)&v20, *((_WORD *)v2 + 58));
  return j_TemplateStructurePiece::_setup(v2, v6, (const StructureSettings *)&v20, v4);
}


void __fastcall EndCityPieces::EndCityPiece::postProcessMobsAt(EndCityPieces::EndCityPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  EndCityPieces::EndCityPiece::postProcessMobsAt(this, a2, a3, a4);
}


signed int __fastcall EndCityPieces::EndCityPiece::getType(EndCityPieces::EndCityPiece *this)
{
  return 1162040400;
}


signed int __fastcall EndCityPieces::_recursiveChildren(int a1, _DWORD *a2, int a3, signed int a4, int a5, int a6, int a7, Random *a8)
{
  signed int v8; // r4@1
  int v9; // r2@2
  int v10; // r3@2
  unsigned int v11; // r0@3
  int *v12; // r5@3 OVERLAPPED
  int *v13; // r6@3 OVERLAPPED
  unsigned int v14; // r7@4
  int v15; // r0@5
  int v16; // r0@5
  bool v17; // zf@5
  int *v18; // r5@10 OVERLAPPED
  int *v19; // r6@10 OVERLAPPED
  __int64 v20; // r0@11
  _DWORD *v21; // r5@17 OVERLAPPED
  _DWORD *v22; // r6@17 OVERLAPPED
  _DWORD *v24; // [sp+14h] [bp-24h]@2
  _DWORD *v25; // [sp+18h] [bp-20h]@2
  int v26; // [sp+1Ch] [bp-1Ch]@2

  v8 = 0;
  if ( a4 <= 8 )
  {
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( (***(int (__cdecl ****)(_DWORD, int, _DWORD *, signed int))(*a2 + 4 * a3))(
           *(_DWORD *)(*a2 + 4 * a3),
           a1,
           a2,
           a4) == 1 )
    {
      v11 = j_Random::_genRandInt32(a8);
      *(_QWORD *)&v12 = *(_QWORD *)&v24;
      if ( v24 != v25 )
      {
        v14 = v11 >> 1;
        do
        {
          v15 = *v12;
          *(_DWORD *)(v15 + 32) = v14;
          v16 = j_StructurePiece::findCollisionPiece((__int64 *)a7, v15 + 4);
          v17 = v16 == 0;
          if ( v16 )
            v17 = *(_DWORD *)(v16 + 32) == *(_DWORD *)(a5 + 32);
          if ( !v17 )
          {
            v8 = 0;
            goto LABEL_17;
          }
          ++v12;
        }
        while ( v13 != v12 );
        *(_QWORD *)&v18 = *(_QWORD *)&v24;
        if ( v24 != v25 )
          do
            v20 = *(_QWORD *)(a7 + 4);
            if ( (_DWORD)v20 == HIDWORD(v20) )
            {
              j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
                (_QWORD *)a7,
                v18);
            }
            else
              HIDWORD(v20) = *v18;
              *v18 = 0;
              *(_DWORD *)v20 = HIDWORD(v20);
              *(_DWORD *)(a7 + 4) += 4;
            ++v18;
          while ( v19 != v18 );
      }
      v8 = 1;
    }
    else
      v8 = 0;
LABEL_17:
    *(_QWORD *)&v21 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      do
        if ( *v21 )
          (*(void (__cdecl **)(_DWORD, _DWORD, int, int))(*(_DWORD *)*v21 + 4))(
            *v21,
            *(_DWORD *)(*(_DWORD *)*v21 + 4),
            v9,
            v10);
        *v21 = 0;
        ++v21;
      while ( v22 != v21 );
      v21 = v24;
    if ( v21 )
      j_operator delete(v21);
  }
  return v8;
}


int __fastcall EndCityPieces::TowerBridgeGenerator::TowerBridgeGenerator(int result)
{
  *(_DWORD *)result = &off_27236FC;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


void __fastcall EndCityPieces::startHouseTower(int a1, const BlockPos *a2, __int16 a3, int a4, Random *a5)
{
  __int16 v5; // r6@1
  int v6; // r8@1
  int v7; // r5@1
  const BlockPos *v8; // r7@1
  _DWORD *v9; // r0@3
  int v10; // r1@3
  _BYTE *v11; // r0@7
  int v12; // r1@7
  _DWORD *v13; // r0@11
  int v14; // r1@11
  __int64 v15; // r0@15
  int v16; // r7@16
  int v17; // r6@19
  __int64 v18; // r0@19
  int v19; // r7@20
  void *v20; // r0@23
  int v21; // r6@24
  __int64 v22; // r0@24
  int v23; // r7@25
  void *v24; // r0@28
  int v25; // r6@29
  __int64 v26; // r0@29
  int v27; // r6@30
  void *v28; // r0@33
  __int64 v29; // r4@34
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  int v36; // [sp+18h] [bp-B8h]@29
  int v37; // [sp+1Ch] [bp-B4h]@29
  signed int v38; // [sp+20h] [bp-B0h]@29
  signed int v39; // [sp+24h] [bp-ACh]@29
  int v40; // [sp+28h] [bp-A8h]@29
  int v41; // [sp+30h] [bp-A0h]@24
  int v42; // [sp+34h] [bp-9Ch]@24
  signed int v43; // [sp+38h] [bp-98h]@24
  signed int v44; // [sp+3Ch] [bp-94h]@24
  int v45; // [sp+40h] [bp-90h]@24
  int v46; // [sp+48h] [bp-88h]@19
  int v47; // [sp+4Ch] [bp-84h]@19
  int v48; // [sp+50h] [bp-80h]@19
  int v49; // [sp+54h] [bp-7Ch]@19
  int v50; // [sp+58h] [bp-78h]@19
  char v51; // [sp+5Fh] [bp-71h]@15
  int v52; // [sp+60h] [bp-70h]@15
  _DWORD *v53; // [sp+64h] [bp-6Ch]@11
  _BYTE *v54; // [sp+68h] [bp-68h]@7
  _DWORD *v55; // [sp+6Ch] [bp-64h]@3
  void *v56; // [sp+70h] [bp-60h]@1
  _DWORD *v57; // [sp+74h] [bp-5Ch]@1
  _DWORD *v58; // [sp+78h] [bp-58h]@1
  _DWORD *v59; // [sp+7Ch] [bp-54h]@1
  __int16 v60; // [sp+82h] [bp-4Eh]@1
  char v61; // [sp+84h] [bp-4Ch]@19
  int v62; // [sp+88h] [bp-48h]@19
  int v63; // [sp+8Ch] [bp-44h]@19
  char v64; // [sp+91h] [bp-3Fh]@19
  __int16 v65; // [sp+92h] [bp-3Eh]@19
  char v66; // [sp+94h] [bp-3Ch]@24
  int v67; // [sp+98h] [bp-38h]@24
  int v68; // [sp+9Ch] [bp-34h]@24
  char v69; // [sp+A1h] [bp-2Fh]@24
  __int16 v70; // [sp+A2h] [bp-2Eh]@24
  char v71; // [sp+A4h] [bp-2Ch]@29
  int v72; // [sp+A8h] [bp-28h]@29
  int v73; // [sp+ACh] [bp-24h]@29
  char v74; // [sp+B1h] [bp-1Fh]@29
  __int16 v75; // [sp+B2h] [bp-1Eh]@29

  v5 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  v60 = a3;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v56 = j_operator new(4u);
  *(_DWORD *)v56 = &off_272375C;
  j_std::vector<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>,std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::TowerGenerator,std::default_delete<EndCityPieces::TowerGenerator>>>(
    &v57,
    (int *)&v56);
  if ( v56 )
    (*(void (**)(void))(*(_DWORD *)v56 + 8))();
  v56 = 0;
  v9 = j_operator new(4u);
  v55 = v9;
  *v9 = &off_2723770;
  v10 = (int)v58;
  if ( v58 == v59 )
  {
    j_std::vector<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>,std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::FatTowerGenerator,std::default_delete<EndCityPieces::FatTowerGenerator>>>(
      &v57,
      (int *)&v55);
    if ( v55 )
      (*(void (**)(void))(*v55 + 8))();
  }
  else
    v55 = 0;
    *v58 = v9;
    v58 = (_DWORD *)(v10 + 4);
  v55 = 0;
  v11 = j_operator new(8u);
  v54 = v11;
  *(_DWORD *)v11 = &off_27236FC;
  v11[4] = 0;
  v12 = (int)v58;
    j_std::vector<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>,std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::TowerBridgeGenerator,std::default_delete<EndCityPieces::TowerBridgeGenerator>>>(
      (int *)&v54);
    if ( v54 )
      (*(void (**)(void))(*(_DWORD *)v54 + 8))();
    v54 = 0;
    *v58 = v11;
    v58 = (_DWORD *)(v12 + 4);
  v54 = 0;
  v13 = j_operator new(4u);
  v53 = v13;
  *v13 = &off_2723784;
  v14 = (int)v58;
    j_std::vector<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>,std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator,std::default_delete<EndCityPieces::SectionGenerator>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::HouseTowerGenerator,std::default_delete<EndCityPieces::HouseTowerGenerator>>>(
      (int *)&v53);
    if ( v53 )
      (*(void (**)(void))(*v53 + 8))();
    v53 = 0;
    *v58 = v13;
    v58 = (_DWORD *)(v14 + 4);
  v53 = 0;
  v51 = 1;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,char const(&)[11],BlockPos const&,Rotation &,bool>(
    (TemplateStructurePiece **)&v52,
    v6,
    "base_floor",
    v8,
    &v60,
    &v51);
  v15 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v15 == HIDWORD(v15) )
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)v7,
      &v52);
    v16 = *(_DWORD *)(*(_DWORD *)(v7 + 4) - 4);
    if ( v52 )
      (*(void (**)(void))(*(_DWORD *)v52 + 4))();
    HIDWORD(v15) = v52;
    v52 = 0;
    *(_DWORD *)v15 = HIDWORD(v15);
    *(_DWORD *)(v7 + 4) = v15 + 4;
    v16 = *(_DWORD *)v15;
  v52 = 0;
  v47 = -1;
  v48 = 0;
  v49 = -1;
  sub_21E94B4((void **)&v46, "second_floor");
  v65 = v5;
  v64 = 0;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    (TemplateStructurePiece **)&v50,
    &v46,
    (const BlockPos *)(v16 + 96),
    &v65,
    &v64);
  v17 = v50;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v61,
    *(const StructureSettings **)(v16 + 36),
    (const BlockPos *)(v16 + 40),
    (const StructureSettings *)&v47,
    (const BlockPos *)(v50 + 40),
    (int)&BlockPos::ZERO);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v17 + 8))(v17, *(_DWORD *)&v61, v62, v63);
  v18 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v18 == HIDWORD(v18) )
      &v50);
    v19 = *(_DWORD *)(*(_DWORD *)(v7 + 4) - 4);
    if ( v50 )
      (*(void (**)(void))(*(_DWORD *)v50 + 4))();
    v50 = 0;
    *(_DWORD *)v18 = v17;
    *(_DWORD *)(v7 + 4) = v18 + 4;
    v19 = *(_DWORD *)v18;
  v50 = 0;
  v20 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v42 = -1;
  v43 = 4;
  v44 = -1;
  sub_21E94B4((void **)&v41, "third_floor");
  v70 = v60;
  v69 = 0;
    (TemplateStructurePiece **)&v45,
    &v41,
    (const BlockPos *)(v19 + 96),
    &v70,
    &v69);
  v21 = v45;
    (StructureTemplate *)&v66,
    *(const StructureSettings **)(v19 + 36),
    (const BlockPos *)(v19 + 40),
    (const StructureSettings *)&v42,
    (const BlockPos *)(v45 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v21 + 8))(v21, *(_DWORD *)&v66, v67, v68);
  v22 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
      &v45);
    v23 = *(_DWORD *)(*(_DWORD *)(v7 + 4) - 4);
    if ( v45 )
      (*(void (**)(void))(*(_DWORD *)v45 + 4))();
    v45 = 0;
    *(_DWORD *)v22 = v21;
    *(_DWORD *)(v7 + 4) = v22 + 4;
    v23 = *(_DWORD *)v22;
  v45 = 0;
  v24 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v41 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v37 = -1;
  v38 = 8;
  v39 = -1;
  sub_21E94B4((void **)&v36, "third_roof");
  v75 = v60;
  v74 = 1;
    (TemplateStructurePiece **)&v40,
    &v36,
    (const BlockPos *)(v23 + 96),
    &v75,
    &v74);
  v25 = v40;
    (StructureTemplate *)&v71,
    *(const StructureSettings **)(v23 + 36),
    (const BlockPos *)(v23 + 40),
    (const StructureSettings *)&v37,
    (const BlockPos *)(v40 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v25 + 8))(v25, *(_DWORD *)&v71, v72, v73);
  v26 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v26 == HIDWORD(v26) )
      &v40);
    v27 = *(_DWORD *)(*(_DWORD *)(v7 + 4) - 4);
    if ( v40 )
      (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    v40 = 0;
    *(_DWORD *)v26 = v25;
    *(_DWORD *)(v7 + 4) = v26 + 4;
    v27 = *(_DWORD *)v26;
  v40 = 0;
  v28 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v36 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  j_EndCityPieces::_recursiveChildren(v6, &v57, 0, 1, v27, (int)&BlockPos::ZERO, v7, a5);
  v29 = *(_QWORD *)&v57;
  if ( v57 != v58 )
    do
      if ( *(_DWORD *)v29 )
        (*(void (**)(void))(**(_DWORD **)v29 + 8))();
      *(_DWORD *)v29 = 0;
      LODWORD(v29) = v29 + 4;
    while ( HIDWORD(v29) != (_DWORD)v29 );
    LODWORD(v29) = v57;
  if ( (_DWORD)v29 )
    j_operator delete((void *)v29);
}


int __fastcall EndCityPieces::TowerBridgeGenerator::generate(int a1, int a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39)
{
  int v39; // r9@1
  int v40; // r10@1
  unsigned int v41; // r7@1
  char v42; // r8@1
  int v43; // r4@1
  __int64 v44; // r0@1
  int v45; // r9@2
  void *v46; // r0@5
  signed int v47; // r7@6
  int v48; // r0@6
  unsigned int *v49; // r2@7
  signed int v50; // r1@9
  unsigned int *v51; // r2@11
  signed int v52; // r1@13
  unsigned int *v53; // r2@15
  signed int v54; // r1@17
  int v55; // r6@31
  int v56; // r7@33
  __int64 v57; // r0@33
  int v58; // r7@35
  __int64 v59; // r0@35
  int v60; // r7@37
  __int64 v61; // r0@37
  void *v62; // r0@41
  void *v63; // r0@45
  void *v64; // r0@49
  int v65; // r5@55
  RotationUtil *v66; // r8@55
  unsigned int *v68; // r2@57
  signed int v69; // r1@59
  int v70; // r4@61
  __int64 v71; // kr10_8@61
  void *v72; // r0@69
  Rotation v73; // r2@71
  int v74; // r4@71
  __int64 v75; // r0@71
  int v76; // r4@72
  void *v77; // r0@75
  unsigned int *v78; // r2@77
  signed int v79; // r1@79
  unsigned int *v80; // r2@85
  signed int v81; // r1@87
  _DWORD *v82; // [sp+18h] [bp-148h]@2
  Random *v83; // [sp+1Ch] [bp-144h]@1
  int v84; // [sp+20h] [bp-140h]@1
  unsigned __int64 v85; // [sp+34h] [bp-12Ch]@5
  int v86; // [sp+40h] [bp-120h]@71
  int v87; // [sp+44h] [bp-11Ch]@71
  signed int v88; // [sp+48h] [bp-118h]@71
  int v89; // [sp+4Ch] [bp-114h]@71
  int v90; // [sp+50h] [bp-110h]@71
  int v91; // [sp+58h] [bp-108h]@61
  unsigned int v92; // [sp+5Ch] [bp-104h]@61
  signed int v93; // [sp+60h] [bp-100h]@61
  unsigned int v94; // [sp+64h] [bp-FCh]@61
  int v95; // [sp+68h] [bp-F8h]@61
  int v96; // [sp+6Ch] [bp-F4h]@55
  int v97; // [sp+70h] [bp-F0h]@55
  int v98; // [sp+74h] [bp-ECh]@55
  int v99; // [sp+7Ch] [bp-E4h]@11
  int v100; // [sp+80h] [bp-E0h]@33
  signed int v101; // [sp+84h] [bp-DCh]@33
  int v102; // [sp+88h] [bp-D8h]@33
  int v103; // [sp+8Ch] [bp-D4h]@33
  int v104; // [sp+94h] [bp-CCh]@15
  int v105; // [sp+98h] [bp-C8h]@37
  signed int v106; // [sp+9Ch] [bp-C4h]@37
  int v107; // [sp+A0h] [bp-C0h]@37
  int v108; // [sp+A4h] [bp-BCh]@37
  int v109; // [sp+ACh] [bp-B4h]@7
  int v110; // [sp+B0h] [bp-B0h]@35
  signed int v111; // [sp+B4h] [bp-ACh]@35
  int v112; // [sp+B8h] [bp-A8h]@35
  int v113; // [sp+BCh] [bp-A4h]@35
  int v114; // [sp+C4h] [bp-9Ch]@1
  int v115; // [sp+C8h] [bp-98h]@1
  int v116; // [sp+CCh] [bp-94h]@1
  int v117; // [sp+D0h] [bp-90h]@1
  int v118; // [sp+D4h] [bp-8Ch]@1
  char v119; // [sp+D8h] [bp-88h]@1
  int v120; // [sp+DCh] [bp-84h]@1
  int v121; // [sp+E0h] [bp-80h]@1
  char v122; // [sp+E5h] [bp-7Bh]@1
  __int16 v123; // [sp+E6h] [bp-7Ah]@1
  char v124; // [sp+E8h] [bp-78h]@35
  int v125; // [sp+ECh] [bp-74h]@35
  int v126; // [sp+F0h] [bp-70h]@35
  char v127; // [sp+F5h] [bp-6Bh]@35
  __int16 v128; // [sp+F6h] [bp-6Ah]@35
  char v129; // [sp+F8h] [bp-68h]@71
  int v130; // [sp+FCh] [bp-64h]@71
  int v131; // [sp+100h] [bp-60h]@71
  char v132; // [sp+105h] [bp-5Bh]@71
  __int16 v133; // [sp+106h] [bp-5Ah]@71
  char v134; // [sp+108h] [bp-58h]@37
  int v135; // [sp+10Ch] [bp-54h]@37
  int v136; // [sp+110h] [bp-50h]@37
  char v137; // [sp+115h] [bp-4Bh]@37
  __int16 v138; // [sp+116h] [bp-4Ah]@37
  char v139; // [sp+118h] [bp-48h]@33
  int v140; // [sp+11Ch] [bp-44h]@33
  int v141; // [sp+120h] [bp-40h]@33
  char v142; // [sp+125h] [bp-3Bh]@33
  __int16 v143; // [sp+126h] [bp-3Ah]@33
  char v144; // [sp+128h] [bp-38h]@61
  int v145; // [sp+12Ch] [bp-34h]@61
  int v146; // [sp+130h] [bp-30h]@61
  char v147; // [sp+135h] [bp-2Bh]@61
  __int16 v148; // [sp+136h] [bp-2Ah]@61

  v39 = a3;
  v84 = a1;
  v40 = a2;
  v83 = a4;
  v41 = *(_WORD *)j_StructureSettings::getRotation((StructureSettings *)(a5 + 40));
  v42 = j_Random::_genRandInt32((Random *)a8);
  v115 = 0;
  v116 = 0;
  v117 = -4;
  sub_21E94B4((void **)&v114, "bridge_piece");
  v123 = v41;
  v122 = 1;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    (TemplateStructurePiece **)&v118,
    v40,
    &v114,
    (const BlockPos *)(a5 + 96),
    &v123,
    &v122);
  v43 = v118;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v119,
    *(const StructureSettings **)(a5 + 36),
    (const BlockPos *)(a5 + 40),
    (const StructureSettings *)&v115,
    (const BlockPos *)(v118 + 40),
    (int)&BlockPos::ZERO);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v43 + 8))(v43, *(_DWORD *)&v119, v120, v121);
  v44 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v44 == HIDWORD(v44) )
  {
    v82 = (_DWORD *)v39;
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)a7,
      &v118);
    v45 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v118 )
      (*(void (**)(void))(*(_DWORD *)v118 + 4))();
  }
  else
    v118 = 0;
    *(_DWORD *)v44 = v43;
    *(_DWORD *)(a7 + 4) = v44 + 4;
    v45 = *(_DWORD *)v44;
  v85 = __PAIR__(v40, v41);
  v118 = 0;
  v46 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v114 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  *(_DWORD *)(v45 + 32) = -1;
  v47 = 0;
  v48 = 0;
  do
    v55 = v48;
    if ( j_Random::_genRandInt32((Random *)a8) & 0x8000000 )
      v110 = 0;
      v111 = v47;
      v112 = -4;
      sub_21E94B4((void **)&v109, "bridge_piece");
      v128 = v85;
      v127 = 1;
      j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
        (TemplateStructurePiece **)&v113,
        v40,
        &v109,
        (const BlockPos *)(v45 + 96),
        &v128,
        &v127);
      v58 = v113;
      j_StructureTemplate::calculateConnectedPosition(
        (StructureTemplate *)&v124,
        *(const StructureSettings **)(v45 + 36),
        (const BlockPos *)(v45 + 40),
        (const StructureSettings *)&v110,
        (const BlockPos *)(v113 + 40),
        (int)&BlockPos::ZERO);
      (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v58 + 8))(v58, *(_DWORD *)&v124, v125, v126);
      v59 = *(_QWORD *)(a7 + 4);
      if ( (_DWORD)v59 == HIDWORD(v59) )
      {
        j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
          (_QWORD *)a7,
          &v113);
        v45 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
        if ( v113 )
          (*(void (**)(void))(*(_DWORD *)v113 + 4))();
      }
      else
        v113 = 0;
        *(_DWORD *)v59 = v58;
        *(_DWORD *)(a7 + 4) = v59 + 4;
        v45 = *(_DWORD *)v59;
      v62 = (void *)(v109 - 12);
      v113 = 0;
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v109 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
        }
        else
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v47 = 0;
    else if ( j_Random::_genRandInt32((Random *)a8) & 0x8000000 )
      v105 = 0;
      v106 = v47;
      v107 = -4;
      sub_21E94B4((void **)&v104, "bridge_steep_stairs");
      v138 = v85;
      v137 = 1;
        (TemplateStructurePiece **)&v108,
        &v104,
        &v138,
        &v137);
      v60 = v108;
        (StructureTemplate *)&v134,
        (const StructureSettings *)&v105,
        (const BlockPos *)(v108 + 40),
      (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v60 + 8))(v60, *(_DWORD *)&v134, v135, v136);
      v61 = *(_QWORD *)(a7 + 4);
      if ( (_DWORD)v61 == HIDWORD(v61) )
          &v108);
        if ( v108 )
          (*(void (**)(void))(*(_DWORD *)v108 + 4))();
        v108 = 0;
        *(_DWORD *)v61 = v60;
        *(_DWORD *)(a7 + 4) = v61 + 4;
        v45 = *(_DWORD *)v61;
      v64 = (void *)(v104 - 12);
      v108 = 0;
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v104 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      v47 = 4;
      v100 = 0;
      v101 = v47;
      v102 = -8;
      sub_21E94B4((void **)&v99, "bridge_gentle_stairs");
      v143 = v85;
      v142 = 1;
        (TemplateStructurePiece **)&v103,
        &v99,
        &v143,
        &v142);
      v56 = v103;
        (StructureTemplate *)&v139,
        (const StructureSettings *)&v100,
        (const BlockPos *)(v103 + 40),
      (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v56 + 8))(v56, *(_DWORD *)&v139, v140, v141);
      v57 = *(_QWORD *)(a7 + 4);
      if ( (_DWORD)v57 == HIDWORD(v57) )
          &v103);
        if ( v103 )
          (*(void (**)(void))(*(_DWORD *)v103 + 4))();
        v103 = 0;
        *(_DWORD *)v57 = v56;
        *(_DWORD *)(a7 + 4) = v57 + 4;
        v45 = *(_DWORD *)v57;
      v63 = (void *)(v99 - 12);
      v103 = 0;
      if ( (int *)(v99 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v99 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v63);
    v48 = v55 + 1;
  while ( v55 < (v42 & 3) );
  if ( *(_BYTE *)(v84 + 4) || (Random *)10 != v83 && j_Random::_genRandInt32((Random *)a8) % (10 - (signed int)v83) )
    v96 = -3;
    v97 = v47 | 1;
    v98 = -11;
    v65 = v40;
    v66 = (RotationUtil *)v85;
    if ( !j_EndCityPieces::_recursiveChildren(v40, v82, 3, (signed int)v83 + 1, v45, (int)&v96, a7, (Random *)a8) )
      return 0;
    v92 = j_Random::_genRandInt32((Random *)a8) | 0xFFFFFFF8;
    v93 = v47;
    v94 = j_Random::_genRandInt32((Random *)a8) % 0xA - 70;
    sub_21E94B4((void **)&v91, "ship");
    v65 = HIDWORD(v85);
    v148 = v85;
    v147 = 1;
    j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
      (TemplateStructurePiece **)&v95,
      SHIDWORD(v85),
      &v91,
      (const BlockPos *)(v45 + 96),
      &v148,
      &v147);
    v70 = v95;
    j_StructureTemplate::calculateConnectedPosition(
      (StructureTemplate *)&v144,
      *(const StructureSettings **)(v45 + 36),
      (const BlockPos *)(v45 + 40),
      (const StructureSettings *)&v92,
      (const BlockPos *)(v95 + 40),
      (int)&BlockPos::ZERO);
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v70 + 8))(v70, *(_DWORD *)&v144, v145, v146);
    v71 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v71 == HIDWORD(v71) )
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
        (_QWORD *)a7,
        &v95);
      if ( v95 )
        (*(void (**)(void))(*(_DWORD *)v95 + 4))();
      v95 = 0;
      *(_DWORD *)v71 = v70;
      *(_DWORD *)(a7 + 4) = v71 + 4;
    v95 = 0;
    v72 = (void *)(v91 - 12);
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v91 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v72);
    *(_BYTE *)(v84 + 4) = 1;
  v87 = 4;
  v88 = v47;
  v89 = 0;
  sub_21E94B4((void **)&v86, "bridge_end");
  v133 = j_RotationUtil::getRotated(v66, 2, v73);
  v132 = 1;
    (TemplateStructurePiece **)&v90,
    v65,
    &v86,
    (const BlockPos *)(v45 + 96),
    &v133,
    &v132);
  v74 = v90;
    (StructureTemplate *)&v129,
    *(const StructureSettings **)(v45 + 36),
    (const BlockPos *)(v45 + 40),
    (const StructureSettings *)&v87,
    (const BlockPos *)(v90 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v74 + 8))(v74, *(_DWORD *)&v129, v130, v131);
  v75 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v75 == HIDWORD(v75) )
      &v90);
    v76 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v90 )
      (*(void (**)(void))(*(_DWORD *)v90 + 4))();
    v90 = 0;
    *(_DWORD *)v75 = v74;
    *(_DWORD *)(a7 + 4) = v75 + 4;
    v76 = *(_DWORD *)v75;
  v90 = 0;
  v77 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v86 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  *(_DWORD *)(v76 + 32) = -1;
  return 1;
}


int __fastcall EndCityPieces::init(EndCityPieces *this)
{
  j_StructureSettings::setIgnoreEntities((StructureSettings *)&EndCityPieces::mOverwriteSettings, 1);
  j_StructureSettings::setIgnoreEntities((StructureSettings *)&EndCityPieces::mInsertSettings, 1);
  return j_j_j__ZN17StructureSettings14setIgnoreBlockEPK5Block_0(
           (StructureSettings *)&EndCityPieces::mInsertSettings,
           (const Block *)Block::mAir);
}


int __fastcall EndCityPieces::TowerGenerator::generate(int a1, int a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19)
{
  return EndCityPieces::TowerGenerator::generate(
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
           a19);
}


void __fastcall EndCityPieces::EndCityPiece::postProcessMobsAt(EndCityPieces::EndCityPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  EndCityPieces::EndCityPiece *v4; // r4@1
  const BoundingBox *v5; // r11@1
  int v6; // r6@1
  int v7; // r9@1
  int v8; // r10@2
  void *v9; // r7@2
  int v10; // r8@2
  int v11; // r0@3
  int v12; // r1@5
  int v13; // r1@7
  Spawner *v14; // r5@9
  const Vec3 *v15; // r0@9
  Entity *v16; // r4@9
  void *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  void *v20; // r0@12
  bool v21; // zf@18
  int v22; // r0@18
  int v23; // r7@18
  unsigned int v24; // r1@18
  unsigned int v25; // r2@20
  unsigned int v26; // r0@20
  bool v27; // cf@22
  int v28; // r4@25
  _DWORD *v29; // r5@25
  _DWORD *v30; // r3@25
  int v31; // r0@25
  void *i; // r1@25
  int v33; // r2@26
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  EndCityPieces::EndCityPiece *v42; // r0@31
  int v43; // r0@66
  EndCityPieces::EndCityPiece *v44; // [sp+20h] [bp-68h]@1
  int v45; // [sp+24h] [bp-64h]@1
  BlockSource *v46; // [sp+28h] [bp-60h]@1
  Level *v47; // [sp+2Ch] [bp-5Ch]@1
  void *ptr; // [sp+34h] [bp-54h]@18
  int v49; // [sp+38h] [bp-50h]@14
  int v50; // [sp+3Ch] [bp-4Ch]@14
  int v51; // [sp+40h] [bp-48h]@14
  char v52; // [sp+44h] [bp-44h]@9
  int v53; // [sp+50h] [bp-38h]@9
  int v54; // [sp+54h] [bp-34h]@9
  int v55; // [sp+58h] [bp-30h]@10
  int v56; // [sp+5Ch] [bp-2Ch]@9

  v4 = this;
  v5 = a4;
  v46 = a2;
  v44 = this;
  v47 = (Level *)j_BlockSource::getLevel(a2);
  v7 = *((_QWORD *)v4 + 15) >> 32;
  v6 = *((_QWORD *)v4 + 15);
  v45 = v7;
  if ( v6 == v7 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v42 = v44;
  }
  else
    do
    {
      v11 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 < *(_DWORD *)v5
        || v11 > *((_DWORD *)v5 + 3)
        || (v12 = *(_DWORD *)(v6 + 8), v12 < *((_DWORD *)v5 + 2))
        || v12 > *((_DWORD *)v5 + 5)
        || (v13 = *(_DWORD *)(v6 + 4), v13 < *((_DWORD *)v5 + 1))
        || v13 > *((_DWORD *)v5 + 4) )
      {
        if ( v10 == v8 )
        {
          v21 = v10 == (_DWORD)v9;
          ptr = v9;
          v22 = (v10 - (signed int)v9) >> 2;
          v23 = -1431655765 * v22;
          v24 = -1431655765 * v22;
          if ( v21 )
            v24 = 1;
          v26 = v24 + -1431655765 * v22;
          v25 = v26;
          if ( v26 > 0x15555555 )
            v26 = 357913941;
          v27 = v25 >= v24;
          LOWORD(v24) = 21846;
          if ( !v27 )
          HIWORD(v24) = 5461;
          if ( v26 >= v24 )
            sub_21E57F4();
          v28 = 3 * v26;
          v29 = j_operator new(12 * v26);
          v30 = v29;
          v29[3 * v23] = *(_DWORD *)v6;
          v31 = (int)&v29[3 * v23];
          *(_DWORD *)(v31 + 4) = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(v31 + 8) = *(_DWORD *)(v6 + 8);
          for ( i = ptr; i != (void *)v10; v30 += 3 )
          {
            *v30 = *(_DWORD *)i;
            v30[1] = *((_DWORD *)i + 1);
            v33 = *((_DWORD *)i + 2);
            i = (char *)i + 12;
            v30[2] = v33;
          }
          v10 = (int)(v30 + 3);
          if ( ptr )
            j_operator delete(ptr);
          v8 = (int)&v29[v28];
          v9 = v29;
        }
        else
          *(_DWORD *)v10 = v11;
          *(_DWORD *)(v10 + 4) = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(v6 + 8);
          v10 += 12;
      }
      else
        v14 = (Spawner *)j_Level::getSpawner(v47);
        j_EntityTypeToString((void **)&v53, 0xB36u, 1);
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v54, &v53);
        j_Vec3::Vec3((int)&v52, v6);
        v16 = (Entity *)j_Spawner::spawnMob(v14, v46, (const EntityDefinitionIdentifier *)&v54, 0, v15, 0, 1, 0);
        v17 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
          else
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v18 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v55 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v19 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v54 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v53 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        if ( v16 )
          v49 = *(_DWORD *)v6;
          v50 = *(_DWORD *)(v6 + 4);
          v51 = *(_DWORD *)(v6 + 8);
          j_Shulker::setShulkerAttachPos((int)v16, (int)&v49);
          j_Entity::setPersistent(v16);
        v7 = v45;
      v6 += 12;
    }
    while ( v6 != v7 );
    v6 = *((_DWORD *)v44 + 30);
  v43 = (int)v42 + 120;
  *(_DWORD *)v43 = v9;
  *(_DWORD *)(v43 + 4) = v10;
  *(_DWORD *)(v43 + 8) = v8;
  if ( v6 )
    j_operator delete((void *)v6);
}


int __fastcall EndCityPieces::FatTowerGenerator::generate(int a1, int a2, int a3, Random *a4, int a5, int a6, int a7, Random *a8)
{
  Random *v8; // r8@1
  int v9; // r5@1
  char v10; // r0@1
  char *v11; // r0@3
  int v12; // lr@3
  char *v13; // r0@4
  __int16 v14; // r11@4
  int v15; // r4@4
  int v16; // r5@4
  __int64 v17; // r0@4
  int v18; // r7@5
  int v19; // r4@5
  void *v20; // r0@8
  int v21; // r5@9
  __int64 v22; // r0@9
  void *v23; // r0@13
  signed int v24; // r5@14
  Random *v25; // r6@14
  int v26; // r2@14
  int v27; // r8@15
  Random *v28; // r7@15
  int v29; // r6@15
  __int64 v30; // r0@15
  int v31; // r4@16
  void *v32; // r0@19
  int i; // r5@20
  int v34; // r11@20
  unsigned int *v35; // r2@22
  signed int v36; // r1@24
  Rotation v37; // r2@31
  Random *v38; // r8@31
  int v39; // r6@31
  __int64 v40; // r0@31
  BlockPos *v41; // r6@32
  void *v42; // r0@35
  BlockPos *v43; // ST00_4@36
  unsigned int *v44; // r2@40
  signed int v45; // r1@42
  unsigned int v46; // r0@48
  int v47; // r5@49
  __int64 v48; // r0@49
  unsigned int *v49; // r2@51
  signed int v50; // r1@53
  unsigned int *v51; // r2@55
  signed int v52; // r1@57
  void *v53; // r0@61
  unsigned int *v55; // r2@71
  signed int v56; // r1@73
  int v57; // [sp+18h] [bp-108h]@48
  signed int v58; // [sp+1Ch] [bp-104h]@14
  _DWORD *v59; // [sp+20h] [bp-100h]@1
  RotationUtil *v60; // [sp+30h] [bp-F0h]@4
  int v61; // [sp+34h] [bp-ECh]@10
  int v62; // [sp+40h] [bp-E0h]@49
  int v63; // [sp+44h] [bp-DCh]@49
  signed int v64; // [sp+48h] [bp-D8h]@49
  signed int v65; // [sp+4Ch] [bp-D4h]@49
  int v66; // [sp+50h] [bp-D0h]@49
  int v67; // [sp+58h] [bp-C8h]@22
  int v68; // [sp+5Ch] [bp-C4h]@31
  int v69; // [sp+64h] [bp-BCh]@15
  int v70; // [sp+68h] [bp-B8h]@15
  signed int v71; // [sp+6Ch] [bp-B4h]@15
  int v72; // [sp+70h] [bp-B0h]@15
  int v73; // [sp+74h] [bp-ACh]@15
  int v74; // [sp+7Ch] [bp-A4h]@9
  int v75; // [sp+80h] [bp-A0h]@9
  signed int v76; // [sp+84h] [bp-9Ch]@9
  int v77; // [sp+88h] [bp-98h]@9
  int v78; // [sp+8Ch] [bp-94h]@9
  int v79; // [sp+94h] [bp-8Ch]@4
  int v80; // [sp+98h] [bp-88h]@4
  signed int v81; // [sp+9Ch] [bp-84h]@4
  signed int v82; // [sp+A0h] [bp-80h]@4
  int v83; // [sp+A4h] [bp-7Ch]@4
  char v84; // [sp+A8h] [bp-78h]@49
  int v85; // [sp+ACh] [bp-74h]@49
  int v86; // [sp+B0h] [bp-70h]@49
  char v87; // [sp+B5h] [bp-6Bh]@49
  __int16 v88; // [sp+B6h] [bp-6Ah]@49
  char v89; // [sp+B8h] [bp-68h]@4
  int v90; // [sp+BCh] [bp-64h]@4
  int v91; // [sp+C0h] [bp-60h]@4
  char v92; // [sp+C5h] [bp-5Bh]@4
  __int16 v93; // [sp+C6h] [bp-5Ah]@4
  char v94; // [sp+C8h] [bp-58h]@9
  int v95; // [sp+CCh] [bp-54h]@9
  int v96; // [sp+D0h] [bp-50h]@9
  char v97; // [sp+D5h] [bp-4Bh]@9
  __int16 v98; // [sp+D6h] [bp-4Ah]@9
  char v99; // [sp+D8h] [bp-48h]@15
  int v100; // [sp+DCh] [bp-44h]@15
  int v101; // [sp+E0h] [bp-40h]@15
  char v102; // [sp+E5h] [bp-3Bh]@15
  __int16 v103; // [sp+E6h] [bp-3Ah]@15
  char v104; // [sp+ECh] [bp-34h]@31
  int v105; // [sp+F0h] [bp-30h]@31
  int v106; // [sp+F4h] [bp-2Ch]@31
  char v107; // [sp+F9h] [bp-27h]@31
  __int16 v108; // [sp+FAh] [bp-26h]@31

  v8 = a4;
  v59 = (_DWORD *)a3;
  v9 = a2;
  v10 = byte_2833078;
  __dmb();
  if ( !(v10 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2833078) )
  {
    dword_2833088 = 0;
    *(_DWORD *)algn_283308C = 0;
    dword_2833090 = 0;
    v11 = (char *)j_operator new(0x40u);
    *(_WORD *)v11 = 0;
    dword_2833088 = (int)v11;
    dword_2833090 = (int)(v11 + 64);
    *((_DWORD *)v11 + 1) = 4;
    v12 = (int)(v11 + 20);
    *((_DWORD *)v11 + 2) = -1;
    *((_DWORD *)v11 + 3) = 0;
    *((_WORD *)v11 + 8) = 1;
    *(_DWORD *)v12 = 12;
    *(_DWORD *)(v12 + 4) = -1;
    *(_DWORD *)(v12 + 8) = 4;
    *((_WORD *)v11 + 16) = 3;
    *((_DWORD *)v11 + 9) = 0;
    *((_QWORD *)v11 + 5) = 38654705663LL;
    *((_WORD *)v11 + 24) = 2;
    *((_DWORD *)v11 + 13) = 8;
    *((_DWORD *)v11 + 14) = -1;
    *((_DWORD *)v11 + 15) = 12;
    *(_DWORD *)algn_283308C = v11 + 64;
    j___cxa_atexit_0((int)std::vector<std::pair<Rotation,BlockPos>,std::allocator<std::pair<Rotation,BlockPos>>>::~vector);
    j_j___cxa_guard_release_0((unsigned int *)&byte_2833078);
  }
  v13 = j_StructureSettings::getRotation((StructureSettings *)(a5 + 40));
  v14 = *(_WORD *)v13;
  v60 = (RotationUtil *)*(_WORD *)v13;
  v80 = -3;
  v81 = 4;
  v82 = -3;
  sub_21E94B4((void **)&v79, "fat_tower_base");
  v93 = v14;
  v92 = 1;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    (TemplateStructurePiece **)&v83,
    v9,
    &v79,
    (const BlockPos *)(a5 + 96),
    &v93,
    &v92);
  v15 = v9;
  v16 = v83;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v89,
    *(const StructureSettings **)(a5 + 36),
    (const BlockPos *)(a5 + 40),
    (const StructureSettings *)&v80,
    (const BlockPos *)(v83 + 40),
    (int)&BlockPos::ZERO);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v16 + 8))(v16, *(_DWORD *)&v89, v90, v91);
  v17 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    v18 = v15;
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)a7,
      &v83);
    v19 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v83 )
      (*(void (**)(void))(*(_DWORD *)v83 + 4))();
  else
    v83 = 0;
    *(_DWORD *)v17 = v16;
    *(_DWORD *)(a7 + 4) = v17 + 4;
    v19 = *(_DWORD *)v17;
  v83 = 0;
  v20 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
    }
    else
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v75 = 0;
  v76 = 4;
  v77 = 0;
  sub_21E94B4((void **)&v74, "fat_tower_middle");
  v98 = v14;
  v97 = 1;
    (TemplateStructurePiece **)&v78,
    v18,
    &v74,
    (const BlockPos *)(v19 + 96),
    &v98,
    &v97);
  v21 = v78;
    (StructureTemplate *)&v94,
    *(const StructureSettings **)(v19 + 36),
    (const BlockPos *)(v19 + 40),
    (const StructureSettings *)&v75,
    (const BlockPos *)(v78 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v21 + 8))(v21, *(_DWORD *)&v94, v95, v96);
  v22 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
      &v78);
    v61 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v78 )
      (*(void (**)(void))(*(_DWORD *)v78 + 4))();
    v78 = 0;
    *(_DWORD *)v22 = v21;
    *(_DWORD *)(a7 + 4) = v22 + 4;
    v61 = *(_DWORD *)v22;
  v78 = 0;
  v23 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v74 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v58 = (signed int)v8 + 1;
  v24 = -1431655765;
  v25 = a8;
  v26 = 0;
  do
    v57 = v26;
    v46 = j_Random::_genRandInt32(v25);
    if ( v46 == 3 * ((unsigned int)(v46 * (unsigned __int64)(unsigned int)v24 >> 32) >> 1) )
      break;
    v70 = 0;
    v71 = 8;
    v72 = 0;
    sub_21E94B4((void **)&v69, "fat_tower_middle");
    v103 = v14;
    v102 = 1;
    j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
      (TemplateStructurePiece **)&v73,
      v18,
      &v69,
      (const BlockPos *)(v61 + 96),
      &v103,
      &v102);
    v27 = v18;
    v28 = v25;
    v29 = v73;
    j_StructureTemplate::calculateConnectedPosition(
      (StructureTemplate *)&v99,
      *(const StructureSettings **)(v61 + 36),
      (const BlockPos *)(v61 + 40),
      (const StructureSettings *)&v70,
      (const BlockPos *)(v73 + 40),
      (int)&BlockPos::ZERO);
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v29 + 8))(v29, *(_DWORD *)&v99, v100, v101);
    v30 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v30 == HIDWORD(v30) )
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
        (_QWORD *)a7,
        &v73);
      v25 = v28;
      v31 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v73 )
        (*(void (**)(void))(*(_DWORD *)v73 + 4))();
      v73 = 0;
      *(_DWORD *)v30 = v29;
      *(_DWORD *)(a7 + 4) = v30 + 4;
      v31 = *(_DWORD *)v30;
    v18 = v27;
    v73 = 0;
    v32 = (void *)(v69 - 12);
    v61 = v31;
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v69 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v18 = v27;
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v34 = *(_DWORD *)algn_283308C;
    for ( i = dword_2833088; i != v34; i += 16 )
      if ( j_Random::_genRandInt32(v25) & 0x8000000 )
        sub_21E94B4((void **)&v67, "bridge_end");
        v108 = j_RotationUtil::getRotated(v60, *(_WORD *)i, v37);
        v107 = 1;
        j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
          (TemplateStructurePiece **)&v68,
          v18,
          &v67,
          (const BlockPos *)(v31 + 96),
          &v108,
          &v107);
        v38 = v25;
        v39 = v68;
        j_StructureTemplate::calculateConnectedPosition(
          (StructureTemplate *)&v104,
          *(const StructureSettings **)(v31 + 36),
          (const BlockPos *)(v31 + 40),
          (const StructureSettings *)(i + 4),
          (const BlockPos *)(v68 + 40),
          (int)&BlockPos::ZERO);
        (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v39 + 8))(v39, *(_DWORD *)&v104, v105, v106);
        v40 = *(_QWORD *)(a7 + 4);
        if ( (_DWORD)v40 == HIDWORD(v40) )
        {
          j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
            (_QWORD *)a7,
            &v68);
          v41 = *(BlockPos **)(*(_DWORD *)(a7 + 4) - 4);
          if ( v68 )
            (*(void (**)(void))(*(_DWORD *)v68 + 4))();
        }
        else
          v68 = 0;
          *(_DWORD *)v40 = v39;
          *(_DWORD *)(a7 + 4) = v40 + 4;
          v41 = *(BlockPos **)v40;
        v68 = 0;
        v42 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v67 - 4);
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
            j_j_j_j__ZdlPv_9(v42);
        v43 = v41;
        v25 = v38;
        j_EndCityPieces::_recursiveChildren(v18, v59, 2, v58, (int)v43, (int)&BlockPos::ZERO, a7, v38);
    v24 = -1431655765;
    v14 = (signed __int16)v60;
    v26 = v57 + 1;
  while ( v57 + 1 < 2 );
  v63 = -2;
  v64 = 8;
  v65 = -2;
  sub_21E94B4((void **)&v62, "fat_tower_top");
  v88 = v14;
  v87 = 1;
    (TemplateStructurePiece **)&v66,
    &v62,
    (const BlockPos *)(v61 + 96),
    &v88,
    &v87);
  v47 = v66;
    (StructureTemplate *)&v84,
    *(const StructureSettings **)(v61 + 36),
    (const BlockPos *)(v61 + 40),
    (const StructureSettings *)&v63,
    (const BlockPos *)(v66 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v47 + 8))(v47, *(_DWORD *)&v84, v85, v86);
  v48 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v48 == HIDWORD(v48) )
      &v66);
    if ( v66 )
      (*(void (**)(void))(*(_DWORD *)v66 + 4))();
    v66 = 0;
    *(_DWORD *)v48 = v47;
    *(_DWORD *)(a7 + 4) = v48 + 4;
  v66 = 0;
  v53 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v62 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  return 1;
}


int __fastcall EndCityPieces::_addHelper(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  int v5; // r0@2
  int result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)a1,
      a2);
    result = *(_DWORD *)(*(_DWORD *)(v2 + 4) - 4);
  }
  else
    v4 = *a2;
    *a2 = 0;
    *(_DWORD *)v3 = v4;
    v5 = *(_DWORD *)(a1 + 4) + 4;
    *(_DWORD *)(v2 + 4) = v5;
    result = *(_DWORD *)(v5 - 4);
  return result;
}


TemplateStructurePiece *__fastcall EndCityPieces::EndCityPiece::EndCityPiece(TemplateStructurePiece *a1, int a2, int *a3, const BlockPos *a4, __int16 a5, char a6)
{
  int v6; // r6@1
  const BlockPos *v7; // r8@1
  int *v8; // r7@1
  TemplateStructurePiece *v9; // r5@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  j_TemplateStructurePiece::TemplateStructurePiece(a1, 0);
  *(_DWORD *)v9 = &off_2723710;
  *((_DWORD *)v9 + 27) = v6;
  sub_21E8AF4((int *)v9 + 28, v8);
  *((_WORD *)v9 + 58) = a5;
  *((_BYTE *)v9 + 118) = a6;
  *((_DWORD *)v9 + 30) = 0;
  *((_DWORD *)v9 + 31) = 0;
  *((_DWORD *)v9 + 32) = 0;
  j_EndCityPieces::EndCityPiece::_loadAndSetup(v9, v7);
  return v9;
}


void __fastcall EndCityPieces::EndCityPiece::_handleDataMarker(Random *a1, int a2, int a3, BlockSource *a4, Random *a5, int a6)
{
  _DWORD *v6; // r7@1
  BlockSource *v7; // r8@1
  int v8; // r5@1
  Random *v9; // r9@1
  signed int v10; // r4@1
  void *v11; // r0@1
  __int64 v12; // kr00_8@3
  int v13; // r0@3
  int v14; // r2@3
  int v15; // r0@9
  int v16; // r4@9
  unsigned int v17; // r0@11
  void *v18; // r0@11
  unsigned int *v19; // r2@12
  signed int v20; // r1@14
  signed int v21; // r4@16
  void *v22; // r0@16
  int v23; // r0@18
  int v24; // r1@20
  int v25; // r2@22
  __int64 v26; // kr08_8@24
  signed int v27; // r4@26
  void *v28; // r0@26
  unsigned int v29; // r0@28
  unsigned int v30; // r0@29
  int v31; // r1@33
  int v32; // r1@35
  int v33; // r0@38
  ItemFrameBlockEntity *v34; // r4@38
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@62
  signed int v40; // r1@64
  char v41; // [sp+8h] [bp-A0h]@40
  int v42; // [sp+10h] [bp-98h]@44
  void *v43; // [sp+2Ch] [bp-7Ch]@42
  void *ptr; // [sp+3Ch] [bp-6Ch]@40
  char v45; // [sp+54h] [bp-54h]@37
  int v46; // [sp+5Ch] [bp-4Ch]@26
  int v47; // [sp+64h] [bp-44h]@16
  int v48; // [sp+6Ch] [bp-3Ch]@11
  int v49; // [sp+70h] [bp-38h]@3
  int v50; // [sp+74h] [bp-34h]@3
  int v51; // [sp+78h] [bp-30h]@3
  int v52; // [sp+80h] [bp-28h]@1

  v6 = (_DWORD *)a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E94B4((void **)&v52, "Chest");
  v10 = j_Util::startsWith(v6, &v52);
  v11 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v52 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  if ( v10 == 1 )
    v12 = *(_QWORD *)v8;
    v13 = (*(_QWORD *)v8 >> 32) - 1;
    v14 = *(_DWORD *)(v8 + 8);
    v49 = v12;
    v50 = v13;
    v51 = v14;
    if ( (signed int)v12 >= *(_DWORD *)a6
      && (signed int)v12 <= *(_DWORD *)(a6 + 12)
      && v14 >= *(_DWORD *)(a6 + 8)
      && v14 <= *(_DWORD *)(a6 + 20)
      && SHIDWORD(v12) > *(_DWORD *)(a6 + 4)
      && v13 <= *(_DWORD *)(a6 + 16) )
      v15 = j_BlockSource::getBlockEntity(v7, (const BlockPos *)&v49);
      v16 = v15;
      if ( v15 )
      {
        if ( j_BlockEntity::isType(v15, 2) == 1 )
        {
          sub_21E94B4((void **)&v48, "loot_tables/chests/end_city_treasure.json");
          v17 = j_Random::_genRandInt32(a5);
          j_RandomizableBlockEntityContainerBase::setLootTable(v16, &v48, v17 >> 1);
          v18 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
          {
            v19 = (unsigned int *)(v48 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          }
        }
      }
  else
    sub_21E94B4((void **)&v47, "Sentry");
    v21 = j_Util::startsWith(v6, &v47);
    v22 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v47 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    if ( v21 == 1 )
      v23 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 >= *(_DWORD *)a6 && v23 <= *(_DWORD *)(a6 + 12) )
        v24 = *(_DWORD *)(v8 + 8);
        if ( v24 >= *(_DWORD *)(a6 + 8) && v24 <= *(_DWORD *)(a6 + 20) )
          v25 = *(_DWORD *)(v8 + 4);
          if ( v25 >= *(_DWORD *)(a6 + 4) && v25 <= *(_DWORD *)(a6 + 16) )
            v26 = *(_QWORD *)((char *)v9 + 124);
            if ( (_DWORD)v26 == HIDWORD(v26) )
              j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
                (unsigned __int64 *)v9 + 15,
                v8);
              *(_DWORD *)v26 = v23;
              *(_DWORD *)(v26 + 4) = v25;
              *(_DWORD *)(v26 + 8) = v24;
              *((_DWORD *)v9 + 31) = v26 + 12;
      sub_21E94B4((void **)&v46, "Elytra");
      v27 = j_Util::startsWith(v6, &v46);
      v28 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v46 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
        else
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      if ( v27 == 1 )
        v29 = (unsigned __int16)(*((_WORD *)v9 + 58) - 1);
        if ( v29 >= 3 )
          LOBYTE(v30) = 2;
          v30 = 0x301u >> 8 * (*((_BYTE *)v9 + 116) - 1);
        if ( *(_DWORD *)v8 >= *(_DWORD *)a6 && *(_DWORD *)v8 <= *(_DWORD *)(a6 + 12) )
          v31 = *(_DWORD *)(v8 + 8);
          if ( v31 >= *(_DWORD *)(a6 + 8) && v31 <= *(_DWORD *)(a6 + 20) )
            v32 = *(_DWORD *)(v8 + 4);
            if ( v32 >= *(_DWORD *)(a6 + 4) && v32 <= *(_DWORD *)(a6 + 16) )
              v45 = *(_BYTE *)(Block::mItemFrame + 4);
              if ( j_BlockSource::setBlockAndData((int)v7, (BlockPos *)v8, &v45, v30, 3, 0) == 1 )
              {
                v33 = j_BlockSource::getBlockEntity(v7, (const BlockPos *)v8);
                v34 = (ItemFrameBlockEntity *)v33;
                if ( v33 )
                {
                  if ( j_BlockEntity::isType(v33, 17) == 1 )
                  {
                    j_ItemInstance::ItemInstance((ItemInstance *)&v41, Item::mElytra, 1);
                    j_ItemFrameBlockEntity::setItem(v34, v7, (const ItemInstance *)&v41);
                    if ( ptr )
                      j_operator delete(ptr);
                    if ( v43 )
                      j_operator delete(v43);
                    if ( v42 )
                      (*(void (**)(void))(*(_DWORD *)v42 + 4))();
                  }
                }
              }
}


int __fastcall EndCityPieces::TowerGenerator::generate(int a1, int a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19)
{
  int v19; // r6@1
  RotationUtil *v20; // r9@1
  int v21; // r10@1
  int v22; // r5@1
  __int64 v23; // r0@1
  int v24; // r6@2
  int v25; // r4@2
  void *v26; // r0@5
  int v27; // r5@6
  __int64 v28; // r0@6
  int v29; // r4@7
  void *v30; // r0@10
  unsigned int v31; // r5@11
  unsigned int v32; // r0@11
  int v33; // r11@11
  signed int v34; // r6@13
  int v35; // r5@13
  int v36; // r10@16
  __int64 v37; // r0@16
  void *v38; // r0@20
  unsigned int *v39; // r2@23
  signed int v40; // r1@25
  int v41; // r10@32
  char v42; // r0@32
  char *v43; // r0@34
  int i; // r5@35
  int v45; // r8@35
  int v46; // r5@38
  __int64 v47; // kr10_8@38
  unsigned int *v48; // r2@40
  signed int v49; // r1@42
  unsigned int *v50; // r2@44
  signed int v51; // r1@46
  unsigned int *v53; // r2@57
  signed int v54; // r1@59
  Rotation v55; // r2@66
  int v56; // r7@66
  __int64 v57; // r0@66
  int v58; // r6@67
  void *v59; // r0@70
  int v60; // r5@73
  __int64 v61; // kr18_8@73
  void *v62; // r0@77
  unsigned int *v63; // r2@78
  signed int v64; // r1@80
  Random *v65; // [sp+1Ch] [bp-124h]@1
  _DWORD *v66; // [sp+24h] [bp-11Ch]@1
  signed int v67; // [sp+2Ch] [bp-114h]@13
  int v68; // [sp+38h] [bp-108h]@38
  int v69; // [sp+3Ch] [bp-104h]@38
  signed int v70; // [sp+40h] [bp-100h]@38
  signed int v71; // [sp+44h] [bp-FCh]@38
  int v72; // [sp+48h] [bp-F8h]@38
  int v73; // [sp+50h] [bp-F0h]@73
  int v74; // [sp+54h] [bp-ECh]@73
  signed int v75; // [sp+58h] [bp-E8h]@73
  signed int v76; // [sp+5Ch] [bp-E4h]@73
  int v77; // [sp+60h] [bp-E0h]@73
  int v78; // [sp+68h] [bp-D8h]@57
  int v79; // [sp+6Ch] [bp-D4h]@66
  int v80; // [sp+74h] [bp-CCh]@16
  int v81; // [sp+78h] [bp-C8h]@16
  signed int v82; // [sp+7Ch] [bp-C4h]@16
  int v83; // [sp+80h] [bp-C0h]@16
  int v84; // [sp+84h] [bp-BCh]@16
  int v85; // [sp+8Ch] [bp-B4h]@6
  int v86; // [sp+90h] [bp-B0h]@6
  signed int v87; // [sp+94h] [bp-ACh]@6
  int v88; // [sp+98h] [bp-A8h]@6
  int v89; // [sp+9Ch] [bp-A4h]@6
  int v90; // [sp+A4h] [bp-9Ch]@1
  unsigned int v91; // [sp+A8h] [bp-98h]@1
  int v92; // [sp+ACh] [bp-94h]@1
  unsigned int v93; // [sp+B0h] [bp-90h]@1
  int v94; // [sp+B4h] [bp-8Ch]@1
  char v95; // [sp+B8h] [bp-88h]@1
  int v96; // [sp+BCh] [bp-84h]@1
  int v97; // [sp+C0h] [bp-80h]@1
  char v98; // [sp+C5h] [bp-7Bh]@1
  __int16 v99; // [sp+C6h] [bp-7Ah]@1
  char v100; // [sp+C8h] [bp-78h]@6
  int v101; // [sp+CCh] [bp-74h]@6
  int v102; // [sp+D0h] [bp-70h]@6
  char v103; // [sp+D5h] [bp-6Bh]@6
  __int16 v104; // [sp+D6h] [bp-6Ah]@6
  char v105; // [sp+D8h] [bp-68h]@16
  int v106; // [sp+DCh] [bp-64h]@16
  int v107; // [sp+E0h] [bp-60h]@16
  char v108; // [sp+E5h] [bp-5Bh]@16
  __int16 v109; // [sp+E6h] [bp-5Ah]@16
  char v110; // [sp+E8h] [bp-58h]@38
  int v111; // [sp+ECh] [bp-54h]@38
  int v112; // [sp+F0h] [bp-50h]@38
  char v113; // [sp+F5h] [bp-4Bh]@38
  __int16 v114; // [sp+F6h] [bp-4Ah]@38
  char v115; // [sp+F8h] [bp-48h]@73
  int v116; // [sp+FCh] [bp-44h]@73
  int v117; // [sp+100h] [bp-40h]@73
  char v118; // [sp+105h] [bp-3Bh]@73
  __int16 v119; // [sp+106h] [bp-3Ah]@73
  char v120; // [sp+108h] [bp-38h]@66
  int v121; // [sp+10Ch] [bp-34h]@66
  int v122; // [sp+110h] [bp-30h]@66
  char v123; // [sp+115h] [bp-2Bh]@66
  __int16 v124; // [sp+116h] [bp-2Ah]@66

  v19 = a2;
  v65 = a4;
  v66 = (_DWORD *)a3;
  v20 = (RotationUtil *)*(_WORD *)j_StructureSettings::getRotation((StructureSettings *)(a5 + 40));
  v91 = (j_Random::_genRandInt32((Random *)a8) & 1) + 3;
  v92 = -3;
  v93 = (j_Random::_genRandInt32((Random *)a8) & 1) + 3;
  sub_21E94B4((void **)&v90, "tower_base");
  v99 = (signed __int16)v20;
  v98 = 1;
  v21 = v19;
  j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
    (TemplateStructurePiece **)&v94,
    v19,
    &v90,
    (const BlockPos *)(a5 + 96),
    &v99,
    &v98);
  v22 = v94;
  j_StructureTemplate::calculateConnectedPosition(
    (StructureTemplate *)&v95,
    *(const StructureSettings **)(a5 + 36),
    (const BlockPos *)(a5 + 40),
    (const StructureSettings *)&v91,
    (const BlockPos *)(v94 + 40),
    (int)&BlockPos::ZERO);
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v22 + 8))(v22, *(_DWORD *)&v95, v96, v97);
  v23 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v23 == HIDWORD(v23) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
      (_QWORD *)a7,
      &v94);
    v24 = a7;
    v25 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
    if ( v94 )
      (*(void (**)(void))(*(_DWORD *)v94 + 4))();
  }
  else
    v94 = 0;
    *(_DWORD *)v23 = v22;
    *(_DWORD *)(a7 + 4) = v23 + 4;
    v25 = *(_DWORD *)v23;
  v94 = 0;
  v26 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v90 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
    }
    else
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v86 = 0;
  v87 = 7;
  v88 = 0;
  sub_21E94B4((void **)&v85, "tower_piece");
  v104 = (signed __int16)v20;
  v103 = 1;
    (TemplateStructurePiece **)&v89,
    v21,
    &v85,
    (const BlockPos *)(v25 + 96),
    &v104,
    &v103);
  v27 = v89;
    (StructureTemplate *)&v100,
    *(const StructureSettings **)(v25 + 36),
    (const BlockPos *)(v25 + 40),
    (const StructureSettings *)&v86,
    (const BlockPos *)(v89 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v27 + 8))(v27, *(_DWORD *)&v100, v101, v102);
  v28 = *(_QWORD *)(v24 + 4);
  if ( (_DWORD)v28 == HIDWORD(v28) )
      (_QWORD *)v24,
      &v89);
    v29 = *(_DWORD *)(*(_DWORD *)(v24 + 4) - 4);
    if ( v89 )
      (*(void (**)(void))(*(_DWORD *)v89 + 4))();
    v89 = 0;
    *(_DWORD *)v28 = v27;
    *(_DWORD *)(v24 + 4) = v28 + 4;
    v29 = *(_DWORD *)v28;
  v30 = (void *)(v85 - 12);
  v89 = 0;
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v85 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = j_Random::_genRandInt32((Random *)a8);
  v32 = j_Random::_genRandInt32((Random *)a8);
  v33 = 0;
  if ( v31 == 3 * (v31 / 3) )
    v33 = v29;
  v34 = 0;
  v35 = v21;
  v67 = v32 % 3;
  while ( 1 )
    v81 = 0;
    v82 = 4;
    v83 = 0;
    sub_21E94B4((void **)&v80, "tower_piece");
    v109 = (signed __int16)v20;
    v108 = 1;
    j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
      (TemplateStructurePiece **)&v84,
      v35,
      &v80,
      (const BlockPos *)(v29 + 96),
      &v109,
      &v108);
    v36 = v84;
    j_StructureTemplate::calculateConnectedPosition(
      (StructureTemplate *)&v105,
      *(const StructureSettings **)(v29 + 36),
      (const BlockPos *)(v29 + 40),
      (const StructureSettings *)&v81,
      (const BlockPos *)(v84 + 40),
      (int)&BlockPos::ZERO);
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v36 + 8))(v36, *(_DWORD *)&v105, v106, v107);
    v37 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v37 == HIDWORD(v37) )
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
        (_QWORD *)a7,
        &v84);
      v29 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
      if ( v84 )
        (*(void (**)(void))(*(_DWORD *)v84 + 4))();
      v84 = 0;
      *(_DWORD *)v37 = v36;
      *(_DWORD *)(a7 + 4) = v37 + 4;
      v29 = *(_DWORD *)v37;
    v38 = (void *)(v80 - 12);
    v84 = 0;
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v80 - 4);
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
        j_j_j_j__ZdlPv_9(v38);
    if ( v34 >= v67 )
      break;
    ++v34;
    if ( j_Random::_genRandInt32((Random *)a8) & 0x8000000 )
      v33 = v29;
  if ( v33 )
    v41 = v35;
    v42 = byte_2833074;
    __dmb();
    if ( !(v42 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2833074) )
      dword_283307C = 0;
      unk_2833080 = 0;
      dword_2833084 = 0;
      v43 = (char *)j_operator new(0x40u);
      *(_WORD *)v43 = 0;
      dword_283307C = (int)v43;
      dword_2833084 = (int)(v43 + 64);
      *((_DWORD *)v43 + 1) = 1;
      *((_DWORD *)v43 + 2) = -1;
      *((_DWORD *)v43 + 3) = 0;
      *((_WORD *)v43 + 8) = 1;
      *((_DWORD *)v43 + 5) = 6;
      *((_DWORD *)v43 + 6) = -1;
      *((_DWORD *)v43 + 7) = 1;
      *((_WORD *)v43 + 16) = 3;
      *((_DWORD *)v43 + 9) = 0;
      *((_DWORD *)v43 + 10) = -1;
      *((_DWORD *)v43 + 11) = 5;
      *((_WORD *)v43 + 24) = 2;
      *((_DWORD *)v43 + 13) = 5;
      *((_DWORD *)v43 + 14) = -1;
      *((_DWORD *)v43 + 15) = 6;
      unk_2833080 = v43 + 64;
      j___cxa_atexit_0((int)std::vector<std::pair<Rotation,BlockPos>,std::allocator<std::pair<Rotation,BlockPos>>>::~vector);
      j_j___cxa_guard_release_0((unsigned int *)&byte_2833074);
    v45 = unk_2833080;
    for ( i = dword_283307C; i != v45; i += 16 )
      if ( j_Random::_genRandInt32((Random *)a8) & 0x8000000 )
        sub_21E94B4((void **)&v78, "bridge_end");
        v124 = j_RotationUtil::getRotated(v20, *(_WORD *)i, v55);
        v123 = 1;
        j_std::make_unique<EndCityPieces::EndCityPiece,StructureManager &,std::string const&,BlockPos const&,Rotation &,bool &>(
          (TemplateStructurePiece **)&v79,
          v41,
          &v78,
          (const BlockPos *)(v33 + 96),
          &v124,
          &v123);
        v56 = v79;
        j_StructureTemplate::calculateConnectedPosition(
          (StructureTemplate *)&v120,
          *(const StructureSettings **)(v33 + 36),
          (const BlockPos *)(v33 + 40),
          (const StructureSettings *)(i + 4),
          (const BlockPos *)(v79 + 40),
          (int)&BlockPos::ZERO);
        (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v56 + 8))(v56, *(_DWORD *)&v120, v121, v122);
        v57 = *(_QWORD *)(a7 + 4);
        if ( (_DWORD)v57 == HIDWORD(v57) )
        {
          j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<EndCityPieces::EndCityPiece,std::default_delete<EndCityPieces::EndCityPiece>>>(
            (_QWORD *)a7,
            &v79);
          v58 = *(_DWORD *)(*(_DWORD *)(a7 + 4) - 4);
          if ( v79 )
            (*(void (**)(void))(*(_DWORD *)v79 + 4))();
        }
        else
          v79 = 0;
          *(_DWORD *)v57 = v56;
          *(_DWORD *)(a7 + 4) = v57 + 4;
          v58 = *(_DWORD *)v57;
        v79 = 0;
        v59 = (void *)(v78 - 12);
        if ( (int *)(v78 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v78 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
          }
          else
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v59);
        j_EndCityPieces::_recursiveChildren(
          v66,
          2,
          (signed int)v65 + 1,
          v58,
          (int)&BlockPos::ZERO,
          a7,
          (Random *)a8);
    v74 = -1;
    v75 = 4;
    v76 = -1;
    sub_21E94B4((void **)&v73, "tower_top");
    v119 = (signed __int16)v20;
    v118 = 1;
      (TemplateStructurePiece **)&v77,
      v41,
      &v73,
      &v119,
      &v118);
    v60 = v77;
      (StructureTemplate *)&v115,
      (const StructureSettings *)&v74,
      (const BlockPos *)(v77 + 40),
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v60 + 8))(v60, *(_DWORD *)&v115, v116, v117);
    v61 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v61 == HIDWORD(v61) )
        &v77);
      if ( v77 )
        (*(void (**)(void))(*(_DWORD *)v77 + 4))();
      v77 = 0;
      *(_DWORD *)v61 = v60;
      *(_DWORD *)(a7 + 4) = v61 + 4;
    v77 = 0;
    v62 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) == &dword_28898C0 )
      return 1;
    v63 = (unsigned int *)(v73 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      goto LABEL_91;
LABEL_90:
    v64 = (*v63)--;
LABEL_91:
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
    return 1;
  if ( v65 != (Random *)7 )
    return j_EndCityPieces::_recursiveChildren(
             v35,
             v66,
             1,
             (signed int)v65 + 1,
             v29,
             (int)&BlockPos::ZERO,
             a7,
             (Random *)a8);
  v69 = -1;
  v70 = 4;
  v71 = -1;
  sub_21E94B4((void **)&v68, "tower_top");
  v114 = (signed __int16)v20;
  v113 = 1;
    (TemplateStructurePiece **)&v72,
    v35,
    &v68,
    (const BlockPos *)(v29 + 96),
    &v114,
    &v113);
  v46 = v72;
    (StructureTemplate *)&v110,
    *(const StructureSettings **)(v29 + 36),
    (const BlockPos *)(v29 + 40),
    (const StructureSettings *)&v69,
    (const BlockPos *)(v72 + 40),
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v46 + 8))(v46, *(_DWORD *)&v110, v111, v112);
  v47 = *(_QWORD *)(a7 + 4);
  if ( (_DWORD)v47 == HIDWORD(v47) )
      &v72);
    if ( v72 )
      (*(void (**)(void))(*(_DWORD *)v72 + 4))();
    v72 = 0;
    *(_DWORD *)v47 = v46;
    *(_DWORD *)(a7 + 4) = v47 + 4;
  v72 = 0;
  v62 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v68 - 4);
    goto LABEL_90;
  return 1;
}


int __fastcall EndCityPieces::EndCityPiece::EndCityPiece(EndCityPieces::EndCityPiece *this, StructureManager *a2)
{
  StructureManager *v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = j_TemplateStructurePiece::TemplateStructurePiece(this, 0);
  *(_DWORD *)result = &off_2723710;
  *(_DWORD *)(result + 108) = v2;
  *(_DWORD *)(result + 112) = &unk_28898CC;
  *(_DWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 124) = 0;
  *(_DWORD *)(result + 128) = 0;
  return result;
}


void __fastcall EndCityPieces::EndCityPiece::~EndCityPiece(EndCityPieces::EndCityPiece *this)
{
  EndCityPieces::EndCityPiece *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_2723710;
  v2 = (void *)*((_DWORD *)this + 30);
  if ( v2 )
    j_operator delete(v2);
  v3 = *((_DWORD *)v1 + 28);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  j_operator delete((void *)v1);
}


void __fastcall EndCityPieces::EndCityPiece::_handleDataMarker(Random *a1, int a2, int a3, BlockSource *a4, Random *a5, int a6)
{
  EndCityPieces::EndCityPiece::_handleDataMarker(a1, a2, a3, a4, a5, a6);
}


void __fastcall EndCityPieces::EndCityPiece::~EndCityPiece(EndCityPieces::EndCityPiece *this)
{
  EndCityPieces::EndCityPiece::~EndCityPiece(this);
}


void __fastcall EndCityPieces::startHouseTower(int a1, const BlockPos *a2, __int16 a3, int a4, Random *a5)
{
  EndCityPieces::startHouseTower(a1, a2, a3, a4, a5);
}


int __fastcall EndCityPieces::TowerBridgeGenerator::generate(int a1, int a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39)
{
  return EndCityPieces::TowerBridgeGenerator::generate(
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
           a39);
}
