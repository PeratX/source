

void __fastcall PackManagerContentSource::~PackManagerContentSource(PackManagerContentSource *this)
{
  PackManagerContentSource *v1; // r0@1

  v1 = PackManagerContentSource::~PackManagerContentSource(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int *__fastcall PackManagerContentSource::PackData::PackData(int *a1, int *a2, int a3, int a4, int *a5, __int64 *a6, unsigned __int64 *a7)
{
  int v7; // r5@1
  int v8; // r6@1
  int *v9; // r4@1
  char *v10; // r5@1
  int v11; // r1@1
  __int64 v12; // r0@1
  signed int v13; // r0@1
  unsigned int v14; // r7@1
  __int64 v15; // kr00_8@4
  int v16; // r7@4

  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E8AF4(a1, a2);
  v9[2] = v8;
  v9[3] = v7;
  v10 = 0;
  v11 = *a5;
  *a5 = 0;
  v9[4] = v11;
  v12 = *a6;
  v9[5] = 0;
  v9[6] = 0;
  v13 = HIDWORD(v12) - v12;
  v9[7] = 0;
  v14 = v13 >> 2;
  if ( v13 >> 2 )
  {
    if ( v14 >= 0x40000000 )
      sub_21E57F4();
    v10 = (char *)operator new(v13);
  }
  v9[5] = (int)v10;
  v9[6] = (int)v10;
  v9[7] = (int)&v10[4 * v14];
  v15 = *a6;
  v16 = (HIDWORD(v15) - (signed int)v15) >> 2;
  if ( 0 != v16 )
    _aeabi_memmove4(v10, v15);
  v9[6] = (int)&v10[4 * v16];
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector((int)(v9 + 8), a7);
  return v9;
}


void __fastcall PackManagerContentSource::deleteContent(int a1, unsigned __int64 *a2)
{
  PackManagerContentSource::deleteContent(a1, a2);
}


void __fastcall PackManagerContentSource::reloadDependencies(PackManagerContentSource *this)
{
  int v1; // r0@1
  int v2; // r9@1
  __int64 v3; // kr00_8@1
  const PackManifest *v4; // r2@1
  char *v5; // r6@1
  char *v6; // r11@1
  _DWORD *i; // r4@4
  _DWORD *v8; // r10@4
  signed int v9; // r6@7
  char *v10; // r5@7
  signed int v11; // r8@7
  unsigned int v12; // r0@7
  unsigned int v13; // r1@9
  unsigned int v14; // r7@9
  char *v15; // r0@25
  int v16; // t1@26
  signed int v17; // r0@27
  unsigned int v18; // r8@28
  unsigned int v19; // r0@28
  int v20; // r7@29
  unsigned int j; // r6@29
  int v22; // r10@30
  __int64 v23; // r0@31
  void *v24; // r8@33
  char *v25; // r5@33
  unsigned int v26; // r2@33
  unsigned int v27; // r1@35
  unsigned int v28; // r4@35
  int v29; // r1@42
  int v30; // ST10_4@43
  int v31; // r1@44
  void *v32; // r0@45
  int v33; // r8@45
  __int64 v34; // r0@47
  void *v35; // r8@49
  char *v36; // r5@49
  unsigned int v37; // r2@49
  unsigned int v38; // r1@51
  unsigned int v39; // r4@51
  char *v40; // r10@58
  int v41; // r10@60
  int v42; // r6@67
  int v43; // r10@67
  unsigned int *v44; // r2@69
  signed int v45; // r1@71
  int v46; // r0@77
  char *v47; // r1@78
  char *v48; // r0@80
  int *v49; // r1@81
  unsigned int v50; // r7@84
  void *v51; // r4@84
  void *v52; // r8@84
  unsigned int *v53; // r2@86
  signed int v54; // r1@88
  int *v55; // r0@94
  int *v56; // r4@99
  int *v57; // r5@99
  unsigned int *v58; // r2@101
  signed int v59; // r1@103
  int *v60; // r0@109
  unsigned int v61; // [sp+8h] [bp-70h]@29
  int v62; // [sp+10h] [bp-68h]@68
  signed int v63; // [sp+14h] [bp-64h]@28
  int v64; // [sp+18h] [bp-60h]@1
  void **v65; // [sp+1Ch] [bp-5Ch]@84
  __int64 v66; // [sp+20h] [bp-58h]@84
  char *v67; // [sp+34h] [bp-44h]@77
  int *v68; // [sp+38h] [bp-40h]@77
  int *v69; // [sp+3Ch] [bp-3Ch]@77
  int *v70; // [sp+40h] [bp-38h]@77
  unsigned __int64 v71; // [sp+44h] [bp-34h]@67

  v3 = *(_QWORD *)((char *)this + 68);
  v1 = *(_QWORD *)((char *)this + 68) >> 32;
  v2 = v3;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v64 = v1;
  while ( v2 != v1 )
  {
    v8 = (_DWORD *)(*(_QWORD *)(v2 + 20) >> 32);
    for ( i = (_DWORD *)*(_QWORD *)(v2 + 20); v8 != i; v5 += 4 )
    {
      if ( (const PackManifest *)v5 == v4 )
      {
        v9 = v5 - v6;
        v10 = 0;
        v11 = v9 >> 2;
        v12 = v9 >> 2;
        if ( !(v9 >> 2) )
          v12 = 1;
        v13 = v12 + (v9 >> 2);
        v14 = v12 + (v9 >> 2);
        if ( 0 != v13 >> 30 )
          v14 = 0x3FFFFFFF;
        if ( v13 < v12 )
        if ( v14 )
        {
          if ( v14 >= 0x40000000 )
            sub_21E57F4();
          v10 = (char *)operator new(4 * v14);
        }
        *(_DWORD *)&v10[4 * v11] = *i;
        if ( v11 )
          _aeabi_memmove4(v10, v6);
        v5 = &v10[4 * v11];
        if ( v6 )
          operator delete(v6);
        v4 = (const PackManifest *)&v10[4 * v14];
        v6 = v10;
      }
      else
        *(_DWORD *)v5 = *i;
      ++i;
    }
    v2 += 48;
    v1 = v64;
  }
  if ( v6 != v5 )
    v15 = v6;
    do
      *(_DWORD *)(*(_DWORD *)v15 + 324) = *(_DWORD *)(*(_DWORD *)v15 + 320);
      v16 = *(_DWORD *)v15;
      v15 += 4;
      v4 = *(const PackManifest **)(v16 + 332);
      *(_DWORD *)(v16 + 336) = v4;
    while ( v5 != v15 );
  v17 = v5 - v6;
  if ( (v5 - v6) >> 2 )
    v18 = v17 >> 2;
    v63 = v17 >> 2;
    v19 = 0;
      v20 = *(_DWORD *)&v6[4 * v19];
      v61 = v19 + 1;
      for ( j = v19 + 1; j < v18; ++j )
        v22 = *(_DWORD *)&v6[4 * j];
        if ( PackDependencyManager::packIsDependedUpon(
               *(PackDependencyManager **)(v20 + 60),
               *(const PackManifest **)(v22 + 60),
               v4) == 1 )
          v23 = *(_QWORD *)(v22 + 324);
          if ( (_DWORD)v23 == HIDWORD(v23) )
          {
            v24 = *(void **)(v22 + 320);
            v25 = 0;
            v26 = ((signed int)v23 - (signed int)v24) >> 2;
            if ( !v26 )
              v26 = 1;
            HIDWORD(v23) = v26 + (((signed int)v23 - (signed int)v24) >> 2);
            v28 = v26 + (((signed int)v23 - (signed int)v24) >> 2);
            if ( 0 != HIDWORD(v23) >> 30 )
              v28 = 0x3FFFFFFF;
            if ( v27 < v26 )
            if ( v28 )
            {
              if ( v28 >= 0x40000000 )
                sub_21E57F4();
              v25 = (char *)operator new(4 * v28);
              LODWORD(v23) = *(_QWORD *)(v22 + 320) >> 32;
              v24 = (void *)*(_QWORD *)(v22 + 320);
            }
            v4 = (const PackManifest *)(v23 - (_DWORD)v24);
            HIDWORD(v23) = (char *)v4 + (_DWORD)v25;
            *(_DWORD *)((char *)v4 + (_DWORD)v25) = v20;
            if ( ((signed int)v23 - (signed int)v24) >> 2 )
              v30 = (int)v4 + (_DWORD)v25;
              _aeabi_memmove4(v25, v24);
              v29 = v30;
            v31 = v29 + 4;
            if ( v24 )
              v32 = v24;
              v33 = v31;
              operator delete(v32);
              v31 = v33;
            *(_DWORD *)(v22 + 320) = v25;
            *(_DWORD *)(v22 + 324) = v31;
            v18 = v63;
            *(_DWORD *)(v22 + 328) = &v25[4 * v28];
          }
          else
            *(_DWORD *)v23 = v20;
            *(_DWORD *)(v22 + 324) += 4;
          v34 = *(_QWORD *)(v20 + 336);
          if ( (_DWORD)v34 == HIDWORD(v34) )
            v35 = *(void **)(v20 + 332);
            v36 = 0;
            v37 = ((signed int)v34 - (signed int)v35) >> 2;
            if ( !v37 )
              v37 = 1;
            HIDWORD(v34) = v37 + (((signed int)v34 - (signed int)v35) >> 2);
            v39 = v37 + (((signed int)v34 - (signed int)v35) >> 2);
            if ( 0 != HIDWORD(v34) >> 30 )
              v39 = 0x3FFFFFFF;
            if ( v38 < v37 )
            if ( v39 )
              if ( v39 >= 0x40000000 )
              v36 = (char *)operator new(4 * v39);
              LODWORD(v34) = *(_QWORD *)(v20 + 332) >> 32;
              v35 = (void *)*(_QWORD *)(v20 + 332);
            v4 = (const PackManifest *)(v34 - (_DWORD)v35);
            *(_DWORD *)&v36[v34 - (_DWORD)v35] = v22;
            v40 = &v36[v34 - (_DWORD)v35];
            if ( ((signed int)v34 - (signed int)v35) >> 2 )
              _aeabi_memmove4(v36, v35);
            v41 = (int)(v40 + 4);
            if ( v35 )
              operator delete(v35);
            *(_DWORD *)(v20 + 332) = v36;
            *(_DWORD *)(v20 + 336) = v41;
            *(_DWORD *)(v20 + 340) = &v36[4 * v39];
            *(_DWORD *)v34 = v22;
            *(_DWORD *)(v20 + 336) += 4;
      PackDependencyManager::getMissingDependencyIdentities((PackDependencyManager *)&v71, (const PackContentItem *)v20);
      v43 = HIDWORD(v71);
      v42 = v71;
      if ( (_DWORD)v71 != HIDWORD(v71) )
        v62 = v20 + 80;
        do
          v68 = 0;
          v69 = 0;
          v70 = 0;
          mce::UUID::asString((mce::UUID *)&v67);
          v46 = (int)v69;
          if ( v69 == v70 )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v68,
              &v67);
            v47 = v67;
            *v69 = (int)v67;
            v47 = (char *)&unk_28898CC;
            v67 = (char *)&unk_28898CC;
            v69 = (int *)(v46 + 4);
          v48 = v47 - 12;
          if ( (int *)(v47 - 12) != &dword_28898C0 )
            v44 = (unsigned int *)(v47 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
            else
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          v49 = (int *)SemVersion::asString((SemVersion *)(v42 + 16));
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              v49);
            sub_21E8AF4(v69, v49);
            ++v69;
          PackDiscoveryError::PackDiscoveryError(&v65, 20, (unsigned __int64 *)&v68);
          PackReport::addWarning<PackDiscoveryError>(v62, (int)&v65);
          v50 = v18;
          v65 = &off_26D9084;
          v51 = (void *)HIDWORD(v66);
          v52 = (void *)v66;
          if ( (_DWORD)v66 != HIDWORD(v66) )
            do
              v55 = (int *)(*(_DWORD *)v52 - 12);
              if ( v55 != &dword_28898C0 )
              {
                v53 = (unsigned int *)(*(_DWORD *)v52 - 4);
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
                  j_j_j_j__ZdlPv_9(v55);
              }
              v52 = (char *)v52 + 4;
            while ( v52 != v51 );
            v52 = (void *)v66;
          if ( v52 )
            operator delete(v52);
          v56 = v69;
          v57 = v68;
          v18 = v50;
          if ( v68 != v69 )
              v60 = (int *)(*v57 - 12);
              if ( v60 != &dword_28898C0 )
                v58 = (unsigned int *)(*v57 - 4);
                    v59 = __ldrex(v58);
                  while ( __strex(v59 - 1, v58) );
                  v59 = (*v58)--;
                if ( v59 <= 0 )
                  j_j_j_j__ZdlPv_9(v60);
              ++v57;
            while ( v57 != v56 );
            v57 = v68;
          if ( v57 )
            operator delete(v57);
          v42 += 48;
        while ( v42 != v43 );
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector(&v71);
      v19 = v61;
    while ( v61 < v18 );
  if ( v6 )
    operator delete(v6);
}


void __fastcall PackManagerContentSource::generateItems(PackManagerContentSource *this, int a2)
{
  int v2; // r7@1
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r9@2
  unsigned int v6; // r6@2
  int v7; // r10@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int v20; // r11@53
  void *v21; // r5@53
  int v22; // r7@53
  int v23; // r1@53
  int v24; // r2@53
  int v25; // r3@53
  int v26; // r10@53
  int v27; // r0@53
  int v28; // r1@53
  char v29; // r0@53
  int v30; // r6@53
  int v31; // r1@53
  int v32; // r0@53
  int v33; // r0@56
  PackManifest *v34; // r8@56
  void *v35; // r0@56
  void *v36; // r0@57
  void *v37; // r0@58
  int v38; // r0@59
  void *v39; // r0@59
  void *v40; // r0@60
  void *v41; // r0@61
  int v42; // r2@62
  int v43; // r3@62
  int v44; // r7@62
  int v45; // r12@62
  int v46; // r0@62
  __int16 v47; // r0@62
  __int64 v48; // r0@62
  _DWORD *v49; // [sp+1Ch] [bp-8Ch]@53
  unsigned __int64 v50; // [sp+20h] [bp-88h]@53
  _QWORD *v51; // [sp+34h] [bp-74h]@4
  _QWORD *v52; // [sp+38h] [bp-70h]@2
  _DWORD *v53; // [sp+40h] [bp-68h]@3
  int v54; // [sp+44h] [bp-64h]@3
  int v55; // [sp+48h] [bp-60h]@1
  int v56; // [sp+4Ch] [bp-5Ch]@1
  PackManagerContentSource *v57; // [sp+50h] [bp-58h]@1
  void *v58; // [sp+54h] [bp-54h]@62
  int v59; // [sp+58h] [bp-50h]@25
  int v60; // [sp+5Ch] [bp-4Ch]@21
  int v61; // [sp+60h] [bp-48h]@59
  unsigned int v62; // [sp+64h] [bp-44h]@59
  int v63; // [sp+68h] [bp-40h]@17
  int v64; // [sp+6Ch] [bp-3Ch]@13
  int v65; // [sp+70h] [bp-38h]@9
  int v66; // [sp+74h] [bp-34h]@5
  int v67; // [sp+78h] [bp-30h]@53

  v2 = a2;
  v55 = a2;
  v57 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *(_QWORD *)(a2 + 68) >> 32;
  v4 = *(_QWORD *)(a2 + 68);
  v56 = v3;
  if ( v4 != v3 )
  {
    v52 = (_QWORD *)(a2 + 32);
    v5 = 0;
    v6 = 0;
    do
    {
      v54 = v4;
      v7 = *(_QWORD *)(v4 + 20);
      v53 = (_DWORD *)(*(_QWORD *)(v4 + 20) >> 32);
      if ( (_DWORD *)v7 != v53 )
      {
        v51 = (_QWORD *)(v4 + 8);
        do
        {
          v20 = *(_DWORD *)(v2 + 80);
          v21 = operator new(0x158u);
          PackContentItem::PackContentItem((int)v21, v2);
          v49 = (_DWORD *)v7;
          v50 = __PAIR__(v6, v5) + 1;
          v22 = *(_DWORD *)(v20 + 4 * v5);
          *((_DWORD *)v21 + 19) = *(_DWORD *)(v22 + 76);
          *((_QWORD *)v21 + 37) = *(_QWORD *)(v22 + 296);
          EntityInteraction::setInteractText((int *)v21 + 20, (int *)(v22 + 80));
          *((_DWORD *)v21 + 21) = *(_DWORD *)(v22 + 84);
          *((_WORD *)v21 + 44) = *(_WORD *)(v22 + 88);
          std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::operator=(
            (int)v21 + 92,
            (__int64 *)(v22 + 92));
            (int)v21 + 104,
            (__int64 *)(v22 + 104));
          EntityInteraction::setInteractText((int *)v21 + 29, (int *)(v22 + 116));
          EntityInteraction::setInteractText((int *)v21 + 30, (int *)(v22 + 120));
          v23 = *(_DWORD *)(v22 + 132);
          v24 = *(_DWORD *)(v22 + 136);
          v25 = *(_DWORD *)(v22 + 140);
          *((_DWORD *)v21 + 32) = *(_DWORD *)(v22 + 128);
          v26 = (int)v21 + 128;
          v27 = (int)v21 + 132;
          *(_DWORD *)v27 = v23;
          *(_DWORD *)(v27 + 4) = v24;
          *(_DWORD *)(v27 + 8) = v25;
          v28 = *(_DWORD *)(v22 + 144);
          *(_WORD *)(v26 + 20) = *(_WORD *)(v22 + 148);
          *(_DWORD *)(v26 + 16) = v28;
          EntityInteraction::setInteractText((int *)v21 + 38, (int *)(v22 + 152));
          EntityInteraction::setInteractText((int *)v21 + 39, (int *)(v22 + 156));
          EntityInteraction::setInteractText((int *)v21 + 40, (int *)(v22 + 160));
          v29 = *(_BYTE *)(v22 + 166);
          *((_WORD *)v21 + 82) = *(_WORD *)(v22 + 164);
          v30 = (int)v21 + 164;
          *(_BYTE *)(v30 + 2) = v29;
          *(_BYTE *)(v30 + 4) = *(_BYTE *)(v22 + 168);
          *(_BYTE *)(v30 + 12) = *(_BYTE *)(v22 + 176);
          (*(void (__fastcall **)(int *))(**(_DWORD **)(*(_DWORD *)(v20 + 4 * v5) + 60) + 8))(&v67);
          v31 = v67;
          v67 = 0;
          v32 = *((_DWORD *)v21 + 15);
          *((_DWORD *)v21 + 15) = v31;
          if ( v32 )
          {
            (*(void (**)(void))(*(_DWORD *)v32 + 4))();
            if ( v67 )
              (*(void (**)(void))(*(_DWORD *)v67 + 4))();
          }
          std::vector<SubpackInfo,std::allocator<SubpackInfo>>::operator=(
            (int)v21 + 308,
            (unsigned __int64 *)(*(_DWORD *)(v20 + 4 * v5) + 308));
          v33 = *(_DWORD *)(v20 + 4 * v5);
          *((_DWORD *)v21 + 76) = *(_DWORD *)(v33 + 304);
          EntityInteraction::setInteractText((int *)v21 + 72, (int *)(v33 + 288));
          v34 = (PackManifest *)*((_DWORD *)v21 + 15);
          *((_QWORD *)v21 + 4) = *v51;
          *((_QWORD *)v21 + 6) = *v52;
          PackManifest::getName((PackManifest *)&v65, (int)v34);
          I18n::get(&v66, (int **)&v65);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v21 + 4,
            &v66);
          v35 = (void *)(v66 - 12);
          if ( (int *)(v66 - 12) != &dword_28898C0 )
            v8 = (unsigned int *)(v66 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
            }
            else
              v9 = (*v8)--;
            if ( v9 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v36 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v10 = (unsigned int *)(v65 - 4);
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
              v11 = (*v10)--;
            if ( v11 <= 0 )
              j_j_j_j__ZdlPv_9(v36);
          PackManifest::getDescription((PackManifest *)&v64, (int)v34);
            (int *)v21 + 5,
            &v64);
          v37 = (void *)(v64 - 12);
          if ( (int *)(v64 - 12) != &dword_28898C0 )
            v12 = (unsigned int *)(v64 - 4);
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
              v13 = (*v12)--;
            if ( v13 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          *((_QWORD *)v21 + 3) = PackManifest::getPackSize(v34);
          v38 = PackManifest::getFileSystemFromOrigin(v34);
          ResourceUtil::stringFromPath(&v61, v38);
          sub_21E91E0((void **)&v63, v62, v61);
            (int *)v21 + 18,
            &v63);
          v39 = (void *)(v63 - 12);
          if ( (int *)(v63 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v63 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          PackManifest::getZipFolderPath((PackManifest *)&v60, (int)v34);
            (int *)v21 + 17,
            &v60);
          v40 = (void *)(v60 - 12);
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v60 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v40);
          PackManifest::generateIconPath((PackManifest *)&v59, (int)v34);
            (int *)v21 + 16,
            &v59);
          v41 = (void *)(v59 - 12);
          if ( (int *)(v59 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v59 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v41);
          EntityInteraction::setInteractText((int *)v21 + 46, (int *)v21 + 20);
          *((_DWORD *)v21 + 47) = *((_DWORD *)v21 + 21);
          *((_WORD *)v21 + 96) = *((_WORD *)v21 + 44);
            (int)v21 + 196,
            (__int64 *)((char *)v21 + 92));
            (int)v21 + 208,
            (__int64 *)v21 + 13);
          EntityInteraction::setInteractText((int *)v21 + 55, (int *)v21 + 29);
          EntityInteraction::setInteractText((int *)v21 + 56, (int *)v21 + 30);
          v42 = *((_DWORD *)v21 + 33);
          v43 = *((_DWORD *)v21 + 34);
          v44 = *((_DWORD *)v21 + 35);
          v45 = (int)v21 + 232;
          *(_DWORD *)v45 = *(_DWORD *)v26;
          *(_DWORD *)(v45 + 4) = v42;
          *(_DWORD *)(v45 + 8) = v43;
          *(_DWORD *)(v45 + 12) = v44;
          v46 = *((_DWORD *)v21 + 36);
          *((_WORD *)v21 + 126) = *((_WORD *)v21 + 74);
          *((_DWORD *)v21 + 62) = v46;
          EntityInteraction::setInteractText((int *)v21 + 64, (int *)v21 + 38);
          EntityInteraction::setInteractText((int *)v21 + 65, (int *)v21 + 39);
          EntityInteraction::setInteractText((int *)v21 + 66, (int *)v21 + 40);
          v47 = *(_WORD *)v30;
          *((_BYTE *)v21 + 270) = *((_BYTE *)v21 + 166);
          *((_WORD *)v21 + 134) = v47;
          *((_BYTE *)v21 + 272) = *((_BYTE *)v21 + 168);
          *((_BYTE *)v21 + 280) = *((_BYTE *)v21 + 176);
          *v49 = v21;
          v58 = v21;
          v48 = *(_QWORD *)((char *)v57 + 4);
          if ( (_DWORD)v48 == HIDWORD(v48) )
            std::vector<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>,std::allocator<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>(
              v57,
              (int *)&v58);
            v3 = v56;
            v4 = v54;
            v6 = HIDWORD(v50);
            v5 = v50;
            if ( v58 )
              (*(void (**)(void))(*(_DWORD *)v58 + 4))();
          else
            v58 = 0;
            *(_DWORD *)v48 = v21;
            *((_DWORD *)v57 + 1) = v48 + 4;
          v2 = v55;
          v58 = 0;
          v7 = (int)(v49 + 1);
        }
        while ( v49 + 1 != v53 );
      }
      v4 += 48;
    }
    while ( v4 != v3 );
  }
  PackManagerContentSource::reloadDependencies((PackManagerContentSource *)v2);
}


RakNet *__fastcall PackManagerContentSource::load(PackManagerContentSource *this)
{
  PackManagerContentSource *v1; // r9@1 OVERLAPPED
  char *j; // r8@1
  __int64 v3; // r4@1
  int v4; // r7@2
  int v5; // r2@6
  int v6; // r10@6 OVERLAPPED
  char *v7; // r7@7
  signed int i; // r11@7
  __int64 *v9; // r1@7
  __int64 *v10; // r4@7
  __int64 *v11; // r5@7
  __int64 v12; // ST00_8@8
  unsigned __int64 v13; // r2@8
  int v14; // r8@8
  _QWORD *v15; // r4@10
  int v16; // r4@13
  signed int v17; // r1@14
  int v18; // r5@15
  int v19; // r4@15
  int v20; // r1@18
  void *v21; // r0@18
  signed int v22; // r1@21
  int v23; // r4@27
  int v24; // r5@27
  PackManifest *v25; // r0@28
  char *v26; // r0@28
  int v27; // r5@32
  _QWORD *v28; // r11@32
  int v29; // r7@33
  int v30; // r6@33
  int v31; // r5@36
  int v32; // r4@38
  int v33; // r7@38
  StoreCatalogRepository *v34; // r5@39
  char *v35; // r0@39
  StoreCatalogItem *v36; // r0@39
  int *v37; // r5@39
  int *v38; // r0@40
  int *v39; // r0@41
  int v40; // r4@43
  int v41; // r5@43
  signed int v42; // r1@47
  int v43; // r1@53
  void *v44; // r0@53
  _QWORD *v45; // r4@58
  int v46; // r5@58
  signed int v47; // r1@62
  int v48; // r1@68
  void *v49; // r0@68
  RakNet *result; // r0@74
  int v51; // [sp+18h] [bp-1130h]@8
  char v52; // [sp+2Ch] [bp-111Ch]@1
  __int64 v53; // [sp+30h] [bp-1118h]@32
  __int64 v54; // [sp+38h] [bp-1110h]@7
  int v55; // [sp+40h] [bp-1108h]@8
  _QWORD *v56; // [sp+44h] [bp-1104h]@7
  _QWORD *v57; // [sp+48h] [bp-1100h]@8
  _QWORD *v58; // [sp+4Ch] [bp-10FCh]@8
  int v59; // [sp+50h] [bp-10F8h]@7
  int v60; // [sp+54h] [bp-10F4h]@8
  void **v61; // [sp+5Ch] [bp-10ECh]@7
  int v62; // [sp+60h] [bp-10E8h]@73
  void **v63; // [sp+64h] [bp-10E4h]@73
  int v64; // [sp+68h] [bp-10E0h]@73
  void **v65; // [sp+1098h] [bp-B0h]@73

  v1 = this;
  j = &v52;
  *(_DWORD *)&v52 = _stack_chk_guard;
  v3 = *((_QWORD *)this + 10);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = *((_QWORD *)this + 10);
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( HIDWORD(v3) != v4 );
  }
  *((_DWORD *)v1 + 21) = v3;
  v5 = *(_QWORD *)((char *)v1 + 68) >> 32;
  v6 = *(_QWORD *)((char *)v1 + 68);
  if ( v6 != v5 )
    v7 = (char *)&v61;
    i = -286331153;
    v9 = (__int64 *)&v59;
    v10 = (__int64 *)&v56;
    v11 = &v54;
      *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 20);
      v59 = *(_DWORD *)v6;
      v51 = v5;
      v60 = *(_DWORD *)(v59 - 12);
      Core::FileStream::FileStream((int)v7, v9, 8);
      v57 = 0;
      v58 = 0;
      v54 = 0LL;
      v55 = 0;
      v56 = 0;
      v12 = *((_QWORD *)v1 + 6);
      PacksModelFactory::loadPacks(v7, *(_DWORD *)(v6 + 16), v10, (int)v11);
      v14 = HIDWORD(v54);
      if ( (_DWORD)v54 != HIDWORD(v54) )
      {
        v14 = v54;
        do
        {
          v23 = *(_QWORD *)(v6 + 32) >> 32;
          v24 = *(_QWORD *)(v6 + 32);
          if ( v24 == v23 )
          {
LABEL_30:
            v14 += 120;
          }
          else
            while ( 1 )
            {
              v25 = (PackManifest *)Pack::getManifest(*(Pack **)v14);
              v26 = PackManifest::getIdentity(v25);
              if ( PackIdVersion::operator==((int)v26, v24) == 1 )
                break;
              v24 += 48;
              if ( v23 == v24 )
                goto LABEL_30;
            }
            v15 = v57;
            if ( v57 == v58 )
              std::vector<PackModel,std::allocator<PackModel>>::_M_emplace_back_aux<PackModel>(
                (unsigned __int64 *)&v56,
                v14);
            else
              *v57 = *(_QWORD *)v14;
              *(_DWORD *)(v14 + 4) = &unk_28898CC;
              PackReport::PackReport((int)(v15 + 1), v14 + 8);
              v15[14] = *(_QWORD *)(v14 + 112);
              v57 += 15;
            v16 = v14 + 120;
            if ( v14 + 120 != HIDWORD(v54) )
              v17 = HIDWORD(v54) - v16;
              v16 = HIDWORD(v54);
              if ( v17 >= 1 )
              {
                v18 = v14;
                v19 = (v17 >> 3) * i + 1;
                do
                {
                  *(_DWORD *)v18 = *(_DWORD *)(v18 + 120);
                  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                    (int *)(v18 + 4),
                    (int *)(v18 + 124));
                  PackReport::operator=((int *)(v18 + 8), (int *)(v18 + 128));
                  --v19;
                  *(_QWORD *)(v18 + 112) = *(_QWORD *)(v18 + 232);
                  v18 += 120;
                }
                while ( v19 > 1 );
                v16 = HIDWORD(v54);
              }
            HIDWORD(v54) = v16 - 120;
            PackReport::~PackReport((PackReport *)(v16 - 112));
            v20 = *(_DWORD *)(v16 - 116);
            LODWORD(v13) = &dword_28898C0;
            v21 = (void *)(v20 - 12);
            if ( (int *)(v20 - 12) != &dword_28898C0 )
              LODWORD(v13) = v20 - 4;
              if ( &pthread_create )
                __dmb();
                  v22 = __ldrex((unsigned int *)v13);
                  HIDWORD(v13) = v22 - 1;
                while ( __strex(v22 - 1, (unsigned int *)v13) );
              else
                v22 = *(_DWORD *)v13;
                HIDWORD(v13) = *(_DWORD *)v13 - 1;
                *(_DWORD *)v13 = HIDWORD(v13);
              if ( v22 <= 0 )
                j_j_j_j__ZdlPv_9(v21);
        }
        while ( v14 != HIDWORD(v54) );
      }
      v53 = *(_QWORD *)&v1;
      v28 = v57;
      v27 = (int)v56;
      if ( v56 != v57 )
        v29 = 0;
        v30 = 0;
          sub_12D3A04((int *)&v53, v27, 1, SHIDWORD(v13), v29, v30);
          v27 += 120;
          v30 = (__PAIR__((unsigned int)v30, v29++) + 1) >> 32;
        while ( v28 != (_QWORD *)v27 );
        v14 = HIDWORD(v54);
      v31 = v54;
      for ( i = -286331153; v14 != v31; v31 += 120 )
        sub_12D3A04((int *)&v53, v31, 2, SHIDWORD(v13), 0, 0);
      v33 = *(_QWORD *)(v6 + 20) >> 32;
      v32 = *(_QWORD *)(v6 + 20);
      for ( j = &v52; v33 != v32; v32 += 4 )
        v34 = (StoreCatalogRepository *)*((_DWORD *)v1 + 15);
        v35 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v32 + 60));
        v36 = (StoreCatalogItem *)StoreCatalogRepository::getStoreCatalogItemByPackIdentity(v34, (const mce::UUID *)v35);
        v37 = (int *)(*(_DWORD *)v32 + 288);
        if ( v36 )
          v38 = (int *)StoreCatalogItem::getStartDate(v36);
          EntityInteraction::setInteractText(v37, v38);
        else
          v39 = (int *)PackManifest::getLastModifiedDate(*(PackManifest **)(*(_DWORD *)v32 + 60));
          EntityInteraction::setInteractText(v37, v39);
      v40 = HIDWORD(v54);
      v41 = v54;
      v7 = (char *)&v61;
          PackReport::~PackReport((PackReport *)(v41 + 8));
          v43 = *(_DWORD *)(v41 + 4);
          LODWORD(v13) = &dword_28898C0;
          v44 = (void *)(v43 - 12);
          if ( (int *)(v43 - 12) != &dword_28898C0 )
            LODWORD(v13) = v43 - 4;
            if ( &pthread_create )
              __dmb();
              do
                v42 = __ldrex((unsigned int *)v13);
                HIDWORD(v13) = v42 - 1;
              while ( __strex(v42 - 1, (unsigned int *)v13) );
              v42 = *(_DWORD *)v13;
              HIDWORD(v13) = *(_DWORD *)v13 - 1;
              *(_DWORD *)v13 = HIDWORD(v13);
            if ( v42 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          v41 += 120;
        while ( v41 != v40 );
        v41 = v54;
      if ( v41 )
        operator delete((void *)v41);
      v45 = v57;
      v46 = (int)v56;
          PackReport::~PackReport((PackReport *)(v46 + 8));
          v48 = *(_DWORD *)(v46 + 4);
          v49 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            LODWORD(v13) = v48 - 4;
                v47 = __ldrex((unsigned int *)v13);
                HIDWORD(v13) = v47 - 1;
              while ( __strex(v47 - 1, (unsigned int *)v13) );
              v47 = *(_DWORD *)v13;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v46 += 120;
        while ( (_QWORD *)v46 != v45 );
        v46 = (int)v56;
      if ( v46 )
        operator delete((void *)v46);
      v61 = &off_26D66C4;
      v65 = &off_26D66EC;
      v63 = &off_26D66D8;
      Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v64, (int)&`vtable for'Core::FileStream, v13);
      v61 = &off_26D670C;
      v65 = &off_26D6720;
      v62 = 0;
      sub_21B6560(&v65);
      v5 = v51;
      v6 += 48;
      v9 = (__int64 *)&v59;
      v10 = (__int64 *)&v56;
      v11 = &v54;
    while ( v6 != v51 );
  result = (RakNet *)((char *)_stack_chk_guard - *(_DWORD *)j);
  if ( _stack_chk_guard != *(RakNet **)j )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PackManagerContentSource::PackManagerContentSource(int result, int a2, int a3, int a4, int a5, int anonymous2, __int64 a6, int a7, int a8, int a9)
{
  int v10; // r1@1

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 1;
  *(_DWORD *)result = &off_26E5038;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = a7;
  *(_DWORD *)(result + 36) = a8;
  *(_DWORD *)(result + 40) = a2;
  v10 = result + 44;
  *(_DWORD *)v10 = a3;
  *(_DWORD *)(v10 + 4) = a4;
  *(_DWORD *)(v10 + 8) = a5;
  *(_QWORD *)(result + 56) = __PAIR__(a6, anonymous2);
  *(_DWORD *)(result + 64) = HIDWORD(a6);
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 88) = 0;
  return result;
}


void __fastcall PackManagerContentSource::~PackManagerContentSource(PackManagerContentSource *this)
{
  PackManagerContentSource::~PackManagerContentSource(this);
}


void __fastcall PackManagerContentSource::repopulateReports(PackManagerContentSource *this, UIDefRepository *a2)
{
  PackManagerContentSource::repopulateReports(this, a2);
}


PackManagerContentSource *__fastcall PackManagerContentSource::~PackManagerContentSource(PackManagerContentSource *this)
{
  PackManagerContentSource *v1; // r9@1
  char *v2; // r4@1
  char *v3; // r5@1
  int v4; // r5@8
  int v5; // r7@8
  unsigned int *v6; // r2@10
  signed int v7; // r1@12
  void *v8; // r0@18
  int v9; // r0@20
  int *v10; // r0@22
  void *v11; // r0@27

  v1 = this;
  *(_DWORD *)this = &off_26E5038;
  v2 = (char *)(*((_QWORD *)this + 10) >> 32);
  v3 = (char *)*((_QWORD *)this + 10);
  if ( v3 != v2 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v2 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 20);
  }
  if ( v3 )
    operator delete(v3);
  v5 = *(_QWORD *)((char *)v1 + 68) >> 32;
  v4 = *(_QWORD *)((char *)v1 + 68);
  if ( v4 != v5 )
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)(v4 + 32));
      v8 = *(void **)(v4 + 20);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v4 + 16);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v4 + 16) = 0;
      v10 = (int *)(*(_DWORD *)v4 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v4 += 48;
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 17);
  if ( v4 )
    operator delete((void *)v4);
  *(_DWORD *)v1 = &off_26E5018;
  v11 = (void *)*((_DWORD *)v1 + 1);
  if ( v11 )
    operator delete(v11);
  return v1;
}


void __fastcall PackManagerContentSource::deleteContent(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r4@1
  int v4; // r7@1 OVERLAPPED
  int v5; // r8@1 OVERLAPPED
  ResourcePackManager **v6; // r6@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // r5@20
  int v12; // r5@20
  ResourcePack *v13; // r5@20
  void *v14; // r0@20
  void *v15; // r0@23
  int i; // r6@26
  int v17; // r9@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // r11@36
  char *v21; // r7@36
  __int64 j; // r0@36
  __int64 v23; // r2@39
  int v24; // t1@40
  void *v25; // r0@44
  unsigned __int64 *v26; // [sp+4h] [bp-44h]@2
  int v27; // [sp+Ch] [bp-3Ch]@28
  int v28; // [sp+10h] [bp-38h]@36
  int v29; // [sp+14h] [bp-34h]@4
  int v30; // [sp+18h] [bp-30h]@8
  int v31; // [sp+1Ch] [bp-2Ch]@20

  v2 = a2;
  v3 = a1;
  *(_QWORD *)&v4 = *a2;
  if ( v4 == v5 )
  {
    v6 = (ResourcePackManager **)(a1 + 40);
  }
  else
    v26 = a2;
    do
    {
      v11 = PackManifest::getLocation(*(PackManifest **)(*(_DWORD *)v4 + 60));
      sub_21E8AF4(&v30, (int *)v11);
      v31 = *((_DWORD *)v11 + 1);
      v12 = *(_DWORD *)(v3 + 44);
      ResourceLocation::getFullPath((ResourceLocation *)&v29, (int)&v30);
      v13 = ResourcePackRepository::getResourcePackInPath(v12, &v29);
      v14 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v29 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      }
      if ( v13 )
        ResourcePackManager::removePack(*v6, v13, 0);
      v15 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v30 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v4 += 4;
    }
    while ( v4 != v5 );
    v2 = v26;
  ResourcePackManager::handlePendingStackChanges(*v6);
  v17 = *v2 >> 32;
  for ( i = *v2; i != v17; i += 4 )
    v20 = *(_DWORD *)i;
    v21 = PackManifest::getLocation(*(PackManifest **)(*(_DWORD *)i + 60));
    sub_21E8AF4(&v27, (int *)v21);
    v28 = *((_DWORD *)v21 + 1);
    for ( j = *(_QWORD *)(v3 + 68); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 48 )
      v23 = *(_QWORD *)(j + 20);
      if ( (_DWORD)v23 != HIDWORD(v23) )
        while ( 1 )
          v24 = *(_DWORD *)v23;
          LODWORD(v23) = v23 + 4;
          if ( v24 == v20 )
            break;
          if ( HIDWORD(v23) == (_DWORD)v23 )
            goto LABEL_37;
        *(_DWORD *)(v20 + 76) = 0;
        break;
LABEL_37:
      ;
    ResourcePackRepository::deletePack(*(ResourcePackRepository **)(v3 + 44), (const ResourceLocation *)&v27);
    ResourcePackRepository::removePack(*(ResourcePackRepository **)(v3 + 44), (const ResourceLocation *)&v27);
    v25 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
}


void __fastcall PackManagerContentSource::repopulateReports(PackManagerContentSource *this, UIDefRepository *a2)
{
  int v2; // r3@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1
  char *v5; // r5@2
  char *v6; // r12@2
  int i; // r4@3
  int v8; // r8@3
  int v9; // r1@4
  signed int v10; // r5@7
  char *v11; // r6@7
  signed int v12; // r10@7
  unsigned int v13; // r0@7
  unsigned int v14; // r2@9
  unsigned int v15; // r9@9
  char *v16; // r7@14
  char *v17; // r5@17
  int v18; // r4@28
  char *v19; // r7@28
  int v20; // r1@28
  int v21; // r10@29
  char *v22; // r6@29
  char *v23; // r7@30
  int v24; // r9@30
  unsigned int v25; // r4@30 OVERLAPPED
  unsigned int v26; // r1@30 OVERLAPPED
  unsigned int v27; // r2@30 OVERLAPPED
  unsigned int v28; // r3@30
  bool v29; // cf@30
  signed int v30; // r3@30
  bool v31; // zf@32
  signed int v32; // r4@32
  char *v33; // r4@38
  unsigned int v34; // r4@40 OVERLAPPED
  unsigned int v35; // r3@40
  signed int v36; // r3@40
  bool v37; // zf@42
  signed int v38; // r4@42
  char *v39; // r3@46
  unsigned int v40; // r4@47 OVERLAPPED
  unsigned int v41; // r3@47
  signed int v42; // r3@47
  bool v43; // zf@49
  signed int v44; // r4@49
  int v45; // r0@59
  _DWORD *v46; // r4@59
  unsigned int v47; // r1@59 OVERLAPPED
  unsigned int v48; // r2@59 OVERLAPPED
  unsigned int v49; // r3@59
  unsigned int v50; // r6@59
  signed int v51; // r3@59
  bool v52; // zf@61
  signed int v53; // r6@61
  _DWORD *v54; // r3@65
  unsigned int v55; // r3@66
  unsigned int v56; // r6@66
  signed int v57; // r3@66
  bool v58; // zf@68
  signed int v59; // r6@68
  int v60; // r6@75
  int v61; // r9@75
  unsigned int v62; // r4@75 OVERLAPPED
  unsigned int v63; // r1@75 OVERLAPPED
  unsigned int v64; // r2@75 OVERLAPPED
  unsigned int v65; // r3@75
  signed int v66; // r3@75
  bool v67; // zf@77
  signed int v68; // r4@77
  char *v69; // r4@83
  unsigned int v70; // r4@85 OVERLAPPED
  unsigned int v71; // r3@85
  signed int v72; // r3@85
  bool v73; // zf@87
  signed int v74; // r4@87
  char *v75; // r3@91
  unsigned int v76; // r4@92 OVERLAPPED
  unsigned int v77; // r3@92
  signed int v78; // r3@92
  bool v79; // zf@94
  signed int v80; // r4@94
  char *v81; // r11@101
  char *v82; // r4@102
  char *v83; // r7@103
  int *v84; // r2@103
  ResourcePackManager *v85; // r0@107
  char *v86; // r0@107
  char *v87; // r0@108
  char *v88; // r6@110
  char *v89; // r7@111
  int *v90; // r0@111
  void *v91; // r0@111
  int v92; // r4@112
  int v93; // r7@112
  int v94; // r4@116
  int v95; // r12@116
  int v96; // r1@116
  int v97; // r2@116
  int v98; // r3@116
  int v99; // r1@116
  __int16 v100; // r1@116
  PackInstanceId *v101; // r0@118
  PackInstanceId *v102; // r4@118
  PackReport *v103; // r0@123
  PackReport *v104; // r4@123
  PackInstanceId *v105; // r0@128
  PackInstanceId *v106; // r4@128
  unsigned int *v107; // r2@136
  signed int v108; // r1@138
  unsigned int *v109; // r2@140
  signed int v110; // r1@142
  UIDefRepository *v111; // [sp+8h] [bp-F8h]@1
  PackManagerContentSource *v112; // [sp+Ch] [bp-F4h]@2
  int v113; // [sp+10h] [bp-F0h]@1
  int v114; // [sp+14h] [bp-ECh]@3
  char v115; // [sp+18h] [bp-E8h]@111
  void *ptr; // [sp+54h] [bp-ACh]@109
  PackInstanceId *v117; // [sp+58h] [bp-A8h]@111
  char *v118; // [sp+64h] [bp-9Ch]@107
  char *v119; // [sp+68h] [bp-98h]@107
  int v120; // [sp+6Ch] [bp-94h]@107
  void *v121; // [sp+70h] [bp-90h]@107
  PackReport *v122; // [sp+74h] [bp-8Ch]@107
  int v123; // [sp+78h] [bp-88h]@107
  void **v124; // [sp+7Ch] [bp-84h]@107
  int v125; // [sp+80h] [bp-80h]@107
  int v126; // [sp+84h] [bp-7Ch]@107
  int v127; // [sp+88h] [bp-78h]@107
  int v128; // [sp+8Ch] [bp-74h]@107
  void **v129; // [sp+90h] [bp-70h]@107
  int v130; // [sp+94h] [bp-6Ch]@107
  int v131; // [sp+98h] [bp-68h]@107
  int v132; // [sp+9Ch] [bp-64h]@107
  int v133; // [sp+A0h] [bp-60h]@107
  void **v134; // [sp+A4h] [bp-5Ch]@107
  int v135; // [sp+A8h] [bp-58h]@107
  int v136; // [sp+ACh] [bp-54h]@107
  int v137; // [sp+B0h] [bp-50h]@107
  int v138; // [sp+B4h] [bp-4Ch]@107
  char v139; // [sp+B8h] [bp-48h]@107
  void *v140; // [sp+CCh] [bp-34h]@101
  void *v141; // [sp+D0h] [bp-30h]@101
  void *v142; // [sp+D4h] [bp-2Ch]@101

  v111 = a2;
  v2 = 0;
  *(_QWORD *)&v3 = *(_QWORD *)((char *)this + 68);
  v113 = v4;
  if ( v3 == v4 )
  {
    v5 = 0;
    v6 = 0;
    v112 = this;
  }
  else
    do
    {
      v114 = v3;
      v8 = *(_QWORD *)(v3 + 20) >> 32;
      for ( i = *(_QWORD *)(v3 + 20); v8 != i; i += 4 )
      {
        v9 = *(_DWORD *)i;
        if ( *(_DWORD *)(*(_DWORD *)i + 76) == 1 )
        {
          if ( v5 == (char *)v2 )
          {
            v10 = v5 - v6;
            v11 = 0;
            v12 = v10 >> 2;
            v13 = v10 >> 2;
            if ( !(v10 >> 2) )
              v13 = 1;
            v14 = v13 + (v10 >> 2);
            v15 = v13 + (v10 >> 2);
            if ( 0 != v14 >> 30 )
              v15 = 0x3FFFFFFF;
            if ( v14 < v13 )
            if ( v15 )
            {
              v16 = v6;
              if ( v15 >= 0x40000000 )
                sub_21E57F4();
              v11 = (char *)operator new(4 * v15);
              v9 = *(_DWORD *)i;
              v6 = v16;
            }
            *(_DWORD *)&v11[4 * v12] = v9;
            if ( v12 )
              v17 = v6;
              _aeabi_memmove4(v11, v6);
              v6 = v17;
            v5 = &v11[4 * v12 + 4];
            if ( v6 )
              operator delete(v6);
            v2 = (int)&v11[4 * v15];
            v6 = v11;
          }
          else
            *(_DWORD *)v5 = v9;
            v5 += 4;
        }
      }
      v3 = v114 + 48;
    }
    while ( v114 + 48 != v113 );
  if ( v6 != v5 )
    v18 = v5 - v6;
    v19 = v6;
    sub_12D8030((int)v6, (unsigned int)v5, 2 * (31 - __clz((v5 - v6) >> 2)), 0);
    v20 = (int)(v19 + 4);
    if ( v18 < 65 )
      v6 = v19;
      if ( (char *)v20 != v5 )
        do
          v60 = v20;
          v61 = *(_DWORD *)v20;
          *(_QWORD *)(&v62 - 1) = *(_QWORD *)(*(_DWORD *)v6 + 296);
          *(_QWORD *)&v63 = *(_QWORD *)(*(_DWORD *)v20 + 296);
          v29 = v63 >= v65;
          v66 = 0;
          if ( v29 )
            v66 = 1;
          v29 = v64 >= v62;
          v67 = v64 == v62;
          v68 = 0;
            v68 = 1;
          if ( v67 )
            v68 = v66;
          if ( v68 )
            *(_QWORD *)(&v70 - 1) = *(_QWORD *)(*(_DWORD *)v19 + 296);
            v29 = v71 >= v63;
            v31 = v71 == v63;
            v72 = 0;
            if ( v31 || !v29 )
              v72 = 1;
            v29 = v70 >= v64;
            v73 = v70 == v64;
            v74 = 0;
            if ( v73 || !v29 )
              v74 = 1;
            if ( v73 )
              v74 = v72;
            v75 = (char *)v60;
            if ( !v74 )
              do
              {
                *(_DWORD *)v75 = *(_DWORD *)v19;
                *(_QWORD *)(&v76 - 1) = *(_QWORD *)(*((_DWORD *)v19 - 1) + 296);
                v29 = v77 >= v63;
                v31 = v77 == v63;
                v78 = 0;
                if ( !v31 && v29 )
                  v78 = 1;
                v29 = v76 >= v64;
                v79 = v76 == v64;
                v80 = 0;
                if ( !v79 && v29 )
                  v80 = 1;
                if ( v79 )
                  v80 = v78;
                v75 = v19;
                v19 -= 4;
              }
              while ( v80 );
            *(_DWORD *)v75 = v61;
            if ( 0 != (v60 - (signed int)v6) >> 2 )
              v69 = v6;
              _aeabi_memmove4(&v19[-4 * ((v60 - (signed int)v6) >> 2) + 8], v6);
              v6 = v69;
            *(_DWORD *)v6 = v61;
          v20 = v60 + 4;
          v19 = (char *)v60;
        while ( (char *)(v60 + 4) != v5 );
    else
      v21 = (int)(v19 + 64);
      v22 = v19;
      do
        v23 = (char *)v20;
        v24 = *(_DWORD *)v20;
        *(_QWORD *)(&v25 - 1) = *(_QWORD *)(*(_DWORD *)v6 + 296);
        *(_QWORD *)&v26 = *(_QWORD *)(*(_DWORD *)v20 + 296);
        v29 = v26 >= v28;
        v30 = 0;
        if ( v29 )
          v30 = 1;
        v29 = v27 >= v25;
        v31 = v27 == v25;
        v32 = 0;
          v32 = 1;
        if ( v31 )
          v32 = v30;
        if ( v32 )
          *(_QWORD *)(&v34 - 1) = *(_QWORD *)(*(_DWORD *)v22 + 296);
          v29 = v35 >= v26;
          v31 = v35 == v26;
          v36 = 0;
          if ( v31 || !v29 )
            v36 = 1;
          v29 = v34 >= v27;
          v37 = v34 == v27;
          v38 = 0;
          if ( v37 || !v29 )
            v38 = 1;
          if ( v37 )
            v38 = v36;
          v39 = v23;
          if ( !v38 )
            do
              *(_DWORD *)v39 = *(_DWORD *)v22;
              *(_QWORD *)(&v40 - 1) = *(_QWORD *)(*((_DWORD *)v22 - 1) + 296);
              v29 = v41 >= v26;
              v31 = v41 == v26;
              v42 = 0;
              if ( !v31 && v29 )
                v42 = 1;
              v29 = v40 >= v27;
              v43 = v40 == v27;
              v44 = 0;
              if ( !v43 && v29 )
                v44 = 1;
              if ( v43 )
                v44 = v42;
              v39 = v22;
              v22 -= 4;
            while ( v44 );
          *(_DWORD *)v39 = v24;
        else
          if ( 0 != (v23 - v6) >> 2 )
            v33 = v6;
            _aeabi_memmove4(&v22[-4 * ((v23 - v6) >> 2) + 8], v6);
            v6 = v33;
          *(_DWORD *)v6 = v24;
        v20 = (int)(v23 + 4);
        v22 = v23;
      while ( v23 + 4 != (char *)v21 );
      while ( (char *)v21 != v5 )
        v45 = *(_DWORD *)v21;
        v46 = (_DWORD *)(v21 - 4);
        *(_QWORD *)&v47 = *(_QWORD *)(*(_DWORD *)v21 + 296);
        v50 = *(_QWORD *)(*(_DWORD *)(v21 - 4) + 296) >> 32;
        v49 = *(_QWORD *)(*(_DWORD *)(v21 - 4) + 296);
        v29 = v49 >= v47;
        v31 = v49 == v47;
        v51 = 0;
        if ( v31 || !v29 )
          v51 = 1;
        v29 = v50 >= v48;
        v52 = v50 == v48;
        v53 = 0;
        if ( v52 || !v29 )
          v53 = 1;
        if ( v52 )
          v53 = v51;
        v54 = (_DWORD *)v21;
        if ( !v53 )
          do
            *v54 = *v46;
            v56 = *(_QWORD *)(*(v46 - 1) + 296) >> 32;
            v55 = *(_QWORD *)(*(v46 - 1) + 296);
            v29 = v55 >= v47;
            v31 = v55 == v47;
            v57 = 0;
            if ( !v31 && v29 )
              v57 = 1;
            v29 = v56 >= v48;
            v58 = v56 == v48;
            v59 = 0;
            if ( !v58 && v29 )
              v59 = 1;
            if ( v58 )
              v59 = v57;
            v54 = v46;
            --v46;
          while ( v59 );
        *v54 = v45;
        v21 += 4;
  v81 = v6;
  v140 = 0;
  v141 = 0;
  v142 = 0;
    v82 = v6;
      v83 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v82 + 60));
      v84 = (int *)SubpackInfoCollection::getSubpackFolderName(
                     (SubpackInfoCollection *)(*(_DWORD *)v82 + 308),
                     *(_DWORD *)(*(_DWORD *)v82 + 304));
      if ( v141 == v142 )
        std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion const&,std::string const&>(
          (unsigned __int64 *)&v140,
          (int)v83,
          v84);
      else
        PackInstanceId::PackInstanceId((int)v141, (int)v83, v84);
        v141 = (char *)v141 + 56;
      v82 += 4;
    while ( v5 != v82 );
  ResourcePackStack::ResourcePackStack((ResourcePackStack *)&v139, &v140, *((ResourcePackRepository **)v112 + 11));
  v134 = &off_26EAC8C;
  v137 = 0;
  v138 = 0;
  v135 = 0;
  v136 = 0;
  v85 = (ResourcePackManager *)*((_DWORD *)v112 + 10);
  v133 = 0;
  v131 = 0;
  v132 = 0;
  v129 = &off_26EAC8C;
  v130 = 0;
  v128 = 0;
  v126 = 0;
  v127 = 0;
  v124 = &off_26EAC8C;
  v125 = 0;
  ResourcePackManager::composeFullStack(
    v85,
    (ResourcePackStack *)&v134,
    (const ResourcePackStack *)&v139,
    (const ResourcePackStack *)&v129,
    (const ResourcePackStack *)&v124);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v124);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v129);
  v121 = 0;
  v122 = 0;
  v123 = 0;
  sub_21E94B4((void **)&v118, "ui/_ui_defs.json");
  v119 = v118;
  v118 = (char *)&unk_28898CC;
  v120 = 0;
  UIDefRepository::validateDefEntries((int)v111, (int)&v119, (int)&v134, (__int64 *)&v121);
  v86 = v119 - 12;
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v119 - 4);
    if ( &pthread_create )
      __dmb();
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  v87 = v118 - 12;
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v118 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v87);
  ResourcePackStack::getStackAsIdentities((ResourcePackStack *)&ptr, (int)&v134);
  if ( v81 != v5 )
    v88 = v81;
      v89 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v88 + 60));
      v90 = (int *)SubpackInfoCollection::getSubpackFolderName(
                     (SubpackInfoCollection *)(*(_DWORD *)v88 + 308),
                     *(_DWORD *)(*(_DWORD *)v88 + 304));
      PackInstanceId::PackInstanceId((int)&v115, (int)v89, v90);
      v91 = ptr;
      if ( (void *)v117 != ptr )
        v92 = 0;
        v93 = 0;
        while ( PackInstanceId::operator==((int)v91 + v92, &v115) != 1 )
          v91 = ptr;
          v92 += 56;
          if ( ++v93 >= (unsigned int)(-1227133513 * ((v117 - (PackInstanceId *)ptr) >> 3)) )
            goto LABEL_117;
        v94 = *(_DWORD *)v88;
        EntityInteraction::setInteractText((int *)(*(_DWORD *)v88 + 80), (int *)(*(_DWORD *)v88 + 184));
        *(_DWORD *)(v94 + 84) = *(_DWORD *)(v94 + 188);
        *(_WORD *)(v94 + 88) = *(_WORD *)(v94 + 192);
        std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::operator=(
          v94 + 92,
          (__int64 *)(v94 + 196));
          v94 + 104,
          (__int64 *)(v94 + 208));
        EntityInteraction::setInteractText((int *)(v94 + 116), (int *)(v94 + 220));
        EntityInteraction::setInteractText((int *)(v94 + 120), (int *)(v94 + 224));
        v95 = v94 + 128;
        v96 = *(_DWORD *)(v94 + 236);
        v97 = *(_DWORD *)(v94 + 240);
        v98 = *(_DWORD *)(v94 + 244);
        *(_DWORD *)v95 = *(_DWORD *)(v94 + 232);
        *(_DWORD *)(v95 + 4) = v96;
        *(_DWORD *)(v95 + 8) = v97;
        *(_DWORD *)(v95 + 12) = v98;
        v99 = *(_DWORD *)(v94 + 248);
        *(_WORD *)(v94 + 148) = *(_WORD *)(v94 + 252);
        *(_DWORD *)(v94 + 144) = v99;
        EntityInteraction::setInteractText((int *)(v94 + 152), (int *)(v94 + 256));
        EntityInteraction::setInteractText((int *)(v94 + 156), (int *)(v94 + 260));
        EntityInteraction::setInteractText((int *)(v94 + 160), (int *)(v94 + 264));
        v100 = *(_WORD *)(v94 + 268);
        *(_BYTE *)(v94 + 166) = *(_BYTE *)(v94 + 270);
        *(_WORD *)(v94 + 164) = v100;
        *(_BYTE *)(v94 + 168) = *(_BYTE *)(v94 + 272);
        *(_BYTE *)(v94 + 176) = *(_BYTE *)(v94 + 280);
        PackReport::merge(*(_DWORD *)v88 + 80, (unsigned int)v121 + 104 * v93);
LABEL_117:
      PackInstanceId::~PackInstanceId((PackInstanceId *)&v115);
      v88 += 4;
    while ( v88 != v5 );
  v102 = v117;
  v101 = (PackInstanceId *)ptr;
  if ( ptr != (void *)v117 )
      v101 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v101) + 56);
    while ( v102 != v101 );
    v101 = (PackInstanceId *)ptr;
  if ( v101 )
    operator delete((void *)v101);
  v104 = v122;
  v103 = (PackReport *)v121;
  if ( v121 != (void *)v122 )
      v103 = (PackReport *)((char *)PackReport::~PackReport(v103) + 104);
    while ( v104 != v103 );
    v103 = (PackReport *)v121;
  if ( v103 )
    operator delete((void *)v103);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v134);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v139);
  v106 = (PackInstanceId *)v141;
  v105 = (PackInstanceId *)v140;
  if ( v140 != v141 )
      v105 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v105) + 56);
    while ( v106 != v105 );
    v105 = (PackInstanceId *)v140;
  if ( v105 )
    operator delete((void *)v105);
  if ( v81 )
    operator delete(v81);
}


PackManagerContentSource::PackData *__fastcall PackManagerContentSource::PackData::~PackData(PackManagerContentSource::PackData *this)
{
  PackManagerContentSource::PackData *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3
  int *v4; // r0@5
  unsigned int *v6; // r12@7
  signed int v7; // r1@9

  v1 = this;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)this + 4);
  v2 = (void *)*((_DWORD *)v1 + 5);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v4 = (int *)(*(_DWORD *)v1 - 12);
  if ( v4 != &dword_28898C0 )
  {
    v6 = (unsigned int *)(*(_DWORD *)v1 - 4);
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


void __fastcall PackManagerContentSource::generateItems(PackManagerContentSource *this, int a2)
{
  PackManagerContentSource::generateItems(this, a2);
}


RakNet *__fastcall PackManagerContentSource::save(PackManagerContentSource *this)
{
  int v1; // r10@1
  char *v2; // r9@2
  int v3; // r8@2
  int v4; // r11@2
  char *v5; // r12@2
  int i; // r0@2
  int v7; // r10@3
  signed int v8; // r6@6
  char *v9; // r5@6
  int v10; // r4@6
  unsigned int v11; // r0@6
  unsigned int v12; // r1@8
  unsigned int v13; // r7@8
  char *v14; // r9@13
  int v15; // r9@15
  char *v16; // r4@16
  int v17; // r4@24
  char *v18; // r6@24
  int v19; // r1@24
  int v20; // r5@25
  char *v21; // r7@25
  char *v22; // r6@26
  int v23; // r8@26
  unsigned int v24; // r4@26 OVERLAPPED
  unsigned int v25; // r1@26 OVERLAPPED
  unsigned int v26; // r2@26 OVERLAPPED
  unsigned int v27; // r3@26
  bool v28; // cf@26
  signed int v29; // r3@26
  bool v30; // zf@28
  signed int v31; // r4@28
  char *v32; // r4@34
  unsigned int v33; // r4@36 OVERLAPPED
  unsigned int v34; // r3@36
  signed int v35; // r3@36
  bool v36; // zf@38
  signed int v37; // r4@38
  char *v38; // r3@42
  unsigned int v39; // r4@43 OVERLAPPED
  unsigned int v40; // r3@43
  signed int v41; // r3@43
  bool v42; // zf@45
  signed int v43; // r4@45
  int v44; // r0@55
  _DWORD *v45; // r4@55
  unsigned int v46; // r1@55 OVERLAPPED
  unsigned int v47; // r2@55 OVERLAPPED
  unsigned int v48; // r3@55
  unsigned int v49; // r6@55
  signed int v50; // r3@55
  bool v51; // zf@57
  signed int v52; // r6@57
  _DWORD *v53; // r3@61
  unsigned int v54; // r3@62
  unsigned int v55; // r6@62
  signed int v56; // r3@62
  bool v57; // zf@64
  signed int v58; // r6@64
  char *v59; // r4@71
  int v60; // r5@72
  int v61; // r6@72
  unsigned int v62; // r7@72
  unsigned int v63; // r1@72 OVERLAPPED
  unsigned int v64; // r2@72 OVERLAPPED
  signed int v65; // r3@72
  bool v66; // zf@74
  signed int v67; // r7@74
  int v68; // r0@80
  char *v69; // r4@80
  unsigned int v70; // r3@82
  unsigned int v71; // r7@82
  signed int v72; // r3@82
  bool v73; // zf@84
  signed int v74; // r7@84
  char *v75; // r3@88
  unsigned int v76; // r3@89
  unsigned int v77; // r7@89
  signed int v78; // r3@89
  bool v79; // zf@91
  signed int v80; // r7@91
  int v81; // r0@98
  char *v82; // r8@98
  unsigned __int64 v83; // r2@99
  char *v84; // r6@100
  int v85; // r4@101
  char *v86; // r5@104
  int *v87; // r0@104
  Json::Value *v88; // r2@104
  char *v89; // r7@109
  char *v90; // r5@110
  __int64 v91; // kr38_8@110
  int v92; // r1@111
  int v93; // r2@111
  int v94; // r3@111
  RakNet *result; // r0@117
  int v96; // [sp+24h] [bp-115Ch]@1
  int v97; // [sp+28h] [bp-1158h]@2
  RakNet *v98; // [sp+2Ch] [bp-1154h]@1
  char v99; // [sp+30h] [bp-1150h]@104
  char v100; // [sp+68h] [bp-1118h]@104
  char v101; // [sp+78h] [bp-1108h]@100
  int v102; // [sp+88h] [bp-10F8h]@99
  int v103; // [sp+8Ch] [bp-10F4h]@99
  void **v104; // [sp+90h] [bp-10F0h]@99
  int v105; // [sp+94h] [bp-10ECh]@107
  void **v106; // [sp+98h] [bp-10E8h]@106
  int v107; // [sp+9Ch] [bp-10E4h]@107
  void **v108; // [sp+10CCh] [bp-B4h]@107

  v98 = _stack_chk_guard;
  v1 = *(_QWORD *)((char *)this + 68);
  v96 = *(_QWORD *)((char *)this + 68) >> 32;
  if ( v1 != v96 )
  {
    do
    {
      v97 = v1;
      v2 = 0;
      v3 = *(_QWORD *)(v1 + 20) >> 32;
      v4 = *(_QWORD *)(v1 + 20);
      v5 = 0;
      for ( i = 0; v3 != v4; v4 += 4 )
      {
        v7 = *(_DWORD *)v4;
        if ( *(_DWORD *)(*(_DWORD *)v4 + 76) == 1 )
        {
          if ( v2 == (char *)i )
          {
            v8 = v2 - v5;
            v9 = 0;
            v10 = (v2 - v5) >> 2;
            v11 = (v2 - v5) >> 2;
            if ( !v10 )
              v11 = 1;
            v12 = v11 + (v8 >> 2);
            v13 = v11 + (v8 >> 2);
            if ( 0 != v12 >> 30 )
              v13 = 0x3FFFFFFF;
            if ( v12 < v11 )
            if ( v13 )
            {
              v14 = v5;
              if ( v13 >= 0x40000000 )
                sub_21E57F4();
              v9 = (char *)operator new(4 * v13);
              v5 = v14;
            }
            v15 = (int)&v9[4 * v10];
            *(_DWORD *)&v9[4 * v10] = v7;
            if ( v10 )
              v16 = v5;
              _aeabi_memmove4(v9, v5);
              v5 = v16;
            v2 = (char *)(v15 + 4);
            if ( v5 )
              operator delete(v5);
            i = (int)&v9[4 * v13];
            v5 = v9;
          }
          else
            *(_DWORD *)v2 = v7;
            v2 += 4;
        }
      }
      if ( v5 != v2 )
        v17 = v2 - v5;
        v18 = v5;
        sub_12D7BEC((int)v5, (unsigned int)v2, 2 * (31 - __clz((v2 - v5) >> 2)), 0);
        v19 = (int)(v18 + 4);
        if ( v17 < 65 )
          v5 = v18;
          if ( (char *)v19 != v2 )
            v59 = v18;
            do
              v60 = v19;
              v61 = *(_DWORD *)v19;
              v62 = *(_QWORD *)(*(_DWORD *)v5 + 296) >> 32;
              *(_QWORD *)&v63 = *(_QWORD *)(*(_DWORD *)v19 + 296);
              v65 = 0;
              if ( v63 >= (unsigned int)*(_QWORD *)(*(_DWORD *)v5 + 296) )
                v65 = 1;
              v28 = v64 >= v62;
              v66 = v64 == v62;
              v67 = 0;
              if ( v28 )
                v67 = 1;
              if ( v66 )
                v67 = v65;
              if ( v67 )
              {
                v71 = *(_QWORD *)(*(_DWORD *)v59 + 296) >> 32;
                v70 = *(_QWORD *)(*(_DWORD *)v59 + 296);
                v28 = v70 >= v63;
                v30 = v70 == v63;
                v72 = 0;
                if ( v30 || !v28 )
                  v72 = 1;
                v28 = v71 >= v64;
                v73 = v71 == v64;
                v74 = 0;
                if ( v73 || !v28 )
                  v74 = 1;
                if ( v73 )
                  v74 = v72;
                v75 = (char *)v60;
                if ( !v74 )
                {
                  do
                  {
                    *(_DWORD *)v75 = *(_DWORD *)v59;
                    v77 = *(_QWORD *)(*((_DWORD *)v59 - 1) + 296) >> 32;
                    v76 = *(_QWORD *)(*((_DWORD *)v59 - 1) + 296);
                    v28 = v76 >= v63;
                    v30 = v76 == v63;
                    v78 = 0;
                    if ( !v30 && v28 )
                      v78 = 1;
                    v28 = v77 >= v64;
                    v79 = v77 == v64;
                    v80 = 0;
                    if ( !v79 && v28 )
                      v80 = 1;
                    if ( v79 )
                      v80 = v78;
                    v75 = v59;
                    v59 -= 4;
                  }
                  while ( v80 );
                }
                *(_DWORD *)v75 = v61;
              }
              else
                if ( (v60 - (signed int)v5) >> 2 )
                  v68 = (int)&v59[-4 * ((v60 - (signed int)v5) >> 2) + 8];
                  v69 = v5;
                  _aeabi_memmove4(v68, v5);
                  v5 = v69;
                *(_DWORD *)v5 = v61;
              v19 = v60 + 4;
              v59 = (char *)v60;
            while ( (char *)(v60 + 4) != v2 );
        else
          v20 = (int)(v18 + 64);
          v21 = v18;
          do
            v22 = (char *)v19;
            v23 = *(_DWORD *)v19;
            *(_QWORD *)(&v24 - 1) = *(_QWORD *)(*(_DWORD *)v5 + 296);
            *(_QWORD *)&v25 = *(_QWORD *)(*(_DWORD *)v19 + 296);
            v28 = v25 >= v27;
            v29 = 0;
            if ( v28 )
              v29 = 1;
            v28 = v26 >= v24;
            v30 = v26 == v24;
            v31 = 0;
              v31 = 1;
            if ( v30 )
              v31 = v29;
            if ( v31 )
              *(_QWORD *)(&v33 - 1) = *(_QWORD *)(*(_DWORD *)v21 + 296);
              v28 = v34 >= v25;
              v30 = v34 == v25;
              v35 = 0;
              if ( v30 || !v28 )
                v35 = 1;
              v28 = v33 >= v26;
              v36 = v33 == v26;
              v37 = 0;
              if ( v36 || !v28 )
                v37 = 1;
              if ( v36 )
                v37 = v35;
              v38 = v22;
              if ( !v37 )
                do
                  *(_DWORD *)v38 = *(_DWORD *)v21;
                  *(_QWORD *)(&v39 - 1) = *(_QWORD *)(*((_DWORD *)v21 - 1) + 296);
                  v28 = v40 >= v25;
                  v30 = v40 == v25;
                  v41 = 0;
                  if ( !v30 && v28 )
                    v41 = 1;
                  v28 = v39 >= v26;
                  v42 = v39 == v26;
                  v43 = 0;
                  if ( !v42 && v28 )
                    v43 = 1;
                  if ( v42 )
                    v43 = v41;
                  v38 = v21;
                  v21 -= 4;
                while ( v43 );
              *(_DWORD *)v38 = v23;
            else
              if ( (v22 - v5) >> 2 )
                v32 = v5;
                _aeabi_memmove4(&v21[-4 * ((v22 - v5) >> 2) + 8], v5);
                v5 = v32;
              *(_DWORD *)v5 = v23;
            v19 = (int)(v22 + 4);
            v21 = v22;
          while ( v22 + 4 != (char *)v20 );
          while ( (char *)v20 != v2 )
            v44 = *(_DWORD *)v20;
            v45 = (_DWORD *)(v20 - 4);
            *(_QWORD *)&v46 = *(_QWORD *)(*(_DWORD *)v20 + 296);
            v49 = *(_QWORD *)(*(_DWORD *)(v20 - 4) + 296) >> 32;
            v48 = *(_QWORD *)(*(_DWORD *)(v20 - 4) + 296);
            v28 = v48 >= v46;
            v30 = v48 == v46;
            v50 = 0;
            if ( v30 || !v28 )
              v50 = 1;
            v28 = v49 >= v47;
            v51 = v49 == v47;
            v52 = 0;
            if ( v51 || !v28 )
              v52 = 1;
            if ( v51 )
              v52 = v50;
            v53 = (_DWORD *)v20;
            if ( !v52 )
              do
                *v53 = *v45;
                v55 = *(_QWORD *)(*(v45 - 1) + 296) >> 32;
                v54 = *(_QWORD *)(*(v45 - 1) + 296);
                v28 = v54 >= v46;
                v30 = v54 == v46;
                v56 = 0;
                if ( !v30 && v28 )
                  v56 = 1;
                v28 = v55 >= v47;
                v57 = v55 == v47;
                v58 = 0;
                if ( !v57 && v28 )
                  v58 = 1;
                if ( v57 )
                  v58 = v56;
                v53 = v45;
                --v45;
              while ( v58 );
            *v53 = v44;
            v20 += 4;
      v81 = *(_DWORD *)v97;
      v82 = v5;
      if ( *(_DWORD *)(*(_DWORD *)v97 - 12) )
        v102 = *(_DWORD *)v97;
        v103 = *(_DWORD *)(v81 - 12);
        Core::FileStream::FileStream((int)&v104, (__int64 *)&v102, 48);
        if ( !*(_DWORD *)((char *)*(v104 - 3) + (_DWORD)&v104 + 20) )
          Json::Value::Value(&v101, 6);
          v84 = v82;
          if ( v82 != v2 )
            while ( 1 )
              v85 = *(_DWORD *)v84;
              if ( *(_DWORD *)(*(_DWORD *)v84 + 304) > -1 )
                goto LABEL_104;
              if ( !SubpackInfoCollection::hasSubpacks((SubpackInfoCollection *)(v85 + 308)) )
                break;
LABEL_105:
              v84 += 4;
              if ( v2 == v84 )
                goto LABEL_106;
            v85 = *(_DWORD *)v84;
LABEL_104:
            Json::Value::Value(&v100, 0);
            v86 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v84 + 60));
            v87 = (int *)SubpackInfoCollection::getSubpackFolderName(
                           (SubpackInfoCollection *)(v85 + 308),
                           *(_DWORD *)(*(_DWORD *)v84 + 304));
            PackInstanceId::PackInstanceId((int)&v99, (int)v86, v87);
            ResourceHelper::serializePackStackEntry((ResourceHelper *)&v99, (const PackInstanceId *)&v100, v88);
            PackInstanceId::~PackInstanceId((PackInstanceId *)&v99);
            Json::Value::append((Json::Value *)&v101, (const Json::Value *)&v100);
            Json::Value::~Value((Json::Value *)&v100);
            goto LABEL_105;
LABEL_106:
          Json::operator<<((char *)&v106, (const Json::Value *)&v101);
          Json::Value::~Value((Json::Value *)&v101);
        v104 = &off_26D66C4;
        v108 = &off_26D66EC;
        v106 = &off_26D66D8;
        Core::FileStdStreamBuf::~FileStdStreamBuf(
          (Core::FileStdStreamBuf *)&v107,
          (int)&`vtable for'Core::FileStream,
          v83);
        v104 = &off_26D670C;
        v108 = &off_26D6720;
        v105 = 0;
        sub_21B6560(&v108);
      else
        std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_erase_at_end(v97 + 32, *(_DWORD *)(v97 + 32));
        if ( v82 != v2 )
          v89 = v82;
            v90 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v89 + 60));
            v91 = *(_QWORD *)(v97 + 36);
            if ( (_DWORD)v91 == HIDWORD(v91) )
              std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<PackIdVersion const&>(
                (unsigned __int64 *)(v97 + 32),
                (int)v90);
              v92 = *((_DWORD *)v90 + 1);
              v93 = *((_DWORD *)v90 + 2);
              v94 = *((_DWORD *)v90 + 3);
              *(_DWORD *)v91 = *(_DWORD *)v90;
              *(_DWORD *)(v91 + 4) = v92;
              *(_DWORD *)(v91 + 8) = v93;
              *(_DWORD *)(v91 + 12) = v94;
              SemVersion::SemVersion(v91 + 16, (int)(v90 + 16));
              *(_BYTE *)(v91 + 40) = v90[40];
              *(_DWORD *)(v97 + 36) += 48;
            v89 += 4;
          while ( v2 != v89 );
      if ( v82 )
        operator delete(v82);
      v1 = v97 + 48;
    }
    while ( v97 + 48 != v96 );
  }
  result = (RakNet *)(_stack_chk_guard - v98);
  if ( _stack_chk_guard != v98 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PackManagerContentSource::reloadDependencies(PackManagerContentSource *this)
{
  PackManagerContentSource::reloadDependencies(this);
}
