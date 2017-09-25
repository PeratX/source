

signed int __fastcall Hopper::_tryTakeInItemFromSlot(Hopper *this, BlockSource *a2, Container *a3, Container *a4, int a5, int a6)
{
  Container *v6; // r4@1
  Hopper *v7; // r9@1
  Container *v8; // r7@1
  BlockSource *v9; // r5@1
  int v10; // r0@1
  signed int v11; // r6@4
  int v12; // r10@9
  int v13; // r8@10
  int v14; // r0@16
  int v16; // [sp+10h] [bp-70h]@1
  int v17; // [sp+18h] [bp-68h]@30
  char v18; // [sp+1Eh] [bp-62h]@7
  char v19; // [sp+1Fh] [bp-61h]@1
  void *v20; // [sp+34h] [bp-4Ch]@28
  void *ptr; // [sp+44h] [bp-3Ch]@26

  v6 = a4;
  v7 = this;
  v8 = a3;
  v9 = a2;
  v10 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)a4 + 16))(a4, a5);
  ItemInstance::ItemInstance((ItemInstance *)&v16, v10);
  if ( v19 )
  {
    if ( v16 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v16) )
      {
        v11 = 0;
      }
      else if ( v18 )
        if ( (*(int (__fastcall **)(Container *, BlockSource *, int, int))(*(_DWORD *)v6 + 80))(v6, v9, a5, a6) == 1 )
        {
          v12 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v8 + 44))(v8);
          v11 = 0;
          if ( v12 )
          {
            v13 = 0;
            v11 = 0;
            while ( Hopper::_tryMoveInItem(v7, v9, v8, (ItemInstance *)&v16, v13, -1, 1) != 1 )
            {
              if ( v12 == ++v13 )
                goto LABEL_26;
            }
            v14 = Container::getContainerType(v6);
            switch ( v14 )
              case 4:
                BlockEntity::setChanged((Container *)((char *)v6 - 104));
                break;
              case 6:
                BlockEntity::setChanged((Container *)((char *)v6 - 112));
              case 7:
              case 8:
              case 10:
                *((_BYTE *)v7 + 4) = 1;
              case 17:
              case 5:
              case 9:
              case 11:
              case 12:
              case 13:
              case 14:
              case 15:
              case 16:
              default:
                if ( !(_BYTE)v14 )
                  BlockEntity::setChanged((Container *)((char *)v6 - 112));
            (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v6 + 32))(v6, a5, &v16);
            (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v6 + 84))(v6, a5);
            v11 = 1;
          }
        }
        else
      else
    }
    else
      v11 = 0;
  }
  else
    v11 = 0;
LABEL_26:
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v17 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 4))(v17);
  return v11;
}


signed int __fastcall Hopper::_tryMoveInItem(Hopper *this, BlockSource *a2, Container *a3, ItemInstance *a4, int a5, int a6, int a7)
{
  Container *v7; // r4@1
  Hopper *v8; // r8@1
  ItemInstance *v9; // r6@1
  BlockSource *v10; // r7@1
  int v11; // r0@2
  bool v12; // zf@2
  int v13; // r10@8
  int v15; // r0@22
  Level *v16; // r0@29
  __int64 *v17; // r0@29
  int v18; // r10@37
  char v19; // r9@38
  unsigned __int8 v20; // r10@38
  int v21; // r0@38
  char v22; // [sp+8h] [bp-B8h]@16
  int v23; // [sp+10h] [bp-B0h]@20
  void *v24; // [sp+2Ch] [bp-94h]@18
  void *v25; // [sp+3Ch] [bp-84h]@16
  int v26; // [sp+50h] [bp-70h]@2
  int v27; // [sp+58h] [bp-68h]@13
  unsigned __int8 v28; // [sp+5Eh] [bp-62h]@6
  char v29; // [sp+5Fh] [bp-61h]@2
  void *v30; // [sp+74h] [bp-4Ch]@11
  void *ptr; // [sp+84h] [bp-3Ch]@9

  v7 = a3;
  v8 = this;
  v9 = a4;
  v10 = a2;
  if ( (*(int (__fastcall **)(Container *))(*(_DWORD *)a3 + 76))(a3) != 1 )
    return 0;
  v11 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v7 + 16))(v7, a5);
  ItemInstance::ItemInstance((ItemInstance *)&v26, v11);
  v12 = v29 == 0;
  if ( v29 )
    v12 = v26 == 0;
  if ( v12 || ItemInstance::isNull((ItemInstance *)&v26) || !v28 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v22, (int)v9);
    ItemInstance::set((ItemInstance *)&v22, a7);
    (*(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v7 + 32))(v7, a5, &v22);
    ItemInstance::remove(v9, a7);
    if ( v25 )
      operator delete(v25);
    if ( v24 )
      operator delete(v24);
    if ( v23 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v23 + 4))(v23);
  }
  else
    if ( ItemInstance::isStackable((ItemInstance *)&v26, v9) != 1
      || (v13 = v28, v13 == ItemInstance::getMaxStackSize((ItemInstance *)&v26)) )
    {
      if ( ptr )
        operator delete(ptr);
      if ( v30 )
        operator delete(v30);
      if ( v27 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v27 + 4))(v27);
      return 0;
    }
    v18 = v28;
    if ( v18 + a7 <= ItemInstance::getMaxStackSize((ItemInstance *)&v26) )
      ItemInstance::set((ItemInstance *)&v26, (unsigned __int8)(v28 + a7));
      ItemInstance::remove(v9, a7);
    else
      v19 = ItemInstance::getMaxStackSize((ItemInstance *)&v26);
      v20 = v28;
      v21 = ItemInstance::getMaxStackSize((ItemInstance *)&v26);
      ItemInstance::set((ItemInstance *)&v26, v21);
      ItemInstance::remove(v9, (unsigned __int8)(v19 - v20));
    (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v7 + 32))(v7, a5, &v26);
  v15 = (unsigned __int8)Container::getContainerType(v7);
  switch ( v15 )
    case 0:
      BlockEntity::setChanged((Container *)((char *)v7 - 112));
      break;
    case 4:
      BlockEntity::setChanged((Container *)((char *)v7 - 104));
    case 6:
    case 7:
    case 8:
      v16 = (Level *)BlockSource::getLevel(v10);
      v17 = (__int64 *)Level::getCurrentTick(v16);
      HopperBlockEntity::updateCooldownAfterMove((Container *)((char *)v7 - 104), v17, *((_DWORD *)v8 + 2));
    case 1:
    case 2:
    case 3:
    case 5:
    default:
      if ( v15 == 17 )
        BlockEntity::setChanged((Container *)((char *)v7 - 112));
  (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v7 + 84))(v7, a5);
  if ( ptr )
    operator delete(ptr);
  if ( v30 )
    operator delete(v30);
  if ( v27 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v27 + 4))(v27);
  return 1;
}


int __fastcall Hopper::setMoveItemSpeed(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


BlockEntity *__fastcall Hopper::_getContainerAt(Hopper *this, BlockSource *a2, const Vec3 *a3)
{
  BlockSource *v4; // r5@1
  BlockEntity *v5; // r0@1
  BlockEntity *v6; // r6@1
  int v7; // r0@2
  int v8; // r4@3
  char *v14; // r0@9
  char *v15; // r6@9
  char *v16; // r5@9
  int v17; // r1@9 OVERLAPPED
  int v18; // r2@9 OVERLAPPED
  signed int v19; // r0@9
  char *v20; // r0@11
  signed int v21; // r2@12
  signed int v22; // r4@13
  int v23; // r6@13
  int v24; // r7@13
  ContainerComponent *v25; // r0@14
  ContainerComponent *v26; // r4@14
  float v28; // [sp+0h] [bp-48h]@9
  char v29; // [sp+Ch] [bp-3Ch]@9
  char v30; // [sp+28h] [bp-20h]@1

  _R4 = a3;
  v4 = a2;
  BlockPos::BlockPos((int)&v30, (int)a3);
  v5 = (BlockEntity *)BlockSource::getBlockEntity(v4, (const BlockPos *)&v30);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)BlockEntity::getType(v5);
    switch ( v7 )
    {
      case 1:
      case 8:
      case 15:
        return (BlockEntity *)((char *)v6 + 104);
      case 2:
      case 13:
      case 14:
        goto LABEL_8;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11:
      case 12:
        goto LABEL_9;
      default:
        _ZF = v7 == 25;
        if ( v7 != 25 )
          _ZF = v7 == 33;
        if ( !_ZF )
          goto LABEL_9;
LABEL_8:
        v8 = (int)v6 + 112;
        break;
    }
  }
  else
LABEL_9:
    __asm
      VLDR            S0, [R4]
      VLDR            S2, [R4,#4]
      VLDR            S4, [R4,#8]
    _R0 = &Vec3::ONE;
      VLDR            S6, [R0]
      VLDR            S8, [R0,#4]
      VLDR            S10, [R0,#8]
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x48+var_48]
      VSTR            S2, [SP,#0x48+var_44]
      VSTR            S4, [SP,#0x48+var_40]
    AABB::AABB((int)&v29, (int)_R4, (int)&v28);
    v8 = 0;
    v14 = BlockSource::fetchEntities(v4, 0, (const AABB *)&v29);
    v15 = v14;
    v16 = 0;
    *(_QWORD *)&v17 = *(_QWORD *)v14;
    v19 = v18 - v17;
    if ( 0 != (v18 - v17) >> 2 )
      if ( (unsigned int)(v19 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v20 = (char *)operator new(v19);
      *(_QWORD *)&v17 = *(_QWORD *)v15;
      v16 = v20;
    v21 = v18 - v17;
    if ( 0 != v21 >> 2 )
      v22 = v21 >> 2;
      _aeabi_memmove4(v16, v17);
      v23 = 4 * v22;
      v24 = 0;
      while ( 1 )
      {
        v25 = (ContainerComponent *)Entity::getContainerComponent(*(Entity **)&v16[v24]);
        v26 = v25;
        if ( v25 )
        {
          if ( ContainerComponent::canBeSiphonedFrom(v25) )
            break;
        }
        v24 += 4;
        if ( v23 == v24 )
          v8 = 0;
          goto LABEL_19;
      }
      v8 = *((_DWORD *)v26 + 1);
LABEL_19:
    if ( v16 )
      operator delete(v16);
  return (BlockEntity *)v8;
}


int __fastcall Hopper::_getItemAt(Hopper *this, BlockSource *a2, const Vec3 *_R2)
{
  BlockSource *v7; // r5@1
  void *v9; // r4@1
  _QWORD *v10; // r0@1
  _QWORD *v11; // r5@1
  int v12; // r1@1 OVERLAPPED
  int v13; // r2@1 OVERLAPPED
  signed int v14; // r0@1
  void *v15; // r0@3
  int v16; // r5@5
  signed int v18; // [sp+0h] [bp-60h]@1
  signed int v19; // [sp+4h] [bp-5Ch]@1
  int v20; // [sp+8h] [bp-58h]@1
  float v21; // [sp+Ch] [bp-54h]@1
  char v22; // [sp+18h] [bp-48h]@1
  char v23; // [sp+34h] [bp-2Ch]@1

  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R2,#4]
    VLDR            S4, [R2,#8]
  }
  v7 = a2;
  _R0 = &Vec3::ONE;
    VLDR            S6, [R0]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x60+var_54]
    VSTR            S2, [SP,#0x60+var_50]
    VSTR            S4, [SP,#0x60+var_4C]
  AABB::AABB((int)&v22, (int)_R2, (int)&v21);
  v18 = 953267991;
  v19 = 953267991;
  v20 = 953267991;
  AABB::shrink((AABB *)&v23, (const Vec3 *)&v22, (int)&v18);
  v9 = 0;
  v10 = (_QWORD *)BlockSource::fetchEntities((int)v7, 64, (int)&v23, 0);
  v11 = v10;
  *(_QWORD *)&v12 = *v10;
  v14 = v13 - v12;
  if ( 0 != (v13 - v12) >> 2 )
    if ( (unsigned int)(v14 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v15 = operator new(v14);
    *(_QWORD *)&v12 = *v11;
    v9 = v15;
  if ( v13 == v12 )
    v16 = 0;
    if ( !v9 )
      return v16;
  else
    _aeabi_memmove4(v9, v12);
    v16 = *(_DWORD *)v9;
  operator delete(v9);
  return v16;
}


signed int __fastcall Hopper::_isEmptyContainer(Hopper *this, Container *a2, int a3)
{
  Container *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@2
  int v6; // r0@3
  int v7; // r7@3
  int v8; // r0@3
  bool v9; // zf@3
  signed int result; // r0@9

  v3 = a2;
  v4 = (*(int (__fastcall **)(Container *))(*(_DWORD *)a2 + 44))(a2);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 16))(v3, v5);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( !v9 && !ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
        break;
      if ( v4 == ++v5 )
        goto LABEL_9;
    }
    result = 0;
  }
  else
LABEL_9:
    result = 1;
  return result;
}


signed int __fastcall Hopper::_tryMoveItems(Hopper *this, BlockSource *a2, Container *a3, const Vec3 *a4, __int64 a5)
{
  BlockSource *v5; // r11@1
  Hopper *v6; // r10@1
  const Vec3 *v7; // r9@1
  Container *v8; // r6@1
  Level *v9; // r0@1
  Hopper *v10; // r0@2
  int v11; // r7@2
  Hopper *v12; // r4@2
  Hopper *v13; // r5@3
  int v14; // r0@4
  int v15; // r7@4
  bool v16; // zf@4

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v9) )
  {
    v10 = (Hopper *)HIDWORD(a5);
    v11 = a5;
    v12 = 0;
    if ( HIDWORD(a5) == 1 )
    {
      v10 = (Hopper *)(*(int (__fastcall **)(Container *))(*(_DWORD *)v8 + 44))(v8);
      v13 = v10;
      v12 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v14 = (*(int (__fastcall **)(Container *, Hopper *))(*(_DWORD *)v8 + 16))(v8, v12);
          v15 = v14;
          v10 = (Hopper *)*(_BYTE *)(v14 + 15);
          v16 = v10 == 0;
          if ( v10 )
          {
            v10 = *(Hopper **)v15;
            v16 = *(_DWORD *)v15 == 0;
          }
          if ( !v16 )
            v10 = (Hopper *)ItemInstance::isNull((ItemInstance *)v15);
            if ( !v10 )
            {
              v10 = (Hopper *)*(_BYTE *)(v15 + 14);
              if ( *(_BYTE *)(v15 + 14) )
                break;
            }
          v12 = (Hopper *)((char *)v12 + 1);
          if ( v13 == v12 )
            v12 = 0;
            v11 = a5;
            goto LABEL_12;
        }
        v11 = a5;
        v10 = (Hopper *)Hopper::_pushOutItems(v6, v5, v8, v7, a5);
        v12 = v10;
      }
    }
LABEL_12:
    *((_BYTE *)v6 + 4) = 0;
    if ( Hopper::_isFullContainer(v10, v5, v8, v11) )
      if ( v12 == (Hopper *)1 )
        goto LABEL_16;
    else if ( Hopper::_pullInItems(v6, v5, v8, v7) | (unsigned int)v12 )
LABEL_16:
      *(_DWORD *)v6 = *((_DWORD *)v6 + 2);
      return 1;
  }
  return 0;
}


signed int __fastcall Hopper::_pullInItems(Hopper *this, BlockSource *a2, Container *a3, const Vec3 *a4)
{
  Hopper *v8; // r10@1
  Hopper *v9; // r0@1
  Container *v10; // r9@1
  BlockSource *v11; // r8@1
  BlockEntity *v12; // r0@1
  Container *v13; // r7@1
  int v14; // r4@2
  int v15; // r5@3
  int v16; // r0@4
  int v17; // r6@4
  int v18; // r0@4
  signed int result; // r0@10
  int v21; // r0@12
  int v22; // r7@12
  Hopper *v23; // r0@16
  int v24; // r0@16
  int v25; // r6@16
  Hopper *v26; // r0@19
  int v27; // r0@19
  int v28; // r4@22
  int v29; // r6@23
  BlockSource *v30; // r8@28
  int v31; // r5@28
  int v32; // r4@28
  int v33; // r11@29
  BlockSource *v34; // r8@35
  int v35; // r5@35
  int v36; // r4@35
  int v37; // r11@36
  BlockSource *v38; // r8@42
  int v39; // r5@42
  int v40; // r4@42
  int v41; // r11@43
  void (__fastcall *v42)(int); // r1@50
  int v43; // r0@50
  int v44; // [sp+Ch] [bp-54h]@16
  Hopper *v45; // [sp+14h] [bp-4Ch]@16
  int v46; // [sp+18h] [bp-48h]@19
  Hopper *v47; // [sp+20h] [bp-40h]@19
  int v48; // [sp+24h] [bp-3Ch]@1
  Hopper *v49; // [sp+2Ch] [bp-34h]@1

  __asm { VMOV.F32        S16, #1.0 }
  _R4 = a4;
  __asm { VLDR            S0, [R4,#4] }
  v8 = this;
  v9 = (Hopper *)*((_DWORD *)a4 + 2);
  v10 = a3;
  v11 = a2;
  v48 = *(_DWORD *)a4;
  __asm
  {
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0x60+var_38]
  }
  v49 = v9;
  v12 = Hopper::_getContainerAt(v9, a2, (const Vec3 *)&v48);
  v13 = v12;
  if ( !v12 )
    if ( *((_BYTE *)v8 + 5) )
    {
      v21 = Hopper::_getItemAt((Hopper *)*((_BYTE *)v8 + 5), v11, _R4);
      v22 = v21;
      if ( v21 )
      {
        if ( ItemInstance::isNull((ItemInstance *)(v21 + 3416)) )
          return 0;
        if ( !*(_BYTE *)(v22 + 3430) )
        v30 = (BlockSource *)Entity::getRegion((Entity *)v22);
        v31 = *(_BYTE *)(v22 + 3430);
        v32 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v10 + 44))(v10);
        result = 0;
        if ( !v32 )
          return result;
        v33 = 0;
        while ( Hopper::_tryMoveInItem(v8, v30, v10, (ItemInstance *)(v22 + 3416), v33, -1, v31) != 1 )
        {
          ++v33;
          result = 0;
          if ( v32 == v33 )
            return result;
        }
        if ( *(_BYTE *)(v22 + 3430) )
          return 1;
        v42 = *(void (__fastcall **)(int))(*(_DWORD *)v22 + 44);
        v43 = v22;
        goto LABEL_53;
      }
      __asm { VLDR            S0, [R4,#4] }
      v26 = (Hopper *)*((_DWORD *)_R4 + 2);
      __asm { VADD.F32        S0, S0, S16 }
      v46 = *(_DWORD *)_R4;
      __asm { VSTR            S0, [SP,#0x60+var_44] }
      v47 = v26;
      v27 = Hopper::_getItemAt(v26, v11, (const Vec3 *)&v46);
      v25 = v27;
      if ( !v27 )
        return 0;
      if ( ItemInstance::isNull((ItemInstance *)(v27 + 3416)) )
      if ( !*(_BYTE *)(v25 + 3430) )
      v38 = (BlockSource *)Entity::getRegion((Entity *)v25);
      v39 = *(_BYTE *)(v25 + 3430);
      v40 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v10 + 44))(v10);
      result = 0;
      if ( !v40 )
        return result;
      v41 = 0;
      while ( Hopper::_tryMoveInItem(v8, v38, v10, (ItemInstance *)(v25 + 3416), v41, -1, v39) != 1 )
        ++v41;
        if ( v40 == v41 )
    }
    else
      __asm
        VMOV.F32        S0, #0.625
        VLDR            S2, [R4,#4]
      v23 = (Hopper *)*((_DWORD *)_R4 + 2);
      v44 = *(_DWORD *)_R4;
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x60+var_50]
      v45 = v23;
      v24 = Hopper::_getItemAt(v23, v11, (const Vec3 *)&v44);
      v25 = v24;
      if ( !v24 )
      if ( ItemInstance::isNull((ItemInstance *)(v24 + 3416)) )
      v34 = (BlockSource *)Entity::getRegion((Entity *)v25);
      v35 = *(_BYTE *)(v25 + 3430);
      v36 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 44))(v10);
      if ( !v36 )
      v37 = 0;
      while ( Hopper::_tryMoveInItem(v8, v34, v10, (ItemInstance *)(v25 + 3416), v37, -1, v35) != 1 )
        ++v37;
        if ( v36 == v37 )
    if ( *(_BYTE *)(v25 + 3430) )
      return 1;
    v42 = *(void (__fastcall **)(int))(*(_DWORD *)v25 + 44);
    v43 = v25;
LABEL_53:
    v42(v43);
    return 1;
  v14 = (*(int (**)(void))(*(_DWORD *)v12 + 44))();
  if ( !v14 )
    return 0;
  v15 = 0;
  while ( 1 )
    v16 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v13 + 16))(v13, v15);
    v17 = v16;
    v18 = *(_BYTE *)(v16 + 15);
    _ZF = v18 == 0;
    if ( v18 )
      _ZF = *(_DWORD *)v17 == 0;
    if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v17) && *(_BYTE *)(v17 + 14) )
      break;
    if ( v14 == ++v15 )
      return 0;
  v28 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v13 + 44))(v13);
  result = 0;
  if ( v28 )
    v29 = 0;
    while ( !Hopper::_tryTakeInItemFromSlot(v8, v11, v10, v13, v29, 0) )
      ++v29;
      if ( v28 == v29 )
  return result;
}


int __fastcall Hopper::Hopper(int result, int a2, char a3)
{
  *(_DWORD *)result = -1;
  *(_BYTE *)(result + 4) = 0;
  *(_BYTE *)(result + 5) = a3;
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall Hopper::_addItem(Hopper *this, BlockSource *a2, Container *a3, ItemInstance *a4, int a5, int a6)
{
  Container *v6; // r5@1
  Hopper *v7; // r4@1
  BlockSource *v8; // r9@1
  ItemInstance *v9; // r8@1
  int v10; // r6@1
  int v11; // r7@1

  v6 = a3;
  v7 = this;
  v8 = a2;
  v9 = a4;
  v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a3 + 44))(a3);
  v11 = 0;
  if ( v10 )
  {
    while ( Hopper::_tryMoveInItem(v7, v8, v6, v9, v11, a5, a6) != 1 )
    {
      if ( v10 == ++v11 )
        return 0;
    }
    v11 = 1;
  }
  return v11;
}


signed int __fastcall Hopper::isOnCooldown(Hopper *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)this;
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


int __fastcall Hopper::setCooldown(int result, int a2)
{
  *(_DWORD *)result = a2;
  return result;
}


signed int __fastcall Hopper::_isFullContainer(Hopper *this, BlockSource *a2, Container *a3, int a4)
{
  Container *v4; // r5@1
  BlockSource *v5; // r9@1
  int v6; // r8@1
  int v7; // r7@1
  int v8; // r4@2
  int v9; // r0@3
  int v10; // r6@3
  bool v11; // zf@3
  __int64 v12; // r0@6
  unsigned int v13; // r6@6
  signed int result; // r0@23
  int v15; // [sp+8h] [bp-68h]@3
  int v16; // [sp+10h] [bp-60h]@17
  unsigned __int8 v17; // [sp+16h] [bp-5Ah]@6
  char v18; // [sp+17h] [bp-59h]@3
  void *v19; // [sp+2Ch] [bp-44h]@15
  void *ptr; // [sp+3Ch] [bp-34h]@13

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = (*(int (__fastcall **)(Container *))(*(_DWORD *)a3 + 44))(a3);
  if ( v7 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v4 + 16))(v4, v8);
      ItemInstance::ItemInstance((ItemInstance *)&v15, v9);
      v10 = 1;
      v11 = v18 == 0;
      if ( v18 )
        v11 = v15 == 0;
      if ( !v11 )
      {
        v12 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v15);
        v13 = v17;
        if ( !v17 )
          HIDWORD(v12) = 1;
        if ( v12 )
        {
          v10 = 1;
        }
        else if ( v13 >= ItemInstance::getMaxStackSize((ItemInstance *)&v15) )
          v10 = (*(int (__fastcall **)(Container *, BlockSource *, int, int))(*(_DWORD *)v4 + 76))(v4, v5, v8, v6) ^ 1;
        else
      }
      if ( ptr )
        operator delete(ptr);
      if ( v19 )
        operator delete(v19);
      if ( v16 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
      if ( v10 )
        break;
      if ( v7 == ++v8 )
        v10 = 2;
    }
  }
  else
    v10 = 2;
  result = 0;
  if ( v10 == 2 )
    result = 1;
  return result;
}


BlockEntity *__fastcall Hopper::_getAttachedContainer(Hopper *this, BlockSource *a2, const Vec3 *_R2, int a4)
{
  float v12; // [sp+4h] [bp-14h]@1

  _R4 = &Facing::STEP_Z[a4];
  _R0 = &Facing::STEP_X[a4];
  __asm
  {
    VLDR            S4, [R4]
    VLDR            S0, [R0]
  }
  _R0 = (Hopper *)&Facing::STEP_Y[a4];
    VLDR            S2, [R0]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VLDR            S6, [R2]
    VLDR            S8, [R2,#4]
    VLDR            S10, [R2,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x18+var_14]
    VSTR            S2, [SP,#0x18+var_10]
    VSTR            S4, [SP,#0x18+var_C]
  return Hopper::_getContainerAt(_R0, a2, (const Vec3 *)&v12);
}


int __fastcall Hopper::_addItem(Hopper *this, Container *a2, ItemEntity *a3)
{
  ItemEntity *v3; // r8@1
  ItemInstance *v4; // r7@1
  Hopper *v5; // r9@1
  Container *v6; // r5@1
  int v7; // r4@2
  BlockSource *v8; // r10@4
  int v9; // r11@4
  int v10; // r6@4

  v3 = a3;
  v4 = (ItemEntity *)((char *)a3 + 3416);
  v5 = this;
  v6 = a2;
  if ( ItemInstance::isNull((ItemEntity *)((char *)a3 + 3416)) )
  {
    v7 = 0;
  }
  else if ( *((_BYTE *)v3 + 3430) )
    v8 = (BlockSource *)Entity::getRegion(v3);
    v9 = *((_BYTE *)v3 + 3430);
    v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 44))(v6);
    if ( v10 )
    {
      while ( Hopper::_tryMoveInItem(v5, v8, v6, v4, v7, -1, v9) != 1 )
      {
        if ( v10 == ++v7 )
          return 0;
      }
      if ( !*((_BYTE *)v3 + 3430) )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 44))(v3);
      v7 = 1;
    }
  else
  return v7;
}


BlockEntity *__fastcall Hopper::_getSourceContainer(Hopper *this, BlockSource *a2, const Vec3 *_R2)
{
  Hopper *v7; // r0@1
  int v9; // [sp+4h] [bp-14h]@1
  Hopper *v10; // [sp+Ch] [bp-Ch]@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R2,#4]
  }
  v7 = (Hopper *)*((_DWORD *)_R2 + 2);
  v9 = *(_DWORD *)_R2;
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x18+var_10]
  v10 = v7;
  return Hopper::_getContainerAt(v7, a2, (const Vec3 *)&v9);
}


signed int __fastcall Hopper::_pushOutItems(Hopper *this, BlockSource *a2, Container *a3, const Vec3 *_R3, int a5)
{
  BlockSource *v5; // r5@1
  Container *v6; // r8@1
  Hopper *v7; // r6@1
  BlockEntity *v14; // r0@1
  Container *v15; // r7@1
  int v16; // r4@2
  signed int result; // r0@3
  int v18; // r11@5
  unsigned int *v19; // r12@8
  signed int v20; // r1@10
  unsigned int *v21; // r12@12
  signed int v22; // r1@14
  unsigned int *v23; // r12@16
  signed int v24; // r1@18
  int v25; // r0@32
  int v26; // r10@32
  __int64 v28; // r0@35
  int v29; // r9@39
  int v30; // r0@43
  Level *v31; // r0@45
  int v32; // r0@45
  void *v33; // r0@45
  void *v34; // r0@46
  void *v35; // r0@47
  Level *v36; // r0@54
  __int64 *v37; // r0@54
  bool v38; // zf@62
  BlockEntity *v39; // [sp+1Ch] [bp-C4h]@5
  BlockEntity *v40; // [sp+20h] [bp-C0h]@5
  int v41; // [sp+24h] [bp-BCh]@4
  void **v42; // [sp+28h] [bp-B8h]@45
  int v43; // [sp+60h] [bp-80h]@16
  int v44; // [sp+64h] [bp-7Ch]@12
  int v45; // [sp+68h] [bp-78h]@8
  float v46; // [sp+70h] [bp-70h]@1
  _DWORD *v47; // [sp+78h] [bp-68h]@60
  char v48; // [sp+7Eh] [bp-62h]@35
  char v49; // [sp+7Fh] [bp-61h]@32
  void *v50; // [sp+94h] [bp-4Ch]@58
  void *ptr; // [sp+A4h] [bp-3Ch]@56

  v5 = a2;
  v6 = a3;
  v7 = this;
  _R1 = &Facing::STEP_X[a5];
  __asm { VLDR            S0, [R1] }
  _R1 = &Facing::STEP_Y[a5];
  _R0 = (Hopper *)&Facing::STEP_Z[a5];
  __asm
  {
    VLDR            S2, [R1]
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R0]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VLDR            S6, [R3]
    VLDR            S8, [R3,#4]
    VLDR            S10, [R3,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0xE0+var_70]
    VSTR            S2, [SP,#0xE0+var_6C]
    VSTR            S4, [SP,#0xE0+var_68]
  }
  v14 = Hopper::_getContainerAt(_R0, v5, (const Vec3 *)&v46);
  v15 = v14;
  if ( v14
    && (v16 = Facing::OPPOSITE_FACING[a5], !Hopper::_isFullContainer((Hopper *)Facing::OPPOSITE_FACING, v5, v14, v16)) )
    v41 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v6 + 44))(v6);
    if ( v41 )
    {
      v40 = (Container *)((char *)v15 - 112);
      v39 = (Container *)((char *)v15 - 104);
      v18 = 0;
      while ( 1 )
      {
        v25 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v6 + 16))(v6, v18);
        ItemInstance::ItemInstance((ItemInstance *)&v46, v25);
        v26 = 3;
        _ZF = v49 == 0;
        if ( v49 )
          _ZF = LODWORD(v46) == 0;
        if ( !_ZF )
        {
          v28 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v46);
          if ( !v48 )
            HIDWORD(v28) = 1;
          if ( v28 )
          {
            v26 = 3;
          }
          else
            v29 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v15 + 44))(v15);
            v26 = 0;
            if ( v29 )
            {
              while ( Hopper::_tryMoveInItem(v7, v5, v15, (ItemInstance *)&v46, v26, v16, 1) != 1 )
              {
                if ( v29 == ++v26 )
                {
                  v26 = 0;
                  goto LABEL_56;
                }
              }
              v30 = (unsigned __int8)Container::getContainerType(v15);
              switch ( v30 )
                case 0:
                  if ( *((_BYTE *)v7 + 4) )
                  {
                    EventPacket::EventPacket((int)&v42, 0, 52, 0);
                    v31 = (Level *)BlockSource::getLevel(v5);
                    v32 = Level::getPacketSender(v31);
                    (*(void (**)(void))(*(_DWORD *)v32 + 8))();
                    v42 = &off_26E9D30;
                    v33 = (void *)(v45 - 12);
                    if ( (int *)(v45 - 12) != &dword_28898C0 )
                    {
                      v19 = (unsigned int *)(v45 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v20 = __ldrex(v19);
                        while ( __strex(v20 - 1, v19) );
                      }
                      else
                        v20 = (*v19)--;
                      if ( v20 <= 0 )
                        j_j_j_j__ZdlPv_9(v33);
                    }
                    v34 = (void *)(v44 - 12);
                    if ( (int *)(v44 - 12) != &dword_28898C0 )
                      v21 = (unsigned int *)(v44 - 4);
                          v22 = __ldrex(v21);
                        while ( __strex(v22 - 1, v21) );
                        v22 = (*v21)--;
                      if ( v22 <= 0 )
                        j_j_j_j__ZdlPv_9(v34);
                    v35 = (void *)(v43 - 12);
                    if ( (int *)(v43 - 12) != &dword_28898C0 )
                      v23 = (unsigned int *)(v43 - 4);
                          v24 = __ldrex(v23);
                        while ( __strex(v24 - 1, v23) );
                        v24 = (*v23)--;
                      if ( v24 <= 0 )
                        j_j_j_j__ZdlPv_9(v35);
                  }
                  BlockEntity::setChanged(v40);
                  break;
                case 4:
                  BlockEntity::setChanged(v39);
                case 6:
                case 7:
                case 8:
                  v36 = (Level *)BlockSource::getLevel(v5);
                  v37 = (__int64 *)Level::getCurrentTick(v36);
                  HopperBlockEntity::updateCooldownAfterMove(v39, v37, 4);
                case 1:
                case 2:
                case 3:
                case 5:
                default:
                  if ( v30 == 17 )
                    BlockEntity::setChanged(v40);
              (*(void (__fastcall **)(Container *, int, float *))(*(_DWORD *)v6 + 32))(v6, v18, &v46);
              (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v15 + 84))(v15, v18);
              (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v6 + 84))(v6, v18);
              v26 = 1;
            }
        }
LABEL_56:
        if ( ptr )
          operator delete(ptr);
        if ( v50 )
          operator delete(v50);
        if ( *(float *)&v47 != 0.0 )
          (*(void (**)(void))(*v47 + 4))();
        v38 = v26 == 3;
        if ( v26 != 3 )
          v38 = v26 == 0;
        if ( !v38 )
          break;
        if ( ++v18 == v41 )
          goto LABEL_66;
      }
    }
    else
LABEL_66:
      v26 = 2;
    result = 0;
    if ( v26 != 2 )
      result = 1;
  else
  return result;
}
