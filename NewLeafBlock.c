

_DWORD *__fastcall NewLeafBlock::NewLeafBlock(int a1, const void **a2, char a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)LeafBlock::LeafBlock(a1, a2, a3);
  *result = &off_270F860;
  return result;
}


void __fastcall NewLeafBlock::~NewLeafBlock(NewLeafBlock *this)
{
  void *v1; // r0@1

  v1 = (void *)LeafBlock::~LeafBlock(this);
  j_j_j__ZdlPv_6(v1);
}


unsigned int __fastcall NewLeafBlock::dropExtraLoot(NewLeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r4@1
  Block *v6; // r6@1
  unsigned int result; // r0@1
  int v8; // [sp+0h] [bp-60h]@2
  int v9; // [sp+8h] [bp-58h]@6
  void *v10; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v4 = a2;
  v5 = a3;
  v6 = this;
  result = LeafBlock::getLeafType(this, a4);
  if ( result == 1 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mApple, 1, 0);
    Block::popResource(v6, v4, v5, (const ItemInstance *)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    result = 0;
  }
  return result;
}


unsigned int __fastcall NewLeafBlock::getVariant(NewLeafBlock *this, int a2)
{
  NewLeafBlock *v2; // r4@1
  unsigned int result; // r0@1

  v2 = this;
  result = LeafBlock::getLeafType(this, a2);
  if ( result > 1 )
    result = 0;
  if ( !*((_BYTE *)v2 + 641) )
    result += 2;
  return result;
}


void __fastcall NewLeafBlock::buildDescriptionId(NewLeafBlock *this, int a2, int a3)
{
  int v3; // r6@1
  NewLeafBlock *v4; // r4@1
  unsigned int v5; // r5@1
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
  int v16; // [sp+4h] [bp-24h]@4
  char *v17; // [sp+8h] [bp-20h]@6

  v3 = a2;
  v4 = this;
  v5 = LeafBlock::getLeafType((LeafBlock *)a2, a3);
  v6 = byte_281247C[0];
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)byte_281247C) )
  {
    sub_21E94B4((void **)&dword_2812480, "acacia");
    sub_21E94B4((void **)&dword_2812484, "big_oak");
    _cxa_atexit(sub_ABE710);
    j___cxa_guard_release((unsigned int *)byte_281247C);
  }
  v7 = sub_21E8AF4(&v16, (int *)(v3 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  if ( v5 > 1 )
    v5 = 0;
  v8 = sub_21E72F0((const void **)&v16, (const void **)&byte_281247C[4 * v5 + 4]);
  v17 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v17, ".name", 5u);
  *(_DWORD *)v4 = *v9;
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


void __fastcall NewLeafBlock::~NewLeafBlock(NewLeafBlock *this)
{
  NewLeafBlock::~NewLeafBlock(this);
}


void __fastcall NewLeafBlock::buildDescriptionId(NewLeafBlock *this, int a2, int a3)
{
  NewLeafBlock::buildDescriptionId(this, a2, a3);
}
