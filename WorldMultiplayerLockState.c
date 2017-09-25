

int __fastcall WorldMultiplayerLockState::isLocked(WorldMultiplayerLockState *this)
{
  WorldMultiplayerLockState *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( LevelData::hasLockedBehaviorPack(*((LevelData **)this + 1))
    || LevelData::hasLockedResourcePack(*((LevelData **)v1 + 1)) )
  {
    result = 1;
  }
  else
    result = LevelData::isFromLockedTemplate(*((LevelData **)v1 + 1));
  return result;
}


int __fastcall WorldMultiplayerLockState::WorldMultiplayerLockState(int result, int a2)
{
  *(_DWORD *)result = &off_26E4110;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
