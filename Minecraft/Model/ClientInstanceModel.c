

int __fastcall ClientInstanceModel::makePlayerCommandOrigin(ClientInstanceModel *this, int a2)
{
  ClientInstanceModel *v2; // r4@1
  Player *v3; // r6@1
  PlayerCommandOrigin *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 4));
  v4 = (PlayerCommandOrigin *)operator new(0x18u);
  result = PlayerCommandOrigin::PlayerCommandOrigin(v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall ClientInstanceModel::isImmutableWorld(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return *(_BYTE *)(LevelData::getAdventureSettings((LevelData *)v2) + 2);
}


void __fastcall ClientInstanceModel::disableAchievements(ClientInstanceModel *this)
{
  ClientInstanceModel::disableAchievements(this);
}


int __fastcall ClientInstanceModel::setCommandsEnabled(ClientInstanceModel *this, int a2)
{
  signed int v2; // r3@1
  int v3; // r0@3
  void **v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1
  char v8; // [sp+10h] [bp-10h]@1
  int v9; // [sp+14h] [bp-Ch]@3

  v2 = 2;
  v6 = 2;
  v7 = 1;
  v8 = 0;
  v5 = &off_26E4F80;
  if ( a2 )
    v2 = 1;
  v9 = v2;
  v3 = ClientInstance::getPacketSender(*((ClientInstance **)this + 1));
  return (*(int (**)(void))(*(_DWORD *)v3 + 8))();
}


int __fastcall ClientInstanceModel::ClientInstanceModel(int result, int a2)
{
  *(_DWORD *)result = &off_26E4EE0;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall ClientInstanceModel::achievementsWillBeDisabledOnLoad(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData32achievementsWillBeDisabledOnLoadEv((LevelData *)v2);
}


int __fastcall ClientInstanceModel::getGenerator(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData12getGeneratorEv_1((LevelData *)v2);
}


int __fastcall ClientInstanceModel::isAlwaysDay(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData11isAlwaysDayEv((LevelData *)v2);
}


int __fastcall ClientInstanceModel::setGameType(int a1, int a2)
{
  int v2; // r4@1
  Level *v3; // r0@1
  char *v4; // r0@1

  v2 = a2;
  v3 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 4));
  v4 = Level::getLevelData(v3);
  return j_j_j__ZN9LevelData11setGameTypeE8GameType_0((int)v4, v2);
}


void __fastcall ClientInstanceModel::getFormattedHoverText(ClientInstanceModel *this, const ItemInstance *a2, int a3)
{
  ClientInstanceModel::getFormattedHoverText(this, a2, a3);
}


int __fastcall ClientInstanceModel::getGameDifficulty(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData17getGameDifficultyEv_0((LevelData *)v2);
}


void __fastcall ClientInstanceModel::getFormattedHoverText(ClientInstanceModel *this, const ItemInstance *a2, int a3)
{
  const ItemInstance *v3; // r6@1
  Level *v4; // r5@1
  char v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-24h]@1

  v3 = a2;
  v4 = (Level *)a3;
  ClientInstance::getUIProfanityContext(*((ClientInstance **)a2 + 1));
  v5 = ClientInstance::getLevel(*((ClientInstance **)v3 + 1));
  ItemInstance::getFormattedHovertext((ItemInstance *)&v9, v4, v5);
  UIProfanityContext::filterProfanityFromString();
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


int *__fastcall ClientInstanceModel::getLevelName(ClientInstanceModel *this, int a2)
{
  int *v2; // r4@1
  Level *v3; // r0@1
  char *v4; // r0@1
  int *v5; // r0@1

  v2 = (int *)this;
  v3 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a2 + 4));
  v4 = Level::getLevelData(v3);
  v5 = (int *)LevelData::getLevelName((LevelData *)v4);
  return sub_21E8AF4(v2, v5);
}


int __fastcall ClientInstanceModel::getStartWithMap(ClientInstanceModel *this)
{
  Level *v1; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  return j_j_j__ZNK5Level22hasStartWithMapEnabledEv_0(v1);
}


int __fastcall ClientInstanceModel::getGameType(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData11getGameTypeEv_0((LevelData *)v2);
}


_BOOL4 __fastcall ClientInstanceModel::hasCommandsEnabled(ClientInstanceModel *this)
{
  ClientInstanceModel *v1; // r4@1
  Level *v2; // r0@1
  _BOOL4 result; // r0@2

  v1 = this;
  v2 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  if ( Level::hasCommandsEnabled(v2) == 1 )
    result = ClientInstance::hasCommands(*((ClientInstance **)v1 + 1));
  else
    result = 0;
  return result;
}


void __fastcall ClientInstanceModel::disableAchievements(ClientInstanceModel *this)
{
  ClientInstanceModel *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@1
  MinecraftEventing *v4; // r5@1
  bool v5; // r2@2

  v1 = this;
  v2 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v3 = Level::getLevelData(v2);
  LevelData::disableAchievements((LevelData *)v3);
  v4 = (MinecraftEventing *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 1));
  if ( v4 )
  {
    ClientInstance::getEventing(*((ClientInstance **)v1 + 1));
    j_j_j__ZN17MinecraftEventing32fireEventSetValidForAchievementsEP6Playerb(v4, 0, v5);
  }
}


int __fastcall ClientInstanceModel::isGameRule(int a1, int **a2)
{
  int **v2; // r4@1
  Level *v3; // r0@1
  char *v4; // r0@1

  v2 = a2;
  v3 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 4));
  v4 = Level::getLevelData(v3);
  return j_j_j__ZNK9LevelData10isGameRuleERKSs((int)v4, v2);
}


int __fastcall ClientInstanceModel::hasAchievementsDisabled(ClientInstanceModel *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1));
  v2 = Level::getLevelData(v1);
  return j_j_j__ZNK9LevelData23hasAchievementsDisabledEv_0((LevelData *)v2);
}
