

void __fastcall NetworkChunkSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  int v2; // r4@1
  char *v3; // r8@1
  int v4; // t1@1
  unsigned int v5; // r4@1
  unsigned int v6; // r5@1
  int v7; // r7@1
  int *v8; // r2@1
  int v9; // r10@2
  int v10; // r6@2
  bool v11; // zf@3
  int v12; // r9@6
  LevelChunk *v13; // r0@11
  LevelChunk *v14; // r0@12
  int v15; // [sp+4h] [bp-34h]@1
  LevelChunk **v16; // [sp+8h] [bp-30h]@1
  int v17; // [sp+Ch] [bp-2Ch]@1
  LevelChunk *v18; // [sp+10h] [bp-28h]@11

  v2 = a1;
  v16 = a2;
  v17 = a1;
  v3 = LevelChunk::getPosition(*a2);
  v4 = *(_DWORD *)(v2 + 60);
  v2 += 60;
  v15 = v2;
  v5 = *(_DWORD *)(v2 + 4);
  v6 = 522133279 * *(_QWORD *)v3 ^ (*(_QWORD *)v3 >> 32);
  v7 = v6 % v5;
  v8 = *(int **)(v4 + 4 * (v6 % v5));
  if ( v8 )
  {
    v9 = *v8;
    v10 = *(_DWORD *)(*v8 + 24);
    while ( 1 )
    {
      v11 = v10 == v6;
      if ( v10 == v6 )
        v11 = *(_QWORD *)(v9 + 8) == *(_QWORD *)v3;
      if ( v11 )
        break;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v12 + 24);
        v8 = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v12 + 24) % v5 == v7 )
          continue;
      }
      goto LABEL_11;
    }
    if ( v8 )
      std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>,std::allocator<std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        v15,
        v7,
        v8,
        *v8);
  }
LABEL_11:
  v13 = *v16;
  *v16 = 0;
  v18 = v13;
  ChunkSource::acquireDiscarded(v17, &v18);
  if ( v18 )
    v14 = LevelChunk::~LevelChunk(v18);
    LevelChunk::operator delete((void *)v14);
}


unsigned int __fastcall NetworkChunkSource::chunkFinalize(NetworkChunkSource *this, LevelChunk *a2, BlockSource *a3, const Vec3 *a4)
{
  LevelChunk *v4; // r6@1
  BlockSource *v5; // r7@1
  ChunkSource *v6; // r5@1
  const Vec3 *v7; // r8@1
  char *v8; // r4@3
  char *v9; // r0@3
  char *v10; // r1@4

  v4 = a2;
  v5 = a3;
  v6 = this;
  v7 = a4;
  if ( LevelChunk::tryChangeState((int)a2, 0, 8u) == 1 )
  {
    LevelChunk::setFinalized((int)v4, 2);
    ChunkSource::fireChunkLoaded(v6, v4);
  }
  else
    v8 = LevelChunk::getMin(v4);
    v9 = LevelChunk::getMax(v4);
    BlockSource::fireAreaChanged(v5, (const BlockPos *)v8, (const BlockPos *)v9);
  v10 = LevelChunk::getPosition(v4);
  return j_j_j__ZN18NetworkChunkSource24_checkForRelightingFixupERK8ChunkPosRK4Vec3(v6, (const ChunkPos *)v10, v7);
}


int __fastcall NetworkChunkSource::createNewChunk(int a1, int a2, __int64 *a3, int a4)
{
  unsigned int v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r8@2
  bool v9; // zf@3
  int v10; // r9@6
  bool v11; // zf@9
  __int64 *v12; // r4@12
  int v13; // r7@12
  int v14; // r11@12
  __int64 v15; // kr08_8@12
  int v16; // r9@12
  int *v17; // r2@12
  int v18; // r10@13
  int v19; // r6@13
  int v20; // r4@16
  int v21; // r6@20
  int v22; // r5@20
  __int64 v23; // r0@23
  int v24; // r4@23
  unsigned int v25; // r5@23
  unsigned int v26; // r11@23
  int v27; // r7@23
  unsigned int *v28; // r0@23
  unsigned int v29; // r9@24
  int v30; // r6@24
  bool v31; // zf@25
  unsigned int v32; // r4@28
  int result; // r0@31
  bool v34; // zf@32
  _QWORD *v35; // r0@36
  unsigned int *v36; // r0@38
  unsigned int v37; // r1@40
  int v38; // r0@43
  unsigned int *v39; // r2@44
  unsigned int v40; // r1@46
  int v41; // [sp+8h] [bp-50h]@1
  int v42; // [sp+Ch] [bp-4Ch]@13
  int v43; // [sp+10h] [bp-48h]@13
  int v44; // [sp+14h] [bp-44h]@1
  __int64 v45; // [sp+18h] [bp-40h]@1
  int v46; // [sp+18h] [bp-40h]@23
  __int64 *v47; // [sp+1Ch] [bp-3Ch]@23
  LevelChunk *v48; // [sp+20h] [bp-38h]@20
  int v49; // [sp+24h] [bp-34h]@12
  int v50; // [sp+28h] [bp-30h]@13
  int v51; // [sp+2Ch] [bp-2Ch]@20
  int v52; // [sp+30h] [bp-28h]@20

  v45 = *(_QWORD *)&a2;
  v44 = a1;
  v41 = a2 + 32;
  v4 = 522133279 * (unsigned __int64)*a3 ^ ((unsigned __int64)*a3 >> 32);
  v5 = v4 % *(_DWORD *)(a2 + 36);
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 32) + 4 * v5);
  if ( !v6 )
    goto LABEL_19;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == *a3;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 24) % *(_DWORD *)(a2 + 36) == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_19:
    if ( !a4 )
      result = 0;
      *(_DWORD *)v44 = 0;
      *(_DWORD *)(v44 + 4) = 0;
      return result;
    v12 = a3;
    v13 = a2;
    LevelChunk::createNew((int **)&v48, *(Dimension **)(a2 + 12), *a3, 0);
    std::__shared_ptr<LevelChunk,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<LevelChunk,LevelChunkPhase1Deleter>(
      (int)&v51,
      (int *)&v48);
    v21 = v51;
    v51 = 0;
    v22 = v52;
    if ( v48 )
      LevelChunkPhase1Deleter::operator()((int)&v48, v48);
    v42 = v21;
    v43 = v22;
    v48 = 0;
  else
      (int)&v49,
      (int *)(v6 + 16));
    v12 = (__int64 *)HIDWORD(v45);
    v13 = v45;
    v14 = v49;
    v49 = 0;
    v15 = *(_QWORD *)(v45 + 32);
    v16 = (522133279 * (unsigned int)*(_QWORD *)HIDWORD(v45) ^ (unsigned int)(*(_QWORD *)HIDWORD(v45) >> 32))
        % (unsigned int)(*(_QWORD *)(v45 + 32) >> 32);
    v17 = *(int **)(v15 + 4 * v16);
    if ( v17 )
      v18 = *v17;
      v43 = v50;
      v42 = v14;
      v19 = *(_DWORD *)(*v17 + 24);
      while ( v19 != (522133279 * (unsigned int)*(_QWORD *)HIDWORD(v45) ^ (unsigned int)(*(_QWORD *)HIDWORD(v45) >> 32))
           || *(_QWORD *)(v18 + 8) != *(_QWORD *)HIDWORD(v45) )
      {
        v20 = *(_DWORD *)v18;
        if ( !*(_DWORD *)v18 )
        {
          v12 = (__int64 *)HIDWORD(v45);
          goto LABEL_23;
        }
        v19 = *(_DWORD *)(v20 + 24);
        v17 = (int *)v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v20 + 24) % HIDWORD(v15) != v16 )
      }
      v12 = (__int64 *)HIDWORD(v45);
      if ( v17 )
        std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::unique_ptr<LevelChunk,LevelChunkPhase1Deleter>>,std::allocator<std::pair<ChunkPos const,std::unique_ptr<LevelChunk,LevelChunkPhase1Deleter>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
          v41,
          v16,
          v17,
          *v17);
    else
LABEL_23:
  v23 = *v12;
  v47 = v12;
  v24 = *(_DWORD *)(v13 + 60);
  v46 = v13 + 60;
  v25 = *(_DWORD *)(v13 + 64);
  v26 = 522133279 * v23 ^ HIDWORD(v23);
  v27 = v26 % *(_DWORD *)(v13 + 64);
  v28 = *(unsigned int **)(v24 + 4 * v27);
  if ( !v28 )
    goto LABEL_36;
  v29 = *v28;
  v30 = *(_DWORD *)(*v28 + 24);
    v31 = v30 == v26;
    if ( v30 == v26 )
      v31 = *(_QWORD *)(v29 + 8) == *v47;
    if ( v31 )
    v32 = *(_DWORD *)v29;
    if ( *(_DWORD *)v29 )
      v30 = *(_DWORD *)(v32 + 24);
      v28 = (unsigned int *)v29;
      v29 = *(_DWORD *)v29;
      if ( *(_DWORD *)(v32 + 24) % v25 == v27 )
  v34 = v28 == 0;
  if ( v28 )
    v25 = *v28;
    v34 = *v28 == 0;
  if ( v34 )
LABEL_36:
    v35 = operator new(0x20u);
    *(_DWORD *)v35 = 0;
    v35[1] = *v47;
    *((_DWORD *)v35 + 4) = 0;
    *((_DWORD *)v35 + 5) = 0;
    v25 = std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>,std::allocator<std::pair<ChunkPos const,std::weak_ptr<LevelChunk>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v46,
            v27,
            v26,
            (int)v35);
  *(_DWORD *)(v25 + 16) = v42;
  if ( v43 )
    v36 = (unsigned int *)(v43 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 + 1, v36) );
      ++*v36;
  v38 = *(_DWORD *)(v25 + 20);
  if ( v38 )
    v39 = (unsigned int *)(v38 + 8);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      (*(void (**)(void))(*(_DWORD *)v38 + 12))();
  result = v44;
  *(_DWORD *)(v25 + 20) = v43;
  *(_DWORD *)v44 = v42;
  *(_DWORD *)(v44 + 4) = v43;
  return result;
}


void __fastcall NetworkChunkSource::~NetworkChunkSource(NetworkChunkSource *this)
{
  ChunkSource *v1; // r0@1

  v1 = NetworkChunkSource::~NetworkChunkSource(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall NetworkChunkSource::NetworkChunkSource(int a1, Dimension *a2)
{
  int v2; // r4@1
  double v3; // r0@1
  double v4; // r0@1
  int v5; // r7@3
  void *v6; // r6@3
  unsigned int v7; // r0@4
  int v8; // r7@6
  void *v9; // r6@6
  int result; // r0@7

  v2 = a1;
  ChunkSource::ChunkSource(a1, a2, 16);
  AppPlatformListener::AppPlatformListener((_QWORD *)(v2 + 24));
  *(_DWORD *)v2 = &off_27183B4;
  *(_DWORD *)(v2 + 24) = &off_271840C;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  LODWORD(v3) = v2 + 48;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v3)));
  *(_DWORD *)(v2 + 36) = LODWORD(v4);
  if ( LODWORD(v4) == 1 )
  {
    *(_DWORD *)(v2 + 56) = 0;
    v6 = (void *)(v2 + 56);
  }
  else
    if ( LODWORD(v4) >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * LODWORD(v4);
    v6 = operator new(4 * LODWORD(v4));
    _aeabi_memclr4(v6, v5);
  *(_DWORD *)(v2 + 32) = v6;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 1065353216;
  LODWORD(v4) = v2 + 76;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = sub_21E6254(v4);
  *(_DWORD *)(v2 + 64) = v7;
  if ( v7 == 1 )
    *(_DWORD *)(v2 + 84) = 0;
    v9 = (void *)(v2 + 84);
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  result = v2;
  *(_DWORD *)(v2 + 60) = v9;
  return result;
}


unsigned int __fastcall NetworkChunkSource::_checkForRelightingFixup(NetworkChunkSource *this, const ChunkPos *a2, const Vec3 *a3)
{
  const ChunkPos *v3; // r8@1
  float v4; // r6@1
  int v5; // r7@1
  LevelChunk **v13; // r9@1
  LevelChunk **v14; // r11@1
  signed int v15; // r4@1
  int v16; // r2@2
  __int64 v17; // r0@3
  unsigned int result; // r0@3
  int v19; // r6@6
  __int64 v20; // r8@6
  ChunkSource *v21; // r10@6
  signed int v22; // r4@7
  signed int v23; // r7@10
  int v24; // r5@15
  unsigned int *v25; // r1@16
  int v26; // r11@22
  ChunkSource *v27; // r6@22
  unsigned int *v28; // r10@22
  ChunkViewSource *v29; // r6@34
  char *v30; // r0@34
  __int64 v31; // r1@34
  int v32; // r0@34
  char *v33; // r0@34
  __int64 v34; // r1@34
  int v35; // r0@34
  LevelChunk *v36; // r6@34
  int v37; // r0@34
  __int64 v38; // kr08_8@34
  unsigned int *v39; // r0@35
  unsigned int v40; // r1@37
  void *v41; // r0@40
  __int64 v42; // kr10_8@40
  unsigned int *v43; // r0@41
  unsigned int v44; // r1@43
  _DWORD *v45; // r0@46
  int v46; // r10@50
  unsigned int *v47; // r1@51
  unsigned int *v48; // r5@57
  int v49; // r6@64
  unsigned int *v50; // r1@65
  unsigned int *v51; // r5@71
  signed int v52; // [sp+Ch] [bp-C4h]@6
  const ChunkPos *v53; // [sp+10h] [bp-C0h]@1
  int v54; // [sp+14h] [bp-BCh]@34
  int v55; // [sp+18h] [bp-B8h]@3
  ChunkSource *v56; // [sp+20h] [bp-B0h]@1
  _DWORD *v57; // [sp+24h] [bp-ACh]@46
  int (*v58)(void); // [sp+2Ch] [bp-A4h]@46
  int (__fastcall *v59)(int); // [sp+30h] [bp-A0h]@46
  void *v60; // [sp+34h] [bp-9Ch]@40
  int (*v61)(void); // [sp+3Ch] [bp-94h]@40
  signed int (__fastcall *v62)(_QWORD **); // [sp+40h] [bp-90h]@40
  unsigned int v63; // [sp+44h] [bp-8Ch]@34
  unsigned int v64; // [sp+48h] [bp-88h]@34
  int v65; // [sp+4Ch] [bp-84h]@34
  int v66; // [sp+50h] [bp-80h]@34
  int v67; // [sp+54h] [bp-7Ch]@34
  int v68; // [sp+58h] [bp-78h]@34
  int v69; // [sp+5Ch] [bp-74h]@34
  int v70; // [sp+60h] [bp-70h]@34
  int v71; // [sp+64h] [bp-6Ch]@34
  ChunkViewSource *v72; // [sp+68h] [bp-68h]@34
  int v73; // [sp+6Ch] [bp-64h]@34
  LevelChunk *v74; // [sp+70h] [bp-60h]@1
  int v75; // [sp+74h] [bp-5Ch]@15
  int v76; // [sp+78h] [bp-58h]@9
  int v77; // [sp+7Ch] [bp-54h]@9
  LevelChunk *v78; // [sp+80h] [bp-50h]@1
  int v79; // [sp+84h] [bp-4Ch]@64
  int v80; // [sp+88h] [bp-48h]@3
  int v81; // [sp+8Ch] [bp-44h]@3
  float v82; // [sp+90h] [bp-40h]@34
  char v83; // [sp+9Ch] [bp-34h]@34

  v3 = a2;
  v56 = this;
  v53 = a2;
  v4 = *((float *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  _R0 = roundf(*(_DWORD *)a3);
  __asm { VMOV            S16, R0 }
  _R0 = floorf(v4);
  __asm
  {
    VCVTR.S32.F32   S0, S16
    VMOV            S16, R0
    VSTR            S0, [SP,#0xD0+var_40]
  }
  _R0 = roundf(v5);
  __asm { VCVTR.S32.F32   S0, S16 }
  v13 = &v78;
  __asm { VMOV            S2, R0 }
  v14 = &v74;
  v15 = -1;
    VSTR            S0, [SP,#0xD0+var_3C]
    VCVTR.S32.F32   S0, S2
    VSTR            S0, [SP,#0xD0+var_38]
  do
    v16 = -1;
    do
    {
      v17 = *(_QWORD *)v3;
      v55 = v16;
      v80 = *(_QWORD *)v3 + v15;
      v81 = HIDWORD(v17) + v16;
      ChunkSource::getAvailableChunk((ChunkSource *)v13, v56);
      result = (unsigned int)v78;
      if ( v78 )
      {
        LOBYTE(result) = *LevelChunk::getState(v78);
        __dmb();
        result = (unsigned __int8)result;
        if ( (unsigned __int8)result == 8 )
        {
          result = *((_BYTE *)v78 + 40);
          if ( !*((_BYTE *)v78 + 40) )
          {
            v19 = 0;
            HIDWORD(v20) = -1;
            v21 = (ChunkSource *)v14;
            v52 = v15;
            do
            {
              v22 = 0;
              LODWORD(v20) = -1;
              do
              {
                result = v20 | HIDWORD(v20);
                if ( v20 )
                {
                  v76 = v80 + HIDWORD(v20);
                  v77 = v81 + v20;
                  ChunkSource::getAvailableChunk(v21, v56);
                  result = (unsigned int)v74;
                  if ( v74 )
                  {
                    v23 = 0;
                    _ZF = *LevelChunk::getState(v74) == 8;
                    result = 0;
                    if ( _ZF )
                    {
                      ++v19;
                      v23 = 1;
                    }
                    else
                      result = 1;
                    v22 |= result;
                    __dmb();
                  }
                  else
                    v22 = 1;
                  v24 = v75;
                  if ( v75 )
                    v25 = (unsigned int *)(v75 + 4);
                    if ( &pthread_create )
                      __dmb();
                      do
                        result = __ldrex(v25);
                      while ( __strex(result - 1, v25) );
                      result = (*v25)--;
                    if ( result == 1 )
                      v26 = v19;
                      v27 = v21;
                      v28 = (unsigned int *)(v24 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          result = __ldrex(v28);
                        while ( __strex(result - 1, v28) );
                      }
                      else
                        result = (*v28)--;
                      v21 = v27;
                      v19 = v26;
                      if ( result == 1 )
                        result = (*(int (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
                  if ( v23 != 1 )
                    break;
                }
                LODWORD(v20) = v20 + 1;
              }
              while ( (signed int)v20 < 2 );
              if ( ++HIDWORD(v20) > 1 )
                break;
              result = v22 ^ 1;
            }
            while ( (v22 ^ 1) & 1 );
            v3 = v53;
            v15 = v52;
            v14 = (LevelChunk **)v21;
            v13 = &v78;
            if ( v19 == 8 )
              *((_BYTE *)v78 + 40) = 1;
              v71 = 0;
              std::__shared_ptr<ChunkViewSource,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChunkViewSource>,NetworkChunkSource &,ChunkSource::LoadMode>(
                (int)&v72,
                (int)&v83,
                v56,
                &v71);
              v29 = v72;
              v30 = LevelChunk::getMin(v78);
              v31 = *(_QWORD *)v30;
              v32 = *((_DWORD *)v30 + 2);
              v68 = v31 - 16;
              v69 = HIDWORD(v31) - 16;
              v70 = v32 - 16;
              v33 = LevelChunk::getMax(v78);
              v34 = *(_QWORD *)v33;
              v35 = *((_DWORD *)v33 + 2);
              v65 = v34 + 16;
              v66 = HIDWORD(v34) + 16;
              v67 = v35 + 16;
              ChunkViewSource::move(v29, (const BlockPos *)&v68, (const BlockPos *)&v65);
              v64 = 128;
              v63 = 32;
              ChunkSource::_getChunkPriority((int)v56, v78, (int)&v82, (int)&v64, (int)&v63);
              v36 = v78;
              v37 = ChunkSource::getDimension(v56);
              v38 = *(_QWORD *)&v72;
              v54 = *(_DWORD *)(v37 + 188);
              if ( v73 )
                v39 = (unsigned int *)(v73 + 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v40 = __ldrex(v39);
                  while ( __strex(v40 + 1, v39) );
                else
                  ++*v39;
              v61 = 0;
              v41 = operator new(0x10u);
              *(_DWORD *)v41 = v36;
              *(_QWORD *)((char *)v41 + 4) = v38;
              *((_DWORD *)v41 + 3) = v56;
              v60 = v41;
              v62 = sub_18F8858;
              v61 = (int (*)(void))sub_18F8864;
              v42 = *(_QWORD *)&v72;
                v43 = (unsigned int *)(v73 + 4);
                    v44 = __ldrex(v43);
                  while ( __strex(v44 + 1, v43) );
                  ++*v43;
              v58 = 0;
              v45 = operator new(0x10u);
              *v45 = v56;
              v45[1] = v36;
              *((_QWORD *)v45 + 1) = v42;
              v57 = v45;
              v59 = sub_18F8950;
              v58 = (int (*)(void))sub_18F89B4;
              result = (unsigned int)TaskGroup::queue(v54, (int)&v60, (int)&v57, v64, v63);
              if ( v58 )
                result = v58();
              if ( v61 )
                result = v61();
              v46 = v73;
                v47 = (unsigned int *)(v73 + 4);
                    result = __ldrex(v47);
                  while ( __strex(result - 1, v47) );
                  result = (*v47)--;
                if ( result == 1 )
                  v48 = (unsigned int *)(v46 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
                  if ( &pthread_create )
                    do
                      result = __ldrex(v48);
                    while ( __strex(result - 1, v48) );
                    result = (*v48)--;
                  if ( result == 1 )
                    result = (*(int (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
          }
        }
      }
      v49 = v79;
      if ( v79 )
        v50 = (unsigned int *)(v79 + 4);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v50);
          while ( __strex(result - 1, v50) );
        else
          result = (*v50)--;
        if ( result == 1 )
          v51 = (unsigned int *)(v49 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
          if ( &pthread_create )
            __dmb();
              result = __ldrex(v51);
            while ( __strex(result - 1, v51) );
          else
            result = (*v51)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
      v16 = v55 + 1;
    }
    while ( v55 + 1 < 2 );
    ++v15;
  while ( v15 < 2 );
  return result;
}


ChunkSource *__fastcall NetworkChunkSource::~NetworkChunkSource(NetworkChunkSource *this)
{
  NetworkChunkSource *v1; // r9@1
  int v2; // r7@1
  void *v3; // r6@2
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  char *v7; // r0@11
  int v8; // r6@14
  LevelChunk *v9; // r1@15
  int v10; // r5@15
  char *v11; // r0@18

  v1 = this;
  *(_DWORD *)this = &off_27183B4;
  *((_DWORD *)this + 6) = &off_271840C;
  v2 = *((_DWORD *)this + 17);
  while ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(_DWORD *)(v2 + 20);
    v2 = *(_DWORD *)v2;
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (**)(void))(*(_DWORD *)v4 + 12))();
    }
    operator delete(v3);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v7 = (char *)*((_DWORD *)v1 + 15);
  if ( v7 && (char *)v1 + 84 != v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 10);
  if ( v8 )
    do
      v9 = *(LevelChunk **)(v8 + 16);
      v10 = *(_DWORD *)v8;
      if ( v9 )
        LevelChunkPhase1Deleter::operator()(v8 + 16, v9);
      operator delete((void *)v8);
      v8 = v10;
    while ( v10 );
  _aeabi_memclr4(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  v11 = (char *)*((_DWORD *)v1 + 8);
  if ( v11 && (char *)v1 + 56 != v11 )
    operator delete(v11);
  AppPlatformListener::~AppPlatformListener((NetworkChunkSource *)((char *)v1 + 24));
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


int __fastcall NetworkChunkSource::getIncomingChunk(NetworkChunkSource *this, const ChunkPos *a2)
{
  NetworkChunkSource *v2; // r5@1
  const ChunkPos *v3; // r8@1
  __int64 v4; // r6@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r4@8
  unsigned int v8; // r0@10
  int v9; // r6@16
  unsigned int v10; // r4@16
  unsigned int v11; // r7@16
  int v12; // r5@16
  unsigned int *v13; // r0@16
  unsigned int v14; // r10@17
  unsigned int v15; // r6@17
  unsigned int v16; // r11@17
  int v17; // r8@17
  bool v18; // zf@18
  unsigned int v19; // r9@21
  bool v20; // zf@24
  _QWORD *v21; // r0@28
  int v22; // r0@28
  LevelChunk *v23; // r1@29
  _DWORD *v24; // r4@29
  LevelChunk *v25; // t1@29
  int v27; // [sp+4h] [bp-3Ch]@16
  NetworkChunkSource *v28; // [sp+8h] [bp-38h]@16
  unsigned __int64 *v29; // [sp+Ch] [bp-34h]@16
  LevelChunk *v30; // [sp+10h] [bp-30h]@29
  char v31; // [sp+14h] [bp-2Ch]@1
  int v32; // [sp+18h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  (*(void (__fastcall **)(char *, NetworkChunkSource *, const ChunkPos *))(*(_DWORD *)this + 16))(&v31, this, a2);
  v4 = *(_QWORD *)&v31;
  if ( v32 )
  {
    v5 = (unsigned int *)(v32 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  }
  if ( !(_DWORD)v4 )
    v29 = (unsigned __int64 *)v3;
    v28 = v2;
    v9 = *((_DWORD *)v2 + 8);
    v27 = (int)v2 + 32;
    v10 = *((_DWORD *)v2 + 9);
    v11 = 522133279 * *(_QWORD *)v3 ^ (*(_QWORD *)v3 >> 32);
    v12 = v11 % *((_DWORD *)v2 + 9);
    v13 = *(unsigned int **)(v9 + 4 * v12);
    if ( !v13 )
      goto LABEL_28;
    v14 = *v13;
    v16 = *(_QWORD *)v3 >> 32;
    v15 = *(_QWORD *)v3;
    v17 = *(_DWORD *)(*v13 + 24);
    while ( 1 )
      v18 = v17 == v11;
      if ( v17 == v11 )
        v18 = *(_QWORD *)(v14 + 8) == __PAIR__(v16, v15);
      if ( v18 )
        break;
      v19 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
        v17 = *(_DWORD *)(v19 + 24);
        v13 = (unsigned int *)v14;
        v14 = *(_DWORD *)v14;
        if ( *(_DWORD *)(v19 + 24) % v10 == v12 )
          continue;
    v20 = v13 == 0;
    if ( v13 )
      v10 = *v13;
      v20 = *v13 == 0;
    if ( v20 )
LABEL_28:
      v21 = operator new(0x20u);
      *(_DWORD *)v21 = 0;
      v21[1] = *v29;
      *((_DWORD *)v21 + 4) = 0;
      v22 = std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::unique_ptr<LevelChunk,LevelChunkPhase1Deleter>>,std::allocator<std::pair<ChunkPos const,std::unique_ptr<LevelChunk,LevelChunkPhase1Deleter>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v27,
              v12,
              v11,
              (int)v21);
      v16 = *v29 >> 32;
      v15 = *v29;
      v10 = v22;
    LevelChunk::createNew((int **)&v30, *((Dimension **)v28 + 3), __PAIR__(v16, (unsigned int)v4), 0);
    LODWORD(v4) = v30;
    v30 = 0;
    v25 = *(LevelChunk **)(v10 + 16);
    v24 = (_DWORD *)(v10 + 16);
    v23 = v25;
    *v24 = v4;
    if ( v25 )
      LevelChunkPhase1Deleter::operator()((int)v24, v23);
      LODWORD(v4) = *v24;
    if ( v30 )
      LevelChunkPhase1Deleter::operator()((int)&v30, v30);
  return v4;
}


int __fastcall NetworkChunkSource::getExistingChunk(NetworkChunkSource *this, const ChunkPos *a2, unsigned __int64 *a3, int a4, int a5)
{
  __int64 v5; // kr00_8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r7@1
  int v8; // r0@1
  int v9; // r8@2
  unsigned int v10; // r9@2 OVERLAPPED
  unsigned int v11; // r10@2 OVERLAPPED
  int v12; // r4@2
  bool v13; // zf@3
  bool v14; // zf@9
  int v15; // r1@12
  unsigned int v16; // r2@13
  unsigned int *v17; // r1@13
  int result; // r0@14
  unsigned int v19; // r3@17
  unsigned int v20; // r7@18
  int v21; // r1@19
  int v22; // r2@20
  signed int v23; // r1@20
  int v24; // r0@26
  NetworkChunkSource *v25; // [sp+0h] [bp-28h]@1

  v25 = this;
  v5 = *(_QWORD *)((char *)a2 + 60);
  v6 = 522133279 * *a3 ^ (*a3 >> 32);
  v7 = v6 % (unsigned int)(*(_QWORD *)((char *)a2 + 60) >> 32);
  v8 = *(_DWORD *)(v5 + 4 * v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    *(_QWORD *)&v10 = *a3;
    v12 = *(_DWORD *)(*(_DWORD *)v8 + 24);
    while ( 1 )
    {
      v13 = v12 == v6;
      if ( v12 == v6 )
        v13 = *(_QWORD *)(v9 + 8) == __PAIR__(v11, v10);
      if ( v13 )
        break;
      if ( *(_DWORD *)v9 )
      {
        v12 = *(_DWORD *)(v5 + 24);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v5 + 24) % HIDWORD(v5) == v7 )
          continue;
      }
      goto LABEL_14;
    }
    v14 = v8 == 0;
    if ( v8 )
      v8 = *(_DWORD *)v8;
      v14 = v8 == 0;
    if ( !v14 )
      v15 = *(_DWORD *)(v8 + 20);
      *((_DWORD *)v25 + 1) = v15;
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 4);
        v17 = (unsigned int *)(v15 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v16 )
            {
              *((_DWORD *)v25 + 1) = 0;
              v23 = 1;
              goto LABEL_26;
            }
            __dmb();
            v19 = __ldrex(v17);
            if ( v19 == v16 )
              break;
            __clrex();
            v16 = v19;
          }
          v20 = __strex(v16 + 1, v17);
          v16 = v19;
        }
        while ( v20 );
        __dmb();
        v21 = *((_DWORD *)v25 + 1);
        if ( v21 )
          v22 = *(_DWORD *)(v21 + 4);
          v23 = 0;
          if ( !v22 )
            v23 = 1;
        else
          v23 = 1;
      else
        v23 = 1;
LABEL_26:
      v24 = *(_DWORD *)(v8 + 16);
      if ( v23 )
        v24 = 0;
      *(_DWORD *)v25 = v24;
      JUMPOUT(__CS__, a5);
  }
LABEL_14:
  result = 0;
  *(_DWORD *)v25 = 0;
  *((_DWORD *)v25 + 1) = 0;
  return result;
}


void __fastcall NetworkChunkSource::~NetworkChunkSource(NetworkChunkSource *this)
{
  NetworkChunkSource::~NetworkChunkSource(this);
}


int __fastcall NetworkChunkSource::shutdown(NetworkChunkSource *this)
{
  NetworkChunkSource *v1; // r4@1
  int v2; // r5@1
  LevelChunk *v3; // r1@2
  int v4; // r6@2

  v1 = this;
  v2 = *((_DWORD *)this + 10);
  if ( v2 )
  {
    do
    {
      v3 = *(LevelChunk **)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        LevelChunkPhase1Deleter::operator()(v2 + 16, v3);
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  return j_j_j__ZN11ChunkSource8shutdownEv(v1);
}


void __fastcall NetworkChunkSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  NetworkChunkSource::acquireDiscarded(a1, a2);
}


char *__fastcall NetworkChunkSource::getStorage(NetworkChunkSource *this)
{
  return (char *)this + 60;
}
