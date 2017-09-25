

int __fastcall ItemReleaseInventoryTransaction::ItemReleaseInventoryTransaction(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)a1 = &off_2700C2C;
  *(_DWORD *)(a1 + 4) = 4;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v2 = a1 + 24;
  *(_DWORD *)(a1 + 28) = 0;
  v3 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 24)));
  *(_DWORD *)(v2 - 12) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 32) = 0;
    v5 = (void *)(v1 + 32);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v1 + 8) = v5;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)v1 = &off_2700C4C;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = -1;
  ItemInstance::ItemInstance(v1 + 56);
  result = v1;
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  return result;
}


int __fastcall ItemReleaseInventoryTransaction::read(ItemReleaseInventoryTransaction *this, ReadOnlyBinaryStream *a2)
{
  ReadOnlyBinaryStream *v2; // r4@1
  ItemReleaseInventoryTransaction *v3; // r5@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 12) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  *((_DWORD *)v3 + 13) = ReadOnlyBinaryStream::getVarInt(v2);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v2, (int)v3 + 56);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 32) = v5;
  *((_DWORD *)v3 + 33) = v6;
  result = v7;
  *((_DWORD *)v3 + 34) = v7;
  return result;
}


signed int __fastcall ItemReleaseInventoryTransaction::handle(ItemReleaseInventoryTransaction *this, Player *a2, int a3)
{
  Player *v3; // r4@1
  ItemReleaseInventoryTransaction *v4; // r9@1
  int v5; // r6@1
  ItemInstance *v6; // r0@2
  signed int v7; // r4@4
  int v8; // r0@6
  int i; // r6@12
  __int64 v15; // kr00_8@12
  _DWORD *v16; // r7@13
  int v17; // r1@14
  int v18; // r2@14
  int v19; // r3@14
  int v20; // r6@17
  void (__fastcall *v21)(int, _DWORD **, _DWORD **); // r8@17
  _DWORD *v22; // r0@17
  __int64 v23; // r1@17
  _DWORD *v24; // r0@17
  __int64 v25; // r1@17
  _DWORD *v27; // [sp+0h] [bp-60h]@17
  __int64 v28; // [sp+8h] [bp-58h]@17
  _DWORD *v29; // [sp+10h] [bp-50h]@17
  __int64 v30; // [sp+18h] [bp-48h]@17
  int v31; // [sp+20h] [bp-40h]@12
  char v32; // [sp+24h] [bp-3Ch]@12
  int v33; // [sp+28h] [bp-38h]@12
  _DWORD *v34; // [sp+2Ch] [bp-34h]@12
  _DWORD *v35; // [sp+30h] [bp-30h]@12
  _DWORD *v36; // [sp+34h] [bp-2Ch]@12
  int v37; // [sp+38h] [bp-28h]@12
  char v38; // [sp+3Ch] [bp-24h]@6
  int v39; // [sp+40h] [bp-20h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 316))(a2) != 1 )
    return 7;
  v6 = (ItemInstance *)Player::getSelectedItem(v3);
  if ( ItemInstance::operator!=(v6, (ItemReleaseInventoryTransaction *)((char *)v4 + 56)) )
  {
    if ( v5 != 1 )
      return 3;
  }
  else
    v8 = Player::getSupplies(v3);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v38, v8);
    if ( v39 != *((_DWORD *)v4 + 13) && !v5 )
  _R0 = Entity::distanceTo(v3, (ItemReleaseInventoryTransaction *)((char *)v4 + 128));
  __asm
    VMOV.F32        S0, #4.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v5 == 1 )
    v37 = 1;
    v34 = 0;
    v35 = 0;
    v31 = 0;
    v32 = 0;
    v36 = 0;
    v33 = 0;
    v15 = *(_QWORD *)InventoryTransaction::getActions(
                       (ItemReleaseInventoryTransaction *)((char *)v4 + 8),
                       (const InventorySource *)&v31);
    for ( i = v15; HIDWORD(v15) != i; i += 160 )
    {
      v16 = v35;
      if ( v35 == v36 )
      {
        std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_emplace_back_aux<InventoryAction const&>(
          (unsigned __int64 *)&v34,
          i);
      }
      else
        v17 = *(_DWORD *)(i + 4);
        v18 = *(_DWORD *)(i + 8);
        v19 = *(_DWORD *)(i + 12);
        *v35 = *(_DWORD *)i;
        v16[1] = v17;
        v16[2] = v18;
        v16[3] = v19;
        ItemInstance::ItemInstance((ItemInstance *)(v16 + 4), i + 16);
        ItemInstance::ItemInstance((ItemInstance *)(v16 + 22), i + 88);
        v35 += 40;
    }
    v20 = Player::getSupplies(v3);
    v21 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v20 + 16);
    v22 = operator new(0x10u);
    LODWORD(v23) = sub_179EA98;
    *v22 = v4;
    v22[1] = v3;
    HIDWORD(v23) = sub_179E9A4;
    v22[2] = &v34;
    v22[3] = &v37;
    v29 = v22;
    v30 = v23;
    v24 = operator new(8u);
    LODWORD(v25) = sub_179EB30;
    *v24 = v4;
    v24[1] = v3;
    HIDWORD(v25) = sub_179EAD6;
    v27 = v24;
    v28 = v25;
    v21(v20, &v29, &v27);
    if ( (_DWORD)v28 )
      ((void (__cdecl *)(_DWORD **))v28)(&v27);
    if ( (_DWORD)v30 )
      ((void (__cdecl *)(_DWORD **))v30)(&v29);
    if ( v34 == v35 )
      v7 = v37;
    else
      v7 = 2;
      v37 = 2;
    std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector(&v34);
    v7 = 7;
  return v7;
}


ItemReleaseInventoryTransaction *__fastcall ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction *this)
{
  ItemReleaseInventoryTransaction *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r5@7
  int v6; // r7@7
  int v7; // r0@8
  int v8; // r5@14
  int v9; // r6@15
  char *v10; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_2700C4C;
  v2 = (void *)*((_DWORD *)this + 27);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 23);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 16);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 16) = 0;
  *(_DWORD *)v1 = &off_2700C2C;
  v6 = *(_QWORD *)((char *)v1 + 36) >> 32;
  v5 = *(_QWORD *)((char *)v1 + 36);
  if ( v5 != v6 )
  {
    do
    {
      v7 = *(_DWORD *)(v5 + 8);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v5 + 8) = 0;
      v5 += 20;
    }
    while ( v6 != v5 );
    v5 = *((_DWORD *)v1 + 9);
  }
  if ( v5 )
    operator delete((void *)v5);
  v8 = *((_DWORD *)v1 + 4);
  if ( v8 )
      v9 = *(_DWORD *)v8;
      std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector((_QWORD *)(v8 + 16));
      operator delete((void *)v8);
      v8 = v9;
    while ( v9 );
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v10 = (char *)*((_DWORD *)v1 + 2);
  if ( v10 && (char *)v1 + 32 != v10 )
    operator delete(v10);
  return v1;
}


void __fastcall ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction *this)
{
  ItemReleaseInventoryTransaction *v1; // r0@1

  v1 = ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction(this);
  j_j_j__ZdlPv_6((void *)v1);
}


const void **__fastcall ItemReleaseInventoryTransaction::write(ItemReleaseInventoryTransaction *this, BinaryStream *a2)
{
  ItemReleaseInventoryTransaction *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_DWORD *)this + 12));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 13));
  BinaryStream::writeType<ItemInstance>((int)v3, (ItemReleaseInventoryTransaction *)((char *)v2 + 56));
  return j_j_j__ZN12BinaryStream9writeTypeI4Vec3EEvRKT__0((int)v3, (int *)v2 + 32);
}


void __fastcall ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction *this)
{
  ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction(this);
}
