

void __fastcall HudScreenController::_pushExistingChatMessages(HudScreenController *this)
{
  HudScreenController *v1; // r5@1
  GuiMessage *v2; // r4@2
  GuiMessage *v3; // r7@2
  char *v4; // r6@3
  int v5; // r0@3
  int v6; // r6@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  int v13; // r1@30
  void *v14; // r0@30
  int v15; // r1@31
  void *v16; // r0@31
  int *v17; // r0@32
  GuiMessage *v18; // [sp+0h] [bp-30h]@2
  GuiMessage *v19; // [sp+4h] [bp-2Ch]@2

  v1 = this;
  if ( !*((_BYTE *)this + 483) )
  {
    *((_BYTE *)this + 483) = 1;
    ClientInstanceScreenModel::getPreexistingChatMessages((ClientInstanceScreenModel *)&v18, *((_DWORD *)this + 106));
    v3 = v19;
    v2 = v18;
    if ( v18 != v19 )
    {
      do
      {
        v4 = GuiMessage::getString(v2);
        v5 = GuiMessage::getDuration(v2);
        HudScreenController::_pushNewChatMessage((int)v1, (const void **)v4, v5);
        v2 = (GuiMessage *)((char *)v2 + 24);
      }
      while ( v3 != v2 );
      v2 = v19;
      v6 = (int)v18;
      if ( v18 != v19 )
        do
        {
          v13 = *(_DWORD *)(v6 + 8);
          v14 = (void *)(v13 - 12);
          if ( (int *)(v13 - 12) != &dword_28898C0 )
          {
            v7 = (unsigned int *)(v13 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
            }
            else
              v8 = (*v7)--;
            if ( v8 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v14);
          }
          v15 = *(_DWORD *)(v6 + 4);
          v16 = (void *)(v15 - 12);
          if ( (int *)(v15 - 12) != &dword_28898C0 )
            v9 = (unsigned int *)(v15 - 4);
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v16);
          v17 = (int *)(*(_DWORD *)v6 - 12);
          if ( v17 != &dword_28898C0 )
            v11 = (unsigned int *)(*(_DWORD *)v6 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v17);
          v6 += 24;
        }
        while ( (GuiMessage *)v6 != v2 );
        v2 = v18;
    }
    if ( v2 )
      operator delete((void *)v2);
  }
}


int __fastcall HudScreenController::_handleSlotSelection(int a1, int a2, Inventory *a3)
{
  int v3; // r6@1
  Inventory *v4; // r4@1
  signed int v5; // r5@1
  int result; // r0@2
  int v7; // r0@4
  int v11; // r7@8
  signed int v12; // r7@10
  Options *v13; // r0@10

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( MinecraftScreenModel::isEnabledTouchOrHolographic(*(MinecraftScreenModel **)(a1 + 424)) != 1
    || (result = MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 424)),
        (unsigned __int8)v4 == 123)
    || result != v5 )
  {
    v7 = MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 424));
    _VF = 0;
    _ZF = v5 == 0;
    _NF = v5 < 0;
    if ( v5 >= 0 )
    {
      _VF = __OFSUB__(v7, v5);
      _ZF = v7 == v5;
      _NF = v7 - v5 < 0;
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
      || (v11 = v5 % MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 424)),
          result = MinecraftScreenModel::getFixedInventorySlotCount(*(MinecraftScreenModel **)(v3 + 424)),
          v11 >= 0)
      && v11 < result )
      v12 = MinecraftScreenModel::isSplitScreen(*(MinecraftScreenModel **)(v3 + 424));
      v13 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v3 + 424));
      if ( v12 == 1 )
        _R0 = Options::getSplitscreenInterfaceOpacity(v13);
      else
        _R0 = Options::getInterfaceOpacity(v13);
      __asm
      {
        VMOV.F32        S2, #1.0
        VMOV            S0, R0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        Stopwatch::reset((Stopwatch *)(v3 + 536));
        Stopwatch::start((Stopwatch *)(v3 + 536));
        *(_BYTE *)(v3 + 588) = 1;
        *(_DWORD *)(v3 + 468) |= 1u;
        *(_DWORD *)(v3 + 584) = 1065353216;
      *(_DWORD *)(v3 + 436) = 0;
      result = j_j_j__ZN20MinecraftScreenModel10selectSlotEi11ContainerID_0(*(_DWORD *)(v3 + 424), v5, v4);
  }
  return result;
}


signed int __fastcall HudScreenController::_isAutoSaveIconVisible(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  Options *v2; // r0@1
  signed int result; // r0@2
  unsigned int v4; // r1@3

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  if ( Options::getShowAutoSaveIcon(v2) == 1 )
  {
    v4 = *((_WORD *)v1 + 242);
    if ( (_BYTE)v4 )
    {
      result = 1;
    }
    else
      result = 0;
      if ( v4 < 0x100 )
        result = 1;
  }
  else
    result = 0;
  return result;
}


void **__fastcall HudScreenController::_getContextAttackButton(HudScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  char *v4; // r6@1
  int *v5; // r0@1
  int v6; // r1@1
  int v7; // r7@2
  int v8; // r0@5
  signed int v10; // r0@15
  unsigned __int8 v11; // [sp+10h] [bp-18h]@4

  v2 = a2;
  v3 = (void **)this;
  v4 = MinecraftScreenModel::getHitResult(*(MinecraftScreenModel **)(a2 + 424));
  v5 = (int *)ClientInstanceScreenModel::getSelectedItem(*(ClientInstanceScreenModel **)(v2 + 424));
  v6 = *(_DWORD *)v4;
  if ( (*(_DWORD *)v4 & 0xFFFFFFFE) == 2 )
    return sub_1590164(v3, (const char *)&unk_257BC67);
  v7 = *v5;
  if ( v6 != 1 )
  {
    if ( !v6 )
    {
      ClientInstanceScreenModel::getBlockIDAt(
        (ClientInstanceScreenModel *)&v11,
        *(const BlockPos **)(v2 + 424),
        (int)(v4 + 8));
      if ( Block::mBlocks[v11] )
      {
        v8 = MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424));
        if ( !v7
          || v8 ^ 1
          || v7 != Item::mSword_wood
          && v7 != Item::mSword_stone
          && v7 != Item::mSword_iron
          && v7 != Item::mSword_gold
          && v7 != Item::mSword_diamond )
        {
          return sub_1590164(v3, "hudScreen.tooltip.mine");
        }
      }
    }
  }
  if ( (*(int (**)(void))(**((_DWORD **)v4 + 8) + 488))() == 88 )
    return sub_1590164(v3, "hudScreen.tooltip.release");
  v10 = Entity::hasType(*((_DWORD *)v4 + 8), 256);
  if ( !v7
    || v10 != 1
    || v7 != Item::mSword_wood
    && v7 != Item::mSword_stone
    && v7 != Item::mSword_iron
    && v7 != Item::mSword_gold
    && v7 != Item::mSword_diamond )
  return sub_1590164(v3, "hudScreen.tooltip.hit");
}


int __fastcall HudScreenController::_autoSaveMinTimeAchieved(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  Stopwatch *v2; // r5@1
  int v3; // r1@1
  int result; // r0@2

  v1 = this;
  v2 = (HudScreenController *)((char *)this + 488);
  if ( Stopwatch::isReset((HudScreenController *)((char *)this + 488)) == 1 )
  {
    result = 1;
    *((_BYTE *)v1 + 485) = 1;
  }
  else
    _R0 = Stopwatch::tick(v2, v3);
    __asm
    {
      VMOV.F64        D0, #10.0
      VMOV            D1, R0, R1
      VCMPE.F64       D1, D0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = 0;
      *((_BYTE *)v1 + 485) = 0;
    else
      Stopwatch::reset(v2);
      *((_BYTE *)v1 + 485) = 1;
      result = *((_DWORD *)v1 + 117) | 1;
      *((_DWORD *)v1 + 117) = result;
  return result;
}


void __fastcall HudScreenController::_pushExistingChatMessages(HudScreenController *this)
{
  HudScreenController::_pushExistingChatMessages(this);
}


void __fastcall HudScreenController::onOpen(HudScreenController *this, int a2, __int64 a3)
{
  HudScreenController::onOpen(this, a2, a3);
}


int __fastcall HudScreenController::_setHeldButton(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r5@1
  int v3; // r4@1

  v2 = this;
  v3 = a2;
  ClientInstanceScreenModel::setMenuPointerPressed(*((ClientInstanceScreenModel **)this + 106), 1);
  return j_j_j__ZN20MinecraftScreenModel19setLastSelectedSlotEi11ContainerID(*((_DWORD *)v2 + 106), v3, 0);
}


int __fastcall HudScreenController::_canRebind(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  int result; // r0@2
  ClientInstanceScreenModel *v3; // r0@3
  ContainerManagerController *v4; // r4@3
  int v5; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    v3 = (ClientInstanceScreenModel *)*((_DWORD *)v1 + 106);
    v4 = (ContainerManagerController *)*((_DWORD *)v1 + 118);
    v5 = ClientInstanceScreenModel::getPickRange(v3);
    result = ContainerManagerController::isValid(v4, *(float *)&v5);
  }
  else
    result = 0;
  return result;
}


UIPropertyBag *__fastcall HudScreenController::_handleNewTipText(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  UIPropertyBag *result; // r0@1
  int v3; // r0@2
  void *v4; // r0@3
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // [sp+8h] [bp-48h]@2
  char v8; // [sp+Fh] [bp-41h]@2
  char v9; // [sp+10h] [bp-40h]@2

  v1 = this;
  result = (UIPropertyBag *)MinecraftScreenModel::getTipText(*((_DWORD *)this + 106), (int *)this + 112);
  if ( result == (UIPropertyBag *)1 )
  {
    v3 = UIPropertyBag::UIPropertyBag((int)&v9);
    UIPropertyBag::set<char [15]>(v3, 4, "name", "popup_tip_text");
    v8 = 1;
    UIPropertyBag::set<bool>((int)&v9, 9, "exclusive", &v8);
    sub_1590164((void **)&v7, "hud_tip_text_factory");
    if ( !*((_DWORD *)v1 + 3) )
      sub_1590214();
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v7, &v9);
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v4);
    }
    result = UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v9);
  }
  return result;
}


signed int __fastcall HudScreenController::_getCraftingTooltipHelperVisible(HudScreenController *this)
{
  signed int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftScreenModel::getPlayerGameType(*((MinecraftScreenModel **)this + 95));
  v2 = 0;
  if ( v1 != 1 )
    v2 = 1;
  return v2;
}


int __fastcall HudScreenController::_showPocketUI(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  Options *v2; // r0@1
  int result; // r0@3
  Options *v4; // r0@4

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  if ( Options::getUIProfile(v2) && !MinecraftScreenModel::isRealityFullVRMode(*((MinecraftScreenModel **)v1 + 106)) )
  {
    v4 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    result = Options::getHideHud(v4) ^ 1;
  }
  else
    result = 0;
  return result;
}


HudScreenController *__fastcall HudScreenController::~HudScreenController(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  int v9; // r1@16
  void *v10; // r0@16
  int v11; // r1@17
  void *v12; // r0@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29

  v1 = this;
  *(_DWORD *)this = &off_26E2210;
  *((_DWORD *)this + 108) = &off_26E22A0;
  (*(void (**)(void))(**((_DWORD **)this + 118) + 48))();
  ClientInstanceScreenModel::removeBossEventListener(*((_DWORD *)v1 + 106), (int)v1 + 432);
  v2 = *((_DWORD *)v1 + 119);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 112);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
  v9 = *((_DWORD *)v1 + 111);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v9 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v10);
  v11 = *((_DWORD *)v1 + 110);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v11 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall HudScreenController::~HudScreenController(HudScreenController *this)
{
  HudScreenController::~HudScreenController(this);
}


signed int __fastcall HudScreenController::_canReceiveInput(HudScreenController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 109);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


void __fastcall HudScreenController::~HudScreenController(HudScreenController *this)
{
  HudScreenController *v1; // r0@1

  v1 = HudScreenController::~HudScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall HudScreenController::_cubeSmoothStep(HudScreenController *this, float _R1, float a3, float a4)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #-2.0
    VMOV            S2, R1
    VMOV.F32        S4, #3.0
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


UIPropertyBag *__fastcall HudScreenController::_pushNewChatMessage(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  const void **v5; // r6@1
  int v6; // r0@1
  void *v11; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int v15; // [sp+8h] [bp-58h]@1
  float v16; // [sp+Ch] [bp-54h]@1
  int v17; // [sp+10h] [bp-50h]@1
  const char *v18; // [sp+14h] [bp-4Ch]@1
  char v19; // [sp+18h] [bp-48h]@1

  v3 = a1;
  _R5 = a3;
  v5 = a2;
  v6 = UIPropertyBag::UIPropertyBag((int)&v19);
  UIPropertyBag::set<char [15]>(v6, 4, "name", "chat_grid_item");
  UIPropertyBag::set<char [10]>((int)&v19, 10, "control_id", "chat_item");
  UIPropertyBag::set<std::string>((int)&v19, 5, "#text", v5);
  __asm { VMOV            S16, R5 }
  gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v17, (int)"$chat_item_lifetime");
  __asm
  {
    VMOV.F32        S0, #-1.0
    VADD.F32        S0, S16, S0
    VSTR            S0, [SP,#0x60+var_54]
  }
  UIPropertyBag::set<float>((int)&v19, v17, v18, (int)&v16);
  sub_1590164((void **)&v15, "chat_item_factory");
  if ( !*(_DWORD *)(v3 + 12) )
    sub_1590214();
  (*(void (__fastcall **)(int, int *, char *))(v3 + 16))(v3 + 4, &v15, &v19);
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v19);
}


unsigned int __fastcall HudScreenController::_selectSlot(int a1, int a2, Inventory *a3)
{
  *(_DWORD *)(a1 + 436) = 0;
  return j_j_j__ZN20MinecraftScreenModel10selectSlotEi11ContainerID_0(*(_DWORD *)(a1 + 424), a2, a3);
}


void __fastcall HudScreenController::_getContextUseButton(HudScreenController *this, int a2)
{
  int v2; // r5@1
  ClientInstanceScreenModel *v3; // r10@1
  char *v4; // r4@1
  ItemInstance *v5; // r11@1
  __int64 v6; // r6@1
  int v7; // r0@5
  Block *v8; // r9@8
  int v9; // r1@12
  int v10; // r1@29
  int v11; // r1@30
  int *v12; // r0@35
  int v13; // r1@35
  int *v14; // r0@40
  unsigned __int8 v15; // [sp+70h] [bp-30h]@8

  v2 = a2;
  v3 = this;
  v4 = MinecraftScreenModel::getHitResult(*(MinecraftScreenModel **)(a2 + 424));
  v5 = (ItemInstance *)ClientInstanceScreenModel::getSelectedItem(*(ClientInstanceScreenModel **)(v2 + 424));
  v6 = *(_QWORD *)v5;
  if ( !v4[36] )
  {
    v7 = *(_DWORD *)v4;
    if ( (*(_DWORD *)v4 & 0xFFFFFFFE) != 2 )
    {
      if ( v7 == 1 )
      {
        ClientInstanceScreenModel::getInteractionText(v3, *(_DWORD *)(v2 + 424));
        return;
      }
      if ( !v7 )
        ClientInstanceScreenModel::getBlockIDAt(
          (ClientInstanceScreenModel *)&v15,
          *(const BlockPos **)(v2 + 424),
          (int)(v4 + 8));
        v8 = (Block *)Block::mBlocks[v15];
        if ( v8 )
        {
          if ( v8 == (Block *)Block::mHopper
            || v8 == (Block *)Block::mDispenser
            || Block::getBlockEntityType((Block *)Block::mBlocks[v15]) == 2
            || (*(int (__fastcall **)(Block *))(*(_DWORD *)v8 + 60))(v8) == 1 )
          {
            sub_1590164((void **)v3, "hudScreen.tooltip.open");
            return;
          }
          if ( v8 != (Block *)Block::mIronDoor
            && v8 != (Block *)Block::mStonecutterBench
            && (v8 == (Block *)Block::mStoneButton
             || v8 == (Block *)Block::mWoodButton
             || v8 == (Block *)Block::mPoweredComparator
             || v8 == (Block *)Block::mUnpoweredComparator
             || v8 == (Block *)Block::mPoweredRepeater
             || v8 == (Block *)Block::mUnpoweredRepeater
             || Block::hasProperty((int)v8, v9, 1024LL)
             || Block::hasProperty((int)v8, v10, 0x4000LL)
             || Block::hasProperty((int)v8, v11, 16LL)
             || Block::getBlockEntityType(v8) == 21
             || (*(int (__fastcall **)(Block *))(*(_DWORD *)v8 + 64))(v8) == 1) )
            sub_1590164((void **)v3, "hudScreen.tooltip.use");
          v12 = (int *)Block::getMaterial(v8);
          if ( Material::isType(v12, 12) == 1 )
            sub_1590164((void **)v3, "hudScreen.tooltip.sleep");
          if ( Block::hasProperty((int)v8, v13, 128LL) == 1 )
            if ( ClientInstanceScreenModel::canBindPlayerMobs(
                   *(ClientInstanceScreenModel **)(v2 + 424),
                   (const BlockPos *)(v4 + 8)) == 1 )
            {
              sub_1590164((void **)v3, "hudScreen.tooltip.attach");
              return;
            }
          else
            v14 = (int *)Block::getMaterial(v8);
            if ( Material::isType(v14, 26) == 1 )
              if ( ClientInstanceScreenModel::isPlayerHungry(*(ClientInstanceScreenModel **)(v2 + 424)) == 1
                && !MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424)) )
              {
                sub_1590164((void **)v3, "hudScreen.tooltip.eat");
                return;
              }
            else
              if ( v8 == (Block *)Block::mItemFrame
                && ClientInstanceScreenModel::itemFrameFilled(
                     *(ClientInstanceScreenModel **)(v2 + 424),
                     (const BlockPos *)(v4 + 8)) == 1 )
                sub_1590164((void **)v3, "hudScreen.tooltip.rotate");
              if ( (_DWORD)v6 )
                if ( v8 == (Block *)Block::mItemFrame )
                {
                  sub_1590164((void **)v3, "hudScreen.tooltip.place");
                  return;
                }
                if ( (_DWORD)v6 == Item::mBucket
                  && (ItemInstance::getAuxValue(v5) == *(_BYTE *)(Block::mFlowingLava + 4)
                   || ItemInstance::getAuxValue(v5) == *(_BYTE *)(Block::mFlowingWater + 4)) )
                  sub_1590164((void **)v3, "hudScreen.tooltip.empty");
                if ( (unsigned __int8)(v4[4] - 2) <= 3u
                  && ((_DWORD)v6 == Item::mItemFrame || (_DWORD)v6 == Item::mPainting) )
                  sub_1590164((void **)v3, "hudScreen.tooltip.hang");
                if ( (_DWORD)v6 == Item::mFlintAndSteel || (_DWORD)v6 == Item::mFireCharge )
                  sub_1590164((void **)v3, "hudScreen.tooltip.ignite");
                if ( (_DWORD)v6 == Item::mSign
                  || (_DWORD)v6 == Item::mRedStone
                  || (_DWORD)v6 == Item::mMobPlacer
                  || (_DWORD)v6 == Item::mString
                  || (_DWORD)v6 == Item::mBed
                  || HIDWORD(v6)
                  && HIDWORD(v6) == Block::mWaterlily
                  && ClientInstanceScreenModel::canPlaceWaterlily(*(ClientInstanceScreenModel **)(v2 + 424))
                  || ClientInstanceScreenModel::canPlaceHeldBlock(*(ClientInstanceScreenModel **)(v2 + 424)) == 1 )
                if ( ((_DWORD)v6 == Item::mHoe_wood
                   || (_DWORD)v6 == Item::mHoe_stone
                   || (_DWORD)v6 == Item::mHoe_iron
                   || (_DWORD)v6 == Item::mHoe_gold
                   || (_DWORD)v6 == Item::mHoe_diamond)
                  && (v8 == (Block *)Block::mDirt || v8 == (Block *)Block::mGrass) )
                  sub_1590164((void **)v3, "hudScreen.tooltip.till");
                if ( ((_DWORD)v6 == Item::mShovel_wood
                   || (_DWORD)v6 == Item::mShovel_stone
                   || (_DWORD)v6 == Item::mShovel_iron
                   || (_DWORD)v6 == Item::mShovel_gold
                   || (_DWORD)v6 == Item::mShovel_diamond)
                  sub_1590164((void **)v3, "hudScreen.tooltip.dig");
                if ( (_DWORD)v6 == Item::mEnderEye
                  && v8 == (Block *)Block::mEndPortalFrame
                  && !ClientInstanceScreenModel::endPortalFrameBlockHasEye(
                        *(ClientInstanceScreenModel **)(v2 + 424),
                        (const BlockPos *)(v4 + 8)) )
                if ( ClientInstanceScreenModel::canUseSeed(*(ClientInstanceScreenModel **)(v2 + 424))
                  || (_DWORD)v6 == Item::mReeds
                  && ClientInstanceScreenModel::canUseReed(*(ClientInstanceScreenModel **)(v2 + 424)) == 1 )
                if ( v8 == (Block *)Block::mCauldron )
                  if ( ClientInstanceScreenModel::canCollectFromCauldron(
                         *(ClientInstanceScreenModel **)(v2 + 424),
                         (const BlockPos *)(v4 + 8)) == 1 )
                  {
                    sub_1590164((void **)v3, "hudScreen.tooltip.collect");
                    return;
                  }
                  if ( ClientInstanceScreenModel::canEmptyIntoCauldron(
                    sub_1590164((void **)v3, "hudScreen.tooltip.empty");
                  if ( ClientInstanceScreenModel::canTipArrows(
                    sub_1590164((void **)v3, "hudScreen.tooltip.use");
                else if ( v8 == (Block *)Block::mJukebox
                       && ((_DWORD)v6 == Item::mRecord11
                        || (_DWORD)v6 == Item::mRecord13
                        || (_DWORD)v6 == Item::mRecordCat
                        || (_DWORD)v6 == Item::mRecordBlocks
                        || (_DWORD)v6 == Item::mRecordChirp
                        || (_DWORD)v6 == Item::mRecordFar
                        || (_DWORD)v6 == Item::mRecordMall
                        || (_DWORD)v6 == Item::mRecordMellohi
                        || (_DWORD)v6 == Item::mRecordStal
                        || (_DWORD)v6 == Item::mRecordStrad
                        || (_DWORD)v6 == Item::mRecordWard
                        || (_DWORD)v6 == Item::mRecordWait) )
                  sub_1590164((void **)v3, "hudScreen.tooltip.use");
        }
    }
LABEL_116:
    if ( (_DWORD)v6 )
      goto LABEL_117;
LABEL_132:
    sub_1590164((void **)v3, (const char *)&unk_257BC67);
    return;
  }
  if ( HIDWORD(v6) )
    if ( HIDWORD(v6) == Block::mWaterlily )
      sub_1590164((void **)v3, "hudScreen.tooltip.place");
      return;
    goto LABEL_116;
  if ( !(_DWORD)v6 )
    goto LABEL_132;
  if ( (_DWORD)v6 == Item::mGlass_bottle
    || (_DWORD)v6 == Item::mBucket
    && ItemInstance::getAuxValue(v5) != *(_BYTE *)(Block::mFlowingLava + 4)
    && ItemInstance::getAuxValue(v5) != *(_BYTE *)(Block::mFlowingWater + 4) )
    sub_1590164((void **)v3, "hudScreen.tooltip.collect");
LABEL_117:
  if ( (_DWORD)v6 == Item::mPotion )
    sub_1590164((void **)v3, "hudScreen.tooltip.potion");
  if ( (_DWORD)v6 == Item::mBucket && ItemInstance::getAuxValue(v5) == 1 )
    sub_1590164((void **)v3, "hudScreen.tooltip.milk");
  if ( (_DWORD)v6 == Item::mBow )
    if ( ClientInstanceScreenModel::isUsingItem(*(ClientInstanceScreenModel **)(v2 + 424)) )
      sub_1590164((void **)v3, "hudScreen.tooltip.release");
    else
      sub_1590164((void **)v3, "hudScreen.tooltip.draw");
  else
    if ( (_DWORD)v6 != Item::mEnderEye && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 104))(v6) == 1 )
      sub_1590164((void **)v3, "hudScreen.tooltip.throw");
    if ( (_DWORD)v6 == Item::mFishingRod || (_DWORD)v6 == Item::mEmptyMap || (_DWORD)v6 == Item::mWritable_book )
      sub_1590164((void **)v3, "hudScreen.tooltip.use");
      if ( !*(_DWORD *)(v6 + 100)
        || ClientInstanceScreenModel::isPlayerHungry(*(ClientInstanceScreenModel **)(v2 + 424)) != 1
        || MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424)) )
        goto LABEL_132;
      sub_1590164((void **)v3, "hudScreen.tooltip.eat");
}


int __fastcall HudScreenController::_getDropItemTooltipHelperVisible(HudScreenController *this)
{
  ItemInstance *v1; // r0@1

  v1 = (ItemInstance *)ClientInstanceScreenModel::getSelectedItem(*((ClientInstanceScreenModel **)this + 106));
  return ItemInstance::isNull(v1) ^ 1;
}


int __fastcall HudScreenController::_broadcastContainerChanges(HudScreenController *this)
{
  return j_j_j__ZN29HudContainerManagerController25broadcastContainerChangesEv(*((HudContainerManagerController **)this
                                                                               + 118));
}


signed int __fastcall HudScreenController::_getFixedInventorySlotCountChanged(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  int v2; // r5@1
  signed int result; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 113);
  if ( v2 == MinecraftScreenModel::getFixedInventorySlotCount(*((MinecraftScreenModel **)this + 106)) )
  {
    result = 0;
  }
  else
    *((_DWORD *)v1 + 113) = MinecraftScreenModel::getFixedInventorySlotCount(*((MinecraftScreenModel **)v1 + 106));
    result = 1;
  return result;
}


int __fastcall HudScreenController::_handleScrollSelection(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r4@1
  int v3; // r5@1
  MinecraftScreenModel *v4; // r0@1
  int v5; // r0@2
  signed int v6; // r6@4
  Inventory *v7; // r8@4
  int v8; // r5@5
  signed int v9; // r0@8
  int v10; // r0@11
  MinecraftScreenModel *v11; // r0@16
  signed int v12; // r6@16
  int v13; // r0@19
  unsigned __int8 v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@5

  v2 = this;
  v3 = a2;
  MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v15, *((_DWORD *)this + 106));
  v4 = (MinecraftScreenModel *)*((_DWORD *)v2 + 106);
  if ( v15 == 123 )
    v5 = MinecraftScreenModel::getFixedInventorySlotCount(v4);
  else
    v5 = MinecraftScreenModel::getHotbarSlotCount(v4);
  v6 = v5;
  MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v15, *((_DWORD *)v2 + 106));
  v7 = (Inventory *)v15;
  if ( v3 <= -1 )
  {
    v10 = v16;
    if ( v16 < 1 )
      v10 = v6;
    v8 = v10 - 1;
    if ( (v6 == 1 || v8 > v16) && MinecraftScreenModel::hasFixedInventory(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    {
      v11 = (MinecraftScreenModel *)*((_DWORD *)v2 + 106);
      v12 = 123;
      if ( v7 == (Inventory *)123 )
        v12 = 0;
      if ( v15 == 123 )
        v13 = MinecraftScreenModel::getHotbarSlotCount(v11);
      else
        v13 = MinecraftScreenModel::getFixedInventorySlotCount(v11);
      v8 = v13 - 1;
      v7 = (Inventory *)v12;
    }
  }
    v8 = (v16 + 1) % v6;
    if ( (v6 == 1 || (v16 + 1) % v6 < v16)
      && MinecraftScreenModel::hasFixedInventory(*((MinecraftScreenModel **)v2 + 106)) == 1 )
      v9 = 123;
        v9 = 0;
      v8 = 0;
      v7 = (Inventory *)v9;
  return HudScreenController::_handleSlotSelection((int)v2, v8, v7);
}


int __fastcall HudScreenController::bind(int a1, int a2, signed int a3, const char **a4, int a5)
{
  const char **v6; // r11@1
  const char *v7; // r2@8
  const void **v8; // r3@8
  int v9; // r1@8
  int v10; // r0@15
  const char *v11; // r2@15
  signed int v12; // r5@15
  int *v13; // r3@15
  int v14; // r1@15
  const char *v15; // r5@21
  int v16; // r6@21
  int v17; // r0@21
  char v18; // r1@21
  char *v19; // r3@23
  int v20; // r6@29
  void *v21; // r0@30
  int v22; // r7@35
  char v23; // r0@36
  Options *v24; // r0@41
  int v25; // r0@41
  char v26; // r1@41
  unsigned int v27; // r0@42
  const char *v28; // r2@50
  char *v29; // r3@50
  int v30; // r1@50
  int v31; // r0@56
  Options *v32; // r0@60
  Options *v33; // r0@62
  int v34; // r0@63
  ItemInstance *v35; // r0@70
  char v36; // r0@71
  int v37; // r6@75
  void *v38; // r0@76
  signed int v39; // r0@80
  const char *v40; // r5@80
  int v41; // r7@80
  int v42; // r0@81
  int v43; // r1@81
  char v44; // r0@88
  Options *v45; // r0@96
  Options *v46; // r0@98
  int v47; // r0@99
  Options *v48; // r0@105
  const char *v49; // r2@114
  const char *v50; // r3@114
  const char *v51; // r5@117
  int v52; // r7@117
  Options *v53; // r0@118
  Options *v54; // r0@119
  signed int v55; // r6@120
  int v56; // r0@120
  void *v57; // r0@122
  unsigned int *v58; // r2@123
  signed int v59; // r1@125
  const char *v60; // r5@132
  int v61; // r7@132
  Options *v62; // r0@133
  Options *v63; // r0@134
  signed int v64; // r6@135
  int v65; // r0@135
  const char *v66; // r5@142
  int v67; // r6@142
  char v72; // r0@145
  int v73; // r6@146
  void *v74; // r0@147
  Options *v75; // r0@148
  char v76; // r0@150
  const char *v77; // r5@152
  int v78; // r7@152
  char v79; // r0@157
  int v80; // r6@160
  void *v81; // r0@161
  const char *v82; // r5@163
  int v83; // r7@163
  char v84; // r0@171
  const char *v85; // r5@174
  int v86; // r6@174
  int v87; // r0@174
  const char *v88; // r5@183
  int v89; // r7@183
  Options *v90; // r0@184
  Options *v91; // r0@185
  signed int v92; // r6@186
  int v93; // r0@186
  Options *v94; // r0@193
  Options *v95; // r0@195
  char v96; // r0@195
  int v97; // r6@196
  void *v98; // r0@197
  char v99; // r0@198
  int v100; // r6@199
  void *v101; // r0@200
  int v102; // r2@202
  int v104; // r4@207
  char *v105; // r6@207
  Options *v106; // r0@209
  const char *v107; // r4@211
  int v108; // r5@211
  char v109; // r0@217
  const char *v110; // r2@218
  int v111; // r1@218
  Options *v112; // r0@221
  char v113; // r0@222
  int v114; // r0@224
  int v115; // r1@224
  Options *v116; // r0@225
  char v117; // r0@227
  int v118; // r0@229
  Options *v119; // r0@241
  unsigned int *v120; // r2@247
  signed int v121; // r1@249
  int *v122; // r0@255
  void *v123; // r0@260
  void *v124; // r0@261
  void *v125; // r0@262
  void *v126; // r0@263
  int v127; // r0@273
  int v128; // r6@273
  void *v129; // r0@273
  const char *v130; // r5@274
  void (__fastcall *v131)(int *, int, _DWORD); // r4@274
  int v132; // r7@274
  char *v133; // r0@274
  void *v134; // r0@274
  int v135; // r0@283
  int v136; // r6@283
  void *v137; // r0@283
  const char *v138; // r5@284
  void (__fastcall *v139)(int *, int, _DWORD); // r4@284
  int v140; // r7@284
  char *v141; // r0@284
  void *v142; // r0@284
  signed int v143; // r7@293
  Options *v144; // r0@293
  int v146; // r0@296
  int v147; // r6@296
  void *v148; // r0@296
  const char *v149; // r5@297
  void (__fastcall *v150)(int *, int, _DWORD); // r4@297
  int v151; // r7@297
  char *v152; // r0@297
  void *v153; // r0@297
  int v154; // r0@306
  int v155; // r6@306
  void *v156; // r0@306
  const char *v157; // r5@307
  void (__fastcall *v158)(int *, int, _DWORD); // r4@307
  int v159; // r7@307
  char *v160; // r0@307
  void *v161; // r0@307
  int v162; // r0@316
  int v163; // r6@316
  void *v164; // r0@316
  const char *v165; // r5@317
  void (__fastcall *v166)(int *, int, _DWORD); // r4@317
  int v167; // r7@317
  char *v168; // r0@317
  void *v169; // r0@317
  int v170; // r0@326
  int v171; // r6@326
  void *v172; // r0@326
  const char *v173; // r5@327
  void (__fastcall *v174)(int *, int, _DWORD); // r4@327
  int v175; // r7@327
  char *v176; // r0@327
  void *v177; // r0@327
  Options *v178; // r0@338
  Options *v179; // r0@344
  Options *v180; // r0@346
  Options *v181; // r0@364
  Options *v182; // r0@366
  Options *v183; // r0@373
  Options *v184; // r0@375
  Options *v185; // r0@385
  unsigned int *v187; // r2@395
  signed int v188; // r1@397
  unsigned int *v189; // r2@399
  signed int v190; // r1@401
  unsigned int *v191; // r2@403
  signed int v192; // r1@405
  unsigned int *v193; // r2@407
  signed int v194; // r1@409
  unsigned int *v195; // r2@411
  signed int v196; // r1@413
  unsigned int *v197; // r2@415
  signed int v198; // r1@417
  unsigned int *v199; // r2@419
  signed int v200; // r1@421
  unsigned int *v201; // r2@423
  signed int v202; // r1@425
  unsigned int *v203; // r2@427
  signed int v204; // r1@429
  unsigned int *v205; // r2@431
  signed int v206; // r1@433
  unsigned int *v207; // r2@435
  signed int v208; // r1@437
  unsigned int *v209; // r2@439
  signed int v210; // r1@441
  unsigned int *v211; // r2@491
  signed int v212; // r1@493
  unsigned int *v213; // r2@495
  signed int v214; // r1@497
  unsigned int *v215; // r2@499
  signed int v216; // r1@501
  unsigned int *v217; // r2@503
  signed int v218; // r1@505
  int v219; // [sp+4h] [bp-16Ch]@307
  int v220; // [sp+8h] [bp-168h]@306
  int v221; // [sp+Ch] [bp-164h]@306
  void *v222; // [sp+10h] [bp-160h]@308
  int v223; // [sp+1Ch] [bp-154h]@297
  int v224; // [sp+20h] [bp-150h]@296
  int v225; // [sp+24h] [bp-14Ch]@296
  void *v226; // [sp+28h] [bp-148h]@298
  int v227; // [sp+34h] [bp-13Ch]@284
  int v228; // [sp+38h] [bp-138h]@283
  int v229; // [sp+3Ch] [bp-134h]@283
  void *v230; // [sp+40h] [bp-130h]@285
  int v231; // [sp+4Ch] [bp-124h]@317
  int v232; // [sp+50h] [bp-120h]@316
  int v233; // [sp+54h] [bp-11Ch]@316
  void *v234; // [sp+58h] [bp-118h]@318
  int v235; // [sp+64h] [bp-10Ch]@274
  int v236; // [sp+68h] [bp-108h]@273
  int v237; // [sp+6Ch] [bp-104h]@273
  void *ptr; // [sp+70h] [bp-100h]@275
  int v239; // [sp+7Ch] [bp-F4h]@327
  int v240; // [sp+80h] [bp-F0h]@326
  int v241; // [sp+84h] [bp-ECh]@326
  void *v242; // [sp+88h] [bp-E8h]@328
  int v243; // [sp+94h] [bp-DCh]@137
  char v244; // [sp+9Bh] [bp-D5h]@136
  int v245; // [sp+9Ch] [bp-D4h]@122
  char v246; // [sp+A3h] [bp-CDh]@121
  int v247; // [sp+A4h] [bp-CCh]@188
  char v248; // [sp+A8h] [bp-C8h]@187
  char v249; // [sp+A9h] [bp-C7h]@374
  char v250; // [sp+AAh] [bp-C6h]@376
  char v251; // [sp+ABh] [bp-C5h]@367
  int v252; // [sp+ACh] [bp-C4h]@153
  int v253; // [sp+B0h] [bp-C0h]@211
  int v254; // [sp+B4h] [bp-BCh]@163
  int v255; // [sp+B8h] [bp-B8h]@82
  char v256; // [sp+BFh] [bp-B1h]@234
  char v257; // [sp+C0h] [bp-B0h]@170
  bool v258; // [sp+C1h] [bp-AFh]@129
  char v259; // [sp+C2h] [bp-AEh]@219
  char v260; // [sp+C3h] [bp-ADh]@271
  int v261; // [sp+C4h] [bp-ACh]@245
  int v262; // [sp+C8h] [bp-A8h]@245
  int v263; // [sp+CCh] [bp-A4h]@15
  int v264; // [sp+D0h] [bp-A0h]@15
  int v265; // [sp+D4h] [bp-9Ch]@143
  int v266; // [sp+D8h] [bp-98h]@143
  char v267; // [sp+DFh] [bp-91h]@92
  int v268; // [sp+E0h] [bp-90h]@207
  int v269; // [sp+E4h] [bp-8Ch]@207
  int v270; // [sp+E8h] [bp-88h]@207
  char *v271; // [sp+ECh] [bp-84h]@207
  char *v272; // [sp+F0h] [bp-80h]@207
  char *v273; // [sp+F4h] [bp-7Ch]@207
  int v274; // [sp+FCh] [bp-74h]@207
  int v275; // [sp+100h] [bp-70h]@207
  char v276; // [sp+104h] [bp-6Ch]@202
  int v277; // [sp+110h] [bp-60h]@202
  int v278; // [sp+114h] [bp-5Ch]@203
  int v279; // [sp+118h] [bp-58h]@206
  char v280; // [sp+11Dh] [bp-53h]@236
  char v281; // [sp+11Eh] [bp-52h]@240
  char v282; // [sp+11Fh] [bp-51h]@218
  float v283; // [sp+120h] [bp-50h]@372
  char v284; // [sp+124h] [bp-4Ch]@105
  char v285; // [sp+125h] [bp-4Bh]@223
  char v286; // [sp+126h] [bp-4Ah]@45
  char v287; // [sp+127h] [bp-49h]@23
  int v288; // [sp+128h] [bp-48h]@174
  char v289; // [sp+12Fh] [bp-41h]@108
  float v290; // [sp+130h] [bp-40h]@142
  char v291; // [sp+134h] [bp-3Ch]@386
  char v292; // [sp+135h] [bp-3Bh]@209
  char v293; // [sp+136h] [bp-3Ah]@339
  char v294; // [sp+137h] [bp-39h]@345
  char v295; // [sp+138h] [bp-38h]@337
  char v296; // [sp+139h] [bp-37h]@341
  char v297; // [sp+13Ah] [bp-36h]@343
  char v298; // [sp+13Bh] [bp-35h]@198

  _R6 = a1;
  v6 = a4;
  if ( a3 > -148341678 )
  {
    if ( a3 <= 1290689837 )
    {
      if ( a3 <= 526020207 )
      {
        if ( a3 > 354018260 )
        {
          if ( a3 == 354018261 )
          {
            v97 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
            if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
              v98 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
            else
              v98 = &ServiceLocator<AppPlatform>::mDefaultService;
            v162 = (*(int (**)(void))(**(_DWORD **)v98 + 460))();
            v163 = Options::getGamePadRemappingByType(v97, v162);
            Remapping::getActionName((void **)&v232, 3);
            RemappingLayout::getKeymappingByAction((int)&v233, v163, (const void **)&v232);
            v164 = (void *)(v232 - 12);
            if ( (int *)(v232 - 12) != &dword_28898C0 )
            {
              v195 = (unsigned int *)(v232 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v196 = __ldrex(v195);
                while ( __strex(v196 - 1, v195) );
              }
              else
                v196 = (*v195)--;
              if ( v196 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v164);
            }
            v165 = *v6;
            v166 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v163 + 24);
            v167 = *((_DWORD *)*v6 - 3);
            v168 = Keymapping::getKeys((Keymapping *)&v233);
            v166(&v231, v163, **(_DWORD **)v168);
            UIPropertyBag::set<std::string>(a5, v167, v165, (const void **)&v231);
            v169 = (void *)(v231 - 12);
            if ( (int *)(v231 - 12) != &dword_28898C0 )
              v207 = (unsigned int *)(v231 - 4);
                  v208 = __ldrex(v207);
                while ( __strex(v208 - 1, v207) );
                v208 = (*v207)--;
              if ( v208 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v169);
            if ( v234 )
              operator delete(v234);
            v57 = (void *)(v233 - 12);
            if ( (int *)(v233 - 12) == &dword_28898C0 )
              return 1;
            v58 = (unsigned int *)(v233 - 4);
            if ( !&pthread_create )
              goto LABEL_360;
            __dmb();
            do
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
          }
          else if ( a3 == 367555202 )
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1) != 1 )
            v77 = *v6;
            v78 = *((_DWORD *)*v6 - 3);
            if ( ClientInstanceScreenModel::isPlayerRiding(*(ClientInstanceScreenModel **)(_R6 + 424)) == 1 )
              sub_1590164((void **)&v252, "hudScreen.tooltip.dismount");
              sub_1590164((void **)&v252, (const char *)&unk_257BC67);
            UIPropertyBag::set<std::string>(a5, v78, v77, (const void **)&v252);
            v57 = (void *)(v252 - 12);
            if ( (int *)(v252 - 12) == &dword_28898C0 )
            v58 = (unsigned int *)(v252 - 4);
          else
            if ( a3 != 486579846 )
              return ScreenController::bind(a1, a2, a3, (int)a4, a5);
            v39 = MinecraftScreenModel::isSplitScreen(*(MinecraftScreenModel **)(a1 + 380));
            v40 = *v6;
            v41 = *((_DWORD *)*v6 - 3);
            if ( v39 != 1 )
              UIPropertyBag::set<std::string>(a5, *((_DWORD *)*v6 - 3), *v6, &Util::EMPTY_STRING);
            v42 = MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(_R6 + 424));
            v43 = *(_DWORD *)(_R6 + 424);
            if ( v42 == 1 )
              MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v255, v43);
              MinecraftScreenModel::getPlayerName((MinecraftScreenModel *)&v255, v43);
            UIPropertyBag::set<std::string>(a5, v41, v40, (const void **)&v255);
            v57 = (void *)(v255 - 12);
            if ( (int *)(v255 - 12) == &dword_28898C0 )
            v58 = (unsigned int *)(v255 - 4);
        }
        else if ( a3 == -148341677 )
          v88 = *a4;
          v89 = *((_DWORD *)*a4 - 3);
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1) != 1
            || (v90 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
                Options::getHideHud(v90))
            || (v91 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
                Options::getHideToolTips(v91)) )
            v92 = 0;
            LOBYTE(v93) = 0;
            HudScreenController::_getContextUseButton((HudScreenController *)&v247, _R6);
            v93 = sub_1590284((const void **)&v247, (const char *)&unk_257BC67);
            v92 = 1;
            if ( v93 )
              LOBYTE(v93) = 1;
          v248 = v93;
          UIPropertyBag::set<bool>(a5, v89, v88, &v248);
          if ( v92 != 1 )
            return 1;
          v57 = (void *)(v247 - 12);
          if ( (int *)(v247 - 12) == &dword_28898C0 )
          v58 = (unsigned int *)(v247 - 4);
          if ( !&pthread_create )
            goto LABEL_360;
          __dmb();
          do
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
        else
          if ( a3 != -109346890 )
            if ( a3 != 179383907 )
            v15 = *a4;
            v22 = *((_DWORD *)*a4 - 3);
            if ( *(_BYTE *)(a1 + 481) )
              LOBYTE(v31) = 0;
              v31 = ClientInstanceScreenModel::getPlayerArmorValue(*(ClientInstanceScreenModel **)(a1 + 424));
              if ( v31 )
                LOBYTE(v31) = 1;
            v260 = v31;
            v19 = &v260;
            goto LABEL_387;
          v73 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
          if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
            v74 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
            v74 = &ServiceLocator<AppPlatform>::mDefaultService;
          v135 = (*(int (**)(void))(**(_DWORD **)v74 + 460))();
          v136 = Options::getGamePadRemappingByType(v73, v135);
          Remapping::getActionName((void **)&v228, 0);
          RemappingLayout::getKeymappingByAction((int)&v229, v136, (const void **)&v228);
          v137 = (void *)(v228 - 12);
          if ( (int *)(v228 - 12) != &dword_28898C0 )
            v189 = (unsigned int *)(v228 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v190 = __ldrex(v189);
              while ( __strex(v190 - 1, v189) );
              v190 = (*v189)--;
            if ( v190 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v137);
          v138 = *v6;
          v139 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v136 + 24);
          v140 = *((_DWORD *)*v6 - 3);
          v141 = Keymapping::getKeys((Keymapping *)&v229);
          v139(&v227, v136, **(_DWORD **)v141);
          UIPropertyBag::set<std::string>(a5, v140, v138, (const void **)&v227);
          v142 = (void *)(v227 - 12);
          if ( (int *)(v227 - 12) != &dword_28898C0 )
            v201 = (unsigned int *)(v227 - 4);
                v202 = __ldrex(v201);
              while ( __strex(v202 - 1, v201) );
              v202 = (*v201)--;
            if ( v202 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v142);
          if ( v230 )
            operator delete(v230);
          v57 = (void *)(v229 - 12);
          if ( (int *)(v229 - 12) == &dword_28898C0 )
          v58 = (unsigned int *)(v229 - 4);
        goto LABEL_361;
      }
      if ( a3 > 938907015 )
        if ( a3 <= 1161350969 )
          if ( a3 == 938907016 )
            v85 = *a4;
            v86 = *((_DWORD *)*a4 - 3);
            v87 = ClientInstanceScreenModel::getPlayerLevel(*(ClientInstanceScreenModel **)(a1 + 424));
            Util::toString<int,(void *)0,(void *)0>((void **)&v288, v87);
            UIPropertyBag::set<std::string>(a5, v86, v85, (const void **)&v288);
            v57 = (void *)(v288 - 12);
            if ( (int *)(v288 - 12) == &dword_28898C0 )
            v58 = (unsigned int *)(v288 - 4);
            if ( a3 != 1065278871 )
            v20 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
              v21 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
              v21 = &ServiceLocator<AppPlatform>::mDefaultService;
            v146 = (*(int (**)(void))(**(_DWORD **)v21 + 460))();
            v147 = Options::getGamePadRemappingByType(v20, v146);
            Remapping::getActionName((void **)&v224, 2);
            RemappingLayout::getKeymappingByAction((int)&v225, v147, (const void **)&v224);
            v148 = (void *)(v224 - 12);
            if ( (int *)(v224 - 12) != &dword_28898C0 )
              v191 = (unsigned int *)(v224 - 4);
                  v192 = __ldrex(v191);
                while ( __strex(v192 - 1, v191) );
                v192 = (*v191)--;
              if ( v192 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v148);
            v149 = *v6;
            v150 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v147 + 24);
            v151 = *((_DWORD *)*v6 - 3);
            v152 = Keymapping::getKeys((Keymapping *)&v225);
            v150(&v223, v147, **(_DWORD **)v152);
            UIPropertyBag::set<std::string>(a5, v151, v149, (const void **)&v223);
            v153 = (void *)(v223 - 12);
            if ( (int *)(v223 - 12) != &dword_28898C0 )
              v203 = (unsigned int *)(v223 - 4);
                  v204 = __ldrex(v203);
                while ( __strex(v204 - 1, v203) );
                v204 = (*v203)--;
              if ( v204 <= 0 )
                j_j_j_j_j__ZdlPv_9_2(v153);
            if ( v226 )
              operator delete(v226);
            v57 = (void *)(v225 - 12);
            if ( (int *)(v225 - 12) == &dword_28898C0 )
            v58 = (unsigned int *)(v225 - 4);
          goto LABEL_361;
        if ( a3 != 1161350970 )
          if ( a3 == 1192307977 )
            v7 = *a4;
            v8 = (const void **)(a1 + 440);
            v9 = *((_DWORD *)*v6 - 3);
            goto LABEL_159;
          return ScreenController::bind(a1, a2, a3, (int)a4, a5);
        v28 = *a4;
        v29 = (char *)(a1 + 482);
        v30 = *((_DWORD *)*v6 - 3);
LABEL_182:
        UIPropertyBag::set<bool>(a5, v30, v28, v29);
        return 1;
      if ( a3 == 526020208 )
        v15 = *a4;
        v22 = *((_DWORD *)*a4 - 3);
        if ( MinecraftScreenModel::isEnabledTouchOrHolographic(*(MinecraftScreenModel **)(a1 + 424)) == 1 )
          v79 = MinecraftScreenModel::isLeftHanded(*(MinecraftScreenModel **)(_R6 + 424)) ^ 1;
          v79 = 0;
        v280 = v79;
        v19 = &v280;
        goto LABEL_387;
      if ( a3 != 606940609 )
        if ( a3 != 828918597 )
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1 + 104))(a1) == 1 )
          v35 = (ItemInstance *)ClientInstanceScreenModel::getSelectedItem(*(ClientInstanceScreenModel **)(_R6 + 424));
          if ( ItemInstance::isNull(v35) )
            v36 = 0;
            v180 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
            if ( Options::getHideHud(v180) )
              v36 = 0;
              v183 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
              v36 = Options::getHideToolTips(v183) ^ 1;
          v36 = 0;
        v249 = v36;
        v19 = &v249;
      v11 = *a4;
      v12 = 1;
      v13 = &v265;
      v14 = *((_DWORD *)*v6 - 3);
      v265 = 1;
      v266 = 10;
    }
    else if ( a3 > 1796766992 )
      if ( a3 <= 1919099257 )
        if ( a3 == 1796766993 )
          v15 = *a4;
          v16 = *((_DWORD *)*a4 - 3);
          v106 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
          v292 = Options::getHidePaperDoll(v106) ^ 1;
          v19 = &v292;
          if ( a3 == 1813023250 )
            v49 = *a4;
            v50 = "hudScreen.tooltip.dropItem";
            goto LABEL_169;
          if ( a3 != 1836120962 )
            return ScreenController::bind(a1, a2, a3, (int)a4, a5);
          v48 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
          v284 = Options::getHideHud(v48) ^ 1;
          v19 = &v284;
        goto LABEL_224;
      if ( a3 <= 1963443106 )
        if ( a3 != 1919099258 )
          if ( a3 != 1949386411 )
          v22 = *((_DWORD *)*a4 - 3);
          v24 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
          v25 = Options::getShowAutoSaveIcon(v24);
          v26 = 0;
          if ( v25 == 1 )
            v27 = *(_WORD *)(_R6 + 484);
            if ( v27 < 0x100 )
              v26 = 1;
            v26 |= (_BYTE)v27 != 0;
          v286 = v26;
          v19 = &v286;
          goto LABEL_387;
        v16 = *((_DWORD *)*a4 - 3);
        v259 = MinecraftScreenModel::isRiding(*(MinecraftScreenModel **)(a1 + 424));
        v19 = &v259;
      if ( a3 != 1963443107 )
        if ( a3 != 2041300630 )
        v60 = *a4;
        v61 = *((_DWORD *)*a4 - 3);
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1 + 104))(a1) != 1
          || (v62 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
              Options::getHideHud(v62))
          || (v63 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
              Options::getHideToolTips(v63)) )
          v64 = 0;
          LOBYTE(v65) = 0;
          if ( ClientInstanceScreenModel::isPlayerRiding(*(ClientInstanceScreenModel **)(_R6 + 424)) == 1 )
            sub_1590164((void **)&v243, "hudScreen.tooltip.dismount");
            sub_1590164((void **)&v243, (const char *)&unk_257BC67);
          v65 = sub_1590284((const void **)&v243, (const char *)&unk_257BC67);
          v64 = 1;
          if ( v65 )
            LOBYTE(v65) = 1;
        v244 = v65;
        UIPropertyBag::set<bool>(a5, v61, v60, &v244);
        if ( v64 != 1 )
          return 1;
        v57 = (void *)(v243 - 12);
        if ( (int *)(v243 - 12) == &dword_28898C0 )
        v58 = (unsigned int *)(v243 - 4);
        if ( !&pthread_create )
          goto LABEL_360;
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      if ( MinecraftScreenModel::hasFixedInventory(*(MinecraftScreenModel **)(a1 + 424)) == 1 )
        v118 = MinecraftScreenModel::getFixedInventorySlotCount(*(MinecraftScreenModel **)(_R6 + 424));
      else
        v118 = 0;
      v11 = *v6;
      v13 = &v261;
      v261 = v118;
      v262 = 1;
    else
      if ( a3 <= 1483541286 )
        if ( a3 == 1290689838 )
          v100 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
            v101 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
            v101 = &ServiceLocator<AppPlatform>::mDefaultService;
          v170 = (*(int (**)(void))(**(_DWORD **)v101 + 460))();
          v171 = Options::getGamePadRemappingByType(v100, v170);
          Remapping::getActionName((void **)&v240, 14);
          RemappingLayout::getKeymappingByAction((int)&v241, v171, (const void **)&v240);
          v172 = (void *)(v240 - 12);
          if ( (int *)(v240 - 12) != &dword_28898C0 )
            v197 = (unsigned int *)(v240 - 4);
                v198 = __ldrex(v197);
              while ( __strex(v198 - 1, v197) );
              v198 = (*v197)--;
            if ( v198 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v172);
          v173 = *v6;
          v174 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v171 + 24);
          v175 = *((_DWORD *)*v6 - 3);
          v176 = Keymapping::getKeys((Keymapping *)&v241);
          v174(&v239, v171, **(_DWORD **)v176);
          UIPropertyBag::set<std::string>(a5, v175, v173, (const void **)&v239);
          v177 = (void *)(v239 - 12);
          if ( (int *)(v239 - 12) != &dword_28898C0 )
            v209 = (unsigned int *)(v239 - 4);
                v210 = __ldrex(v209);
              while ( __strex(v210 - 1, v209) );
              v210 = (*v209)--;
            if ( v210 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v177);
          if ( v242 )
            operator delete(v242);
          v57 = (void *)(v241 - 12);
          if ( (int *)(v241 - 12) == &dword_28898C0 )
          v58 = (unsigned int *)(v241 - 4);
          if ( a3 != 1406248421 )
            if ( a3 != 1438907420 )
            v16 = *((_DWORD *)*a4 - 3);
            v267 = MinecraftScreenModel::hasFixedInventory(*(MinecraftScreenModel **)(a1 + 424));
            v19 = &v267;
            goto LABEL_224;
          v80 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
            v81 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
            v81 = &ServiceLocator<AppPlatform>::mDefaultService;
          v154 = (*(int (**)(void))(**(_DWORD **)v81 + 460))();
          v155 = Options::getGamePadRemappingByType(v80, v154);
          Remapping::getActionName((void **)&v220, 17);
          RemappingLayout::getKeymappingByAction((int)&v221, v155, (const void **)&v220);
          v156 = (void *)(v220 - 12);
          if ( (int *)(v220 - 12) != &dword_28898C0 )
            v193 = (unsigned int *)(v220 - 4);
                v194 = __ldrex(v193);
              while ( __strex(v194 - 1, v193) );
              v194 = (*v193)--;
            if ( v194 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v156);
          v157 = *v6;
          v158 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v155 + 24);
          v159 = *((_DWORD *)*v6 - 3);
          v160 = Keymapping::getKeys((Keymapping *)&v221);
          v158(&v219, v155, **(_DWORD **)v160);
          UIPropertyBag::set<std::string>(a5, v159, v157, (const void **)&v219);
          v161 = (void *)(v219 - 12);
          if ( (int *)(v219 - 12) != &dword_28898C0 )
            v205 = (unsigned int *)(v219 - 4);
                v206 = __ldrex(v205);
              while ( __strex(v206 - 1, v205) );
              v206 = (*v205)--;
            if ( v206 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v161);
          if ( v222 )
            operator delete(v222);
          v57 = (void *)(v221 - 12);
          if ( (int *)(v221 - 12) == &dword_28898C0 )
          v58 = (unsigned int *)(v221 - 4);
      if ( a3 > 1745450881 )
        if ( a3 == 1745450882 )
          v285 = ClientInstanceScreenModel::shouldDisplayPlayerPosition(*(ClientInstanceScreenModel **)(a1 + 424));
          v19 = &v285;
          goto LABEL_224;
        if ( a3 != 1779374468 )
        v51 = *a4;
        v52 = *((_DWORD *)*a4 - 3);
          || (v53 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
              Options::getHideHud(v53))
          || (v54 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424)),
              Options::getHideToolTips(v54)) )
          v55 = 0;
          LOBYTE(v56) = 0;
          HudScreenController::_getContextAttackButton((HudScreenController *)&v245, _R6);
          v56 = sub_1590284((const void **)&v245, (const char *)&unk_257BC67);
          v55 = 1;
          if ( v56 )
            LOBYTE(v56) = 1;
        v246 = v56;
        UIPropertyBag::set<bool>(a5, v52, v51, &v246);
        if ( v55 != 1 )
        v57 = (void *)(v245 - 12);
        if ( (int *)(v245 - 12) == &dword_28898C0 )
        v58 = (unsigned int *)(v245 - 4);
      if ( a3 == 1483541287 )
        if ( MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(a1 + 424)) )
          v109 = 0;
          v119 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          if ( Options::getHideHud(v119) )
            v109 = 0;
          else if ( *(_BYTE *)(_R6 + 480) )
            v185 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
            v109 = Options::getHidePaperDoll(v185) ^ 1;
        v291 = v109;
        v19 = &v291;
      if ( a3 != 1495400401 )
        return ScreenController::bind(a1, a2, a3, (int)a4, a5);
      v10 = MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(a1 + 424));
      v13 = &v263;
      v263 = v10;
      v264 = 1;
    UIPropertyBag::set(a5, v14, v11, (int)v13);
    return v12;
  }
  if ( a3 <= -1102091514 )
    if ( a3 > -1716160813 )
      if ( a3 <= -1309046255 )
        if ( a3 == -1716160812 )
          if ( *(_BYTE *)(a1 + 588) )
            __asm { VLDR            S0, [R6,#0x248] }
            v143 = MinecraftScreenModel::isSplitScreen(*(MinecraftScreenModel **)(a1 + 424));
            v144 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
            if ( v143 == 1 )
              _R0 = Options::getSplitscreenInterfaceOpacity(v144);
              _R0 = Options::getInterfaceOpacity(v144);
            __asm { VMOV            S0, R0 }
          __asm { VSTR            S0, [SP,#0x170+var_50] }
          UIPropertyBag::set<float>(a5, *((_DWORD *)*v6 - 3), *v6, (int)&v283);
        if ( a3 == -1658657439 )
          v66 = *a4;
          v67 = *((_DWORD *)*a4 - 3);
          _R0 = ClientInstanceScreenModel::getPlayerExp(*(ClientInstanceScreenModel **)(a1 + 424));
          __asm
            VMOV.F32        S0, #1.0
            VMOV            S2, R0
            VSUB.F32        S0, S0, S2
            VSTR            S0, [SP,#0x170+var_40]
          UIPropertyBag::set<float>(a5, v67, v66, (int)&v290);
        if ( a3 != -1651846747 )
        v32 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
        if ( Options::getUIProfile(v32)
          && MinecraftScreenModel::isRealityFullVRMode(*(MinecraftScreenModel **)(_R6 + 424)) != 1 )
          LOBYTE(v34) = 0;
          v33 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          if ( Options::getHideHud(v33) )
            LOBYTE(v34) = 0;
            v34 = *(_BYTE *)(_R6 + 480);
        v295 = v34;
        v19 = &v295;
      if ( a3 > -1203310914 )
        if ( a3 == -1203310913 )
          UIPropertyBag::set<char [28]>(a5, *((_DWORD *)*a4 - 3), *a4, "hudScreen.tooltip.inventory");
        if ( a3 != -1196802154 )
        v29 = &v289;
        v289 = *(_BYTE *)(a1 + 481) ^ 1;
        if ( a3 != -1309046254 )
          if ( a3 != -1303009871 )
          v17 = ClientInstanceScreenModel::getPlayerLevel(*(ClientInstanceScreenModel **)(a1 + 424));
          v18 = 0;
          if ( v17 > 0 )
            v18 = 1;
          v19 = &v287;
          v287 = v18;
        v29 = &v257;
        if ( *(_BYTE *)(a1 + 482) )
          v84 = *(_BYTE *)(a1 + 480) ^ 1;
          v84 = 0;
        v257 = v84;
      goto LABEL_182;
    if ( a3 <= -1992076512 )
      if ( a3 == -2100775482 )
        v29 = (char *)(a1 + 480);
        if ( a3 == -2016186169 )
          if ( MinecraftScreenModel::isVRMode(*(MinecraftScreenModel **)(a1 + 424)) == 1 )
            v72 = MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(_R6 + 424));
            v72 = 0;
          v256 = v72;
          v19 = &v256;
        if ( a3 != -2005014248 )
        v29 = (char *)(a1 + 481);
    if ( a3 == -1992076511 )
      v15 = *a4;
      v22 = *((_DWORD *)*a4 - 3);
      v94 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
      if ( Options::getUIProfile(v94)
        && MinecraftScreenModel::isRealityFullVRMode(*(MinecraftScreenModel **)(_R6 + 424)) != 1 )
        v96 = 0;
        v95 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
        v96 = Options::getHideHud(v95) ^ 1;
      v19 = &v297;
      v297 = v96;
      goto LABEL_387;
    if ( a3 == -1963458974 )
      v75 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
      if ( Options::getUIProfile(v75) )
        if ( MinecraftScreenModel::isRealityFullVRMode(*(MinecraftScreenModel **)(_R6 + 424)) )
          v76 = 0;
          v178 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          v76 = Options::getHideHud(v178) ^ 1;
        v76 = 0;
      v293 = v76;
      v19 = &v293;
    if ( a3 != -1919521664 )
      return ScreenController::bind(a1, a2, a3, (int)a4, a5);
    v37 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v38 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v38 = &ServiceLocator<AppPlatform>::mDefaultService;
    v127 = (*(int (**)(void))(**(_DWORD **)v38 + 460))();
    v128 = Options::getGamePadRemappingByType(v37, v127);
    Remapping::getActionName((void **)&v236, 24);
    RemappingLayout::getKeymappingByAction((int)&v237, v128, (const void **)&v236);
    v129 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v187 = (unsigned int *)(v236 - 4);
      if ( &pthread_create )
          v188 = __ldrex(v187);
        while ( __strex(v188 - 1, v187) );
        v188 = (*v187)--;
      if ( v188 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v129);
    v130 = *v6;
    v131 = *(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)v128 + 24);
    v132 = *((_DWORD *)*v6 - 3);
    v133 = Keymapping::getKeys((Keymapping *)&v237);
    v131(&v235, v128, **(_DWORD **)v133);
    UIPropertyBag::set<std::string>(a5, v132, v130, (const void **)&v235);
    v134 = (void *)(v235 - 12);
    if ( (int *)(v235 - 12) != &dword_28898C0 )
      v199 = (unsigned int *)(v235 - 4);
          v200 = __ldrex(v199);
        while ( __strex(v200 - 1, v199) );
        v200 = (*v199)--;
      if ( v200 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v134);
    if ( ptr )
      operator delete(ptr);
    v57 = (void *)(v237 - 12);
    if ( (int *)(v237 - 12) == &dword_28898C0 )
      return 1;
    v58 = (unsigned int *)(v237 - 4);
    if ( !&pthread_create )
      goto LABEL_360;
    __dmb();
    do
      v59 = __ldrex(v58);
    while ( __strex(v59 - 1, v58) );
LABEL_361:
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v57);
    return 1;
  if ( a3 <= -867540490 )
    if ( a3 > -1046726749 )
      if ( a3 <= -946850062 )
        if ( a3 != -1046726748 )
          if ( a3 == -990292413 )
            v8 = (const void **)(a1 + 448);
LABEL_159:
            UIPropertyBag::set<std::string>(a5, v9, v7, v8);
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1 + 104))(a1) != 1 )
        v107 = *v6;
        v108 = *((_DWORD *)*v6 - 3);
        HudScreenController::_getContextAttackButton((HudScreenController *)&v253, _R6);
        UIPropertyBag::set<std::string>(a5, v108, v107, (const void **)&v253);
        v57 = (void *)(v253 - 12);
        if ( (int *)(v253 - 12) == &dword_28898C0 )
        v58 = (unsigned int *)(v253 - 4);
        if ( &pthread_create )
LABEL_360:
        v59 = (*v58)--;
      if ( a3 != -946850061 )
        if ( a3 == -895190963 )
          v49 = *a4;
          v50 = "hudScreen.tooltip.crafting";
LABEL_169:
          UIPropertyBag::set<char [27]>(a5, *((_DWORD *)v49 - 3), v49, v50);
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1 + 104))(a1) == 1 )
        v112 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
        if ( Options::getHideHud(v112) )
          v113 = 0;
          v182 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          v113 = Options::getHideToolTips(v182) ^ 1;
        v113 = 0;
      v251 = v113;
      v19 = &v251;
    if ( a3 != -1102091513 )
      if ( a3 == -1079593822 )
        v7 = *a4;
        v8 = (const void **)(a1 + 444);
        v9 = *((_DWORD *)*v6 - 3);
        goto LABEL_159;
      if ( a3 != -1061926756 )
        if ( MinecraftScreenModel::getPlayerGameType(*(MinecraftScreenModel **)(_R6 + 380)) == 1 )
          v44 = 0;
          v181 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          if ( Options::getHideHud(v181) )
            v44 = 0;
            v184 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
            v44 = Options::getHideToolTips(v184) ^ 1;
        v44 = 0;
      v250 = v44;
      v19 = &v250;
    v15 = *a4;
    v16 = *((_DWORD *)*a4 - 3);
    v99 = MinecraftScreenModel::isEnabledTouchOrHolographic(*(MinecraftScreenModel **)(a1 + 424));
    v19 = &v298;
    v298 = v99;
LABEL_224:
    v114 = a5;
    v115 = v16;
LABEL_388:
    UIPropertyBag::set<bool>(v114, v115, v15, v19);
  if ( a3 <= -683516677 )
    if ( a3 == -867540489 )
      if ( ClientInstanceScreenModel::shouldDisplayPlayerPosition(*(ClientInstanceScreenModel **)(a1 + 424)) != 1 )
        UIPropertyBag::set<char [1]>(a5, *((_DWORD *)*v6 - 3), *v6, (const char *)&unk_257BC67);
      ClientInstanceScreenModel::getPlayerPosition((ClientInstanceScreenModel *)&v276, *(_DWORD *)(_R6 + 424));
      BlockPos::BlockPos((int)&v277, (int)&v276);
      v102 = *(_DWORD *)(_R6 + 456);
      _ZF = v277 == v102;
      if ( v277 == v102 )
        _ZF = v278 == *(_DWORD *)(_R6 + 460);
      if ( _ZF && v279 == *(_DWORD *)(_R6 + 464) )
      *(_QWORD *)(_R6 + 456) = *(_QWORD *)&v277;
      *(_DWORD *)(_R6 + 464) = v279;
      sub_1590164((void **)&v274, "map.position");
      Util::toString<int,(void *)0,(void *)0>((void **)&v268, v277);
      Util::toString<int,(void *)0,(void *)0>((void **)&v269, v278);
      Util::toString<int,(void *)0,(void *)0>((void **)&v270, v279);
      v271 = 0;
      v272 = 0;
      v273 = 0;
      v271 = (char *)operator new(0xCu);
      v273 = v271 + 12;
      v272 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v268,
                       (int)&v271,
                       (int)v271);
      I18n::get(&v275, &v274, (unsigned __int64 *)&v271);
      v104 = (int)v272;
      v105 = v271;
      if ( v271 != v272 )
          v122 = (int *)(*(_DWORD *)v105 - 12);
          if ( v122 != &dword_28898C0 )
            v120 = (unsigned int *)(*(_DWORD *)v105 - 4);
                v121 = __ldrex(v120);
              while ( __strex(v121 - 1, v120) );
              v121 = (*v120)--;
            if ( v121 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v122);
          v105 += 4;
        while ( v105 != (char *)v104 );
        v105 = v271;
      if ( v105 )
        operator delete(v105);
      v123 = (void *)(v270 - 12);
      if ( (int *)(v270 - 12) != &dword_28898C0 )
        v211 = (unsigned int *)(v270 - 4);
            v212 = __ldrex(v211);
          while ( __strex(v212 - 1, v211) );
          v212 = (*v211)--;
        if ( v212 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v123);
      v124 = (void *)(v269 - 12);
      if ( (int *)(v269 - 12) != &dword_28898C0 )
        v213 = (unsigned int *)(v269 - 4);
            v214 = __ldrex(v213);
          while ( __strex(v214 - 1, v213) );
          v214 = (*v213)--;
        if ( v214 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v124);
      v125 = (void *)(v268 - 12);
      if ( (int *)(v268 - 12) != &dword_28898C0 )
        v215 = (unsigned int *)(v268 - 4);
            v216 = __ldrex(v215);
          while ( __strex(v216 - 1, v215) );
          v216 = (*v215)--;
        if ( v216 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v125);
      v126 = (void *)(v274 - 12);
      if ( (int *)(v274 - 12) != &dword_28898C0 )
        v217 = (unsigned int *)(v274 - 4);
            v218 = __ldrex(v217);
          while ( __strex(v218 - 1, v217) );
          v218 = (*v217)--;
        if ( v218 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v126);
      UIPropertyBag::set<std::string>(a5, *((_DWORD *)*v6 - 3), *v6, (const void **)&v275);
      v57 = (void *)(v275 - 12);
      if ( (int *)(v275 - 12) == &dword_28898C0 )
      v58 = (unsigned int *)(v275 - 4);
      if ( !&pthread_create )
        goto LABEL_360;
      __dmb();
      do
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      if ( a3 != -851173757 )
        if ( a3 != -686969605 )
        v45 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
        if ( Options::getUIProfile(v45)
          LOBYTE(v47) = 0;
          v46 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
          if ( Options::getHideHud(v46) )
            LOBYTE(v47) = 0;
            v47 = (unsigned __int8)(*(_BYTE *)(_R6 + 480) ^ 1);
        v296 = v47;
        v19 = &v296;
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1 + 104))(a1) != 1 )
      v82 = *v6;
      v83 = *((_DWORD *)*v6 - 3);
      HudScreenController::_getContextUseButton((HudScreenController *)&v254, _R6);
      UIPropertyBag::set<std::string>(a5, v83, v82, (const void **)&v254);
      v57 = (void *)(v254 - 12);
      if ( (int *)(v254 - 12) == &dword_28898C0 )
      v58 = (unsigned int *)(v254 - 4);
    goto LABEL_361;
  if ( a3 > -219289660 )
    if ( a3 != -219289659 )
      if ( a3 != -190499420 )
      v16 = *((_DWORD *)*a4 - 3);
      v258 = !MinecraftScreenModel::isRiding(*(MinecraftScreenModel **)(a1 + 424));
      v19 = (char *)&v258;
      goto LABEL_224;
    v22 = *((_DWORD *)*a4 - 3);
    v116 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
    if ( Options::getUIProfile(v116) )
      if ( MinecraftScreenModel::isRealityFullVRMode(*(MinecraftScreenModel **)(_R6 + 424)) )
        v117 = 0;
        v179 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(_R6 + 424));
        v117 = Options::getHideHud(v179) ^ 1;
      v117 = 0;
    v294 = v117;
    v19 = &v294;
LABEL_387:
    v115 = v22;
    goto LABEL_388;
  if ( a3 != -683516676 )
    if ( a3 != -643645367 )
    if ( MinecraftScreenModel::isEnabledTouchOrHolographic(*(MinecraftScreenModel **)(a1 + 424)) == 1 )
      v23 = MinecraftScreenModel::isLeftHanded(*(MinecraftScreenModel **)(_R6 + 424));
      v23 = 0;
    v281 = v23;
    v19 = &v281;
    goto LABEL_387;
  v110 = *a4;
  v12 = 1;
  v111 = *((_DWORD *)*a4 - 3);
  v282 = 1;
  UIPropertyBag::set<bool>(a5, v111, v110, &v282);
  return v12;
}


int __fastcall HudScreenController::_showClassicUI(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  Options *v2; // r0@1
  int result; // r0@3
  Options *v4; // r0@4

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  if ( Options::getUIProfile(v2) && MinecraftScreenModel::isRealityFullVRMode(*((MinecraftScreenModel **)v1 + 106)) != 1 )
  {
    result = 0;
  }
  else
    v4 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    result = Options::getHideHud(v4) ^ 1;
  return result;
}


int __fastcall HudScreenController::handleGameEventNotification(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r5@1

  v2 = this;
  if ( (unsigned int)(a2 - 10) <= 9 )
  {
    switch ( a2 )
    {
      case 0:
        break;
      case 1:
        HudScreenController::_handleNewTitleText(this);
        return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE_0((int)v2);
      default:
      case 3:
        HudScreenController::_handleNewActionBarMessage(this);
      case 8:
        *((_BYTE *)this + 484) = 1;
      case 9:
        *((_BYTE *)this + 484) = 0;
        Stopwatch::start((HudScreenController *)((char *)this + 488));
    }
    *((_DWORD *)v2 + 117) |= 1u;
  }
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE_0((int)v2);
}


int __fastcall HudScreenController::_isToolTipsHidden(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  Options *v2; // r0@1
  int result; // r0@2
  Options *v4; // r0@3

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  if ( Options::getHideHud(v2) )
  {
    result = 1;
  }
  else
    v4 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    result = Options::getHideToolTips(v4);
  return result;
}


char *__fastcall HudScreenController::_handleChatMessages(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  char *result; // r0@1
  GuiMessage *i; // r5@2
  GuiMessage *v4; // r7@2
  char *v5; // r6@5
  int v6; // r0@5

  v1 = this;
  result = (char *)ClientInstanceScreenModel::isChatMute(*((ClientInstanceScreenModel **)this + 106));
  if ( !result )
  {
    result = ClientInstanceScreenModel::getGuiMessageList(*((ClientInstanceScreenModel **)v1 + 106));
    v4 = (GuiMessage *)(*(_QWORD *)result >> 32);
    for ( i = (GuiMessage *)*(_QWORD *)result; v4 != i; i = (GuiMessage *)((char *)i + 24) )
    {
      result = (char *)GuiMessage::hasBeenSeen(i);
      if ( !result )
      {
        result = (char *)GuiMessage::isAlive(i);
        if ( result == (char *)1 )
        {
          v5 = GuiMessage::getString(i);
          v6 = GuiMessage::getDuration(i);
          HudScreenController::_pushNewChatMessage((int)v1, (const void **)v5, v6);
          result = (char *)GuiMessage::setHasBeenSeen(i);
        }
      }
    }
  }
  return result;
}


UIPropertyBag *__fastcall HudScreenController::_handleNewTitleText(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  const void **v4; // r0@1
  char *v5; // r0@1
  void *v13; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  int v17; // [sp+4h] [bp-6Ch]@1
  float v18; // [sp+8h] [bp-68h]@1
  int v19; // [sp+Ch] [bp-64h]@1
  const char *v20; // [sp+10h] [bp-60h]@1
  float v21; // [sp+14h] [bp-5Ch]@1
  float v22; // [sp+18h] [bp-58h]@1
  int v23; // [sp+1Ch] [bp-54h]@1
  const char *v24; // [sp+20h] [bp-50h]@1
  char v25; // [sp+27h] [bp-49h]@1
  char v26; // [sp+28h] [bp-48h]@1

  v1 = this;
  v2 = ClientInstanceScreenModel::getTitleMessage(*((ClientInstanceScreenModel **)this + 106));
  v3 = UIPropertyBag::UIPropertyBag((int)&v26);
  UIPropertyBag::set<char [15]>(v3, 4, "name", "hud_title_text");
  UIPropertyBag::set<char [15]>((int)&v26, 10, "control_id", "hud_title_text");
  v25 = 1;
  UIPropertyBag::set<bool>((int)&v26, 9, "exclusive", &v25);
  v4 = (const void **)TitleMessage::getTitle((TitleMessage *)v2);
  UIPropertyBag::set<std::string>((int)&v26, 11, "$title_text", v4);
  v5 = TitleMessage::getSubtitle((TitleMessage *)v2);
  UIPropertyBag::set<std::string>((int)&v26, 14, "$subtitle_text", (const void **)v5);
  gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v23, (int)"$title_fade_in_time");
  _R0 = TitleMessage::getFadeInTime((TitleMessage *)v2);
  __asm
  {
    VMOV            S0, R0
    VLDR            S16, =0.05
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S16
    VSTR            S0, [SP,#0x70+var_58]
  }
  UIPropertyBag::set<float>((int)&v26, v23, v24, (int)&v22);
  _R0 = TitleMessage::getStayTime((TitleMessage *)v2);
    VSTR            S0, [SP,#0x70+var_5C]
  UIPropertyBag::set<float>((int)&v26, 16, "$title_stay_time", (int)&v21);
  gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v19, (int)"$title_fade_out_time");
  _R0 = TitleMessage::getFadeOutTime((TitleMessage *)v2);
    VSTR            S0, [SP,#0x70+var_68]
  UIPropertyBag::set<float>((int)&v26, v19, v20, (int)&v18);
  sub_1590164((void **)&v17, "hud_title_text_factory");
  if ( !*((_DWORD *)v1 + 3) )
    sub_1590214();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v17, &v26);
  v13 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  ClientInstanceScreenModel::clearTitleMessages(*((ClientInstanceScreenModel **)v1 + 106));
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v26);
}


int __fastcall HudScreenController::onBossEvent(int result, unsigned int a2)
{
  if ( a2 <= 7 )
    *(_DWORD *)(result + 468) |= 1u;
  return result;
}


UIPropertyBag *__fastcall HudScreenController::_handleNewPopupItemText(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  char *v2; // r6@1
  int v3; // r0@2
  const char *v4; // r3@3
  const char *v5; // r3@6
  void *v6; // r0@10
  UIPropertyBag *result; // r0@12
  int v8; // r0@13
  const char *v9; // r3@14
  const char *v10; // r3@17
  void *v11; // r0@21
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  unsigned int *v14; // r2@28
  signed int v15; // r1@30
  int v16; // [sp+4h] [bp-84h]@20
  const char *v17; // [sp+8h] [bp-80h]@16
  char v18; // [sp+Fh] [bp-79h]@13
  char v19; // [sp+10h] [bp-78h]@13
  int v20; // [sp+3Ch] [bp-4Ch]@9
  const char *v21; // [sp+40h] [bp-48h]@5
  char v22; // [sp+47h] [bp-41h]@2
  char v23; // [sp+48h] [bp-40h]@2
  char v24; // [sp+73h] [bp-15h]@1

  v1 = this;
  v24 = 0;
  v2 = (char *)this + 481;
  if ( MinecraftScreenModel::getNewPopupItemText(*((_DWORD *)this + 106), (int *)this + 110, (_BYTE *)this + 481, &v24) == 1 )
  {
    v3 = UIPropertyBag::UIPropertyBag((int)&v23);
    UIPropertyBag::set<char [16]>(v3, 4, "name", "popup_item_text");
    v22 = 1;
    UIPropertyBag::set<bool>((int)&v23, 9, "exclusive", &v22);
    if ( v24 )
    {
      v4 = "create_item_text_above_interact_button";
      if ( !*v2 )
        v4 = "survival_item_text_above_interact_button";
      v21 = v4;
      UIPropertyBag::set<char const*>((int)&v23, 10, "control_id", &v21);
    }
    else
      v5 = "creative_item_text";
        v5 = "survival_item_text";
      UIPropertyBag::set<char [19]>((int)&v23, 10, "control_id", v5);
    sub_1590164((void **)&v20, "item_text_factory");
    if ( !*((_DWORD *)v1 + 3) )
      sub_1590214();
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v20, &v23);
    v6 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v6);
    UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v23);
  }
  result = (UIPropertyBag *)MinecraftScreenModel::getNewJukeboxPopupItemText(
                              *((_DWORD *)v1 + 106),
                              (int *)v1 + 111,
                              v2,
                              &v24);
  if ( result == (UIPropertyBag *)1 )
    v8 = UIPropertyBag::UIPropertyBag((int)&v19);
    UIPropertyBag::set<char [19]>(v8, 4, "name", "popup_jukebox_text");
    v18 = 1;
    UIPropertyBag::set<bool>((int)&v19, 9, "exclusive", &v18);
      v9 = "create_jukebox_text_above_interact_button";
        v9 = "survival_jukebox_text_above_interact_button";
      v17 = v9;
      UIPropertyBag::set<char const*>((int)&v19, 10, "control_id", &v17);
      v10 = "creative_jukebox_text";
        v10 = "survival_jukebox_text";
      UIPropertyBag::set<char [22]>((int)&v19, 10, "control_id", v10);
    sub_1590164((void **)&v16, "item_text_factory");
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v16, &v19);
    v11 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v11);
    result = UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v19);
  return result;
}


int __fastcall HudScreenController::_checkValidSlot(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  int result; // r0@4
  int v9; // r5@5
  int v10; // r0@5
  signed int v11; // r0@5
  signed int v12; // r1@7

  v2 = this;
  v3 = a2;
  v4 = MinecraftScreenModel::getHotbarSlotCount(*((MinecraftScreenModel **)this + 106));
  v7 = 0;
  v5 = v3 == 0;
  v6 = v3 < 0;
  if ( v3 >= 0 )
  {
    v7 = __OFSUB__(v4, v3);
    v5 = v4 == v3;
    v6 = v4 - v3 < 0;
  }
  if ( (unsigned __int8)(v6 ^ v7) | v5 )
    v9 = v3 % MinecraftScreenModel::getHotbarSlotCount(*((MinecraftScreenModel **)v2 + 106));
    v10 = MinecraftScreenModel::getFixedInventorySlotCount(*((MinecraftScreenModel **)v2 + 106));
    v7 = __OFSUB__(v9, v10);
    v6 = v9 - v10 < 0;
    v11 = 0;
    if ( v6 ^ v7 )
      v11 = 1;
    v12 = 0;
    if ( v9 > -1 )
      v12 = 1;
    result = v11 & v12;
  else
    result = 1;
  return result;
}


int __fastcall HudScreenController::_getHudAlpha(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  signed int v2; // r5@1
  Options *v3; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = MinecraftScreenModel::isSplitScreen(*((MinecraftScreenModel **)this + 106));
  v3 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
  if ( v2 == 1 )
    result = j_j_j__ZNK7Options30getSplitscreenInterfaceOpacityEv(v3);
  else
    result = j_j_j__ZNK7Options19getInterfaceOpacityEv(v3);
  return result;
}


signed int __fastcall HudScreenController::_isStillValid(HudScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( MinecraftScreenModel::hasLocalPlayer(*((MinecraftScreenModel **)this + 106)) == 1 )
    result = MinecraftScreenController::_isStillValid(v1);
  else
    result = 0;
  return result;
}


int __fastcall HudScreenController::tick(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r1@3

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = *((_DWORD *)v1 + 109);
  if ( v3 <= 0 )
    *((_DWORD *)v1 + 109) = v3 + 1;
  HudContainerManagerController::broadcastContainerChanges(*((HudContainerManagerController **)v1 + 118));
  HudScreenController::_handleNewPopupItemText(v1);
  HudScreenController::_handleNewTipText(v1);
  HudScreenController::_handleChatMessages(v1);
  if ( Stopwatch::isReset((HudScreenController *)((char *)v1 + 488)) == 1 )
  {
    *((_BYTE *)v1 + 485) = 1;
  }
  else
    _R0 = Stopwatch::tick((HudScreenController *)((char *)v1 + 488), v4);
    __asm
    {
      VMOV.F64        D0, #10.0
      VMOV            D1, R0, R1
      VCMPE.F64       D1, D0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      *((_BYTE *)v1 + 485) = 0;
    else
      Stopwatch::reset((HudScreenController *)((char *)v1 + 488));
      *((_BYTE *)v1 + 485) = 1;
      *((_DWORD *)v1 + 117) |= 1u;
  HudScreenController::_updateHUDOpacityOverride(v1, v4);
  return j_j_j__ZN19HudScreenController13_getDirtyFlagEN2ui9DirtyFlagE((int)v1, v2);
}


int __fastcall HudScreenController::_updateHUDOpacityOverride(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r4@1
  int result; // r0@1
  signed int v8; // r5@5
  Options *v9; // r0@5

  v2 = this;
  result = *((_BYTE *)this + 588);
  if ( result )
  {
    result = Stopwatch::stopContinue((HudScreenController *)((char *)v2 + 536), a2);
    __asm
    {
      VMOV.F64        D0, #6.0
      VMOV            D8, R0, R1
      VCMPE.F64       D8, D0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VMOV.F64        D0, #5.5
        VCMPE.F64       D8, D0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        return result;
      v8 = MinecraftScreenModel::isSplitScreen(*((MinecraftScreenModel **)v2 + 106));
      v9 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v2 + 106));
      if ( v8 == 1 )
        _R0 = Options::getSplitscreenInterfaceOpacity(v9);
      else
        _R0 = Options::getInterfaceOpacity(v9);
        VMOV.F64        D1, #-6.0
        VADD.F64        D1, D8, D1
        VADD.F64        D1, D1, D1
        VMOV.F64        D2, #1.0
        VADD.F64        D1, D1, D2
        VMOV.F32        S4, #-1.0
        VMOV            S0, R0
        VCVT.F32.F64    S2, D1
        VADD.F32        S0, S0, S4
        VMOV.F32        S4, #1.0
        VMUL.F32        S0, S0, S2
        VSTR            S0, [R4,#0x248]
    else
      *((_BYTE *)v2 + 588) = 0;
    result = *((_DWORD *)v2 + 117) | 1;
    *((_DWORD *)v2 + 117) = result;
  }
  return result;
}


int __fastcall HudScreenController::HudScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  __int64 v11; // r0@21
  int v12; // r5@21
  unsigned int *v13; // r1@22
  unsigned int v14; // r0@24
  unsigned int *v15; // r7@28
  unsigned int v16; // r0@30
  int v17; // r5@35
  unsigned int *v18; // r1@36
  unsigned int v19; // r0@38
  unsigned int *v20; // r7@42
  unsigned int v21; // r0@44
  _BOOL4 v22; // r5@49
  char v23; // r0@51
  char v24; // r0@56
  int v26; // [sp+0h] [bp-28h]@21
  int v27; // [sp+4h] [bp-24h]@21
  int v28; // [sp+8h] [bp-20h]@1
  int v29; // [sp+Ch] [bp-1Ch]@1

  v2 = a1;
  v28 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v29 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  ClientInstanceScreenController::ClientInstanceScreenController(v2, (int)&v28);
  v6 = v29;
  if ( v29 )
    v7 = (unsigned int *)(v29 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *(_DWORD *)v2 = &off_26E2210;
  *(_DWORD *)(v2 + 432) = &off_26E22A0;
  *(_DWORD *)(v2 + 436) = 0;
  *(_DWORD *)(v2 + 440) = &unk_28898CC;
  *(_DWORD *)(v2 + 444) = &unk_28898CC;
  *(_DWORD *)(v2 + 448) = &unk_28898CC;
  *(_DWORD *)(v2 + 452) = 0;
  *(_DWORD *)(v2 + 456) = BlockPos::MAX;
  *(_DWORD *)(v2 + 460) = unk_2816260;
  *(_DWORD *)(v2 + 464) = dword_2816264;
  *(_DWORD *)(v2 + 468) = 1;
  *(_BYTE *)(v2 + 484) = 0;
  *(_DWORD *)(v2 + 480) = 0;
  *(_DWORD *)(v2 + 472) = 0;
  *(_DWORD *)(v2 + 476) = 0;
  *(_BYTE *)(v2 + 485) = 1;
  Stopwatch::Stopwatch((Stopwatch *)(v2 + 488));
  Stopwatch::Stopwatch((Stopwatch *)(v2 + 536));
  *(_DWORD *)(v2 + 584) = 1065353216;
  *(_BYTE *)(v2 + 588) = 0;
  ClientInstanceScreenModel::createHudContainerManagerController(
    (ClientInstanceScreenModel *)&v26,
    *(_DWORD *)(v2 + 424));
  v11 = *(_QWORD *)&v26;
  v26 = 0;
  v27 = 0;
  *(_DWORD *)(v2 + 472) = v11;
  v12 = *(_DWORD *)(v2 + 476);
  *(_DWORD *)(v2 + 476) = HIDWORD(v11);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v17 = v27;
  if ( v27 )
    v18 = (unsigned int *)(v27 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  ContainerManagerController::registerContainerCallbacks(*(ContainerManagerController **)(v2 + 472));
  v22 = MinecraftScreenModel::isRiding(*(MinecraftScreenModel **)(v2 + 424));
  if ( MinecraftScreenModel::isVRMode(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
    if ( (MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(v2 + 424)) & v22) == 1 )
      v23 = MinecraftScreenModel::handControlsHud(*(MinecraftScreenModel **)(v2 + 424)) ^ 1;
      v23 = 0;
  else
    v23 = 0;
  *(_BYTE *)(v2 + 480) = v23;
    if ( MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
      v24 = MinecraftScreenModel::handControlsHud(*(MinecraftScreenModel **)(v2 + 424)) ^ 1;
      v24 = 0;
    v24 = 0;
  *(_BYTE *)(v2 + 482) = v24;
  *(_BYTE *)(v2 + 481) = MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424));
  HudScreenController::_registerEventHandlers((HudScreenController *)v2);
  ClientInstanceScreenModel::addBossEventListener(*(_DWORD *)(v2 + 424), v2 + 432);
  return v2;
}


int __fastcall HudScreenController::_updateInputDelayTimer(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 436);
  if ( v1 <= 0 )
    *(_DWORD *)(result + 436) = v1 + 1;
  return result;
}


UIPropertyBag *__fastcall HudScreenController::_handleNewActionBarMessage(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  char *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+8h] [bp-48h]@1
  char v10; // [sp+Fh] [bp-41h]@1
  char v11; // [sp+10h] [bp-40h]@1

  v1 = this;
  v2 = ClientInstanceScreenModel::getTitleMessage(*((ClientInstanceScreenModel **)this + 106));
  v3 = UIPropertyBag::UIPropertyBag((int)&v11);
  UIPropertyBag::set<char [19]>(v3, 4, "name", "hud_actionbar_text");
  UIPropertyBag::set<char [19]>((int)&v11, 10, "control_id", "hud_actionbar_text");
  v10 = 1;
  UIPropertyBag::set<bool>((int)&v11, 9, "exclusive", &v10);
  v4 = TitleMessage::getActionBarMessage((TitleMessage *)v2);
  UIPropertyBag::set<std::string>((int)&v11, 15, "$actionbar_text", (const void **)v4);
  sub_1590164((void **)&v9, "hud_actionbar_text_factory");
  if ( !*((_DWORD *)v1 + 3) )
    sub_1590214();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v9, &v11);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


void __fastcall HudScreenController::_registerEventHandlers(HudScreenController *this)
{
  HudScreenController::_registerEventHandlers(this);
}


int __fastcall HudScreenController::_getCurrentSlotCount(HudScreenController *this)
{
  HudScreenController *v1; // r4@1
  MinecraftScreenModel *v2; // r0@1
  int result; // r0@2
  char v4; // [sp+0h] [bp-10h]@1

  v1 = this;
  MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v4, *((_DWORD *)this + 106));
  v2 = (MinecraftScreenModel *)*((_DWORD *)v1 + 106);
  if ( v4 == 123 )
    result = MinecraftScreenModel::getFixedInventorySlotCount(v2);
  else
    result = MinecraftScreenModel::getHotbarSlotCount(v2);
  return result;
}


int __fastcall HudScreenController::isChatInLowerPosition(HudScreenController *this, int a2)
{
  HudScreenController *v2; // r4@1
  int v3; // r5@2
  int result; // r0@6

  v2 = this;
  if ( a2 == 1 )
    v3 = !MinecraftScreenModel::isRiding(*((MinecraftScreenModel **)this + 106));
  else
    v3 = 0;
  if ( MinecraftScreenModel::isVRMode(*((MinecraftScreenModel **)v2 + 106)) != 1
    || MinecraftScreenModel::isNotVLRMode(*((MinecraftScreenModel **)v2 + 106)) ^ 1 | v3 )
  {
    result = 0;
  }
    result = MinecraftScreenModel::handControlsHud(*((MinecraftScreenModel **)v2 + 106)) ^ 1;
  return result;
}


signed int __fastcall HudScreenController::bind(int a1, int **a2, int a3, int a4, const void **a5, signed int a6, const char **a7, int a8)
{
  int v8; // r11@1
  int v9; // r5@1
  int v10; // r4@1
  int **v11; // r7@1
  int v12; // r0@5
  const char *v13; // r4@5
  int v14; // r6@5
  int v15; // r0@5
  int v19; // r5@5
  float *v22; // r3@11
  int v23; // r0@15
  const char *v24; // r4@15
  int v25; // r6@15
  int v26; // r0@15
  int v27; // r5@15
  bool v28; // zf@15
  __int64 v29; // r0@20
  int v30; // r0@21
  int v31; // r6@21
  int v32; // r0@21
  bool v33; // zf@21
  int v34; // r7@26
  int v36; // r0@28
  int v37; // r1@28
  const ItemInstance *v38; // r0@30
  const char *v39; // r4@30
  int v40; // r5@30
  void *v41; // r0@30
  unsigned int *v42; // r2@31
  signed int v43; // r1@33
  int v44; // r0@37
  const char *v45; // r4@37
  int v46; // r7@37
  int v47; // r5@37
  char v48; // r0@38
  int v49; // r0@39
  const char *v50; // r4@39
  int v51; // r6@39
  int v52; // r5@39
  int v53; // r0@42
  int v54; // r0@43
  const char *v55; // r4@43
  int v56; // r6@43
  int v57; // r5@43
  int v58; // r0@46
  const char *v59; // r2@59
  char *v60; // r3@59
  int v61; // r1@59
  signed int result; // r0@70
  int v63; // r0@73
  const char *v64; // r4@73
  int v65; // r6@73
  int v66; // r0@73
  int v67; // r5@73
  bool v68; // zf@73
  int v69; // r6@82
  signed int v70; // r0@82
  char v71; // r1@82
  char *v72; // r3@84
  int v73; // r0@84
  int v74; // r1@84
  char v75; // r0@93
  char v76; // r0@98
  const char *v77; // r4@106
  int v78; // r6@106
  void *v79; // r0@106
  int v80; // r6@112
  int v81; // r0@113
  const char *v82; // r4@113
  int v83; // r6@113
  int v84; // r0@113
  int v85; // r5@113
  bool v86; // zf@113
  int v87; // r0@133
  const char *v88; // r4@133
  int v89; // r6@133
  int v90; // r0@133
  int v91; // r5@133
  bool v92; // zf@133
  int v93; // r0@139
  const char *v94; // r4@139
  int v95; // r6@139
  int v96; // r0@139
  int v97; // r5@139
  bool v98; // zf@139
  unsigned int *v99; // r2@166
  signed int v100; // r1@168
  int v101; // [sp+0h] [bp-B0h]@112
  int v102; // [sp+4h] [bp-ACh]@106
  int v103; // [sp+8h] [bp-A8h]@106
  char v104; // [sp+Fh] [bp-A1h]@84
  int v105; // [sp+14h] [bp-9Ch]@118
  int v106; // [sp+1Ch] [bp-94h]@78
  char v107; // [sp+22h] [bp-8Eh]@119
  char v108; // [sp+23h] [bp-8Dh]@97
  int v109; // [sp+28h] [bp-88h]@144
  int v110; // [sp+30h] [bp-80h]@138
  char v111; // [sp+36h] [bp-7Ah]@59
  char v112; // [sp+37h] [bp-79h]@102
  char v113; // [sp+38h] [bp-78h]@93
  int v114; // [sp+3Ch] [bp-74h]@95
  char v115; // [sp+43h] [bp-6Dh]@162
  float v116; // [sp+44h] [bp-6Ch]@27
  float v117; // [sp+48h] [bp-68h]@11
  int v118; // [sp+4Ch] [bp-64h]@30
  char v119; // [sp+50h] [bp-60h]@20
  __int64 v120; // [sp+58h] [bp-58h]@48
  char v121; // [sp+64h] [bp-4Ch]@65
  int v122; // [sp+74h] [bp-3Ch]@89
  int v123; // [sp+78h] [bp-38h]@87
  int v124; // [sp+7Ch] [bp-34h]@1

  v8 = a1;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v124 = a4;
  if ( a6 > 1038672964 )
  {
    if ( a6 == 1038672965 )
    {
      v38 = (const ItemInstance *)ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
      v39 = *a7;
      v40 = *((_DWORD *)*a7 - 3);
      MinecraftScreenController::getItemStackSizeAsString((MinecraftScreenController *)&v118, v38);
      UIPropertyBag::set<std::string>(a8, v40, v39, (const void **)&v118);
      v41 = (void *)(v118 - 12);
      if ( (int *)(v118 - 12) == &dword_28898C0 )
        return 1;
      v42 = (unsigned int *)(v118 - 4);
      if ( !&pthread_create )
        goto LABEL_158;
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      goto LABEL_159;
    }
    if ( a6 == 1271584501 )
      v54 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
      v55 = *a7;
      v56 = v54;
      v57 = *((_DWORD *)*a7 - 3);
      if ( *(_BYTE *)(v54 + 15) )
      {
        if ( *(_DWORD *)v54 )
        {
          if ( ItemInstance::isNull((ItemInstance *)v54) )
          {
            v58 = -1;
          }
          else if ( *(_BYTE *)(v56 + 14) )
            ItemInstance::getColor((ItemInstance *)&v121, (int *)v56);
            v58 = Color::toARGB((Color *)&v121);
          else
        }
        else
          v58 = -1;
      }
      else
        v58 = -1;
      v122 = v58;
      UIPropertyBag::set<unsigned int>(a8, v57, v55, (unsigned int *)&v122);
      return 1;
    if ( a6 == 1279202290 )
      v23 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
      v24 = *a7;
      v25 = v23;
      v26 = *(_BYTE *)(v23 + 15);
      v27 = *((_DWORD *)*a7 - 3);
      v28 = v26 == 0;
      if ( v26 )
        v28 = *(_DWORD *)v25 == 0;
      if ( v28 || ItemInstance::isNull((ItemInstance *)v25) || !*(_BYTE *)(v25 + 14) )
        v29 = 0LL;
        ItemInstance::getPickupTime((ItemInstance *)&v119, v25);
        v29 = *(_QWORD *)&v119;
      v120 = v29;
      UIPropertyBag::set<unsigned long long>(a8, v27, v24, (unsigned __int64 *)&v120);
LABEL_35:
    if ( !sub_1590284(a5, "#collection_index") )
      UIPropertyBag::set<int>(a8, *((_DWORD *)*a7 - 3), *a7, &v124);
    if ( a6 == -1136566180 )
      v44 = ContainerManagerController::getItemInstance(*(_DWORD *)(v8 + 472), v11, v9);
      v45 = *a7;
      v46 = v44;
      v47 = *((_DWORD *)*a7 - 3);
      if ( *(_BYTE *)(v8 + 481) )
        v48 = 0;
      else if ( *(_BYTE *)(v44 + 15) )
        if ( *(_DWORD *)v44 )
          if ( ItemInstance::isNull((ItemInstance *)v44) )
            v48 = 0;
          else if ( *(_BYTE *)(v46 + 14) )
            v48 = ItemInstance::isDamaged((ItemInstance *)v46);
          v48 = 0;
      v72 = &v115;
      v115 = v48;
      v73 = a8;
      v74 = v47;
      goto LABEL_163;
    if ( v10 == -1030709457 )
      if ( a6 == -562286346 )
        v13 = *a7;
        v80 = *((_DWORD *)*a7 - 3);
        v101 = ClientInstanceScreenModel::getBossHealthPercentage(*(ClientInstanceScreenModel **)(v8 + 424), v9);
        v22 = (float *)&v101;
        v36 = a8;
        v37 = v80;
        goto LABEL_29;
      if ( a6 != 1037927856 )
        if ( a6 != 243191062 )
          return 1;
        v45 = *a7;
        v69 = *((_DWORD *)*a7 - 3);
        v70 = ClientInstanceScreenModel::getBossCount(*(ClientInstanceScreenModel **)(v8 + 424));
        v71 = 0;
        if ( v70 > v9 )
          v71 = 1;
        v72 = &v104;
        v104 = v71;
        v73 = a8;
        v74 = v69;
LABEL_163:
        UIPropertyBag::set<bool>(v73, v74, v45, v72);
      v77 = *a7;
      v78 = *((_DWORD *)*a7 - 3);
      ClientInstanceScreenModel::getBossName((ClientInstanceScreenModel *)&v102, *(_DWORD *)(v8 + 424), v9);
      I18n::get(&v103, (int **)&v102);
      UIPropertyBag::set<std::string>(a8, v78, v77, (const void **)&v103);
      v79 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v99 = (unsigned int *)(v103 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v79);
      v41 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) == &dword_28898C0 )
      v42 = (unsigned int *)(v102 - 4);
    if ( v10 == 1058956118 )
      result = 0;
      if ( a6 <= -801919082 )
        if ( a6 == -2124982575 )
          v81 = ContainerManagerController::getItemInstance(*(_DWORD *)(v8 + 472), v11, v9);
          v82 = *a7;
          v83 = v81;
          v84 = *(_BYTE *)(v81 + 15);
          v85 = *((_DWORD *)*a7 - 3);
          v86 = v84 == 0;
          if ( v84 )
            v86 = *(_DWORD *)v83 == 0;
          if ( v86 || ItemInstance::isNull((ItemInstance *)v83) || !*(_BYTE *)(v83 + 14) )
            sub_1590164((void **)&v105, (const char *)&unk_257BC67);
            BannerBlockEntity::getColors((BannerBlockEntity *)&v105, (const ItemInstance *)v83);
          UIPropertyBag::set<std::string>(a8, v85, v82, (const void **)&v105);
          v41 = (void *)(v105 - 12);
          if ( (int *)(v105 - 12) == &dword_28898C0 )
            return 1;
          v42 = (unsigned int *)(v105 - 4);
          if ( !&pthread_create )
            goto LABEL_158;
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          if ( a6 != -1186607922 )
            return result;
          v63 = ContainerManagerController::getItemInstance(*(_DWORD *)(v8 + 472), v11, v9);
          v64 = *a7;
          v65 = v63;
          v66 = *(_BYTE *)(v63 + 15);
          v67 = *((_DWORD *)*a7 - 3);
          v68 = v66 == 0;
          if ( v66 )
            v68 = *(_DWORD *)v65 == 0;
          if ( v68 || ItemInstance::isNull((ItemInstance *)v65) || !*(_BYTE *)(v65 + 14) )
            sub_1590164((void **)&v106, (const char *)&unk_257BC67);
            BannerBlockEntity::getPatterns((BannerBlockEntity *)&v106, (const ItemInstance *)v65);
          UIPropertyBag::set<std::string>(a8, v67, v64, (const void **)&v106);
          v41 = (void *)(v106 - 12);
          if ( (int *)(v106 - 12) == &dword_28898C0 )
          v42 = (unsigned int *)(v106 - 4);
        goto LABEL_159;
      if ( a6 == -801919081 )
        v59 = *a7;
        v60 = &v107;
        v61 = *((_DWORD *)*a7 - 3);
        v107 = *(_BYTE *)(v8 + 481) ^ 1;
        if ( a6 != -358526134 )
          return result;
        MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v113, *(_DWORD *)(v8 + 424));
        v75 = 0;
        if ( !v113 )
          v75 = 1;
        v61 = *((_DWORD *)v59 - 3);
        if ( v114 != v9 )
          v75 = 0;
        v108 = v75;
        v60 = &v108;
    else
      if ( v10 != 708270141 )
        return 0;
      if ( sub_1590284(a5, "#slot_selected") )
        if ( a6 != -2124982575 )
            if ( a6 != -801919081 )
              return 0;
            v59 = *a7;
            v60 = &v111;
            v61 = *((_DWORD *)*a7 - 3);
            v111 = 0;
            goto LABEL_120;
          v87 = ContainerManagerController::getItemInstance(*(_DWORD *)(v8 + 472), v11, v9);
          v88 = *a7;
          v89 = v87;
          v90 = *(_BYTE *)(v87 + 15);
          v91 = *((_DWORD *)*a7 - 3);
          v92 = v90 == 0;
          if ( v90 )
            v92 = *(_DWORD *)v89 == 0;
          if ( v92 || ItemInstance::isNull((ItemInstance *)v89) || !*(_BYTE *)(v89 + 14) )
            sub_1590164((void **)&v110, (const char *)&unk_257BC67);
            BannerBlockEntity::getPatterns((BannerBlockEntity *)&v110, (const ItemInstance *)v89);
          UIPropertyBag::set<std::string>(a8, v91, v88, (const void **)&v110);
          v41 = (void *)(v110 - 12);
          if ( (int *)(v110 - 12) == &dword_28898C0 )
          v42 = (unsigned int *)(v110 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            goto LABEL_159;
LABEL_158:
          v43 = (*v42)--;
          goto LABEL_159;
        v93 = ContainerManagerController::getItemInstance(*(_DWORD *)(v8 + 472), v11, v9);
        v94 = *a7;
        v95 = v93;
        v96 = *(_BYTE *)(v93 + 15);
        v97 = *((_DWORD *)*a7 - 3);
        v98 = v96 == 0;
        if ( v96 )
          v98 = *(_DWORD *)v95 == 0;
        if ( v98 || ItemInstance::isNull((ItemInstance *)v95) || !*(_BYTE *)(v95 + 14) )
          sub_1590164((void **)&v109, (const char *)&unk_257BC67);
          BannerBlockEntity::getColors((BannerBlockEntity *)&v109, (const ItemInstance *)v95);
        UIPropertyBag::set<std::string>(a8, v97, v94, (const void **)&v109);
        v41 = (void *)(v109 - 12);
        if ( (int *)(v109 - 12) == &dword_28898C0 )
        v42 = (unsigned int *)(v109 - 4);
        if ( !&pthread_create )
          goto LABEL_158;
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
LABEL_159:
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v41);
      MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v113, *(_DWORD *)(v8 + 424));
      v59 = *a7;
      v76 = 0;
      if ( v113 == 123 )
        v76 = 1;
      v61 = *((_DWORD *)v59 - 3);
      if ( v114 != v9 )
        v76 = 0;
      v112 = v76;
      v60 = &v112;
LABEL_120:
    UIPropertyBag::set<bool>(a8, v61, v59, v60);
    return 1;
  }
  if ( a6 == -1741172736 )
    v30 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
    v13 = *a7;
    v31 = v30;
    v32 = *(_BYTE *)(v30 + 15);
    __asm { VLDR            S16, =0.0 }
    v19 = *((_DWORD *)*a7 - 3);
    v33 = v32 == 0;
    if ( v32 )
      v33 = *(_DWORD *)v31 == 0;
    if ( !v33 && !ItemInstance::isNull((ItemInstance *)v31) && *(_BYTE *)(v31 + 14) )
      v34 = ItemInstance::getMaxDamage((ItemInstance *)v31);
      _R0 = v34 - ItemInstance::getDamageValue((ItemInstance *)v31);
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S16, S0
    __asm { VSTR            S16, [SP,#0xB0+var_6C] }
    v22 = &v116;
    goto LABEL_28;
  if ( a6 == 423569454 )
    v49 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
    v50 = *a7;
    v51 = v49;
    v52 = *((_DWORD *)*a7 - 3);
    if ( *(_BYTE *)(v49 + 15) )
      if ( *(_DWORD *)v49 )
        if ( ItemInstance::isNull((ItemInstance *)v49) )
          v53 = -1;
        else if ( *(_BYTE *)(v51 + 14) )
          v53 = ItemInstance::getIdAuxEnchanted((ItemInstance *)v51);
        v53 = -1;
      v53 = -1;
    v123 = v53;
    UIPropertyBag::set<int>(a8, v52, v50, &v123);
  if ( a6 != 825822365 )
    goto LABEL_35;
  v12 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 472), a2, a4);
  v13 = *a7;
  v14 = v12;
  v15 = *(_BYTE *)(v12 + 15);
  __asm { VLDR            S16, =0.0 }
  v19 = *((_DWORD *)*a7 - 3);
  _ZF = v15 == 0;
  if ( v15 )
    _ZF = *(_DWORD *)v14 == 0;
  if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v14) )
    if ( *(_BYTE *)(v14 + 14) )
      _R0 = ItemInstance::getMaxDamage((ItemInstance *)v14);
  v22 = &v117;
  __asm { VSTR            S16, [SP,#0xB0+var_68] }
LABEL_28:
  v36 = a8;
  v37 = v19;
LABEL_29:
  UIPropertyBag::set<float>(v36, v37, v13, (int)v22);
  return 1;
}


int __fastcall HudScreenController::_getCollectionIndex(HudScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}


int __fastcall HudScreenController::_getDirtyFlag(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _BOOL4 v4; // r6@1
  int v5; // r0@3
  int v6; // r0@10
  ContainerManagerController *v7; // r6@16
  int v8; // r0@16
  int v9; // r6@17
  int v10; // r7@19
  int v11; // r6@21
  int v12; // r0@23

  v2 = a1;
  v3 = a2;
  v4 = MinecraftScreenModel::isRiding(*(MinecraftScreenModel **)(a1 + 424));
  if ( MinecraftScreenModel::isVRMode(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
  {
    if ( (MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(v2 + 424)) & v4) == 1 )
      v5 = MinecraftScreenModel::handControlsHud(*(MinecraftScreenModel **)(v2 + 424)) ^ 1;
    else
      v5 = 0;
  }
  else
    v5 = 0;
  if ( *(_BYTE *)(v2 + 480) != v5 )
    *(_BYTE *)(v2 + 480) = v5;
    v3 |= 1u;
    if ( MinecraftScreenModel::isNotVLRMode(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
      v6 = MinecraftScreenModel::handControlsHud(*(MinecraftScreenModel **)(v2 + 424)) ^ 1;
      v6 = 0;
    v6 = 0;
  if ( *(_BYTE *)(v2 + 482) != v6 )
    *(_BYTE *)(v2 + 482) = v6;
  if ( MinecraftScreenModel::isPlayerValid(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
    v7 = *(ContainerManagerController **)(v2 + 472);
    v8 = ClientInstanceScreenModel::getPickRange(*(ClientInstanceScreenModel **)(v2 + 424));
    if ( ContainerManagerController::isValid(v7, *(float *)&v8) == 1 )
    {
      v9 = v3 | 1;
      if ( ContainerManagerController::getAndResetContainerDirty(*(ContainerManagerController **)(v2 + 472)) )
        v3 |= 1u;
      v10 = *(_DWORD *)(v2 + 452);
      if ( v10 != MinecraftScreenModel::getFixedInventorySlotCount(*(MinecraftScreenModel **)(v2 + 424)) )
      {
        v3 = v9;
        *(_DWORD *)(v2 + 452) = MinecraftScreenModel::getFixedInventorySlotCount(*(MinecraftScreenModel **)(v2 + 424));
      }
      v11 = *(_BYTE *)(v2 + 481);
      if ( v11 != MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424)) )
        *(_BYTE *)(v2 + 481) = MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v2 + 424));
      v12 = *(_DWORD *)(v2 + 468);
      *(_DWORD *)(v2 + 468) = 0;
      v3 |= v12;
    }
  return v3;
}


void __fastcall HudScreenController::onOpen(HudScreenController *this, int a2, __int64 a3)
{
  HudScreenController *v3; // r4@1

  v3 = this;
  ScreenController::onOpen(this, a2, a3);
  HudContainerManagerController::refreshHotbar(*((HudContainerManagerController **)v3 + 118));
  j_j_j__ZN19HudScreenController25_pushExistingChatMessagesEv(v3);
}


void **__fastcall HudScreenController::_getContextDismountButton(HudScreenController *this, int a2)
{
  void **v2; // r4@1
  void **result; // r0@2

  v2 = (void **)this;
  if ( ClientInstanceScreenModel::isPlayerRiding(*(ClientInstanceScreenModel **)(a2 + 424)) == 1 )
    result = sub_1590164(v2, "hudScreen.tooltip.dismount");
  else
    result = sub_1590164(v2, (const char *)&unk_257BC67);
  return result;
}


void __fastcall HudScreenController::_registerEventHandlers(HudScreenController *this)
{
  ScreenController *v1; // r11@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  signed int v22; // r5@16
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  const void **v27; // r0@33
  int v28; // r4@33
  _DWORD *v29; // r0@33
  char *v30; // r0@35
  void *v31; // r0@36
  int v32; // r5@38
  _DWORD *v33; // r0@38
  __int64 v34; // r1@38
  void *v35; // r0@40
  int v36; // r5@41
  _DWORD *v37; // r0@41
  __int64 v38; // r1@41
  void *v39; // r0@43
  int v40; // r5@44
  _DWORD *v41; // r0@44
  __int64 v42; // r1@44
  void *v43; // r0@46
  int v44; // r5@47
  _DWORD *v45; // r0@47
  __int64 v46; // r1@47
  void *v47; // r0@49
  int v48; // r5@50
  _DWORD *v49; // r0@50
  __int64 v50; // r1@50
  void *v51; // r0@52
  int v52; // r5@53
  _DWORD *v53; // r0@53
  __int64 v54; // r1@53
  void *v55; // r0@55
  int v56; // r5@56
  _DWORD *v57; // r0@56
  __int64 v58; // r1@56
  void *v59; // r0@58
  unsigned int *v60; // r2@60
  signed int v61; // r1@62
  unsigned int *v62; // r2@64
  signed int v63; // r1@66
  unsigned int *v64; // r2@68
  signed int v65; // r1@70
  unsigned int *v66; // r2@72
  signed int v67; // r1@74
  unsigned int *v68; // r2@76
  signed int v69; // r1@78
  unsigned int *v70; // r2@100
  signed int v71; // r1@102
  unsigned int *v72; // r2@104
  signed int v73; // r1@106
  unsigned int *v74; // r2@108
  signed int v75; // r1@110
  unsigned int *v76; // r2@112
  signed int v77; // r1@114
  unsigned int *v78; // r2@116
  signed int v79; // r1@118
  unsigned int *v80; // r2@120
  signed int v81; // r1@122
  unsigned int *v82; // r2@124
  signed int v83; // r1@126
  _DWORD *v84; // [sp+8h] [bp-160h]@56
  __int64 v85; // [sp+10h] [bp-158h]@56
  int v86; // [sp+1Ch] [bp-14Ch]@56
  _DWORD *v87; // [sp+20h] [bp-148h]@53
  __int64 v88; // [sp+28h] [bp-140h]@53
  int v89; // [sp+34h] [bp-134h]@53
  _DWORD *v90; // [sp+38h] [bp-130h]@50
  __int64 v91; // [sp+40h] [bp-128h]@50
  int v92; // [sp+4Ch] [bp-11Ch]@50
  _DWORD *v93; // [sp+50h] [bp-118h]@47
  __int64 v94; // [sp+58h] [bp-110h]@47
  int v95; // [sp+64h] [bp-104h]@47
  _DWORD *v96; // [sp+68h] [bp-100h]@44
  __int64 v97; // [sp+70h] [bp-F8h]@44
  int v98; // [sp+7Ch] [bp-ECh]@44
  _DWORD *v99; // [sp+80h] [bp-E8h]@41
  __int64 v100; // [sp+88h] [bp-E0h]@41
  int v101; // [sp+94h] [bp-D4h]@41
  _DWORD *v102; // [sp+98h] [bp-D0h]@38
  __int64 v103; // [sp+A0h] [bp-C8h]@38
  int v104; // [sp+ACh] [bp-BCh]@38
  _DWORD *v105; // [sp+B0h] [bp-B8h]@33
  int (__fastcall *v106)(void **, _QWORD **, int); // [sp+B8h] [bp-B0h]@33
  signed int (__fastcall *v107)(_QWORD **); // [sp+BCh] [bp-ACh]@33
  int v108; // [sp+C0h] [bp-A8h]@21
  char *v109; // [sp+C4h] [bp-A4h]@17
  _DWORD *v110; // [sp+C8h] [bp-A0h]@13
  __int64 v111; // [sp+D0h] [bp-98h]@13
  int v112; // [sp+DCh] [bp-8Ch]@13
  _DWORD *v113; // [sp+E0h] [bp-88h]@10
  __int64 v114; // [sp+E8h] [bp-80h]@10
  int v115; // [sp+F4h] [bp-74h]@10
  _DWORD *v116; // [sp+F8h] [bp-70h]@7
  __int64 v117; // [sp+100h] [bp-68h]@7
  int v118; // [sp+10Ch] [bp-5Ch]@7
  _DWORD *v119; // [sp+110h] [bp-58h]@4
  __int64 v120; // [sp+118h] [bp-50h]@4
  int v121; // [sp+124h] [bp-44h]@4
  _DWORD *v122; // [sp+128h] [bp-40h]@1
  __int64 v123; // [sp+130h] [bp-38h]@1
  int v124; // [sp+13Ch] [bp-2Ch]@1

  v1 = this;
  sub_1590164((void **)&v124, "button.hide_gui_all");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v124);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11B1F86;
  *v3 = v1;
  HIDWORD(v4) = sub_11B1F74;
  v122 = v3;
  v123 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v5 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
  {
    v60 = (unsigned int *)(v124 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
    }
    else
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v121, "button.hide_tooltips_hud");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v121);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11B1FCE;
  *v7 = v1;
  HIDWORD(v8) = sub_11B1FBC;
  v119 = v7;
  v120 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v9 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v121 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v118, "button.hide_paperdoll_hud");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v118);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11B2016;
  *v11 = v1;
  HIDWORD(v12) = sub_11B2004;
  v116 = v11;
  v117 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v13 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v118 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v115, "button.hotbar_inventory_right");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v115);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11B206C;
  *v15 = v1;
  HIDWORD(v16) = sub_11B204C;
  v113 = v15;
  v114 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  v17 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v115 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v112, "button.hotbar_inventory_left");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v112);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11B20C0;
  *v19 = v1;
  HIDWORD(v20) = sub_11B20A2;
  v110 = v19;
  v111 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v21 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v112 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v21);
  v22 = 1;
  do
    Util::toString<int,(void *)0,(void *)0>((void **)&v108, v22);
    v27 = sub_1590244((const void **)&v108, 0, (unsigned int)"button.slot_", (_BYTE *)0xC);
    v109 = (char *)*v27;
    *v27 = &unk_28898CC;
    v28 = MinecraftScreenController::_getNameId(v1, (int **)&v109);
    v106 = 0;
    v29 = operator new(8u);
    *v29 = v1;
    v29[1] = v22;
    v105 = v29;
    v107 = sub_11B20F6;
    v106 = sub_11B210A;
    ScreenController::registerButtonClickHandler((int)v1, v28, (int)&v105);
    if ( v106 )
      v106((void **)&v105, (_QWORD **)&v105, 3);
    v30 = v109 - 12;
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v109 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v30);
    v31 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v108 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v31);
    ++v22;
  while ( v22 < 10 );
  sub_1590164((void **)&v104, "button.hotbar_select");
  v32 = MinecraftScreenController::_getNameId(v1, (int **)&v104);
  v33 = operator new(4u);
  LODWORD(v34) = sub_11B21A8;
  *v33 = v1;
  HIDWORD(v34) = sub_11B2144;
  v102 = v33;
  v103 = v34;
  ScreenController::registerButtonClickHandler((int)v1, v32, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v35 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v104 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v35);
  sub_1590164((void **)&v101, "button.fixed_inventory_hotbar_select");
  v36 = MinecraftScreenController::_getNameId(v1, (int **)&v101);
  v37 = operator new(4u);
  LODWORD(v38) = sub_11B2244;
  *v37 = v1;
  HIDWORD(v38) = sub_11B21E0;
  v99 = v37;
  v100 = v38;
  ScreenController::registerButtonClickHandler((int)v1, v36, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v39 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v101 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v39);
  sub_1590164((void **)&v98, "button.hotbar_inventory_button");
  v40 = MinecraftScreenController::_getNameId(v1, (int **)&v98);
  v41 = operator new(4u);
  LODWORD(v42) = sub_11B228E;
  *v41 = v1;
  HIDWORD(v42) = sub_11B227A;
  v96 = v41;
  v97 = v42;
  ScreenController::registerButtonClickHandler((int)v1, v40, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v43 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v98 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v43);
  sub_1590164((void **)&v95, "button.hotbar_select");
  v44 = MinecraftScreenController::_getNameId(v1, (int **)&v95);
  v45 = operator new(4u);
  LODWORD(v46) = sub_11B2344;
  *v45 = v1;
  HIDWORD(v46) = sub_11B22C4;
  v93 = v45;
  v94 = v46;
  ScreenController::registerButtonEventHandler((int)v1, v44, 1, 3, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  v47 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v95 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v47);
  sub_1590164((void **)&v92, "button.slot_pressed");
  v48 = MinecraftScreenController::_getNameId(v1, (int **)&v92);
  v49 = operator new(4u);
  LODWORD(v50) = sub_11B23E4;
  *v49 = v1;
  HIDWORD(v50) = sub_11B237C;
  v90 = v49;
  v91 = v50;
  ScreenController::registerButtonEventHandler((int)v1, v48, 1, 0, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v51 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v92 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v51);
  sub_1590164((void **)&v89, "button.hotbar_select");
  v52 = MinecraftScreenController::_getNameId(v1, (int **)&v89);
  v53 = operator new(4u);
  LODWORD(v54) = sub_11B242E;
  *v53 = v1;
  HIDWORD(v54) = sub_11B241A;
  v87 = v53;
  v88 = v54;
  ScreenController::registerButtonEventHandler((int)v1, v52, 0, 0, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  v55 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v89 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v55);
  sub_1590164((void **)&v86, "button.slot_0");
  v56 = MinecraftScreenController::_getNameId(v1, (int **)&v86);
  v57 = operator new(4u);
  LODWORD(v58) = sub_11B24BC;
  *v57 = v1;
  HIDWORD(v58) = sub_11B2464;
  v84 = v57;
  v85 = v58;
  ScreenController::registerButtonClickHandler((int)v1, v56, (int)&v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v59 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v86 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v59);
}


void __fastcall HudScreenController::_getContextUseButton(HudScreenController *this, int a2)
{
  HudScreenController::_getContextUseButton(this, a2);
}


int __fastcall HudScreenController::_isHudHidden(HudScreenController *this)
{
  Options *v1; // r0@1

  v1 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  return j_j_j__ZNK7Options10getHideHudEv(v1);
}
