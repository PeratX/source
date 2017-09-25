

void __fastcall DropperBlockEntity::~DropperBlockEntity(DropperBlockEntity *this)
{
  DropperBlockEntity *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r7@2
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = 648;
  *(_DWORD *)this = &off_27096B4;
  *((_DWORD *)this + 28) = &off_2709750;
  do
  {
    v3 = (int)v1 + v2;
    v4 = *(void **)((char *)v1 + v2 + 204);
    if ( v4 )
      operator delete(v4);
    v5 = *(void **)(v3 + 188);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v3 + 160);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v2 -= 72;
    *(_DWORD *)(v3 + 160) = 0;
  }
  while ( v2 );
  RandomizableBlockEntityContainer::~RandomizableBlockEntityContainer(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DropperBlockEntity::pushOutItems(int result, BlockSource *a2, Container *a3)
{
  Container *v3; // r10@1
  BlockSource *v4; // r11@1
  int v5; // r6@1
  DropperBlock *v6; // r0@2
  int v7; // r1@2
  int v8; // r9@2
  int v9; // r8@2
  int v10; // r0@3
  int v11; // r5@3
  int v12; // r7@4
  int v13; // r4@4
  int v14; // r0@8
  char v15; // [sp+8h] [bp-70h]@3
  int v16; // [sp+10h] [bp-68h]@21
  void *v17; // [sp+2Ch] [bp-4Ch]@19
  void *ptr; // [sp+3Ch] [bp-3Ch]@17

  v3 = a3;
  v4 = a2;
  v5 = result;
  if ( a3 )
  {
    v6 = (DropperBlock *)BlockSource::getData(a2, (const BlockPos *)(result + 32));
    v8 = DropperBlock::getAttachedFace(v6, v7);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 140))(v5);
    v9 = result;
    if ( result != -1 )
    {
      v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 128))(v5, result);
      ItemInstance::ItemInstance((ItemInstance *)&v15, v10);
      v11 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v3 + 44))(v3);
      if ( v11 )
      {
        v12 = 0;
        v13 = Facing::OPPOSITE_FACING[v8];
        while ( DropperBlockEntity::_tryMoveInItem((DropperBlockEntity *)v5, v4, v3, (ItemInstance *)&v15, v12, v13) != 1 )
        {
          if ( v11 == ++v12 )
            goto LABEL_17;
        }
        (*(void (__fastcall **)(int, int, signed int))(*(_DWORD *)(v5 + 112) + 36))(v5 + 112, v9, 1);
        v14 = (unsigned __int8)Container::getContainerType(v3);
        switch ( v14 )
          case 0:
            BlockEntity::setChanged((Container *)((char *)v3 - 112));
            break;
          case 4:
            BlockEntity::setChanged((Container *)((char *)v3 - 104));
          case 6:
          case 7:
          case 8:
          case 1:
          case 2:
          case 3:
          case 5:
          default:
            if ( v14 == 17 )
              BlockEntity::setChanged((Container *)((char *)v3 - 112));
        (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 84))(v3, v9);
      }
LABEL_17:
      if ( ptr )
        operator delete(ptr);
      if ( v17 )
        operator delete(v17);
      result = v16;
      if ( v16 )
        result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
    }
  }
  return result;
}


signed int __fastcall DropperBlockEntity::_isFullContainer(DropperBlockEntity *this, BlockSource *a2, Container *a3, int a4)
{
  Container *v4; // r5@1
  BlockSource *v5; // r9@1
  int v6; // r8@1
  int v7; // r10@1
  int v8; // r4@2
  int v9; // r0@3
  int v10; // r6@3
  int v11; // r0@3
  bool v12; // zf@3
  signed int result; // r0@10

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
      v10 = v9;
      v11 = *(_BYTE *)(v9 + 15);
      v12 = v11 == 0;
      if ( v11 )
        v12 = *(_DWORD *)v10 == 0;
      if ( v12
        || ItemInstance::isNull((ItemInstance *)v10)
        || !*(_BYTE *)(v10 + 14)
        || !(*(int (__fastcall **)(Container *, BlockSource *, int, int))(*(_DWORD *)v4 + 76))(v4, v5, v8, v6) )
      {
        break;
      }
      if ( v7 == ++v8 )
        goto LABEL_10;
    }
    result = 0;
  }
  else
LABEL_10:
    result = 1;
  return result;
}


int __fastcall DropperBlockEntity::DropperBlockEntity(int a1, int a2, int a3)
{
  int result; // r0@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  result = DispenserBlockEntity::DispenserBlockEntity(a1, (int)&v4, a3);
  *(_DWORD *)result = &off_27097CC;
  *(_DWORD *)(result + 112) = &off_2709868;
  return result;
}


signed int __fastcall DropperBlockEntity::_tryMoveInItem(DropperBlockEntity *this, BlockSource *a2, Container *a3, ItemInstance *a4, int a5, int a6)
{
  Container *v6; // r4@1
  ItemInstance *v7; // r6@1
  int v8; // r0@2
  bool v9; // zf@2
  unsigned int v10; // r6@8
  int v11; // r0@16
  char v13; // [sp+8h] [bp-A8h]@10
  int v14; // [sp+10h] [bp-A0h]@14
  void *v15; // [sp+2Ch] [bp-84h]@12
  void *ptr; // [sp+3Ch] [bp-74h]@10
  int v17; // [sp+50h] [bp-60h]@2
  int v18; // [sp+58h] [bp-58h]@30
  unsigned __int8 v19; // [sp+5Eh] [bp-52h]@6
  char v20; // [sp+5Fh] [bp-51h]@2
  void *v21; // [sp+74h] [bp-3Ch]@28
  void *v22; // [sp+84h] [bp-2Ch]@26

  v6 = a3;
  v7 = a4;
  if ( (*(int (__fastcall **)(Container *, BlockSource *, int, int))(*(_DWORD *)a3 + 76))(a3, a2, a5, a6) != 1 )
    return 0;
  v8 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v6 + 16))(v6, a5);
  ItemInstance::ItemInstance((ItemInstance *)&v17, v8);
  v9 = v20 == 0;
  if ( v20 )
    v9 = v17 == 0;
  if ( v9 || ItemInstance::isNull((ItemInstance *)&v17) || !v19 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v13, (int)v7);
    ItemInstance::set((ItemInstance *)&v13, 1);
    (*(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v6 + 32))(v6, a5, &v13);
    if ( ptr )
      operator delete(ptr);
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
    goto LABEL_16;
  }
  if ( ItemInstance::isStackable((ItemInstance *)&v17, v7) != 1
    || (v10 = v19, v10 >= ItemInstance::getMaxStackSize((ItemInstance *)&v17)) )
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      operator delete(v21);
    if ( v18 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
  ItemInstance::set((ItemInstance *)&v17, (unsigned __int8)(v19 + 1));
  (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v6 + 32))(v6, a5, &v17);
LABEL_16:
  v11 = (unsigned __int8)Container::getContainerType(v6);
  switch ( v11 )
    case 0:
      BlockEntity::setChanged((Container *)((char *)v6 - 112));
      break;
    case 4:
      BlockEntity::setChanged((Container *)((char *)v6 - 104));
    case 6:
    case 7:
    case 8:
      if ( !Hopper::isOnCooldown((Container *)((char *)v6 + 112)) )
        Hopper::setCooldown((Container *)((char *)v6 + 112), 4);
    case 1:
    case 2:
    case 3:
    case 5:
    default:
      if ( v11 == 17 )
        BlockEntity::setChanged((Container *)((char *)v6 - 112));
  (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v6 + 84))(v6, a5);
  if ( v22 )
    operator delete(v22);
  if ( v21 )
    operator delete(v21);
  if ( v18 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
  return 1;
}


int __fastcall DropperBlockEntity::DropperBlockEntity(int a1, int a2)
{
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-Ch]@1

  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  result = DispenserBlockEntity::DispenserBlockEntity(a1, (int)&v3, 14);
  *(_DWORD *)result = &off_27097CC;
  *(_DWORD *)(result + 112) = &off_2709868;
  return result;
}


void *__fastcall DropperBlockEntity::getName(DropperBlockEntity *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *result; // r0@2

  v2 = a2;
  v3 = (int *)this;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 112) + 96))(a2 + 112) == 1 )
    result = sub_21E8AF4(v3, (int *)(v2 + 216));
  else
    result = sub_21E94B4((void **)v3, "container.dropper");
  return result;
}


int __fastcall DropperBlockEntity::_addItem(DropperBlockEntity *this, BlockSource *a2, Container *a3, ItemInstance *a4, int a5)
{
  Container *v5; // r5@1
  DropperBlockEntity *v6; // r4@1
  BlockSource *v7; // r9@1
  ItemInstance *v8; // r8@1
  int v9; // r6@1
  int v10; // r7@1

  v5 = a3;
  v6 = this;
  v7 = a2;
  v8 = a4;
  v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a3 + 44))(a3);
  v10 = 0;
  if ( v9 )
  {
    while ( DropperBlockEntity::_tryMoveInItem(v6, v7, v5, v8, v10, a5) != 1 )
    {
      if ( v9 == ++v10 )
        return 0;
    }
    v10 = 1;
  }
  return v10;
}


void __fastcall DropperBlockEntity::~DropperBlockEntity(DropperBlockEntity *this)
{
  DropperBlockEntity::~DropperBlockEntity(this);
}


int __fastcall DropperBlockEntity::getAttachedContainer(DropperBlockEntity *this, BlockSource *a2)
{
  char *v2; // r5@1
  BlockSource *v3; // r4@1
  DropperBlock *v4; // r0@1
  int v5; // r1@1
  int v6; // r6@1
  float v15; // [sp+0h] [bp-28h]@1
  float v18; // [sp+Ch] [bp-1Ch]@1

  v2 = (char *)this + 32;
  v3 = a2;
  v4 = (DropperBlock *)BlockSource::getData(a2, (DropperBlockEntity *)((char *)this + 32));
  v6 = DropperBlock::getAttachedFace(v4, v5);
  Vec3::Vec3((int)&v15, (int)v2);
  _R1 = &Facing::STEP_X[v6];
  _R0 = (DropperBlockEntity *)&Facing::STEP_Z[v6];
  __asm { VLDR            S0, [R1] }
  _R1 = &Facing::STEP_Y[v6];
  __asm
  {
    VLDR            S4, [R0]
    VLDR            S2, [R1]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VLDR            S6, [SP,#0x28+var_28]
    VLDR            S8, [SP,#0x28+var_24]
    VLDR            S10, [SP,#0x28+var_20]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x28+var_1C]
    VSTR            S2, [SP,#0x28+var_18]
    VSTR            S4, [SP,#0x28+var_14]
  }
  return DropperBlockEntity::_getContainerAt(_R0, v3, (const Vec3 *)&v18);
}


int __fastcall DropperBlockEntity::_getContainerAt(DropperBlockEntity *this, BlockSource *a2, const Vec3 *a3)
{
  BlockSource *v4; // r4@1
  BlockEntity *v5; // r0@1
  BlockEntity *v6; // r6@1
  int v7; // r0@2
  int v8; // r6@3
  char *v13; // r0@10
  char *v14; // r5@10
  char *v15; // r4@10
  int v16; // r1@10 OVERLAPPED
  int v17; // r2@10 OVERLAPPED
  signed int v18; // r0@10
  char *v19; // r0@12
  signed int v20; // r2@13
  signed int v21; // r5@14
  int v22; // r5@14
  signed int v23; // r5@17
  float v25; // [sp+0h] [bp-50h]@10
  float v26; // [sp+Ch] [bp-44h]@10
  char v27; // [sp+18h] [bp-38h]@10
  char v28; // [sp+34h] [bp-1Ch]@1

  _R5 = a3;
  v4 = a2;
  BlockPos::BlockPos((int)&v28, (int)a3);
  v5 = (BlockEntity *)BlockSource::getBlockEntity(v4, (const BlockPos *)&v28);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)BlockEntity::getType(v5);
    switch ( v7 )
    {
      case 1:
      case 8:
      case 15:
        v8 = (int)v6 + 104;
        goto LABEL_9;
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
        goto LABEL_10;
      default:
        _ZF = v7 == 25;
        if ( v7 != 25 )
          _ZF = v7 == 33;
        if ( !_ZF )
          goto LABEL_10;
LABEL_8:
        v8 = (int)v6 + 112;
LABEL_9:
        if ( !v8 )
        break;
    }
  }
  else
LABEL_10:
    __asm
      VMOV.F32        S0, #-0.5; jumptable 018A8550 cases 3-7,9-12
      VLDR            S4, [R5]
      VMOV.F32        S2, #0.5
      VLDR            S6, [R5,#4]
      VLDR            S8, [R5,#8]
      VADD.F32        S10, S4, S0
      VADD.F32        S12, S6, S0
      VADD.F32        S4, S4, S2
      VADD.F32        S6, S6, S2
      VADD.F32        S0, S8, S0
      VADD.F32        S2, S8, S2
      VSTR            S10, [SP,#0x50+var_44]
      VSTR            S12, [SP,#0x50+var_40]
      VSTR            S4, [SP,#0x50+var_50]
      VSTR            S6, [SP,#0x50+var_4C]
      VSTR            S0, [SP,#0x50+var_3C]
      VSTR            S2, [SP,#0x50+var_48]
    AABB::AABB((int)&v27, (int)&v26, (int)&v25);
    v8 = 0;
    v13 = BlockSource::fetchEntities(v4, 0, (const AABB *)&v27);
    v14 = v13;
    v15 = 0;
    *(_QWORD *)&v16 = *(_QWORD *)v13;
    v18 = v17 - v16;
    if ( 0 != (v17 - v16) >> 2 )
      if ( (unsigned int)(v18 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v19 = (char *)operator new(v18);
      *(_QWORD *)&v16 = *(_QWORD *)v14;
      v15 = v19;
    v20 = v17 - v16;
    if ( 0 == v20 >> 2 )
LABEL_17:
      v23 = 1;
    else
      v21 = v20 >> 2;
      _aeabi_memmove4(v15, v16);
      v8 = 4 * v21;
      v22 = 0;
      while ( !Entity::getContainerComponent(*(Entity **)&v15[v22]) )
      {
        v22 += 4;
        if ( v8 == v22 )
          goto LABEL_17;
      }
      v8 = *(_DWORD *)(Entity::getContainerComponent(*(Entity **)&v15[v22]) + 4);
      v23 = 0;
    if ( v15 )
      operator delete(v15);
    if ( v23 == 1 )
      v8 = 0;
  return v8;
}
