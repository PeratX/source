

int __fastcall WorldGenerator::getFeatureId(const void **a1)
{
  const void **v1; // r8@1
  char v2; // r0@1
  void *v3; // r0@19
  void *v4; // r0@20
  void *v5; // r0@21
  void *v6; // r0@22
  void *v7; // r0@23
  void *v8; // r0@24
  void *v9; // r0@25
  void *v10; // r0@26
  int v11; // r0@28
  const void *v12; // r5@29
  size_t v13; // r7@29
  int *v14; // r9@29
  int *v15; // r6@30
  _DWORD *v16; // r0@31
  size_t v17; // r4@31
  size_t v18; // r2@31
  int v19; // r0@33
  int *v20; // r0@41
  _DWORD *v21; // r1@42
  unsigned int v22; // r4@42
  unsigned int v23; // r5@42
  size_t v24; // r2@42
  int v25; // r0@44
  unsigned int *v27; // r2@50
  signed int v28; // r1@52
  unsigned int *v29; // r2@54
  signed int v30; // r1@56
  unsigned int *v31; // r2@58
  signed int v32; // r1@60
  unsigned int *v33; // r2@62
  signed int v34; // r1@64
  unsigned int *v35; // r2@66
  signed int v36; // r1@68
  unsigned int *v37; // r2@70
  signed int v38; // r1@72
  unsigned int *v39; // r2@74
  signed int v40; // r1@76
  unsigned int *v41; // r2@78
  signed int v42; // r1@80
  int v43; // [sp+4h] [bp-8Ch]@3
  char v44; // [sp+8h] [bp-88h]@3
  int v45; // [sp+Ch] [bp-84h]@3
  char v46; // [sp+10h] [bp-80h]@3
  int v47; // [sp+14h] [bp-7Ch]@3
  char v48; // [sp+18h] [bp-78h]@3
  int v49; // [sp+1Ch] [bp-74h]@3
  char v50; // [sp+20h] [bp-70h]@3
  int v51; // [sp+24h] [bp-6Ch]@3
  char v52; // [sp+28h] [bp-68h]@3
  int v53; // [sp+2Ch] [bp-64h]@3
  char v54; // [sp+30h] [bp-60h]@3
  int v55; // [sp+34h] [bp-5Ch]@3
  char v56; // [sp+38h] [bp-58h]@3
  int v57; // [sp+3Ch] [bp-54h]@3
  char v58; // [sp+40h] [bp-50h]@3
  int v59; // [sp+64h] [bp-2Ch]@3
  int v60; // [sp+68h] [bp-28h]@3

  v1 = a1;
  v2 = byte_281FE44;
  __dmb();
  if ( !(v2 & 1) && j_j___cxa_guard_acquire((unsigned int *)&byte_281FE44) )
  {
    sub_21E94B4((void **)&v43, "endcity");
    v44 = 1;
    sub_21E94B4((void **)&v45, "fortress");
    v46 = 2;
    sub_21E94B4((void **)&v47, "mineshaft");
    v48 = 3;
    sub_21E94B4((void **)&v49, "monument");
    v50 = 4;
    sub_21E94B4((void **)&v51, "stronghold");
    v52 = 5;
    sub_21E94B4((void **)&v53, "temple");
    v54 = 6;
    sub_21E94B4((void **)&v55, "village");
    v56 = 7;
    sub_21E94B4((void **)&v57, "mansion");
    v58 = 8;
    dword_281FE64 = 0;
    dword_281FE68 = 0;
    *(_DWORD *)&algn_281FE6C[8] = 0;
    *(_DWORD *)algn_281FE6C = &dword_281FE64;
    *(_DWORD *)&algn_281FE6C[4] = &dword_281FE64;
    std::_Rb_tree<std::string,std::pair<std::string const,StructureFeatureType>,std::_Select1st<std::pair<std::string const,StructureFeatureType>>,std::less<std::string>,std::allocator<std::pair<std::string const,StructureFeatureType>>>::_M_get_insert_hint_unique_pos(
      (int)&v59,
      (int)&unk_281FE60,
      (int)&dword_281FE64,
      (const void **)&v43);
    if ( v60 )
      std::_Rb_tree<std::string,std::pair<std::string const,StructureFeatureType>,std::_Select1st<std::pair<std::string const,StructureFeatureType>>,std::less<std::string>,std::allocator<std::pair<std::string const,StructureFeatureType>>>::_M_insert_<std::pair<std::string const,StructureFeatureType> const&>(
        (int)&unk_281FE60,
        v59,
        v60,
        (const void **)&v43);
      (const void **)&v45);
        (const void **)&v45);
      (const void **)&v47);
        (const void **)&v47);
      (const void **)&v49);
        (const void **)&v49);
      (const void **)&v51);
        (const void **)&v51);
      (const void **)&v53);
        (const void **)&v53);
      (const void **)&v55);
        (const void **)&v55);
      (const void **)&v57);
        (const void **)&v57);
    v3 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v3);
    }
    v4 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v55 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    v5 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v53 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v51 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v49 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v47 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v45 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v43 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    j___cxa_atexit((int)std::map<std::string,StructureFeatureType,std::less<std::string>,std::allocator<std::pair<std::string const,StructureFeatureType>>>::~map);
    j_j___cxa_guard_release((unsigned int *)&byte_281FE44);
  }
  v11 = dword_281FE68;
  if ( dword_281FE68 )
    v12 = *v1;
    v13 = *((_DWORD *)*v1 - 3);
    v14 = &dword_281FE64;
    do
      v15 = (int *)v11;
      while ( 1 )
        v16 = (_DWORD *)v15[4];
        v17 = *(v16 - 3);
        v18 = *(v16 - 3);
        if ( v17 > v13 )
          v18 = v13;
        v19 = j_memcmp(v16, v12, v18);
        if ( !v19 )
          v19 = v17 - v13;
        if ( v19 >= 0 )
          break;
        v15 = (int *)v15[3];
        if ( !v15 )
        {
          v15 = v14;
          goto LABEL_41;
        }
      v11 = v15[2];
      v14 = v15;
    while ( v11 );
  else
    v15 = &dword_281FE64;
LABEL_41:
  v20 = &dword_281FE64;
  if ( v15 != &dword_281FE64 )
    v21 = (_DWORD *)v15[4];
    v22 = *((_DWORD *)*v1 - 3);
    v23 = *(v21 - 3);
    v24 = *((_DWORD *)*v1 - 3);
    if ( v22 > v23 )
      v24 = *(v21 - 3);
    v25 = j_memcmp(*v1, v21, v24);
    if ( !v25 )
      v25 = v22 - v23;
    if ( v25 < 0 )
      v15 = &dword_281FE64;
    v20 = v15;
  return *((_BYTE *)v20 + 20);
}


_DWORD *__fastcall WorldGenerator::WorldGenerator(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  HardcodedSpawnAreaRegistry *v2; // r5@1
  _DWORD *result; // r0@1

  v1 = a1;
  *a1 = &off_27196AC;
  v2 = (HardcodedSpawnAreaRegistry *)j_operator new(0x10u);
  HardcodedSpawnAreaRegistry::HardcodedSpawnAreaRegistry(v2);
  result = v1;
  v1[1] = v2;
  return result;
}


void __fastcall WorldGenerator::~WorldGenerator(WorldGenerator *this)
{
  WorldGenerator::~WorldGenerator(this);
}


WorldGenerator *__fastcall WorldGenerator::~WorldGenerator(WorldGenerator *this)
{
  WorldGenerator *v1; // r4@1
  HardcodedSpawnAreaRegistry *v2; // r0@1
  HardcodedSpawnAreaRegistry *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_27196AC;
  v2 = (HardcodedSpawnAreaRegistry *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = HardcodedSpawnAreaRegistry::~HardcodedSpawnAreaRegistry(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


__int64 __fastcall WorldGenerator::getFeatureName(_QWORD *a1, signed int a2)
{
  _QWORD *v2; // r4@1
  signed int v3; // r5@1
  char v4; // r0@1
  __int64 v5; // r6@3
  __int64 v6; // r1@3
  char *v7; // r1@4
  int v8; // r2@4
  char *v9; // r0@5
  char *v10; // r1@12
  __int64 result; // r0@16
  char v12; // [sp+10h] [bp-78h]@3
  int v13; // [sp+14h] [bp-74h]@3
  const char *v14; // [sp+18h] [bp-70h]@3
  char v15; // [sp+1Ch] [bp-6Ch]@3
  signed int v16; // [sp+20h] [bp-68h]@3
  const char *v17; // [sp+24h] [bp-64h]@3
  char v18; // [sp+28h] [bp-60h]@3
  int v19; // [sp+2Ch] [bp-5Ch]@3
  const char *v20; // [sp+30h] [bp-58h]@3
  char v21; // [sp+34h] [bp-54h]@3
  __int64 v22; // [sp+38h] [bp-50h]@3
  char v23; // [sp+40h] [bp-48h]@3
  __int64 v24; // [sp+44h] [bp-44h]@3
  char v25; // [sp+4Ch] [bp-3Ch]@3
  signed int v26; // [sp+50h] [bp-38h]@3
  const char *v27; // [sp+54h] [bp-34h]@3
  char v28; // [sp+58h] [bp-30h]@3
  signed int v29; // [sp+5Ch] [bp-2Ch]@3
  const char *v30; // [sp+60h] [bp-28h]@3
  char v31; // [sp+64h] [bp-24h]@3
  signed int v32; // [sp+68h] [bp-20h]@3
  const char *v33; // [sp+6Ch] [bp-1Ch]@3

  v2 = a1;
  v3 = a2;
  v4 = byte_281FE40;
  __dmb();
  if ( !(v4 & 1) && j_j___cxa_guard_acquire((unsigned int *)&byte_281FE40) )
  {
    v12 = 1;
    v13 = 7;
    v14 = "endcity";
    v15 = 2;
    LODWORD(v5) = 8;
    v16 = 8;
    v17 = "fortress";
    HIDWORD(v5) = "monument";
    v18 = 3;
    HIDWORD(v6) = "stronghold";
    v19 = 9;
    v20 = "mineshaft";
    v21 = 4;
    v22 = v5;
    v23 = 5;
    LODWORD(v6) = 10;
    v24 = v6;
    v25 = 6;
    v26 = 6;
    v27 = "temple";
    v28 = 7;
    v29 = 7;
    v30 = "village";
    v31 = 8;
    v32 = 7;
    v33 = "mansion";
    std::map<StructureFeatureType,gsl::basic_string_span<char const,-1>,std::less<StructureFeatureType>,std::allocator<std::pair<StructureFeatureType const,gsl::basic_string_span<char const,-1>>>>::map(
      (int)&algn_281FE45[3],
      (int)&v12,
      8);
    j___cxa_atexit((int)std::map<StructureFeatureType,gsl::basic_string_span<char const,-1>,std::less<StructureFeatureType>,std::allocator<std::pair<StructureFeatureType const,gsl::basic_string_span<char const,-1>>>>::~map);
    j_j___cxa_guard_release((unsigned int *)&byte_281FE40);
  }
  v7 = &algn_281FE45[7];
  v8 = dword_281FE50;
  if ( dword_281FE50 )
    do
    {
      v9 = (char *)v8;
      while ( v9[16] < v3 )
      {
        v9 = (char *)*((_DWORD *)v9 + 3);
        if ( !v9 )
          goto LABEL_11;
      }
      v8 = *((_DWORD *)v9 + 2);
      v7 = v9;
    }
    while ( v8 );
  else
LABEL_11:
    v9 = v7;
  v10 = &algn_281FE45[7];
  if ( v9 != &algn_281FE45[7] )
    if ( v9[16] > v3 )
      v9 = &algn_281FE45[7];
    v10 = v9;
  result = *(_QWORD *)(v10 + 20);
  *v2 = result;
  return result;
}


void __fastcall WorldGenerator::~WorldGenerator(WorldGenerator *this)
{
  WorldGenerator *v1; // r4@1
  HardcodedSpawnAreaRegistry *v2; // r0@1
  HardcodedSpawnAreaRegistry *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_27196AC;
  v2 = (HardcodedSpawnAreaRegistry *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = HardcodedSpawnAreaRegistry::~HardcodedSpawnAreaRegistry(v2);
    j_operator delete((void *)v3);
  }
  j_j_j__ZdlPv_6((void *)v1);
}
