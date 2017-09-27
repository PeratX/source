

signed int __fastcall CircuitSystem::getDirection(CircuitSystem *this, const BlockPos *a2)
{
  int v2; // r0@1
  signed int result; // r0@2

  v2 = j_CircuitSceneGraph::getBaseComponent((CircuitSystem *)((char *)this + 4), a2);
  if ( v2 )
    result = (char)(*(int (**)(void))(*(_DWORD *)v2 + 12))();
  else
    result = 6;
  return result;
}


int __fastcall CircuitSystem::cacheValues(int result)
{
  int v1; // r4@1
  int v2; // r1@1
  int i; // r6@1
  bool v4; // zf@2
  int v5; // [sp+4h] [bp-1Ch]@5
  int v6; // [sp+8h] [bp-18h]@5
  int v7; // [sp+Ch] [bp-14h]@5

  v1 = result;
  v2 = *(_QWORD *)(result + 32) >> 32;
  for ( i = *(_QWORD *)(result + 32); i != v2; i += 28 )
  {
    result = *(_DWORD *)i;
    v4 = *(_DWORD *)i == 0;
    if ( *(_DWORD *)i )
      v4 = *(_BYTE *)(result + 32) == 0;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(i + 8);
      v6 = *(_DWORD *)(i + 12);
      v7 = *(_DWORD *)(i + 16);
      result = (*(int (**)(void))(*(_DWORD *)result + 68))();
      v2 = *(_DWORD *)(v1 + 36);
    }
  }
  return result;
}


int __fastcall CircuitSystem::invalidatePos(int result, const BlockPos *a2)
{
  if ( !*(_BYTE *)result )
    result = j_j_j__ZN17CircuitSceneGraph13invalidatePosERK8BlockPos((CircuitSceneGraph *)(result + 4), a2);
  return result;
}


int __fastcall CircuitSystem::setStrength(CircuitSystem *this, const BlockPos *a2, int a3)
{
  int result; // r0@1

  result = j_CircuitSceneGraph::getBaseComponent((CircuitSystem *)((char *)this + 4), a2);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 16))();
  return result;
}


int __fastcall CircuitSystem::create<ConsumerComponent>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  ConsumerComponent *v10; // r4@4
  ConsumerComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x43534343uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x43534343uLL);
  }
  else
    v10 = (ConsumerComponent *)operator new(0x30u);
    ConsumerComponent::ConsumerComponent(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::create<RepeaterCapacitor>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  RepeaterCapacitor *v10; // r4@4
  RepeaterCapacitor *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D435252uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D435252uLL);
  }
  else
    v10 = (RepeaterCapacitor *)operator new(0x64u);
    RepeaterCapacitor::RepeaterCapacitor(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::create<PulseCapacitor>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  PulseCapacitor *v10; // r4@4
  PulseCapacitor *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D435043uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy_0(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D435043uLL);
  }
  else
    v10 = (PulseCapacitor *)operator new(0x34u);
    PulseCapacitor::PulseCapacitor(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::_shouldEvaluate(int result, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  int i; // r5@2
  int *v4; // r1@5 OVERLAPPED
  int *v5; // r2@5 OVERLAPPED
  int v6; // r3@6

  v2 = a2;
  if ( a2 )
  {
    for ( i = *(_DWORD *)(result + 52); i; i = *(_DWORD *)i )
    {
      result = j_BlockSource::areChunksFullyLoaded(v2, (const BlockPos *)(i + 4), 32);
      *(_QWORD *)&v4 = *(_QWORD *)(i + 16);
      while ( v5 != v4 )
      {
        v6 = *v4;
        v4 += 7;
        if ( v6 )
          *(_BYTE *)(v6 + 32) = result;
      }
    }
  }
  return result;
}


int __fastcall CircuitSystem::create<PoweredBlockComponent>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  int v6; // r4@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  PoweredBlockComponent *v10; // r6@4
  PoweredBlockComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x43535042uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x43535042uLL);
  }
  else
    v10 = (PoweredBlockComponent *)operator new(0x30u);
    PoweredBlockComponent::PoweredBlockComponent(v10, 0xFFu);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


void __fastcall CircuitSystem::updateBlocks(CircuitSystem *this, BlockSource *a2, const BlockPos *a3)
{
  bool v3; // zf@1
  __int64 v4; // r8@4
  int v5; // r3@4
  __int64 v6; // r4@4
  unsigned int v7; // r6@4
  unsigned int v8; // r7@4
  int v9; // r0@4
  int v10; // r11@5
  int v11; // r4@5
  int v12; // r1@7
  bool v13; // zf@7
  int v14; // r10@12
  bool v15; // zf@15
  __int64 v16; // r0@18
  int v17; // r0@19
  _QWORD *v18; // r9@20
  int v19; // r5@20
  int v20; // r7@20
  _QWORD *v21; // r0@22
  _QWORD *v22; // r10@32
  _DWORD *v23; // r9@33
  int v24; // r7@34
  void *ptr; // [sp+8h] [bp-40h]@32
  BlockSource *v26; // [sp+Ch] [bp-3Ch]@1
  _QWORD *v27; // [sp+10h] [bp-38h]@18
  _QWORD *v28; // [sp+14h] [bp-34h]@18
  _QWORD *v29; // [sp+18h] [bp-30h]@18
  unsigned __int8 v30; // [sp+1Ch] [bp-2Ch]@35
  unsigned __int8 v31; // [sp+20h] [bp-28h]@25

  v26 = a2;
  v3 = *((_BYTE *)this + 180) == 0;
  if ( *((_BYTE *)this + 180) )
    v3 = *((_DWORD *)this + 14) == 0;
  if ( !v3 )
  {
    v4 = *(_QWORD *)a3;
    v5 = *((_DWORD *)a3 + 2);
    v6 = *(_QWORD *)((char *)this + 44);
    v7 = 8976890 * v4 + 981131 * HIDWORD(v4) + v5;
    v8 = v7 % (unsigned int)(*(_QWORD *)((char *)this + 44) >> 32);
    v9 = *(_DWORD *)(v6 + 4 * v8);
    if ( v9 )
    {
      v10 = *(_DWORD *)v9;
      v11 = *(_DWORD *)(*(_DWORD *)v9 + 28);
      while ( 1 )
      {
        if ( v11 == v7 )
        {
          v12 = *(_DWORD *)(v10 + 4);
          v13 = (_DWORD)v4 == v12;
          if ( (_DWORD)v4 == v12 )
            v13 = HIDWORD(v4) == *(_DWORD *)(v10 + 8);
          if ( v13 && v5 == *(_DWORD *)(v10 + 12) )
            break;
        }
        v14 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
          LODWORD(v6) = *(_DWORD *)(v14 + 28);
          v9 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v14 + 28) % HIDWORD(v6) == v8 )
            continue;
        return;
      }
      v15 = v9 == 0;
      if ( v9 )
        v11 = *(_DWORD *)v9;
        v15 = *(_DWORD *)v9 == 0;
      if ( !v15 )
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v16 = *(_QWORD *)(v11 + 16);
        if ( (_DWORD)v16 != HIDWORD(v16) )
          v17 = v16 + 20;
          do
          {
            v18 = (_QWORD *)v17;
            v19 = v17 - 20;
            v20 = *(_DWORD *)(v17 - 20);
            if ( *(_BYTE *)(v20 + 18) )
            {
              *(_BYTE *)(v20 + 18) = 0;
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 92))(v20) )
              {
                v21 = v28;
                if ( v28 == v29 )
                {
                  j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item const&>(
                    (unsigned __int64 *)&v27,
                    v19);
                }
                else
                  *v28 = *(_QWORD *)((char *)v18 - 20);
                  *((_DWORD *)v21 + 2) = *((_DWORD *)v18 - 3);
                  *((_DWORD *)v21 + 3) = *((_DWORD *)v18 - 2);
                  *((_DWORD *)v21 + 4) = *((_DWORD *)v18 - 1);
                  *(_QWORD *)((char *)v21 + 20) = *v18;
                  v28 = (_QWORD *)((char *)v21 + 28);
              }
              else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20) != -1 )
                j_BlockSource::getBlockID((BlockSource *)&v31, v26, (int)v18 - 12);
                if ( !*(_BYTE *)(v20 + 17) || !(unsigned __int8)*(_WORD *)(v20 + 16) )
                  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v31] + 176))(Block::mBlocks[v31]);
                *(_BYTE *)(v20 + 17) = 0;
            }
            v17 = (int)v18 + 28;
          }
          while ( v18 + 1 != *(_QWORD **)(v11 + 20) );
          v22 = v28;
          ptr = v27;
          if ( v27 != v28 )
            v23 = v27;
            do
              v24 = *v23;
              if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v23 + 8))(*v23) != -1 )
                j_BlockSource::getBlockID((BlockSource *)&v30, v26, (int)(v23 + 2));
                if ( !*(_BYTE *)(v24 + 17) || !(unsigned __int8)*(_WORD *)(v24 + 16) )
                  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v30] + 176))(Block::mBlocks[v30]);
                *(_BYTE *)(v24 + 17) = 0;
              v23 += 7;
            while ( (_DWORD *)v22 != v23 );
          if ( ptr )
            j_operator delete(ptr);
    }
  }
}


int __fastcall CircuitSystem::create<PistonConsumer>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  BaseCircuitComponent *v10; // r4@4
  BaseCircuitComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D435049uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D435049uLL);
  }
  else
    v10 = (BaseCircuitComponent *)operator new(0x30u);
    PistonConsumer::PistonConsumer(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


void __fastcall CircuitSystem::updateBlocks(CircuitSystem *this, BlockSource *a2, const BlockPos *a3)
{
  CircuitSystem::updateBlocks(this, a2, a3);
}


int __fastcall CircuitSystem::create<BaseRailTransporter>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  int v6; // r4@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  BaseCircuitComponent *v10; // r6@4
  BaseCircuitComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D435052uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D435052uLL);
  }
  else
    v10 = (BaseCircuitComponent *)operator new(0x30u);
    _aeabi_memclr4(v10, 48);
    BaseCircuitComponent::BaseCircuitComponent(v10);
    v11 = v10;
    *(_DWORD *)v10 = &off_27199F8;
    *((_DWORD *)v10 + 11) = 0;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::create<RedstoneTorchCapacitor>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  CapacitorComponent *v10; // r4@4
  CapacitorComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D435443uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D435443uLL);
  }
  else
    v10 = (CapacitorComponent *)operator new(0x44u);
    RedstoneTorchCapacitor::RedstoneTorchCapacitor(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


_DWORD *__fastcall CircuitSystem::evaluateComponents(CircuitSystem *this, int a2)
{
  CircuitSystem *v2; // r5@1
  int v3; // r4@1
  _DWORD *result; // r0@1
  _DWORD *i; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // r7@2
  __int64 v8; // r0@2
  int v9; // r2@3
  bool v10; // zf@3
  signed int v11; // r2@3
  signed int v12; // r0@5
  int v13; // [sp+0h] [bp-30h]@8
  int v14; // [sp+4h] [bp-2Ch]@8
  int v15; // [sp+8h] [bp-28h]@8

  v2 = this;
  v3 = a2;
  v6 = *((_QWORD *)this + 4);
  result = (_DWORD *)(*((_QWORD *)this + 4) >> 32);
  for ( i = (_DWORD *)v6; i != result; result = (_DWORD *)*((_DWORD *)v2 + 9) )
  {
    v7 = *i;
    LODWORD(v8) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*i + 40))(*i);
    if ( *(_BYTE *)(v7 + 32) )
    {
      v9 = v8 ^ 0x43534341;
      LODWORD(v8) = v8 ^ 0x43535043;
      v10 = (v9 | HIDWORD(v8)) == 0;
      v11 = 0;
      if ( v10 )
        v11 = 1;
      v10 = v8 == 0;
      v12 = 0;
        v12 = 1;
      if ( (v12 | v11) == v3 )
      {
        v13 = i[2];
        v14 = i[3];
        v15 = i[4];
        if ( (*(int (__fastcall **)(int, CircuitSystem *, int *))(*(_DWORD *)v7 + 64))(v7, v2, &v13) == 1 )
          *(_BYTE *)(v7 + 18) = 1;
      }
    }
    i += 7;
  }
  return result;
}


int __fastcall CircuitSystem::updateDependencies(CircuitSystem *this, BlockSource *a2)
{
  CircuitSystem *v2; // r4@1
  int result; // r0@1

  v2 = this;
  j_CircuitSceneGraph::update((CircuitSystem *)((char *)this + 4), a2);
  result = 0;
  *((_BYTE *)v2 + 180) = 0;
  return result;
}


int __fastcall CircuitSystem::removeComponents(int result, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  CircuitSceneGraph *v3; // r5@2
  BaseCircuitComponent *v4; // r2@2

  v2 = a2;
  if ( !*(_BYTE *)result )
  {
    v3 = (CircuitSceneGraph *)(result + 4);
    v4 = (BaseCircuitComponent *)j_CircuitSceneGraph::getBaseComponent((CircuitSceneGraph *)(result + 4), a2);
    result = (int)j_j_j__ZN17CircuitSceneGraph6removeERK8BlockPosP20BaseCircuitComponent(v3, v2, v4);
  }
  return result;
}


int __fastcall CircuitSystem::createComponent(int a1, const BlockPos *a2, int a3, int *a4)
{
  int *v4; // r5@1
  int v5; // r6@1
  const BlockPos *v6; // r4@1
  int v7; // r1@2
  int result; // r0@2
  int v9; // r0@5
  int v10; // [sp+4h] [bp-14h]@5

  v4 = a4;
  v5 = a1;
  v6 = a2;
  (*(void (**)(void))(*(_DWORD *)*a4 + 20))();
  if ( *(_BYTE *)v5 )
  {
    v7 = *v4;
    result = 0;
    *v4 = 0;
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      result = 0;
    }
  }
  else
    v9 = *v4;
    v10 = v9;
    j_CircuitSceneGraph::add(v5 + 4, (int)v6, &v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v10 = 0;
    result = j_CircuitSceneGraph::getFromPendingAdd((CircuitSceneGraph *)(v5 + 4), v6);
  return result;
}


signed int __fastcall CircuitSystem::hasDirectPower(CircuitSystem *this, const BlockPos *a2)
{
  BaseCircuitComponent *v2; // r0@1
  signed int result; // r0@2

  v2 = (BaseCircuitComponent *)j_CircuitSceneGraph::getBaseComponent((CircuitSystem *)((char *)this + 4), a2);
  if ( v2 )
    result = j_BaseCircuitComponent::hasDirectPower(v2);
  else
    result = 0;
  return result;
}


int __fastcall CircuitSystem::create<TransporterComponent>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  TransporterComponent *v10; // r4@4
  TransporterComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x43535452uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x43535452uLL);
  }
  else
    v10 = (TransporterComponent *)operator new(0x30u);
    TransporterComponent::TransporterComponent(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::create<ComparatorCapacitor>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  ComparatorCapacitor *v10; // r4@4
  ComparatorCapacitor *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x4D434352uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x4D434352uLL);
  }
  else
    v10 = (ComparatorCapacitor *)operator new(0x60u);
    ComparatorCapacitor::ComparatorCapacitor(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::getStrength(CircuitSystem *this, const BlockPos *a2)
{
  int v2; // r0@1
  int result; // r0@3

  v2 = j_CircuitSceneGraph::getBaseComponent((CircuitSystem *)((char *)this + 4), a2);
  if ( v2 && !*(_BYTE *)(v2 + 17) )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 8))();
  else
    result = -1;
  return result;
}


_BOOL4 __fastcall CircuitSystem::isAvailableAt(CircuitSystem *this, const BlockPos *a2)
{
  return j_CircuitSceneGraph::getBaseComponent((CircuitSystem *)((char *)this + 4), a2) != 0;
}


int __fastcall CircuitSystem::updateIndividualBlock(CircuitSystem *this, BaseCircuitComponent *a2, const BlockPos *a3, const BlockPos *a4, BlockSource *a5)
{
  BaseCircuitComponent *v5; // r4@1
  const BlockPos *v6; // r5@1
  int result; // r0@1
  unsigned __int8 v8; // [sp+4h] [bp-1Ch]@2

  v5 = a2;
  v6 = a4;
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 8))(a2);
  if ( result != -1 )
  {
    j_BlockSource::getBlockID((BlockSource *)&v8, a5, (int)v6);
    if ( !*((_BYTE *)v5 + 17) || !(unsigned __int8)*((_WORD *)v5 + 8) )
      (*(void (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v8] + 176))(Block::mBlocks[v8]);
    result = 0;
    *((_BYTE *)v5 + 17) = 0;
  }
  return result;
}


int __fastcall CircuitSystem::getChunkPos(CircuitSystem *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  CircuitSystem *v4; // r4@1
  LevelChunk *v5; // r0@1
  __int64 *v6; // r0@1

  v4 = this;
  v5 = (LevelChunk *)j_BlockSource::getChunkAt(a3, a4);
  v6 = (__int64 *)j_LevelChunk::getPosition(v5);
  return j_BlockPos::BlockPos((int)v4, v6, 0);
}


signed int __fastcall CircuitSystem::evaluate(CircuitSystem *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  CircuitSystem *v3; // r4@1
  int i; // r6@2
  char v5; // r0@5
  int *v6; // r1@5 OVERLAPPED
  int *v7; // r2@5 OVERLAPPED
  int v8; // r3@6
  _DWORD *v9; // r1@10
  int v10; // r6@10
  int v11; // r0@11
  bool v12; // zf@11
  _DWORD *v13; // r7@16
  int v14; // r6@17
  __int64 v15; // r0@17
  bool v16; // zf@18
  _DWORD *v17; // r5@25
  int v18; // r6@26
  __int64 v19; // r0@26
  bool v20; // zf@27
  int j; // r7@33
  int v22; // r0@34
  bool v23; // zf@34
  signed int result; // r0@39
  int v25; // [sp+4h] [bp-2Ch]@14
  int v26; // [sp+8h] [bp-28h]@14
  int v27; // [sp+Ch] [bp-24h]@14

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    for ( i = *((_DWORD *)this + 13); i; i = *(_DWORD *)i )
    {
      v5 = j_BlockSource::areChunksFullyLoaded(v2, (const BlockPos *)(i + 4), 32);
      *(_QWORD *)&v6 = *(_QWORD *)(i + 16);
      while ( v7 != v6 )
      {
        v8 = *v6;
        v6 += 7;
        if ( v8 )
          *(_BYTE *)(v8 + 32) = v5;
      }
    }
  }
  v9 = (_DWORD *)(*((_QWORD *)v3 + 4) >> 32);
  v10 = *((_QWORD *)v3 + 4);
  if ( (_DWORD *)v10 != v9 )
    do
      v11 = *(_DWORD *)v10;
      v12 = *(_DWORD *)v10 == 0;
      if ( *(_DWORD *)v10 )
        v12 = *(_BYTE *)(v11 + 32) == 0;
      if ( !v12 )
        v25 = *(_DWORD *)(v10 + 8);
        v26 = *(_DWORD *)(v10 + 12);
        v27 = *(_DWORD *)(v10 + 16);
        (*(void (**)(void))(*(_DWORD *)v11 + 68))();
        v9 = (_DWORD *)*((_DWORD *)v3 + 9);
      v10 += 28;
    while ( (_DWORD *)v10 != v9 );
    v13 = (_DWORD *)*((_DWORD *)v3 + 8);
    if ( v13 != v9 )
      do
        v14 = *v13;
        LODWORD(v15) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v13 + 40))(*v13);
        if ( *(_BYTE *)(v14 + 32) )
        {
          v16 = v15 == 1129533507;
          if ( v15 != 1129533507 )
            v16 = v15 == 1129530177;
          if ( v16 )
          {
            v25 = v13[2];
            v26 = v13[3];
            v27 = v13[4];
            if ( (*(int (__fastcall **)(int, CircuitSystem *, int *))(*(_DWORD *)v14 + 64))(v14, v3, &v25) == 1 )
              *(_BYTE *)(v14 + 18) = 1;
          }
        }
        v13 += 7;
      while ( v13 != *((_DWORD **)v3 + 9) );
      v17 = (_DWORD *)*((_DWORD *)v3 + 8);
      if ( v17 != v13 )
        do
          v18 = *v17;
          LODWORD(v19) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v17 + 40))(*v17);
          if ( *(_BYTE *)(v18 + 32) )
            v20 = v19 == 1129530177;
            if ( v19 != 1129530177 )
              v20 = v19 == 1129533507;
            if ( !v20 )
            {
              v25 = v17[2];
              v26 = v17[3];
              v27 = v17[4];
              if ( (*(int (__fastcall **)(int, CircuitSystem *, int *))(*(_DWORD *)v18 + 64))(v18, v3, &v25) == 1 )
                *(_BYTE *)(v18 + 18) = 1;
            }
          v17 += 7;
        while ( v17 != *((_DWORD **)v3 + 9) );
        for ( j = *((_DWORD *)v3 + 8); (_DWORD *)j != v17; j += 28 )
          v22 = *(_DWORD *)j;
          v23 = *(_DWORD *)j == 0;
          if ( *(_DWORD *)j )
            v23 = *(_BYTE *)(v22 + 32) == 0;
          if ( !v23 )
            v25 = *(_DWORD *)(j + 8);
            v26 = *(_DWORD *)(j + 12);
            v27 = *(_DWORD *)(j + 16);
            (*(void (**)(void))(*(_DWORD *)v22 + 60))();
            v17 = (_DWORD *)*((_DWORD *)v3 + 9);
  result = 1;
  *((_BYTE *)v3 + 180) = 1;
  return result;
}


int __fastcall CircuitSystem::CircuitSystem(double a1)
{
  int v1; // r4@1

  v1 = LODWORD(a1);
  LODWORD(a1) += 4;
  *(_BYTE *)v1 = 0;
  j_CircuitSceneGraph::CircuitSceneGraph(a1);
  *(_DWORD *)(v1 + 168) = 0;
  *(_DWORD *)(v1 + 172) = 0;
  *(_DWORD *)(v1 + 176) = 0;
  *(_BYTE *)(v1 + 180) = 1;
  return v1;
}


int __fastcall CircuitSystem::create<ProducerComponent>(int a1, const BlockPos *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r6@2
  BaseCircuitComponent *v10; // r4@4
  BaseCircuitComponent *v11; // [sp+4h] [bp-1Ch]@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)a1 )
  {
    v8 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(a1 + 4), a2, 0x43535043uLL);
    if ( !v8 )
      return j_j_j__ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosy(
               (CircuitSceneGraph *)(v4 + 4),
               v7,
               0x43535043uLL);
  }
  else
    v10 = (BaseCircuitComponent *)operator new(0x34u);
    ProducerComponent::ProducerComponent(v10);
    v11 = v10;
    v8 = CircuitSystem::createComponent(v4, v7, v5, (int *)&v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v11 = 0;
    if ( v6 )
    {
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v6 + 36);
    }
  return v8;
}


int __fastcall CircuitSystem::checkLocks(int result)
{
  int v1; // r4@1
  int v2; // r1@1
  int i; // r6@1
  bool v4; // zf@2
  int v5; // [sp+4h] [bp-1Ch]@5
  int v6; // [sp+8h] [bp-18h]@5
  int v7; // [sp+Ch] [bp-14h]@5

  v1 = result;
  v2 = *(_QWORD *)(result + 32) >> 32;
  for ( i = *(_QWORD *)(result + 32); i != v2; i += 28 )
  {
    result = *(_DWORD *)i;
    v4 = *(_DWORD *)i == 0;
    if ( *(_DWORD *)i )
      v4 = *(_BYTE *)(result + 32) == 0;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(i + 8);
      v6 = *(_DWORD *)(i + 12);
      v7 = *(_DWORD *)(i + 16);
      result = (*(int (**)(void))(*(_DWORD *)result + 60))();
      v2 = *(_DWORD *)(v1 + 36);
    }
  }
  return result;
}
