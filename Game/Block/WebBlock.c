

void __fastcall WebBlock::~WebBlock(WebBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall WebBlock::getAABB(WebBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r4@1
  AABB *v8; // r5@2
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  if ( a6 == 1 )
  {
    v8 = (AABB *)AABB::set(a4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


void __fastcall WebBlock::~WebBlock(WebBlock *this)
{
  WebBlock::~WebBlock(this);
}


int __fastcall WebBlock::WebBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v7; // r2@1
  int *v13; // r2@1
  float v15; // [sp+0h] [bp-18h]@1
  int v16; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(27);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_271730C;
  Block::setSolid((Block *)v3, 0);
  v7 = v3 + 20;
  *(_DWORD *)v7 = 5;
  *(_DWORD *)(v7 + 4) = 0x2000000;
  *(_DWORD *)(v7 + 8) = 0;
  v16 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v13 = (int *)&v15;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v13 = &v16;
  Block::mTranslucency[v4] = *v13;
  return v3;
}


int __fastcall WebBlock::entityInside(WebBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  Entity *v4; // r4@1
  int result; // r0@3

  v4 = a4;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a4 + 488))(a4) != 319
    || Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) != 1
    || (result = Abilities::getBool((int)v4 + 4320, (int **)&Abilities::FLYING)) == 0 )
  {
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 228))(v4);
  }
  return result;
}
