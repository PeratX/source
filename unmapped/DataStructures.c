

int __fastcall DataStructures::MemoryPool<RakNet::RakPeer::SocketQueryOutput>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 12);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) >> 4 )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::RemoteSystemIndex>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 8);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xCu )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::InternalPacketRefCountedData>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 8);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xCu )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::RakPeer::BufferedCommandStruct>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xE8;
  v18 = rakMalloc_Ex(4 * (v15 / 0xE8), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xE8 )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 224) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 232;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


int __fastcall DataStructures::MemoryPool<RakNet::InternalPacketRefCountedData>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xC;
  v18 = rakMalloc_Ex(4 * (v15 / 0xC), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xC )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 8) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 12;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


int __fastcall DataStructures::ThreadsafeAllocatingQueue<RakNet::SystemAddress>::~ThreadsafeAllocatingQueue(int a1)
{
  int v1; // r8@1
  void *v2; // r0@2
  int v3; // r6@5
  int v4; // r4@6
  int v5; // r5@6
  int v6; // r6@8
  int v7; // r4@9
  int v8; // r5@9

  v1 = a1;
  j_RakNet::SimpleMutex::~SimpleMutex((RakNet::SimpleMutex *)(a1 + 40));
  if ( *(_DWORD *)(v1 + 36) )
  {
    v2 = *(void **)(v1 + 24);
    if ( v2 )
      j_operator delete[](v2);
  }
  j_RakNet::SimpleMutex::~SimpleMutex((RakNet::SimpleMutex *)(v1 + 20));
  if ( *(_DWORD *)(v1 + 8) >= 1 )
    v3 = *(_DWORD *)v1;
    do
    {
      rakFree_Ex(
        *(_DWORD *)v3,
        "F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\dependencies\\Raknet\\Raknet.Shared\\..\\..\\..\\..\\..\\src-d"
        "eps\\raknet/DS_MemoryPool.h",
        91);
        *(_DWORD *)(v3 + 8),
      v4 = *(_DWORD *)v1;
      v5 = *(_DWORD *)(v3 + 12);
        v3,
      v3 = v5;
    }
    while ( v5 != v4 );
  if ( *(_DWORD *)(v1 + 12) >= 1 )
    v6 = *(_DWORD *)(v1 + 4);
        *(_DWORD *)v6,
        *(_DWORD *)(v6 + 8),
      v7 = *(_DWORD *)(v1 + 4);
      v8 = *(_DWORD *)(v6 + 12);
        v6,
      v6 = v8;
    while ( v8 != v7 );
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  return v1;
}


int __fastcall DataStructures::MemoryPool<RakNet::InternalPacket>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 240);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xF8u )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::List<RakNet::SystemAddress>::Insert(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  unsigned int v5; // r5@2
  signed __int64 v6; // r0@5
  RakNet::SystemAddress *v7; // r0@9
  RakNet::SystemAddress *v8; // r6@9
  int v9; // r5@9
  __int64 v10; // r0@14
  int v11; // r7@16
  unsigned int v12; // r5@16
  int result; // r0@23

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v5 = 2 * v4;
    if ( !(_DWORD)v4 )
      v5 = 16;
    *(_DWORD *)(v2 + 8) = v5;
    if ( v5 )
    {
      v6 = 132LL * v5;
      if ( !is_mul_ok(0x84u, v5) )
        HIDWORD(v6) = 1;
      if ( HIDWORD(v6) )
        LODWORD(v6) = -1;
      v7 = (RakNet::SystemAddress *)j_operator new[](v6);
      v8 = v7;
      v9 = 132 * v5;
      do
      {
        v9 -= 132;
        v7 = (RakNet::SystemAddress *)((char *)j_RakNet::SystemAddress::SystemAddress(v7) + 132);
      }
      while ( v9 );
    }
    else
      v8 = 0;
    LODWORD(v10) = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
      if ( *(_DWORD *)(v2 + 4) )
        v11 = 0;
        v12 = 0;
        do
        {
          j_RakNet::SystemAddress::operator=((int)v8 + v11, v10 + v11);
          v10 = *(_QWORD *)v2;
          ++v12;
          v11 += 132;
        }
        while ( v12 < (unsigned int)(*(_QWORD *)v2 >> 32) );
        if ( (_DWORD)v10 )
          j_operator delete[]((void *)v10);
      else
        j_operator delete[]((void *)v10);
    *(_DWORD *)v2 = v8;
    LODWORD(v4) = *(_DWORD *)(v2 + 4);
  }
  else
    v8 = *(RakNet::SystemAddress **)v2;
  j_RakNet::SystemAddress::operator=((int)v8 + 132 * v4, v3);
  result = *(_DWORD *)(v2 + 4) + 1;
  *(_DWORD *)(v2 + 4) = result;
  return result;
}


unsigned int __fastcall DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(int a1, int a2, int a3)
{
  return DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(
           a1,
           a2,
           a3);
}


_BYTE *__fastcall DataStructures::Queue<bool>::Compress(_BYTE *result)
{
  _BYTE *v1; // r4@1
  unsigned int v2; // r11@1
  int v3; // r1@2
  unsigned int v4; // r10@2
  unsigned int v5; // r0@3
  unsigned int v6; // r1@3
  unsigned int v7; // r6@4
  bool v8; // cf@4
  bool v9; // zf@4
  unsigned int v10; // r0@7
  _BYTE *v11; // r0@11
  unsigned int v12; // r5@15
  int v13; // r7@15
  int v14; // r8@19
  unsigned int v15; // r4@19
  _BYTE *v16; // r9@19
  int v17; // r1@20
  _BYTE *v18; // [sp+4h] [bp-34h]@13
  unsigned int v19; // [sp+8h] [bp-30h]@2
  _BYTE *v20; // [sp+Ch] [bp-2Ch]@13
  unsigned int v21; // [sp+10h] [bp-28h]@2

  v1 = result;
  v2 = *((_DWORD *)result + 3);
  if ( v2 )
  {
    v3 = *((_DWORD *)result + 2);
    v21 = *((_DWORD *)result + 1);
    v4 = v3 - v21;
    v19 = *((_DWORD *)result + 2);
    if ( v3 >= v21 )
    {
      v10 = 1;
      do
      {
        v7 = v10;
        v8 = v10 >= v4;
        v9 = v10 == v4;
        v10 *= 2;
      }
      while ( v9 || !v8 );
    }
    else
      v5 = v4 + v2;
      v6 = 1;
        v7 = v6;
        v8 = v6 >= v5;
        v9 = v6 == v5;
        v6 *= 2;
    if ( v7 )
      v11 = j_operator new[](v7);
      v11 = 0;
    v20 = v11;
    v18 = v1;
    if ( v19 >= v21 )
      if ( v19 != v21 )
        v14 = *(_DWORD *)v1;
        v15 = v21;
        v16 = v11;
        do
        {
          v17 = v15++ % v2;
          *v16++ = *(_BYTE *)(v14 + v17);
        }
        while ( v19 != v15 );
    else if ( v4 + v2 )
      v12 = 0;
      v13 = *(_DWORD *)v1;
        v11[v12] = *(_BYTE *)(v13 + (v21 + v12) % v2);
        ++v12;
      while ( v12 < v4 + v2 );
    if ( v19 < v21 )
      v4 += v2;
    *((_DWORD *)v18 + 1) = 0;
    *((_DWORD *)v18 + 2) = v4;
    *((_DWORD *)v18 + 3) = v7;
    if ( *(_DWORD *)v18 )
      j_operator delete[](*(void **)v18);
    result = v20;
    *(_DWORD *)v18 = v20;
  }
  return result;
}


int __fastcall DataStructures::ByteQueue::IncrementReadOffset(DataStructures::ByteQueue *this, unsigned int a2)
{
  DataStructures::ByteQueue *v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r1@1
  int result; // r0@1
  int v6; // r1@1
  int v7; // t0@1

  v2 = this;
  v3 = *((_DWORD *)this + 1) + a2;
  v4 = *((_DWORD *)v2 + 3);
  v7 = v3 / v4;
  v6 = v3 % v4;
  result = v7;
  *((_DWORD *)v2 + 1) = v6;
  return result;
}


int __fastcall DataStructures::ByteQueue::Print(DataStructures::ByteQueue *this)
{
  DataStructures::ByteQueue *v1; // r4@1
  void (*v2)(const char *, ...); // r2@1
  int result; // r0@1
  int v4; // r6@1
  __int64 v5; // kr00_8@1
  signed int v6; // r1@1

  v1 = this;
  v2 = (void (*)(const char *, ...))RakNet::rakDebugLogCallback;
  v5 = *(_QWORD *)((char *)this + 4);
  result = *(_QWORD *)((char *)this + 4) >> 32;
  v4 = v5;
  v6 = (signed int)RakNet::rakDebugLogCallback;
  if ( RakNet::rakDebugLogCallback )
    v6 = 1;
  if ( (_DWORD)v5 != result )
  {
    do
    {
      if ( v6 & 1 )
      {
        v2("%i ", *(_BYTE *)(*(_DWORD *)v1 + v4));
        v2 = (void (*)(const char *, ...))RakNet::rakDebugLogCallback;
        result = *((_DWORD *)v1 + 2);
      }
      v6 = (signed int)v2;
      ++v4;
      if ( v2 )
        v6 = 1;
    }
    while ( v4 != result );
  }
  if ( v6 == 1 )
    result = ((int (__fastcall *)(const char *))v2)("\n");
  return result;
}


unsigned int __fastcall DataStructures::RangeList<RakNet::uint24_t>::Insert(int a1, unsigned int *a2)
{
  int v2; // r8@1
  signed int v3; // r5@1
  unsigned int v4; // r6@2
  int v5; // r7@2
  unsigned int v6; // r12@2
  int v7; // r4@2
  int v8; // r3@2
  int v9; // r1@2
  int v10; // r0@2
  unsigned int v11; // r2@3
  unsigned int v12; // r2@9
  unsigned int v13; // r5@12
  int v14; // r4@13
  int v15; // r0@13
  int v16; // r0@17
  unsigned int result; // r0@17
  int v18; // t1@17
  unsigned int v19; // r1@17
  unsigned int v20; // r1@19
  int *v21; // r1@20
  int v22; // r3@23
  int v23; // r0@35
  int v24; // t1@35
  int v25; // r1@38
  _DWORD *v26; // r0@41
  int v27; // r0@43
  unsigned int v28; // r3@43
  unsigned int v29; // t1@43
  int v30; // r1@49
  int v31; // r1@55
  int v32; // r9@61
  int v33; // r4@61
  signed __int64 v34; // kr00_8@62
  unsigned int v35; // r0@62
  _DWORD *v36; // r0@66
  int v37; // r0@67
  int v38; // r2@68
  int v39; // r1@68
  unsigned int v40; // [sp+4h] [bp-34h]@20
  unsigned int v41; // [sp+8h] [bp-30h]@20
  unsigned int v42; // [sp+Ch] [bp-2Ch]@23
  unsigned int v43; // [sp+10h] [bp-28h]@23
  unsigned int v44; // [sp+14h] [bp-24h]@12
  unsigned int v45; // [sp+18h] [bp-20h]@12

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v4 = *a2;
    v5 = *(_DWORD *)a1;
    v6 = v3 - 1;
    v7 = v3 / 2;
    v8 = 0;
    v9 = v3 / 2;
    v10 = v3 - 1;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v5 + 8 * v9);
      if ( v4 == v11 )
      {
        v12 = v9;
        goto LABEL_16;
      }
      if ( v4 < v11 )
        v10 = v9 - 1;
      if ( v4 >= v11 )
        v8 = v9 + 1;
      if ( v10 < v8 )
        break;
      v12 = 0;
      v9 = v8 + (v10 - v8) / 2;
      if ( v9 < 0 || v9 >= v3 )
    }
    v12 = v8;
LABEL_16:
    if ( v12 == v3 )
      v16 = v5 + 8 * v6;
      v18 = *(_DWORD *)(v16 + 4);
      result = v16 + 4;
      v19 = (v18 + 1) & 0xFFFFFF;
      if ( v4 == v19 )
        *(_DWORD *)result = v4;
      else if ( v4 > v19 )
        v22 = 0;
        v12 = 0;
        v42 = v4;
        v43 = v4;
        while ( 1 )
        {
          result = *(_DWORD *)(v5 + 8 * v7);
          if ( v4 == result )
            break;
          if ( v4 < result )
            v6 = v7 - 1;
          if ( v4 >= result )
            v22 = v7 + 1;
          if ( (signed int)v6 < v22 )
          {
            v12 = v22;
LABEL_58:
            if ( v12 < v3 )
            {
              v21 = (int *)&v42;
              goto LABEL_21;
            }
            if ( v3 == *(_DWORD *)(v2 + 8) )
              v32 = 2 * v3;
              v33 = 0;
              *(_DWORD *)(v2 + 8) = 2 * v3;
              if ( 2 * v3 )
              {
                v34 = 8LL * (unsigned int)v32;
                v35 = v34 + 8;
                if ( (signed int)v34 + 8 < (unsigned int)v34 )
                  v35 = -1;
                if ( HIDWORD(v34) != 0 )
                v36 = j_operator new[](v35);
                *v36 = 8;
                v36[1] = v32;
                v33 = (int)(v36 + 2);
              }
              v37 = 0;
              do
                v38 = v5 + 8 * v37;
                *(_DWORD *)(v33 + 8 * v37) = *(_DWORD *)(v5 + 8 * v37);
                v39 = v33 + 8 * v37++;
                *(_DWORD *)(v39 + 4) = *(_DWORD *)(v38 + 4);
              while ( v3 != v37 );
              j_operator delete[]((void *)(v5 - 8));
              v3 = *(_DWORD *)(v2 + 4);
              *(_DWORD *)v2 = v33;
            else
              v33 = v5;
            *(_DWORD *)(v33 + 8 * v3) = v4;
            *(_DWORD *)(v33 + 8 * v3 + 4) = v43;
            result = v3 + 1;
            goto LABEL_56;
          }
          v7 = v22 + (signed int)(v6 - v22) / 2;
          if ( v7 < 0 || v7 >= v3 )
            goto LABEL_58;
        }
    else
      v20 = *(_DWORD *)(v5 + 8 * v12);
      result = (v20 + 0xFFFFFF) & 0xFFFFFF;
      if ( v4 >= result )
        if ( v4 == result )
          *(_DWORD *)(v5 + 8 * v12) = v4;
          if ( !v12 )
            return result;
          v23 = *(_DWORD *)v2 + 8 * v12;
          v24 = *(_DWORD *)(v23 - 4);
          result = v23 - 4;
          if ( ((v24 + 1) & 0xFFFFFF) != *(_DWORD *)(*(_DWORD *)v2 + 8 * v12) )
          *(_DWORD *)result = *(_DWORD *)(*(_DWORD *)v2 + 8 * v12 + 4);
          if ( v3 <= v12 )
          if ( v6 > v12 )
            result = v6 - v12;
            v25 = *(_DWORD *)v2 + 8 * v12 + 8;
            do
              --result;
              *(_DWORD *)(v25 - 8) = *(_DWORD *)v25;
              *(_DWORD *)(v25 - 4) = *(_DWORD *)(v25 + 4);
              v25 += 8;
            while ( result );
        else
          v27 = v5 + 8 * v12;
          v29 = *(_DWORD *)(v27 + 4);
          result = v27 + 4;
          v28 = v29;
          if ( v4 >= v20 && v4 <= v28 )
          if ( v4 != ((v28 + 1) & 0xFFFFFF) )
          *(_DWORD *)result = v4;
          if ( v12 >= v6 )
          result = v12 + 1;
          if ( *(_DWORD *)(v5 + 8 * (v12 + 1)) != ((v4 + 1) & 0xFFFFFF) )
          *(_DWORD *)(v5 + 8 * result) = v20;
          result = v6 - v12;
          v30 = *(_DWORD *)v2 + 8 * v12 + 8;
          do
            --result;
            *(_DWORD *)(v30 - 8) = *(_DWORD *)v30;
            *(_DWORD *)(v30 - 4) = *(_DWORD *)(v30 + 4);
            v30 += 8;
          while ( result );
        *(_DWORD *)(v2 + 4) = v6;
        return result;
      v40 = v4;
      v41 = v4;
      v21 = (int *)&v40;
LABEL_21:
      result = j_DataStructures::List<DataStructures::RangeNode<RakNet::uint24_t>>::Insert(v2, (int)v21, v12);
  }
  else
    v13 = *a2;
    v44 = v13;
    v45 = v13;
    if ( *(_DWORD *)(a1 + 8) )
      v14 = *(_DWORD *)a1;
      v15 = 0;
      *(_DWORD *)(a1 + 8) = 16;
      v26 = j_operator new[](0x88u);
      *v26 = 8;
      v26[1] = 16;
      v14 = (int)(v26 + 2);
      if ( *(_DWORD *)v2 )
        j_operator delete[]((void *)(*(_DWORD *)v2 - 8));
        v15 = *(_DWORD *)(v2 + 4);
      else
        v15 = 0;
      *(_DWORD *)v2 = v14;
    *(_DWORD *)(v14 + 8 * v15) = v13;
    v31 = v14 + 8 * v15;
    result = v15 + 1;
    *(_DWORD *)(v31 + 4) = v45;
LABEL_56:
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


unsigned int __fastcall DataStructures::List<DataStructures::RangeNode<RakNet::uint24_t>>::Insert(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r7@1
  int v6; // r8@1
  int v7; // r6@2
  signed __int64 v8; // kr08_8@5
  unsigned int v9; // r0@5
  _DWORD *v10; // r0@9
  int v11; // r6@9
  int v12; // r0@12
  unsigned int v13; // r1@13
  int v14; // r3@14
  int v15; // r2@14
  int v16; // r0@20
  _DWORD *v17; // r1@20
  unsigned int result; // r0@22

  v3 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 4);
  v6 = a2;
  if ( v5 != *(_QWORD *)(a1 + 4) >> 32 )
  {
    v11 = *(_DWORD *)a1;
    goto LABEL_19;
  }
  v7 = 2 * v5;
  if ( !v5 )
    v7 = 16;
  *(_DWORD *)(a1 + 8) = v7;
  if ( v7 )
    v8 = 8LL * (unsigned int)v7;
    v9 = v8 + 8;
    if ( (signed int)v8 + 8 < (unsigned int)v8 )
      v9 = -1;
    if ( HIDWORD(v8) != 0 )
    v10 = j_operator new[](v9);
    *v10 = 8;
    v10[1] = v7;
    v11 = (int)(v10 + 2);
  else
    v11 = 0;
  v12 = *(_DWORD *)v3;
  if ( v5 )
    v13 = 0;
    do
    {
      v14 = v12 + 8 * v13;
      *(_DWORD *)(v11 + 8 * v13) = *(_DWORD *)(v12 + 8 * v13);
      v15 = v11 + 8 * v13++;
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v14 + 4);
    }
    while ( v13 < v5 );
  else if ( !v12 )
    v5 = 0;
    goto LABEL_18;
  j_operator delete[]((void *)(v12 - 8));
  v5 = *(_DWORD *)(v3 + 4);
LABEL_18:
  *(_DWORD *)v3 = v11;
LABEL_19:
  if ( v5 != v4 )
    v16 = v4 - v5;
    v17 = (_DWORD *)(v11 + 8 * v5 + 4);
      ++v16;
      *(v17 - 1) = *(v17 - 3);
      *v17 = *(v17 - 2);
      v17 -= 2;
    while ( v16 );
  *(_DWORD *)(v11 + 8 * v4) = *(_DWORD *)v6;
  *(_DWORD *)(v11 + 8 * v4 + 4) = *(_DWORD *)(v6 + 4);
  result = v5 + 1;
  *(_DWORD *)(v3 + 4) = v5 + 1;
  return result;
}


void __fastcall DataStructures::Queue<RakNet::ReliabilityLayer::DatagramHistoryNode>::Push(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r2@2
  __int64 v6; // kr00_8@2
  __int64 v7; // kr08_8@2
  int v8; // r0@2
  unsigned int v9; // r5@2
  int v10; // r11@2
  signed __int64 v11; // r0@6
  void *v12; // r0@10
  char *v13; // r7@10
  void *v14; // r8@10
  unsigned int v15; // r4@10
  unsigned int v16; // r1@11
  int v17; // r0@11
  int v18; // r1@11
  __int64 v19; // r2@11
  int v20; // r1@11
  int v21; // r1@12
  _DWORD *v22; // r0@14
  int v23; // r2@14
  int v24; // r3@14
  int v25; // r7@14

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v2 + 8) = v4 + 1;
    v5 = 16 * v4;
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_DWORD *)v2 + 16 * v4;
    *(_DWORD *)(*(_DWORD *)v2 + v5) = *(_QWORD *)a2;
    *(_DWORD *)(v8 + 4) = HIDWORD(v6);
    *(_QWORD *)(v8 + 8) = v7;
    v9 = *(_QWORD *)(v2 + 8) >> 32;
    v10 = *(_QWORD *)(v2 + 8);
    if ( v10 == v9 )
    {
      v10 = 0;
      *(_DWORD *)(v2 + 8) = 0;
    }
    if ( v10 == *(_DWORD *)(v2 + 4) && v9 )
      v11 = 32LL * v9;
      if ( !is_mul_ok(0x10u, 2 * v9) )
        HIDWORD(v11) = 1;
      if ( HIDWORD(v11) )
        LODWORD(v11) = -1;
      v12 = j_operator new[](v11);
      v13 = *(char **)v2;
      v14 = v12;
      v15 = 0;
      do
      {
        v16 = (v10 + v15) % v9;
        v17 = 16 * v16;
        v18 = (int)&v13[16 * v16];
        ++v15;
        v19 = *(_QWORD *)(v18 + 4);
        v20 = *(_DWORD *)(v18 + 12);
        *(_DWORD *)v7 = *(_DWORD *)&v13[v17];
        *(_QWORD *)(v7 + 4) = v19;
        *(_DWORD *)(v7 + 12) = v20;
      }
      while ( v15 < v9 );
      v21 = v2 + 4;
      *(_DWORD *)v21 = 0;
      *(_DWORD *)(v21 + 4) = v9;
      *(_DWORD *)(v21 + 8) = 2 * v9;
      j_operator delete[](v13);
      *(_DWORD *)v2 = v14;
  }
  else
    v22 = j_operator new[](0x100u);
    *(_DWORD *)v2 = v22;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 1;
    v23 = *(_DWORD *)(v3 + 4);
    v24 = *(_DWORD *)(v3 + 8);
    v25 = *(_DWORD *)(v3 + 12);
    *v22 = *(_DWORD *)v3;
    v22[1] = v23;
    v22[2] = v24;
    v22[3] = v25;
    *(_DWORD *)(v2 + 12) = 16;
}


int __fastcall DataStructures::MemoryPool<RakNet::Packet>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 168);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xB0u )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::ThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct>::Clear(int a1, int a2, int a3)
{
  int v3; // r4@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  unsigned int i; // r5@1
  unsigned int v8; // r2@2
  __int64 v9; // r0@3
  unsigned int v10; // r1@6
  unsigned int v11; // r0@9
  void *v12; // r0@11
  int v13; // r5@16
  int v14; // r7@17
  int v15; // r6@17
  int v16; // r5@19
  int v17; // r7@20
  int v18; // r6@20

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 20);
  v5 = a3;
  v6 = a2;
  j_RakNet::SimpleMutex::Lock((pthread_mutex_t *)(a1 + 20));
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)(v3 + 28);
    v10 = HIDWORD(v9) >= (unsigned int)v9 ? HIDWORD(v9) - v9 : HIDWORD(v9) - (signed int)v9 + *(_DWORD *)(v3 + 36);
    if ( i >= v10 )
      break;
    v8 = *(_DWORD *)(v3 + 36);
    if ( i + (unsigned int)v9 >= v8 )
      LODWORD(v9) = v9 - v8;
    j_DataStructures::MemoryPool<RakNet::RakPeer::BufferedCommandStruct>::Release(
      v3,
      *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * (v9 + i)),
      v6,
      v5);
  }
  v11 = *(_DWORD *)(v3 + 36);
  if ( v11 )
    if ( v11 >= 0x21 )
    {
      v12 = *(void **)(v3 + 24);
      if ( v12 )
        j_operator delete[](v12);
      *(_DWORD *)(v3 + 36) = 0;
    }
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) = 0;
  j_RakNet::SimpleMutex::Unlock(v4);
  j_RakNet::SimpleMutex::Lock(v4);
  if ( *(_DWORD *)(v3 + 8) >= 1 )
    v13 = *(_DWORD *)v3;
    do
      rakFree_Ex(*(_DWORD *)v13, v6, v5);
      rakFree_Ex(*(_DWORD *)(v13 + 8), v6, v5);
      v14 = *(_DWORD *)v3;
      v15 = *(_DWORD *)(v13 + 12);
      rakFree_Ex(v13, v6, v5);
      v13 = v15;
    while ( v15 != v14 );
  if ( *(_DWORD *)(v3 + 12) >= 1 )
    v16 = *(_DWORD *)(v3 + 4);
      rakFree_Ex(*(_DWORD *)v16, v6, v5);
      rakFree_Ex(*(_DWORD *)(v16 + 8), v6, v5);
      v17 = *(_DWORD *)(v3 + 4);
      v18 = *(_DWORD *)(v16 + 12);
      rakFree_Ex(v16, v6, v5);
      v16 = v18;
    while ( v18 != v17 );
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  return j_j_j__ZN6RakNet11SimpleMutex6UnlockEv_0(v4);
}


int __fastcall DataStructures::ByteQueue::Clear(DataStructures::ByteQueue *this, const char *a2, unsigned int a3)
{
  DataStructures::ByteQueue *v3; // r4@1
  int result; // r0@3

  v3 = this;
  if ( *((_DWORD *)this + 3) )
    rakFree_Ex(*(_DWORD *)this, a2, a3);
  result = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = 0;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::Packet>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xB0;
  v18 = rakMalloc_Ex(4 * (v15 / 0xB0), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xB0 )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 168) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 176;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


void __fastcall DataStructures::Queue<RakNet::ReliabilityLayer::DatagramHistoryNode>::Push(int a1, int a2)
{
  DataStructures::Queue<RakNet::ReliabilityLayer::DatagramHistoryNode>::Push(a1, a2);
}


void __fastcall DataStructures::Queue<RakNet::BPSTracker::TimeAndValue2>::Push(int a1, int a2)
{
  DataStructures::Queue<RakNet::BPSTracker::TimeAndValue2>::Push(a1, a2);
}


int __fastcall j_DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::Set(int a1, int *a2, int *a3)
{
  return DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::Set(
           a1,
           a2,
           a3);
}


unsigned int __fastcall j_DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(int a1, int a2, int a3)
{
  return DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(
           a1,
           a2,
           a3);
}


unsigned int __fastcall DataStructures::ByteQueue::WriteBytes(DataStructures::ByteQueue *this, const char *a2, unsigned int a3, const char *a4, unsigned int a5)
{
  DataStructures::ByteQueue *v5; // r4@1
  unsigned int v6; // r10@1
  const char *v7; // r8@1
  int v8; // r1@1 OVERLAPPED
  unsigned int v9; // r2@1 OVERLAPPED
  int v10; // r0@1
  char *v11; // r11@1
  int v12; // r9@2
  int v13; // r5@6
  unsigned int v14; // r7@6
  int v15; // r1@8
  int v16; // r0@9
  int v17; // r2@10
  int v18; // r0@13
  unsigned int v19; // r2@13
  int v20; // r2@14
  int v21; // r1@14
  int v22; // r2@14
  __int64 v23; // r0@16
  unsigned int result; // r0@16
  unsigned int v25; // t0@16

  v5 = this;
  v6 = a3;
  v7 = a2;
  *(_QWORD *)&v8 = *(_QWORD *)((char *)this + 4);
  v11 = (char *)this + 12;
  v10 = *((_DWORD *)this + 3);
  if ( v9 >= v8 )
    v12 = v9 - v8;
  else
    v12 = v9 - v8 + v10;
  if ( !v10 || v10 + ~v12 < v6 )
  {
    v13 = *((_DWORD *)v5 + 3);
    v14 = v6 + v13 + 1;
    if ( v14 < 0x100 )
      v14 = 256;
    *((_DWORD *)v5 + 3) = v14 + v13;
    v15 = rakRealloc_Ex(*(_DWORD *)v5, v14 + v13, a4, a5);
    *(_DWORD *)v5 = v15;
    v9 = *(_QWORD *)((char *)v5 + 4) >> 32;
    if ( v9 < (unsigned int)*(_QWORD *)((char *)v5 + 4) )
    {
      v16 = v15 + v13;
      if ( v9 <= v14 )
      {
        j___aeabi_memcpy_0(v16, v15, v9);
        v9 = *((_DWORD *)v5 + 1) + v12;
      }
      else
        j___aeabi_memcpy_0(v16, v15, v14);
        v17 = *((_DWORD *)v5 + 2) - v14;
        j___aeabi_memmove_0(*(_DWORD *)v5, *(_DWORD *)v5 + v14);
        v9 = *((_DWORD *)v5 + 2) - v14;
      *((_DWORD *)v5 + 2) = v9;
    }
  }
  v18 = *(_DWORD *)v5 + v9;
  v19 = *(_DWORD *)v11 - v9;
  if ( v19 >= v6 )
    v21 = (int)v7;
    v22 = v6;
    j___aeabi_memcpy_0(v18, (int)v7, v19);
    v18 = *(_DWORD *)v5;
    v20 = (*((_QWORD *)v5 + 1) >> 32) - *((_QWORD *)v5 + 1);
    v21 = (int)&v7[v20];
    v22 = v6 - v20;
  j___aeabi_memcpy_0(v18, v21, v22);
  v23 = *((_QWORD *)v5 + 1);
  LODWORD(v23) = v23 + v6;
  v25 = (unsigned int)v23 / HIDWORD(v23);
  HIDWORD(v23) = (unsigned int)v23 % HIDWORD(v23);
  result = v25;
  *((_DWORD *)v5 + 2) = HIDWORD(v23);
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::InternalPacket>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xF8;
  v18 = rakMalloc_Ex(4 * (v15 / 0xF8), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xF8 )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 240) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 248;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


int __fastcall DataStructures::ThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput>::Clear(int a1, int a2, int a3)
{
  int v3; // r4@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  unsigned int i; // r5@1
  unsigned int v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int v10; // r0@6
  unsigned int v11; // r3@9
  int v12; // r2@9
  int v13; // r0@9
  int v14; // r0@11
  int v15; // r7@11
  bool v16; // zf@11
  unsigned int v17; // r0@15
  void *v18; // r0@17
  int v19; // r5@22
  int v20; // r7@23
  int v21; // r6@23
  int v22; // r5@25
  int v23; // r7@26
  int v24; // r6@26

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 20);
  v5 = a3;
  v6 = a2;
  j_RakNet::SimpleMutex::Lock((pthread_mutex_t *)(a1 + 20));
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)(v3 + 28) >> 32;
    v8 = *(_QWORD *)(v3 + 28);
    v10 = v9 >= v8 ? v9 - v8 : v9 - v8 + *(_DWORD *)(v3 + 36);
    if ( i >= v10 )
      break;
    v11 = *(_DWORD *)(v3 + 36);
    v12 = *(_DWORD *)(v3 + 24);
    v13 = *(_QWORD *)(v3 + 28);
    if ( i + v8 >= v11 )
      v13 = v8 - v11;
    v14 = *(_DWORD *)(v12 + 4 * (v13 + i));
    v15 = *(_DWORD *)(v14 + 8);
    v16 = v15 == 0;
    if ( v15 )
    {
      v14 = *(_DWORD *)v14;
      v16 = v14 == 0;
    }
    if ( !v16 )
      j_operator delete[]((void *)v14);
      v8 = *(_QWORD *)(v3 + 24) >> 32;
      v12 = *(_QWORD *)(v3 + 24);
      v11 = *(_DWORD *)(v3 + 36);
    if ( v8 + i >= v11 )
      v8 -= v11;
    j_DataStructures::MemoryPool<RakNet::RakPeer::SocketQueryOutput>::Release(
      v3,
      *(_DWORD *)(v12 + 4 * (i + v8)),
      v6,
      v5);
  }
  v17 = *(_DWORD *)(v3 + 36);
  if ( v17 )
    if ( v17 >= 0x21 )
      v18 = *(void **)(v3 + 24);
      if ( v18 )
        j_operator delete[](v18);
      *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) = 0;
  j_RakNet::SimpleMutex::Unlock(v4);
  j_RakNet::SimpleMutex::Lock(v4);
  if ( *(_DWORD *)(v3 + 8) >= 1 )
    v19 = *(_DWORD *)v3;
    do
      rakFree_Ex(*(_DWORD *)v19, v6, v5);
      rakFree_Ex(*(_DWORD *)(v19 + 8), v6, v5);
      v20 = *(_DWORD *)v3;
      v21 = *(_DWORD *)(v19 + 12);
      rakFree_Ex(v19, v6, v5);
      v19 = v21;
    while ( v21 != v20 );
  if ( *(_DWORD *)(v3 + 12) >= 1 )
    v22 = *(_DWORD *)(v3 + 4);
      rakFree_Ex(*(_DWORD *)v22, v6, v5);
      rakFree_Ex(*(_DWORD *)(v22 + 8), v6, v5);
      v23 = *(_DWORD *)(v3 + 4);
      v24 = *(_DWORD *)(v22 + 12);
      rakFree_Ex(v22, v6, v5);
      v22 = v24;
    while ( v24 != v23 );
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  return j_j_j__ZN6RakNet11SimpleMutex6UnlockEv_0(v4);
}


int __fastcall DataStructures::List<RakNet::RakString>::Insert(int a1, pthread_mutex_t ***a2)
{
  int v2; // r4@1
  pthread_mutex_t ***v3; // r8@1
  __int64 v4; // r0@1
  signed int v5; // r6@2 OVERLAPPED
  signed int v6; // r5@5 OVERLAPPED
  signed __int64 v7; // kr00_8@5
  unsigned int v8; // r0@5
  _QWORD *v9; // r0@9
  int v10; // r7@9
  int v11; // r5@9
  RakNet::RakString *v12; // r0@9
  int v13; // r1@14
  int v14; // r6@16
  unsigned int v15; // r5@16
  int v16; // r0@19
  void *v17; // r9@19
  int v18; // r5@20
  int v19; // r6@20
  int result; // r0@24

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v5 = 2 * v4;
    if ( !(_DWORD)v4 )
      v5 = 16;
    *(_DWORD *)(v2 + 8) = v5;
    if ( v5 )
    {
      v6 = 4;
      v7 = 4LL * (unsigned int)v5;
      v8 = v7 + 8;
      if ( (signed int)v7 + 8 < (unsigned int)v7 )
        v8 = -1;
      if ( HIDWORD(v7) != 0 )
      v9 = j_operator new[](v8);
      v10 = (int)(v9 + 1);
      *v9 = *(_QWORD *)(&v5 - 1);
      v11 = 4 * v5;
      v12 = (RakNet::RakString *)(v9 + 1);
      do
      {
        v11 -= 4;
        v12 = (RakNet::RakString *)(j_RakNet::RakString::RakString(v12) + 4);
      }
      while ( v11 );
    }
    else
      v10 = 0;
    v13 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
      if ( !*(_DWORD *)(v2 + 4) )
        goto LABEL_27;
      v14 = 0;
      v15 = 0;
        j_RakNet::RakString::operator=((RakNet::RakString *)(v10 + v14), (pthread_mutex_t ***)(v13 + v14));
        v13 = *(_QWORD *)v2;
        ++v15;
        v14 += 4;
      while ( v15 < (unsigned int)(*(_QWORD *)v2 >> 32) );
      if ( v13 )
LABEL_27:
        v16 = *(_DWORD *)(v13 - 4);
        v17 = (void *)(v13 - 8);
        if ( v16 )
        {
          v18 = v13 - 4;
          v19 = 4 * v16;
          do
          {
            j_RakNet::RakString::~RakString((RakNet::RakString *)(v18 + v19));
            v19 -= 4;
          }
          while ( v19 );
        }
        j_operator delete[](v17);
    *(_DWORD *)v2 = v10;
    LODWORD(v4) = *(_DWORD *)(v2 + 4);
  }
  else
    v10 = *(_DWORD *)v2;
  j_RakNet::RakString::operator=((RakNet::RakString *)(v10 + 4 * v4), v3);
  result = *(_DWORD *)(v2 + 4) + 1;
  *(_DWORD *)(v2 + 4) = result;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xC;
  v18 = rakMalloc_Ex(4 * (v15 / 0xC), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xC )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 8) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 12;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


void __fastcall DataStructures::Queue<RakNet::SystemAddress>::Push(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r0@2
  int v6; // r6@2
  signed __int64 v7; // r0@6
  char *v8; // r9@10
  int v9; // r7@10
  int v10; // r6@10
  unsigned int v11; // r1@12
  int v12; // r6@13
  unsigned int v13; // r7@13
  void *v14; // r6@16

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v2 + 8) = v4 + 1;
    j_RakNet::SystemAddress::operator=(*(_DWORD *)v2 + 132 * v4, a2);
    v6 = *(_QWORD *)(v2 + 8) >> 32;
    v5 = *(_QWORD *)(v2 + 8);
    if ( v5 == v6 )
    {
      v5 = 0;
      *(_DWORD *)(v2 + 8) = 0;
    }
    if ( v5 == *(_DWORD *)(v2 + 4) && v6 )
      v7 = 132LL * (unsigned int)(2 * v6);
      if ( !is_mul_ok(0x84u, 2 * v6) )
        HIDWORD(v7) = 1;
      if ( HIDWORD(v7) )
        LODWORD(v7) = -1;
      v8 = (char *)j_operator new[](v7);
      v9 = 0;
      v10 = 264 * v6;
      do
      {
        j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v8[v9]);
        v9 += 132;
      }
      while ( v10 != v9 );
      v11 = *(_DWORD *)(v2 + 12);
      if ( v11 )
        v12 = (int)v8;
        v13 = 0;
        do
        {
          j_RakNet::SystemAddress::operator=(
            v12,
            *(_QWORD *)v2 + 132 * ((unsigned int)((*(_QWORD *)v2 >> 32) + v13) % v11));
          v11 = *(_DWORD *)(v2 + 12);
          ++v13;
          v12 += 132;
        }
        while ( v13 < v11 );
      else
        v11 = 0;
      *(_DWORD *)(v2 + 4) = 0;
      *(_DWORD *)(v2 + 8) = v11;
      *(_DWORD *)(v2 + 12) = 2 * v11;
      if ( *(_DWORD *)v2 )
        j_operator delete[](*(void **)v2);
      *(_DWORD *)v2 = v8;
  }
  else
    v14 = j_operator new[](0x840u);
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)v14);
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 132));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 264));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 396));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 528));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 660));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 792));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 924));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1056));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1188));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1320));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1452));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1584));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1716));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1848));
    j_RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)((char *)v14 + 1980));
    *(_DWORD *)v2 = v14;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 1;
    j_RakNet::SystemAddress::operator=((int)v14, v3);
    *(_DWORD *)(v2 + 12) = 16;
}


int __fastcall DataStructures::ByteQueue::DecrementReadOffset(int result, unsigned int a2)
{
  int v2; // r2@1
  unsigned int v3; // r1@2

  v2 = *(_DWORD *)(result + 4);
  if ( v2 < a2 )
    v3 = v2 - a2 + *(_DWORD *)(result + 12);
  else
    v3 = v2 - a2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


void __fastcall DataStructures::Queue<RakNet::SystemAddress>::Push(int a1, int a2)
{
  DataStructures::Queue<RakNet::SystemAddress>::Push(a1, a2);
}


int __fastcall DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::Set(int a1, int *a2, int *a3)
{
  return DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::Set(
           a1,
           a2,
           a3);
}


int __fastcall DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::Set(int a1, int *a2, int *a3)
{
  int v3; // r9@1
  signed int v4; // r6@1
  int v5; // r10@2
  int v6; // r3@2
  int v7; // r12@2
  int v8; // r4@2
  int v9; // r5@2
  int v10; // r1@2
  int v11; // r0@2
  int v12; // r7@3
  bool v13; // nf@8
  unsigned __int8 v14; // vf@8
  int v15; // r8@12
  int v16; // r3@13
  unsigned int v17; // r2@13
  int result; // r0@14
  int v19; // r0@25
  signed __int64 v20; // r0@28
  unsigned int v21; // kr00_4@28
  void *v22; // r5@32
  void *v23; // r0@36
  int *v24; // r1@38
  _DWORD *v25; // r2@38
  int v26; // r3@39
  int v27; // [sp+8h] [bp-28h]@12
  int v28; // [sp+Ch] [bp-24h]@12

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = *a2;
    v6 = *(_DWORD *)a1;
    v7 = v4 - 1;
    v8 = v4 / 2;
    v9 = 0;
    v10 = v4 / 2;
    v11 = v4 - 1;
    do
    {
      v12 = *(_DWORD *)(v6 + 8 * v10);
      if ( v5 == v12 )
      {
        result = *a3;
        *(_DWORD *)(v6 + 8 * v10 + 4) = *a3;
        return result;
      }
      if ( v5 < v12 )
        v11 = v10 - 1;
      if ( v5 >= v12 )
        v9 = v10 + 1;
      v10 = v9 + (v11 - v9) / 2;
      v14 = 0;
      v13 = v10 < 0;
      if ( v10 >= 0 )
        v14 = __OFSUB__(v11, v9);
        v13 = v11 - v9 < 0;
    }
    while ( !(v13 ^ v14) && v10 < v4 );
    v15 = *a3;
    v27 = v5;
    v28 = v15;
    if ( !v4 )
      goto LABEL_24;
    v16 = 0;
    v17 = 0;
    while ( 1 )
      result = *(_DWORD *)(*(_DWORD *)v3 + 8 * v8);
      if ( v5 == result )
        break;
      if ( v5 < result )
        v7 = v8 - 1;
      if ( v5 >= result )
        v16 = v8 + 1;
      if ( v7 < v16 )
        v17 = v16;
LABEL_44:
        if ( v17 >= v4 )
          goto LABEL_24;
        return j_DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(
                 v3,
                 (int)&v27,
                 v17);
      v8 = v16 + (v7 - v16) / 2;
      if ( v8 < 0 || v8 >= v4 )
        goto LABEL_44;
  }
  else
    v27 = *a2;
LABEL_24:
    if ( v4 == *(_DWORD *)(v3 + 8) )
      v19 = 2 * v4;
      if ( !v4 )
        v19 = 16;
      *(_DWORD *)(v3 + 8) = v19;
      if ( v19 )
        v21 = v19;
        v20 = 8LL * (unsigned int)v19;
        if ( !is_mul_ok(8u, v21) )
          HIDWORD(v20) = 1;
        if ( HIDWORD(v20) )
          LODWORD(v20) = -1;
        v22 = j_operator new[](v20);
      else
        v22 = 0;
      v23 = *(void **)v3;
      if ( *(_DWORD *)v3 )
        if ( v4 )
        {
          v24 = (int *)((char *)v23 + 4);
          v25 = (char *)v22 + 4;
          do
          {
            --v4;
            *(v25 - 1) = *(v24 - 1);
            v26 = *v24;
            v24 += 2;
            *v25 = v26;
            v25 += 2;
          }
          while ( v4 );
        }
        j_operator delete[](v23);
        v4 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)v3 = v22;
    else
      v22 = *(void **)v3;
    *((_DWORD *)v22 + 2 * v4) = v5;
    *((_DWORD *)v22 + 2 * v4 + 1) = v15;
    result = v4 + 1;
    *(_DWORD *)(v3 + 4) = v4 + 1;
  return result;
}


void __fastcall DataStructures::Queue<RakNet::BPSTracker::TimeAndValue2>::Push(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r2@2
  __int64 v6; // kr00_8@2
  __int64 v7; // kr08_8@2
  int v8; // r0@2
  unsigned int v9; // r5@2
  int v10; // r11@2
  int v11; // r9@6
  signed __int64 v12; // kr18_8@6
  unsigned int v13; // r0@6
  _DWORD *v14; // r0@10
  int v15; // r8@10
  int v16; // r7@10
  unsigned int v17; // r4@10
  unsigned int v18; // r1@11
  int v19; // r0@11
  int v20; // r1@11
  __int64 v21; // r2@11
  int v22; // r1@11
  int v23; // r1@12
  void *v24; // r0@14
  int v25; // r2@14
  int v26; // r3@14
  int v27; // r7@14

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v2 + 8) = v4 + 1;
    v5 = 16 * v4;
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_DWORD *)v2 + 16 * v4;
    *(_DWORD *)(*(_DWORD *)v2 + v5) = *(_QWORD *)a2;
    *(_DWORD *)(v8 + 4) = HIDWORD(v6);
    *(_QWORD *)(v8 + 8) = v7;
    v9 = *(_QWORD *)(v2 + 8) >> 32;
    v10 = *(_QWORD *)(v2 + 8);
    if ( v10 == v9 )
    {
      v10 = 0;
      *(_DWORD *)(v2 + 8) = 0;
    }
    if ( v10 == *(_DWORD *)(v2 + 4) && v9 )
      v11 = 2 * v9;
      v12 = 32LL * v9;
      v13 = 32 * v9 + 8;
      if ( v13 < 32 * v9 )
        v13 = -1;
      if ( HIDWORD(v12) != 0 )
      v14 = j_operator new[](v13);
      *v14 = 16;
      v14[1] = v11;
      v15 = (int)(v14 + 2);
      v16 = *(_DWORD *)v2;
      v17 = 0;
      do
      {
        v18 = (v10 + v17) % v9;
        v19 = 16 * v18;
        v20 = v16 + 16 * v18;
        ++v17;
        v21 = *(_QWORD *)(v20 + 4);
        v22 = *(_DWORD *)(v20 + 12);
        *(_DWORD *)v7 = *(_DWORD *)(v16 + v19);
        *(_QWORD *)(v7 + 4) = v21;
        *(_DWORD *)(v7 + 12) = v22;
      }
      while ( v17 < v9 );
      v23 = v2 + 4;
      *(_DWORD *)v23 = 0;
      *(_DWORD *)(v23 + 4) = v9;
      *(_DWORD *)(v23 + 8) = v11;
      j_operator delete[]((void *)(v16 - 8));
      *(_DWORD *)v2 = v15;
  }
  else
    v24 = j_operator new[](0x108u);
    *(_DWORD *)v24 = 16;
    *((_DWORD *)v24 + 1) = 16;
    *(_DWORD *)v2 = (char *)v24 + 8;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 1;
    v25 = *(_DWORD *)v3;
    v26 = *(_DWORD *)(v3 + 4);
    v27 = *(_DWORD *)(v3 + 8);
    *((_DWORD *)v24 + 5) = *(_DWORD *)(v3 + 12);
    v24 = (char *)v24 + 8;
    *(_DWORD *)v24 = v25;
    *((_DWORD *)v24 + 1) = v26;
    *((_DWORD *)v24 + 2) = v27;
    *(_DWORD *)(v2 + 12) = 16;
}


unsigned int __fastcall DataStructures::List<DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&int DataStructures::defaultMapKeyComparison<int>>::MapNode>::Insert(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r8@1
  int v7; // r0@2
  signed __int64 v8; // r0@5
  unsigned int v9; // kr00_4@5
  _DWORD *v10; // r7@9
  char *v11; // r0@12
  unsigned int v12; // r1@13
  int v13; // r3@14
  int v14; // r2@14
  int v15; // r0@20
  char *v16; // r1@20
  unsigned int result; // r0@22

  v3 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 4);
  v6 = a2;
  if ( v5 != *(_QWORD *)(a1 + 4) >> 32 )
  {
    v10 = *(_DWORD **)a1;
    goto LABEL_19;
  }
  v7 = 2 * v5;
  if ( !v5 )
    v7 = 16;
  *(_DWORD *)(v3 + 8) = v7;
  if ( v7 )
    v9 = v7;
    v8 = 8LL * (unsigned int)v7;
    if ( !is_mul_ok(8u, v9) )
      HIDWORD(v8) = 1;
    if ( HIDWORD(v8) )
      LODWORD(v8) = -1;
    v10 = j_operator new[](v8);
  else
    v10 = 0;
  v11 = *(char **)v3;
  if ( v5 )
    v12 = 0;
    do
    {
      v13 = (int)&v11[8 * v12];
      v10[2 * v12] = *(_DWORD *)&v11[8 * v12];
      v14 = (int)&v10[2 * v12++];
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(v13 + 4);
    }
    while ( v12 < v5 );
  else if ( !v11 )
    v5 = 0;
    goto LABEL_18;
  j_operator delete[](v11);
  v5 = *(_DWORD *)(v3 + 4);
LABEL_18:
  *(_DWORD *)v3 = v10;
LABEL_19:
  if ( v5 != v4 )
    v15 = v4 - v5;
    v16 = (char *)&v10[2 * v5 + 1];
      ++v15;
      *((_DWORD *)v16 - 1) = *((_DWORD *)v16 - 3);
      *(_DWORD *)v16 = *((_DWORD *)v16 - 2);
      v16 -= 8;
    while ( v15 );
  v10[2 * v4] = *(_DWORD *)v6;
  v10[2 * v4 + 1] = *(_DWORD *)(v6 + 4);
  result = v5 + 1;
  *(_DWORD *)(v3 + 4) = v5 + 1;
  return result;
}


unsigned int __fastcall DataStructures::ByteQueue::GetBytesWritten(DataStructures::ByteQueue *this)
{
  unsigned int v1; // r1@1 OVERLAPPED
  unsigned int v2; // r2@1 OVERLAPPED
  unsigned int result; // r0@2

  *(_QWORD *)&v1 = *(_QWORD *)((char *)this + 4);
  if ( v2 < v1 )
    result = *((_DWORD *)this + 3) + v2 - v1;
  else
    result = v2 - v1;
  return result;
}


signed int __fastcall DataStructures::RangeList<RakNet::uint24_t>::Deserialize(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@1
  RakNet::BitStream *v5; // r0@7
  unsigned int v6; // r3@9
  int v7; // r6@12
  int v8; // r0@13
  RakNet::BitStream *v9; // r0@13
  int v10; // r7@14
  bool v11; // zf@14
  int v12; // r10@14
  __int64 v13; // r0@14
  int v14; // r2@14
  int v15; // r8@14
  int v16; // r11@16
  unsigned int v17; // r4@19
  int v18; // r0@20
  RakNet::BitStream *v19; // r0@20
  int v20; // r9@21
  int v21; // r0@21
  int v22; // r2@21
  unsigned int v23; // r3@21
  int v24; // r5@21
  int v25; // r1@21
  int v26; // r2@21
  int v27; // r6@21
  int v28; // r3@21
  int v29; // r5@23
  int v30; // r9@29
  int v31; // r8@29
  int v32; // r7@30
  signed __int64 v33; // kr10_8@33
  unsigned int v34; // r0@33
  _DWORD *v35; // r0@37
  int v36; // r7@37
  int v37; // r0@40
  int *v38; // r1@42
  _DWORD *v39; // r2@42
  int v40; // r3@43
  signed int result; // r0@47
  int v42; // [sp+4h] [bp-34h]@21
  RakNet::BitStream *v43; // [sp+8h] [bp-30h]@7
  unsigned __int8 v44; // [sp+Fh] [bp-29h]@11
  unsigned __int8 v45[2]; // [sp+10h] [bp-28h]@8
  unsigned __int8 v46; // [sp+12h] [bp-26h]@9

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
  {
    if ( v4 > 0x200 )
    {
      if ( *(_DWORD *)v2 )
        j_operator delete[]((void *)(*(_DWORD *)v2 - 8));
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)v2 = 0;
    }
    *(_DWORD *)(v2 + 4) = 0;
  }
  v43 = (RakNet::BitStream *)v3;
  v5 = (RakNet::BitStream *)(*(_DWORD *)(v3 + 8) + (~(*(_DWORD *)(v3 + 8) + 7) & 7));
  *(_DWORD *)(v3 + 8) = v5;
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v5) )
    j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v3, v45, 0x10u, 1);
  else if ( j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v3, &v46, 0x10u, 1) == 1 )
    j_RakNet::BitStream::ReverseBytes((RakNet::BitStream *)&v46, v45, (unsigned __int8 *)2, v6);
  v44 = 0;
  if ( *(_WORD *)v45 )
    v7 = 0;
    while ( 1 )
      j_RakNet::BitStream::ReadBits(v43, &v44, 8u, 1);
      v8 = *((_DWORD *)v43 + 2) + (~(*((_DWORD *)v43 + 2) + 7) & 7);
      *((_DWORD *)v43 + 2) = v8;
      v9 = (RakNet::BitStream *)(v8 + 24);
      if ( (unsigned int)v9 > *(_DWORD *)v43 )
        break;
      v10 = j_RakNet::BitStream::IsNetworkOrderInternal(v9);
      v13 = *((_QWORD *)v43 + 1);
      v11 = v10 == 0;
      v12 = *(_BYTE *)(HIDWORD(v13) + ((unsigned int)v13 >> 3));
      HIDWORD(v13) += (unsigned int)v13 >> 3;
      v14 = *(_BYTE *)(HIDWORD(v13) + 2);
      v15 = *(_BYTE *)(HIDWORD(v13) + 1);
      *((_DWORD *)v43 + 2) = v13 + 24;
      if ( v10 )
      {
        v10 = v12;
        v12 = 0;
      }
      v16 = v14;
      if ( !v11 )
        v16 = v15;
        v15 = v14;
      if ( v44 )
        v17 = v12 | (v10 << 24) | (v16 << 16) | (v15 << 8);
      else
        v18 = (~(v13 + 7) & 7) + v13 + 24;
        *((_DWORD *)v43 + 2) = v18;
        v19 = (RakNet::BitStream *)(v18 + 24);
        if ( (unsigned int)v19 > *(_DWORD *)v43 )
          break;
        v42 = v7;
        v20 = v2;
        v21 = j_RakNet::BitStream::IsNetworkOrderInternal(v19);
        v22 = *((_QWORD *)v43 + 1) >> 32;
        v23 = *((_QWORD *)v43 + 1);
        v24 = v22 + (v23 >> 3);
        v25 = *(_BYTE *)(v22 + (v23 >> 3));
        v26 = *(_BYTE *)(v24 + 1);
        v27 = *(_BYTE *)(v24 + 2);
        *((_DWORD *)v43 + 2) = v23 + 24;
        v28 = v21;
        if ( v21 )
        {
          v28 = v25;
          v25 = 0;
        }
        v29 = v27;
          v29 = v26;
          v26 = v27;
        if ( ((unsigned __int8)v25 | (v28 << 24) | ((unsigned __int8)v29 << 16) | ((unsigned int)(unsigned __int8)v26 << 8)) < v17 )
        v7 = v42;
        v16 = v29;
        v10 = v28;
        v15 = v26;
        v12 = v25;
        v2 = v20;
      v30 = *(_QWORD *)(v2 + 4);
      v31 = (v16 << 16) | (v10 << 24) | (v15 << 8) | v12;
      if ( v30 == *(_QWORD *)(v2 + 4) >> 32 )
        v32 = 2 * v30;
        if ( !v30 )
          v32 = 16;
        *(_DWORD *)(v2 + 8) = v32;
        if ( v32 )
          v33 = 8LL * (unsigned int)v32;
          v34 = v33 + 8;
          if ( (signed int)v33 + 8 < (unsigned int)v33 )
            v34 = -1;
          if ( HIDWORD(v33) != 0 )
          v35 = j_operator new[](v34);
          *v35 = 8;
          v35[1] = v32;
          v36 = (int)(v35 + 2);
        else
          v36 = 0;
        v37 = *(_DWORD *)v2;
        if ( *(_DWORD *)v2 )
          if ( v30 )
          {
            v38 = (int *)(v37 + 4);
            v39 = (_DWORD *)(v36 + 4);
            do
            {
              --v30;
              *(v39 - 1) = *(v38 - 1);
              v40 = *v38;
              v38 += 2;
              *v39 = v40;
              v39 += 2;
            }
            while ( v30 );
          }
          j_operator delete[]((void *)(v37 - 8));
          v30 = *(_DWORD *)(v2 + 4);
        *(_DWORD *)v2 = v36;
        v36 = *(_DWORD *)v2;
      *(_DWORD *)(v36 + 8 * v30) = v17;
      ++v7;
      *(_DWORD *)(v36 + 8 * v30 + 4) = v31;
      *(_DWORD *)(v2 + 4) = v30 + 1;
      if ( (unsigned __int16)v7 >= (unsigned int)*(unsigned __int16 *)v45 )
        goto LABEL_47;
    result = 0;
  else
LABEL_47:
    result = 1;
  return result;
}


int __fastcall DataStructures::List<RakNet::RakNetGUID>::Insert(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1 OVERLAPPED
  unsigned int v5; // r5@2
  signed __int64 v6; // r0@5
  RakNet::RakNetGUID *v7; // r0@9
  RakNet::RakNetGUID *v8; // r9@9
  int v9; // r5@9
  RakNet::RakNetGUID *v10; // r0@14
  unsigned int v11; // r1@15
  unsigned int v12; // r2@16
  RakNet::RakNetGUID *v13; // r3@16
  RakNet::RakNetGUID *v14; // r5@16
  __int16 v15; // r7@17
  int result; // r0@20
  int v17; // r2@20

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v5 = 2 * v4;
    if ( !(_DWORD)v4 )
      v5 = 16;
    *(_DWORD *)(v2 + 8) = v5;
    if ( v5 )
    {
      v6 = 16LL * v5;
      if ( !is_mul_ok(0x10u, v5) )
        HIDWORD(v6) = 1;
      if ( HIDWORD(v6) )
        LODWORD(v6) = -1;
      v7 = (RakNet::RakNetGUID *)j_operator new[](v6);
      v8 = v7;
      v9 = 16 * v5;
      do
      {
        v9 -= 16;
        v7 = (RakNet::RakNetGUID *)(j_RakNet::RakNetGUID::RakNetGUID(v7) + 16);
      }
      while ( v9 );
    }
    else
      v8 = 0;
    v10 = *(RakNet::RakNetGUID **)v2;
    if ( *(_DWORD *)v2 )
      v11 = *(_DWORD *)(v2 + 4);
      if ( v11 )
        v12 = 0;
        v13 = v8;
        v14 = *(RakNet::RakNetGUID **)v2;
        do
        {
          ++v12;
          *(_QWORD *)v13 = *(_QWORD *)v14;
          v15 = *((_WORD *)v14 + 4);
          v14 = (RakNet::RakNetGUID *)((char *)v14 + 16);
          *((_WORD *)v13 + 4) = v15;
          v13 = (RakNet::RakNetGUID *)((char *)v13 + 16);
        }
        while ( v12 < v11 );
      j_operator delete[]((void *)v10);
    *(_DWORD *)v2 = v8;
    LODWORD(v4) = *(_DWORD *)(v2 + 4);
  }
  else
    v8 = *(RakNet::RakNetGUID **)v2;
  *(__int64 *)((char *)&v4 + 4) = *(_QWORD *)v3;
  *((_DWORD *)v8 + 4 * v4) = *(_QWORD *)v3;
  HIDWORD(v4) = (char *)v8 + 16 * v4;
  LODWORD(v4) = v4 + 1;
  *(_DWORD *)(HIDWORD(v4) + 4) = v17;
  *(_WORD *)(HIDWORD(v4) + 8) = *(_WORD *)(v3 + 8);
  *(_DWORD *)(v2 + 4) = v4;
  return result;
}


DataStructures::ByteQueue *__fastcall DataStructures::ByteQueue::~ByteQueue(DataStructures::ByteQueue *this)
{
  DataStructures::ByteQueue *v1; // r4@1

  v1 = this;
  if ( *((_DWORD *)this + 3) )
    rakFree_Ex(
      *(_DWORD *)this,
      "F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\dependencies\\Raknet\\Raknet.Shared\\..\\..\\..\\..\\..\\src-dep"
      "s\\raknet\\DS_ByteQueue.cpp",
      26);
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  return v1;
}


int __fastcall DataStructures::MemoryPool<RakNet::RemoteSystemIndex>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0xC;
  v18 = rakMalloc_Ex(4 * (v15 / 0xC), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0xC )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 8) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 12;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


RakNet::BitStream *__fastcall DataStructures::RangeList<RakNet::uint24_t>::Serialize(int a1, RakNet::BitStream *a2, unsigned int a3, int a4)
{
  int v4; // r10@1
  unsigned int v5; // r9@1
  int v6; // r4@1
  unsigned int v7; // r7@3
  signed int v8; // r8@3
  unsigned __int8 v9; // r0@4
  int v10; // r6@6
  RakNet::BitStream *v11; // r0@6
  int v12; // r5@6
  unsigned int v13; // r0@7
  int v14; // r1@7
  char v15; // r2@7
  int v16; // r6@9
  unsigned int v17; // r1@9
  unsigned int v18; // r0@9
  int v19; // r10@9
  RakNet::BitStream *v20; // r0@11
  unsigned int v21; // r0@12
  int v22; // r1@12
  char v23; // r2@12
  RakNet::BitStream *v24; // r0@17
  int v25; // r9@17
  unsigned int v26; // r3@17
  unsigned __int8 *v27; // r1@18
  RakNet::BitStream *v28; // r0@18
  RakNet::BitStream *v29; // r8@20
  int v30; // r0@20
  int v31; // r12@22
  int v32; // r2@22
  int v33; // r2@23
  unsigned int v34; // r3@23
  unsigned int v35; // r5@23
  int v36; // r6@23
  int v37; // r1@24
  int v38; // r7@24
  int v40; // [sp+0h] [bp-148h]@1
  RakNet::BitStream *v41; // [sp+4h] [bp-144h]@1
  unsigned __int16 v42; // [sp+8h] [bp-140h]@1
  unsigned __int8 v43; // [sp+Ah] [bp-13Eh]@6
  unsigned int v44; // [sp+Ch] [bp-13Ch]@1
  int v45; // [sp+18h] [bp-130h]@7
  RakNet *v46; // [sp+120h] [bp-28h]@1

  v4 = a1;
  v40 = a4;
  v5 = a3;
  v41 = a2;
  v46 = _stack_chk_guard;
  j_RakNet::BitStream::BitStream((RakNet::BitStream *)&v44);
  v6 = 0;
  v42 = 0;
  if ( *(_DWORD *)(v4 + 4) && v5 >= 0x51 )
  {
    v6 = 0;
    v7 = 1;
    v8 = 3;
    do
    {
      v9 = 0;
      if ( *(_DWORD *)(*(_DWORD *)v4 + v8 - 3) == *(_DWORD *)(*(_DWORD *)v4 + v8 + 1) )
        v9 = 1;
      v43 = v9;
      j_RakNet::BitStream::WriteBits((RakNet::BitStream *)&v44, &v43, 8u, 1);
      v10 = *(_DWORD *)v4;
      v44 += ~(v44 + 7) & 7;
      v11 = (RakNet::BitStream *)j_RakNet::BitStream::AddBitsAndReallocate((RakNet::BitStream *)&v44, 0x18u);
      v12 = v10 + v8;
      if ( j_RakNet::BitStream::IsNetworkOrderInternal(v11) )
      {
        *(_BYTE *)(v45 + (v44 >> 3)) = *(_BYTE *)(v10 + v8);
        *(_BYTE *)(v45 + (v44 >> 3) + 1) = *(_BYTE *)(v12 - 1);
        v13 = v44;
        v14 = v45;
        v15 = *(_BYTE *)(v12 - 2);
      }
      else
        *(_BYTE *)(v45 + (v44 >> 3)) = *(_BYTE *)(v12 - 3);
        *(_BYTE *)(v45 + (v44 >> 3) + 1) = *(_BYTE *)(v12 - 2);
        v15 = *(_BYTE *)(v12 - 1);
      v16 = v4;
      *(_BYTE *)(v14 + (v13 >> 3) + 2) = v15;
      v17 = v44;
      v18 = v44 + 24;
      v44 += 24;
      v19 = *(_DWORD *)v4 + v8;
      if ( *(_DWORD *)(v19 - 3) == *(_DWORD *)(v19 + 1) )
        v6 += 40;
        v44 = v18 + (~(v17 + 7) & 7);
        v20 = (RakNet::BitStream *)j_RakNet::BitStream::AddBitsAndReallocate((RakNet::BitStream *)&v44, 0x18u);
        if ( j_RakNet::BitStream::IsNetworkOrderInternal(v20) )
        {
          *(_BYTE *)(v45 + (v44 >> 3)) = *(_BYTE *)(v19 + 4);
          *(_BYTE *)(v45 + (v44 >> 3) + 1) = *(_BYTE *)(v19 + 3);
          v21 = v44;
          v22 = v45;
          v23 = *(_BYTE *)(v19 + 2);
        }
        else
          *(_BYTE *)(v45 + (v44 >> 3)) = *(_BYTE *)(v19 + 1);
          *(_BYTE *)(v45 + (v44 >> 3) + 1) = *(_BYTE *)(v19 + 2);
          v23 = *(_BYTE *)(v19 + 3);
        v6 += 72;
        *(_BYTE *)(v22 + (v21 >> 3) + 2) = v23;
        v44 += 24;
      v4 = v16;
      ++v42;
      if ( v7 >= *(_DWORD *)(v16 + 4) )
        break;
      v8 += 8;
      ++v7;
    }
    while ( v6 + 81 <= v5 );
  }
  v24 = *(RakNet::BitStream **)v41;
  v25 = (~(*(_DWORD *)v41 + 7) & 7) + *(_DWORD *)v41;
  *(_DWORD *)v41 = v25;
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v24) )
    v27 = (unsigned __int8 *)&v42;
    v28 = v41;
  else
    j_RakNet::BitStream::ReverseBytes((RakNet::BitStream *)&v42, &v43, (unsigned __int8 *)2, v26);
    v27 = &v43;
  j_RakNet::BitStream::WriteBits(v28, v27, 0x10u, 1);
  v29 = *(RakNet::BitStream **)v41;
  j_RakNet::BitStream::Write(v41, (RakNet::BitStream *)&v44, v44);
  v30 = v42;
  if ( v42 && v40 == 1 )
    v31 = *(_DWORD *)(v4 + 4);
    v32 = *(_DWORD *)(v4 + 4);
    if ( v31 != v42 )
      v33 = *(_DWORD *)v4;
      v34 = v31 - v42;
      v35 = 0;
      v36 = *(_DWORD *)v4 + 8 * v42;
      do
        v37 = v36 + 8 * v35;
        *(_DWORD *)(v33 + 8 * v35) = *(_DWORD *)(v36 + 8 * v35);
        v38 = v33 + 8 * v35++;
        *(_DWORD *)(v38 + 4) = *(_DWORD *)(v37 + 4);
      while ( v35 < v34 );
      v32 = v30;
    *(_DWORD *)(v4 + 4) = v31 - v32;
  j_RakNet::BitStream::~BitStream((RakNet::BitStream *)&v44);
  if ( _stack_chk_guard != v46 )
    j___stack_chk_fail_0(_stack_chk_guard - v46);
  return (RakNet::BitStream *)((char *)v29 + v6 - v25);
}


int __fastcall DataStructures::MemoryPool<RakNet::SystemAddress>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  signed int v17; // r6@8
  int v18; // r0@8
  int v19; // r1@10
  signed int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
    {
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
      }
      else
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
    }
    return result;
  }
  v14 = rakMalloc_Ex(20, a2, v4);
  *(_DWORD *)v3 = v14;
  if ( !v14 )
    return 0;
  *(_DWORD *)(v3 + 8) = 1;
  v15 = *(_DWORD *)(v3 + 16);
  v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4);
  *(_DWORD *)(v14 + 8) = v16;
  if ( !v16 )
  v17 = v15 / 0x88;
  v18 = rakMalloc_Ex(4 * (v15 / 0x88), v6, v4);
  *(_DWORD *)v14 = v18;
  if ( !v18 )
    rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
  if ( v15 >= 0x88 )
    v19 = *(_DWORD *)(v14 + 8);
    v20 = 0;
    do
      *(_DWORD *)(v19 + 132) = v14;
      *(_DWORD *)(v18 + 4 * v20++) = v19;
      v19 += 136;
    while ( v20 < v17 );
  *(_DWORD *)(v14 + 4) = v17;
  v21 = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
  *(_DWORD *)(v14 + 16) = v14;
  v22 = *(_DWORD *)(v21 + 4) - 1;
  *(_DWORD *)(v21 + 4) = v22;
  return *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
}


int __fastcall DataStructures::ThreadsafeAllocatingQueue<RakNet::SystemAddress>::Clear(int a1, int a2, int a3)
{
  int v3; // r4@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  unsigned int i; // r5@1
  unsigned int v8; // r2@2
  __int64 v9; // r0@3
  unsigned int v10; // r1@6
  unsigned int v11; // r0@9
  void *v12; // r0@11
  int v13; // r5@16
  int v14; // r7@17
  int v15; // r6@17
  int v16; // r5@19
  int v17; // r7@20
  int v18; // r6@20

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 20);
  v5 = a3;
  v6 = a2;
  j_RakNet::SimpleMutex::Lock((pthread_mutex_t *)(a1 + 20));
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)(v3 + 28);
    v10 = HIDWORD(v9) >= (unsigned int)v9 ? HIDWORD(v9) - v9 : HIDWORD(v9) - (signed int)v9 + *(_DWORD *)(v3 + 36);
    if ( i >= v10 )
      break;
    v8 = *(_DWORD *)(v3 + 36);
    if ( i + (unsigned int)v9 >= v8 )
      LODWORD(v9) = v9 - v8;
    j_DataStructures::MemoryPool<RakNet::SystemAddress>::Release(
      v3,
      *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * (v9 + i)),
      v6,
      v5);
  }
  v11 = *(_DWORD *)(v3 + 36);
  if ( v11 )
    if ( v11 >= 0x21 )
    {
      v12 = *(void **)(v3 + 24);
      if ( v12 )
        j_operator delete[](v12);
      *(_DWORD *)(v3 + 36) = 0;
    }
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) = 0;
  j_RakNet::SimpleMutex::Unlock(v4);
  j_RakNet::SimpleMutex::Lock(v4);
  if ( *(_DWORD *)(v3 + 8) >= 1 )
    v13 = *(_DWORD *)v3;
    do
      rakFree_Ex(*(_DWORD *)v13, v6, v5);
      rakFree_Ex(*(_DWORD *)(v13 + 8), v6, v5);
      v14 = *(_DWORD *)v3;
      v15 = *(_DWORD *)(v13 + 12);
      rakFree_Ex(v13, v6, v5);
      v13 = v15;
    while ( v15 != v14 );
  if ( *(_DWORD *)(v3 + 12) >= 1 )
    v16 = *(_DWORD *)(v3 + 4);
      rakFree_Ex(*(_DWORD *)v16, v6, v5);
      rakFree_Ex(*(_DWORD *)(v16 + 8), v6, v5);
      v17 = *(_DWORD *)(v3 + 4);
      v18 = *(_DWORD *)(v16 + 12);
      rakFree_Ex(v16, v6, v5);
      v16 = v18;
    while ( v18 != v17 );
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  return j_j_j__ZN6RakNet11SimpleMutex6UnlockEv_0(v4);
}


int __fastcall DataStructures::ByteQueue::PeekContiguousBytes(DataStructures::ByteQueue *this, unsigned int *a2)
{
  __int64 v2; // r2@1

  v2 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v2) < (unsigned int)v2 )
    HIDWORD(v2) = *((_DWORD *)this + 3);
  *a2 = HIDWORD(v2) - v2;
  return (*(_QWORD *)this >> 32) + *(_QWORD *)this;
}


int __fastcall DataStructures::MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 8);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xCu )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::MemoryPool<RakNet::SystemAddress>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 132);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0x88u )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}


int __fastcall DataStructures::ByteQueue::ByteQueue(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


signed int __fastcall DataStructures::ByteQueue::ReadBytes(DataStructures::ByteQueue *this, char *a2, unsigned int a3, int a4)
{
  DataStructures::ByteQueue *v4; // r4@1
  char *v5; // r7@1
  __int64 v6; // r0@1
  int v7; // r8@1
  unsigned int v8; // r5@1
  unsigned int v9; // r2@2
  int v10; // r1@8
  unsigned int v11; // r6@8
  int v12; // r0@9
  int v13; // r2@9

  v4 = this;
  v5 = a2;
  v6 = *(_QWORD *)((char *)this + 4);
  v7 = a4;
  v8 = a3;
  if ( HIDWORD(v6) >= (unsigned int)v6 )
    v9 = HIDWORD(v6) - v6;
  else
    v9 = *((_DWORD *)v4 + 3) + HIDWORD(v6) - v6;
  if ( v9 < v8 )
    v8 = v9;
  if ( !v8 )
    return 0;
  {
    v10 = *(_DWORD *)v4 + v6;
    goto LABEL_12;
  }
  HIDWORD(v6) = *(_DWORD *)v4 + v6;
  v11 = *((_DWORD *)v4 + 3) - v6;
  if ( v8 <= v11 )
LABEL_12:
    v12 = (int)v5;
    v13 = v8;
    goto LABEL_13;
  j___aeabi_memcpy_0((int)v5, v10, v11);
  v10 = *(_DWORD *)v4;
  v12 = (int)&v5[v11];
  v13 = v8 - v11;
LABEL_13:
  j___aeabi_memcpy_0(v12, v10, v13);
  if ( !v7 )
    *((_DWORD *)v4 + 1) = (*((_DWORD *)v4 + 1) + v8) % *((_DWORD *)v4 + 3);
  return 1;
}


int __fastcall DataStructures::MemoryPool<RakNet::RakPeer::SocketQueryOutput>::Allocate(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  signed int v5; // r2@1
  int v6; // r7@1
  int v7; // r1@2
  bool v8; // zf@2
  int v9; // r0@2
  int result; // r0@2
  int v11; // r2@4
  int v12; // r2@4
  int v13; // r2@5
  int v14; // r5@6
  unsigned int v15; // r8@7
  int v16; // r0@7
  unsigned int v17; // r8@8
  _DWORD *v18; // r0@8
  int v19; // r1@10
  unsigned int v20; // r2@10
  int v21; // r0@12
  int v22; // r1@12

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( v5 < 1 )
  {
    v14 = rakMalloc_Ex(20, a2, v4);
    *(_DWORD *)v3 = v14;
    if ( v14
      && (*(_DWORD *)(v3 + 8) = 1,
          v15 = *(_DWORD *)(v3 + 16),
          v16 = rakMalloc_Ex(*(_DWORD *)(v3 + 16), v6, v4),
          (*(_DWORD *)(v14 + 8) = v16) != 0) )
    {
      v17 = v15 >> 4;
      v18 = (_DWORD *)rakMalloc_Ex(4 * v17, v6, v4);
      *(_DWORD *)v14 = v18;
      if ( v18 )
      {
        if ( v17 )
        {
          v19 = *(_DWORD *)(v14 + 8);
          v20 = v17;
          do
          {
            *(_DWORD *)(v19 + 12) = v14;
            --v20;
            *v18 = v19;
            ++v18;
            v19 += 16;
          }
          while ( v20 );
        }
        *(_DWORD *)(v14 + 4) = v17;
        v21 = *(_DWORD *)v3;
        *(_DWORD *)(v14 + 12) = *(_DWORD *)v3;
        *(_DWORD *)(v14 + 16) = v14;
        v22 = *(_DWORD *)(v21 + 4) - 1;
        *(_DWORD *)(v21 + 4) = v22;
        result = *(_DWORD *)(*(_DWORD *)v21 + 4 * v22);
      }
      else
        rakFree_Ex(*(_DWORD *)(v14 + 8), v6, v4);
        result = 0;
    }
    else
      result = 0;
  }
  else
    v7 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(*(_DWORD *)a1 + 4) - 1;
    v8 = v9 == 0;
    *(_DWORD *)(v7 + 4) = v9;
    result = *(_DWORD *)(*(_DWORD *)v7 + 4 * v9);
    if ( v8 )
      *(_DWORD *)(v3 + 8) = v5 - 1;
      v11 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) = v11;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 12) = v12 + 1;
      if ( v12 )
        v13 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v7 + 12) = v13;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) = v7;
        *(_DWORD *)(v13 + 16) = v7;
        *(_DWORD *)(v3 + 4) = v7;
        *(_DWORD *)(v7 + 12) = v7;
        *(_DWORD *)(v7 + 16) = v7;
  return result;
}


int __fastcall DataStructures::ThreadsafeAllocatingQueue<RakNet::Packet>::Clear(int a1, int a2, int a3)
{
  int v3; // r4@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  unsigned int i; // r5@1
  unsigned int v8; // r2@2
  __int64 v9; // r0@3
  unsigned int v10; // r1@6
  unsigned int v11; // r0@9
  void *v12; // r0@11
  int v13; // r5@16
  int v14; // r7@17
  int v15; // r6@17
  int v16; // r5@19
  int v17; // r7@20
  int v18; // r6@20

  v3 = a1;
  v4 = (pthread_mutex_t *)(a1 + 20);
  v5 = a3;
  v6 = a2;
  j_RakNet::SimpleMutex::Lock((pthread_mutex_t *)(a1 + 20));
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)(v3 + 28);
    v10 = HIDWORD(v9) >= (unsigned int)v9 ? HIDWORD(v9) - v9 : HIDWORD(v9) - (signed int)v9 + *(_DWORD *)(v3 + 36);
    if ( i >= v10 )
      break;
    v8 = *(_DWORD *)(v3 + 36);
    if ( i + (unsigned int)v9 >= v8 )
      LODWORD(v9) = v9 - v8;
    j_DataStructures::MemoryPool<RakNet::Packet>::Release(v3, *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * (v9 + i)), v6, v5);
  }
  v11 = *(_DWORD *)(v3 + 36);
  if ( v11 )
    if ( v11 >= 0x21 )
    {
      v12 = *(void **)(v3 + 24);
      if ( v12 )
        j_operator delete[](v12);
      *(_DWORD *)(v3 + 36) = 0;
    }
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) = 0;
  j_RakNet::SimpleMutex::Unlock(v4);
  j_RakNet::SimpleMutex::Lock(v4);
  if ( *(_DWORD *)(v3 + 8) >= 1 )
    v13 = *(_DWORD *)v3;
    do
      rakFree_Ex(*(_DWORD *)v13, v6, v5);
      rakFree_Ex(*(_DWORD *)(v13 + 8), v6, v5);
      v14 = *(_DWORD *)v3;
      v15 = *(_DWORD *)(v13 + 12);
      rakFree_Ex(v13, v6, v5);
      v13 = v15;
    while ( v15 != v14 );
  if ( *(_DWORD *)(v3 + 12) >= 1 )
    v16 = *(_DWORD *)(v3 + 4);
      rakFree_Ex(*(_DWORD *)v16, v6, v5);
      rakFree_Ex(*(_DWORD *)(v16 + 8), v6, v5);
      v17 = *(_DWORD *)(v3 + 4);
      v18 = *(_DWORD *)(v16 + 12);
      rakFree_Ex(v16, v6, v5);
      v16 = v18;
    while ( v18 != v17 );
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  return j_j_j__ZN6RakNet11SimpleMutex6UnlockEv_0(v4);
}


int __fastcall DataStructures::MemoryPool<RakNet::RakPeer::BufferedCommandStruct>::Release(int result, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r3@1
  signed int v8; // r1@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@6
  signed int v12; // r1@7
  __int64 v13; // r2@7
  int v14; // r1@10

  v4 = *(_DWORD *)(a2 + 224);
  v5 = a4;
  v6 = a3;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v7 + 1;
  *(_DWORD *)(*(_DWORD *)v4 + 4 * v7) = a2;
  if ( v7 )
  {
    if ( v7 + 1 == *(_DWORD *)(result + 16) / 0xE8u )
    {
      v8 = *(_DWORD *)(result + 8);
      if ( v8 >= 4 )
      {
        v9 = v8 - 1;
        v10 = *(_DWORD *)(v4 + 12);
        if ( v4 == *(_DWORD *)result )
          *(_DWORD *)result = v10;
        v11 = *(_DWORD *)(v4 + 16);
        *(_DWORD *)(v11 + 12) = v10;
        *(_DWORD *)(*(_DWORD *)(v4 + 12) + 16) = v11;
        *(_DWORD *)(result + 8) = v9;
        rakFree_Ex(*(_DWORD *)v4, v6, v5);
        rakFree_Ex(*(_DWORD *)(v4 + 8), v6, v5);
        result = rakFree_Ex(v4, v6, v5);
      }
    }
  }
  else
    v12 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v12 - 1;
    v13 = *(_QWORD *)(v4 + 12);
    *(_DWORD *)(v13 + 16) = HIDWORD(v13);
    *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) = v13;
    if ( v12 >= 2 && v4 == *(_DWORD *)(result + 4) )
      *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 12);
    v14 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v14 + 1;
    if ( v14 )
      result = *(_DWORD *)result;
      *(_DWORD *)(v4 + 12) = result;
      *(_DWORD *)(v4 + 16) = *(_DWORD *)(result + 16);
      *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = v4;
      *(_DWORD *)(result + 16) = v4;
    else
      *(_DWORD *)result = v4;
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 16) = v4;
  return result;
}
