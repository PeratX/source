

int __fastcall ScaleByAgeComponent::tick(ScaleByAgeComponent *this)
{
  int result; // r0@1
  AgeableComponent *v3; // r0@2
  Entity *v10; // r5@6
  unsigned int v12; // r1@6
  unsigned int v13; // r1@8
  unsigned int v14; // r0@8
  Entity *v15; // r5@13
  int (__fastcall *v16)(Entity *, int, int); // r7@13
  char *v17; // r0@13
  int v18; // r6@13
  char *v19; // r0@13
  int v20; // r2@13

  _R4 = (Entity **)this;
  result = j_Entity::getAgeableComponent(*(Entity **)this);
  if ( result )
  {
    v3 = (AgeableComponent *)j_Entity::getAgeableComponent(*_R4);
    if ( v3 )
    {
      __asm { VMOV.F32        S0, #20.0 }
      _R1 = *(_DWORD *)(*((_DWORD *)*_R4 + 12) + 276);
      __asm
      {
        VLDR            S2, [R1,#4]
        VMUL.F32        S16, S2, S0
      }
      _R0 = j_AgeableComponent::getAge(v3);
        VMOV            S0, R0
        VMOV.F32        S2, #1.0
        VCVT.F32.S32    S0, S0
        VLDR            S4, [R4,#4]
        VLDR            S6, [R4,#8]
        VSUB.F32        S6, S6, S4
        VDIV.F32        S0, S0, S16
        VADD.F32        S0, S0, S2
        VMUL.F32        S0, S6, S0
        VADD.F32        S16, S0, S4
    }
    else
      __asm { VLDR            S16, [R4,#8] }
    v10 = *_R4;
    _R0 = j_SynchedEntityData::_get((Entity *)((char *)*_R4 + 176), 39);
    v12 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v12 == 3 )
        VLDR            S0, [R0,#0xC]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( !_ZF )
        __asm { VSTR            S16, [R0,#0xC] }
        *(_BYTE *)(_R0 + 8) = 1;
        v13 = v12 >> 16;
        v14 = *((_WORD *)v10 + 94);
        if ( v14 >= v13 )
          LOWORD(v14) = v13;
        *((_WORD *)v10 + 94) = v14;
        if ( *((_WORD *)v10 + 95) > v13 )
          LOWORD(v13) = *((_WORD *)v10 + 95);
        *((_WORD *)v10 + 95) = v13;
    v15 = *_R4;
    v16 = *(int (__fastcall **)(Entity *, int, int))(*(_DWORD *)*_R4 + 680);
    v17 = j_Entity::getEntityData(*_R4);
    v18 = j_SynchedEntityData::getFloat((SynchedEntityData *)v17, 54);
    v19 = j_Entity::getEntityData(*_R4);
    v20 = j_SynchedEntityData::getFloat((SynchedEntityData *)v19, 55);
    result = v16(v15, v18, v20);
  }
  return result;
}


int __fastcall ScaleByAgeComponent::initFromDefinition(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 384);
  *(_DWORD *)(result + 4) = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(v1 + 8);
  return result;
}


_DWORD *__fastcall ScaleByAgeComponent::ScaleByAgeComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


int __fastcall ScaleByAgeComponent::getScale(ScaleByAgeComponent *this)
{
  AgeableComponent *v2; // r0@1
  int result; // r0@4

  _R4 = this;
  v2 = (AgeableComponent *)j_Entity::getAgeableComponent(*(Entity **)this);
  if ( v2 )
  {
    __asm { VMOV.F32        S0, #20.0 }
    _R1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)_R4 + 48) + 276);
    __asm
    {
      VLDR            S2, [R1,#4]
      VMUL.F32        S16, S2, S0
    }
    _R0 = j_AgeableComponent::getAge(v2);
      VMOV            S0, R0
      VMOV.F32        S2, #1.0
      VCVT.F32.S32    S0, S0
      VLDR            S4, [R4,#4]
      VLDR            S6, [R4,#8]
      VSUB.F32        S6, S6, S4
      VDIV.F32        S0, S0, S16
      VADD.F32        S0, S0, S2
      VMUL.F32        S0, S6, S0
      VADD.F32        S0, S0, S4
  }
  else
    __asm { VLDR            S0, [R4,#8] }
  __asm { VMOV            R0, S0 }
  return result;
}
