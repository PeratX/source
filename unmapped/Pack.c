

PackReport *__fastcall Pack::createPack(int a1, IContentKeyProvider *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10, int a11, int a12, int a13, char a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, char a42)
{
  return Pack::createPack(
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
           a42);
}


int __fastcall Pack::getManifest(Pack *this)
{
  return *(_DWORD *)this;
}


    if ( Pack::getSubpackInfoStack(v3) )
{
      v8 = (unsigned __int64 *)Pack::getSubpackInfoStack(v3);
      v9 = SubpackInfoCollection::getSubpackIndex(v8, (const void **)v7 + 12);
    }
    else
    {
      v9 = -1;
    v24 = v3;
    v25 = (char *)&unk_28898CC;
    PackReport::PackReport((int)&v26);
    v46 = 0;
    v47 = v9;
    v10 = (PackSourceReport *)v2[2];
    v11 = (PackManifest *)Pack::getManifest(v3);
    v12 = PackManifest::getIdentity(v11);
    v13 = PackSourceReport::getReport(v10, (const PackIdVersion *)v12);
    if ( v13 )
      EntityInteraction::setInteractText(&v26, (int *)v13);
      v27 = *(_DWORD *)(v13 + 4);
      v28 = *(_WORD *)(v13 + 8);
      std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::operator=(
        (int)&v29,
        (__int64 *)(v13 + 12));
        (int)&v30,
        (__int64 *)(v13 + 24));
      EntityInteraction::setInteractText(&v31, (int *)(v13 + 36));
      EntityInteraction::setInteractText(&v32, (int *)(v13 + 40));
      v14 = *(_DWORD *)(v13 + 52);
      v15 = *(_DWORD *)(v13 + 56);
      v16 = *(_DWORD *)(v13 + 60);
      v33 = *(_DWORD *)(v13 + 48);
      v34 = v14;
      v35 = v15;
      v36 = v16;
      v17 = *(_DWORD *)(v13 + 64);
      v38 = *(_WORD *)(v13 + 68);
      v37 = v17;
      EntityInteraction::setInteractText(&v39, (int *)(v13 + 72));
      EntityInteraction::setInteractText(&v40, (int *)(v13 + 76));
      EntityInteraction::setInteractText(&v41, (int *)(v13 + 80));
      v18 = *(_WORD *)(v13 + 84);
      v43 = *(_BYTE *)(v13 + 86);
      v42 = v18;
      v44 = *(_BYTE *)(v13 + 88);
      v45 = *(_BYTE *)(v13 + 96);
      v46 = PackReport::hasWarnings((PackReport *)v13);
    v19 = *v2;
    v20 = *(unsigned __int64 *)((char *)*v2 + 4);
    if ( (_DWORD)v20 == HIDWORD(v20) )
      std::vector<PackModel,std::allocator<PackModel>>::_M_emplace_back_aux<PackModel>(*v2, (int)&v24);
      *(_DWORD *)v20 = v24;
      *(_DWORD *)(v20 + 4) = v25;
      v25 = (char *)&unk_28898CC;
      PackReport::PackReport(v20 + 8, (int)&v26);
      *(_QWORD *)(v20 + 112) = *(_QWORD *)&v46;
      *((_DWORD *)v19 + 1) += 120;
    PackReport::~PackReport((PackReport *)&v26);
    v21 = v25 - 12;
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
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
        j_j_j_j__ZdlPv_9(v21);
  }
}


  if ( Pack::getSubpackInfoStack(a2) )
{
    v4 = (unsigned __int64 *)Pack::getSubpackInfoStack(v2);
    v5 = SubpackInfoCollection::getSubpackIndex(v4, &Util::EMPTY_STRING);
  }
  else
  {
    v5 = -1;
  v15 = v2;
  v16 = (char *)&unk_28898CC;
  PackReport::PackReport((int)&v17);
  v18 = 0;
  v19 = v5;
  v6 = *(PackSourceReport **)(v3 + 4);
  v7 = (PackManifest *)Pack::getManifest(v2);
  v8 = PackManifest::getIdentity(v7);
  v9 = (PackReport *)PackSourceReport::getReport(v6, (const PackIdVersion *)v8);
  if ( v9 )
    v18 = PackReport::hasWarnings(v9);
  v10 = *(_DWORD *)v3;
  v11 = *(_QWORD *)(*(_DWORD *)v3 + 4);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<PackModel,std::allocator<PackModel>>::_M_emplace_back_aux<PackModel const&>(
      (unsigned __int64 *)v10,
      (int)&v15);
    *(_DWORD *)v11 = v15;
    sub_21E8AF4((int *)(v11 + 4), (int *)((unsigned int)&v15 | 4));
    PackReport::PackReport((int *)(v11 + 8), &v17);
    *(_QWORD *)(v11 + 112) = *(_QWORD *)&v18;
    *(_DWORD *)(v10 + 4) += 120;
  PackReport::~PackReport((PackReport *)&v17);
  v12 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
}


signed int __fastcall Pack::hasSubpacks(Pack *this)
{
  SubpackInfoCollection *v1; // r0@1
  signed int result; // r0@2

  v1 = (SubpackInfoCollection *)*((_DWORD *)this + 2);
  if ( v1 )
    result = SubpackInfoCollection::hasSubpacks(v1);
  else
    result = 0;
  return result;
}


PackReport *__fastcall Pack::createPack(int a1, IContentKeyProvider *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10, int a11, int a12, int a13, char a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, char a42)
{
  _DWORD *v42; // r8@1
  int v43; // r6@1
  int v44; // r5@1
  IContentKeyProvider *v45; // r4@1
  int v46; // r0@1
  int v47; // r7@3
  _DWORD *v48; // r0@4
  char *v49; // r4@5
  int v50; // r1@5
  int v51; // r2@5
  int v52; // r3@5
  int v53; // r1@5
  _DWORD *v54; // r4@14
  int v55; // r2@14
  PackManifest *v56; // r0@14
  int v57; // r3@14
  void *v58; // r0@15
  void *v59; // r0@16
  void *v60; // r0@17
  int *v61; // r4@19
  __int64 v62; // kr00_8@19
  unsigned int *v63; // r2@21
  signed int v64; // r1@23
  void *v65; // r0@29
  void *v66; // r0@35
  unsigned int *v68; // r2@37
  signed int v69; // r1@39
  unsigned int *v70; // r2@45
  signed int v71; // r1@47
  unsigned int *v72; // r2@49
  signed int v73; // r1@51
  unsigned int *v74; // r2@53
  signed int v75; // r1@55
  int v76; // [sp+Ch] [bp-E4h]@21
  int v77; // [sp+10h] [bp-E0h]@5
  int v78; // [sp+14h] [bp-DCh]@5
  int v79; // [sp+18h] [bp-D8h]@5
  int v80; // [sp+1Ch] [bp-D4h]@5
  int v81; // [sp+20h] [bp-D0h]@5
  int v82; // [sp+28h] [bp-C8h]@17
  int v83; // [sp+2Ch] [bp-C4h]@16
  int v84; // [sp+30h] [bp-C0h]@15
  char v85; // [sp+38h] [bp-B8h]@5
  PackManifest *v86; // [sp+44h] [bp-ACh]@4
  int v87; // [sp+48h] [bp-A8h]@4
  int v88; // [sp+4Ch] [bp-A4h]@3
  int v89; // [sp+50h] [bp-A0h]@1
  int v90; // [sp+54h] [bp-9Ch]@1
  int v91[27]; // [sp+58h] [bp-98h]@1
  int v92; // [sp+C4h] [bp-2Ch]@14

  v42 = (_DWORD *)a1;
  v43 = a4;
  v44 = a3;
  v45 = a2;
  *(_DWORD *)a1 = 0;
  PackReport::PackReport((int)v91);
  sub_21E8AF4(&v89, (int *)v45);
  v90 = *((_DWORD *)v45 + 1);
  v46 = 0;
  if ( v44 != 3 )
    v46 = 1;
  PackAccessStrategyFactory::create(
    (PackAccessStrategyFactory *)&v88,
    (ResourceLocation *)&v89,
    (const IContentKeyProvider *)a6,
    (PackReport *)v91,
    v46);
  v47 = v88;
  if ( v88 )
  {
    v48 = operator new(0xCu);
    *v48 = 0;
    v48[1] = 0;
    v48[2] = 0;
    v87 = (int)v48;
    PackManifestFactory::create(&v86, (void *)a5, v47, (int)&v89, (int)v91, (int)v48);
    if ( v86 )
    {
      v49 = PackManifest::getIdentity(v86);
      v50 = *((_DWORD *)v49 + 1);
      v51 = *((_DWORD *)v49 + 2);
      v52 = *((_DWORD *)v49 + 3);
      v77 = *(_DWORD *)v49;
      v78 = v50;
      v79 = v51;
      v80 = v52;
      SemVersion::SemVersion((int)&v81, (int)(v49 + 16));
      v85 = v49[40];
      PackManifest::setPackOrigin((int)v86, v43);
      v53 = 3;
      if ( v43 == 6 )
        v53 = 2;
      if ( v43 == 1 )
        v53 = 1;
      PackManifest::setPackCategory((int)v86, v53);
      if ( PackManifest::getPackType(v86) == v44 || !PackManifest::getPackType(v86) )
      {
        if ( a7 )
          PackSourceReport::addReport(a7, (int)&v77, v91);
        if ( !PackReport::hasErrors((PackReport *)v91) )
        {
          v54 = operator new(0xCu);
          v55 = v88;
          v56 = v86;
          v57 = v87;
          v86 = 0;
          v88 = 0;
          v87 = 0;
          *v54 = v56;
          v54[1] = v55;
          v92 = 0;
          v54[2] = v57;
          std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr((void **)&v92);
          *v42 = v54;
        }
      }
      v58 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v84 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
        else
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v59 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v83 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      v60 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v74 = (unsigned int *)(v82 - 4);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
    }
    if ( PackReport::hasErrors((PackReport *)v91) == 1 )
      v62 = *(_QWORD *)PackReport::getErrors((PackReport *)v91);
      v61 = (int *)v62;
      if ( (_DWORD)v62 != HIDWORD(v62) )
        do
          PackError::getEventErrorMessage((PackError *)&v76, *v61);
          v65 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
          {
            v63 = (unsigned int *)(v76 - 4);
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
              j_j_j_j__ZdlPv_9(v65);
          }
          v61 += 2;
        while ( v61 != (int *)HIDWORD(v62) );
      (*(void (**)(void))(*(_DWORD *)v86 + 4))();
    std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr((void **)&v87);
    if ( v88 )
      (*(void (**)(void))(*(_DWORD *)v88 + 4))();
  }
  v66 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v89 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  return PackReport::~PackReport((PackReport *)v91);
}


int __fastcall Pack::Pack(int result, int *a2, int *a3, int *a4)
{
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r1@1

  v4 = *a2;
  *a2 = 0;
  *(_DWORD *)result = v4;
  v5 = *a3;
  *a3 = 0;
  *(_DWORD *)(result + 4) = v5;
  v6 = *a4;
  *a4 = 0;
  *(_DWORD *)(result + 8) = v6;
  return result;
}


int __fastcall Pack::isCompatiblePack(int a1, int *a2)
{
  __int64 *v2; // r0@1
  int result; // r0@2

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
    result = j_j_j__ZNK21SubpackInfoCollection12isCompatibleERK15ContentTierInfo(v2, a2);
  else
    result = 0;
  return result;
}


  if ( Pack::getAccessStrategy(a2) )
{
    v3 = Pack::getAccessStrategy(v2);
    j_j_j__ZN4I18n21appendLanguageStringsEP18PackAccessStrategy(v3);
  }
}


Pack *__fastcall Pack::~Pack(Pack *this)
{
  Pack *v1; // r4@1
  int v2; // r0@1
  Pack *result; // r0@5

  v1 = this;
  std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr((void **)this + 2);
  v2 = *((_DWORD *)v1 + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  result = v1;
  *(_DWORD *)v1 = 0;
  return result;
}


int __fastcall Pack::getManifest(Pack *this)
{
  return *(_DWORD *)this;
}
