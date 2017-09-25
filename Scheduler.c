

int __fastcall Scheduler::setTargetFPS(Scheduler *this, unsigned int a2)
{
  Scheduler *v2; // r4@1
  int result; // r0@1
  int v4; // [sp+0h] [bp-10h]@1

  v2 = this;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a2;
  sub_21E034C(&v4);
  *((_QWORD *)v2 + 7) = *(_QWORD *)&v4 + 1500000000LL;
  result = 0;
  *((_DWORD *)v2 + 2) = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  return result;
}


signed int __fastcall Scheduler::start(Scheduler *this, unsigned int a2)
{
  Scheduler *v2; // r4@1
  int v3; // r2@3
  WorkerPool *v4; // r0@3
  WorkerPool *v5; // r0@4
  int v6; // r2@5
  WorkerPool *v7; // r0@5
  WorkerPool *v8; // r0@6
  int v9; // r2@7
  WorkerPool *v10; // r0@7
  WorkerPool *v11; // r0@8
  int v12; // r1@9
  TaskGroup *v13; // r0@9
  TaskGroup *v14; // r0@10
  signed int result; // r0@11
  int v16; // [sp+8h] [bp-50h]@9
  int v17; // [sp+Ch] [bp-4Ch]@7
  char v18; // [sp+13h] [bp-45h]@7
  int v19; // [sp+14h] [bp-44h]@7
  int v20; // [sp+18h] [bp-40h]@7
  int v21; // [sp+1Ch] [bp-3Ch]@5
  char v22; // [sp+23h] [bp-35h]@5
  int v23; // [sp+24h] [bp-34h]@5
  int v24; // [sp+28h] [bp-30h]@5
  int v25; // [sp+2Ch] [bp-2Ch]@3
  char v26; // [sp+33h] [bp-25h]@3
  unsigned int v27; // [sp+34h] [bp-24h]@3
  int v28; // [sp+38h] [bp-20h]@3
  int v29; // [sp+3Ch] [bp-1Ch]@3
  unsigned int v30; // [sp+40h] [bp-18h]@3

  v2 = this;
  if ( a2 <= 2 )
    a2 = 2;
  v30 = a2;
  ThreadUtil::setAvailableCores((ThreadUtil *)&v30, (const unsigned int *)a2);
  v29 = 1;
  ThreadUtil::setCurrentThreadPriority(&v29);
  v27 = v30 - 1;
  v26 = 1;
  v25 = 2;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[15],unsigned int,bool,OSThreadPriority>(
    &v28,
    v2,
    "Streaming Pool",
    (int *)&v27,
    &v26,
    &v25);
  v3 = v28;
  v28 = 0;
  v4 = (WorkerPool *)WorkerPool::ASYNC;
  WorkerPool::ASYNC = v3;
  if ( v4 )
  {
    v5 = WorkerPool::~WorkerPool(v4);
    operator delete((void *)v5);
  }
  v23 = 1;
  v22 = 1;
  v21 = 2;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[10],int,bool,OSThreadPriority>(
    &v24,
    "IO Thread",
    &v23,
    &v22,
    &v21);
  v6 = v24;
  v24 = 0;
  v7 = (WorkerPool *)WorkerPool::DISK;
  WorkerPool::DISK = v6;
  if ( v7 )
    v8 = WorkerPool::~WorkerPool(v7);
    operator delete((void *)v8);
  v19 = 1;
  v18 = 1;
  v17 = 2;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[12],int,bool,OSThreadPriority>(
    &v20,
    "REST Thread",
    &v19,
    &v18,
    &v17);
  v9 = v20;
  v20 = 0;
  v10 = (WorkerPool *)WorkerPool::NETWORK;
  WorkerPool::NETWORK = v9;
  if ( v10 )
    v11 = WorkerPool::~WorkerPool(v10);
    operator delete((void *)v11);
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[9]>(&v16, WorkerPool::DISK, "IO Group");
  v12 = v16;
  v16 = 0;
  v13 = (TaskGroup *)TaskGroup::DISK;
  TaskGroup::DISK = v12;
  if ( v13 )
    v14 = TaskGroup::~TaskGroup(v13);
    operator delete((void *)v14);
    v12 = TaskGroup::DISK;
  result = 1;
  *(_BYTE *)(v12 + 16) = 1;
  return result;
}


signed int __fastcall Scheduler::isStarved(Scheduler *this)
{
  _DWORD *v1; // r4@1
  Scheduler *v2; // r0@2
  Scheduler *v3; // r0@3
  signed int result; // r0@4
  int v5; // [sp+0h] [bp-18h]@2

  v1 = (_DWORD *)Scheduler::mInstance;
  if ( !Scheduler::mInstance )
  {
    v1 = operator new(0x50u);
    v1[6] = 0;
    v1[2] = 0;
    v1[3] = 0;
    *v1 = 0;
    v1[1] = 0;
    v1[8] = 0;
    v1[9] = 1072693248;
    v1[10] = 0;
    v1[11] = 0;
    v1[12] = 0;
    v1[14] = 0;
    v1[15] = 0;
    v1[16] = 0;
    v1[17] = 0;
    v1[18] = 0;
    v1[4] = 60;
    v1[5] = 60;
    sub_21E034C(&v5);
    *((_QWORD *)v1 + 7) = *(_QWORD *)&v5 + 1500000000LL;
    v2 = (Scheduler *)Scheduler::mInstance;
    Scheduler::mInstance = v1;
    if ( v2 )
    {
      v3 = Scheduler::~Scheduler(v2);
      operator delete((void *)v3);
      v1 = (_DWORD *)Scheduler::mInstance;
    }
  }
  result = 0;
  if ( *((_QWORD *)v1 + 2) >> 32 != (unsigned int)*((_QWORD *)v1 + 2) )
    result = 1;
  return result;
}


void __fastcall Scheduler::destroySingleton(Scheduler *this)
{
  Scheduler::destroySingleton(this);
}


_DWORD *__fastcall Scheduler::singleton(Scheduler *this)
{
  _DWORD *v1; // r4@1
  Scheduler *v2; // r0@2
  Scheduler *v3; // r0@3
  int v5; // [sp+0h] [bp-18h]@2

  v1 = (_DWORD *)Scheduler::mInstance;
  if ( !Scheduler::mInstance )
  {
    v1 = operator new(0x50u);
    v1[6] = 0;
    v1[2] = 0;
    v1[3] = 0;
    *v1 = 0;
    v1[1] = 0;
    v1[8] = 0;
    v1[9] = 1072693248;
    v1[10] = 0;
    v1[11] = 0;
    v1[12] = 0;
    v1[14] = 0;
    v1[15] = 0;
    v1[16] = 0;
    v1[17] = 0;
    v1[18] = 0;
    v1[4] = 60;
    v1[5] = 60;
    sub_21E034C(&v5);
    *((_QWORD *)v1 + 7) = *(_QWORD *)&v5 + 1500000000LL;
    v2 = (Scheduler *)Scheduler::mInstance;
    Scheduler::mInstance = v1;
    if ( v2 )
    {
      v3 = Scheduler::~Scheduler(v2);
      operator delete((void *)v3);
      v1 = (_DWORD *)Scheduler::mInstance;
    }
  }
  return v1;
}


int __fastcall Scheduler::_updateTimeCap(Scheduler *this, unsigned int _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VMOV.F64        D1, #1.0
    VCVT.F64.U32    D0, S0
    VDIV.F64        D0, D1, D0
    VMOV.F64        D1, #-6.0
    VLDR            D2, [R0,#0x20]
    VMUL.F64        D1, D2, D1
    VADD.F64        D0, D0, D1
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall Scheduler::Scheduler(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  int result; // r0@1
  int v4; // [sp+0h] [bp-18h]@1
  int v5; // [sp+4h] [bp-14h]@1

  v1 = a1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1072693248;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 16) = 60;
  *(_DWORD *)(a1 + 20) = 60;
  sub_21E034C(&v4);
  HIDWORD(v2) = v5;
  LODWORD(v2) = v4 + 1500000000;
  *(_QWORD *)(v1 + 56) = v2 + 1500000000;
  result = v1;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 0;
  return result;
}


signed int __fastcall Scheduler::_runCoroutines(Scheduler *this, int a2, double _R2)
{
  unsigned int v9; // r1@2
  int v10; // r5@2
  int v11; // r8@2
  int v12; // r7@2
  int v13; // r1@3
  signed int v14; // r6@3
  signed int v15; // r5@5
  signed int result; // r0@11

  __asm { VMOV            D8, R2, R3 }
  _R4 = this;
  __asm
  {
    VCMPE.F64       D8, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_11:
    result = 0;
  else
    _R0 = getTimeS();
    v9 = *((_DWORD *)_R4 + 3);
    __asm { VMOV            D9, R0, R2 }
    v10 = *((_DWORD *)_R4 + 16);
    v11 = 0;
    v12 = 0;
    __asm { VMOV.F64        D10, D9 }
    while ( 1 )
    {
      v15 = WorkerPool::processNext(*(WorkerPool **)(v10 + 4 * v9));
      if ( !v15 && ++v12 >= (signed int)((*((_QWORD *)_R4 + 8) >> 32) - *((_QWORD *)_R4 + 8)) >> 2 )
        break;
      _R0 = getTimeS();
      __asm
      {
        VMOV            D0, R0, R1
        VSUB.F64        D1, D0, D9
        VCMPE.F64       D1, D8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        goto LABEL_11;
      if ( v15 == 1 )
        __asm { VSUB.F64        D1, D0, D10 }
        ++*((_DWORD *)_R4 + 12);
        __asm
        {
          VLDR            D2, [R4,#0x28]
          VMOV.F64        D10, D0
          VADD.F64        D1, D1, D2
          VSTR            D1, [R4,#0x28]
        }
      v13 = *((_QWORD *)_R4 + 8) >> 32;
      v10 = *((_QWORD *)_R4 + 8);
      v14 = v13 - v10;
      v9 = (*((_DWORD *)_R4 + 3) + 1) % (unsigned int)((v13 - v10) >> 2);
      ++v11;
      *((_DWORD *)_R4 + 3) = v9;
      if ( v11 == v14 >> 2 )
        v12 = 0;
        v11 = 0;
    }
    result = 1;
  return result;
}


int __fastcall Scheduler::unregisterPool(int result, WorkerPool *a2)
{
  int v2; // r12@1
  int v3; // lr@1
  int v4; // r3@1
  int v5; // r2@1
  int v6; // r4@2
  bool v7; // zf@3
  WorkerPool **v8; // r3@3
  WorkerPool *v9; // r5@6
  bool v10; // zf@6
  int v11; // r3@11

  v3 = *(_QWORD *)(result + 64) >> 32;
  v2 = *(_QWORD *)(result + 64);
  v4 = (v3 - v2) >> 4;
  v5 = *(_QWORD *)(result + 64);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
    v5 = *(_QWORD *)(result + 64);
    do
    {
      v7 = *(_DWORD *)v5 == (_DWORD)a2;
      v8 = (WorkerPool **)v5;
      if ( *(WorkerPool **)v5 != a2 )
      {
        v8 = (WorkerPool **)(v5 + 4);
        v7 = *(_DWORD *)(v5 + 4) == (_DWORD)a2;
      }
      if ( v7 )
        goto LABEL_20;
      v8 = (WorkerPool **)(v5 + 8);
      v9 = *(WorkerPool **)(v5 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        v8 = (WorkerPool **)(v5 + 12);
        v10 = *(_DWORD *)(v5 + 12) == (_DWORD)a2;
      if ( v10 )
      --v6;
      v5 += 16;
    }
    while ( v6 > 1 );
  }
  if ( 1 == (v3 - v5) >> 2 )
    v8 = (WorkerPool **)v5;
    goto LABEL_19;
  v11 = (v3 - v5) >> 2;
  if ( v11 == 2 )
  else
    if ( v11 != 3 )
      goto LABEL_22;
    if ( *(WorkerPool **)v5 == a2 )
      goto LABEL_20;
    v8 = (WorkerPool **)(v5 + 4);
  if ( *v8 != a2 )
    ++v8;
LABEL_19:
    if ( *v8 != a2 )
LABEL_20:
  if ( v8 != (WorkerPool **)v3 )
    *v8 = *(WorkerPool **)(v3 - 4);
    v3 = *(_DWORD *)(result + 68) - 4;
    *(_DWORD *)(result + 68) = v3;
    v2 = *(_DWORD *)(result + 64);
LABEL_22:
  if ( *(_DWORD *)(result + 12) >= (unsigned int)((v3 - v2) >> 2) )
    *(_DWORD *)(result + 12) = 0;
  return result;
}


Scheduler *__fastcall Scheduler::~Scheduler(Scheduler *this)
{
  Scheduler *v1; // r4@1
  int v2; // r1@1 OVERLAPPED
  int v3; // r2@1 OVERLAPPED
  char *v4; // r5@1
  signed int v5; // r0@1
  signed int v6; // r2@4
  signed int v7; // r6@5
  int v8; // r6@5
  int v9; // r7@5
  void *v10; // r0@9

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 8);
  v4 = 0;
  v5 = v3 - v2;
  if ( (v3 - v2) >> 2 )
  {
    if ( (unsigned int)(v5 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v4 = (char *)operator new(v5);
    *(_QWORD *)&v2 = *((_QWORD *)v1 + 8);
  }
  v6 = v3 - v2;
  if ( 0 != v6 >> 2 )
    v7 = v6 >> 2;
    _aeabi_memmove4(v4, v2);
    v8 = 4 * v7;
    v9 = 0;
    do
    {
      WorkerPool::_setScheduler(*(WorkerPool **)&v4[v9], 0);
      v9 += 4;
    }
    while ( v8 != v9 );
  if ( v4 )
    operator delete(v4);
  v10 = (void *)*((_DWORD *)v1 + 16);
  if ( v10 )
    operator delete(v10);
  return v1;
}


int __fastcall Scheduler::processCoroutines(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r8@1
  unsigned int v6; // r9@1
  unsigned int v14; // r1@5
  int v15; // r7@5
  int v16; // r5@5
  int v17; // r6@5
  int v18; // r1@6
  signed int v19; // r4@6
  signed int v20; // r7@8
  signed int v23; // r7@17
  int v24; // r3@17
  signed __int64 v25; // r0@17
  __int64 v27; // r6@26
  WorkerPool *v28; // t1@27
  unsigned int v29; // r0@29
  unsigned int v30; // r1@29
  _DWORD *v31; // r0@29
  unsigned int v33; // r1@33 OVERLAPPED
  int v34; // r2@33
  unsigned int v35; // r3@33
  __int64 v36; // r0@38
  unsigned int v38; // [sp+0h] [bp-58h]@17
  int v39; // [sp+4h] [bp-54h]@19
  int v40; // [sp+8h] [bp-50h]@15
  int v41; // [sp+10h] [bp-48h]@1
  int v42; // [sp+14h] [bp-44h]@38

  _R10 = a1;
  v5 = a4;
  v6 = a3;
  sub_21E034C(&v41);
  _R5 = *(_DWORD *)(_R10 + 20);
  if ( _R5 )
  {
    _R0 = _aeabi_l2f(v6, v5);
    __asm
    {
      VMOV            S0, R5
      VLDR            S8, =-1.0e-9
      VMOV.F64        D2, #1.0
      VCVT.F64.U32    D1, S0
      VDIV.F64        D1, D2, D1
      VMOV.F64        D3, #-6.0
      VCVT.F32.U32    S0, S0
      VLDR            D2, [R10,#0x20]
      VMOV            S10, R0
      VMUL.F64        D2, D2, D3
    }
    ++*(_DWORD *)_R10;
      VMUL.F32        S6, S10, S8
      VADD.F64        D1, D1, D2
      VCVT.F64.F32    D2, S6
      VADD.F64        D9, D1, D2
      VCMPE.F64       D9, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_14:
      ++*(_DWORD *)(_R10 + 4);
      goto LABEL_17;
      VMOV.F32        S2, #1.0
      VDIV.F32        S0, S2, S0
      VMOV.F32        S2, #0.5
      VMUL.F32        S16, S0, S2
  }
  else
      VLDR            S16, =0.05
      VLDR            D9, =0.100000001
  _R0 = getTimeS();
  v14 = *(_DWORD *)(_R10 + 12);
  __asm { VMOV            D10, R0, R2 }
  v15 = *(_DWORD *)(_R10 + 64);
  v16 = 0;
  v17 = 0;
  __asm { VMOV.F64        D11, D10 }
  while ( 1 )
    v20 = WorkerPool::processNext(*(WorkerPool **)(v15 + 4 * v14));
    if ( !v20 && ++v17 >= (signed int)((*(_QWORD *)(_R10 + 64) >> 32) - *(_QWORD *)(_R10 + 64)) >> 2 )
      break;
    _R0 = getTimeS();
      VMOV            D0, R0, R1
      VSUB.F64        D1, D0, D10
      VCMPE.F64       D1, D9
    if ( !(_NF ^ _VF) )
      goto LABEL_14;
    if ( v20 == 1 )
      __asm { VSUB.F64        D1, D0, D11 }
      ++*(_DWORD *)(_R10 + 48);
      __asm
      {
        VLDR            D2, [R10,#0x28]
        VMOV.F64        D11, D0
        VADD.F64        D1, D1, D2
        VSTR            D1, [R10,#0x28]
      }
    v18 = *(_QWORD *)(_R10 + 64) >> 32;
    v15 = *(_QWORD *)(_R10 + 64);
    v19 = v18 - v15;
    v14 = (*(_DWORD *)(_R10 + 12) + 1) % (unsigned int)((v18 - v15) >> 2);
    ++v16;
    *(_DWORD *)(_R10 + 12) = v14;
    if ( v16 == v19 >> 2 )
      v17 = 0;
      v16 = 0;
  sub_21E034C(&v40);
  _R0 = _aeabi_l2f(v40 + v6 - v41, (*(_QWORD *)&v40 + __PAIR__(v5, v6) - *(_QWORD *)&v41) >> 32);
  __asm
    VLDR            S0, =1.0e-9
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    ++*(_DWORD *)(_R10 + 8);
LABEL_17:
  sub_21E034C(&v38);
  v23 = 0;
  v24 = *(_DWORD *)(_R10 + 60);
  LODWORD(v25) = 0;
  if ( v38 < *(_DWORD *)(_R10 + 56) )
    LODWORD(v25) = 1;
  if ( v39 < v24 )
    v23 = 1;
  if ( v39 == v24 )
    v23 = v25;
  if ( !v23 )
    _R0 = *(_DWORD *)(_R10 + 48);
    if ( _R0 )
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VLDR            D1, [R10,#0x28]
        VDIV.F64        D0, D1, D0
        VSTR            D0, [R10,#0x20]
      *(_DWORD *)(_R10 + 40) = 0;
      *(_DWORD *)(_R10 + 44) = 0;
      *(_DWORD *)(_R10 + 48) = 0;
    v27 = *(_QWORD *)(_R10 + 64);
    while ( HIDWORD(v27) != (_DWORD)v27 )
      v28 = *(WorkerPool **)v27;
      LODWORD(v27) = v27 + 4;
      WorkerPool::updatePerformanceStats(v28);
      VLDR            S0, [R10]
      VMOV.F32        S2, #0.25
      VLDR            S4, [R10,#4]
      VCVT.F32.U32    S4, S4
      VMUL.F32        S2, S0, S2
      VCMPE.F32       S4, S2
      __asm { VLDR            S2, =0.8 }
      v31 = (_DWORD *)(_R10 + 8);
      _R1 = *(_DWORD *)(_R10 + 8);
        VMUL.F32        S0, S0, S2
        VMOV            S2, R1
        VCVT.F32.U32    S2, S2
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        *(_QWORD *)&v33 = *(_QWORD *)(_R10 + 16);
        v35 = 2 * v34;
        if ( !v34 )
          v35 = 10;
        if ( v35 >= v33 )
          v35 = v33;
        *(_DWORD *)(_R10 + 20) = v35;
    else
      v29 = *(_DWORD *)(_R10 + 20);
      _CF = v29 >= 0x14;
      v30 = v29 >> 1;
      if ( !_CF )
        v30 = 0;
      *(_DWORD *)(_R10 + 20) = v30;
    *v31 = 0;
    *(_DWORD *)_R10 = 0;
    *(_DWORD *)(_R10 + 4) = 0;
    HIDWORD(v36) = v42;
    LODWORD(v36) = v41 + 1500000000;
    v25 = v36 + 1500000000;
    *(_QWORD *)(_R10 + 56) = v25;
  return v25;
}


void __fastcall Scheduler::destroySingleton(Scheduler *this)
{
  TaskGroup *v1; // r0@1
  TaskGroup *v2; // r0@2
  WorkerPool *v3; // r0@3
  WorkerPool *v4; // r0@4
  WorkerPool *v5; // r0@5
  WorkerPool *v6; // r0@6
  WorkerPool *v7; // r0@7
  WorkerPool *v8; // r0@8
  Scheduler *v9; // r0@9
  Scheduler *v10; // r0@10

  v1 = (TaskGroup *)TaskGroup::DISK;
  TaskGroup::DISK = 0;
  if ( v1 )
  {
    v2 = TaskGroup::~TaskGroup(v1);
    operator delete((void *)v2);
  }
  v3 = (WorkerPool *)WorkerPool::ASYNC;
  WorkerPool::ASYNC = 0;
  if ( v3 )
    v4 = WorkerPool::~WorkerPool(v3);
    operator delete((void *)v4);
  v5 = (WorkerPool *)WorkerPool::DISK;
  WorkerPool::DISK = 0;
  if ( v5 )
    v6 = WorkerPool::~WorkerPool(v5);
    operator delete((void *)v6);
  v7 = (WorkerPool *)WorkerPool::NETWORK;
  WorkerPool::NETWORK = 0;
  if ( v7 )
    v8 = WorkerPool::~WorkerPool(v7);
    operator delete((void *)v8);
  v9 = (Scheduler *)Scheduler::mInstance;
  Scheduler::mInstance = 0;
  if ( v9 )
    v10 = Scheduler::~Scheduler(v9);
    j_j_j__ZdlPv_5((void *)v10);
}


char *__fastcall Scheduler::registerPool(Scheduler *this, WorkerPool *a2)
{
  Scheduler *v2; // r4@1
  WorkerPool *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 68);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 16);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 8) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 8);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 8) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 18) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 17) + 4);
    *((_DWORD *)v2 + 17) = result;
  return result;
}
