

signed int __fastcall LegacyChunkStorage::_isImported(LegacyChunkStorage *this, const ChunkPos *a2)
{
  LegacyChunkStorage *v2; // r6@1
  const ChunkPos *v3; // r5@1
  pthread_mutex_t *v4; // r4@1
  int v5; // r0@2
  char v6; // r6@3
  unsigned __int64 v7; // r2@3
  bool v8; // zf@5
  signed int v9; // r6@5
  char v10; // r7@6
  char v11; // r7@10
  char v13; // [sp+Ch] [bp-164h]@10
  void (*v14)(void); // [sp+14h] [bp-15Ch]@10
  char v15; // [sp+1Ch] [bp-154h]@10
  char v16; // [sp+20h] [bp-150h]@6
  void (*v17)(void); // [sp+28h] [bp-148h]@6
  char v18; // [sp+30h] [bp-140h]@6
  int v19; // [sp+34h] [bp-13Ch]@3
  int v20; // [sp+38h] [bp-138h]@3
  char v21; // [sp+3Ch] [bp-134h]@3
  void (__cdecl *v22)(char *); // [sp+44h] [bp-12Ch]@3
  char v23; // [sp+4Ch] [bp-124h]@3
  void *v24; // [sp+50h] [bp-120h]@3
  int v25; // [sp+54h] [bp-11Ch]@3
  char v26[256]; // [sp+58h] [bp-118h]@6
  RakNet *v27; // [sp+158h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = (pthread_mutex_t *)((char *)this + 128);
  v27 = _stack_chk_guard;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v4);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v24 = 0;
  v25 = 0;
  v19 = *((_DWORD *)v2 + 13);
  v20 = *(_DWORD *)(v19 - 12);
  j_Core::File::open((int)&v21, (int)&v24, (__int64 *)&v19, 33);
  v6 = v23;
  v23 |= 2u;
  HIDWORD(v7) = v22;
  if ( v22 )
    v22(&v21);
  v8 = (v6 & 1) == 0;
  v9 = 0;
  if ( !v8 )
    LODWORD(v7) = v26;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v16, v24, v7, 0x100uLL);
    v10 = v18;
    v18 |= 2u;
    if ( v17 )
      v17();
    if ( v10 & 1 )
    {
      j_Core::File::close((Core::File *)&v13, (int *)&v24);
      v11 = v15;
      v15 |= 2u;
      if ( v14 )
        v14();
      if ( v11 & 1 )
      {
        v9 = (unsigned __int8)*(&v26[16 * (*(_QWORD *)v3 >> 32)] + *(_QWORD *)v3);
        if ( *(&v26[16 * (*(_QWORD *)v3 >> 32)] + *(_QWORD *)v3) )
          v9 = 1;
      }
      else
        v9 = 0;
    }
    else
      v9 = 0;
  j_Core::File::~File((Core::File *)&v24);
    j_pthread_mutex_unlock_0(v4);
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail_0(_stack_chk_guard - v27);
  return v9;
}


signed int __fastcall LegacyChunkStorage::saveLiveChunk(LegacyChunkStorage *this, LevelChunk *a2)
{
  LegacyChunkStorage *v2; // r4@1
  LevelChunk *v3; // r5@1
  int v4; // r0@1
  char *v5; // r0@3
  signed int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 4);
  if ( v4 && (*(int (**)(void))(*(_DWORD *)v4 + 44))() == 1 )
  {
    v5 = j_LevelChunk::getPosition(v3);
    j_LegacyChunkStorage::_markChunkAsImported(v2, (const ChunkPos *)v5);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall LegacyChunkStorage::LegacyChunkStorage(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r5@1
  int v7; // r7@1
  int *v8; // r0@3
  int *v9; // r0@3
  double v10; // r0@3
  double v11; // r0@3
  int v12; // r7@5
  void *v13; // r5@5
  unsigned int v14; // r0@6
  int v15; // r7@8
  void *v16; // r5@8
  int v18; // [sp+4h] [bp-3Ch]@1

  v4 = a1;
  v5 = *a2;
  v6 = a3;
  v7 = a4;
  *a2 = 0;
  v18 = v5;
  j_ChunkSource::ChunkSource(v4, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v18 = 0;
  *(_DWORD *)v4 = &off_2724D08;
  *(_BYTE *)(v4 + 24) = 0;
  j_PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)(v4 + 28), 0x15CF0u, 5);
  v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 28))(v6);
  sub_21E8AF4((int *)(v4 + 48), v8);
  v9 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 28))(v6);
  sub_21E8AF4((int *)(v4 + 52), v9);
  sub_21E7408((const void **)(v4 + 52), "/importedchunks.dat", 0x13u);
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 64) = v7;
  *(_DWORD *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 1065353216;
  LODWORD(v10) = v4 + 84;
  *(_DWORD *)(LODWORD(v10) + 4) = 0;
  v11 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v10)));
  *(_DWORD *)(v4 + 72) = LODWORD(v11);
  if ( LODWORD(v11) == 1 )
  {
    *(_DWORD *)(v4 + 92) = 0;
    v13 = (void *)(v4 + 92);
  }
  else
    if ( LODWORD(v11) >= 0x40000000 )
      sub_21E57F4();
    v12 = 4 * LODWORD(v11);
    v13 = j_operator new(4 * LODWORD(v11));
    j___aeabi_memclr4_0((int)v13, v12);
  *(_DWORD *)(v4 + 68) = v13;
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 1065353216;
  LODWORD(v11) = v4 + 112;
  *(_DWORD *)(LODWORD(v11) + 4) = 0;
  v14 = sub_21E6254(v11);
  *(_DWORD *)(v4 + 100) = v14;
  if ( v14 == 1 )
    *(_DWORD *)(v4 + 120) = 0;
    v16 = (void *)(v4 + 120);
    if ( v14 >= 0x40000000 )
    v15 = 4 * v14;
    v16 = j_operator new(4 * v14);
    j___aeabi_memclr4_0((int)v16, v15);
  *(_DWORD *)(v4 + 96) = v16;
  *(_DWORD *)(v4 + 124) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  j_LegacyChunkStorage::_loadEntities((LegacyChunkStorage *)v4);
  return v4;
}


RakNet *__fastcall LegacyChunkStorage::acquireDiscarded(int a1, LevelChunk **a2)
{
  LevelChunk **v2; // r6@1
  int v3; // r4@1
  char *v4; // r5@1
  int v5; // r0@1
  LevelChunk *v6; // r2@2
  void (*v7)(void); // r3@2
  LevelChunk *v8; // r0@3
  RakNet *result; // r0@5
  LevelChunk *v10; // [sp+4h] [bp-14h]@2

  v2 = a2;
  v3 = a1;
  v4 = j_LevelChunk::getPosition(*a2);
  v5 = *(_DWORD *)(v3 + 16);
  if ( v5 )
  {
    v6 = *v2;
    v7 = *(void (**)(void))(*(_DWORD *)v5 + 56);
    *v2 = 0;
    v10 = v6;
    v7();
    if ( v10 )
    {
      v8 = j_LevelChunk::~LevelChunk(v10);
      j_LevelChunk::operator delete((void *)v8);
    }
    v10 = 0;
  }
  result = *v2;
  if ( !*v2 )
    result = j_LegacyChunkStorage::_markChunkAsImported((LegacyChunkStorage *)v3, (const ChunkPos *)v4);
  return result;
}


signed int __fastcall LegacyChunkStorage::loadChunk(LegacyChunkStorage *this, LevelChunk *a2, bool a3)
{
  bool v3; // r4@1
  LevelChunk *v4; // r5@1
  ChunkSource *v5; // r6@1
  signed int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = j_LegacyChunkStorage::_loadChunk(this, a2);
  if ( !result )
    result = j_j_j__ZN11ChunkSource9loadChunkER10LevelChunkb_0(v5, v4, v3);
  return result;
}


signed int __fastcall LegacyChunkStorage::_openRegionFile(LegacyChunkStorage *this)
{
  LegacyChunkStorage *v1; // r4@1
  signed int result; // r0@2
  RegionFile *v3; // r5@3
  int v4; // r0@3
  int v5; // r1@7

  v1 = this;
  if ( *((_DWORD *)this + 14) )
  {
    result = 1;
  }
  else
    v3 = (RegionFile *)j_operator new(0x2028u);
    j_RegionFile::RegionFile((int)v3, (int *)v1 + 12);
    v4 = *((_DWORD *)v1 + 14);
    *((_DWORD *)v1 + 14) = v3;
    if ( v4 )
    {
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      v3 = (RegionFile *)*((_DWORD *)v1 + 14);
    }
    if ( j_RegionFile::open(v3) )
      result = 1;
    else
      v5 = *((_DWORD *)v1 + 14);
      result = 0;
      *((_DWORD *)v1 + 14) = 0;
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        result = 0;
      }
  return result;
}


RakNet *__fastcall LegacyChunkStorage::_loadEntities(LegacyChunkStorage *this)
{
  LegacyChunkStorage *v1; // r9@1
  int v2; // r0@1
  int v3; // r1@1
  unsigned __int64 v4; // r2@1
  char v5; // r0@1
  unsigned __int64 v6; // r2@2
  unsigned __int64 v7; // r2@4
  unsigned int v8; // r3@11
  signed int v9; // r7@11
  signed int v10; // r1@11
  unsigned __int64 v11; // r2@18
  int v12; // r5@22
  signed int v13; // r5@22
  void *v14; // r0@22
  int v15; // r5@24
  int v16; // r0@24
  ListTag *v17; // r4@24
  void *v18; // r0@24
  int v19; // r5@25
  int v23; // r0@28
  int v24; // r8@28
  ListTag *v25; // r7@30
  void *v26; // r0@30
  __int64 v30; // kr00_8@33
  unsigned int v31; // r9@33
  int v32; // r10@33
  int v33; // r0@33
  int v34; // r4@34
  int v35; // r6@34
  int v36; // r5@37
  _DWORD *v38; // r0@45
  int v39; // r12@45
  void *v40; // r0@46
  unsigned int *v41; // r2@47
  signed int v42; // r1@49
  unsigned int *v43; // r2@51
  signed int v44; // r1@53
  int v45; // r5@62
  signed int v46; // r5@62
  void *v47; // r0@62
  int v48; // r5@64
  int v49; // r0@64
  ListTag *v50; // r4@64
  void *v51; // r0@64
  int v52; // r5@65
  int *v53; // r9@65
  int v54; // r0@68
  int v55; // r8@68
  int v56; // r7@70
  int v57; // r6@70
  int v58; // r0@70
  void *v59; // r0@70
  void *v60; // r0@71
  void *v61; // r0@72
  __int64 v62; // kr10_8@73
  unsigned int v63; // r10@73
  int v64; // r11@73
  int v65; // r0@73
  int v66; // r4@74
  int v67; // r6@74
  int v68; // r5@77
  bool v69; // zf@81
  _DWORD *v70; // r0@85
  int v71; // r12@85
  void *v72; // r0@86
  unsigned int *v73; // r2@87
  signed int v74; // r1@89
  unsigned int *v75; // r2@91
  signed int v76; // r1@93
  unsigned int *v77; // r2@95
  signed int v78; // r1@97
  unsigned int *v79; // r2@99
  signed int v80; // r1@101
  char *v81; // r0@120
  RakNet *result; // r0@123
  unsigned int *v83; // r2@125
  signed int v84; // r1@127
  unsigned int *v85; // r2@129
  signed int v86; // r1@131
  unsigned int *v87; // r2@137
  signed int v88; // r1@139
  unsigned int *v89; // r2@141
  signed int v90; // r1@143
  unsigned int *v91; // r2@149
  signed int v92; // r1@151
  ListTag *v93; // [sp+18h] [bp-5B0h]@24
  ListTag *v94; // [sp+18h] [bp-5B0h]@64
  int v95; // [sp+1Ch] [bp-5ACh]@25
  int v96; // [sp+1Ch] [bp-5ACh]@65
  unsigned __int64 v97; // [sp+24h] [bp-5A4h]@33
  int v98; // [sp+24h] [bp-5A4h]@70
  LegacyChunkStorage *v99; // [sp+28h] [bp-5A0h]@65
  void **v100; // [sp+34h] [bp-594h]@86
  int v101; // [sp+38h] [bp-590h]@86
  int v102; // [sp+40h] [bp-588h]@70
  int v103; // [sp+48h] [bp-580h]@70
  int v104; // [sp+50h] [bp-578h]@70
  int v105; // [sp+54h] [bp-574h]@70
  int v106; // [sp+58h] [bp-570h]@70
  int v107; // [sp+5Ch] [bp-56Ch]@70
  __int64 v108; // [sp+60h] [bp-568h]@70
  int v109; // [sp+70h] [bp-558h]@64
  int v110; // [sp+78h] [bp-550h]@62
  void **v111; // [sp+7Ch] [bp-54Ch]@46
  int v112; // [sp+80h] [bp-548h]@46
  float v113; // [sp+84h] [bp-544h]@33
  __int64 v114; // [sp+90h] [bp-538h]@33
  int v115; // [sp+A0h] [bp-528h]@30
  int v116; // [sp+A8h] [bp-520h]@24
  int v117; // [sp+B0h] [bp-518h]@22
  int v118; // [sp+B4h] [bp-514h]@22
  void **v119; // [sp+B8h] [bp-510h]@22
  int v120; // [sp+BCh] [bp-50Ch]@22
  int v121; // [sp+C0h] [bp-508h]@22
  const void **v122; // [sp+C4h] [bp-504h]@22
  char v123; // [sp+C8h] [bp-500h]@20
  void (*v124)(void); // [sp+D0h] [bp-4F8h]@20
  const void *v125[3]; // [sp+E0h] [bp-4E8h]@8
  void (*v126)(void); // [sp+ECh] [bp-4DCh]@8
  unsigned int v127; // [sp+F8h] [bp-4D0h]@8
  unsigned int v128; // [sp+FCh] [bp-4CCh]@8
  char v129; // [sp+100h] [bp-4C8h]@6
  void (*v130)(void); // [sp+108h] [bp-4C0h]@6
  char v131; // [sp+114h] [bp-4B4h]@4
  void (*v132)(void); // [sp+11Ch] [bp-4ACh]@4
  char v133; // [sp+128h] [bp-4A0h]@2
  void (*v134)(void); // [sp+130h] [bp-498h]@2
  int v135; // [sp+13Ch] [bp-48Ch]@6
  char v136; // [sp+140h] [bp-488h]@4
  char v137; // [sp+147h] [bp-481h]@2
  __int64 v138; // [sp+14Ch] [bp-47Ch]@1
  char v139; // [sp+154h] [bp-474h]@1
  void (__cdecl *v140)(char *); // [sp+15Ch] [bp-46Ch]@121
  char v141; // [sp+164h] [bp-464h]@1
  unsigned __int64 *v142; // [sp+168h] [bp-460h]@1
  int v143; // [sp+16Ch] [bp-45Ch]@1
  int v144; // [sp+170h] [bp-458h]@1
  int v145; // [sp+174h] [bp-454h]@1
  const char *v146; // [sp+178h] [bp-450h]@1
  int v147; // [sp+17Ch] [bp-44Ch]@1
  int v148; // [sp+180h] [bp-448h]@86
  int v149; // [sp+184h] [bp-444h]@46
  char v150; // [sp+18Ch] [bp-43Ch]@1
  int v151; // [sp+190h] [bp-438h]@1
  int v152; // [sp+590h] [bp-38h]@1
  RakNet *v153; // [sp+594h] [bp-34h]@1

  v1 = this;
  v153 = _stack_chk_guard;
  v142 = 0;
  v143 = 0;
  v2 = *((_DWORD *)this + 12);
  v3 = *(_DWORD *)(v2 - 12);
  v144 = v2;
  v145 = v3;
  v146 = "entities.dat";
  v147 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v150, (int)&v144, 2);
  LODWORD(v138) = &v151;
  HIDWORD(v138) = v152;
  j_Core::File::open((int)&v139, (int)&v142, &v138, 33);
  v5 = v141;
  v141 |= 2u;
  if ( v5 & 1 )
  {
    LODWORD(v4) = &v137;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v133, v142, v4, 4uLL);
    HIDWORD(v6) = v134;
    if ( v134 )
      v134();
    LODWORD(v6) = &v136;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v131, v142, v6, 4uLL);
    HIDWORD(v7) = v132;
    if ( v132 )
      v132();
    LODWORD(v7) = &v135;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v129, v142, v7, 4uLL);
    if ( v130 )
      v130();
    v127 = 0;
    v128 = 0;
    j_Core::FileImpl::getRemainingSize((Core::FileImpl *)&v125[1], v142);
    if ( v126 )
      v126();
    if ( v135 >= 1 )
    {
      v8 = v135 >> 31;
      v9 = 0;
      v10 = 0;
      if ( v135 > v127 )
        v10 = 1;
      if ( v8 > v128 )
        v9 = 1;
      if ( v8 == v128 )
        v9 = v10;
      if ( !v9 )
      {
        LODWORD(v11) = sub_21E757C(v135, 0);
        v125[0] = (const void *)v11;
        if ( *(_DWORD *)(v11 - 4) >= 0 )
        {
          sub_21E8010(v125);
          LODWORD(v11) = v125[0];
        }
        HIDWORD(v11) = v135 >> 31;
        j_Core::FileImpl::readExactly((Core::FileImpl *)&v123, v142, v11, v135);
        if ( v124 )
          v124();
        v119 = &off_26E91B8;
        v120 = 0;
        v121 = *((_DWORD *)v125[0] - 3);
        v122 = v125;
        j_NbtIo::read((NbtIo *)&v118, (IDataInput *)&v119);
        v12 = v118;
        sub_21E94B4((void **)&v117, "Entities");
        v13 = j_CompoundTag::contains(v12, (const void **)&v117, 9);
        v14 = (void *)(v117 - 12);
        if ( (int *)(v117 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v117 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
          }
          else
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        if ( v13 == 1 )
          v15 = v118;
          sub_21E94B4((void **)&v116, "Entities");
          v16 = j_CompoundTag::getList(v15, (const void **)&v116);
          v17 = (ListTag *)v16;
          v93 = (ListTag *)v16;
          v18 = (void *)(v116 - 12);
          if ( (int *)(v116 - 12) != &dword_28898C0 )
            v87 = (unsigned int *)(v116 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
            }
            else
              v88 = (*v87)--;
            if ( v88 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          v95 = (int)v1 + 68;
          v19 = 0;
          __asm { VLDR            S16, =0.0 }
          while ( 1 )
            if ( v19 >= j_ListTag::size(v17) )
              break;
            v23 = j_ListTag::get(v17, v19);
            v24 = v23;
            if ( !v23 )
              goto LABEL_26;
            if ( (*(int (**)(void))(*(_DWORD *)v23 + 24))() != 10 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 24))(v24);
            sub_21E94B4((void **)&v115, "Pos");
            v25 = (ListTag *)j_CompoundTag::getList(v24, (const void **)&v115);
            v26 = (void *)(v115 - 12);
            if ( (int *)(v115 - 12) != &dword_28898C0 )
              v43 = (unsigned int *)(v115 - 4);
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
                j_j_j_j__ZdlPv_9(v26);
            __asm
              VMOV.F32        S0, S16
              VMOV.F32        S2, S16
              VMOV.F32        S4, S16
            if ( !_ZF )
              _R6 = j_ListTag::getFloat(v25, 0);
              _R4 = j_ListTag::getFloat(v25, 1);
              _R0 = j_ListTag::getFloat(v25, 2);
              __asm
                VMOV            S0, R6
                VMOV            S2, R4
                VMOV            S4, R0
              VSTR            S0, [SP,#0x5C8+var_544]
              VSTR            S2, [SP,#0x5C8+var_540]
              VSTR            S4, [SP,#0x5C8+var_53C]
            j_ChunkPos::ChunkPos((int)&v114, (int)&v113);
            v97 = __PAIR__((unsigned int)v1, v19);
            v30 = *(_QWORD *)((char *)v1 + 68);
            v31 = 522133279 * v114 ^ HIDWORD(v114);
            v32 = v31 % HIDWORD(v30);
            v33 = *(_DWORD *)(v30 + 4 * (v31 % HIDWORD(v30)));
            if ( !v33 )
              goto LABEL_45;
            v34 = *(_DWORD *)v33;
            v35 = *(_DWORD *)(*(_DWORD *)v33 + 24);
            while ( v35 != v31 || *(_QWORD *)(v34 + 8) != v114 )
              v36 = *(_DWORD *)v34;
              if ( *(_DWORD *)v34 )
                v35 = *(_DWORD *)(v36 + 24);
                v33 = v30;
                v34 = *(_DWORD *)v30;
                if ( *(_DWORD *)(v36 + 24) % HIDWORD(v30) == v32 )
                  continue;
            _ZF = v33 == 0;
            if ( v33 )
              v33 = *(_DWORD *)v33;
              _ZF = v33 == 0;
            if ( _ZF )
LABEL_45:
              v38 = j_operator new(0x20u);
              v39 = (int)(v38 + 2);
              *v38 = 0;
              *(_QWORD *)v39 = v114;
              *(_DWORD *)(v39 + 8) = &unk_28898CC;
              v33 = j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::string>,std::allocator<std::pair<ChunkPos const,std::string>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      v95,
                      v32,
                      v31,
                      (int)v38);
            v111 = &off_26E91F0;
            v112 = v33 + 16;
            (*(void (__fastcall **)(int *, int))(*(_DWORD *)v24 + 44))(&v149, v24);
            j_Tag::writeNamedTag((int)&v149, v24, (int)&v111);
            v17 = v93;
            v40 = (void *)(v149 - 12);
            v1 = (LegacyChunkStorage *)HIDWORD(v97);
            v19 = v97;
            if ( (int *)(v149 - 12) == &dword_28898C0 )
            v41 = (unsigned int *)(v149 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j__ZdlPv_9(v40);
              v19 = v97 + 1;
LABEL_26:
              ++v19;
        v45 = v118;
        sub_21E94B4((void **)&v110, "TileEntities");
        v46 = j_CompoundTag::contains(v45, (const void **)&v110, 9);
        v47 = (void *)(v110 - 12);
        if ( (int *)(v110 - 12) != &dword_28898C0 )
          v85 = (unsigned int *)(v110 - 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        if ( v46 == 1 )
          v48 = v118;
          sub_21E94B4((void **)&v109, "TileEntities");
          v49 = j_CompoundTag::getList(v48, (const void **)&v109);
          v50 = (ListTag *)v49;
          v94 = (ListTag *)v49;
          v51 = (void *)(v109 - 12);
          if ( (int *)(v109 - 12) != &dword_28898C0 )
            v91 = (unsigned int *)(v109 - 4);
                v92 = __ldrex(v91);
              while ( __strex(v92 - 1, v91) );
              v92 = (*v91)--;
            if ( v92 <= 0 )
              j_j_j_j__ZdlPv_9(v51);
          v96 = (int)v1 + 96;
          v52 = 0;
          v99 = v1;
          v53 = &dword_28898C0;
            if ( v52 >= j_ListTag::size(v50) )
            v54 = j_ListTag::get(v50, v52);
            v55 = v54;
            if ( !v54 )
              goto LABEL_66;
            if ( (*(int (**)(void))(*(_DWORD *)v54 + 24))() != 10 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 24))(v55);
            sub_21E94B4((void **)&v104, "x");
            v56 = j_CompoundTag::getInt(v55, (const void **)&v104);
            sub_21E94B4((void **)&v103, "y");
            v57 = j_CompoundTag::getInt(v55, (const void **)&v103);
            sub_21E94B4((void **)&v102, (const char *)&aRtuz[3]);
            v58 = j_CompoundTag::getInt(v55, (const void **)&v102);
            v105 = v56;
            v106 = v57;
            v107 = v58;
            j_ChunkPos::ChunkPos((ChunkPos *)&v108, (const BlockPos *)&v105);
            v98 = v52;
            v59 = (void *)(v102 - 12);
            if ( (int *)(v102 - 12) != v53 )
              v75 = (unsigned int *)(v102 - 4);
                  v76 = __ldrex(v75);
                while ( __strex(v76 - 1, v75) );
                v76 = (*v75)--;
              if ( v76 <= 0 )
                j_j_j_j__ZdlPv_9(v59);
            v60 = (void *)(v103 - 12);
            if ( (int *)(v103 - 12) != v53 )
              v77 = (unsigned int *)(v103 - 4);
                  v78 = __ldrex(v77);
                while ( __strex(v78 - 1, v77) );
                v78 = (*v77)--;
              if ( v78 <= 0 )
                j_j_j_j__ZdlPv_9(v60);
            v61 = (void *)(v104 - 12);
            if ( (int *)(v104 - 12) != v53 )
              v79 = (unsigned int *)(v104 - 4);
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j__ZdlPv_9(v61);
            v62 = *((_QWORD *)v99 + 12);
            v63 = 522133279 * v108 ^ HIDWORD(v108);
            v64 = v63 % (unsigned int)(*((_QWORD *)v99 + 12) >> 32);
            v65 = *(_DWORD *)(v62 + 4 * v64);
            if ( !v65 )
              goto LABEL_85;
            v66 = *(_DWORD *)v65;
            v67 = *(_DWORD *)(*(_DWORD *)v65 + 24);
            while ( v67 != v63 || *(_QWORD *)(v66 + 8) != v108 )
              v68 = *(_DWORD *)v66;
              if ( *(_DWORD *)v66 )
                v67 = *(_DWORD *)(v68 + 24);
                v65 = *((_QWORD *)v99 + 12);
                v66 = *(_DWORD *)v62;
                if ( *(_DWORD *)(v68 + 24) % HIDWORD(v62) == v64 )
            v69 = v65 == 0;
            if ( v65 )
              v65 = *(_DWORD *)v65;
              v69 = v65 == 0;
            if ( v69 )
LABEL_85:
              v70 = j_operator new(0x20u);
              *v70 = 0;
              v71 = (int)(v70 + 2);
              *(_QWORD *)v71 = v108;
              *(_DWORD *)(v71 + 8) = &unk_28898CC;
              v65 = j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::string>,std::allocator<std::pair<ChunkPos const,std::string>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      v96,
                      v64,
                      v63,
                      (int)v70);
            v100 = &off_26E91F0;
            v101 = v65 + 16;
            (*(void (__fastcall **)(int *, int))(*(_DWORD *)v55 + 44))(&v148, v55);
            j_Tag::writeNamedTag((int)&v148, v55, (int)&v100);
            v53 = &dword_28898C0;
            v50 = v94;
            v72 = (void *)(v148 - 12);
            v52 = v98;
            if ( (int *)(v148 - 12) == &dword_28898C0 )
            v73 = (unsigned int *)(v148 - 4);
                v74 = __ldrex(v73);
              while ( __strex(v74 - 1, v73) );
              v74 = (*v73)--;
            if ( v74 <= 0 )
              j_j_j_j__ZdlPv_9(v72);
              v52 = v98 + 1;
LABEL_66:
              ++v52;
        if ( v118 )
          (*(void (**)(void))(*(_DWORD *)v118 + 4))();
        v81 = (char *)v125[0] - 12;
        if ( (int *)v125[0] - 3 != &dword_28898C0 )
          v89 = (unsigned int *)((char *)v125[0] - 4);
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j__ZdlPv_9(v81);
      }
    }
  }
  if ( v140 )
    v140(&v139);
  j_Core::File::~File((Core::File *)&v142);
  result = (RakNet *)(_stack_chk_guard - v153);
  if ( _stack_chk_guard != v153 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall LegacyChunkStorage::~LegacyChunkStorage(LegacyChunkStorage *this)
{
  LegacyChunkStorage *v1; // r0@1

  v1 = j_LegacyChunkStorage::~LegacyChunkStorage(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall LegacyChunkStorage::_loadChunk(LegacyChunkStorage *this, LevelChunk *a2)
{
  LevelChunk *v2; // r4@1
  LegacyChunkStorage *v3; // r8@1
  char *v4; // r11@1
  signed int v5; // r5@2
  int v6; // r0@4
  RegionFile *v7; // r0@5
  RegionFile *v8; // r5@6
  int v9; // r0@6
  signed int v10; // r1@8
  RakNet::BitStream *v11; // r0@14
  RakNet::BitStream *v12; // r0@17
  int v13; // r6@22
  unsigned int v14; // r9@22
  unsigned int v15; // r7@22
  int v16; // r5@22
  int *v17; // r0@22
  int v18; // r10@23
  __int64 v19; // kr08_8@23
  int v20; // r6@23
  int v21; // r8@26
  int v23; // r8@38
  int v24; // t1@38
  unsigned int v25; // r8@38 OVERLAPPED
  unsigned int v26; // r11@38
  int *v27; // r0@38
  int v28; // r5@39
  int v29; // r7@39
  int v30; // r6@42
  unsigned __int64 *v31; // r10@44
  int v32; // r1@44
  int v33; // r7@44 OVERLAPPED
  unsigned int v34; // r6@46
  unsigned int *v35; // r0@46
  unsigned int v36; // r9@47
  int v37; // r7@47
  unsigned int v38; // r11@50
  int v39; // r5@54
  int v40; // r1@55
  _DWORD *v41; // r0@55
  _DWORD *v42; // r2@56
  int v43; // r9@59
  int v44; // r1@60
  _DWORD *v45; // r0@60
  _DWORD *v46; // r2@61
  bool v47; // zf@63
  int v48; // r1@66
  _DWORD *v49; // r0@66
  _DWORD *v50; // r2@67
  int v51; // [sp+4h] [bp-C064h]@38
  int v52; // [sp+8h] [bp-C060h]@22
  int v53; // [sp+8h] [bp-C060h]@38
  LegacyChunkStorage *v54; // [sp+Ch] [bp-C05Ch]@23
  LegacyChunkStorage *v55; // [sp+Ch] [bp-C05Ch]@38
  unsigned __int64 *v56; // [sp+10h] [bp-C058h]@23
  int v57; // [sp+14h] [bp-C054h]@22
  void **v58; // [sp+1Ch] [bp-C04Ch]@66
  int v59; // [sp+20h] [bp-C048h]@66
  int v60; // [sp+24h] [bp-C044h]@66
  int v61; // [sp+28h] [bp-C040h]@66
  void **v62; // [sp+2Ch] [bp-C03Ch]@60
  int v63; // [sp+30h] [bp-C038h]@60
  int v64; // [sp+34h] [bp-C034h]@60
  int v65; // [sp+38h] [bp-C030h]@60
  unsigned __int8 v66; // [sp+3Ch] [bp-C02Ch]@18
  unsigned __int8 v67; // [sp+3Dh] [bp-C02Bh]@18
  __int16 v68; // [sp+3Eh] [bp-C02Ah]@18
  char v69; // [sp+40h] [bp-C028h]@10
  int v70; // [sp+4040h] [bp-8028h]@10
  int v71; // [sp+C040h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  v4 = j_LevelChunk::getPosition(a2);
  if ( *((_BYTE *)v3 + 24) )
    return 0;
  v5 = 0;
  if ( j_LegacyChunkStorage::_isImported(v3, (const ChunkPos *)v4) )
    return v5;
  v71 = 0;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0((pthread_mutex_t *)((char *)v3 + 124));
    if ( v6 )
      sub_21E5E14(v6);
  }
  v7 = (RegionFile *)*((_DWORD *)v3 + 14);
  if ( !v7 )
    v8 = (RegionFile *)j_operator new(0x2028u);
    j_RegionFile::RegionFile((int)v8, (int *)v3 + 12);
    v9 = *((_DWORD *)v3 + 14);
    *((_DWORD *)v3 + 14) = v8;
    if ( v9 )
    {
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      v8 = (RegionFile *)*((_DWORD *)v3 + 14);
    }
    v10 = j_RegionFile::open(v8);
    v7 = (RegionFile *)*((_DWORD *)v3 + 14);
    if ( !v10 )
      *((_DWORD *)v3 + 14) = 0;
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      if ( &pthread_create )
        j_pthread_mutex_unlock_0((pthread_mutex_t *)((char *)v3 + 124));
      return 0;
  if ( j_RegionFile::readChunk(v7, *(_QWORD *)v4, *(_QWORD *)v4 >> 32, (RakNet::BitStream **)&v71) != 1 )
    if ( &pthread_create )
      j_pthread_mutex_unlock_0((pthread_mutex_t *)((char *)v3 + 124));
  j_RakNet::BitStream::ResetReadPointer((RakNet::BitStream *)v71);
  j_RakNet::BitStream::Read((RakNet::BitStream *)v71, (char *)&v70, 0x8000u);
  j_LevelChunk::setAllBlockIDs((int)v2, (int)&v70, (int)&v71, 128);
  j_RakNet::BitStream::Read((RakNet::BitStream *)v71, &v69, 0x4000u);
  j_LevelChunk::setAllBlockData((int)v2, (int)&v69, (int)&v70, -32768);
  if ( *((_DWORD *)v3 + 16) >= 2 )
    j_RakNet::BitStream::Read((RakNet::BitStream *)v71, &v69, 0x4000u);
    j_pthread_mutex_unlock_0((pthread_mutex_t *)((char *)v3 + 124));
  v11 = (RakNet::BitStream *)v71;
  if ( *(_DWORD *)(v71 + 12) )
    j_operator delete[](*(void **)(v71 + 12));
    v11 = (RakNet::BitStream *)v71;
  if ( v11 )
    v12 = j_RakNet::BitStream::~BitStream(v11);
    j_operator delete((void *)v12);
  j_LevelChunk::getMin(v2);
  v66 = 0;
  v67 = 0;
  v68 = 0;
  do
    v67 = 0;
    do
      j_LevelChunk::setBiome(v2, (const Biome *)Biome::plains, (const ChunkBlockPos *)&v66);
      ++v67;
    while ( v67 < 0x10u );
    ++v66;
  while ( v66 < 0x10u );
  v13 = *(_QWORD *)v4;
  v57 = *(_QWORD *)v4 >> 32;
  v52 = (int)v3 + 68;
  v14 = *((_DWORD *)v3 + 18);
  v15 = 522133279 * v13 ^ v57;
  v16 = v15 % *((_DWORD *)v3 + 18);
  v17 = *(int **)(*((_DWORD *)v3 + 17) + 4 * v16);
  if ( v17 )
    v18 = *v17;
    v56 = (unsigned __int64 *)v4;
    v19 = *(_QWORD *)v4;
    v20 = *(_DWORD *)(*v17 + 24);
    v54 = v3;
    while ( v20 != v15 || *(_QWORD *)(v18 + 8) != v19 )
      v21 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
      {
        v20 = *(_DWORD *)(v21 + 24);
        v17 = (int *)v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v21 + 24) % v14 == v16 )
          continue;
      }
      v3 = v54;
      v13 = v19;
      goto LABEL_38;
    if ( v17 )
      v39 = *v17;
      if ( *v17 )
        j_LevelChunk::setPendingEntities((int)v2, (int *)(v39 + 16));
        v40 = *(_DWORD *)(v39 + 24) % (unsigned int)(*(_QWORD *)((char *)v54 + 68) >> 32);
        v41 = *(_DWORD **)(*(_QWORD *)((char *)v54 + 68) + 4 * v40);
        do
        {
          v42 = v41;
          v41 = (_DWORD *)*v41;
        }
        while ( v41 != (_DWORD *)v39 );
        j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::string>,std::allocator<std::pair<ChunkPos const,std::string>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
          v52,
          v40,
          v42,
          v39);
        v13 = *(_QWORD *)v4;
        v57 = *(_QWORD *)v4 >> 32;
    else
  else
LABEL_38:
  v55 = v3;
  v24 = *((_DWORD *)v3 + 24);
  v23 = (int)v3 + 96;
  v51 = v23;
  v53 = v24;
  v25 = *(_DWORD *)(v23 + 4);
  v26 = 522133279 * v13 ^ v57;
  v27 = *(int **)(v24 + 4 * (v26 % v25));
  if ( v27 )
    v28 = *v27;
    v29 = *(_DWORD *)(*v27 + 24);
    while ( v29 != v26 || *(_QWORD *)(v28 + 8) != *v56 )
      v30 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 )
        v29 = *(_DWORD *)(v30 + 24);
        v27 = (int *)v28;
        v28 = *(_DWORD *)v28;
        if ( *(_DWORD *)(v30 + 24) % v25 == v26 % v25 )
      v31 = v56;
      v32 = *v56;
      v33 = v53;
      goto LABEL_46;
    v33 = v53;
    if ( v27 )
      v43 = *v27;
      if ( *v27 )
        v62 = &off_26E91B8;
        v63 = 0;
        v64 = *(_DWORD *)(*(_DWORD *)(v43 + 16) - 12);
        v65 = v43 + 16;
        j_LevelChunk::deserializeBlockExtraData(v2, (IDataInput *)&v62);
        v44 = *(_DWORD *)(v43 + 24) % (unsigned int)(*((_QWORD *)v55 + 12) >> 32);
        v45 = *(_DWORD **)(*((_QWORD *)v55 + 12) + 4 * v44);
          v46 = v45;
          v45 = (_DWORD *)*v45;
        while ( v45 != (_DWORD *)v43 );
          v51,
          v44,
          v46,
          v43);
        *(_QWORD *)(&v25 - 1) = *((_QWORD *)v55 + 12);
        v32 = *v56;
        v57 = *v56 >> 32;
    v31 = v56;
    v32 = v13;
LABEL_46:
  v34 = 522133279 * v32 ^ v57;
  v35 = *(unsigned int **)(v33 + 4 * (v34 % v25));
  if ( v35 )
    v36 = *v35;
    v37 = *(_DWORD *)(*v35 + 24);
    while ( v37 != v34 || *(_QWORD *)(v36 + 8) != *v31 )
      v38 = *(_DWORD *)v36;
      if ( *(_DWORD *)v36 )
        v37 = *(_DWORD *)(v38 + 24);
        v35 = (unsigned int *)v36;
        v36 = *(_DWORD *)v36;
        if ( *(_DWORD *)(v38 + 24) % v25 == v34 % v25 )
      goto LABEL_69;
    v47 = v35 == 0;
    if ( v35 )
      v34 = *v35;
      v47 = *v35 == 0;
    if ( !v47 )
      v58 = &off_26E91B8;
      v59 = 0;
      v60 = *(_DWORD *)(*(_DWORD *)(v34 + 16) - 12);
      v61 = v34 + 16;
      j_LevelChunk::deserializeBlockEntities(v2, (IDataInput *)&v58);
      v48 = *(_DWORD *)(v34 + 24) % (unsigned int)(*((_QWORD *)v55 + 12) >> 32);
      v49 = *(_DWORD **)(*((_QWORD *)v55 + 12) + 4 * v48);
      do
        v50 = v49;
        v49 = (_DWORD *)*v49;
      while ( v49 != (_DWORD *)v34 );
      j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::string>,std::allocator<std::pair<ChunkPos const,std::string>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        v51,
        v48,
        v50,
        v34);
LABEL_69:
  j_LevelChunk::setUnsaved(v2);
  v5 = 1;
  j_LevelChunk::changeState((int)v2, 1, 6u);
  return v5;
}


void __fastcall LegacyChunkStorage::~LegacyChunkStorage(LegacyChunkStorage *this)
{
  LegacyChunkStorage::~LegacyChunkStorage(this);
}


LegacyChunkStorage *__fastcall LegacyChunkStorage::~LegacyChunkStorage(LegacyChunkStorage *this)
{
  LegacyChunkStorage *v1; // r10@1
  int v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  void *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  int v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  void *v12; // r6@26
  int v13; // r1@26
  void *v14; // r0@26
  char *v15; // r0@28
  int v16; // r0@31
  int v17; // r0@33
  int v18; // r1@35
  void *v19; // r0@35
  int v20; // r1@36
  void *v21; // r0@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@42
  signed int v26; // r1@44

  v1 = this;
  *(_DWORD *)this = &off_2724D08;
  v2 = *((_DWORD *)this + 26);
  while ( v2 )
  {
    v5 = (void *)v2;
    v6 = *(_DWORD *)(v2 + 16);
    v2 = *(_DWORD *)v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    j_operator delete(v5);
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 12), 4 * (*((_QWORD *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  v8 = (char *)*((_DWORD *)v1 + 24);
  if ( v8 && (char *)v1 + 120 != v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 19);
  while ( v9 )
    v12 = (void *)v9;
    v13 = *(_DWORD *)(v9 + 16);
    v9 = *(_DWORD *)v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    j_operator delete(v12);
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 68), 4 * (*(_QWORD *)((char *)v1 + 68) >> 32));
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  v15 = (char *)*((_DWORD *)v1 + 17);
  if ( v15 && (char *)v1 + 92 != v15 )
    j_operator delete(v15);
  v16 = *((_DWORD *)v1 + 15);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  v17 = *((_DWORD *)v1 + 14);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v18 = *((_DWORD *)v1 + 13);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 12);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v20 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  j_PerlinSimplexNoise::~PerlinSimplexNoise((LegacyChunkStorage *)((char *)v1 + 28));
  j_ChunkSource::~ChunkSource(v1);
  return v1;
}


RakNet *__fastcall LegacyChunkStorage::_markChunkAsImported(LegacyChunkStorage *this, const ChunkPos *a2)
{
  LegacyChunkStorage *v2; // r5@1
  const ChunkPos *v3; // r6@1
  int v4; // r0@3
  unsigned __int64 v5; // r2@4
  char v6; // r0@4
  char v7; // r7@5
  int v8; // r2@9
  signed int v9; // r1@10
  int v10; // r2@10
  signed int v11; // r3@11
  int v13; // r0@18
  int v14; // r0@20
  int v15; // r1@22
  int v16; // r1@24
  int v17; // r1@26
  unsigned __int64 v18; // r2@29
  char v19; // r0@29
  RakNet *result; // r0@39
  char v21; // [sp+Ch] [bp-E04h]@30
  void (*v22)(void); // [sp+14h] [bp-DFCh]@30
  char v23; // [sp+1Ch] [bp-DF4h]@30
  int v24; // [sp+20h] [bp-DF0h]@29
  int v25; // [sp+24h] [bp-DECh]@29
  char v26; // [sp+28h] [bp-DE8h]@29
  void (__cdecl *v27)(char *); // [sp+30h] [bp-DE0h]@32
  char v28; // [sp+38h] [bp-DD8h]@29
  void *v29; // [sp+3Ch] [bp-DD4h]@29
  int v30; // [sp+40h] [bp-DD0h]@29
  __int64 v31; // [sp+44h] [bp-DCCh]@26
  char v32; // [sp+4Ch] [bp-DC4h]@26
  void (__cdecl *v33)(char *); // [sp+54h] [bp-DBCh]@26
  __int64 v34; // [sp+60h] [bp-DB0h]@24
  char v35; // [sp+68h] [bp-DA8h]@24
  void (__cdecl *v36)(char *); // [sp+70h] [bp-DA0h]@24
  __int64 v37; // [sp+7Ch] [bp-D94h]@22
  char v38; // [sp+84h] [bp-D8Ch]@22
  void (__cdecl *v39)(char *); // [sp+8Ch] [bp-D84h]@22
  char v40; // [sp+98h] [bp-D78h]@5
  void (*v41)(void); // [sp+A0h] [bp-D70h]@5
  char v42; // [sp+A8h] [bp-D68h]@5
  int v43; // [sp+ACh] [bp-D64h]@4
  int v44; // [sp+B0h] [bp-D60h]@4
  char v45; // [sp+B4h] [bp-D5Ch]@4
  void (__cdecl *v46)(char *); // [sp+BCh] [bp-D54h]@35
  char v47; // [sp+C4h] [bp-D4Ch]@4
  void *v48; // [sp+C8h] [bp-D48h]@4
  int v49; // [sp+CCh] [bp-D44h]@4
  int v50; // [sp+D0h] [bp-D40h]@22
  int v51; // [sp+D4h] [bp-D3Ch]@22
  const char *v52; // [sp+D8h] [bp-D38h]@22
  int v53; // [sp+DCh] [bp-D34h]@22
  char v54; // [sp+E0h] [bp-D30h]@26
  int v55; // [sp+E4h] [bp-D2Ch]@26
  int v56; // [sp+4E4h] [bp-92Ch]@26
  char v57; // [sp+4E8h] [bp-928h]@24
  int v58; // [sp+4ECh] [bp-924h]@24
  int v59; // [sp+8ECh] [bp-524h]@24
  char v60; // [sp+8F0h] [bp-520h]@22
  int v61; // [sp+8F4h] [bp-51Ch]@22
  int v62; // [sp+CF4h] [bp-11Ch]@22
  char v63[256]; // [sp+CF8h] [bp-118h]@5
  RakNet *v64; // [sp+DF8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v64 = _stack_chk_guard;
  if ( !*((_BYTE *)this + 24) )
  {
    if ( &pthread_create )
    {
      v4 = j_pthread_mutex_lock_0((pthread_mutex_t *)((char *)this + 128));
      if ( v4 )
        sub_21E5E14(v4);
    }
    v48 = 0;
    v49 = 0;
    v43 = *((_DWORD *)v2 + 13);
    v44 = -1;
    j_Core::File::open((int)&v45, (int)&v48, (__int64 *)&v43, 33);
    v6 = v47;
    v47 |= 2u;
    if ( !(v6 & 1) )
      goto LABEL_44;
    LODWORD(v5) = v63;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v40, v48, v5, 0x100uLL);
    v7 = v42;
    v42 |= 2u;
    if ( v41 )
      v41();
    if ( !(v7 & 1) )
LABEL_44:
      j___aeabi_memclr8_0((int)v63, 256);
    v8 = *(_QWORD *)v3 + 16 * (*(_QWORD *)v3 >> 32);
    if ( !v63[v8] )
      v9 = 1;
      v63[v8] = 1;
      v10 = 0;
      do
      {
        v11 = (unsigned __int8)v63[v10];
        if ( v63[v10] )
          v11 = 1;
        v9 &= v11;
        if ( !v63[v10] )
          break;
      }
      while ( v10++ != 255 );
      if ( v9 == 1 )
        *((_BYTE *)v2 + 24) = 1;
        if ( j_RegionFile::open(*((RegionFile **)v2 + 14)) == 1 )
        {
          v13 = *((_DWORD *)v2 + 14);
          *((_DWORD *)v2 + 14) = 0;
          if ( v13 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 4))(v13);
        }
        v14 = *((_DWORD *)v2 + 2);
        if ( v14 )
          j_Level::upgradeStorageVersion(v14, 6);
        v15 = *(_DWORD *)(*((_DWORD *)v2 + 12) - 12);
        v50 = *((_DWORD *)v2 + 12);
        v51 = v15;
        v52 = "importedchunks.dat";
        v53 = -1;
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v60, (int)&v50, 2);
        LODWORD(v37) = &v61;
        HIDWORD(v37) = v62;
        j_Core::FileSystem::deleteFile((int)&v38, &v37);
        if ( v39 )
          v39(&v38);
        v16 = *(_DWORD *)(*((_DWORD *)v2 + 12) - 12);
        v51 = v16;
        v52 = "entities.dat";
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v57, (int)&v50, 2);
        LODWORD(v34) = &v58;
        HIDWORD(v34) = v59;
        j_Core::FileSystem::deleteFile((int)&v35, &v34);
        if ( v36 )
          v36(&v35);
        v17 = *(_DWORD *)(*((_DWORD *)v2 + 12) - 12);
        v51 = v17;
        v52 = "chunks.dat";
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v54, (int)&v50, 2);
        LODWORD(v31) = &v55;
        HIDWORD(v31) = v56;
        j_Core::FileSystem::deleteFile((int)&v32, &v31);
        if ( v33 )
          v33(&v32);
        (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v2 + 4) + 60))(*((_DWORD *)v2 + 4));
      else
        v29 = 0;
        v30 = 0;
        v24 = *((_DWORD *)v2 + 13);
        v25 = *(_DWORD *)(v24 - 12);
        j_Core::File::open((int)&v26, (int)&v29, (__int64 *)&v24, 46);
        v19 = v28;
        v28 |= 2u;
        if ( v19 & 1 )
          LODWORD(v18) = v63;
          j_Core::FileImpl::write((Core::FileImpl *)&v21, v29, v18, 256LL);
          v23 |= 2u;
          if ( v22 )
            v22();
        if ( v27 )
          v27(&v26);
        j_Core::File::~File((Core::File *)&v29);
    if ( v46 )
      v46(&v45);
    j_Core::File::~File((Core::File *)&v48);
      j_pthread_mutex_unlock_0((pthread_mutex_t *)((char *)v2 + 128));
  }
  result = (RakNet *)(_stack_chk_guard - v64);
  if ( _stack_chk_guard != v64 )
    j___stack_chk_fail_0((int)result);
  return result;
}
