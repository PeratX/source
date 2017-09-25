

const ChunkPos *__fastcall CommandAreaFactory::findArea(CommandAreaFactory *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  int *v4; // r8@1
  ChunkSource ***v5; // r5@1
  int v7; // [sp+0h] [bp-8h]@1
  int v8; // [sp+8h] [bp+0h]@1
  int v9; // [sp+10h] [bp+8h]@1
  int v10; // [sp+14h] [bp+Ch]@1
  int v11; // [sp+18h] [bp+10h]@1
  int v12; // [sp+1Ch] [bp+14h]@1
  int v13; // [sp+20h] [bp+18h]@1
  int v14; // [sp+24h] [bp+1Ch]@1
  int v15; // [sp+28h] [bp+20h]@1
  signed int v16; // [sp+2Ch] [bp+24h]@1
  int v17; // [sp+30h] [bp+28h]@1
  int v18; // [sp+34h] [bp+2Ch]@1
  int v19; // [sp+38h] [bp+30h]@1
  int v20; // [sp+3Ch] [bp+34h]@1
  int v21; // [sp+40h] [bp+38h]@1
  int v22; // [sp+48h] [bp+40h]@1
  char v23; // [sp+4Ch] [bp+44h]@1
  int v24; // [sp+54h] [bp+4Ch]@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = (ChunkSource ***)this;
  j_ChunkPos::ChunkPos((ChunkPos *)&v8, a3);
  j_ChunkPos::ChunkPos((ChunkPos *)&v7, v3);
  j_BlockPos::BlockPos((int)&v23, (__int64 *)&v8, 0);
  j_BlockPos::BlockPos((int)&v21, (__int64 *)&v7, 0);
  v20 = 16;
  v9 = *(_DWORD *)&v23 >> 4;
  v10 = 0;
  v11 = v24 >> 4;
  v12 = v21 >> 4;
  v13 = 0;
  v14 = v22 >> 4;
  v15 = (v21 >> 4) - (*(_DWORD *)&v23 >> 4) + 1;
  v16 = 1;
  v17 = (v22 >> 4) - (v24 >> 4) + 1;
  v18 = v17 * v15;
  v19 = v17 * v15;
  return j_CommandAreaFactory::_getArea(v5, v4, (int)&v9);
}


const ChunkPos *__fastcall CommandAreaFactory::_getArea(ChunkSource ***a1, int *a2, int a3)
{
  int *v3; // r9@1
  int v4; // r5@1
  int v5; // r4@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r4@1
  bool v9; // zf@3
  const ChunkPos *v10; // r6@6
  ChunkSource **v11; // r5@8
  const ChunkPos *result; // r0@8
  TickingAreaListBase *v13; // r0@9
  __int64 v14; // r6@9
  int v15; // r0@12
  int v16; // r4@12
  int v17; // r0@12
  int v18; // r2@12
  signed int v19; // r1@12
  bool v20; // nf@12
  unsigned __int8 v21; // vf@12
  int v22; // r3@15
  int v23; // r8@16
  int v24; // r2@16
  int v25; // lr@17
  int v26; // r12@18
  int v27; // r2@18
  int v28; // r0@19
  int v29; // r1@22
  bool v30; // zf@23
  bool v31; // nf@23
  unsigned __int8 v32; // vf@23
  ChunkSource *v33; // r4@29
  const ChunkPos *v34; // r7@29
  Level *v35; // r0@31
  __int64 v36; // r0@31
  int v37; // r10@31
  int v38; // r11@31
  int v39; // r8@31
  int v40; // r0@32
  bool v41; // cf@36
  unsigned __int64 v42; // r0@36
  signed int v43; // r6@41
  int v44; // r4@42
  _DWORD *v45; // r0@42
  int v46; // r4@42
  int v47; // r9@47
  unsigned int *v48; // r1@48
  unsigned int v49; // r0@50
  unsigned int *v50; // r4@54
  unsigned int v51; // r0@56
  int v52; // r0@63
  ChunkSource **v53; // r5@65
  ChunkSource **v54; // r5@71
  const ChunkPos *v55; // r0@71
  int *v56; // [sp+4h] [bp-ACh]@31
  unsigned int v57; // [sp+8h] [bp-A8h]@31
  unsigned int v58; // [sp+Ch] [bp-A4h]@31
  ChunkSource ***v59; // [sp+10h] [bp-A0h]@1
  _DWORD *v60; // [sp+18h] [bp-98h]@42
  void (*v61)(void); // [sp+20h] [bp-90h]@42
  int (__fastcall *v62)(int **, int); // [sp+24h] [bp-8Ch]@42
  LevelChunk *v63; // [sp+28h] [bp-88h]@35
  int v64; // [sp+2Ch] [bp-84h]@47
  int v65; // [sp+30h] [bp-80h]@35
  int v66; // [sp+34h] [bp-7Ch]@35
  char v67; // [sp+3Ch] [bp-74h]@29
  void (*v68)(void); // [sp+44h] [bp-6Ch]@29
  char v69; // [sp+4Ch] [bp-64h]@69
  void (*v70)(void); // [sp+54h] [bp-5Ch]@69
  const ChunkPos *v71; // [sp+5Ch] [bp-54h]@69
  char v72; // [sp+60h] [bp-50h]@6
  void (*v73)(void); // [sp+68h] [bp-48h]@6
  _DWORD *v74; // [sp+70h] [bp-40h]@1
  __int64 v75; // [sp+78h] [bp-38h]@1
  const ChunkPos *v76; // [sp+80h] [bp-30h]@8
  const ChunkPos *v77; // [sp+84h] [bp-2Ch]@65
  const ChunkPos *v78; // [sp+88h] [bp-28h]@71

  v3 = a2;
  v59 = a1;
  v4 = a3;
  v5 = *a2;
  v6 = j_operator new(4u);
  LODWORD(v7) = sub_19AB1F2;
  *v6 = v4;
  HIDWORD(v7) = sub_19AB160;
  v74 = v6;
  v75 = v7;
  v8 = j_Dimension::findPlayer(v5, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v9 = v8 == 0;
  if ( v8 )
  {
    v8 = *(_DWORD *)(v8 + 4624);
    v9 = v8 == 0;
  }
  if ( !v9 )
    v10 = (const ChunkPos *)j_operator new(0xA0u);
    j_ChunkViewSource::ChunkViewSource((int)v10, (ChunkSource *)v8, 0);
    v73 = 0;
    j_ChunkViewSource::move((int)v10, v4, 0, (int)&v72);
    if ( v73 )
      v73();
    v11 = (ChunkSource **)j_operator new(0x78u);
    v76 = v10;
    j_CommandArea::CommandArea(v11, &v76);
    *v59 = v11;
    result = v76;
    goto LABEL_66;
  v13 = (TickingAreaListBase *)j_Dimension::getTickingAreas((Dimension *)*v3);
  v14 = *(_QWORD *)j_TickingAreaListBase::getAreas(v13);
  if ( (_DWORD)v14 == HIDWORD(v14) )
LABEL_29:
    v33 = (ChunkSource *)j_Dimension::getChunkSource((Dimension *)*v3);
    v34 = (const ChunkPos *)j_operator new(0xA0u);
    j_ChunkViewSource::ChunkViewSource((int)v34, v33, 0);
    v68 = 0;
    j_ChunkViewSource::move((int)v34, v4, 0, (int)&v67);
    if ( v68 )
      v68();
    v56 = v3;
    v35 = (Level *)j_Dimension::getLevelConst((Dimension *)*v3);
    v36 = *(_QWORD *)j_Level::getCurrentTick(v35);
    v37 = 0;
    v57 = HIDWORD(v36);
    v58 = v36;
    v38 = *(_DWORD *)v4;
    v39 = *(_DWORD *)(v4 + 8);
    while ( 1 )
    {
      if ( *(_DWORD *)(v4 + 40) == v37 )
      {
        v53 = (ChunkSource **)j_operator new(0x78u);
        v77 = v34;
        j_CommandArea::CommandArea(v53, &v77);
        *v59 = v53;
        result = v77;
        goto LABEL_66;
      }
      v65 = v38;
      v66 = v39;
      j_ChunkSource::getAvailableChunk((ChunkSource *)&v63, v34);
      if ( !v63 )
        break;
      v42 = __PAIR__(v57, v58) - *(_QWORD *)j_LevelChunk::getLastTick(v63);
      v41 = (unsigned int)v42 >= 2;
      LODWORD(v42) = 0;
      if ( !v41 )
        LODWORD(v42) = 1;
      if ( HIDWORD(v42) )
        LODWORD(v42) = 0;
      if ( (_DWORD)v42 )
        v43 = 6;
      else
        v44 = *v56;
        v61 = 0;
        v45 = j_operator new(4u);
        *v45 = &v65;
        v60 = v45;
        v62 = sub_19AB228;
        v61 = (void (*)(void))sub_19AB2C8;
        v46 = j_Dimension::findPlayer(v44, (int)&v60);
        if ( v61 )
          v61();
        if ( !v46 )
          break;
LABEL_47:
      v47 = v64;
      if ( v64 )
        v48 = (unsigned int *)(v64 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        }
        else
          v49 = (*v48)--;
        if ( v49 == 1 )
          v50 = (unsigned int *)(v47 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          if ( &pthread_create )
          {
            __dmb();
            do
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
          }
          else
            v51 = (*v50)--;
          if ( v51 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
      if ( v43 != 6 )
        result = v34;
        goto LABEL_67;
      v52 = *(_DWORD *)(v4 + 12);
      ++v37;
      v21 = __OFSUB__(v38, v52);
      v20 = v38++ - v52 < 0;
      if ( !(v20 ^ v21) )
        v40 = *(_DWORD *)(v4 + 20);
        v38 = *(_DWORD *)v4;
        v21 = __OFSUB__(v39, v40);
        v20 = v39++ - v40 < 0;
        if ( !(v20 ^ v21) )
          v39 = *(_DWORD *)(v4 + 8);
    }
    *v59 = 0;
    v43 = 1;
    goto LABEL_47;
  while ( 1 )
    if ( *(_DWORD *)v14 && !(*(int (**)(void))(**(_DWORD **)v14 + 76))() )
      v15 = (*(int (**)(void))(**(_DWORD **)v14 + 36))();
      v16 = v15;
      v17 = (*(int (**)(void))(*(_DWORD *)v15 + 24))();
      v19 = *(_DWORD *)(v17 + 36);
      v21 = __OFSUB__(v19, 1);
      v20 = v19 - 1 < 0;
      if ( v19 >= 1 )
        v19 = *(_DWORD *)v17;
        v18 = *(_DWORD *)(v4 + 12);
        v21 = __OFSUB__(v18, *(_DWORD *)v17);
        v20 = v18 - *(_DWORD *)v17 < 0;
        v22 = *(_DWORD *)(v17 + 12);
        if ( v18 <= v22 )
          v23 = *(_DWORD *)(v17 + 4);
          v24 = *(_DWORD *)(v4 + 16);
          if ( v24 >= v23 )
            v25 = *(_DWORD *)(v17 + 16);
            if ( v24 <= v25 )
            {
              v26 = *(_DWORD *)(v17 + 8);
              v27 = *(_DWORD *)(v4 + 20);
              if ( v27 >= v26 )
              {
                v28 = *(_DWORD *)(v17 + 20);
                if ( v27 <= v28 && *(_DWORD *)v4 >= v19 && *(_DWORD *)v4 <= v22 )
                {
                  v29 = *(_DWORD *)(v4 + 4);
                  if ( v29 >= v23 )
                  {
                    v32 = __OFSUB__(v29, v25);
                    v30 = v29 == v25;
                    v31 = v29 - v25 < 0;
                    if ( v29 <= v25 )
                    {
                      v29 = *(_DWORD *)(v4 + 8);
                      v32 = __OFSUB__(v29, v28);
                      v30 = v29 == v28;
                      v31 = v29 - v28 < 0;
                    }
                    if ( (unsigned __int8)(v31 ^ v32) | v30 && v29 >= v26 )
                      break;
                  }
                }
              }
            }
    LODWORD(v14) = v14 + 8;
    if ( HIDWORD(v14) == (_DWORD)v14 )
      goto LABEL_29;
  (*(void (__fastcall **)(const ChunkPos **, int))(*(_DWORD *)v16 + 44))(&v71, v16);
  v70 = 0;
  j_ChunkViewSource::move((int)v71, v4, 0, (int)&v69);
  if ( v70 )
    v70();
  v54 = (ChunkSource **)j_operator new(0x78u);
  v55 = v71;
  v71 = 0;
  v78 = v55;
  j_CommandArea::CommandArea(v54, &v78);
  *v59 = v54;
  if ( v78 )
    (*(void (**)(void))(*(_DWORD *)v78 + 4))();
  result = v71;
LABEL_66:
  if ( result )
LABEL_67:
    result = (const ChunkPos *)(*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


const ChunkPos *__fastcall CommandAreaFactory::findArea(CommandAreaFactory *this, const BlockPos *a2, const BlockPos *a3, const BlockPos *a4)
{
  int *v4; // r8@1
  ChunkSource ***v5; // r5@1
  const BlockPos *v6; // r6@1
  int v8; // [sp+0h] [bp-8h]@1
  int v9; // [sp+8h] [bp+0h]@1
  int v10; // [sp+10h] [bp+8h]@1
  int v11; // [sp+14h] [bp+Ch]@1
  int v12; // [sp+18h] [bp+10h]@1
  int v13; // [sp+1Ch] [bp+14h]@1
  int v14; // [sp+20h] [bp+18h]@1
  int v15; // [sp+24h] [bp+1Ch]@1
  int v16; // [sp+28h] [bp+20h]@1
  signed int v17; // [sp+2Ch] [bp+24h]@1
  int v18; // [sp+30h] [bp+28h]@1
  int v19; // [sp+34h] [bp+2Ch]@1
  int v20; // [sp+38h] [bp+30h]@1
  int v21; // [sp+3Ch] [bp+34h]@1
  int v22; // [sp+40h] [bp+38h]@1
  int v23; // [sp+48h] [bp+40h]@1
  char v24; // [sp+4Ch] [bp+44h]@1
  int v25; // [sp+54h] [bp+4Ch]@1

  v4 = (int *)a2;
  v5 = (ChunkSource ***)this;
  v6 = a4;
  j_ChunkPos::ChunkPos((ChunkPos *)&v9, a3);
  j_ChunkPos::ChunkPos((ChunkPos *)&v8, v6);
  j_BlockPos::BlockPos((int)&v24, (__int64 *)&v9, 0);
  j_BlockPos::BlockPos((int)&v22, (__int64 *)&v8, 0);
  v21 = 16;
  v10 = *(_DWORD *)&v24 >> 4;
  v11 = 0;
  v12 = v25 >> 4;
  v13 = v22 >> 4;
  v14 = 0;
  v15 = v23 >> 4;
  v16 = (v22 >> 4) - (*(_DWORD *)&v24 >> 4) + 1;
  v17 = 1;
  v18 = (v23 >> 4) - (v25 >> 4) + 1;
  v19 = v18 * v16;
  v20 = v18 * v16;
  return j_CommandAreaFactory::_getArea(v5, v4, (int)&v10);
}


_DWORD *__fastcall CommandAreaFactory::CommandAreaFactory(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
