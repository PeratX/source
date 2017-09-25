

void __fastcall PrismarineBlock::~PrismarineBlock(PrismarineBlock *this)
{
  PrismarineBlock::~PrismarineBlock(this);
}


int __fastcall PrismarineBlock::getSpawnResourcesAuxValue(PrismarineBlock *this, int a2)
{
  return a2;
}


void __fastcall PrismarineBlock::buildDescriptionId(PrismarineBlock *this, int a2, unsigned int a3)
{
  PrismarineBlock *v3; // r4@1
  unsigned int v4; // r5@1
  int v5; // r6@1
  char v6; // r0@1
  int *v7; // r0@4
  const void **v8; // r0@6
  const void **v9; // r0@6
  char *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-2Ch]@4
  char *v17; // [sp+8h] [bp-28h]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = byte_28133FC[0];
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)byte_28133FC) )
  {
    sub_21E94B4((void **)&dword_2813400, "rough");
    sub_21E94B4((void **)&dword_2813404, "dark");
    sub_21E94B4((void **)&dword_2813408, "bricks");
    _cxa_atexit(sub_ABF524);
    j___cxa_guard_release((unsigned int *)byte_28133FC);
  }
  v7 = sub_21E8AF4(&v16, (int *)(v5 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  if ( v4 > 2 )
    v4 = 0;
  v8 = sub_21E72F0((const void **)&v16, (const void **)&byte_28133FC[4 * v4 + 4]);
  v17 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v17, ".name", 5u);
  *(_DWORD *)v3 = *v9;
  *v9 = &unk_28898CC;
  v10 = v17 - 12;
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
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


int __fastcall PrismarineBlock::PrismarineBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_271168C;
  *(_QWORD *)(v3 + 60) = 4575657221408423936LL;
  result = v3;
  *(_DWORD *)(v3 + 68) = 1065353216;
  *(_DWORD *)(v3 + 72) = 1065353216;
  return result;
}


int __fastcall PrismarineBlock::getMapColor(PrismarineBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  PrismarineBlock *v4; // r4@1
  int result; // r0@5
  char v13; // [sp+4h] [bp-Ch]@1
  char v14; // [sp+5h] [bp-Bh]@1

  v4 = this;
  BlockSource::getBlockAndData((BlockSource *)&v13, a3, a4);
  _R1 = dword_18D0670;
  _R2 = dword_18D0678;
  _R3 = dword_18D0680;
  if ( !v14 )
  {
    _R1 = &dword_18D0670[1];
    _R2 = &dword_18D0678[1];
  }
  __asm { VLDR            S0, [R2] }
  if ( _ZF )
    _R3 = &dword_18D0680[1];
  __asm
    VLDR            S2, [R1]
    VLDR            S4, [R3]
  result = 0;
  *((_DWORD *)v4 + 3) = 0;
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  return result;
}


void __fastcall PrismarineBlock::buildDescriptionId(PrismarineBlock *this, int a2, unsigned int a3)
{
  PrismarineBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall PrismarineBlock::~PrismarineBlock(PrismarineBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
