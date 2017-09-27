

int __fastcall PlayerCommandOrigin::getDimension(PlayerCommandOrigin *this, int a2)
{
  Entity *v2; // r0@1
  int result; // r0@2

  v2 = (Entity *)Level::getPlayer(*((_DWORD *)this + 4), a2, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
  if ( v2 )
    result = Entity::getDimension(v2);
  else
    result = 0;
  return result;
}


int __fastcall PlayerCommandOrigin::canUseAbility(int a1, int a2)
{
  int **v2; // r4@1
  int v3; // r0@1
  int result; // r0@2

  v2 = (int **)a2;
  v3 = Level::getPlayer(*(_DWORD *)(a1 + 16), a2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8) >> 32);
  if ( v3 )
    result = Player::canUseAbility(v3, v2);
  else
    result = 0;
  return result;
}


void *__fastcall PlayerCommandOrigin::getRequestId(PlayerCommandOrigin *this)
{
  return &Util::EMPTY_GUID;
}


int __fastcall PlayerCommandOrigin::setAllowHiddenCommands(int result, bool a2)
{
  *(_BYTE *)(result + 20) = a2;
  return result;
}


int __fastcall PlayerCommandOrigin::PlayerCommandOrigin(int a1, Entity *a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EADE0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v2 + 16) = Entity::getLevel(v3);
  *(_BYTE *)(v2 + 20) = 0;
  return v2;
}


int __fastcall PlayerCommandOrigin::getSourceSubId(PlayerCommandOrigin *this, int a2)
{
  Player *v2; // r0@1
  int result; // r0@2

  v2 = (Player *)Level::getPlayer(*((_DWORD *)this + 4), a2, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
  if ( v2 )
    result = Player::getClientSubId(v2);
  else
    result = 0;
  return result;
}


int __fastcall PlayerCommandOrigin::clone(PlayerCommandOrigin *this, int a2)
{
  PlayerCommandOrigin *v2; // r4@1
  Entity *v3; // r6@1
  _QWORD *v4; // r0@2
  _QWORD *v5; // r5@2
  int result; // r0@2

  v2 = this;
  v3 = (Entity *)Level::getPlayer(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
  if ( v3 )
  {
    v4 = operator new(0x18u);
    v5 = v4;
    *(_DWORD *)v4 = &off_26EADE0;
    v4[1] = *(_QWORD *)Entity::getUniqueID(v3);
    *((_DWORD *)v5 + 4) = Entity::getLevel(v3);
    result = 0;
    *((_BYTE *)v5 + 20) = 0;
    *(_DWORD *)v2 = v5;
  }
  else
    *(_DWORD *)v2 = 0;
  return result;
}


int __fastcall PlayerCommandOrigin::toCommandOriginData(PlayerCommandOrigin *this, int a2)
{
  int v2; // r5@1
  PlayerCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


int __fastcall PlayerCommandOrigin::getWorldPosition(PlayerCommandOrigin *this, int a2)
{
  PlayerCommandOrigin *v2; // r4@1
  Entity *v3; // r0@1

  v2 = this;
  v3 = (Entity *)Level::getPlayer(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
  return CommandUtils::getFeetPos(v2, v3);
}


signed int __fastcall PlayerCommandOrigin::getEntity(PlayerCommandOrigin *this, int a2)
{
  return j_j_j__ZNK5Level9getPlayerE14EntityUniqueID_0(
           *((_DWORD *)this + 4),
           a2,
           *((_QWORD *)this + 1),
           *((_QWORD *)this + 1) >> 32);
}


int __fastcall PlayerCommandOrigin::getBlockPosition(PlayerCommandOrigin *this, int a2)
{
  PlayerCommandOrigin *v2; // r4@1
  Entity *v3; // r0@1

  v2 = this;
  v3 = (Entity *)Level::getPlayer(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
  return CommandUtils::getFeetBlockPos(v2, v3);
}


char *__fastcall PlayerCommandOrigin::getSourceId(PlayerCommandOrigin *this, int a2)
{
  Player *v2; // r0@1
  char *result; // r0@2

  v2 = (Player *)Level::getPlayer(*((_DWORD *)this + 4), a2, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
  if ( v2 )
    result = Player::getClientId(v2);
  else
    result = (char *)&CommandOrigin::sUnknownSource;
  return result;
}


int *__fastcall PlayerCommandOrigin::getName(PlayerCommandOrigin *this, int a2)
{
  int *v2; // r4@1
  signed int v3; // r0@1
  int *v4; // r1@2

  v2 = (int *)this;
  v3 = Level::getPlayer(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
  if ( v3 )
    v4 = (int *)(*(int (**)(void))(*(_DWORD *)v3 + 188))();
  else
    v4 = (int *)&Util::EMPTY_STRING;
  return sub_21E8AF4(v2, v4);
}


int __fastcall PlayerCommandOrigin::getPermissionsLevel(PlayerCommandOrigin *this, int a2)
{
  PlayerCommandOrigin *v2; // r5@1
  signed int v3; // r4@1
  int result; // r0@3

  v2 = this;
  v3 = Level::getPlayer(*((_DWORD *)this + 4), a2, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
  if ( v3 && Level::hasCommandsEnabled(*((Level **)v2 + 4)) == 1 )
    result = (*(int (__fastcall **)(signed int))(*(_DWORD *)v3 + 604))(v3);
  else
    result = 0;
  return result;
}


int __fastcall PlayerCommandOrigin::getOriginType(PlayerCommandOrigin *this)
{
  return 0;
}
