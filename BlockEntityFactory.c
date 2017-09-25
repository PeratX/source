

_DWORD *__fastcall BlockEntityFactory::createBlockEntity(NetherReactorBlockEntity **a1, int a2, int a3, _BYTE *a4)
{
  NetherReactorBlockEntity **v4; // r4@1
  int v5; // r5@1
  NetherReactorBlockEntity *v6; // r6@2
  _DWORD *result; // r0@2
  char v8; // r7@19
  int v9; // r7@29
  int v10; // r2@29
  int v11; // [sp+4h] [bp-5Ch]@28
  int v12; // [sp+8h] [bp-58h]@28
  NetherReactorBlockEntity *v13; // [sp+Ch] [bp-54h]@28
  int v14; // [sp+10h] [bp-50h]@26
  int v15; // [sp+14h] [bp-4Ch]@26
  NetherReactorBlockEntity *v16; // [sp+18h] [bp-48h]@26
  int v17; // [sp+1Ch] [bp-44h]@3
  int v18; // [sp+20h] [bp-40h]@3
  NetherReactorBlockEntity *v19; // [sp+24h] [bp-3Ch]@3
  int v20; // [sp+28h] [bp-38h]@14
  int v21; // [sp+2Ch] [bp-34h]@14
  int v22; // [sp+30h] [bp-30h]@14
  int v23; // [sp+34h] [bp-2Ch]@15
  int v24; // [sp+38h] [bp-28h]@15
  int v25; // [sp+3Ch] [bp-24h]@15
  int v26; // [sp+40h] [bp-20h]@18
  int v27; // [sp+44h] [bp-1Ch]@18
  int v28; // [sp+48h] [bp-18h]@18

  v4 = a1;
  v5 = a3;
  switch ( a2 )
  {
    case 1:
      v6 = (NetherReactorBlockEntity *)operator new(0x218u);
      result = (_DWORD *)FurnaceBlockEntity::FurnaceBlockEntity((int)v6, v5);
      break;
    case 2:
      v18 = 2;
      v17 = 1;
      std::make_unique<ChestBlockEntity,BlockEntityType,char const(&)[6],BlockEntityRendererId,BlockPos const&>(
        (int *)&v19,
        &v18,
        "Chest",
        &v17,
        a3);
      *v4 = v19;
      result = 0;
      v19 = 0;
      return result;
    case 3:
      v6 = (NetherReactorBlockEntity *)operator new(0x6Cu);
      result = (_DWORD *)NetherReactorBlockEntity::NetherReactorBlockEntity(v6, (const BlockPos *)v5);
    case 4:
      v6 = (NetherReactorBlockEntity *)operator new(0x78u);
      result = (_DWORD *)SignBlockEntity::SignBlockEntity((int)v6, v5);
    case 5:
      result = (_DWORD *)MobSpawnerBlockEntity::MobSpawnerBlockEntity((int)v6, v5);
    case 6:
      result = (_DWORD *)SkullBlockEntity::SkullBlockEntity((int)v6, v5);
    case 7:
      v6 = (NetherReactorBlockEntity *)operator new(0x70u);
      result = (_DWORD *)FlowerPotBlockEntity::FlowerPotBlockEntity((int)v6, v5);
    case 8:
      v6 = (NetherReactorBlockEntity *)operator new(0x258u);
      result = (_DWORD *)BrewingStandBlockEntity::BrewingStandBlockEntity((int)v6, v5);
    case 9:
      v6 = (NetherReactorBlockEntity *)operator new(0x94u);
      result = (_DWORD *)EnchantingTableEntity::EnchantingTableEntity(v6, (const BlockPos *)v5);
    case 10:
      v6 = (NetherReactorBlockEntity *)operator new(0x68u);
      result = DaylightDetectorBlockEntity::DaylightDetectorBlockEntity(v6, (const BlockPos *)v5);
    case 11:
      result = (_DWORD *)MusicBlockEntity::MusicBlockEntity(v6, (const BlockPos *)v5);
    case 12:
      result = (_DWORD *)ComparatorBlockEntity::ComparatorBlockEntity(v6, (const BlockPos *)v5);
    case 13:
      v6 = (NetherReactorBlockEntity *)operator new(0xD40u);
      v20 = *(_DWORD *)v5;
      v21 = *(_DWORD *)(v5 + 4);
      v22 = *(_DWORD *)(v5 + 8);
      result = (_DWORD *)DispenserBlockEntity::DispenserBlockEntity((int)v6, (int)&v20);
    case 14:
      v23 = *(_DWORD *)v5;
      v24 = *(_DWORD *)(v5 + 4);
      v25 = *(_DWORD *)(v5 + 8);
      result = (_DWORD *)DropperBlockEntity::DropperBlockEntity((int)v6, (int)&v23);
    case 15:
      result = (_DWORD *)HopperBlockEntity::HopperBlockEntity(v6, (const BlockPos *)v5);
    case 16:
      v6 = (NetherReactorBlockEntity *)operator new(0x3B8u);
      result = (_DWORD *)CauldronBlockEntity::CauldronBlockEntity((int)v6, v5);
    case 17:
      v6 = (NetherReactorBlockEntity *)operator new(0xD0u);
      v26 = *(_DWORD *)v5;
      v27 = *(_DWORD *)(v5 + 4);
      v28 = *(_DWORD *)(v5 + 8);
      result = (_DWORD *)ItemFrameBlockEntity::ItemFrameBlockEntity((int)v6, (int)&v26);
    case 18:
      v8 = 0;
      if ( *a4 == *(_BYTE *)(Block::mStickyPiston + 4) )
        v8 = 1;
      v6 = (NetherReactorBlockEntity *)operator new(0x90u);
      result = (_DWORD *)PistonBlockEntity::PistonBlockEntity((int)v6, v5, v8);
    case 19:
      result = (_DWORD *)MovingBlockEntity::MovingBlockEntity((int)v6, v5);
    case 20:
      v6 = (NetherReactorBlockEntity *)operator new(0x88u);
      result = (_DWORD *)ChalkboardBlockEntity::ChalkboardBlockEntity((int)v6, v5);
    case 21:
      v6 = (NetherReactorBlockEntity *)operator new(0x104u);
      result = (_DWORD *)BeaconBlockEntity::BeaconBlockEntity((int)v6, v5);
    case 22:
      result = (_DWORD *)EndPortalBlockEntity::EndPortalBlockEntity(v6, (const BlockPos *)v5);
    case 23:
      v15 = 23;
      v14 = 12;
      std::make_unique<EnderChestBlockEntity,BlockEntityType,char const(&)[11],BlockEntityRendererId,BlockPos const&>(
        (int *)&v16,
        &v15,
        "EnderChest",
        &v14,
      *v4 = v16;
      v16 = 0;
    case 24:
      v6 = (NetherReactorBlockEntity *)operator new(0x80u);
      result = (_DWORD *)EndGatewayBlockEntity::EndGatewayBlockEntity((int)v6, v5);
    case 25:
      v12 = 25;
      v11 = 14;
      std::make_unique<ShulkerBoxBlockEntity,BlockEntityType,char const(&)[11],BlockEntityRendererId,BlockPos const&>(
        (int *)&v13,
        &v12,
        "ShulkerBox",
        &v11,
      *v4 = v13;
      v13 = 0;
    case 26:
      v9 = 0;
      v10 = *a4;
      if ( v10 == *(_BYTE *)(Block::mChainCommandBlock + 4) )
        v9 = 2;
      if ( v10 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4) )
        v9 = 1;
      v6 = (NetherReactorBlockEntity *)operator new(0x98u);
      result = (_DWORD *)CommandBlockEntity::CommandBlockEntity((int)v6, v5, v9);
    case 28:
      result = (_DWORD *)BannerBlockEntity::BannerBlockEntity(v6, (const BlockPos *)v5);
    default:
      *v4 = 0;
    case 32:
      v6 = (NetherReactorBlockEntity *)operator new(0x130u);
      result = (_DWORD *)StructureBlockEntity::StructureBlockEntity((int)v6, v5);
    case 33:
      v6 = (NetherReactorBlockEntity *)operator new(0x138u);
      result = (_DWORD *)JukeboxBlockEntity::JukeboxBlockEntity(v6, (const BlockPos *)v5);
    case 27:
      result = (_DWORD *)BedBlockEntity::BedBlockEntity(v6, (const BlockPos *)v5);
  }
  *v4 = v6;
  return result;
}
