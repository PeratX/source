

void __fastcall StructureFeature::~StructureFeature(StructureFeature *this)
{
  StructureFeature *v1; // r0@1

  v1 = StructureFeature::~StructureFeature(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall StructureFeature::createBlueprints(StructureFeature *this, Dimension *a2, const ChunkPos *a3)
{
  StructureFeature *v3; // r9@1
  unsigned __int8 *v4; // r3@1
  unsigned int v5; // r1@2
  char *v6; // r8@4
  int v7; // r0@4
  int v8; // r1@5
  int v9; // r2@6
  __int64 v10; // kr00_8@8
  int v11; // r10@8
  int v12; // r11@8
  int v13; // r4@9
  char *v14; // r5@10
  int v15; // r8@10
  StructureFeature *v16; // r7@10
  int v17; // r9@10
  int v18; // r6@19
  int v19; // r7@21
  int v20; // r4@21
  int v21; // r5@24
  bool v22; // zf@27
  _QWORD *v23; // r0@31
  char *v24; // r2@32
  char *v25; // r5@34
  int v26; // r6@34
  unsigned int v27; // r1@34
  unsigned int v28; // r0@36
  unsigned int v29; // r4@36
  int v30; // r0@43
  int v31; // r0@44
  char *v32; // r7@44
  unsigned int v33; // r1@44
  int v34; // r3@45
  int v35; // r2@45
  unsigned int v36; // r0@46
  int v37; // r7@54
  StructureFeature *v38; // r10@55
  Level *v39; // r0@55
  char *v40; // r0@55
  const ChunkPos *v41; // r9@56
  const ChunkPos *v42; // r8@57
  __int64 v43; // r0@57
  __int64 v44; // r2@57
  signed int v45; // r2@57
  unsigned int v46; // r0@57
  int v47; // r1@57
  int v48; // r0@58
  int *v49; // r7@58
  int v50; // r3@58
  unsigned __int8 *v51; // [sp+0h] [bp-A20h]@4
  Dimension *v52; // [sp+4h] [bp-A1Ch]@1
  int v53; // [sp+8h] [bp-A18h]@5
  int v54; // [sp+Ch] [bp-A14h]@5
  int v55; // [sp+10h] [bp-A10h]@7
  const ChunkPos *v56; // [sp+14h] [bp-A0Ch]@1
  char *v57; // [sp+18h] [bp-A08h]@4
  __int64 v58; // [sp+1Ch] [bp-A04h]@4
  char *v59; // [sp+20h] [bp-A00h]@55
  int v60; // [sp+24h] [bp-9FCh]@8
  int v61; // [sp+24h] [bp-9FCh]@55
  unsigned int v62; // [sp+28h] [bp-9F8h]@57
  unsigned int v63; // [sp+2Ch] [bp-9F4h]@57
  int v64; // [sp+9ECh] [bp-34h]@57
  char v65; // [sp+9F0h] [bp-30h]@57
  int v66; // [sp+9F4h] [bp-2Ch]@57
  int v67; // [sp+9F8h] [bp-28h]@59

  v3 = this;
  v4 = (unsigned __int8 *)this + 76;
  v56 = a3;
  v52 = a2;
  do
  {
    do
      v5 = __ldrex(v4);
    while ( __strex(1u, v4) );
    __dmb();
  }
  while ( v5 );
  v6 = 0;
  v7 = *((_DWORD *)this + 20);
  v51 = v4;
  LODWORD(v58) = *(_DWORD *)a3 - v7;
  v57 = 0;
  if ( (signed int)v58 <= *(_DWORD *)a3 + v7 )
    v53 = (int)v3 + 48;
    v54 = 0;
    v8 = *((_DWORD *)a3 + 1);
    v6 = 0;
    v57 = 0;
    {
      v9 = v8 - v7;
      if ( v8 - v7 <= v7 + v8 )
      {
        v55 = 522133279 * v58;
        do
        {
          HIDWORD(v58) = v9;
          v10 = *((_QWORD *)v3 + 6);
          v60 = v55 ^ v9;
          v11 = (v55 ^ (unsigned int)v9) % (unsigned int)(*((_QWORD *)v3 + 6) >> 32);
          v12 = *(_DWORD *)(v10 + 4 * v11);
          if ( !v12 )
            goto LABEL_31;
          v13 = *(_DWORD *)v12;
          if ( *(_DWORD *)v12 )
          {
            v14 = v6;
            v15 = *(_DWORD *)(v13 + 16);
            v16 = v3;
            v17 = 0;
            do
            {
              if ( v15 != v60 || *(_QWORD *)(v13 + 8) != v58 )
              {
                if ( v17 )
                  goto LABEL_19;
                v17 = 0;
              }
              else
                ++v17;
              v13 = *(_DWORD *)v13;
              if ( !v13 )
                break;
              v15 = *(_DWORD *)(v10 + 16);
            }
            while ( *(_DWORD *)(v10 + 16) % HIDWORD(v10) == v11 );
            if ( v17 )
LABEL_19:
              v6 = v14;
              v3 = v16;
              v18 = v9;
              goto LABEL_51;
            v6 = v14;
            v3 = v16;
            if ( !v12 )
              goto LABEL_31;
          }
          v19 = *(_DWORD *)v12;
          v20 = *(_DWORD *)(*(_DWORD *)v12 + 16);
          while ( v20 != v60 || *(_QWORD *)(v19 + 8) != v58 )
            v21 = *(_DWORD *)v19;
            if ( *(_DWORD *)v19 )
              v20 = *(_DWORD *)(v21 + 16);
              v12 = v19;
              v19 = *(_DWORD *)v19;
              if ( *(_DWORD *)(v21 + 16) % HIDWORD(v10) == v11 )
                continue;
          v22 = v12 == 0;
          if ( v12 )
            v22 = *(_DWORD *)v12 == 0;
          if ( v22 )
LABEL_31:
            v23 = j_operator new(0x18u);
            *(_DWORD *)v23 = 0;
            v23[1] = v58;
            j_std::_Hashtable<ChunkPos,ChunkPos,std::allocator<ChunkPos>,std::__detail::_Identity,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
              v53,
              v11,
              v60,
              (int)v23);
          v24 = (char *)v54;
          if ( v57 == (char *)v54 )
            v25 = 0;
            v26 = (v57 - v6) >> 3;
            v27 = (v57 - v6) >> 3;
            if ( !v26 )
              v27 = 1;
            v28 = v27 + ((v57 - v6) >> 3);
            v29 = v28;
            if ( 0 != v28 >> 29 )
              v29 = 0x1FFFFFFF;
            if ( v28 < v27 )
            if ( v29 )
              if ( v29 >= 0x20000000 )
                sub_21E57F4();
              v25 = (char *)j_operator new(8 * v29);
              v24 = (char *)v54;
            *(_DWORD *)&v25[8 * v26] = v58;
            v30 = (int)&v25[8 * v26];
            v18 = HIDWORD(v58);
            *(_DWORD *)(v30 + 4) = HIDWORD(v58);
            if ( v6 == v24 )
              v6 = v24;
              v36 = (unsigned int)v25;
            else
              v31 = v24 - v6;
              v32 = v24;
              v33 = 0;
              do
                v34 = *(_DWORD *)&v6[v33 + 4];
                *(_DWORD *)&v25[v33] = *(_DWORD *)&v6[v33];
                v35 = (int)&v25[v33];
                v33 += 8;
                *(_DWORD *)(v35 + 4) = v34;
              while ( v31 != v33 );
              v36 = (unsigned int)&v25[((v32 - 8 - v6) & 0xFFFFFFF8) + 8];
            v57 = (char *)(v36 + 8);
            if ( v6 )
              j_operator delete(v6);
            v54 = (int)&v25[8 * v29];
            v6 = v25;
          else
            *(_QWORD *)v57 = v58;
            v57 += 8;
LABEL_51:
          v9 = v18 + 1;
          v8 = *((_DWORD *)v56 + 1);
          v7 = *((_DWORD *)v3 + 20);
        }
        while ( v18 < v7 + v8 );
      }
      v37 = v58;
      LODWORD(v58) = v58 + 1;
    }
    while ( v37 < *(_DWORD *)v56 + v7 );
  __dmb();
  v38 = v3;
  *v51 = 0;
  v39 = (Level *)Dimension::getLevel(v52);
  v61 = j_Level::getSeed(v39);
  v40 = v57;
  v59 = v6;
  if ( v6 != v57 )
    v41 = (const ChunkPos *)v6;
      v42 = (const ChunkPos *)v40;
      v43 = *(_QWORD *)v41;
      v44 = *(_QWORD *)((char *)v38 + 84);
      LODWORD(v43) = *(_QWORD *)v41 * v44;
      v45 = 1;
      v46 = (v43 + HIDWORD(v44) * HIDWORD(v43)) ^ v61;
      v62 = v46;
      v64 = 625;
      v47 = 0;
      v65 = 0;
      v66 = 0;
      v63 = v46;
      do
        v48 = v46 ^ (v46 >> 30);
        v49 = (int *)(&v62 + v47);
        v50 = v47++ + 1812433253 * v48;
        v46 = v45++ + 1812433253 * v48;
        v49[2] = v50 + 1;
      while ( v47 != 397 );
      v64 = 624;
      v67 = 398;
      StructureFeature::addFeature((pthread_mutex_t *)v38, v52, (Random *)&v62, v41);
      v41 = (const ChunkPos *)((char *)v41 + 8);
      v40 = (char *)v42;
    while ( v41 != v42 );
  if ( v59 )
    j_operator delete(v59);
}


int __fastcall StructureFeature::isInsideBoundingFeature(StructureFeature *this, int a2, int a3, int a4)
{
  StructureFeature *v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  int i; // r6@1
  int v8; // r0@5
  signed int v9; // r4@7
  int v11; // r0@14
  bool v12; // zf@14
  bool v13; // nf@14
  unsigned __int8 v14; // vf@14
  pthread_mutex_t *mutex; // [sp+0h] [bp-18h]@1
  char v16; // [sp+4h] [bp-14h]@9

  v4 = this;
  v5 = a2;
  v6 = a4;
  SharedLock::SharedLock((int)&mutex, (pthread_mutex_t *)((char *)this + 32));
  for ( i = *((_DWORD *)v4 + 3); ; i = *(_DWORD *)i )
  {
    if ( !i )
    {
      v9 = 0;
      goto LABEL_9;
    }
    if ( (*(int (**)(void))(**(_DWORD **)(i + 16) + 12))() == 1 )
      break;
  }
  v8 = *(_DWORD *)(i + 16);
  if ( *(_DWORD *)(v8 + 16) >= v5 && *(_DWORD *)(v8 + 4) <= v5 )
    v5 = 0;
    if ( *(_DWORD *)(v8 + 24) >= v6 )
      v11 = *(_DWORD *)(v8 + 12);
      v14 = __OFSUB__(v11, v6);
      v12 = v11 == v6;
      v13 = v11 - v6 < 0;
      v9 = 1;
      if ( (unsigned __int8)(v13 ^ v14) | v12 )
        v5 = 1;
    else
  else
    v9 = 1;
LABEL_9:
  if ( v16 )
    std::shared_timed_mutex::unlock_shared(mutex);
  return v9 & v5;
}


int __fastcall StructureFeature::StructureFeature(double a1)
{
  unsigned int v1; // r7@1
  int v2; // r10@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  double v6; // r0@4
  unsigned int v7; // r0@4
  int v8; // r6@6
  void *v9; // r5@6
  int v10; // r0@7
  signed int v11; // r1@7
  int v12; // r7@8
  int *v13; // r4@8
  int v14; // r5@8
  unsigned int v16; // [sp+4h] [bp-9F4h]@7
  unsigned int v17; // [sp+8h] [bp-9F0h]@7
  int v18; // [sp+9C8h] [bp-30h]@7
  char v19; // [sp+9CCh] [bp-2Ch]@7
  int v20; // [sp+9D0h] [bp-28h]@7
  int v21; // [sp+9D4h] [bp-24h]@9

  v1 = HIDWORD(a1);
  v2 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_27193B8;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v3 = sub_21E6254(a1);
  *(_DWORD *)(v2 + 8) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v5 = (void *)(v2 + 28);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = j_operator new(4 * v3);
    j___aeabi_memclr4((int)v5, v4);
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 32) = 0;
  sub_21E03A4((_DWORD *)(v2 + 36));
  sub_21E03A4((_DWORD *)(v2 + 40));
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 1065353216;
  LODWORD(v6) = v2 + 64;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = sub_21E6254(v6);
  *(_DWORD *)(v2 + 52) = v7;
  if ( v7 == 1 )
    *(_DWORD *)(v2 + 72) = 0;
    v9 = (void *)(v2 + 72);
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = j_operator new(4 * v7);
    j___aeabi_memclr4((int)v9, v8);
  *(_DWORD *)(v2 + 48) = v9;
  v10 = 0;
  __dmb();
  *(_BYTE *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 8;
  v16 = v1;
  v18 = 625;
  v11 = 1;
  v19 = 0;
  v20 = 0;
  v17 = v1;
  do
    v12 = v1 ^ (v1 >> 30);
    v13 = (int *)(&v16 + v10);
    v14 = v10++ + 1812433253 * v12;
    v1 = v11++ + 1812433253 * v12;
    v13[2] = v14 + 1;
  while ( v10 != 397 );
  v18 = 624;
  v21 = 398;
  *(_DWORD *)(v2 + 84) = (j_Random::_genRandInt32((Random *)&v16) >> 1) | 1;
  *(_DWORD *)(v2 + 88) = (j_Random::_genRandInt32((Random *)&v16) >> 1) | 1;
  return v2;
}


signed int __fastcall StructureFeature::getNearestGeneratedFeature(StructureFeature *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  StructureFeature *v4; // r8@1
  Dimension *v5; // r9@1
  unsigned int v6; // r0@1
  int v7; // r1@1
  signed int v8; // r2@1
  int v9; // r0@2
  int *v10; // r6@2
  int v11; // r5@2
  signed int v12; // r7@3
  int v13; // r0@4
  int v14; // r2@4
  signed int v15; // r4@5
  int v16; // r9@7
  int v17; // r10@7
  signed int v18; // r11@7
  bool v19; // zf@8
  int v20; // r6@12
  int (__fastcall *v21)(StructureFeature *, void *, unsigned int *, int *); // r4@12
  Dimension *v22; // r0@12
  void *v23; // r0@12
  int v24; // r5@16
  int (__fastcall *v25)(StructureFeature *, void *, unsigned int *, int *); // r9@16
  Dimension *v26; // r0@16
  void *v27; // r0@16
  bool v28; // nf@18
  unsigned __int8 v29; // vf@18
  BlockPos *v31; // [sp+0h] [bp-A30h]@1
  int v32; // [sp+4h] [bp-A2Ch]@3
  signed int v33; // [sp+Ch] [bp-A24h]@3
  Dimension *v34; // [sp+10h] [bp-A20h]@3
  int v35; // [sp+14h] [bp-A1Ch]@21
  int v36; // [sp+18h] [bp-A18h]@21
  int v37; // [sp+1Ch] [bp-A14h]@21
  int v38; // [sp+20h] [bp-A10h]@12
  int v39; // [sp+24h] [bp-A0Ch]@12
  unsigned int v40; // [sp+2Ch] [bp-A04h]@1
  unsigned int v41; // [sp+30h] [bp-A00h]@1
  int v42; // [sp+9F0h] [bp-40h]@1
  char v43; // [sp+9F4h] [bp-3Ch]@1
  int v44; // [sp+9F8h] [bp-38h]@1
  int v45; // [sp+9FCh] [bp-34h]@3
  int v46; // [sp+A00h] [bp-30h]@1
  int v47; // [sp+A04h] [bp-2Ch]@12

  v4 = this;
  v5 = a2;
  v31 = a4;
  ChunkPos::ChunkPos((ChunkPos *)&v46, a4);
  v6 = sub_21E67AC((int)&Random::mRandomDevice);
  v40 = v6;
  v42 = 625;
  v7 = 0;
  v8 = 1;
  v43 = 0;
  v44 = 0;
  v41 = v6;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = (int *)(&v40 + v7);
    v11 = v7++ + 1812433253 * v9;
    v6 = v8++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v7 != 397 );
  v12 = 0;
  v42 = 624;
  v45 = 398;
  v33 = -1;
  v32 = 0;
  v34 = v5;
  while ( 2 )
    v13 = -v12;
    v14 = -v12;
    do
    {
      v15 = v33;
      if ( v14 == v13 || (v15 = v33, v14 == v12) )
      {
        while ( 1 )
        {
          v24 = v14;
          v38 = v46 + v14;
          v39 = v15 + v47 + 1;
          v25 = *(int (__fastcall **)(StructureFeature *, void *, unsigned int *, int *))(*(_DWORD *)v4 + 24);
          v26 = Dimension::getBiomes(v34);
          v27 = ThreadLocal<BiomeSource>::getLocal((int)v26);
          if ( v25(v4, v27, &v40, &v38) )
            break;
          ++v15;
          v14 = v24;
          if ( v15 >= v12 )
            goto LABEL_18;
        }
LABEL_21:
        j_BlockPos::BlockPos((int)&v35, (__int64 *)&v38, 64);
        *(_DWORD *)v31 = v35;
        *((_DWORD *)v31 + 1) = v36;
        *((_DWORD *)v31 + 2) = v37;
        return 1;
      }
      v16 = v32;
      v17 = 0;
      v18 = v33;
      do
        v19 = v17 == 0;
        if ( v17 )
          v19 = v16 == 0;
        if ( v19 )
          v20 = v14;
          v39 = v18 + v47 + 1;
          v21 = *(int (__fastcall **)(StructureFeature *, void *, unsigned int *, int *))(*(_DWORD *)v4 + 24);
          v22 = Dimension::getBiomes(v34);
          v23 = ThreadLocal<BiomeSource>::getLocal((int)v22);
          if ( v21(v4, v23, &v40, &v38) )
            goto LABEL_21;
          v14 = v20;
        ++v18;
        --v16;
        --v17;
      while ( v18 < v12 );
LABEL_18:
      v29 = __OFSUB__(v14, v12);
      v28 = v14++ - v12 < 0;
      v13 = -v12;
    }
    while ( v28 ^ v29 );
    ++v12;
    v32 += 2;
    --v33;
    if ( v12 <= 1000 )
      continue;
    return 0;
}


signed int __fastcall StructureFeature::deterministicRandomShuffle<std::shared_ptr<RoomDefinition>>(signed int *a1, Random *a2)
{
  signed int *v2; // r4@1
  signed int result; // r0@1
  unsigned int v4; // r6@1
  unsigned int v5; // r1@3
  int v6; // r11@5
  int v7; // r7@5
  unsigned int *v8; // r2@6
  unsigned int v9; // r0@8
  int v10; // r9@9
  _DWORD *v11; // r5@12
  int *v12; // r5@12
  int v13; // r8@12
  unsigned int *v14; // r0@14
  unsigned int v15; // r1@16
  unsigned int *v16; // r1@20
  unsigned int v17; // r0@22
  unsigned int *v18; // r4@26
  unsigned int v19; // r0@28
  _DWORD *v20; // r5@34
  int *v21; // r5@34
  unsigned int v22; // r1@38
  unsigned int *v23; // r1@42
  signed int *v24; // r8@48
  unsigned int *v25; // r4@48
  unsigned int *v26; // r1@57
  signed int *v27; // r5@63
  unsigned int *v28; // r4@63
  signed int *v29; // [sp+4h] [bp-2Ch]@1
  Random *v30; // [sp+8h] [bp-28h]@1

  v2 = a1;
  v30 = a2;
  v29 = a1;
  result = (*(_QWORD *)a1 >> 32) - *(_QWORD *)a1;
  v4 = (result >> 3) - 1;
  if ( result >> 3 != 1 )
  {
    do
    {
      if ( (signed int)v4 < 1 )
        v5 = 0;
      else
        v5 = j_Random::_genRandInt32(v30) % v4;
      result = *v2;
      v6 = *(_DWORD *)(*v2 + 8 * v5);
      v7 = *(_DWORD *)(*v2 + 8 * v5 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
          result = *v2;
          v10 = *(_DWORD *)(*v2 + 8 * v5 + 4);
        }
        else
          ++*v8;
      }
        v10 = 0;
      v11 = (_DWORD *)(result + 8 * v5);
      *v11 = *(_DWORD *)(result + 8 * v4);
      v12 = v11 + 1;
      v13 = *(_DWORD *)(result + 8 * v4 + 4);
      if ( v13 != v10 )
        if ( v13 )
          v14 = (unsigned int *)(v13 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 + 1, v14) );
            v10 = *v12;
          }
          else
            ++*v14;
        if ( v10 )
          v16 = (unsigned int *)(v10 + 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 == 1 )
            v18 = (unsigned int *)(v10 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            if ( &pthread_create )
            {
              __dmb();
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
            }
            else
              v19 = (*v18)--;
            v2 = v29;
            if ( v19 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
        *v12 = v13;
        result = *v2;
        v10 = *(_DWORD *)(*v2 + 8 * v4 + 4);
      v20 = (_DWORD *)(result + 8 * v4);
      *v20 = v6;
      v21 = v20 + 1;
      if ( v7 != v10 )
        if ( v7 )
          result = v7 + 4;
              v22 = __ldrex((unsigned int *)result);
            while ( __strex(v22 + 1, (unsigned int *)result) );
            v10 = *v21;
            ++*(_DWORD *)result;
          v23 = (unsigned int *)(v10 + 4);
              result = __ldrex(v23);
            while ( __strex(result - 1, v23) );
            result = (*v23)--;
          if ( result == 1 )
            v24 = v2;
            v25 = (unsigned int *)(v10 + 8);
                result = __ldrex(v25);
              while ( __strex(result - 1, v25) );
              result = (*v25)--;
            v2 = v24;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
        *v21 = v7;
        v26 = (unsigned int *)(v7 + 4);
            result = __ldrex(v26);
          while ( __strex(result - 1, v26) );
          result = (*v26)--;
        if ( result == 1 )
          v27 = v2;
          v28 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
              result = __ldrex(v28);
            while ( __strex(result - 1, v28) );
            result = (*v28)--;
          v2 = v27;
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      --v4;
    }
    while ( v4 );
  }
  return result;
}


void __fastcall StructureFeature::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3, int a4)
{
  StructureFeature::garbageCollectBlueprints(a1, a2, a3, a4);
}


void __fastcall StructureFeature::findFarAwayStructures(unsigned int a1, int a2, unsigned __int64 *a3, unsigned __int64 *a4, int a5)
{
  unsigned __int64 *v5; // r10@1
  int v6; // r7@1
  signed int v7; // r5@1
  signed int v8; // r9@1
  int v9; // r4@1
  signed int v10; // r11@1
  unsigned __int64 *v11; // r1@2
  unsigned __int64 v12; // r2@3
  int v13; // r8@14
  int v14; // r6@15
  int v15; // r7@16
  __int64 v16; // kr10_8@16
  int v17; // r4@16
  int v18; // r3@16
  int v19; // r5@16
  int v20; // r7@16
  __int64 v21; // r0@16
  __int64 v22; // kr18_8@20
  int v23; // r3@20
  __int64 v24; // kr20_8@20
  __int64 v25; // kr28_8@22
  int v26; // r9@25
  int v27; // r0@25
  int v28; // r7@25
  unsigned int v29; // r1@25
  unsigned int v30; // r2@27
  unsigned int v31; // r0@27
  bool v32; // cf@29
  void *v33; // lr@32
  int v34; // r1@32
  char *v35; // r1@32
  char *v36; // r3@33
  _DWORD *v37; // r12@33
  int v38; // r2@33
  int v39; // r4@33
  int v40; // r5@33
  int v41; // r6@33
  int v42; // r7@33
  char *v43; // r4@45
  char v44; // r0@46
  unsigned __int64 *v45; // r2@46
  int v46; // r3@49
  int v47; // r7@50
  bool v48; // nf@50
  unsigned __int8 v49; // vf@50
  char v50; // r3@50
  __int64 v51; // kr30_8@55
  __int64 v52; // r0@55
  int v53; // r4@60
  char *v54; // r6@60
  __int64 v55; // r0@61
  unsigned __int64 *v56; // [sp+0h] [bp-A8h]@2
  signed int v57; // [sp+4h] [bp-A4h]@14
  char *i; // [sp+8h] [bp-A0h]@32
  int v59; // [sp+Ch] [bp-9Ch]@32
  int v60; // [sp+10h] [bp-98h]@25
  int v61; // [sp+14h] [bp-94h]@25
  unsigned int v62; // [sp+1Ch] [bp-8Ch]@14
  int v63; // [sp+20h] [bp-88h]@14
  char *ptr; // [sp+24h] [bp-84h]@15
  int v65; // [sp+28h] [bp-80h]@15
  int v66; // [sp+2Ch] [bp-7Ch]@14
  char v67; // [sp+30h] [bp-78h]@16
  int v68; // [sp+34h] [bp-74h]@16
  int v69; // [sp+38h] [bp-70h]@16
  int v70; // [sp+3Ch] [bp-6Ch]@16
  int v71; // [sp+40h] [bp-68h]@16
  int v72; // [sp+44h] [bp-64h]@16
  int v73; // [sp+48h] [bp-60h]@16
  int v74; // [sp+4Ch] [bp-5Ch]@18
  char v75; // [sp+50h] [bp-58h]@16
  int v76; // [sp+54h] [bp-54h]@16
  int v77; // [sp+58h] [bp-50h]@16
  int v78; // [sp+5Ch] [bp-4Ch]@16
  int v79; // [sp+60h] [bp-48h]@16
  int v80; // [sp+64h] [bp-44h]@16
  int v81; // [sp+68h] [bp-40h]@16
  int v82; // [sp+6Ch] [bp-3Ch]@19
  pthread_mutex_t *mutex; // [sp+70h] [bp-38h]@14
  char v84; // [sp+74h] [bp-34h]@41
  __int64 v85[6]; // [sp+78h] [bp-30h]@14

  v5 = a4;
  v6 = a2;
  v7 = unk_281BF8C;
  v8 = ChunkPos::MIN;
  v9 = unk_281BF94;
  v10 = ChunkPos::MAX;
  if ( a4 == a3 )
  {
    v56 = a3;
  }
  else
    v11 = a3;
    do
    {
      v12 = *v11;
      if ( v7 < (signed int)(*v11 >> 32) )
        v7 = *v11 >> 32;
      ++v11;
      if ( v8 < (signed int)v12 )
        v8 = v12;
      if ( SHIDWORD(v12) < v9 )
        v9 = HIDWORD(v12);
      if ( (signed int)v12 < v10 )
        v10 = v12;
    }
    while ( v5 != v11 );
  v57 = v8;
  v66 = v9;
  v63 = v7;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v62 = a1;
  LODWORD(v85[0]) = a5;
  HIDWORD(v85[0]) = a5;
  SharedLock::SharedLock((int)&mutex, (pthread_mutex_t *)(v6 + 32));
  v13 = *(_DWORD *)(v6 + 12);
  if ( v13 )
    v65 = 0;
    v14 = 0;
    ptr = 0;
      v15 = *(_DWORD *)(v13 + 16);
      j_BlockPos::BlockPos((int)&v75, v85, 0);
      v16 = *(_QWORD *)(v15 + 4);
      v17 = *(_DWORD *)(v15 + 12);
      v78 = v16 - *(_DWORD *)&v75;
      v79 = HIDWORD(v16) - v76;
      v80 = v17 - v77;
      ChunkPos::ChunkPos((ChunkPos *)&v81, (const BlockPos *)&v78);
      j_BlockPos::BlockPos((int)&v67, v85, 0);
      v15 += 16;
      v18 = *(_DWORD *)v15;
      v19 = *(_DWORD *)(v15 + 4);
      v20 = *(_DWORD *)(v15 + 8);
      v70 = *(_DWORD *)&v67 + v18;
      v71 = v68 + v19;
      v72 = v69 + v20;
      ChunkPos::ChunkPos((ChunkPos *)&v73, (const BlockPos *)&v70);
      HIDWORD(v21) = v13 + 8;
      if ( v73 <= v10 || v81 >= v8 || v74 <= v66 || v82 >= v63 )
      {
        LODWORD(v21) = v62;
        v25 = *(_QWORD *)(v62 + 4);
        if ( (_DWORD)v25 == HIDWORD(v25) )
        {
          std::vector<ChunkPos,std::allocator<ChunkPos>>::_M_emplace_back_aux<ChunkPos const&>(v21);
        }
        else
          *(_QWORD *)v25 = *(_QWORD *)HIDWORD(v21);
          *(_DWORD *)(v62 + 4) = v25 + 8;
      }
      else
        v22 = *(_QWORD *)&v73;
        v23 = v82;
        v24 = *(_QWORD *)HIDWORD(v21);
        if ( v14 == v65 )
          v60 = v82;
          v61 = v73;
          v26 = v81;
          v27 = (v14 - (signed int)ptr) >> 3;
          v28 = -1431655765 * v27;
          v29 = -1431655765 * v27;
          if ( (char *)v14 == ptr )
            v29 = 1;
          v30 = v29 + -1431655765 * v27;
          v31 = v30;
          if ( v30 > 0xAAAAAAA )
            v31 = 178956970;
          v32 = v30 >= v29;
          LOWORD(v29) = -21845;
          if ( !v32 )
          HIWORD(v29) = 2730;
          if ( v31 >= v29 )
            sub_21E57F4();
          v59 = 3 * v31;
          v33 = j_operator new(24 * v31);
          *((_DWORD *)v33 + 6 * v28) = v26;
          v34 = (int)v33 + 24 * v28;
          *(_DWORD *)(v34 + 4) = v60;
          *(_DWORD *)(v34 + 8) = v61;
          *(_DWORD *)(v34 + 12) = HIDWORD(v22);
          *(_QWORD *)(v34 + 16) = v24;
          v35 = ptr;
          for ( i = (char *)v33; (char *)v65 != v35; v37[5] = v42 )
          {
            v36 = v35;
            v37 = v33;
            v35 += 24;
            v33 = (char *)v33 + 24;
            v38 = *((_DWORD *)v36 + 1);
            v39 = *((_DWORD *)v36 + 2);
            v40 = *((_DWORD *)v36 + 3);
            v41 = *((_DWORD *)v36 + 4);
            v42 = *((_DWORD *)v36 + 5);
            *v37 = *(_DWORD *)v36;
            v37[1] = v38;
            v37[2] = v39;
            v37[3] = v40;
            v37[4] = v41;
          }
          v14 = (int)v33 + 24;
          if ( ptr )
            j_operator delete(ptr);
          v8 = v57;
          v65 = (int)&i[8 * v59];
          ptr = i;
          *(_DWORD *)v14 = v81;
          *(_DWORD *)(v14 + 4) = v23;
          *(_QWORD *)(v14 + 8) = v22;
          *(_QWORD *)(v14 + 16) = v24;
          v14 += 24;
      v13 = *(_DWORD *)v13;
    while ( v13 );
  if ( v84 )
    std::shared_timed_mutex::unlock_shared(mutex);
  if ( ptr != (char *)v14 )
    if ( v5 == v56 )
      v53 = -v14;
      v54 = ptr + 16;
      do
        v55 = *(_QWORD *)(v62 + 4);
        if ( (_DWORD)v55 == HIDWORD(v55) )
          std::vector<ChunkPos,std::allocator<ChunkPos>>::_M_emplace_back_aux<ChunkPos const&>(__PAIR__((unsigned int)v54, v62));
          *(_QWORD *)v55 = *(_QWORD *)v54;
          *(_DWORD *)(v62 + 4) = v55 + 8;
        v54 += 24;
      while ( &v54[v53] != (char *)16 );
    else
      v43 = ptr;
        v44 = 0;
        v45 = v56;
        do
          if ( *(_DWORD *)v45 > *(_DWORD *)v43 && *(_DWORD *)v45 < *((_DWORD *)v43 + 2) )
            v46 = *((_DWORD *)v45 + 1);
            if ( v46 > *((_DWORD *)v43 + 1) )
            {
              v47 = *((_DWORD *)v43 + 3);
              v49 = __OFSUB__(v46, v47);
              v48 = v46 - v47 < 0;
              v50 = 0;
              if ( v48 ^ v49 )
                v50 = 1;
              v44 |= v50;
                break;
            }
          ++v45;
        while ( v5 != v45 );
        if ( !(v44 & 1) )
          v51 = *(_QWORD *)(v62 + 4);
          HIDWORD(v52) = v43 + 16;
          if ( (_DWORD)v51 == HIDWORD(v51) )
            LODWORD(v52) = v62;
            std::vector<ChunkPos,std::allocator<ChunkPos>>::_M_emplace_back_aux<ChunkPos const&>(v52);
          else
            *(_QWORD *)v51 = *(_QWORD *)HIDWORD(v52);
            *(_DWORD *)(v62 + 4) = v51 + 8;
        v43 += 24;
      while ( v43 != (char *)v14 );
  if ( ptr )
    j_operator delete(ptr);
}


signed int __fastcall StructureFeature::setRandomSeedFor(StructureFeature *this, Random *a2, int a3, int a4, int a5, BiomeSource *a6)
{
  StructureFeature *v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  Random *v9; // r7@1
  int v10; // r5@1
  signed int v11; // r2@1
  signed int v12; // r3@1
  unsigned int v13; // r0@1
  StructureFeature *v14; // r1@1
  int v15; // r0@2
  int v16; // r6@2
  signed int result; // r0@3

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = *(_DWORD *)(a5 + 48);
  j_Random::_checkThreadId(this);
  v11 = 1;
  v12 = -397;
  v13 = -1724254968 * (_DWORD)v9 + -245998635 * v8 + v7 + v10;
  *(_DWORD *)v6 = v13;
  *((_DWORD *)v6 + 625) = 625;
  *((_BYTE *)v6 + 2504) = 0;
  *((_DWORD *)v6 + 627) = 0;
  v14 = (StructureFeature *)((char *)v6 + 8);
  *((_DWORD *)v6 + 1) = v13;
  do
  {
    v15 = v13 ^ (v13 >> 30);
    v16 = v12++ + 1812433253 * v15;
    v13 = v11++ + 1812433253 * v15;
    *(_DWORD *)v14 = v16 + 398;
    v14 = (StructureFeature *)((char *)v14 + 4);
  }
  while ( v12 );
  *((_DWORD *)v6 + 625) = 624;
  result = 398;
  *((_DWORD *)v6 + 628) = 398;
  return result;
}


int (**__fastcall StructureFeature::generateHardcodedMobSpawns(StructureFeature *this, LevelChunk *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  LevelChunk *v2; // r5@1
  StructureFeature *v3; // r4@1
  char *v4; // r6@1
  char *v5; // r0@1
  _DWORD *v6; // r0@1
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@1
  _DWORD *v8; // [sp+0h] [bp-38h]@1
  int (__cdecl *v9)(_DWORD); // [sp+8h] [bp-30h]@1
  int (__fastcall *v10)(int, int); // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-28h]@1
  int v12; // [sp+14h] [bp-24h]@1
  int v13; // [sp+18h] [bp-20h]@1
  int v14; // [sp+1Ch] [bp-1Ch]@1
  int v15; // [sp+20h] [bp-18h]@1
  int v16; // [sp+24h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = j_LevelChunk::getMin(a2);
  v5 = j_LevelChunk::getMax(v2);
  v11 = *(_DWORD *)v4;
  v12 = *((_DWORD *)v4 + 1);
  v13 = *((_DWORD *)v4 + 2);
  v14 = *(_DWORD *)v5;
  v15 = *((_DWORD *)v5 + 1);
  v16 = *((_DWORD *)v5 + 2);
  v6 = j_operator new(8u);
  *v6 = &v11;
  v6[1] = v2;
  v8 = v6;
  v9 = (int (__cdecl *)(_DWORD))sub_1945B16;
  v10 = sub_1945AC4;
  result = StructureFeature::_foreachIntersectingStructureStart((int)v3, (int)&v11, (int)&v8);
  if ( v9 )
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))v9(&v8);
  return result;
}


_BOOL4 __fastcall StructureFeature::isInsideFeature(StructureFeature *this, int a2, int a3, int a4)
{
  return (*(int (**)(void))(*(_DWORD *)this + 32))() != 0;
}


int __fastcall StructureFeature::getStructureAt(StructureFeature *this, int a2, int a3, int a4)
{
  StructureFeature *v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r8@1
  int i; // r5@1
  int v9; // r7@5
  __int64 v10; // r0@9
  int v11; // r2@10
  pthread_mutex_t *mutex; // [sp+0h] [bp-20h]@1
  char v14; // [sp+4h] [bp-1Ch]@19

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  SharedLock::SharedLock((int)&mutex, (pthread_mutex_t *)((char *)this + 32));
  for ( i = *((_DWORD *)v4 + 3); ; i = *(_DWORD *)i )
  {
    if ( !i )
    {
      v9 = 0;
      goto LABEL_19;
    }
    if ( (*(int (**)(void))(**(_DWORD **)(i + 16) + 12))() == 1 )
      v9 = *(_DWORD *)(i + 16);
      if ( *(_DWORD *)(v9 + 16) >= v5
        && *(_DWORD *)(v9 + 4) <= v5
        && *(_DWORD *)(v9 + 24) >= v6
        && *(_DWORD *)(v9 + 12) <= v6 )
      {
        v10 = *(_QWORD *)(v9 + 36);
        if ( (_DWORD)v10 != HIDWORD(v10) )
          break;
      }
LABEL_2:
    ;
  }
  while ( 1 )
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)(*(_DWORD *)v10 + 4) <= v5
      && *(_DWORD *)(v11 + 16) >= v5
      && *(_DWORD *)(v11 + 12) <= v6
      && *(_DWORD *)(v11 + 24) >= v6
      && *(_DWORD *)(v11 + 8) <= v7
      && *(_DWORD *)(v11 + 20) >= v7 )
      break;
    LODWORD(v10) = v10 + 4;
    if ( HIDWORD(v10) == (_DWORD)v10 )
      goto LABEL_2;
LABEL_19:
  if ( v14 )
    std::shared_timed_mutex::unlock_shared(mutex);
  return v9;
}


void __fastcall StructureFeature::createBlueprints(StructureFeature *this, Dimension *a2, const ChunkPos *a3)
{
  StructureFeature::createBlueprints(this, a2, a3);
}


void __fastcall StructureFeature::~StructureFeature(StructureFeature *this)
{
  StructureFeature::~StructureFeature(this);
}


int __fastcall StructureFeature::getGuesstimatedFeaturePositions(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall StructureFeature::findFarAwayStructures(unsigned int a1, int a2, unsigned __int64 *a3, unsigned __int64 *a4, int a5)
{
  StructureFeature::findFarAwayStructures(a1, a2, a3, a4, a5);
}


int __fastcall StructureFeature::findNearestFeaturePositionBySpacing(StructureFeature *this, Dimension *a2, StructureFeature *a3, const BlockPos *a4, BlockPos *a5, int a6, int a7, int a8, int a9, int a10, bool a11)
{
  signed int v11; // r9@1
  signed int v12; // r5@1
  unsigned int v13; // r0@1
  int v14; // r2@1
  signed int v15; // r1@1
  BlockPos *v16; // r10@1
  int v17; // r0@2
  int *v18; // r4@2
  int v19; // r6@2
  int result; // r0@3
  int v21; // r2@5
  int v22; // r3@5
  bool v23; // zf@5
  signed int v24; // r0@5
  int v25; // r1@7
  int v26; // r7@8
  signed int v27; // r0@8
  signed int v28; // r1@10
  int v29; // r6@12
  int v30; // r0@14
  int v31; // r5@15
  signed int v32; // r0@15
  signed int v33; // r1@15
  signed int v34; // r7@20
  int v35; // r0@20
  unsigned int v36; // r6@20
  signed int v37; // r1@20
  int v38; // r10@20
  int v39; // r4@20
  signed int v40; // r0@20
  int v41; // r1@21
  int v42; // r1@21
  int *v43; // r2@21
  Dimension *v44; // r0@22
  int v45; // r5@22
  int v46; // r10@22
  unsigned int v47; // r0@22
  int v48; // r1@22
  signed int v49; // r2@22
  int v50; // r0@23
  int *v51; // r7@23
  int v52; // r3@23
  unsigned int v53; // r7@25
  unsigned int v54; // r1@25
  int v55; // r10@27
  int v56; // r5@27
  unsigned int v57; // r4@29
  unsigned int v58; // r1@29
  int v59; // r6@32
  Level *v60; // r0@32
  LargeFeature *v61; // r0@32
  int (__fastcall *v62)(Dimension *, void *, unsigned int *, unsigned int *); // r10@32
  Dimension *v63; // r0@32
  void *v64; // r0@32
  const ChunkPos *v65; // r0@34
  __int64 v66; // kr00_8@34
  unsigned int *v67; // r1@35
  unsigned int v68; // r0@37
  unsigned int *v69; // r5@43
  unsigned int v70; // r0@45
  signed int v71; // r0@53
  __int64 v72; // r0@54
  int v73; // [sp+0h] [bp-1440h]@0
  const BlockPos *v74; // [sp+10h] [bp-1430h]@1
  signed int v75; // [sp+18h] [bp-1428h]@7
  int v76; // [sp+1Ch] [bp-1424h]@8
  unsigned int v77; // [sp+24h] [bp-141Ch]@4
  signed int v78; // [sp+2Ch] [bp-1414h]@4
  Dimension *v79; // [sp+30h] [bp-1410h]@1
  int v80; // [sp+34h] [bp-140Ch]@7
  int v81; // [sp+38h] [bp-1408h]@5
  int v82; // [sp+3Ch] [bp-1404h]@12
  signed int v83; // [sp+40h] [bp-1400h]@14
  char *v84; // [sp+44h] [bp-13FCh]@4
  int v85; // [sp+48h] [bp-13F8h]@20
  int v86; // [sp+4Ch] [bp-13F4h]@32
  Dimension *v87; // [sp+54h] [bp-13ECh]@1
  char v88; // [sp+60h] [bp-13E0h]@34
  int v89; // [sp+64h] [bp-13DCh]@34
  unsigned int v90; // [sp+68h] [bp-13D8h]@32
  int v91; // [sp+6Ch] [bp-13D4h]@32
  int v92; // [sp+74h] [bp-13CCh]@20
  int v93; // [sp+78h] [bp-13C8h]@20
  int v94; // [sp+A38h] [bp-A08h]@20
  char v95; // [sp+A3Ch] [bp-A04h]@20
  int v96; // [sp+A40h] [bp-A00h]@20
  int v97; // [sp+A44h] [bp-9FCh]@22
  unsigned int v98; // [sp+A48h] [bp-9F8h]@1
  unsigned int v99; // [sp+A4Ch] [bp-9F4h]@1
  signed int v100; // [sp+140Ch] [bp-34h]@1
  char v101; // [sp+1410h] [bp-30h]@1
  int v102; // [sp+1414h] [bp-2Ch]@1
  signed int v103; // [sp+1418h] [bp-28h]@3

  v87 = (Dimension *)this;
  v74 = a4;
  v79 = a2;
  v11 = *(_DWORD *)a3;
  v12 = *((_DWORD *)a3 + 2);
  v13 = sub_21E67AC((int)&Random::mRandomDevice);
  v98 = v13;
  v14 = 0;
  v100 = 625;
  v101 = 0;
  v15 = 1;
  v102 = 0;
  v99 = v13;
  v16 = a5;
  do
  {
    v17 = v13 ^ (v13 >> 30);
    v18 = (int *)(&v98 + v14);
    v19 = v14++ + 1812433253 * v17;
    v13 = v15++ + 1812433253 * v17;
    v18[2] = v19 + 1;
  }
  while ( v14 != 397 );
  v100 = 624;
  v103 = 398;
  result = 0;
  if ( a9 < 0 )
    return result;
  v78 = v12 >> 4;
  v77 = (unsigned int)a5 - a6;
  v84 = (char *)a5 - 1;
LABEL_5:
  v21 = result;
  v22 = -result;
  v23 = result == 0;
  v24 = 0;
  v81 = v21;
  if ( v23 )
    v24 = 4;
  v25 = v22;
  v75 = v24;
  v80 = v22;
  while ( 2 )
    v26 = (v11 >> 4) + v25 * (_DWORD)v16;
    v27 = 0;
    v76 = v25;
    if ( v25 == v21 )
      v27 = 1;
    v23 = v25 == v22;
    v28 = 0;
    if ( v23 )
      v28 = 1;
    v29 = v28 | v27;
    v82 = v28 | v27;
    if ( v26 < 0 )
      v26 -= (signed int)v84;
    v30 = v22;
    v83 = v26;
    while ( 1 )
    {
      v31 = v30;
      v23 = v30 == v21;
      v32 = 0;
      v33 = 0;
      if ( v23 )
        v32 = 1;
      if ( v31 == v22 )
        v33 = 1;
      if ( !(v32 | v33 | v29) )
        goto LABEL_52;
      v34 = v78 + v31 * (_DWORD)v16;
      v85 = v31;
      v35 = sub_21E67AC((int)&Random::mRandomDevice);
      v36 = v35;
      v92 = v35;
      v37 = (signed int)v16;
      v94 = 625;
      v38 = 0;
      v95 = 0;
      v96 = 0;
      v93 = v35;
      v39 = v83 / v37;
      v40 = 1;
      do
      {
        v41 = v36 ^ (v36 >> 30);
        v36 = v40++ + 1812433253 * v41;
        v42 = v38 + 1812433253 * v41 + 1;
        v43 = &v92 + v38++;
        v43[2] = v42;
      }
      while ( v38 != 397 );
      v94 = 624;
      v97 = 398;
      v44 = Dimension::getBiomes(v87);
      v45 = *((_DWORD *)ThreadLocal<BiomeSource>::getLocal((int)v44) + 12);
      j_Random::_checkThreadId((Random *)&v92);
      v46 = (signed int)(v34 - ((unsigned int)v84 & (v34 >> 31))) / (signed int)a5;
      v47 = a7 + -1724254968 * v39 + -245998635 * v46 + v45;
      v92 = a7 + -1724254968 * v39 + -245998635 * v46 + v45;
      v48 = 0;
      v49 = 1;
      v93 = a7 + -1724254968 * v39 + -245998635 * v46 + v45;
        v50 = v47 ^ (v47 >> 30);
        v51 = &v92 + v48;
        v52 = v48++ + 1812433253 * v50;
        v47 = v49++ + 1812433253 * v50;
        v51[2] = v52 + 1;
      while ( v48 != 397 );
      if ( a5 == (BlockPos *)a6 )
        v53 = 0;
        v54 = 0;
      else
        v53 = j_Random::_genRandInt32((Random *)&v92) % v77;
        v54 = j_Random::_genRandInt32((Random *)&v92) % v77;
      v55 = v46 * (_DWORD)a5;
      v56 = v39 * (_DWORD)a5;
      if ( a8 == 1 )
        v53 = (signed int)(v54 + v53) / 2;
        if ( a5 == (BlockPos *)a6 )
        {
          v57 = 0;
          v58 = 0;
        }
        else
          v57 = j_Random::_genRandInt32((Random *)&v92) % v77;
          v58 = j_Random::_genRandInt32((Random *)&v92) % v77;
        v54 = (signed int)(v58 + v57) / 2;
      v86 = v53 + v56;
      v59 = v54 + v55;
      v60 = (Level *)Dimension::getLevel(v87);
      v61 = (LargeFeature *)j_Level::getSeed(v60);
      LargeFeature::setupChunkSeed(v61, (unsigned int)&v98, (Random *)(v53 + v56), v59, v73);
      j_Random::_genRandInt32((Random *)&v98);
      v90 = v53 + v56;
      v91 = v59;
      v62 = *(int (__fastcall **)(Dimension *, void *, unsigned int *, unsigned int *))(*(_DWORD *)v79 + 24);
      v63 = Dimension::getBiomes(v87);
      v64 = ThreadLocal<BiomeSource>::getLocal((int)v63);
      if ( v62(v79, v64, &v98, &v90) != 1 )
        v21 = v81;
        v22 = v80;
        v16 = a5;
        v29 = v82;
        v31 = v85;
        if ( !v81 )
          goto LABEL_53;
      if ( a10 != 1 )
        break;
      v65 = (const ChunkPos *)j_Dimension::getChunkSource(v87);
      ChunkSource::getAvailableChunk((ChunkSource *)&v88, v65);
      v66 = *(_QWORD *)&v88;
      if ( v89 )
        v67 = (unsigned int *)(v89 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 == 1 )
          v69 = (unsigned int *)(HIDWORD(v66) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v66) + 8))(HIDWORD(v66));
          if ( &pthread_create )
          {
            __dmb();
            do
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
          }
          else
            v70 = (*v69)--;
          if ( v70 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v66) + 12))(HIDWORD(v66));
      if ( !(_DWORD)v66 )
      v21 = v81;
      v22 = v80;
      v29 = v82;
      v16 = a5;
      v31 = v85;
LABEL_52:
      v30 = v31 + 1;
      if ( v31 >= v21 )
LABEL_53:
        v71 = 7;
        goto LABEL_55;
    }
    HIDWORD(v72) = 16 * v59 | 8;
    *(_DWORD *)v74 = 16 * v86 | 8;
    LODWORD(v72) = 64;
    *(_QWORD *)((char *)v74 + 4) = v72;
    v71 = 1;
    v16 = a5;
    v21 = v81;
    v22 = v80;
LABEL_55:
    if ( v71 == 7 )
      v71 = v75;
    if ( !v71 )
      v25 = v76 + 1;
      if ( v76 < v21 )
        continue;
LABEL_61:
      result = v21 + 1;
      if ( v21 >= a9 )
        return 0;
      goto LABEL_5;
    break;
  if ( v71 == 4 )
    goto LABEL_61;
  return 1;
}


StructureFeature *__fastcall StructureFeature::~StructureFeature(StructureFeature *this)
{
  StructureFeature *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  int v5; // r5@6
  int v6; // r0@7
  int v7; // r6@7
  char *v8; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_27193B8;
  v2 = (void *)*((_DWORD *)this + 14);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4(*((_QWORD *)v1 + 6), 4 * (*((_QWORD *)v1 + 6) >> 32));
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 0;
  v4 = (char *)*((_DWORD *)v1 + 12);
  if ( v4 && (char *)v1 + 72 != v4 )
    j_operator delete(v4);
  sub_21E03AC((pthread_cond_t *)((char *)v1 + 40));
  sub_21E03AC((pthread_cond_t *)((char *)v1 + 36));
  v5 = *((_DWORD *)v1 + 3);
  if ( v5 )
      v6 = *(_DWORD *)(v5 + 16);
      v7 = *(_DWORD *)v5;
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      j_operator delete((void *)v5);
      v5 = v7;
    while ( v7 );
  j___aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v8 = (char *)*((_DWORD *)v1 + 1);
  if ( v8 && (char *)v1 + 28 != v8 )
    j_operator delete(v8);
  return v1;
}


void __fastcall StructureFeature::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3, int a4)
{
  pthread_mutex_t *v4; // r5@0
  int v5; // r4@1
  unsigned __int64 *v6; // r1@1
  unsigned int v7; // r6@3
  int v8; // r4@3
  unsigned int v9; // r7@3
  int v10; // r1@3
  void ***v11; // r0@3
  void **v12; // r10@4
  void **v13; // r8@4
  void *v14; // r4@4
  _DWORD *v15; // r9@7
  void **v16; // r4@11
  void **v17; // r7@11
  int v18; // r1@13
  _DWORD *v19; // r8@16
  int v20; // r1@17
  int v21; // r1@18
  void *v22; // r0@23
  bool v23; // zf@27
  int v24; // r0@31
  unsigned __int8 *v25; // r0@36
  unsigned int v26; // r2@37
  void *v27; // r0@39
  void *v28; // r4@40
  void **v29; // [sp+4h] [bp-54h]@2
  void **v30; // [sp+8h] [bp-50h]@4
  int v31; // [sp+Ch] [bp-4Ch]@3
  unsigned __int64 *v32; // [sp+10h] [bp-48h]@1
  int v33; // [sp+14h] [bp-44h]@1
  unsigned __int64 *v34; // [sp+18h] [bp-40h]@3
  pthread_mutex_t *mutex; // [sp+20h] [bp-38h]@1
  char v36; // [sp+24h] [bp-34h]@27
  void *ptr; // [sp+28h] [bp-30h]@1
  unsigned __int64 *v38; // [sp+2Ch] [bp-2Ch]@1

  v5 = a1;
  v33 = a1;
  StructureFeature::findFarAwayStructures((unsigned int)&ptr, a1, (unsigned __int64 *)a2, a3, a4);
  UniqueLock::UniqueLock((int)&mutex, (pthread_mutex_t *)(v5 + 32));
  v6 = (unsigned __int64 *)ptr;
  v32 = v38;
  if ( ptr != v38 )
  {
    v29 = (void **)(v33 + 12);
    do
    {
      v34 = v6;
      v7 = *(_DWORD *)(v33 + 8);
      v8 = *(_DWORD *)(v33 + 4);
      v9 = 522133279 * *v6 ^ (*v6 >> 32);
      v31 = *(_DWORD *)(v33 + 4);
      v10 = v9 % v7;
      v4 = (pthread_mutex_t *)(v9 % v7);
      v11 = *(void ****)(v8 + 4 * (v9 % v7));
      if ( !v11 )
        goto LABEL_26;
      v12 = *(void ***)(v8 + 4 * v10);
      v13 = *v11;
      v30 = *(void ***)(v8 + 4 * v10);
      v14 = (*v11)[6];
      while ( v14 != (void *)v9 || *((_QWORD *)v13 + 1) != *v34 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v14 = (void *)v15[6];
          v12 = v13;
          v13 = (void **)*v13;
          if ( (pthread_mutex_t *)(v15[6] % v7) == v4 )
            continue;
        }
      }
      if ( !v12 )
      v16 = v30;
      v17 = (void **)*v12;
      if ( v30 == v12 )
        v19 = *v17;
        if ( !*v17 )
          v21 = *(_DWORD *)(v33 + 4);
          goto LABEL_20;
        v20 = v19[6] % v7;
        if ( (pthread_mutex_t *)v20 != v4 )
          *(_DWORD *)(v31 + 4 * v20) = v30;
          v16 = *(void ***)(v21 + 4 * (_DWORD)v4);
LABEL_20:
          if ( v29 == v16 )
            *v29 = v19;
          *(_DWORD *)(v21 + 4 * (_DWORD)v4) = 0;
          goto LABEL_23;
      else if ( *v17 )
        v18 = *((_DWORD *)*v17 + 6) % v7;
        if ( (pthread_mutex_t *)v18 != v4 )
          *(_DWORD *)(v31 + 4 * v18) = v12;
LABEL_23:
      *v12 = *v17;
      v22 = v17[4];
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      j_operator delete(v17);
      --*(_DWORD *)(v33 + 16);
LABEL_26:
      v6 = v34 + 1;
    }
    while ( v34 + 1 != v32 );
  }
  v23 = v36 == 0;
  if ( v36 )
    v4 = mutex;
    v23 = mutex == 0;
  if ( !v23 )
    if ( &pthread_create )
      v24 = j_pthread_mutex_lock(v4);
      if ( v24 )
        sub_21E5E14(v24);
      v4->__kind = 0;
      if ( &pthread_create )
        j_pthread_mutex_unlock(v4);
    else
    sub_21E03D8((pthread_cond_t *)&v4->__count);
    v36 = 0;
  v25 = (unsigned __int8 *)(v33 + 76);
  do
      v26 = __ldrex(v25);
    while ( __strex(1u, v25) );
    __dmb();
  while ( v26 );
  v27 = *(void **)(v33 + 56);
  if ( v27 )
      v28 = *(void **)v27;
      j_operator delete(v27);
      v27 = v28;
    while ( v28 );
  j___aeabi_memclr4(*(_QWORD *)(v33 + 48), 4 * (*(_QWORD *)(v33 + 48) >> 32));
  *(_DWORD *)(v33 + 56) = 0;
  *(_DWORD *)(v33 + 60) = 0;
  __dmb();
  *(_BYTE *)(v33 + 76) = 0;
  if ( ptr )
    j_operator delete(ptr);
}


int __fastcall StructureFeature::postProcess(StructureFeature *this, BlockSource *a2, __int64 a3, int a4)
{
  int v4; // r5@1
  StructureFeature *v5; // r4@1
  LevelChunk *v6; // r6@1
  char *v7; // r7@1
  char *v8; // r0@1
  _DWORD *v9; // r0@1
  _DWORD *v11; // [sp+4h] [bp-44h]@1
  void (*v12)(void); // [sp+Ch] [bp-3Ch]@1
  int (__fastcall *v13)(char ***, int); // [sp+10h] [bp-38h]@1
  int v14; // [sp+14h] [bp-34h]@1
  int v15; // [sp+18h] [bp-30h]@1
  int v16; // [sp+1Ch] [bp-2Ch]@1
  int v17; // [sp+20h] [bp-28h]@1
  int v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+28h] [bp-20h]@1
  unsigned __int8 v20; // [sp+2Fh] [bp-19h]@1
  BlockSource *v21; // [sp+30h] [bp-18h]@1

  v4 = a3;
  LODWORD(a3) = a4;
  v5 = this;
  v20 = 0;
  v21 = a2;
  v6 = (LevelChunk *)BlockSource::getChunk(a2, SHIDWORD(a3), a3);
  v7 = j_LevelChunk::getMin(v6);
  v8 = j_LevelChunk::getMax(v6);
  v14 = *(_DWORD *)v7;
  v15 = *((_DWORD *)v7 + 1);
  v16 = *((_DWORD *)v7 + 2);
  v17 = *(_DWORD *)v8;
  v18 = *((_DWORD *)v8 + 1);
  v19 = *((_DWORD *)v8 + 2);
  v9 = j_operator new(0x10u);
  *v9 = &v20;
  v9[1] = &v21;
  v9[2] = v4;
  v9[3] = &v14;
  v11 = v9;
  v12 = (void (*)(void))sub_1945A86;
  v13 = sub_1945A5C;
  StructureFeature::_foreachIntersectingStructureStart((int)v5, (int)&v14, (int)&v11);
  if ( v12 )
    v12();
  return v20;
}


int (**__fastcall StructureFeature::_foreachIntersectingStructureStart(int a1, int a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  int i; // r6@1
  int v7; // r1@5
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@12
  pthread_mutex_t *mutex; // [sp+0h] [bp-18h]@1
  unsigned __int8 v10; // [sp+4h] [bp-14h]@12

  v3 = a1;
  v4 = a2;
  v5 = a3;
  SharedLock::SharedLock((int)&mutex, (pthread_mutex_t *)(a1 + 32));
  for ( i = *(_DWORD *)(v3 + 12); i; i = *(_DWORD *)i )
  {
    if ( (*(int (**)(void))(**(_DWORD **)(i + 16) + 12))() == 1 )
    {
      v7 = *(_DWORD *)(i + 16);
      if ( *(_DWORD *)(v7 + 16) >= *(_DWORD *)v4
        && *(_DWORD *)(v7 + 4) <= *(_DWORD *)(v4 + 12)
        && *(_DWORD *)(v7 + 24) >= *(_DWORD *)(v4 + 8)
        && *(_DWORD *)(v7 + 12) <= *(_DWORD *)(v4 + 20) )
      {
        if ( !*(_DWORD *)(v5 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(int))(v5 + 12))(v5);
      }
    }
  }
  result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))v10;
  if ( v10 )
    result = std::shared_timed_mutex::unlock_shared(mutex);
  return result;
}


int (**__fastcall StructureFeature::postProcessMobsAt(StructureFeature *this, BlockSource *a2, int a3, int a4, Random *a5))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  StructureFeature *v5; // r5@1
  BlockSource *v6; // r4@1
  int i; // r7@1
  int v8; // r0@3
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@11
  pthread_mutex_t *mutex; // [sp+0h] [bp-38h]@1
  unsigned __int8 v11; // [sp+4h] [bp-34h]@11
  int v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+Ch] [bp-2Ch]@1
  int v14; // [sp+10h] [bp-28h]@1
  int v15; // [sp+14h] [bp-24h]@1
  int v16; // [sp+18h] [bp-20h]@1
  int v17; // [sp+1Ch] [bp-1Ch]@1

  v5 = this;
  v6 = a2;
  v12 = a3;
  v14 = a4;
  v15 = a3 + 16;
  v17 = a4 + 16;
  v13 = 1;
  v16 = 512;
  SharedLock::SharedLock((int)&mutex, (pthread_mutex_t *)((char *)this + 32));
  for ( i = *((_DWORD *)v5 + 3); i; i = *(_DWORD *)i )
  {
    if ( (*(int (**)(void))(**(_DWORD **)(i + 16) + 12))() == 1 )
    {
      v8 = *(_DWORD *)(i + 16);
      if ( *(_DWORD *)(v8 + 16) >= v12
        && *(_DWORD *)(v8 + 4) <= v15
        && *(_DWORD *)(v8 + 24) >= v14
        && *(_DWORD *)(v8 + 12) <= v17
        && *(_DWORD *)(v8 + 20) >= v13
        && *(_DWORD *)(v8 + 8) <= v16 )
      {
        StructureStart::postProcessMobsAt((StructureStart *)v8, v6, a5, (const BoundingBox *)&v12);
      }
    }
  }
  result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))v11;
  if ( v11 )
    result = std::shared_timed_mutex::unlock_shared(mutex);
  return result;
}


const ChunkPos *__fastcall StructureFeature::addFeature(StructureFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4)
{
  __int64 v4; // r10@0
  const ChunkPos *v5; // r5@1
  StructureFeature *v6; // r4@1
  int v7; // r6@1
  int v8; // t1@1
  unsigned int v9; // r4@1
  unsigned int v10; // r5@1
  int *v11; // r0@1
  bool v12; // zf@1
  const ChunkPos *result; // r0@4
  int v14; // r9@4
  int v15; // r8@4
  bool v16; // zf@5
  unsigned int v17; // r0@12
  int v18; // r1@12
  int (__fastcall *v19)(StructureFeature *, void *, Random *, const ChunkPos *); // r4@14
  Dimension *v20; // r0@14
  void *v21; // r0@14
  pthread_mutex_t *v22; // r4@15
  int v23; // r8@15
  unsigned int v24; // r9@15
  _DWORD *v25; // r0@15
  bool v26; // zf@15
  int v27; // r5@18
  int v28; // r6@18
  bool v29; // zf@19
  __int64 v30; // r0@20
  unsigned int v31; // r10@28
  int v32; // r11@28
  pthread_mutex_t **v33; // r0@28
  pthread_mutex_t *v34; // r5@29
  int v35; // r6@29
  bool v36; // zf@30
  pthread_mutex_t *v37; // r7@33
  bool v38; // zf@36
  _QWORD *v39; // r0@40
  int v40; // r1@41
  unsigned int v41; // r0@41
  bool v42; // zf@46
  int v43; // r0@50
  int v44; // [sp+Ch] [bp-44h]@1
  StructureFeature *v45; // [sp+10h] [bp-40h]@1
  Dimension *v46; // [sp+14h] [bp-3Ch]@1
  Random *v47; // [sp+18h] [bp-38h]@1
  const ChunkPos *v48; // [sp+1Ch] [bp-34h]@1
  int v49; // [sp+20h] [bp-30h]@41
  pthread_mutex_t *mutex; // [sp+24h] [bp-2Ch]@15
  unsigned __int8 v51; // [sp+28h] [bp-28h]@46

  v5 = a4;
  v6 = this;
  v46 = a2;
  v47 = a3;
  v48 = a4;
  v45 = this;
  j_Random::_genRandInt32(a3);
  v8 = *((_DWORD *)v6 + 1);
  v6 = (StructureFeature *)((char *)v6 + 4);
  v7 = v8;
  v44 = (int)v6;
  v9 = *((_DWORD *)v6 + 1);
  v10 = 522133279 * *(_QWORD *)v5 ^ (*(_QWORD *)v5 >> 32);
  v11 = *(int **)(v8 + 4 * (v10 % v9));
  v12 = v11 == 0;
  if ( v11 )
  {
    v7 = *v11;
    v12 = *v11 == 0;
  }
  if ( v12 )
    goto LABEL_59;
  result = v48;
  v14 = 0;
  v15 = *(_DWORD *)(v7 + 24);
  v4 = *(_QWORD *)v48;
  do
    v16 = v15 == v10;
    if ( v15 == v10 )
    {
      result = (const ChunkPos *)(*(_QWORD *)(v7 + 8) ^ v4 | (*(_QWORD *)(v7 + 8) >> 32) ^ HIDWORD(v4));
      v16 = *(_QWORD *)(v7 + 8) == v4;
    }
    if ( v16 )
      ++v14;
    else
      if ( v14 )
        return result;
      v14 = 0;
    v7 = *(_DWORD *)v7;
    if ( !v7 )
      break;
    v15 = *(_DWORD *)(v7 + 24);
    v17 = *(_DWORD *)(v7 + 24);
    v18 = v17 % v9;
    result = (const ChunkPos *)(v17 / v9);
  while ( v18 == v10 % v9 );
  if ( !v14 )
LABEL_59:
    v19 = *(int (__fastcall **)(StructureFeature *, void *, Random *, const ChunkPos *))(*(_DWORD *)v45 + 24);
    v20 = Dimension::getBiomes(v46);
    v21 = ThreadLocal<BiomeSource>::getLocal((int)v20);
    result = (const ChunkPos *)v19(v45, v21, v47, v48);
    if ( result == (const ChunkPos *)1 )
      UniqueLock::UniqueLock((int)&mutex, (pthread_mutex_t *)((char *)v45 + 32));
      v22 = (pthread_mutex_t *)*((_DWORD *)v45 + 2);
      v23 = *(_QWORD *)v48;
      v24 = 522133279 * v23 ^ (*(_QWORD *)v48 >> 32);
      v25 = *(_DWORD **)(*((_DWORD *)v45 + 1) + 4 * (v24 % (unsigned int)v22));
      v26 = v25 == 0;
      if ( v25 )
      {
        LODWORD(v4) = *v25;
        v26 = *v25 == 0;
      }
      if ( v26 )
        goto LABEL_60;
      v27 = 0;
      v28 = *(_DWORD *)(v4 + 24);
      do
        v29 = v28 == v24;
        if ( v28 == v24 )
        {
          v30 = *(_QWORD *)(v4 + 8);
          HIDWORD(v30) ^= *(_QWORD *)v48 >> 32;
          v29 = v30 == v23;
        }
        if ( v29 )
          ++v27;
        else
          if ( v27 )
            goto LABEL_46;
          v27 = 0;
        LODWORD(v4) = *(_DWORD *)v4;
        if ( !(_DWORD)v4 )
          break;
        v28 = *(_DWORD *)(v4 + 24);
      while ( *(_DWORD *)(v4 + 24) % (unsigned int)v22 == v24 % (unsigned int)v22 );
      if ( !v27 )
LABEL_60:
        v31 = 522133279 * v23 ^ (*(_QWORD *)v48 >> 32);
        v32 = v31 % (unsigned int)v22;
        v33 = *(pthread_mutex_t ***)(*((_DWORD *)v45 + 1) + 4 * (v31 % (unsigned int)v22));
        if ( !v33 )
          goto LABEL_40;
        v34 = *v33;
        v35 = (*v33)[1].__lock;
        while ( 1 )
          v36 = v35 == v31;
          if ( v35 == v31 )
            v36 = *(_QWORD *)&v34->__owner == *(_QWORD *)v48;
          if ( v36 )
            break;
          v37 = (pthread_mutex_t *)v34->__lock;
          if ( v34->__lock )
          {
            v35 = v37[1].__lock;
            v33 = (pthread_mutex_t **)v34;
            v34 = (pthread_mutex_t *)v34->__lock;
            if ( v37[1].__lock % (unsigned int)v22 == v32 )
              continue;
          }
        v38 = v33 == 0;
        if ( v33 )
          v22 = *v33;
          v38 = *v33 == 0;
        if ( v38 )
LABEL_40:
          v39 = j_operator new(0x20u);
          *(_DWORD *)v39 = 0;
          v39[1] = *(_QWORD *)v48;
          *((_DWORD *)v39 + 4) = 0;
          v22 = (pthread_mutex_t *)std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::unique_ptr<StructureStart,std::default_delete<StructureStart>>>,std::allocator<std::pair<ChunkPos const,std::unique_ptr<StructureStart,std::default_delete<StructureStart>>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                                     v44,
                                     v32,
                                     v31,
                                     (int)v39);
        (*(void (__fastcall **)(int *))(*(_DWORD *)v45 + 28))(&v49);
        v40 = v49;
        v49 = 0;
        v41 = v22->__nusers;
        v22->__nusers = v40;
        if ( v41 )
          (*(void (__cdecl **)(unsigned int))(*(_DWORD *)v41 + 4))(v41);
        if ( v49 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v49 + 4))(v49);
LABEL_46:
      result = (const ChunkPos *)v51;
      v42 = v51 == 0;
      if ( v51 )
        v22 = mutex;
        v42 = mutex == 0;
      if ( !v42 )
        if ( &pthread_create )
          v43 = j_pthread_mutex_lock(v22);
          if ( v43 )
            sub_21E5E14(v43);
          v22->__kind = 0;
          if ( &pthread_create )
            j_pthread_mutex_unlock(v22);
        sub_21E03D8((pthread_cond_t *)&v22->__count);
        result = 0;
        v51 = 0;
  return result;
}
