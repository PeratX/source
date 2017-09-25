

int __fastcall FurnaceFuelContainerController::isBucket(FurnaceFuelContainerController *this, const ItemInstance *a2)
{
  FurnaceFuelContainerController *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  signed int v5; // r5@6
  signed int v6; // r0@6
  signed int v7; // r6@7
  int result; // r0@12

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v5 = 0;
    v6 = 0;
    if ( *(_DWORD *)v2 == Item::mBucket )
    {
      v7 = 0;
      if ( ItemInstance::getAuxValue(v2) == *(_BYTE *)(Block::mFlowingLava + 4) )
        v7 = 1;
      if ( !ItemInstance::getAuxValue(v2) )
        v5 = 1;
      v6 = v5;
      v5 = v7;
    }
    result = v6 | v5;
  return result;
}


void __fastcall FurnaceFuelContainerController::~FurnaceFuelContainerController(FurnaceFuelContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall FurnaceFuelContainerController::FurnaceFuelContainerController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v10 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v11 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  ContainerController::ContainerController((int)v2, (int)&v10, 0);
  v6 = v11;
  if ( v11 )
    v7 = (unsigned int *)(v11 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26ECA80;
  return v2;
}


int __fastcall FurnaceFuelContainerController::isItemAllowed(FurnaceFuelContainerController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  int result; // r0@2
  bool v4; // zf@3
  signed int v5; // r5@8
  signed int v6; // r0@8
  signed int v7; // r6@9

  v2 = a2;
  if ( FurnaceBlockEntity::isFuel(a2, a2) )
  {
    result = 1;
  }
  else
    v4 = *((_BYTE *)v2 + 15) == 0;
    if ( *((_BYTE *)v2 + 15) )
      v4 = *(_DWORD *)v2 == 0;
    if ( v4 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) )
    {
      result = 0;
    }
    else
      v5 = 0;
      v6 = 0;
      if ( *(_DWORD *)v2 == Item::mBucket )
      {
        v7 = 0;
        if ( ItemInstance::getAuxValue(v2) == *(_BYTE *)(Block::mFlowingLava + 4) )
          v7 = 1;
        if ( !ItemInstance::getAuxValue(v2) )
          v5 = 1;
        v6 = v5;
        v5 = v7;
      }
      result = v6 | v5;
  return result;
}


void __fastcall FurnaceFuelContainerController::~FurnaceFuelContainerController(FurnaceFuelContainerController *this)
{
  FurnaceFuelContainerController::~FurnaceFuelContainerController(this);
}


signed int __fastcall FurnaceFuelContainerController::_canAdd(FurnaceFuelContainerController *this, int a2, int a3)
{
  FurnaceFuelContainerController *v3; // r7@1
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  signed int v11; // r1@7
  int v12; // r0@11
  int v13; // r0@13
  int v14; // r5@13
  int v15; // r0@13
  bool v16; // zf@13
  signed int v17; // r5@20
  unsigned int *v18; // r1@23
  unsigned int v19; // r0@25
  unsigned int *v20; // r6@29
  unsigned int v21; // r0@31

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 2);
  v6 = a2;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 4);
    v8 = (unsigned int *)(v5 + 4);
    while ( v7 )
    {
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
      {
        v10 = __strex(v7 + 1, v8);
        v7 = v9;
        if ( !v10 )
        {
          __dmb();
          v11 = 0;
          if ( !*v8 )
            v11 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v11 = 1;
  v5 = 0;
LABEL_11:
  v12 = *((_DWORD *)v3 + 1);
  if ( v11 )
    v12 = 0;
  v13 = (*(int (**)(void))(*(_DWORD *)v12 + 32))();
  v14 = v13;
  v15 = *(_BYTE *)(v13 + 15);
  v16 = v15 == 0;
  if ( v15 )
    v16 = *(_DWORD *)v14 == 0;
  if ( v16
    || ItemInstance::isNull((ItemInstance *)v14)
    || !*(_BYTE *)(v14 + 14)
    || *(_DWORD *)v14 != Item::mBucket
    || ItemInstance::getAuxValue((ItemInstance *)v14) )
    v17 = ContainerController::_canAdd(v3, v6, v4);
  else
    v17 = 2;
    v18 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v17;
}
