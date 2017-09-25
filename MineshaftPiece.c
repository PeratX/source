

signed int __fastcall MineshaftPiece::_isSupportingBox(MineshaftPiece *this, int a2, int a3, BlockSource *a4, int a5, int a6)
{
  MineshaftPiece *v6; // r6@1
  int v7; // r5@1
  BlockSource *v8; // r4@1
  int v9; // r7@1
  int v10; // r1@1
  int v11; // r3@1
  int v12; // r0@2
  int v13; // r1@6
  signed int result; // r0@9
  char v15; // [sp+8h] [bp-40h]@5
  int v16; // [sp+Ch] [bp-3Ch]@1
  int v17; // [sp+10h] [bp-38h]@1
  int v18; // [sp+14h] [bp-34h]@1
  int v19; // [sp+18h] [bp-30h]@1
  int v20; // [sp+20h] [bp-28h]@2
  int v21; // [sp+24h] [bp-24h]@1
  int v22; // [sp+28h] [bp-20h]@1
  int v23; // [sp+2Ch] [bp-1Ch]@1

  v6 = this;
  v7 = a3;
  v8 = a4;
  j_StructurePiece::_getWorldPos((StructurePiece *)&v21, (int)this, a2, a5 + 1, a6);
  j_StructurePiece::_getWorldPos((StructurePiece *)&v19, (int)v6, v7, a5 + 1, a6);
  v9 = v21;
  v10 = v19;
  v11 = v23;
  v16 = v21;
  v17 = v22;
  v18 = v23;
  if ( v21 > v19 )
  {
LABEL_9:
    result = 1;
  }
  else
    v12 = v20;
    while ( 1 )
    {
      v18 = v11;
      if ( v11 <= v12 )
        break;
LABEL_8:
      v16 = v9 + 1;
      if ( v9 >= v10 )
        goto LABEL_9;
      v11 = v23;
      ++v9;
    }
      j_BlockSource::getBlockID((BlockSource *)&v15, v8, (int)&v16);
      if ( !v15 )
      v13 = v18++;
      v12 = v20;
      if ( v13 >= v20 )
      {
        v10 = v19;
        v9 = v16;
        goto LABEL_8;
      }
    result = 0;
  return result;
}


_DWORD *__fastcall MineshaftPiece::createRandomShaftPiece(Random *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r9@0
  Random *v11; // r10@1
  __int64 *v12; // r7@1
  int v13; // r11@1
  unsigned int v14; // r2@1
  int v15; // r7@2
  int v16; // r6@2
  int v17; // r5@3
  int v18; // r4@3
  int v19; // r9@4
  int v20; // ST1C_4@5
  _DWORD *result; // r0@5
  char v22; // r1@5
  int v23; // r0@10
  int v24; // r4@11
  int v25; // r5@11
  int v26; // ST18_4@14
  int v27; // ST10_4@14
  _DWORD *v28; // r0@14
  _DWORD *v29; // r7@14
  char v30; // r9@14
  char v32; // r0@14
  unsigned int v33; // r0@17
  int v35; // r0@26
  int v36; // r5@27
  int v37; // r4@27
  int v38; // r7@28
  int v39; // r6@28
  int v42; // ST1C_4@31
  int v46; // [sp+14h] [bp-4Ch]@14
  int v47; // [sp+1Ch] [bp-44h]@14
  int v48; // [sp+20h] [bp-40h]@2
  int v49; // [sp+24h] [bp-3Ch]@3
  int v50; // [sp+28h] [bp-38h]@4
  int v51; // [sp+2Ch] [bp-34h]@2
  int v52; // [sp+30h] [bp-30h]@3
  int v53; // [sp+34h] [bp-2Ch]@4

  v11 = a1;
  v12 = (__int64 *)a4;
  v13 = a3;
  v14 = j_Random::_genRandInt32((Random *)a5) % 0x64;
  if ( v14 >= 0x50 )
  {
    j_MineshaftCrossing::findCrossing((int)&v48, (int)v12, (Random *)a5, a6, a7, a8, a9);
    v15 = v48;
    v16 = v51;
    if ( v51 >= v48 )
    {
      v17 = v49;
      v18 = v52;
      if ( v52 >= v49 )
      {
        v19 = v50;
        if ( v53 >= v50 )
        {
          v20 = v53;
          result = j_operator new(0x34u);
          v22 = 0;
          result[3] = 0;
          result[4] = 0;
          result[1] = 0;
          result[2] = 0;
          result[7] = 255;
          result[8] = a10;
          *((_BYTE *)result + 36) = *(_BYTE *)v13;
          *((_BYTE *)result + 37) = *(_BYTE *)(v13 + 1);
          *((_BYTE *)result + 38) = *(_BYTE *)(v13 + 2);
          *((_BYTE *)result + 39) = *(_BYTE *)(v13 + 3);
          result[10] = *(_DWORD *)(v13 + 4);
          result[11] = a9;
          *result = &off_2723874;
          result[1] = v15;
          result[2] = v17;
          result[3] = v19;
          result[4] = v16;
          result[5] = v18;
          result[6] = v20;
          if ( 1 - v17 + v18 > 3 )
            v22 = 1;
          *((_BYTE *)result + 48) = v22;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_32;
  }
  if ( v14 >= 0x46 )
    v48 = a6;
    v49 = a7 - 5;
    v50 = a8;
    v51 = a6;
    v52 = a7 + 2;
    v53 = a8;
    switch ( a9 )
      case 0:
        v51 = a6 + 2;
        v23 = a8 + 8;
        goto LABEL_25;
      case 1:
        v48 = a6 - 8;
        goto LABEL_24;
      case 2:
        v50 = a8 - 8;
        break;
      case 3:
        v51 = a6 + 8;
LABEL_24:
        v23 = a8 + 2;
LABEL_25:
        v53 = v23;
      default:
    v35 = j_StructurePiece::findCollisionPiece(v12, (int)&v48);
    if ( !v35 )
      v36 = v48;
      v37 = v51;
      if ( v51 >= v48 )
        v38 = v49;
        v39 = v52;
        _VF = __OFSUB__(v52, v49);
        _NF = v52 - v49 < 0;
        if ( v52 >= v49 )
          v10 = v50;
          v35 = v53;
          _VF = __OFSUB__(v53, v50);
          _NF = v53 - v50 < 0;
        if ( !(_NF ^ _VF) )
          v42 = v35;
          result = j_operator new(0x2Cu);
          result[7] = a9;
          *result = &off_27238BC;
          result[1] = v36;
          result[2] = v38;
          result[3] = v10;
          result[4] = v37;
          result[5] = v39;
          result[6] = v42;
LABEL_33:
          *(_DWORD *)v11 = result;
          return result;
LABEL_32:
    result = 0;
    goto LABEL_33;
  j_MineshaftCorridor::findCorridorSize((int)&v48, (int)v12, (Random *)a5, a6, a7, a8, a9);
  v24 = v48;
  v25 = v51;
  if ( v51 < v48 || v52 < v49 || v53 < v50 )
  v46 = v50;
  v26 = v52;
  v47 = v53;
  v27 = v49;
  v28 = j_operator new(0x34u);
  v29 = v28;
  v30 = 0;
  v28[5] = 0;
  v28[3] = 0;
  v28[4] = 0;
  v28[1] = 0;
  v28[2] = 0;
  v28[8] = a10;
  *((_BYTE *)v28 + 36) = *(_BYTE *)v13;
  *((_BYTE *)v28 + 37) = *(_BYTE *)(v13 + 1);
  *((_BYTE *)v28 + 38) = *(_BYTE *)(v13 + 2);
  *((_BYTE *)v28 + 39) = *(_BYTE *)(v13 + 3);
  v28[10] = *(_DWORD *)(v13 + 4);
  *v28 = &off_272382C;
  *((_BYTE *)v28 + 44) = 0;
  *((_BYTE *)v28 + 45) = 0;
  *((_BYTE *)v28 + 46) = 0;
  v28[12] = 0;
  v28[7] = a9;
  v28[1] = v24;
  v28[2] = v27;
  v28[3] = v46;
  v28[4] = v25;
  v28[5] = v26;
  v28[6] = v47;
  _ZF = j_Random::_genRandInt32((Random *)a5) % 3 == 0;
  v32 = 0;
  if ( _ZF )
    v32 = 1;
  *((_BYTE *)v29 + 44) = v32;
  if ( !_ZF )
    v33 = j_Random::_genRandInt32((Random *)a5);
    v30 = 0;
    if ( v33 == 23 * (v33 / 0x17) )
      v30 = 1;
  *((_BYTE *)v29 + 45) = v30;
  if ( (v29[7] | 2) == 2 )
    _R2 = v47 + 1 - v46;
  else
    _R2 = v25 + 1 - v24;
  _R0 = 1717986919;
  *(_DWORD *)v11 = v29;
  __asm { SMMUL.W         R0, R2, R0 }
  result = (_DWORD *)(((signed int)_R0 >> 1) + (_R0 >> 31));
  v29[12] = result;
  return result;
}


int __fastcall MineshaftPiece::generateAndAddPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r3@2
  int v13; // r7@5
  int v14; // r7@8
  __int64 v15; // r0@9
  int v17; // [sp+18h] [bp-18h]@8

  v9 = a2;
  v10 = a4;
  v11 = a3;
  if ( a9 > 8 )
    goto LABEL_18;
  v12 = a5 - *(_DWORD *)(a2 + 4);
  if ( v12 < 0 )
    v12 = -v12;
  if ( v12 > 80 )
  v13 = a7 - *(_DWORD *)(a2 + 12);
  if ( v13 < 0 )
    v13 = -v13;
  if ( v13 <= 80
    && (j_MineshaftPiece::createRandomShaftPiece((Random *)&v17, a9 + 1, a1 + 36, a3, v10, a5, a6, a7, a8, a9 + 1),
        (v14 = v17) != 0) )
  {
    v15 = *(_QWORD *)(v11 + 4);
    if ( (_DWORD)v15 == HIDWORD(v15) )
    {
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
        (_QWORD *)v11,
        &v17);
    }
    else
      v17 = 0;
      *(_DWORD *)v15 = v14;
      *(_DWORD *)(v11 + 4) = v15 + 4;
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v14 + 16))(v14, v9, v11, v10);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  }
  else
LABEL_18:
    v14 = 0;
  return v14;
}


signed int __fastcall MineshaftPiece::createChest(StructurePiece *a1, const BlockPos *a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int *a9)
{
  StructurePiece *v9; // r6@1
  Random *v10; // r8@1
  int v11; // r7@1
  const BlockPos *v12; // r9@1
  int v13; // r5@1
  int v14; // r4@1
  int v15; // r0@1
  signed int v16; // r7@2
  bool v17; // zf@15
  unsigned __int8 *v18; // r2@15
  int v19; // r2@17
  char v20; // r0@17
  void *v21; // r0@17
  void *v22; // r0@18
  void *v23; // r0@19
  Entity *v24; // r6@20
  int v25; // r0@21
  int v26; // r2@21
  void (*v27)(void); // r3@21
  int v28; // r4@24
  unsigned int v29; // r0@25
  void *v30; // r0@25
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  unsigned int *v34; // r2@36
  signed int v35; // r1@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  unsigned int *v38; // r2@56
  signed int v39; // r1@58
  int v40; // [sp+8h] [bp-70h]@25
  int v41; // [sp+Ch] [bp-6Ch]@21
  char v42; // [sp+10h] [bp-68h]@17
  int v43; // [sp+1Ch] [bp-5Ch]@17
  int v44; // [sp+20h] [bp-58h]@18
  int v45; // [sp+24h] [bp-54h]@17
  Entity *v46; // [sp+28h] [bp-50h]@17
  char v47; // [sp+2Ch] [bp-4Ch]@17
  unsigned __int8 v48; // [sp+30h] [bp-48h]@14
  int v49; // [sp+34h] [bp-44h]@14
  int v50; // [sp+38h] [bp-40h]@14
  int v51; // [sp+3Ch] [bp-3Ch]@14
  unsigned __int8 v52; // [sp+40h] [bp-38h]@13
  int v53; // [sp+44h] [bp-34h]@1
  int v54; // [sp+48h] [bp-30h]@1
  int v55; // [sp+4Ch] [bp-2Ch]@1

  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v14 = j_StructurePiece::getWorldY(v9, a6);
  v15 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v9 + 32))(v9, a5, a7);
  v53 = v13;
  v54 = v14;
  v55 = v15;
  if ( v13 >= *(_DWORD *)v11 )
  {
    if ( v13 <= *(_DWORD *)(v11 + 12) )
    {
      if ( v15 >= *(_DWORD *)(v11 + 8) )
      {
        if ( v15 <= *(_DWORD *)(v11 + 20) )
        {
          if ( v14 >= *(_DWORD *)(v11 + 4) )
          {
            if ( v14 <= *(_DWORD *)(v11 + 16) )
            {
              j_BlockSource::getBlockID((BlockSource *)&v52, v12, (int)&v53);
              if ( v52 == *(_BYTE *)(Block::mAir + 4) )
              {
                v49 = v53;
                v50 = v54 - 1;
                v51 = v55;
                j_BlockSource::getBlockID((BlockSource *)&v48, v12, (int)&v49);
                v16 = 0;
                if ( v48 != *(_BYTE *)(Block::mAir + 4) )
                {
                  v17 = (j_Random::_genRandInt32(v10) & 0x8000000) == 0;
                  v18 = (unsigned __int8 *)&BaseRailBlock::DIR_FLAT_Z;
                  if ( !v17 )
                    v18 = BaseRailBlock::DIR_FLAT_X;
                  v19 = *v18;
                  v47 = *(_BYTE *)(Block::mRail + 4);
                  v20 = j_StructurePiece::getOrientationData(v9, (const Block *)Block::mRail, v19);
                  j_BlockSource::setBlockAndData((int)v12, (BlockPos *)&v53, &v47, v20, 2, 0);
                  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v43, 524386);
                  j_Vec3::Vec3((int)&v42, (int)&v53);
                  j_EntityFactory::createSpawnedEntity(&v46, (const void **)&v43, 0, (int)&v42, &Vec2::ZERO);
                  v21 = (void *)(v45 - 12);
                  if ( (int *)(v45 - 12) != &dword_28898C0 )
                  {
                    v32 = (unsigned int *)(v45 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v33 = __ldrex(v32);
                      while ( __strex(v33 - 1, v32) );
                    }
                    else
                      v33 = (*v32)--;
                    if ( v33 <= 0 )
                      j_j_j_j__ZdlPv_9(v21);
                  }
                  v22 = (void *)(v44 - 12);
                  if ( (int *)(v44 - 12) != &dword_28898C0 )
                    v34 = (unsigned int *)(v44 - 4);
                        v35 = __ldrex(v34);
                      while ( __strex(v35 - 1, v34) );
                      v35 = (*v34)--;
                    if ( v35 <= 0 )
                      j_j_j_j__ZdlPv_9(v22);
                  v23 = (void *)(v43 - 12);
                  if ( (int *)(v43 - 12) != &dword_28898C0 )
                    v36 = (unsigned int *)(v43 - 4);
                        v37 = __ldrex(v36);
                      while ( __strex(v37 - 1, v36) );
                      v37 = (*v36)--;
                    if ( v37 <= 0 )
                      j_j_j_j__ZdlPv_9(v23);
                  v24 = v46;
                  if ( v46 )
                    v25 = j_BlockSource::getLevel(v12);
                    v26 = (int)v46;
                    v27 = *(void (**)(void))(*(_DWORD *)v25 + 44);
                    v46 = 0;
                    v41 = v26;
                    v27();
                    if ( v41 )
                      (*(void (**)(void))(*(_DWORD *)v41 + 32))();
                    v41 = 0;
                    if ( j_Entity::getContainerComponent(v24) )
                      v28 = j_Entity::getContainerComponent(v24);
                      if ( v28 )
                      {
                        sub_21E8AF4(&v40, a9);
                        v29 = j_Random::_genRandInt32(v10);
                        j_ContainerComponent::setLootTable(v28, &v40, v29 >> 1);
                        v30 = (void *)(v40 - 12);
                        if ( (int *)(v40 - 12) != &dword_28898C0 )
                        {
                          v38 = (unsigned int *)(v40 - 4);
                          if ( &pthread_create )
                          {
                            __dmb();
                            do
                              v39 = __ldrex(v38);
                            while ( __strex(v39 - 1, v38) );
                          }
                          else
                            v39 = (*v38)--;
                          if ( v39 <= 0 )
                            j_j_j_j__ZdlPv_9(v30);
                        }
                      }
                    if ( v46 )
                      (*(void (**)(void))(*(_DWORD *)v46 + 32))();
                    v16 = 1;
                  else
                    v16 = 0;
                }
              }
              else
            }
            else
              v16 = 0;
          }
          else
            v16 = 0;
        }
        else
          v16 = 0;
      }
      else
        v16 = 0;
    }
    else
      v16 = 0;
  }
  else
    v16 = 0;
  return v16;
}
