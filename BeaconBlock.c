

void __fastcall BeaconBlock::~BeaconBlock(BeaconBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BeaconBlock::BeaconBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  char v8; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_Material::getMaterial(16);
  j_EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_272248C;
  *(_DWORD *)(v3 + 32) = 21;
  *(_DWORD *)(v3 + 20) = 8;
  v8 = 14;
  j_Block::setLightBlock(v3, &v8);
  j_Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


signed int __fastcall BeaconBlock::use(BeaconBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@2
  BlockSource *v7; // r0@3
  int v8; // r0@3
  BlockEntity *v9; // r5@3
  void (__fastcall *v10)(Entity *, char *); // r6@5
  char *v11; // r0@5

  v4 = a2;
  v5 = a3;
  if ( j_Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
  {
    v6 = (Level *)j_Entity::getLevel(v4);
    if ( !j_Level::isClientSide(v6) )
    {
      v7 = (BlockSource *)j_Entity::getRegion(v4);
      v8 = j_BlockSource::getBlockEntity(v7, v5);
      v9 = (BlockEntity *)v8;
      if ( v8 )
      {
        if ( j_BlockEntity::isType(v8, 21) == 1 )
        {
          v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1320);
          v11 = j_BlockEntity::getPosition(v9);
          v10(v4, v11);
        }
      }
    }
  }
  return 1;
}


signed int __fastcall BeaconBlock::isInteractiveBlock(BeaconBlock *this)
{
  return 1;
}


void __fastcall BeaconBlock::~BeaconBlock(BeaconBlock *this)
{
  BeaconBlock::~BeaconBlock(this);
}
