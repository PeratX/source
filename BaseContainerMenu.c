

BaseContainerMenu *__fastcall BaseContainerMenu::~BaseContainerMenu(BaseContainerMenu *this)
{
  BaseContainerMenu *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271FC3C;
  *((_DWORD *)this + 1) = &off_271FC80;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        j_operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        j_operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 3);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return v1;
}


int __fastcall BaseContainerMenu::setContainerId(int result, char a2)
{
  *(_BYTE *)(result + 24) = a2;
  return result;
}


void __fastcall BaseContainerMenu::setLastSlot(BaseContainerMenu *this, int a2, const ItemInstance *a3)
{
  BaseContainerMenu *v3; // r6@1
  const ItemInstance *v4; // r8@1
  int v5; // r5@1
  int v6; // r7@2
  void (__fastcall *v7)(int, char *, int); // r4@2
  int v8; // r0@2
  __int64 v9; // r0@4
  __int64 v10; // r4@6
  void *v11; // r0@7
  void *v12; // r0@9
  int v13; // r0@11
  int v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  (*(void (__fastcall **)(int *, BaseContainerMenu *))(*(_DWORD *)this + 24))(&v14, this);
  if ( v15 - v14 != *((_DWORD *)v3 + 4) - *((_DWORD *)v3 + 3) )
  {
    v6 = *((_DWORD *)v3 + 2);
    v7 = *(void (__fastcall **)(int, char *, int))(*(_DWORD *)v6 + 1472);
    v8 = j_std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v3 + 12, (unsigned __int64 *)&v14);
    v7(v6, (char *)v3 + 4, v8);
  }
  if ( v5 >= 0 )
    v9 = *(_QWORD *)((char *)v3 + 12);
    if ( 954437177 * ((HIDWORD(v9) - (signed int)v9) >> 3) > v5 )
      j_ItemInstance::operator=(v9 + 72 * v5, (int)v4);
  v10 = *(_QWORD *)&v14;
  if ( v14 != v15 )
    do
    {
      v11 = *(void **)(v10 + 52);
      if ( v11 )
        j_operator delete(v11);
      v12 = *(void **)(v10 + 36);
      if ( v12 )
        j_operator delete(v12);
      v13 = *(_DWORD *)(v10 + 8);
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      *(_DWORD *)(v10 + 8) = 0;
      LODWORD(v10) = v10 + 72;
    }
    while ( HIDWORD(v10) != (_DWORD)v10 );
    LODWORD(v10) = v14;
  if ( (_DWORD)v10 )
    j_operator delete((void *)v10);
}


void __fastcall BaseContainerMenu::broadcastChanges(BaseContainerMenu *this)
{
  BaseContainerMenu *v1; // r10@1
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r1@1
  BaseContainerMenu *v5; // r9@1
  int v6; // r3@1
  int v7; // r8@3
  int v8; // r7@3
  int v9; // r5@5
  int v10; // r6@5
  int v11; // r4@7
  void (__fastcall *v12)(int, char *, int, int); // r11@7
  int v13; // r4@10
  void (__fastcall *v14)(int, char *, int); // r5@10
  int v15; // r0@10
  __int64 v16; // r4@11
  void *v17; // r0@12
  void *v18; // r0@14
  int v19; // r0@16
  int v20; // [sp+Ch] [bp-34h]@3
  int v21; // [sp+10h] [bp-30h]@1
  int v22; // [sp+14h] [bp-2Ch]@1

  v1 = this;
  (*(void (__fastcall **)(int *, BaseContainerMenu *))(*(_DWORD *)this + 24))(&v21, this);
  v3 = v22;
  v2 = v21;
  v5 = (BaseContainerMenu *)((char *)v1 + 12);
  v4 = *((_DWORD *)v1 + 3);
  v6 = 954437177 * ((v22 - v21) >> 3);
  if ( v6 == 954437177 * ((*((_DWORD *)v1 + 4) - v4) >> 3) )
  {
    if ( v22 != v21 )
    {
      v7 = 0;
      v8 = 0;
      v20 = v6 - 1;
      while ( 1 )
      {
        v9 = v4 + v7;
        v10 = v2 + v7;
        if ( j_ItemInstance::matches((ItemInstance *)(v4 + v7), (const ItemInstance *)(v2 + v7)) != 1
          || (*(int (__fastcall **)(BaseContainerMenu *, int))(*(_DWORD *)v1 + 16))(v1, v8) == 1 )
        {
          v11 = *((_DWORD *)v1 + 2);
          v12 = *(void (__fastcall **)(int, char *, int, int))(*(_DWORD *)v11 + 1464);
          (*(void (__fastcall **)(BaseContainerMenu *, int))(*(_DWORD *)v1 + 20))(v1, v8);
          v12(v11, (char *)v1 + 4, v8, v9);
          j_ItemInstance::operator=(*(_DWORD *)v5 + v7, v10);
        }
        if ( v20 == v8 )
          break;
        ++v8;
        v2 = v21;
        v4 = *(_DWORD *)v5;
        v7 += 72;
      }
    }
  }
  else
    v13 = *((_DWORD *)v1 + 2);
    v14 = *(void (__fastcall **)(int, char *, int))(*(_DWORD *)v13 + 1472);
    v15 = j_std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v1 + 12, (unsigned __int64 *)&v21);
    v14(v13, (char *)v1 + 4, v15);
  v16 = *(_QWORD *)&v21;
  if ( v21 != v22 )
    do
      v17 = *(void **)(v16 + 52);
      if ( v17 )
        j_operator delete(v17);
      v18 = *(void **)(v16 + 36);
      if ( v18 )
        j_operator delete(v18);
      v19 = *(_DWORD *)(v16 + 8);
      if ( v19 )
        (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v19 + 4))(v19, *(_DWORD *)(*(_DWORD *)v19 + 4), v3);
      *(_DWORD *)(v16 + 8) = 0;
      LODWORD(v16) = v16 + 72;
    while ( HIDWORD(v16) != (_DWORD)v16 );
    LODWORD(v16) = v21;
  if ( (_DWORD)v16 )
    j_operator delete((void *)v16);
}


void __fastcall BaseContainerMenu::~BaseContainerMenu(BaseContainerMenu *this)
{
  BaseContainerMenu::~BaseContainerMenu(this);
}


void __fastcall BaseContainerMenu::broadcastChanges(BaseContainerMenu *this)
{
  BaseContainerMenu::broadcastChanges(this);
}


int __fastcall BaseContainerMenu::BaseContainerMenu(int result, int a2, char a3)
{
  *(_DWORD *)result = &off_271FC3C;
  *(_DWORD *)(result + 4) = &off_271FC80;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = -1;
  *(_BYTE *)(result + 25) = a3;
  return result;
}


int __fastcall BaseContainerMenu::setContainerType(int result, char a2)
{
  *(_BYTE *)(result + 25) = a2;
  return result;
}


signed int __fastcall BaseContainerMenu::distanceCheck(BaseContainerMenu *this, const BlockPos *a2, float a3)
{
  signed int result; // r0@1

  _R4 = a3;
  _R0 = j_Entity::distanceSqrToBlockPosCenter(*((Entity **)this + 2), a2);
  __asm
  {
    VMOV            S0, R4
    VMOV            S2, R0
  }
  result = 0;
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  return result;
}


int __fastcall BaseContainerMenu::isSlotDirty(BaseContainerMenu *this, int a2)
{
  return 0;
}


int __fastcall BaseContainerMenu::isResultSlot(BaseContainerMenu *this, int a2)
{
  return 0;
}


void __fastcall BaseContainerMenu::~BaseContainerMenu(BaseContainerMenu *this)
{
  BaseContainerMenu *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271FC3C;
  *((_DWORD *)this + 1) = &off_271FC80;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        j_operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        j_operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 3);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_j_j__ZdlPv_7((void *)v1);
}
