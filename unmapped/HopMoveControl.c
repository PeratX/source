

int __fastcall HopMoveControl::facePoint(HopMoveControl *this, float _R1, __int64 _R2)
{
  HopMoveControl *v3; // r4@1
  int v10; // r0@1
  int result; // r0@1
  int v12; // [sp+0h] [bp-10h]@1
  int v13; // [sp+4h] [bp-Ch]@1

  v3 = this;
  __asm { VMOV            S0, R2 }
  _R0 = *((_DWORD *)this + 1);
  __asm
  {
    VMOV            S6, R1
    VLDR            S2, [R0,#0x48]
    VLDR            S4, [R0,#0x50]
    VSUB.F32        S2, S6, S2
    VSUB.F32        S0, S0, S4
    VMOV            R1, S2
    VMOV            R0, S0
  }
  v10 = j_mce::Math::atan2(_R0, _R2);
  j_mce::Degree::Degree((int)&v13, v10);
  v12 = j_mce::operator-(v13, 1119092736);
  result = *(_DWORD *)j_mce::Degree::asFloat((mce::Degree *)&v12);
  *(_DWORD *)(*((_DWORD *)v3 + 1) + 124) = result;
  return result;
}


int __fastcall HopMoveControl::HopMoveControl(int a1, int a2)
{
  int result; // r0@1

  result = j_MoveControl::MoveControl(a1, a2);
  *(_DWORD *)result = &off_271A514;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall HopMoveControl::tick(HopMoveControl *this)
{
  HopMoveControl *v1; // r4@1
  int result; // r0@1
  int v4; // r0@2
  signed int v8; // r1@3
  signed int v9; // r0@5
  int v10; // r0@7
  unsigned int v11; // r1@7
  int v12; // r0@9
  int v13; // r0@9
  int v14; // r0@11
  int v15; // r0@11
  PathNavigation *v17; // r0@15
  Path *v18; // r5@15
  char *v19; // r0@15
  __int64 v20; // r2@15
  int v23; // r6@16
  int v26; // r0@18
  int v27; // r0@18
  int v28; // r0@19
  int v29; // [sp+4h] [bp-2Ch]@17
  int v30; // [sp+Ch] [bp-24h]@17
  int v31; // [sp+10h] [bp-20h]@18
  int v32; // [sp+14h] [bp-1Ch]@18

  v1 = this;
  result = j_Mob::getJumpControl(*((Mob **)this + 1));
  if ( result )
  {
    _R5 = j_MoveControl::getSpeedModifier(v1);
    v4 = j_Mob::getJumpControl(*((Mob **)v1 + 1));
    __asm
    {
      VLDR            S0, =0.8
      VMOV            S2, R5
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v8 = 1;
    else
      v8 = 3;
    (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v4 + 20))(v4, v8);
    v9 = *((_DWORD *)v1 + 8);
    if ( v9 >= 1 )
      *((_DWORD *)v1 + 8) = v9 - 1;
    v10 = *((_DWORD *)v1 + 1);
    v11 = *(_WORD *)(v10 + 216);
    if ( (_BYTE)v11 )
      if ( v11 <= 0xFF )
      {
        j_Mob::setJumping((Mob *)v10, 0);
        v12 = j_Mob::getJumpControl(*((Mob **)v1 + 1));
        *((_DWORD *)v1 + 8) = (*(int (**)(void))(*(_DWORD *)v12 + 36))();
        v13 = j_Mob::getJumpControl(*((Mob **)v1 + 1));
        (*(void (**)(void))(*(_DWORD *)v13 + 20))();
        v10 = *((_DWORD *)v1 + 1);
      }
      if ( j_Mob::getNavigation((Mob *)v10) )
        v14 = j_Mob::getNavigation(*((Mob **)v1 + 1));
        v15 = (*(int (**)(void))(*(_DWORD *)v14 + 36))();
        _ZF = v15 == 0;
        if ( !v15 )
          _ZF = *((_DWORD *)v1 + 8) == 0;
        if ( _ZF )
        {
          v17 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 1));
          v18 = (Path *)j_PathNavigation::getPath(v17);
          v19 = j_MoveControl::getWantedPosition(v1);
          _R8 = *(_DWORD *)v19;
          _R7 = *((_DWORD *)v19 + 2);
          if ( v18 )
          {
            v23 = j_Path::getIndex(v18);
            if ( v23 < j_Path::getSize(v18) )
            {
              j_Path::currentPos((Path *)&v29, v18, *((_DWORD *)v1 + 1));
              _R8 = v29;
              _R7 = v30;
            }
          }
          _R0 = *((_DWORD *)v1 + 1);
          __asm
            VMOV            S0, R7
            VMOV            S6, R8
            VLDR            S2, [R0,#0x48]
            VLDR            S4, [R0,#0x50]
            VSUB.F32        S2, S6, S2
            VSUB.F32        S0, S0, S4
            VMOV            R1, S2
            VMOV            R0, S0
          v26 = j_mce::Math::atan2(_R0, v20);
          j_mce::Degree::Degree((int)&v32, v26);
          v31 = j_mce::operator-(v32, 1119092736);
          *(_DWORD *)(*((_DWORD *)v1 + 1) + 124) = *(_DWORD *)j_mce::Degree::asFloat((mce::Degree *)&v31);
          *(_DWORD *)(*((_DWORD *)v1 + 1) + 3492) = 0;
          j_Mob::setJumping(*((Mob **)v1 + 1), 1);
          v27 = j_Mob::getJumpControl(*((Mob **)v1 + 1));
          (*(void (**)(void))(*(_DWORD *)v27 + 24))();
        }
    v28 = *((_DWORD *)v1 + 1);
    if ( *(_BYTE *)(v28 + 216) )
      if ( !j_Mob::isJumping((Mob *)v28) )
        j_Mob::setSpeedModifier(*((Mob **)v1 + 1), 0.0);
    result = j_MoveControl::tick(v1);
  }
  return result;
}


int __fastcall HopMoveControl::setWantedPosition(HopMoveControl *this, const Vec3 *a2, float a3)
{
  const Vec3 *v3; // r5@1
  HopMoveControl *v4; // r4@1
  int result; // r0@1
  int v10; // r0@3

  v3 = a2;
  v4 = this;
  j_MoveControl::setWantedPosition(this, a2, a3);
  result = j_Entity::distanceToSqr(*((Entity **)v4 + 1), v3);
  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = j_Mob::getJumpControl(*((Mob **)v4 + 1));
    if ( result )
    {
      v10 = j_Mob::getJumpControl(*((Mob **)v4 + 1));
      result = (*(int (**)(void))(*(_DWORD *)v10 + 20))();
    }
  return result;
}
