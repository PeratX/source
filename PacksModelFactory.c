

Json::Value *__fastcall PacksModelFactory::_deserializeFile(int a1, char *a2)
{
  int v2; // r4@1
  char *v3; // r5@1
  Json::Value *v4; // r7@5
  __int64 v5; // kr00_8@6
  int v6; // r1@7
  int v7; // r2@7
  int v8; // r3@7
  char v10; // [sp+8h] [bp-F0h]@5
  int v11; // [sp+Ch] [bp-ECh]@7
  int v12; // [sp+10h] [bp-E8h]@7
  int v13; // [sp+14h] [bp-E4h]@7
  int v14; // [sp+18h] [bp-E0h]@7
  char v15; // [sp+30h] [bp-C8h]@7
  void *v16; // [sp+38h] [bp-C0h]@5
  char v17; // [sp+40h] [bp-B8h]@3
  char v18; // [sp+48h] [bp-B0h]@3
  char v19; // [sp+50h] [bp-A8h]@1
  char v20; // [sp+C0h] [bp-38h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  Json::Value::Value(&v20, 0);
  Json::Reader::Reader((Json::Reader *)&v19);
  if ( Json::Reader::parse((int)&v19, v3, (int)&v20, 1) == 1 && Json::Value::isArray((Json::Value *)&v20) == 1 )
  {
    Json::Value::begin((Json::Value *)&v18, (int)&v20);
    Json::Value::end((Json::Value *)&v17, (int)&v20);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v18, (const Json::ValueIteratorBase *)&v17) != 1 )
    {
      v4 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v18);
      PackIdVersion::PackIdVersion((PackIdVersion *)&v10);
      v16 = &unk_28898CC;
      if ( ResourceHelper::deserializePackStackEntry(
             v4,
             (int)&v10,
             (int *)&PackManifestFactory::MANIFEST_PACK_UUID_UPGRADE_SALT) == 1 )
      {
        v5 = *(_QWORD *)(v2 + 4);
        if ( (_DWORD)v5 == HIDWORD(v5) )
        {
          std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackInstanceId const&>(
            (unsigned __int64 *)v2,
            (int)&v10);
        }
        else
          v6 = v11;
          v7 = v12;
          v8 = v13;
          *(_DWORD *)v5 = *(_DWORD *)&v10;
          *(_DWORD *)(v5 + 4) = v6;
          *(_DWORD *)(v5 + 8) = v7;
          *(_DWORD *)(v5 + 12) = v8;
          SemVersion::SemVersion(v5 + 16, (int)&v14);
          *(_BYTE *)(v5 + 40) = v15;
          sub_21E8AF4((int *)(v5 + 48), (int *)&v16);
          *(_DWORD *)(v2 + 4) = v5 + 56;
      }
      PackInstanceId::~PackInstanceId((PackInstanceId *)&v10);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v18);
    }
  }
  Json::Reader::~Reader((Json::Reader *)&v19);
  return Json::Value::~Value((Json::Value *)&v20);
}


void __fastcall PacksModelFactory::loadPacks(char *a1, int a2, __int64 *a3, int a4)
{
  PacksModelFactory::loadPacks(a1, a2, a3, a4);
}


void __fastcall PacksModelFactory::loadPacks(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  void (__fastcall *v4)(int, _DWORD **); // r7@1
  _DWORD *v5; // r0@1
  void *v6; // r5@3
  void *v7; // r7@4
  _DWORD *v8; // [sp+0h] [bp-48h]@1
  void (__cdecl *v9)(_DWORD); // [sp+8h] [bp-40h]@1
  void (__fastcall *v10)(int *, Pack *); // [sp+Ch] [bp-3Ch]@1
  void *ptr; // [sp+10h] [bp-38h]@1
  int v12; // [sp+14h] [bp-34h]@5
  void *v13; // [sp+18h] [bp-30h]@3
  int v14; // [sp+1Ch] [bp-2Ch]@5
  int v15; // [sp+28h] [bp-20h]@6
  char v16; // [sp+2Ch] [bp-1Ch]@4

  v2 = a1;
  v3 = a2;
  (*(void (__fastcall **)(void **, int))(*(_DWORD *)a1 + 20))(&ptr, a1);
  v4 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v2 + 12);
  v5 = operator new(8u);
  *v5 = v3;
  v5[1] = &ptr;
  v8 = v5;
  v9 = (void (__cdecl *)(_DWORD))sub_12DBAA8;
  v10 = sub_12DB8B4;
  v4(v2, &v8);
  if ( v9 )
    v9(&v8);
  v6 = v13;
  if ( v13 )
  {
    do
    {
      v7 = *(void **)v6;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v16,
        (int)v6 + 8);
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  _aeabi_memclr4(ptr, 4 * v12);
  v13 = 0;
  v14 = 0;
  if ( ptr )
    if ( &v15 != ptr )
      operator delete(ptr);
}


void __fastcall PacksModelFactory::loadPacks(char *a1, int a2, __int64 *a3, int a4)
{
  int v4; // r9@1
  __int64 *v5; // r4@1
  int v6; // r8@1
  __int64 v7; // kr00_8@1
  int v8; // r6@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // r1@11
  void *v12; // r0@11
  __int64 v13; // kr08_8@13
  int v14; // r6@14
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int v17; // r1@23
  void *v18; // r0@23
  PackInstanceId *v19; // r4@25
  int v20; // r11@25
  void (__fastcall *v21)(int, _DWORD **); // r6@25
  _DWORD *v22; // r0@27
  _DWORD *v23; // r0@32
  __int64 v24; // r1@32
  PackInstanceId *v25; // r0@35
  void *v26; // r4@39
  void *v27; // r6@40
  char *v28; // [sp+4h] [bp-7Ch]@1
  PackInstanceId *v29; // [sp+4h] [bp-7Ch]@26
  __int64 *v30; // [sp+Ch] [bp-74h]@1
  _DWORD *v31; // [sp+10h] [bp-70h]@32
  __int64 v32; // [sp+18h] [bp-68h]@32
  _DWORD *v33; // [sp+20h] [bp-60h]@27
  int (__fastcall *v34)(void **, void **, int); // [sp+28h] [bp-58h]@27
  void (__fastcall *v35)(unsigned __int64 ***, Pack *); // [sp+2Ch] [bp-54h]@27
  PackInstanceId *v36; // [sp+30h] [bp-50h]@25
  PackInstanceId *v37; // [sp+34h] [bp-4Ch]@25
  void *ptr; // [sp+3Ch] [bp-44h]@1
  int v39; // [sp+40h] [bp-40h]@41
  void *v40; // [sp+44h] [bp-3Ch]@39
  int v41; // [sp+48h] [bp-38h]@41
  int v42; // [sp+54h] [bp-2Ch]@42

  v4 = a2;
  v28 = a1;
  v5 = a3;
  v6 = a4;
  v30 = a3;
  (*(void (__fastcall **)(void **))(*(_DWORD *)a2 + 20))(&ptr);
  v7 = *v5;
  if ( HIDWORD(v7) != (_DWORD)v7 )
  {
    v8 = v7;
    do
    {
      PackReport::~PackReport((PackReport *)(v8 + 8));
      v11 = *(_DWORD *)(v8 + 4);
      v12 = (void *)(v11 - 12);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v8 += 120;
    }
    while ( v8 != HIDWORD(v7) );
  }
  *((_DWORD *)v30 + 1) = v7;
  v13 = *(_QWORD *)v6;
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = v13;
      PackReport::~PackReport((PackReport *)(v14 + 8));
      v17 = *(_DWORD *)(v14 + 4);
      v18 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v17 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v14 += 120;
    while ( v14 != HIDWORD(v13) );
  *(_DWORD *)(v6 + 4) = v13;
  PacksModelFactory::_deserializeFile((int)&v36, v28);
  v19 = v37;
  v20 = (int)v36;
  v21 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v4 + 12);
  if ( v36 == v37 )
    v29 = v36;
  else
      v34 = 0;
      v22 = operator new(0xCu);
      *v22 = v30;
      v22[1] = v20;
      v22[2] = &ptr;
      v33 = v22;
      v34 = sub_12DB178;
      v35 = sub_12DAEC4;
      v21(v4, &v33);
      if ( v34 )
        v34((void **)&v33, (void **)&v33, 3);
      v20 += 56;
      v21 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v4 + 12);
    while ( v19 != (PackInstanceId *)v20 );
  v23 = operator new(0xCu);
  LODWORD(v24) = sub_12DB5D8;
  HIDWORD(v24) = sub_12DB1B8;
  *v23 = v6;
  v23[1] = v30;
  v23[2] = &ptr;
  v31 = v23;
  v32 = v24;
  v21(v4, &v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( v29 != v19 )
    v25 = v29;
      v25 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v25) + 56);
    while ( v19 != v25 );
  if ( v29 )
    operator delete((void *)v29);
  v26 = v40;
  if ( v40 )
      v27 = *(void **)v26;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v36,
        (int)v26 + 8);
      operator delete(v26);
      v26 = v27;
    while ( v27 );
  _aeabi_memclr4(ptr, 4 * v39);
  v40 = 0;
  v41 = 0;
  if ( ptr )
    if ( &v42 != ptr )
      operator delete(ptr);
}
