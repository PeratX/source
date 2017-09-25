

int __fastcall PackSource::getPackOrigin(PackSource *this)
{
  return 0;
}


int __fastcall PackSource::fetchPack(PackSource *this, const PackIdVersion *a2)
{
  PackSource *v2; // r5@1
  const PackIdVersion *v3; // r4@1
  void (__fastcall *v4)(PackSource *, _DWORD **); // r6@1
  _DWORD *v5; // r0@1
  _DWORD *v7; // [sp+4h] [bp-24h]@1
  void (*v8)(void); // [sp+Ch] [bp-1Ch]@1
  Pack **(__fastcall *v9)(int, Pack *); // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1

  v2 = this;
  v10 = 0;
  v3 = a2;
  v4 = *(void (__fastcall **)(PackSource *, _DWORD **))(*(_DWORD *)this + 12);
  v5 = operator new(8u);
  *v5 = v3;
  v5[1] = &v10;
  v7 = v5;
  v8 = (void (*)(void))sub_1581BFA;
  v9 = sub_1581BD0;
  v4(v2, &v7);
  if ( v8 )
    v8();
  return v10;
}


unsigned __int64 *__fastcall PackSource::resolveUpgradeDependencies(PackSource *this, Pack *a2, const IContentKeyProvider *a3)
{
  Pack *v3; // r4@1
  PackSource *v4; // r6@1
  const IContentKeyProvider *v5; // r8@1 OVERLAPPED
  PackManifest *v6; // r0@1
  unsigned __int64 *result; // r0@1
  PackManifest *v8; // r7@2 OVERLAPPED
  char *v9; // r5@2
  int *v10; // r4@2
  int *v11; // r11@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  void (__fastcall *v18)(PackSource *, _DWORD **); // r9@28
  _DWORD *v19; // r0@28
  void *v20; // r0@30
  void *v21; // r0@31
  void *v22; // r0@32
  __int64 v23; // r4@36
  char *v24; // r4@38
  void *v25; // r0@44
  void *v26; // r0@45
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  unsigned int *v29; // r2@53
  signed int v30; // r1@55
  int v31; // [sp+14h] [bp-124h]@38
  int v32; // [sp+18h] [bp-120h]@38
  int v33; // [sp+1Ch] [bp-11Ch]@38
  char v34; // [sp+20h] [bp-118h]@38
  int v35; // [sp+88h] [bp-B0h]@38
  char v36; // [sp+8Ch] [bp-ACh]@38
  char v37; // [sp+B0h] [bp-88h]@38
  _DWORD *v38; // [sp+C0h] [bp-78h]@28
  int (__fastcall *v39)(void **, _QWORD **, int); // [sp+C8h] [bp-70h]@28
  char *(__fastcall *v40)(int *, Pack *); // [sp+CCh] [bp-6Ch]@28
  char v41; // [sp+D0h] [bp-68h]@28
  int v42; // [sp+E8h] [bp-50h]@12
  int v43; // [sp+ECh] [bp-4Ch]@8
  int v44; // [sp+F0h] [bp-48h]@4
  signed int v45; // [sp+104h] [bp-34h]@2
  int v46; // [sp+108h] [bp-30h]@2
  int v47; // [sp+10Ch] [bp-2Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (PackManifest *)Pack::getManifest(a2);
  result = (unsigned __int64 *)PackManifest::hasLegacyModuleDependencies(v6);
  if ( result == (unsigned __int64 *)1 )
  {
    v8 = (PackManifest *)Pack::getManifest(v3);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v9 = PackManifest::getLegacyModuleDependencies(v8);
    std::vector<PackIdVersion,std::allocator<PackIdVersion>>::reserve(
      (int)&v45,
      (signed int)((*(_QWORD *)v9 >> 32) - *(_QWORD *)v9) >> 3);
    v11 = (int *)(*(_QWORD *)v9 >> 32);
    v10 = (int *)*(_QWORD *)v9;
    if ( v10 != v11 )
    {
      do
      {
        LegacyPackIdVersion::getUpgradedPackId((LegacyPackIdVersion *)&v41, v10);
        v18 = *(void (__fastcall **)(PackSource *, _DWORD **))(*(_DWORD *)v4 + 8);
        v39 = 0;
        v19 = operator new(8u);
        *v19 = &v41;
        v19[1] = &v45;
        v38 = v19;
        v40 = sub_1581B38;
        v39 = sub_1581B96;
        v18(v4, &v38);
        if ( v39 )
          v39((void **)&v38, (_QWORD **)&v38, 3);
        v20 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v44 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        }
        v21 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v43 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        v22 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v42 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v10 += 2;
      }
      while ( v10 != v11 );
      v11 = (int *)(*(_QWORD *)v9 >> 32);
      v10 = (int *)*(_QWORD *)v9;
      *(_QWORD *)(&v5 - 1) = __PAIR__((unsigned int)v5, (unsigned int)v8);
    }
    if ( -1431655765 * ((v46 - v45) >> 4) == ((char *)v11 - (char *)v10) >> 3 )
      PackManifest::clearLegacyModuleDependencies(v8);
      v23 = *(_QWORD *)&v45;
      if ( v45 != v46 )
        do
          PackManifest::addPackDependency(v8, (const PackIdVersion *)v23);
          LODWORD(v23) = v23 + 48;
        while ( HIDWORD(v23) != (_DWORD)v23 );
      Json::Value::Value(&v37, 0);
      PackManifest::serialize(v8, 1, (Json::Value *)&v37);
      Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v36);
      Json::StyledWriter::write((Json::StyledWriter *)&v35, (const Json::Value *)&v36, (const Json::Value *)&v37);
      PackReport::PackReport((int)&v34);
      v24 = PackManifest::getLocation(v8);
      sub_21E8AF4(&v32, (int *)v24);
      v33 = *((_DWORD *)v24 + 1);
      PackAccessStrategyFactory::create(
        (PackAccessStrategyFactory *)&v31,
        (ResourceLocation *)&v32,
        v5,
        (PackReport *)&v34,
        1);
      if ( v31 )
        if ( (*(int (**)(void))(*(_DWORD *)v31 + 28))() == 1 && !PackReport::hasErrors((PackReport *)&v34) )
          (*(void (**)(void))(*(_DWORD *)v31 + 48))();
        if ( v31 )
          (*(void (**)(void))(*(_DWORD *)v31 + 4))();
      v25 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v32 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      PackReport::~PackReport((PackReport *)&v34);
      v26 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v35 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v36);
      Json::Value::~Value((Json::Value *)&v37);
    result = std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v45);
  }
  return result;
}
