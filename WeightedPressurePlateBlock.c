

void __fastcall WeightedPressurePlateBlock::~WeightedPressurePlateBlock(WeightedPressurePlateBlock *this)
{
  WeightedPressurePlateBlock::~WeightedPressurePlateBlock(this);
}


int __fastcall WeightedPressurePlateBlock::getSignalForData(WeightedPressurePlateBlock *this, int a2)
{
  return a2;
}


int __fastcall WeightedPressurePlateBlock::WeightedPressurePlateBlock(int a1, const void **a2, int a3, int a4, int a5)
{
  int result; // r0@1

  result = BasePressurePlateBlock::BasePressurePlateBlock(a1, a2, a3, a4);
  *(_DWORD *)result = &off_271750C;
  *(_DWORD *)(result + 648) = a5;
  return result;
}


signed int __fastcall WeightedPressurePlateBlock::getTickDelay(WeightedPressurePlateBlock *this)
{
  return 10;
}


void __fastcall WeightedPressurePlateBlock::~WeightedPressurePlateBlock(WeightedPressurePlateBlock *this)
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


ItemInstance *__fastcall WeightedPressurePlateBlock::asItemInstance(WeightedPressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int *v4; // r2@1

  v4 = &Block::mHeavyWeightedPressurePlate;
  if ( *((_DWORD *)a2 + 162) == 15 )
    v4 = &Block::mLightWeightedPressurePlate;
  return ItemInstance::ItemInstance(this, *v4);
}


int __fastcall WeightedPressurePlateBlock::getDataForSignal(WeightedPressurePlateBlock *this, int a2)
{
  return a2;
}


int __fastcall WeightedPressurePlateBlock::getSignalStrength(WeightedPressurePlateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  WeightedPressurePlateBlock *v3; // r4@1
  BlockSource *v4; // r5@1
  int *v6; // r5@1 OVERLAPPED
  int *v7; // r6@1 OVERLAPPED
  int v8; // t1@2
  int result; // r0@8
  int v18; // [sp+0h] [bp-30h]@1

  v3 = this;
  v4 = a2;
  (*(void (__fastcall **)(int *, WeightedPressurePlateBlock *, const BlockPos *))(*(_DWORD *)this + 520))(
    &v18,
    this,
    a3);
  _R7 = 0;
  *(_QWORD *)&v6 = *(_QWORD *)BlockSource::fetchEntities(v4, 0, (const AABB *)&v18);
  while ( v7 != v6 )
  {
    v8 = *v6;
    ++v6;
    if ( (*(int (**)(void))(*(_DWORD *)v8 + 488))() != 69 )
      ++_R7;
  }
  _R0 = *((_DWORD *)v3 + 162);
  if ( _R0 < _R7 )
    _R7 = *((_DWORD *)v3 + 162);
  if ( _R7 < 1 )
    result = 0;
  else
    __asm
    {
      VMOV            S0, R0
      VMOV            S2, R7
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    _R0 = &Redstone::SIGNAL_MAX;
      VDIV.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = ceilf(_R0);
      VCVTR.S32.F32   S0, S0
  return result;
}
