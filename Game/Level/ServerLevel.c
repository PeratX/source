

int __fastcall ServerLevel::updateSleepingPlayerList(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  int v2; // r6@1
  signed int v3; // r0@1
  char v4; // r1@1
  _DWORD *v5; // r0@3
  int result; // r0@3
  _DWORD *v7; // r0@7
  _DWORD *v8; // [sp+8h] [bp-30h]@7
  int (*v9)(void); // [sp+10h] [bp-28h]@7
  signed int (__fastcall *v10)(int, Player *); // [sp+14h] [bp-24h]@7
  _DWORD *v11; // [sp+18h] [bp-20h]@3
  int (*v12)(void); // [sp+20h] [bp-18h]@3
  signed int (__fastcall *v13)(int **, Entity *); // [sp+24h] [bp-14h]@3

  v1 = this;
  v2 = *((_BYTE *)this + 6044);
  v3 = Level::getActivePlayerCount(this);
  v4 = 0;
  if ( v3 > 0 )
    v4 = 1;
  *((_BYTE *)v1 + 6044) = v4;
  v5 = operator new(4u);
  *v5 = v1;
  v11 = v5;
  v12 = (int (*)(void))sub_15D4C34;
  v13 = sub_15D4C00;
  result = Level::forEachPlayer((int)v1, (int)&v11);
  if ( v12 )
    result = v12();
  if ( !v2 )
  {
    result = *((_BYTE *)v1 + 6044);
    if ( *((_BYTE *)v1 + 6044) )
    {
      Level::broadcastLevelEvent(v1, 9800, (unsigned int)&Vec3::ZERO, 0);
      v7 = operator new(4u);
      *v7 = v1;
      v8 = v7;
      v9 = (int (*)(void))sub_15D4C76;
      v10 = sub_15D4C6A;
      result = Level::forEachPlayer((int)v1, (int)&v8);
      if ( v9 )
        result = v9();
    }
  }
  return result;
}


int __fastcall ServerLevel::stopWeather(int result)
{
  int i; // r4@1
  Weather *v2; // r0@3

  for ( i = *(_DWORD *)(result + 568); i; i = *(_DWORD *)i )
  {
    v2 = (Weather *)Dimension::getWeather(*(Dimension **)(i + 8));
    result = Weather::stop(v2);
  }
  return result;
}


void __fastcall ServerLevel::~ServerLevel(ServerLevel *this)
{
  ServerLevel::~ServerLevel(this);
}


Level *__fastcall ServerLevel::~ServerLevel(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  char *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EB394;
  *((_DWORD *)this + 1) = &off_26EB41C;
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 6060);
  v2 = (char *)*((_DWORD *)v1 + 1515);
  if ( v2 && (char *)v1 + 6084 != v2 )
    operator delete(v2);
  return j_j_j__ZN5LevelD2Ev_0(v1);
}


int __fastcall ServerLevel::awakenAllPlayers(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  _DWORD *v2; // r0@1
  int result; // r0@1
  int i; // r4@3
  Weather *v5; // r0@4
  _DWORD *v6; // [sp+0h] [bp-18h]@1
  int (__cdecl *v7)(_DWORD); // [sp+8h] [bp-10h]@1
  signed int (__fastcall *v8)(int **, Mob *); // [sp+Ch] [bp-Ch]@1

  v1 = this;
  *((_BYTE *)this + 6044) = 0;
  v2 = operator new(4u);
  *v2 = v1;
  v6 = v2;
  v7 = (int (__cdecl *)(_DWORD))sub_15D4D04;
  v8 = sub_15D4CAC;
  result = Level::forEachPlayer((int)v1, (int)&v6);
  if ( v7 )
    result = v7(&v6);
  for ( i = *((_DWORD *)v1 + 142); i; i = *(_DWORD *)i )
  {
    v5 = (Weather *)Dimension::getWeather(*(Dimension **)(i + 8));
    result = Weather::stop(v5);
  }
  return result;
}


signed int __fastcall ServerLevel::tick(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  int i; // r5@1
  char *v3; // r0@4
  signed int result; // r0@4
  unsigned __int64 *v5; // r0@5
  int v13; // r0@6
  void **v14; // [sp+4h] [bp-24h]@6
  signed int v15; // [sp+8h] [bp-20h]@6
  signed int v16; // [sp+Ch] [bp-1Ch]@6
  char v17; // [sp+10h] [bp-18h]@6
  int v18; // [sp+14h] [bp-14h]@6

  v1 = this;
  Level::tick(this);
  for ( i = *((_DWORD *)v1 + 142); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 8) + 124))();
  v3 = Level::getVillages(v1);
  (*(void (**)(void))(**(_DWORD **)v3 + 20))();
  result = ServerLevel::allPlayersSleeping(v1);
  if ( result )
  {
    v5 = (unsigned __int64 *)Level::getGameRules(v1);
    if ( GameRules::getBool(v5, (int **)&GameRules::DO_DAYLIGHT_CYCLE) == 1 )
    {
      _R0 = Level::getTime(v1);
      _R2 = 91625969;
      _R0 += 24000;
      __asm { SMMUL.W         R0, R0, R2 }
      Level::setTime(v1, 24000 * (((signed int)_R0 >> 9) + (_R0 >> 31)));
      v15 = 2;
      v16 = 1;
      v17 = 0;
      v14 = &off_26E93B4;
      v18 = Level::getTime(v1);
      v13 = Level::getPacketSender(v1);
      (*(void (**)(void))(*(_DWORD *)v13 + 8))();
    }
    result = ServerLevel::awakenAllPlayers(v1);
  }
  return result;
}


char *__fastcall ServerLevel::getTradeTables(ServerLevel *this)
{
  return (char *)this + 6060;
}


signed int __fastcall ServerLevel::allPlayersSleeping(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  signed int v2; // r2@3
  int v3; // r4@5
  void *v5; // [sp+0h] [bp-18h]@5
  int (__fastcall *v6)(void **, void **, int); // [sp+8h] [bp-10h]@5
  int (__fastcall *v7)(int, Entity *); // [sp+Ch] [bp-Ch]@5

  v1 = this;
  if ( *((_BYTE *)this + 6044) )
  {
    if ( Level::isClientSide(this) )
    {
      v2 = 0;
    }
    else
      v5 = operator new(1u);
      v6 = sub_15D4D60;
      v7 = sub_15D4D3A;
      v3 = Level::findPlayer((int)v1, (int)&v5);
      if ( v6 )
        ((void (__cdecl *)(void **))v6)(&v5);
      if ( !v3 )
        v2 = 1;
  }
  else
    v2 = 0;
  return v2;
}


SavedDataStorage *__fastcall ServerLevel::setDifficulty(int a1, int a2)
{
  Level *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  void **v6; // [sp+4h] [bp-24h]@2
  int v7; // [sp+8h] [bp-20h]@2
  int v8; // [sp+Ch] [bp-1Ch]@2
  char v9; // [sp+10h] [bp-18h]@2
  int v10; // [sp+14h] [bp-14h]@2

  v2 = (Level *)a1;
  v3 = a2;
  if ( LevelData::getGameDifficulty((LevelData *)(a1 + 144)) != a2 )
  {
    v7 = 2;
    v8 = 1;
    v9 = 0;
    v6 = &off_26D8278;
    v10 = v3;
    v4 = Level::getPacketSender(v2);
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  }
  return Level::setDifficulty((int)v2, v3);
}


void __fastcall ServerLevel::~ServerLevel(ServerLevel *this)
{
  ServerLevel *v1; // r4@1
  char *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EB394;
  *((_DWORD *)this + 1) = &off_26EB41C;
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 6060);
  v2 = (char *)*((_DWORD *)v1 + 1515);
  if ( v2 && (char *)v1 + 6084 != v2 )
    operator delete(v2);
  Level::~Level(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ServerLevel::setCommandsEnabled(ServerLevel *this, int a2)
{
  Level *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  int v5; // r0@2
  int v6; // r3@2
  void **v7; // [sp+0h] [bp-20h]@2
  int v8; // [sp+4h] [bp-1Ch]@2
  int v9; // [sp+8h] [bp-18h]@2
  char v10; // [sp+Ch] [bp-14h]@2
  char v11; // [sp+Dh] [bp-13h]@2

  v2 = this;
  v3 = a2;
  result = LevelData::hasCommandsEnabled((ServerLevel *)((char *)this + 144)) ^ a2;
  if ( result == 1 )
  {
    Level::setCommandsEnabled(v2, v3);
    v8 = 2;
    v9 = 1;
    v10 = 0;
    v7 = &off_26E983C;
    v11 = v3;
    v5 = Level::getPacketSender(v2);
    result = (*(int (__cdecl **)(int, void ***, _DWORD, int))(*(_DWORD *)v5 + 8))(
               v5,
               &v7,
               *(_DWORD *)(*(_DWORD *)v5 + 8),
               v6);
  }
  return result;
}
