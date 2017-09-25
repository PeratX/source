

void __fastcall BeaconPaymentContainerController::~BeaconPaymentContainerController(BeaconPaymentContainerController *this)
{
  BeaconPaymentContainerController::~BeaconPaymentContainerController(this);
}


void __fastcall BeaconPaymentContainerController::~BeaconPaymentContainerController(BeaconPaymentContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = ContainerController::~ContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall BeaconPaymentContainerController::isItemFiltered(BeaconPaymentContainerController *this, const ItemInstance *a2)
{
  return BeaconBlockEntity::isPaymentItem(a2, a2) ^ 1;
}


signed int __fastcall BeaconPaymentContainerController::_getSetCount(BeaconPaymentContainerController *this, int a2, const ItemInstance *a3)
{
  return 1;
}


_DWORD *__fastcall BeaconPaymentContainerController::BeaconPaymentContainerController(_DWORD *a1, int a2)
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
  ContainerController::ContainerController((int)v2, (int)&v10, 1);
  v6 = v11;
  if ( v11 )
    v7 = (unsigned int *)(v11 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26EC848;
  return v2;
}


signed int __fastcall BeaconPaymentContainerController::_canSet(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r5@1
  unsigned int v8; // r2@2
  unsigned int *v9; // r1@2
  unsigned int v10; // r3@5
  unsigned int v11; // r6@6
  unsigned int v12; // r2@7
  signed int v13; // r1@7
  int v14; // r6@11
  bool v15; // zf@13
  signed int v16; // r5@19
  int v17; // r5@20
  unsigned int *v18; // r1@28
  unsigned int v19; // r0@30
  unsigned int *v20; // r6@34
  unsigned int v21; // r0@36

  v4 = *(_DWORD *)(a1 + 8);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( v4 )
  {
    v8 = *(_DWORD *)(v4 + 4);
    v9 = (unsigned int *)(v4 + 4);
    while ( v8 )
    {
      __dmb();
      v10 = __ldrex(v9);
      if ( v10 == v8 )
      {
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
        if ( !v11 )
        {
          __dmb();
          v12 = *v9;
          v13 = 0;
          if ( !v12 )
            v13 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v13 = 1;
  v4 = 0;
LABEL_11:
  v14 = *(_DWORD *)(a1 + 4);
  if ( v13 )
    v14 = 0;
  v15 = *(_BYTE *)(v6 + 15) == 0;
  if ( *(_BYTE *)(v6 + 15) )
    v15 = *(_DWORD *)v6 == 0;
  if ( v15 || ItemInstance::isNull((ItemInstance *)v6) || (unsigned __int8)(*(_BYTE *)(v6 + 14) | 1) == 1 || v5 )
    v17 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 32))(v14, v7);
    if ( *(_BYTE *)(v17 + 15) )
      if ( *(_DWORD *)v17 )
        if ( ItemInstance::isNull((ItemInstance *)v17) )
          v16 = 0;
        else
          v16 = *(_BYTE *)(v17 + 14) != 0;
        v16 = 0;
    else
      v16 = 0;
  else
    v16 = 3;
    v18 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v16;
}


signed int __fastcall BeaconPaymentContainerController::_canAdd(BeaconPaymentContainerController *this, int a2, int a3)
{
  return 2;
}
