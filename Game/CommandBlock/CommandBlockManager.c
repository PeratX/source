

void __fastcall CommandBlockManager::~CommandBlockManager(CommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r0@1

  v1 = MinecartCommandBlockManager::~MinecartCommandBlockManager(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall CommandBlockManager::getLastPerformedConditionalMode(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *v3; // r0@1
  CommandBlockEntity *v4; // r4@1
  int result; // r0@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = v3;
  if ( v3 && *(_DWORD *)BlockEntity::getType(v3) == 26 )
    result = CommandBlockEntity::getLastPerformedConditionalMode(v4);
  else
    result = 1;
  return result;
}


void __fastcall CommandBlockManager::~CommandBlockManager(CommandBlockManager *this)
{
  CommandBlockManager::~CommandBlockManager(this);
}


BlockEntity *__fastcall CommandBlockManager::init(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@3
  BlockEntity *result; // r0@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 88))() )
    MinecartCommandBlockManager::_loadFromBaseCommandBlock(v1);
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  result = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)26 )
      result = j_j_j__ZN19CommandBlockManager15_loadFromEntityEv(v1);
  }
  return result;
}


int __fastcall CommandBlockManager::isMinecartCommandBlock(CommandBlockManager *this)
{
  return 0;
}


BlockEntity *__fastcall CommandBlockManager::_loadFromEntity(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *result; // r0@1
  CommandBlockEntity *v4; // r5@1
  BlockSource *v5; // r0@3
  BlockSource *v6; // r0@3
  int (__fastcall *v7)(CommandBlockManager *, int); // r6@3
  int v8; // r1@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  result = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = result;
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)26 )
    {
      v5 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
      *((_BYTE *)v1 + 45) = CommandBlockEntity::getMode(v4, v5);
      v6 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
      *((_BYTE *)v1 + 46) = CommandBlockEntity::getConditionalMode(v4, v6);
      *((_BYTE *)v1 + 47) = CommandBlockEntity::isRedstoneMode(v4);
      v7 = *(int (__fastcall **)(CommandBlockManager *, int))(*(_DWORD *)v1 + 16);
      v8 = (*(int (__fastcall **)(CommandBlockEntity *))(*(_DWORD *)v4 + 100))(v4);
      result = (BlockEntity *)v7(v1, v8);
    }
  }
  return result;
}


signed int __fastcall CommandBlockManager::setBlockTypeMode(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  BlockSource *v4; // r0@1
  BlockEntity *v5; // r0@1
  signed int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = (BlockSource *)Entity::getRegion(*(Entity **)(a1 + 4));
  v5 = (BlockEntity *)BlockSource::getBlockEntity(v4, (const BlockPos *)(v2 + 8));
  if ( v5 && *(_DWORD *)BlockEntity::getType(v5) == 26 && *(_BYTE *)(v2 + 45) != v3 )
  {
    result = 1;
    *(_BYTE *)(v2 + 45) = v3;
  }
  else
    result = 0;
  return result;
}


int __fastcall CommandBlockManager::CommandBlockManager(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  BlockSource *v6; // r0@1
  BlockEntity *v7; // r0@1
  CommandBlockEntity *v8; // r6@1
  BlockSource *v9; // r0@4
  BlockEntity *v10; // r0@4
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v5 = a1;
  v12 = *(_DWORD *)a2;
  v13 = *(_DWORD *)(a2 + 4);
  v14 = *(_DWORD *)(a2 + 8);
  MinecartCommandBlockManager::MinecartCommandBlockManager(a1, (int)&v12, a4, a4, a5);
  *(_DWORD *)v5 = &off_26E1510;
  *(_WORD *)(v5 + 46) = 0;
  v6 = (BlockSource *)Entity::getRegion(*(Entity **)(v5 + 4));
  v7 = (BlockEntity *)BlockSource::getBlockEntity(v6, (const BlockPos *)(v5 + 8));
  v8 = v7;
  if ( v7 && *(_DWORD *)BlockEntity::getType(v7) == 26 )
  {
    CommandBlockEntity::getBaseCommandBlock(v8);
    MinecartCommandBlockManager::_loadFromBaseCommandBlock((MinecartCommandBlockManager *)v5);
  }
  v9 = (BlockSource *)Entity::getRegion(*(Entity **)(v5 + 4));
  v10 = (BlockEntity *)BlockSource::getBlockEntity(v9, (const BlockPos *)(v5 + 8));
  if ( v10 && *(_DWORD *)BlockEntity::getType(v10) == 26 )
    CommandBlockManager::_loadFromEntity((CommandBlockManager *)v5);
  return v5;
}


int __fastcall CommandBlockManager::getLastPerformedCBMode(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *v3; // r0@1
  CommandBlockEntity *v4; // r4@1
  int result; // r0@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = v3;
  if ( v3 && *(_DWORD *)BlockEntity::getType(v3) == 26 )
    result = CommandBlockEntity::getLastPerformedCBMode(v4);
  else
    result = 0;
  return result;
}


BlockEntity *__fastcall CommandBlockManager::saveAndExit(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BaseCommandBlock *v2; // r1@1
  BlockSource *v3; // r0@3
  BlockEntity *result; // r0@3
  BlockEntity *v5; // r5@3
  const BlockPos *v6; // r8@5
  int *v7; // r9@5
  int *v8; // r10@5
  int v9; // r7@5
  unsigned int v10; // r6@5
  int v11; // r0@5
  char v12; // r1@5
  int v13; // r2@5

  v1 = this;
  v2 = (BaseCommandBlock *)(*(int (**)(void))(*(_DWORD *)this + 88))();
  if ( v2 )
    MinecartCommandBlockManager::_saveToBaseCommandBlock(v1, v2);
  v3 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
  result = (BlockEntity *)BlockSource::getBlockEntity(v3, (CommandBlockManager *)((char *)v1 + 8));
  v5 = result;
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)26 )
    {
      v6 = (const BlockPos *)Entity::getRegion(*((Entity **)v1 + 1));
      v7 = (int *)(*(int (__fastcall **)(CommandBlockManager *))(*(_DWORD *)v1 + 44))(v1);
      v8 = (int *)(*(int (__fastcall **)(CommandBlockManager *))(*(_DWORD *)v1 + 84))(v1);
      v9 = *((_BYTE *)v1 + 45);
      v10 = *((_WORD *)v1 + 23);
      v11 = *(_BYTE *)(*(int (__fastcall **)(CommandBlockManager *))(*(_DWORD *)v1 + 52))(v1);
      v12 = 0;
      v13 = (unsigned __int8)v10;
      if ( v10 > 0xFF )
        v12 = 1;
      if ( (_BYTE)v10 )
        v13 = 1;
      result = (BlockEntity *)CommandBlockEntity::updateBlock((unsigned int)v5, v6, v7, v8, v9, v13, v12, v11);
    }
  }
  return result;
}


BlockEntity *__fastcall CommandBlockManager::_getCommandBlockEntity(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *v3; // r0@1
  BlockEntity *v4; // r4@1
  BlockEntity *result; // r0@2

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v3) != 26 )
      v4 = 0;
    result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall CommandBlockManager::setRedstone(CommandBlockManager *this, int a2)
{
  signed int result; // r0@2

  if ( a2 == *((_BYTE *)this + 47) )
  {
    result = 0;
  }
  else
    *((_BYTE *)this + 47) = a2;
    result = 1;
  return result;
}


signed int __fastcall CommandBlockManager::setConditional(CommandBlockManager *this, int a2)
{
  signed int result; // r0@2

  if ( a2 == *((_BYTE *)this + 46) )
  {
    result = 0;
  }
  else
    *((_BYTE *)this + 46) = a2;
    result = 1;
  return result;
}


int __fastcall CommandBlockManager::getLastPerformedRedstoneMode(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *v3; // r0@1
  CommandBlockEntity *v4; // r4@1
  int result; // r0@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = v3;
  if ( v3 && *(_DWORD *)BlockEntity::getType(v3) == 26 )
    result = CommandBlockEntity::getLastPerformedRedstoneMode(v4);
  else
    result = 1;
  return result;
}


char *__fastcall CommandBlockManager::getBaseCommandBlock(CommandBlockManager *this)
{
  CommandBlockManager *v1; // r4@1
  BlockSource *v2; // r0@1
  BlockEntity *v3; // r0@1
  CommandBlockEntity *v4; // r4@1
  char *result; // r0@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (BlockEntity *)BlockSource::getBlockEntity(v2, (CommandBlockManager *)((char *)v1 + 8));
  v4 = v3;
  if ( v3 && *(_DWORD *)BlockEntity::getType(v3) == 26 )
    result = CommandBlockEntity::getBaseCommandBlock(v4);
  else
    result = 0;
  return result;
}
