

int __fastcall PressurePlateBlock::getSignalStrength(PressurePlateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  PressurePlateBlock *v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r0@1
  __int64 v7; // r0@2
  __int64 v8; // r0@4
  __int64 v9; // r0@6
  void *v10; // r4@7
  void *v11; // r6@7
  bool v12; // zf@7
  int *v13; // r5@7
  int v14; // r5@15
  char v16; // [sp+4h] [bp-74h]@6
  char v17; // [sp+20h] [bp-58h]@4
  char v18; // [sp+3Ch] [bp-3Ch]@2
  void *v19; // [sp+58h] [bp-20h]@1
  void *v20; // [sp+5Ch] [bp-1Ch]@1
  int v21; // [sp+60h] [bp-18h]@1

  v3 = this;
  v19 = 0;
  v20 = 0;
  v4 = a3;
  v21 = 0;
  v5 = a2;
  v6 = *((_DWORD *)this + 162);
  if ( !v6 )
  {
    (*(void (__fastcall **)(char *, PressurePlateBlock *))(*(_DWORD *)v3 + 520))(&v18, v3);
    HIDWORD(v7) = BlockSource::fetchEntities(v5, 0, (const AABB *)&v18);
    LODWORD(v7) = &v19;
    std::vector<Entity *,std::allocator<Entity *>>::operator=(v7);
    v6 = *((_DWORD *)v3 + 162);
  }
  if ( v6 == 1 )
    (*(void (__fastcall **)(char *, PressurePlateBlock *, const BlockPos *))(*(_DWORD *)v3 + 520))(&v17, v3, v4);
    HIDWORD(v8) = BlockSource::fetchEntities((int)v5, 256, (int)&v17, 0);
    LODWORD(v8) = &v19;
    std::vector<Entity *,std::allocator<Entity *>>::operator=(v8);
  if ( v6 == 2 )
    (*(void (__fastcall **)(char *, PressurePlateBlock *, const BlockPos *))(*(_DWORD *)v3 + 520))(&v16, v3, v4);
    HIDWORD(v9) = BlockSource::fetchEntities((int)v5, 319, (int)&v16, 0);
    LODWORD(v9) = &v19;
    std::vector<Entity *,std::allocator<Entity *>>::operator=(v9);
  v11 = v20;
  v10 = v19;
  v12 = v20 == v19;
  v13 = (int *)&Redstone::SIGNAL_NONE;
  if ( v20 != v19 )
    v12 = v19 == v20;
  if ( !v12 )
    v13 = (int *)&Redstone::SIGNAL_MAX;
    while ( (*(int (**)(void))(**(_DWORD **)v10 + 488))() == 69 )
    {
      v10 = (char *)v10 + 4;
      if ( v11 == v10 )
      {
        v13 = (int *)&Redstone::SIGNAL_NONE;
        break;
      }
    }
    v10 = v19;
  v14 = *v13;
  if ( v10 )
    operator delete(v10);
  return v14;
}


signed int __fastcall PressurePlateBlock::getSignalForData(PressurePlateBlock *this, int a2)
{
  signed int result; // r0@1

  result = 15;
  if ( a2 != 1 )
    result = 0;
  return result;
}


signed int __fastcall PressurePlateBlock::getDataForSignal(PressurePlateBlock *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( a2 > 0 )
    result = 1;
  return result;
}


int __fastcall PressurePlateBlock::PressurePlateBlock(int a1, const void **a2, int a3, int a4, int a5)
{
  int result; // r0@1

  result = BasePressurePlateBlock::BasePressurePlateBlock(a1, a2, a3, a4);
  *(_DWORD *)result = &off_2711478;
  *(_DWORD *)(result + 648) = a5;
  return result;
}


void __fastcall PressurePlateBlock::~PressurePlateBlock(PressurePlateBlock *this)
{
  Block *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2722278;
  v2 = *((_DWORD *)this + 161);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  Block::~Block(v1);
  operator delete((void *)v1);
}


void __fastcall PressurePlateBlock::~PressurePlateBlock(PressurePlateBlock *this)
{
  PressurePlateBlock::~PressurePlateBlock(this);
}


ItemInstance *__fastcall PressurePlateBlock::asItemInstance(PressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int **v4; // r1@2

  if ( (unsigned int)(*((_DWORD *)a2 + 162) - 1) > 1 )
    v4 = Block::mWoodPressurePlate;
  else
    v4 = Block::mStonePressurePlate;
  return ItemInstance::ItemInstance(this, **v4);
}
