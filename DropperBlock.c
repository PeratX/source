

int __fastcall DropperBlock::DropperBlock(int a1, const void **a2, char a3)
{
  int result; // r0@1

  result = DispenserBlock::DispenserBlock(a1, a2, a3);
  *(_DWORD *)result = &loc_270811C;
  *(_DWORD *)(result + 32) = 14;
  return result;
}


void __fastcall DropperBlock::~DropperBlock(DropperBlock *this)
{
  DropperBlock::~DropperBlock(this);
}


int __fastcall DropperBlock::getAttachedFace(DropperBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mDropper, 15);
  _R0 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  _R1 = 715827883;
  __asm { SMMUL.W         R1, R0, R1 }
  return *((_BYTE *)&Facing::DIRECTIONS + _R0 - 6 * (_R1 + (_R1 >> 31)));
}


void __fastcall DropperBlock::~DropperBlock(DropperBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DropperBlock::dispenseFrom(DropperBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r7@1
  BlockSource *v5; // r8@1
  int result; // r0@1
  int v7; // r4@1
  int v8; // r6@2
  Container *v9; // r2@3
  Player *v10; // r4@5
  __int64 v11; // r2@5
  int v12; // r0@6
  int v13; // r10@6
  bool v14; // zf@6
  int v15; // r0@11
  int v16; // r11@11
  Player *v17; // r0@11
  __int64 v18; // r2@11
  Player *v19; // r7@11
  __int64 v20; // r2@11
  char v21; // [sp+Ch] [bp-54h]@11
  char v22; // [sp+18h] [bp-48h]@11
  char v23; // [sp+24h] [bp-3Ch]@11
  char v24; // [sp+30h] [bp-30h]@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = BlockSource::getBlockEntity(a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = (*(int (**)(void))(*(_DWORD *)result + 140))();
    if ( v8 <= -1 )
    {
      v10 = (Player *)BlockSource::getLevel(v4);
      Vec3::Vec3((int)&v24, (int)v3);
      LODWORD(v11) = &v24;
      HIDWORD(v11) = 1200;
      result = Level::broadcastLevelEvent(v10, 1001, v11, 0);
    }
    else
      v9 = (Container *)DropperBlockEntity::getAttachedContainer((DropperBlockEntity *)v7, v4);
      if ( v9 )
      {
        result = j_j_j__ZN18DropperBlockEntity12pushOutItemsER11BlockSourceP9Container((DropperBlockEntity *)v7, v4, v9);
      }
      else
        v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 128))(v7, v8);
        v13 = v12;
        result = *(_BYTE *)(v12 + 15);
        v14 = result == 0;
        if ( result )
        {
          result = *(_DWORD *)v13;
          v14 = *(_DWORD *)v13 == 0;
        }
        if ( !v14 )
          result = ItemInstance::isNull((ItemInstance *)v13);
          if ( !result )
          {
            result = *(_BYTE *)(v13 + 14);
            if ( *(_BYTE *)(v13 + 14) )
            {
              Vec3::Vec3((int)&v22, (int)v3);
              DispenserBlock::getDispensePosition((DispenserBlock *)&v23, v5, v4, (int)&v22);
              v15 = BlockSource::getData(v4, v3);
              v16 = DispenserBlock::getFacing(v5, v15);
              DispenserBlock::ejectItem(
                v5,
                v4,
                (const Vec3 *)&v23,
                (Vec3 *)v16,
                (const ItemInstance *)v13,
                (Container *)(v7 + 112),
                v8);
              v17 = (Player *)BlockSource::getLevel(v4);
              LODWORD(v18) = &v23;
              HIDWORD(v18) = Facing::STEP_X[v16] + 3 * Facing::STEP_Z[v16] + 4;
              Level::broadcastLevelEvent(v17, 2000, v18, 0);
              v19 = (Player *)BlockSource::getLevel(v4);
              Vec3::Vec3((int)&v21, (int)v3);
              LODWORD(v20) = &v21;
              HIDWORD(v20) = 1000;
              Level::broadcastLevelEvent(v19, 1000, v20, 0);
              BlockEntity::setChanged((BlockEntity *)v7);
              result = (*(int (__fastcall **)(int, int))(*(_DWORD *)(v7 + 112) + 84))(v7 + 112, v8);
            }
          }
  }
  return result;
}
