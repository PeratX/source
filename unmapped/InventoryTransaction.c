

unsigned int __fastcall InventoryTransaction::reverse(InventoryTransaction *this, int a2)
{
  InventoryTransaction *v2; // r11@1
  int v3; // r8@1
  char *v4; // r6@1
  unsigned int result; // r0@1
  int v6; // r7@3
  void *v7; // r6@3
  int i; // r6@4
  int v9; // r4@5
  int j; // r7@5
  int v11; // r1@6
  int v12; // r2@6
  int v13; // r3@6
  int v14; // [sp+0h] [bp-C8h]@6
  int v15; // [sp+4h] [bp-C4h]@6
  int v16; // [sp+8h] [bp-C0h]@6
  int v17; // [sp+Ch] [bp-BCh]@6
  int v18; // [sp+10h] [bp-B8h]@6
  unsigned int v19; // [sp+18h] [bp-B0h]@16
  void *v20; // [sp+34h] [bp-94h]@14
  void *v21; // [sp+44h] [bp-84h]@12
  int v22; // [sp+58h] [bp-70h]@6
  int v23; // [sp+60h] [bp-68h]@10
  void *v24; // [sp+7Ch] [bp-4Ch]@8
  void *ptr; // [sp+8Ch] [bp-3Ch]@6

  v2 = this;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v3 = a2;
  *((_DWORD *)this + 4) = 1065353216;
  v4 = (char *)this + 16;
  *((_DWORD *)this + 5) = 0;
  result = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, (unsigned int)this + 16)));
  *((_DWORD *)v4 - 3) = result;
  if ( result == 1 )
  {
    *((_DWORD *)v2 + 6) = 0;
    v7 = (char *)v2 + 24;
  }
  else
    if ( result >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * result;
    v7 = operator new(4 * result);
    result = _aeabi_memclr4(v7, v6);
  *(_DWORD *)v2 = v7;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  for ( i = *(_DWORD *)(v3 + 8); i; i = *(_DWORD *)i )
    v9 = *(_QWORD *)(i + 16) >> 32;
    for ( j = *(_QWORD *)(i + 16); v9 != j; v19 = 0 )
    {
      v11 = *(_DWORD *)(j + 4);
      v12 = *(_DWORD *)(j + 8);
      v13 = *(_DWORD *)(j + 12);
      v14 = *(_DWORD *)j;
      v15 = v11;
      v16 = v12;
      v17 = v13;
      ItemInstance::ItemInstance((ItemInstance *)&v18, j + 88);
      ItemInstance::ItemInstance((ItemInstance *)&v22, j + 16);
      InventoryTransaction::addAction((unsigned __int64 *)v2, (int)&v14);
      if ( ptr )
        operator delete(ptr);
      if ( v24 )
        operator delete(v24);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      v23 = 0;
      if ( v21 )
        operator delete(v21);
      if ( v20 )
        operator delete(v20);
      result = v19;
      if ( v19 )
        result = (*(int (**)(void))(*(_DWORD *)v19 + 4))();
      j += 160;
    }
  return result;
}


signed int __fastcall InventoryTransaction::_logTransaction(InventoryTransaction *this)
{
  int v1; // r5@1
  unsigned int *v2; // r2@3
  signed int v3; // r1@5
  void *v4; // r0@11
  __int64 j; // r8@12
  void *v6; // r0@15
  void *v7; // r0@16
  unsigned int *v8; // r2@17
  signed int v9; // r1@19
  unsigned int *v10; // r2@21
  signed int v11; // r1@23
  signed int result; // r0@34
  int v13; // r4@35
  int k; // r5@35
  unsigned int *v15; // r2@37
  signed int v16; // r1@39
  unsigned int *v17; // r2@45
  signed int v18; // r1@47
  void *v19; // r0@54
  void *v20; // r0@63
  InventoryTransaction *i; // [sp+4h] [bp-D4h]@1
  char v22; // [sp+8h] [bp-D0h]@63
  int v23; // [sp+10h] [bp-C8h]@68
  void *v24; // [sp+2Ch] [bp-ACh]@66
  void *v25; // [sp+3Ch] [bp-9Ch]@64
  int v26; // [sp+54h] [bp-84h]@45
  char v27; // [sp+58h] [bp-80h]@54
  int v28; // [sp+60h] [bp-78h]@59
  void *v29; // [sp+7Ch] [bp-5Ch]@57
  void *ptr; // [sp+8Ch] [bp-4Ch]@55
  int v31; // [sp+A0h] [bp-38h]@37
  int v32; // [sp+A4h] [bp-34h]@15
  int v33; // [sp+A8h] [bp-30h]@15
  int v34; // [sp+ACh] [bp-2Ch]@3

  v1 = *((_DWORD *)this + 2);
  for ( i = this; v1; v1 = *(_DWORD *)v1 )
  {
    InventorySource::toString((InventorySource *)&v34, v1 + 4);
    v4 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v2 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v3 = __ldrex(v2);
        while ( __strex(v3 - 1, v2) );
      }
      else
        v3 = (*v2)--;
      if ( v3 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    for ( j = *(_QWORD *)(v1 + 16); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 160 )
      ItemInstance::toString((ItemInstance *)&v33, j + 16);
      ItemInstance::toString((ItemInstance *)&v32, j + 88);
      v6 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v32 - 4);
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
      v7 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v33 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
  }
  result = InventoryTransaction::verifyBalance(i);
  if ( !result )
    v13 = *(_QWORD *)((char *)i + 28) >> 32;
    for ( k = *(_QWORD *)((char *)i + 28); k != v13; k += 20 )
      if ( *(_BYTE *)(k + 16) )
        ItemInstance::ItemInstance((ItemInstance *)&v27, *(_QWORD *)k, 1, *(_QWORD *)k >> 32, *(_DWORD *)(k + 8));
        ItemInstance::toString((ItemInstance *)&v31, (int)&v27);
        v19 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v31 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        if ( ptr )
          operator delete(ptr);
        if ( v29 )
          operator delete(v29);
        result = v28;
        if ( v28 )
          result = (*(int (**)(void))(*(_DWORD *)v28 + 4))();
        v28 = 0;
        result = *(_DWORD *)(k + 12);
        if ( result )
          ItemInstance::ItemInstance((ItemInstance *)&v22, *(_QWORD *)k, 1, *(_QWORD *)k >> 32, *(_DWORD *)(k + 8));
          ItemInstance::toString((ItemInstance *)&v26, (int)&v22);
          v20 = (void *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v17 = (unsigned int *)(v26 - 4);
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
              j_j_j_j__ZdlPv_9(v20);
          if ( v25 )
            operator delete(v25);
          if ( v24 )
            operator delete(v24);
          result = v23;
          if ( v23 )
            result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
          v23 = 0;
  return result;
}


signed int __fastcall InventoryTransaction::verifyBalance(InventoryTransaction *this)
{
  int v1; // r0@1
  int v2; // r1@1
  __int64 v3; // kr00_8@1
  signed int result; // r0@2
  int v5; // r2@6
  bool v6; // zf@6

  v3 = *(_QWORD *)((char *)this + 28);
  v1 = *(_QWORD *)((char *)this + 28) >> 32;
  v2 = v3;
  if ( (_DWORD)v3 == v1 )
  {
    result = 1;
  }
  else
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 12);
      v6 = v5 == 0;
      if ( !v5 )
        v6 = *(_BYTE *)(v2 + 16) == 0;
      if ( !v6 )
        break;
      v2 += 20;
      if ( v1 == v2 )
        return 1;
    }
    result = 0;
  return result;
}


InventoryTransaction *__fastcall InventoryTransaction::~InventoryTransaction(InventoryTransaction *this)
{
  InventoryTransaction *v1; // r8@1
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r5@8
  int v6; // r9@9
  __int64 v7; // r0@9
  int v8; // r4@10
  int v9; // r7@10
  void *v10; // r0@11
  void *v11; // r0@13
  void *v12; // r0@17
  void *v13; // r0@19
  int v14; // r0@21
  char *v15; // r0@28

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 28) >> 32;
  v3 = *(_QWORD *)((char *)this + 28);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 20;
    }
    while ( v2 != v3 );
    v3 = *((_DWORD *)v1 + 7);
  }
  if ( v3 )
    operator delete((void *)v3);
  v5 = *((_DWORD *)v1 + 2);
  if ( v5 )
      v6 = *(_DWORD *)v5;
      v7 = *(_QWORD *)(v5 + 16);
      if ( (_DWORD)v7 != HIDWORD(v7) )
      {
        v8 = v7 + 96;
        v9 = -HIDWORD(v7);
        do
        {
          v10 = *(void **)(v8 + 44);
          if ( v10 )
            operator delete(v10);
          v11 = *(void **)(v8 + 28);
          if ( v11 )
            operator delete(v11);
          if ( *(_DWORD *)v8 )
            (*(void (**)(void))(**(_DWORD **)v8 + 4))();
          *(_DWORD *)v8 = 0;
          v12 = *(void **)(v8 - 28);
          if ( v12 )
            operator delete(v12);
          v13 = *(void **)(v8 - 44);
          if ( v13 )
            operator delete(v13);
          v14 = *(_DWORD *)(v8 - 72);
          if ( v14 )
            (*(void (**)(void))(*(_DWORD *)v14 + 4))();
          *(_DWORD *)(v8 - 72) = 0;
          v8 += 160;
        }
        while ( v8 + v9 != 96 );
        LODWORD(v7) = *(_DWORD *)(v5 + 16);
      }
      if ( (_DWORD)v7 )
        operator delete((void *)v7);
      operator delete((void *)v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v15 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v15 )
    operator delete(v15);
  return v1;
}


int __fastcall InventoryTransaction::InventoryTransaction(double a1)
{
  double v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r7@3
  void *v4; // r6@3
  int i; // r6@4
  __int64 v6; // kr00_8@4

  v1 = a1;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(LODWORD(v1) + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 24) = 0;
    v4 = (void *)(LODWORD(v1) + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)LODWORD(v1) = v4;
  *(_DWORD *)(LODWORD(v1) + 28) = 0;
  *(_DWORD *)(LODWORD(v1) + 32) = 0;
  *(_DWORD *)(LODWORD(v1) + 36) = 0;
  v6 = *(_QWORD *)HIDWORD(v1);
  HIDWORD(v1) = *(_QWORD *)HIDWORD(v1) >> 32;
  for ( i = v6; HIDWORD(v1) != i; i += 160 )
    InventoryTransaction::addAction((unsigned __int64 *)LODWORD(v1), i);
  return LODWORD(v1);
}


void *__fastcall InventoryTransaction::getVerifyFunction(InventoryTransaction *this, const InventorySource *a2, int a3)
{
  InventoryTransaction *v3; // r4@1
  int v4; // r0@1
  void *result; // r0@4
  int (__fastcall *v6)(void **, void **, int); // r1@4
  void *v7; // r2@4

  v3 = this;
  v4 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 2 )
  {
    if ( v4 == 3 )
    {
      result = operator new(1u);
      v6 = sub_179DAE8;
      v7 = sub_179D79C;
      goto LABEL_12;
    }
    if ( v4 == 99999 )
      v6 = sub_179DB1A;
      v7 = sub_179DB16;
    goto LABEL_11;
  }
  if ( v4 )
    if ( v4 == 2 )
      v6 = sub_179D76C;
      v7 = sub_179D6C6;
LABEL_11:
    result = operator new(1u);
    v6 = sub_179DB4C;
    v7 = sub_179DB48;
    goto LABEL_12;
  switch ( *(_BYTE *)(a3 + 4) )
    case 119:
      v6 = sub_179D19C;
      v7 = sub_179CFB8;
      break;
    case 122:
      goto LABEL_15;
    case 120:
      v6 = sub_179CD74;
      v7 = sub_179CB8C;
    case 121:
      v6 = sub_179D222;
      v7 = sub_179D218;
    case 123:
      v6 = sub_179D1EA;
      v7 = sub_179D1CA;
    case 124:
      v6 = sub_179CF88;
      v7 = sub_179CDA4;
    default:
      if ( *(_BYTE *)(a3 + 4) )
      {
LABEL_15:
        result = operator new(1u);
        v6 = sub_179D698;
        v7 = sub_179D250;
      }
      else
        v6 = sub_179CB5C;
        v7 = sub_179C938;
LABEL_12:
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 2) = v6;
  *((_DWORD *)v3 + 3) = v7;
  return result;
}


int *__fastcall InventoryTransaction::getActions(InventoryTransaction *this, const InventorySource *a2)
{
  InventoryTransaction *v2; // r9@1
  const InventorySource *v3; // r8@1
  char v4; // r0@1
  unsigned int v5; // r2@4
  int v6; // r10@4
  unsigned int v7; // r11@4
  _DWORD *v8; // r6@4
  _DWORD *v9; // r7@5
  int v10; // r4@5
  _DWORD *v11; // r5@8
  int v12; // r1@10
  int *result; // r0@16

  v2 = this;
  v3 = a2;
  v4 = byte_28042AC;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_28042AC) )
  {
    dword_28042B0 = 0;
    *(_DWORD *)algn_28042B4 = 0;
    *(_DWORD *)&algn_28042B4[4] = 0;
    _cxa_atexit(std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_28042AC);
  }
  v5 = *((_BYTE *)v3 + 4);
  v6 = v5 ^ (*(_DWORD *)v3 << 16);
  v7 = (v5 ^ (*(_DWORD *)v3 << 16)) % (unsigned int)(*(_QWORD *)v2 >> 32);
  v8 = *(_DWORD **)(*(_QWORD *)v2 + 4 * v7);
  if ( v8 )
    v9 = (_DWORD *)*v8;
    v10 = *(_DWORD *)(*v8 + 28);
    while ( v10 != v6 || !InventorySource::operator==(v3, (int)(v9 + 1)) )
    {
      v11 = (_DWORD *)*v9;
      if ( !*v9 )
      {
        v12 = 0;
        goto LABEL_16;
      }
      v10 = v11[7];
      v8 = v9;
      v9 = (_DWORD *)*v9;
      if ( v11[7] % *((_DWORD *)v2 + 1) != v7 )
    }
    if ( v8 )
      v12 = *v8;
    else
      v12 = 0;
  else
    v12 = 0;
LABEL_16:
  result = &dword_28042B0;
  if ( v12 )
    result = (int *)(v12 + 16);
  return result;
}


signed int __fastcall InventoryTransaction::verifyFull(InventoryTransaction *this, Player *a2, int a3)
{
  signed int v3; // r8@0
  int v4; // r10@1
  Player *v5; // r11@1
  int v6; // r1@1 OVERLAPPED
  int v7; // r2@1 OVERLAPPED
  int v8; // r3@2
  bool v9; // zf@2
  int v10; // r7@7
  int v11; // r4@8
  int v12; // r6@8
  int v13; // r0@10
  signed int v14; // r6@14
  signed int result; // r0@5
  char v16; // [sp+4h] [bp-34h]@8
  void (__fastcall *v17)(char *, char *, signed int); // [sp+Ch] [bp-2Ch]@9
  int (__fastcall *v18)(char *, Player *, int, int); // [sp+10h] [bp-28h]@10

  v4 = a3;
  v5 = a2;
  *(_QWORD *)&v6 = *(_QWORD *)((char *)this + 28);
  if ( v6 == v7 )
  {
LABEL_7:
    v10 = *((_DWORD *)this + 2);
    if ( v10 )
    {
      while ( 1 )
      {
        InventoryTransaction::getVerifyFunction((InventoryTransaction *)&v16, (const InventorySource *)v6, v10 + 4);
        v11 = *(_QWORD *)(v10 + 16) >> 32;
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 == v11 )
        {
LABEL_14:
          v14 = 4;
        }
        else
          while ( 1 )
          {
            if ( !v17 )
              sub_21E5F48();
            v13 = v18(&v16, v5, v12, v4);
            if ( v13 != 1 )
              break;
            v12 += 160;
            if ( v11 == v12 )
              goto LABEL_14;
          }
          v14 = 1;
          v3 = v13;
        if ( v17 )
          v17(&v16, &v16, 3);
        if ( v14 != 4 )
          break;
        v10 = *(_DWORD *)v10;
        if ( !v10 )
          v14 = 2;
      }
    }
    else
      v14 = 2;
    if ( v14 == 2 )
      v3 = 1;
    result = v3;
  }
  else
    while ( 1 )
      v8 = *(_DWORD *)(v6 + 12);
      v9 = v8 == 0;
      if ( !v8 )
        v9 = *(_BYTE *)(v6 + 16) == 0;
      if ( !v9 )
        break;
      v6 += 20;
      if ( v7 == v6 )
        goto LABEL_7;
    result = 2;
  return result;
}


int __fastcall InventoryTransaction::recalculateBalance(int result)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  int i; // r8@6
  int v5; // r6@9
  int j; // r7@9
  int v7; // r2@10
  const ItemInstance *v8; // r1@10
  int v9; // r0@10
  InventoryTransaction *v10; // r0@13

  v1 = result;
  v2 = *(_QWORD *)(result + 28);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      result = *(_DWORD *)(v3 + 8);
      if ( result )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 20;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *(_DWORD *)(v1 + 32) = v2;
  for ( i = *(_DWORD *)(v1 + 8); i; i = *(_DWORD *)i )
    v5 = *(_QWORD *)(i + 16) >> 32;
    for ( j = *(_QWORD *)(i + 16); v5 != j; j += 160 )
      v7 = *(_BYTE *)(j + 102);
      v8 = (const ItemInstance *)(j + 16);
      v9 = *(_BYTE *)(j + 30);
      if ( *(_BYTE *)(j + 102) )
      {
        if ( *(_BYTE *)(j + 30) )
        {
          InventoryTransaction::addItemToContent((InventoryTransaction *)v1, v8, -v9);
          v7 = *(_BYTE *)(j + 102);
        }
        v10 = (InventoryTransaction *)v1;
        v8 = (const ItemInstance *)(j + 88);
      }
      else
        v7 = -v9;
      result = (int)InventoryTransaction::addItemToContent(v10, v8, v7);
  return result;
}


InventoryTransaction *__fastcall InventoryTransaction::executeFull(InventoryTransaction *this, Player *a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  Player *v5; // r5@1
  char *v6; // r4@2
  const InventorySource *v7; // r1@3
  int v8; // r2@3
  const InventorySource *v9; // r1@3
  int v10; // r7@3
  int v11; // r9@3
  int v12; // r0@5
  signed int v13; // r7@12
  InventoryTransaction *result; // r0@20
  InventoryTransaction *v15; // [sp+4h] [bp-54h]@2
  char v16; // [sp+8h] [bp-50h]@3
  void (__fastcall *v17)(char *, char *, signed int); // [sp+10h] [bp-48h]@6
  int (__fastcall *v18)(char *, Player *, int); // [sp+14h] [bp-44h]@7
  char v19; // [sp+18h] [bp-40h]@3
  void (__fastcall *v20)(char *, char *, signed int); // [sp+20h] [bp-38h]@4
  int (__fastcall *v21)(char *, Player *, int, int); // [sp+24h] [bp-34h]@5
  char v22; // [sp+28h] [bp-30h]@2
  const InventorySource *v23; // [sp+2Ch] [bp-2Ch]@3
  int v24; // [sp+30h] [bp-28h]@3

  v3 = *((_DWORD *)this + 2);
  v4 = a3;
  v5 = a2;
  if ( v3 )
  {
    v6 = &v22;
    v15 = this;
    while ( 1 )
    {
      v7 = *(const InventorySource **)(v3 + 8);
      v8 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)&v22 = *(_DWORD *)(v3 + 4);
      v23 = v7;
      v24 = v8;
      InventoryTransaction::getVerifyFunction((InventoryTransaction *)&v19, v7, (int)v6);
      InventoryTransaction::getExecuteFunction((InventoryTransaction *)&v16, v9, (int)v6);
      v11 = *(_QWORD *)(v3 + 16) >> 32;
      v10 = *(_QWORD *)(v3 + 16);
      if ( v10 == v11 )
      {
LABEL_12:
        v13 = 1;
      }
      else
        while ( 1 )
        {
          if ( !v20 )
            sub_21E5F48();
          v12 = v21(&v19, v5, v10, v4);
          if ( v12 != 1 )
            break;
          if ( !v17 )
          v12 = v18(&v16, v5, v10);
          v10 += 160;
          if ( v11 == v10 )
            goto LABEL_12;
        }
        v13 = 0;
        v15 = (InventoryTransaction *)v12;
      if ( v17 )
        v17(&v16, &v16, 3);
      if ( v20 )
        v20(&v19, &v19, 3);
      if ( v13 != 1 )
        break;
      v3 = *(_DWORD *)v3;
      v6 = &v22;
      if ( !v3 )
        goto LABEL_20;
    }
    result = v15;
  }
  else
LABEL_20:
    result = (InventoryTransaction *)1;
  return result;
}


_DWORD *__fastcall InventoryTransaction::addActionToContent(InventoryTransaction *this, int a2)
{
  int v2; // r5@1
  InventoryTransaction *v3; // r4@1
  int v4; // r2@1
  const ItemInstance *v5; // r1@1
  int v6; // r0@1
  _DWORD *result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = *(_BYTE *)(a2 + 102);
  v5 = (const ItemInstance *)(a2 + 16);
  v6 = *(_BYTE *)(v2 + 30);
  if ( v4 )
  {
    if ( *(_BYTE *)(v2 + 30) )
    {
      InventoryTransaction::addItemToContent(v3, v5, -v6);
      v4 = *(_BYTE *)(v2 + 102);
    }
    result = j_j_j__ZN20InventoryTransaction16addItemToContentERK12ItemInstancei(
               v3,
               (const ItemInstance *)(v2 + 88),
               v4);
  }
  else
    result = j_j_j__ZN20InventoryTransaction16addItemToContentERK12ItemInstancei(v3, v5, -v6);
  return result;
}


int __fastcall InventoryTransaction::forceBalanceTransaction(int result)
{
  int v1; // r1@1
  int v2; // r5@1
  ItemInstance *v3; // r4@2
  unsigned int v4; // r6@4
  ItemInstance *v5; // r0@6
  unsigned int v6; // r7@6
  int v7; // r0@12
  int v8; // r9@13
  __int16 v9; // r0@14
  __int16 v10; // r0@28
  ItemInstance *v11; // r0@46
  unsigned int v12; // r6@46
  unsigned int v13; // r9@46
  int v14; // r0@52
  int v15; // r4@53
  __int16 v16; // r0@54
  int v17; // [sp+28h] [bp-400h]@1
  unsigned __int64 *v18; // [sp+3Ch] [bp-3ECh]@1
  __int16 v19; // [sp+45h] [bp-3E3h]@0
  char v20; // [sp+47h] [bp-3E1h]@0
  int v21; // [sp+48h] [bp-3E0h]@68
  char v22; // [sp+4Ch] [bp-3DCh]@68
  int v23; // [sp+50h] [bp-3D8h]@68
  int v24; // [sp+54h] [bp-3D4h]@68
  int v25; // [sp+58h] [bp-3D0h]@68
  int v26; // [sp+60h] [bp-3C8h]@78
  void *v27; // [sp+7Ch] [bp-3ACh]@76
  void *v28; // [sp+8Ch] [bp-39Ch]@74
  int v29; // [sp+A0h] [bp-388h]@68
  int v30; // [sp+A8h] [bp-380h]@72
  void *v31; // [sp+C4h] [bp-364h]@70
  void *v32; // [sp+D4h] [bp-354h]@68
  __int16 v33; // [sp+EDh] [bp-33Bh]@54
  char v34; // [sp+EFh] [bp-339h]@54
  int v35; // [sp+F0h] [bp-338h]@54
  char v36; // [sp+F4h] [bp-334h]@54
  int v37; // [sp+F8h] [bp-330h]@54
  int v38; // [sp+FCh] [bp-32Ch]@54
  int v39; // [sp+100h] [bp-328h]@54
  int v40; // [sp+108h] [bp-320h]@64
  void *v41; // [sp+124h] [bp-304h]@62
  void *v42; // [sp+134h] [bp-2F4h]@60
  int v43; // [sp+148h] [bp-2E0h]@54
  int v44; // [sp+150h] [bp-2D8h]@58
  void *v45; // [sp+16Ch] [bp-2BCh]@56
  void *v46; // [sp+17Ch] [bp-2ACh]@54
  char v47; // [sp+190h] [bp-298h]@52
  int v48; // [sp+198h] [bp-290h]@85
  void *v49; // [sp+1B4h] [bp-274h]@83
  void *v50; // [sp+1C4h] [bp-264h]@81
  char v51; // [sp+1D8h] [bp-250h]@46
  int v52; // [sp+1E0h] [bp-248h]@50
  void *v53; // [sp+1FCh] [bp-22Ch]@48
  void *v54; // [sp+20Ch] [bp-21Ch]@46
  __int16 v55; // [sp+225h] [bp-203h]@28
  char v56; // [sp+227h] [bp-201h]@28
  int v57; // [sp+228h] [bp-200h]@28
  char v58; // [sp+22Ch] [bp-1FCh]@28
  int v59; // [sp+230h] [bp-1F8h]@28
  int v60; // [sp+234h] [bp-1F4h]@28
  int v61; // [sp+238h] [bp-1F0h]@28
  int v62; // [sp+240h] [bp-1E8h]@38
  void *v63; // [sp+25Ch] [bp-1CCh]@36
  void *v64; // [sp+26Ch] [bp-1BCh]@34
  int v65; // [sp+280h] [bp-1A8h]@28
  int v66; // [sp+288h] [bp-1A0h]@32
  void *v67; // [sp+2A4h] [bp-184h]@30
  void *v68; // [sp+2B4h] [bp-174h]@28
  __int16 v69; // [sp+2CDh] [bp-15Bh]@14
  char v70; // [sp+2CFh] [bp-159h]@14
  int v71; // [sp+2D0h] [bp-158h]@14
  char v72; // [sp+2D4h] [bp-154h]@14
  int v73; // [sp+2D8h] [bp-150h]@14
  int v74; // [sp+2DCh] [bp-14Ch]@14
  int v75; // [sp+2E0h] [bp-148h]@14
  int v76; // [sp+2E8h] [bp-140h]@24
  void *v77; // [sp+304h] [bp-124h]@22
  void *v78; // [sp+314h] [bp-114h]@20
  int v79; // [sp+328h] [bp-100h]@14
  int v80; // [sp+330h] [bp-F8h]@18
  void *v81; // [sp+34Ch] [bp-DCh]@16
  void *v82; // [sp+35Ch] [bp-CCh]@14
  char v83; // [sp+370h] [bp-B8h]@2
  int v84; // [sp+378h] [bp-B0h]@45
  void *v85; // [sp+394h] [bp-94h]@43
  void *v86; // [sp+3A4h] [bp-84h]@41
  char v87; // [sp+3B8h] [bp-70h]@6
  int v88; // [sp+3C0h] [bp-68h]@10
  void *v89; // [sp+3DCh] [bp-4Ch]@8
  void *ptr; // [sp+3ECh] [bp-3Ch]@6

  v18 = (unsigned __int64 *)result;
  v1 = *(_QWORD *)(result + 28) >> 32;
  v2 = *(_QWORD *)(result + 28);
  v17 = v1;
  if ( v2 != v1 )
  {
    v3 = (ItemInstance *)&v83;
    do
    {
      result = *(_BYTE *)(v2 + 16);
      if ( !*(_BYTE *)(v2 + 16) )
      {
        v4 = *(_DWORD *)(v2 + 12);
        if ( v4 )
        {
          if ( (signed int)v4 < 1 )
          {
            v11 = ItemInstance::ItemInstance(
                    (ItemInstance *)&v51,
                    *(_QWORD *)v2,
                    1,
                    *(_QWORD *)v2 >> 32,
                    *(_DWORD *)(v2 + 8));
            v12 = -v4;
            v13 = v12 / ItemInstance::getMaxStackSize(v11);
            if ( v54 )
              operator delete(v54);
            if ( v53 )
              operator delete(v53);
            if ( v52 )
              (*(void (**)(void))(*(_DWORD *)v52 + 4))();
            v52 = 0;
            ItemInstance::ItemInstance((ItemInstance *)&v47, *(_QWORD *)v2, 1, *(_QWORD *)v2 >> 32, *(_DWORD *)(v2 + 8));
            v14 = ItemInstance::getMaxStackSize((ItemInstance *)&v47);
            ItemInstance::set((ItemInstance *)&v47, v14);
            if ( v13 )
            {
              v15 = 0;
              do
              {
                v35 = 3;
                v36 = -1;
                v16 = v33;
                *(_BYTE *)(((unsigned int)&v35 | 5) + 2) = v34;
                *(_WORD *)((unsigned int)&v35 | 5) = v16;
                v37 = 0;
                v38 = 0;
                ItemInstance::ItemInstance((ItemInstance *)&v39, (int)&ItemInstance::EMPTY_ITEM);
                ItemInstance::ItemInstance((ItemInstance *)&v43, (int)&v47);
                InventoryTransaction::addAction(v18, (int)&v35);
                if ( v46 )
                  operator delete(v46);
                if ( v45 )
                  operator delete(v45);
                if ( v44 )
                  (*(void (**)(void))(*(_DWORD *)v44 + 4))();
                v44 = 0;
                if ( v42 )
                  operator delete(v42);
                if ( v41 )
                  operator delete(v41);
                if ( v40 )
                  (*(void (**)(void))(*(_DWORD *)v40 + 4))();
                v40 = 0;
                ++v15;
                v12 -= ItemInstance::getMaxStackSize((ItemInstance *)&v47);
              }
              while ( v15 != v13 );
            }
            if ( v12 )
              ItemInstance::set((ItemInstance *)&v47, (unsigned __int8)v12);
              v21 = 3;
              v22 = -1;
              *(_BYTE *)(((unsigned int)&v21 | 5) + 2) = v20;
              *(_WORD *)((unsigned int)&v21 | 5) = v19;
              v23 = 0;
              v24 = 0;
              ItemInstance::ItemInstance((ItemInstance *)&v25, (int)&ItemInstance::EMPTY_ITEM);
              ItemInstance::ItemInstance((ItemInstance *)&v29, (int)&v47);
              InventoryTransaction::addAction(v18, (int)&v21);
              if ( v32 )
                operator delete(v32);
              if ( v31 )
                operator delete(v31);
              if ( v30 )
                (*(void (**)(void))(*(_DWORD *)v30 + 4))();
              v30 = 0;
              if ( v28 )
                operator delete(v28);
              if ( v27 )
                operator delete(v27);
              if ( v26 )
                (*(void (**)(void))(*(_DWORD *)v26 + 4))();
              v26 = 0;
            v3 = (ItemInstance *)&v83;
            if ( v50 )
              operator delete(v50);
            if ( v49 )
              operator delete(v49);
            result = v48;
          }
          else
            v5 = ItemInstance::ItemInstance(
                   (ItemInstance *)&v87,
                   *(_QWORD *)v2,
                   1,
                   *(_QWORD *)v2 >> 32,
                   *(_DWORD *)(v2 + 8));
            v6 = v4 / ItemInstance::getMaxStackSize(v5);
            if ( ptr )
              operator delete(ptr);
            if ( v89 )
              operator delete(v89);
            if ( v88 )
              (*(void (**)(void))(*(_DWORD *)v88 + 4))();
            v88 = 0;
            ItemInstance::ItemInstance(v3, *(_QWORD *)v2, 1, *(_QWORD *)v2 >> 32, *(_DWORD *)(v2 + 8));
            v7 = ItemInstance::getMaxStackSize(v3);
            ItemInstance::set(v3, v7);
            if ( v6 )
              v8 = 0;
                v71 = 3;
                v72 = -1;
                v9 = v69;
                *(_BYTE *)(((unsigned int)&v71 | 5) + 2) = v70;
                *(_WORD *)((unsigned int)&v71 | 5) = v9;
                v73 = 0;
                v74 = 1;
                ItemInstance::ItemInstance((ItemInstance *)&v75, (int)v3);
                ItemInstance::ItemInstance((ItemInstance *)&v79, (int)&ItemInstance::EMPTY_ITEM);
                InventoryTransaction::addAction(v18, (int)&v71);
                if ( v82 )
                  operator delete(v82);
                if ( v81 )
                  operator delete(v81);
                if ( v80 )
                  (*(void (**)(void))(*(_DWORD *)v80 + 4))();
                v80 = 0;
                if ( v78 )
                  operator delete(v78);
                if ( v77 )
                  operator delete(v77);
                if ( v76 )
                  (*(void (**)(void))(*(_DWORD *)v76 + 4))();
                v76 = 0;
                ++v8;
                v4 -= ItemInstance::getMaxStackSize(v3);
              while ( v8 != v6 );
            if ( v4 )
              ItemInstance::set(v3, (unsigned __int8)v4);
              v57 = 3;
              v58 = -1;
              v10 = v55;
              *(_BYTE *)(((unsigned int)&v57 | 5) + 2) = v56;
              *(_WORD *)((unsigned int)&v57 | 5) = v10;
              v59 = 0;
              v60 = 1;
              ItemInstance::ItemInstance((ItemInstance *)&v61, (int)v3);
              ItemInstance::ItemInstance((ItemInstance *)&v65, (int)&ItemInstance::EMPTY_ITEM);
              InventoryTransaction::addAction(v18, (int)&v57);
              if ( v68 )
                operator delete(v68);
              if ( v67 )
                operator delete(v67);
              if ( v66 )
                (*(void (**)(void))(*(_DWORD *)v66 + 4))();
              v66 = 0;
              if ( v64 )
                operator delete(v64);
              if ( v63 )
                operator delete(v63);
              if ( v62 )
                (*(void (**)(void))(*(_DWORD *)v62 + 4))();
              v62 = 0;
            if ( v86 )
              operator delete(v86);
            if ( v85 )
              operator delete(v85);
            result = v84;
          if ( result )
            result = (*(int (**)(void))(*(_DWORD *)result + 4))();
          v1 = v17;
        }
      }
      v2 += 20;
    }
    while ( v2 != v1 );
  }
  return result;
}


void *__fastcall InventoryTransaction::getExecuteFunction(InventoryTransaction *this, const InventorySource *a2, int a3)
{
  InventoryTransaction *v3; // r4@1
  int v4; // r0@1
  void *result; // r0@4
  int (__fastcall *v6)(void **, void **, int); // r1@4
  void *v7; // r2@4

  v3 = this;
  v4 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 2 )
  {
    if ( v4 == 3 )
    {
      result = operator new(1u);
      v6 = sub_179E00C;
      v7 = sub_179DF86;
      goto LABEL_18;
    }
    if ( v4 == 99999 )
      v6 = sub_179E03E;
      v7 = sub_179E03A;
    goto LABEL_11;
  }
  if ( v4 )
    if ( v4 == 2 )
      v6 = sub_179DF58;
      v7 = sub_179DEBA;
LABEL_11:
    result = operator new(1u);
    v6 = sub_179E070;
    v7 = sub_179E06C;
    goto LABEL_18;
  switch ( *(_BYTE *)(a3 + 4) )
    case 119:
      v6 = sub_179DC70;
      v7 = sub_179DC5C;
      break;
    case 121:
    case 122:
      goto LABEL_14;
    case 120:
      v6 = sub_179DBF0;
      v7 = sub_179DBDA;
    case 123:
      v6 = sub_179DCA2;
      v7 = sub_179DC9E;
    case 124:
      v6 = sub_179DC2E;
      v7 = sub_179DC1E;
    default:
      if ( *(_BYTE *)(a3 + 4) )
      {
LABEL_14:
        result = operator new(1u);
        v6 = sub_179DE8C;
        v7 = sub_179DCD0;
      }
      else
        v6 = sub_179DBAC;
        v7 = sub_179DB7A;
LABEL_18:
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 2) = v6;
  *((_DWORD *)v3 + 3) = v7;
  return result;
}


_DWORD *__fastcall InventoryTransaction::addItemToContent(InventoryTransaction *this, const ItemInstance *a2, int a3)
{
  InventoryTransaction *v3; // r9@1
  const ItemInstance *v4; // r7@1
  int v5; // r5@1
  unsigned __int64 *v6; // r10@1
  int v7; // r6@1
  int v8; // r0@3
  int v9; // r1@3
  bool v10; // zf@3
  int v11; // r4@7
  int v12; // r0@7
  bool v13; // zf@7
  int v14; // r4@10
  int (__fastcall *v15)(int, _DWORD); // r8@10
  char *v16; // r0@10
  __int64 v17; // r0@14
  _DWORD *result; // r0@19
  int v19; // r1@21
  bool v20; // nf@23
  unsigned __int8 v21; // vf@23
  signed int v22; // [sp+4h] [bp-3Ch]@1
  int v23; // [sp+8h] [bp-38h]@14
  int v24; // [sp+Ch] [bp-34h]@15
  int v25; // [sp+10h] [bp-30h]@15
  int v26; // [sp+14h] [bp-2Ch]@15

  v3 = this;
  v22 = a3;
  v4 = a2;
  v6 = (unsigned __int64 *)((char *)this + 28);
  v5 = *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 8);
  if ( v5 == v7 )
  {
LABEL_14:
    InventoryTransactionItemGroup::InventoryTransactionItemGroup((InventoryTransactionItemGroup *)&v23, v4, v22);
    v17 = *((_QWORD *)v3 + 4);
    if ( (_DWORD)v17 == HIDWORD(v17) )
    {
      std::vector<InventoryTransactionItemGroup,std::allocator<InventoryTransactionItemGroup>>::_M_emplace_back_aux<InventoryTransactionItemGroup>(
        v6,
        (int)&v23);
    }
    else
      *(_DWORD *)v17 = v23;
      *(_DWORD *)(v17 + 4) = v24;
      HIDWORD(v17) = v25;
      v25 = 0;
      *(_DWORD *)(v17 + 8) = HIDWORD(v17);
      *(_DWORD *)(v17 + 12) = v26;
      *(_BYTE *)(v17 + 16) = 0;
      *((_DWORD *)v3 + 8) = v17 + 20;
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    result = 0;
    v25 = 0;
    return result;
  }
  while ( 1 )
    if ( ItemInstance::getId(v4) != *(_DWORD *)v5 )
      goto LABEL_13;
    v8 = ItemInstance::getAuxValue(v4);
    v9 = (unsigned __int16)v8;
    v10 = (unsigned __int16)v8 == 0x7FFF;
    if ( (unsigned __int16)v8 != 0x7FFF )
      v9 = *(_DWORD *)(v5 + 4);
      v10 = v9 == 0x7FFF;
    if ( !v10 && v9 != v8 )
    v11 = *(_DWORD *)(v5 + 8);
    v12 = *(_DWORD *)ItemInstance::getUserData(v4);
    v13 = v11 == 0;
    if ( v11 )
      v13 = v12 == 0;
    if ( v13 )
      break;
    v14 = *(_DWORD *)(v5 + 8);
    v15 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v14 + 28);
    v16 = ItemInstance::getUserData(v4);
    if ( v15(v14, *(_DWORD *)v16) )
      goto LABEL_20;
LABEL_13:
    v5 += 20;
    if ( v7 == v5 )
      goto LABEL_14;
  if ( v12 | v11 )
    goto LABEL_13;
LABEL_20:
  if ( v22 < 1 )
    result = (_DWORD *)(v5 + 12);
    v19 = *(_DWORD *)(v5 + 12);
    v21 = __OFSUB__(v22, -1);
    v20 = v22 + 1 < 0;
    if ( v22 <= -1 )
      v21 = __OFSUB__(v19, 2147483648 - v22);
      v20 = ((v19 - (2147483648 - v22)) & 0x80000000) != 0;
    if ( v20 ^ v21 )
      goto LABEL_27;
LABEL_28:
    *result = v19 + v22;
  else
    if ( v19 <= 0x7FFFFFFF - v22 )
      goto LABEL_28;
LABEL_27:
    result = (_DWORD *)1;
    *(_BYTE *)(v5 + 16) = 1;
  return result;
}


_DWORD *__fastcall InventoryTransaction::addAction(unsigned __int64 *a1, int a2)
{
  int v2; // r11@1
  unsigned __int64 *v3; // r9@1
  int v4; // r8@1
  int v5; // r10@1
  int *v6; // r6@1
  int *v7; // r7@2
  int v8; // r4@2
  _DWORD *v9; // r5@5
  bool v10; // zf@8
  int v11; // r8@13
  int v12; // r5@13
  const ItemInstance *v13; // r6@14
  int v14; // r1@20
  int v15; // r2@20
  int v16; // r3@20
  int v17; // r7@20
  int v18; // r2@22
  int v19; // r0@22
  InventoryTransaction *v20; // r0@25
  const ItemInstance *v21; // r1@25
  int v22; // ST08_4@26
  int v23; // ST0C_4@26
  int v24; // ST10_4@26
  int v25; // ST14_4@26
  int v27; // [sp+18h] [bp-C8h]@26
  int v28; // [sp+20h] [bp-C0h]@36
  void *v29; // [sp+3Ch] [bp-A4h]@34
  void *v30; // [sp+4Ch] [bp-94h]@32
  int v31; // [sp+60h] [bp-80h]@26
  int v32; // [sp+68h] [bp-78h]@30
  void *v33; // [sp+84h] [bp-5Ch]@28
  void *ptr; // [sp+94h] [bp-4Ch]@26
  int v35; // [sp+A8h] [bp-38h]@12
  int v36; // [sp+ACh] [bp-34h]@12
  int v37; // [sp+B0h] [bp-30h]@12
  int v38; // [sp+B4h] [bp-2Ch]@12

  v2 = a2;
  v3 = a1;
  v4 = *(_BYTE *)(a2 + 4) ^ (*(_DWORD *)a2 << 16);
  v5 = v4 % (*a1 >> 32);
  v6 = *(int **)(*a1 + 4 * v5);
  if ( !v6 )
    goto LABEL_12;
  v7 = (int *)*v6;
  v8 = *(_DWORD *)(*v6 + 28);
  while ( v8 != v4 || !InventorySource::operator==((_DWORD *)v2, (int)(v7 + 1)) )
  {
    v9 = (_DWORD *)*v7;
    if ( *v7 )
    {
      v8 = v9[7];
      v6 = v7;
      v7 = (int *)*v7;
      if ( v9[7] % *((_DWORD *)v3 + 1) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v5 = *v6;
    v10 = *v6 == 0;
  if ( v10 )
LABEL_12:
    v35 = 0;
    v36 = 0;
    v37 = 0;
    std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<InventorySource const&,std::vector<InventoryAction,std::allocator<InventoryAction>>>(
      &v38,
      (int)v3,
      v2,
      (int)&v35);
    v5 = v38;
    std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector(&v35);
  v11 = *(_DWORD *)(v5 + 16);
  v12 = *(_DWORD *)(v5 + 20);
  if ( v11 == v12 )
LABEL_19:
    if ( v11 == *(_DWORD *)(v5 + 24) )
      std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_emplace_back_aux<InventoryAction const&>(
        (unsigned __int64 *)(v5 + 16),
        v2);
      v17 = v2 + 88;
      v13 = (const ItemInstance *)(v2 + 16);
    else
      v14 = *(_DWORD *)(v2 + 4);
      v15 = *(_DWORD *)(v2 + 8);
      v16 = *(_DWORD *)(v2 + 12);
      *(_DWORD *)v11 = *(_DWORD *)v2;
      *(_DWORD *)(v11 + 4) = v14;
      *(_DWORD *)(v11 + 8) = v15;
      *(_DWORD *)(v11 + 12) = v16;
      ItemInstance::ItemInstance((ItemInstance *)(v11 + 16), v2 + 16);
      ItemInstance::ItemInstance((ItemInstance *)(v11 + 88), v2 + 88);
      *(_DWORD *)(v5 + 20) += 160;
    v18 = *(_BYTE *)(v2 + 102);
    v19 = *(_BYTE *)(v2 + 30);
    if ( *(_BYTE *)(v2 + 102) )
      if ( *(_BYTE *)(v2 + 30) )
      {
        InventoryTransaction::addItemToContent((InventoryTransaction *)v3, v13, -v19);
        v18 = *(_BYTE *)(v2 + 102);
      }
      v20 = (InventoryTransaction *)v3;
      v21 = (const ItemInstance *)v17;
      return InventoryTransaction::addItemToContent(v20, v21, v18);
LABEL_42:
    v18 = -v19;
    v20 = (InventoryTransaction *)v3;
    v21 = v13;
    return InventoryTransaction::addItemToContent(v20, v21, v18);
  v13 = (const ItemInstance *)(v2 + 16);
  while ( *(_DWORD *)(v11 + 12) != *(_DWORD *)(v2 + 12)
       || ItemInstance::operator==((ItemInstance *)(v2 + 16), (ItemInstance *)(v11 + 88)) != 1 )
    v11 += 160;
    if ( v12 == v11 )
      v11 = *(_DWORD *)(v5 + 20);
      goto LABEL_19;
  v22 = *(_DWORD *)v11;
  v23 = *(_DWORD *)(v11 + 4);
  v24 = *(_DWORD *)(v11 + 8);
  v25 = *(_DWORD *)(v11 + 12);
  ItemInstance::ItemInstance((ItemInstance *)&v27, v11 + 16);
  ItemInstance::ItemInstance((ItemInstance *)&v31, v2 + 88);
  *(_DWORD *)v11 = v22;
  *(_DWORD *)(v11 + 4) = v23;
  *(_DWORD *)(v11 + 8) = v24;
  *(_DWORD *)(v11 + 12) = v25;
  ItemInstance::operator=(v11 + 16, (int)&v27);
  ItemInstance::operator=(v11 + 88, (int)&v31);
  if ( ptr )
    operator delete(ptr);
  if ( v33 )
    operator delete(v33);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  v32 = 0;
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v28 = 0;
  v18 = *(_BYTE *)(v2 + 102);
  v19 = *(_BYTE *)(v2 + 30);
  if ( !*(_BYTE *)(v2 + 102) )
    goto LABEL_42;
  if ( *(_BYTE *)(v2 + 30) )
    InventoryTransaction::addItemToContent((InventoryTransaction *)v3, (const ItemInstance *)(v2 + 16), -v19);
  v20 = (InventoryTransaction *)v3;
  v21 = (const ItemInstance *)(v2 + 88);
  return InventoryTransaction::addItemToContent(v20, v21, v18);
}
