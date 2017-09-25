

int __fastcall HealthAttributeDelegate::change(int a1, int _R1, int a3, int a4, unsigned int a5, int a6, unsigned int a7, unsigned int a8)
{
  unsigned int v8; // r4@1
  int v13; // r11@1
  int v15; // r9@1
  float v17; // r1@1
  int v18; // r0@1
  int v19; // r6@1
  float v21; // r1@1
  int v22; // r5@1
  int v23; // r8@1
  Level *v24; // r0@7
  int v25; // r0@9
  int v26; // r7@9
  int v27; // r1@9
  int v28; // r10@9
  char v29; // r8@10
  int v30; // r0@12
  char v31; // ST00_1@12
  BlockSource *v32; // r0@16
  int v33; // r0@16
  int v34; // r1@16
  Entity *v35; // r0@16
  int v36; // r5@16
  Entity *v37; // r4@16
  int (__fastcall *v38)(int, char *, int, signed int); // r7@16
  int v39; // r5@16
  int v40; // r4@19
  int (__fastcall *v41)(int, char *, int, signed int); // r6@19
  char *v42; // r0@19
  int v43; // r4@20
  int (__fastcall *v44)(int, char *, int, signed int); // r6@20
  int v45; // r4@22
  int (__fastcall *v46)(int, char *, int, signed int); // r6@22
  int v47; // r4@23
  int (__fastcall *v48)(int, char *, int, signed int); // r6@23
  int v49; // r4@27
  void (__fastcall *v50)(int, char *, int, signed int); // r6@27
  char v52; // [sp+8h] [bp-88h]@27
  char v53; // [sp+10h] [bp-80h]@23
  char v54; // [sp+18h] [bp-78h]@22
  char v55; // [sp+20h] [bp-70h]@19
  char v56; // [sp+28h] [bp-68h]@16
  char v57; // [sp+50h] [bp-40h]@20

  v8 = a5;
  __asm
  {
    VMOV            S0, R1
    VLDR            S18, =1.1921e-7
  }
  v13 = a1;
  _R5 = a3;
  __asm { VADD.F32        S16, S0, S18 }
  v15 = j_AttributeBuff::buffTypeToDamageCause(a5);
  __asm { VMOV            R0, S16 }
  v18 = j_mce::Math::floor(_R0, v17);
  __asm { VMOV            S16, R5 }
  v19 = v18;
    VADD.F32        S0, S16, S18
    VMOV            R0, S0
  v22 = j_mce::Math::floor(_R0, v21);
  v23 = v19 - v22;
  if ( (*(int (**)(void))(**(_DWORD **)(v13 + 16) + 856))() == 1 )
    if ( a5 != 3 || v23 <= -1 )
    {
      if ( a5 == 4 )
        v8 = 3;
    }
    else
      v8 = 4;
  v24 = (Level *)j_Entity::getLevel(*(Entity **)(v13 + 16));
  if ( j_Level::isClientSide(v24) )
    goto LABEL_34;
  if ( !j_Entity::getDamageSensorComponent(*(Entity **)(v13 + 16)) )
  v25 = j_Entity::getLevel(*(Entity **)(v13 + 16));
  v26 = 0;
  v28 = j_Level::fetchEntity(v25, v27, a7, a8, 0);
  if ( v15 == -1 )
  v29 = 0;
  if ( !v22 )
    v29 = 1;
  v30 = j_Entity::getDamageSensorComponent(*(Entity **)(v13 + 16));
  v31 = v29;
  if ( j_DamageSensorComponent::recordDamage(v30, v28, v15, v19 - v22, v31) == 1 )
LABEL_34:
    v26 = 1;
    if ( v19 != v22 )
      switch ( v8 )
      {
        case 4u:
        case 5u:
        case 6u:
          if ( (a7 & a8) == -1 )
          {
            v40 = *(_DWORD *)(v13 + 16);
            v41 = *(int (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v40 + 840);
            j_EntityDamageSource::EntityDamageSource((int)&v55, v15);
            v26 = v41(v40, &v55, v23, 1);
            v42 = &v55;
            goto LABEL_24;
          }
          v32 = (BlockSource *)j_Entity::getRegion(*(Entity **)(v13 + 16));
          v33 = j_BlockSource::getLevel(v32);
          v35 = (Entity *)j_Level::fetchEntity(v33, v34, a7, a8, 0);
          v36 = *(_DWORD *)(v13 + 16);
          v37 = v35;
          v38 = *(int (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v36 + 840);
          j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v56, v35, v15);
          v39 = v38(v36, &v56, v23, 1);
          j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v56);
          if ( v39 == 1 )
            if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v37 + 488))(v37) == 319 )
              (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v13 + 16) + 956))(*(_DWORD *)(v13 + 16));
            goto LABEL_29;
          return 0;
        case 0u:
          v43 = *(_DWORD *)(v13 + 16);
          v44 = *(int (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v43 + 840);
          j_EntityDamageSource::EntityDamageSource((int)&v57, v15);
          v26 = v44(v43, &v57, v23, 1);
          v42 = &v57;
          goto LABEL_24;
        case 7u:
          __asm { VMOV.F32        S0, #1.0; jumptable 01A0B2B8 case 7 }
          v26 = 0;
          __asm
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            return v26;
          v45 = *(_DWORD *)(v13 + 16);
          v46 = *(int (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v45 + 840);
          j_EntityDamageSource::EntityDamageSource((int)&v54, v15);
          v26 = v46(v45, &v54, v23, 1);
          v42 = &v54;
        case 8u:
          v47 = *(_DWORD *)(v13 + 16);
          v48 = *(int (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v47 + 840);
          j_EntityDamageSource::EntityDamageSource((int)&v53, v15);
          v26 = v48(v47, &v53, v23, 1);
          v42 = &v53;
LABEL_24:
          j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)v42);
          return v26;
        case 9u:
          if ( v23 <= -1 )
            goto LABEL_28;
          if ( v23 < 1 )
LABEL_29:
            v26 = 1;
          else
            v49 = *(_DWORD *)(v13 + 16);
            v50 = *(void (__fastcall **)(int, char *, int, signed int))(*(_DWORD *)v49 + 840);
            j_EntityDamageSource::EntityDamageSource((int)&v52, v15);
            v50(v49, &v52, v23, 1);
            j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v52);
          break;
        case 3u:
LABEL_28:
          j_Mob::healEffects(*(Mob **)(v13 + 16), v23);
          v26 = 1;
        default:
      }
  return v26;
}


void __fastcall HealthAttributeDelegate::~HealthAttributeDelegate(HealthAttributeDelegate *this)
{
  AttributeInstanceDelegate *v1; // r0@1

  v1 = j_AttributeInstanceDelegate::~AttributeInstanceDelegate(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HealthAttributeDelegate::HealthAttributeDelegate(AttributeInstanceDelegate *a1, const AttributeInstance *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = j_AttributeInstanceDelegate::AttributeInstanceDelegate(a1, a2);
  *(_DWORD *)result = &off_271A3D0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = v3;
  return result;
}


InstantaneousAttributeBuff *__fastcall HealthAttributeDelegate::tick(HealthAttributeDelegate *this)
{
  HealthAttributeDelegate *v1; // r4@1
  InstantaneousAttributeBuff *result; // r0@1
  Level *v3; // r0@2
  Level *v4; // r0@3
  AttributeInstance *v12; // r4@6
  __int64 v13; // r2@6
  int v14; // [sp+0h] [bp-48h]@6

  v1 = this;
  ++*((_DWORD *)this + 3);
  result = (InstantaneousAttributeBuff *)j_Entity::hasCategory(*((_DWORD *)this + 4), 1);
  if ( result == (InstantaneousAttributeBuff *)1 )
  {
    v3 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
    result = (InstantaneousAttributeBuff *)j_Level::isClientSide(v3);
    if ( !result )
    {
      v4 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
      result = (InstantaneousAttributeBuff *)j_Level::getDifficulty(v4);
      if ( !result )
      {
        _R0 = *((_DWORD *)v1 + 3);
        _R1 = 1717986919;
        __asm { SMMUL.W         R1, R0, R1 }
        result = (InstantaneousAttributeBuff *)(_R0 - 20 * (((signed int)_R1 >> 3) + (_R1 >> 31)));
        if ( !result )
        {
          result = (InstantaneousAttributeBuff *)j_AttributeInstanceDelegate::_getMutableInstance(v1);
          if ( result )
          {
            v12 = (AttributeInstance *)j_AttributeInstanceDelegate::_getMutableInstance(v1);
            LODWORD(v13) = 3;
            j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v14, 1065353216, v13);
            j_AttributeInstance::addBuff(v12, (const AttributeBuff *)&v14);
            result = j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v14);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall HealthAttributeDelegate::getBuffValue(HealthAttributeDelegate *this, const AttributeBuff *a2)
{
  HealthAttributeDelegate *v2; // r5@1
  AttributeBuff *v3; // r4@1
  unsigned int v9; // r0@5
  int v10; // r5@7
  int (__fastcall *v11)(int, int *, int); // r6@7
  int result; // r0@8
  int v16; // [sp+0h] [bp-18h]@7

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(**((_DWORD **)this + 4) + 856))() == 1
    && (j_AttributeBuff::getType(v3) == 3 || j_AttributeBuff::getType(v3) == 4) )
  {
    _R0 = j_AttributeBuff::getAmount(v3) ^ 0x80000000;
    __asm { VMOV            S0, R0 }
LABEL_8:
    __asm { VMOV            R0, S0 }
    return result;
  }
  v9 = j_AttributeBuff::getType(v3);
  if ( v9 <= 8 && (1 << v9) & 0x1B0 )
    j_EntityDamageSource::EntityDamageSource((int)&v16, 14);
    v10 = *((_DWORD *)v2 + 4);
    v11 = *(int (__fastcall **)(int, int *, int))(*(_DWORD *)v10 + 1076);
    _R0 = j_AttributeBuff::getAmount(v3);
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R2, S0
    }
    _R4 = v11(v10, &v16, _R2);
    j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v16);
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
    goto LABEL_8;
  return j_j_j__ZNK13AttributeBuff9getAmountEv_0(v3);
}


void __fastcall HealthAttributeDelegate::~HealthAttributeDelegate(HealthAttributeDelegate *this)
{
  HealthAttributeDelegate::~HealthAttributeDelegate(this);
}
