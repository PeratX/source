

_QWORD *__fastcall StructureTemplate::fillFromWorld(StructureTemplate *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4, int a5)
{
  StructureTemplate *v5; // r9@1
  int v6; // r1@1
  int v7; // r4@1
  int v8; // r8@1
  int v9; // r11@1
  __int64 v10; // kr08_8@1
  int v11; // r2@1
  int v12; // r7@1
  int v13; // r5@1
  int v14; // r3@1
  int v15; // r6@1
  int v16; // r7@5
  int v17; // r4@13
  int v18; // r5@13
  int v19; // r10@14
  int v20; // r0@15
  __int64 v21; // kr10_8@18
  int v22; // r4@19
  int v23; // r0@20
  int v24; // r0@23
  int v25; // r1@23
  int i; // r7@23
  int v27; // r0@26
  int v28; // r5@26
  int v29; // r8@31
  int v30; // r0@31
  void *v31; // r0@32
  void *v32; // r0@33
  void *v33; // r0@34
  const FullBlock *v34; // r3@35
  __int64 v35; // r0@35
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  unsigned int *v38; // r2@45
  signed int v39; // r1@47
  unsigned int *v40; // r2@49
  signed int v41; // r1@51
  bool v42; // nf@65
  unsigned __int8 v43; // vf@65
  _QWORD *result; // r0@68
  int v45; // r5@70 OVERLAPPED
  int v46; // r6@70 OVERLAPPED
  int v47; // r4@71
  int v48; // [sp+4h] [bp-B4h]@11
  int v49; // [sp+8h] [bp-B0h]@9
  int v50; // [sp+Ch] [bp-ACh]@3
  unsigned __int64 *v51; // [sp+14h] [bp-A4h]@13
  BlockPalette *v52; // [sp+1Ch] [bp-9Ch]@23
  const BlockPos *v53; // [sp+24h] [bp-94h]@1
  int v54; // [sp+2Ch] [bp-8Ch]@34
  int v55; // [sp+34h] [bp-84h]@33
  int v56; // [sp+3Ch] [bp-7Ch]@32
  char v57; // [sp+40h] [bp-78h]@31
  char v58; // [sp+5Ch] [bp-5Ch]@29
  int v59; // [sp+60h] [bp-58h]@29
  int v60; // [sp+64h] [bp-54h]@29
  int v61; // [sp+68h] [bp-50h]@29
  int v62; // [sp+6Ch] [bp-4Ch]@29
  int v63; // [sp+70h] [bp-48h]@29
  int v64; // [sp+74h] [bp-44h]@29
  int v65; // [sp+78h] [bp-40h]@11
  int v66; // [sp+7Ch] [bp-3Ch]@11
  int v67; // [sp+80h] [bp-38h]@13
  int v68; // [sp+84h] [bp-34h]@3
  int v69; // [sp+88h] [bp-30h]@5
  int v70; // [sp+8Ch] [bp-2Ch]@7

  v53 = a2;
  v5 = this;
  v6 = *(_QWORD *)a3 >> 32;
  v7 = *(_QWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v9 = *(_QWORD *)a3 >> 32;
  v10 = *(_QWORD *)a4;
  v11 = *((_DWORD *)a4 + 2);
  v12 = v7;
  v13 = (*(_QWORD *)a4 >> 32) + v9 - 1;
  v14 = *(_QWORD *)a4 + v7 - 1;
  v15 = v11 + v8 - 1;
  if ( v14 < v7 )
    v12 = v14;
  v50 = v12;
  v68 = v12;
  if ( v13 < v6 )
    v9 = v13;
  v16 = v8;
  v69 = v9;
  if ( v15 < v8 )
    v16 = v11 + v8 - 1;
  v70 = v16;
  if ( v6 < v13 )
    v6 = v13;
  v49 = v6;
  if ( v7 < v14 )
    v7 = v14;
  v48 = v7;
  v65 = v7;
  v66 = v6;
  if ( v8 < v15 )
    v8 = v11 + v8 - 1;
  v67 = v8;
  *(_QWORD *)((char *)this + 4) = v10;
  *((_DWORD *)this + 3) = v11;
  v17 = *((_DWORD *)this + 11);
  v51 = (unsigned __int64 *)((char *)this + 44);
  v18 = *((_DWORD *)this + 12);
  if ( v18 != v17 )
  {
    v19 = *((_DWORD *)this + 11);
    do
    {
      v20 = *(_DWORD *)(v19 + 12);
      if ( v20 )
        (*(void (**)(void))(*(_DWORD *)v20 + 4))();
      *(_DWORD *)(v19 + 12) = 0;
      v19 += 20;
    }
    while ( v18 != v19 );
  }
  *((_DWORD *)v5 + 12) = v17;
  v21 = *((_QWORD *)v5 + 7);
  if ( HIDWORD(v21) != (_DWORD)v21 )
    v22 = *((_QWORD *)v5 + 7);
      v23 = *(_DWORD *)(v22 + 24);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      *(_DWORD *)(v22 + 24) = 0;
      v22 += 28;
    while ( HIDWORD(v21) != v22 );
  *((_DWORD *)v5 + 15) = v21;
  v52 = (StructureTemplate *)((char *)v5 + 16);
  BlockPalette::clearMap((StructureTemplate *)((char *)v5 + 16));
  v24 = v48;
  v25 = v49;
  for ( i = v50; ; ++i )
    if ( v9 <= v25 )
      do
      {
        v27 = v70;
        v28 = v70;
        if ( v70 <= v8 )
        {
          while ( 1 )
          {
            v62 = i;
            v63 = v9;
            v64 = v28;
            v59 = i - v68;
            v60 = v9 - v69;
            v61 = v28 - v27;
            j_BlockSource::getBlockAndData((BlockSource *)&v58, v53, (int)&v62);
            if ( !Block::mStructureVoid
              || *(_BYTE *)(j_FullBlock::getBlock((FullBlock *)&v58) + 4) != *((_BYTE *)Block::mStructureVoid + 4) )
            {
              v29 = BlockPalette::getId(v52, (const FullBlock *)&v58);
              j_CompoundTag::CompoundTag((int)&v57);
              v30 = j_BlockSource::getBlockEntity(v53, (const BlockPos *)&v59);
              if ( v30 )
              {
                (*(void (**)(void))(*(_DWORD *)v30 + 12))();
                sub_21E94B4((void **)&v56, "x");
                j_CompoundTag::remove((int)&v57, (const void **)&v56);
                v31 = (void *)(v56 - 12);
                if ( (int *)(v56 - 12) != &dword_28898C0 )
                {
                  v36 = (unsigned int *)(v56 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v37 = __ldrex(v36);
                    while ( __strex(v37 - 1, v36) );
                  }
                  else
                    v37 = (*v36)--;
                  if ( v37 <= 0 )
                    j_j_j_j__ZdlPv_9(v31);
                }
                sub_21E94B4((void **)&v55, "y");
                j_CompoundTag::remove((int)&v57, (const void **)&v55);
                v32 = (void *)(v55 - 12);
                if ( (int *)(v55 - 12) != &dword_28898C0 )
                  v38 = (unsigned int *)(v55 - 4);
                      v39 = __ldrex(v38);
                    while ( __strex(v39 - 1, v38) );
                    v39 = (*v38)--;
                  if ( v39 <= 0 )
                    j_j_j_j__ZdlPv_9(v32);
                sub_21E94B4((void **)&v54, (const char *)&aRtuz[3]);
                j_CompoundTag::remove((int)&v57, (const void **)&v54);
                v33 = (void *)(v54 - 12);
                if ( (int *)(v54 - 12) != &dword_28898C0 )
                  v40 = (unsigned int *)(v54 - 4);
                      v41 = __ldrex(v40);
                    while ( __strex(v41 - 1, v40) );
                    v41 = (*v40)--;
                  if ( v41 <= 0 )
                    j_j_j_j__ZdlPv_9(v33);
              }
              v34 = (const FullBlock *)BlockPalette::getBlock(v52, v29);
              v35 = *((_QWORD *)v5 + 6);
              if ( (_DWORD)v35 == HIDWORD(v35) )
                std::vector<StructureBlockInfo,std::allocator<StructureBlockInfo>>::_M_emplace_back_aux<BlockPos &,CompoundTag &,FullBlock const&>(
                  v51,
                  (const BlockPos *)&v59,
                  (const CompoundTag *)&v57,
                  (int)v34);
              else
                StructureBlockInfo::StructureBlockInfo(
                  (StructureBlockInfo *)v35,
                  v34);
                *((_DWORD *)v5 + 12) += 20;
              j_CompoundTag::~CompoundTag((CompoundTag *)&v57);
            }
            v8 = v67;
            if ( v28 >= v67 )
              break;
            v27 = v70;
            ++v28;
          }
          v25 = v66;
        }
        v43 = __OFSUB__(v9, v25);
        v42 = v9++ - v25 < 0;
      }
      while ( v42 ^ v43 );
      v24 = v65;
    if ( i >= v24 )
      break;
    v9 = v69;
  result = (_QWORD *)a5;
  if ( a5 )
    result = StructureTemplate::fillEntityList(v5, v53, (const BlockPos *)&v68, (BlockPos *)&v65);
  else
    *(_QWORD *)&v45 = *((_QWORD *)v5 + 7);
    if ( v46 != v45 )
      v47 = v45;
        result = *(_QWORD **)(v47 + 24);
        if ( result )
          result = (_QWORD *)(*(int (**)(void))(*(_DWORD *)result + 4))();
        *(_DWORD *)(v47 + 24) = 0;
        v47 += 28;
      while ( v46 != v47 );
    *((_DWORD *)v5 + 15) = v45;
  return result;
}


int __fastcall StructureTemplate::getZeroPositionWithTransform(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r1@1
  int v8; // r5@1
  int v9; // r7@1
  int v10; // r12@1
  int v11; // r4@1
  int v12; // lr@1
  int v13; // r2@1
  int v14; // r1@6
  int v15; // r2@6
  int v16; // r2@8

  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)a3;
  v8 = v5 - 1;
  *(_DWORD *)result = *(_DWORD *)a3;
  v9 = v6 - 1;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = 0;
  *(_DWORD *)(result + 4) = v10;
  v12 = *(_DWORD *)(a3 + 8);
  v13 = 0;
  *(_DWORD *)(result + 8) = v12;
  if ( a4 == 1 )
    v11 = v8;
  if ( a4 == 2 )
    v13 = v9;
  switch ( a5 )
  {
    case 0:
      v14 = v7 + v13;
      v15 = v12 + v11;
      goto LABEL_11;
    case 1:
      v15 = v13 + v12;
      v14 = v7 + v8 - v11;
    case 2:
      v14 = v7 + v9 - v13;
      v16 = v8 - v11;
      goto LABEL_10;
    case 3:
      v14 = v7 + v11;
      v16 = v9 - v13;
LABEL_10:
      v15 = v16 + v12;
LABEL_11:
      *(_DWORD *)result = v14;
      *(_DWORD *)(result + 4) = v10;
      *(_DWORD *)(result + 8) = v15;
      break;
    default:
      return result;
  }
  return result;
}


unsigned int __fastcall StructureTemplate::_calculateRelativePosition(int a1, StructureSettings *a2, unsigned int a3, int a4, unsigned int a5, StructureSettings *a6)
{
  int v6; // r5@1
  int v7; // r8@1
  unsigned int v8; // r6@1
  int v9; // r4@1
  char *v10; // r0@1
  unsigned int v11; // r1@1
  int v12; // r0@1
  unsigned int result; // r0@9

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = *(_DWORD *)j_StructureSettings::getMirror(a6);
  v10 = j_StructureSettings::getRotation(a6);
  v11 = a5;
  v12 = *(_WORD *)v10;
  if ( v9 == 2 )
  {
    v8 ^= 0x80000000;
  }
  else if ( v9 == 1 )
    v11 = a5 ^ 0x80000000;
  switch ( v12 )
    case 3:
      result = v8 ^ 0x80000000;
      break;
    case 2:
      result = v11 ^ 0x80000000;
      v11 = v8 ^ 0x80000000;
    case 1:
      v11 ^= 0x80000000;
      result = v8;
    default:
      result = v11;
      v11 = v8;
  *(_DWORD *)v6 = v11;
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = result;
  return result;
}


signed int __fastcall StructureTemplate::load(StructureTemplate *this, CompoundTag *a2)
{
  CompoundTag *v2; // r9@1
  int v3; // r4@1
  StructureTemplate *v4; // r8@1
  int v5; // r5@1
  int v6; // r7@2
  int v7; // r0@3
  int v8; // r4@6
  int v9; // r5@6
  int v10; // r7@7
  int v11; // r0@8
  ListTag *v12; // r6@11
  __int64 v13; // r4@11
  int v14; // r0@11
  int *v15; // r0@11
  ListTag *v16; // r5@11
  void **v17; // r7@12
  unsigned int v18; // r8@12
  int v19; // r6@13
  int *v20; // r0@13
  ListTag *v21; // r7@13
  void *v22; // r0@13
  unsigned int v23; // r3@15
  unsigned int v24; // r2@15
  void *v25; // r0@16
  int v26; // r6@17
  int v27; // r5@17
  void *v28; // r0@17
  signed int v29; // r6@20
  void *v30; // r0@20
  void *v31; // r0@22
  unsigned int *v32; // r2@23
  signed int v33; // r1@25
  const void **v34; // r8@27
  void *v35; // r0@27
  signed int v36; // r0@28
  void *v37; // r0@28
  int i; // r6@29
  const void **v39; // r0@30
  signed int v40; // r0@30
  int v41; // r0@31
  char v42; // r2@32
  void *v43; // r0@34
  signed int v44; // r0@35
  unsigned int *v45; // r2@37
  signed int v46; // r1@39
  unsigned int *v47; // r2@41
  signed int v48; // r1@43
  unsigned int *v49; // r2@45
  signed int v50; // r1@47
  unsigned int *v51; // r2@49
  signed int v52; // r1@51
  unsigned int *v53; // r2@69
  signed int v54; // r1@71
  unsigned int *v55; // r2@77
  signed int v56; // r1@79
  unsigned int *v57; // r2@81
  signed int v58; // r1@83
  ListTag *v59; // r4@96
  signed int v60; // r11@97
  int v61; // r10@98
  ListTag *v62; // r7@98
  int v63; // r4@98
  int v64; // r6@98
  int v65; // r0@98
  int v66; // r0@98
  const FullBlock *v67; // r9@98
  int v68; // r0@99
  __int64 v69; // r0@101
  int v70; // r0@103
  __int64 v71; // r0@103
  ListTag *v72; // r0@111
  ListTag *v73; // r10@111
  signed int result; // r0@111
  signed int v75; // r6@112
  int v76; // r0@113
  int v77; // r11@113
  ListTag *v78; // r0@113
  ListTag *v79; // r4@113
  ListTag *v87; // r4@113
  int v88; // r5@113
  int v89; // r7@113
  int v90; // r0@113
  const CompoundTag *v91; // r3@113
  __int64 v92; // r0@113
  int v93; // [sp+28h] [bp-D8h]@11
  unsigned __int64 *v94; // [sp+2Ch] [bp-D4h]@1
  unsigned __int64 *v95; // [sp+30h] [bp-D0h]@6
  ListTag *v96; // [sp+34h] [bp-CCh]@17
  ListTag *v97; // [sp+34h] [bp-CCh]@96
  unsigned __int64 *v98; // [sp+38h] [bp-C8h]@11
  int v99; // [sp+3Ch] [bp-C4h]@11
  int v100; // [sp+40h] [bp-C0h]@113
  int v101; // [sp+44h] [bp-BCh]@113
  int v102; // [sp+48h] [bp-B8h]@113
  float v103; // [sp+4Ch] [bp-B4h]@114
  int v104; // [sp+58h] [bp-A8h]@103
  int v105; // [sp+74h] [bp-8Ch]@99
  CompoundTag *v106; // [sp+78h] [bp-88h]@99
  int v107; // [sp+7Ch] [bp-84h]@98
  int v108; // [sp+80h] [bp-80h]@98
  int v109; // [sp+84h] [bp-7Ch]@98
  char v110; // [sp+88h] [bp-78h]@34
  char v111; // [sp+89h] [bp-77h]@34
  int v112; // [sp+90h] [bp-70h]@28
  int v113; // [sp+98h] [bp-68h]@27
  int v114; // [sp+A0h] [bp-60h]@22
  int v115; // [sp+A8h] [bp-58h]@20
  int v116; // [sp+ACh] [bp-54h]@18
  int v117; // [sp+B4h] [bp-4Ch]@17
  int v118; // [sp+B8h] [bp-48h]@16
  int v119; // [sp+C0h] [bp-40h]@12
  int v120; // [sp+C4h] [bp-3Ch]@13

  v2 = a2;
  v3 = *((_DWORD *)this + 11);
  v4 = this;
  v94 = (unsigned __int64 *)((char *)this + 44);
  v5 = *((_DWORD *)this + 12);
  if ( v5 != v3 )
  {
    v6 = *((_DWORD *)this + 11);
    do
    {
      v7 = *(_DWORD *)(v6 + 12);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v6 + 12) = 0;
      v6 += 20;
    }
    while ( v5 != v6 );
  }
  *((_DWORD *)v4 + 12) = v3;
  v8 = *((_DWORD *)v4 + 14);
  v95 = (unsigned __int64 *)((char *)v4 + 56);
  v9 = *((_DWORD *)v4 + 15);
  if ( v9 != v8 )
    v10 = *((_DWORD *)v4 + 14);
      v11 = *(_DWORD *)(v10 + 24);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v10 + 24) = 0;
      v10 += 28;
    while ( v9 != v10 );
  v99 = (int)v4;
  *((_DWORD *)v4 + 15) = v8;
  v98 = (unsigned __int64 *)((char *)v4 + 16);
  BlockPalette::clearMap((StructureTemplate *)((char *)v4 + 16));
  v12 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&StructureTemplate::SIZE_TAG);
  LODWORD(v13) = j_ListTag::getInt(v12, 0);
  HIDWORD(v13) = j_ListTag::getInt(v12, 1);
  v14 = j_ListTag::getInt(v12, 2);
  *(_QWORD *)((char *)v4 + 4) = v13;
  *((_DWORD *)v4 + 3) = v14;
  v15 = (int *)j_CompoundTag::getString((int)v2, (const void **)&StructureTemplate::AUTHOR_TAG);
  EntityInteraction::setInteractText((int *)v4, v15);
  v93 = (int)v2;
  v16 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&StructureTemplate::PALETTE_TAG);
  if ( j_ListTag::size(v16) >= 1 )
    v17 = (void **)&v119;
    v18 = 0;
      v19 = ListTag::getCompound(v16, v18);
      sub_21E94B4(v17, "Name");
      v20 = (int *)j_CompoundTag::getString(v19, (const void **)v17);
      sub_21E8AF4(&v120, v20);
      v21 = v16;
      v22 = (void *)(v119 - 12);
      if ( (int *)(v119 - 12) != &dword_28898C0 )
      {
        v45 = (unsigned int *)(v119 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v21 = v16;
        }
        else
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      }
      if ( sub_21E76A0(
             &v120,
             (_BYTE *)StructureTemplate::MINECRAFT_PREFIX,
             0,
             *(_DWORD *)(StructureTemplate::MINECRAFT_PREFIX - 12)) != -1 )
        v23 = *(_DWORD *)(v120 - 12);
        v24 = *(_DWORD *)(StructureTemplate::MINECRAFT_PREFIX - 12);
        if ( v23 < v24 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v24, v23);
        sub_21E9040((void **)&v118, &v120, v24, 0xFFFFFFFF);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          &v120,
          &v118);
        v25 = (void *)(v118 - 12);
        if ( (int *)(v118 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v118 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          }
          else
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
      v96 = (ListTag *)v18;
      v26 = ListTag::getCompound(v21, v18);
      sub_21E94B4((void **)&v117, "Properties");
      v27 = j_CompoundTag::getCompound(v26, (const void **)&v117);
      v28 = (void *)(v117 - 12);
      if ( (int *)(v117 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v117 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v116 = 0;
      if ( v27 && !j_CompoundTag::isEmpty((CompoundTag *)v27) )
        sub_21E94B4((void **)&v115, "dataID");
        v29 = j_CompoundTag::contains(v27, (const void **)&v115, 3);
        v30 = (void *)(v115 - 12);
        if ( (int *)(v115 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v115 - 4);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        if ( v29 == 1 )
          sub_21E94B4((void **)&v114, "dataID");
          v116 = j_CompoundTag::getInt(v27, (const void **)&v114);
          v31 = (void *)(v114 - 12);
          if ( (int *)(v114 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v114 - 4);
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
              j_j_j_j__ZdlPv_9(v31);
          sub_21E94B4((void **)&v113, "half");
          v34 = j_CompoundTag::getString(v27, (const void **)&v113);
          v35 = (void *)(v113 - 12);
          if ( (int *)(v113 - 12) != &dword_28898C0 )
            v55 = (unsigned int *)(v113 - 4);
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
              v56 = (*v55)--;
            if ( v56 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          sub_21E94B4((void **)&v112, "half");
          v36 = StructureTemplate::_mapToProperty(v99, (const void **)&v112, v34, (const void **)&v120, v116);
          v116 |= v36;
          v37 = (void *)(v112 - 12);
          if ( (int *)(v112 - 12) != &dword_28898C0 )
            v57 = (unsigned int *)(v112 - 4);
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
              v58 = (*v57)--;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          for ( i = *(_DWORD *)(v27 + 16); i != v27 + 8; i = sub_21D4820(i) )
            v39 = j_CompoundTag::getString(v27, (const void **)(i + 16));
            v40 = StructureTemplate::_mapToProperty(v99, (const void **)(i + 16), v39, (const void **)&v120, v116);
            v116 |= v40;
      StructureTemplate::_mapToBlock(v99, (const void **)&v120, &v116);
      v41 = j_Block::lookupByName((unsigned int *)&v120, 1);
      if ( v41 )
        v42 = v116;
      else
        v42 = 0;
        v116 = 0;
        v41 = Block::mAir;
      v110 = *(_BYTE *)(v41 + 4);
      v111 = v42;
      BlockPalette::addMapping(v98, (unsigned int)v96, (int)&v110);
      v43 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v120 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v18 = (unsigned int)v96 + 1;
      v44 = j_ListTag::size(v21);
      v16 = v21;
      v17 = (void **)&v119;
    while ( (signed int)v96 + 1 < v44 );
  v59 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&StructureTemplate::BLOCKS_TAG);
  v97 = v59;
  if ( j_ListTag::size(v59) >= 1 )
    v60 = 0;
      v61 = ListTag::getCompound(v59, v60);
      v62 = (ListTag *)j_CompoundTag::getList(v61, (const void **)&StructureTemplate::BLOCK_TAG_POS);
      v63 = j_ListTag::getInt(v62, 0);
      v64 = j_ListTag::getInt(v62, 1);
      v65 = j_ListTag::getInt(v62, 2);
      v107 = v63;
      v108 = v64;
      v109 = v65;
      v66 = j_CompoundTag::getInt(v61, (const void **)&StructureTemplate::BLOCK_TAG_STATE);
      v67 = (const FullBlock *)BlockPalette::getBlock((BlockPalette *)v98, v66);
      if ( j_CompoundTag::getCompound(v61, (const void **)&StructureTemplate::BLOCK_TAG_NBT) )
        v68 = j_CompoundTag::getCompound(v61, (const void **)&StructureTemplate::BLOCK_TAG_NBT);
        CompoundTag::clone((CompoundTag *)&v105, v68);
        StructureTemplate::_mapTag((int *)&v106, v99, &v105);
        if ( v105 )
          (*(void (**)(void))(*(_DWORD *)v105 + 4))();
        v105 = 0;
        v69 = *(_QWORD *)(v99 + 48);
        if ( (_DWORD)v69 == HIDWORD(v69) )
          std::vector<StructureBlockInfo,std::allocator<StructureBlockInfo>>::_M_emplace_back_aux<BlockPos &,CompoundTag &,FullBlock const&>(
            v94,
            (const BlockPos *)&v107,
            v106,
            (int)v67);
          StructureBlockInfo::StructureBlockInfo((StructureBlockInfo *)v69, (const BlockPos *)&v107, v106, v67);
          *(_DWORD *)(v99 + 48) += 20;
        if ( v106 )
          (*(void (**)(void))(*(_DWORD *)v106 + 4))();
        v70 = j_CompoundTag::CompoundTag((int)&v104);
        (*(void (__fastcall **)(int, void *))(v104 + 40))(v70, &StructureTemplate::BLOCK_TAG_NBT);
        v71 = *(_QWORD *)(v99 + 48);
        if ( (_DWORD)v71 == HIDWORD(v71) )
            (const CompoundTag *)&v104,
          StructureBlockInfo::StructureBlockInfo(
            (StructureBlockInfo *)v71,
            v67);
        j_CompoundTag::~CompoundTag((CompoundTag *)&v104);
      v59 = v97;
      ++v60;
    while ( v60 < j_ListTag::size(v97) );
  v72 = (ListTag *)j_CompoundTag::getList(v93, (const void **)&StructureTemplate::ENTITIES_TAG);
  v73 = v72;
  result = j_ListTag::size(v72);
  if ( result >= 1 )
    v75 = 0;
      v76 = ListTag::getCompound(v73, v75);
      v77 = v76;
      v78 = (ListTag *)j_CompoundTag::getList(v76, (const void **)&StructureTemplate::ENTITY_TAG_POS);
      v79 = v78;
      _R0 = j_ListTag::getDouble(v78, 0);
      __asm { VMOV            D8, R0, R1 }
      _R0 = j_ListTag::getDouble(v79, 1);
      __asm { VMOV            D9, R0, R1 }
      _R0 = j_ListTag::getDouble(v79, 2);
      __asm
        VMOV            D0, R0, R1
        VCVT.F32.F64    S2, D8
        VCVT.F32.F64    S4, D9
        VCVT.F32.F64    S0, D0
        VSTR            S2, [SP,#0x100+var_B4]
        VSTR            S4, [SP,#0x100+var_B0]
        VSTR            S0, [SP,#0x100+var_AC]
      v87 = (ListTag *)j_CompoundTag::getList(v77, (const void **)&StructureTemplate::ENTITY_TAG_BLOCKPOS);
      v88 = j_ListTag::getInt(v87, 0);
      v89 = j_ListTag::getInt(v87, 1);
      v90 = j_ListTag::getInt(v87, 2);
      v100 = v88;
      v101 = v89;
      v102 = v90;
      v91 = (const CompoundTag *)j_CompoundTag::getCompound(v77, (const void **)&StructureTemplate::ENTITY_TAG_NBT);
      v92 = *(_QWORD *)(v99 + 60);
      if ( (_DWORD)v92 == HIDWORD(v92) )
        std::vector<StructureEntityInfo,std::allocator<StructureEntityInfo>>::_M_emplace_back_aux<Vec3 &,BlockPos &,CompoundTag const&>(
          v95,
          (const Vec3 *)&v103,
          (const BlockPos *)&v100,
          (int)v91);
        StructureEntityInfo::StructureEntityInfo(
          (StructureEntityInfo *)v92,
          v91);
        *(_DWORD *)(v99 + 60) += 28;
      ++v75;
      result = j_ListTag::size(v73);
    while ( v75 < result );
  return result;
}


int __fastcall StructureTemplate::_mapTag(int *a1, int a2, int *a3)
{
  int *v3; // r11@1
  int v4; // r4@1
  int *v5; // r6@1
  signed int v6; // r4@1
  void *v7; // r0@1
  int v8; // r5@2
  int v9; // r0@3
  ListTag *v10; // r6@3
  void *v11; // r0@3
  void **v12; // r4@5
  int *v13; // r5@5
  int v14; // r7@5
  const char *v15; // r8@5
  signed int v16; // r4@6
  void *v17; // r0@6
  int v18; // r4@8
  int *v19; // r0@8
  void *v20; // r0@8
  int v21; // r4@12
  void *v22; // r0@12
  int v23; // r4@13
  int v24; // r5@13
  int v25; // r0@13
  void *v26; // r0@13
  void *v27; // r0@14
  unsigned int *v28; // r2@15
  signed int v29; // r1@17
  int v30; // r4@19
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  int v33; // r4@28
  void *v34; // r0@28
  int v35; // r4@29
  int v36; // r5@29
  int v37; // r0@29
  void *v38; // r0@29
  unsigned int *v39; // r2@35
  signed int v40; // r1@37
  unsigned int *v41; // r2@43
  signed int v42; // r1@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@51
  signed int v45; // r1@53
  void **v46; // r5@54
  unsigned int *v47; // r2@55
  signed int v48; // r1@57
  void **v49; // r5@58
  unsigned int *v50; // r2@59
  signed int v51; // r1@61
  signed int v52; // r1@63
  signed int v53; // r1@67
  signed int v54; // r1@71
  signed int v55; // r1@75
  signed int v56; // r1@79
  unsigned int *v57; // r2@87
  signed int v58; // r1@89
  unsigned int *v59; // r2@91
  signed int v60; // r1@93
  unsigned int *v61; // r2@95
  signed int v62; // r1@97
  unsigned int *v63; // r2@103
  signed int v64; // r1@105
  signed int v65; // r1@115
  int v66; // r10@135
  int *v67; // r0@136
  void *v68; // r0@136
  int *v69; // r4@143
  void *v70; // r0@143
  unsigned int *v71; // r2@144
  int *v72; // r9@145
  signed int v73; // r1@146
  signed int v74; // r4@148
  void *v75; // r0@148
  int v76; // r4@150
  void **v77; // r5@150
  void *v78; // r0@150
  void **v79; // r5@151
  void *v80; // r0@151
  const void **v81; // r0@152
  int v82; // r4@152
  void *v83; // r0@152
  void *v84; // r0@154
  char v85; // r4@155
  void *v86; // r0@155
  unsigned int v87; // r4@156
  signed int v88; // r4@162
  int *v89; // r5@162
  void *v90; // r0@162
  int v91; // r4@164
  void *v92; // r0@164
  void *v93; // r0@165
  const void **v94; // r0@166
  int v95; // r4@166
  void *v96; // r0@166
  void **v97; // r5@173
  void *v98; // r0@173
  int v99; // r4@175
  signed int v100; // r4@175
  void *v101; // r0@175
  void *v102; // r0@176
  unsigned int *v103; // r2@177
  unsigned int *v104; // r2@186
  signed int v105; // r1@188
  void *v106; // r0@191
  int v107; // r4@193
  ListTag *v108; // r6@193
  void *v109; // r0@193
  void *v110; // r0@194
  int v111; // r9@195
  int v112; // r4@198
  void **v113; // r0@198
  const char *v114; // r10@198
  int *v115; // r8@198
  int v116; // r11@198
  void *v117; // r0@198
  void *v118; // r0@200
  unsigned int *v119; // r2@201
  signed int v120; // r1@203
  unsigned int *v121; // r2@205
  signed int v122; // r1@207
  unsigned int *v123; // r2@226
  signed int v124; // r1@228
  unsigned int *v125; // r2@230
  unsigned int *v126; // r2@238
  unsigned int *v127; // r2@242
  unsigned int *v128; // r2@246
  unsigned int *v129; // r2@250
  unsigned int *v130; // r2@254
  void *v131; // r0@262
  unsigned int *v132; // r2@270
  signed int v133; // r1@272
  unsigned int *v134; // r2@274
  signed int v135; // r1@276
  unsigned int *v136; // r2@286
  signed int v137; // r1@288
  void *v138; // r0@297
  int result; // r0@298
  unsigned int *v140; // r2@299
  signed int v141; // r1@301
  unsigned int *v142; // r2@306
  signed int v143; // r1@308
  unsigned int *v144; // r2@310
  signed int v145; // r1@312
  unsigned int *v146; // r2@314
  signed int v147; // r1@316
  unsigned int *v148; // r2@318
  signed int v149; // r1@320
  ListTag *v150; // [sp+7Ch] [bp-154h]@3
  int *v151; // [sp+80h] [bp-150h]@3
  int *v152; // [sp+84h] [bp-14Ch]@5
  int v153; // [sp+8Ch] [bp-144h]@13
  int v154; // [sp+94h] [bp-13Ch]@13
  int v155; // [sp+9Ch] [bp-134h]@12
  int v156; // [sp+A4h] [bp-12Ch]@29
  int v157; // [sp+ACh] [bp-124h]@29
  int v158; // [sp+B4h] [bp-11Ch]@28
  int v159; // [sp+BCh] [bp-114h]@19
  int v160; // [sp+C4h] [bp-10Ch]@8
  int v161; // [sp+C8h] [bp-108h]@8
  int v162; // [sp+D0h] [bp-100h]@6
  int v163; // [sp+D8h] [bp-F8h]@143
  int v164; // [sp+E0h] [bp-F0h]@217
  int v165; // [sp+E8h] [bp-E8h]@181
  int v166; // [sp+F0h] [bp-E0h]@200
  int v167; // [sp+F8h] [bp-D8h]@198
  int v168; // [sp+100h] [bp-D0h]@91
  int v169; // [sp+108h] [bp-C8h]@95
  int v170; // [sp+110h] [bp-C0h]@87
  int v171; // [sp+118h] [bp-B8h]@175
  int v172; // [sp+120h] [bp-B0h]@43
  int v173; // [sp+128h] [bp-A8h]@173
  int v174; // [sp+130h] [bp-A0h]@168
  int v175; // [sp+138h] [bp-98h]@58
  int v176; // [sp+140h] [bp-90h]@54
  int v177; // [sp+148h] [bp-88h]@51
  int v178; // [sp+150h] [bp-80h]@162
  int v179; // [sp+158h] [bp-78h]@157
  int v180; // [sp+160h] [bp-70h]@155
  int v181; // [sp+168h] [bp-68h]@103
  int v182; // [sp+170h] [bp-60h]@151
  int v183; // [sp+178h] [bp-58h]@150
  int v184; // [sp+180h] [bp-50h]@150
  int v185; // [sp+188h] [bp-48h]@148
  int v186; // [sp+190h] [bp-40h]@5
  int v187; // [sp+194h] [bp-3Ch]@5
  int v188; // [sp+19Ch] [bp-34h]@3
  int v189; // [sp+1A4h] [bp-2Ch]@1

  v3 = a3;
  v4 = *a3;
  v5 = a1;
  sub_21E94B4((void **)&v189, "Items");
  v6 = j_CompoundTag::contains(v4, (const void **)&v189);
  v7 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v189 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *v3;
  if ( v6 != 1 )
    sub_21E94B4((void **)&v162, "Item");
    v151 = v5;
    v16 = j_CompoundTag::contains(v8, (const void **)&v162);
    v17 = (void *)(v162 - 12);
    if ( (int *)(v162 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v162 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
      }
      else
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    if ( v16 != 1 )
      goto LABEL_298;
    v18 = *v3;
    sub_21E94B4((void **)&v160, "Item");
    v19 = (int *)j_CompoundTag::getString(v18, (const void **)&v160);
    sub_21E8AF4(&v161, v19);
    v20 = (void *)(v160 - 12);
    if ( (int *)(v160 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v160 - 4);
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    if ( sub_21E7D6C((const void **)&v161, "minecraft:cactus") )
      if ( sub_21E7D6C((const void **)&v161, "minecraft:red_flower") )
        if ( sub_21E7D6C((const void **)&v161, "minecraft:yellow_flower") )
          goto LABEL_297;
        v21 = *v3;
        sub_21E94B4((void **)&v155, "item");
        j_CompoundTag::putShort(v21, (const void **)&v155, *(_BYTE *)(Block::mYellowFlower + 4));
        v22 = (void *)(v155 - 12);
        if ( (int *)(v155 - 12) != &dword_28898C0 )
        {
          v146 = (unsigned int *)(v155 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v147 = __ldrex(v146);
            while ( __strex(v147 - 1, v146) );
          }
          else
            v147 = (*v146)--;
          if ( v147 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        }
        v23 = *v3;
        sub_21E94B4((void **)&v154, "mData");
        v24 = *v3;
        sub_21E94B4((void **)&v153, "Data");
        v25 = j_CompoundTag::getInt(v24, (const void **)&v153);
        j_CompoundTag::putInt(v23, (const void **)&v154, v25);
        v26 = (void *)(v153 - 12);
        if ( (int *)(v153 - 12) != &dword_28898C0 )
          v148 = (unsigned int *)(v153 - 4);
              v149 = __ldrex(v148);
            while ( __strex(v149 - 1, v148) );
            v149 = (*v148)--;
          if ( v149 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v154 - 12);
        if ( (int *)(v154 - 12) == &dword_28898C0 )
        v28 = (unsigned int *)(v154 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          goto LABEL_295;
LABEL_294:
        v29 = (*v28)--;
        goto LABEL_295;
      v33 = *v3;
      sub_21E94B4((void **)&v158, "item");
      j_CompoundTag::putShort(v33, (const void **)&v158, *(_BYTE *)(Block::mRedFlower + 4));
      v34 = (void *)(v158 - 12);
      if ( (int *)(v158 - 12) != &dword_28898C0 )
        v142 = (unsigned int *)(v158 - 4);
            v143 = __ldrex(v142);
          while ( __strex(v143 - 1, v142) );
        else
          v143 = (*v142)--;
        if ( v143 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v35 = *v3;
      sub_21E94B4((void **)&v157, "mData");
      v36 = *v3;
      sub_21E94B4((void **)&v156, "Data");
      v37 = j_CompoundTag::getInt(v36, (const void **)&v156);
      j_CompoundTag::putInt(v35, (const void **)&v157, v37);
      v38 = (void *)(v156 - 12);
      if ( (int *)(v156 - 12) != &dword_28898C0 )
        v144 = (unsigned int *)(v156 - 4);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v27 = (void *)(v157 - 12);
      if ( (int *)(v157 - 12) == &dword_28898C0 )
        goto LABEL_297;
      v28 = (unsigned int *)(v157 - 4);
      if ( !&pthread_create )
        goto LABEL_294;
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v30 = *v3;
      sub_21E94B4((void **)&v159, "item");
      j_CompoundTag::putShort(v30, (const void **)&v159, *(_BYTE *)(Block::mCactus + 4));
      v27 = (void *)(v159 - 12);
      if ( (int *)(v159 - 12) == &dword_28898C0 )
LABEL_297:
        v138 = (void *)(v161 - 12);
        if ( (int *)(v161 - 12) != &dword_28898C0 )
          v140 = (unsigned int *)(v161 - 4);
              v141 = __ldrex(v140);
            while ( __strex(v141 - 1, v140) );
            v141 = (*v140)--;
          if ( v141 <= 0 )
            j_j_j_j__ZdlPv_9(v138);
        goto LABEL_298;
      v28 = (unsigned int *)(v159 - 4);
LABEL_295:
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
    goto LABEL_297;
  sub_21E94B4((void **)&v188, "Items");
  v151 = v5;
  v9 = j_CompoundTag::getList(v8, (const void **)&v188);
  v10 = (ListTag *)v9;
  v150 = (ListTag *)v9;
  v11 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v188 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( j_ListTag::size(v10) >= 1 )
    v12 = (void **)&v186;
    v13 = &v187;
    v14 = 0;
    v15 = "id";
    v152 = &dword_28898C0;
    while ( 1 )
      v66 = j_ListTag::get(v10, v14);
      if ( (*(int (**)(void))(*(_DWORD *)v66 + 24))() == 10 )
        break;
LABEL_264:
      if ( ++v14 >= j_ListTag::size(v10) )
    sub_21E94B4(v12, v15);
    v67 = (int *)j_CompoundTag::getString(v66, (const void **)v12);
    sub_21E8AF4(v13, v67);
    v68 = (void *)(v186 - 12);
    if ( (int *)(v186 - 12) != v152 )
      v104 = (unsigned int *)(v186 - 4);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j__ZdlPv_9(v68);
    if ( !sub_21E7D6C((const void **)v13, "minecraft:potion") )
      sub_21E94B4((void **)&v185, "tag");
      v74 = j_CompoundTag::contains(v66, (const void **)&v185);
      v75 = (void *)(v185 - 12);
      if ( (int *)(v185 - 12) != v152 )
        v123 = (unsigned int *)(v185 - 4);
            v124 = __ldrex(v123);
          while ( __strex(v124 - 1, v123) );
          v124 = (*v123)--;
        if ( v124 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
      if ( v74 != 1 )
        goto LABEL_262;
      sub_21E94B4((void **)&v184, "tag");
      v76 = j_CompoundTag::getCompound(v66, (const void **)&v184);
      v77 = (void **)&v183;
      v78 = (void *)(v184 - 12);
      if ( (int *)(v184 - 12) != v152 )
        v126 = (unsigned int *)(v184 - 4);
            v52 = __ldrex(v126);
          while ( __strex(v52 - 1, v126) );
          v77 = (void **)&v183;
          v52 = (*v126)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v78);
      sub_21E94B4(v77, v15);
      j_CompoundTag::putShort(v66, (const void **)v77, 373);
      v79 = (void **)&v182;
      v80 = (void *)(v183 - 12);
      if ( (int *)(v183 - 12) != v152 )
        v127 = (unsigned int *)(v183 - 4);
            v53 = __ldrex(v127);
          while ( __strex(v53 - 1, v127) );
          v79 = (void **)&v182;
          v53 = (*v127)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v80);
      sub_21E94B4(v79, "Potion");
      v81 = j_CompoundTag::getString(v76, (const void **)v79);
      v82 = sub_21E7D6C(v81, "minecraft:strong_healing");
      v83 = (void *)(v182 - 12);
      if ( (int *)(v182 - 12) != v152 )
        v128 = (unsigned int *)(v182 - 4);
            v54 = __ldrex(v128);
          while ( __strex(v54 - 1, v128) );
          v54 = (*v128)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v83);
      if ( !v82 )
        sub_21E94B4((void **)&v181, "Damage");
        j_CompoundTag::putShort(v66, (const void **)&v181, 22);
        v84 = (void *)(v181 - 12);
        if ( (int *)(v181 - 12) != v152 )
          v63 = (unsigned int *)(v181 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v84);
      sub_21E94B4((void **)&v180, "Slot");
      v85 = j_CompoundTag::getByte(v66, (const void **)&v180);
      v86 = (void *)(v180 - 12);
      if ( (int *)(v180 - 12) != v152 )
        v129 = (unsigned int *)(v180 - 4);
            v55 = __ldrex(v129);
          while ( __strex(v55 - 1, v129) );
          v55 = (*v129)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v86);
      v87 = (unsigned __int8)(v85 + 1);
      if ( v87 > 3 )
      sub_21E94B4((void **)&v179, "Slot");
      j_CompoundTag::putByte(v66, (const void **)&v179, v87);
      v69 = v152;
      v70 = (void *)(v179 - 12);
      if ( (int *)(v179 - 12) == v152 )
        goto LABEL_261;
      v71 = (unsigned int *)(v179 - 4);
        v72 = v152;
          v73 = __ldrex(v71);
        while ( __strex(v73 - 1, v71) );
        goto LABEL_221;
      goto LABEL_258;
    if ( !sub_21E7D6C((const void **)v13, "minecraft:splash_potion") )
      sub_21E94B4((void **)&v178, "tag");
      v88 = j_CompoundTag::contains(v66, (const void **)&v178);
      v89 = v152;
      v90 = (void *)(v178 - 12);
      if ( (int *)(v178 - 12) != v152 )
        v125 = (unsigned int *)(v178 - 4);
            v43 = __ldrex(v125);
          while ( __strex(v43 - 1, v125) );
          v89 = v152;
          v43 = (*v125)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v90);
      v152 = v89;
      if ( v88 != 1 )
      sub_21E94B4((void **)&v177, "tag");
      v91 = j_CompoundTag::getCompound(v66, (const void **)&v177);
      v46 = (void **)&v176;
      v92 = (void *)(v177 - 12);
      if ( (int *)(v177 - 12) != v152 )
        v44 = (unsigned int *)(v177 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v46 = (void **)&v176;
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v92);
      sub_21E94B4(v46, v15);
      j_CompoundTag::putShort(v66, (const void **)v46, 438);
      v49 = (void **)&v175;
      v93 = (void *)(v176 - 12);
      if ( (int *)(v176 - 12) != v152 )
        v47 = (unsigned int *)(v176 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v49 = (void **)&v175;
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v93);
      sub_21E94B4(v49, "Potion");
      v94 = j_CompoundTag::getString(v91, (const void **)v49);
      v95 = sub_21E7D6C(v94, "minecraft:weakness");
      v96 = (void *)(v175 - 12);
      if ( (int *)(v175 - 12) != v152 )
        v50 = (unsigned int *)(v175 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v96);
      if ( v95 )
      sub_21E94B4((void **)&v174, "Damage");
      j_CompoundTag::putShort(v66, (const void **)&v174, 34);
      v70 = (void *)(v174 - 12);
      if ( (int *)(v174 - 12) == v152 )
      v71 = (unsigned int *)(v174 - 4);
    if ( !sub_21E7D6C((const void **)v13, "minecraft:iron_axe") )
      sub_21E94B4((void **)&v173, v15);
      j_CompoundTag::putShort(v66, (const void **)&v173, *(_WORD *)(Item::mHatchet_iron + 18));
      v97 = (void **)&v170;
      v98 = (void *)(v173 - 12);
      if ( (int *)(v173 - 12) != v152 )
        v130 = (unsigned int *)(v173 - 4);
            v56 = __ldrex(v130);
          while ( __strex(v56 - 1, v130) );
          v97 = (void **)&v170;
          v56 = (*v130)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v98);
      sub_21E94B4((void **)&v172, "tag");
      if ( j_CompoundTag::contains(v66, (const void **)&v172) == 1 )
        sub_21E94B4((void **)&v171, "tag");
        v99 = j_CompoundTag::getCompound(v66, (const void **)&v171);
        sub_21E94B4(v97, "ench");
        v100 = j_CompoundTag::contains(v99, (const void **)v97);
        v101 = (void *)(v170 - 12);
        if ( (int *)(v170 - 12) != v152 )
          v57 = (unsigned int *)(v170 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j__ZdlPv_9(v101);
        v102 = (void *)(v171 - 12);
        if ( (int *)(v171 - 12) != v152 )
          v103 = (unsigned int *)(v171 - 4);
              v65 = __ldrex(v103);
            while ( __strex(v65 - 1, v103) );
            v65 = (*v103)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v102);
        v100 = 0;
      v106 = (void *)(v172 - 12);
      if ( (int *)(v172 - 12) != v152 )
        v41 = (unsigned int *)(v172 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v106);
      if ( v100 == 1 )
        sub_21E94B4((void **)&v169, "tag");
        v107 = j_CompoundTag::getCompound(v66, (const void **)&v169);
        sub_21E94B4((void **)&v168, "ench");
        v108 = (ListTag *)j_CompoundTag::getList(v107, (const void **)&v168);
        v109 = (void *)(v168 - 12);
        if ( (int *)(v168 - 12) != v152 )
          v59 = (unsigned int *)(v168 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j__ZdlPv_9(v109);
        v110 = (void *)(v169 - 12);
        if ( (int *)(v169 - 12) != v152 )
          v61 = (unsigned int *)(v169 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v110);
        v111 = 0;
        while ( v111 < j_ListTag::size(v108) )
          v112 = j_ListTag::get(v108, v111);
          v113 = sub_21E94B4((void **)&v167, v15);
          v114 = v15;
          v115 = v3;
          v116 = j_CompoundTag::getShort(v112, (const void **)v113);
          v117 = (void *)(v167 - 12);
          if ( (int *)(v167 - 12) != v152 )
            v121 = (unsigned int *)(v167 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v122 = __ldrex(v121);
              while ( __strex(v122 - 1, v121) );
            }
            else
              v122 = (*v121)--;
            if ( v122 <= 0 )
              j_j_j_j__ZdlPv_9(v117);
          if ( v116 == 32 )
            sub_21E94B4((void **)&v166, v114);
            j_CompoundTag::putShort(v112, (const void **)&v166, 15);
            v118 = (void *)(v166 - 12);
            if ( (int *)(v166 - 12) != v152 )
              v119 = (unsigned int *)(v166 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v120 = __ldrex(v119);
                while ( __strex(v120 - 1, v119) );
              }
              else
                v120 = (*v119)--;
              if ( v120 <= 0 )
                j_j_j_j__ZdlPv_9(v118);
          v3 = v115;
          ++v111;
          v15 = v114;
      goto LABEL_262;
    if ( sub_21E7D6C((const void **)v13, "minecraft:sapling") )
      if ( sub_21E7D6C((const void **)v13, "minecraft:red_flower") )
        if ( sub_21E7D6C((const void **)v13, "minecraft:ender_pearl") )
LABEL_262:
          v12 = (void **)&v186;
          v131 = (void *)(v187 - 12);
          if ( (int *)(v187 - 12) != v152 )
            v39 = (unsigned int *)(v187 - 4);
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j__ZdlPv_9(v131);
          v10 = v150;
          v13 = &v187;
          goto LABEL_264;
        sub_21E94B4((void **)&v163, v15);
        j_CompoundTag::putShort(v66, (const void **)&v163, *(_WORD *)(Item::mEnderpearl + 18));
        v69 = v152;
        v70 = (void *)(v163 - 12);
        if ( (int *)(v163 - 12) != v152 )
          v71 = (unsigned int *)(v163 - 4);
            v72 = v152;
              v73 = __ldrex(v71);
            while ( __strex(v73 - 1, v71) );
LABEL_221:
            v69 = v72;
            goto LABEL_259;
          goto LABEL_258;
        sub_21E94B4((void **)&v164, v15);
        j_CompoundTag::putShort(v66, (const void **)&v164, *(_BYTE *)(Block::mRedFlower + 4));
        v70 = (void *)(v164 - 12);
        if ( (int *)(v164 - 12) != v152 )
          v71 = (unsigned int *)(v164 - 4);
            goto LABEL_221;
LABEL_258:
          v73 = (*v71)--;
LABEL_259:
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v70);
          goto LABEL_261;
      sub_21E94B4((void **)&v165, v15);
      j_CompoundTag::putShort(v66, (const void **)&v165, *(_BYTE *)(Block::mSapling + 4));
      v70 = (void *)(v165 - 12);
      if ( (int *)(v165 - 12) != v152 )
        v71 = (unsigned int *)(v165 - 4);
          v72 = v152;
            v73 = __ldrex(v71);
          while ( __strex(v73 - 1, v71) );
          goto LABEL_221;
        goto LABEL_258;
LABEL_261:
    v152 = v69;
    goto LABEL_262;
LABEL_298:
  result = *v3;
  *v3 = 0;
  *v151 = result;
  return result;
}


StructureTemplate *__fastcall StructureTemplate::~StructureTemplate(StructureTemplate *this)
{
  StructureTemplate *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r0@2
  int v5; // r5@8 OVERLAPPED
  int v6; // r6@8 OVERLAPPED
  int v7; // r0@9
  void *v8; // r0@15
  void *v9; // r5@16
  char *v10; // r0@17
  int *v11; // r0@20
  unsigned int *v13; // r2@22
  signed int v14; // r1@24

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 24);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      *(_DWORD *)(v2 + 24) = 0;
      v2 += 28;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 14);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  *(_QWORD *)&v5 = *(_QWORD *)((char *)v1 + 44);
  if ( v5 != v6 )
      v7 = *(_DWORD *)(v5 + 12);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v5 + 12) = 0;
      v5 += 20;
    while ( v6 != v5 );
    v5 = *((_DWORD *)v1 + 11);
  if ( v5 )
    j_operator delete((void *)v5);
  v8 = (void *)*((_DWORD *)v1 + 6);
  if ( v8 )
      v9 = *(void **)v8;
      j_operator delete(v8);
      v8 = v9;
    while ( v9 );
  j___aeabi_memclr4(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v10 = (char *)*((_DWORD *)v1 + 4);
  if ( v10 && (char *)v1 + 40 != v10 )
    j_operator delete(v10);
  v11 = (int *)(*(_DWORD *)v1 - 12);
  if ( v11 != &dword_28898C0 )
    v13 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}


int *__fastcall StructureTemplate::StructureTemplate(int *a1, int *a2)
{
  int *v2; // r8@1
  int *v3; // r4@1
  int v4; // r0@1
  int v5; // r9@1
  int v6; // r1@1
  int v7; // r5@1
  unsigned int v8; // r10@1
  int v9; // r0@3
  char *v10; // r6@3
  int v11; // r5@4
  int v12; // r7@4
  int v13; // r0@5
  int v14; // r7@13
  int v15; // r0@19
  int v16; // r5@19
  unsigned int v17; // r11@19
  int v18; // r6@20
  int v19; // r1@20
  unsigned __int64 *v20; // r7@20
  int v21; // r5@21
  char *v22; // r10@21
  signed int v23; // r0@21
  int v24; // r5@21
  int v25; // r7@21
  signed int v26; // r1@21
  int v27; // r0@23
  int v28; // r6@28
  int v29; // r6@32
  int v30; // r0@34
  signed int v32; // [sp+4h] [bp-34h]@22
  unsigned __int64 *v33; // [sp+8h] [bp-30h]@3

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v3[1] = v2[1];
  v3[2] = v2[2];
  v3[3] = v2[3];
  v3[4] = 0;
  v4 = (int)(v3 + 4);
  *(_DWORD *)(v4 + 4) = v2[5];
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = v2[7];
  *(_QWORD *)(v4 + 16) = *((_QWORD *)v2 + 4);
  std::_Hashtable<int,std::pair<int const,FullBlock>,std::allocator<std::pair<int const,FullBlock>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<int,std::pair<int const,FullBlock>,std::allocator<std::pair<int const,FullBlock>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<int,std::pair<int const,FullBlock>,std::allocator<std::pair<int const,FullBlock>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,FullBlock>,false> const*)#1}>(
    (unsigned int *)v3 + 4,
    (int)(v2 + 4));
  v3[11] = 0;
  v5 = (int)(v3 + 11);
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  v6 = *(_QWORD *)(v2 + 11) >> 32;
  v7 = *(_QWORD *)(v2 + 11);
  v8 = -858993459 * ((v6 - v7) >> 2);
  if ( v8 >= 0xCCCCCCD )
    sub_21E5A04("vector::reserve");
  if ( v6 == v7 )
  {
    v33 = (unsigned __int64 *)(v3 + 14);
    v9 = 0;
    v10 = 0;
  }
  else
    v10 = (char *)std::vector<StructureBlockInfo,std::allocator<StructureBlockInfo>>::_M_allocate_and_copy<StructureBlockInfo*>(
                    (int)(v3 + 11),
                    -858993459 * ((v6 - v7) >> 2),
                    0,
                    0);
    v12 = *(_QWORD *)(v3 + 11) >> 32;
    v11 = *(_QWORD *)(v3 + 11);
    if ( v11 != v12 )
    {
      do
      {
        v13 = *(_DWORD *)(v11 + 12);
        if ( v13 )
          (*(void (**)(void))(*(_DWORD *)v13 + 4))();
        *(_DWORD *)(v11 + 12) = 0;
        v11 += 20;
      }
      while ( v12 != v11 );
      v11 = *(_DWORD *)v5;
    }
    if ( v11 )
      j_operator delete((void *)v11);
    v3[11] = (int)v10;
    v3[12] = (int)v10;
    v9 = (int)&v10[20 * v8];
    v3[13] = v9;
    v6 = *(_QWORD *)(v2 + 11) >> 32;
    v7 = *(_QWORD *)(v2 + 11);
  if ( v7 != v6 )
    v14 = v6 - 20;
    while ( 1 )
      if ( v10 == (char *)v9 )
        std::vector<StructureBlockInfo,std::allocator<StructureBlockInfo>>::_M_emplace_back_aux<StructureBlockInfo const&>(
          (unsigned __int64 *)(v3 + 11),
          v7);
      else
        StructureBlockInfo::StructureBlockInfo((int)v10, v7);
        v3[12] += 20;
      if ( v14 == v7 )
        break;
      v7 += 20;
      v9 = *((_QWORD *)v3 + 6) >> 32;
      v10 = (char *)*((_QWORD *)v3 + 6);
  v15 = *((_QWORD *)v2 + 7) >> 32;
  v16 = *((_QWORD *)v2 + 7);
  v17 = -1227133513 * ((v15 - v16) >> 2);
  if ( v17 >= 0x924924A )
  v18 = v3[14];
  v19 = v3[16];
  v20 = v33;
  if ( -1227133513 * ((v19 - v18) >> 2) < v17 )
    v21 = v3[15];
    v22 = (char *)std::vector<StructureEntityInfo,std::allocator<StructureEntityInfo>>::_M_allocate_and_copy<StructureEntityInfo*>(
                    (int)v33,
                    v17,
                    v3[14],
                    v3[15]);
    v23 = v21 - v18;
    v25 = *((_QWORD *)v3 + 7) >> 32;
    v24 = *((_QWORD *)v3 + 7);
    v26 = v23 >> 2;
    if ( v24 == v25 )
      v20 = v33;
    else
      v32 = v23 >> 2;
        v27 = *(_DWORD *)(v24 + 24);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        *(_DWORD *)(v24 + 24) = 0;
        v24 += 28;
      while ( v25 != v24 );
      v26 = v32;
      v24 = *(_DWORD *)v33;
    v28 = -1227133513 * v26;
    if ( v24 )
      j_operator delete((void *)v24);
    v19 = (int)&v22[28 * v17];
    v3[14] = (int)v22;
    v3[15] = (int)&v22[28 * v28];
    v3[16] = v19;
    v15 = *((_QWORD *)v2 + 7) >> 32;
    v16 = *((_QWORD *)v2 + 7);
  if ( v16 != v15 )
    v29 = v15 - 28;
      v30 = v3[15];
      if ( v30 == v19 )
        std::vector<StructureEntityInfo,std::allocator<StructureEntityInfo>>::_M_emplace_back_aux<StructureEntityInfo const&>(
          v20,
          v16);
        StructureEntityInfo::StructureEntityInfo(v30, v16);
        v3[15] += 28;
      if ( v29 == v16 )
      v16 += 28;
      v19 = v3[16];
  return v3;
}


int __fastcall StructureTemplate::placeInWorld(StructureTemplate *this, BlockSource *a2, const BlockPos *a3, StructureSettings *a4)
{
  StructureTemplate *v4; // r4@1
  StructureSettings *v5; // r9@1
  int v6; // r10@1
  int v7; // r6@1
  BlockPlacementProcessor *v9; // r7@2
  _DWORD *v10; // r11@2
  int v11; // r4@4
  signed int v12; // r4@4
  void *v13; // r0@4
  void *v14; // r0@5
  int v15; // r4@7
  int v16; // r4@7
  int *v17; // r0@7
  void *v18; // r0@7
  void *v19; // r0@8
  char *v20; // r5@9
  int v21; // r4@9
  void *v22; // r0@9
  int v23; // r4@10
  void *v24; // r0@10
  void *v25; // r0@11
  int v26; // r4@12
  signed int v27; // r4@12
  void *v28; // r0@12
  int v29; // r4@14
  void *v30; // r0@14
  int v31; // r4@16
  signed int v32; // r4@16
  void *v33; // r0@16
  int v34; // r4@18
  void *v35; // r0@18
  unsigned int *v36; // r2@21
  signed int v37; // r1@23
  unsigned int *v38; // r2@25
  signed int v39; // r1@27
  unsigned int *v40; // r2@29
  signed int v41; // r1@31
  unsigned int *v42; // r2@33
  signed int v43; // r1@35
  unsigned int *v44; // r2@37
  signed int v45; // r1@39
  unsigned int *v46; // r2@57
  signed int v47; // r1@59
  unsigned int *v48; // r2@61
  signed int v49; // r1@63
  unsigned int *v50; // r2@65
  signed int v51; // r1@67
  unsigned int *v52; // r2@73
  signed int v53; // r1@75
  unsigned int *v54; // r2@77
  signed int v55; // r1@79
  unsigned int *v56; // r2@81
  signed int v57; // r1@83
  unsigned int *v58; // r2@85
  signed int v59; // r1@87
  unsigned int *v60; // r2@89
  signed int v61; // r1@91
  unsigned int *v62; // r2@117
  signed int v63; // r1@119
  int v64; // r5@133
  int v70; // r7@139
  int v71; // r1@139
  _DWORD *v74; // r9@144
  float v75; // r3@147
  int v77; // r2@151
  int v78; // r4@151
  int v79; // r0@151
  int v80; // r1@151
  int v81; // r7@151
  int v82; // r3@152
  int v83; // r12@152
  int v84; // r11@153
  int v85; // lr@153
  char v86; // r4@160
  CompoundTag *v87; // r0@160
  CompoundTag *v88; // r0@165
  int v89; // r0@167
  int v90; // r4@168
  void *v91; // r0@168
  int v92; // r4@169
  void *v93; // r0@169
  int v94; // r4@170
  void *v95; // r0@170
  int v96; // r4@171
  int v98; // r11@176
  int v100; // r7@179
  int v101; // r1@179
  float v104; // r3@187
  int v106; // r1@191
  int v107; // r2@191
  CompoundTag *v108; // r0@191
  BlockEntity *v109; // r0@193
  int v111; // r7@197
  char *v112; // r0@197
  int v114; // r0@197
  float v116; // r3@205
  int v118; // r1@209
  int v119; // r2@209
  CompoundTag *v120; // r0@209
  BlockEntity *v121; // r0@211
  int result; // r0@214
  int v123; // r4@215
  __int64 v124; // ST00_8@215
  BlockEntity *v125; // [sp+40h] [bp-AE0h]@168
  int v126; // [sp+50h] [bp-AD0h]@1
  StructureTemplate *v127; // [sp+54h] [bp-ACCh]@1
  char *v128; // [sp+58h] [bp-AC8h]@1
  StructureSettings *v129; // [sp+5Ch] [bp-AC4h]@1
  BlockSource *v130; // [sp+60h] [bp-AC0h]@1
  const BlockPos *v131; // [sp+64h] [bp-ABCh]@1
  int v132; // [sp+68h] [bp-AB8h]@191
  int v133; // [sp+6Ch] [bp-AB4h]@191
  int v134; // [sp+70h] [bp-AB0h]@191
  int v135; // [sp+78h] [bp-AA8h]@18
  int v136; // [sp+80h] [bp-AA0h]@16
  int v137; // [sp+88h] [bp-A98h]@14
  int v138; // [sp+90h] [bp-A90h]@12
  int v139; // [sp+98h] [bp-A88h]@10
  int v140; // [sp+A0h] [bp-A80h]@9
  int v141; // [sp+A8h] [bp-A78h]@7
  int v142; // [sp+B0h] [bp-A70h]@7
  int v143; // [sp+B4h] [bp-A6Ch]@7
  int v144; // [sp+BCh] [bp-A64h]@4
  int v145; // [sp+C4h] [bp-A5Ch]@5
  int v146; // [sp+CCh] [bp-A54h]@29
  int v147; // [sp+D4h] [bp-A4Ch]@25
  int v148; // [sp+DCh] [bp-A44h]@21
  char v149; // [sp+E0h] [bp-A40h]@164
  char v150; // [sp+E4h] [bp-A3Ch]@163
  char v151; // [sp+E8h] [bp-A38h]@160
  int v152; // [sp+ECh] [bp-A34h]@151
  int v153; // [sp+F0h] [bp-A30h]@151
  int v154; // [sp+F4h] [bp-A2Ch]@151
  int v155; // [sp+F8h] [bp-A28h]@151
  int v156; // [sp+FCh] [bp-A24h]@151
  int v157; // [sp+100h] [bp-A20h]@151
  char v158; // [sp+104h] [bp-A1Ch]@1

  v4 = this;
  v5 = a4;
  v131 = a3;
  v129 = a4;
  v130 = a2;
  v127 = this;
  BlockPlacementProcessor::BlockPlacementProcessor((BlockPlacementProcessor *)&v158, a4);
  v6 = StructureSettings::getIgnoreBlock(v5);
  v126 = v6;
  v128 = StructureSettings::getBoundingBox(v5);
  v7 = *(_QWORD *)((char *)v4 + 44) >> 32;
  _R8 = *(_QWORD *)((char *)v4 + 44);
  if ( _R8 != v7 )
  {
    v9 = (BlockPlacementProcessor *)&v158;
    v10 = &Block::mStructureBlock;
    do
    {
      v64 = *(_BYTE *)(j_FullBlock::getBlock(*(FullBlock **)(_R8 + 16)) + 4);
      if ( (!v6 || v64 != *(_BYTE *)(v6 + 4))
        && (StructureSettings::isIgnoreStructureBlocks(v5) != 1 || !*v10 || v64 != *(_BYTE *)(*v10 + 4))
        && BlockPlacementProcessor::canPlace(v9) == 1 )
      {
        __asm
        {
          VLDR            S4, [R8,#8]
          VLDR            S0, [R8]
          VLDR            S2, [R8,#4]
          VCVT.F32.S32    S18, S4
          VCVT.F32.S32    S20, S0
          VCVT.F32.S32    S16, S2
          VMOV            R4, S18
        }
        v70 = *(_DWORD *)j_StructureSettings::getMirror(v5);
        v71 = *(_WORD *)j_StructureSettings::getRotation(v5);
        __asm { VMOV            R0, S20 }
        if ( v70 == 2 )
          LODWORD(_R0) ^= 0x80000000;
        else if ( v70 == 1 )
          __asm { VMOVEQ          R2, S18 }
          LODWORD(_R4) = _R2 ^ 0x80000000;
        v74 = v10;
        switch ( v71 )
          case 3:
            LODWORD(v75) = LODWORD(_R0) ^ 0x80000000;
            break;
          case 2:
            LODWORD(v75) = LODWORD(_R4) ^ 0x80000000;
            LODWORD(_R4) = LODWORD(_R0) ^ 0x80000000;
          case 1:
            LODWORD(_R4) ^= 0x80000000;
            v75 = _R0;
          default:
            v75 = _R4;
            _R4 = _R0;
        __asm { VMOV            R2, S16 }
        j_BlockPos::BlockPos((BlockPos *)&v152, _R4, _R2, v75);
        v77 = *((_DWORD *)v131 + 2);
        v78 = *(_DWORD *)v131 + v152;
        v79 = *((_DWORD *)v131 + 1) + v153;
        v155 = *(_DWORD *)v131 + v152;
        v156 = v79;
        v80 = v77 + v154;
        v157 = v77 + v154;
        v81 = *((_DWORD *)v128 + 3);
        if ( v81 >= *(_DWORD *)v128
          && (v82 = *((_DWORD *)v128 + 1), v83 = *((_DWORD *)v128 + 4), v83 >= v82)
          && (v84 = *((_DWORD *)v128 + 2), v85 = *((_DWORD *)v128 + 5), v85 >= v84)
          && (v78 < *(_DWORD *)v128 || v78 > v81 || v80 < v84 || v80 > v85 || v79 < v82 || v79 > v83) )
          v10 = v74;
          v6 = v126;
          v9 = (BlockPlacementProcessor *)&v158;
          v5 = v129;
        else
          v151 = v64;
          v86 = StructureTemplate::_mapToData((int)v127, &v151, _R8, v129);
          v87 = *(CompoundTag **)(_R8 + 12);
          if ( v87 && !j_CompoundTag::isEmpty(v87) && j_BlockSource::getBlockEntity(v130, (const BlockPos *)&v155) )
          {
            v150 = *(_BYTE *)(Block::mAir + 4);
            BlockSource::setBlock((int)v130, (BlockPos *)&v155, &v150, 4);
          }
          v149 = v64;
          if ( BlockSource::setBlockAndData((int)v130, (BlockPos *)&v155, &v149, v86, 2, 0) == 1 )
            v88 = *(CompoundTag **)(_R8 + 12);
            v9 = (BlockPlacementProcessor *)&v158;
            v10 = v74;
            if ( v88 )
            {
              if ( !j_CompoundTag::isEmpty(v88) )
              {
                v89 = j_BlockSource::getBlockEntity(v130, (const BlockPos *)&v155);
                if ( v89 )
                {
                  v90 = *(_DWORD *)(_R8 + 12);
                  v125 = (BlockEntity *)v89;
                  sub_21E94B4((void **)&v148, "x");
                  j_CompoundTag::putInt(v90, (const void **)&v148, v155);
                  v91 = (void *)(v148 - 12);
                  if ( (int *)(v148 - 12) != &dword_28898C0 )
                  {
                    v36 = (unsigned int *)(v148 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v37 = __ldrex(v36);
                      while ( __strex(v37 - 1, v36) );
                      v9 = (BlockPlacementProcessor *)&v158;
                    }
                    else
                      v37 = (*v36)--;
                    if ( v37 <= 0 )
                      j_j_j_j__ZdlPv_9(v91);
                  }
                  v92 = *(_DWORD *)(_R8 + 12);
                  sub_21E94B4((void **)&v147, "y");
                  j_CompoundTag::putInt(v92, (const void **)&v147, v156);
                  v93 = (void *)(v147 - 12);
                  if ( (int *)(v147 - 12) != &dword_28898C0 )
                    v38 = (unsigned int *)(v147 - 4);
                        v39 = __ldrex(v38);
                      while ( __strex(v39 - 1, v38) );
                      v39 = (*v38)--;
                    if ( v39 <= 0 )
                      j_j_j_j__ZdlPv_9(v93);
                  v94 = *(_DWORD *)(_R8 + 12);
                  sub_21E94B4((void **)&v146, (const char *)&aRtuz[3]);
                  j_CompoundTag::putInt(v94, (const void **)&v146, v157);
                  v95 = (void *)(v146 - 12);
                  if ( (int *)(v146 - 12) != &dword_28898C0 )
                    v40 = (unsigned int *)(v146 - 4);
                        v41 = __ldrex(v40);
                      while ( __strex(v41 - 1, v40) );
                      v41 = (*v40)--;
                    if ( v41 <= 0 )
                      j_j_j_j__ZdlPv_9(v95);
                  v96 = *(_DWORD *)(_R8 + 12);
                  sub_21E94B4((void **)&v145, "EntityId");
                  if ( j_CompoundTag::contains(v96, (const void **)&v145) )
                    v12 = 0;
                  else
                    v11 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v144, "SpawnData");
                    v12 = j_CompoundTag::contains(v11, (const void **)&v144);
                    v13 = (void *)(v144 - 12);
                    if ( (int *)(v144 - 12) != &dword_28898C0 )
                      v46 = (unsigned int *)(v144 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v47 = __ldrex(v46);
                        while ( __strex(v47 - 1, v46) );
                      }
                      else
                        v47 = (*v46)--;
                      if ( v47 <= 0 )
                        j_j_j_j__ZdlPv_9(v13);
                  v14 = (void *)(v145 - 12);
                  if ( (int *)(v145 - 12) != &dword_28898C0 )
                    v42 = (unsigned int *)(v145 - 4);
                        v43 = __ldrex(v42);
                      while ( __strex(v43 - 1, v42) );
                      v43 = (*v42)--;
                    if ( v43 <= 0 )
                      j_j_j_j__ZdlPv_9(v14);
                  if ( v12 == 1 )
                    v15 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v142, "SpawnData");
                    v16 = j_CompoundTag::getCompound(v15, (const void **)&v142);
                    sub_21E94B4((void **)&v141, "id");
                    v17 = (int *)j_CompoundTag::getString(v16, (const void **)&v141);
                    sub_21E8AF4(&v143, v17);
                    v18 = (void *)(v141 - 12);
                    if ( (int *)(v141 - 12) != &dword_28898C0 )
                      v48 = (unsigned int *)(v141 - 4);
                          v49 = __ldrex(v48);
                        while ( __strex(v49 - 1, v48) );
                        v49 = (*v48)--;
                      if ( v49 <= 0 )
                        j_j_j_j__ZdlPv_9(v18);
                    v19 = (void *)(v142 - 12);
                    if ( (int *)(v142 - 12) != &dword_28898C0 )
                      v50 = (unsigned int *)(v142 - 4);
                          v51 = __ldrex(v50);
                        while ( __strex(v51 - 1, v50) );
                        v51 = (*v50)--;
                      if ( v51 <= 0 )
                        j_j_j_j__ZdlPv_9(v19);
                    v20 = j_EntityTypeFromString((const void **)&v143);
                    v21 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v140, "EntityId");
                    j_CompoundTag::putInt(v21, (const void **)&v140, (int)v20);
                    v22 = (void *)(v140 - 12);
                    if ( (int *)(v140 - 12) != &dword_28898C0 )
                      v56 = (unsigned int *)(v140 - 4);
                          v57 = __ldrex(v56);
                        while ( __strex(v57 - 1, v56) );
                        v57 = (*v56)--;
                      if ( v57 <= 0 )
                        j_j_j_j__ZdlPv_9(v22);
                    v23 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v139, "SpawnData");
                    j_CompoundTag::remove(v23, (const void **)&v139);
                    v24 = (void *)(v139 - 12);
                    if ( (int *)(v139 - 12) != &dword_28898C0 )
                      v58 = (unsigned int *)(v139 - 4);
                          v59 = __ldrex(v58);
                        while ( __strex(v59 - 1, v58) );
                        v59 = (*v58)--;
                      if ( v59 <= 0 )
                        j_j_j_j__ZdlPv_9(v24);
                    v25 = (void *)(v143 - 12);
                    if ( (int *)(v143 - 12) != &dword_28898C0 )
                      v60 = (unsigned int *)(v143 - 4);
                          v61 = __ldrex(v60);
                        while ( __strex(v61 - 1, v60) );
                        v61 = (*v60)--;
                      if ( v61 <= 0 )
                        j_j_j_j__ZdlPv_9(v25);
                  v26 = *(_DWORD *)(_R8 + 12);
                  sub_21E94B4((void **)&v138, "SpawnPotentials");
                  v27 = j_CompoundTag::contains(v26, (const void **)&v138);
                  v28 = (void *)(v138 - 12);
                  if ( (int *)(v138 - 12) != &dword_28898C0 )
                    v44 = (unsigned int *)(v138 - 4);
                        v45 = __ldrex(v44);
                      while ( __strex(v45 - 1, v44) );
                      v45 = (*v44)--;
                    if ( v45 <= 0 )
                      j_j_j_j__ZdlPv_9(v28);
                  if ( v27 == 1 )
                    v29 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v137, "SpawnPotentials");
                    j_CompoundTag::remove(v29, (const void **)&v137);
                    v30 = (void *)(v137 - 12);
                    if ( (int *)(v137 - 12) != &dword_28898C0 )
                      v52 = (unsigned int *)(v137 - 4);
                          v53 = __ldrex(v52);
                        while ( __strex(v53 - 1, v52) );
                        v53 = (*v52)--;
                      if ( v53 <= 0 )
                        j_j_j_j__ZdlPv_9(v30);
                  if ( *(_DWORD *)j_BlockEntity::getType(v125) == 28 )
                    v31 = *(_DWORD *)(_R8 + 12);
                    sub_21E94B4((void **)&v136, (const char *)&unk_257BC67);
                    v32 = j_CompoundTag::contains(v31, (const void **)&v136);
                    v33 = (void *)(v136 - 12);
                    if ( (int *)(v136 - 12) != &dword_28898C0 )
                      v54 = (unsigned int *)(v136 - 4);
                          v55 = __ldrex(v54);
                        while ( __strex(v55 - 1, v54) );
                        v55 = (*v54)--;
                      if ( v55 <= 0 )
                        j_j_j_j__ZdlPv_9(v33);
                    if ( v32 == 1 )
                      v34 = *(_DWORD *)(_R8 + 12);
                      sub_21E94B4((void **)&v135, (const char *)&unk_257BC67);
                      j_CompoundTag::remove(v34, (const void **)&v135);
                      v35 = (void *)(v135 - 12);
                      if ( (int *)(v135 - 12) != &dword_28898C0 )
                        v62 = (unsigned int *)(v135 - 4);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v63 = __ldrex(v62);
                          while ( __strex(v63 - 1, v62) );
                        }
                        else
                          v63 = (*v62)--;
                        if ( v63 <= 0 )
                          j_j_j_j__ZdlPv_9(v35);
                  (*(void (__fastcall **)(BlockEntity *, _DWORD))(*(_DWORD *)v125 + 8))(v125, *(_DWORD *)(_R8 + 12));
                  (*(void (__fastcall **)(BlockEntity *, BlockSource *))(*(_DWORD *)v125 + 56))(v125, v130);
                  if ( *(_DWORD *)j_BlockEntity::getType(v125) == 27 )
                    *((_DWORD *)v125 + 26) = 14;
                    BlockEntity::setChanged(v125);
                }
              }
            }
          else
            j_FullBlock::getBlock(*(FullBlock **)(_R8 + 16));
      }
      _R8 += 20;
    }
    while ( _R8 != v7 );
    v98 = *(_QWORD *)((char *)v127 + 44) >> 32;
    _R6 = *(_QWORD *)((char *)v127 + 44);
    if ( _R6 != v98 )
      if ( v6 )
        do
          if ( *(_BYTE *)(j_FullBlock::getBlock(*(FullBlock **)(_R6 + 16)) + 4) != *(_BYTE *)(v6 + 4) )
            __asm
              VLDR            S4, [R6,#8]
              VLDR            S0, [R6]
              VLDR            S2, [R6,#4]
              VCVT.F32.S32    S18, S4
              VCVT.F32.S32    S20, S0
              VCVT.F32.S32    S16, S2
              VMOV            R4, S18
            v100 = *(_DWORD *)j_StructureSettings::getMirror(v5);
            v101 = *(_WORD *)j_StructureSettings::getRotation(v5);
            __asm { VMOV            R0, S20 }
            if ( v100 == 2 )
              LODWORD(_R0) ^= 0x80000000;
            else if ( v100 == 1 )
              __asm { VMOVEQ          R2, S18 }
              LODWORD(_R4) = _R2 ^ 0x80000000;
            switch ( v101 )
              case 3:
                LODWORD(v104) = LODWORD(_R0) ^ 0x80000000;
                break;
              case 2:
                LODWORD(v104) = LODWORD(_R4) ^ 0x80000000;
                LODWORD(_R4) = LODWORD(_R0) ^ 0x80000000;
              case 1:
                LODWORD(_R4) ^= 0x80000000;
                v104 = _R0;
              default:
                v104 = _R4;
                _R4 = _R0;
            __asm { VMOV            R2, S16 }
            j_BlockPos::BlockPos((BlockPos *)&v132, _R4, _R2, v104);
            v106 = *((_DWORD *)v131 + 1);
            v107 = *((_DWORD *)v131 + 2);
            v155 = *(_DWORD *)v131 + v132;
            v156 = v106 + v133;
            v157 = v107 + v134;
            v108 = *(CompoundTag **)(_R6 + 12);
            if ( v108 )
              if ( !j_CompoundTag::isEmpty(v108) )
                v109 = (BlockEntity *)j_BlockSource::getBlockEntity(v130, (const BlockPos *)&v155);
                if ( v109 )
                  BlockEntity::setChanged(v109);
          _R6 += 20;
        while ( v98 != _R6 );
      else
          j_FullBlock::getBlock(*(FullBlock **)(_R6 + 16));
          __asm
            VLDR            S0, [R6]
            VLDR            S4, [R6,#8]
            VLDR            S2, [R6,#4]
            VCVT.F32.S32    S20, S4
            VCVT.F32.S32    S18, S0
            VCVT.F32.S32    S16, S2
            VMOV            R4, S18
          v111 = *(_DWORD *)j_StructureSettings::getMirror(v5);
          v112 = j_StructureSettings::getRotation(v5);
          __asm { VMOV            R1, S20 }
          v114 = *(_WORD *)v112;
          if ( v111 == 1 )
            LODWORD(_R1) ^= 0x80000000;
          else if ( v111 == 2 )
            __asm { VMOVEQ          R2, S18 }
            _R4 = _R2 ^ 0x80000000;
          switch ( v114 )
            case 1:
              LODWORD(_R1) ^= 0x80000000;
              v116 = *(float *)&_R4;
              break;
            case 2:
              LODWORD(v116) = LODWORD(_R1) ^ 0x80000000;
              LODWORD(_R1) = _R4 ^ 0x80000000;
            case 3:
              LODWORD(v116) = _R4 ^ 0x80000000;
            default:
              v116 = _R1;
              _R1 = *(float *)&_R4;
          __asm { VMOV            R2, S16 }
          j_BlockPos::BlockPos((BlockPos *)&v132, _R1, _R2, v116);
          v118 = *((_DWORD *)v131 + 1);
          v119 = *((_DWORD *)v131 + 2);
          v155 = *(_DWORD *)v131 + v132;
          v156 = v118 + v133;
          v157 = v119 + v134;
          v120 = *(CompoundTag **)(_R6 + 12);
          if ( v120 )
            if ( !j_CompoundTag::isEmpty(v120) )
              v121 = (BlockEntity *)j_BlockSource::getBlockEntity(v130, (const BlockPos *)&v155);
              if ( v121 )
                BlockEntity::setChanged(v121);
  }
  result = StructureSettings::isIgnoreEntities(v5);
  if ( !result )
    v123 = *(_DWORD *)j_StructureSettings::getMirror(v5);
    LODWORD(v124) = *(_WORD *)j_StructureSettings::getRotation(v5);
    HIDWORD(v124) = v128;
    result = StructureTemplate::placeEntities((int)v127, v130, (int)v131, v123, v124);
  return result;
}


int __fastcall StructureTemplate::StructureTemplate(int a1)
{
  int v1; // r5@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  BlockPalette::BlockPalette((BlockPalette *)(a1 + 16));
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  result = v1;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  return result;
}


CompoundTag *__fastcall StructureTemplate::save(StructureTemplate *this, CompoundTag *a2)
{
  StructureTemplate *v2; // r6@1
  int v3; // r4@1
  int v4; // r9@1
  __int64 v5; // r10@2
  int v6; // r0@3
  int v7; // r0@5
  int v8; // r0@7
  int v9; // r0@11
  int i; // r6@18
  int v11; // r10@18
  void *v12; // r8@19
  int v13; // r0@19
  int v14; // r0@21
  int v15; // r0@23
  void *v16; // r5@27
  int v17; // r0@27
  int v18; // r0@29
  int v19; // r0@31
  int v20; // r11@42
  BlockPalette *v21; // r4@42
  _DWORD *v22; // r0@45
  _DWORD *v23; // r8@45
  int v24; // r7@45
  int j; // r0@45
  void *v26; // r0@50
  void *v27; // r0@53
  unsigned int *v28; // r2@54
  signed int v29; // r1@56
  unsigned int *v30; // r2@58
  signed int v31; // r1@60
  void *v32; // r5@76
  int v33; // r0@76
  int v34; // r0@78
  int v35; // r0@80
  __int64 v36; // r4@84
  __int64 v37; // r4@91
  __int64 v38; // r4@98
  CompoundTag *v40; // [sp+8h] [bp-160h]@1
  StructureTemplate *v41; // [sp+Ch] [bp-15Ch]@18
  void *v42; // [sp+14h] [bp-154h]@82
  int v43; // [sp+18h] [bp-150h]@80
  int v44; // [sp+1Ch] [bp-14Ch]@80
  int v45; // [sp+20h] [bp-148h]@78
  int v46; // [sp+24h] [bp-144h]@78
  int v47; // [sp+28h] [bp-140h]@76
  int v48; // [sp+2Ch] [bp-13Ch]@76
  int v49; // [sp+30h] [bp-138h]@74
  int v50; // [sp+34h] [bp-134h]@72
  int v51; // [sp+38h] [bp-130h]@70
  int v52; // [sp+3Ch] [bp-12Ch]@51
  int v53; // [sp+44h] [bp-124h]@50
  int v54; // [sp+48h] [bp-120h]@45
  char v55; // [sp+4Ch] [bp-11Ch]@43
  void **v56; // [sp+68h] [bp-100h]@42
  __int64 v57; // [sp+6Ch] [bp-FCh]@84
  int v58; // [sp+7Ch] [bp-ECh]@39
  int v59; // [sp+80h] [bp-E8h]@36
  void *v60; // [sp+84h] [bp-E4h]@33
  int v61; // [sp+88h] [bp-E0h]@31
  int v62; // [sp+8Ch] [bp-DCh]@31
  int v63; // [sp+90h] [bp-D8h]@29
  int v64; // [sp+94h] [bp-D4h]@29
  int v65; // [sp+98h] [bp-D0h]@27
  int v66; // [sp+9Ch] [bp-CCh]@27
  void *v67; // [sp+A0h] [bp-C8h]@25
  int v68; // [sp+A4h] [bp-C4h]@23
  int v69; // [sp+A8h] [bp-C0h]@23
  int v70; // [sp+ACh] [bp-BCh]@21
  int v71; // [sp+B0h] [bp-B8h]@21
  int v72; // [sp+B4h] [bp-B4h]@19
  int v73; // [sp+B8h] [bp-B0h]@19
  char v74; // [sp+BCh] [bp-ACh]@19
  void **v75; // [sp+D8h] [bp-90h]@18
  __int64 v76; // [sp+DCh] [bp-8Ch]@91
  int v77; // [sp+ECh] [bp-7Ch]@15
  int v78; // [sp+F0h] [bp-78h]@12
  __int64 v79; // [sp+F4h] [bp-74h]@7
  int v80; // [sp+FCh] [bp-6Ch]@7
  int v81; // [sp+100h] [bp-68h]@5
  int v82; // [sp+104h] [bp-64h]@5
  int v83; // [sp+108h] [bp-60h]@3
  int v84; // [sp+10Ch] [bp-5Ch]@3
  char v85; // [sp+110h] [bp-58h]@3
  void **v86; // [sp+12Ch] [bp-3Ch]@1
  __int64 v87; // [sp+130h] [bp-38h]@98

  v2 = this;
  v40 = a2;
  ListTag::ListTag((int)&v86);
  v4 = *(_QWORD *)((char *)v2 + 44) >> 32;
  v3 = *(_QWORD *)((char *)v2 + 44);
  if ( v3 != v4 )
  {
    HIDWORD(v5) = 0;
    do
    {
      CompoundTag::CompoundTag((int)&v85);
      LODWORD(v5) = j_operator new(0x14u);
      ListTag::ListTag(v5);
      std::make_unique<IntTag,char const(&)[1],int &>(&v83, (const char *)&unk_257BC67, (int *)v3);
      v6 = v83;
      v83 = 0;
      v84 = v6;
      j_ListTag::add(v5, &v84);
      if ( v84 )
        (*(void (**)(void))(*(_DWORD *)v84 + 4))();
      v84 = 0;
      std::make_unique<IntTag,char const(&)[1],int &>(&v81, (const char *)&unk_257BC67, (int *)(v3 + 4));
      v7 = v81;
      v81 = 0;
      v82 = v7;
      j_ListTag::add(v5, &v82);
      if ( v82 )
        (*(void (**)(void))(*(_DWORD *)v82 + 4))();
      v82 = 0;
      std::make_unique<IntTag,char const(&)[1],int &>((_DWORD *)&v79 + 1, (const char *)&unk_257BC67, (int *)(v3 + 8));
      v8 = HIDWORD(v79);
      HIDWORD(v79) = 0;
      v80 = v8;
      j_ListTag::add(v5, &v80);
      if ( v80 )
        (*(void (**)(void))(*(_DWORD *)v80 + 4))();
      v80 = 0;
      v79 = v5;
      j_CompoundTag::put((int)&v85, (const void **)&StructureTemplate::BLOCK_TAG_POS, (int *)&v79);
      if ( (_DWORD)v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 4))();
      LODWORD(v79) = 0;
      v9 = BlockPalette::getId((StructureTemplate *)((char *)v2 + 16), *(const FullBlock **)(v3 + 16));
      j_CompoundTag::putInt((int)&v85, (const void **)&StructureTemplate::BLOCK_TAG_STATE, v9);
      if ( !j_CompoundTag::isEmpty(*(CompoundTag **)(v3 + 12)) )
      {
        (*(void (__fastcall **)(int *))(**(_DWORD **)(v3 + 12) + 48))(&v78);
        j_CompoundTag::put((int)&v85, (const void **)&StructureTemplate::BLOCK_TAG_NBT, &v78);
        if ( v78 )
          (*(void (**)(void))(*(_DWORD *)v78 + 4))();
        v78 = 0;
      }
      j_CompoundTag::copy((CompoundTag *)&v77, (int)&v85);
      j_ListTag::add((int)&v86, &v77);
      if ( v77 )
        (*(void (**)(void))(*(_DWORD *)v77 + 4))();
      v77 = 0;
      j_CompoundTag::~CompoundTag((CompoundTag *)&v85);
      v3 += 20;
    }
    while ( v4 != v3 );
  }
  ListTag::ListTag((int)&v75);
  v41 = v2;
  v11 = *((_QWORD *)v2 + 7) >> 32;
  for ( i = *((_QWORD *)v2 + 7); v11 != i; i += 28 )
    CompoundTag::CompoundTag((int)&v74);
    v12 = j_operator new(0x14u);
    ListTag::ListTag((int)v12);
    std::make_unique<DoubleTag,char const(&)[1],int &>(&v72, (const char *)&unk_257BC67, (int *)(i + 12));
    v13 = v72;
    v72 = 0;
    v73 = v13;
    j_ListTag::add((int)v12, &v73);
    if ( v73 )
      (*(void (**)(void))(*(_DWORD *)v73 + 4))();
    v73 = 0;
    std::make_unique<DoubleTag,char const(&)[1],int &>(&v70, (const char *)&unk_257BC67, (int *)(i + 16));
    v14 = v70;
    v70 = 0;
    v71 = v14;
    j_ListTag::add((int)v12, &v71);
    if ( v71 )
      (*(void (**)(void))(*(_DWORD *)v71 + 4))();
    v71 = 0;
    std::make_unique<DoubleTag,char const(&)[1],int &>(&v68, (const char *)&unk_257BC67, (int *)(i + 20));
    v15 = v68;
    v68 = 0;
    v69 = v15;
    j_ListTag::add((int)v12, &v69);
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 4))();
    v69 = 0;
    v67 = v12;
    j_CompoundTag::put((int)&v74, (const void **)&StructureTemplate::ENTITY_TAG_POS, (int *)&v67);
    if ( v67 )
      (*(void (**)(void))(*(_DWORD *)v67 + 4))();
    v67 = 0;
    v16 = j_operator new(0x14u);
    ListTag::ListTag((int)v16);
    std::make_unique<IntTag,char const(&)[1],float &>(&v65, (const char *)&unk_257BC67, i);
    v17 = v65;
    v65 = 0;
    v66 = v17;
    j_ListTag::add((int)v16, &v66);
    if ( v66 )
      (*(void (**)(void))(*(_DWORD *)v66 + 4))();
    v66 = 0;
    std::make_unique<IntTag,char const(&)[1],float &>(&v63, (const char *)&unk_257BC67, i + 4);
    v18 = v63;
    v63 = 0;
    v64 = v18;
    j_ListTag::add((int)v16, &v64);
    if ( v64 )
      (*(void (**)(void))(*(_DWORD *)v64 + 4))();
    v64 = 0;
    std::make_unique<IntTag,char const(&)[1],float &>(&v61, (const char *)&unk_257BC67, i + 8);
    v19 = v61;
    v61 = 0;
    v62 = v19;
    j_ListTag::add((int)v16, &v62);
    if ( v62 )
      (*(void (**)(void))(*(_DWORD *)v62 + 4))();
    v62 = 0;
    v60 = v16;
    j_CompoundTag::put((int)&v74, (const void **)&StructureTemplate::ENTITY_TAG_BLOCKPOS, (int *)&v60);
    if ( v60 )
      (*(void (**)(void))(*(_DWORD *)v60 + 4))();
    v60 = 0;
    if ( !j_CompoundTag::isEmpty(*(CompoundTag **)(i + 24)) )
      (*(void (__fastcall **)(int *))(**(_DWORD **)(i + 24) + 48))(&v59);
      j_CompoundTag::put((int)&v74, (const void **)&StructureTemplate::ENTITY_TAG_NBT, &v59);
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 4))();
      v59 = 0;
    j_CompoundTag::copy((CompoundTag *)&v58, (int)&v74);
    j_ListTag::add((int)&v75, &v58);
    if ( v58 )
      (*(void (**)(void))(*(_DWORD *)v58 + 4))();
    v58 = 0;
    j_CompoundTag::~CompoundTag((CompoundTag *)&v74);
  ListTag::ListTag((int)&v56);
  v20 = 0;
  v21 = (StructureTemplate *)((char *)v41 + 16);
  while ( v20 < BlockPalette::getSize(v21) )
    CompoundTag::CompoundTag((int)&v55);
    v22 = BlockPalette::getBlock(v21, v20);
    v23 = v22;
    v24 = *(_BYTE *)v22;
    sub_21E8AF4(&v54, &StructureTemplate::MINECRAFT_PREFIX);
    for ( j = dword_280AFA8; j; j = *(_DWORD *)j )
      if ( *(_BYTE *)(*(_DWORD *)(j + 8) + 4) == v24 )
        sub_21E72F0((const void **)&v54, (const void **)(j + 4));
        break;
    sub_21E94B4((void **)&v53, "Name");
    j_CompoundTag::putString((int)&v55, (const void **)&v53, &v54);
    v26 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    StructureTemplate::_mapToString(v41, (CompoundTag *)&v55, *((_BYTE *)v23 + 1));
    j_CompoundTag::copy((CompoundTag *)&v52, (int)&v55);
    j_ListTag::add((int)&v56, &v52);
    if ( v52 )
      (*(void (**)(void))(*(_DWORD *)v52 + 4))();
    v52 = 0;
    v27 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v54 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    j_CompoundTag::~CompoundTag((CompoundTag *)&v55);
    ++v20;
  j_ListTag::copy((ListTag *)&v51, (int)&v56);
  j_CompoundTag::put((int)v40, (const void **)&StructureTemplate::PALETTE_TAG, &v51);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  v51 = 0;
  j_ListTag::copy((ListTag *)&v50, (int)&v86);
  j_CompoundTag::put((int)v40, (const void **)&StructureTemplate::BLOCKS_TAG, &v50);
  if ( v50 )
    (*(void (**)(void))(*(_DWORD *)v50 + 4))();
  v50 = 0;
  j_ListTag::copy((ListTag *)&v49, (int)&v75);
  j_CompoundTag::put((int)v40, (const void **)&StructureTemplate::ENTITIES_TAG, &v49);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v49 = 0;
  v32 = j_operator new(0x14u);
  ListTag::ListTag((int)v32);
  std::make_unique<IntTag,char const(&)[1],int &>(&v47, (const char *)&unk_257BC67, (int *)v41 + 1);
  v33 = v47;
  v47 = 0;
  v48 = v33;
  j_ListTag::add((int)v32, &v48);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 4))();
  v48 = 0;
  std::make_unique<IntTag,char const(&)[1],int &>(&v45, (const char *)&unk_257BC67, (int *)v41 + 2);
  v34 = v45;
  v45 = 0;
  v46 = v34;
  j_ListTag::add((int)v32, &v46);
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 4))();
  v46 = 0;
  std::make_unique<IntTag,char const(&)[1],int &>(&v43, (const char *)&unk_257BC67, (int *)v41 + 3);
  v35 = v43;
  v43 = 0;
  v44 = v35;
  j_ListTag::add((int)v32, &v44);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  v44 = 0;
  v42 = v32;
  j_CompoundTag::put((int)v40, (const void **)&StructureTemplate::SIZE_TAG, (int *)&v42);
  if ( v42 )
    (*(void (**)(void))(*(_DWORD *)v42 + 4))();
  v42 = 0;
  j_CompoundTag::putInt((int)v40, (const void **)&StructureTemplate::VERSION_TAG, 1);
  j_CompoundTag::putString((int)v40, (const void **)&StructureTemplate::AUTHOR_TAG, (int *)v41);
  v56 = &off_26E90B4;
  v36 = v57;
  if ( (_DWORD)v57 != HIDWORD(v57) )
      if ( *(_DWORD *)v36 )
        (*(void (**)(void))(**(_DWORD **)v36 + 4))();
      *(_DWORD *)v36 = 0;
      LODWORD(v36) = v36 + 4;
    while ( HIDWORD(v36) != (_DWORD)v36 );
    LODWORD(v36) = v57;
  if ( (_DWORD)v36 )
    j_operator delete((void *)v36);
  v75 = &off_26E90B4;
  v37 = v76;
  if ( (_DWORD)v76 != HIDWORD(v76) )
      if ( *(_DWORD *)v37 )
        (*(void (**)(void))(**(_DWORD **)v37 + 4))();
      *(_DWORD *)v37 = 0;
      LODWORD(v37) = v37 + 4;
    while ( HIDWORD(v37) != (_DWORD)v37 );
    LODWORD(v37) = v76;
  if ( (_DWORD)v37 )
    j_operator delete((void *)v37);
  v86 = &off_26E90B4;
  v38 = v87;
  if ( (_DWORD)v87 != HIDWORD(v87) )
      if ( *(_DWORD *)v38 )
        (*(void (**)(void))(**(_DWORD **)v38 + 4))();
      *(_DWORD *)v38 = 0;
      LODWORD(v38) = v38 + 4;
    while ( HIDWORD(v38) != (_DWORD)v38 );
    LODWORD(v38) = v87;
  if ( (_DWORD)v38 )
    j_operator delete((void *)v38);
  return v40;
}


int __fastcall StructureTemplate::_transform(int result, int a2, unsigned int a3, int a4, unsigned int a5, int a6, int a7)
{
  unsigned int v7; // r1@1
  unsigned int v8; // r12@9

  v7 = a5;
  if ( a6 == 2 )
  {
    a3 ^= 0x80000000;
  }
  else if ( a6 == 1 )
    v7 = a5 ^ 0x80000000;
  switch ( a7 )
    case 3:
      v8 = a3 ^ 0x80000000;
      break;
    case 2:
      v8 = v7 ^ 0x80000000;
      v7 = a3 ^ 0x80000000;
    case 1:
      v7 ^= 0x80000000;
      v8 = a3;
    default:
      v8 = v7;
      v7 = a3;
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)(result + 8) = v8;
  return result;
}


int __fastcall StructureTemplate::_mapToData(int a1, _BYTE *a2, int a3, StructureSettings *a4)
{
  int v4; // r6@1
  _BYTE *v5; // r8@1
  StructureSettings *v6; // r9@1
  char v7; // r0@1
  double v8; // r0@3
  int v9; // r0@4
  int v10; // r2@4
  int v11; // r3@4
  unsigned int v12; // r10@5
  signed int v13; // r5@5
  int v14; // r0@10
  int v15; // r1@10
  char v16; // r1@11
  unsigned int v17; // r2@11
  unsigned int v18; // r6@12
  signed int v19; // r4@14
  _DWORD *v20; // r0@15
  _DWORD *v21; // r7@16
  int v22; // r5@16
  _DWORD *v23; // r6@18
  unsigned int v24; // r1@22
  BlockState *v25; // r0@25
  BlockState *v26; // r0@27
  _BOOL4 v27; // r4@27
  BlockState *v28; // r0@27
  int v29; // r3@27
  int v30; // r6@27
  bool v31; // zf@29
  unsigned __int8 v32; // r5@34
  int v33; // r4@34
  char *v34; // r0@34
  unsigned int v35; // r1@34
  char v36; // r0@36
  int v37; // r0@40
  signed int v38; // r0@42
  int v39; // r0@52
  __int64 v40; // r1@52
  unsigned int v41; // r0@52
  int v42; // r0@53
  char v43; // r0@57
  int v44; // r0@69
  int v45; // r0@69
  unsigned int v46; // r1@69
  int v47; // r1@72
  unsigned int v48; // r1@76
  int v49; // r7@83
  int v50; // r0@83
  bool v51; // zf@86
  bool v52; // zf@92
  int v53; // r1@99
  int v54; // r0@107
  signed int v55; // r0@111
  unsigned __int8 v56; // r1@149
  int v58; // r0@166
  int v59; // r2@166
  bool v60; // zf@166
  signed int **v61; // r0@171
  int v62; // r0@172
  int v63; // r2@172
  bool v64; // zf@172
  int v65; // r2@178
  bool v66; // zf@178
  int v67; // r0@182
  int v68; // r5@182
  int v69; // r6@182
  int v70; // r2@183
  bool v71; // zf@183
  int v72; // r0@187
  int v73; // r5@187
  int v74; // r6@187
  char *v75; // [sp+0h] [bp-B8h]@0
  char *v76; // [sp+4h] [bp-B4h]@0
  char v77; // [sp+18h] [bp-A0h]@3
  int v78; // [sp+20h] [bp-98h]@52
  char v79; // [sp+2Ch] [bp-8Ch]@3
  int v80; // [sp+30h] [bp-88h]@3
  int v81; // [sp+34h] [bp-84h]@3
  int v82; // [sp+38h] [bp-80h]@3
  int v83; // [sp+3Ch] [bp-7Ch]@3
  int v84; // [sp+40h] [bp-78h]@3
  int v85; // [sp+44h] [bp-74h]@3
  int v86; // [sp+48h] [bp-70h]@3
  int v87; // [sp+4Ch] [bp-6Ch]@3
  int v88; // [sp+50h] [bp-68h]@3
  int v89; // [sp+54h] [bp-64h]@3
  int v90; // [sp+58h] [bp-60h]@3
  int v91; // [sp+5Ch] [bp-5Ch]@3
  int v92; // [sp+60h] [bp-58h]@3
  int v93; // [sp+64h] [bp-54h]@3
  int v94; // [sp+68h] [bp-50h]@3
  int v95; // [sp+6Ch] [bp-4Ch]@3
  int v96; // [sp+70h] [bp-48h]@3
  int v97; // [sp+74h] [bp-44h]@3
  int v98; // [sp+78h] [bp-40h]@3
  int v99; // [sp+7Ch] [bp-3Ch]@3
  int v100; // [sp+80h] [bp-38h]@3
  int v101; // [sp+84h] [bp-34h]@3
  int v102; // [sp+88h] [bp-30h]@3
  unsigned __int8 v103; // [sp+8Bh] [bp-2Dh]@1

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v103 = *(_BYTE *)(*(_DWORD *)(a3 + 16) + 1);
  v7 = byte_281F3D4;
  __dmb();
  if ( !(v7 & 1) && j_j___cxa_guard_acquire(&byte_281F3D4) )
  {
    v80 = *(_BYTE *)(Block::mLadder + 4);
    v81 = *(_BYTE *)(Block::mTorch + 4);
    v82 = *(_BYTE *)(Block::mEndRod + 4);
    v83 = *(_BYTE *)(Block::mWallSign + 4);
    v84 = *(_BYTE *)(Block::mChest + 4);
    v85 = *(_BYTE *)(Block::mEnderChest + 4);
    v86 = *(_BYTE *)(Block::mFurnace + 4);
    v87 = *(_BYTE *)(Block::mBed + 4);
    v88 = *(_BYTE *)(Block::mLitRedStoneTorch + 4);
    v89 = *(_BYTE *)(Block::mSkull + 4);
    v90 = *(_BYTE *)(Block::mBrewingStand + 4);
    v91 = *(_BYTE *)(Block::mLever + 4);
    v92 = *(_BYTE *)(Block::mIronDoor + 4);
    v93 = *(_BYTE *)(Block::mPumpkin + 4);
    v94 = *(_BYTE *)(Block::mDarkOakFenceGate + 4);
    v95 = *(_BYTE *)(Block::mVine + 4);
    v96 = *(_BYTE *)(Block::mAnvil + 4);
    v97 = *(_BYTE *)(Block::mLog + 4);
    v98 = *(_BYTE *)(Block::mLog2 + 4);
    v99 = *(_BYTE *)(Block::mBoneBlock + 4);
    v100 = *(_BYTE *)(Block::mWallBanner + 4);
    v101 = *(_BYTE *)(Block::mStandingBanner + 4);
    v75 = &v79;
    v76 = &v77;
    HIDWORD(v8) = &v80;
    LODWORD(v8) = &dword_281F3D8;
    std::_Hashtable<int,int,std::allocator<int>,std::__detail::_Identity,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_Hashtable<int const*>(
      v8,
      (unsigned int *)&v102,
      0);
    j___cxa_atexit((int)std::unordered_set<int,std::hash<int>,std::equal_to<int>,std::allocator<int>>::~unordered_set);
    j_j___cxa_guard_release(&byte_281F3D4);
  }
  v9 = j_FullBlock::getBlock(*(FullBlock **)(v4 + 16));
  if ( (*(int (__cdecl **)(int, _DWORD, int, int, char *, char *))(*(_DWORD *)v9 + 84))(
         v9,
         *(_DWORD *)(*(_DWORD *)v9 + 84),
         v10,
         v11,
         v75,
         v76) == 1 )
    v12 = *v5;
    v13 = 1;
  else
    if ( v12 == *(_BYTE *)(Block::mTrapdoor + 4) )
    {
      v13 = 1;
    }
    else
      v20 = *(_DWORD **)(dword_281F3D8 + 4 * (v12 % unk_281F3DC));
      if ( !v20 )
        goto LABEL_33;
      v21 = (_DWORD *)*v20;
      v22 = *(_DWORD *)(*v20 + 4);
      while ( v12 != v22 )
      {
        v23 = (_DWORD *)*v21;
        if ( *v21 )
        {
          v22 = v23[1];
          v20 = v21;
          v21 = (_DWORD *)*v21;
          if ( v23[1] % unk_281F3DC == v12 % unk_281F3DC )
            continue;
        }
      }
      v31 = v20 == 0;
      if ( v20 )
        v31 = *v20 == 0;
      if ( v31 )
LABEL_33:
        if ( v12 == *(_BYTE *)(Block::mRail + 4) )
          v32 = v103;
          v103 &= 0xF0u;
          v33 = *(_WORD *)j_StructureSettings::getRotation(v6);
          v34 = j_StructureSettings::getMirror(v6);
          v35 = v32 & 0xF;
          if ( v35 > 1 )
          {
            if ( v35 >= 6 )
            {
              v37 = *(_DWORD *)v34;
              if ( v37 == 1 )
              {
                v38 = -1;
                if ( v35 != 6 && v35 != 8 )
                  v38 = 1;
              }
              else if ( v37 == 2 )
                v38 = 1;
                  v38 = -1;
              else
                v38 = 0;
              v35 = (signed int)(v38 + v35 + v33 - 6) % 4
                  + 4 * ((unsigned int)((signed int)(v38 + v35 + v33 - 6) % 4) >> 31)
                  + 6;
            }
          }
          else if ( (v33 | 2) == 3 )
            v36 = 0;
            if ( !(v32 & 0xF) )
              v36 = 1;
            LOBYTE(v35) = v36;
          v103 |= v35;
        v19 = 0;
        goto LABEL_148;
      v13 = 0;
  if ( v12 == *(_BYTE *)(Block::mTorch + 4) || v12 == *(_BYTE *)(Block::mLitRedStoneTorch + 4) )
    LOBYTE(v14) = v103;
    v15 = v103 & 7;
    if ( (unsigned int)(v15 - 1) >= 4 )
      LOBYTE(v18) = 0;
      if ( v15 == 5 )
        v19 = 1;
        goto LABEL_83;
      goto LABEL_81;
    v16 = 8 * (v15 - 1);
    v17 = 33554691;
    goto LABEL_12;
  if ( v12 == *(_BYTE *)(Block::mEndRod + 4) )
    v24 = (v103 & 7) - 2;
    if ( v24 > 3 )
      v18 = 0x1030200u >> 8 * v24;
    if ( (v103 & 6u) < 2 )
      v19 = 1;
      goto LABEL_83;
    goto LABEL_81;
  if ( v12 == *(_BYTE *)(Block::mIronDoor + 4) )
    v25 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 11);
    if ( j_BlockState::getBool(v25, &v103) )
      if ( *(_DWORD *)j_StructureSettings::getMirror(v6) )
        v26 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 10);
        v27 = j_BlockState::getBool(v26, &v103);
        v28 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 10);
        v29 = !v27;
        LOBYTE(v27) = v103;
        v30 = v29 << (*(_QWORD *)v28 + 1 - (unsigned int)(*(_QWORD *)v28 >> 32));
        v103 = v27 & ~(unsigned __int8)j_BlockState::getMask(v28) | v30;
    goto LABEL_69;
  if ( v12 != *(_BYTE *)(Block::mLog + 4)
    && v12 != *(_BYTE *)(Block::mLog2 + 4)
    && v12 != *(_BYTE *)(Block::mBoneBlock + 4) )
    if ( v12 != *(_BYTE *)(Block::mPumpkin + 4)
      && v12 != *(_BYTE *)(Block::mDarkOakFenceGate + 4)
      && v12 != *(_BYTE *)(Block::mAnvil + 4) )
      v14 = v103;
      if ( v12 == *(_BYTE *)(Block::mVine + 4) )
        v47 = v103 & 0xF;
        if ( VineBlock::VINE_SOUTH & v47 )
          LOBYTE(v18) = 2;
        else if ( VineBlock::VINE_NORTH & v47 )
          LOBYTE(v18) = 0;
        else if ( VineBlock::VINE_EAST & v47 )
          LOBYTE(v18) = 1;
        else
          LOBYTE(v18) = VineBlock::VINE_WEST & v47;
          if ( VineBlock::VINE_WEST & v47 )
            LOBYTE(v18) = 3;
        v103 &= 0xF0u;
        goto LABEL_82;
      if ( !v13 )
        v48 = (v103 & 7) - 2;
        if ( v48 > 3 )
          goto LABEL_81;
        v17 = 16974336;
        v16 = 8 * v48;
LABEL_12:
        v18 = v17 >> v16;
LABEL_81:
        v103 = v14 & 0xF8;
      v103 &= 0xFCu;
      v45 = 8 * v14 & 0x18;
      v46 = 131841;
LABEL_70:
      v18 = v46 >> v45;
LABEL_82:
      v19 = 0;
LABEL_69:
    v44 = v103;
    v103 &= 0xFCu;
    v45 = 8 * v44 & 0x18;
    v46 = 16777986;
    goto LABEL_70;
  v39 = j_Block::getBlockState(Block::mBlocks[v12], 12);
  v40 = *(_QWORD *)v39;
  v19 = 0;
  v78 = *(_DWORD *)(v39 + 8);
  *(_QWORD *)&v77 = v40;
  v41 = (v103 >> (v40 + 1 - BYTE4(v40))) & (0xFu >> (4 - BYTE4(v40)));
  if ( v41 > 2 )
    LOBYTE(v18) = 0;
    v31 = (v41 & 7) == 0;
    v42 = 8 * v41 & 0xFFFFF8;
    if ( v31 )
    v18 = 0x30000u >> v42;
  v43 = j_BlockState::getMask((BlockState *)&v77);
  v103 &= -1 - v43;
LABEL_83:
  v49 = *(_WORD *)j_StructureSettings::getRotation(v6);
  v50 = *(_DWORD *)j_StructureSettings::getMirror(v6);
  if ( (unsigned __int8)v18 == 3 )
    if ( v50 != 2 )
      LOBYTE(v18) = 3;
      goto LABEL_99;
    goto LABEL_90;
  v51 = (unsigned __int8)v18 == 1;
  if ( (unsigned __int8)v18 == 1 )
    v51 = v50 == 2;
  if ( v51 )
LABEL_90:
    LOBYTE(v18) = v18 + 2;
  if ( !(_BYTE)v18 )
    if ( v50 != 1 )
LABEL_97:
    goto LABEL_99;
  v52 = v50 == 1;
  if ( v50 == 1 )
    v52 = (unsigned __int8)v18 == 2;
  if ( v52 )
    goto LABEL_97;
LABEL_99:
  v53 = *v5;
  if ( v53 == *(_BYTE *)(Block::mBed + 4) )
    if ( v49 == 3 )
      LOBYTE(v49) = 0;
    else if ( v49 == 1 )
      LOBYTE(v49) = 3;
    else if ( !v49 )
      LOBYTE(v49) = 1;
  v54 = ((_BYTE)v49 + (_BYTE)v18) & 3;
  if ( v54 == 1 )
    if ( !v13 )
      if ( v53 == *(_BYTE *)(Block::mTorch + 4) )
        LOBYTE(v55) = 2;
        goto LABEL_149;
      if ( v53 == *(_BYTE *)(Block::mLever + 4) )
        LOBYTE(v55) = LeverBlock::getLeverFacing((LeverBlock *)5, v53);
      if ( v53 == *(_BYTE *)(Block::mIronDoor + 4) )
        LOBYTE(v55) = DoorBlock::getDoorFacing((DoorBlock *)5, v53);
      if ( v53 == *(_BYTE *)(Block::mPumpkin + 4) )
        LOBYTE(v55) = 3;
      if ( v53 == *(_BYTE *)(Block::mDarkOakFenceGate + 4) )
      if ( v53 == *(_BYTE *)(Block::mAnvil + 4) )
      v62 = Block::mLog2;
      v63 = *(_BYTE *)(Block::mLog + 4);
      v64 = v53 == v63;
      if ( v53 != v63 )
        v64 = v53 == *(_BYTE *)(Block::mLog2 + 4);
      if ( v64 || v53 == *(_BYTE *)(Block::mBoneBlock + 4) )
LABEL_182:
        v67 = j_Block::getBlockState(v62, 12);
        v68 = *(_DWORD *)v67;
        v69 = *(_DWORD *)(v67 + 4);
        j_BlockState::getMask((BlockState *)v67);
        v55 = 2 << (v68 + 1 - v69);
      if ( v53 != *(_BYTE *)(Block::mVine + 4) )
        LOBYTE(v55) = 5;
      v61 = VineBlock::VINE_EAST;
      goto LABEL_192;
LABEL_148:
    LOBYTE(v55) = 0;
    goto LABEL_149;
  if ( v54 == 2 )
    if ( v13 )
      LOBYTE(v55) = 2;
      goto LABEL_149;
    if ( v53 == *(_BYTE *)(Block::mTorch + 4) )
      LOBYTE(v55) = 4;
    if ( v53 == *(_BYTE *)(Block::mLever + 4) )
      LOBYTE(v55) = LeverBlock::getLeverFacing((LeverBlock *)3, v53);
    if ( v53 == *(_BYTE *)(Block::mIronDoor + 4) )
      LOBYTE(v55) = DoorBlock::getDoorFacing((DoorBlock *)3, v53);
    if ( v53 == *(_BYTE *)(Block::mPumpkin + 4)
      || v53 == *(_BYTE *)(Block::mDarkOakFenceGate + 4)
      || v53 == *(_BYTE *)(Block::mAnvil + 4) )
      goto LABEL_148;
    v58 = Block::mLog2;
    v59 = *(_BYTE *)(Block::mLog + 4);
    v60 = v53 == v59;
    if ( v53 != v59 )
      v60 = v53 == *(_BYTE *)(Block::mLog2 + 4);
    if ( v60 || v53 == *(_BYTE *)(Block::mBoneBlock + 4) )
      goto LABEL_187;
    if ( v53 != *(_BYTE *)(Block::mVine + 4) )
      LOBYTE(v55) = 3;
    v61 = VineBlock::VINE_SOUTH;
LABEL_192:
    v55 = **v61;
  if ( v54 != 3 )
      LOBYTE(v55) = LeverBlock::getLeverFacing((LeverBlock *)2, v53);
      LOBYTE(v55) = DoorBlock::getDoorFacing((DoorBlock *)2, v53);
    if ( v53 == *(_BYTE *)(Block::mPumpkin + 4) )
    if ( v53 == *(_BYTE *)(Block::mDarkOakFenceGate + 4) )
    if ( v53 == *(_BYTE *)(Block::mAnvil + 4) )
    v70 = *(_BYTE *)(Block::mLog + 4);
    v71 = v53 == v70;
    if ( v53 != v70 )
      v71 = v53 == *(_BYTE *)(Block::mLog2 + 4);
    if ( !v71 && v53 != *(_BYTE *)(Block::mBoneBlock + 4) )
      if ( v53 == *(_BYTE *)(Block::mVine + 4) )
        v61 = VineBlock::VINE_NORTH;
        goto LABEL_192;
LABEL_187:
    v72 = j_Block::getBlockState(v58, 12);
    v73 = *(_DWORD *)v72;
    v74 = *(_DWORD *)(v72 + 4);
    j_BlockState::getMask((BlockState *)v72);
    v55 = 1 << (v73 + 1 - v74);
  if ( v13 )
    LOBYTE(v55) = 1;
  if ( v53 == *(_BYTE *)(Block::mTorch + 4) )
  if ( v53 == *(_BYTE *)(Block::mLever + 4) )
    LOBYTE(v55) = LeverBlock::getLeverFacing((LeverBlock *)4, v53);
  if ( v53 == *(_BYTE *)(Block::mIronDoor + 4) )
    LOBYTE(v55) = DoorBlock::getDoorFacing((DoorBlock *)4, v53);
  if ( v53 == *(_BYTE *)(Block::mPumpkin + 4) )
  if ( v53 == *(_BYTE *)(Block::mDarkOakFenceGate + 4) )
  if ( v53 == *(_BYTE *)(Block::mAnvil + 4) )
  v62 = Block::mLog2;
  v65 = *(_BYTE *)(Block::mLog + 4);
  v66 = v53 == v65;
  if ( v53 != v65 )
    v66 = v53 == *(_BYTE *)(Block::mLog2 + 4);
  if ( v66 || v53 == *(_BYTE *)(Block::mBoneBlock + 4) )
    goto LABEL_182;
  if ( v53 == *(_BYTE *)(Block::mVine + 4) )
    v61 = VineBlock::VINE_WEST;
    goto LABEL_192;
  LOBYTE(v55) = 4;
LABEL_149:
  v56 = v103;
  if ( !v19 )
    v56 = v103 | v55;
  return v56;
}


int __fastcall StructureTemplate::placeInWorldChunk(StructureTemplate *this, BlockSource *a2, const BlockPos *a3, StructureSettings *a4)
{
  StructureSettings *v4; // r4@1
  StructureTemplate *v5; // r7@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  StructureSettings::updateBoundingBoxFromChunkPos(a4);
  return j_j_j__ZN17StructureTemplate12placeInWorldER11BlockSourceRK8BlockPosR17StructureSettings_0(v5, v7, v6, v4);
}


int __fastcall StructureTemplate::getMarkers(__int64 this, StructureSettings *a2, StructureSettings *a3)
{
  StructureSettings *v3; // r11@1
  int v4; // r4@1
  int v5; // r6@1
  unsigned int v6; // r0@1
  int v7; // r5@3
  void *v8; // r7@3
  char *v9; // r9@4
  int result; // r0@4
  int *v12; // r5@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int *v17; // r4@18
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  int v26; // r4@39
  int v27; // r2@39
  float v31; // r3@47
  void **v33; // r12@51
  int v34; // r7@51
  int v35; // r10@51
  int v36; // r2@51
  int v37; // r5@51
  int v38; // r1@52
  int v39; // r0@52
  int v40; // r6@53
  int v41; // r4@53
  int v42; // r0@60
  void **v43; // r6@60
  CompoundTag *v44; // r0@62
  int v45; // r4@64
  unsigned int *v46; // r0@64
  signed int v47; // r4@64
  void *v48; // r0@64
  int v49; // r4@66
  int *v50; // r0@66
  void *v51; // r0@66
  void *v52; // r0@67
  void *v53; // r0@68
  int *v54; // [sp+14h] [bp-94h]@5
  _QWORD *v55; // [sp+18h] [bp-90h]@4
  int v56; // [sp+1Ch] [bp-8Ch]@4
  StructureSettings *v57; // [sp+24h] [bp-84h]@1
  char v58; // [sp+28h] [bp-80h]@67
  int v59; // [sp+30h] [bp-78h]@67
  int v60; // [sp+34h] [bp-74h]@67
  int v61; // [sp+38h] [bp-70h]@67
  int v62; // [sp+3Ch] [bp-6Ch]@19
  int v63; // [sp+44h] [bp-64h]@15
  int v64; // [sp+48h] [bp-60h]@23
  int v65; // [sp+50h] [bp-58h]@5
  char v66; // [sp+54h] [bp-54h]@60
  char v67; // [sp+55h] [bp-53h]@60
  char v68; // [sp+58h] [bp-50h]@51
  int v69; // [sp+5Ch] [bp-4Ch]@51
  int v70; // [sp+60h] [bp-48h]@51

  v3 = a2;
  v4 = HIDWORD(this);
  v5 = this;
  v57 = a3;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 1065353216;
  LODWORD(this) = this + 16;
  *(_DWORD *)(this + 4) = 0;
  v6 = sub_21E6254(*(double *)&this);
  *(_DWORD *)(v5 + 4) = v6;
  if ( v6 == 1 )
  {
    *(_DWORD *)(v5 + 24) = 0;
    v8 = (void *)(v5 + 24);
  }
  else
    if ( v6 >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * v6;
    v8 = j_operator new(4 * v6);
    j___aeabi_memclr4((int)v8, v7);
  *(_DWORD *)v5 = v8;
  v55 = (_QWORD *)v5;
  v9 = StructureSettings::getBoundingBox(v57);
  result = *(_QWORD *)(v4 + 44) >> 32;
  _R8 = *(_QWORD *)(v4 + 44);
  v56 = result;
  if ( _R8 != result )
    v12 = &v65;
    v54 = &dword_28898C0;
    do
    {
      __asm
      {
        VLDR            S0, [R8]
        VLDR            S2, [R8,#4]
        VLDR            S4, [R8,#8]
        VCVT.F32.S32    S18, S4
        VCVT.F32.S32    S20, S0
        VCVT.F32.S32    S16, S2
      }
      v26 = *(_DWORD *)j_StructureSettings::getMirror(v57);
      v27 = *(_WORD *)j_StructureSettings::getRotation(v57);
        VMOV            R1, S18
        VMOV            R0, S20
      if ( v26 == 2 )
        LODWORD(_R0) ^= 0x80000000;
      else if ( v26 == 1 )
        __asm { VMOVEQ          R1, S18 }
        LODWORD(_R1) = _R1 ^ 0x80000000;
      switch ( v27 )
        case 3:
          LODWORD(v31) = LODWORD(_R0) ^ 0x80000000;
          break;
        case 2:
          LODWORD(v31) = LODWORD(_R1) ^ 0x80000000;
          LODWORD(_R1) = LODWORD(_R0) ^ 0x80000000;
        case 1:
          LODWORD(_R1) ^= 0x80000000;
          v31 = _R0;
        default:
          v31 = _R1;
          _R1 = _R0;
      __asm { VMOV            R2, S16 }
      j_BlockPos::BlockPos((BlockPos *)&v68, _R1, _R2, v31);
      v33 = (void **)v12;
      v34 = (*(_QWORD *)v3 >> 32) + v69;
      v35 = *(_DWORD *)&v68 + *(_QWORD *)v3;
      v36 = *((_DWORD *)v9 + 3);
      v37 = *((_DWORD *)v3 + 2) + v70;
      if ( v36 < *(_DWORD *)v9
        || (v38 = *((_DWORD *)v9 + 1), v39 = *((_DWORD *)v9 + 4), v39 < v38)
        || (v40 = *((_DWORD *)v9 + 2), v41 = *((_DWORD *)v9 + 5), v41 < v40)
        || v35 >= *(_DWORD *)v9 && v35 <= v36 && v37 >= v40 && v37 <= v41 && v34 >= v38 && v34 <= v39 )
        v42 = *(_DWORD *)(_R8 + 16);
        v43 = v33;
        v66 = *(_BYTE *)v42;
        v67 = *(_BYTE *)(v42 + 1);
        if ( !Block::mStructureBlock
          || *(_BYTE *)(j_FullBlock::getBlock((FullBlock *)&v66) + 4) == *(_BYTE *)(Block::mStructureBlock + 4) )
        {
          v44 = *(CompoundTag **)(_R8 + 12);
          if ( v44 )
          {
            if ( !j_CompoundTag::isEmpty(v44) )
            {
              v45 = *(_DWORD *)(_R8 + 12);
              sub_21E94B4(v43, "mode");
              v46 = (unsigned int *)j_CompoundTag::getString(v45, (const void **)v43);
              v47 = StructureBlockEntity::stringToStructureType(v46);
              v48 = (void *)(v65 - 12);
              if ( (int *)(v65 - 12) != v54 )
              {
                v13 = (unsigned int *)(v65 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v14 = __ldrex(v13);
                  while ( __strex(v14 - 1, v13) );
                }
                else
                  v14 = (*v13)--;
                if ( v14 <= 0 )
                  j_j_j_j__ZdlPv_9(v48);
              }
              if ( !v47 )
                v49 = *(_DWORD *)(_R8 + 12);
                sub_21E94B4((void **)&v63, "metadata");
                v50 = (int *)j_CompoundTag::getString(v49, (const void **)&v63);
                sub_21E8AF4(&v64, v50);
                v17 = v54;
                v51 = (void *)(v63 - 12);
                if ( (int *)(v63 - 12) != v54 )
                  v15 = (unsigned int *)(v63 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v16 = __ldrex(v15);
                    while ( __strex(v16 - 1, v15) );
                    v17 = v54;
                  }
                  else
                    v16 = (*v15)--;
                  if ( v16 <= 0 )
                    j_j_j_j__ZdlPv_9(v51);
                v59 = v35;
                v60 = v34;
                v61 = v37;
                sub_21E8AF4(&v62, &v64);
                std::_Hashtable<BlockPos,std::pair<BlockPos const,std::string>,std::allocator<std::pair<BlockPos const,std::string>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,std::string>>(
                  (int *)&v58,
                  v55,
                  (int)&v59);
                v52 = (void *)(v62 - 12);
                if ( (int *)(v62 - 12) != v17 )
                  v18 = (unsigned int *)(v62 - 4);
                      v19 = __ldrex(v18);
                    while ( __strex(v19 - 1, v18) );
                    v19 = (*v18)--;
                  if ( v19 <= 0 )
                    j_j_j_j__ZdlPv_9(v52);
                v53 = (void *)(v64 - 12);
                if ( (int *)(v64 - 12) != v17 )
                  v20 = (unsigned int *)(v64 - 4);
                      v21 = __ldrex(v20);
                    while ( __strex(v21 - 1, v20) );
                    v21 = (*v20)--;
                  if ( v21 <= 0 )
                    j_j_j_j__ZdlPv_9(v53);
                v54 = v17;
            }
          }
        }
        v33 = v43;
      _R8 += 20;
      result = v56;
      v12 = (int *)v33;
    }
    while ( _R8 != v56 );
  return result;
}


int __fastcall StructureTemplate::placeEntities(int a1, BlockSource *a2, int a3, int a4, __int64 a5)
{
  int v5; // r8@1
  int result; // r0@1
  __int64 v8; // kr00_8@1
  int v9; // r11@1
  int v10; // r2@2
  int v11; // r10@2
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  float v21; // r3@18
  int v23; // r2@22
  int v24; // r1@23
  int v25; // r0@23
  int v26; // r4@24
  int v27; // r3@24
  int v28; // r6@25
  int v29; // r2@27
  int v30; // r2@29
  CompoundTag *v31; // r0@31
  int v32; // r4@33
  void **v35; // r0@33
  void **v37; // r0@33
  int v38; // r1@33
  void *v39; // r0@37
  int v40; // r10@39
  int v41; // r6@39
  int v42; // r8@39
  int v43; // r0@40
  int v44; // r1@40
  int (__fastcall *v45)(int, BlockSource *, __int64 *); // r3@41
  int v46; // r4@41
  int v47; // r0@44
  int (__fastcall *v48)(int, BlockSource *, int *); // r3@44
  int v49; // r5@48
  int v50; // r11@48
  const CompoundTag *v51; // r0@53
  int v52; // r4@53
  void (__fastcall *v53)(int, BlockSource *, int *); // r3@54
  int v54; // [sp+10h] [bp-A0h]@1
  BlockSource *v55; // [sp+14h] [bp-9Ch]@1
  int v56; // [sp+18h] [bp-98h]@54
  int v57; // [sp+1Ch] [bp-94h]@49
  int v58; // [sp+20h] [bp-90h]@44
  __int64 v59; // [sp+24h] [bp-8Ch]@38
  int v60; // [sp+2Ch] [bp-84h]@33
  int v61; // [sp+30h] [bp-80h]@33
  int v62; // [sp+38h] [bp-78h]@3
  float v63; // [sp+3Ch] [bp-74h]@31
  int v66; // [sp+48h] [bp-68h]@22
  int v67; // [sp+4Ch] [bp-64h]@29
  int v68; // [sp+50h] [bp-60h]@27

  v55 = a2;
  v5 = a4;
  v8 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 56) >> 32;
  _R9 = v8;
  v9 = a3;
  v54 = result;
  if ( (_DWORD)v8 != result )
  {
    v11 = HIDWORD(a5);
    v10 = a5;
    do
    {
      __asm
      {
        VLDR            S0, [R9,#0xC]
        VLDR            S2, [R9,#0x14]
        VLDR            S6, [R9,#0x10]
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S0
        VCVT.F32.S32    S0, S6
        VMOV            R1, S2
        VMOV            R0, S4
      }
      if ( _ZF )
        LODWORD(_R0) ^= 0x80000000;
      else if ( v5 == 1 )
        __asm { VMOVEQ          R1, S2 }
        LODWORD(_R1) = _R1 ^ 0x80000000;
      switch ( v10 )
        case 3:
          LODWORD(v21) = LODWORD(_R0) ^ 0x80000000;
          break;
        case 2:
          LODWORD(v21) = LODWORD(_R1) ^ 0x80000000;
          LODWORD(_R1) = LODWORD(_R0) ^ 0x80000000;
        case 1:
          LODWORD(_R1) ^= 0x80000000;
          v21 = _R0;
        default:
          v21 = _R1;
          _R1 = _R0;
      __asm { VMOV            R2, S0 }
      j_BlockPos::BlockPos((BlockPos *)&v66, _R1, _R2, v21);
      v23 = *(_DWORD *)(v11 + 12);
      if ( v23 < *(_DWORD *)v11
        || (v24 = *(_DWORD *)(v11 + 4), v25 = *(_DWORD *)(v11 + 16), v25 < v24)
        || (v26 = *(_DWORD *)(v11 + 8), v27 = *(_DWORD *)(v11 + 20), v27 < v26)
        || (v28 = v66 + *(_DWORD *)v9, v28 >= *(_DWORD *)v11)
        && v28 <= v23
        && (v29 = *(_DWORD *)(v9 + 8) + v68, v29 >= v26)
        && v29 <= v27
        && (v30 = *(_DWORD *)(v9 + 4) + v67, v30 >= v24)
        && v30 <= v25 )
        j_Vec3::Vec3((int)&v63, v9);
        v31 = *(CompoundTag **)(_R9 + 24);
        if ( v31 )
        {
          __asm
          {
            VLDR            S24, [R9]
            VLDR            S20, [R9,#4]
            VLDR            S16, [R9,#8]
            VLDR            S26, [SP,#0xB0+var_74]
            VLDR            S22, [SP,#0xB0+var_70]
            VLDR            S18, [SP,#0xB0+var_6C]
          }
          if ( !j_CompoundTag::isEmpty(v31) )
            v32 = *(_DWORD *)(_R9 + 24);
            sub_21E94B4((void **)&v62, "Pos");
            __asm { VADD.F32        S0, S26, S24 }
            v60 = 0;
            __asm { VMOV            R1, S0 }
            ListTagFloatAdder::operator()((void **)&v60, _R1);
            __asm
            {
              VADD.F32        S0, S22, S20
              VMOV            R1, S0
            }
            v35 = ListTagFloatAdder::operator()((void **)&v60, _R1);
              VADD.F32        S0, S18, S16
            v37 = ListTagFloatAdder::operator()(v35, _R1);
            v38 = (int)*v37;
            *v37 = 0;
            v61 = v38;
            j_CompoundTag::put(v32, (const void **)&v62, &v61);
            if ( v61 )
              (*(void (**)(void))(*(_DWORD *)v61 + 4))();
            v61 = 0;
            if ( v60 )
              (*(void (**)(void))(*(_DWORD *)v60 + 4))();
            v39 = (void *)(v62 - 12);
            if ( (int *)(v62 - 12) != &dword_28898C0 )
              v12 = (unsigned int *)(v62 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v13 = __ldrex(v12);
                while ( __strex(v13 - 1, v12) );
              }
              else
                v13 = (*v12)--;
              if ( v13 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
        }
        EntityFactory::loadEntity((EntityFactory *)((char *)&v59 + 4), *(const CompoundTag **)(_R9 + 24));
        if ( HIDWORD(v59) )
          v40 = v9;
          v41 = v5;
          v42 = j_BlockSource::getLevel(v55);
          if ( !Entity::isAutonomous((Entity *)HIDWORD(v59)) )
            v43 = j_Entity::isGlobal((Entity *)HIDWORD(v59));
            v44 = *(_DWORD *)v42;
            if ( v43 == 1 )
              v45 = *(int (__fastcall **)(int, BlockSource *, __int64 *))(v44 + 48);
              v59 = HIDWORD(v59);
              v46 = v45(v42, v55, &v59);
              if ( (_DWORD)v59 )
                (*(void (**)(void))(*(_DWORD *)v59 + 32))();
              LODWORD(v59) = 0;
            else
              v47 = HIDWORD(v59);
              v48 = *(int (__fastcall **)(int, BlockSource *, int *))(v44 + 44);
              HIDWORD(v59) = 0;
              v58 = v47;
              v46 = v48(v42, v55, &v58);
              if ( v58 )
                (*(void (**)(void))(*(_DWORD *)v58 + 32))();
              v58 = 0;
            if ( v46 )
              v49 = HIDWORD(v59);
              v50 = *(_DWORD *)(_R9 + 24);
              while ( j_CompoundTag::contains(v50, (const void **)&Entity::RIDING_TAG, 10) == 1 )
                v51 = (const CompoundTag *)j_CompoundTag::getCompound(v50, (const void **)&Entity::RIDING_TAG);
                EntityFactory::loadEntity((EntityFactory *)&v57, v51);
                v52 = v57;
                if ( v57 )
                {
                  v53 = *(void (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v42 + 44);
                  v56 = v57;
                  v57 = 0;
                  v53(v42, v55, &v56);
                  if ( v56 )
                    (*(void (**)(void))(*(_DWORD *)v56 + 32))();
                  v56 = 0;
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)v49 + 144))(v49, v52);
                }
                v50 = j_CompoundTag::getCompound(v50, (const void **)&Entity::RIDING_TAG);
                  (*(void (**)(void))(*(_DWORD *)v57 + 32))();
                v49 = v52;
          v9 = v40;
          v5 = v41;
          v11 = HIDWORD(a5);
          if ( HIDWORD(v59) )
            (*(void (**)(void))(*(_DWORD *)HIDWORD(v59) + 32))();
      v10 = a5;
      _R9 += 28;
      result = v54;
    }
    while ( _R9 != v54 );
  }
  return result;
}


int __fastcall StructureTemplate::_mapToBlock(int a1, const void **a2, int *a3)
{
  void **v3; // r5@1
  int *v4; // r4@1
  int result; // r0@4
  void **v6; // r0@5
  _BYTE *v7; // r2@5
  char *v8; // r1@5

  v3 = (void **)a2;
  v4 = a3;
  if ( sub_21E7D6C(a2, "purpur_pillar") )
  {
    if ( !sub_21E7D6C((const void **)v3, "purpur_slab") )
    {
      sub_21E8190(v3, "stone_slab2", (_BYTE *)0xB);
      result = *v4 | 1;
      goto LABEL_10;
    }
    if ( !sub_21E7D6C((const void **)v3, "dark_oak_fence") )
      sub_21E8190(v3, "fence", (_BYTE *)5);
      result = *v4 | 5;
    result = sub_21E7D6C((const void **)v3, "birch_fence");
    if ( result )
      return result;
    v6 = v3;
    v7 = (_BYTE *)5;
    v8 = "fence";
  }
  else
    v7 = (_BYTE *)12;
    v8 = "purpur_block";
  sub_21E8190(v6, v8, v7);
  result = *v4 | 2;
LABEL_10:
  *v4 = result;
  return result;
}


CompoundTag *__fastcall StructureTemplate::_mapToString(StructureTemplate *this, CompoundTag *a2, int a3)
{
  int v3; // r5@1
  CompoundTag *v4; // r6@1
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@9
  void *v8; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+4h] [bp-54h]@7
  int v19; // [sp+Ch] [bp-4Ch]@7
  int v20; // [sp+14h] [bp-44h]@6
  int v21; // [sp+1Ch] [bp-3Ch]@5
  int v22; // [sp+24h] [bp-34h]@1
  char v23; // [sp+28h] [bp-30h]@1

  v3 = a3;
  v4 = a2;
  j_CompoundTag::CompoundTag((int)&v23);
  sub_21E94B4((void **)&v22, "default");
  if ( v3 == 2 )
  {
    sub_21E8190((void **)&v22, "lines", (_BYTE *)5);
  }
  else if ( v3 == 1 )
    sub_21E8190((void **)&v22, "chiseled", (_BYTE *)8);
  sub_21E94B4((void **)&v21, "variant");
  j_CompoundTag::putString((int)&v23, (const void **)&v21, &v22);
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v20, "dataID");
  j_CompoundTag::putInt((int)&v23, (const void **)&v20, v3);
  v6 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v19, "Properties");
  j_CompoundTag::copy((CompoundTag *)&v18, (int)&v23);
  j_CompoundTag::put((int)v4, (const void **)&v19, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v18 = 0;
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return j_CompoundTag::~CompoundTag((CompoundTag *)&v23);
}


int __fastcall StructureTemplate::getSize(int result, int a2, int a3)
{
  __int64 v3; // r2@2

  if ( (a3 | 2) == 3 )
  {
    v3 = *(_QWORD *)(a2 + 4);
    *(_DWORD *)result = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(result + 4) = HIDWORD(v3);
    *(_DWORD *)(result + 8) = v3;
  }
  else
    *(_DWORD *)result = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 12);
  return result;
}


_QWORD *__fastcall StructureTemplate::fillEntityList(StructureTemplate *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  const BlockPos *v4; // r11@1
  BlockSource *v5; // r7@1
  StructureTemplate *v6; // r5@1
  BlockPos *v7; // r6@1
  _QWORD *result; // r0@1
  int v9; // r9@1 OVERLAPPED
  int v10; // r10@1 OVERLAPPED
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  void *v18; // r0@13
  __int64 v19; // r0@14
  int v20; // [sp+10h] [bp-A0h]@3
  char v21; // [sp+14h] [bp-9Ch]@13
  char v22; // [sp+30h] [bp-80h]@13
  float v23; // [sp+3Ch] [bp-74h]@13
  float v26; // [sp+48h] [bp-68h]@13
  char v27; // [sp+54h] [bp-5Ch]@1
  char v28; // [sp+60h] [bp-50h]@1
  char v29; // [sp+6Ch] [bp-44h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  j_Vec3::Vec3((int)&v28, (int)a3);
  j_Vec3::Vec3((int)&v27, (int)v7);
  j_AABB::AABB((int)&v29, (int)&v28, (int)&v27);
  result = j_BlockSource::fetchEntities(v5, 0, (const AABB *)&v29);
  for ( *(_QWORD *)&v9 = *result; v9 != v10; v9 += 4 )
  {
    result = *(_QWORD **)v9;
    if ( *(_DWORD *)v9 )
    {
      result = (_QWORD *)j_Entity::hasCategory((int)result, 1);
      if ( !result )
      {
        _R4 = (*(int (**)(void))(**(_DWORD **)v9 + 52))();
        j_Vec3::Vec3((int)&v23, (int)v4);
        __asm
        {
          VLDR            S0, [R4]
          VLDR            S6, [SP,#0xB0+var_74]
          VLDR            S2, [R4,#4]
          VLDR            S8, [SP,#0xB0+var_70]
          VSUB.F32        S0, S0, S6
          VLDR            S4, [R4,#8]
          VLDR            S10, [SP,#0xB0+var_6C]
          VSUB.F32        S2, S2, S8
          VSUB.F32        S4, S4, S10
          VSTR            S0, [SP,#0xB0+var_68]
          VSTR            S2, [SP,#0xB0+var_64]
          VSTR            S4, [SP,#0xB0+var_60]
        }
        j_BlockPos::BlockPos((int)&v22, (int)&v26);
        j_CompoundTag::CompoundTag((int)&v21);
        (*(void (**)(void))(**(_DWORD **)v9 + 472))();
        sub_21E94B4((void **)&v20, "Pos");
        j_CompoundTag::remove((int)&v21, (const void **)&v20);
        v18 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v19 = *(_QWORD *)((char *)v6 + 60);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<StructureEntityInfo,std::allocator<StructureEntityInfo>>::_M_emplace_back_aux<Vec3 const&,BlockPos &,CompoundTag &>(
            (unsigned __int64 *)v6 + 7,
            (const Vec3 *)&v26,
            (const BlockPos *)&v22,
            (int)&v21);
        else
          StructureEntityInfo::StructureEntityInfo(
            (StructureEntityInfo *)v19,
            (const CompoundTag *)&v21);
          *((_DWORD *)v6 + 15) += 28;
        result = j_CompoundTag::~CompoundTag((CompoundTag *)&v21);
      }
    }
  }
  return result;
}


int __fastcall StructureTemplate::getZeroPositionWithTransform(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // lr@1
  int v7; // r5@1
  int v8; // r12@1
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r1@1
  int v12; // r7@1
  int v13; // r2@6
  int v14; // r1@6
  int v15; // r3@8

  v6 = *(_DWORD *)a2;
  *(_DWORD *)result = *(_DWORD *)a2;
  v7 = 0;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a6 - 1;
  *(_DWORD *)(result + 4) = v8;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 8);
  v12 = a5 - 1;
  *(_DWORD *)(result + 8) = v11;
  if ( a3 == 1 )
    v7 = a6 - 1;
  if ( a3 == 2 )
    v10 = a5 - 1;
  switch ( a4 )
  {
    case 0:
      v13 = v6 + v10;
      v14 = v11 + v7;
      goto LABEL_11;
    case 1:
      v14 = v11 + v10;
      v13 = v9 - v7 + v6;
    case 2:
      v15 = v9 - v7;
      v13 = v12 - v10 + v6;
      goto LABEL_10;
    case 3:
      v13 = v6 + v7;
      v15 = v12 - v10;
LABEL_10:
      v14 = v11 + v15;
LABEL_11:
      *(_DWORD *)result = v13;
      *(_DWORD *)(result + 4) = v8;
      *(_DWORD *)(result + 8) = v14;
      break;
    default:
      return result;
  }
  return result;
}


int __fastcall StructureTemplate::_transform(BlockPos *a1, int a2, int _R2, int a4, int a5)
{
  float v12; // r3@9

  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R2,#8]
    VLDR            S6, [R2,#4]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S0
    VCVT.F32.S32    S0, S6
    VMOV            R1, S2
    VMOV            R2, S4
  }
  if ( _ZF )
    LODWORD(_R2) ^= 0x80000000;
  else if ( a4 == 1 )
    __asm { VMOVEQ          R1, S2 }
    LODWORD(_R1) = _R1 ^ 0x80000000;
  switch ( a5 )
    case 3:
      LODWORD(v12) = LODWORD(_R2) ^ 0x80000000;
      break;
    case 2:
      LODWORD(v12) = LODWORD(_R1) ^ 0x80000000;
      LODWORD(_R1) = LODWORD(_R2) ^ 0x80000000;
    case 1:
      LODWORD(_R1) ^= 0x80000000;
      v12 = _R2;
    default:
      v12 = _R1;
      _R1 = _R2;
  __asm { VMOV            R2, S0 }
  return j_BlockPos::BlockPos(a1, _R1, _R2, v12);
}


int __fastcall StructureTemplate::_calculateRelativePosition(BlockPos *a1, int a2, int _R2, StructureSettings *a4)
{
  StructureSettings *v8; // r6@1
  BlockPos *v9; // r4@1
  int v11; // r7@1
  int v12; // r1@1
  float v15; // r3@9

  __asm { VLDR            S4, [R2,#8] }
  v8 = a4;
  __asm { VLDR            S0, [R2] }
  v9 = a1;
  __asm
  {
    VLDR            S2, [R2,#4]
    VCVT.F32.S32    S18, S4
    VCVT.F32.S32    S20, S0
    VCVT.F32.S32    S16, S2
    VMOV            R5, S18
  }
  v11 = *(_DWORD *)j_StructureSettings::getMirror(a4);
  v12 = *(_WORD *)j_StructureSettings::getRotation(v8);
  __asm { VMOV            R0, S20 }
  if ( v11 == 2 )
    LODWORD(_R0) ^= 0x80000000;
  else if ( v11 == 1 )
    __asm { VMOVEQ          R2, S18 }
    LODWORD(_R5) = _R2 ^ 0x80000000;
  switch ( v12 )
    case 3:
      LODWORD(v15) = LODWORD(_R0) ^ 0x80000000;
      break;
    case 2:
      LODWORD(v15) = LODWORD(_R5) ^ 0x80000000;
      LODWORD(_R5) = LODWORD(_R0) ^ 0x80000000;
    case 1:
      LODWORD(_R5) ^= 0x80000000;
      v15 = _R0;
    default:
      v15 = _R5;
      _R5 = _R0;
  __asm { VMOV            R2, S16 }
  return j_BlockPos::BlockPos(v9, _R5, _R2, v15);
}


signed int __fastcall StructureTemplate::_mapToProperty(int a1, const void **a2, const void **a3, const void **a4, unsigned __int8 a5)
{
  const void **v5; // r6@1
  const void **v6; // r5@1
  const void **v7; // r4@1
  BlockState *v8; // r0@23
  __int64 v9; // r4@23
  signed int result; // r0@23
  const char *v11; // r1@43
  const char *v12; // r1@64
  signed int v20; // r7@74
  unsigned int v21; // r8@74
  int v22; // r5@80
  int v23; // r0@80
  const char *v24; // r1@83
  unsigned int v25; // r5@96
  const char *v26; // r1@102
  signed int v27; // r5@104
  int v28; // r1@108
  signed int v29; // r6@112
  int v30; // r1@119
  int v31; // r0@119
  signed int v32; // r0@120
  BlockState *v33; // r0@145
  int v34; // r4@145
  int v35; // r6@145
  _DWORD **v36; // r0@156
  BlockState *v37; // r0@158
  int v38; // r1@159
  int v39; // r0@159
  int v40; // r0@162
  signed int v41; // r4@162
  BlockState *v42; // r0@166
  BlockState *v43; // r0@168
  BlockState *v44; // r0@170
  __int64 v45; // r4@170
  int v46; // r6@170
  const char *v47; // r1@174
  int v48; // r1@177
  BlockState *v49; // r0@194
  BlockState *v50; // r0@197
  __int64 v51; // r5@197
  BlockState *v52; // r0@204
  int v53; // [sp+4h] [bp-24h]@170
  unsigned __int8 v54; // [sp+9h] [bp-1Fh]@166
  unsigned __int8 v55; // [sp+Ah] [bp-1Eh]@158
  unsigned __int8 v56; // [sp+Bh] [bp-1Dh]@204
  int v57; // [sp+Ch] [bp-1Ch]@69

  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( !sub_21E7D6C(a2, "variant") )
  {
    if ( !sub_21E7D6C(v7, "default") )
      return 0;
    if ( !sub_21E7D6C(v7, "chiseled") )
      return 1;
    if ( !sub_21E7D6C(v7, "lines") )
      return 2;
    if ( !sub_21E7D6C(v7, "chiseled_brick") )
      return 5;
    if ( !sub_21E7D6C(v7, "mossy_brick") )
      return 3;
    if ( !sub_21E7D6C(v7, "stone_brick") )
    if ( !sub_21E7D6C(v7, "mossy_stonebrick") )
    if ( !sub_21E7D6C(v7, "smooth_andesite") )
    {
      v28 = sub_21E7D6C(v6, "stone");
      result = 4;
      if ( !v28 )
        result = 6;
      return result;
    }
    if ( !sub_21E7D6C(v7, "chiseled_stonebrick") )
    if ( !sub_21E7D6C(v7, "cracked_stonebrick") )
    if ( !sub_21E7D6C(v7, "spruce") )
    if ( !sub_21E7D6C(v7, "dark_oak") )
      v48 = sub_21E7D6C(v6, "log2");
      result = 5;
      if ( !v48 )
        result = 1;
    if ( !sub_21E7D6C(v7, "cobblestone") )
      if ( sub_21E7D6C(v6, "stone_slab") )
        return sub_21E7D6C(v6, "cobblestone_wall") != 0;
    if ( sub_21E7D6C(v6, "planks") || !sub_21E7D6C(v7, "oak") )
    if ( !sub_21E7D6C(v7, "birch") )
    if ( !sub_21E7D6C(v7, "jungle") )
    if ( !sub_21E7D6C(v7, "acacia") )
      return 4;
    v11 = "dark_oak";
    goto LABEL_129;
  }
  if ( !sub_21E7D6C(v5, "part") )
    if ( sub_21E7D6C(v7, "foot") && !sub_21E7D6C(v7, "head") )
      return BedBlock::HEAD_PIECE_DATA;
    return 0;
  if ( !sub_21E7D6C(v5, "color") )
    if ( !sub_21E7D6C(v7, "white") )
    if ( sub_21E7D6C(v7, "orange") )
      if ( sub_21E7D6C(v7, "magenta") )
      {
        if ( sub_21E7D6C(v7, "lightBlue") )
        {
          if ( sub_21E7D6C(v7, "yellow") )
          {
            if ( sub_21E7D6C(v7, "lime") )
            {
              if ( sub_21E7D6C(v7, "pink") )
              {
                if ( sub_21E7D6C(v7, "gray") )
                {
                  if ( sub_21E7D6C(v7, "silver") )
                  {
                    if ( sub_21E7D6C(v7, "cyan") )
                    {
                      if ( !sub_21E7D6C(v7, "purple") )
                        return 10;
                      if ( !sub_21E7D6C(v7, "blue") )
                        return 11;
                      if ( sub_21E7D6C(v7, "brown") )
                      {
                        if ( sub_21E7D6C(v7, "green") )
                        {
                          if ( sub_21E7D6C(v7, "red") )
                          {
                            if ( !sub_21E7D6C(v7, "black") )
                              return 15;
                            return 0;
                          }
                          result = 14;
                        }
                        else
                          result = 13;
                      }
                      else
                        result = 12;
                      return result;
                    }
                    return 9;
                  }
                  return 8;
                }
                return 7;
              }
              return 6;
            }
            return 5;
          }
          return 4;
        }
        return 3;
      }
    return 1;
  if ( !sub_21E7D6C(v5, "has_bottle_0") )
    v12 = "true";
LABEL_67:
    sub_21E7D6C(v7, v12);
  if ( !sub_21E7D6C(v5, "has_bottle_1") )
    goto LABEL_67;
  if ( !sub_21E7D6C(v5, "has_bottle_2") )
  if ( !sub_21E7D6C(v5, "level") )
    j_Util::toInt<int,(void *)0>((unsigned int *)v7, &v57);
    __asm { VLDR            S2, =0.33333 }
    _R3 = 6;
    __asm { VMOV            S0, R3 }
    _R3 = 0;
    __asm { VCVT.F32.S32    S0, S0 }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      _R3 = v57;
    if ( v57 > 6 )
      _R3 = 6;
    __asm
      VMOV            S4, R3
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    return _R1;
  if ( !sub_21E7D6C(v5, "half") )
    v20 = 0;
    v21 = sub_21E76A0((int *)v6, "stairs", 0, 6u);
    if ( sub_21E7D6C(v6, "trapdoor") )
      if ( !sub_21E7D6C(v6, "iron_trapdoor") )
        v20 = 1;
    else
      v20 = 1;
    v29 = 0;
    if ( sub_21E76A0((int *)v6, "door", 0, 4u) == -1 )
      v29 = 1;
    else if ( sub_21E76A0((int *)v6, "trap", 0, 4u) != -1 )
    if ( sub_21E7D6C(v7, "top") )
      if ( (sub_21E7D6C(v7, "upper") != 0) | v29 )
        return 0;
      v30 = 11;
      v31 = Block::mIronDoor;
      v32 = 0;
      if ( v21 != -1 )
        v32 = 1;
      if ( v32 | v20 )
        return 4;
      v30 = 37;
      v31 = Block::mStoneSlab;
LABEL_194:
    v49 = (BlockState *)j_Block::getBlockState(v31, v30);
    return j_j_j__ZNK10BlockState7getMaskEv_1(v49);
  if ( !sub_21E7D6C(v5, "axis") )
    if ( !sub_21E7D6C(v6, "log") || !sub_21E7D6C(v6, "log2") )
      if ( sub_21E7D6C(v7, "x") )
        v27 = 0;
        if ( sub_21E7D6C(v7, "y") && !sub_21E7D6C(v7, (const char *)&aRtuz[3]) )
          v27 = 2;
      else
        v27 = 1;
      v33 = (BlockState *)j_Block::getBlockState(Block::mLog2, 12);
      v35 = *(_QWORD *)v33 >> 32;
      v34 = *(_QWORD *)v33;
      j_BlockState::getMask(v33);
      return (unsigned __int8)(v27 << (v34 + 1 - v35));
    v22 = sub_21E7D6C(v6, "bone_block");
    v23 = sub_21E7D6C(v7, "x");
    if ( !v22 )
      if ( v23 )
        if ( sub_21E7D6C(v7, "y") )
          v40 = sub_21E7D6C(v7, (const char *)&aRtuz[3]);
          v41 = 1;
          if ( !v40 )
            v41 = 2;
        else
          v41 = 0;
        v41 = 1;
      v50 = (BlockState *)j_Block::getBlockState(Block::mBoneBlock, 12);
      v51 = *(_QWORD *)v50;
      j_BlockState::getMask(v50);
      return (unsigned __int8)(v41 << (v51 + 1 - BYTE4(v51)));
    if ( !v23 )
    if ( !sub_21E7D6C(v7, "y") )
    v24 = (const char *)&aRtuz[3];
    goto LABEL_84;
  if ( !sub_21E7D6C(v5, "facing") )
    if ( sub_21E7D6C(v6, "torch") && sub_21E7D6C(v6, "redstone_torch") )
      if ( !sub_21E7D6C(v6, "end_rod") )
        if ( !sub_21E7D6C(v7, "east") )
        if ( !sub_21E7D6C(v7, "west") )
          return 5;
        if ( !sub_21E7D6C(v7, "south") )
          return 2;
        if ( !sub_21E7D6C(v7, "north") )
          return 3;
        if ( !sub_21E7D6C(v7, "down") )
          return 0;
        v26 = "up";
        goto LABEL_186;
      if ( !sub_21E7D6C(v6, "trapdoor") || !sub_21E7D6C(v6, "iron_trapdoor") )
          return 1;
        v47 = "north";
        goto LABEL_175;
      if ( sub_21E7D6C(v6, "iron_door") )
        if ( sub_21E7D6C(v6, "pumpkin") && sub_21E7D6C(v6, "dark_oak_fence_gate") && sub_21E7D6C(v6, "anvil") )
          if ( sub_21E7D6C(v6, "wall_banner") )
            v25 = sub_21E76A0((int *)v6, "stairs", 0, 6u);
            if ( !sub_21E7D6C(v7, "east") )
              result = 5;
              if ( v25 != -1 )
                result = 0;
              return result;
            if ( !sub_21E7D6C(v7, "west") )
              result = 4;
                result = 1;
            if ( !sub_21E7D6C(v7, "south") )
              result = 3;
                result = 2;
            if ( !sub_21E7D6C(v7, "north") )
              result = 2;
                result = 3;
            if ( v25 != -1 || !sub_21E7D6C(v7, "down") )
              return 0;
            v26 = "up";
LABEL_186:
            if ( sub_21E7D6C(v7, v26) )
            return 1;
          if ( !sub_21E7D6C(v7, "east") )
          if ( !sub_21E7D6C(v7, "west") )
            return 4;
          if ( !sub_21E7D6C(v7, "north") )
            return 2;
          v47 = "south";
LABEL_175:
          if ( sub_21E7D6C(v7, v47) )
            return 0;
        v24 = "north";
        v52 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 11);
        v56 = a5;
        if ( j_BlockState::getBool(v52, &v56) )
LABEL_84:
      if ( sub_21E7D6C(v7, v24) )
    if ( !sub_21E7D6C(v7, "east") )
    if ( !sub_21E7D6C(v7, "west") )
    if ( !sub_21E7D6C(v7, "south") )
    if ( !sub_21E7D6C(v7, "north") )
    v11 = "up";
LABEL_129:
    if ( sub_21E7D6C(v7, v11) )
    return 5;
  if ( !sub_21E7D6C(v5, "hinge") && !sub_21E7D6C(v7, "right") )
    v37 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 11);
    v55 = a5;
    if ( j_BlockState::getBool(v37, &v55) != 1 )
    v38 = 10;
    v39 = Block::mIronDoor;
    goto LABEL_168;
  if ( !sub_21E7D6C(v5, "open") && !sub_21E7D6C(v7, "true") )
      v30 = 26;
      v31 = Block::mDarkOakFenceGate;
      goto LABEL_194;
    v42 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 11);
    v54 = a5;
    if ( j_BlockState::getBool(v42, &v54) )
    v38 = 26;
LABEL_168:
    v43 = (BlockState *)j_Block::getBlockState(v39, v38);
    return j_BlockState::getMask(v43);
  if ( !sub_21E7D6C(v5, "shape") )
    if ( !sub_21E7D6C(v7, "north_south") )
    if ( sub_21E7D6C(v7, "east_west") )
      if ( sub_21E7D6C(v7, "ascending_east") )
        if ( sub_21E7D6C(v7, "ascending_west") )
          if ( sub_21E7D6C(v7, "ascending_north") )
            if ( sub_21E7D6C(v7, "ascending_south") )
              if ( sub_21E7D6C(v7, "south_east") )
                if ( sub_21E7D6C(v7, "south_west") )
                  if ( sub_21E7D6C(v7, "north_west") )
                    if ( sub_21E7D6C(v7, "north_east") )
                      return 0;
  if ( !sub_21E7D6C(v5, "in_wall") && !sub_21E7D6C(v7, "true") )
    v30 = 20;
    v31 = Block::mDarkOakFenceGate;
    goto LABEL_194;
  if ( sub_21E7D6C(v6, "vine") )
    if ( sub_21E7D6C(v5, "damage") )
      if ( !sub_21E7D6C(v5, "type") && !sub_21E7D6C(v6, "sapling") && !sub_21E7D6C(v7, "dark_oak") )
        v8 = (BlockState *)j_Block::getBlockState(Block::mSapling, 24);
        v9 = *(_QWORD *)v8;
        j_BlockState::getMask(v8);
        return (unsigned __int8)(5 << (v9 + 1 - BYTE4(v9)));
    else if ( !sub_21E7D6C(v6, "anvil") )
      v53 = 0;
      j_Util::toInt((unsigned int *)v7, &v53, 0, 4);
      v44 = (BlockState *)j_Block::getBlockState(Block::mAnvil, 8);
      v45 = *(_QWORD *)v44;
      v46 = v53;
      j_BlockState::getMask(v44);
      return (unsigned __int8)(v46 << (v45 + 1 - BYTE4(v45)));
  if ( sub_21E7D6C(v5, "south") || sub_21E7D6C(v7, "true") )
    if ( sub_21E7D6C(v5, "north") || sub_21E7D6C(v7, "true") )
      if ( sub_21E7D6C(v5, "east") || sub_21E7D6C(v7, "true") )
        if ( sub_21E7D6C(v5, "west") || sub_21E7D6C(v7, "true") )
          if ( sub_21E7D6C(v5, "up") || sub_21E7D6C(v7, "true") )
          v36 = &VineBlock::VINE_ALL;
          v36 = VineBlock::VINE_WEST;
        v36 = VineBlock::VINE_EAST;
      v36 = VineBlock::VINE_NORTH;
  else
    v36 = VineBlock::VINE_SOUTH;
  return **v36;
}


int __fastcall StructureTemplate::calculateConnectedPosition(StructureTemplate *this, const StructureSettings *a2, const BlockPos *a3, const StructureSettings *_R3, const BlockPos *a5, int a6)
{
  StructureSettings *v10; // r6@1
  StructureTemplate *v11; // r4@1
  int v13; // r7@1
  int v14; // r1@1
  float v18; // r3@9
  int v21; // r7@13
  int v22; // r1@13
  float v25; // r3@21
  int result; // r0@25
  int v28; // r1@25
  int v29; // r2@25
  int v30; // [sp+0h] [bp-48h]@25
  int v31; // [sp+4h] [bp-44h]@25
  int v32; // [sp+8h] [bp-40h]@25
  char v33; // [sp+Ch] [bp-3Ch]@13
  int v34; // [sp+10h] [bp-38h]@25
  int v35; // [sp+14h] [bp-34h]@25

  __asm { VLDR            S4, [R3,#8] }
  v10 = a3;
  __asm { VLDR            S0, [R3] }
  v11 = this;
  __asm
  {
    VLDR            S2, [R3,#4]
    VCVT.F32.S32    S18, S4
    VCVT.F32.S32    S20, S0
    VCVT.F32.S32    S16, S2
    VMOV            R5, S18
  }
  v13 = *(_DWORD *)j_StructureSettings::getMirror(a3);
  v14 = *(_WORD *)j_StructureSettings::getRotation(v10);
  __asm { VMOV            R0, S20 }
  if ( v13 == 2 )
    LODWORD(_R0) ^= 0x80000000;
  else if ( v13 == 1 )
    __asm { VMOVEQ          R2, S18 }
    LODWORD(_R5) = _R2 ^ 0x80000000;
  _R7 = a6;
  switch ( v14 )
    case 3:
      LODWORD(v18) = LODWORD(_R0) ^ 0x80000000;
      break;
    case 2:
      LODWORD(v18) = LODWORD(_R5) ^ 0x80000000;
      LODWORD(_R5) = LODWORD(_R0) ^ 0x80000000;
    case 1:
      LODWORD(_R5) ^= 0x80000000;
      v18 = _R0;
    default:
      v18 = _R5;
      _R5 = _R0;
  __asm { VMOV            R2, S16 }
  j_BlockPos::BlockPos((BlockPos *)&v33, _R5, _R2, v18);
    VLDR            S4, [R7,#8]
    VLDR            S0, [R7]
    VLDR            S2, [R7,#4]
  v21 = *(_DWORD *)j_StructureSettings::getMirror(a5);
  v22 = *(_WORD *)j_StructureSettings::getRotation(a5);
  if ( v21 == 2 )
  else if ( v21 == 1 )
  switch ( v22 )
      LODWORD(v25) = LODWORD(_R0) ^ 0x80000000;
      LODWORD(v25) = LODWORD(_R5) ^ 0x80000000;
      v25 = _R0;
      v25 = _R5;
  j_BlockPos::BlockPos((BlockPos *)&v30, _R5, _R2, v25);
  result = *(_DWORD *)&v33 - v30;
  v28 = v34 - v31;
  v29 = v35 - v32;
  *(_DWORD *)v11 = *(_DWORD *)&v33 - v30;
  *((_DWORD *)v11 + 1) = v28;
  *((_DWORD *)v11 + 2) = v29;
  return result;
}
