

signed int __fastcall PackDependencyManager::hasMissingDependencies(PackDependencyManager *this, const PackContentItem *a2)
{
  PackDependencyManager *v2; // r4@1
  signed int v3; // r4@2
  int v5; // [sp+4h] [bp-14h]@1
  int v6; // [sp+8h] [bp-10h]@1

  v2 = this;
  PackDependencyManager::getMissingDependencyIdentities((PackDependencyManager *)&v5, this);
  if ( v5 == v6 )
    v3 = PackManifest::hasLegacyModuleDependencies(*((PackManifest **)v2 + 15));
  else
    v3 = 1;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v5);
  return v3;
}


void __fastcall PackDependencyManager::getMissingDependencyIdentities(PackDependencyManager *this, const PackContentItem *a2)
{
  PackDependencyManager *v2; // r10@1
  char *v3; // r0@1
  int i; // r6@1
  int v5; // r11@1
  unsigned int *v6; // r1@3
  signed int v7; // r0@5
  char *v8; // r5@10
  size_t v9; // r2@10
  char *v10; // r7@10
  signed int v11; // r9@11
  int v12; // r0@17
  int v13; // r5@17
  int v14; // r4@18
  char v15; // r7@18
  char *v16; // r0@19
  __int64 v17; // r0@19
  bool v18; // zf@19
  __int64 v19; // kr10_8@23
  int v20; // r1@24
  int v21; // r2@24
  int v22; // r3@24
  const PackContentItem *v23; // [sp+8h] [bp-30h]@1
  void *s1; // [sp+Ch] [bp-2Ch]@10

  v2 = this;
  v23 = a2;
  v3 = PackManifest::getDependentPackIdentities(*((PackManifest **)a2 + 15));
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  v5 = *(_QWORD *)v3 >> 32;
  for ( i = *(_QWORD *)v3; i != v5; i += 48 )
  {
    mce::UUID::asString((mce::UUID *)&s1);
    v8 = (char *)s1;
    v10 = (char *)s1 - 12;
    v9 = *((_DWORD *)s1 - 3);
    if ( v9 == *(_DWORD *)(dword_27EC6E8 - 12) )
    {
      v11 = 0;
      if ( !memcmp(s1, (const void *)dword_27EC6E8, v9) )
        v11 = 1;
    }
    else
    if ( (int *)v10 != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
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
    if ( !v11 )
      v12 = *((_QWORD *)v23 + 40) >> 32;
      v13 = *((_QWORD *)v23 + 40);
      if ( v13 == v12 )
        goto LABEL_29;
      v14 = v12 - 4;
      v15 = 0;
      do
        v16 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v13 + 60));
        v17 = (unsigned int)PackIdVersion::operator==((int)v16, i);
        v18 = v14 == v13;
        v15 |= v17;
        v13 += 4;
        if ( v18 )
          HIDWORD(v17) = 1;
      while ( !v17 );
      if ( !(v15 & 1) )
LABEL_29:
        v19 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
        {
          std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<PackIdVersion const&>(
            (unsigned __int64 *)v2,
            i);
        }
        else
          v20 = *(_DWORD *)(i + 4);
          v21 = *(_DWORD *)(i + 8);
          v22 = *(_DWORD *)(i + 12);
          *(_DWORD *)v19 = *(_DWORD *)i;
          *(_DWORD *)(v19 + 4) = v20;
          *(_DWORD *)(v19 + 8) = v21;
          *(_DWORD *)(v19 + 12) = v22;
          SemVersion::SemVersion(v19 + 16, i + 16);
          *(_BYTE *)(v19 + 40) = *(_BYTE *)(i + 40);
          *((_DWORD *)v2 + 1) += 48;
  }
}


unsigned __int64 *__fastcall PackDependencyManager::getMissingDependencyIdentities(PackDependencyManager *this, const PackSource *a2, const PackManifest *a3)
{
  PackDependencyManager *v3; // r5@1
  char *v4; // r0@1
  unsigned __int64 *v5; // r4@1
  void *v6; // r6@1
  signed int v7; // r0@1
  unsigned int v8; // r7@1
  int v9; // r7@4
  unsigned int *v10; // r1@6
  signed int v11; // r0@8
  char *v12; // r10@13
  size_t v13; // r2@13
  char *v14; // r4@13
  signed int v15; // r11@14
  void (__fastcall *v16)(const PackSource *, _DWORD **); // r4@21
  _DWORD *v17; // r0@21
  __int64 v18; // kr00_8@24
  int v19; // r1@25
  int v20; // r2@25
  int v21; // r3@25
  const PackSource *v23; // [sp+8h] [bp-50h]@1
  _DWORD *v24; // [sp+Ch] [bp-4Ch]@21
  int (__fastcall *v25)(void **, _QWORD **, int); // [sp+14h] [bp-44h]@21
  _BYTE *(__fastcall *v26)(int *, Pack *); // [sp+18h] [bp-40h]@21
  void *s1; // [sp+1Ch] [bp-3Ch]@13
  char v28; // [sp+23h] [bp-35h]@13
  void *v29; // [sp+24h] [bp-34h]@1
  int v30; // [sp+28h] [bp-30h]@1
  char *v31; // [sp+2Ch] [bp-2Ch]@1

  v3 = this;
  v23 = a2;
  v4 = PackManifest::getDependentPackIdentities(a3);
  v5 = (unsigned __int64 *)v4;
  v6 = 0;
  v7 = (*(_QWORD *)v4 >> 32) - *(_QWORD *)v4;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v8 = -1431655765 * (v7 >> 4);
  if ( v7 )
  {
    if ( v8 >= 0x5555556 )
      sub_21E57F4();
    v6 = operator new(v7);
  }
  v29 = v6;
  v30 = (int)v6;
  v31 = (char *)v6 + 48 * v8;
  v9 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PackIdVersion const*,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>,PackIdVersion*>(
         *v5,
         *v5 >> 32,
         (int)v6);
  v30 = v9;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  for ( *((_DWORD *)v3 + 2) = 0; v6 != (void *)v9; v6 = (char *)v6 + 48 )
    v28 = 0;
    mce::UUID::asString((mce::UUID *)&s1);
    v12 = (char *)s1;
    v14 = (char *)s1 - 12;
    v13 = *((_DWORD *)s1 - 3);
    if ( v13 == *(_DWORD *)(dword_27EC6E8 - 12) )
    {
      v15 = 0;
      if ( !memcmp(s1, (const void *)dword_27EC6E8, v13) )
        v15 = 1;
    }
    else
    if ( (int *)v14 != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    if ( v15 == 1 )
      v28 = 1;
      v16 = *(void (__fastcall **)(const PackSource *, _DWORD **))(*(_DWORD *)v23 + 8);
      v25 = 0;
      v17 = operator new(8u);
      *v17 = v6;
      v17[1] = &v28;
      v24 = v17;
      v26 = sub_15697FC;
      v25 = sub_156981C;
      v16(v23, &v24);
      if ( v25 )
        v25((void **)&v24, (_QWORD **)&v24, 3);
      if ( !v28 )
        v18 = *(_QWORD *)((char *)v3 + 4);
        if ( (_DWORD)v18 == HIDWORD(v18) )
        {
          std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<PackIdVersion const&>(
            (unsigned __int64 *)v3,
            (int)v6);
        }
        else
          v19 = *((_DWORD *)v6 + 1);
          v20 = *((_DWORD *)v6 + 2);
          v21 = *((_DWORD *)v6 + 3);
          *(_DWORD *)v18 = *(_DWORD *)v6;
          *(_DWORD *)(v18 + 4) = v19;
          *(_DWORD *)(v18 + 8) = v20;
          *(_DWORD *)(v18 + 12) = v21;
          SemVersion::SemVersion(v18 + 16, (int)v6 + 16);
          *(_BYTE *)(v18 + 40) = *((_BYTE *)v6 + 40);
          *((_DWORD *)v3 + 1) += 48;
  return std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v29);
}


signed int __fastcall PackDependencyManager::packIsDependedUpon(PackDependencyManager *this, const PackManifest *a2, const PackManifest *a3)
{
  PackManifest *v3; // r4@1
  char *v4; // r0@1
  unsigned __int64 *v5; // r6@1
  void *v6; // r5@1
  signed int v7; // r0@1
  unsigned int v8; // r7@1
  int v9; // r6@4
  char *v10; // r0@5
  signed int v11; // r4@7
  void *v13; // [sp+0h] [bp-20h]@1
  int v14; // [sp+4h] [bp-1Ch]@1
  char *v15; // [sp+8h] [bp-18h]@1

  v3 = this;
  v4 = PackManifest::getDependentPackIdentities(a2);
  v5 = (unsigned __int64 *)v4;
  v6 = 0;
  v7 = (*(_QWORD *)v4 >> 32) - *(_QWORD *)v4;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v8 = -1431655765 * (v7 >> 4);
  if ( v7 )
  {
    if ( v8 >= 0x5555556 )
      sub_21E57F4();
    v6 = operator new(v7);
  }
  v13 = v6;
  v14 = (int)v6;
  v15 = (char *)v6 + 48 * v8;
  v9 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PackIdVersion const*,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>,PackIdVersion*>(
         *v5,
         *v5 >> 32,
         (int)v6);
  v14 = v9;
  if ( v6 == (void *)v9 )
    v11 = 0;
  else
    while ( 1 )
    {
      v10 = PackManifest::getIdentity(v3);
      if ( PackIdVersion::operator==((int)v10, (int)v6) )
        break;
      v6 = (char *)v6 + 48;
      if ( (void *)v9 == v6 )
      {
        v11 = 0;
        goto LABEL_10;
      }
    }
    v11 = 1;
LABEL_10:
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v13);
  return v11;
}


signed int __fastcall PackDependencyManager::hasMissingDependencies(PackDependencyManager *this, const PackSource *a2, const PackManifest *a3)
{
  PackManifest *v3; // r4@1
  signed int v4; // r4@2
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1

  v3 = a2;
  PackDependencyManager::getMissingDependencyIdentities((PackDependencyManager *)&v6, this, a2);
  if ( v6 == v7 )
    v4 = PackManifest::hasLegacyModuleDependencies(v3);
  else
    v4 = 1;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v6);
  return v4;
}


void __fastcall PackDependencyManager::getMissingDependencyIdentities(PackDependencyManager *this, const PackContentItem *a2)
{
  PackDependencyManager::getMissingDependencyIdentities(this, a2);
}
