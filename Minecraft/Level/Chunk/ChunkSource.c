

signed int __fastcall ChunkSource::isWithinWorldLimit(ChunkSource *this, const ChunkPos *a2)
{
  return 1;
}


int __fastcall ChunkSource::getRandomChunk(int result, Random *a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int *__fastcall ChunkSource::getGeneratedChunk(ChunkSource *this, const ChunkPos *a2)
{
  ChunkSource *v2; // r4@1
  char v3; // r0@2
  int v4; // r1@3
  int *result; // r0@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r2@6
  int v8; // r4@9
  unsigned int *v9; // r1@10
  unsigned int *v10; // r5@16
  LevelChunk *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@3

  v2 = this;
  (*(void (__fastcall **)(LevelChunk **))(*(_DWORD *)a2 + 16))(&v11);
  if ( v11 && (v3 = *LevelChunk::getState(v11), __dmb(), (unsigned __int8)v3 >= 2u) )
  {
    v4 = v12;
    *(_DWORD *)v2 = v11;
    result = &v12;
    *((_DWORD *)v2 + 1) = v4;
    if ( v4 )
    {
      v6 = (unsigned int *)(v4 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
  }
  else
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
  v8 = *result;
  if ( *result )
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (int *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
    else
      result = (int *)(*v9)--;
    if ( result == (int *)1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = (int *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
        result = (int *)(*v10)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


signed int __fastcall ChunkSource::postProcess(ChunkSource *this, ChunkViewSource *a2)
{
  return 1;
}


int __fastcall ChunkSource::compact(ChunkSource *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 60))();
  return result;
}


int __fastcall ChunkSource::postProcessMobsAt(ChunkSource *this, BlockSource *a2, int a3, int a4, Random *a5)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 40))();
  return result;
}


int __fastcall ChunkSource::loadChunk(ChunkSource *this, LevelChunk *a2, bool a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 36))();
  return result;
}


int __fastcall ChunkSource::shutdown(ChunkSource *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


ChunkSource *__fastcall ChunkSource::~ChunkSource(ChunkSource *this)
{
  ChunkSource *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2718280;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  return v1;
}


int __fastcall ChunkSource::createNewChunk(int a1, int a2, __int64 *a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int result; // r0@2
  LevelChunk *v7; // [sp+4h] [bp-14h]@4

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a1;
  if ( v4 )
  {
    result = (*(int (**)(void))(*(_DWORD *)v4 + 24))();
  }
  else
    if ( a4 )
      LevelChunk::createNew((int **)&v7, *(Dimension **)(a2 + 12), *a3, 0);
    else
      v7 = 0;
    std::__shared_ptr<LevelChunk,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<LevelChunk,LevelChunkPhase1Deleter>(
      v5,
      (int *)&v7);
    if ( v7 )
      LevelChunkPhase1Deleter::operator()((int)&v7, v7);
    result = 0;
  return result;
}


int __fastcall ChunkSource::ChunkSource(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r0@1

  v2 = a1;
  v3 = *a2;
  *(_DWORD *)a1 = &off_2718280;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(a1 + 16) = v3;
  *(_DWORD *)(a1 + 20) = 0;
  v4 = *a2;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v2 + 20) = v4;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v2;
}


int __fastcall ChunkSource::flushPendingWrites(ChunkSource *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 64))();
  return result;
}


int __fastcall ChunkSource::isShutdownDone(ChunkSource *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 12))();
  else
    result = 1;
  return result;
}


LevelChunk *__fastcall ChunkSource::_relightChunk(int a1, LevelChunk *a2, int a3)
{
  __int64 v3; // r6@1
  int v4; // r8@1
  Level *v5; // r0@1
  LevelChunk *v6; // r5@1
  LevelChunk *result; // r0@2
  ChunkViewSource *v8; // r7@3
  char *v9; // r0@3
  __int64 v10; // r1@3
  int v11; // r0@3
  char *v12; // r0@3
  __int64 v13; // r1@3
  int v14; // r0@3
  LevelChunk **v15; // r7@3
  __int64 v16; // kr00_8@3
  char *v22; // r0@7
  int v23; // r1@7
  signed int v24; // r8@7
  unsigned int v25; // r10@7
  __int64 v28; // kr08_8@9
  unsigned int *v29; // r0@10
  unsigned int v30; // r1@12
  __int64 v31; // kr10_8@15
  unsigned int *v32; // r0@16
  unsigned int v33; // r1@18
  _DWORD *v34; // r0@21
  __int64 v35; // r1@21
  __int64 v36; // kr18_8@21
  unsigned int *v37; // r0@22
  unsigned int v38; // r1@24
  int v39; // r4@27
  unsigned int *v40; // r0@28
  unsigned int v41; // r1@30
  void *v42; // r0@33
  __int64 v43; // r1@33
  int v44; // r4@37
  unsigned int *v45; // r1@38
  unsigned int *v46; // r5@44
  int v47; // r4@51
  unsigned int *v48; // r1@52
  unsigned int *v49; // r5@58
  int v50; // [sp+8h] [bp-90h]@9
  void *v51; // [sp+10h] [bp-88h]@33
  __int64 v52; // [sp+18h] [bp-80h]@33
  _DWORD *v53; // [sp+20h] [bp-78h]@21
  __int64 v54; // [sp+28h] [bp-70h]@21
  char v55; // [sp+33h] [bp-65h]@7
  int v56; // [sp+34h] [bp-64h]@9
  int v57; // [sp+38h] [bp-60h]@15
  int v58; // [sp+3Ch] [bp-5Ch]@3
  int v59; // [sp+40h] [bp-58h]@3
  int v60; // [sp+44h] [bp-54h]@3
  int v61; // [sp+48h] [bp-50h]@3
  int v62; // [sp+4Ch] [bp-4Ch]@3
  int v63; // [sp+50h] [bp-48h]@3
  int v64; // [sp+54h] [bp-44h]@3
  ChunkViewSource *v65; // [sp+58h] [bp-40h]@3
  int v66; // [sp+5Ch] [bp-3Ch]@9
  char v67; // [sp+60h] [bp-38h]@3
  char v68; // [sp+64h] [bp-34h]@9

  LODWORD(v3) = a1;
  v4 = a3;
  v5 = *(Level **)(a1 + 8);
  v6 = a2;
  if ( !v5 || (result = (LevelChunk *)Level::getTearingDown(v5)) == 0 )
  {
    v64 = 0;
    std::__shared_ptr<ChunkViewSource,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChunkViewSource>,ChunkSource &,ChunkSource &::LoadMode>(
      (int)&v65,
      (int)&v67,
      (ChunkSource *)v3,
      &v64);
    v8 = v65;
    v9 = LevelChunk::getMin(v6);
    v10 = *(_QWORD *)v9;
    v11 = *((_DWORD *)v9 + 2);
    v61 = v10 - 16;
    v62 = HIDWORD(v10) - 16;
    v63 = v11 - 16;
    v12 = LevelChunk::getMax(v6);
    v13 = *(_QWORD *)v12;
    v14 = *((_DWORD *)v12 + 2);
    v58 = v13 + 16;
    v59 = HIDWORD(v13) + 16;
    v60 = v14 + 16;
    ChunkViewSource::move(v8, (const BlockPos *)&v61, (const BlockPos *)&v58);
    v16 = *((_QWORD *)ChunkViewSource::getArea(v65) + 12);
    v15 = (LevelChunk **)v16;
    if ( (_DWORD)v16 == HIDWORD(v16) )
    {
LABEL_7:
      _R0 = *(_DWORD *)LevelChunk::getPosition(v6) - *(_DWORD *)v4;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S16, S0
      }
      v22 = LevelChunk::getPosition(v6);
      v23 = *(_DWORD *)(v4 + 8);
      __asm { VMUL.F32        S2, S16, S16 }
      v24 = 128;
      v25 = 16;
      _R0 = *((_DWORD *)v22 + 1) - v23;
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S0
        VADD.F32        S0, S0, S2
        VSQRT.F32       S0, S0
        VCVTR.S32.F32   S0, S0
      v55 = 0;
      __asm { VMOV            R11, S0 }
      if ( _R11 > 128 )
        v24 = 256;
        v25 = 32;
      std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
        (int)&v56,
        (int)&v68,
        &v55);
      v28 = *(_QWORD *)&v65;
      v50 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 188);
      if ( v66 )
        v29 = (unsigned int *)(v66 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 + 1, v29) );
        }
        else
          ++*v29;
      v31 = *(_QWORD *)&v56;
      if ( v57 )
        v32 = (unsigned int *)(v57 + 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 + 1, v32) );
          ++*v32;
      v34 = operator new(0x18u);
      *v34 = v3;
      v34[1] = v6;
      HIDWORD(v35) = sub_18EF1EC;
      LODWORD(v35) = sub_18EF234;
      *((_QWORD *)v34 + 1) = v28;
      *((_QWORD *)v34 + 2) = v31;
      v53 = v34;
      v54 = v35;
      v36 = *(_QWORD *)&v65;
        v37 = (unsigned int *)(v66 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 + 1, v37) );
          ++*v37;
      v39 = v57;
      HIDWORD(v3) = v56;
        v40 = (unsigned int *)(v57 + 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
          ++*v40;
      v42 = operator new(0x18u);
      *(_DWORD *)v42 = v3;
      *((_DWORD *)v42 + 1) = v6;
      LODWORD(v43) = sub_18EF3F8;
      HIDWORD(v43) = sub_18EF3D0;
      LODWORD(v3) = HIDWORD(v36);
      *((_DWORD *)v42 + 2) = v36;
      *(_QWORD *)((char *)v42 + 12) = v3;
      *((_DWORD *)v42 + 5) = v39;
      v51 = v42;
      v52 = v43;
      result = TaskGroup::queue(v50, (int)&v53, (int)&v51, v24 + _R11, v25);
      if ( (_DWORD)v52 )
        result = (LevelChunk *)((int (*)(void))v52)();
      if ( (_DWORD)v54 )
        result = (LevelChunk *)((int (*)(void))v54)();
      v44 = v57;
        v45 = (unsigned int *)(v57 + 4);
            result = (LevelChunk *)__ldrex(v45);
          while ( __strex((unsigned int)result - 1, v45) );
          result = (LevelChunk *)(*v45)--;
        if ( result == (LevelChunk *)1 )
          v46 = (unsigned int *)(v44 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (LevelChunk *)__ldrex(v46);
            while ( __strex((unsigned int)result - 1, v46) );
          }
          else
            result = (LevelChunk *)(*v46)--;
          if ( result == (LevelChunk *)1 )
            result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    }
    else
      while ( 1 )
        result = *v15;
        if ( !*v15 )
          break;
        LOBYTE(result) = *LevelChunk::getState(result);
        __dmb();
        result = (LevelChunk *)(unsigned __int8)result;
        if ( (unsigned __int8)result < 6u )
        v15 += 2;
        if ( (LevelChunk **)HIDWORD(v16) == v15 )
          goto LABEL_7;
    v47 = v66;
    if ( v66 )
      v48 = (unsigned int *)(v66 + 4);
      if ( &pthread_create )
        do
          result = (LevelChunk *)__ldrex(v48);
        while ( __strex((unsigned int)result - 1, v48) );
      else
        result = (LevelChunk *)(*v48)--;
      if ( result == (LevelChunk *)1 )
        v49 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            result = (LevelChunk *)__ldrex(v49);
          while ( __strex((unsigned int)result - 1, v49) );
          result = (LevelChunk *)(*v49)--;
          result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  }
  return result;
}


int *__fastcall ChunkSource::getAvailableChunkAt(ChunkSource *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  ChunkSource *v4; // r5@1
  int v6; // [sp+0h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v6, a3);
  return ChunkSource::getAvailableChunk(v4, v3);
}


int __fastcall ChunkSource::hintDiscardBatchEnd(ChunkSource *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 52))();
  return result;
}


int __fastcall ChunkSource::hintDiscardBatchBegin(ChunkSource *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 4);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 48))();
  return result;
}


LevelChunk *__fastcall ChunkSource::_startPostProcessing(int a1, LevelChunk *a2, int a3)
{
  int v3; // r9@1
  int v4; // r10@1
  Level *v5; // r0@1
  LevelChunk *v6; // r5@1
  LevelChunk *result; // r0@2
  ChunkViewSource *v8; // r4@3
  char *v9; // r0@3
  __int64 v10; // r1@3
  int v11; // r0@3
  char *v12; // r0@3
  __int64 v13; // r1@3
  int v14; // r0@3
  LevelChunk **v15; // r4@3
  __int64 v16; // kr00_8@3
  char *v22; // r0@7
  unsigned int v23; // r4@7
  __int64 v26; // kr08_8@9
  unsigned int *v27; // r0@10
  unsigned int v28; // r1@12
  __int64 v29; // kr10_8@15
  unsigned int *v30; // r0@16
  unsigned int v31; // r1@18
  _DWORD *v32; // r0@21
  __int64 v33; // r1@21
  __int64 v34; // kr18_8@21
  unsigned int *v35; // r0@22
  unsigned int v36; // r1@24
  __int64 v37; // kr20_8@27
  __int64 v38; // kr28_8@27
  int v39; // r7@27
  unsigned int *v40; // r0@28
  unsigned int v41; // r1@30
  _DWORD *v42; // r0@33
  __int64 v43; // r1@33
  int v44; // r4@37
  unsigned int *v45; // r1@38
  unsigned int *v46; // r5@44
  int v47; // r4@51
  unsigned int *v48; // r1@52
  unsigned int *v49; // r5@58
  __int64 v50; // [sp+Ch] [bp-9Ch]@9
  int v51; // [sp+14h] [bp-94h]@9
  _DWORD *v52; // [sp+20h] [bp-88h]@33
  __int64 v53; // [sp+28h] [bp-80h]@33
  _DWORD *v54; // [sp+30h] [bp-78h]@21
  __int64 v55; // [sp+38h] [bp-70h]@21
  char v56; // [sp+43h] [bp-65h]@7
  char v57; // [sp+44h] [bp-64h]@9
  int v58; // [sp+48h] [bp-60h]@15
  int v59; // [sp+4Ch] [bp-5Ch]@3
  int v60; // [sp+50h] [bp-58h]@3
  int v61; // [sp+54h] [bp-54h]@3
  int v62; // [sp+58h] [bp-50h]@3
  int v63; // [sp+5Ch] [bp-4Ch]@3
  int v64; // [sp+60h] [bp-48h]@3
  int v65; // [sp+64h] [bp-44h]@3
  ChunkViewSource *v66; // [sp+68h] [bp-40h]@3
  int v67; // [sp+6Ch] [bp-3Ch]@9
  char v68; // [sp+70h] [bp-38h]@3
  char v69; // [sp+74h] [bp-34h]@9

  v3 = a1;
  v4 = a3;
  v5 = *(Level **)(a1 + 8);
  v6 = a2;
  if ( !v5 || (result = (LevelChunk *)Level::getTearingDown(v5)) == 0 )
  {
    v65 = 0;
    std::__shared_ptr<ChunkViewSource,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChunkViewSource>,ChunkSource &,ChunkSource &::LoadMode>(
      (int)&v66,
      (int)&v68,
      (ChunkSource *)v3,
      &v65);
    v8 = v66;
    v9 = LevelChunk::getMin(v6);
    v10 = *(_QWORD *)v9;
    v11 = *((_DWORD *)v9 + 2);
    v62 = v10 - 16;
    v63 = HIDWORD(v10) - 16;
    v64 = v11 - 16;
    v12 = LevelChunk::getMax(v6);
    v13 = *(_QWORD *)v12;
    v14 = *((_DWORD *)v12 + 2);
    v59 = v13 + 16;
    v60 = HIDWORD(v13) + 16;
    v61 = v14 + 16;
    ChunkViewSource::move(v8, (const BlockPos *)&v62, (const BlockPos *)&v59);
    v16 = *((_QWORD *)ChunkViewSource::getArea(v66) + 12);
    v15 = (LevelChunk **)v16;
    if ( (_DWORD)v16 == HIDWORD(v16) )
    {
LABEL_7:
      _R0 = *(_DWORD *)LevelChunk::getPosition(v6) - *(_DWORD *)v4;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S16, S0
      }
      v22 = LevelChunk::getPosition(v6);
      __asm { VMUL.F32        S2, S16, S16 }
      LODWORD(_R6) = 64;
      v23 = 16;
      _R0 = *((_DWORD *)v22 + 1) - *(_DWORD *)(v4 + 8);
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S0
        VADD.F32        S0, S0, S2
        VSQRT.F32       S0, S0
        VCVTR.S32.F32   S0, S0
      v56 = 0;
      __asm { VMOV            R7, S0 }
      if ( SHIDWORD(_R6) > 128 )
        LODWORD(_R6) = 192;
        v23 = 32;
      std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
        (int)&v57,
        (int)&v69,
        &v56);
      v50 = _R6;
      v26 = *(_QWORD *)&v66;
      v51 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 188);
      if ( v67 )
        v27 = (unsigned int *)(v67 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 + 1, v27) );
        }
        else
          ++*v27;
      v29 = *(_QWORD *)&v57;
      if ( v58 )
        v30 = (unsigned int *)(v58 + 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 + 1, v30) );
          ++*v30;
      v32 = operator new(0x18u);
      HIDWORD(v33) = sub_18EEA40;
      *v32 = v3;
      v32[1] = v6;
      LODWORD(v33) = sub_18EEA88;
      *((_QWORD *)v32 + 1) = v26;
      *((_QWORD *)v32 + 2) = v29;
      v54 = v32;
      v55 = v33;
      v34 = *(_QWORD *)&v66;
        v35 = (unsigned int *)(v67 + 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 + 1, v35) );
          ++*v35;
      v37 = *(_QWORD *)&v57;
      v38 = *(_QWORD *)v4;
      v39 = *(_DWORD *)(v4 + 8);
        v40 = (unsigned int *)(v58 + 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
          ++*v40;
      v42 = operator new(0x24u);
      v42[8] = HIDWORD(v37);
      LODWORD(v43) = sub_18EEC48;
      *v42 = v3;
      v42[1] = v6;
      HIDWORD(v43) = sub_18EEC24;
      *((_QWORD *)v42 + 1) = v34;
      *((_QWORD *)v42 + 2) = v38;
      v42[6] = v39;
      v42[7] = v37;
      v52 = v42;
      v53 = v43;
      result = TaskGroup::queue(v51, (int)&v54, (int)&v52, v50 + HIDWORD(v50), v23);
      if ( (_DWORD)v53 )
        result = (LevelChunk *)((int (*)(void))v53)();
      if ( (_DWORD)v55 )
        result = (LevelChunk *)((int (*)(void))v55)();
      v44 = v58;
        v45 = (unsigned int *)(v58 + 4);
            result = (LevelChunk *)__ldrex(v45);
          while ( __strex((unsigned int)result - 1, v45) );
          result = (LevelChunk *)(*v45)--;
        if ( result == (LevelChunk *)1 )
          v46 = (unsigned int *)(v44 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (LevelChunk *)__ldrex(v46);
            while ( __strex((unsigned int)result - 1, v46) );
          }
          else
            result = (LevelChunk *)(*v46)--;
          if ( result == (LevelChunk *)1 )
            result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    }
    else
      while ( 1 )
        result = *v15;
        if ( !*v15 )
          break;
        LOBYTE(result) = *LevelChunk::getState(result);
        __dmb();
        result = (LevelChunk *)(unsigned __int8)result;
        if ( (unsigned __int8)result < 2u )
        v15 += 2;
        if ( (LevelChunk **)HIDWORD(v16) == v15 )
          goto LABEL_7;
    v47 = v67;
    if ( v67 )
      v48 = (unsigned int *)(v67 + 4);
      if ( &pthread_create )
        do
          result = (LevelChunk *)__ldrex(v48);
        while ( __strex((unsigned int)result - 1, v48) );
      else
        result = (LevelChunk *)(*v48)--;
      if ( result == (LevelChunk *)1 )
        v49 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            result = (LevelChunk *)__ldrex(v49);
          while ( __strex((unsigned int)result - 1, v49) );
          result = (LevelChunk *)(*v49)--;
          result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  }
  return result;
}


void __fastcall ChunkSource::~ChunkSource(ChunkSource *this)
{
  ChunkSource *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2718280;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ChunkSource::_checkNeighborGenerated(ChunkSource *this, const LevelChunk *a2, const ChunkPos *a3)
{
  ChunkSource *v3; // r5@1
  int v4; // ST00_4@1
  signed int v5; // r4@2
  int v6; // r5@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r6@13
  unsigned int v10; // r0@15
  LevelChunk *v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@6

  v3 = this;
  v4 = *(_QWORD *)LevelChunk::getPosition(a2) + *(_QWORD *)a3;
  ChunkSource::getGeneratedChunk((ChunkSource *)&v12, v3);
  if ( v12 )
  {
    v5 = 0;
    if ( (unsigned __int8)*LevelChunk::getState(v12) > 1u )
      v5 = 1;
    __dmb();
  }
  else
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
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
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v5;
}


int __fastcall ChunkSource::fireChunkLoaded(ChunkSource *this, LevelChunk *a2)
{
  int result; // r0@1

  result = *((_DWORD *)this + 2);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 100))();
  return result;
}


int __fastcall ChunkSource::saveLiveChunk(ChunkSource *this, LevelChunk *a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 44))();
  else
    result = 0;
  return result;
}


int __fastcall ChunkSource::createEmptyView(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r7@1
  int v6; // r9@1
  char v7; // r6@1
  int v8; // r4@1
  unsigned int v9; // r5@1
  _DWORD *v10; // r0@1
  char *v11; // r12@1
  void (__fastcall *v12)(char **, int, signed int); // r3@1
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r2@2
  unsigned int v14; // r6@2
  int v15; // r7@2
  int v16; // r1@2
  void (__cdecl *v17)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@2
  int result; // r0@6
  int v19; // [sp+0h] [bp-80h]@1
  __int16 v20; // [sp+4h] [bp-7Ch]@1
  __int16 v21; // [sp+6h] [bp-7Ah]@1
  char v22; // [sp+8h] [bp-78h]@1
  char v23; // [sp+Ch] [bp-74h]@1
  int v24; // [sp+10h] [bp-70h]@1
  int (__fastcall *v25)(void **, _QWORD **, int); // [sp+14h] [bp-6Ch]@1
  LevelChunk *(__fastcall *v26)(int, __int64 **, int, int); // [sp+18h] [bp-68h]@1
  int v27; // [sp+1Ch] [bp-64h]@9
  int (__cdecl *v28)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+24h] [bp-5Ch]@1
  unsigned __int64 v29; // [sp+2Ch] [bp-54h]@2
  int (__cdecl *v30)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+34h] [bp-4Ch]@1
  int v31; // [sp+38h] [bp-48h]@2
  _DWORD *v32; // [sp+40h] [bp-40h]@1
  int v33; // [sp+44h] [bp-3Ch]@1
  char *v34; // [sp+50h] [bp-30h]@2
  unsigned int v35; // [sp+54h] [bp-2Ch]@2
  void (__cdecl *v36)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+58h] [bp-28h]@1
  int v37; // [sp+5Ch] [bp-24h]@2

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  _aeabi_memclr8(&v19, 60);
  v9 = 0;
  v19 = 16;
  v25 = 0;
  v28 = 0;
  v30 = 0;
  v21 = 0;
  v20 = 0;
  v22 = v7;
  v10 = operator new(8u);
  v11 = &v23;
  *v10 = v8;
  v10[1] = v5;
  v32 = v10;
  *(_DWORD *)&v23 = v10;
  v24 = v33;
  v25 = sub_18EE4CA;
  v26 = sub_18EE4A8;
  v12 = *(void (__fastcall **)(char **, int, signed int))(a5 + 8);
  v36 = 0;
  if ( v12 )
  {
    v12(&v34, a5, 2);
    v10 = *(_DWORD **)(a5 + 12);
    v37 = *(_DWORD *)(a5 + 12);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a5 + 8);
    v36 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a5 + 8);
    v14 = HIDWORD(v29);
    v15 = v29;
    v9 = v35;
    v11 = v34;
    v16 = v31;
    v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v30;
  }
  else
    v16 = 0;
    v17 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
  v34 = (char *)v15;
  v35 = v14;
  v29 = __PAIR__(v9, (unsigned int)v11);
  v36 = v17;
  v37 = v16;
  v30 = v13;
  v31 = (int)v10;
  if ( v17 )
    v17(&v34, &v34, 3, v17, v19);
  result = GridArea<std::shared_ptr<LevelChunk>>::GridArea(v6, (int)&v19);
  if ( v30 )
    result = v30(&v29, &v29, 3, v30, v19);
  if ( v28 )
    result = v28(&v27, &v27, 3, v28, v19);
  if ( v25 )
    result = ((int (__cdecl *)(char *, char *, signed int, int (__fastcall *)(void **, _QWORD **, int), int))v25)(
               &v23,
               3,
               v25,
               v19);
  return result;
}


int __fastcall ChunkSource::_getChunkPriority(int a1, LevelChunk *this, int a3, int a4, int a5)
{
  LevelChunk *v5; // r6@1
  int *v6; // r8@1
  int v7; // r5@1
  int v8; // r4@1
  int v9; // r7@1
  char *v10; // r0@1
  int v18; // r0@1
  int result; // r0@2

  v5 = this;
  v6 = (int *)a4;
  v7 = a3;
  v8 = *(_DWORD *)LevelChunk::getPosition(this);
  v9 = *(_DWORD *)v7;
  v10 = LevelChunk::getPosition(v5);
  _R2 = v8 - v9;
  __asm { VMOV            S0, R2 }
  _R0 = *((_DWORD *)v10 + 1) - *(_DWORD *)(v7 + 8);
  __asm
  {
    VCVT.F32.S32    S0, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VSQRT.F32       S0, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  v18 = *v6 + _R1;
  if ( _R1 < 129 )
    *v6 = v18;
    result = *(_DWORD *)a5 / 2;
    *(_DWORD *)a5 = result;
  else
    result = v18 + 128;
    *v6 = result;
  return result;
}


int *__fastcall ChunkSource::getAvailableChunk(ChunkSource *this, const ChunkPos *a2)
{
  ChunkSource *v2; // r4@1
  char v3; // r0@2
  int v4; // r1@3
  int *result; // r0@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r2@6
  int v8; // r4@9
  unsigned int *v9; // r1@10
  unsigned int *v10; // r5@16
  LevelChunk *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@3

  v2 = this;
  (*(void (__fastcall **)(LevelChunk **))(*(_DWORD *)a2 + 16))(&v11);
  if ( v11 && (v3 = *LevelChunk::getState(v11), __dmb(), (unsigned __int8)v3 >= 8u) )
  {
    v4 = v12;
    *(_DWORD *)v2 = v11;
    result = &v12;
    *((_DWORD *)v2 + 1) = v4;
    if ( v4 )
    {
      v6 = (unsigned int *)(v4 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
  }
  else
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
  v8 = *result;
  if ( *result )
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (int *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
    else
      result = (int *)(*v9)--;
    if ( result == (int *)1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = (int *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
        result = (int *)(*v10)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


int __fastcall ChunkSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  int result; // r0@1
  LevelChunk *v3; // r3@2
  void (*v4)(void); // r2@2
  LevelChunk *v5; // r0@3
  LevelChunk *v6; // [sp+4h] [bp-Ch]@2

  result = *(_DWORD *)(a1 + 16);
  if ( result )
  {
    v3 = *a2;
    v4 = *(void (**)(void))(*(_DWORD *)result + 56);
    *a2 = 0;
    v6 = v3;
    v4();
    if ( v6 )
    {
      v5 = LevelChunk::~LevelChunk(v6);
      LevelChunk::operator delete((void *)v5);
    }
    result = 0;
  }
  return result;
}


int __fastcall ChunkSource::ChunkSource(int a1, Dimension *a2, int a3)
{
  int v3; // r4@1
  Dimension *v4; // r5@1
  int v5; // r0@1
  int v6; // r1@3
  int result; // r0@3

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = &off_2718280;
  *(_DWORD *)(a1 + 4) = a3;
  v5 = 0;
  if ( a2 )
    v5 = Dimension::getLevel(a2);
  v6 = v3 + 8;
  *(_DWORD *)v6 = v5;
  *(_DWORD *)(v6 + 4) = v4;
  *(_DWORD *)(v6 + 8) = 0;
  result = v3;
  *(_DWORD *)(v3 + 20) = 0;
  return result;
}


LevelChunk *__fastcall ChunkSource::_checkChunkFreeToPostProcess(ChunkSource *a1, LevelChunk *a2, int a3)
{
  LevelChunk *v3; // r5@1
  ChunkSource *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r1@1
  LevelChunk *result; // r0@2
  const ChunkPos *v9; // r2@9
  const ChunkPos *v10; // r2@29
  signed int v11; // [sp+0h] [bp-118h]@39
  signed int v12; // [sp+4h] [bp-114h]@39
  int v13; // [sp+8h] [bp-110h]@38
  int v14; // [sp+Ch] [bp-10Ch]@38
  int v15; // [sp+10h] [bp-108h]@37
  signed int v16; // [sp+14h] [bp-104h]@37
  int v17; // [sp+18h] [bp-100h]@36
  int v18; // [sp+1Ch] [bp-FCh]@36
  int v19; // [sp+20h] [bp-F8h]@35
  int v20; // [sp+24h] [bp-F4h]@35
  int v21; // [sp+28h] [bp-F0h]@34
  int v22; // [sp+2Ch] [bp-ECh]@34
  int v23; // [sp+30h] [bp-E8h]@33
  signed int v24; // [sp+34h] [bp-E4h]@33
  int v25; // [sp+38h] [bp-E0h]@32
  signed int v26; // [sp+3Ch] [bp-DCh]@32
  char v27; // [sp+40h] [bp-D8h]@29
  signed int v28; // [sp+44h] [bp-D4h]@29
  int v29; // [sp+48h] [bp-D0h]@28
  int v30; // [sp+4Ch] [bp-CCh]@28
  int v31; // [sp+50h] [bp-C8h]@27
  signed int v32; // [sp+54h] [bp-C4h]@27
  int v33; // [sp+58h] [bp-C0h]@26
  int v34; // [sp+5Ch] [bp-BCh]@26
  int v35; // [sp+60h] [bp-B8h]@25
  int v36; // [sp+64h] [bp-B4h]@25
  int v37; // [sp+68h] [bp-B0h]@24
  int v38; // [sp+6Ch] [bp-ACh]@24
  int v39; // [sp+70h] [bp-A8h]@23
  signed int v40; // [sp+74h] [bp-A4h]@23
  int v41; // [sp+78h] [bp-A0h]@22
  signed int v42; // [sp+7Ch] [bp-9Ch]@22
  int v43; // [sp+80h] [bp-98h]@19
  signed int v44; // [sp+84h] [bp-94h]@19
  int v45; // [sp+88h] [bp-90h]@18
  int v46; // [sp+8Ch] [bp-8Ch]@18
  int v47; // [sp+90h] [bp-88h]@17
  signed int v48; // [sp+94h] [bp-84h]@17
  int v49; // [sp+98h] [bp-80h]@16
  int v50; // [sp+9Ch] [bp-7Ch]@16
  int v51; // [sp+A0h] [bp-78h]@15
  int v52; // [sp+A4h] [bp-74h]@15
  int v53; // [sp+A8h] [bp-70h]@14
  int v54; // [sp+ACh] [bp-6Ch]@14
  int v55; // [sp+B0h] [bp-68h]@13
  signed int v56; // [sp+B4h] [bp-64h]@13
  int v57; // [sp+B8h] [bp-60h]@12
  signed int v58; // [sp+BCh] [bp-5Ch]@12
  char v59; // [sp+C0h] [bp-58h]@9
  signed int v60; // [sp+C4h] [bp-54h]@9
  int v61; // [sp+C8h] [bp-50h]@8
  int v62; // [sp+CCh] [bp-4Ch]@8
  int v63; // [sp+D0h] [bp-48h]@7
  signed int v64; // [sp+D4h] [bp-44h]@7
  int v65; // [sp+D8h] [bp-40h]@6
  int v66; // [sp+DCh] [bp-3Ch]@6
  int v67; // [sp+E0h] [bp-38h]@5
  int v68; // [sp+E4h] [bp-34h]@5
  int v69; // [sp+E8h] [bp-30h]@4
  int v70; // [sp+ECh] [bp-2Ch]@4
  int v71; // [sp+F0h] [bp-28h]@3
  signed int v72; // [sp+F4h] [bp-24h]@3
  int v73; // [sp+F8h] [bp-20h]@2
  signed int v74; // [sp+FCh] [bp-1Ch]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(_DWORD *)LevelChunk::getPosition(a2);
  v7 = *((_DWORD *)LevelChunk::getPosition(v3) + 1);
  if ( (v7 | v6) & 1 )
  {
    result = (LevelChunk *)(v7 & 1);
    if ( !(v6 & 1) || v7 & 1 )
    {
      if ( v6 & 1 & (unsigned __int8)v7 )
      {
        v41 = -1;
        v42 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v41);
        if ( result != (LevelChunk *)1 )
          return result;
        v39 = 0;
        v40 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v39);
        v37 = 1;
        v38 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v37);
        v35 = -1;
        v36 = 0;
        result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v35);
        v33 = 1;
        v34 = 0;
        result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v33);
        v31 = -1;
        v32 = 1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v31);
        v29 = 0;
        v30 = 1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v29);
        v10 = (const ChunkPos *)&v27;
        *(_DWORD *)&v27 = 1;
        v28 = 1;
      }
      else
        if ( v6 & 1 )
        if ( !(v7 & 1) )
        v25 = -1;
        v26 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v25);
        v23 = 0;
        v24 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v23);
        v21 = 1;
        v22 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v21);
        v19 = -1;
        v20 = 0;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v19);
        v17 = 1;
        v18 = 0;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v17);
        v15 = -1;
        v16 = 1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v15);
        v13 = 0;
        v14 = 1;
        result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v13);
        v11 = 1;
        v12 = 1;
        v10 = (const ChunkPos *)&v11;
      result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, v10);
LABEL_41:
      if ( result == (LevelChunk *)1 )
        result = j_j_j__ZN11ChunkSource20_startPostProcessingER10LevelChunkRK3Pos((int)v4, v3, v5);
      return result;
    }
    v57 = -1;
    v58 = -1;
    result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v57);
    if ( result == (LevelChunk *)1 )
      v55 = 0;
      v56 = -1;
      result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v55);
        v53 = 1;
        v54 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v53);
        if ( result == (LevelChunk *)1 )
        {
          v51 = -1;
          v52 = 0;
          result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v51);
          if ( result == (LevelChunk *)1 )
          {
            v49 = 1;
            v50 = 0;
            result = (LevelChunk *)ChunkSource::_checkNeighborPostProcessed(v4, v3, (const ChunkPos *)&v49);
            if ( result == (LevelChunk *)1 )
            {
              v47 = -1;
              v48 = 1;
              result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v47);
              if ( result == (LevelChunk *)1 )
              {
                v45 = 0;
                v46 = 1;
                result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v45);
                if ( result == (LevelChunk *)1 )
                {
                  v43 = 1;
                  v44 = 1;
                  v9 = (const ChunkPos *)&v43;
                  goto LABEL_20;
                }
              }
            }
          }
        }
  }
  else
    v73 = -1;
    v74 = -1;
    result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v73);
      v71 = 0;
      v72 = -1;
      result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v71);
        v69 = 1;
        v70 = -1;
        result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v69);
          v67 = -1;
          v68 = 0;
          result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v67);
            v65 = 1;
            v66 = 0;
            result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v65);
              v63 = -1;
              v64 = 1;
              result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v63);
                v61 = 0;
                v62 = 1;
                result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, (const ChunkPos *)&v61);
                  v9 = (const ChunkPos *)&v59;
                  *(_DWORD *)&v59 = 1;
                  v60 = 1;
LABEL_20:
                  result = (LevelChunk *)ChunkSource::_checkNeighborGenerated(v4, v3, v9);
                  goto LABEL_41;
  return result;
}


LevelChunk *__fastcall ChunkSource::_checkForReplacementData(int a1, LevelChunk *a2, int a3)
{
  int v3; // r9@1
  int v4; // r10@1
  Level *v5; // r0@1
  LevelChunk *v6; // r5@1
  LevelChunk *result; // r0@2
  ChunkViewSource *v8; // r4@3
  char *v9; // r0@3
  __int64 v10; // r1@3
  int v11; // r0@3
  char *v12; // r0@3
  __int64 v13; // r1@3
  int v14; // r0@3
  LevelChunk **v15; // r4@3
  __int64 v16; // kr00_8@3
  char *v22; // r0@7
  unsigned int v23; // r4@7
  __int64 v26; // kr08_8@9
  unsigned int *v27; // r0@10
  unsigned int v28; // r1@12
  __int64 v29; // kr10_8@15
  unsigned int *v30; // r0@16
  unsigned int v31; // r1@18
  _DWORD *v32; // r0@21
  __int64 v33; // r1@21
  __int64 v34; // kr18_8@21
  unsigned int *v35; // r0@22
  unsigned int v36; // r1@24
  __int64 v37; // kr20_8@27
  __int64 v38; // kr28_8@27
  int v39; // r7@27
  unsigned int *v40; // r0@28
  unsigned int v41; // r1@30
  _DWORD *v42; // r0@33
  __int64 v43; // r1@33
  int v44; // r4@37
  unsigned int *v45; // r1@38
  unsigned int *v46; // r5@44
  int v47; // r4@51
  unsigned int *v48; // r1@52
  unsigned int *v49; // r5@58
  __int64 v50; // [sp+Ch] [bp-9Ch]@9
  int v51; // [sp+14h] [bp-94h]@9
  _DWORD *v52; // [sp+20h] [bp-88h]@33
  __int64 v53; // [sp+28h] [bp-80h]@33
  _DWORD *v54; // [sp+30h] [bp-78h]@21
  __int64 v55; // [sp+38h] [bp-70h]@21
  char v56; // [sp+43h] [bp-65h]@7
  char v57; // [sp+44h] [bp-64h]@9
  int v58; // [sp+48h] [bp-60h]@15
  int v59; // [sp+4Ch] [bp-5Ch]@3
  int v60; // [sp+50h] [bp-58h]@3
  int v61; // [sp+54h] [bp-54h]@3
  int v62; // [sp+58h] [bp-50h]@3
  int v63; // [sp+5Ch] [bp-4Ch]@3
  int v64; // [sp+60h] [bp-48h]@3
  int v65; // [sp+64h] [bp-44h]@3
  ChunkViewSource *v66; // [sp+68h] [bp-40h]@3
  int v67; // [sp+6Ch] [bp-3Ch]@9
  char v68; // [sp+70h] [bp-38h]@3
  char v69; // [sp+74h] [bp-34h]@9

  v3 = a1;
  v4 = a3;
  v5 = *(Level **)(a1 + 8);
  v6 = a2;
  if ( !v5 || (result = (LevelChunk *)Level::getTearingDown(v5)) == 0 )
  {
    v65 = 0;
    std::__shared_ptr<ChunkViewSource,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ChunkViewSource>,ChunkSource &,ChunkSource &::LoadMode>(
      (int)&v66,
      (int)&v68,
      (ChunkSource *)v3,
      &v65);
    v8 = v66;
    v9 = LevelChunk::getMin(v6);
    v10 = *(_QWORD *)v9;
    v11 = *((_DWORD *)v9 + 2);
    v62 = v10 - 16;
    v63 = HIDWORD(v10) - 16;
    v64 = v11 - 16;
    v12 = LevelChunk::getMax(v6);
    v13 = *(_QWORD *)v12;
    v14 = *((_DWORD *)v12 + 2);
    v59 = v13 + 16;
    v60 = HIDWORD(v13) + 16;
    v61 = v14 + 16;
    ChunkViewSource::move(v8, (const BlockPos *)&v62, (const BlockPos *)&v59);
    v16 = *((_QWORD *)ChunkViewSource::getArea(v66) + 12);
    v15 = (LevelChunk **)v16;
    if ( (_DWORD)v16 == HIDWORD(v16) )
    {
LABEL_7:
      _R0 = *(_DWORD *)LevelChunk::getPosition(v6) - *(_DWORD *)v4;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S16, S0
      }
      v22 = LevelChunk::getPosition(v6);
      __asm { VMUL.F32        S2, S16, S16 }
      LODWORD(_R6) = 96;
      v23 = 16;
      _R0 = *((_DWORD *)v22 + 1) - *(_DWORD *)(v4 + 8);
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S0
        VADD.F32        S0, S0, S2
        VSQRT.F32       S0, S0
        VCVTR.S32.F32   S0, S0
      v56 = 0;
      __asm { VMOV            R7, S0 }
      if ( SHIDWORD(_R6) > 128 )
        LODWORD(_R6) = 224;
        v23 = 32;
      std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
        (int)&v57,
        (int)&v69,
        &v56);
      v50 = _R6;
      v26 = *(_QWORD *)&v66;
      v51 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 188);
      if ( v67 )
        v27 = (unsigned int *)(v67 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 + 1, v27) );
        }
        else
          ++*v27;
      v29 = *(_QWORD *)&v57;
      if ( v58 )
        v30 = (unsigned int *)(v58 + 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 + 1, v30) );
          ++*v30;
      v32 = operator new(0x18u);
      HIDWORD(v33) = sub_18EEDF0;
      *v32 = v3;
      v32[1] = v6;
      LODWORD(v33) = sub_18EEE84;
      *((_QWORD *)v32 + 1) = v26;
      *((_QWORD *)v32 + 2) = v29;
      v54 = v32;
      v55 = v33;
      v34 = *(_QWORD *)&v66;
        v35 = (unsigned int *)(v67 + 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 + 1, v35) );
          ++*v35;
      v37 = *(_QWORD *)&v57;
      v38 = *(_QWORD *)v4;
      v39 = *(_DWORD *)(v4 + 8);
        v40 = (unsigned int *)(v58 + 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
          ++*v40;
      v42 = operator new(0x24u);
      v42[8] = HIDWORD(v37);
      LODWORD(v43) = sub_18EF044;
      *v42 = v3;
      v42[1] = v6;
      HIDWORD(v43) = sub_18EF020;
      *((_QWORD *)v42 + 1) = v34;
      *((_QWORD *)v42 + 2) = v38;
      v42[6] = v39;
      v42[7] = v37;
      v52 = v42;
      v53 = v43;
      result = TaskGroup::queue(v51, (int)&v54, (int)&v52, v50 + HIDWORD(v50), v23);
      if ( (_DWORD)v53 )
        result = (LevelChunk *)((int (*)(void))v53)();
      if ( (_DWORD)v55 )
        result = (LevelChunk *)((int (*)(void))v55)();
      v44 = v58;
        v45 = (unsigned int *)(v58 + 4);
            result = (LevelChunk *)__ldrex(v45);
          while ( __strex((unsigned int)result - 1, v45) );
          result = (LevelChunk *)(*v45)--;
        if ( result == (LevelChunk *)1 )
          v46 = (unsigned int *)(v44 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (LevelChunk *)__ldrex(v46);
            while ( __strex((unsigned int)result - 1, v46) );
          }
          else
            result = (LevelChunk *)(*v46)--;
          if ( result == (LevelChunk *)1 )
            result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    }
    else
      while ( 1 )
        result = *v15;
        if ( !*v15 )
          break;
        LOBYTE(result) = *LevelChunk::getState(result);
        __dmb();
        result = (LevelChunk *)(unsigned __int8)result;
        if ( (unsigned __int8)result < 4u )
        v15 += 2;
        if ( (LevelChunk **)HIDWORD(v16) == v15 )
          goto LABEL_7;
    v47 = v67;
    if ( v67 )
      v48 = (unsigned int *)(v67 + 4);
      if ( &pthread_create )
        do
          result = (LevelChunk *)__ldrex(v48);
        while ( __strex((unsigned int)result - 1, v48) );
      else
        result = (LevelChunk *)(*v48)--;
      if ( result == (LevelChunk *)1 )
        v49 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            result = (LevelChunk *)__ldrex(v49);
          while ( __strex((unsigned int)result - 1, v49) );
          result = (LevelChunk *)(*v49)--;
          result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  }
  return result;
}


void *__fastcall ChunkSource::_checkForUnblockedChunksForPostProcessing(const ChunkPos *a1, LevelChunk *a2, int a3)
{
  const ChunkPos *v3; // r8@1
  LevelChunk *v4; // r6@1
  char v5; // r0@1
  void *v6; // r11@4
  int v7; // ST08_4@5
  char v8; // r0@6
  char v9; // r0@8
  char v10; // r0@10
  int v11; // r9@12
  unsigned int *v12; // r1@13
  unsigned int v13; // r0@15
  unsigned int *v14; // r7@19
  unsigned int v15; // r0@21
  void *result; // r0@26
  int v17; // [sp+0h] [bp-40h]@1
  LevelChunk *v18; // [sp+14h] [bp-2Ch]@5
  int v19; // [sp+18h] [bp-28h]@12

  v3 = a1;
  v17 = a3;
  v4 = a2;
  v5 = byte_28165F4;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire(&byte_28165F4) )
  {
    unk_2816640 = -1;
    unk_2816644 = -1;
    unk_2816648 = 0;
    unk_281664C = -1;
    unk_2816650 = 1;
    unk_2816654 = -1;
    unk_2816658 = 0xFFFFFFFFLL;
    unk_2816660 = 0;
    unk_2816664 = 0;
    unk_2816668 = 1;
    unk_281666C = 0;
    unk_2816670 = -1;
    unk_2816674 = 1;
    unk_2816678 = 0;
    unk_281667C = 1;
    unk_2816680 = 1;
    unk_2816684 = 1;
    j___cxa_guard_release(&byte_28165F4);
  }
  v6 = &unk_2816640;
  do
    v7 = *(_QWORD *)LevelChunk::getPosition(v4) + *(_QWORD *)v6;
    ChunkSource::getGeneratedChunk((ChunkSource *)&v18, v3);
    if ( v18 )
    {
      v8 = *LevelChunk::getState(v18);
      __dmb();
      if ( v8 == 2 )
      {
        ChunkSource::_checkChunkFreeToPostProcess(v3, v18, v17);
      }
      else
        v9 = *LevelChunk::getState(v18);
        __dmb();
        if ( v9 == 4 )
        {
          ChunkSource::_checkForReplacementData((int)v3, v18, v17);
        }
        else
          v10 = *LevelChunk::getState(v18);
          __dmb();
          if ( v10 == 6 )
            ChunkSource::_relightChunk((int)v3, v18, v17);
    }
    v11 = v19;
    if ( v19 )
      v12 = (unsigned int *)(v19 + 4);
      if ( &pthread_create )
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    v6 = (char *)v6 + 8;
    result = &unk_2816688;
  while ( v6 != &unk_2816688 );
  return result;
}


LevelChunk *__fastcall ChunkSource::getOrLoadChunk(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r8@1
  int v8; // r7@1
  LevelChunk *result; // r0@1
  __int64 v10; // r0@2
  int v11; // r6@2
  unsigned int *v12; // r1@3
  unsigned int v13; // r0@5
  unsigned int *v14; // r7@9
  unsigned int v15; // r0@11
  int v16; // r7@16
  unsigned int *v17; // r1@17
  unsigned int v18; // r0@19
  unsigned int *v19; // r6@23
  unsigned int v20; // r0@25
  Level *v21; // r0@30
  LevelChunk *v23; // r6@38
  char *v28; // r0@38
  signed int v29; // r9@38
  signed int v30; // r6@38
  int v33; // r11@40
  LevelChunk *v34; // r8@40
  unsigned int *v35; // r0@41
  unsigned int v36; // r1@43
  __int64 v37; // kr00_8@46
  unsigned int *v38; // r0@47
  unsigned int v39; // r1@49
  void *v40; // r0@52
  __int64 v41; // r1@52
  __int64 v42; // kr08_8@52
  unsigned int *v43; // r0@53
  unsigned int v44; // r1@55
  int v45; // r5@58 OVERLAPPED
  __int64 v47; // kr10_8@58
  int v48; // r10@58
  unsigned int *v49; // r0@59
  unsigned int v50; // r1@61
  void *v51; // r0@64
  __int64 v52; // r1@64
  int v53; // r4@68
  unsigned int *v54; // r1@69
  unsigned int *v55; // r5@75
  int v56; // [sp+8h] [bp-78h]@40
  unsigned int v57; // [sp+10h] [bp-70h]@40
  void *v58; // [sp+18h] [bp-68h]@64
  __int64 v59; // [sp+20h] [bp-60h]@64
  void *v60; // [sp+28h] [bp-58h]@52
  __int64 v61; // [sp+30h] [bp-50h]@52
  char v62; // [sp+3Bh] [bp-45h]@38
  char v63; // [sp+3Ch] [bp-44h]@40
  int v64; // [sp+40h] [bp-40h]@46
  char v65; // [sp+44h] [bp-3Ch]@2
  int v66; // [sp+48h] [bp-38h]@2
  char v67; // [sp+4Ch] [bp-34h]@40

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  result = *(LevelChunk **)v6;
  if ( !*(_DWORD *)v6 )
  {
    (*(void (__fastcall **)(char *, int, int, int))(*(_DWORD *)v5 + 24))(&v65, v5, v8, v7);
    v10 = *(_QWORD *)&v65;
    *(_DWORD *)&v65 = 0;
    v66 = 0;
    *(_DWORD *)v6 = v10;
    v11 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = HIDWORD(v10);
    if ( v11 )
    {
      v12 = (unsigned int *)(v11 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    v16 = v66;
    if ( v66 )
      v17 = (unsigned int *)(v66 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v21 = *(Level **)(v5 + 8);
    if ( !v21
      || (result = (LevelChunk *)Level::isClientSide(v21)) == 0
      && (result = (LevelChunk *)Level::getTearingDown(*(Level **)(v5 + 8))) == 0 )
      result = *(LevelChunk **)v6;
      if ( *(_DWORD *)v6 )
        result = (LevelChunk *)(unsigned __int8)*LevelChunk::getState(result);
        _ZF = v7 == 1;
        if ( v7 == 1 )
          _ZF = (unsigned __int8)result == 0;
        if ( _ZF )
          v23 = *(LevelChunk **)v6;
          _R0 = *(_DWORD *)LevelChunk::getPosition(*(LevelChunk **)v6) - *(_DWORD *)a5;
          __asm
          {
            VMOV            S0, R0
            VCVT.F32.S32    S16, S0
          }
          v28 = LevelChunk::getPosition(v23);
          __asm { VMUL.F32        S2, S16, S16 }
          v29 = 32;
          v30 = 16;
          _R0 = *((_DWORD *)v28 + 1) - *(_DWORD *)(a5 + 8);
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S0
            VADD.F32        S0, S0, S2
            VSQRT.F32       S0, S0
            VCVTR.S32.F32   S0, S0
          v62 = 0;
          __asm { VMOV            R7, S0 }
          if ( _R7 > 128 )
            v29 = 160;
            v30 = 32;
          std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
            (int)&v63,
            (int)&v67,
            &v62);
          v57 = v30;
          v33 = *(_DWORD *)(v6 + 4);
          v34 = *(LevelChunk **)v6;
          v56 = *(_DWORD *)(*(_DWORD *)(v5 + 12) + 188);
          if ( v33 )
            v35 = (unsigned int *)(v33 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 + 1, v35) );
            }
            else
              ++*v35;
          v37 = *(_QWORD *)&v63;
          if ( v64 )
            v38 = (unsigned int *)(v64 + 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 + 1, v38) );
              ++*v38;
          v40 = operator new(0x18u);
          HIDWORD(v41) = sub_18EE504;
          *(_DWORD *)v40 = v5;
          *((_DWORD *)v40 + 1) = v34;
          *((_DWORD *)v40 + 2) = v33;
          LODWORD(v41) = sub_18EE54C;
          *(_QWORD *)((char *)v40 + 12) = v37;
          *((_BYTE *)v40 + 20) = 0;
          v60 = v40;
          v61 = v41;
          v42 = *(_QWORD *)v6;
          if ( *(_QWORD *)v6 >> 32 )
            v43 = (unsigned int *)(HIDWORD(v42) + 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 + 1, v43) );
              ++*v43;
          *(_QWORD *)&v45 = *(_QWORD *)&v63;
          v47 = *(_QWORD *)a5;
          v48 = *(_DWORD *)(a5 + 8);
            v49 = (unsigned int *)(v64 + 4);
                v50 = __ldrex(v49);
              while ( __strex(v50 + 1, v49) );
              ++*v49;
          v51 = operator new(0x20u);
          *(_DWORD *)v51 = v5;
          *((_DWORD *)v51 + 1) = v42;
          HIDWORD(v52) = sub_18EE6E8;
          LODWORD(v52) = sub_18EE700;
          *((_DWORD *)v51 + 2) = HIDWORD(v42);
          *(_QWORD *)((char *)v51 + 12) = v47;
          *((_DWORD *)v51 + 5) = v48;
          *((_QWORD *)v51 + 3) = *(_QWORD *)&v45;
          v58 = v51;
          v59 = v52;
          result = TaskGroup::queue(v56, (int)&v60, (int)&v58, v29 + _R7, v57);
          if ( (_DWORD)v59 )
            result = (LevelChunk *)((int (*)(void))v59)();
          if ( (_DWORD)v61 )
            result = (LevelChunk *)((int (*)(void))v61)();
          v53 = v64;
            v54 = (unsigned int *)(v64 + 4);
                result = (LevelChunk *)__ldrex(v54);
              while ( __strex((unsigned int)result - 1, v54) );
              result = (LevelChunk *)(*v54)--;
            if ( result == (LevelChunk *)1 )
              v55 = (unsigned int *)(v53 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = (LevelChunk *)__ldrex(v55);
                while ( __strex((unsigned int)result - 1, v55) );
              }
              else
                result = (LevelChunk *)(*v55)--;
              if ( result == (LevelChunk *)1 )
                result = (LevelChunk *)(*(int (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
  }
  return result;
}


void __fastcall ChunkSource::~ChunkSource(ChunkSource *this)
{
  ChunkSource::~ChunkSource(this);
}


int __fastcall ChunkSource::ChunkSource(int result, int a2)
{
  *(_DWORD *)result = &off_2718280;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


signed int __fastcall ChunkSource::_checkNeighborPostProcessed(ChunkSource *this, const LevelChunk *a2, const ChunkPos *a3)
{
  ChunkSource *v3; // r5@1
  int v4; // ST00_4@1
  signed int v5; // r4@2
  int v6; // r5@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r6@13
  unsigned int v10; // r0@15
  LevelChunk *v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@6

  v3 = this;
  v4 = *(_QWORD *)LevelChunk::getPosition(a2) + *(_QWORD *)a3;
  ChunkSource::getGeneratedChunk((ChunkSource *)&v12, v3);
  if ( v12 )
  {
    v5 = 0;
    if ( (unsigned __int8)*LevelChunk::getState(v12) > 3u )
      v5 = 1;
    __dmb();
  }
  else
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
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
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v5;
}


int __fastcall ChunkSource::getExistingChunk(int result, const ChunkPos *a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
