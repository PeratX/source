

LevelChunk *__fastcall TickingAreaView::tickSeasons(TickingAreaView *this, BlockSource *a2, Random *a3)
{
  BlockSource *v3; // r8@1
  Random *v4; // r9@1
  int v5; // r10@1
  signed int v6; // r6@1
  LevelChunk *result; // r0@2
  LevelChunk *v8; // r5@2
  char v9; // [sp+4h] [bp-34h]@2
  char v10; // [sp+10h] [bp-28h]@2

  v3 = a2;
  v4 = a3;
  v5 = (*(int (**)(void))(*(_DWORD *)this + 24))();
  v6 = 10;
  while ( 1 )
  {
    j_TickUtil::getRandomInBounds((int)&v10, v5, v4);
    j_BlockPos::BlockPos((int)&v9, (__int64 *)&v10, 0);
    result = (LevelChunk *)j_BlockSource::getChunkAt(v3, (const BlockPos *)&v9);
    v8 = result;
    if ( result )
    {
      result = (LevelChunk *)j_LevelChunk::checkSeasonsPostProcessDirty(result);
      if ( result == (LevelChunk *)1 )
        break;
    }
    if ( !--v6 )
      return result;
  }
  return (LevelChunk *)j_LevelChunk::applySeasonsPostProcess(v8, v3);
}


unsigned int __fastcall TickingAreaView::tick(int a1, __int64 *a2, BlockSource *a3, int a4)
{
  int v4; // r11@1
  ChunkViewSource *v5; // r4@1
  int v6; // r9@1
  BlockSource *v7; // r8@1
  __int64 *v8; // r10@1
  Level *v9; // r7@1
  char *v10; // r0@1
  unsigned int v12; // ST0C_4@2
  unsigned int v13; // ST08_4@2
  char *v14; // r0@2
  unsigned __int8 v15; // r6@2
  char *v16; // r0@2
  int v17; // r9@2
  _DWORD *v18; // r0@2
  __int64 v19; // r1@2
  unsigned int result; // r0@2
  __int64 v27; // kr00_8@4
  int v28; // r5@4
  int v31; // r0@9
  int v32; // r0@13
  int v33; // [sp+Ch] [bp-6Ch]@5
  int v34; // [sp+10h] [bp-68h]@11
  int v35; // [sp+14h] [bp-64h]@11
  _DWORD *v36; // [sp+1Ch] [bp-5Ch]@2
  __int64 v37; // [sp+24h] [bp-54h]@2
  char v38; // [sp+2Fh] [bp-49h]@1

  v4 = a1;
  v5 = (ChunkViewSource *)(a1 + 4);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (Level *)j_ChunkSource::getLevel((ChunkSource *)(a1 + 4));
  v10 = j_ChunkViewSource::getArea(v5);
  _R4 = v10;
  v38 = v10[120];
  if ( v6 == 1 )
  {
    v12 = (unsigned __int8)v10[72];
    v13 = (unsigned __int8)v10[80];
    v14 = j_Level::getRandom(v9);
    v15 = j_Random::_genRandInt32((Random *)v14);
    v16 = j_Level::getRandom(v9);
    v17 = j_Random::_genRandInt32((Random *)v16);
    v18 = j_operator new(0x1Cu);
    LODWORD(v19) = sub_1B01F70;
    *v18 = _R4 + 48;
    v18[1] = &v38;
    HIDWORD(v19) = sub_1B01E90;
    v18[2] = _R4;
    v18[3] = v4;
    v18[4] = v8;
    v18[5] = v7;
    v18[6] = v9;
    v36 = v18;
    v37 = v19;
    result = j_TickUtil::forRandomOffset(v15, v17, v12, v13, (int)&v36);
    if ( (_DWORD)v37 )
      result = ((int (*)(void))v37)();
  }
  else
    __asm { VMOV.F32        S16, #0.5 }
    v27 = *((_QWORD *)v10 + 6);
    _R0 = *((_QWORD *)v10 + 6) >> 32;
    _R6 = v27;
    __asm { VLDR            S18, =1.7321 }
    v28 = 0;
LABEL_5:
    __asm { VMOV            S0, R0 }
    v33 = _R0;
    __asm { VCVT.F32.S32    S20, S0 }
    _R9 = *((_DWORD *)_R4 + 14);
LABEL_6:
    __asm
    {
      VMOV            S0, R9
      VCVT.F32.S32    S22, S0
    }
    while ( 1 )
      result = *((_DWORD *)_R4 + 22);
      if ( v28 == result )
        break;
      if ( !v38 )
        goto LABEL_17;
      _R1 = *((_QWORD *)_R4 + 6);
      __asm { VMOV            S6, R6 }
      v31 = *(_QWORD *)(_R4 + 60);
      HIDWORD(_R1) += *(_QWORD *)(_R4 + 60) >> 32;
      LODWORD(_R1) = _R1 + v31;
      __asm
      {
        VMOV            S2, R2
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      }
      LODWORD(_R1) = *((_DWORD *)_R4 + 14) + *((_DWORD *)_R4 + 17);
        VMOV            S4, R1
        VMUL.F32        S0, S0, S16
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
        VLDR            S8, [R4,#0x48]
        VMUL.F32        S2, S2, S16
        VCVT.F32.S32    S8, S8
        VMUL.F32        S4, S4, S16
        VSUB.F32        S0, S6, S0
        VSUB.F32        S2, S20, S2
        VMUL.F32        S6, S8, S16
        VSUB.F32        S4, S22, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S6, S6, S18
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VMUL.F32        S2, S6, S6
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
LABEL_17:
        v34 = _R6;
        v35 = _R9;
        j_TickingAreaView::_tickChunk(v4, v8, v7, v9);
        v31 = *((_DWORD *)_R4 + 15);
      ++v28;
      _VF = __OFSUB__(_R6, v31);
      _NF = _R6++ - v31 < 0;
      if ( !(_NF ^ _VF) )
        v32 = *((_DWORD *)_R4 + 17);
        _R6 = *((_DWORD *)_R4 + 12);
        _VF = __OFSUB__(_R9, v32);
        _NF = _R9++ - v32 < 0;
        if ( _NF ^ _VF )
          goto LABEL_6;
        _R0 = v33 + 1;
        goto LABEL_5;
  return result;
}


void __fastcall TickingAreaView::~TickingAreaView(TickingAreaView *this)
{
  TickingAreaView::~TickingAreaView(this);
}


TickingAreaView *__fastcall TickingAreaView::~TickingAreaView(TickingAreaView *this)
{
  TickingAreaView *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2724E64;
  *((_DWORD *)this + 1) = &off_271830C;
  j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)this + 32);
  j_ChunkSource::~ChunkSource((TickingAreaView *)((char *)v1 + 4));
  return v1;
}


void __fastcall TickingAreaView::_tickChunk(int a1, __int64 *a2, BlockSource *a3, Level *a4)
{
  TickingAreaView::_tickChunk(a1, a2, a3, a4);
}


int __fastcall TickingAreaView::getDimensionId(TickingAreaView *this)
{
  Dimension *v1; // r0@1

  v1 = (Dimension *)j_ChunkSource::getDimension((TickingAreaView *)((char *)this + 4));
  return j_j_j__ZNK9Dimension5getIdEv_2(v1);
}


_DWORD *__fastcall TickingAreaView::TickingAreaView(_DWORD *a1, ChunkSource *a2)
{
  _DWORD *v2; // r4@1
  _DWORD *result; // r0@1

  v2 = a1;
  *a1 = &off_2724E64;
  j_ChunkViewSource::ChunkViewSource((int)(a1 + 1), a2, 0);
  result = v2;
  *((_BYTE *)v2 + 164) = 0;
  return result;
}


int __fastcall TickingAreaView::init(int a1, int a2, char a3)
{
  int result; // r0@1
  int v4; // [sp+0h] [bp-18h]@1
  int (*v5)(void); // [sp+8h] [bp-10h]@1

  v5 = 0;
  result = j_ChunkViewSource::move(a1 + 4, a2, a3, (int)&v4);
  if ( v5 )
    result = v5();
  return result;
}


void __fastcall TickingAreaView::~TickingAreaView(TickingAreaView *this)
{
  TickingAreaView *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2724E64;
  *((_DWORD *)this + 1) = &off_271830C;
  j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)this + 32);
  j_ChunkSource::~ChunkSource((TickingAreaView *)((char *)v1 + 4));
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall TickingAreaView::move(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  char v4; // r0@1
  int result; // r0@1
  int v6; // [sp+0h] [bp-20h]@1
  int (*v7)(void); // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1 + 4;
  v4 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v7 = 0;
  result = j_ChunkViewSource::move(v3, v2, v4, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


void __fastcall TickingAreaView::_tickChunk(int a1, __int64 *a2, BlockSource *a3, Level *a4)
{
  BlockSource *v4; // r4@1
  __int64 *v5; // r5@1
  Level *v6; // r6@1
  int v7; // r4@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r5@14
  unsigned int v11; // r0@16
  LevelChunk *v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@7

  v4 = a3;
  v5 = a2;
  v6 = a4;
  j_ChunkSource::getAvailableChunk((ChunkSource *)&v12, (const ChunkPos *)(a1 + 4));
  if ( v12 && !j_LevelChunk::wasTickedThisTick((int)v12, (unsigned __int64 *)v5) )
  {
    if ( j_Level::isClientSide(v6) || j_Level::getTearingDown(v6) != 1 )
      j_LevelChunk::tick(__PAIR__((unsigned int)v4, (unsigned int)v12), v5);
    else
      j_LevelChunk::tickBlockEntities(v12, v4);
  }
  v7 = v13;
  if ( v13 )
    v8 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


int __fastcall TickingAreaView::isCircle(TickingAreaView *this)
{
  return (unsigned __int8)j_ChunkViewSource::getArea((TickingAreaView *)((char *)this + 4))[120];
}


char *__fastcall TickingAreaView::getBounds(TickingAreaView *this)
{
  return j_ChunkViewSource::getArea((TickingAreaView *)((char *)this + 4)) + 48;
}


int __fastcall TickingAreaView::createChildSource(TickingAreaView *this, int a2)
{
  TickingAreaView *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = j_operator new(0xA0u);
  result = j_ChunkViewSource::ChunkViewSource((int)v4, (ChunkSource *)(v3 + 4), 0);
  *(_DWORD *)v2 = v4;
  return result;
}


signed int __fastcall TickingAreaView::isInitialLoadDone(TickingAreaView *this)
{
  signed int result; // r0@2
  const ChunkPos *v2; // r11@3
  int v3; // r6@3
  int v4; // r5@3
  int v5; // r4@3
  __int64 v6; // kr00_8@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r7@13
  unsigned int v10; // r0@15
  int v11; // r0@21
  bool v12; // nf@21
  unsigned __int8 v13; // vf@21
  int v14; // r2@22
  TickingAreaView *v15; // [sp+0h] [bp-48h]@3
  char *v16; // [sp+4h] [bp-44h]@3
  int v17; // [sp+Ch] [bp-3Ch]@4
  char v18; // [sp+1Ch] [bp-2Ch]@6
  int v19; // [sp+20h] [bp-28h]@6

  if ( *((_BYTE *)this + 164) )
  {
    result = 1;
  }
  else
    v2 = (TickingAreaView *)((char *)this + 4);
    v16 = (char *)this + 4;
    v15 = this;
    v3 = (*(int (__cdecl **)(TickingAreaView *, _DWORD))(*(_DWORD *)this + 24))(this, *(_DWORD *)(*(_DWORD *)this + 24));
    v4 = *(_DWORD *)v3;
    v5 = 0;
LABEL_4:
    v17 = *(_DWORD *)(v3 + 8);
    while ( 1 )
    {
      if ( *(_DWORD *)(v3 + 40) == v5 )
      {
        result = 1;
        *((_BYTE *)v15 + 164) = 1;
        return result;
      }
      j_ChunkSource::getAvailableChunk((ChunkSource *)&v18, v2);
      v6 = *(_QWORD *)&v18;
      if ( v19 )
        v7 = (unsigned int *)(v19 + 4);
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
          v9 = (unsigned int *)(HIDWORD(v6) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          v2 = (const ChunkPos *)v16;
          if ( v10 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
      if ( !(_DWORD)v6 )
        break;
      v11 = *(_DWORD *)(v3 + 12);
      ++v5;
      v13 = __OFSUB__(v4, v11);
      v12 = v4++ - v11 < 0;
      if ( !(v12 ^ v13) )
        v4 = *(_DWORD *)v3;
        v14 = v17++;
        if ( v14 >= *(_DWORD *)(v3 + 20) )
          goto LABEL_4;
    }
    result = 0;
  return result;
}


int __fastcall TickingAreaView::getInitialLoadPercentage(TickingAreaView *this)
{
  int result; // r0@2
  const ChunkPos *v6; // r7@3
  int v7; // r6@3
  int v8; // r0@3
  int v9; // r5@3
  int v12; // r9@5
  __int64 v13; // kr00_8@6
  unsigned int *v14; // r1@7
  unsigned int v15; // r0@9
  unsigned int *v16; // r7@13
  unsigned int v17; // r0@15
  int v18; // r3@23
  TickingAreaView *v19; // [sp+0h] [bp-48h]@3
  char *v20; // [sp+4h] [bp-44h]@3
  int v21; // [sp+Ch] [bp-3Ch]@4
  char v22; // [sp+1Ch] [bp-2Ch]@6
  int v23; // [sp+20h] [bp-28h]@6

  if ( *((_BYTE *)this + 164) )
  {
    __asm
    {
      VMOVNE.F32      S0, #1.0
      VMOVNE          R0, S0
    }
  }
  else
    v6 = (TickingAreaView *)((char *)this + 4);
    v20 = (char *)this + 4;
    v19 = this;
    v7 = (*(int (__cdecl **)(TickingAreaView *, _DWORD))(*(_DWORD *)this + 24))(this, *(_DWORD *)(*(_DWORD *)this + 24));
    v8 = *(_DWORD *)v7;
    v9 = 0;
    _R8 = 0;
    _R4 = 0;
LABEL_4:
    v21 = *(_DWORD *)(v7 + 8);
    while ( 1 )
      v12 = v8;
      if ( *(_DWORD *)(v7 + 40) == v9 )
        break;
      j_ChunkSource::getAvailableChunk((ChunkSource *)&v22, v6);
      v13 = *(_QWORD *)&v22;
      if ( v23 )
      {
        v14 = (unsigned int *)(v23 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          v16 = (unsigned int *)(HIDWORD(v13) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 8))(HIDWORD(v13));
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          v6 = (const ChunkPos *)v20;
          if ( v17 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
      }
      v8 = v12 + 1;
      ++v9;
      ++_R8;
      if ( (_DWORD)v13 )
        ++_R4;
      if ( v12 >= *(_DWORD *)(v7 + 12) )
        v8 = *(_DWORD *)v7;
        v18 = v21++;
        if ( v18 >= *(_DWORD *)(v7 + 20) )
          goto LABEL_4;
      VMOV            S0, R8
      VMOV            S2, R4
    if ( _ZF )
      *((_BYTE *)v19 + 164) = 1;
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S2, S0
      VMOV            R0, S0
  return result;
}
