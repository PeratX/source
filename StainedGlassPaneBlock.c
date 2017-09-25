

int __fastcall StainedGlassPaneBlock::StainedGlassPaneBlock(int a1, const void **a2, int a3, int a4, char a5)
{
  int result; // r0@1

  result = ThinFenceBlock::ThinFenceBlock(a1, a2, a3, a4, a5, 0);
  *(_DWORD *)result = &off_27148E8;
  *(_DWORD *)(result + 20) = 1;
  return result;
}


unsigned int __fastcall StainedGlassPaneBlock::getItemAuxValueForBlockData(StainedGlassPaneBlock *this, int a2)
{
  return ~(unsigned int)this & 0xF;
}


unsigned int __fastcall StainedGlassPaneBlock::getBlockDataForItemAuxValue(StainedGlassPaneBlock *this, int a2)
{
  return ~(unsigned int)this & 0xF;
}


int __fastcall StainedGlassPaneBlock::getSpawnResourcesAuxValue(StainedGlassPaneBlock *this, int a2)
{
  return a2;
}


void __fastcall StainedGlassPaneBlock::~StainedGlassPaneBlock(StainedGlassPaneBlock *this)
{
  StainedGlassPaneBlock::~StainedGlassPaneBlock(this);
}


void __fastcall StainedGlassPaneBlock::buildDescriptionId(StainedGlassPaneBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  StainedGlassPaneBlock *v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  int v7; // r5@1
  int *v8; // r0@1
  char *v9; // r0@1
  const void **v10; // r0@1
  const void **v11; // r0@1
  char *v12; // r0@1
  void *v13; // r0@2
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  int v18; // [sp+4h] [bp-2Ch]@1
  char *v19; // [sp+8h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v7 = Palette::fromByte(
         (Palette *)((0xFu >> (4 - (*v6 >> 32))) & (unsigned __int8)(v5 >> (*v6 + 1 - (*v6 >> 32)))),
         v5 >> (*v6 + 1 - (*v6 >> 32)));
  v8 = sub_21E8AF4(&v18, (int *)(v3 + 8));
  sub_21E7408((const void **)v8, ".", 1u);
  v9 = Palette::getColorString(v7);
  v10 = sub_21E72F0((const void **)&v18, (const void **)v9);
  v19 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v19, ".name", 5u);
  *(_DWORD *)v4 = *v11;
  *v11 = &unk_28898CC;
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall StainedGlassPaneBlock::~StainedGlassPaneBlock(StainedGlassPaneBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall StainedGlassPaneBlock::buildDescriptionId(StainedGlassPaneBlock *this, int a2, unsigned int a3)
{
  StainedGlassPaneBlock::buildDescriptionId(this, a2, a3);
}


int __fastcall StainedGlassPaneBlock::getResourceCount(StainedGlassPaneBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}
