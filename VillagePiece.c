

int __fastcall VillagePiece::generateHouseNorthernLeft(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r8@2
  int v7; // r4@2
  int v8; // r7@2
  int v9; // r5@2
  int v10; // r6@2
  int result; // r0@4

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      v6 = 1;
      v7 = *(_DWORD *)(a1 + 8) + a5;
      v8 = *(_DWORD *)(a1 + 32);
      v9 = *(_DWORD *)(a1 + 12) + a6;
      v10 = *(_DWORD *)(a1 + 4) - 1;
      goto LABEL_4;
    case 1:
    case 3:
      v6 = 2;
      v9 = *(_DWORD *)(a1 + 12) - 1;
      v10 = *(_DWORD *)(a1 + 4) + a6;
LABEL_4:
      result = j_VillagePiece::generateAndAddPiece(a1, a2, a3, a4, v10, v7, v9, v6, v8);
      break;
    default:
      result = 0;
  }
  return result;
}


int __fastcall VillagePiece::generateBoxPieces(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  int v12; // r7@1
  int v13; // r10@1
  int v14; // r9@1
  int v15; // r8@1
  char v17; // [sp+20h] [bp-38h]@1
  char v18; // [sp+21h] [bp-37h]@1
  char v19; // [sp+24h] [bp-34h]@1
  char v20; // [sp+25h] [bp-33h]@1
  char v21; // [sp+28h] [bp-30h]@1
  char v22; // [sp+29h] [bp-2Fh]@1
  char v23; // [sp+2Ch] [bp-2Ch]@1
  char v24; // [sp+2Dh] [bp-2Bh]@1
  char v25; // [sp+30h] [bp-28h]@1
  char v26; // [sp+31h] [bp-27h]@1
  char v27; // [sp+34h] [bp-24h]@1
  char v28; // [sp+35h] [bp-23h]@1

  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v25 = *(_BYTE *)a10;
  v26 = *(_BYTE *)(a10 + 1);
  j_VillagePiece::biomeBlock((int)&v27, a1, (int)&v25);
  v21 = *(_BYTE *)a11;
  v22 = *(_BYTE *)(a11 + 1);
  j_VillagePiece::biomeBlock((int)&v23, v12, (int)&v21);
  v19 = v27;
  v20 = v28;
  v17 = v23;
  v18 = v24;
  return j_StructurePiece::generateBox(v12, v13, v14, v15, a5, a6, a7, a8, a9, (int)&v19, (int)&v17, a12);
}


int __fastcall VillagePiece::biomeBlock(int result, int a2, int a3)
{
  int v3; // r1@1
  _DWORD **v4; // r12@2
  _DWORD **v5; // r1@4
  _DWORD **v6; // r3@15
  _DWORD **v7; // r1@20
  char v8; // r2@43

  v3 = *(_DWORD *)(a2 + 44);
  if ( (_BYTE)v3 )
  {
    v4 = (_DWORD **)*(_BYTE *)a3;
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mLog + 4) || v4 == (_DWORD **)*(_BYTE *)(Block::mLog2 + 4) )
    {
      v5 = Block::mSandStone;
LABEL_12:
      LOBYTE(v5) = *(_BYTE *)(**v5 + 4);
      goto LABEL_13;
    }
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mCobblestone + 4)
      || v4 == (_DWORD **)*(_BYTE *)(Block::mMossyCobblestone + 4) )
      goto LABEL_12;
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mWoodPlanks + 4) )
      *(_BYTE *)result = *(_BYTE *)(Block::mSandStone + 4);
      *(_BYTE *)(result + 1) = 2;
      return result;
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mOakStairs + 4) )
      v7 = Block::mSandstoneStairs;
      goto LABEL_43;
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mStoneStairs + 4) )
    if ( v4 == (_DWORD **)*(_BYTE *)(Block::mGrassPathBlock + 4) )
LABEL_22:
    *(_BYTE *)result = (_BYTE)v4;
    *(_BYTE *)(result + 1) = *(_BYTE *)(a3 + 1);
    return result;
  }
  if ( !(v3 & 0xFF00) )
    if ( !(v3 & 0xFF0000) )
      LOBYTE(v4) = *(_BYTE *)a3;
      goto LABEL_22;
    v6 = (_DWORD **)*(_BYTE *)(Block::mLog + 4);
    if ( v4 != v6 && v4 != (_DWORD **)*(_BYTE *)(Block::mLog2 + 4) )
      if ( v4 != (_DWORD **)*(_BYTE *)(Block::mWoodPlanks + 4) )
      {
        if ( v4 == (_DWORD **)*(_BYTE *)(Block::mOakStairs + 4) )
        {
          v7 = Block::mSpruceStairs;
          goto LABEL_43;
        }
        if ( v4 != (_DWORD **)*(_BYTE *)(Block::mFence + 4) )
          if ( v4 == (_DWORD **)*(_BYTE *)(Block::mWoodenDoor + 4) )
          {
            v7 = &Block::mWoodenDoorSpruce;
            goto LABEL_43;
          }
          goto LABEL_22;
      }
      *(_BYTE *)result = (_BYTE)v4;
    else
      *(_BYTE *)result = (_BYTE)v6;
    *(_BYTE *)(result + 1) = 1;
  v4 = (_DWORD **)*(_BYTE *)a3;
  v5 = (_DWORD **)*(_BYTE *)(Block::mLog2 + 4);
  if ( v4 == (_DWORD **)*(_BYTE *)(Block::mLog + 4) )
LABEL_13:
    *(_BYTE *)result = (_BYTE)v5;
    *(_BYTE *)(result + 1) = 0;
  if ( v4 == v5 )
    LOBYTE(v5) = *(_BYTE *)a3;
    goto LABEL_13;
  if ( v4 == (_DWORD **)*(_BYTE *)(Block::mWoodPlanks + 4) )
LABEL_31:
    *(_BYTE *)(result + 1) = 4;
  if ( v4 != (_DWORD **)*(_BYTE *)(Block::mOakStairs + 4) )
    if ( v4 != (_DWORD **)*(_BYTE *)(Block::mFence + 4) )
      if ( v4 == (_DWORD **)*(_BYTE *)(Block::mWoodenDoor + 4) )
        v7 = Block::mWoodenDoorAcacia;
        goto LABEL_43;
    goto LABEL_31;
  v7 = Block::mAcaciaStairs;
LABEL_43:
  v8 = *(_BYTE *)(a3 + 1);
  *(_BYTE *)result = *(_BYTE *)(**v7 + 4);
  *(_BYTE *)(result + 1) = v8;
  return result;
}


int __fastcall VillagePiece::fillColumnDown(int a1, BlockSource *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@1
  BlockSource *v8; // r5@1
  int v9; // r4@1
  char v11; // [sp+Ch] [bp-4h]@1
  char v12; // [sp+Dh] [bp-3h]@1
  int v13; // [sp+10h] [bp+0h]@1

  v7 = a1;
  v11 = *(_BYTE *)a3;
  v8 = a2;
  v12 = *(_BYTE *)(a3 + 1);
  v9 = a4;
  j_VillagePiece::biomeBlock((int)&v13, a1, (int)&v11);
  return j_StructurePiece::fillColumnDown(v7, v8, (int)&v13, v9, a5, a6, a7);
}


int __fastcall VillagePiece::generateAndAddPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v10; // r6@1
  int v11; // r2@2
  int v12; // r7@5
  int result; // r0@8
  int v14; // r5@9
  __int64 v15; // r0@10
  void *v16; // r8@13
  unsigned int v17; // r2@13
  unsigned int v18; // r1@15
  unsigned int v19; // r7@15
  char *v20; // r9@21 OVERLAPPED
  char *v21; // r11@23
  int v22; // r10@27
  int *v23; // r1@28 OVERLAPPED
  int *v24; // r2@28
  int v25; // [sp+1Ch] [bp-2Ch]@28
  int v26; // [sp+20h] [bp-28h]@9

  v9 = a3;
  v10 = a2;
  if ( a9 > 50 )
    goto LABEL_37;
  v11 = a5 - *(_DWORD *)(a2 + 4);
  if ( v11 < 0 )
    v11 = -v11;
  if ( v11 > 112 )
  v12 = a7 - *(_DWORD *)(a2 + 12);
  if ( v12 < 0 )
    v12 = -v12;
  if ( v12 <= 112 )
  {
    j_VillagePiece::generatePieceFromSmallDoor((Random *)&v26, a5, a2, v9, a4, a5, a6, a7, a8, a9 + 1);
    v14 = v26;
    if ( v26 )
    {
      v15 = *(_QWORD *)(v10 + 60);
      if ( (_DWORD)v15 == HIDWORD(v15) )
      {
        v16 = *(void **)(v10 + 56);
        v17 = ((signed int)v15 - (signed int)v16) >> 2;
        if ( !v17 )
          v17 = 1;
        HIDWORD(v15) = v17 + (((signed int)v15 - (signed int)v16) >> 2);
        v19 = v17 + (((signed int)v15 - (signed int)v16) >> 2);
        if ( 0 != HIDWORD(v15) >> 30 )
          v19 = 0x3FFFFFFF;
        if ( v18 < v17 )
        if ( v19 )
        {
          if ( v19 >= 0x40000000 )
            sub_21E57F4();
          v20 = (char *)j_operator new(4 * v19);
          LODWORD(v15) = *(_QWORD *)(v10 + 56) >> 32;
          v16 = (void *)*(_QWORD *)(v10 + 56);
        }
        else
          v20 = 0;
        v21 = &v20[v15 - (_DWORD)v16];
        *(_DWORD *)&v20[v15 - (_DWORD)v16] = v14;
        if ( 0 != ((signed int)v15 - (signed int)v16) >> 2 )
          j___aeabi_memmove4_0((int)v20, (int)v16);
        if ( v16 )
          j_operator delete(v16);
        v22 = (int)(v21 + 4);
        *(_QWORD *)(v10 + 56) = *(_QWORD *)&v20;
        *(_DWORD *)(v10 + 64) = &v20[4 * v19];
      }
      else
        *(_DWORD *)v15 = v26;
        *(_DWORD *)(v10 + 60) += 4;
      v25 = v14;
      v26 = 0;
      *(_QWORD *)&v23 = *(_QWORD *)(v9 + 4);
      if ( v23 == v24 )
        j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
          (_QWORD *)v9,
          &v25);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        v25 = 0;
        *v23 = v14;
        *(_DWORD *)(v9 + 4) = v23 + 1;
      v25 = 0;
    }
    else
      v14 = 0;
    result = v14;
  }
  else
LABEL_37:
    result = 0;
  return result;
}


int __fastcall VillagePiece::spawnVillagers(VillagePiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7)
{
  VillagePiece *v7; // r10@1
  int v8; // r9@1
  int result; // r0@1
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  unsigned int *v16; // r2@7
  signed int v17; // r1@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  int *v28; // r4@30
  unsigned int *v29; // r2@31
  signed int v30; // r1@33
  unsigned int *v31; // r2@35
  signed int v32; // r1@37
  unsigned int *v33; // r2@39
  signed int v34; // r1@41
  unsigned int *v35; // r2@43
  signed int v36; // r1@45
  unsigned int *v37; // r2@47
  signed int v38; // r1@49
  Level *v42; // r0@101
  Spawner *v43; // r11@101
  Entity *v44; // r11@101
  void *v45; // r0@101
  void *v46; // r0@102
  void *v47; // r0@103
  void *v48; // r0@104
  void *v49; // r0@105
  void *v50; // r0@106
  Level *v51; // r0@115
  Spawner *v52; // r7@115
  Entity *v53; // r7@115
  void *v54; // r0@115
  void *v55; // r0@116
  void *v56; // r0@117
  void *v57; // r0@118
  void *v58; // r0@119
  void *v59; // r0@122
  int *v60; // [sp+28h] [bp-C0h]@2
  int v61; // [sp+2Ch] [bp-BCh]@1
  BlockSource *v62; // [sp+30h] [bp-B8h]@1
  float v63; // [sp+34h] [bp-B4h]@115
  int v64; // [sp+38h] [bp-B0h]@115
  int v65; // [sp+40h] [bp-A8h]@39
  int v66; // [sp+48h] [bp-A0h]@43
  int v67; // [sp+4Ch] [bp-9Ch]@35
  int v68; // [sp+50h] [bp-98h]@31
  int v69; // [sp+54h] [bp-94h]@27
  int v70; // [sp+5Ch] [bp-8Ch]@47
  float v71; // [sp+60h] [bp-88h]@101
  int v72; // [sp+64h] [bp-84h]@101
  int v73; // [sp+70h] [bp-78h]@15
  int v74; // [sp+74h] [bp-74h]@19
  int v75; // [sp+7Ch] [bp-6Ch]@23
  int v76; // [sp+80h] [bp-68h]@11
  int v77; // [sp+84h] [bp-64h]@7
  int v78; // [sp+88h] [bp-60h]@3
  char v79; // [sp+8Ch] [bp-5Ch]@99
  float v80; // [sp+98h] [bp-50h]@99
  int v81; // [sp+9Ch] [bp-4Ch]@101

  v7 = this;
  v61 = a4;
  v62 = a2;
  v8 = *((_DWORD *)this + 10);
  result = a7;
  if ( v8 < a7 )
  {
    __asm { VMOV.F32        S16, #0.5 }
    v60 = &dword_28898C0;
    do
    {
      _R4 = (*(int (__fastcall **)(VillagePiece *, int, int))(*(_DWORD *)v7 + 28))(v7, v8 + v61, a6);
      _R0 = j_StructurePiece::getWorldY(v7, a5);
      __asm
      {
        VMOV            S0, R4
        VCVT.F32.S32    S18, S0
        VMOV            S0, R0
        VCVT.F32.S32    S20, S0
      }
      _R0 = (*(int (__fastcall **)(VillagePiece *, int, int))(*(_DWORD *)v7 + 32))(v7, v8 + v61, a6);
        VCVT.F32.S32    S0, S0
        VSTR            S18, [SP,#0xE8+var_50]
        VSTR            S20, [SP,#0xE8+var_4C]
        VSTR            S0, [SP,#0xE8+var_48]
      j_BlockPos::BlockPos((int)&v79, (int)&v80);
      if ( j_BlockSource::hasBlock(v62, (const BlockPos *)&v79) == 1 )
        if ( *((_BYTE *)v7 + 47) )
        {
          v42 = (Level *)j_BlockSource::getLevel(v62);
          v43 = (Spawner *)j_Level::getSpawner(v42);
          sub_21E94B4((void **)&v75, "minecraft");
          j_EntityTypeToString((void **)&v74, 0x30B2Cu, 0);
          sub_21E94B4((void **)&v73, "from_village");
          j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v76, &v75, &v74, &v73);
          __asm
          {
            VLDR            S0, [SP,#0xE8+var_50]
            VLDR            S2, [SP,#0xE8+var_48]
            VADD.F32        S0, S0, S16
            VADD.F32        S2, S2, S16
            VSTR            S0, [SP,#0xE8+var_88]
          }
          v72 = v81;
          __asm { VSTR            S2, [SP,#0xE8+var_80] }
          v44 = (Entity *)j_Spawner::spawnMob(
                            v43,
                            v62,
                            (const EntityDefinitionIdentifier *)&v76,
                            0,
                            (const Vec3 *)&v71,
                            1,
                            0);
          v45 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != v60 )
            v14 = (unsigned int *)(v78 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            }
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v45);
          v46 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != v60 )
            v16 = (unsigned int *)(v77 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v46);
          v47 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != v60 )
            v18 = (unsigned int *)(v76 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
          v48 = (void *)(v73 - 12);
          if ( (int *)(v73 - 12) != v60 )
            v20 = (unsigned int *)(v73 - 4);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          v49 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != v60 )
            v22 = (unsigned int *)(v74 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v50 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != v60 )
            v24 = (unsigned int *)(v75 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v50);
          if ( v44 )
            j_Entity::setPersistent(v44);
            j_ZombieVillager::setSpawnedFromVillage(v44);
            ++*((_DWORD *)v7 + 10);
        }
        else
          (*(void (__fastcall **)(VillagePiece *, _DWORD))(*(_DWORD *)v7 + 64))(v7, 0);
          sub_21E94B4((void **)&v70, "minecraft:spawn_farmer");
          switch ( (*(int (__fastcall **)(VillagePiece *, _DWORD))(*(_DWORD *)v7 + 64))(v7, 0) )
            case 1:
              sub_21E8190((void **)&v70, "minecraft:spawn_librarian", (_BYTE *)0x19);
              break;
            case 2:
              sub_21E8190((void **)&v70, "minecraft:spawn_cleric", (_BYTE *)0x16);
            case 3:
              sub_21E8190((void **)&v70, "minecraft:spawn_armorer", (_BYTE *)0x17);
            case 4:
              sub_21E8190((void **)&v70, "minecraft:spawn_butcher", (_BYTE *)0x17);
            default:
              sub_21E8190((void **)&v70, "minecraft:spawn_farmer", (_BYTE *)0x16);
          v51 = (Level *)j_BlockSource::getLevel(v62);
          v52 = (Spawner *)j_Level::getSpawner(v51);
          sub_21E94B4((void **)&v66, "minecraft");
          j_EntityTypeToString((void **)&v65, 0x30Fu, 0);
          j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v67, &v66, &v65, &v70);
            VSTR            S0, [SP,#0xE8+var_B4]
          v64 = v81;
          __asm { VSTR            S2, [SP,#0xE8+var_AC] }
          v53 = (Entity *)j_Spawner::spawnMob(
                            v52,
                            (const EntityDefinitionIdentifier *)&v67,
                            (const Vec3 *)&v63,
          v28 = v60;
          v54 = (void *)(v69 - 12);
          if ( (int *)(v69 - 12) != v60 )
            v26 = (unsigned int *)(v69 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v28 = v60;
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
          v55 = (void *)(v68 - 12);
          if ( (int *)(v68 - 12) != v28 )
            v29 = (unsigned int *)(v68 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v56 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != v28 )
            v31 = (unsigned int *)(v67 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v56);
          v57 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != v28 )
            v33 = (unsigned int *)(v65 - 4);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j__ZdlPv_9(v57);
          v58 = (void *)(v66 - 12);
          if ( (int *)(v66 - 12) != v28 )
            v35 = (unsigned int *)(v66 - 4);
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v58);
          if ( v53 )
            j_Entity::setPersistent(v53);
          v59 = (void *)(v70 - 12);
          if ( (int *)(v70 - 12) != v28 )
            v37 = (unsigned int *)(v70 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          v60 = v28;
      ++v8;
      result = a7;
    }
    while ( v8 < a7 );
  }
  return result;
}


void __fastcall VillagePiece::generatePieceFromSmallDoor(Random *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  VillagePiece::generatePieceFromSmallDoor(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


int __fastcall VillagePiece::VillagePiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_27242B8;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  return result;
}


int __fastcall VillagePiece::generateBoxPieces(int a1, int a2, int a3, int a4, int a5, int a6, int a7, Random *a8, int a9, int a10, int a11, Random *a12, BlockSelector *a13)
{
  int result; // r0@2
  char v14; // [sp+24h] [bp-2Ch]@3
  char v15; // [sp+25h] [bp-2Bh]@3
  char v16; // [sp+28h] [bp-28h]@3
  char v17; // [sp+29h] [bp-27h]@3

  if ( a13 )
  {
    result = j_StructurePiece::generateBox(
               (StructurePiece *)a1,
               (BlockSource *)a2,
               (const BoundingBox *)a3,
               a4,
               a5,
               a6,
               a7,
               (int)a8,
               a9,
               a10,
               a12,
               a13);
  }
  else
    v16 = *(_BYTE *)a11;
    v17 = *(_BYTE *)(a11 + 1);
    v14 = *(_BYTE *)(Block::mCobblestone + 4);
    v15 = 0;
    result = j_StructurePiece::generateBox(a1, a2, a3, a4, a5, a6, a7, (int)a8, a9, (int)&v16, (int)&v14, a10);
  return result;
}


_DWORD *__fastcall VillagePiece::findAndCreatePieceFactory(_DWORD *a1, int a2, int a3, const void **a4, __int64 *a5, Random *a6, int a7, int a8, int a9, int a10, int a11)
{
  const void **v11; // r8@1
  _DWORD *v12; // r4@1
  int v13; // r6@1
  _DWORD *result; // r0@10
  void *v15; // r5@17
  char v16; // [sp+1Ch] [bp-54h]@16
  char v17; // [sp+34h] [bp-3Ch]@18

  v11 = a4;
  v12 = a1;
  v13 = a3;
  if ( !sub_21E7D6C(a4, "SimpleHouse") )
    return (_DWORD *)j_SimpleHouse::createPiece(v12, v13, a5, a6, a7, a8, a9, a10, a11);
  if ( !sub_21E7D6C(v11, "SmallTemple") )
    return j_SmallTemple::createPiece(v12, v13, a5, (int)a6, a7, a8, a9, a10, a11);
  if ( !sub_21E7D6C(v11, "BookHouse") )
    return j_BookHouse::createPiece(v12, v13, a5, (int)a6, a7, a8, a9, a10, a11);
  if ( !sub_21E7D6C(v11, "SmallHut") )
    return (_DWORD *)j_SmallHut::createPiece(v12, v13, a5, a6, a7, a8, a9, a10, a11);
  if ( !sub_21E7D6C(v11, "PigHouse") )
    return j_PigHouse::createPiece(v12, v13, a5, (int)a6, a7, a8, a9, a10, a11);
  if ( !sub_21E7D6C(v11, "DoubleFarmland") )
  {
    j_BoundingBox::orientBox((BoundingBox *)&v16, a7, a8, a9, 0, 0, 0, 13, 4, 9, a10);
    result = (_DWORD *)j_StructurePiece::findCollisionPiece(a5, (int)&v16);
    if ( result )
    {
LABEL_19:
      *v12 = 0;
      return result;
    }
    v15 = j_operator new(0x38u);
    result = (_DWORD *)j_DoubleFarmland::DoubleFarmland((int)v15, v13, a11, a6, (int)&v16, a10);
LABEL_23:
    *v12 = v15;
    return result;
  }
  if ( !sub_21E7D6C(v11, "Farmland") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a7, a8, a9, 0, 0, 0, 7, 4, 9, a10);
    result = (_DWORD *)j_StructurePiece::findCollisionPiece(a5, (int)&v17);
      goto LABEL_19;
    result = (_DWORD *)j_Farmland::Farmland((int)v15, v13, a11, a6, (int)&v17, a10);
    goto LABEL_23;
  if ( sub_21E7D6C(v11, "Smithy") )
    if ( sub_21E7D6C(v11, "TwoRoomHouse") )
      result = 0;
    else
      result = j_TwoRoomHouse::createPiece(v12, v13, a5, (int)a6, a7, a8, a9, a10, a11);
  else
    result = j_Smithy::createPiece(v12, v13, a5, (int)a6, a7, a8, a9, a10, a11);
  return result;
}


_DWORD *__fastcall VillagePiece::generateAndAddRoadPiece(int a1, int a2, int a3, Random *this, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r6@1
  _DWORD *v10; // r5@2
  int v11; // r0@3
  int v12; // r0@7
  int v13; // r11@10
  int v14; // r7@14
  int v15; // r4@14
  int v16; // r10@16
  int v17; // r9@16
  int v18; // r8@18
  bool v19; // nf@18
  unsigned __int8 v20; // vf@18
  unsigned int v21; // r1@22
  int v22; // r0@24
  int v23; // r0@24
  __int64 v24; // r0@26
  char *v25; // r6@30
  __int64 v26; // r0@30
  void *v27; // r4@32
  unsigned int v28; // r2@32
  unsigned int v29; // r1@34
  unsigned int v30; // r7@34
  char *v31; // r8@41
  int v32; // r8@43
  int v34; // [sp+1Ch] [bp-4Ch]@21
  int v35; // [sp+20h] [bp-48h]@10
  _DWORD *v36; // [sp+24h] [bp-44h]@26
  int v37; // [sp+28h] [bp-40h]@11
  int v38; // [sp+2Ch] [bp-3Ch]@13
  int v39; // [sp+30h] [bp-38h]@13
  int v40; // [sp+34h] [bp-34h]@13
  int v41; // [sp+38h] [bp-30h]@13
  int v42; // [sp+3Ch] [bp-2Ch]@13

  v9 = a3;
  if ( *(_DWORD *)(a2 + 80) + 3 >= a9 )
  {
    v11 = a5 - *(_DWORD *)(a2 + 4);
    if ( v11 < 0 )
      v11 = -v11;
    if ( v11 <= 112 )
    {
      v10 = 0;
      v12 = a7 - *(_DWORD *)(a2 + 12);
      if ( v12 < 0 )
        v12 = -v12;
      if ( v12 <= 112 )
      {
        v35 = a2;
        v13 = 7 * (j_Random::_genRandInt32(this) % 3) + 21;
        while ( 1 )
        {
          j_BoundingBox::orientBox((BoundingBox *)&v37, a5, a6, a7, 0, 0, 0, 3, 3, v13, a8);
          if ( !j_StructurePiece::findCollisionPiece((__int64 *)v9, (int)&v37) )
            break;
          v13 -= 7;
          if ( v13 < 7 )
          {
            v10 = 0;
            v37 = 0x7FFFFFFF;
            v38 = 0x7FFFFFFF;
            v39 = 0x7FFFFFFF;
            v40 = -2147483647;
            v41 = -2147483647;
            v42 = -2147483647;
            return v10;
          }
        }
        v14 = v37;
        v15 = v40;
        if ( v40 >= v37 )
          v16 = v38;
          v17 = v41;
          if ( v41 >= v38 )
            v18 = v42;
            v20 = __OFSUB__(v42, v39);
            v19 = v42 - v39 < 0;
            if ( v42 >= v39 )
            {
              v20 = __OFSUB__(v38, 11);
              v19 = v38 - 11 < 0;
            }
            if ( !(v19 ^ v20) )
              v34 = v39;
              v10 = j_operator new(0x38u);
              v10[5] = 0;
              v10[6] = 0;
              v10[3] = 0;
              v10[4] = 0;
              v10[1] = 0;
              v10[2] = 0;
              v10[7] = 255;
              v10[8] = a9;
              *v10 = &off_27242B8;
              v10[11] = 0;
              v10[12] = 0;
              v10[9] = -1;
              v10[10] = 0;
              if ( v35 )
              {
                v21 = *(_DWORD *)(v35 + 44);
                *((_BYTE *)v10 + 44) = v21;
                *((_BYTE *)v10 + 45) = BYTE1(v21);
                *((_BYTE *)v10 + 46) = v21 >> 16;
                *((_BYTE *)v10 + 47) = BYTE3(v21);
                if ( 0 != v21 >> 24 )
                  v10[12] = &VillagePiece::mossyStoneSelector;
              }
              *v10 = &off_2724648;
              v10[1] = v14;
              v10[2] = v16;
              v22 = (int)(v10 + 3);
              *(_DWORD *)v22 = v34;
              *(_DWORD *)(v22 + 4) = v15;
              *(_DWORD *)(v22 + 8) = v17;
              v10[6] = v18;
              v10[7] = a8;
              v23 = 1 - v14 + v15;
              if ( v23 < 1 - v34 + v18 )
                v23 = 1 - v34 + v18;
              v36 = v10;
              v10[13] = v23;
              v24 = *(_QWORD *)(v9 + 4);
              if ( (_DWORD)v24 == HIDWORD(v24) )
                j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
                  (_QWORD *)v9,
                  (int *)&v36);
                if ( v36 )
                  (*(void (**)(void))(*v36 + 4))();
              else
                v36 = 0;
                *(_DWORD *)v24 = v10;
                *(_DWORD *)(v9 + 4) = v24 + 4;
              v25 = 0;
              v36 = 0;
              v26 = *(_QWORD *)(v35 + 72);
              if ( (_DWORD)v26 == HIDWORD(v26) )
                v27 = *(void **)(v35 + 68);
                v28 = ((signed int)v26 - (signed int)v27) >> 2;
                if ( 0 == v28 )
                  v28 = 1;
                HIDWORD(v26) = v28 + (((signed int)v26 - (signed int)v27) >> 2);
                v30 = v28 + (((signed int)v26 - (signed int)v27) >> 2);
                if ( 0 != HIDWORD(v26) >> 30 )
                  v30 = 0x3FFFFFFF;
                if ( v29 < v28 )
                if ( v30 )
                {
                  if ( v30 >= 0x40000000 )
                    sub_21E57F4();
                  v25 = (char *)j_operator new(4 * v30);
                  LODWORD(v26) = *(_QWORD *)(v35 + 68) >> 32;
                  v27 = (void *)*(_QWORD *)(v35 + 68);
                }
                v31 = &v25[v26 - (_DWORD)v27];
                *(_DWORD *)v31 = v10;
                if ( ((signed int)v26 - (signed int)v27) >> 2 )
                  j___aeabi_memmove4_0((int)v25, (int)v27);
                v32 = (int)(v31 + 4);
                if ( v27 )
                  j_operator delete(v27);
                *(_DWORD *)(v35 + 68) = v25;
                *(_DWORD *)(v35 + 72) = v32;
                *(_DWORD *)(v35 + 76) = &v25[4 * v30];
                *(_DWORD *)v26 = v10;
                *(_DWORD *)(v35 + 72) += 4;
          else
        else
          v10 = 0;
      }
    }
    else
  }
  else
    v10 = 0;
  return v10;
}


char *__fastcall VillagePiece::placeBlock(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@1
  int v8; // r5@1
  int v9; // r4@1
  char v11; // [sp+Ch] [bp-4h]@1
  char v12; // [sp+Dh] [bp-3h]@1
  int v13; // [sp+10h] [bp+0h]@1

  v7 = a1;
  v11 = *(_BYTE *)a3;
  v8 = a2;
  v12 = *(_BYTE *)(a3 + 1);
  v9 = a4;
  j_VillagePiece::biomeBlock((int)&v13, a1, (int)&v11);
  return j_StructurePiece::placeBlock(v7, v8, (int)&v13, v9, a5, a6, a7);
}


int __fastcall VillagePiece::getAverageGroundHeight(VillagePiece *this, BlockSource *a2, const BoundingBox *a3)
{
  const BoundingBox *v3; // r9@1
  int v4; // r8@1
  int v5; // r12@2
  signed int v6; // r10@2
  signed int v7; // r11@2
  int v8; // r1@3
  int v9; // r5@4
  __int64 v10; // kr00_8@4
  int v11; // r0@4
  int v12; // r3@4
  bool v13; // nf@4
  unsigned __int8 v14; // vf@4
  signed int v15; // r0@4
  __int64 v16; // kr10_8@4
  signed int v17; // r2@6
  signed int v18; // r1@6
  bool v19; // zf@8
  signed int v20; // r3@8
  signed int v21; // r6@10
  int v22; // r0@16
  int v23; // r2@20
  int result; // r0@22
  BlockSource *v25; // [sp+4h] [bp-2Ch]@1
  VillagePiece *v26; // [sp+8h] [bp-28h]@1

  v25 = a2;
  v26 = this;
  v3 = a3;
  v4 = *((_DWORD *)this + 3);
  if ( v4 > *((_DWORD *)this + 6) )
    goto LABEL_26;
  v5 = *((_DWORD *)this + 4);
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *((_DWORD *)this + 1);
    if ( v8 <= v5 )
    {
      do
      {
        v9 = v8;
        v10 = *(_QWORD *)v3;
        v11 = *((_QWORD *)v3 + 1) >> 32;
        v12 = *((_QWORD *)v3 + 1);
        v14 = __OFSUB__(v11, v8);
        v13 = v11 - v8 < 0;
        v15 = 0;
        v16 = *((_QWORD *)v3 + 2);
        if ( !(v13 ^ v14) )
          v15 = 1;
        v17 = 0;
        v18 = 0;
        if ( (signed int)v10 <= v9 )
          v17 = 1;
        v14 = __OFSUB__(v12, v4);
        v19 = v12 == v4;
        v13 = v12 - v4 < 0;
        v20 = 0;
        if ( (unsigned __int8)(v13 ^ v14) | v19 )
          v20 = 1;
        v21 = 0;
        if ( SHIDWORD(v16) >= v4 )
          v21 = 1;
        if ( SHIDWORD(v10) < 65 )
          v18 = 1;
        if ( (signed int)v16 >= 64 && (v15 & v17 & v20 & v21 & v18) == 1 )
        {
          v22 = j_BlockSource::getAboveTopSolidBlock(v25, v9, v4, 0, 0);
          ++v6;
          if ( v22 < 64 )
            v22 = 64;
          v7 += v22;
          v5 = *((_DWORD *)v26 + 4);
        }
        v8 = v9 + 1;
      }
      while ( v9 < v5 );
    }
    this = v26;
    v23 = *((_DWORD *)v26 + 6);
    v14 = __OFSUB__(v4, v23);
    v13 = v4++ - v23 < 0;
  }
  while ( v13 ^ v14 );
  if ( v6 )
    result = v7 / v6;
  else
LABEL_26:
    result = -1;
  return result;
}


int __fastcall VillagePiece::generateHouseNorthernRight(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0@2

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      result = j_VillagePiece::generateAndAddPiece(
                 a1,
                 a2,
                 a3,
                 a4,
                 *(_DWORD *)(a1 + 16) + 1,
                 *(_DWORD *)(a1 + 8) + a5,
                 *(_DWORD *)(a1 + 12) + a6,
                 3,
                 *(_DWORD *)(a1 + 32));
      break;
    case 1:
    case 3:
                 *(_DWORD *)(a1 + 4) + a6,
                 *(_DWORD *)(a1 + 24) + 1,
                 0,
    default:
      result = 0;
  }
  return result;
}


int __fastcall VillagePiece::VillagePiece(int result, int a2, int a3)
{
  unsigned int v3; // r1@2

  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)result = &off_27242B8;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 40) = 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(result + 44) = v3;
    *(_BYTE *)(result + 45) = BYTE1(v3);
    *(_BYTE *)(result + 46) = v3 >> 16;
    *(_BYTE *)(result + 47) = BYTE3(v3);
    if ( 0 != v3 >> 24 )
      *(_DWORD *)(result + 48) = &VillagePiece::mossyStoneSelector;
  }
  return result;
}


signed int __fastcall VillagePiece::isOkBox(VillagePiece *this, const BoundingBox *a2)
{
  signed int v2; // r1@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 1);
  result = 0;
  if ( v2 > 10 )
    result = 1;
  return result;
}


void __fastcall VillagePiece::generatePieceFromSmallDoor(Random *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r11@1
  Random *v11; // r5@1
  const void **v12; // r4@2
  int v13; // r10@2
  unsigned int v14; // r0@3
  __int64 v15; // r6@3
  int v16; // r8@4
  int v17; // r0@6
  _DWORD *v18; // r0@9
  const void *v19; // r1@9
  size_t v20; // r2@9
  int v21; // r9@12
  bool v22; // zf@14
  int v23; // r7@18
  int v24; // r6@18
  int v25; // r9@19
  int v26; // r8@19
  bool v27; // nf@19
  unsigned __int8 v28; // vf@19
  _DWORD *v29; // r0@22
  unsigned int v30; // r2@23
  int v31; // r1@25
  int v32; // r0@26
  int v33; // r1@28
  int v34; // r0@28
  signed int v35; // r2@29
  int v36; // r7@30
  int v37; // r1@31
  int v38; // r3@31
  int v39; // r4@31
  int v40; // r5@31
  int v41; // r1@33
  void *v42; // r0@33
  unsigned int *v43; // r2@34
  signed int v44; // r1@36
  signed int v45; // [sp+20h] [bp-48h]@1
  _DWORD *v46; // [sp+24h] [bp-44h]@1
  __int64 *v47; // [sp+28h] [bp-40h]@1
  int v48; // [sp+2Ch] [bp-3Ch]@17
  int v49; // [sp+30h] [bp-38h]@19
  const void **v50; // [sp+34h] [bp-34h]@20
  int v51; // [sp+38h] [bp-30h]@18
  int v52; // [sp+3Ch] [bp-2Ch]@19
  int v53; // [sp+40h] [bp-28h]@20

  v10 = a3;
  v11 = a1;
  v47 = (__int64 *)a4;
  v46 = (_DWORD *)(a3 + 84);
  v45 = j_StructurePiece::getTotalWeight((__int64 *)(a3 + 84));
  if ( v45 < 1 )
    goto LABEL_38;
  v12 = (const void **)(v10 + 52);
  v13 = 0;
  while ( 1 )
  {
    v14 = j_Random::_genRandInt32((Random *)a5);
    v15 = *(_QWORD *)(v10 + 84);
    if ( (_DWORD)v15 != HIDWORD(v15) )
      break;
LABEL_16:
    if ( ++v13 > 4 )
    {
      j_BoundingBox::orientBox((BoundingBox *)&v48, a6, a7, a8, 0, 0, 0, 3, 4, 2, a9);
      if ( !j_StructurePiece::findCollisionPiece(v47, (int)&v48) )
      {
        v23 = v48;
        v24 = v51;
        if ( v51 >= v48 )
        {
          v25 = v49;
          v26 = v52;
          v28 = __OFSUB__(v52, v49);
          v27 = v52 - v49 < 0;
          if ( v52 >= v49 )
          {
            v12 = v50;
            v13 = v53;
            v28 = __OFSUB__(v53, v50);
            v27 = v53 - (signed int)v50 < 0;
          }
          if ( !(v27 ^ v28) )
            v29 = j_operator new(0x34u);
            v29[5] = 0;
            v29[6] = 0;
            v29[3] = 0;
            v29[4] = 0;
            v29[1] = 0;
            v29[2] = 0;
            v29[7] = 255;
            v29[8] = a10;
            *v29 = &off_27242B8;
            v29[11] = 0;
            v29[12] = 0;
            v29[9] = -1;
            v29[10] = 0;
            if ( v10 )
            {
              v30 = *(_DWORD *)(v10 + 44);
              *((_BYTE *)v29 + 44) = v30;
              *((_BYTE *)v29 + 45) = BYTE1(v30);
              *((_BYTE *)v29 + 46) = v30 >> 16;
              *((_BYTE *)v29 + 47) = BYTE3(v30);
              if ( 0 != v30 >> 24 )
                v29[12] = &VillagePiece::mossyStoneSelector;
            }
            *v29 = &off_27245FC;
            v29[1] = v23;
            v29[2] = v25;
            v31 = (int)(v29 + 3);
            *(_DWORD *)v31 = v12;
            *(_DWORD *)(v31 + 4) = v24;
            *(_DWORD *)(v31 + 8) = v26;
            *(_DWORD *)(v31 + 12) = v13;
            v29[7] = a9;
            goto LABEL_39;
        }
      }
LABEL_38:
      v29 = 0;
LABEL_39:
      *(_DWORD *)v11 = v29;
      return;
    }
  }
  LODWORD(v15) = v15 + 8;
  v16 = v14 % v45;
    v16 -= *(_DWORD *)(v15 - 4);
    if ( v16 <= -1 )
LABEL_14:
    v22 = (_DWORD)v15 + 16 == HIDWORD(v15);
    LODWORD(v15) = v15 + 24;
    if ( v22 )
      goto LABEL_16;
  v17 = *(_DWORD *)(v15 + 4);
  if ( v17 && *(_DWORD *)v15 >= v17 )
    goto LABEL_16;
  if ( *(_DWORD *)(v15 + 8) > a10 )
  v18 = *(_DWORD **)(v15 - 8);
  v19 = *v12;
  v20 = *(v18 - 3);
  if ( v20 == *((_DWORD *)*v12 - 3) && !j_memcmp_0(v18, v19, v20) )
    v19 = (const void *)-1431655765;
    if ( (unsigned int)(-1431655765 * ((HIDWORD(v15) - *v46) >> 3)) > 1 )
  v21 = v15 - 8;
  j_VillagePiece::findAndCreatePieceFactory(
    v11,
    (int)v19,
    v10,
    (const void **)(v15 - 8),
    v47,
    (Random *)a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  if ( !*(_DWORD *)v11 )
    HIDWORD(v15) = *(_DWORD *)(v10 + 88);
    *(_DWORD *)v11 = 0;
    goto LABEL_14;
  ++*(_DWORD *)v15;
  EntityInteraction::setInteractText((int *)(v10 + 52), (int *)(v15 - 8));
  v32 = *(_DWORD *)(v15 + 4);
  if ( v32 && *(_DWORD *)v15 >= v32 )
    v33 = *(_DWORD *)(v10 + 88);
    v34 = v15 + 16;
    if ( (_DWORD)v15 + 16 != v33 )
      v35 = v33 - v34;
      v34 = *(_DWORD *)(v10 + 88);
      if ( v35 >= 1 )
        v36 = -1431655765 * (v35 >> 3) + 1;
        do
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v21,
            (int *)(v21 + 24));
          v37 = v21 + 4;
          --v36;
          v21 += 24;
          v38 = *(_DWORD *)(v21 + 8);
          v39 = *(_DWORD *)(v21 + 12);
          v40 = *(_DWORD *)(v21 + 16);
          *(_DWORD *)v37 = *(_DWORD *)(v21 + 4);
          *(_DWORD *)(v37 + 4) = v38;
          *(_DWORD *)(v37 + 8) = v39;
          *(_DWORD *)(v37 + 12) = v40;
          *(_BYTE *)(v21 - 4) = *(_BYTE *)(v21 + 20);
        while ( v36 > 1 );
        v34 = *(_DWORD *)(v10 + 88);
    *(_DWORD *)(v10 + 88) = v34 - 24;
    v41 = *(_DWORD *)(v34 - 24);
    v42 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
        __dmb();
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
}


int __fastcall VillagePiece::getVillagerProfession(VillagePiece *this, int a2)
{
  return 0;
}


int __fastcall VillagePiece::placeBlock(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v67; // r5@1
  int v68; // r8@1
  int v69; // r4@1
  int v70; // r6@1
  char *v71; // r2@2
  int (__fastcall *v72)(int, int, char *, int); // r7@2
  char v73; // r0@3
  char v75; // [sp+10h] [bp-30h]@3
  char v76; // [sp+11h] [bp-2Fh]@3
  char v77; // [sp+14h] [bp-2Ch]@2
  char v78; // [sp+15h] [bp-2Bh]@2
  int v79; // [sp+3Ch] [bp-4h]@1

  v79 = a4;
  v67 = a65;
  v68 = a66;
  v69 = a2;
  v70 = a1;
  if ( a65 )
  {
    (*(void (__fastcall **)(int, int *, int, int))(*(_DWORD *)a65 + 8))(a65, &v79, a66, a67);
    v71 = &v77;
    v72 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)v70 + 36);
    v77 = *(_BYTE *)(v67 + 4);
    v78 = *(_BYTE *)(v67 + 5);
  }
  else
    v72 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)a1 + 36);
    v75 = *(_BYTE *)a3;
    v73 = *(_BYTE *)(a3 + 1);
    v71 = &v75;
    v76 = v73;
  return v72(v70, v69, v71, v68);
}


int __fastcall VillagePiece::createDoor(VillagePiece *this, BlockSource *a2, const BoundingBox *a3, Random *a4, int a5, int a6, int a7, int a8)
{
  VillagePiece *v8; // r6@1
  const BoundingBox *v9; // r5@1
  BlockSource *v10; // r4@1
  int result; // r0@1
  __int64 v12; // r2@3
  BlockSource *v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@5
  int v15; // [sp+14h] [bp-1Ch]@3
  char v16; // [sp+18h] [bp-18h]@1
  char v17; // [sp+19h] [bp-17h]@1
  unsigned __int8 v18; // [sp+1Ch] [bp-14h]@1

  v8 = this;
  v9 = a3;
  v10 = a2;
  v16 = *(_BYTE *)(Block::mWoodenDoor + 4);
  v17 = 0;
  j_VillagePiece::biomeBlock((int)&v18, (int)this, (int)&v16);
  j_StructurePiece::_getWorldPos((StructurePiece *)&v13, (int)v8, a5, a6, a7);
  result = *(_DWORD *)v9;
  if ( (signed int)v13 >= *(_DWORD *)v9 )
  {
    result = *((_DWORD *)v9 + 3);
    if ( (signed int)v13 <= result )
    {
      HIDWORD(v12) = v15;
      result = *((_DWORD *)v9 + 2);
      if ( v15 >= result )
      {
        result = *((_DWORD *)v9 + 5);
        if ( v15 <= result )
        {
          LODWORD(v12) = v14;
          result = *((_DWORD *)v9 + 1);
          if ( v14 >= result )
          {
            result = *((_DWORD *)v9 + 4);
            if ( v14 <= result )
              result = j_DoorItem::place(v10, v13, v12, a8, Block::mBlocks[v18], 0, v13);
          }
        }
      }
    }
  }
  return result;
}
