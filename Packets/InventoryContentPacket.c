

int __fastcall InventoryContentPacket::handle(InventoryContentPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, InventoryContentPacket *))(*(_DWORD *)a3 + 240))(
           a3,
           a2,
           this);
}


void __fastcall InventoryContentPacket::~InventoryContentPacket(InventoryContentPacket *this)
{
  InventoryContentPacket *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E974C;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
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
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall InventoryContentPacket::fromPlayerInventoryId(int a1, int a2, Mob *a3)
{
  InventoryContentPacket::fromPlayerInventoryId(a1, a2, a3);
}


InventoryContentPacket *__fastcall InventoryContentPacket::~InventoryContentPacket(InventoryContentPacket *this)
{
  InventoryContentPacket *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E974C;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
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
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


signed int __fastcall InventoryContentPacket::getId(InventoryContentPacket *this)
{
  return 49;
}


char *__fastcall InventoryContentPacket::fromMobInventoryId(int a1, int a2, Mob *a3)
{
  int v3; // r4@1
  int v4; // r7@1
  Mob *v5; // r6@1
  int v6; // r5@1
  char *result; // r0@1
  int v8; // r1@4
  __int64 v9; // kr00_8@4
  int v10; // r1@6
  __int64 v11; // kr08_8@6
  char *v12; // r1@8
  __int64 v13; // kr10_8@8
  int v14; // r1@11
  __int64 v15; // kr18_8@11
  int v16; // r1@14
  __int64 v17; // kr20_8@14
  int v18; // r1@17
  __int64 v19; // kr28_8@17

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E974C;
  *(_BYTE *)(a1 + 13) = a2;
  *(_DWORD *)(a1 + 16) = 0;
  v6 = a1 + 16;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  result = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                     0,
                     0);
  *(_DWORD *)(v3 + 20) = result;
  if ( v4 == 119 )
  {
    v12 = j_Mob::getOffhandSlot(v5);
    v13 = *(_QWORD *)(v3 + 20);
    if ( (_DWORD)v13 == HIDWORD(v13) )
      return j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
               (unsigned __int64 *)v6,
               (int)v12);
    j_ItemInstance::ItemInstance((ItemInstance *)v13, (int)v12);
LABEL_19:
    result = (char *)(*(_DWORD *)(v3 + 20) + 72);
    *(_DWORD *)(v3 + 20) = result;
    return result;
  }
  if ( v4 == 124 )
    v10 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 908))(v5);
    v11 = *(_QWORD *)(v3 + 20);
    if ( (_DWORD)v11 == HIDWORD(v11) )
               v10);
    j_ItemInstance::ItemInstance((ItemInstance *)v11, v10);
    goto LABEL_19;
  if ( v4 != 120 )
  v8 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v5 + 1028))(v5, 0);
  v9 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)v6,
      v8);
  else
    j_ItemInstance::ItemInstance((ItemInstance *)v9, v8);
    *(_DWORD *)(v3 + 20) += 72;
  v14 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v5 + 1028))(v5, 1);
  v15 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v15 == HIDWORD(v15) )
      v14);
    j_ItemInstance::ItemInstance((ItemInstance *)v15, v14);
  v16 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v5 + 1028))(v5, 2);
  v17 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
      v16);
    j_ItemInstance::ItemInstance((ItemInstance *)v17, v16);
  v18 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v5 + 1028))(v5, 3);
  v19 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v19 != HIDWORD(v19) )
    j_ItemInstance::ItemInstance((ItemInstance *)v19, v18);
  return j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
           (unsigned __int64 *)v6,
           v18);
}


void __fastcall InventoryContentPacket::fromPlayerInventoryId(int a1, int a2, Mob *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  Mob *v5; // r11@1
  int v6; // r9@1
  int v7; // r8@1
  unsigned int v8; // r1@2
  unsigned int *v9; // r0@2
  unsigned int v10; // r2@5
  unsigned int v11; // r3@6
  signed int v12; // r1@7
  int v13; // r0@11
  int v14; // r6@11
  unsigned int *v15; // r2@14
  unsigned int v16; // r1@16
  char *v17; // r1@23
  __int64 v18; // kr08_8@23
  int v19; // r0@26
  int v20; // r4@26
  PlayerInventoryProxy *v21; // r0@26
  signed int v22; // r0@26
  int v23; // r10@27
  int v24; // r6@27
  int v25; // r4@28
  PlayerInventoryProxy *v26; // r0@28
  signed int v27; // r0@28
  int v28; // r1@28
  __int64 v29; // kr10_8@28
  int v30; // r0@35
  __int64 v31; // kr18_8@35
  int v32; // r0@35
  int v33; // r5@36
  void *v34; // r0@37
  void *v35; // r0@39
  int v36; // r0@41
  __int64 v37; // r4@46
  void *v38; // r0@47
  void *v39; // r0@49
  int v40; // r0@51
  int v41; // r1@58
  __int64 v42; // kr20_8@58
  int v43; // r0@60
  int v44; // r4@60
  int v45; // r6@61
  int v46; // r0@62
  int v47; // r1@62
  __int64 v48; // kr28_8@62
  __int64 v49; // kr30_8@67
  int v50; // r1@67
  int v51; // r1@71
  __int64 v52; // kr38_8@71
  int v53; // r1@75
  __int64 v54; // kr40_8@75
  int v55; // r1@78
  __int64 v56; // kr48_8@78
  unsigned int *v57; // r1@82
  unsigned int v58; // r0@84
  unsigned int *v59; // r4@88
  unsigned int v60; // r0@90
  int v61; // [sp+0h] [bp-38h]@35
  int v62; // [sp+4h] [bp-34h]@35
  int v63; // [sp+8h] [bp-30h]@35
  int v64; // [sp+Ch] [bp-2Ch]@1
  int v65; // [sp+10h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E974C;
  *(_BYTE *)(a1 + 13) = a2;
  *(_DWORD *)(a1 + 16) = 0;
  v6 = a1 + 16;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(a1 + 20) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                           0,
                           0);
  j_Player::getContainerManager((Player *)&v64, (int)v5);
  v7 = v65;
  if ( v65 )
  {
    v8 = *(_DWORD *)(v65 + 4);
    v9 = (unsigned int *)(v65 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v8 )
        {
          v12 = 1;
          v7 = 0;
          goto LABEL_11;
        }
        __dmb();
        v10 = __ldrex(v9);
        if ( v10 == v8 )
          break;
        __clrex();
        v8 = v10;
      }
      v11 = __strex(v8 + 1, v9);
      v8 = v10;
    }
    while ( v11 );
    __dmb();
    v12 = 0;
    if ( !*v9 )
      v12 = 1;
LABEL_11:
    v13 = v65;
    v14 = v64;
    if ( v12 )
      v14 = 0;
    if ( v65 )
      v15 = (unsigned int *)(v65 + 8);
      if ( &pthread_create )
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  }
  else
    v14 = 0;
    v7 = 0;
  switch ( v4 )
    case 119:
      v17 = j_Mob::getOffhandSlot(v5);
      v18 = *(_QWORD *)(v3 + 20);
      if ( (_DWORD)v18 != HIDWORD(v18) )
        j_ItemInstance::ItemInstance((ItemInstance *)v18, (int)v17);
        goto LABEL_80;
      j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)v6,
        (int)v17);
      break;
    case 121:
    case 122:
      goto LABEL_33;
    case 120:
      v41 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v5 + 1028))(v5, 0);
      v42 = *(_QWORD *)(v3 + 20);
      if ( (_DWORD)v42 == HIDWORD(v42) )
        j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v6,
          v41);
        j_ItemInstance::ItemInstance((ItemInstance *)v42, v41);
        *(_DWORD *)(v3 + 20) += 72;
      v51 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v5 + 1028))(v5, 1);
      v52 = *(_QWORD *)(v3 + 20);
      if ( (_DWORD)v52 == HIDWORD(v52) )
          v51);
        j_ItemInstance::ItemInstance((ItemInstance *)v52, v51);
      v53 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v5 + 1028))(v5, 2);
      v54 = *(_QWORD *)(v3 + 20);
      if ( (_DWORD)v54 == HIDWORD(v54) )
          v53);
        j_ItemInstance::ItemInstance((ItemInstance *)v54, v53);
      v55 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v5 + 1028))(v5, 3);
      v56 = *(_QWORD *)(v3 + 20);
      if ( (_DWORD)v56 != HIDWORD(v56) )
        j_ItemInstance::ItemInstance((ItemInstance *)v56, v55);
        v55);
    case 123:
      v43 = j_Player::getSupplies(v5);
      v44 = j_PlayerInventoryProxy::getContainerSize(v43, 123);
      if ( v44 )
        v45 = 0;
          v46 = j_Player::getSupplies(v5);
          v47 = j_PlayerInventoryProxy::getItem(v46, v45, 123);
          v48 = *(_QWORD *)(v3 + 20);
          if ( (_DWORD)v48 == HIDWORD(v48) )
          {
            j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              (unsigned __int64 *)v6,
              v47);
          }
          else
            j_ItemInstance::ItemInstance((ItemInstance *)v48, v47);
            *(_DWORD *)(v3 + 20) += 72;
          ++v45;
        while ( v44 != v45 );
    case 124:
      v49 = *(_QWORD *)(v3 + 20);
      v50 = (int)v5 + 5000;
      if ( (_DWORD)v49 == HIDWORD(v49) )
          v50);
        j_ItemInstance::ItemInstance((ItemInstance *)v49, v50);
LABEL_80:
    default:
      if ( v4 )
LABEL_33:
        if ( v14 && (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14) == v4 )
          (*(void (__fastcall **)(int *, int))(*(_DWORD *)v14 + 24))(&v61, v14);
          v30 = v61;
          v31 = *(_QWORD *)(v3 + 16);
          v61 = 0;
          *(_DWORD *)(v3 + 16) = v30;
          v32 = v62;
          v62 = 0;
          *(_DWORD *)(v3 + 20) = v32;
          *(_DWORD *)(v3 + 24) = v63;
          v63 = 0;
          if ( (_DWORD)v31 != HIDWORD(v31) )
            v33 = v31;
            do
            {
              v34 = *(void **)(v33 + 52);
              if ( v34 )
                j_operator delete(v34);
              v35 = *(void **)(v33 + 36);
              if ( v35 )
                j_operator delete(v35);
              v36 = *(_DWORD *)(v33 + 8);
              if ( v36 )
                (*(void (**)(void))(*(_DWORD *)v36 + 4))();
              *(_DWORD *)(v33 + 8) = 0;
              v33 += 72;
            }
            while ( HIDWORD(v31) != v33 );
          if ( (_DWORD)v31 )
            j_operator delete((void *)v31);
          v37 = *(_QWORD *)&v61;
          if ( v61 != v62 )
              v38 = *(void **)(v37 + 52);
              if ( v38 )
                j_operator delete(v38);
              v39 = *(void **)(v37 + 36);
              if ( v39 )
                j_operator delete(v39);
              v40 = *(_DWORD *)(v37 + 8);
              if ( v40 )
                (*(void (**)(void))(*(_DWORD *)v40 + 4))();
              *(_DWORD *)(v37 + 8) = 0;
              LODWORD(v37) = v37 + 72;
            while ( HIDWORD(v37) != (_DWORD)v37 );
            LODWORD(v37) = v61;
          if ( (_DWORD)v37 )
            j_operator delete((void *)v37);
        v19 = j_Player::getSupplies(v5);
        v20 = j_PlayerInventoryProxy::getContainerSize(v19, 0);
        v21 = (PlayerInventoryProxy *)j_Player::getSupplies(v5);
        v22 = j_PlayerInventoryProxy::getLinkedSlotsCount(v21);
        if ( v20 != v22 )
          v23 = v20 - v22;
          v24 = 0;
          do
            v25 = j_Player::getSupplies(v5);
            v26 = (PlayerInventoryProxy *)j_Player::getSupplies(v5);
            v27 = j_PlayerInventoryProxy::getLinkedSlotsCount(v26);
            v28 = j_PlayerInventoryProxy::getItem(v25, v24 + v27, 0);
            v29 = *(_QWORD *)(v3 + 20);
            if ( (_DWORD)v29 == HIDWORD(v29) )
              j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                (unsigned __int64 *)v6,
                v28);
            else
              j_ItemInstance::ItemInstance((ItemInstance *)v29, v28);
              *(_DWORD *)(v3 + 20) += 72;
            ++v24;
          while ( v23 != v24 );
  if ( v7 )
    v57 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
    else
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


unsigned int __fastcall InventoryContentPacket::write(InventoryContentPacket *this, BinaryStream *a2)
{
  InventoryContentPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  unsigned int result; // r0@1
  __int64 i; // r6@1
  void *v6; // [sp+4h] [bp-24h]@1
  int (*v7)(void); // [sp+Ch] [bp-1Ch]@1
  const void **(__fastcall *v8)(int, int, ItemInstance *); // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_BYTE *)this + 13));
  v6 = operator new(1u);
  v7 = (int (*)(void))std::_Function_base::_Base_manager<InventoryContentPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager;
  v8 = std::_Function_handler<void ()(BinaryStream &,ItemInstance const&),InventoryContentPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_invoke;
  result = BinaryStream::writeUnsignedVarInt(
             v3,
             954437177 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3));
  for ( i = *((_QWORD *)v2 + 2); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 72 )
  {
    if ( !v7 )
      sub_21E5F48();
    result = (int)v8((int)&v6, (int)v3, (ItemInstance *)i);
  }
  if ( v7 )
    result = v7();
  return result;
}


int __fastcall InventoryContentPacket::read(InventoryContentPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  InventoryContentPacket *v3; // r5@1
  void *v5; // [sp+0h] [bp-20h]@1
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int (__fastcall *v7)(ItemInstance *, int, int); // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  v5 = operator new(1u);
  v6 = (void (*)(void))std::_Function_base::_Base_manager<InventoryContentPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v7 = std::_Function_handler<ItemInstance ()(ReadOnlyBinaryStream &),InventoryContentPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<ItemInstance>((int)v2, (__int64 *)v3 + 2, (int)&v5);
  if ( v6 )
    v6();
  return 0;
}


void __fastcall InventoryContentPacket::~InventoryContentPacket(InventoryContentPacket *this)
{
  InventoryContentPacket::~InventoryContentPacket(this);
}
