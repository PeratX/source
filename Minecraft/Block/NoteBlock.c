

int __fastcall NoteBlock::onPlace(NoteBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  NoteBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(NoteBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


void __fastcall NoteBlock::~NoteBlock(NoteBlock *this)
{
  NoteBlock::~NoteBlock(this);
}


int __fastcall NoteBlock::triggerEvent(NoteBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r6@1
  unsigned __int8 v6; // r5@1
  Level *v8; // r4@1
  float v14; // [sp+1Ch] [bp-34h]@1
  float v15; // [sp+28h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  Vec3::Vec3((int)&v15, (int)a3);
  _R9 = a5;
  v8 = (Level *)BlockSource::getLevel(v5);
  Level::broadcastSoundEvent(v8, (int)v5, 77, (int)&v15, v6, a5, 0, 0);
  __asm
  {
    VMOV            S2, R9
    VLDR            S10, =1.2
    VMOV.F32        S0, #0.5
    VLDR            S12, =0.041667
    VCVT.F32.S32    S2, S2
    VLDR            S4, [SP,#0x50+var_28]
    VLDR            S6, [SP,#0x50+var_24]
    VLDR            S8, [SP,#0x50+var_20]
    VADD.F32        S6, S6, S10
    VADD.F32        S4, S4, S0
    VMUL.F32        S2, S2, S12
    VADD.F32        S0, S8, S0
    VSTR            S4, [SP,#0x50+var_34]
    VSTR            S6, [SP,#0x50+var_30]
    VSTR            S0, [SP,#0x50+var_2C]
    VSTR            S2, [SP,#0x50+var_40]
  }
  return Level::addParticle((int)v8, 36, (int)&v14);
}


int __fastcall NoteBlock::onLoaded(NoteBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
      *(_BYTE *)(result + 44) = 1;
  }
  return result;
}


const void **__fastcall NoteBlock::getSoundName(NoteBlock *this, int a2, int a3)
{
  int v3; // r5@1
  const void **v4; // r4@1
  int v5; // r6@2

  v3 = a3;
  v4 = (const void **)this;
  if ( a3 <= -1 )
  {
    v3 = 0;
    v5 = dword_2812664;
  }
  else
    if ( (dword_2812668 - dword_2812664) >> 2 <= a3 )
      v3 = 0;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E6FCC((const void **)this, *(_DWORD *)(*(_DWORD *)(v5 + 4 * v3) - 12) + 5);
  sub_21E7408(v4, "note.", 5u);
  return sub_21E72F0(v4, (const void **)(v5 + 4 * v3));
}


int __fastcall NoteBlock::NoteBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270FC64;
  *(_DWORD *)(v3 + 32) = 11;
  Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


signed int __fastcall NoteBlock::use(NoteBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r5@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r0@1
  Level *v7; // r0@1
  BlockSource *v8; // r0@2
  BlockEntity *v9; // r0@2
  MusicBlockEntity *v10; // r6@2
  BlockSource *v11; // r0@4

  v4 = a2;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  v7 = (Level *)BlockSource::getLevel(v6);
  if ( !Level::isClientSide(v7) )
  {
    v8 = (BlockSource *)Entity::getRegion(v4);
    v9 = (BlockEntity *)BlockSource::getBlockEntity(v8, v5);
    v10 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)BlockEntity::getType(v9) == 11 )
      {
        MusicBlockEntity::tune(v10);
        v11 = (BlockSource *)Entity::getRegion(v4);
        MusicBlockEntity::playNote(v10, v11, v5);
      }
    }
  }
  return 1;
}


signed int __fastcall NoteBlock::attack(NoteBlock *this, Player *a2, const BlockPos *a3)
{
  Entity *v3; // r5@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r0@1
  Level *v6; // r0@1
  BlockSource *v7; // r0@2
  BlockEntity *v8; // r0@2
  MusicBlockEntity *v9; // r6@2
  BlockSource *v10; // r0@4

  v3 = a2;
  v4 = a3;
  v5 = (BlockSource *)Entity::getRegion(a2);
  v6 = (Level *)BlockSource::getLevel(v5);
  if ( !Level::isClientSide(v6) )
  {
    v7 = (BlockSource *)Entity::getRegion(v3);
    v8 = (BlockEntity *)BlockSource::getBlockEntity(v7, v4);
    v9 = v8;
    if ( v8 )
    {
      if ( *(_DWORD *)BlockEntity::getType(v8) == 11 )
      {
        v10 = (BlockSource *)Entity::getRegion(v3);
        MusicBlockEntity::playNote(v9, v10, v4);
      }
    }
  }
  return 1;
}


BlockEntity *__fastcall NoteBlock::onRedstoneUpdate(NoteBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockEntity *result; // r0@1
  int v6; // r4@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r6@1
  BlockEntity *v9; // r7@2

  result = (BlockEntity *)a5;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( !a5 )
  {
    result = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
    v9 = result;
    if ( result )
    {
      result = *(BlockEntity **)BlockEntity::getType(result);
      if ( result == (BlockEntity *)11 )
      {
        result = 0;
        if ( v6 > 0 )
          result = (BlockEntity *)1;
        if ( (BlockEntity *)*((_BYTE *)v9 + 103) != result )
        {
          if ( v6 >= 1 )
            MusicBlockEntity::playNote(v9, v8, v7);
          result = 0;
          if ( v6 > 0 )
            result = (BlockEntity *)1;
          *((_BYTE *)v9 + 103) = (_BYTE)result;
        }
      }
    }
  }
  return result;
}


void __fastcall NoteBlock::~NoteBlock(NoteBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall NoteBlock::getPitch(NoteBlock *this, int a2)
{
  _R0 = a2 - 12;
  __asm
  {
    VLDR            S2, =0.083333
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return j_j_exp2f(_R0);
}


signed int __fastcall NoteBlock::isInteractiveBlock(NoteBlock *this)
{
  return 1;
}
