

void __fastcall HoeItem::~HoeItem(HoeItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall HoeItem::getEnchantSlot(HoeItem *this)
{
  return 64;
}


int __fastcall HoeItem::HoeItem(int a1, const void **a2, __int16 a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5@1
  int v9; // r4@1
  int v10; // r0@1

  v8 = a4;
  v9 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v9 = &off_27218D4;
  v10 = v9 + 124;
  *(_DWORD *)(v9 + 116) = v8;
  *(_DWORD *)(v9 + 120) = a5;
  *(_DWORD *)v10 = a6;
  *(_DWORD *)(v10 + 4) = a7;
  *(_DWORD *)(v10 + 8) = a8;
  j_Item::setMaxDamage((Item *)v9, a5);
  *(_BYTE *)(v9 + 4) = 1;
  return v9;
}


void __fastcall HoeItem::~HoeItem(HoeItem *this)
{
  HoeItem::~HoeItem(this);
}


signed int __fastcall HoeItem::isHandEquipped(HoeItem *this)
{
  return 1;
}


int __fastcall HoeItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r10@1
  ItemInstance *v11; // r8@1
  BlockSource *v12; // r6@1
  Level *v13; // r9@1
  int v14; // r5@1
  int v15; // r1@1
  int v16; // r2@1
  signed int v17; // r7@1
  int v18; // r11@3
  int v19; // r0@3
  int v21; // r1@6
  bool v22; // zf@6
  int (__fastcall *v26)(int, int, unsigned __int8 *, char *); // r5@14
  void (__fastcall *v27)(int, int, unsigned __int8 *, char *); // r6@15
  char v29; // [sp+10h] [bp-50h]@15
  char v30; // [sp+11h] [bp-4Fh]@15
  char v31; // [sp+14h] [bp-4Ch]@15
  char v32; // [sp+15h] [bp-4Bh]@15
  char v33; // [sp+18h] [bp-48h]@14
  char v34; // [sp+19h] [bp-47h]@14
  float v35; // [sp+1Ch] [bp-44h]@12
  int v36; // [sp+28h] [bp-38h]@1
  int v37; // [sp+2Ch] [bp-34h]@1
  int v38; // [sp+30h] [bp-30h]@1
  char v39; // [sp+34h] [bp-2Ch]@1
  unsigned __int8 v40; // [sp+38h] [bp-28h]@1
  char v41; // [sp+39h] [bp-27h]@4

  v9 = this;
  _R4 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (BlockSource *)j_Entity::getRegion(this);
  v13 = (Level *)j_BlockSource::getLevel(v12);
  j_BlockSource::getBlockAndData((BlockSource *)&v40, v12, _R4);
  v14 = v40;
  v15 = *(_DWORD *)(_R4 + 4);
  v16 = *(_DWORD *)(_R4 + 8);
  v36 = *(_DWORD *)_R4;
  v37 = v15 + 1;
  v38 = v16;
  j_BlockSource::getBlockID((BlockSource *)&v39, v12, (int)&v36);
  v17 = 0;
  if ( (_BYTE)a5 && !v39 )
  {
    v18 = Block::mDirt;
    v19 = *(_BYTE *)(Block::mDirt + 4);
    _ZF = v14 == v19;
    if ( v14 == v19 )
      _ZF = v41 == 1;
    if ( !_ZF )
    {
      v21 = *(_BYTE *)(Block::mGrass + 4);
      v22 = v14 == v21;
      if ( v14 != v21 )
        v22 = v14 == v19;
      if ( !v22 && v14 != *(_BYTE *)(Block::mGrassPathBlock + 4) )
        return 0;
      v18 = Block::mFarmland;
    }
    v17 = 0;
    if ( v18 )
      __asm
      {
        VLDR            S0, [R4]
        VMOV.F32        S6, #0.5
        VLDR            S2, [R4,#4]
        VLDR            S4, [R4,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x60+var_44]
        VSTR            S2, [SP,#0x60+var_40]
        VSTR            S4, [SP,#0x60+var_3C]
      }
      j_Level::broadcastSoundEvent(v13, (int)v12, 0, (int)&v35, *(_BYTE *)(v18 + 4), 1, 0, 0);
      j_ItemInstance::hurtAndBreak(v11, 1, v9);
      v17 = 1;
      if ( !j_Level::isClientSide(v13) )
        if ( !a9 )
        {
          v31 = *(_BYTE *)(v18 + 4);
          v32 = 0;
          j_BlockSource::setBlockAndData((int)v12, (BlockPos *)_R4, (int)&v31, 3, (int)v9);
          return 1;
        }
        v17 = 0;
        v26 = *(int (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 16);
        v33 = *(_BYTE *)(v18 + 4);
        v34 = 0;
        if ( !v26(a9, _R4, &v40, &v33) )
          v27 = *(void (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 20);
          v29 = *(_BYTE *)(v18 + 4);
          v30 = 0;
          v27(a9, _R4, &v40, &v29);
  }
  return v17;
}
