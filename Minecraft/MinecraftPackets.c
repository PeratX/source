

_DWORD *__fastcall MinecraftPackets::createPacket(MinecraftPackets *this, int a2)
{
  MinecraftPackets *v2; // r4@1
  _DWORD *result; // r0@2
  void **v4; // r1@3
  void **v5; // r2@3
  BookEditPacket *v6; // r5@4
  void **v7; // r1@5
  BookEditPacket *v8; // r0@7
  void **v9; // r1@8
  int *v10; // r2@10
  char *v11; // r1@10
  void **v12; // r1@13
  void **v13; // r1@14
  int **v14; // r2@14
  void *v15; // r0@16
  void **v16; // r1@17
  void **v17; // r1@21
  void **v18; // r1@31
  void **v19; // r1@33
  char v20; // r2@34
  void **v21; // r1@34
  BookEditPacket *v22; // r0@39
  char *v23; // r1@46
  int v24; // r1@46
  void *v25; // r0@53
  BookEditPacket *v26; // r0@56
  BookEditPacket *v27; // r0@66
  int v28; // r0@66
  BookEditPacket *v29; // r0@70
  BookEditPacket *v30; // r0@71
  BookEditPacket *v31; // r0@76
  char *v32; // r1@78
  BookEditPacket *v33; // r0@80
  void **v34; // r1@81
  void **v35; // r1@83
  void **v36; // r2@83
  char *v37; // r1@86
  char *v38; // r1@88
  char *v39; // r1@103
  char *v40; // r2@103
  char *v41; // r1@108
  char *v42; // r1@112
  char *v43; // r1@114
  char *v44; // r2@114
  BookEditPacket *v45; // r0@115
  char *v46; // r1@118
  char *v47; // r1@130

  v2 = this;
  switch ( a2 )
  {
    case 1:
      result = operator new(0x18u);
      result[1] = 2;
      result[2] = 1;
      *((_BYTE *)result + 12) = 0;
      *result = &off_26D9848;
      result[4] = -1;
      result[5] = 0;
      break;
    case 101:
      v4 = &`vtable for'ModalFormResponsePacket;
      v5 = &off_27775D4;
      goto LABEL_114;
    case 97:
      v6 = (BookEditPacket *)operator new(0x28u);
      result = (_DWORD *)BookEditPacket::BookEditPacket(v6);
      goto LABEL_116;
    case 94:
      result = operator new(0x14u);
      v7 = &`vtable for'SubClientLoginPacket;
      goto LABEL_112;
    case 87:
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result[3] = 0;
      result[4] = 0;
      *result = &off_26E9ABC;
      result[4] = &unk_28898CC;
      *((_BYTE *)result + 20) = 0;
    case 81:
      v8 = (BookEditPacket *)operator new(0x40u);
      v6 = v8;
      *((_DWORD *)v8 + 1) = 2;
      *((_DWORD *)v8 + 2) = 1;
      *((_BYTE *)v8 + 12) = 0;
      *(_DWORD *)v8 = &off_26E9954;
      *((_DWORD *)v8 + 6) = -1;
      *((_DWORD *)v8 + 7) = -1;
      result = (_DWORD *)CompoundTag::CompoundTag((int)v8 + 32);
    case 92:
      result = operator new(0x1Cu);
      v9 = &`vtable for'PurchaseReceiptPacket;
      goto LABEL_108;
    case 82:
      result = operator new(0x30u);
      *result = &off_26E641C;
      result[6] = 0;
      result[8] = 0;
      result[9] = 0;
      result[10] = &unk_28898CC;
    case 95:
      v10 = &dword_28898C0;
      v11 = (char *)&`vtable for'WSConnectPacket;
      goto LABEL_125;
    case 79:
      v6 = (BookEditPacket *)operator new(0x38u);
      result = (_DWORD *)CommandOutputPacket::CommandOutputPacket((int)v6);
    case 61:
      result = operator new(0x24u);
      *result = &off_26E9864;
      *((_BYTE *)result + 32) = 0;
      goto LABEL_89;
    case 68:
      v12 = &`vtable for'MapInfoRequestPacket;
      goto LABEL_46;
    case 85:
      v13 = &`vtable for'TransferPacket;
      v14 = (int **)&off_27775D4;
      goto LABEL_124;
    case 74:
      result = operator new(0x40u);
      *result = &off_26E6444;
      result[11] = &unk_28898CC;
      result[4] = 1;
      result[5] = 2;
      goto LABEL_28;
    case 90:
      v15 = operator new(0x88u);
      v6 = (BookEditPacket *)v15;
      *((_DWORD *)v15 + 1) = 2;
      *((_DWORD *)v15 + 2) = 1;
      *((_BYTE *)v15 + 12) = 0;
      *(_DWORD *)v15 = &off_26E4FB8;
      *((_DWORD *)v15 + 4) = 0;
      *((_DWORD *)v15 + 5) = 0;
      *((_DWORD *)v15 + 6) = 0;
      *((_DWORD *)v15 + 7) = 4;
      result = (_DWORD *)StructureEditorData::StructureEditorData((StructureEditorData *)((char *)v15 + 32));
      *((_BYTE *)v6 + 128) = 0;
      *((_BYTE *)v6 + 129) = 0;
    case 105:
      v16 = &`vtable for'SetDefaultGameTypePacket;
      goto LABEL_130;
    case 77:
      v6 = (BookEditPacket *)operator new(0x30u);
      result = (_DWORD *)CommandRequestPacket::CommandRequestPacket(v6);
    case 96:
      v16 = &`vtable for'SetLastHurtByPacket;
    case 45:
      v9 = &`vtable for'RespawnPacket;
    case 52:
      result = operator new(0x20u);
      v17 = &`vtable for'CraftingDataPacket;
      goto LABEL_118;
    case 86:
      result = operator new(0x28u);
      *result = &off_26E9A94;
      result[7] = 0;
    case 58:
      *result = &off_26E9814;
      result[6] = &unk_28898CC;
    case 55:
      *result = &off_26D80B0;
      result[8] = -1;
      result[9] = -1;
      result[11] = 0;
    case 51:
      *result = &off_26E9724;
      *((_BYTE *)result + 24) = 0;
    case 34:
      v9 = &`vtable for'BlockPickRequestPacket;
    case 41:
      *result = &off_26D9898;
LABEL_28:
      result[6] = -1;
      result[7] = -1;
      goto LABEL_36;
    case 83:
      *result = &off_26E99F4;
      result[10] = 0;
    case 29:
      result = (_DWORD *)UpdateAttributesPacket::UpdateAttributesPacket((int)v6);
    case 40:
      v18 = &`vtable for'SetEntityMotionPacket;
      goto LABEL_78;
    case 38:
      v16 = &`vtable for'HurtArmorPacket;
    case 28:
      v19 = &`vtable for'MobEffectPacket;
      goto LABEL_86;
    case 75:
      v20 = 0;
      v21 = &`vtable for'ShowCreditsPacket;
      goto LABEL_120;
    case 46:
      *result = &off_26E96FC;
      *((_BYTE *)result + 13) = 0;
      *((_BYTE *)result + 14) = 0;
LABEL_36:
    case 66:
      v9 = &`vtable for'SpawnExperienceOrbPacket;
    case 89:
      v13 = &`vtable for'AddBehaviorTreePacket;
    case 80:
      v22 = (BookEditPacket *)operator new(0x50u);
      v6 = v22;
      *((_DWORD *)v22 + 1) = 2;
      *((_DWORD *)v22 + 2) = 1;
      *((_BYTE *)v22 + 12) = 0;
      *(_DWORD *)v22 = &off_26E992C;
      *((_DWORD *)v22 + 4) = &unk_28898CC;
      *((_DWORD *)v22 + 8) = -1;
      *((_DWORD *)v22 + 9) = -1;
      *((_DWORD *)v22 + 10) = -1;
      *((_DWORD *)v22 + 11) = -1;
      result = (_DWORD *)CompoundTag::CompoundTag((int)v22 + 48);
    case 20:
      v7 = &`vtable for'RiderJumpPacket;
    case 35:
      v16 = &`vtable for'EntityPickRequestPacket;
    case 103:
      v4 = &`vtable for'ServerSettingsResponsePacket;
    case 10:
      v16 = &`vtable for'SetTimePacket;
    case 23:
      result = operator new(0x2Cu);
      *result = &off_26E9544;
      goto LABEL_60;
    case 14:
      v12 = &`vtable for'RemoveEntityPacket;
LABEL_46:
      v23 = (char *)*v12;
      *result = v23 + 8;
      v24 = -1;
      goto LABEL_104;
    case 42:
      v7 = &`vtable for'SetHealthPacket;
    case 27:
      v19 = &`vtable for'EntityEventPacket;
    case 30:
      v7 = &`vtable for'InventoryTransactionPacket;
    case 25:
      *result = &off_26E956C;
      goto LABEL_90;
    case 8:
      *result = &off_26D676C;
      result[7] = result + 5;
      result[8] = result + 5;
      *((_BYTE *)result + 40) = 1;
    case 71:
      v9 = &`vtable for'ItemFrameDropItemPacket;
    case 11:
      v25 = operator new(0x120u);
      v6 = (BookEditPacket *)v25;
      *((_DWORD *)v25 + 1) = 2;
      *((_DWORD *)v25 + 2) = 1;
      *((_BYTE *)v25 + 12) = 0;
      *(_DWORD *)v25 = &off_26E93DC;
      LevelSettings::LevelSettings((LevelSettings *)((char *)v25 + 16));
      *((_DWORD *)v6 + 54) = -1;
      *((_DWORD *)v6 + 55) = -1;
      *((_DWORD *)v6 + 56) = 0;
      *((_DWORD *)v6 + 57) = 0;
      *((_DWORD *)v6 + 59) = 0;
      *((_DWORD *)v6 + 60) = 0;
      *((_DWORD *)v6 + 61) = 0;
      *((_DWORD *)v6 + 62) = 0;
      result = &unk_28898CC;
      *((_DWORD *)v6 + 63) = 0;
      *((_DWORD *)v6 + 64) = &unk_28898CC;
      *((_DWORD *)v6 + 65) = &unk_28898CC;
      *((_DWORD *)v6 + 66) = &unk_28898CC;
    case 9:
      *result = &off_26D8088;
      result[5] = &unk_28898CC;
    case 2:
      v16 = &`vtable for'PlayStatusPacket;
    case 31:
      v26 = (BookEditPacket *)operator new(0x70u);
      v6 = v26;
      *((_DWORD *)v26 + 1) = 2;
      *((_DWORD *)v26 + 2) = 1;
      *((_BYTE *)v26 + 12) = 0;
      *(_DWORD *)v26 = &off_26DA648;
      *((_DWORD *)v26 + 4) = 0;
      *((_DWORD *)v26 + 5) = 0;
      result = (_DWORD *)ItemInstance::ItemInstance((int)v26 + 24);
      *((_BYTE *)v6 + 104) = 0;
    case 33:
      v18 = &`vtable for'InteractPacket;
    case 3:
      v13 = &`vtable for'ServerToClientHandshakePacket;
    case 6:
      *result = &off_26E9364;
LABEL_60:
    case 7:
      *result = &off_26E938C;
    case 4:
      result = operator new(0x10u);
      v16 = &`vtable for'ClientToServerHandshakePacket;
    case 43:
      v9 = &`vtable for'SetSpawnPositionPacket;
    case 24:
      v9 = &`vtable for'LevelSoundEventPacket;
    case 5:
      *result = &off_26D6400;
      goto LABEL_126;
    case 13:
      v27 = (BookEditPacket *)operator new(0x78u);
      v6 = v27;
      *((_DWORD *)v27 + 1) = 2;
      *((_DWORD *)v27 + 2) = 1;
      *((_BYTE *)v27 + 12) = 0;
      *(_DWORD *)v27 = &off_26E9404;
      *((_DWORD *)v27 + 10) = 0;
      *((_DWORD *)v27 + 11) = 0;
      *((_DWORD *)v27 + 8) = 0;
      *((_DWORD *)v27 + 9) = 0;
      *((_DWORD *)v27 + 6) = 0;
      *((_DWORD *)v27 + 7) = 0;
      *((_DWORD *)v27 + 4) = 0;
      *((_DWORD *)v27 + 5) = 0;
      *((_DWORD *)v27 + 12) = -1;
      *((_DWORD *)v27 + 13) = -1;
      v28 = (int)v27 + 72;
      *((_DWORD *)v6 + 14) = 0;
      *((_DWORD *)v6 + 15) = 0;
      goto LABEL_72;
    case 21:
      *result = &off_26E951C;
      *((_WORD *)result + 14) = 0;
      goto LABEL_122;
    case 12:
      v6 = (BookEditPacket *)operator new(0x108u);
      result = (_DWORD *)AddPlayerPacket::AddPlayerPacket(v6);
    case 47:
      v16 = &`vtable for'ContainerClosePacket;
    case 50:
      v29 = (BookEditPacket *)operator new(0x60u);
      v6 = v29;
      *((_DWORD *)v29 + 1) = 2;
      *((_DWORD *)v29 + 2) = 1;
      *((_BYTE *)v29 + 12) = 0;
      *(_DWORD *)v29 = &off_26E9774;
      result = (_DWORD *)ItemInstance::ItemInstance((int)v29 + 24);
    case 76:
      v30 = (BookEditPacket *)operator new(0x40u);
      v6 = v30;
      *((_DWORD *)v30 + 1) = 2;
      *((_DWORD *)v30 + 2) = 1;
      *((_BYTE *)v30 + 12) = 0;
      *(_DWORD *)v30 = &off_26E9C24;
      v28 = (int)v30 + 16;
LABEL_72:
      result = (_DWORD *)_aeabi_memclr4(v28, 48);
    case 84:
      *result = &off_26E9A1C;
    case 48:
      *result = &off_26DA620;
      goto LABEL_96;
    case 39:
      v18 = &`vtable for'SetEntityDataPacket;
    case 56:
      v31 = (BookEditPacket *)operator new(0x38u);
      v6 = v31;
      *((_DWORD *)v31 + 1) = 2;
      *((_DWORD *)v31 + 2) = 1;
      *((_BYTE *)v31 + 12) = 0;
      *(_DWORD *)v31 = &off_26E97EC;
      *((_DWORD *)v31 + 4) = 0;
      *((_DWORD *)v31 + 5) = 0;
      *((_DWORD *)v31 + 6) = 0;
      result = (_DWORD *)CompoundTag::CompoundTag((int)v31 + 28);
    case 26:
      v18 = &`vtable for'BlockEventPacket;
LABEL_78:
      v32 = (char *)*v18;
      *result = v32 + 8;
      goto LABEL_95;
    case 32:
      v6 = (BookEditPacket *)operator new(0x140u);
      result = (_DWORD *)MobArmorEquipmentPacket::MobArmorEquipmentPacket(v6);
    case 15:
      v33 = (BookEditPacket *)operator new(0x90u);
      v6 = v33;
      *((_DWORD *)v33 + 1) = 2;
      *((_DWORD *)v33 + 2) = 1;
      *((_BYTE *)v33 + 12) = 0;
      *(_DWORD *)v33 = &off_26E942C;
      *((_DWORD *)v33 + 7) = 0;
      *((_DWORD *)v33 + 5) = 0;
      *((_DWORD *)v33 + 6) = 0;
      *((_DWORD *)v33 + 4) = 0;
      *((_DWORD *)v33 + 8) = -1;
      *((_DWORD *)v33 + 9) = -1;
      *((_DWORD *)v33 + 10) = 0;
      *((_DWORD *)v33 + 11) = 0;
      result = (_DWORD *)ItemInstance::ItemInstance((int)v33 + 48);
      *((_DWORD *)v6 + 30) = 0;
      *((_DWORD *)v6 + 31) = 0;
      *((_DWORD *)v6 + 32) = 0;
      *((_DWORD *)v6 + 33) = 0;
      *((_DWORD *)v6 + 34) = 0;
      *((_DWORD *)v6 + 35) = 0;
    case 17:
      v34 = &`vtable for'TakeItemEntityPacket;
      goto LABEL_88;
    case 36:
      *result = &off_26DA670;
    case 91:
      v35 = &`vtable for'ShowStoreOfferPacket;
      v36 = &off_27775D4;
      goto LABEL_103;
    case 19:
      result = operator new(0x48u);
      *result = &off_26DA5F8;
      result[14] = 0;
      result[15] = 0;
    case 57:
      v19 = &`vtable for'PlayerInputPacket;
LABEL_86:
      v37 = (char *)*v19;
      *result = v37 + 8;
    case 44:
      v34 = &`vtable for'AnimatePacket;
LABEL_88:
      v38 = (char *)*v34;
      *result = v38 + 8;
LABEL_89:
LABEL_90:
    case 64:
      v7 = &`vtable for'SimpleEventPacket;
    case 65:
      v6 = (BookEditPacket *)operator new(0x48u);
      result = (_DWORD *)EventPacket::EventPacket((int)v6);
    case 60:
      v16 = &`vtable for'SetDifficultyPacket;
    case 18:
      *result = &off_26E94A4;
      *((_WORD *)result + 19) = 0;
      *((_BYTE *)result + 40) = 0;
LABEL_95:
LABEL_96:
    case 73:
      *result = &off_26E99A4;
      result[5] = -1;
    case 59:
      v16 = &`vtable for'SetCommandsEnabledPacket;
    default:
      result = 0;
    case 22:
      result = operator new(0x38u);
      result[11] = -1;
      *result = &off_26E97C4;
      result[12] = &unk_28898CC;
    case 67:
      v6 = (BookEditPacket *)operator new(0x5Cu);
      result = (_DWORD *)ClientboundMapItemDataPacket::ClientboundMapItemDataPacket((int)v6);
    case 54:
      v35 = &`vtable for'GuiDataPickItemPacket;
LABEL_103:
      v39 = (char *)*v35;
      v40 = (char *)*v36;
      *result = v39 + 8;
      v24 = (int)(v40 + 12);
LABEL_104:
      result[4] = v24;
      result[5] = v24;
    case 37:
      v9 = &`vtable for'EntityFallPacket;
    case 69:
      v7 = &`vtable for'RequestChunkRadiusPacket;
    case 49:
      v9 = &`vtable for'InventoryContentPacket;
LABEL_108:
      v41 = (char *)*v9;
      goto LABEL_121;
    case 62:
      v16 = &`vtable for'SetPlayerGameTypePacket;
    case 100:
      v4 = &`vtable for'ModalFormRequestPacket;
    case 70:
      v7 = &`vtable for'ChunkRadiusUpdatedPacket;
LABEL_112:
      v42 = (char *)*v7;
      *result = v42 + 8;
    case 88:
      v4 = &`vtable for'SetTitlePacket;
LABEL_114:
      v43 = (char *)*v4;
      v44 = (char *)*v5;
      *result = v43 + 8;
      result[5] = v44 + 12;
    case 53:
      v45 = (BookEditPacket *)operator new(0x40u);
      v6 = v45;
      *((_DWORD *)v45 + 1) = 2;
      *((_DWORD *)v45 + 2) = 1;
      *((_BYTE *)v45 + 12) = 0;
      *(_DWORD *)v45 = &off_26E979C;
      result = (_DWORD *)_aeabi_memclr8((char *)v45 + 24, 40);
LABEL_116:
      *(_DWORD *)v2 = v6;
      return result;
    case 63:
      v17 = &`vtable for'PlayerListPacket;
LABEL_118:
      v46 = (char *)*v17;
      *result = v46 + 8;
      *((_BYTE *)result + 28) = 0;
    case 72:
      v21 = &`vtable for'GameRulesChangedPacket;
LABEL_120:
      v41 = (char *)*v21;
LABEL_121:
      *((_BYTE *)result + 12) = v20;
      *result = v41 + 8;
LABEL_122:
    case 104:
      v13 = &`vtable for'ShowProfilePacket;
LABEL_124:
      v11 = (char *)*v13;
      v10 = *v14;
LABEL_125:
      *result = v11 + 8;
LABEL_126:
      result[4] = v10 + 3;
    case 98:
      *result = &off_26E9B34;
      result[7] = &unk_28898CC;
    case 78:
      *result = &off_26E997C;
      *((_BYTE *)result + 29) = 1;
      *((_BYTE *)result + 30) = 0;
      *((_BYTE *)result + 52) = 1;
      *((_BYTE *)result + 53) = 1;
    case 102:
      v16 = &`vtable for'ServerSettingsRequestPacket;
LABEL_130:
      v47 = (char *)*v16;
      *result = v47 + 8;
    case 93:
      result = operator new(0x50u);
      *result = &off_26D8128;
      result[12] = 0;
      result[13] = 0;
      result[8] = &unk_28898CC;
      result[15] = &unk_28898CC;
      result[16] = &unk_28898CC;
      result[17] = &unk_28898CC;
      result[18] = &unk_28898CC;
    case 99:
      *result = &off_26E4EB8;
  }
  *(_DWORD *)v2 = result;
  return result;
}
