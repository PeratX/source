

signed int __fastcall SwamplandHut::postProcess(SwamplandHut *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r11@1
  Random *v5; // r4@1
  BlockSource *v6; // r10@1
  StructurePiece *v7; // r6@1
  signed int v8; // r7@1
  void (__fastcall *v9)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v10)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v11)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v12)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v13)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v14)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v15)(StructurePiece *, BlockSource *, char *, signed int); // r7@2
  BlockEntity *v16; // r0@2
  FlowerPotBlockEntity *v17; // r5@2
  __int64 v18; // r2@3
  void (__fastcall *v19)(StructurePiece *, BlockSource *, char *, signed int); // r7@5
  void (__fastcall *v20)(StructurePiece *, BlockSource *, char *, signed int); // r5@5
  void (__fastcall *v21)(StructurePiece *, BlockSource *, char *, signed int); // r5@5
  char v22; // ST30_1@5
  char v23; // r9@5
  char v24; // ST34_1@5
  void (__fastcall *v25)(StructurePiece *, BlockSource *, char *, signed int); // r4@5
  void (__fastcall *v26)(StructurePiece *, BlockSource *, char *, signed int); // r4@5
  void (__fastcall *v27)(StructurePiece *, BlockSource *, char *, signed int); // r4@5
  void (__fastcall *v28)(StructurePiece *, BlockSource *, char *, signed int); // r4@5
  char v30; // [sp+38h] [bp-D8h]@5
  char v31; // [sp+39h] [bp-D7h]@5
  char v32; // [sp+3Ch] [bp-D4h]@5
  char v33; // [sp+40h] [bp-D0h]@5
  char v34; // [sp+44h] [bp-CCh]@5
  char v35; // [sp+48h] [bp-C8h]@5
  char v36; // [sp+4Ch] [bp-C4h]@5
  char v37; // [sp+50h] [bp-C0h]@5
  char v38; // [sp+54h] [bp-BCh]@5
  char v39; // [sp+58h] [bp-B8h]@5
  char v40; // [sp+5Ch] [bp-B4h]@5
  char v41; // [sp+5Dh] [bp-B3h]@5
  char v42; // [sp+60h] [bp-B0h]@5
  char v43; // [sp+61h] [bp-AFh]@5
  char v44; // [sp+64h] [bp-ACh]@5
  char v45; // [sp+65h] [bp-ABh]@5
  char v46; // [sp+68h] [bp-A8h]@2
  char v47; // [sp+69h] [bp-A7h]@2
  char v48; // [sp+74h] [bp-9Ch]@2
  char v49; // [sp+75h] [bp-9Bh]@2
  char v50; // [sp+78h] [bp-98h]@2
  char v51; // [sp+79h] [bp-97h]@2
  char v52; // [sp+7Ch] [bp-94h]@2
  char v53; // [sp+7Dh] [bp-93h]@2
  char v54; // [sp+80h] [bp-90h]@2
  char v55; // [sp+81h] [bp-8Fh]@2
  char v56; // [sp+84h] [bp-8Ch]@2
  char v57; // [sp+85h] [bp-8Bh]@2
  char v58; // [sp+88h] [bp-88h]@2
  char v59; // [sp+89h] [bp-87h]@2
  char v60; // [sp+8Ch] [bp-84h]@2
  char v61; // [sp+90h] [bp-80h]@2
  char v62; // [sp+94h] [bp-7Ch]@2
  char v63; // [sp+98h] [bp-78h]@2
  char v64; // [sp+9Ch] [bp-74h]@2
  char v65; // [sp+A0h] [bp-70h]@2
  char v66; // [sp+A4h] [bp-6Ch]@2
  char v67; // [sp+A8h] [bp-68h]@2
  char v68; // [sp+ACh] [bp-64h]@2
  char v69; // [sp+B0h] [bp-60h]@2
  char v70; // [sp+B4h] [bp-5Ch]@2
  char v71; // [sp+B8h] [bp-58h]@2
  char v72; // [sp+BCh] [bp-54h]@2
  char v73; // [sp+C0h] [bp-50h]@2
  char v74; // [sp+C4h] [bp-4Ch]@2
  char v75; // [sp+C8h] [bp-48h]@2
  char v76; // [sp+CCh] [bp-44h]@2
  char v77; // [sp+D0h] [bp-40h]@2
  char v78; // [sp+D4h] [bp-3Ch]@2
  char v79; // [sp+D8h] [bp-38h]@2
  char v80; // [sp+DCh] [bp-34h]@2
  char v81; // [sp+E0h] [bp-30h]@2
  char v82; // [sp+E4h] [bp-2Ch]@2
  char v83; // [sp+E8h] [bp-28h]@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = 0;
  if ( ScatteredFeaturePiece::updateAverageGroundHeight(this, a2, a4, 1) == 1 )
  {
    v83 = *(_BYTE *)(Block::mAir + 4);
    v82 = *(_BYTE *)(Block::mAir + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 0, 2, 0, 6, 3, 8, &v83, 0, &v82, 0);
    v81 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v80 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 1, 1, 1, 5, 1, 7, &v81, 1, &v80, 1);
    v79 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v78 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 1, 5, 2, 5, 5, 7, &v79, 1, &v78, 1);
    v77 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v76 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 2, 1, 0, 4, 1, 0, &v77, 1, &v76, 1);
    v75 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v74 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 2, 2, 2, 3, 4, 2, &v75, 1, &v74, 1);
    v73 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v72 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 1, 2, 3, 1, 4, 6, &v73, 1, &v72, 1);
    v71 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v70 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 5, 2, 3, 5, 4, 6, &v71, 1, &v70, 1);
    v69 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v68 = *(_BYTE *)(Block::mWoodPlanks + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 2, 2, 7, 4, 4, 7, &v69, 1, &v68, 1);
    v67 = *(_BYTE *)(Block::mLog + 4);
    v66 = *(_BYTE *)(Block::mLog + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 1, 0, 2, 1, 4, 2, &v67, 0, &v66, 0);
    v65 = *(_BYTE *)(Block::mLog + 4);
    v64 = *(_BYTE *)(Block::mLog + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 5, 0, 2, 5, 4, 2, &v65, 0, &v64, 0);
    v63 = *(_BYTE *)(Block::mLog + 4);
    v62 = *(_BYTE *)(Block::mLog + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 1, 0, 7, 1, 4, 7, &v63, 0, &v62, 0);
    v61 = *(_BYTE *)(Block::mLog + 4);
    v60 = *(_BYTE *)(Block::mLog + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 5, 0, 7, 5, 4, 7, &v61, 0, &v60, 0);
    v9 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v58 = *(_BYTE *)(Block::mFence + 4);
    v59 = 0;
    v9(v7, v6, &v58, 2);
    v10 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v56 = *(_BYTE *)(Block::mFence + 4);
    v57 = 0;
    v10(v7, v6, &v56, 3);
    v11 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v54 = *(_BYTE *)(Block::mAir + 4);
    v55 = 0;
    v11(v7, v6, &v54, 1);
    v12 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v52 = *(_BYTE *)(Block::mAir + 4);
    v53 = 0;
    v12(v7, v6, &v52, 5);
    v13 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v50 = *(_BYTE *)(Block::mAir + 4);
    v51 = 0;
    v13(v7, v6, &v50, 5);
    v14 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v48 = *(_BYTE *)(Block::mFlowerPot + 4);
    v49 = 0;
    v14(v7, v6, &v48, 1);
    v15 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v46 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v47 = 1;
    v15(v7, v6, &v46, 4);
    StructurePiece::_getWorldPos((StructurePiece *)&v46, (int)v7, 1, 3, 5);
    v16 = (BlockEntity *)j_BlockSource::getBlockEntity(v6, (const BlockPos *)&v46);
    v17 = v16;
    if ( v16 && *(_DWORD *)j_BlockEntity::getType(v16) == 7 )
    {
      LODWORD(v18) = 0;
      FlowerPotBlockEntity::setPlantItem(v17, (const Block *)Block::mRedMushroom, v18);
    }
    v19 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v44 = *(_BYTE *)(Block::mWorkBench + 4);
    v45 = 0;
    v19(v7, v6, &v44, 3);
    SwamplandHut::placeCauldron((int)v7, (int)v6, (int)v5, 4, 2, 6, (int)v4);
    v8 = 1;
    v20 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v42 = *(_BYTE *)(Block::mFence + 4);
    v43 = 0;
    v20(v7, v6, &v42, 1);
    v21 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v40 = *(_BYTE *)(Block::mFence + 4);
    v41 = 0;
    v21(v7, v6, &v40, 5);
    LOBYTE(v21) = StructurePiece::getOrientationData(v7, (const Block *)Block::mOakStairs, 3);
    v22 = StructurePiece::getOrientationData(v7, (const Block *)Block::mOakStairs, 1);
    v23 = StructurePiece::getOrientationData(v7, (const Block *)Block::mOakStairs, 0);
    v24 = StructurePiece::getOrientationData(v7, (const Block *)Block::mOakStairs, 2);
    v39 = *(_BYTE *)(Block::mSpruceStairs + 4);
    v38 = *(_BYTE *)(Block::mSpruceStairs + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 0, 5, 1, 6, 5, 1, &v39, (char)v21, &v38, (char)v21);
    v37 = *(_BYTE *)(Block::mSpruceStairs + 4);
    v36 = *(_BYTE *)(Block::mSpruceStairs + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 0, 5, 2, 0, 5, 7, &v37, v23, &v36, v23);
    v35 = *(_BYTE *)(Block::mSpruceStairs + 4);
    v34 = *(_BYTE *)(Block::mSpruceStairs + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 6, 5, 2, 6, 5, 7, &v35, v22, &v34, v22);
    v33 = *(_BYTE *)(Block::mSpruceStairs + 4);
    v32 = *(_BYTE *)(Block::mSpruceStairs + 4);
    StructurePiece::generateBox((int)v7, (int)v6, (int)v4, 0, 5, 8, 6, 5, 8, &v33, v24, &v32, v24);
    v25 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 44);
    v30 = *(_BYTE *)(Block::mLog + 4);
    v31 = 0;
    v25(v7, v6, &v30, 1);
    v26 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 44);
    v26(v7, v6, &v30, 5);
    v27 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 44);
    v27(v7, v6, &v30, 1);
    v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 44);
    v28(v7, v6, &v30, 5);
  }
  return v8;
}


char *__fastcall SwamplandHut::addHardcodedSpawnAreas(SwamplandHut *this, LevelChunk *a2)
{
  return j_j_j__ZN10LevelChunk24addHardcodedSpawningAreaERK11BoundingBox22HardcodedSpawnAreaType(
           (int)a2,
           (int)this + 4,
           2);
}


void __fastcall SwamplandHut::postProcessMobsAt(SwamplandHut *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SwamplandHut::postProcessMobsAt(this, a2, a3, a4);
}


signed int __fastcall SwamplandHut::getType(SwamplandHut *this)
{
  return 1465140040;
}


void __fastcall SwamplandHut::postProcessMobsAt(SwamplandHut *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SwamplandHut *v4; // r6@1
  BlockSource *v5; // r4@1
  int v6; // r9@2
  int v7; // r7@2
  int v8; // r5@2
  Level *v9; // r0@2
  Spawner *v10; // r8@2
  const Vec3 *v11; // r0@2
  Entity *v12; // r4@2
  void *v13; // r0@2
  void *v14; // r0@3
  void *v15; // r0@4
  void *v16; // r0@5
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  int v25; // [sp+10h] [bp-60h]@2
  int v26; // [sp+14h] [bp-5Ch]@2
  signed int v27; // [sp+18h] [bp-58h]@2
  char v28; // [sp+1Ch] [bp-54h]@2
  int v29; // [sp+20h] [bp-50h]@2
  int v30; // [sp+24h] [bp-4Ch]@2
  int v31; // [sp+28h] [bp-48h]@2
  int v32; // [sp+2Ch] [bp-44h]@2
  int v33; // [sp+30h] [bp-40h]@2
  char v34; // [sp+34h] [bp-3Ch]@2
  int v35; // [sp+40h] [bp-30h]@2
  int v36; // [sp+44h] [bp-2Ch]@2
  int v37; // [sp+48h] [bp-28h]@3
  int v38; // [sp+4Ch] [bp-24h]@2

  v4 = this;
  v5 = a2;
  if ( !*((_BYTE *)this + 52) )
  {
    v6 = (*(int (__fastcall **)(SwamplandHut *, signed int, signed int))(*(_DWORD *)this + 28))(this, 2, 5);
    v7 = StructurePiece::getWorldY(v4, 2);
    v8 = (*(int (__fastcall **)(SwamplandHut *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 2, 5);
    *((_BYTE *)v4 + 52) = 1;
    v9 = (Level *)j_BlockSource::getLevel(v5);
    v10 = (Spawner *)Level::getSpawner(v9);
    j_EntityTypeToString((void **)&v35, 0xB2Du, 1);
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v36, &v35);
    v25 = 1056964608;
    v26 = 0;
    v27 = 1056964608;
    j_BlockPos::BlockPos((int)&v28, (int)&v25);
    v31 = *(_DWORD *)&v28 + v6;
    v32 = v29 + v7;
    v33 = v30 + v8;
    j_Vec3::Vec3((int)&v34, (int)&v31);
    v12 = (Entity *)Spawner::spawnMob(v10, v5, (const EntityDefinitionIdentifier *)&v36, 0, v11, 0, 1, 0);
    v13 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v37 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v36 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v35 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    if ( v12 )
      Entity::setPersistent(v12);
  }
}


int __fastcall SwamplandHut::SwamplandHut(int result, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r1@1

  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 36) = 7;
  *(_DWORD *)(result + 40) = 7;
  *(_DWORD *)(result + 44) = 9;
  v3 = a2 + 6;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)result = &off_2719314;
  *(_DWORD *)(result + 4) = a2;
  v4 = result + 16;
  *(_DWORD *)(result + 8) = 64;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)v4 = v3;
  *(_DWORD *)(v4 + 4) = 70;
  *(_DWORD *)(v4 + 8) = a3 + 8;
  *(_BYTE *)(result + 52) = 0;
  return result;
}


const BoundingBox *__fastcall SwamplandHut::placeCauldron(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return SwamplandHut::placeCauldron(
           (SwamplandHut *)this,
           (BlockSource *)a2,
           (Random *)a3,
           a4,
           a5,
           a6,
           (const BoundingBox *)a7);
}


const BoundingBox *__fastcall SwamplandHut::placeCauldron(SwamplandHut *this, BlockSource *a2, Random *a3, int a4, int a5, int a6, const BoundingBox *a7)
{
  Random *v7; // r6@1
  BlockSource *v8; // r5@1
  const BoundingBox *result; // r0@1
  Block *v10; // r0@7
  int v11; // r5@8
  unsigned int v12; // r4@8
  int v13; // r0@8
  Potion ***v14; // r0@9
  char v15; // [sp+4h] [bp-24h]@8
  char v16; // [sp+5h] [bp-23h]@8
  int v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@5
  int v19; // [sp+10h] [bp-18h]@3

  v7 = a3;
  v8 = a2;
  StructurePiece::_getWorldPos((StructurePiece *)&v17, (int)this, a4, a5, a6);
  result = a7;
  if ( v17 >= *(_DWORD *)a7
    && v17 <= *((_DWORD *)a7 + 3)
    && v19 >= *((_DWORD *)a7 + 2)
    && v19 <= *((_DWORD *)a7 + 5)
    && v18 >= *((_DWORD *)a7 + 1) )
  {
    result = (const BoundingBox *)*((_DWORD *)a7 + 4);
    if ( v18 <= (signed int)result )
    {
      v10 = (Block *)j_BlockSource::getBlock(v8, (const BlockPos *)&v17);
      result = (const BoundingBox *)j_Block::isType(v10, (const Block *)Block::mCauldron);
      if ( !result )
      {
        v15 = *(_BYTE *)(Block::mCauldron + 4);
        v16 = j_Random::_genRandInt32(v7) % 4 + 2;
        j_BlockSource::setBlockAndData((int)v8, (BlockPos *)&v17, (int)&v15, 4, 0);
        v11 = j_BlockSource::getBlockEntity(v8, (const BlockPos *)&v17);
        v12 = j_Random::_genRandInt32(v7) % 0x64;
        v13 = Potion::getPotionId((Potion *)Potion::Healing);
        if ( v12 > 9 )
        {
          if ( v12 > 0xE )
          {
            if ( v12 > 0x1D )
            {
              if ( v12 > 0x27 )
              {
                if ( v12 > 0x40 )
                {
                  if ( v12 > 0x4A )
                  {
LABEL_21:
                    *(_DWORD *)(v11 + 216) = v13;
                    return (const BoundingBox *)BlockEntity::setChanged((BlockEntity *)v11);
                  }
                  v14 = (Potion ***)&Potion::Weakness;
                }
                else
                  v14 = (Potion ***)Potion::Poison;
              }
              else
                v14 = (Potion ***)Potion::Slowness;
            }
            else
              v14 = (Potion ***)Potion::Swiftness;
          }
          else
            v14 = (Potion ***)Potion::FireResistance;
        }
        else
          v14 = (Potion ***)Potion::WaterBreathing;
        v13 = Potion::getPotionId(**v14);
        goto LABEL_21;
      }
    }
  }
  return result;
}
