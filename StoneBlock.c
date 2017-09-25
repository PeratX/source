

void __fastcall StoneBlock::buildDescriptionId(StoneBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  StoneBlock *v4; // r8@1
  unsigned int v5; // r5@1
  __int64 v6; // kr00_8@1
  char v7; // r0@1
  int *v8; // r0@4
  unsigned int v9; // r0@4
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // [sp+0h] [bp-40h]@4
  char *v19; // [sp+4h] [bp-3Ch]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  v7 = byte_2814C30[0];
  __dmb();
  if ( !(v7 & 1) && j___cxa_guard_acquire((unsigned int *)byte_2814C30) )
  {
    sub_21E94B4((void **)&dword_2814C34, "stone");
    sub_21E94B4((void **)&dword_2814C38, "granite");
    sub_21E94B4((void **)&dword_2814C3C, "graniteSmooth");
    sub_21E94B4((void **)&dword_2814C40, "diorite");
    sub_21E94B4((void **)&dword_2814C44, "dioriteSmooth");
    sub_21E94B4((void **)&dword_2814C48, "andesite");
    sub_21E94B4((void **)&dword_2814C4C, "andesiteSmooth");
    _cxa_atexit(sub_AC02FC);
    j___cxa_guard_release((unsigned int *)byte_2814C30);
  }
  v8 = sub_21E8AF4(&v18, (int *)(v3 + 8));
  sub_21E7408((const void **)v8, ".", 1u);
  v9 = (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6)));
  if ( v9 > 6 )
    v9 = 0;
  v10 = sub_21E72F0((const void **)&v18, (const void **)&byte_2814C30[4 * v9 + 4]);
  v19 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v19, ".name", 5u);
  *(_DWORD *)v4 = *v11;
  *v11 = &unk_28898CC;
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
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
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall StoneBlock::getResource(StoneBlock *this, Random *a2, int a3, int a4)
{
  unsigned __int8 v4; // r4@1
  unsigned __int64 *v5; // r0@1
  _DWORD *v6; // r2@1

  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v6 = &Block::mStone;
  if ( !((v4 >> (1 - (*v5 >> 32) + *v5)) & (0xFu >> (4 - (*v5 >> 32)))) )
    v6 = &Block::mCobblestone;
  return *(_BYTE *)(*v6 + 4);
}


void __fastcall StoneBlock::buildDescriptionId(StoneBlock *this, int a2, unsigned int a3)
{
  StoneBlock::buildDescriptionId(this, a2, a3);
}


signed int __fastcall StoneBlock::canBeOriginalSurface(StoneBlock *this)
{
  return 1;
}


_DWORD *__fastcall StoneBlock::StoneBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2714EEC;
  return v3;
}


void __fastcall StoneBlock::~StoneBlock(StoneBlock *this)
{
  StoneBlock::~StoneBlock(this);
}


void __fastcall StoneBlock::~StoneBlock(StoneBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall StoneBlock::getSpawnResourcesAuxValue(StoneBlock *this, int a2)
{
  return a2;
}
