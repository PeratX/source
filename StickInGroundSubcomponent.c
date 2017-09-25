

_QWORD *__fastcall StickInGroundSubcomponent::StickInGroundSubcomponent(_QWORD *result)
{
  *result = (unsigned int)&off_271EB70;
  return result;
}


int __fastcall StickInGroundSubcomponent::readfromJSON(StickInGroundSubcomponent *this, Json::Value *a2)
{
  StickInGroundSubcomponent *v2; // r4@1
  Json::Value *v3; // r0@1
  int result; // r0@1

  v2 = this;
  v3 = (Json::Value *)j_Json::Value::operator[](a2, "shake_time");
  _R1 = *((_DWORD *)v2 + 1);
  _R2 = 1717986919;
  __asm { SMMUL.W         R1, R1, R2 }
  _R1 = ((signed int)_R1 >> 3) + (_R1 >> 31);
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VMOV            R1, S0
  }
  result = j_Json::Value::asFloat(v3, _R1);
    VMOV.F32        S0, #20.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#4]
  return result;
}


int __fastcall StickInGroundSubcomponent::doOnHitEffect(StickInGroundSubcomponent *this, ProjectileComponent *a2)
{
  ProjectileComponent *v2; // r7@1
  StickInGroundSubcomponent *v3; // r5@1
  int result; // r0@1
  BlockSource *v6; // r0@4
  Block *v7; // r0@4
  int v8; // r0@5
  int v9; // r0@5
  int v14; // r0@5
  int v15; // r0@5
  int v16; // r1@5
  int v17; // [sp+0h] [bp-58h]@1
  char v18; // [sp+4h] [bp-54h]@5
  int v19; // [sp+8h] [bp-50h]@4
  int v20; // [sp+Ch] [bp-4Ch]@5
  int v21; // [sp+10h] [bp-48h]@5
  int v22; // [sp+14h] [bp-44h]@5
  int v23; // [sp+18h] [bp-40h]@5
  int v24; // [sp+1Ch] [bp-3Ch]@5

  v2 = a2;
  v3 = this;
  _R4 = (Entity *)*((_DWORD *)a2 + 4);
  j_HitResult::HitResult((int)&v17, (int)a2 + 108);
  result = j_Entity::getProjectileComponent(_R4);
  if ( result )
  {
    result = *(_BYTE *)j_Entity::getProjectileComponent(_R4);
    if ( !result )
    {
      result = v17 - 1;
      if ( (unsigned int)(v17 - 1) >= 3 )
      {
        v6 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 4));
        v7 = (Block *)j_BlockSource::getBlock(v6, (const BlockPos *)&v19);
        result = j_Block::isType(v7, (const Block *)Block::mAir);
        if ( !result )
        {
          v8 = j_Entity::getProjectileComponent(_R4);
          *(_DWORD *)(v8 + 76) = v19;
          *(_DWORD *)(v8 + 80) = v20;
          *(_DWORD *)(v8 + 84) = v21;
          v9 = j_Entity::getProjectileComponent(_R4);
          *(_DWORD *)(v9 + 88) = v22;
          *(_DWORD *)(v9 + 92) = v23;
          *(_DWORD *)(v9 + 96) = v24;
          __asm
          {
            VLDR            S0, [R4,#0x48]
            VLDR            S2, [SP,#0x58+var_44]
            VSUB.F32        S0, S2, S0
            VSTR            S0, [R4,#0x6C]
            VLDR            S0, [R4,#0x4C]
            VLDR            S2, [SP,#0x58+var_40]
            VSTR            S0, [R4,#0x70]
            VLDR            S0, [R4,#0x50]
            VLDR            S2, [SP,#0x58+var_3C]
            VSTR            S0, [R4,#0x74]
          }
          v14 = j_Entity::getProjectileComponent(_R4);
          *(_BYTE *)v14 = 1;
          *(_BYTE *)(*(_DWORD *)(v14 + 16) + 216) = 1;
          v15 = j_Entity::getProjectileComponent(_R4);
          v16 = *((_DWORD *)v3 + 1);
          *(_DWORD *)(v15 + 56) = v16;
          j_Entity::setShakeTime(_R4, v16);
          j_Entity::setStatusFlag((int)_R4, 13, 0);
          result = j_Entity::getProjectileComponent(_R4);
          *(_BYTE *)(result + 176) = v18;
        }
      }
    }
  }
  return result;
}
