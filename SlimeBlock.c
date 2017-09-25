

int __fastcall SlimeBlock::SlimeBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2713EE8;
  v6 = *(_QWORD *)(v5 + 24);
  LODWORD(v6) = v6 | 0x1C0000;
  *(_QWORD *)(v5 + 24) = v6;
  *(_DWORD *)(v5 + 76) = 1061997773;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  *(_DWORD *)(v5 + 20) = 1;
  Block::setSolid((Block *)v5, 1);
  return v5;
}


void __fastcall SlimeBlock::~SlimeBlock(SlimeBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall SlimeBlock::~SlimeBlock(SlimeBlock *this)
{
  SlimeBlock::~SlimeBlock(this);
}


signed int __fastcall SlimeBlock::getExtraRenderLayers(SlimeBlock *this)
{
  return 8;
}


int __fastcall SlimeBlock::onFallOn(SlimeBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, float a5)
{
  Entity *v5; // r4@1
  Block *v6; // r7@1
  BlockSource *v7; // r6@1
  const BlockPos *v8; // r5@1

  v5 = a4;
  v6 = this;
  v7 = a2;
  v8 = a3;
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)a4 + 312))(a4) )
    *((_DWORD *)v5 + 56) = 0;
  return Block::onFallOn(v6, v7, v8, v5, 0.0);
}


int __fastcall SlimeBlock::onStepOn(SlimeBlock *this, Entity *a2, const BlockPos *a3)
{
  const BlockPos *v8; // r4@1
  Block *v9; // r6@1

  _R5 = a2;
  __asm
  {
    VLDR            S2, =0.1
    VLDR            S0, [R5,#0x70]
  }
  v8 = a3;
  v9 = this;
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF && !(*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 312))(a2) )
    __asm
    {
      VLDR            S2, [R5,#0x70]
      VLDR            S4, =0.2
      VABS.F32        S2, S2
      VLDR            S0, [R5,#0x6C]
      VMUL.F32        S2, S2, S4
      VLDR            S4, =0.4
      VADD.F32        S2, S2, S4
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R5,#0x6C]
      VLDR            S0, [R5,#0x74]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R5,#0x74]
    }
  return j_j_j__ZNK5Block8onStepOnER6EntityRK8BlockPos(v9, _R5, v8);
}


int __fastcall SlimeBlock::updateEntityAfterFallOn(SlimeBlock *this, Entity *a2)
{
  SlimeBlock *v3; // r5@1
  int result; // r0@1
  int (__fastcall *v9)(Entity *, char *, char *); // r7@5
  int v10; // r0@5
  char v11; // [sp+4h] [bp-24h]@5
  char v12; // [sp+5h] [bp-23h]@5
  char v13; // [sp+8h] [bp-20h]@5

  _R4 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 312))(a2);
  if ( result == 1 )
  {
    result = j_j_j__ZNK5Block23updateEntityAfterFallOnER6Entity(v3, _R4);
  }
  else
    __asm
    {
      VLDR            S0, [R4,#0x70]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VNEG.F32        S0, S0
        VSTR            S0, [R4,#0x70]
      }
      v9 = *(int (__fastcall **)(Entity *, char *, char *))(*(_DWORD *)_R4 + 420);
      v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      BlockPos::BlockPos((int)&v13, v10);
      v11 = *((_BYTE *)v3 + 4);
      v12 = 0;
      result = v9(_R4, &v13, &v11);
  return result;
}
