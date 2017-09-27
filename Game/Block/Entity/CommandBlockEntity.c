

char *__fastcall CommandBlockEntity::setCustomName(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  BaseCommandBlock::setName(a1 + 104, a2);
  return sub_21E7EE0((const void **)(v2 + 92), 0, *(_BYTE **)(*(_DWORD *)(v2 + 92) - 12), 0);
}


int __fastcall CommandBlockEntity::getCommandBlock(CommandBlockEntity *this, BlockSource *a2)
{
  int result; // r0@1
  unsigned __int8 v3; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockAndData((BlockSource *)&v3, a2, (int)this + 32);
  result = Block::mCommandBlock;
  if ( v3 != *(_BYTE *)(Block::mCommandBlock + 4) )
  {
    result = Block::mChainCommandBlock;
    if ( v3 != *(_BYTE *)(Block::mChainCommandBlock + 4) )
    {
      result = Block::mRepeatingCommandBlock;
      if ( v3 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4) )
        result = 0;
    }
  }
  return result;
}


char *__fastcall CommandBlockEntity::getBaseCommandBlock(CommandBlockEntity *this)
{
  return (char *)this + 104;
}


signed int __fastcall CommandBlockEntity::isAutomatic(CommandBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 146);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


_BOOL4 __fastcall CommandBlockEntity::getConditionalMode(CommandBlockEntity *this, BlockSource *a2)
{
  const BlockPos *v2; // r5@1
  BlockSource *v3; // r4@1
  CommandBlock *v4; // r0@1
  _BOOL4 result; // r0@5
  unsigned __int8 v6; // [sp+4h] [bp-14h]@1

  v2 = (CommandBlockEntity *)((char *)this + 32);
  v3 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v6, a2, (int)this + 32);
  v4 = (CommandBlock *)Block::mCommandBlock;
  if ( (v6 == *(_BYTE *)(Block::mCommandBlock + 4)
     || (v4 = (CommandBlock *)Block::mChainCommandBlock, v6 == *(_BYTE *)(Block::mChainCommandBlock + 4))
     || (v4 = (CommandBlock *)Block::mRepeatingCommandBlock, v6 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)))
    && v4 )
  {
    result = CommandBlock::getConditionalMode(v4, v3, v2);
  }
  else
    result = 0;
  return result;
}


int *__fastcall CommandBlockEntity::getFilteredCustomName(CommandBlockEntity *this, const UIProfanityContext *a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)((char *)this + 92);
  if ( !*(_DWORD *)(*((_DWORD *)this + 23) - 12) )
  {
    (*(void (**)(void))(*(_DWORD *)this + 100))();
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v7);
    v3 = (void *)(v7 - 12);
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
        j_j_j_j__ZdlPv_9(v3);
    }
  }
  return v2;
}


unsigned int __fastcall CommandBlockEntity::onCustomTagLoadDone(CommandBlockEntity *this, BlockSource *a2)
{
  CommandBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r6@1
  CommandBlock *v5; // r0@1
  int v6; // r3@5
  int v7; // r2@8
  unsigned __int8 v9; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_BYTE *)this + 146);
  BlockSource::getBlockAndData((BlockSource *)&v9, a2, (int)this + 32);
  v5 = (CommandBlock *)Block::mCommandBlock;
  if ( v9 != *(_BYTE *)(Block::mCommandBlock + 4)
    && (v5 = (CommandBlock *)Block::mChainCommandBlock, v9 != *(_BYTE *)(Block::mChainCommandBlock + 4))
    && (v5 = (CommandBlock *)Block::mRepeatingCommandBlock, v9 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
  {
    v6 = 0;
  }
  else if ( v5 )
    v6 = CommandBlock::getMode(v5);
  else
  v7 = 0;
  if ( !v4 )
    v7 = 1;
  return CommandBlockEntity::_setRedstoneMode((unsigned int)v2, v3, v7, v6);
}


void __fastcall CommandBlockEntity::~CommandBlockEntity(CommandBlockEntity *this)
{
  BlockEntity *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2709538;
  BaseCommandBlock::~BaseCommandBlock((CommandBlockEntity *)((char *)this + 104));
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CommandBlockEntity::onUpdatePacket(CommandBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  CommandBlockEntity *v3; // r6@1
  BlockSource *v4; // r4@1
  const CompoundTag *v5; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return (*(int (__fastcall **)(CommandBlockEntity *, const CompoundTag *, BlockSource *))(*(_DWORD *)v3 + 24))(
           v3,
           v5,
           v4);
}


int __fastcall CommandBlockEntity::_updateLastPerformedModes(int result, char a2, char a3, char a4)
{
  *(_BYTE *)(result + 147) = a2;
  *(_BYTE *)(result + 148) = a3;
  *(_BYTE *)(result + 149) = a4;
  return result;
}


CompoundTag *__fastcall CommandBlockEntity::getUpdatePacket(CommandBlockEntity *this, BlockSource *a2, int a3)
{
  CommandBlockEntity *v3; // r4@1
  int v4; // r6@1
  BlockSource *v5; // r5@1
  _DWORD *v6; // r6@2
  int v7; // r3@2
  int v8; // r1@2
  int v9; // r2@2
  char v11; // [sp+4h] [bp+0h]@1
  char v12; // [sp+20h] [bp+1Ch]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  CompoundTag::CompoundTag((int)&v11);
  if ( (*(int (__fastcall **)(BlockSource *, char *))(*(_DWORD *)v5 + 12))(v5, &v11) == 1 )
  {
    (*(void (__fastcall **)(BlockSource *, char *, int))(*(_DWORD *)v5 + 20))(v5, &v11, v4);
    v6 = operator new(0x38u);
    CompoundTag::CompoundTag((int)&v12, (int)&v11);
    v6[1] = 2;
    v6[2] = 1;
    v7 = (int)(v6 + 4);
    *((_BYTE *)v6 + 12) = 0;
    *v6 = &off_26E97EC;
    v8 = *((_DWORD *)v5 + 9);
    v9 = *((_DWORD *)v5 + 10);
    *(_DWORD *)v7 = *((_DWORD *)v5 + 8);
    *(_DWORD *)(v7 + 4) = v8;
    *(_DWORD *)(v7 + 8) = v9;
    CompoundTag::CompoundTag((int)(v6 + 7), (int)&v12);
    CompoundTag::~CompoundTag((CompoundTag *)&v12);
    *(_DWORD *)v3 = v6;
  }
  else
    *(_DWORD *)v3 = 0;
  return CompoundTag::~CompoundTag((CompoundTag *)&v11);
}


int __fastcall CommandBlockEntity::onPlace(CommandBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  CommandBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  unsigned __int64 *v5; // r0@1
  int v6; // r1@1

  v2 = a2;
  v3 = this;
  BlockEntity::onPlace(this, a2);
  v4 = (Level *)BlockSource::getLevel(v2);
  v5 = (unsigned __int64 *)Level::getGameRules(v4);
  v6 = GameRules::getBool(v5, (int **)&GameRules::SEND_COMMAND_FEEDBACK);
  return j_j_j__ZN16BaseCommandBlock14setTrackOutputEb((CommandBlockEntity *)((char *)v3 + 104), v6);
}


void __fastcall CommandBlockEntity::saveBlockData(CommandBlockEntity *this, CompoundTag *a2, BlockSource *a3)
{
  BlockSource *v3; // r5@1
  CompoundTag *v4; // r4@1
  CommandBlockEntity *v5; // r6@1
  const BlockPos *v6; // r6@1
  CommandBlock *v7; // r7@1
  char v8; // r0@5
  void *v9; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  int v12; // [sp+4h] [bp-24h]@5
  unsigned __int8 v13; // [sp+8h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  BlockEntity::saveBlockData(this, a2, a3);
  v6 = (CommandBlockEntity *)((char *)v5 + 32);
  BlockSource::getBlockAndData((BlockSource *)&v13, v3, (int)v6);
  v7 = (CommandBlock *)Block::mCommandBlock;
  if ( v13 == *(_BYTE *)(Block::mCommandBlock + 4)
    || (v7 = (CommandBlock *)Block::mChainCommandBlock, v13 == *(_BYTE *)(Block::mChainCommandBlock + 4))
    || (v7 = (CommandBlock *)Block::mRepeatingCommandBlock, v13 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
  {
    if ( v7 )
    {
      sub_21E94B4((void **)&v12, "conditionalMode");
      v8 = CommandBlock::getConditionalMode(v7, v3, v6);
      CompoundTag::putBoolean((int)v4, (const void **)&v12, v8);
      v9 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
    }
  }
}


BlockEntity *__fastcall CommandBlockEntity::~CommandBlockEntity(CommandBlockEntity *this)
{
  BlockEntity *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2709538;
  BaseCommandBlock::~BaseCommandBlock((CommandBlockEntity *)((char *)this + 104));
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall CommandBlockEntity::performCommand(CommandBlockEntity *this, BlockSource *a2)
{
  CommandBlockEntity *v2; // r4@1
  BaseCommandBlock *v3; // r7@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  CommandBlock *v7; // r0@2
  char v8; // r8@6
  char v9; // r7@9
  CommandBlock *v10; // r0@9
  char v11; // r0@13
  unsigned __int8 v12; // [sp+0h] [bp-20h]@9
  unsigned __int8 v13; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  v3 = (CommandBlockEntity *)((char *)this + 104);
  v4 = (CommandBlockEntity *)((char *)this + 32);
  v5 = a2;
  BaseCommandBlock::performCommand(
    (CommandBlockEntity *)((char *)this + 104),
    a2,
    (CommandBlockEntity *)((char *)this + 32));
  result = BaseCommandBlock::getTrackOutput(v3);
  if ( result == 1 )
  {
    BlockSource::getBlockAndData((BlockSource *)&v13, v5, (int)v4);
    v7 = (CommandBlock *)Block::mCommandBlock;
    if ( v13 != *(_BYTE *)(Block::mCommandBlock + 4)
      && (v7 = (CommandBlock *)Block::mChainCommandBlock, v13 != *(_BYTE *)(Block::mChainCommandBlock + 4))
      && (v7 = (CommandBlock *)Block::mRepeatingCommandBlock, v13 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
    {
      v8 = 0;
    }
    else if ( v7 )
      v8 = CommandBlock::getConditionalMode(v7, v5, v4);
    else
    v9 = *((_BYTE *)v2 + 146);
    BlockSource::getBlockAndData((BlockSource *)&v12, v5, (int)v4);
    v10 = (CommandBlock *)Block::mCommandBlock;
    if ( v12 != *(_BYTE *)(Block::mCommandBlock + 4)
      && (v10 = (CommandBlock *)Block::mChainCommandBlock, v12 != *(_BYTE *)(Block::mChainCommandBlock + 4))
      && (v10 = (CommandBlock *)Block::mRepeatingCommandBlock, v12 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
      v11 = 0;
    else if ( v10 )
      v11 = CommandBlock::getMode(v10);
    *((_BYTE *)v2 + 147) = v8;
    *((_BYTE *)v2 + 148) = v9;
    *((_BYTE *)v2 + 149) = v11;
    result = BlockEntity::setChanged(v2);
  }
  return result;
}


void __fastcall CommandBlockEntity::loadBlockData(CommandBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  CommandBlockEntity::loadBlockData(this, a2, a3);
}


void __fastcall CommandBlockEntity::loadBlockData(CommandBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  BlockSource *v3; // r4@1
  const CompoundTag *v4; // r6@1
  CommandBlockEntity *v5; // r5@1
  const BlockPos *v6; // r5@1
  int v7; // r7@1
  CommandBlock *v8; // r0@5
  int v9; // r8@9
  int v10; // r0@12
  void *v11; // r0@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  int v14; // [sp+Ch] [bp-2Ch]@12
  unsigned __int8 v15; // [sp+10h] [bp-28h]@1
  unsigned __int8 v16; // [sp+14h] [bp-24h]@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  BlockEntity::loadBlockData(this, a2, a3);
  v6 = (CommandBlockEntity *)((char *)v5 + 32);
  BlockSource::getBlockAndData((BlockSource *)&v15, v3, (int)v6);
  v7 = Block::mCommandBlock;
  if ( v15 == *(_BYTE *)(Block::mCommandBlock + 4)
    || (v7 = Block::mChainCommandBlock, v15 == *(_BYTE *)(Block::mChainCommandBlock + 4))
    || (v7 = Block::mRepeatingCommandBlock, v15 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
  {
    if ( v7 )
    {
      BlockSource::getBlockAndData((BlockSource *)&v16, v3, (int)v6);
      v8 = (CommandBlock *)Block::mCommandBlock;
      if ( v16 != *(_BYTE *)(Block::mCommandBlock + 4)
        && (v8 = (CommandBlock *)Block::mChainCommandBlock, v16 != *(_BYTE *)(Block::mChainCommandBlock + 4))
        && (v8 = (CommandBlock *)Block::mRepeatingCommandBlock, v16 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
      {
        v9 = 0;
      }
      else if ( v8 )
        v9 = CommandBlock::getMode(v8);
      else
      sub_21E94B4((void **)&v14, "conditionalMode");
      v10 = CompoundTag::getBoolean((int)v4, (const void **)&v14);
      CommandBlock::updateBlock(v7, v3, v6, v9, v10);
      v11 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v14 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
    }
  }
}


unsigned int __fastcall CommandBlockEntity::setRedstoneMode(unsigned int a1, const BlockPos *a2, int a3, int a4)
{
  unsigned int v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  const BlockPos *v7; // r4@1
  CommandBlock *v8; // r0@1
  int v9; // r3@5
  int v10; // r2@9
  unsigned __int8 v12; // [sp+0h] [bp-18h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v12, a2, a1 + 32);
  v8 = (CommandBlock *)Block::mCommandBlock;
  if ( v12 != *(_BYTE *)(Block::mCommandBlock + 4)
    && (v8 = (CommandBlock *)Block::mChainCommandBlock, v12 != *(_BYTE *)(Block::mChainCommandBlock + 4))
    && (v8 = (CommandBlock *)Block::mRepeatingCommandBlock, v12 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
  {
    v9 = 0;
  }
  else if ( v8 )
    v9 = CommandBlock::getMode(v8);
  else
  if ( v5 != 1 || (v10 = 0, v6 != 1) && v9 == 1 )
    v10 = 0;
    if ( !*(_BYTE *)(v4 + 146) )
      v10 = 1;
  return CommandBlockEntity::_setRedstoneMode(v4, v7, v10, v9);
}


int __fastcall CommandBlockEntity::onChanged(CommandBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  CommandBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  BlockPos *v6; // r5@2
  char v7; // [sp+8h] [bp-18h]@2
  char v8; // [sp+9h] [bp-17h]@2
  char v9; // [sp+Ch] [bp-14h]@2
  char v10; // [sp+Dh] [bp-13h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (CommandBlockEntity *)((char *)v3 + 32);
    BlockSource::getBlockAndData((BlockSource *)&v9, v2, (int)v6);
    v7 = v9;
    v8 = v10;
    result = BlockSource::setBlockAndData((int)v2, v6, (int)&v7, 19, 0);
  }
  return result;
}


int __fastcall CommandBlockEntity::getMode(CommandBlockEntity *this, BlockSource *a2)
{
  CommandBlock *v2; // r0@1
  int result; // r0@5
  unsigned __int8 v4; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockAndData((BlockSource *)&v4, a2, (int)this + 32);
  v2 = (CommandBlock *)Block::mCommandBlock;
  if ( (v4 == *(_BYTE *)(Block::mCommandBlock + 4)
     || (v2 = (CommandBlock *)Block::mChainCommandBlock, v4 == *(_BYTE *)(Block::mChainCommandBlock + 4))
     || (v2 = (CommandBlock *)Block::mRepeatingCommandBlock, v4 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)))
    && v2 )
  {
    result = CommandBlock::getMode(v2);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall CommandBlockEntity::save(CommandBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  CommandBlockEntity *v3; // r5@1
  void *v4; // r0@1
  char v5; // r2@2
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@30
  signed int v23; // r1@32
  int v24; // [sp+8h] [bp-40h]@8
  int v25; // [sp+10h] [bp-38h]@7
  int v26; // [sp+18h] [bp-30h]@6
  int v27; // [sp+20h] [bp-28h]@5
  int v28; // [sp+28h] [bp-20h]@2
  int v29; // [sp+30h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::save(this, a2);
  sub_21E94B4((void **)&v29, "powered");
  CompoundTag::putBoolean((int)v2, (const void **)&v29, *((_BYTE *)v3 + 144));
  v4 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v28, "auto");
  v5 = 0;
  if ( !*((_BYTE *)v3 + 146) )
    v5 = 1;
  CompoundTag::putBoolean((int)v2, (const void **)&v28, v5);
  v6 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v28 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v27, "conditionMet");
  CompoundTag::putBoolean((int)v2, (const void **)&v27, *((_BYTE *)v3 + 145));
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v26, "LPCondionalMode");
  CompoundTag::putBoolean((int)v2, (const void **)&v26, *((_BYTE *)v3 + 147));
  v8 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v25, "LPRedstoneMode");
  CompoundTag::putBoolean((int)v2, (const void **)&v25, *((_BYTE *)v3 + 148));
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v24, "LPCommandMode");
  CompoundTag::putInt((int)v2, (const void **)&v24, *((_BYTE *)v3 + 149));
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return BaseCommandBlock::save((CommandBlockEntity *)((char *)v3 + 104), v2);
}


int __fastcall CommandBlockEntity::_loadAutomatic(int result, bool a2)
{
  *(_BYTE *)(result + 146) = !a2;
  return result;
}


void __fastcall CommandBlockEntity::getLastOutput(CommandBlockEntity *this, int a2)
{
  CommandBlockEntity::getLastOutput(this, a2);
}


int __fastcall CommandBlockEntity::CommandBlockEntity(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  void *v6; // r0@1
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v10, "CommandBlock");
  BlockEntity::BlockEntity(v5, 26, v3);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_DWORD *)v5 = &off_2709538;
  BaseCommandBlock::BaseCommandBlock(v5 + 104);
  *(_WORD *)(v5 + 144) = 0;
  *(_BYTE *)(v5 + 146) = 1;
  BlockEntity::setCustomNameSaved((BlockEntity *)v5, 0);
  if ( v4 == 2 )
    *(_BYTE *)(v5 + 146) = 0;
  *(_DWORD *)(v5 + 84) = 15;
  *(_BYTE *)(v5 + 99) = 1;
  return v5;
}


void __fastcall CommandBlockEntity::saveBlockData(CommandBlockEntity *this, CompoundTag *a2, BlockSource *a3)
{
  CommandBlockEntity::saveBlockData(this, a2, a3);
}


void __fastcall CommandBlockEntity::load(CommandBlockEntity *this, const CompoundTag *a2)
{
  CommandBlockEntity::load(this, a2);
}


int __fastcall CommandBlockEntity::setConditionMet(int result, bool a2)
{
  *(_BYTE *)(result + 145) = a2;
  return result;
}


char *__fastcall CommandBlockEntity::getBaseCommandBlock(CommandBlockEntity *this)
{
  return (char *)this + 104;
}


unsigned int __fastcall CommandBlockEntity::_setRedstoneMode(unsigned int result, const BlockPos *a2, int a3, int a4)
{
  const BlockPos *v4; // r4@1
  unsigned int v5; // r5@1
  int v6; // r7@4
  CommandBlock *v7; // r0@8
  char v8; // r0@13
  LevelChunk **v9; // r6@17
  signed int v10; // r0@17
  char v11; // [sp+Ch] [bp-24h]@17
  unsigned __int8 v12; // [sp+10h] [bp-20h]@8
  unsigned __int8 v13; // [sp+14h] [bp-1Ch]@4

  v4 = a2;
  v5 = result;
  if ( a3 == 1 && a4 != 2 )
  {
    result = *(_BYTE *)(result + 144);
    if ( !*(_BYTE *)(v5 + 144) )
    {
      BlockSource::getBlockAndData((BlockSource *)&v13, a2, v5 + 32);
      v6 = Block::mCommandBlock;
      result = v13;
      if ( v13 == *(_BYTE *)(Block::mCommandBlock + 4)
        || (v6 = Block::mChainCommandBlock, v13 == *(_BYTE *)(Block::mChainCommandBlock + 4))
        || (v6 = Block::mRepeatingCommandBlock, v13 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
      {
        if ( v6 )
        {
          BlockSource::getBlockAndData((BlockSource *)&v12, v4, v5 + 32);
          v7 = (CommandBlock *)Block::mCommandBlock;
          if ( v12 != *(_BYTE *)(Block::mCommandBlock + 4)
            && (v7 = (CommandBlock *)Block::mChainCommandBlock, v12 != *(_BYTE *)(Block::mChainCommandBlock + 4))
            && (v7 = (CommandBlock *)Block::mRepeatingCommandBlock, v12 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
          {
            v8 = 1;
          }
          else if ( v7 )
            if ( CommandBlock::getConditionalMode(v7, v4, (const BlockPos *)(v5 + 32)) == 1 )
              v8 = CommandBlock::isConditionMet((CommandBlock *)v6, v4, (const BlockPos *)(v5 + 32));
            else
              v8 = 1;
          else
          *(_BYTE *)(v5 + 145) = v8;
          v9 = (LevelChunk **)BlockSource::getTickQueue(v4, (const BlockPos *)(v5 + 32));
          v11 = *(_BYTE *)(v6 + 4);
          v10 = CommandBlock::getTickDelay((CommandBlock *)v6);
          BlockTickingQueue::add(v9, v4, v5 + 32, &v11, v10, 0);
          result = *(_BYTE *)(v5 + 145);
          if ( *(_BYTE *)(v5 + 145) )
            result = CommandBlock::triggerSequence((CommandBlock *)v6, v4, (const BlockPos *)(v5 + 32));
        }
      }
    }
  }
  return result;
}


void __fastcall CommandBlockEntity::getLastOutput(CommandBlockEntity *this, int a2)
{
  BaseCommandBlock::getLastOutput(this, a2 + 104);
}


int __fastcall CommandBlockEntity::setPowered(int result, bool a2)
{
  *(_BYTE *)(result + 144) = a2;
  return result;
}


void __fastcall CommandBlockEntity::~CommandBlockEntity(CommandBlockEntity *this)
{
  CommandBlockEntity::~CommandBlockEntity(this);
}


int __fastcall CommandBlockEntity::updateBlock(unsigned int a1, const BlockPos *a2, int *a3, int *a4, int a5, int a6, char a7, int a8)
{
  unsigned int v8; // r4@1
  const BlockPos *v9; // r5@1
  int *v10; // r10@1
  int *v11; // r7@1
  BlockSource *v12; // r6@1
  int v13; // r9@1
  CommandBlock *v14; // r0@1
  int *v15; // r9@4
  int v16; // r0@5
  int v17; // r0@8
  CommandBlock *v18; // r0@13
  int v19; // r3@17
  int v20; // r2@20
  int v22; // [sp+8h] [bp-38h]@8
  int v23; // [sp+Ch] [bp-34h]@4
  unsigned __int8 v24; // [sp+10h] [bp-30h]@1
  unsigned __int8 v25; // [sp+14h] [bp-2Ch]@8
  unsigned __int8 v26; // [sp+18h] [bp-28h]@13

  v8 = a1;
  v9 = (const BlockPos *)(a1 + 32);
  v10 = a3;
  v11 = a4;
  v12 = a2;
  v13 = *(_BYTE *)(a1 + 146);
  BlockSource::getBlockAndData((BlockSource *)&v24, a2, a1 + 32);
  v14 = (CommandBlock *)Block::mCommandBlock;
  if ( v24 != *(_BYTE *)(Block::mCommandBlock + 4)
    && (v14 = (CommandBlock *)Block::mChainCommandBlock, v24 != *(_BYTE *)(Block::mChainCommandBlock + 4))
    && (v14 = (CommandBlock *)Block::mRepeatingCommandBlock, v24 != *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
  {
    v23 = v13;
    v15 = v11;
    v16 = 0;
  }
  else
    if ( v14 )
      v16 = CommandBlock::getMode(v14);
    else
      v16 = 0;
  v22 = v16;
  BaseCommandBlock::setCommand(v8 + 104, v12, (int)v9, v10);
  BaseCommandBlock::setTrackOutput((BaseCommandBlock *)(v8 + 104), a8);
  BlockSource::getBlockAndData((BlockSource *)&v25, v12, (int)v9);
  v17 = Block::mCommandBlock;
  if ( v25 == *(_BYTE *)(Block::mCommandBlock + 4)
    || (v17 = Block::mChainCommandBlock, v25 == *(_BYTE *)(Block::mChainCommandBlock + 4))
    || (v17 = Block::mRepeatingCommandBlock, v25 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)) )
    if ( v17 )
      CommandBlock::updateBlock(v17, v12, v9, a5, a6);
  *(_BYTE *)(v8 + 146) = a7;
  BlockSource::getBlockAndData((BlockSource *)&v26, v12, (int)v9);
  v18 = (CommandBlock *)Block::mCommandBlock;
  if ( (v26 == *(_BYTE *)(Block::mCommandBlock + 4)
     || (v18 = (CommandBlock *)Block::mChainCommandBlock, v26 == *(_BYTE *)(Block::mChainCommandBlock + 4))
     || (v18 = (CommandBlock *)Block::mRepeatingCommandBlock, v26 == *(_BYTE *)(Block::mRepeatingCommandBlock + 4)))
    && v18 )
    v19 = CommandBlock::getMode(v18);
    v19 = 0;
  if ( v23 || (v20 = 0, v22 != 1) && v19 == 1 )
    v20 = 0;
    if ( !*(_BYTE *)(v8 + 146) )
      v20 = 1;
  CommandBlockEntity::_setRedstoneMode(v8, v12, v20, v19);
  BaseCommandBlock::setName(v8 + 104, v15);
  sub_21E7EE0((const void **)(v8 + 92), 0, *(_BYTE **)(*(_DWORD *)(v8 + 92) - 12), 0);
  return BlockEntity::setChanged((BlockEntity *)v8);
}


void __fastcall CommandBlockEntity::load(CommandBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  CommandBlockEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  int v22; // [sp+8h] [bp-40h]@6
  int v23; // [sp+10h] [bp-38h]@5
  int v24; // [sp+18h] [bp-30h]@4
  int v25; // [sp+20h] [bp-28h]@3
  int v26; // [sp+28h] [bp-20h]@2
  int v27; // [sp+30h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v27, "powered");
  *((_BYTE *)v3 + 144) = CompoundTag::getBoolean((int)v2, (const void **)&v27);
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v26, "auto");
  *((_BYTE *)v3 + 146) = !CompoundTag::getBoolean((int)v2, (const void **)&v26);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v25, "conditionMet");
  *((_BYTE *)v3 + 145) = CompoundTag::getBoolean((int)v2, (const void **)&v25);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v25 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v24, "LPCondionalMode");
  *((_BYTE *)v3 + 147) = CompoundTag::getBoolean((int)v2, (const void **)&v24);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v23, "LPRedstoneMode");
  *((_BYTE *)v3 + 148) = CompoundTag::getBoolean((int)v2, (const void **)&v23);
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v22, "LPCommandMode");
  *((_BYTE *)v3 + 149) = CompoundTag::getInt((int)v2, (const void **)&v22);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  BaseCommandBlock::load((CommandBlockEntity *)((char *)v3 + 104), v2);
}
