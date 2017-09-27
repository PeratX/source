

ContainerController *__fastcall HorseEquipContainerController::~HorseEquipContainerController(HorseEquipContainerController *this)
{
  HorseEquipContainerController *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  int v7; // r5@12 OVERLAPPED
  int v8; // r6@12 OVERLAPPED
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17

  v1 = this;
  *(_DWORD *)this = &off_26ECB1C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_QWORD *)&v7 = *((_QWORD *)v1 + 2);
  if ( v7 != v8 )
      v9 = *(void **)(v7 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v7 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v7 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    while ( v8 != v7 );
    v7 = *((_DWORD *)v1 + 4);
  if ( v7 )
    operator delete((void *)v7);
  return j_j_j__ZN19ContainerControllerD2Ev_0(v1);
}


signed int __fastcall HorseEquipContainerController::_canSet(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r6@1
  signed int v8; // r8@1
  bool v9; // zf@4
  signed int v10; // r5@11
  ItemInstance *v11; // r4@13
  ItemInstance *v12; // r6@13
  __int64 v13; // kr00_8@13
  char v14; // r7@14
  char v15; // r0@15
  ItemInstance *v16; // r4@19
  ItemInstance *v17; // r6@19
  __int64 v18; // kr08_8@19
  char v19; // r0@21

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = ContainerController::_canSet(a1, a2, a3, a4);
  if ( *(_QWORD *)(v7 + 16) >> 32 == (unsigned int)*(_QWORD *)(v7 + 16) )
    ++v6;
  if ( v8 != 3 )
  {
    v9 = *(_BYTE *)(v5 + 15) == 0;
    if ( *(_BYTE *)(v5 + 15) )
      v9 = *(_DWORD *)v5 == 0;
    if ( !v9 && !ItemInstance::isNull((ItemInstance *)v5) && *(_BYTE *)(v5 + 14) )
    {
      if ( v4 || *(_BYTE *)(v5 + 14) == 1 )
      {
        v10 = ItemInstance::getId((ItemInstance *)v5);
        if ( v6 == 1 )
        {
          v18 = *(_QWORD *)(v7 + 28);
          v17 = (ItemInstance *)(*(_QWORD *)(v7 + 28) >> 32);
          v16 = (ItemInstance *)v18;
          if ( (ItemInstance *)v18 != v17 )
          {
            v14 = 0;
            do
            {
              v9 = ItemInstance::getId(v16) == v10;
              v19 = 0;
              if ( v9 )
                v19 = 1;
              v16 = (ItemInstance *)((char *)v16 + 72);
              v14 |= v19;
            }
            while ( v17 != v16 );
            goto LABEL_24;
          }
        }
        else
          if ( v6 )
            return v8;
          v13 = *(_QWORD *)(v7 + 16);
          v12 = (ItemInstance *)(*(_QWORD *)(v7 + 16) >> 32);
          v11 = (ItemInstance *)v13;
          if ( (ItemInstance *)v13 != v12 )
              v9 = ItemInstance::getId(v11) == v10;
              v15 = 0;
                v15 = 1;
              v11 = (ItemInstance *)((char *)v11 + 72);
              v14 |= v15;
            while ( v12 != v11 );
LABEL_24:
            if ( !(v14 & 1) )
              v8 = 3;
      }
      return 3;
    }
  }
  return v8;
}


void __fastcall HorseEquipContainerController::setArmorItems(int a1, __int64 *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  char *v4; // r6@2
  int v5; // r0@5
  __int64 v6; // kr08_8@5
  int v7; // r6@6
  void *v8; // r0@7
  void *v9; // r0@9
  int v10; // r0@11

  v2 = *a2;
  v3 = a1;
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
    v4 = 0;
  }
  else
    if ( (unsigned int)(954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3)) >= 0x38E38E4 )
      sub_21E57F4();
    v4 = (char *)operator new(HIDWORD(v2) - v2);
  v5 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
         v2,
         SHIDWORD(v2),
         (int)v4);
  v6 = *(_QWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = v4;
  *(_DWORD *)(v3 + 32) = v5;
  *(_DWORD *)(v3 + 36) = &v4[8 * ((HIDWORD(v2) - (signed int)v2) >> 3)];
  if ( (_DWORD)v6 != HIDWORD(v6) )
    v7 = v6;
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( HIDWORD(v6) != v7 );
  if ( (_DWORD)v6 )
    j_j_j__ZdlPv_6((void *)v6);
}


void __fastcall HorseEquipContainerController::setSaddleItems(int a1, __int64 *a2)
{
  HorseEquipContainerController::setSaddleItems(a1, a2);
}


void __fastcall HorseEquipContainerController::~HorseEquipContainerController(HorseEquipContainerController *this)
{
  ContainerController *v1; // r0@1

  v1 = HorseEquipContainerController::~HorseEquipContainerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall HorseEquipContainerController::_canAdd(HorseEquipContainerController *this, int a2, int a3)
{
  return 2;
}


int __fastcall HorseEquipContainerController::HorseEquipContainerController(int a1, int a2)
{
  int v2; // r5@1
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
  ContainerController::ContainerController(v2, (int)&v10, 0);
  v6 = v11;
  if ( v11 )
    v7 = (unsigned int *)(v11 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6);
  *(_DWORD *)v2 = &off_26ECB1C;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  return v2;
}


void __fastcall HorseEquipContainerController::setSaddleItems(int a1, __int64 *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  char *v4; // r6@2
  int v5; // r0@5
  __int64 v6; // kr08_8@5
  int v7; // r6@6
  void *v8; // r0@7
  void *v9; // r0@9
  int v10; // r0@11

  v2 = *a2;
  v3 = a1;
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
    v4 = 0;
  }
  else
    if ( (unsigned int)(954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3)) >= 0x38E38E4 )
      sub_21E57F4();
    v4 = (char *)operator new(HIDWORD(v2) - v2);
  v5 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
         v2,
         SHIDWORD(v2),
         (int)v4);
  v6 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = v4;
  *(_DWORD *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 24) = &v4[8 * ((HIDWORD(v2) - (signed int)v2) >> 3)];
  if ( (_DWORD)v6 != HIDWORD(v6) )
    v7 = v6;
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( HIDWORD(v6) != v7 );
  if ( (_DWORD)v6 )
    j_j_j__ZdlPv_6((void *)v6);
}


void __fastcall HorseEquipContainerController::setArmorItems(int a1, __int64 *a2)
{
  HorseEquipContainerController::setArmorItems(a1, a2);
}


void __fastcall HorseEquipContainerController::~HorseEquipContainerController(HorseEquipContainerController *this)
{
  HorseEquipContainerController::~HorseEquipContainerController(this);
}
