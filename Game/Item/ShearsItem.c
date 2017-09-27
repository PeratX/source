

int __fastcall ShearsItem::getDestroySpeed(ShearsItem *this, const ItemInstance *a2, const Block *a3)
{
  const ItemInstance *v6; // r5@1
  const Block *v7; // r4@1
  const ItemInstance *v9; // r2@4
  int v11; // r1@9
  int result; // r0@11

  __asm { VMOV.F32        S16, #1.0 }
  v6 = a2;
  v7 = a3;
  _ZF = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    _ZF = *(_DWORD *)a2 == 0;
  if ( !_ZF && !ItemInstance::isNull(a2) && *((_BYTE *)v6 + 14) )
  {
    _R0 = EnchantUtils::getEnchantLevel((EnchantUtils *)0xF, (int)v6, v9);
    if ( _R0 < 1 )
    {
      __asm { VLDR            S16, =0.0 }
    }
    else
      __asm
      {
        VMOV            S0, R0
        VMOV.F32        S2, #1.0
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S0
        VADD.F32        S16, S0, S2
      }
  }
  v11 = *((_BYTE *)v7 + 4);
  if ( v11 != *(_BYTE *)(Block::mWeb + 4) && Block::hasProperty((int)v7, v11, 32LL) != 1 )
    __asm
      VMOV.F32        S0, #5.0
      VMOV.F32        S2, #1.0
      VADD.F32        S0, S16, S0
    if ( *((_BYTE *)v7 + 4) == *(_BYTE *)(Block::mWool + 4) )
      __asm { VMOVEQ.F32      S2, S0 }
    __asm { VMOV            R0, S2 }
  else
      VMOV.F32        S0, #15.0
      VMOV            R0, S0
  return result;
}


void __fastcall ShearsItem::~ShearsItem(ShearsItem *this)
{
  ShearsItem::~ShearsItem(this);
}


void __fastcall ShearsItem::~ShearsItem(ShearsItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ShearsItem::mineBlock(int a1, int a2, Entity *a3, int a4, int a5, int a6, Entity *a7)
{
  Entity *v7; // r6@1
  int v8; // r4@1
  int v9; // r0@2
  ItemInstance *v10; // r0@6
  int v11; // r1@6
  int v13; // r0@9

  v7 = a3;
  v8 = a2;
  if ( BlockID::hasProperty(a3, a2, 32, 0)
    || (v9 = *(_BYTE *)v7, v9 == *(_BYTE *)(Block::mWeb + 4))
    || v9 == *(_BYTE *)(Block::mTallgrass + 4)
    || v9 == *(_BYTE *)(Block::mDoublePlant + 4)
    || v9 == *(_BYTE *)(Block::mVine + 4) )
  {
    v10 = (ItemInstance *)v8;
    v11 = 1;
LABEL_7:
    ItemInstance::hurtAndBreak(v10, v11, a7);
    return 1;
  }
  v13 = Block::mBlocks[v9];
  if ( v13 && (*(int (**)(void))(*(_DWORD *)v13 + 96))() == 1 )
    v11 = 2;
    goto LABEL_7;
  return 1;
}


signed int __fastcall ShearsItem::canDestroySpecial(ShearsItem *this, const Block *a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (const Block *)Block::mWeb == a2 )
    result = 1;
  return result;
}


signed int __fastcall ShearsItem::getEnchantSlot(ShearsItem *this)
{
  return 128;
}
