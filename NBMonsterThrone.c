

int __fastcall NBMonsterThrone::NBMonsterThrone(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723B90;
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


signed int __fastcall NBMonsterThrone::getType(NBMonsterThrone *this)
{
  return 1312968020;
}


_DWORD *__fastcall NBMonsterThrone::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  _DWORD *v9; // r9@1
  _DWORD *result; // r0@1
  int v11; // r1@4
  int v12; // [sp+1Ch] [bp-34h]@1
  _DWORD *v13; // [sp+20h] [bp-30h]@1
  int v14; // [sp+24h] [bp-2Ch]@4
  int v15; // [sp+28h] [bp-28h]@4
  int v16; // [sp+2Ch] [bp-24h]@4
  int v17; // [sp+30h] [bp-20h]@4

  v8 = (__int64 *)a2;
  v9 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -2, 0, 0, 7, 8, 9, a7);
  result = v13;
  if ( (signed int)v13 < 11 || (result = (_DWORD *)j_StructurePiece::findCollisionPiece(v8, (int)&v12)) != 0 )
  {
    *v9 = 0;
  }
  else
    result = j_operator new(0x28u);
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    result[8] = a8;
    *v9 = result;
    *result = &off_2723B90;
    v11 = v12;
    *((_BYTE *)result + 36) = 0;
    result[7] = a7;
    result[1] = v11;
    result[2] = v13;
    result[3] = v14;
    result[4] = v15;
    result[5] = v16;
    result[6] = v17;
  return result;
}


int __fastcall NBMonsterThrone::NBMonsterThrone(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723B90;
  *(_BYTE *)(result + 36) = 0;
  return result;
}


signed int __fastcall NBMonsterThrone::postProcess(NBMonsterThrone *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBMonsterThrone *v4; // r6@1
  BlockSource *v5; // r8@1
  const BoundingBox *v6; // r9@1
  void (__cdecl *v7)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v9)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v10)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v11)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v12)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v13)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v14)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v15)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v16)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v17)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v18)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v19)(NBMonsterThrone *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v20)(NBMonsterThrone *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v21)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v22)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v23)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v24)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int); // r5@1
  int v25; // r7@2
  int v26; // r5@2
  int v27; // r0@2
  MobSpawnerBlockEntity *v28; // r0@8
  int v29; // r0@9
  int v30; // r5@10
  void (__fastcall *v31)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  void (__fastcall *v32)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  void (__fastcall *v33)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  void (__fastcall *v34)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  void (__fastcall *v35)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  void (__fastcall *v36)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  int (__fastcall *v37)(NBMonsterThrone *, BlockSource *, char *, int); // r4@11
  NetherFortressPiece *v38; // r0@11
  Random *v39; // r2@11
  char v41; // [sp+20h] [bp-B8h]@11
  char v42; // [sp+21h] [bp-B7h]@11
  char v43; // [sp+24h] [bp-B4h]@8
  char v44; // [sp+28h] [bp-B0h]@1
  char v45; // [sp+29h] [bp-AFh]@1
  int v46; // [sp+2Ch] [bp-ACh]@2
  int v47; // [sp+30h] [bp-A8h]@2
  char v48; // [sp+34h] [bp-A4h]@1
  char v49; // [sp+35h] [bp-A3h]@1
  char v50; // [sp+38h] [bp-A0h]@1
  char v51; // [sp+39h] [bp-9Fh]@1
  char v52; // [sp+3Ch] [bp-9Ch]@1
  char v53; // [sp+3Dh] [bp-9Bh]@1
  char v54; // [sp+40h] [bp-98h]@1
  char v55; // [sp+41h] [bp-97h]@1
  char v56; // [sp+44h] [bp-94h]@1
  char v57; // [sp+45h] [bp-93h]@1
  char v58; // [sp+48h] [bp-90h]@1
  char v59; // [sp+49h] [bp-8Fh]@1
  char v60; // [sp+4Ch] [bp-8Ch]@1
  char v61; // [sp+4Dh] [bp-8Bh]@1
  char v62; // [sp+50h] [bp-88h]@1
  char v63; // [sp+51h] [bp-87h]@1
  char v64; // [sp+54h] [bp-84h]@1
  char v65; // [sp+55h] [bp-83h]@1
  char v66; // [sp+58h] [bp-80h]@1
  char v67; // [sp+59h] [bp-7Fh]@1
  char v68; // [sp+5Ch] [bp-7Ch]@1
  char v69; // [sp+5Dh] [bp-7Bh]@1
  char v70; // [sp+60h] [bp-78h]@1
  char v71; // [sp+61h] [bp-77h]@1
  char v72; // [sp+64h] [bp-74h]@1
  char v73; // [sp+65h] [bp-73h]@1
  char v74; // [sp+68h] [bp-70h]@1
  char v75; // [sp+69h] [bp-6Fh]@1
  char v76; // [sp+6Ch] [bp-6Ch]@1
  char v77; // [sp+6Dh] [bp-6Bh]@1
  char v78; // [sp+70h] [bp-68h]@1
  char v79; // [sp+71h] [bp-67h]@1
  char v80; // [sp+74h] [bp-64h]@1
  char v81; // [sp+75h] [bp-63h]@1
  char v82; // [sp+78h] [bp-60h]@1
  char v83; // [sp+79h] [bp-5Fh]@1
  char v84; // [sp+7Ch] [bp-5Ch]@1
  char v85; // [sp+7Dh] [bp-5Bh]@1
  char v86; // [sp+80h] [bp-58h]@1
  char v87; // [sp+81h] [bp-57h]@1
  char v88; // [sp+84h] [bp-54h]@1
  char v89; // [sp+85h] [bp-53h]@1
  char v90; // [sp+88h] [bp-50h]@1
  char v91; // [sp+89h] [bp-4Fh]@1
  char v92; // [sp+8Ch] [bp-4Ch]@1
  char v93; // [sp+8Dh] [bp-4Bh]@1
  char v94; // [sp+90h] [bp-48h]@1
  char v95; // [sp+91h] [bp-47h]@1
  char v96; // [sp+94h] [bp-44h]@1
  char v97; // [sp+95h] [bp-43h]@1
  char v98; // [sp+98h] [bp-40h]@1
  char v99; // [sp+99h] [bp-3Fh]@1
  char v100; // [sp+9Ch] [bp-3Ch]@1
  char v101; // [sp+9Dh] [bp-3Bh]@1
  char v102; // [sp+A0h] [bp-38h]@1
  char v103; // [sp+A1h] [bp-37h]@1
  char v104; // [sp+A4h] [bp-34h]@1
  char v105; // [sp+A5h] [bp-33h]@1
  char v106; // [sp+A8h] [bp-30h]@1
  char v107; // [sp+A9h] [bp-2Fh]@1
  char v108; // [sp+ACh] [bp-2Ch]@1
  char v109; // [sp+ADh] [bp-2Bh]@1
  char v110; // [sp+B0h] [bp-28h]@1
  char v111; // [sp+B1h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v110 = BlockID::AIR;
  v108 = BlockID::AIR;
  v111 = 0;
  v109 = 0;
  v7(this, a2, a4, 0, 2, 0, 6, 7);
  v8 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v106 = *(_BYTE *)(Block::mNetherBrick + 4);
  v107 = 0;
  v104 = *(_BYTE *)(Block::mNetherBrick + 4);
  v105 = 0;
  v8(v4, v5, v6, 1);
  v9 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v102 = *(_BYTE *)(Block::mNetherBrick + 4);
  v103 = 0;
  v100 = *(_BYTE *)(Block::mNetherBrick + 4);
  v101 = 0;
  v9(v4, v5, v6, 1);
  v10 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v98 = *(_BYTE *)(Block::mNetherBrick + 4);
  v99 = 0;
  v96 = *(_BYTE *)(Block::mNetherBrick + 4);
  v97 = 0;
  v10(v4, v5, v6, 1);
  v11 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v94 = *(_BYTE *)(Block::mNetherBrick + 4);
  v95 = 0;
  v92 = *(_BYTE *)(Block::mNetherBrick + 4);
  v93 = 0;
  v11(v4, v5, v6, 1);
  v12 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v90 = *(_BYTE *)(Block::mNetherBrick + 4);
  v91 = 0;
  v88 = *(_BYTE *)(Block::mNetherBrick + 4);
  v89 = 0;
  v12(v4, v5, v6, 1);
  v13 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v86 = *(_BYTE *)(Block::mNetherBrick + 4);
  v87 = 0;
  v84 = *(_BYTE *)(Block::mNetherBrick + 4);
  v85 = 0;
  v13(v4, v5, v6, 5);
  v14 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v82 = *(_BYTE *)(Block::mNetherBrick + 4);
  v83 = 0;
  v80 = *(_BYTE *)(Block::mNetherBrick + 4);
  v81 = 0;
  v14(v4, v5, v6, 1);
  v15 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v78 = *(_BYTE *)(Block::mNetherBrick + 4);
  v79 = 0;
  v76 = *(_BYTE *)(Block::mNetherBrick + 4);
  v77 = 0;
  v15(v4, v5, v6, 5);
  v16 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v74 = *(_BYTE *)(Block::mNetherBrick + 4);
  v75 = 0;
  v72 = *(_BYTE *)(Block::mNetherBrick + 4);
  v73 = 0;
  v16(v4, v5, v6, 0);
  v17 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v70 = *(_BYTE *)(Block::mNetherBrick + 4);
  v71 = 0;
  v68 = *(_BYTE *)(Block::mNetherBrick + 4);
  v69 = 0;
  v17(v4, v5, v6, 6);
  v18 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v66 = *(_BYTE *)(Block::mNetherBrick + 4);
  v67 = 0;
  v64 = *(_BYTE *)(Block::mNetherBrick + 4);
  v65 = 0;
  v18(v4, v5, v6, 1);
  v19 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v44 = *(_BYTE *)(Block::mNetherFence + 4);
  v45 = 0;
  v19(v4, v5, &v44, 1);
  v20 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v20(v4, v5, &v44, 5);
  v21 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v62 = *(_BYTE *)(Block::mNetherFence + 4);
  v63 = 0;
  v60 = *(_BYTE *)(Block::mNetherFence + 4);
  v61 = 0;
  v21(v4, v5, v6, 0);
  v22 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v58 = *(_BYTE *)(Block::mNetherFence + 4);
  v59 = 0;
  v56 = *(_BYTE *)(Block::mNetherFence + 4);
  v57 = 0;
  v22(v4, v5, v6, 6);
  v23 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v54 = *(_BYTE *)(Block::mNetherFence + 4);
  v55 = 0;
  v52 = *(_BYTE *)(Block::mNetherFence + 4);
  v53 = 0;
  v23(v4, v5, v6, 1);
  v24 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v50 = *(_BYTE *)(Block::mNetherFence + 4);
  v51 = 0;
  v48 = *(_BYTE *)(Block::mNetherFence + 4);
  v49 = 0;
  v24(v4, v5, v6, 2);
  if ( !*((_BYTE *)v4 + 36) )
  {
    v25 = (*(int (__fastcall **)(NBMonsterThrone *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 3, 5);
    v26 = j_StructurePiece::getWorldY(v4, 5);
    v27 = (*(int (__fastcall **)(NBMonsterThrone *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 3, 5);
    *(_DWORD *)&v44 = v25;
    v46 = v26;
    v47 = v27;
    if ( v25 >= *(_DWORD *)v6
      && v25 <= *((_DWORD *)v6 + 3)
      && v27 >= *((_DWORD *)v6 + 2)
      && v27 <= *((_DWORD *)v6 + 5)
      && v26 >= *((_DWORD *)v6 + 1)
      && v26 <= *((_DWORD *)v6 + 4) )
    {
      *((_BYTE *)v4 + 36) = 1;
      v43 = *(_BYTE *)(Block::mMobSpawner + 4);
      j_BlockSource::setBlockAndData((int)v5, (BlockPos *)&v44, &v43, 0, 2, 0);
      v28 = (MobSpawnerBlockEntity *)j_BlockSource::getBlockEntity(v5, (const BlockPos *)&v44);
      if ( v28 )
      {
        v29 = j_MobSpawnerBlockEntity::getSpawner(v28);
        j_BaseMobSpawner::setEntityId(v29, 2859);
      }
    }
  }
  v30 = 0;
  do
    v31 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v41 = *(_BYTE *)(Block::mNetherBrick + 4);
    v42 = 0;
    v31(v4, v5, &v41, v30);
    v32 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v32(v4, v5, &v41, v30);
    v33 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v33(v4, v5, &v41, v30);
    v34 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v34(v4, v5, &v41, v30);
    v35 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v35(v4, v5, &v41, v30);
    v36 = *(void (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v36(v4, v5, &v41, v30);
    v37 = *(int (__fastcall **)(NBMonsterThrone *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v38 = (NetherFortressPiece *)v37(v4, v5, &v41, v30++);
  while ( v30 != 7 );
  return j_NetherFortressPiece::postProcess(v38, v5, v39, v6);
}
