

const void **__fastcall ItemUseOnEntityInventoryTransaction::write(ItemUseOnEntityInventoryTransaction *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ItemUseOnEntityInventoryTransaction *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 6);
  BinaryStream::writeUnsignedVarInt(v2, *((_DWORD *)v3 + 14));
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 15));
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemUseOnEntityInventoryTransaction *)((char *)v3 + 64));
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 34);
  return j_j_j__ZN12BinaryStream9writeTypeI4Vec3EEvRKT__0((int)v2, (int *)v3 + 37);
}


signed int __fastcall ItemUseOnEntityInventoryTransaction::handle(ItemUseOnEntityInventoryTransaction *this, Player *a2, int a3)
{
  Player *v3; // r4@1
  ItemUseOnEntityInventoryTransaction *v4; // r10@1
  int v5; // r7@1
  ItemInstance *v6; // r0@2
  signed int v7; // r4@4
  int v8; // r0@6
  int v9; // r0@9
  const Entity *v10; // r9@9
  int i; // r7@17
  __int64 v18; // kr00_8@17
  _DWORD *v19; // r6@18
  int v20; // r1@19
  int v21; // r2@19
  int v22; // r3@19
  int v23; // r7@22
  void (__fastcall *v24)(int, _DWORD **, _DWORD **); // r8@22
  _DWORD *v25; // r0@22
  __int64 v26; // r1@22
  _DWORD *v27; // r0@22
  __int64 v28; // r1@22
  _DWORD *v30; // [sp+4h] [bp-64h]@22
  __int64 v31; // [sp+Ch] [bp-5Ch]@22
  _DWORD *v32; // [sp+14h] [bp-54h]@22
  __int64 v33; // [sp+1Ch] [bp-4Ch]@22
  int v34; // [sp+24h] [bp-44h]@17
  char v35; // [sp+28h] [bp-40h]@17
  int v36; // [sp+2Ch] [bp-3Ch]@17
  _DWORD *v37; // [sp+30h] [bp-38h]@17
  _DWORD *v38; // [sp+34h] [bp-34h]@17
  _DWORD *v39; // [sp+38h] [bp-30h]@17
  int v40; // [sp+3Ch] [bp-2Ch]@17
  char v41; // [sp+40h] [bp-28h]@6
  int v42; // [sp+44h] [bp-24h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 316))(a2) != 1 )
    return 7;
  v6 = (ItemInstance *)Player::getSelectedItem(v3);
  if ( ItemInstance::operator!=(v6, (ItemUseOnEntityInventoryTransaction *)((char *)v4 + 64)) )
  {
    if ( v5 != 1 )
      return 3;
  }
  else
    v8 = Player::getSupplies(v3);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v41, v8);
    if ( v42 != *((_DWORD *)v4 + 15) && !v5 )
  v9 = Entity::getLevel(v3);
  v10 = (const Entity *)Level::getRuntimeEntity(v9, 0, *((_QWORD *)v4 + 6), 0);
  if ( v10 )
    _R0 = Entity::distanceTo(v3, (ItemUseOnEntityInventoryTransaction *)((char *)v4 + 136));
    __asm
    {
      VMOV.F32        S0, #6.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v5 == 1 )
      _R0 = Entity::distanceTo(v3, v10);
      __asm
      {
        VMOV.F32        S0, #12.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v5 == 1 )
        v40 = 1;
        v37 = 0;
        v38 = 0;
        v34 = 0;
        v35 = 0;
        v39 = 0;
        v36 = 0;
        v18 = *(_QWORD *)InventoryTransaction::getActions(
                           (ItemUseOnEntityInventoryTransaction *)((char *)v4 + 8),
                           (const InventorySource *)&v34);
        for ( i = v18; HIDWORD(v18) != i; i += 160 )
        {
          v19 = v38;
          if ( v38 == v39 )
          {
            std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_emplace_back_aux<InventoryAction const&>(
              (unsigned __int64 *)&v37,
              i);
          }
          else
            v20 = *(_DWORD *)(i + 4);
            v21 = *(_DWORD *)(i + 8);
            v22 = *(_DWORD *)(i + 12);
            *v38 = *(_DWORD *)i;
            v19[1] = v20;
            v19[2] = v21;
            v19[3] = v22;
            ItemInstance::ItemInstance((ItemInstance *)(v19 + 4), i + 16);
            ItemInstance::ItemInstance((ItemInstance *)(v19 + 22), i + 88);
            v38 += 40;
        }
        v23 = Player::getSupplies(v3);
        v24 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v23 + 16);
        v25 = operator new(0x10u);
        LODWORD(v26) = sub_179FD54;
        *v25 = v4;
        v25[1] = v3;
        HIDWORD(v26) = sub_179FC60;
        v25[2] = &v37;
        v25[3] = &v40;
        v32 = v25;
        v33 = v26;
        v27 = operator new(0x10u);
        LODWORD(v28) = sub_179FF60;
        *v27 = v4;
        v27[1] = v3;
        HIDWORD(v28) = sub_179FD92;
        v27[2] = &v40;
        v27[3] = v10;
        v30 = v27;
        v31 = v28;
        v24(v23, &v32, &v30);
        if ( (_DWORD)v31 )
          ((void (*)(void))v31)();
        if ( (_DWORD)v33 )
          ((void (*)(void))v33)();
        if ( v37 == v38 )
          v7 = v40;
        else
          v7 = 2;
          v40 = 2;
        std::vector<InventoryAction,std::allocator<InventoryAction>>::~vector(&v37);
      else
        v7 = 7;
    else
      v7 = 7;
    v7 = 7;
  return v7;
}


int __fastcall ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)a1 = &off_2700C2C;
  *(_DWORD *)(a1 + 4) = 3;
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
  *(_DWORD *)v1 = &off_2700CC4;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = -1;
  ItemInstance::ItemInstance(v1 + 64);
  result = v1;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 148) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  *(_DWORD *)(v1 + 156) = 0;
  return result;
}


void __fastcall ItemUseOnEntityInventoryTransaction::~ItemUseOnEntityInventoryTransaction(ItemUseOnEntityInventoryTransaction *this)
{
  ItemUseOnEntityInventoryTransaction::~ItemUseOnEntityInventoryTransaction(this);
}


void __fastcall ItemUseOnEntityInventoryTransaction::~ItemUseOnEntityInventoryTransaction(ItemUseOnEntityInventoryTransaction *this)
{
  ItemUseOnEntityInventoryTransaction *v1; // r0@1

  v1 = ItemUseOnEntityInventoryTransaction::~ItemUseOnEntityInventoryTransaction(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ItemUseOnEntityInventoryTransaction::read(ItemUseOnEntityInventoryTransaction *this, ReadOnlyBinaryStream *a2)
{
  ItemUseOnEntityInventoryTransaction *v2; // r4@1
  ReadOnlyBinaryStream *v3; // r5@1
  int result; // r0@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 6) = *(_QWORD *)&v5;
  *((_DWORD *)v2 + 14) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  *((_DWORD *)v2 + 15) = ReadOnlyBinaryStream::getVarInt(v3);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 64);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v3);
  *((_DWORD *)v2 + 34) = v5;
  *((_DWORD *)v2 + 35) = v6;
  *((_DWORD *)v2 + 36) = v7;
  *((_DWORD *)v2 + 37) = v5;
  *((_DWORD *)v2 + 38) = v6;
  result = v7;
  *((_DWORD *)v2 + 39) = v7;
  return result;
}


ItemUseOnEntityInventoryTransaction *__fastcall ItemUseOnEntityInventoryTransaction::~ItemUseOnEntityInventoryTransaction(ItemUseOnEntityInventoryTransaction *this)
{
  ItemUseOnEntityInventoryTransaction *v1; // r4@1
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
  *(_DWORD *)this = &off_2700CC4;
  v2 = (void *)*((_DWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 25);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 18);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 18) = 0;
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


int __fastcall ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 v4; // r0@1
  int v5; // r5@1

  v2 = a1;
  v3 = a2;
  HIDWORD(v4) = 3;
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
  *(_DWORD *)v2 = &off_2700CC4;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = -1;
  ItemInstance::ItemInstance(v2 + 64);
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  return v2;
}
