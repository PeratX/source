

int __fastcall ContainerController::removeItem(ContainerController *a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r9@1
  ContainerController *v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  int v15; // r5@11
  int v16; // r0@14
  int v17; // r3@16
  int result; // r0@17
  unsigned int *v19; // r1@22
  unsigned int *v20; // r5@28

  v4 = a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v4 + 4);
  if ( v14 )
    v15 = 0;
  if ( ContainerController::_canRemove(v4, v7, v5) == 1 )
    v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 32))(v15, v7);
    if ( v5 )
      if ( v5 == 1 )
        v17 = ((unsigned int)*(_BYTE *)(v16 + 14) + 1) >> 1;
        v17 = v5 == 2;
    else
      v17 = *(_BYTE *)(v16 + 14);
    result = ContainerController::removeItem(v8, v4, v7, v17);
  else
    result = ContainerItemStack::ContainerItemStack((int)v8);
    v19 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


signed int __fastcall ContainerController::isItemAllowedAtSlot(ContainerController *this, const ItemInstance *a2, int a3)
{
  ContainerController *v3; // r7@1
  int v4; // r8@1
  const ItemInstance *v5; // r5@1
  signed int v6; // r4@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)this + 8))() == 1
    && (*(int (__fastcall **)(ContainerController *, int, const ItemInstance *, _DWORD))(*(_DWORD *)v3 + 28))(
         v3,
         v4,
         v5,
         0) != 3 )
  {
    v6 = 1;
  }
  return v6;
}


int __fastcall ContainerController::getItem(ContainerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  int v9; // r0@11
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)this + 1);
  if ( v8 )
    v9 = 0;
  v10 = (*(int (**)(void))(*(_DWORD *)v9 + 32))();
    v11 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v10;
}


char *__fastcall ContainerController::getContainerName(ContainerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  ContainerModel *v8; // r0@11
  char *v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = 0;
          if ( !v6 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v1 = 0;
LABEL_11:
  v8 = (ContainerModel *)*((_DWORD *)this + 1);
  if ( v7 )
    v8 = 0;
  v9 = ContainerModel::getContainerStringName(v8);
    v10 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v9;
}


int __fastcall ContainerController::canSet(ContainerController *this, int a2, const ItemInstance *a3, int a4)
{
  int v4; // r5@1
  int v5; // r0@1
  int result; // r0@2

  v4 = a4;
  v5 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  if ( (v5 | 2) == 2 )
  {
    result = 1;
  }
  else
    if ( v5 != 1 )
      v5 = 0;
    result = v5 & v4;
  return result;
}


int __fastcall ContainerController::isExpandableItemFiltered(ContainerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  int v9; // r0@11
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)this + 1);
  if ( v8 )
    v9 = 0;
  v10 = (*(int (**)(void))(*(_DWORD *)v9 + 52))();
    v11 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v10;
}


int __fastcall ContainerController::getContainerSize(ContainerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  int v8; // r0@11
  int v9; // r5@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r0@16
  unsigned int *v12; // r6@20
  unsigned int v13; // r0@22

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = 0;
          if ( !v6 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v1 = 0;
LABEL_11:
  v8 = *((_DWORD *)this + 1);
  if ( v7 )
    v8 = 0;
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 20))();
    v10 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v9;
}


int __fastcall ContainerController::removeItem(ContainerController *this, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r6@1
  ContainerController *v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  int v15; // r4@11
  int v16; // r0@14
  int v17; // r0@14
  int result; // r0@24
  unsigned int *v19; // r1@28
  unsigned int *v20; // r4@34
  int v21; // [sp+0h] [bp-B0h]@14
  int v22; // [sp+8h] [bp-A8h]@18
  void *v23; // [sp+24h] [bp-8Ch]@16
  void *ptr; // [sp+34h] [bp-7Ch]@14
  char v25; // [sp+48h] [bp-68h]@14
  int v26; // [sp+50h] [bp-60h]@24
  void *v27; // [sp+6Ch] [bp-44h]@22
  void *v28; // [sp+7Ch] [bp-34h]@20

  v4 = a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = a3;
  v8 = this;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = *(_QWORD *)v4 >> 32;
  if ( v14 )
    v15 = 0;
  if ( (*(int (__fastcall **)(int, int, int))(*(_QWORD *)v4 + 36))(v4, v7, v5) == 1 )
    v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 32))(v15, v7);
    ItemInstance::ItemInstance((ItemInstance *)&v25, v16);
    ItemInstance::set((ItemInstance *)&v25, (unsigned __int8)v5);
    v17 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 32))(v15, v7);
    ItemInstance::ItemInstance((ItemInstance *)&v21, v17);
    ItemInstance::remove((ItemInstance *)&v21, v5);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v15 + 40))(v15, v7, &v21);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 40))(v4, v7);
    ItemInstance::ItemInstance((int)v8);
    ItemInstance::operator=((int)v8, (int)&v25);
    if ( ptr )
      operator delete(ptr);
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    if ( v28 )
      operator delete(v28);
    if ( v27 )
      operator delete(v27);
    result = v26;
    if ( v26 )
      result = (*(int (**)(void))(*(_DWORD *)v26 + 4))();
  else
    result = ContainerItemStack::ContainerItemStack((int)v8);
    v19 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
    else
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


signed int __fastcall ContainerController::_canSet(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r9@1
  int v8; // r7@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  int v15; // r6@11
  int v16; // r6@15
  bool v17; // zf@15
  signed int v18; // r5@24
  int v19; // r0@30
  unsigned int *v20; // r1@36
  unsigned int v21; // r0@38
  unsigned int *v22; // r6@42
  unsigned int v23; // r0@44

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v4 + 4);
  if ( v14 )
    v15 = 0;
  if ( v8 < 0 )
    v18 = 3;
  else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15) <= v8 )
  else
    v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 32))(v15, v8);
    v17 = *(_BYTE *)(v7 + 15) == 0;
    if ( *(_BYTE *)(v7 + 15) )
      v17 = *(_DWORD *)v7 == 0;
    if ( v17
      || ItemInstance::isNull((ItemInstance *)v7)
      || !*(_BYTE *)(v7 + 14)
      || (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, v7) == 1 )
      if ( *(_BYTE *)(v16 + 15) )
        if ( *(_DWORD *)v16 )
          if ( ItemInstance::isNull((ItemInstance *)v16) )
          {
            v18 = 0;
          }
          else if ( *(_BYTE *)(v16 + 14) )
            v19 = ContainerController::_canAdd(v4, v8, v7, v5);
            v18 = 1;
            if ( !v19 )
              v18 = 2;
          else
        else
          v18 = 0;
        v18 = 0;
    else
      v18 = 3;
    v20 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v18;
}


int __fastcall ContainerController::_canRemove(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  signed int v11; // r1@7
  int v12; // r0@11
  int v13; // r7@13
  int v14; // r5@16
  unsigned int v15; // r2@19
  unsigned int *v16; // r1@27
  unsigned int v17; // r0@29
  unsigned int *v18; // r6@33
  unsigned int v19; // r0@35

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
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
  v12 = *(_DWORD *)(v3 + 4);
  if ( v11 )
    v12 = 0;
  v13 = (*(int (**)(void))(*(_DWORD *)v12 + 32))();
  if ( *(_BYTE *)(v13 + 15) )
    if ( *(_DWORD *)v13 )
      if ( ItemInstance::isNull((ItemInstance *)v13) )
        v14 = 0;
        v15 = *(_BYTE *)(v13 + 14);
        if ( *(_BYTE *)(v13 + 14) )
          if ( v4 )
          {
            if ( v4 == 1 )
              v15 = (v15 + 1) >> 1;
            else
              v15 = v4 == 2;
          }
          v14 = (*(int (__fastcall **)(int, int, unsigned int))(*(_DWORD *)v3 + 36))(v3, v6, v15);
        else
          v14 = 0;
    else
      v14 = 0;
  else
    v14 = 0;
    v16 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v14;
}


signed int __fastcall ContainerController::setItem(int a1, int a2, int a3, int a4, int a5)
{
  ContainerController *v5; // r7@1
  int v6; // r11@1
  int v7; // r8@1
  int v8; // r5@1
  int v9; // r9@1
  unsigned int v10; // r1@2
  unsigned int *v11; // r0@2
  unsigned int v12; // r2@5
  unsigned int v13; // r3@6
  unsigned int v14; // r1@7
  signed int v15; // r0@7
  int v16; // r4@11
  signed int v17; // r4@14
  int v18; // r6@15
  int v19; // r10@18
  bool v20; // zf@26
  bool v21; // zf@31
  unsigned int *v22; // r1@74
  unsigned int v23; // r0@76
  unsigned int *v24; // r5@80
  unsigned int v25; // r0@82
  int v27; // r0@88
  int v28; // [sp+0h] [bp-148h]@58
  int v29; // [sp+8h] [bp-140h]@62
  void *v30; // [sp+24h] [bp-124h]@60
  void *v31; // [sp+34h] [bp-114h]@58
  char v32; // [sp+48h] [bp-100h]@38
  int v33; // [sp+50h] [bp-F8h]@42
  void *v34; // [sp+6Ch] [bp-DCh]@40
  void *ptr; // [sp+7Ch] [bp-CCh]@38
  char v36; // [sp+90h] [bp-B8h]@52
  int v37; // [sp+98h] [bp-B0h]@56
  void *v38; // [sp+B4h] [bp-94h]@54
  void *v39; // [sp+C4h] [bp-84h]@52
  char v40; // [sp+D8h] [bp-70h]@15
  int v41; // [sp+E0h] [bp-68h]@71
  void *v42; // [sp+FCh] [bp-4Ch]@69
  void *v43; // [sp+10Ch] [bp-3Ch]@67

  v5 = (ContainerController *)a1;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = a3;
  v9 = a2;
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 4);
    v11 = (unsigned int *)(v7 + 4);
    while ( v10 )
    {
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
      {
        v13 = __strex(v10 + 1, v11);
        v10 = v12;
        if ( !v13 )
        {
          __dmb();
          v14 = *v11;
          v15 = 0;
          if ( !v14 )
            v15 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v15 = 1;
  v7 = 0;
LABEL_11:
  v16 = *(_QWORD *)v5 >> 32;
  if ( v15 )
    v16 = 0;
  if ( (*(int (__fastcall **)(ContainerController *, int, int, int))(*(_QWORD *)v5 + 28))(v5, v9, v8, v6) == 3 )
    v17 = 0;
    goto LABEL_73;
  v18 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v16 + 32))(v16, v9);
  ItemInstance::ItemInstance((ItemInstance *)&v40, v18);
  if ( *(_BYTE *)(v8 + 15) )
    if ( *(_DWORD *)v8 )
      if ( ItemInstance::isNull((ItemInstance *)v8) )
        v19 = 0;
        v19 = *(_BYTE *)(v8 + 14);
        if ( *(_BYTE *)(v8 + 14) )
          if ( v6 )
            v19 = 1;
        else
          v19 = 0;
    else
      v19 = 0;
  else
    v19 = 0;
  v20 = *(_BYTE *)(v18 + 15) == 0;
  if ( *(_BYTE *)(v18 + 15) )
    v20 = *(_DWORD *)v18 == 0;
  if ( !v20 && !ItemInstance::isNull((ItemInstance *)v18) && *(_BYTE *)(v18 + 14) )
    v21 = *(_BYTE *)(v8 + 15) == 0;
    if ( *(_BYTE *)(v8 + 15) )
      v21 = *(_DWORD *)v8 == 0;
    if ( v21 || ItemInstance::isNull((ItemInstance *)v8) || !*(_BYTE *)(v8 + 14) )
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v16 + 40))(v16, v9, v8);
      (*(void (__fastcall **)(ContainerController *, int))(*(_DWORD *)v5 + 40))(v5, v9);
      ItemInstance::ItemInstance((int)&v28);
      ItemInstance::operator=((int)&v28, (int)&v40);
      ItemInstance::operator=(v8, (int)&v28);
      if ( v31 )
        operator delete(v31);
      if ( v30 )
        operator delete(v30);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      v29 = 0;
    else if ( ContainerController::_canAdd((int)v5, v9, v8, v6) == 2 )
      if ( a5 != 1 )
        v17 = 0;
        goto LABEL_67;
      ItemInstance::ItemInstance((int)&v32);
      ItemInstance::operator=((int)&v32, (int)&v40);
      ItemInstance::operator=(v8, (int)&v32);
      if ( ptr )
        operator delete(ptr);
      if ( v34 )
        operator delete(v34);
      if ( v33 )
        (*(void (**)(void))(*(_DWORD *)v33 + 4))();
      v33 = 0;
      v27 = ContainerController::_addItem(v5, v9, v19);
      ItemInstance::remove((ItemInstance *)v8, v19 - v27);
LABEL_65:
    v17 = 1;
    goto LABEL_67;
      if ( !ItemInstance::isNull((ItemInstance *)v8) )
        if ( !*(_BYTE *)(v8 + 14) )
          v17 = 0;
          goto LABEL_67;
        ItemInstance::ItemInstance((ItemInstance *)&v36, v8);
        ItemInstance::set((ItemInstance *)&v36, v19);
        (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v16 + 40))(v16, v9, &v36);
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 40))(v5, v9);
        ItemInstance::remove((ItemInstance *)v8, v19);
        if ( v39 )
          operator delete(v39);
        if ( v38 )
          operator delete(v38);
        if ( v37 )
          (*(void (**)(void))(*(_DWORD *)v37 + 4))();
        goto LABEL_65;
      v17 = 0;
LABEL_67:
  if ( v43 )
    operator delete(v43);
  if ( v42 )
    operator delete(v42);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 4))();
LABEL_73:
    v22 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return v17;
}


void __fastcall ContainerController::~ContainerController(ContainerController *this)
{
  ContainerController::~ContainerController(this);
}


int __fastcall ContainerController::isItemFiltered(ContainerController *this, const ItemInstance *a2)
{
  return (*(int (**)(void))(*(_DWORD *)this + 8))() ^ 1;
}


int __fastcall ContainerController::getBackgroundStyle(ContainerController *this, int a2)
{
  return 0;
}


ContainerController *__fastcall ContainerController::~ContainerController(ContainerController *this)
{
  ContainerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26EC918;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


signed int __fastcall ContainerController::canSet(ContainerController *this, const ItemInstance *a2, int a3)
{
  ContainerController *v3; // r6@1
  int v4; // r7@1
  int v5; // r8@1
  const ItemInstance *v6; // r9@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  signed int v11; // r1@7
  int v12; // r0@11
  int v13; // r4@13
  int v14; // r5@14
  int v15; // r0@15
  signed int v16; // r7@15
  bool v17; // zf@15
  unsigned int *v18; // r1@26
  unsigned int v19; // r0@28
  unsigned int *v20; // r4@32
  unsigned int v21; // r0@34

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
  v13 = (*(int (**)(void))(*(_DWORD *)v12 + 20))();
  if ( v13 < 1 )
    v16 = 0;
  else
    v14 = 0;
    if ( v4 == 1 )
      while ( 1 )
        v15 = (*(int (__fastcall **)(ContainerController *, int, const ItemInstance *, _DWORD))(*(_DWORD *)v3 + 28))(
                v3,
                v14,
                v6,
                0);
        v16 = 1;
        v17 = (v15 | 2) == 2;
        if ( (v15 | 2) != 2 )
          v17 = v15 == 1;
        if ( v17 )
          break;
        if ( ++v14 >= v13 )
          v16 = 0;
    else
      while ( ((*(int (__fastcall **)(ContainerController *, int, const ItemInstance *, _DWORD))(*(_DWORD *)v3 + 28))(
                 v3,
                 v14,
                 v6,
                 0) | 2) != 2 )
          goto LABEL_25;
      v16 = 1;
LABEL_25:
    v18 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
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
  return v16;
}


int __fastcall ContainerController::_canAdd(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  int v15; // r5@11
  bool v16; // zf@13
  signed int v17; // r10@17
  const ItemInstance *v18; // r0@20
  int v19; // r5@21
  unsigned int *v20; // r1@24
  unsigned int v21; // r0@26
  unsigned int *v22; // r6@30
  unsigned int v23; // r0@32

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v4 + 4);
  if ( v14 )
    v15 = 0;
  v16 = *(_BYTE *)(v7 + 15) == 0;
  if ( *(_BYTE *)(v7 + 15) )
    v16 = *(_DWORD *)v7 == 0;
  if ( v16 )
    goto LABEL_40;
  if ( ItemInstance::isNull((ItemInstance *)v7) )
  v17 = *(_BYTE *)(v7 + 14);
  if ( !*(_BYTE *)(v7 + 14) )
  if ( v5 )
    v17 = 1;
  v18 = (const ItemInstance *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 32))(v15, v8);
  if ( ItemInstance::isStackable((ItemInstance *)v7, v18) != 1 )
LABEL_40:
    v19 = 2;
  else
    v19 = (*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)v4 + 32))(v4, v8, v17);
    v20 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v19;
}


int __fastcall ContainerController::getExpandoStatus(ContainerController *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  int v9; // r0@11
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)this + 1);
  if ( v8 )
    v9 = 0;
  v10 = (*(int (**)(void))(*(_DWORD *)v9 + 56))();
    v11 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v10;
}


int __fastcall ContainerController::takeAllItemsOfType(ContainerController *this, ContainerItemStack *a2, int a3)
{
  ContainerController *v3; // r8@1
  int v4; // r5@1
  int v5; // r4@1
  ContainerItemStack *v6; // r10@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  unsigned int v11; // r1@7
  signed int v12; // r0@7
  int v13; // r7@11
  char v14; // r5@16
  int v15; // r6@20
  int v16; // r6@23
  char v17; // r11@23
  int v18; // r0@25
  int v19; // r5@25
  int v20; // r0@25
  bool v21; // zf@25
  int v22; // r9@31
  int v23; // r5@31
  int v24; // r9@34
  int v25; // r5@34
  char v26; // r2@40
  int v27; // r0@43
  int v28; // r5@43
  int v29; // r0@43
  bool v30; // zf@43
  int v31; // r9@48
  int v32; // r9@50
  int v33; // r5@50
  int v34; // r9@53
  int v35; // r5@53
  unsigned int *v36; // r1@65
  unsigned int v37; // r0@67
  unsigned int *v38; // r6@71
  unsigned int v39; // r0@73
  int v41; // [sp+0h] [bp-70h]@34
  int v42; // [sp+8h] [bp-68h]@38
  void *v43; // [sp+24h] [bp-4Ch]@36
  void *ptr; // [sp+34h] [bp-3Ch]@34

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
          v11 = *v8;
          v12 = 0;
          if ( !v11 )
            v12 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v12 = 1;
  v5 = 0;
LABEL_11:
  v13 = *((_DWORD *)v3 + 1);
  if ( v12 )
    v13 = 0;
  if ( *((_BYTE *)v6 + 15) )
    if ( *(_DWORD *)v6 )
      if ( ItemInstance::isNull(v6) )
        v14 = 0;
      else if ( *((_BYTE *)v6 + 14) )
        v15 = *((_BYTE *)v6 + 14);
        if ( v15 == ItemInstance::getMaxStackSize(v6) )
          v14 = 0;
        else
          v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13);
          v17 = 0;
          if ( v16 < 1 )
          {
            v26 = 0;
          }
          else if ( v4 == 1 )
            while ( 1 )
            {
              v18 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 32))(v13, --v16);
              v19 = v18;
              v20 = *(_BYTE *)(v18 + 15);
              v21 = v20 == 0;
              if ( v20 )
                v21 = *(_DWORD *)v19 == 0;
              if ( !v21 && !ItemInstance::isNull((ItemInstance *)v19) )
              {
                if ( *(_BYTE *)(v19 + 14) )
                {
                  ItemInstance::getMaxStackSize((ItemInstance *)v19);
                  if ( ItemInstance::isStackable(v6, (const ItemInstance *)v19) == 1 )
                  {
                    v22 = *(_BYTE *)(v19 + 14);
                    v23 = ItemInstance::getMaxStackSize(v6) - *((_BYTE *)v6 + 14);
                    if ( v22 < v23 )
                      v23 = v22;
                    if ( (*(int (__fastcall **)(ContainerController *, int, int))(*(_DWORD *)v3 + 36))(v3, v16, v23) == 1 )
                    {
                      ContainerController::removeItem((ContainerController *)&v41, (int)v3, v16, v23);
                      ItemInstance::add(v6, v23);
                      v24 = *((_BYTE *)v6 + 14);
                      v25 = ItemInstance::getMaxStackSize(v6);
                      if ( ptr )
                        operator delete(ptr);
                      if ( v43 )
                        operator delete(v43);
                      if ( v42 )
                        (*(void (**)(void))(*(_DWORD *)v42 + 4))();
                      v17 = 1;
                      v26 = 1;
                      if ( v24 == v25 )
                        break;
                    }
                  }
                }
              }
              if ( v16 <= 0 )
                v26 = 0;
                break;
            }
          else
              v27 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 32))(v13, --v16);
              v28 = v27;
              v29 = *(_BYTE *)(v27 + 15);
              v30 = v29 == 0;
              if ( v29 )
                v30 = *(_DWORD *)v28 == 0;
              if ( !v30 && !ItemInstance::isNull((ItemInstance *)v28) )
                if ( *(_BYTE *)(v28 + 14) )
                  v31 = *(_BYTE *)(v28 + 14);
                  if ( v31 != ItemInstance::getMaxStackSize((ItemInstance *)v28)
                    && ItemInstance::isStackable(v6, (const ItemInstance *)v28) == 1 )
                    v32 = *(_BYTE *)(v28 + 14);
                    v33 = ItemInstance::getMaxStackSize(v6) - *((_BYTE *)v6 + 14);
                    if ( v32 < v33 )
                      v33 = v32;
                    if ( (*(int (__fastcall **)(ContainerController *, int, int))(*(_DWORD *)v3 + 36))(v3, v16, v33) == 1 )
                      ContainerController::removeItem((ContainerController *)&v41, (int)v3, v16, v33);
                      ItemInstance::add(v6, v33);
                      v34 = *((_BYTE *)v6 + 14);
                      v35 = ItemInstance::getMaxStackSize(v6);
                      if ( v34 == v35 )
          v14 = v17 | v26;
    else
      v14 = 0;
  else
    v14 = 0;
    v36 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v14 & 1;
}


int __fastcall ContainerController::ContainerController(int result, int a2, char a3)
{
  int v3; // r1@1
  unsigned int *v4; // r12@2
  unsigned int v5; // r3@4

  *(_DWORD *)result = &off_26EC918;
  *(_DWORD *)(result + 4) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = v3;
  if ( !v3 )
    goto LABEL_7;
  v4 = (unsigned int *)(v3 + 8);
  if ( !&pthread_create )
  {
    ++*v4;
LABEL_7:
    *(_BYTE *)(result + 12) = a3;
    return result;
  }
  __dmb();
  do
    v5 = __ldrex(v4);
  while ( __strex(v5 + 1, v4) );
  *(_BYTE *)(result + 12) = a3;
  return result;
}


int __fastcall ContainerController::_addItem(ContainerController *this, int a2, int a3)
{
  ContainerController *v3; // r7@1
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  unsigned int v11; // r1@7
  signed int v12; // r0@7
  int v13; // r4@11
  int v14; // r0@13
  int v15; // r0@15
  int v16; // r0@22
  int v17; // r0@22
  int v18; // r9@22
  unsigned int *v19; // r1@29
  unsigned int v20; // r0@31
  unsigned int *v21; // r4@35
  unsigned int v22; // r0@37
  int v24; // [sp+0h] [bp-B0h]@22
  int v25; // [sp+8h] [bp-A8h]@26
  unsigned __int8 v26; // [sp+Eh] [bp-A2h]@22
  void *v27; // [sp+24h] [bp-8Ch]@24
  void *v28; // [sp+34h] [bp-7Ch]@22
  char v29; // [sp+48h] [bp-68h]@15
  int v30; // [sp+50h] [bp-60h]@19
  void *v31; // [sp+6Ch] [bp-44h]@17
  void *ptr; // [sp+7Ch] [bp-34h]@15

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
          v11 = *v8;
          v12 = 0;
          if ( !v11 )
            v12 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v12 = 1;
  v5 = 0;
LABEL_11:
  v13 = *(_QWORD *)v3 >> 32;
  if ( v12 )
    v13 = 0;
  v14 = (*(int (__fastcall **)(ContainerController *, int, int))(*(_QWORD *)v3 + 32))(v3, v6, v4);
  if ( v14 == 1 )
    v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 32))(v13, v6);
    ItemInstance::ItemInstance((ItemInstance *)&v24, v16);
    v17 = ItemInstance::getMaxStackSize((ItemInstance *)&v24);
    v18 = v17 - v26;
    ItemInstance::add((ItemInstance *)&v24, v18);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v13 + 40))(v13, v6, &v24);
    (*(void (__fastcall **)(ContainerController *, int))(*(_DWORD *)v3 + 40))(v3, v6);
    if ( v28 )
      operator delete(v28);
    if ( v27 )
      operator delete(v27);
    v4 -= v18;
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  else if ( !v14 )
    v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 32))(v13, v6);
    ItemInstance::ItemInstance((ItemInstance *)&v29, v15);
    ItemInstance::add((ItemInstance *)&v29, v4);
    (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v13 + 40))(v13, v6, &v29);
    if ( ptr )
      operator delete(ptr);
    if ( v31 )
      operator delete(v31);
    if ( v30 )
      (*(void (**)(void))(*(_DWORD *)v30 + 4))();
    v4 = 0;
    v19 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v4;
}


int __fastcall ContainerController::autoPlaceItems(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r6@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  unsigned int v13; // r1@7
  signed int v14; // r0@7
  int v15; // r5@11
  char v16; // r7@16
  int v17; // r0@20
  int v18; // r5@20
  signed int v19; // r9@21
  int v20; // r10@22
  int *v21; // r1@24
  __int64 v22; // kr00_8@24
  bool v23; // nf@28
  unsigned __int8 v24; // vf@28
  signed int v25; // r9@31
  signed int v26; // r11@32
  int *v27; // r1@33
  __int64 v28; // kr08_8@33
  signed int v29; // r9@41
  int v30; // r10@42
  int *v31; // r1@43
  __int64 v32; // kr10_8@43
  bool v33; // zf@47
  unsigned int *v34; // r1@54
  unsigned int v35; // r0@56
  unsigned int *v36; // r5@60
  unsigned int v37; // r0@62
  int v39; // [sp+8h] [bp-38h]@20
  int v40; // [sp+Ch] [bp-34h]@20
  int v41; // [sp+10h] [bp-30h]@40
  int v42; // [sp+14h] [bp-2Ch]@30
  int v43; // [sp+18h] [bp-28h]@20

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = (unsigned int *)(v6 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = 0;
          if ( !v13 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v6 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v4 + 4);
  if ( v14 )
    v15 = 0;
  if ( *(_BYTE *)(v8 + 15) )
    if ( *(_DWORD *)v8 )
      if ( ItemInstance::isNull((ItemInstance *)v8) )
        v16 = 0;
      else if ( *(_BYTE *)(v8 + 14) )
        v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15);
        v39 = v5;
        v40 = v7;
        v18 = *(_BYTE *)(v8 + 14);
        v43 = 0;
        if ( v17 >= 1 )
          v16 = 0;
          v19 = 1;
          do
          {
            v20 = v17;
            if ( ContainerController::_canAdd(v4, v19 - 1, v8, 0) == 2 )
            {
              v17 = v20;
            }
            else
              v18 = ContainerController::_addItem((ContainerController *)v4, v19 - 1, v18);
              ItemInstance::set((ItemInstance *)v8, (unsigned __int8)v18);
              v21 = (int *)ContainerController::getContainerName((ContainerController *)v4);
              v22 = *(_QWORD *)(v40 + 4);
              if ( (_DWORD)v22 == HIDWORD(v22) )
              {
                std::vector<AutoPlaceResult,std::allocator<AutoPlaceResult>>::_M_emplace_back_aux<std::string const&,int &>(
                  (_QWORD *)v40,
                  v21,
                  &v43);
              }
              else
                sub_21E8AF4((int *)v22, v21)[1] = v19 - 1;
                *(_DWORD *)(v40 + 4) += 8;
              v16 = 1;
              if ( !v18 )
                goto LABEL_53;
            v43 = v19;
            v24 = __OFSUB__(v19, v17);
            v23 = v19++ - v17 < 0;
          }
          while ( v23 ^ v24 );
        if ( !v39 )
          v42 = 0;
          if ( v17 <= 0 )
            v41 = 0;
          else
            v25 = 1;
            while ( 1 )
              v26 = v17;
              if ( ContainerController::setItem(v4, v25 - 1, v8, 0, 0) == 1 )
                v27 = (int *)ContainerController::getContainerName((ContainerController *)v4);
                v28 = *(_QWORD *)(v40 + 4);
                if ( (_DWORD)v28 == HIDWORD(v28) )
                {
                  std::vector<AutoPlaceResult,std::allocator<AutoPlaceResult>>::_M_emplace_back_aux<std::string const&,int &>(
                    (_QWORD *)v40,
                    v27,
                    &v42);
                }
                else
                  sub_21E8AF4((int *)v28, v27)[1] = v25 - 1;
                  *(_DWORD *)(v40 + 4) += 8;
                v16 = 1;
              if ( ItemInstance::isNull((ItemInstance *)v8) || !*(_BYTE *)(v8 + 14) )
                break;
              v17 = v26;
              v42 = v25;
              v24 = __OFSUB__(v25, v26);
              v23 = v25++ - v26 < 0;
              if ( !(v23 ^ v24) )
                v41 = 0;
                if ( v26 >= 1 )
                  v29 = 1;
                  do
                  {
                    v30 = v17;
                    if ( ContainerController::setItem(v4, v29 - 1, v8, 1, 0) == 1 )
                    {
                      v31 = (int *)ContainerController::getContainerName((ContainerController *)v4);
                      v32 = *(_QWORD *)(v40 + 4);
                      if ( (_DWORD)v32 == HIDWORD(v32) )
                      {
                        std::vector<AutoPlaceResult,std::allocator<AutoPlaceResult>>::_M_emplace_back_aux<std::string const&,int &>(
                          (_QWORD *)v40,
                          v31,
                          &v41);
                      }
                      else
                        sub_21E8AF4((int *)v32, v31)[1] = v29 - 1;
                        *(_DWORD *)(v40 + 4) += 8;
                      v16 = 1;
                    }
                    v33 = ItemInstance::isNull((ItemInstance *)v8) == 0;
                    v17 = v30;
                    if ( !v33 )
                      break;
                    if ( !*(_BYTE *)(v8 + 14) )
                    v41 = v29;
                    v24 = __OFSUB__(v29, v30);
                    v23 = v29++ - v30 < 0;
                  }
                  while ( v23 ^ v24 );
    else
      v16 = 0;
  else
    v16 = 0;
LABEL_53:
    v34 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      v36 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v16 & 1;
}


int __fastcall ContainerController::getSetCount(ContainerController *this, const ItemInstance *a2)
{
  ContainerController *v2; // r7@1
  const ItemInstance *v3; // r9@1
  int v4; // r8@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  signed int v9; // r1@7
  int v10; // r0@11
  int v11; // r4@13
  int v12; // r6@14
  int v13; // r5@14
  int v14; // r0@15
  unsigned int *v15; // r1@19
  unsigned int v16; // r0@21
  unsigned int *v17; // r4@25
  unsigned int v18; // r0@27

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = 0;
          if ( !*v6 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v4 = 0;
LABEL_11:
  v10 = *((_DWORD *)v2 + 1);
  if ( v9 )
    v10 = 0;
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 20))();
  if ( v11 < 1 )
    v13 = 0;
  else
    v12 = 0;
    do
      v14 = (*(int (__fastcall **)(ContainerController *, int, const ItemInstance *))(*(_DWORD *)v2 + 24))(
              v2,
              v12++,
              v3);
      v13 += v14;
    while ( v12 < v11 );
    v15 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v13;
}


signed int __fastcall ContainerController::isItemAllowed(ContainerController *this, const ItemInstance *a2)
{
  return 1;
}


signed int __fastcall ContainerController::_canRemove(ContainerController *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r2@2
  unsigned int v7; // r6@5
  unsigned int v8; // r5@6
  unsigned int v9; // r3@7
  signed int v10; // r2@7
  int v11; // r0@11
  int v12; // r6@13
  signed int v13; // r6@16
  int v14; // r0@19
  unsigned int *v15; // r1@23
  unsigned int v16; // r0@25
  unsigned int *v17; // r5@29
  unsigned int v18; // r0@31

  v3 = *((_DWORD *)this + 2);
  v4 = a3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6;
          v10 = 0;
          if ( !v9 )
            v10 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v3 = 0;
LABEL_11:
  v11 = *((_DWORD *)this + 1);
  if ( v10 )
    v11 = 0;
  v12 = (*(int (**)(void))(*(_DWORD *)v11 + 32))();
  if ( *(_BYTE *)(v12 + 15) )
    if ( *(_DWORD *)v12 )
      if ( ItemInstance::isNull((ItemInstance *)v12) )
        v13 = 0;
        v14 = *(_BYTE *)(v12 + 14);
        if ( v14 && v14 >= v4 )
          v13 = 1;
    else
      v13 = 0;
  else
    v13 = 0;
    v15 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return v13;
}


void __fastcall ContainerController::~ContainerController(ContainerController *this)
{
  ContainerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26EC918;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ContainerController::getContainerModel(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 4);
  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


signed int __fastcall ContainerController::_canAdd(ContainerController *this, int a2, int a3)
{
  ContainerController *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r2@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r3@5
  unsigned int v9; // r7@6
  signed int v10; // r2@7
  int v11; // r0@11
  int v12; // r7@13
  int v13; // r0@14
  signed int v14; // r5@16
  unsigned int *v15; // r1@20
  unsigned int v16; // r0@22
  unsigned int *v17; // r6@26
  unsigned int v18; // r0@28

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 2);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          __dmb();
          v10 = 0;
          if ( !*v7 )
            v10 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v5 = 0;
LABEL_11:
  v11 = *((_DWORD *)v3 + 1);
  if ( v10 )
    v11 = 0;
  v12 = (*(int (**)(void))(*(_DWORD *)v11 + 32))();
  if ( (*(int (__fastcall **)(ContainerController *, int))(*(_DWORD *)v3 + 8))(v3, v12) != 1 )
    goto LABEL_36;
  v13 = ItemInstance::getMaxStackSize((ItemInstance *)v12) - *(_BYTE *)(v12 + 14);
  if ( v13 >= v4 )
    v14 = 0;
    goto LABEL_19;
  if ( v13 <= 0 )
LABEL_36:
    v14 = 2;
  else
    v14 = 1;
LABEL_19:
    v15 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v14;
}


int __fastcall ContainerController::_getSetCount(ContainerController *this, int a2, const ItemInstance *a3)
{
  int v3; // r4@1
  const ItemInstance *v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r2@2
  unsigned int *v7; // r1@2
  unsigned int v8; // r3@5
  unsigned int v9; // r7@6
  unsigned int v10; // r2@7
  signed int v11; // r1@7
  int v12; // r7@11
  int v13; // r5@16
  int v14; // r6@20
  unsigned int *v15; // r1@25
  unsigned int v16; // r0@27
  unsigned int *v17; // r6@31
  unsigned int v18; // r0@33

  v3 = *((_DWORD *)this + 2);
  v4 = a3;
  v5 = a2;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 4);
    v7 = (unsigned int *)(v3 + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          __dmb();
          v10 = *v7;
          v11 = 0;
          if ( !v10 )
            v11 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v11 = 1;
  v3 = 0;
LABEL_11:
  v12 = *((_DWORD *)this + 1);
  if ( v11 )
    v12 = 0;
  if ( *((_BYTE *)v4 + 15) )
    if ( *(_DWORD *)v4 )
      if ( ItemInstance::isNull(v4) )
        v13 = 0;
      else if ( *((_BYTE *)v4 + 14) )
        v14 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 32))(v12, v5);
        if ( ItemInstance::isStackable(v4, (const ItemInstance *)v14) == 1 )
          v13 = ItemInstance::getMaxStackSize((ItemInstance *)v14) - *(_BYTE *)(v14 + 14);
        else
          v13 = 0;
    else
      v13 = 0;
  else
    v13 = 0;
    v15 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return v13;
}


ItemInstance *__fastcall ContainerController::addToStack(ItemInstance *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r4@1
  int v8; // r9@1
  ItemInstance *v9; // r8@1
  unsigned int v10; // r1@2
  unsigned int *v11; // r0@2
  unsigned int v12; // r2@5
  unsigned int v13; // r3@6
  signed int v14; // r1@7
  int v15; // r0@11
  int v16; // r7@13
  int v17; // r0@14
  int v18; // r7@14
  int v19; // r0@16
  ItemInstance *result; // r0@26
  unsigned int *v21; // r1@27
  unsigned int *v22; // r5@33
  int v23; // [sp+0h] [bp-68h]@20
  int v24; // [sp+8h] [bp-60h]@24
  int v25; // [sp+Eh] [bp-5Ah]@20
  void *v26; // [sp+24h] [bp-44h]@22
  void *ptr; // [sp+34h] [bp-34h]@20

  v5 = a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = a3;
  v9 = a1;
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 4);
    v11 = (unsigned int *)(v7 + 4);
    while ( v10 )
    {
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
      {
        v13 = __strex(v10 + 1, v11);
        v10 = v12;
        if ( !v13 )
        {
          __dmb();
          v14 = 0;
          if ( !*v11 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v7 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v5 + 4);
  if ( v14 )
    v15 = 0;
  v16 = (*(int (**)(void))(*(_DWORD *)v15 + 32))();
  if ( ItemInstance::isStackable((ItemInstance *)v6, (const ItemInstance *)v16) == 1 )
    v17 = ItemInstance::getMaxStackSize((ItemInstance *)v6);
    v18 = *(_BYTE *)(v16 + 14);
    if ( a5 )
      v18 = (unsigned int)(v18 + 1) >> 1;
    v19 = v17 - *(_BYTE *)(v6 + 14);
    if ( v19 < v18 )
      v18 = v19;
    if ( v18 >= 1 && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 36))(v5, v8, v18) == 1 )
      ContainerController::removeItem((ContainerController *)&v23, v5, v8, v18);
      ItemInstance::add((ItemInstance *)v6, (unsigned __int8)v25);
      if ( ptr )
        operator delete(ptr);
      if ( v26 )
        operator delete(v26);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  result = ItemInstance::ItemInstance(v9, v6);
    v21 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      do
        result = (ItemInstance *)__ldrex(v21);
      while ( __strex((unsigned int)result - 1, v21) );
    else
      result = (ItemInstance *)(*v21)--;
    if ( result == (ItemInstance *)1 )
      v22 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        __dmb();
        do
          result = (ItemInstance *)__ldrex(v22);
        while ( __strex((unsigned int)result - 1, v22) );
        result = (ItemInstance *)(*v22)--;
      if ( result == (ItemInstance *)1 )
        result = (ItemInstance *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


int __fastcall ContainerController::forEachItem(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r8@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  signed int v9; // r1@7
  int v10; // r0@11
  int result; // r0@13
  signed int v12; // r7@13
  unsigned int *v13; // r1@14
  unsigned int *v14; // r4@20
  int v15; // r4@28
  int v16; // r2@29

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = 0;
          if ( !*v6 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v4 = 0;
LABEL_11:
  v10 = *(_DWORD *)(v2 + 4);
  if ( v9 )
    v10 = 0;
  result = (*(int (**)(void))(*(_DWORD *)v10 + 20))();
  v12 = result;
    v13 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
    else
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  if ( v12 >= 1 )
    v15 = 0;
    do
      v16 = ContainerController::getItem((ContainerController *)v2, v15);
      if ( !*(_DWORD *)(v3 + 8) )
        sub_21E5F48();
      result = (*(int (__fastcall **)(int, int, int))(v3 + 12))(v3, v15++, v16);
    while ( v15 < v12 );
  return result;
}
