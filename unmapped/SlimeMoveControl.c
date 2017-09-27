

int __fastcall SlimeMoveControl::getJumpDelay(SlimeMoveControl *this)
{
  int result; // r0@1

  _R0 = j_FloatRange::getValue(
          (FloatRange *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 48) + 392) + 8),
          (Random *)(*((_DWORD *)this + 1) + 552));
  __asm
  {
    VMOV.F32        S0, #20.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall SlimeMoveControl::SlimeMoveControl(int a1, int a2)
{
  int result; // r0@1

  result = j_MoveControl::MoveControl(a1, a2);
  *(_DWORD *)result = &off_271A598;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall SlimeMoveControl::tick(SlimeMoveControl *this)
{
  int result; // r0@1
  int v3; // r5@3
  int v8; // r6@3
  int (__fastcall *v9)(int, int); // r7@3
  AttributeInstance *v10; // r0@3
  int v13; // r0@4
  int v15; // r0@8

  _R4 = this;
  result = j_Mob::getJumpControl(*((Mob **)this + 1));
  if ( result )
  {
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 3420) = *(_DWORD *)(*((_DWORD *)_R4 + 1) + 124);
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 3412) = *(_DWORD *)(*((_DWORD *)_R4 + 1) + 124);
    if ( *((_BYTE *)_R4 + 24) )
    {
      *((_BYTE *)_R4 + 24) = 0;
      v3 = *((_DWORD *)_R4 + 1);
      __asm { VLDR            S16, [R4,#0x14] }
      v8 = *(_BYTE *)(v3 + 216);
      v9 = *(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 824);
      v10 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v3 + 1004))(
                                   *((_DWORD *)_R4 + 1),
                                   &SharedAttributes::MOVEMENT_SPEED);
      _R0 = j_AttributeInstance::getCurrentValue(v10);
      __asm
      {
        VMOV            S0, R0
        VMUL.F32        S0, S0, S16
        VMOV            R1, S0
      }
      result = v9(v3, _R1);
      if ( v8 )
        v13 = *((_DWORD *)_R4 + 8);
        *((_DWORD *)_R4 + 8) = v13 - 1;
        if ( v13 <= 0 )
        {
          _R0 = j_FloatRange::getValue(
                  (FloatRange *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)_R4 + 1) + 48) + 392) + 8),
                  (Random *)(*((_DWORD *)_R4 + 1) + 552));
          __asm
          {
            VMOV.F32        S0, #20.0
            VMOV            S2, R0
            VMUL.F32        S0, S2, S0
            VCVTR.S32.F32   S0, S0
            VSTR            S0, [R4,#0x20]
          }
          v15 = j_Mob::getJumpControl(*((Mob **)_R4 + 1));
          result = (*(int (**)(void))(*(_DWORD *)v15 + 8))();
        }
        else
          result = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 824))();
    }
    else
      result = j_j_j__ZN3Mob6setYyaEf(*((Mob **)_R4 + 1), 0.0);
  }
  return result;
}
