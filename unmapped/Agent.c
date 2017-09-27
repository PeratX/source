

signed int __fastcall Agent::getEntityTypeId(Agent *this)
{
  return 312;
}


int __fastcall Agent::getItemFromSlot(Agent *this, int a2)
{
  int v2; // r0@1

  v2 = Entity::getContainerComponent(this);
  return (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 16))();
}


signed int __fastcall Agent::interactPreventDefault(Agent *this)
{
  return 1;
}


int __fastcall Agent::isTargetable(Agent *this)
{
  return 0;
}


signed int __fastcall Agent::handleEntityEvent(signed int result, int a2)
{
  signed int v2; // r4@1
  AttributeInstance *v8; // r0@3
  AttributeInstance *v9; // r5@3

  v2 = result;
  if ( a2 == 2 )
  {
    result = 1069547520;
    *(_DWORD *)(v2 + 3484) = 1069547520;
  }
  else if ( a2 == 36 )
    _R1 = result + 4308;
    __asm
    {
      VLDR            S0, [R1]
      VCVT.F32.S32    S16, S0
    }
    v8 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)result + 1004))();
    v9 = v8;
    _R0 = AttributeInstance::getDefaultValue(v8, 2);
      VMOV            S18, R0
      VCMPE.F32       S18, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm { VMOV.F32        S0, #1.0 }
    else
      _R0 = AttributeInstance::getCurrentValue(v9);
      __asm
      {
        VMOV            S0, R0
        VDIV.F32        S0, S0, S18
      }
      VDIV.F32        S0, S16, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    *(_DWORD *)(v2 + 4304) = result;
  return result;
}


signed int __fastcall Agent::swingAnimationCompleted(Agent *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1076);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


signed int __fastcall Agent::travel(Agent *this, float a2, float a3)
{
  Agent *v3; // r4@1
  AttributeInstance *v4; // r0@1
  int v13; // r3@1
  int v14; // r7@1
  int v15; // r3@1
  int v16; // r6@1
  int v17; // r7@1
  BlockSource *v18; // r5@1
  BlockSource *v19; // r0@1
  const AABB *i; // r5@1
  const AABB *v21; // r11@1
  const AABB *v22; // r4@3
  const AABB *j; // r5@3
  const AABB *v24; // r4@5
  const AABB *k; // r7@5
  BlockSource *v28; // r0@13
  signed int result; // r0@14
  char v30; // r6@15
  BlockSource *v31; // r5@15
  BlockSource *v32; // r0@15
  char *v33; // r0@15
  const Vec3 *v34; // [sp+Ch] [bp-F4h]@1
  char *v35; // [sp+10h] [bp-F0h]@1
  Agent *v36; // [sp+14h] [bp-ECh]@1
  int v37; // [sp+18h] [bp-E8h]@15
  signed int v38; // [sp+1Ch] [bp-E4h]@15
  int v39; // [sp+20h] [bp-E0h]@15
  char v40; // [sp+24h] [bp-DCh]@15
  char v41; // [sp+40h] [bp-C0h]@13
  float v42; // [sp+4Ch] [bp-B4h]@13
  float v43; // [sp+58h] [bp-A8h]@2
  float v44; // [sp+5Ch] [bp-A4h]@2
  float v45; // [sp+60h] [bp-A0h]@2
  char v46; // [sp+64h] [bp-9Ch]@1
  int v47; // [sp+80h] [bp-80h]@1
  int v48; // [sp+84h] [bp-7Ch]@1
  int v49; // [sp+88h] [bp-78h]@1
  int v50; // [sp+8Ch] [bp-74h]@1
  int v51; // [sp+90h] [bp-70h]@1
  int v52; // [sp+94h] [bp-6Ch]@1
  int v53; // [sp+98h] [bp-68h]@1
  float v54; // [sp+A0h] [bp-60h]@1
  float v55; // [sp+A4h] [bp-5Ch]@2
  float v56; // [sp+A8h] [bp-58h]@1
  float v57; // [sp+ACh] [bp-54h]@4
  float v58; // [sp+B0h] [bp-50h]@1
  float v59; // [sp+B4h] [bp-4Ch]@1
  float v60; // [sp+B8h] [bp-48h]@1
  float v61; // [sp+BCh] [bp-44h]@1
  float v62; // [sp+C0h] [bp-40h]@6
  float v63; // [sp+C4h] [bp-3Ch]@1
  float v64; // [sp+C8h] [bp-38h]@11
  float v65; // [sp+CCh] [bp-34h]@11

  v3 = this;
  v36 = this;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v4);
  __asm { VMOV            S0, R0 }
  _R1 = (int)v3 + 4292;
  __asm { VMUL.F32        S16, S0, S0 }
  _R0 = (int)v3 + 4300;
  __asm { VLDR            S0, [R1] }
  _R1 = (int)v3 + 4296;
  __asm
  {
    VLDR            S4, [R0]
    VLDR            S2, [R1]
  }
  v54 = 0.0;
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VMUL.F32        S4, S4, S16
    VSTR            S0, [SP,#0x100+var_3C]
    VSTR            S2, [SP,#0x100+var_38]
    VSTR            S2, [SP,#0x100+var_5C]
  v56 = 0.0;
    VSTR            S4, [SP,#0x100+var_34]
    VSTR            S0, [SP,#0x100+var_54]
  v60 = 0.0;
  v61 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  __asm { VSTR            S4, [SP,#0x100+var_40] }
  v34 = (Agent *)((char *)v3 + 264);
  v13 = *((_DWORD *)v3 + 67);
  v14 = *((_DWORD *)v3 + 68);
  v47 = *((_DWORD *)v3 + 66);
  v48 = v13;
  v49 = v14;
  v15 = *((_DWORD *)v3 + 70);
  v16 = *((_DWORD *)v3 + 71);
  v17 = *((_DWORD *)v3 + 72);
  v50 = *((_DWORD *)v3 + 69);
  v51 = v15;
  v52 = v16;
  v53 = v17;
  AABB::expanded((AABB *)&v46, (Agent *)((char *)v3 + 264), (int)&v63);
  v18 = (BlockSource *)Entity::getRegion(v3);
  v19 = (BlockSource *)Entity::getRegion(v3);
  v35 = BlockSource::fetchCollisionShapes(v18, v19, (const AABB *)&v46, 0, 1, v3);
  v21 = (const AABB *)(*(_QWORD *)v35 >> 32);
  for ( i = (const AABB *)*(_QWORD *)v35; v21 != i; v56 = v45 )
    AABB::clipCollide((AABB *)&v43, i, (const Vec3 *)&v47, (int)&v54, (float *)1, 0);
    i = (const AABB *)((char *)i + 28);
    v54 = v43;
    v55 = v44;
  AABB::move((AABB *)&v47, (const Vec3 *)&v54);
  v22 = (const AABB *)(*(_QWORD *)v35 >> 32);
  for ( j = (const AABB *)*(_QWORD *)v35; v22 != j; v59 = v45 )
    AABB::clipCollide((AABB *)&v43, j, (const Vec3 *)&v47, (int)&v57, (float *)1, 0);
    j = (const AABB *)((char *)j + 28);
    v57 = v43;
    v58 = v44;
  AABB::move((AABB *)&v47, (const Vec3 *)&v57);
  v24 = (const AABB *)(*(_QWORD *)v35 >> 32);
  for ( k = (const AABB *)*(_QWORD *)v35; v24 != k; v62 = v45 )
    AABB::clipCollide((AABB *)&v43, k, (const Vec3 *)&v47, (int)&v60, (float *)1, 0);
    k = (const AABB *)((char *)k + 28);
    v60 = v43;
    v61 = v44;
  AABB::move((AABB *)&v47, (const Vec3 *)&v60);
  if ( (unsigned int)*(_QWORD *)v35 == *(_QWORD *)v35 >> 32 )
    __asm
    {
      VLDR            S0, [SP,#0x100+var_3C]
      VLDR            S2, [SP,#0x100+var_38]
      VLDR            S4, [SP,#0x100+var_34]
    }
    _R7 = v36;
  else
      VLDR            S0, [SP,#0x100+var_60]
      VLDR            S6, [SP,#0x100+var_54]
      VLDR            S2, [SP,#0x100+var_5C]
      VLDR            S8, [SP,#0x100+var_50]
      VADD.F32        S0, S6, S0
      VLDR            S4, [SP,#0x100+var_58]
      VADD.F32        S2, S8, S2
      VLDR            S6, [SP,#0x100+var_4C]
      VLDR            S8, [SP,#0x100+var_48]
      VLDR            S10, [SP,#0x100+var_44]
      VADD.F32        S4, S6, S4
      VLDR            S6, [SP,#0x100+var_40]
      VADD.F32        S0, S0, S8
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S6
      VMUL.F32        S6, S0, S0
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
      __asm
      {
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
      }
    else
        VDIV.F32        S4, S4, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S0, S0, S6
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VSTR            S0, [SP,#0x100+var_3C]
      VSTR            S2, [SP,#0x100+var_38]
      VSTR            S4, [SP,#0x100+var_34]
    VLDR            S6, [R7,#0x48]
    VLDR            S8, [R7,#0x4C]
    VLDR            S10, [R7,#0x50]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x100+var_B4]
    VSTR            S2, [SP,#0x100+var_B0]
    VSTR            S4, [SP,#0x100+var_AC]
  BlockPos::BlockPos((int)&v41, (int)&v42);
  v28 = (BlockSource *)Entity::getRegion(_R7);
  if ( BlockSource::isSolidBlockingBlock(v28, (const BlockPos *)&v41) == 1 )
    result = 0;
    *((_DWORD *)_R7 + 27) = 0;
    *((_DWORD *)_R7 + 28) = 0;
    *((_DWORD *)_R7 + 29) = 0;
    *((float *)_R7 + 27) = v63;
    *((float *)_R7 + 28) = v64;
    *((float *)_R7 + 29) = v65;
    (*(void (__fastcall **)(Agent *, char *))(*(_DWORD *)_R7 + 76))(_R7, (char *)_R7 + 108);
    v30 = 0;
    v37 = 0;
    v38 = -1110651699;
    v39 = 0;
    AABB::expanded((AABB *)&v40, v34, (int)&v37);
    v31 = (BlockSource *)Entity::getRegion(_R7);
    v32 = (BlockSource *)Entity::getRegion(_R7);
    v33 = BlockSource::fetchCollisionShapes(v31, v32, (const AABB *)&v40, 0, 1, _R7);
    _ZF = (unsigned int)*(_QWORD *)v33 == *(_QWORD *)v33 >> 32;
    result = 4317;
    if ( _ZF )
      v30 = 1;
    *((_BYTE *)_R7 + 4317) = v30;
  return result;
}


int __fastcall Agent::getSwingAnimationDuration(Agent *this)
{
  AttributeInstance *v6; // r0@1
  AttributeInstance *v7; // r4@1
  int result; // r0@4

  _R2 = (char *)this + 4308;
  __asm
  {
    VLDR            S0, [R2]
    VCVT.F32.S32    S16, S0
  }
  v6 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  v7 = v6;
  _R0 = AttributeInstance::getDefaultValue(v6, 2);
    VMOV            S18, R0
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm { VMOV.F32        S0, #1.0 }
  else
    _R0 = AttributeInstance::getCurrentValue(v7);
    __asm
    {
      VMOV            S0, R0
      VDIV.F32        S0, S0, S18
    }
    VDIV.F32        S0, S16, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  return result;
}


int __fastcall Agent::isWorldBuilder(Agent *this)
{
  Entity *v1; // r4@1
  signed int v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = Entity::getPlayerOwner(this);
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 648))();
  else
    result = Entity::isWorldBuilder(v1);
  return result;
}


int __fastcall Agent::Agent(int a1, int a2, int *a3)
{
  int v3; // r4@1
  __int64 v4; // r1@1
  AgentLookControl *v5; // r6@1
  int v6; // r0@1
  AgentBodyControl *v7; // r6@3
  int v8; // r0@3

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26ED7A0;
  v4 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v3 + 4300) = dword_2822498;
  *(_QWORD *)(v3 + 4292) = __PAIR__(HIDWORD(v4), (unsigned int)v4);
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 4308) = 6;
  *(_DWORD *)(v3 + 4312) = 0;
  *(_BYTE *)(v3 + 4316) = 0;
  *(_BYTE *)(v3 + 4317) = 0;
  *(_DWORD *)(v3 + 4320) = 0;
  *(_DWORD *)(v3 + 4324) = getTimeMs();
  v5 = (AgentLookControl *)operator new(0x20u);
  AgentLookControl::AgentLookControl(v5, (Agent *)v3);
  v6 = *(_DWORD *)(v3 + 4112);
  *(_DWORD *)(v3 + 4112) = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  v7 = (AgentBodyControl *)operator new(0x10u);
  AgentBodyControl::AgentBodyControl(v7, (Mob *)v3);
  v8 = *(_DWORD *)(v3 + 4116);
  *(_DWORD *)(v3 + 4116) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *(_DWORD *)(v3 + 248) = 64;
  Entity::setAutonomous((Entity *)v3, 1);
  *(_DWORD *)(v3 + 3984) = 1090519040;
  Entity::setStatusFlag(v3, 39, 1);
  Entity::setPersistent((Entity *)v3);
  return v3;
}


void __fastcall Agent::~Agent(Agent *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Agent::swingArm(Agent *this)
{
  Agent *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  return j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v2, (int)v1, 36, 0);
}


void __fastcall Agent::~Agent(Agent *this)
{
  Agent::~Agent(this);
}


int __fastcall Agent::stopCommandMode(Agent *this)
{
  Agent *v1; // r4@1
  void (__fastcall *v2)(Agent *, int *); // r6@1
  int result; // r0@5
  int v4; // [sp+0h] [bp-58h]@1
  int v5; // [sp+8h] [bp-50h]@5
  void *v6; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v1 = this;
  Entity::setStatusFlag((int)this, 39, 1);
  v2 = *(void (__fastcall **)(Agent *, int *))(*(_DWORD *)v1 + 912);
  ItemInstance::ItemInstance((int)&v4);
  v2(v1, &v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


AgentCommandExecutionGoal *__fastcall Agent::createAIGoals(Agent *this)
{
  Mob *v1; // r4@1
  AgentCommandExecutionGoal *v2; // r5@1
  AgentCommandExecutionGoal *result; // r0@1
  AgentCommandExecutionGoal *v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  Mob::createAIGoals(this);
  v2 = (AgentCommandExecutionGoal *)operator new(0xCu);
  AgentCommandExecutionGoal::AgentCommandExecutionGoal(v2, v1);
  v4 = v2;
  GoalSelector::addGoal((int)v1 + 4124, 1, (int *)&v4);
  result = v4;
  if ( v4 )
    result = (AgentCommandExecutionGoal *)(*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


int __fastcall Agent::canBePulledIntoVehicle(Agent *this)
{
  return 0;
}


int __fastcall Agent::isPickable(Agent *this)
{
  Mob *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 172))() )
    result = 0;
  else
    result = Mob::isPickable(v1);
  return result;
}


int __fastcall Agent::isAdventure(Agent *this)
{
  Entity *v1; // r4@1
  signed int v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = Entity::getPlayerOwner(this);
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 656))();
  else
    result = Entity::isAdventure(v1);
  return result;
}


int __fastcall Agent::_hurt(Agent *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Entity *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1

  v5 = this;
  v6 = Mob::_hurt(this, a2, a3, a4, a5);
  v7 = Entity::getLevel(v5);
  Level::broadcastEntityEvent(v7, (int)v5, 2, 0);
  return v6;
}


signed int __fastcall Agent::breaksFallingBlocks(Agent *this)
{
  return 1;
}


int __fastcall Agent::teleportTo(Agent *this, const Vec3 *a2, int a3, int a4)
{
  Agent *v4; // r4@1
  float v5; // r7@1
  int v6; // r8@1
  int v7; // r6@1
  float v8; // r5@1
  float v15; // r1@1
  int result; // r0@1
  float v17; // [sp+4h] [bp-34h]@1
  float v18; // [sp+8h] [bp-30h]@1

  v4 = this;
  LODWORD(v5) = *(_QWORD *)a2 >> 32;
  v6 = a4;
  v7 = a3;
  v8 = *((float *)a2 + 2);
  _R0 = floorf(COERCE_FLOAT(*(_QWORD *)a2));
  __asm
  {
    VMOV            S18, R0
    VMOV.F32        S16, #0.5
  }
  _R0 = floorf(v8);
    VMOV            S0, R0
    VADD.F32        S18, S18, S16
    VADD.F32        S16, S0, S16
  v18 = floorf(v5);
    VSTR            S18, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_2C]
  Entity::teleportTo(v4, (const Vec3 *)&v17, v7, v6);
  result = mce::Math::snapRotationToCardinal(*((mce::Math **)v4 + 31), v15);
  *((_DWORD *)v4 + 30) = 0;
  *((_DWORD *)v4 + 31) = result;
  return result;
}


void __fastcall Agent::getFormattedNameTag(Agent *this, int a2)
{
  Agent::getFormattedNameTag(this, a2);
}


int __fastcall Agent::getMoveSpeedScalar(Agent *this)
{
  AttributeInstance *v1; // r0@1
  AttributeInstance *v2; // r4@1
  int result; // r0@4

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  v2 = v1;
  _R0 = AttributeInstance::getDefaultValue(v1, 2);
  __asm
  {
    VMOV            S16, R0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VMOV.F32        S0, #1.0 }
  else
    _R0 = AttributeInstance::getCurrentValue(v2);
    __asm
    {
      VMOV            S0, R0
      VDIV.F32        S0, S0, S16
    }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall Agent::tryFireCreateEvent(Agent *this, Player *a2)
{
  Agent::tryFireCreateEvent(this, a2);
}


signed int __fastcall Agent::aiStep(Agent *this)
{
  Agent *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  Mob::aiStep(this);
  result = *((_DWORD *)v1 + 1076);
  if ( result >= 1 )
    *((_DWORD *)v1 + 1076) = --result;
  return result;
}


signed int __fastcall Agent::isPushableByPiston(Agent *this)
{
  return 1;
}


unsigned int __fastcall Agent::isInvisible(Agent *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  int v3; // r6@1
  char v4; // r7@2
  __int64 v5; // r0@3
  bool v6; // zf@3
  char v7; // r0@3
  unsigned int result; // r0@9
  int v9; // [sp+0h] [bp-20h]@3
  int v10; // [sp+4h] [bp-1Ch]@3

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = *((_DWORD *)Level::getPlayerList(v2) + 2);
  if ( !v3 )
    goto LABEL_13;
  v4 = 0;
  do
  {
    Entity::getOwnerId((Entity *)&v9, (int)v1);
    v5 = *(_QWORD *)(v3 + 24);
    HIDWORD(v5) ^= v10;
    v6 = v5 == v9;
    v7 = 0;
    if ( v6 )
    {
      v7 = 1;
    }
    else
      v3 = *(_DWORD *)v3;
      v6 = v3 == 0;
    v4 |= v7;
  }
  while ( !v6 );
  if ( v4 & 1 )
    result = Entity::isInvisible(v1);
  else
LABEL_13:
    result = 1;
  return result;
}


int __fastcall Agent::isPushable(Agent *this)
{
  return 0;
}


void __fastcall Agent::getFormattedNameTag(Agent *this, int a2)
{
  int *v2; // r5@1
  Entity *v3; // r4@1
  Player *v4; // r6@2
  const Player *v5; // r0@3
  void *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  void *v10; // r0@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  int v15; // [sp+0h] [bp-30h]@3
  char v16; // [sp+4h] [bp-2Ch]@3
  char *v17; // [sp+14h] [bp-1Ch]@2
  int v18; // [sp+18h] [bp-18h]@1

  v2 = (int *)this;
  v3 = (Entity *)a2;
  Entity::getFormattedNameTag((Entity *)&v18, a2);
  if ( *(_DWORD *)(v18 - 12) )
  {
    v17 = (char *)&unk_28898CC;
    v4 = (Player *)Entity::getPlayerOwner(v3);
    if ( v4 )
    {
      v5 = (const Player *)Entity::getLevel(v3);
      Level::getPlayerColor((Level *)&v16, v5, v4);
      ColorFormat::ColorCodeFromColor((ColorFormat *)&v15, (const Color *)&v16);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v17,
        &v15);
      v6 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
    }
    sub_21E8AF4(v2, (int *)&v17);
    sub_21E72F0((const void **)v2, (const void **)&v18);
    v7 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
  else
    sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


signed int __fastcall Agent::getAlwaysShowNameTag(Agent *this)
{
  return 1;
}


signed int __fastcall Agent::canShowNameTag(Agent *this)
{
  return 1;
}


int __fastcall Agent::initializeComponents(int a1, int a2)
{
  int v2; // r4@1
  AgentCommandComponent *v3; // r5@1
  float v4; // r1@1
  int v5; // r6@1
  int v6; // r0@2

  v2 = a1;
  Mob::initializeComponents(a1, a2);
  v3 = (AgentCommandComponent *)operator new(0xCu);
  AgentCommandComponent::AgentCommandComponent(v3, (Entity *)v2);
  v5 = *(_DWORD *)(v2 + 3248);
  *(_DWORD *)(v2 + 3248) = v3;
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    operator delete((void *)v5);
    v3 = *(AgentCommandComponent **)(v2 + 3248);
  }
  return j_j_j__ZN21AgentCommandComponent18initFromDefinitionEv(v3, v4);
}


void __fastcall Agent::tryFireCreateEvent(Agent *this, Player *a2)
{
  Agent *v2; // r4@1
  Player *v3; // r5@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  void **v13; // [sp+0h] [bp-88h]@2
  int v14; // [sp+38h] [bp-50h]@4
  int v15; // [sp+3Ch] [bp-4Ch]@3
  int v16; // [sp+40h] [bp-48h]@2
  int v17; // [sp+48h] [bp-40h]@2
  char v18; // [sp+4Ch] [bp-3Ch]@2

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 4316) )
  {
    v18 = 1;
    v17 = 9;
    EventPacket::EventPacket((int)&v13, a2, (int)&v17);
    (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v3 + 1448))(v3, &v13);
    *((_BYTE *)v2 + 4316) = 1;
    v13 = &off_26E9D30;
    v4 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v15 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
}


char *__fastcall Agent::getRenderData(Agent *this)
{
  return (char *)this + 4320;
}


int __fastcall Agent::startCommandMode(Agent *this)
{
  Agent *v1; // r4@1
  float v2; // r1@1
  float v4; // r1@1
  LookControl *v10; // r5@1
  int v11; // r0@1
  __int64 v12; // r2@1
  float v14; // [sp+0h] [bp-28h]@1
  int v15; // [sp+4h] [bp-24h]@1
  float v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v1 = this;
  Entity::setStatusFlag((int)this, 39, 0);
  _R5 = mce::Math::sin(*((mce::Math **)v1 + 853), v2);
  _R6 = mce::Math::cos(*((mce::Math **)v1 + 853), v4);
  Entity::getAttachPos((AABB *)&v14, (int)v1, 3, 0);
  __asm
  {
    VMOV            S0, R5
    VLDR            S2, [SP,#0x28+var_28]
    VLDR            S4, [SP,#0x28+var_20]
    VMOV            S6, R6
    VSUB.F32        S0, S2, S0
    VADD.F32        S2, S4, S6
    VSTR            S0, [SP,#0x28+var_1C]
  }
  v18 = v15;
  __asm { VSTR            S2, [SP,#0x28+var_14] }
  v10 = (LookControl *)Mob::getLookControl(v1);
  v11 = (*(int (__fastcall **)(Agent *))(*(_DWORD *)v1 + 940))(v1);
  LODWORD(v12) = 1092616192;
  HIDWORD(v12) = v11;
  return LookControl::setLookAt(v10, (const Vec3 *)&v17, v12);
}


_BOOL4 __fastcall Agent::isValidSlotNum(Agent *this, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = Entity::getContainerComponent(this);
  return v2 >= 0 && (*(int (**)(void))(**(_DWORD **)(v3 + 4) + 44))() > v2;
}


signed int __fastcall Agent::canExistWhenDisallowMob(Agent *this)
{
  return 1;
}


int __fastcall Agent::setMoveDirection(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 4292) = *(_DWORD *)a2;
  *(_DWORD *)(result + 4296) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 4300) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall Agent::setSelectedSlot(int result, int a2)
{
  *(_DWORD *)(result + 4312) = a2;
  return result;
}


signed int __fastcall Agent::setCarriedItem(Agent *this, const ItemInstance *a2)
{
  Mob *v2; // r4@1
  const ItemInstance *v3; // r5@1
  ItemInstance *v4; // r6@1
  signed int result; // r0@2
  Level *v6; // r0@4
  Level *v7; // r0@5
  int v8; // r0@5
  int v9; // [sp+0h] [bp-88h]@5
  void **v10; // [sp+8h] [bp-80h]@5
  int v11; // [sp+Ch] [bp-7Ch]@5
  int v12; // [sp+10h] [bp-78h]@5
  char v13; // [sp+14h] [bp-74h]@5
  __int64 v14; // [sp+18h] [bp-70h]@5
  int v15; // [sp+20h] [bp-68h]@5
  int v16; // [sp+28h] [bp-60h]@9
  void *v17; // [sp+44h] [bp-44h]@7
  void *ptr; // [sp+54h] [bp-34h]@5
  int v19; // [sp+68h] [bp-20h]@5
  int v20; // [sp+6Ch] [bp-1Ch]@5
  int v21; // [sp+70h] [bp-18h]@5
  char v22; // [sp+74h] [bp-14h]@5

  v2 = this;
  v3 = a2;
  v4 = (ItemInstance *)(*(int (**)(void))(*(_DWORD *)this + 908))();
  if ( ItemInstance::isNull(v4) != 1 || (result = ItemInstance::isNull(v3)) == 0 )
  {
    result = ItemInstance::matchesItem(v4, v3);
    if ( !result )
    {
      Mob::setCarriedItem(v2, v3);
      v6 = (Level *)Entity::getLevel(v2);
      result = Level::isClientSide(v6);
      if ( !result )
      {
        Entity::getRuntimeID((Entity *)&v9, (int)v2);
        v11 = 2;
        v12 = 1;
        v13 = 0;
        v10 = &off_26DA648;
        v14 = *(_QWORD *)&v9;
        ItemInstance::ItemInstance((ItemInstance *)&v15, (int)v3);
        v22 = 0;
        v21 = 0;
        v19 = 0;
        v20 = 0;
        v7 = (Level *)Entity::getLevel(v2);
        v8 = Level::getPacketSender(v7);
        (*(void (**)(void))(*(_DWORD *)v8 + 8))();
        if ( ptr )
          operator delete(ptr);
        if ( v17 )
          operator delete(v17);
        result = v16;
        if ( v16 )
          result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
      }
    }
  }
  return result;
}
