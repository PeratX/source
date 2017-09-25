

int __fastcall ClientTestModel::isImmutableWorld(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::isAlwaysDay(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::makePlayerCommandOrigin(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


signed int __fastcall ClientTestModel::hasCommandsEnabled(ClientTestModel *this)
{
  return 1;
}


int __fastcall ClientTestModel::getGenerator(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::getGameType(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::getGameDifficulty(ClientTestModel *this)
{
  return 0;
}


_DWORD *__fastcall ClientTestModel::ClientTestModel(_DWORD *result)
{
  *result = &off_26E4F30;
  return result;
}


int __fastcall ClientTestModel::achievementsWillBeDisabledOnLoad(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::getStartWithMap(ClientTestModel *this)
{
  return 0;
}


int __fastcall ClientTestModel::hasAchievementsDisabled(ClientTestModel *this)
{
  return 0;
}
