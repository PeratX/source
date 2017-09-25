

signed int __fastcall BlockTickingQueue::tickPendingTicks(int a1, BlockPos *a2, __int64 *a3, int a4, char a5)
{
  int v5; // r4@1
  int v6; // r11@1
  __int64 v7; // r0@1
  __int64 v8; // kr00_8@1
  int *v9; // r8@5
  int v10; // r5@5
  int *v11; // r9@5
  int v12; // r6@6
  __int64 v13; // kr08_8@6
  unsigned __int8 v14; // t1@8
  int v15; // r6@8
  int v16; // lr@8
  int *v17; // r11@8
  int v18; // ST1C_4@8
  int v19; // ST18_4@8
  int v20; // ST14_4@8
  int v21; // r5@8
  unsigned __int64 v22; // kr10_8@8
  char v23; // r8@8
  __int64 v24; // kr18_8@10
  signed int v25; // r3@10
  signed int v26; // r2@12
  unsigned __int8 v27; // t1@18
  int v28; // r12@18
  int *v29; // lr@18
  int v30; // r8@18
  int v31; // r5@18
  int v32; // ST1C_4@18
  int v33; // ST18_4@18
  __int64 v34; // r9@18
  char v35; // r6@18
  __int64 v36; // r0@19
  int v37; // r1@20
  int v38; // r0@27
  __int64 v39; // kr30_8@28
  int v40; // r1@33
  int v41; // r1@34
  unsigned __int8 v42; // t1@34
  int *v43; // r7@34
  int v44; // r6@34
  int v45; // r9@34
  int v46; // lr@34
  unsigned int v47; // r4@34
  unsigned int v48; // r12@34
  int v49; // r5@34
  char v50; // r8@34
  int v51; // r1@36
  signed int v52; // r5@37
  __int64 *v54; // [sp+Ch] [bp-B4h]@1
  signed int v55; // [sp+Ch] [bp-B4h]@25
  int v56; // [sp+20h] [bp-A0h]@1
  unsigned __int64 *v57; // [sp+24h] [bp-9Ch]@5
  const BlockPos *v58; // [sp+28h] [bp-98h]@1
  unsigned __int8 v59; // [sp+2Ch] [bp-94h]@32
  int v60; // [sp+30h] [bp-90h]@28
  int v61; // [sp+34h] [bp-8Ch]@28
  int v62; // [sp+38h] [bp-88h]@28
  int v63; // [sp+3Ch] [bp-84h]@28
  int v64; // [sp+40h] [bp-80h]@28
  int v65; // [sp+44h] [bp-7Ch]@28
  unsigned __int8 v66; // [sp+48h] [bp-78h]@6
  int v67; // [sp+50h] [bp-70h]@6
  int v68; // [sp+54h] [bp-6Ch]@6
  int v69; // [sp+58h] [bp-68h]@6
  unsigned __int8 v70; // [sp+5Ch] [bp-64h]@6
  int v71; // [sp+60h] [bp-60h]@5
  int v72; // [sp+64h] [bp-5Ch]@28
  int v73; // [sp+68h] [bp-58h]@6
  unsigned __int8 v74; // [sp+70h] [bp-50h]@8
  int v75; // [sp+78h] [bp-48h]@8
  int v76; // [sp+7Ch] [bp-44h]@8
  int v77; // [sp+80h] [bp-40h]@8
  char v78; // [sp+84h] [bp-3Ch]@8
  int v79; // [sp+88h] [bp-38h]@8
  unsigned __int64 v80; // [sp+8Ch] [bp-34h]@8

  v5 = a1;
  *(_BYTE *)(a1 + 40) = a5;
  v6 = a4;
  v54 = a3;
  v58 = a2;
  v56 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *a3;
  *(_DWORD *)(v56 + 8) = *a3;
  *(_DWORD *)(v5 + 12) = HIDWORD(v8);
  if ( -858993459 * ((HIDWORD(v7) - (signed int)v7) >> 3) < a4 )
    v6 = -858993459 * ((HIDWORD(v7) - (signed int)v7) >> 3);
  if ( v6 >= 1 && (_DWORD)v7 != HIDWORD(v7) )
  {
    v9 = (int *)(v5 + 32);
    v57 = (unsigned __int64 *)(v5 + 28);
    v10 = 0;
    v11 = &v71;
    while ( 1 )
    {
      v66 = *(_BYTE *)v7;
      v12 = v66;
      v67 = *(_DWORD *)(v7 + 8);
      v68 = *(_DWORD *)(v7 + 12);
      v69 = *(_DWORD *)(v7 + 16);
      v70 = *(_BYTE *)(v7 + 20);
      v13 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)v11 = *(_QWORD *)(v7 + 24);
      v73 = *(_DWORD *)(v7 + 32);
      if ( v12 )
      {
        if ( HIDWORD(v7) - (signed int)v7 >= 41 )
        {
          v14 = *(_BYTE *)(HIDWORD(v7) - 40);
          HIDWORD(v7) -= 40;
          v15 = v10;
          v16 = v6;
          v17 = v9;
          v18 = *(_DWORD *)(HIDWORD(v7) + 12);
          v19 = *(_DWORD *)(HIDWORD(v7) + 16);
          v20 = *(_DWORD *)(HIDWORD(v7) + 24);
          v21 = *(_DWORD *)(HIDWORD(v7) + 8);
          v22 = *(_QWORD *)(HIDWORD(v7) + 28);
          v23 = *(_BYTE *)(HIDWORD(v7) + 20);
          *(_BYTE *)HIDWORD(v7) = *(_BYTE *)v7;
          *(_QWORD *)(HIDWORD(v7) + 8) = *(_QWORD *)(v7 + 8);
          *(_DWORD *)(HIDWORD(v7) + 16) = *(_DWORD *)(v7 + 16);
          *(_BYTE *)(HIDWORD(v7) + 20) = *(_BYTE *)(v7 + 20);
          *(_QWORD *)(HIDWORD(v7) + 24) = *(_QWORD *)(v7 + 24);
          *(_DWORD *)(HIDWORD(v7) + 32) = *(_DWORD *)(v7 + 32);
          v74 = v14;
          v75 = v21;
          v76 = v18;
          v10 = v15;
          v77 = v19;
          v78 = v23;
          v9 = v17;
          v6 = v16;
          v79 = v20;
          v80 = v22;
          std::__adjust_heap<__gnu_cxx::__normal_iterator<BlockTickingQueue::BlockTick *,std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>>,int,BlockTickingQueue::BlockTick,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<BlockTickingQueue::BlockTick>>>(
            v7,
            0,
            -858993459 * ((HIDWORD(v7) - (signed int)v7) >> 3),
            (int)&v74);
          HIDWORD(v7) = *(_DWORD *)(v5 + 20);
        }
        HIDWORD(v7) -= 40;
        *(_DWORD *)(v5 + 20) = HIDWORD(v7);
      }
      else
        v24 = *v54;
        v25 = 0;
        if ( (unsigned int)v13 > (unsigned int)*v54 )
          v25 = 1;
        v26 = 0;
        if ( HIDWORD(v13) > HIDWORD(v24) )
          v26 = 1;
        if ( HIDWORD(v13) == HIDWORD(v24) )
          v26 = v25;
        if ( v26 )
LABEL_25:
          v55 = v10;
          goto LABEL_27;
          v27 = *(_BYTE *)(HIDWORD(v7) - 40);
          v28 = v10;
          v29 = v11;
          v30 = *(_QWORD *)(HIDWORD(v7) + 12);
          v31 = *(_DWORD *)(HIDWORD(v7) + 8);
          v32 = *(_QWORD *)(HIDWORD(v7) + 12) >> 32;
          v33 = *(_DWORD *)(HIDWORD(v7) + 24);
          v34 = *(_QWORD *)(HIDWORD(v7) + 28);
          v35 = *(_BYTE *)(HIDWORD(v7) + 20);
          v74 = v27;
          v75 = v31;
          v76 = v30;
          v10 = v28;
          v77 = v32;
          v78 = v35;
          v79 = v33;
          v80 = __PAIR__(HIDWORD(v34), (unsigned int)v34);
          v9 = (int *)(v5 + 32);
          v11 = v29;
        *(_DWORD *)(v5 + 20) = HIDWORD(v7) - 40;
        v36 = *(_QWORD *)(v5 + 32);
        ++v10;
        if ( (_DWORD)v36 == HIDWORD(v36) )
          std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>::_M_emplace_back_aux<BlockTickingQueue::BlockTick&>(
            v57,
            (int)&v66);
          v37 = *v9;
        else
          *(_BYTE *)v36 = v66;
          *(_DWORD *)(v36 + 8) = v67;
          *(_DWORD *)(v36 + 12) = v68;
          *(_DWORD *)(v36 + 16) = v69;
          *(_BYTE *)(v36 + 20) = v70;
          *(_QWORD *)(v36 + 24) = *(_QWORD *)v11;
          *(_DWORD *)(v36 + 32) = v73;
          HIDWORD(v36) = v36 + 40;
          *v9 = v36 + 40;
        std::push_heap<__gnu_cxx::__normal_iterator<BlockTickingQueue::BlockTick *,std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>>,std::greater<BlockTickingQueue::BlockTick>>(
          *(_DWORD *)(v5 + 28),
          v37);
        HIDWORD(v7) = *(_DWORD *)(v5 + 20);
      if ( v10 < v6 )
        LODWORD(v7) = *(_DWORD *)(v5 + 16);
        if ( (_DWORD)v7 != HIDWORD(v7) )
          continue;
      goto LABEL_25;
    }
  }
  v57 = (unsigned __int64 *)(v5 + 28);
  v9 = (int *)(v5 + 32);
  v55 = 0;
LABEL_27:
  v38 = *(_DWORD *)(v5 + 28);
  if ( v38 != *v9 )
    do
      v66 = *(_BYTE *)v38;
      v67 = *(_DWORD *)(v38 + 8);
      v68 = *(_DWORD *)(v38 + 12);
      v69 = *(_DWORD *)(v38 + 16);
      v70 = *(_BYTE *)(v38 + 20);
      v39 = *(_QWORD *)(v38 + 24);
      v71 = *(_QWORD *)(v38 + 24);
      v72 = HIDWORD(v39);
      v73 = *(_DWORD *)(v38 + 32);
      v63 = v67 - 8;
      v64 = v68 - 8;
      v65 = v69 - 8;
      v60 = v67 + 8;
      v61 = v68 + 8;
      v62 = v69 + 8;
      if ( BlockSource::hasChunksAt(v58, (const BlockPos *)&v63, (const BlockPos *)&v60) == 1 )
        BlockSource::getBlockID((BlockSource *)&v74, v58, (int)&v67);
        if ( v74 && v74 == v70 )
          ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
          (*(void (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v74] + 8))(Block::mBlocks[v74]);
        v59 = v70;
        BlockTickingQueue::add((LevelChunk **)v5, v58, (int)&v67, (char *)&v59, 0, v73);
      v40 = *v9;
      v38 = *(_DWORD *)v57;
      if ( *v9 - *(_DWORD *)v57 < 41 )
        v5 = v56;
        v42 = *(_BYTE *)(v40 - 40);
        v41 = v40 - 40;
        v43 = v9;
        v44 = *(_DWORD *)(v41 + 8);
        v45 = *(_DWORD *)(v41 + 12);
        v46 = *(_DWORD *)(v41 + 16);
        v47 = *(_QWORD *)(v41 + 24) >> 32;
        v48 = *(_QWORD *)(v41 + 24);
        v49 = *(_DWORD *)(v41 + 32);
        v50 = *(_BYTE *)(v41 + 20);
        *(_BYTE *)v41 = *(_BYTE *)v38;
        *(_DWORD *)(v41 + 8) = *(_DWORD *)(v38 + 8);
        *(_DWORD *)(v41 + 12) = *(_DWORD *)(v38 + 12);
        *(_DWORD *)(v41 + 16) = *(_DWORD *)(v38 + 16);
        *(_BYTE *)(v41 + 20) = *(_BYTE *)(v38 + 20);
        *(_QWORD *)(v41 + 24) = *(_QWORD *)(v38 + 24);
        *(_DWORD *)(v41 + 32) = *(_DWORD *)(v38 + 32);
        v74 = v42;
        v75 = v44;
        v76 = v45;
        v77 = v46;
        v78 = v50;
        v9 = v43;
        *(_QWORD *)&v79 = __PAIR__(v47, v48);
        HIDWORD(v80) = v49;
        std::__adjust_heap<__gnu_cxx::__normal_iterator<BlockTickingQueue::BlockTick *,std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>>,int,BlockTickingQueue::BlockTick,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<BlockTickingQueue::BlockTick>>>(
          v38,
          0,
          -858993459 * ((v41 - v38) >> 3),
          (int)&v74);
        v40 = *v43;
        v38 = *(_DWORD *)(v56 + 28);
      v51 = v40 - 40;
      *v9 = v51;
    while ( v38 != v51 );
  v52 = 0;
  *(_BYTE *)(v5 + 40) = 0;
  if ( v55 >= 1 && *(_DWORD *)v5 )
    LevelChunk::_onTickingQueueChanged(*(LevelChunk **)v5);
  if ( v55 > 0 )
    v52 = 1;
  return v52;
}


signed int __fastcall BlockTickingQueue::hasTickNextTick(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  __int64 v4; // kr08_8@1
  int v5; // lr@1
  int v6; // r1@1
  int v7; // r5@2
  int v8; // r1@4
  bool v9; // zf@4
  int v10; // r1@8
  int v11; // r6@10
  bool v12; // zf@10
  int v13; // r6@16
  bool v14; // zf@16
  int v15; // r6@22
  bool v16; // zf@22
  int v17; // r1@28
  int v18; // r1@32
  bool v19; // zf@32
  int v20; // r3@40
  bool v21; // zf@40
  int v22; // r3@48
  bool v23; // zf@48
  signed int result; // r0@52

  v3 = *(_QWORD *)(a1 + 16) >> 32;
  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = -858993459 * ((v3 - v2) >> 3) >> 2;
  if ( v6 < 1 )
  {
LABEL_28:
    v17 = -858993459 * ((v3 - v2) >> 3);
    if ( v17 == 1 )
    {
      v10 = v2;
    }
    else
      if ( v17 == 2 )
      {
        v10 = v2;
      }
      else
        if ( v17 != 3 )
          goto LABEL_51;
        if ( !*(_BYTE *)v2 )
        {
          v18 = *(_DWORD *)(v2 + 8);
          v19 = v18 == (_DWORD)v4;
          if ( v18 == (_DWORD)v4 )
            v19 = *(_DWORD *)(v2 + 12) == HIDWORD(v4);
          if ( v19 )
          {
            v10 = v2;
            if ( *(_DWORD *)(v2 + 16) == v5 )
              goto LABEL_52;
          }
        }
        v10 = v2 + 40;
      if ( !*(_BYTE *)v10 )
        v20 = *(_DWORD *)(v10 + 8);
        v21 = v20 == (_DWORD)v4;
        if ( v20 == (_DWORD)v4 )
          v21 = *(_DWORD *)(v10 + 12) == HIDWORD(v4);
        if ( v21 && *(_DWORD *)(v10 + 16) == v5 )
          goto LABEL_52;
      v10 += 40;
    if ( !*(_BYTE *)v10 )
      v22 = *(_DWORD *)(v10 + 8);
      v23 = v22 == (_DWORD)v4;
      if ( v22 == (_DWORD)v4 )
        v23 = *(_DWORD *)(v10 + 12) == HIDWORD(v4);
      if ( v23 )
        if ( *(_DWORD *)(v10 + 16) != v5 )
          v10 = *(_QWORD *)(a1 + 16) >> 32;
        goto LABEL_52;
LABEL_51:
    v10 = *(_QWORD *)(a1 + 16) >> 32;
    goto LABEL_52;
  }
  v7 = v6 + 1;
  while ( 1 )
    if ( !*(_BYTE *)v2 )
      v8 = *(_DWORD *)(v2 + 8);
      v9 = v8 == (_DWORD)v4;
      if ( v8 == (_DWORD)v4 )
        v9 = *(_DWORD *)(v2 + 12) == HIDWORD(v4);
      if ( v9 )
        if ( *(_DWORD *)(v2 + 16) == v5 )
          break;
    v10 = v2 + 40;
    if ( !*(_BYTE *)(v2 + 40) )
      v11 = *(_DWORD *)(v2 + 48);
      v12 = v11 == (_DWORD)v4;
      if ( v11 == (_DWORD)v4 )
        v12 = *(_DWORD *)(v2 + 52) == HIDWORD(v4);
      if ( v12 && *(_DWORD *)(v2 + 56) == v5 )
        break;
    v10 = v2 + 80;
    if ( !*(_BYTE *)(v2 + 80) )
      v13 = *(_DWORD *)(v2 + 88);
      v14 = v13 == (_DWORD)v4;
      if ( v13 == (_DWORD)v4 )
        v14 = *(_DWORD *)(v2 + 92) == HIDWORD(v4);
      if ( v14 && *(_DWORD *)(v2 + 96) == v5 )
    v10 = v2 + 120;
    if ( !*(_BYTE *)(v2 + 120) )
      v15 = *(_DWORD *)(v2 + 128);
      v16 = v15 == (_DWORD)v4;
      if ( v15 == (_DWORD)v4 )
        v16 = *(_DWORD *)(v2 + 132) == HIDWORD(v4);
      if ( v16 && *(_DWORD *)(v2 + 136) == v5 )
    --v7;
    v2 += 160;
    if ( v7 <= 1 )
      goto LABEL_28;
LABEL_52:
  result = 0;
  if ( v10 != v3 )
    result = 1;
  return result;
}


__int64 __fastcall BlockTickingQueue::tickAllPendingTicks(BlockTickingQueue *this, BlockSource *a2)
{
  BlockTickingQueue *v2; // r5@1
  BlockSource *v3; // r4@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  for ( result = *((_QWORD *)this + 2); HIDWORD(result) != (_DWORD)result; result = *((_QWORD *)v2 + 2) )
    BlockTickingQueue::tickPendingTicks((int)v2, v3, (__int64 *)&Tick::MAX, 0x7FFFFFFF, 1);
  return result;
}


_BYTE *__fastcall BlockTickingQueue::BlockTick::BlockTick(_BYTE *a1, int a2, char *a3, _QWORD *a4, int a5)
{
  _BYTE *v5; // r4@1
  char v7; // [sp+4h] [bp-Ch]@1

  v5 = a1;
  *a1 = 0;
  v7 = *a3;
  TickNextTickData::TickNextTickData((int)(a1 + 8), a2, &v7, a4, a5);
  return v5;
}


void __fastcall BlockTickingQueue::save(BlockTickingQueue *this, CompoundTag *a2)
{
  BlockTickingQueue *v2; // r6@1
  CompoundTag *v3; // r4@1
  void *v4; // r0@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r0@1
  void *v8; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  v5 = (int)v4;
  v6 = ListTag::ListTag((int)v4);
  BlockTickingQueue::_saveQueue(v6, v5, (unsigned __int64 *)v2 + 2);
  BlockTickingQueue::_saveQueue(v7, v5, (unsigned __int64 *)((char *)v2 + 28));
  sub_21E94B4((void **)&v12, "tickList");
  v11 = v5;
  CompoundTag::put((int)v3, (const void **)&v12, &v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
}


signed int __fastcall BlockTickingQueue::isEmpty(BlockTickingQueue *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall BlockTickingQueue::_saveQueue(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r2@1
  int v4; // r10@1
  unsigned __int64 v5; // kr00_8@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  void *v16; // r8@44
  void *v17; // r0@44
  void *v18; // r0@45
  void *v19; // r0@46
  void *v20; // r0@47
  void *v21; // r0@48
  int i; // [sp+Ch] [bp-5Ch]@1
  int v23; // [sp+10h] [bp-58h]@1
  void *v24; // [sp+14h] [bp-54h]@49
  int v25; // [sp+1Ch] [bp-4Ch]@19
  int v26; // [sp+24h] [bp-44h]@15
  int v27; // [sp+2Ch] [bp-3Ch]@11
  int v28; // [sp+34h] [bp-34h]@7
  int v29; // [sp+3Ch] [bp-2Ch]@3

  v23 = a2;
  v5 = *a3;
  v3 = *a3 >> 32;
  v4 = v5;
  for ( i = v3; v4 != v3; v4 += 40 )
  {
    if ( !*(_BYTE *)v4 )
    {
      v16 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v16);
      sub_21E94B4((void **)&v29, "x");
      CompoundTag::putInt((int)v16, (const void **)&v29, *(_DWORD *)(v4 + 8));
      v17 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      sub_21E94B4((void **)&v28, "y");
      CompoundTag::putInt((int)v16, (const void **)&v28, *(_DWORD *)(v4 + 12));
      v18 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v28 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      sub_21E94B4((void **)&v27, (const char *)&aRtuz[3]);
      CompoundTag::putInt((int)v16, (const void **)&v27, *(_DWORD *)(v4 + 16));
      v19 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v27 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      sub_21E94B4((void **)&v26, "tileID");
      CompoundTag::putByte((int)v16, (const void **)&v26, *(_BYTE *)(v4 + 20));
      v20 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v26 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      sub_21E94B4((void **)&v25, "time");
      CompoundTag::putInt64((int)v16, (const void **)&v25, *(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 24) >> 32);
      v21 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v25 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v24 = v16;
      ListTag::add(v23, (int *)&v24);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      v3 = i;
      v24 = 0;
    }
  }
}


int __fastcall BlockTickingQueue::remove(int result, int a2, _BYTE *a3)
{
  int v3; // r12@1
  signed int v4; // r3@1
  int v5; // r9@2
  bool v6; // r8@2
  int v7; // r3@2
  int v8; // r6@4
  int v9; // r4@4
  bool v10; // zf@6
  int v11; // r2@13
  int v12; // r4@13
  int v13; // r4@13
  bool v14; // r4@15

  v3 = *(_QWORD *)(result + 16);
  v4 = (*(_QWORD *)(result + 16) >> 32) - v3;
  if ( v4 >= 1 )
  {
    v5 = *a3;
    v6 = 0;
    v7 = -858993459 * (v4 >> 3) - 1;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a2 + 4);
      v9 = v3 + 40 * v7 + 12;
      while ( 1 )
      {
        if ( *(_DWORD *)(v9 - 4) == *(_DWORD *)a2 )
        {
          v10 = *(_DWORD *)v9 == v8;
          if ( *(_DWORD *)v9 == v8 )
            v10 = *(_DWORD *)(v9 + 4) == *(_DWORD *)(a2 + 8);
          if ( v10 && *(_BYTE *)(v9 + 8) == v5 )
            break;
        }
        --v7;
        v9 -= 40;
        if ( v7 <= -1 )
          goto LABEL_17;
      }
      v11 = 5 * v7--;
      v12 = *(_BYTE *)(v3 + 8 * v11);
      *(_BYTE *)(v3 + 8 * v11) = 1;
      v13 = v12 ^ 1;
      if ( v6 )
        v13 = 1;
      v14 = v13 != 0;
      if ( v7 < 0 )
        break;
      v3 = *(_DWORD *)(result + 16);
      v6 = v14;
    }
    v6 = v14;
LABEL_17:
    if ( v6 )
      result = *(_DWORD *)result;
      if ( result )
        result = j_j_j__ZN10LevelChunk22_onTickingQueueChangedEv((LevelChunk *)result);
  }
  return result;
}


int __fastcall BlockTickingQueue::setOwningChunk(int result, LevelChunk *a2)
{
  *(_DWORD *)result = a2;
  return result;
}


void __fastcall BlockTickingQueue::load(BlockTickingQueue *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BlockTickingQueue *v3; // r11@1
  int v4; // r0@1
  ListTag *v5; // r8@1
  void *v6; // r0@1
  void **v7; // r10@4
  void **v8; // r7@4
  int v9; // r4@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  int v22; // r8@49
  void **v23; // r6@49
  int v24; // r10@49
  int v25; // r7@49
  int v26; // r0@49
  char v27; // r0@49
  char v28; // r7@49
  __int64 v29; // r0@49
  int v30; // r1@50
  void *v31; // r0@52
  void *v32; // r0@53
  void *v33; // r0@54
  void *v34; // r0@55
  void *v35; // r0@56
  BlockTickingQueue *v36; // [sp+14h] [bp-84h]@4
  ListTag *v37; // [sp+18h] [bp-80h]@1
  int v38; // [sp+1Ch] [bp-7Ch]@49
  int v39; // [sp+24h] [bp-74h]@9
  __int64 v40; // [sp+28h] [bp-70h]@49
  int v41; // [sp+38h] [bp-60h]@13
  char v42; // [sp+3Ch] [bp-5Ch]@49
  int v43; // [sp+44h] [bp-54h]@17
  int v44; // [sp+4Ch] [bp-4Ch]@4
  int v45; // [sp+54h] [bp-44h]@4
  int v46; // [sp+58h] [bp-40h]@49
  int v47; // [sp+5Ch] [bp-3Ch]@49
  int v48; // [sp+60h] [bp-38h]@49
  int v49; // [sp+68h] [bp-30h]@1
  char v50; // [sp+70h] [bp-28h]@50

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v49, "tickList");
  v4 = CompoundTag::getList((int)v2, (const void **)&v49);
  v5 = (ListTag *)v4;
  v37 = (ListTag *)v4;
  v6 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v49 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 && ListTag::size(v5) >= 1 )
    v36 = (BlockTickingQueue *)((char *)v3 + 16);
    v7 = (void **)&v45;
    v8 = (void **)&v44;
    v9 = 0;
    do
      v38 = v9;
      v22 = ListTag::get(v5, v9);
      sub_21E94B4(v7, "x");
      v23 = v7;
      v24 = CompoundTag::getInt(v22, (const void **)v7);
      sub_21E94B4(v8, "y");
      v25 = CompoundTag::getInt(v22, (const void **)v8);
      sub_21E94B4((void **)&v43, (const char *)&aRtuz[3]);
      v26 = CompoundTag::getInt(v22, (const void **)&v43);
      v46 = v24;
      v47 = v25;
      v48 = v26;
      sub_21E94B4((void **)&v41, "tileID");
      v27 = CompoundTag::getByte(v22, (const void **)&v41);
      v28 = v27;
      v42 = v27;
      sub_21E94B4((void **)&v39, "time");
      v7 = v23;
      v40 = CompoundTag::getInt64(v22, (const void **)&v39);
      v29 = *(_QWORD *)((char *)v3 + 20);
      if ( (_DWORD)v29 == HIDWORD(v29) )
      {
        std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>::_M_emplace_back_aux<BlockPos,BlockID,Tick>(
          v36,
          (int)&v46,
          &v42,
          &v40);
        v30 = *((_DWORD *)v3 + 5);
      }
      else
        *(_BYTE *)v29 = 0;
        v50 = v28;
        TickNextTickData::TickNextTickData(v29 + 8, (int)&v46, &v50, &v40, 0);
        v30 = *((_DWORD *)v3 + 5) + 40;
        *((_DWORD *)v3 + 5) = v30;
      std::push_heap<__gnu_cxx::__normal_iterator<BlockTickingQueue::BlockTick *,std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>>,std::greater<BlockTickingQueue::BlockTick>>(
        *(_DWORD *)v36,
        v30);
      v5 = v37;
      v8 = (void **)&v44;
      v31 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v8 = (void **)&v44;
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v32 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v41 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v33 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v43 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v44 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v35 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v45 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      ++v9;
    while ( v38 + 1 < ListTag::size(v37) );
}


void __fastcall BlockTickingQueue::load(BlockTickingQueue *this, const CompoundTag *a2)
{
  BlockTickingQueue::load(this, a2);
}


signed int __fastcall BlockTickingQueue::hasTickInCurrentTick(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  __int64 v4; // kr08_8@1
  int v5; // lr@1
  int v6; // r1@1
  int v7; // r5@2
  int v8; // r1@4
  bool v9; // zf@4
  int v10; // r1@8
  int v11; // r6@10
  bool v12; // zf@10
  int v13; // r6@16
  bool v14; // zf@16
  int v15; // r6@22
  bool v16; // zf@22
  int v17; // r1@28
  int v18; // r1@32
  bool v19; // zf@32
  int v20; // r3@40
  bool v21; // zf@40
  int v22; // r3@48
  bool v23; // zf@48
  signed int result; // r0@52

  v3 = *(_QWORD *)(a1 + 28) >> 32;
  v2 = *(_QWORD *)(a1 + 28);
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = -858993459 * ((v3 - v2) >> 3) >> 2;
  if ( v6 < 1 )
  {
LABEL_28:
    v17 = -858993459 * ((v3 - v2) >> 3);
    if ( v17 == 1 )
    {
      v10 = v2;
    }
    else
      if ( v17 == 2 )
      {
        v10 = v2;
      }
      else
        if ( v17 != 3 )
          goto LABEL_51;
        if ( !*(_BYTE *)v2 )
        {
          v18 = *(_DWORD *)(v2 + 8);
          v19 = v18 == (_DWORD)v4;
          if ( v18 == (_DWORD)v4 )
            v19 = *(_DWORD *)(v2 + 12) == HIDWORD(v4);
          if ( v19 )
          {
            v10 = v2;
            if ( *(_DWORD *)(v2 + 16) == v5 )
              goto LABEL_52;
          }
        }
        v10 = v2 + 40;
      if ( !*(_BYTE *)v10 )
        v20 = *(_DWORD *)(v10 + 8);
        v21 = v20 == (_DWORD)v4;
        if ( v20 == (_DWORD)v4 )
          v21 = *(_DWORD *)(v10 + 12) == HIDWORD(v4);
        if ( v21 && *(_DWORD *)(v10 + 16) == v5 )
          goto LABEL_52;
      v10 += 40;
    if ( !*(_BYTE *)v10 )
      v22 = *(_DWORD *)(v10 + 8);
      v23 = v22 == (_DWORD)v4;
      if ( v22 == (_DWORD)v4 )
        v23 = *(_DWORD *)(v10 + 12) == HIDWORD(v4);
      if ( v23 )
        if ( *(_DWORD *)(v10 + 16) != v5 )
          v10 = *(_QWORD *)(a1 + 28) >> 32;
        goto LABEL_52;
LABEL_51:
    v10 = *(_QWORD *)(a1 + 28) >> 32;
    goto LABEL_52;
  }
  v7 = v6 + 1;
  while ( 1 )
    if ( !*(_BYTE *)v2 )
      v8 = *(_DWORD *)(v2 + 8);
      v9 = v8 == (_DWORD)v4;
      if ( v8 == (_DWORD)v4 )
        v9 = *(_DWORD *)(v2 + 12) == HIDWORD(v4);
      if ( v9 )
        if ( *(_DWORD *)(v2 + 16) == v5 )
          break;
    v10 = v2 + 40;
    if ( !*(_BYTE *)(v2 + 40) )
      v11 = *(_DWORD *)(v2 + 48);
      v12 = v11 == (_DWORD)v4;
      if ( v11 == (_DWORD)v4 )
        v12 = *(_DWORD *)(v2 + 52) == HIDWORD(v4);
      if ( v12 && *(_DWORD *)(v2 + 56) == v5 )
        break;
    v10 = v2 + 80;
    if ( !*(_BYTE *)(v2 + 80) )
      v13 = *(_DWORD *)(v2 + 88);
      v14 = v13 == (_DWORD)v4;
      if ( v13 == (_DWORD)v4 )
        v14 = *(_DWORD *)(v2 + 92) == HIDWORD(v4);
      if ( v14 && *(_DWORD *)(v2 + 96) == v5 )
    v10 = v2 + 120;
    if ( !*(_BYTE *)(v2 + 120) )
      v15 = *(_DWORD *)(v2 + 128);
      v16 = v15 == (_DWORD)v4;
      if ( v15 == (_DWORD)v4 )
        v16 = *(_DWORD *)(v2 + 132) == HIDWORD(v4);
      if ( v16 && *(_DWORD *)(v2 + 136) == v5 )
    --v7;
    v2 += 160;
    if ( v7 <= 1 )
      goto LABEL_28;
LABEL_52:
  result = 0;
  if ( v10 != v3 )
    result = 1;
  return result;
}


LevelChunk *__fastcall BlockTickingQueue::add(LevelChunk **a1, BlockSource *a2, int a3, char *a4, unsigned int a5, int a6)
{
  LevelChunk **v6; // r5@1
  char *v7; // r8@1
  int v8; // r4@1
  BlockSource *v9; // r7@1
  LevelChunk *v10; // r0@1
  char v11; // r0@2
  unsigned int v12; // r1@2
  unsigned int v13; // r0@2
  int v14; // r2@6
  int v15; // r3@6
  int v16; // r1@6
  LevelChunk *result; // r0@6
  int v18; // r0@8
  __int64 v19; // r0@8
  unsigned __int8 v20; // r2@9
  int v21; // r1@9
  unsigned int v22; // [sp+8h] [bp-48h]@8
  int v23; // [sp+Ch] [bp-44h]@8
  int v24; // [sp+14h] [bp-3Ch]@6
  unsigned int v25; // [sp+18h] [bp-38h]@6
  unsigned int v26; // [sp+1Ch] [bp-34h]@6
  unsigned int v27; // [sp+20h] [bp-30h]@6
  unsigned int v28; // [sp+24h] [bp-2Ch]@6
  unsigned int v29; // [sp+28h] [bp-28h]@6
  int v30; // [sp+2Ch] [bp-24h]@1
  unsigned __int8 v31; // [sp+30h] [bp-20h]@9

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v30 = a6;
  v9 = a2;
  v10 = *a1;
  if ( v10 )
  {
    v11 = *LevelChunk::getState(v10);
    __dmb();
    v12 = (unsigned __int8)v11;
    v13 = 8;
    if ( v12 >= 4 )
      v13 = (a5 >> 28) & 8;
  }
  else
  v14 = *(_DWORD *)(v8 + 4);
  v15 = *(_DWORD *)(v8 + 8);
  v16 = *(_DWORD *)v8 + v13;
  v27 = *(_DWORD *)v8 - v13;
  v24 = v16;
  v28 = v14 - v13;
  v25 = v14 + v13;
  v26 = v13 + v15;
  v29 = v15 - v13;
  result = (LevelChunk *)BlockSource::hasChunksAt(v9, (const BlockPos *)&v27, (const BlockPos *)&v24);
  if ( result == (LevelChunk *)1 )
    if ( (signed int)a5 <= -1 )
    {
      BlockSource::getBlockID((BlockSource *)&v31, v9, v8);
      result = (LevelChunk *)v31;
      if ( v31 && v31 == (unsigned __int8)*v7 )
      {
        ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
        result = (LevelChunk *)(*(int (**)(void))(*(_DWORD *)Block::mBlocks[v31] + 8))();
      }
    }
    else
      v18 = (unsigned __int64)(*((_QWORD *)v6 + 1) + (signed int)a5) >> 32;
      v22 = (unsigned int)v6[2] + a5;
      v23 = v18;
      v19 = *(_QWORD *)(v6 + 5);
      if ( (_DWORD)v19 == HIDWORD(v19) )
        std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>::_M_emplace_back_aux<BlockPos const&,BlockID &,Tick,int &>(
          (_QWORD *)v6 + 2,
          v8,
          v7,
          &v22,
          &v30);
        v21 = (int)v6[5];
      else
        v20 = *v7;
        HIDWORD(v19) = v30;
        *(_BYTE *)v19 = 0;
        v31 = v20;
        TickNextTickData::TickNextTickData(v19 + 8, v8, &v31, &v22, SHIDWORD(v19));
        v21 = (int)v6[5] + 40;
        v6[5] = (LevelChunk *)v21;
      std::push_heap<__gnu_cxx::__normal_iterator<BlockTickingQueue::BlockTick *,std::vector<BlockTickingQueue::BlockTick,std::allocator<BlockTickingQueue::BlockTick>>>,std::greater<BlockTickingQueue::BlockTick>>(
        (int)v6[4],
        v21);
      result = *v6;
      if ( *v6 )
        result = (LevelChunk *)LevelChunk::_onTickingQueueChanged(result);
  return result;
}


void __fastcall BlockTickingQueue::_saveQueue(int a1, int a2, unsigned __int64 *a3)
{
  BlockTickingQueue::_saveQueue(a1, a2, a3);
}


void __fastcall BlockTickingQueue::save(BlockTickingQueue *this, CompoundTag *a2)
{
  BlockTickingQueue::save(this, a2);
}
