

int __fastcall InvisibleBlock::InvisibleBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v11; // r2@1
  float v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_270D254;
  Block::setSolid((Block *)v5, 0);
  v14 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v11 = (int *)&v13;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v11 = &v14;
  Block::mTranslucency[v4] = *v11;
  return v5;
}


void __fastcall InvisibleBlock::~InvisibleBlock(InvisibleBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall InvisibleBlock::~InvisibleBlock(InvisibleBlock *this)
{
  InvisibleBlock::~InvisibleBlock(this);
}
