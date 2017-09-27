

CompoundTag *__fastcall FlowerPotBlockEntity::getUpdatePacket(FlowerPotBlockEntity *this, BlockSource *a2)
{
  FlowerPotBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


signed int __fastcall FlowerPotBlockEntity::save(FlowerPotBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  FlowerPotBlockEntity *v3; // r5@1
  void *v4; // r0@3
  void *v5; // r0@4
  signed int result; // r0@5
  unsigned int *v7; // r12@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-2Ch]@4
  int v12; // [sp+Ch] [bp-24h]@3

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    if ( *((_DWORD *)v3 + 26) )
    {
      sub_21E94B4((void **)&v12, "item");
      CompoundTag::putShort((int)v2, (const void **)&v12, *(_BYTE *)(*((_DWORD *)v3 + 26) + 4));
      v4 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v12 - 4);
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
          j_j_j_j__ZdlPv_9(v4);
      }
      sub_21E94B4((void **)&v11, "mData");
      CompoundTag::putInt((int)v2, (const void **)&v11, *((_DWORD *)v3 + 27));
      v5 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v11 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall FlowerPotBlockEntity::setPlantItem(int result, __int64 a2)
{
  *(_QWORD *)(result + 104) = a2;
  return result;
}


void __fastcall FlowerPotBlockEntity::~FlowerPotBlockEntity(FlowerPotBlockEntity *this)
{
  FlowerPotBlockEntity::~FlowerPotBlockEntity(this);
}


void __fastcall FlowerPotBlockEntity::load(FlowerPotBlockEntity *this, const CompoundTag *a2)
{
  FlowerPotBlockEntity::load(this, a2);
}


void __fastcall FlowerPotBlockEntity::~FlowerPotBlockEntity(FlowerPotBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall FlowerPotBlockEntity::load(FlowerPotBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  FlowerPotBlockEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  int v6; // r6@3
  void *v7; // r0@3
  int v8; // r5@4
  void *v9; // r0@4
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  int v16; // [sp+4h] [bp-2Ch]@4
  int v17; // [sp+Ch] [bp-24h]@3
  int v18; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v18, "item");
  v4 = CompoundTag::contains((int)v2, (const void **)&v18);
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v17, "item");
    v6 = CompoundTag::getShort((int)v2, (const void **)&v17);
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v16, "mData");
    v8 = CompoundTag::getInt((int)v2, (const void **)&v16);
    v9 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    *((_DWORD *)v3 + 26) = Block::mBlocks[v6];
    *((_DWORD *)v3 + 27) = v8;
}


int __fastcall FlowerPotBlockEntity::FlowerPotBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "FlowerPot");
  BlockEntity::BlockEntity(v3, 7, v2);
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
  *(_DWORD *)v3 = &off_2709BBC;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  return v3;
}
