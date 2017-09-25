

int __fastcall EndGatewayBlock::getResourceCount(EndGatewayBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall EndGatewayBlock::~EndGatewayBlock(EndGatewayBlock *this)
{
  EndGatewayBlock::~EndGatewayBlock(this);
}


signed int __fastcall EndGatewayBlock::addCollisionShapes(int a1, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, Entity *a6)
{
  AABB *v6; // r8@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r6@1
  int v9; // r9@1
  BlockEntity *v10; // r0@2
  EndGatewayBlockEntity *v11; // r7@2
  signed int result; // r0@5

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a6
    && (v10 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3), (v11 = v10) != 0)
    && *(_DWORD *)BlockEntity::getType(v10) == 24
    && !EndGatewayBlockEntity::canTeleport(v11, a6, v8) )
  {
    result = Block::addCollisionShapes(v9, (int)v8, (int)v7, v6, a5);
  }
  else
    result = 0;
  return result;
}


void __fastcall EndGatewayBlock::~EndGatewayBlock(EndGatewayBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


BlockEntity *__fastcall EndGatewayBlock::animateTick(EndGatewayBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r10@1
  Random *v5; // r4@1
  BlockEntity *result; // r0@1
  EndGatewayBlockEntity *v7; // r6@1
  BlockEntity *v8; // r7@3
  int v27; // r0@8
  BlockSource *v28; // [sp+10h] [bp-90h]@1
  unsigned int v29; // [sp+14h] [bp-8Ch]@5
  int v30; // [sp+18h] [bp-88h]@5
  int v31; // [sp+1Ch] [bp-84h]@5
  float v32; // [sp+2Ch] [bp-74h]@8

  v4 = a3;
  v28 = a2;
  v5 = a4;
  result = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v7 = result;
  if ( result )
  {
    result = *(BlockEntity **)BlockEntity::getType(result);
    if ( result == (BlockEntity *)24 )
    {
      result = (BlockEntity *)EndGatewayBlockEntity::getParticleAmount(v7, v28, v4);
      v8 = result;
      if ( (signed int)result >= 1 )
      {
        __asm
        {
          VMOV.F32        S18, #-0.5
          VLDR            D8, =2.32830644e-10
          VMOV.F32        S20, #0.5
          VMOV.F32        S22, #0.25
        }
        do
          v31 = *(_DWORD *)v4;
          v29 = Random::_genRandInt32(v5);
          _R6 = *((_DWORD *)v4 + 1);
          _R5 = Random::_genRandInt32(v5);
          v30 = *((_DWORD *)v4 + 2);
          _R11 = Random::_genRandInt32(v5);
          _R8 = Random::_genRandInt32(v5);
          _R0 = Random::_genRandInt32(v5);
          __asm
          {
            VMOV            S0, R0
            VMOV            S2, R5
            VCVT.F64.U32    D0, S0
            VCVT.F64.U32    D1, S2
            VMUL.F64        D0, D0, D8
            VMUL.F64        D1, D1, D8
            VCVT.F32.F64    S0, D0
            VMOV            S4, R6
            VADD.F32        S0, S0, S18
            VCVT.F32.S32    S4, S4
            VCVT.F32.F64    S2, D1
            VADD.F32        S26, S2, S4
            VMUL.F32        S24, S0, S20
          }
          _R9 = Random::_genRandInt32(v5);
          _R5 = (2 * Random::_genRandInt32(v5) & 2) - 1;
          if ( Random::_genRandInt32(v5) & 0x8000000 )
            __asm { VMOV            S0, R8 }
            _R6 = *((_DWORD *)v4 + 2);
            __asm { VCVT.F64.U32    D14, S0 }
            _R0 = Random::_genRandInt32(v5);
            __asm
            {
              VMOV            S0, R0
              VMUL.F64        D2, D14, D8
              VCVT.F64.U32    D0, S0
            }
            _R0 = v29;
              VMOV            S2, R0
              VMUL.F64        D0, D0, D8
              VCVT.F64.U32    D1, S2
              VMOV            S6, R5
              VMUL.F64        D1, D1, D8
              VCVT.F32.S32    S6, S6
              VCVT.F32.F64    S4, D2
              VMUL.F32        S8, S6, S22
              VCVT.F32.F64    S0, D0
              VMOV            S10, R6
              VADD.F32        S4, S4, S18
              VCVT.F32.S32    S10, S10
            _R0 = v31;
              VADD.F32        S8, S8, S20
              VADD.F32        S0, S0, S0
              VMOV            S12, R0
              VCVT.F32.F64    S2, D1
              VCVT.F32.S32    S12, S12
              VADD.F32        S28, S8, S10
              VMUL.F32        S21, S4, S20
              VMUL.F32        S30, S6, S0
              VADD.F32        S19, S2, S12
          else
            __asm { VMOV            S0, R9 }
            _R6 = *(_DWORD *)v4;
              VMOV            S2, R11
            _R0 = v30;
              VADD.F32        S19, S8, S10
              VMUL.F32        S30, S4, S20
              VMUL.F32        S21, S6, S0
              VADD.F32        S28, S2, S12
          v27 = BlockSource::getLevel(v28);
            VSTR            S19, [SP,#0xA0+var_74]
            VSTR            S26, [SP,#0xA0+var_70]
            VSTR            S21, [SP,#0xA0+var_80]
            VSTR            S24, [SP,#0xA0+var_7C]
            VSTR            S28, [SP,#0xA0+var_6C]
            VSTR            S30, [SP,#0xA0+var_78]
          result = (BlockEntity *)Level::addParticle(v27, 20, (int)&v32);
          v8 = (BlockEntity *)((char *)v8 - 1);
        while ( v8 );
      }
    }
  }
  return result;
}


int __fastcall EndGatewayBlock::EndGatewayBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(25);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2708724;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 16779264;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 24;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 460))(v3, 1065353216);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v3 + 480))(v3, &Color::BLACK);
  *(_DWORD *)(v3 + 20) = 9;
  return v3;
}


signed int __fastcall EndGatewayBlock::isWaterBlocking(EndGatewayBlock *this)
{
  return 1;
}
