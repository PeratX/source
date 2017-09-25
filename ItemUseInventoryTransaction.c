

int __fastcall ItemUseInventoryTransaction::read(ItemUseInventoryTransaction *this, ReadOnlyBinaryStream *a2)
{
  ReadOnlyBinaryStream *v2; // r5@1
  ItemUseInventoryTransaction *v3; // r4@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 12) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 13) = v5;
  *((_DWORD *)v3 + 14) = v6;
  *((_DWORD *)v3 + 15) = v7;
  *((_BYTE *)v3 + 64) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_DWORD *)v3 + 17) = ReadOnlyBinaryStream::getVarInt(v2);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v2, (int)v3 + 72);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 36) = v5;
  *((_DWORD *)v3 + 37) = v6;
  *((_DWORD *)v3 + 38) = v7;
  *((_DWORD *)v3 + 39) = v5;
  *((_DWORD *)v3 + 40) = v6;
  result = v7;
  *((_DWORD *)v3 + 41) = v7;
  return result;
}


int __fastcall ItemUseInventoryTransaction::onTransactionError(int a1, Player *a2)
{
  Player *v2; // r4@1

  v2 = a2;
  ItemUseInventoryTransaction::resendBlocksAroundArea(
    (ItemUseInventoryTransaction *)a1,
    a2,
    (const BlockPos *)(a1 + 52),
    *(_BYTE *)(a1 + 64));
  return (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v2 + 1064))(v2, 1);
}


int __fastcall ItemUseInventoryTransaction::ItemUseInventoryTransaction(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 v4; // r0@1
  int v5; // r5@1

  v2 = a1;
  v3 = a2;
  HIDWORD(v4) = 2;
  LODWORD(v4) = &off_2700C2C;
  *(_QWORD *)v2 = v4;
  *(_DWORD *)(v2 + 8) = 0;
  v5 = v2 + 8;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v3 + 12);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(v3 + 16);
  std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,true> const*)#1}>(
    (unsigned int *)(v2 + 8),
    v3);
  std::vector<InventoryTransactionItemGroup,std::allocator<InventoryTransactionItemGroup>>::vector(
    v2 + 36,
    (unsigned __int64 *)(v3 + 28));
  *(_DWORD *)v2 = &off_2700C6C;
  *(_DWORD *)(v2 + 68) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  ItemInstance::ItemInstance(v2 + 72);
  *(_DWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  return v2;
}


void __fastcall ItemUseInventoryTransaction::~ItemUseInventoryTransaction(ItemUseInventoryTransaction *this)
{
  ItemUseInventoryTransaction::~ItemUseInventoryTransaction(this);
}


int __fastcall ItemUseInventoryTransaction::resendBlocksAroundArea(ItemUseInventoryTransaction *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  int v5; // r8@1
  const BlockPos *v6; // r7@1
  const BlockPos *v7; // r5@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r1@1
  int v11; // r2@1
  int v13; // [sp+4h] [bp-6Ch]@1
  int v14; // [sp+8h] [bp-68h]@1
  int v15; // [sp+Ch] [bp-64h]@1
  char v16; // [sp+10h] [bp-60h]@1
  char v17; // [sp+11h] [bp-5Fh]@1
  int v18; // [sp+14h] [bp-5Ch]@1
  int v19; // [sp+18h] [bp-58h]@1
  int v20; // [sp+1Ch] [bp-54h]@1
  int v21; // [sp+20h] [bp-50h]@1
  int v22; // [sp+24h] [bp-4Ch]@1
  char v23; // [sp+28h] [bp-48h]@1
  char v24; // [sp+29h] [bp-47h]@1
  void **v25; // [sp+2Ch] [bp-44h]@1
  int v26; // [sp+30h] [bp-40h]@1
  int v27; // [sp+34h] [bp-3Ch]@1
  char v28; // [sp+38h] [bp-38h]@1
  int v29; // [sp+3Ch] [bp-34h]@1
  int v30; // [sp+40h] [bp-30h]@1
  int v31; // [sp+44h] [bp-2Ch]@1
  char v32; // [sp+48h] [bp-28h]@1
  char v33; // [sp+49h] [bp-27h]@1
  char v34; // [sp+4Ah] [bp-26h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (const BlockPos *)Entity::getRegion(a2);
  BlockSource::getBlockAndData((BlockSource *)&v16, v7, (int)v6);
  v26 = 2;
  v27 = 1;
  v28 = 0;
  v25 = &off_26E951C;
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v29 = *(_DWORD *)v6;
  v30 = v8;
  v31 = v9;
  v32 = v16;
  v33 = v17;
  v34 = 3;
  (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v4 + 1524))(v4, &v25);
  v10 = *((_DWORD *)v6 + 1);
  v11 = *((_DWORD *)v6 + 2);
  v20 = *(_DWORD *)v6;
  v21 = v10 + 1;
  v22 = v11;
  BlockSource::getBlockAndData((BlockSource *)&v16, v7, (int)&v20);
  v29 = v20;
  v30 = v21;
  v31 = v22;
  BlockPos::relative((BlockPos *)&v16, (int)v6, v5, 1);
  BlockSource::getBlockAndData((BlockSource *)&v23, v7, (int)&v16);
  v29 = *(_DWORD *)&v16;
  v30 = v18;
  v31 = v19;
  v32 = v23;
  v33 = v24;
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 1524))(v4, &v25);
  v13 = *(_DWORD *)&v16;
  v14 = v18 + 1;
  v15 = v19;
  BlockSource::getBlockAndData((BlockSource *)&v23, v7, (int)&v13);
  v29 = v13;
  v30 = v14;
  v31 = v15;
  return (*(int (__fastcall **)(Player *, void ***))(*(_DWORD *)v4 + 1524))(v4, &v25);
}


void __fastcall ItemUseInventoryTransaction::~ItemUseInventoryTransaction(ItemUseInventoryTransaction *this)
{
  ItemUseInventoryTransaction *v1; // r0@1

  v1 = ItemUseInventoryTransaction::~ItemUseInventoryTransaction(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ItemUseInventoryTransaction::handle(ItemUseInventoryTransaction *this, Player *a2, int a3)
{
  Player *v3; // r4@1
  ItemUseInventoryTransaction *v4; // r9@1
  int v5; // r6@1
  ItemInstance *v6; // r0@2
  signed int v7; // r4@4
  int v8; // r0@6
  int i; // r6@16
  __int64 v16; // kr00_8@16
  _DWORD *v17; // r7@17
  int v18; // r1@18
  int v19; // r2@18
  int v20; // r3@18
  int v21; // r6@21
  void (__fastcall *v22)(int, _DWORD **, _DWORD **); // r8@21
  _DWORD *v23; // r0@21
  __int64 v24; // r1@21
  _DWORD *v25; // r0@21
  __int64 v26; // r1@21
  _DWORD *v28; // [sp+4h] [bp-6Ch]@21
  __int64 v29; // [sp+Ch] [bp-64h]@21
  _DWORD *v30; // [sp+14h] [bp-5Ch]@21
  __int64 v31; // [sp+1Ch] [bp-54h]@21
  int v32; // [sp+24h] [bp-4Ch]@16
  char v33; // [sp+28h] [bp-48h]@16
  int v34; // [sp+2Ch] [bp-44h]@16
  _DWORD *v35; // [sp+30h] [bp-40h]@16
  _DWORD *v36; // [sp+34h] [bp-3Ch]@16
  _DWORD *v37; // [sp+38h] [bp-38h]@16
  int v38; // [sp+3Ch] [bp-34h]@16
  char v39; // [sp+40h] [bp-30h]@13
  char v40; // [sp+4Ch] [bp-24h]@6
  int v41; // [sp+50h] [bp-20h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 316))(a2) != 1 )
    return 7;
  v6 = (ItemInstance *)Player::getSelectedItem(v3);
  if ( ItemInstance::operator!=(v6, (ItemUseInventoryTransaction *)((char *)v4 + 72)) )
  {
    if ( v5 != 1 )
      return 3;
  }
  else
    v8 = Player::getSupplies(v3);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v40, v8);
    if ( v41 != *((_DWORD *)v4 + 17) && !v5 )
  _R0 = Entity::distanceTo(v3, (ItemUseInventoryTransaction *)((char *)v4 + 144));
  __asm
    VMOV.F32        S0, #6.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v5 == 1 )
    if ( *((_DWORD *)v4 + 12) == 1 )
      goto LABEL_32;
    Vec3::Vec3((int)&v39, (int)v4 + 52);
    _R0 = Entity::distanceTo(v3, (const Vec3 *)&v39);
    __asm
    {
      VMOV.F32        S0, #12.5
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v5 == 1 )
LABEL_32:
      v38 = 1;
      v35 = 0;
      v36 = 0;
      v32 = 0;
      v33 = 0;
      v37 = 0;
      v34 = 0;
      v16 = *(_QWORD *)InventoryTransaction::getActions(
                         (ItemUseInventoryTransaction *)((char *)v4 + 8),
                         (const InventorySource *)&v32);
      for ( i = v16; HIDWORD(v16) != i; i += 160 )
      {
        v17 = v36;
        if ( v36 == v37 )
        {
          std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_emplace_back_aux<InventoryAction const&>(
            (unsigned __int64 *)&v35,
            i);
        }
        else
          v18 = *(_DWORD *)(i + 4);
          v19 = *(_DWORD *)(i + 8);
          v20 = *(_DWORD *)(i + 12);
          *v36 = *(_DWORD *)i;
          v17[1] = v18;
          v17[2] = v19;
          v17[3] = v20;
          ItemInstance::ItemInstance((ItemInstance *)(v17 + 4), i + 16);
          ItemInstance::ItemInstance((ItemInstance *)(v17 + 22), i + 88);
          v36 += 40;
      }
      v21 = Player::getSupplies(v3);
      v22 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v21 + 16);
      v23 = operator new(0x10u);
      LODWORD(v24) = sub_179F17A;
      *v23 = v4;
      v23[1] = v3;
      HIDWORD(v24) = sub_179F086;
      v23[2] = &v35;
      v23[3] = &v38;
      v30 = v23;
      v31 = v24;
      v25 = operator new(0xCu);
      LODWORD(v26) = sub_179F700;
      *v25 = v4;
      v25[1] = v3;
      HIDWORD(v26) = sub_179F1B8;
      v25[2] = &v38;
      v28 = v25;
      v29 = v26;
      v22(v21, &v30, &v28);
      if ( (_DWORD)v29 )
        ((void (*)(void))v29)();
      if ( (_DWORD)v31 )
        ((void (*)(void))v31)();
      if ( v35 == v36 )
        v7 = v38;
      else
        v7 = 2;
        v38 = 2;
      std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector(&v35);
    else
      v7 = 7;
    v7 = 7;
  return v7;
}


int __fastcall ItemUseInventoryTransaction::ItemUseInventoryTransaction(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)a1 = &off_2700C2C;
  *(_DWORD *)(a1 + 4) = 2;
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
  *(_DWORD *)v1 = &off_2700C6C;
  *(_DWORD *)(v1 + 68) = 0;
  *(_BYTE *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  ItemInstance::ItemInstance(v1 + 72);
  result = v1;
  *(_DWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 148) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  *(_DWORD *)(v1 + 156) = 0;
  *(_DWORD *)(v1 + 160) = 0;
  *(_DWORD *)(v1 + 164) = 0;
  return result;
}


const void **__fastcall ItemUseInventoryTransaction::write(ItemUseInventoryTransaction *this, BinaryStream *a2)
{
  ItemUseInventoryTransaction *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_DWORD *)this + 12));
  BinaryStream::writeType<NetworkBlockPosition>((int)v3, (signed int *)v2 + 13);
  BinaryStream::writeVarInt(v3, *((_BYTE *)v2 + 64));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 17));
  BinaryStream::writeType<ItemInstance>((int)v3, (ItemUseInventoryTransaction *)((char *)v2 + 72));
  BinaryStream::writeType<Vec3>((int)v3, (int *)v2 + 36);
  return j_j_j__ZN12BinaryStream9writeTypeI4Vec3EEvRKT__0((int)v3, (int *)v2 + 39);
}


ItemUseInventoryTransaction *__fastcall ItemUseInventoryTransaction::~ItemUseInventoryTransaction(ItemUseInventoryTransaction *this)
{
  ItemUseInventoryTransaction *v1; // r4@1
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
  *(_DWORD *)this = &off_2700C6C;
  v2 = (void *)*((_DWORD *)this + 31);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 27);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 20);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 20) = 0;
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
