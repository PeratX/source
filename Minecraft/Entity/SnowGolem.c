

int __fastcall SnowGolem::aiStep(SnowGolem *this)
{
  float v2; // r1@3
  int v3; // r5@3
  float v4; // r1@3
  int v5; // r6@3
  float v6; // r1@3
  int v7; // r7@3
  BlockSource *v8; // r0@3
  const BlockSource *v9; // r9@3
  Biome *v10; // r0@3
  int result; // r0@3
  Level *v16; // r0@7
  unsigned __int64 *v17; // r0@7
  float v18; // r1@7
  unsigned int v19; // r4@8
  int v22; // r7@9
  float v24; // r1@9
  int v25; // r0@9
  int v26; // r6@9
  float v28; // r1@9
  int v29; // r0@9
  int v30; // r5@9
  Block *v31; // r0@9
  int (*v32)(void); // r3@10
  char v33; // [sp+10h] [bp-70h]@11
  int v34; // [sp+14h] [bp-6Ch]@10
  int v35; // [sp+18h] [bp-68h]@10
  int v36; // [sp+1Ch] [bp-64h]@10
  char v37; // [sp+20h] [bp-60h]@4
  int v38; // [sp+28h] [bp-58h]@3
  int v39; // [sp+2Ch] [bp-54h]@3
  int v40; // [sp+30h] [bp-50h]@3
  int v41; // [sp+34h] [bp-4Ch]@3
  int v42; // [sp+38h] [bp-48h]@3
  int v43; // [sp+3Ch] [bp-44h]@3
  char v44; // [sp+40h] [bp-40h]@2

  _R10 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 212))() == 1 )
  {
    j_EntityDamageSource::EntityDamageSource((int)&v44, 12);
    j_Entity::hurt(_R10, (const EntityDamageSource *)&v44, 1, 1, 0);
    j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v44);
  }
  j_Mob::aiStep(_R10);
  v3 = j_mce::Math::floor(*((mce::Math **)_R10 + 18), v2);
  v5 = j_mce::Math::floor(*((mce::Math **)_R10 + 19), v4);
  v7 = j_mce::Math::floor(*((mce::Math **)_R10 + 20), v6);
  v8 = (BlockSource *)j_Entity::getRegion(_R10);
  v9 = v8;
  v41 = v3;
  v42 = v5;
  v43 = v7;
  v10 = (Biome *)j_BlockSource::getBiome(v8, (const BlockPos *)&v41);
  v38 = v3;
  v39 = v5;
  v40 = v7;
  result = j_Biome::getTemperature(v10, v9, (const BlockPos *)&v38);
  __asm
    VMOV.F32        S0, #1.0
    VMOV            S16, R0
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    j_EntityDamageSource::EntityDamageSource((int)&v37, 12);
    j_Entity::hurt(_R10, (const EntityDamageSource *)&v37, 1, 1, 0);
    result = j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v37);
    VLDR            S0, =0.81
  if ( _NF ^ _VF )
    v16 = (Level *)j_Entity::getLevel(_R10);
    v17 = (unsigned __int64 *)j_Level::getGameRules(v16);
    result = j_GameRules::getBool(v17, (int **)&GameRules::MOB_GRIEFING);
    if ( result == 1 )
    {
      __asm { VMOV.F32        S16, #0.25 }
      v19 = 0;
      do
      {
        _R0 = 2 * (v19 - ((v19 + (v19 >> 31)) & 0x7FFFFFFE)) - 1;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VLDR            S2, [R10,#0x48]
          VMUL.F32        S0, S0, S16
          VADD.F32        S0, S2, S0
          VMOV            R0, S0
        }
        v22 = j_mce::Math::floor(_R0, v18);
        _R0 = 2 * ((signed int)v19 / 2 - (((signed int)v19 / 2 + ((v19 + (v19 >> 31)) >> 31)) & 0x7FFFFFFE)) - 1;
          VMUL.F32        S18, S0, S16
        v25 = j_mce::Math::floor(*((mce::Math **)_R10 + 19), v24);
        __asm { VLDR            S0, [R10,#0x50] }
        v26 = v25;
          VADD.F32        S0, S0, S18
        v29 = j_mce::Math::floor(_R0, v28);
        v30 = v29;
        v31 = (Block *)j_BlockSource::getBlock(v9, v22, v26, v29);
        result = j_Block::isType(v31, (const Block *)Block::mAir);
        if ( result == 1 )
          v32 = *(int (**)(void))(*(_DWORD *)Block::mTopSnow + 224);
          v34 = v22;
          v35 = v26;
          v36 = v30;
          result = v32();
          if ( result == 1 )
          {
            v33 = *(_BYTE *)(Block::mTopSnow + 4);
            result = j_BlockSource::setBlock((int)v9, v22, v26, v30, &v33, 3);
          }
        ++v19;
      }
      while ( v19 != 4 );
    }
  return result;
}


signed int __fastcall SnowGolem::useNewAi(SnowGolem *this)
{
  return 1;
}


void __fastcall SnowGolem::~SnowGolem(SnowGolem *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall SnowGolem::SnowGolem(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_271D8E4;
  *(_DWORD *)(v3 + 248) = 50;
  j_Entity::setPersistent((Entity *)v3);
  *(_DWORD *)(v3 + 3984) = 0x40000000;
  return v3;
}


void __fastcall SnowGolem::~SnowGolem(SnowGolem *this)
{
  SnowGolem::~SnowGolem(this);
}


signed int __fastcall SnowGolem::getEntityTypeId(SnowGolem *this)
{
  return 789;
}
