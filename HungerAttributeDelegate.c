

int __fastcall HungerAttributeDelegate::HungerAttributeDelegate(AttributeInstanceDelegate *a1, const AttributeInstance *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = j_AttributeInstanceDelegate::AttributeInstanceDelegate(a1, a2);
  *(_DWORD *)result = &off_271A3F0;
  *(_DWORD *)(result + 24) = v3;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


AttributeInstance *__fastcall HungerAttributeDelegate::notify(HungerAttributeDelegate *this, int a2, __int64 a3)
{
  HungerAttributeDelegate *v3; // r4@1
  AttributeInstance *result; // r0@1
  Level *v5; // r0@3
  int v6; // r6@3
  AttributeInstance *v7; // r5@3
  __int64 v8; // r2@4
  InstantaneousAttributeBuff *v13; // r0@5
  AttributeInstance *v14; // r4@8
  __int64 v15; // r2@8
  int v16; // [sp+0h] [bp-80h]@8
  char v17; // [sp+38h] [bp-48h]@5

  v3 = this;
  result = (AttributeInstance *)(a3 | HIDWORD(a3));
  if ( !a3 )
  {
    result = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v3 + 6) + 652))();
    if ( !result )
    {
      v5 = (Level *)j_Entity::getLevel(*((Entity **)v3 + 6));
      v6 = j_Level::getDifficulty(v5);
      result = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v3 + 6) + 1000))();
      v7 = result;
      if ( result )
      {
        result = (AttributeInstance *)j_AttributeInstance::getCurrentValue(result);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          LODWORD(v8) = 9;
          j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v17, -1082130432, v8);
          j_AttributeInstance::addBuff(v7, (const AttributeBuff *)&v17);
          v13 = (InstantaneousAttributeBuff *)&v17;
          return j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff(v13);
      }
      if ( v6 )
        result = (AttributeInstance *)j_AttributeInstanceDelegate::_getMutableInstance(v3);
        if ( result )
          v14 = (AttributeInstance *)j_AttributeInstanceDelegate::_getMutableInstance(v3);
          LODWORD(v15) = 9;
          j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v16, -1082130432, v15);
          j_AttributeInstance::addBuff(v14, (const AttributeBuff *)&v16);
          v13 = (InstantaneousAttributeBuff *)&v16;
    }
  }
  return result;
}


void __fastcall HungerAttributeDelegate::~HungerAttributeDelegate(HungerAttributeDelegate *this)
{
  AttributeInstanceDelegate *v1; // r0@1

  v1 = j_AttributeInstanceDelegate::~AttributeInstanceDelegate(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HungerAttributeDelegate::tick(HungerAttributeDelegate *this)
{
  HungerAttributeDelegate *v1; // r4@1
  int result; // r0@1
  Level *v3; // r0@2
  int v4; // r5@2
  AttributeInstance *v5; // r0@2
  AttributeInstance *v6; // r0@2
  Level *v8; // r0@2
  unsigned __int64 *v9; // r0@2
  int v10; // r7@2
  Level *v11; // r0@2
  AttributeInstance *v19; // r8@5
  __int64 v20; // r2@5
  int v22; // r1@9
  AttributeInstance *v23; // r5@10
  __int64 v24; // r2@10
  AttributeInstance *v25; // r5@10
  __int64 v26; // r2@10
  int v28; // r1@13
  int v29; // r0@14
  int v30; // r0@16
  AttributeInstance *v31; // r5@18
  __int64 v32; // r2@18
  Entity *v33; // r5@18
  char v34; // [sp+8h] [bp-110h]@18
  char v35; // [sp+10h] [bp-108h]@18
  char v36; // [sp+48h] [bp-D0h]@10
  char v37; // [sp+80h] [bp-98h]@10
  char v38; // [sp+B8h] [bp-60h]@5

  v1 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 6) + 652))();
  if ( !result )
  {
    v3 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 6));
    v4 = j_Level::getDifficulty(v3);
    v5 = (AttributeInstance *)j_AttributeInstanceDelegate::_getInstance(v1);
    *((_DWORD *)v1 + 5) = j_AttributeInstance::getCurrentValue(v5);
    v6 = (AttributeInstance *)j_AttributeInstanceDelegate::_getInstance(v1);
    _R6 = j_AttributeInstance::getCurrentValue(v6);
    v8 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 6));
    v9 = (unsigned __int64 *)j_Level::getGameRules(v8);
    v10 = j_GameRules::getBool(v9, (int **)&GameRules::DO_NATURAL_REGENERATION);
    ++*((_DWORD *)v1 + 4);
    v11 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 6));
    if ( !j_Level::getDifficulty(v11) )
    {
      _R0 = *((_DWORD *)v1 + 4);
      _R1 = 1717986919;
      __asm { SMMUL.W         R1, R0, R1 }
      if ( _R0 == 10 * (((signed int)_R1 >> 2) + (_R1 >> 31)) )
      {
        if ( j_AttributeInstanceDelegate::_getMutableInstance(v1) )
        {
          v19 = (AttributeInstance *)j_AttributeInstanceDelegate::_getMutableInstance(v1);
          LODWORD(v20) = 9;
          j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v38, 1065353216, v20);
          j_AttributeInstance::addBuff(v19, (const AttributeBuff *)&v38);
          j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v38);
        }
      }
    }
    __asm { VMOV            S16, R6 }
    if ( v10 != 1 )
      goto LABEL_22;
    _R0 = &FoodConstants::HEAL_LEVEL;
    __asm
      VLDR            S0, [R0]
      VCVT.F32.S32    S0, S0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF || j_Player::isHurt(*((Player **)v1 + 6)) != 1 )
LABEL_22:
      _R0 = &FoodConstants::STARVE_LEVEL;
      __asm
        VLDR            S0, [R0]
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v28 = *((_DWORD *)v1 + 3) + 1;
        *((_DWORD *)v1 + 3) = v28;
        result = 80;
        if ( v28 < 80 )
          return result;
        v29 = j_Mob::getHealth(*((Mob **)v1 + 6));
        if ( v4 == 3 || v29 > 10 || (v30 = j_Mob::getHealth(*((Mob **)v1 + 6)), v4 == 2) && v30 >= 2 )
          v31 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 6) + 1000))();
          LODWORD(v32) = 0;
          j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v35, -1082130432, v32);
          j_AttributeInstance::addBuff(v31, (const AttributeBuff *)&v35);
          j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v35);
          v33 = (Entity *)*((_DWORD *)v1 + 6);
          j_EntityDamageSource::EntityDamageSource((int)&v34, 16);
          j_Entity::hurt(v33, (const EntityDamageSource *)&v34, 1, 1, 0);
          j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v34);
    else
      v22 = *((_DWORD *)v1 + 3) + 1;
      *((_DWORD *)v1 + 3) = v22;
      result = 80;
      if ( v22 < 80 )
        return result;
      v23 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 6) + 1000))();
      LODWORD(v24) = 3;
      j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v37, 1065353216, v24);
      j_AttributeInstance::addBuff(v23, (const AttributeBuff *)&v37);
      j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v37);
      v25 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 6) + 1000))();
      LODWORD(v26) = 9;
      j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v36, 1077936128, v26);
      j_AttributeInstance::addBuff(v25, (const AttributeBuff *)&v36);
      j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v36);
    result = 0;
    *((_DWORD *)v1 + 3) = 0;
  }
  return result;
}


void __fastcall HungerAttributeDelegate::~HungerAttributeDelegate(HungerAttributeDelegate *this)
{
  HungerAttributeDelegate::~HungerAttributeDelegate(this);
}
