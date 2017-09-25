

void __fastcall FlintAndSteelItem::~FlintAndSteelItem(FlintAndSteelItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


Item *__fastcall FlintAndSteelItem::FlintAndSteelItem(int a1, const void **a2, __int16 a3)
{
  Item *v3; // r4@1

  v3 = (Item *)a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2721580;
  j_Item::setMaxStackSize(v3, 1u);
  (*(void (__fastcall **)(Item *, signed int))(*(_DWORD *)v3 + 28))(v3, 64);
  return v3;
}


signed int __fastcall FlintAndSteelItem::dispense(FlintAndSteelItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  BlockSource *v6; // r5@1
  int v7; // r8@1
  Container *v8; // r7@1
  Block *v9; // r6@1
  BlockPos *v10; // r1@2
  char *v11; // r2@2
  int v12; // r0@2
  BlockState *v13; // r0@4
  __int64 v14; // r9@4
  int v15; // r0@5
  ItemInstance *v16; // r0@5
  Player *v17; // r0@5
  int v18; // r2@5
  int v19; // r3@5
  __int64 v20; // r2@5
  Player *v21; // r0@11
  int v22; // r2@11
  int v23; // r3@11
  __int64 v24; // r2@11
  int v26; // [sp+8h] [bp-A8h]@11
  int v27; // [sp+Ch] [bp-A4h]@11
  int v28; // [sp+10h] [bp-A0h]@11
  int v29; // [sp+18h] [bp-98h]@5
  int v30; // [sp+1Ch] [bp-94h]@5
  int v31; // [sp+20h] [bp-90h]@5
  char v32; // [sp+28h] [bp-88h]@5
  int v33; // [sp+30h] [bp-80h]@9
  void *v34; // [sp+4Ch] [bp-64h]@7
  void *ptr; // [sp+5Ch] [bp-54h]@5
  char v36; // [sp+70h] [bp-40h]@4
  char v37; // [sp+74h] [bp-3Ch]@2
  char v38; // [sp+78h] [bp-38h]@1
  char v39; // [sp+84h] [bp-2Ch]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  j_BlockPos::BlockPos((int)&v39, (int)a5);
  j_BlockPos::BlockPos((int)&v38, (int)a5);
  v9 = (Block *)j_BlockSource::getBlock(v6, (const BlockPos *)&v38);
  if ( j_Block::isType(v9, (const Block *)Block::mAir) == 1 )
  {
    v10 = (BlockPos *)&v39;
    v11 = &v37;
    v37 = *(_BYTE *)(Block::mFire + 4);
    v12 = (int)v6;
  }
  else
    if ( j_Block::isType(v9, (const Block *)Block::mTNT) != 1 )
    {
      v21 = (Player *)j_BlockSource::getLevel(v6);
      v22 = *((_DWORD *)a5 + 1);
      v23 = *((_DWORD *)a5 + 2);
      v26 = *(_DWORD *)a5;
      v27 = v22;
      v28 = v23;
      LODWORD(v24) = &v26;
      HIDWORD(v24) = 1200;
      j_Level::broadcastLevelEvent(v21, 1001, v24, 0);
      return 1;
    }
    v13 = (BlockState *)j_Block::getBlockState(Block::mTNT, 14);
    v14 = *(_QWORD *)v13;
    j_BlockState::getMask(v13);
    (*(void (__fastcall **)(Block *, BlockSource *, char *, _DWORD))(*(_DWORD *)v9 + 240))(
      v9,
      v6,
      &v39,
      (unsigned __int8)(1 << (v14 + 1 - BYTE4(v14))));
    v11 = &v36;
    v36 = BlockID::AIR;
  j_BlockSource::setBlock(v12, v10, v11, 3);
  v15 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v8 + 16))(v8, v7);
  v16 = j_ItemInstance::ItemInstance((ItemInstance *)&v32, v15);
  j_ItemInstance::hurtAndBreak(v16, 1, 0);
  (*(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v8 + 32))(v8, v7, &v32);
  v17 = (Player *)j_BlockSource::getLevel(v6);
  v18 = *((_DWORD *)a5 + 1);
  v19 = *((_DWORD *)a5 + 2);
  v29 = *(_DWORD *)a5;
  v30 = v18;
  v31 = v19;
  LODWORD(v20) = &v29;
  HIDWORD(v20) = 1000;
  j_Level::broadcastLevelEvent(v17, 1000, v20, 0);
  if ( ptr )
    j_operator delete(ptr);
  if ( v34 )
    j_operator delete(v34);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  return 1;
}


signed int __fastcall FlintAndSteelItem::_calculatePlacePos(FlintAndSteelItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  int v5; // r1@2
  int v6; // r1@3
  int v8; // r1@6

  switch ( *a4 )
  {
    case 0:
      v5 = *((_DWORD *)a5 + 1) - 1;
      goto LABEL_5;
    case 1:
      v5 = *((_DWORD *)a5 + 1) + 1;
LABEL_5:
      *((_DWORD *)a5 + 1) = v5;
      return 1;
    case 2:
      v8 = *((_DWORD *)a5 + 2) - 1;
      goto LABEL_8;
    case 3:
      v8 = *((_DWORD *)a5 + 2) + 1;
LABEL_8:
      *((_DWORD *)a5 + 2) = v8;
    case 4:
      v6 = *(_DWORD *)a5 - 1;
      break;
    default:
      v6 = *(_DWORD *)a5 + 1;
  }
  *(_DWORD *)a5 = v6;
  return 1;
}


int __fastcall FlintAndSteelItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r4@1
  ItemInstance *v11; // r9@1
  BlockSource *v12; // r7@1
  Level *v13; // r5@1
  Level *v18; // r0@2
  Dimension *v19; // r5@4
  int v20; // r0@8
  void *v21; // r0@8
  void *v22; // r0@9
  void *v23; // r0@10
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  int (__fastcall *v26)(int, int, void ***, char *); // r5@16
  signed int v27; // r5@17
  void (__fastcall *v28)(int, int, void ***, char *); // r7@19
  unsigned int *v30; // r2@22
  signed int v31; // r1@24
  unsigned int *v32; // r2@26
  signed int v33; // r1@28
  char v34; // [sp+14h] [bp-8Ch]@19
  char v35; // [sp+15h] [bp-8Bh]@19
  char v36; // [sp+18h] [bp-88h]@18
  char v37; // [sp+19h] [bp-87h]@18
  char v38; // [sp+1Ch] [bp-84h]@16
  char v39; // [sp+1Dh] [bp-83h]@16
  void **v40; // [sp+20h] [bp-80h]@8
  int v41; // [sp+58h] [bp-48h]@10
  int v42; // [sp+5Ch] [bp-44h]@9
  int v43; // [sp+60h] [bp-40h]@8
  unsigned __int8 v44; // [sp+68h] [bp-38h]@3
  float v45; // [sp+6Ch] [bp-34h]@2
  char v46; // [sp+78h] [bp-28h]@1

  v9 = this;
  _R6 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (BlockSource *)j_Entity::getRegion(this);
  v13 = (Level *)j_BlockSource::getLevel(v12);
  j_BlockSource::getBlockID((BlockSource *)&v46, v12, _R6);
  if ( v46 )
    goto LABEL_20;
  __asm
  {
    VLDR            S0, [R6]
    VMOV.F32        S6, #0.5
    VLDR            S2, [R6,#4]
    VLDR            S4, [R6,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VSTR            S0, [SP,#0xA0+var_34]
    VSTR            S2, [SP,#0xA0+var_30]
    VSTR            S4, [SP,#0xA0+var_2C]
  }
  j_Level::broadcastSoundEvent(v13, (int)v12, 48, (int)&v45, -1, 1, 0, 0);
  v18 = (Level *)j_Entity::getLevel(v9);
  if ( j_Level::isClientSide(v18) )
  j_BlockSource::getBlockID(
    (BlockSource *)&v44,
    (int)v12,
    *(_QWORD *)_R6,
    (*(_QWORD *)_R6 >> 32) - 1,
    *(_DWORD *)(_R6 + 8));
  if ( v44 == *(_BYTE *)(Block::mObsidian + 4) )
    v19 = (Dimension *)j_BlockSource::getDimension(v12);
    if ( (!j_Dimension::getId(v19) || j_Dimension::getId(v19) == 1)
      && j_PortalBlock::trySpawnPortal((PortalBlock *)Block::mPortal, v12, (const BlockPos *)_R6, (ItemUseCallback *)a9) == 1 )
    {
      if ( j_Entity::hasCategory((int)v9, 1) == 1 )
      {
        v20 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 524))(v9);
        j_EventPacket::EventPacket((int)&v40, v9, v20);
        (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v9 + 1448))(v9, &v40);
        v40 = &off_26E9D30;
        v21 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
        {
          v30 = (unsigned int *)(v43 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          }
          else
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        }
        v22 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v42 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v23 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v41 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
      }
      goto LABEL_20;
    }
  j_BlockSource::getBlockAndData((BlockSource *)&v40, v12, _R6);
  if ( !a9 )
    v36 = *(_BYTE *)(Block::mFire + 4);
    v37 = 0;
    j_BlockSource::setBlockAndData((int)v12, (BlockPos *)_R6, (int)&v36, 3, (int)v9);
LABEL_20:
    v27 = 1;
    j_ItemInstance::hurtAndBreak(v11, 1, v9);
    return v27;
  v26 = *(int (__fastcall **)(int, int, void ***, char *))(*(_DWORD *)a9 + 16);
  v38 = *(_BYTE *)(Block::mFire + 4);
  v39 = 0;
  if ( !v26(a9, _R6, &v40, &v38) )
    v28 = *(void (__fastcall **)(int, int, void ***, char *))(*(_DWORD *)a9 + 20);
    v34 = *(_BYTE *)(Block::mFire + 4);
    v35 = 0;
    v28(a9, _R6, &v40, &v34);
  return 0;
}


void __fastcall FlintAndSteelItem::~FlintAndSteelItem(FlintAndSteelItem *this)
{
  FlintAndSteelItem::~FlintAndSteelItem(this);
}


signed int __fastcall FlintAndSteelItem::getEnchantSlot(FlintAndSteelItem *this)
{
  return 256;
}


signed int __fastcall FlintAndSteelItem::isDestructive(FlintAndSteelItem *this, int a2)
{
  return 1;
}
