

int __fastcall CommandOrigin::hasTellPerms(CommandOrigin *this)
{
  int v1; // r0@1
  Entity *v2; // r4@1
  Level *v3; // r0@4
  unsigned __int64 *v4; // r0@4
  char v5; // r1@5

  v1 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  v2 = (Entity *)v1;
  if ( v1 && (v1 = Entity::hasType(v1, 319), v1 == 1) )
  {
    if ( Abilities::getBool((int)v2 + 4320, (int **)&Abilities::MUTED)
      || (v3 = (Level *)Entity::getLevel(v2),
          v4 = (unsigned __int64 *)Level::getGameRules(v3),
          GameRules::getBool(v4, (int **)&GameRules::GLOBAL_MUTE) == 1) )
    {
      LOBYTE(v1) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1492))(v2);
      v5 = 0;
    }
    else
      LOBYTE(v1) = 1;
  }
  else
    v5 = 1;
  return ((unsigned __int8)v1 | (unsigned __int8)v5) & 1;
}


int __fastcall CommandOrigin::hasChatPerms(CommandOrigin *this)
{
  int v1; // r0@1
  Player *v2; // r4@1
  char v3; // r1@3

  v1 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  v2 = (Player *)v1;
  if ( v1 && (v1 = Entity::hasType(v1, 319), v1 == 1) )
  {
    LOBYTE(v1) = Player::isChatAllowed(v2);
    v3 = 0;
  }
  else
    v3 = 1;
  return ((unsigned __int8)v1 | (unsigned __int8)v3) & 1;
}


int __fastcall CommandOrigin::canCallHiddenCommands(CommandOrigin *this)
{
  return 0;
}


int __fastcall CommandOrigin::getSourceSubId(CommandOrigin *this)
{
  return 0;
}


const ChunkPos *__fastcall CommandOrigin::getAreaAt(CommandOrigin *this, const BlockPos *a2, const BlockPos *a3, const BlockPos *a4)
{
  CommandAreaFactory *v4; // r6@1
  const BlockPos *v5; // r5@1
  const BlockPos *v6; // r4@1
  Dimension *v7; // r1@1
  const ChunkPos *result; // r0@2
  int v9; // [sp+0h] [bp-18h]@2

  v4 = this;
  v5 = a3;
  v6 = a4;
  v7 = (Dimension *)(*(int (__fastcall **)(const BlockPos *))(*(_DWORD *)a2 + 28))(a2);
  if ( v7 )
  {
    CommandAreaFactory::CommandAreaFactory((CommandAreaFactory *)&v9, v7);
    result = CommandAreaFactory::findArea(v4, (const BlockPos *)&v9, v5, v6);
  }
  else
    result = 0;
    *(_DWORD *)v4 = 0;
  return result;
}


Entity *__fastcall CommandOrigin::fromCommandOriginData(int a1, int a2, Level *this, int a4, int a5)
{
  return CommandOrigin::fromCommandOriginData(
           (CommandOrigin *)a1,
           (const CommandOriginData *)a2,
           this,
           (const NetworkIdentifier *)a4,
           a5);
}


Entity *__fastcall CommandOrigin::fromCommandOriginData(CommandOrigin *this, const CommandOriginData *a2, Level *a3, const NetworkIdentifier *a4, int a5)
{
  CommandOrigin *v5; // r4@1
  const CommandOriginData *v6; // r5@1
  const NetworkIdentifier *v7; // r7@1
  Level *v8; // r6@1
  Entity *result; // r0@1
  Entity *v10; // r6@3
  _DWORD *v11; // r0@4
  __int64 v12; // r2@4
  _DWORD *v13; // r7@8
  _DWORD *v14; // r0@9
  _DWORD *v15; // [sp+4h] [bp-24h]@4
  __int64 v16; // [sp+Ch] [bp-1Ch]@4

  v5 = this;
  v6 = a2;
  *(_DWORD *)this = 0;
  v7 = a4;
  v8 = a3;
  result = (Entity *)(*(_BYTE *)a2 | 4);
  if ( result == (Entity *)4 )
  {
    if ( Level::isClientSide(a3) == 1 )
    {
      result = (Entity *)Level::getPrimaryLocalPlayer(v8);
      v10 = result;
    }
    else
      v11 = operator new(8u);
      HIDWORD(v12) = sub_15A6B24;
      *v11 = v7;
      v11[1] = a5;
      LODWORD(v12) = sub_15A6B60;
      v15 = v11;
      v16 = v12;
      result = (Entity *)Level::findPlayer((int)v8, (int)&v15);
      if ( (_DWORD)v16 )
        result = (Entity *)((int (*)(void))v16)();
    if ( v10 )
      if ( *(_BYTE *)v6 == 4 )
      {
        v13 = operator new(0xC0u);
        result = (Entity *)AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin((int)v13, (int *)v6 + 1, v10);
      }
      else
        v14 = operator new(0x18u);
        v13 = v14;
        *v14 = &off_26EADE0;
        *((_QWORD *)v14 + 1) = *(_QWORD *)Entity::getUniqueID(v10);
        v13[4] = Entity::getLevel(v10);
        result = 0;
        *((_BYTE *)v13 + 20) = 0;
      *(_DWORD *)v5 = v13;
  }
  return result;
}


void *__fastcall CommandOrigin::getSourceId(CommandOrigin *this)
{
  return &CommandOrigin::sUnknownSource;
}


const ChunkPos *__fastcall CommandOrigin::getAreaAt(CommandOrigin *this, const BlockPos *a2, const BlockPos *a3)
{
  CommandAreaFactory *v3; // r5@1
  const BlockPos *v4; // r4@1
  Dimension *v5; // r1@1
  const ChunkPos *result; // r0@2
  char v7; // [sp+4h] [bp-14h]@2

  v3 = this;
  v4 = a3;
  v5 = (Dimension *)(*(int (__fastcall **)(const BlockPos *))(*(_DWORD *)a2 + 28))(a2);
  if ( v5 )
  {
    CommandAreaFactory::CommandAreaFactory((CommandAreaFactory *)&v7, v5);
    result = CommandAreaFactory::findArea(v3, (const BlockPos *)&v7, v4);
  }
  else
    result = 0;
    *(_DWORD *)v3 = 0;
  return result;
}
