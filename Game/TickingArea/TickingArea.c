

void __fastcall TickingArea::onComponentChanged(TickingArea *this, unsigned int a2, float a3, bool a4)
{
  TickingArea::onComponentChanged(this, a2, a3, a4);
}


int __fastcall TickingArea::TickingArea(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, char a8)
{
  int v9; // [sp+Ch] [bp-3Ch]@0

  return j_TickingArea::TickingArea(a1, a2, a3, a4, a5, a6, v9, -6.8056e38/*NaN*/, -1, a7, a8, 0, 1);
}


void __fastcall TickingArea::_save(TickingArea *this)
{
  TickingArea::_save(this);
}


signed int __fastcall TickingArea::isEntityOwned(TickingArea *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = (*((_QWORD *)this + 4) >> 32) & *((_QWORD *)this + 4);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


int *__fastcall TickingArea::onChunkLoaded(TickingArea *this, LevelChunk *a2)
{
  TickingArea *v2; // r5@1
  int *result; // r0@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r1@2
  unsigned int *v6; // r7@8
  int v7; // r0@16
  char v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1

  v2 = this;
  j_LevelChunk::getPosition(a2);
  result = j_ChunkSource::getAvailableChunk((ChunkSource *)&v8, (TickingArea *)((char *)v2 + 92));
  v4 = *(_QWORD *)&v8;
  if ( v9 )
  {
    v5 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (int *)__ldrex(v5);
      while ( __strex((unsigned int)result - 1, v5) );
    }
    else
      result = (int *)(*v5)--;
    if ( result == (int *)1 )
      v6 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (int *)__ldrex(v6);
        while ( __strex((unsigned int)result - 1, v6) );
      }
      else
        result = (int *)(*v6)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  }
  if ( (_DWORD)v4 )
    v7 = j_ChunkSource::getLevel((TickingArea *)((char *)v2 + 92));
    result = (int *)(*(int (**)(void))(*(_DWORD *)v7 + 92))();
  return result;
}


char *__fastcall TickingArea::getName(TickingArea *this)
{
  return (char *)this + 24;
}


void __fastcall TickingArea::remove(TickingArea *this)
{
  TickingArea::remove(this);
}


int __fastcall TickingArea::setEntityFound(int result)
{
  *(_BYTE *)(result + 45) = 1;
  return result;
}


void __fastcall TickingArea::~TickingArea(TickingArea *this)
{
  TickingArea *v1; // r0@1

  v1 = j_TickingArea::~TickingArea(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall TickingArea::~TickingArea(TickingArea *this)
{
  TickingArea::~TickingArea(this);
}


signed int __fastcall TickingArea::getDescription(TickingArea *this, int a2)
{
  int v2; // r5@1
  TickingAreaView *v3; // r7@1
  TickingArea *v4; // r4@1
  char *v5; // r6@1
  __int64 v10; // kr08_8@2
  int v11; // r7@2
  signed int v14; // r0@2
  signed int result; // r0@2
  float v16; // [sp+4h] [bp-44h]@2
  int v17; // [sp+8h] [bp-40h]@2
  int v18; // [sp+10h] [bp-38h]@2
  int v19; // [sp+14h] [bp-34h]@2
  int v20; // [sp+18h] [bp-30h]@2
  int v21; // [sp+1Ch] [bp-2Ch]@1
  int v22; // [sp+20h] [bp-28h]@3
  int v23; // [sp+24h] [bp-24h]@3
  int v24; // [sp+28h] [bp-20h]@3
  int v25; // [sp+2Ch] [bp-1Ch]@3
  int v26; // [sp+30h] [bp-18h]@3

  v2 = a2;
  v3 = (TickingAreaView *)(a2 + 368);
  v4 = this;
  v5 = j_TickingAreaView::getBounds((TickingAreaView *)(a2 + 368));
  j_TickUtil::chunkBoundsToGridBounds((int)&v21, (int)v5, (int)(v5 + 12));
  if ( j_TickingAreaView::isCircle(v3) == 1 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    v10 = *((_QWORD *)v5 + 1);
    v11 = *((_DWORD *)v5 + 11);
    _R0 = (*(_DWORD *)v5 + HIDWORD(v10) + 1) * v11;
    _R1 = (v10 + *((_DWORD *)v5 + 5) + 1) * v11;
    __asm
    {
      VMOV            S2, R0
      VMOV            S4, R1
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VSTR            S2, [SP,#0x48+var_44]
    }
    v17 = 0;
    __asm { VSTR            S0, [SP,#0x48+var_3C] }
    j_BlockPos::BlockPos((int)&v18, (int)&v16);
    v14 = *((_DWORD *)v5 + 6);
    *(_DWORD *)v4 = v18;
    *((_DWORD *)v4 + 1) = v19;
    *((_DWORD *)v4 + 2) = v20;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = v14 / 2;
    sub_21E8AF4((int *)v4 + 7, (int *)(v2 + 24));
    result = 1;
  }
  else
    *(_DWORD *)v4 = v21;
    *((_DWORD *)v4 + 1) = v22;
    *((_DWORD *)v4 + 2) = v23;
    *((_DWORD *)v4 + 3) = v24;
    *((_DWORD *)v4 + 4) = v25;
    *((_DWORD *)v4 + 5) = v26;
    result = 0;
  *((_BYTE *)v4 + 32) = result;
  return result;
}


char *__fastcall TickingArea::getView(TickingArea *this)
{
  return (char *)this + 368;
}


void __fastcall TickingArea::remove(TickingArea *this)
{
  Level *v1; // r0@1
  int v2; // r0@1
  int v3; // r4@1
  void (__fastcall *v4)(int, char **); // r6@1
  const void **v5; // r0@1
  char *v6; // r0@1
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+0h] [bp-28h]@1
  char *v13; // [sp+4h] [bp-24h]@1

  *((_BYTE *)this + 47) = 1;
  v1 = (Level *)j_BlockSource::getLevel((TickingArea *)((char *)this + 256));
  v2 = j_Level::getLevelStorage(v1);
  v3 = v2;
  v4 = *(void (__fastcall **)(int, char **))(*(_DWORD *)v2 + 40);
  j_mce::UUID::asString((mce::UUID *)&v12);
  v5 = sub_21E82D8((const void **)&v12, 0, dword_28350C4, *(_BYTE **)(dword_28350C4 - 12));
  v13 = (char *)*v5;
  *v5 = &unk_28898CC;
  v4(v3, &v13);
  v6 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


LevelChunk *__fastcall TickingArea::tickSeasons(TickingArea *this, Random *a2)
{
  return j_j_j__ZN15TickingAreaView11tickSeasonsER11BlockSourceR6Random(
           (TickingArea *)((char *)this + 368),
           (TickingArea *)((char *)this + 256),
           a2);
}


int __fastcall TickingArea::TickingArea(int a1, int a2, __int64 a3, int a4, int a5, float a6, int a7, float a8, int a9, int a10)
{
  int v15; // [sp+Ch] [bp-3Ch]@0
  int v16; // [sp+20h] [bp-28h]@0

  __asm
  {
    VLDR            S0, [SP,#0x48+arg_18]
    VSTR            S0, [SP,#0x48+var_28]
  }
  return j_TickingArea::TickingArea(a1, a2, a3, a4, a5, (int)&Util::EMPTY_STRING, v15, a8, a9, SLODWORD(a6), 1, v16, 0);
}


char *__fastcall TickingArea::getEntityId(TickingArea *this)
{
  return (char *)this + 32;
}


void __fastcall TickingArea::center(TickingArea *this)
{
  TickingArea::center(this);
}


TickingArea *__fastcall TickingArea::~TickingArea(TickingArea *this)
{
  TickingArea *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_2724DFC;
  j_TickingAreaView::~TickingAreaView((TickingArea *)((char *)this + 368));
  j_BlockSource::~BlockSource((TickingArea *)((char *)v1 + 256));
  *((_DWORD *)v1 + 23) = &off_271830C;
  j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)v1 + 120);
  j_ChunkSource::~ChunkSource((TickingArea *)((char *)v1 + 92));
  v2 = (void (*)(void))*((_DWORD *)v1 + 21);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 6);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


char *__fastcall TickingArea::getView(TickingArea *this)
{
  return (char *)this + 368;
}


int __fastcall TickingArea::TickingArea(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, char a11, int a12, char a13)
{
  int v13; // r5@1
  Dimension *v14; // r4@1
  ChunkSource *v19; // r0@1
  BlockSourceListener *v20; // r0@1
  _DWORD *v21; // r0@1
  int v22; // r3@1
  void (*v23)(void); // r3@1
  char v25; // [sp+Ch] [bp-6Ch]@3
  _DWORD *v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+44h] [bp-34h]@1
  void (*v28)(void); // [sp+48h] [bp-30h]@1
  int v29; // [sp+4Ch] [bp-2Ch]@1

  v13 = a1;
  v14 = (Dimension *)a2;
  *(_DWORD *)a1 = &off_2724DFC;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = __PAIR__(a5, a4);
  sub_21E8AF4((int *)(a1 + 24), (int *)a6);
  __asm { VLDR            S0, [SP,#0x78+arg_20] }
  *(_QWORD *)(v13 + 32) = __PAIR__(a9, LODWORD(a8));
  __asm { VSTR            S0, [R5,#0x28] }
  *(_BYTE *)(v13 + 44) = a13;
  *(_BYTE *)(v13 + 45) = 0;
  *(_BYTE *)(v13 + 46) = 0;
  *(_BYTE *)(v13 + 47) = 0;
  *(_DWORD *)(v13 + 84) = 0;
  *(_DWORD *)(v13 + 48) = -8388609;
  *(_DWORD *)(v13 + 52) = -8388609;
  *(_DWORD *)(v13 + 56) = -8388609;
  *(_DWORD *)(v13 + 60) = -8388609;
  *(_DWORD *)(v13 + 64) = -8388609;
  *(_DWORD *)(v13 + 68) = -8388609;
  *(_DWORD *)(v13 + 72) = 0;
  v19 = (ChunkSource *)j_Dimension::getChunkSource(v14);
  j_ChunkViewSource::ChunkViewSource(v13 + 92, v19, 1);
  v20 = (BlockSourceListener *)j_Dimension::getLevel(v14);
  j_BlockSource::BlockSource(v13 + 256, v20, (int)v14, v13 + 92, 1, 0);
  j_TickingAreaView::TickingAreaView((TickingAreaView *)(v13 + 368), (ChunkSource *)(v13 + 92));
  v21 = j_operator new(4u);
  *v21 = v13;
  v26 = v21;
  v22 = v27;
  *(_QWORD *)&v26 = *(_QWORD *)(v13 + 76);
  *(_DWORD *)(v13 + 76) = v21;
  *(_DWORD *)(v13 + 80) = v22;
  v28 = *(void (**)(void))(v13 + 84);
  v23 = v28;
  *(_DWORD *)(v13 + 84) = sub_1B01628;
  v29 = *(_DWORD *)(v13 + 88);
  *(_DWORD *)(v13 + 88) = sub_1B015F4;
  if ( v23 )
    v23();
  j_TickUtil::getDeterministicBounds((int)&v25, a10);
  j_ChunkViewSource::move(v13 + 92, (int)&v25, a11, v13 + 76);
  j_TickingAreaView::init(v13 + 368, a10, a11);
  return v13;
}


int __fastcall TickingArea::updatePosition(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 60) = *(_DWORD *)a2;
  *(_DWORD *)(result + 64) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 68) = *((_DWORD *)a2 + 2);
  return result;
}


char *__fastcall TickingArea::getId(TickingArea *this)
{
  return (char *)this + 8;
}


void __fastcall TickingArea::center(TickingArea *this)
{
  int v8; // r6@7
  int v9; // r7@7
  int v10; // r9@7
  char v11; // r0@7
  int v12; // [sp+4h] [bp-A4h]@7
  char v13; // [sp+8h] [bp-A0h]@7
  void (*v14)(void); // [sp+10h] [bp-98h]@7
  char v15; // [sp+18h] [bp-90h]@7
  int v16; // [sp+48h] [bp-60h]@7
  int v17; // [sp+4Ch] [bp-5Ch]@7
  int v18; // [sp+50h] [bp-58h]@7
  int v19; // [sp+54h] [bp-54h]@7
  int v20; // [sp+58h] [bp-50h]@7
  int v21; // [sp+5Ch] [bp-4Ch]@7
  int v22; // [sp+60h] [bp-48h]@7
  signed int v23; // [sp+64h] [bp-44h]@7
  int v24; // [sp+68h] [bp-40h]@7
  int v25; // [sp+6Ch] [bp-3Ch]@7
  int v26; // [sp+70h] [bp-38h]@7
  int v27; // [sp+74h] [bp-34h]@7
  int v28; // [sp+78h] [bp-30h]@7
  int v29; // [sp+80h] [bp-28h]@7

  _R4 = this;
  if ( !*((_BYTE *)this + 47)
    && (*(int (__fastcall **)(TickingArea *))(*(_DWORD *)this + 20))(this) == 1
    && (*(int (__fastcall **)(TickingArea *))(*(_DWORD *)_R4 + 64))(_R4) == 1
    && j_TickingAreaView::isInitialLoadDone((TickingArea *)((char *)_R4 + 368)) == 1 )
  {
    _R10 = *((_DWORD *)_R4 + 15);
    _R2 = *((_DWORD *)_R4 + 17);
    if ( *((_BYTE *)_R4 + 46) )
      goto LABEL_12;
    __asm
    {
      VLDR            S0, [R4,#0x30]
      VMOV            S6, R10
      VLDR            S2, [R4,#0x34]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R4,#0x38]
      VMOV            S6, R2
      VMUL.F32        S2, S2, S2
      VSUB.F32        S4, S4, S6
      VMUL.F32        S0, S0, S0
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =256.0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
LABEL_12:
      v12 = *((_DWORD *)_R4 + 17);
      j_BlockPos::BlockPos((int)&v28, (int)_R4 + 60);
      v8 = v28;
      v9 = v29;
      v10 = *((_DWORD *)_R4 + 18);
      j___aeabi_memclr8_0((int)&v16, 36);
      v27 = 16;
      v16 = (v8 - v10) >> 4;
      v17 = 0;
      v18 = (v9 - v10) >> 4;
      v19 = (v8 + v10) >> 4;
      v20 = 0;
      v21 = (v9 + v10) >> 4;
      v22 = v19 - v16 + 1;
      v23 = 1;
      v24 = v21 - v18 + 1;
      v25 = v24 * v22;
      v26 = v24 * v22;
      (*(void (__fastcall **)(char *))(*((_DWORD *)_R4 + 23) + 48))((char *)_R4 + 92);
      j_TickUtil::getDeterministicBounds((int)&v15, (int)&v16);
      v11 = j_TickingAreaView::isCircle((TickingArea *)((char *)_R4 + 368));
      v14 = 0;
      j_ChunkViewSource::move((int)_R4 + 92, (int)&v15, v11, (int)&v13);
      if ( v14 )
        v14();
      (*(void (__fastcall **)(char *))(*((_DWORD *)_R4 + 23) + 52))((char *)_R4 + 92);
      j_TickingAreaView::move((int)_R4 + 368, (int)&v16);
      *((_DWORD *)_R4 + 12) = _R10;
      *((_DWORD *)_R4 + 13) = 0;
      *((_DWORD *)_R4 + 14) = v12;
      *((_BYTE *)_R4 + 46) = 0;
      j_TickingArea::_save(_R4);
  }
}


int __fastcall TickingArea::TickingArea(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, float a8, int a9)
{
  int v10; // [sp+Ch] [bp-3Ch]@0

  return j_TickingArea::TickingArea(a1, a2, a3, a4, a5, (int)&Util::EMPTY_STRING, v10, a8, a9, a6, 1, 0, 1);
}


void **__fastcall TickingArea::findOwner(TickingArea *this, unsigned __int8 *a2)
{
  TickingArea *v2; // r5@1
  unsigned __int8 *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  char *v6; // r0@2
  int v7; // r2@2
  __int64 v12; // kr00_8@2
  const ChunkPos *v16; // r6@2
  signed int v17; // r7@2
  signed int v18; // r9@3
  signed int v19; // r10@4
  int v20; // r11@9
  unsigned int *v21; // r1@10
  unsigned int v22; // r0@12
  Entity *v23; // r0@14
  void **v24; // r5@14
  unsigned int *v25; // r5@19
  unsigned int v26; // r0@21
  void **v28; // [sp+0h] [bp-58h]@2
  unsigned __int64 *v29; // [sp+4h] [bp-54h]@2
  LevelChunk *v30; // [sp+14h] [bp-44h]@6
  int v31; // [sp+18h] [bp-40h]@9
  float v32; // [sp+1Ch] [bp-3Ch]@2
  int v33; // [sp+28h] [bp-30h]@2

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v5 = 0;
  if ( v4 == 1 )
  {
    *v3 = 0;
    v6 = j_TickingAreaView::getBounds((TickingArea *)((char *)v2 + 368));
    v7 = *((_DWORD *)v6 + 1);
    __asm { VMOV.F32        S0, #0.5 }
    v12 = *((_QWORD *)v6 + 2);
    _R1 = *(_DWORD *)v6 + *((_DWORD *)v6 + 3);
    _R0 = HIDWORD(v12) + *((_DWORD *)v6 + 2);
    _R2 = v7 + v12;
    __asm
    {
      VMOV            S2, R1
      VMOV            S6, R0
      VMOV            S4, R2
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VSTR            S2, [SP,#0x58+var_3C]
      VSTR            S4, [SP,#0x58+var_38]
      VSTR            S0, [SP,#0x58+var_34]
    }
    j_ChunkPos::ChunkPos((int)&v33, (int)&v32);
    v29 = (unsigned __int64 *)((char *)v2 + 32);
    v16 = (TickingArea *)((char *)v2 + 92);
    v17 = -1;
    v28 = &pthread_create_ptr;
    while ( 2 )
      v18 = -1;
      do
      {
        j_ChunkSource::getAvailableChunk((ChunkSource *)&v30, v16);
        if ( v30 && j_LevelChunk::hasEntitiesPendingToLoad(v30) != 1 )
        {
          v23 = j_LevelChunk::getEntity((int)v30, v29);
          v24 = (void **)v23;
          if ( v23 )
          {
            if ( j_Entity::isTickingEntity(v23) )
            {
              v19 = 1;
              v28 = v24;
            }
            else
              *v3 = 0;
              v28 = 0;
          }
          else
            v19 = 0;
        }
        else
          v19 = 0;
          ++*v3;
        v20 = v31;
        if ( v31 )
          v21 = (unsigned int *)(v31 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 == 1 )
            v25 = (unsigned int *)(v20 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            if ( &pthread_create )
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
        if ( v19 )
          return v28;
        ++v18;
      }
      while ( v18 <= 1 );
      if ( ++v17 < 2 )
        continue;
      break;
    v5 = 0;
  }
  return (void **)v5;
}


void __fastcall TickingArea::onComponentChanged(TickingArea *this, unsigned int a2, float a3, bool a4)
{
  *((float *)this + 10) = a3;
  *((_BYTE *)this + 44) = a4;
  if ( *((_DWORD *)this + 18) != a2 )
  {
    *((_DWORD *)this + 18) = a2;
    *((_BYTE *)this + 46) = 1;
  }
  j_j_j__ZN11TickingArea5_saveEv_0(this);
}


void __fastcall TickingArea::_save(TickingArea *this)
{
  TickingArea *v1; // r5@1
  BlockSource *v2; // r6@1
  Level *v3; // r0@1
  int v4; // r4@1
  const void **v5; // r0@1
  int v6; // r0@1
  char *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  char v13; // [sp+4h] [bp-3Ch]@1
  int v14; // [sp+20h] [bp-20h]@1
  char *v15; // [sp+24h] [bp-1Ch]@1

  v1 = this;
  v2 = (TickingArea *)((char *)this + 256);
  v3 = (Level *)j_BlockSource::getLevel((TickingArea *)((char *)this + 256));
  v4 = j_Level::getLevelStorage(v3);
  j_mce::UUID::asString((mce::UUID *)&v14);
  v5 = sub_21E82D8((const void **)&v14, 0, dword_28350C4, *(_BYTE **)(dword_28350C4 - 12));
  v15 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = j_BlockSource::getDimensionId(v2);
  j_ITickingArea::serialize((int)&v13, (int)v1, v6);
  j_LevelStorage::saveData(v4, (int)&v15, (int)&v13);
  j_CompoundTag::~CompoundTag((CompoundTag *)&v13);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}
