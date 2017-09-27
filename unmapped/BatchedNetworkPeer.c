

void __fastcall BatchedNetworkPeer::flush(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@4
  unsigned int v5; // r7@6
  int v6; // r8@6
  void *v7; // r9@6
  _DWORD *v8; // r0@6
  __int64 v9; // r1@6
  void (__fastcall *v10)(char *, int, signed int); // r3@6
  void (*v11)(void); // r7@12
  char *v12; // r0@12
  char *v13; // r0@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  char v18; // [sp+8h] [bp-48h]@7
  void (*v19)(void); // [sp+10h] [bp-40h]@6
  int v20; // [sp+14h] [bp-3Ch]@7
  _DWORD *v21; // [sp+18h] [bp-38h]@6
  __int64 v22; // [sp+20h] [bp-30h]@6
  char *v23; // [sp+28h] [bp-28h]@12
  void *v24; // [sp+2Ch] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  j_BinaryStream::getAndReleaseData((BinaryStream *)&v24, a1 + 8);
  if ( *((_DWORD *)v24 - 3) )
  {
    if ( *(_BYTE *)(v2 + 44) )
    {
      if ( j_TaskGroup::isEmpty(*(TaskGroup **)(v2 + 36)) )
      {
        v4 = 0;
        *(_DWORD *)(v2 + 40) = 0;
      }
      else
        v4 = *(_DWORD *)(v2 + 40);
      v5 = v4 + 1;
      *(_DWORD *)(v2 + 40) = v4 + 1;
      v6 = *(_DWORD *)(v2 + 36);
      v7 = v24;
      v24 = &unk_28898CC;
      v8 = j_operator new(8u);
      HIDWORD(v9) = sub_19A1C5C;
      *v8 = v2;
      v8[1] = v7;
      LODWORD(v9) = sub_19A1D28;
      v21 = v8;
      v22 = v9;
      v19 = 0;
      v10 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
      if ( v10 )
        v10(&v18, v3, 2);
        v20 = *(_DWORD *)(v3 + 12);
        v19 = *(void (**)(void))(v3 + 8);
        v5 = *(_DWORD *)(v2 + 40);
      j_TaskGroup::queue(v6, (int)&v21, (int)&v18, v5, 0xFFFFFFFF);
      if ( v19 )
        v19();
      if ( (_DWORD)v22 )
        ((void (*)(void))v22)();
    }
    else
      v11 = *(void (**)(void))(**(_DWORD **)(v2 + 4) + 8);
      v23 = (char *)v24;
      v11();
      v12 = v23 - 12;
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      if ( *(_DWORD *)(v3 + 8) )
        (*(void (__fastcall **)(int))(v3 + 12))(v3);
  }
  v13 = (char *)v24 - 12;
  if ( (int *)((char *)v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)((char *)v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


signed int __fastcall BatchedNetworkPeer::receivePacket(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r1@1
  int v5; // r0@2
  void *v6; // r6@4
  int v7; // r0@4
  char *v8; // r0@6
  signed int v9; // r5@9
  void *v10; // r0@10
  char *v11; // r0@14
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  int v19; // [sp+4h] [bp-2Ch]@10
  char *v20; // [sp+8h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 32);
  if ( !v4 )
  {
    v20 = (char *)&unk_28898CC;
    v5 = (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 12))();
    if ( v5 == 2 )
    {
      v11 = v20 - 12;
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      return 2;
    }
    if ( !v5 )
      v6 = j_operator new(0x10u);
      j_ReadOnlyBinaryStream::ReadOnlyBinaryStream((int)v6, &v20);
      v7 = *(_DWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 32) = v6;
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v8 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v4 = *(_DWORD *)(v2 + 32);
    if ( !v4 )
      return 1;
  }
  if ( *(_DWORD *)(**(_DWORD **)(v4 + 12) - 12) == *(_DWORD *)(v4 + 4) )
    v9 = 1;
    *(_DWORD *)(v2 + 32) = 0;
LABEL_13:
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    return v9;
  j_ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, v4);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v19);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v4 = *(_DWORD *)(v2 + 32);
  v9 = 0;
    if ( v4 )
      goto LABEL_13;
  return v9;
}


BatchedNetworkPeer *__fastcall BatchedNetworkPeer::~BatchedNetworkPeer(BatchedNetworkPeer *this)
{
  BatchedNetworkPeer *v1; // r4@1
  TaskGroup *v2; // r0@1
  TaskGroup *v3; // r0@2
  int v4; // r0@3
  int v5; // r1@5
  void *v6; // r0@5
  int v7; // r1@6
  void *v8; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_2719E58;
  j_TaskGroup::flush(*((TaskGroup **)this + 9));
  v2 = (TaskGroup *)*((_DWORD *)v1 + 9);
  if ( v2 )
  {
    v3 = j_TaskGroup::~TaskGroup(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 9) = 0;
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 2) = &off_26D53E4;
  v5 = *((_DWORD *)v1 + 6);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
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
  *((_DWORD *)v1 + 2) = &off_26E91A4;
  v7 = *((_DWORD *)v1 + 4);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v7 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


int __fastcall BatchedNetworkPeer::setAsyncEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 44) = a2;
  return result;
}


void __fastcall BatchedNetworkPeer::~BatchedNetworkPeer(BatchedNetworkPeer *this)
{
  BatchedNetworkPeer *v1; // r0@1

  v1 = j_BatchedNetworkPeer::~BatchedNetworkPeer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BatchedNetworkPeer::flush(int a1, int a2)
{
  BatchedNetworkPeer::flush(a1, a2);
}


void __fastcall BatchedNetworkPeer::~BatchedNetworkPeer(BatchedNetworkPeer *this)
{
  BatchedNetworkPeer::~BatchedNetworkPeer(this);
}


int __fastcall BatchedNetworkPeer::BatchedNetworkPeer(__int64 a1)
{
  int v1; // r4@1
  int v2; // r1@1
  Scheduler *v3; // r0@2
  WorkerPool *v4; // r0@2
  WorkerPool *v5; // r0@3
  int v7; // [sp+10h] [bp-20h]@2
  char v8; // [sp+17h] [bp-19h]@2
  int v9; // [sp+18h] [bp-18h]@2
  int v10; // [sp+1Ch] [bp-14h]@2

  v1 = a1;
  LODWORD(a1) = &off_2719E58;
  *(_QWORD *)v1 = a1;
  j_BinaryStream::BinaryStream((BinaryStream *)(v1 + 8));
  *(_DWORD *)(v1 + 32) = 0;
  v2 = dword_2823260;
  if ( !dword_2823260 )
  {
    v3 = (Scheduler *)j_Scheduler::singleton((Scheduler *)&unk_282325C);
    v9 = 1;
    v8 = 1;
    v7 = 2;
    j_std::make_unique<WorkerPool,Scheduler &,char const(&)[28],int,bool,OSThreadPriority>(
      &v10,
      v3,
      "Batched Network Worker Pool",
      &v9,
      &v8,
      &v7);
    v2 = v10;
    v10 = 0;
    v4 = (WorkerPool *)dword_2823260;
    dword_2823260 = v2;
    if ( v4 )
    {
      v5 = j_WorkerPool::~WorkerPool(v4);
      j_operator delete((void *)v5);
      v2 = dword_2823260;
    }
  }
  j_std::make_unique<TaskGroup,WorkerPool &,char const(&)[26]>((_DWORD *)(v1 + 36), v2, "Batched Network TaskGroup");
  *(_DWORD *)(v1 + 40) = 0;
  *(_BYTE *)(v1 + 44) = 0;
  return v1;
}
