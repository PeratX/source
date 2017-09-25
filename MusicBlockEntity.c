

unsigned int __fastcall MusicBlockEntity::load(MusicBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  MusicBlockEntity *v3; // r4@1
  void *v4; // r0@1
  unsigned int result; // r0@2
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v8, "note");
  *((_BYTE *)v3 + 102) = CompoundTag::getByte((int)v2, (const void **)&v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  result = *((_BYTE *)v3 + 102);
  if ( result > 0x18 )
    result = 24;
  *((_BYTE *)v3 + 102) = result;
  return result;
}


int __fastcall MusicBlockEntity::MusicBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Music");
  BlockEntity::BlockEntity(v3, 11, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_270A30C;
  *(_BYTE *)(v3 + 102) = 0;
  return v3;
}


int __fastcall MusicBlockEntity::tune(MusicBlockEntity *this)
{
  *((_BYTE *)this + 102) = ((unsigned int)*((_BYTE *)this + 102) + 1) % 0x19;
  return j_j_j__ZN11BlockEntity10setChangedEv_0(this);
}


void __fastcall MusicBlockEntity::~MusicBlockEntity(MusicBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MusicBlockEntity::save(MusicBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r5@1
  MusicBlockEntity *v3; // r6@1
  signed int v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v4 = BlockEntity::save(this, a2);
  sub_21E94B4((void **)&v9, "note");
  CompoundTag::putByte((int)v2, (const void **)&v9, *((_BYTE *)v3 + 102));
  v5 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}


void __fastcall MusicBlockEntity::~MusicBlockEntity(MusicBlockEntity *this)
{
  MusicBlockEntity::~MusicBlockEntity(this);
}


int __fastcall MusicBlockEntity::playNote(MusicBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  MusicBlockEntity *v5; // r8@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int result; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  Block *v12; // r0@2
  int *v13; // r6@2
  int v14; // r7@2
  int v15; // [sp+4h] [bp-34h]@2
  int v16; // [sp+8h] [bp-30h]@2
  int v17; // [sp+Ch] [bp-2Ch]@2
  unsigned __int8 v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+14h] [bp-24h]@1
  int v20; // [sp+18h] [bp-20h]@1
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v19 = v6;
  v20 = v7 + 1;
  v21 = v8;
  BlockSource::getBlockID((BlockSource *)&v18, v4, (int)&v19);
  result = *(_BYTE *)(Block::mAir + 4);
  if ( v18 == result )
  {
    v10 = *((_DWORD *)v3 + 1);
    v11 = *((_DWORD *)v3 + 2);
    v15 = *(_DWORD *)v3;
    v16 = v10 - 1;
    v17 = v11;
    v12 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v15);
    v13 = (int *)Block::getMaterial(v12);
    v14 = Material::isType(v13, 3);
    if ( Material::isType(v13, 14) )
      v14 = 2;
    if ( Material::isType(v13, 16) )
      v14 = 3;
    if ( Material::isType(v13, 2) )
      v14 = 4;
    result = BlockSource::blockEvent(v4, v3, v14, *((_BYTE *)v5 + 102));
  }
  return result;
}
