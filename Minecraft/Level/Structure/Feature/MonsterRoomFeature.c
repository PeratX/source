

signed int __fastcall MonsterRoomFeature::place(MonsterRoomFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r11@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  unsigned int v7; // r4@1
  char v8; // r0@1
  int v9; // r9@1
  int v10; // r0@2
  int v11; // r2@2
  unsigned int v12; // r1@2
  int v13; // r0@2
  int v14; // r7@2
  int v15; // r10@2
  int v16; // r8@3
  int v17; // r1@4
  int v18; // r11@5
  Material *v19; // r7@6
  int v20; // r0@6
  int v21; // r1@11
  bool v22; // zf@11
  int v23; // r0@14
  bool v24; // zf@14
  int v25; // r0@20
  bool v26; // nf@25
  unsigned __int8 v27; // vf@25
  int v28; // r1@26
  int v29; // r2@26
  signed int result; // r0@27
  int v31; // r4@28
  int v32; // r0@28
  int v33; // r1@29
  int v34; // r8@30
  int v35; // r0@30
  int v36; // r1@30
  int v37; // r9@32
  int v38; // r2@33
  bool v39; // zf@34
  bool v40; // zf@37
  Material *v41; // r0@41
  Material *v42; // r0@42
  BlockSource *v43; // r1@45
  const BlockPos *v44; // r2@45
  char *v45; // r3@45
  Feature *v46; // r0@45
  int v47; // r7@51
  int v48; // r2@52
  bool v49; // zf@52
  int v50; // r1@55
  bool v51; // zf@55
  Material *v52; // r0@60
  int v53; // r7@68
  int v54; // r1@68
  unsigned int *v55; // r2@71
  signed int v56; // r1@73
  int v57; // r10@78
  unsigned int v58; // r9@79
  unsigned int v59; // r1@79
  int v60; // r2@79
  int v61; // r4@79
  int v62; // r8@79
  int v63; // r9@79
  Material *v64; // r0@80
  int v65; // r11@80
  Material *v66; // r0@80
  int v67; // r7@80
  Material *v68; // r0@80
  int v69; // r0@80
  __int64 v70; // r1@80
  signed int v71; // r4@80
  Material *v72; // r0@86
  MonsterRoomFeature *v73; // r0@86
  char v74; // r0@91
  int v75; // r4@91
  unsigned int v76; // r0@92
  void *v77; // r0@92
  MobSpawnerBlockEntity *v78; // r0@95
  int v79; // r4@96
  char v80; // r0@96
  int v81; // [sp+Ch] [bp-BCh]@2
  int v82; // [sp+Ch] [bp-BCh]@28
  int v83; // [sp+10h] [bp-B8h]@2
  int v84; // [sp+14h] [bp-B4h]@2
  int v85; // [sp+18h] [bp-B0h]@2
  Random *v86; // [sp+1Ch] [bp-ACh]@1
  Random *v87; // [sp+1Ch] [bp-ACh]@80
  MonsterRoomFeature *v88; // [sp+20h] [bp-A8h]@1
  int v89; // [sp+24h] [bp-A4h]@2
  unsigned int v90; // [sp+28h] [bp-A0h]@2
  unsigned int v91; // [sp+28h] [bp-A0h]@28
  int v92; // [sp+28h] [bp-A0h]@78
  int v93; // [sp+2Ch] [bp-9Ch]@1
  unsigned int v94; // [sp+30h] [bp-98h]@1
  char v95; // [sp+34h] [bp-94h]@95
  char v96; // [sp+35h] [bp-93h]@95
  int v97; // [sp+3Ch] [bp-8Ch]@71
  char v98; // [sp+40h] [bp-88h]@91
  char v99; // [sp+41h] [bp-87h]@91
  __int64 v100; // [sp+44h] [bp-84h]@80
  int v101; // [sp+4Ch] [bp-7Ch]@80
  unsigned __int64 v102; // [sp+50h] [bp-78h]@80
  int v103; // [sp+58h] [bp-70h]@80
  int v104; // [sp+5Ch] [bp-6Ch]@80
  int v105; // [sp+60h] [bp-68h]@80
  int v106; // [sp+64h] [bp-64h]@80
  int v107; // [sp+68h] [bp-60h]@80
  int v108; // [sp+6Ch] [bp-5Ch]@80
  int v109; // [sp+70h] [bp-58h]@80
  char v110; // [sp+74h] [bp-54h]@47
  char v111; // [sp+75h] [bp-53h]@47
  char v112; // [sp+78h] [bp-50h]@45
  char v113; // [sp+79h] [bp-4Fh]@45
  int v114; // [sp+7Ch] [bp-4Ch]@41
  int v115; // [sp+80h] [bp-48h]@41
  int v116; // [sp+84h] [bp-44h]@41
  unsigned __int64 v117; // [sp+88h] [bp-40h]@20
  int v118; // [sp+90h] [bp-38h]@20
  unsigned __int64 v119; // [sp+94h] [bp-34h]@6
  int v120; // [sp+9Ch] [bp-2Ch]@6
  int v121; // [sp+B0h] [bp-18h]@71
  int v122; // [sp+B8h] [bp-10h]@77

  v4 = a4;
  v88 = this;
  v86 = a4;
  v5 = a3;
  v6 = a2;
  v7 = j_Random::_genRandInt32(a4) & 1;
  v8 = j_Random::_genRandInt32(v4);
  v94 = v7 ^ 0xFFFFFFFD;
  v9 = (v7 ^ 0xFFFFFFFD) + *(_DWORD *)v5;
  v93 = (v7 | 2) + 1;
  if ( v9 > *(_DWORD *)v5 + v93 )
  {
LABEL_69:
    result = 0;
  }
  else
    v10 = v8 & 1;
    v81 = v10;
    v11 = v10 | 2;
    v12 = v10 ^ 0xFFFFFFFD;
    v13 = *((_DWORD *)v5 + 1);
    v14 = v12 - 1;
    v15 = v11 + 1;
    v90 = v12;
    v84 = v7 | 2;
    v83 = v11;
    v85 = v12 - 1;
    v89 = 0;
    while ( 2 )
    {
      v16 = v13 - 1;
      do
      {
        v17 = *((_DWORD *)v5 + 2);
        if ( (signed int)(v90 + v17) <= v15 + v17 )
        {
          v18 = v14 + v17;
          while ( 1 )
          {
            v119 = __PAIR__(v16, v9);
            v120 = ++v18;
            v19 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v119);
            v20 = *((_DWORD *)v5 + 1);
            if ( v16 == v20 - 1 )
            {
              if ( j_Material::isSolid(v19) != 1 )
                goto LABEL_69;
              v20 = *((_DWORD *)v5 + 1);
            }
            if ( v16 == v20 + 4 && j_Material::isSolid(v19) != 1 )
              goto LABEL_69;
            v21 = v94 + *(_DWORD *)v5;
            v22 = v9 == v21;
            if ( v9 != v21 )
              v22 = v9 == *(_DWORD *)v5 + v93;
            if ( v22 )
              goto LABEL_100;
            v23 = *((_DWORD *)v5 + 2);
            v24 = v18 == v90 + v23;
            if ( v18 != v90 + v23 )
              v24 = v18 == v23 + v15;
            if ( v24 )
LABEL_100:
              if ( v16 == *((_DWORD *)v5 + 1) && j_BlockSource::isEmptyBlock(v6, (const BlockPos *)&v119) == 1 )
              {
                v117 = v119 + 0x100000000LL;
                v118 = v120;
                v22 = j_BlockSource::isEmptyBlock(v6, (const BlockPos *)&v117) == 0;
                v25 = v89;
                if ( !v22 )
                  v25 = v89 + 1;
                v89 = v25;
              }
            if ( v18 >= *((_DWORD *)v5 + 2) + v15 )
              v13 = *((_DWORD *)v5 + 1);
              v4 = v86;
              v14 = v85;
              break;
          }
        }
        v27 = __OFSUB__(v16, v13 + 4);
        v26 = v16++ - (v13 + 4) < 0;
      }
      while ( v26 ^ v27 );
      v28 = *(_DWORD *)v5;
      v29 = v93 + *(_DWORD *)v5;
      v27 = __OFSUB__(v9, v29);
      v26 = v9++ - v29 < 0;
      if ( v26 ^ v27 )
        continue;
      break;
    }
    if ( (unsigned int)(v89 - 1) <= 4 )
      v91 = v81 ^ 0xFFFFFFFD;
      v31 = v94 + v28;
      v32 = *((_DWORD *)v5 + 1);
      v82 = v28 + v84 + 2;
        v33 = v32 + 3;
        do
          v34 = v33;
          v35 = *((_DWORD *)v5 + 2);
          v36 = v91 + v35;
          if ( (signed int)(v91 + v35) <= v15 + v35 )
            if ( v34 < 0 )
              do
                v47 = v36;
                v119 = __PAIR__(v34, v31);
                v120 = v36;
                if ( v31 == v94 + *(_DWORD *)v5 )
                  goto LABEL_101;
                v48 = *((_DWORD *)v5 + 1);
                v49 = v34 == v48 - 1;
                if ( v34 != v48 - 1 )
                  v49 = v36 == v91 + v35;
                if ( v49 )
                v50 = *(_DWORD *)v5 + v93;
                v51 = v31 == v50;
                if ( v31 != v50 )
                  v51 = v34 == v48 + 4;
                if ( v51 || v47 == v35 + v15 )
                {
LABEL_101:
                  v52 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v119);
                  if ( j_Material::isSolid(v52) == 1 )
                  {
                    if ( v34 == *((_DWORD *)v5 + 1) - 1 && j_Random::_genRandInt32(v4) & 3 )
                    {
                      v112 = *(_BYTE *)(Block::mMossyCobblestone + 4);
                      v113 = 0;
                      j_Feature::_setBlockAndData(v88, v6, (const BlockPos *)&v119, (const FullBlock *)&v112);
                    }
                    else
                      v110 = *(_BYTE *)(Block::mCobblestone + 4);
                      v111 = 0;
                      j_Feature::_setBlockAndData(v88, v6, (const BlockPos *)&v119, (const FullBlock *)&v110);
                  }
                }
                else
                  j_BlockSource::removeBlock(v6, v31, v34, v47);
                v35 = *((_DWORD *)v5 + 2);
                v36 = v47 + 1;
              while ( v47 < v15 + v35 );
            else
                v37 = v36;
                  goto LABEL_102;
                v38 = *((_DWORD *)v5 + 1);
                if ( v34 == v38 - 1 )
                v39 = v36 == v91 + v35;
                if ( v36 != v91 + v35 )
                  v39 = v31 == *(_DWORD *)v5 + v93;
                if ( v39 )
                v40 = v34 == v38 + 4;
                if ( v34 != v38 + 4 )
                  v40 = v36 == v35 + v15;
                if ( v40 )
LABEL_102:
                  v114 = v31;
                  v115 = v34 - 1;
                  v116 = v36;
                  v41 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v114);
                  if ( j_Material::isSolid(v41) )
                    v42 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v119);
                    if ( j_Material::isSolid(v42) == 1 )
                      if ( v34 == *((_DWORD *)v5 + 1) - 1 && j_Random::_genRandInt32(v4) & 3 )
                      {
                        v43 = v6;
                        v44 = (const BlockPos *)&v119;
                        v45 = &v112;
                        v112 = *(_BYTE *)(Block::mMossyCobblestone + 4);
                        v113 = 0;
                        v46 = v88;
                      }
                      else
                        v45 = &v110;
                        v110 = *(_BYTE *)(Block::mCobblestone + 4);
                        v111 = 0;
                      j_Feature::_setBlockAndData(v46, v43, v44, (const FullBlock *)v45);
                  else
                    j_BlockSource::removeBlock(v6, v119, SHIDWORD(v119), v120);
                  j_BlockSource::removeBlock(v6, v31, v34, v36);
                v36 = v37 + 1;
              while ( v37 < v15 + v35 );
          v32 = *((_DWORD *)v5 + 1);
          v33 = v34 - 1;
        while ( v34 >= v32 );
        ++v31;
      while ( v31 != v82 );
      v53 = v84;
      v54 = 0;
        v57 = 0;
        v92 = v54;
        while ( 1 )
          v58 = j_Random::_genRandInt32(v4);
          v59 = j_Random::_genRandInt32(v4) % (2 * v84 | 1u);
          v60 = *((_DWORD *)v5 + 1);
          v61 = *((_DWORD *)v5 + 2);
          v62 = v59 - v53;
          LODWORD(v119) = *(_DWORD *)v5 + v59 - v53;
          HIDWORD(v119) = v60;
          v63 = v58 % (2 * v83 | 1u) - v83;
          v120 = v61 + v63;
          if ( j_BlockSource::isEmptyBlock(v6, (const BlockPos *)&v119) == 1 )
            v107 = v119 - 1;
            v108 = HIDWORD(v119);
            v109 = v120;
            v64 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v107);
            v87 = v4;
            v65 = j_Material::isSolid(v64);
            v104 = v119 + 1;
            v105 = HIDWORD(v119);
            v106 = v120;
            v66 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v104);
            v67 = j_Material::isSolid(v66);
            v102 = v119;
            v103 = v120 - 1;
            v68 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v102);
            v69 = j_Material::isSolid(v68);
            HIDWORD(v70) = HIDWORD(v119);
            LODWORD(v70) = v119;
            v71 = 1;
            v100 = v70;
            v101 = v120 + 1;
            if ( v65 )
              v71 = 2;
            if ( !v67 )
              v71 = v65;
            v4 = v87;
            if ( v69 )
              ++v71;
            v72 = (Material *)j_BlockSource::getMaterial(v6, (const BlockPos *)&v100);
            v73 = (MonsterRoomFeature *)j_Material::isSolid(v72);
            if ( v73 )
            if ( v71 == 1 )
          v53 = v84;
          if ( ++v57 >= 3 )
            goto LABEL_94;
        v74 = j_MonsterRoomFeature::_getFacingDataId(v73, v6, (const BlockPos *)&v119, v62, v63);
        v98 = *(_BYTE *)(Block::mChest + 4);
        v99 = v74;
        j_Feature::_setBlockAndData(v88, v6, (const BlockPos *)&v119, (const FullBlock *)&v98);
        v75 = j_BlockSource::getBlockEntity(v6, (const BlockPos *)&v119);
        if ( !v75 )
          goto LABEL_103;
        sub_21E94B4((void **)&v97, "loot_tables/chests/simple_dungeon.json");
        v76 = j_Random::_genRandInt32(v87);
        j_RandomizableBlockEntityContainerBase::setLootTable(v75, &v97, v76 >> 1);
        v77 = (void *)(v97 - 12);
        if ( (int *)(v97 - 12) == &dword_28898C0 )
        v55 = (unsigned int *)(v97 - 4);
        if ( v121 )
          __dmb();
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
        else
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
          v53 = v122;
LABEL_103:
LABEL_94:
        v54 = v92 + 1;
      while ( v92 + 1 < 2 );
      v95 = *(_BYTE *)(Block::mMobSpawner + 4);
      v96 = 0;
      j_Feature::_setBlockAndData(v88, v6, v5, (const FullBlock *)&v95);
      v78 = (MobSpawnerBlockEntity *)j_BlockSource::getBlockEntity(v6, v5);
      if ( v78 )
        v79 = j_MobSpawnerBlockEntity::getSpawner(v78);
        v80 = j_Random::_genRandInt32(v4);
        j_BaseMobSpawner::setEntityId(v79, dword_2610B0C[v80 & 3]);
      result = 1;
  return result;
}


signed int __fastcall MonsterRoomFeature::_getFacingDataId(MonsterRoomFeature *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  int v5; // r4@1
  const BlockPos *v6; // r6@1
  BlockSource *v7; // r5@1
  int v8; // r2@2
  signed int v9; // r8@3
  signed int result; // r0@6
  int v11; // r2@7
  int v12; // r1@10
  int v13; // r2@10
  signed int v14; // r1@13
  char v15; // r1@16
  int v16; // r0@17
  int v17; // r1@17
  int v18; // r2@17
  signed int v19; // r6@17
  bool v20; // zf@19
  int v21; // r2@19
  int v22; // [sp+0h] [bp-48h]@17
  int v23; // [sp+4h] [bp-44h]@17
  int v24; // [sp+8h] [bp-40h]@17
  int v25; // [sp+Ch] [bp-3Ch]@10
  int v26; // [sp+10h] [bp-38h]@10
  int v27; // [sp+14h] [bp-34h]@10
  __int64 v28; // [sp+18h] [bp-30h]@7
  int v29; // [sp+20h] [bp-28h]@7
  __int64 v30; // [sp+24h] [bp-24h]@2
  int v31; // [sp+2Ch] [bp-1Ch]@2

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( a5 < 1 )
  {
    if ( a5 <= -1 )
    {
      v11 = *((_DWORD *)a3 + 2);
      v28 = *(_QWORD *)v6;
      v29 = v11 - 1;
      if ( j_BlockSource::isEmptyBlock(a2, (const BlockPos *)&v28) != 1 )
      {
        LOBYTE(result) = 3;
        return (unsigned __int8)result;
      }
      v9 = 1;
    }
    else
      v9 = 0;
  }
  else
    v8 = *((_DWORD *)a3 + 2);
    v30 = *(_QWORD *)v6;
    v31 = v8 + 1;
    if ( !j_BlockSource::isEmptyBlock(a2, (const BlockPos *)&v30) )
      LOBYTE(result) = 2;
      return (unsigned __int8)result;
    v9 = 0;
  if ( v5 < 1 )
    if ( v5 <= -1 )
      v16 = *(_DWORD *)v6;
      v17 = *((_DWORD *)v6 + 1);
      v18 = *((_DWORD *)v6 + 2);
      v19 = 0;
      v22 = v16 - 1;
      v23 = v17;
      v24 = v18;
      if ( a5 > 0 )
        v19 = 1;
      result = j_BlockSource::isEmptyBlock(v7, (const BlockPos *)&v22);
      v20 = result == 0;
      v21 = v19 | result ^ 1;
      LOBYTE(result) = 5;
      if ( !v20 )
        LOBYTE(result) = 2;
      if ( !v21 )
      v15 = 5;
      if ( v21 | v9 )
      goto LABEL_24;
    v12 = *((_DWORD *)v6 + 1);
    v13 = *((_DWORD *)v6 + 2);
    v25 = *(_DWORD *)v6 + 1;
    v26 = v12;
    v27 = v13;
    if ( !j_BlockSource::isEmptyBlock(v7, (const BlockPos *)&v25) )
      LOBYTE(result) = 4;
  LOBYTE(result) = 3;
  v14 = 0;
  if ( a5 > 0 )
    LOBYTE(result) = 2;
    v14 = 1;
  if ( v14 | v9 )
    return (unsigned __int8)result;
  v15 = 2;
LABEL_24:
  if ( v5 > 0 )
    v15 = 4;
  return (unsigned __int8)v15;
}


void __fastcall MonsterRoomFeature::~MonsterRoomFeature(MonsterRoomFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}


_DWORD *__fastcall MonsterRoomFeature::MonsterRoomFeature(Feature *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Feature::Feature(a1, 0);
  *result = &off_272369C;
  return result;
}


void __fastcall MonsterRoomFeature::~MonsterRoomFeature(MonsterRoomFeature *this)
{
  MonsterRoomFeature::~MonsterRoomFeature(this);
}


int __fastcall MonsterRoomFeature::_getRandomEntityId(MonsterRoomFeature *this, Random *a2)
{
  return dword_2610B0C[j_Random::_genRandInt32(a2) & 3];
}
