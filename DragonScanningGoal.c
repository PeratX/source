

void __fastcall DragonScanningGoal::~DragonScanningGoal(DragonScanningGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall DragonScanningGoal::canUse(DragonScanningGoal *this)
{
  DragonScanningGoal *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( j_Entity::isSitting(*((Entity **)this + 2)) == 1 && !j_Entity::getTarget(*((Entity **)v1 + 2)) )
    v2 = 1;
  return v2;
}


void __fastcall DragonScanningGoal::~DragonScanningGoal(DragonScanningGoal *this)
{
  DragonScanningGoal::~DragonScanningGoal(this);
}


Goal *__fastcall DragonScanningGoal::DragonScanningGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_27254B0;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


signed int __fastcall DragonScanningGoal::canContinueToUse(DragonScanningGoal *this)
{
  Dimension *v2; // r0@1
  int v3; // r1@1
  signed int result; // r0@6
  Dimension *v10; // r0@5
  double v11; // r0@5
  int v12; // r5@10
  int v13; // r6@10
  int v14; // r8@11
  unsigned int v15; // r0@12
  int v16; // r7@14
  int *v17; // r4@14
  int v18; // r7@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  void *v21; // r6@25
  int v22; // r1@25
  void *v23; // r0@25
  void *ptr; // [sp+0h] [bp-48h]@12
  __int64 v26; // [sp+4h] [bp-44h]@12
  int v27; // [sp+Ch] [bp-3Ch]@12
  signed int v28; // [sp+10h] [bp-38h]@12
  int v29; // [sp+14h] [bp-34h]@12
  int v30; // [sp+18h] [bp-30h]@12

  _R4 = this;
  v2 = (Dimension *)j_Entity::getDimension(*((Entity **)this + 2));
  v3 = j_Dimension::fetchNearestAttackablePlayer(
         v2,
         *((Entity **)_R4 + 2),
         *(float *)&DragonScanningGoal::SITTING_ATTACK_VIEW_RANGE);
  _R0 = DragonScanningGoal::SITTING_SCANNING_IDLE_TICKS;
  __asm { VLDR            S0, [R4,#0xC] }
  if ( v3 )
  {
    _R0 = DragonScanningGoal::SITTING_SCANNING_IDLE_TICKS / 4;
    __asm
    {
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      (*(void (**)(void))(**((_DWORD **)_R4 + 2) + 340))();
      return 0;
    return 1;
  }
  __asm
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
  v10 = (Dimension *)j_Entity::getDimension(*((Entity **)_R4 + 2));
  LODWORD(v11) = j_Dimension::fetchNearestAttackablePlayer(
                   v10,
                   *((Entity **)_R4 + 2),
                   *(float *)&DragonScanningGoal::SITTING_CHARGE_VIEW_RANGE);
  if ( LODWORD(v11) && (*(int (**)(void))(**((_DWORD **)_R4 + 2) + 252))() == 1 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 2) + 340))();
  v12 = *((_DWORD *)_R4 + 2);
  v13 = *(_DWORD *)(v12 + 48);
  if ( !v13 )
    return 0;
  v14 = *(_DWORD *)(v13 + 260);
  result = 0;
  if ( v14 )
    v30 = 0;
    v27 = 0;
    ptr = 0;
    v26 = 0LL;
    v28 = 1065353216;
    v29 = 0;
    LODWORD(v11) = &v28;
    v15 = sub_21E6254(v11);
    LODWORD(v26) = v15;
    if ( v15 == 1 )
      v17 = &v30;
      v30 = 0;
    else
      if ( v15 >= 0x40000000 )
        sub_21E57F4();
      v16 = 4 * v15;
      v17 = (int *)j_operator new(4 * v15);
      j___aeabi_memclr4_0((int)v17, v16);
    ptr = v17;
    j_EntityDefinitionDescriptor::executeTrigger(
      (EntityDefinitionDescriptor *)v13,
      (Entity *)v12,
      (const DefinitionTrigger *)(v14 + 4),
      (const VariantParameterList *)&ptr);
    v18 = HIDWORD(v26);
    while ( v18 )
      v21 = (void *)v18;
      v22 = *(_DWORD *)(v18 + 8);
      v18 = *(_DWORD *)v18;
      v23 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
      {
        v19 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        }
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      }
      j_operator delete(v21);
    j___aeabi_memclr4_0((int)ptr, 4 * v26);
    result = 0;
    HIDWORD(v26) = 0;
    _ZF = ptr == 0;
    if ( ptr )
      _ZF = &v30 == ptr;
    if ( !_ZF )
      j_operator delete(ptr);
  return result;
}


int __fastcall DragonScanningGoal::start(DragonScanningGoal *this)
{
  DragonScanningGoal *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 3) = 0;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 340))();
  return (*(int (**)(void))(**((_DWORD **)v1 + 2) + 352))();
}


float __fastcall DragonScanningGoal::tick(DragonScanningGoal *this)
{
  Dimension *v6; // r0@1
  float result; // r0@1
  float v24; // r1@10
  int v25; // r0@10
  Mob *v26; // r6@10
  float v31; // r1@10
  Mob *v33; // r5@16
  int v37; // [sp+0h] [bp-68h]@10
  int v38; // [sp+8h] [bp-60h]@10
  float v39; // [sp+Ch] [bp-5Ch]@10

  __asm { VMOV.F32        S16, #1.0 }
  _R4 = this;
  __asm
  {
    VLDR            S0, [R4,#0xC]
    VADD.F32        S0, S0, S16
    VSTR            S0, [R4,#0xC]
  }
  v6 = (Dimension *)j_Entity::getDimension(*((Entity **)this + 2));
  result = COERCE_FLOAT(j_Dimension::fetchNearestAttackablePlayer(v6, *((Entity **)_R4 + 2), *(float *)&DragonScanningGoal::SITTING_ATTACK_VIEW_RANGE));
  _R5 = result;
  if ( result != 0.0 )
    _R6 = *((_DWORD *)_R4 + 2);
    __asm
    {
      VLDR            S18, [R5,#0x48]
      VLDR            S2, [R5,#0x50]
      VLDR            S0, [R6,#0x48]
      VLDR            S4, [R6,#0x50]
      VSUB.F32        S0, S18, S0
      VLDR            S26, =0.0001
      VSUB.F32        S2, S2, S4
      VMUL.F32        S4, S0, S0
      VMUL.F32        S6, S2, S2
      VADD.F32        S4, S6, S4
      VSQRT.F32       S4, S4
      VCMPE.F32       S4, S26
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
      __asm
      {
        VLDR            S20, [R0]
        VLDR            S22, [R0,#4]
        VLDR            S24, [R0,#8]
      }
    else
        VDIV.F32        S24, S2, S4
        VDIV.F32        S20, S0, S4
        VLDR            S22, =0.0
    __asm { VLDR            S0, [R6,#0x7C] }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R7, S0
    _R0 = j_sinf(_R7);
    __asm { VMOV            S28, R0 }
    _R0 = j_cosf(_R7);
      VMOV            S0, R0
      VMUL.F32        S2, S28, S28
      VADD.F32        S2, S4, S2
      VSQRT.F32       S2, S2
      VCMPE.F32       S2, S26
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
        VNEG.F32        S4, S0
        VDIV.F32        S0, S28, S2
        VDIV.F32        S4, S4, S2
        VLDR            S2, =0.0
      VMUL.F32        S4, S4, S24
      VMUL.F32        S2, S2, S22
      VMUL.F32        S0, S0, S20
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    result = j_acosf(_R0);
      VMOV.F32        S2, #0.5
    _R1 = &mce::Math::RADDEG;
      VLDR            S20, [R1]
      VMUL.F32        S0, S20, S0
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, #0.0
      goto LABEL_19;
      VMOV.F32        S2, #10.0
      VCMPE.F32       S0, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_19:
      j_EnderDragon::getHeadPos((EnderDragon *)&v39, _R6);
        VLDR            S0, [SP,#0x68+var_5C]
        VLDR            S22, [R5,#0x50]
        VCVT.F32.S32    S24, S0
      j_EnderDragon::getHeadPos((EnderDragon *)&v37, *((_DWORD *)_R4 + 2));
      _R0 = v38;
        VSUB.F32        S18, S18, S24
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VMOV            R0, S18
        VSUB.F32        S22, S22, S0
        VMOV            R1, S22
      _R0 = j_atan2f(_R0, _R1);
        VLDR            S2, =180.0
      _R0 = *((_DWORD *)_R4 + 2);
        VMUL.F32        S0, S20, S0
        VSUB.F32        S0, S2, S0
        VLDR            S2, [R0,#0x7C]
        VSUB.F32        S0, S0, S2
        VMOV            R0, S0
      v25 = j_mce::Math::wrapDegrees(_R0, v24);
      v26 = (Mob *)*((_DWORD *)_R4 + 2);
      _R5 = v25;
      _R0 = j_Mob::getYRotA(*((Mob **)_R4 + 2));
        VMOV            S2, R0
        VLDR            S0, =0.8
        VMUL.F32        S0, S2, S0
        VMOV            R1, S0
      j_Mob::setYRotA(v26, _R1);
        VMUL.F32        S0, S18, S18
        VMUL.F32        S2, S22, S22
        VADD.F32        S0, S2, S0
      _R0 = j_mce::Math::sqrt(_R0, v31);
        VLDR            S2, =40.0
        VLDR            S6, =100.0
        VADD.F32        S0, S0, S16
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S4, S0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S2 }
        VLDR            S2, =-100.0
        VMUL.F32        S0, S4, S0
        VMOV            S4, R5
        VCMPE.F32       S4, S2
        VCMPE.F32       S4, S6
        VDIV.F32        S0, S16, S0
        __asm { VMOVGT.F32      S2, S4 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S2, S6 }
      v33 = (Mob *)*((_DWORD *)_R4 + 2);
      __asm { VMUL.F32        S16, S0, S2 }
        VADD.F32        S0, S16, S0
      j_Mob::setYRotA(v33, _R1);
      result = COERCE_FLOAT(j_Mob::getYRotA(*((Mob **)_R4 + 2)));
      _R1 = *((_DWORD *)_R4 + 2);
        VLDR            S2, [R1,#0x7C]
        VSTR            S0, [R1,#0x7C]
  return result;
}
