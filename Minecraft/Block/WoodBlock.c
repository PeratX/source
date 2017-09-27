

signed int __fastcall WoodBlock::isValidWoodMaterial(WoodBlock *this, int a2)
{
  signed int v2; // r1@1

  v2 = 0;
  if ( (unsigned int)this < 6 )
    v2 = 1;
  return v2;
}


void __fastcall WoodBlock::~WoodBlock(WoodBlock *this)
{
  WoodBlock::~WoodBlock(this);
}


int __fastcall WoodBlock::getSpawnResourcesAuxValue(WoodBlock *this, int a2)
{
  return a2;
}


void __fastcall WoodBlock::~WoodBlock(WoodBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall WoodBlock::buildDescriptionId(WoodBlock *this, int a2, unsigned int a3)
{
  WoodBlock::buildDescriptionId(this, a2, a3);
}


int __fastcall WoodBlock::getWoodMaterialColor(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  char v4; // r0@1
  char *v5; // r0@4
  int v6; // r1@4
  int v7; // r2@4
  int v8; // r3@4
  int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = byte_2815D30[0];
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)byte_2815D30) )
  {
    dword_2815D34 = 1057984400;
    dword_2815D38 = 1055846128;
    dword_2815D3C = 1049661585;
    dword_2815D40 = 0;
    dword_2815D44 = 1057063298;
    dword_2815D48 = 1051503789;
    unk_2815D4C = 1044694214;
    unk_2815D50 = 0;
    dword_2815D54 = 1064826873;
    dword_2815D58 = 1063905771;
    unk_2815D5C = 1059300260;
    unk_2815D60 = 0;
    dword_2815D64 = 1058510744;
    dword_2815D68 = 1054530268;
    unk_2815D6C = 1050319515;
    unk_2815D70 = 0;
    unk_2815D74 = 1062787290;
    unk_2815D78 = 1056898816;
    unk_2815D7C = 1045220558;
    unk_2815D80 = 0;
    unk_2815D84 = 1053609166;
    unk_2815D88 = 1050187929;
    unk_2815D8C = 1045220558;
    unk_2815D90 = 0;
    j___cxa_guard_release((unsigned int *)byte_2815D30);
  }
  v5 = &byte_2815D30[16 * v3];
  v6 = *((_DWORD *)v5 + 1);
  v7 = *((_DWORD *)v5 + 2);
  v8 = *((_DWORD *)v5 + 3);
  result = *((_DWORD *)v5 + 4);
  *(_DWORD *)v2 = v6;
  *(_DWORD *)(v2 + 4) = v7;
  *(_DWORD *)(v2 + 8) = v8;
  *(_DWORD *)(v2 + 12) = result;
  return result;
}


_DWORD *__fastcall WoodBlock::WoodBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2717720;
  return v3;
}


void __fastcall WoodBlock::buildDescriptionId(WoodBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  WoodBlock *v4; // r8@1
  unsigned int v5; // r5@1
  __int64 v6; // kr00_8@1
  int *v7; // r0@1
  unsigned int v8; // r0@1
  const void **v9; // r0@3
  const void **v10; // r0@3
  char *v11; // r0@3
  void *v12; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int v17; // [sp+4h] [bp-34h]@1
  char *v18; // [sp+8h] [bp-30h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  v7 = sub_21E8AF4(&v17, (int *)(v3 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  v8 = (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6)));
  if ( v8 > 5 )
    v8 = 0;
  v9 = sub_21E72F0((const void **)&v17, &WoodBlock::WOOD_NAMES[v8]);
  v18 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v18, ".name", 5u);
  *(_DWORD *)v4 = *v10;
  *v10 = &unk_28898CC;
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}
