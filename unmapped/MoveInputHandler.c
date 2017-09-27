

int __fastcall MoveInputHandler::_updateXY(int result, int a2)
{
  unsigned int v8; // lr@5
  int v9; // r12@9
  signed int v10; // lr@17
  signed int v11; // r12@17

  __asm
  {
    VLDR            S0, [R0,#0x5C]
    VMOV            R3, S0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S0, [R0,#0x60]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      _R4 = *(_BYTE *)(result + 85);
      _R3 = 1065353216;
      v8 = *(_WORD *)(result + 86);
      if ( *(_BYTE *)(result + 85) )
        _R4 = 1065353216;
      if ( (_BYTE)v8 )
      {
        __asm
        {
          VMOVNE.F32      S0, #-1.0
          VMOVNE          S2, R4
          VADDNE.F32      S0, S2, S0
          VMOVNE          R4, S0
        }
      }
      v9 = *(_DWORD *)(result + 88);
      if ( v8 < 0x100 )
        _R3 = 0;
      if ( (_BYTE)v9 )
          VMOVNE          S2, R3
          VMOVNE          R3, S0
      if ( v9 & 0xFF00 )
          VMOV.F32        S0, #1.0
          VMOV            S2, R4
          VMOV            S4, R3
          VADD.F32        S2, S2, S0
          VADD.F32        S0, S4, S0
          VMOV            R4, S2
          VMOV            R3, S0
      if ( v9 & 0xFF0000 )
          VMOV.F32        S2, #-1.0
          VMOV            S4, R4
          VMOV            S6, R3
          VADD.F32        S2, S6, S2
          VMOV            R4, S0
          VMOV            R3, S2
      __asm { VMOV            S2, R4 }
      v10 = 0;
      __asm { VMOV            S0, R3 }
      v11 = 0;
      __asm
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, #0.0
      if ( !_ZF )
        v10 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        v11 = 1;
      if ( v11 | v10 )
          VMUL.F32        S4, S0, S0
          VMUL.F32        S6, S2, S2
          VADD.F32        S4, S6, S4
          VLDR            S6, =0.0001
          VSQRT.F32       S4, S4
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          *(_QWORD *)&_R3 = *(_QWORD *)&Vec2::ZERO;
        else
          __asm
          {
            VDIV.F32        S2, S2, S4
            VDIV.F32        S0, S0, S4
            VMOV            R4, S2
            VMOV            R3, S0
          }
    else
      __asm { VMOV            R4, S0 }
  else
    _R4 = *(_DWORD *)(result + 96);
  if ( a2 == 1 )
      VLDR            S0, =0.3
      VMOV            S2, R4
      VMOV            S4, R3
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VMOV            R4, S2
      VMOV            R3, S0
  *(_QWORD *)(result + 4) = *(_QWORD *)&_R3;
  return result;
}


void __fastcall MoveInputHandler::~MoveInputHandler(MoveInputHandler *this)
{
  MoveInputHandler::~MoveInputHandler(this);
}


void __fastcall MoveInputHandler::~MoveInputHandler(MoveInputHandler *this)
{
  MoveInputHandler *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26D938C;
  v2 = *((_DWORD *)this + 19);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall MoveInputHandler::clearMovementState(int result)
{
  int v1; // r1@1

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 63) = 0;
  *(_BYTE *)(result + 62) = 0;
  *(_DWORD *)(result + 85) = 0;
  v1 = *(&Vec2::ZERO + 1);
  *(_DWORD *)(result + 92) = Vec2::ZERO;
  *(_DWORD *)(result + 96) = v1;
  *(_WORD *)(result + 69) = 0;
  return result;
}


int __fastcall MoveInputHandler::MoveInputHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r2@4

  v2 = a1;
  v3 = a2;
  _aeabi_memclr4(a1 + 4, 65);
  *(_DWORD *)v2 = &off_26D938C;
  *(_WORD *)(v2 + 69) = 0;
  *(_DWORD *)(v2 + 72) = *(_DWORD *)v3;
  v4 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v2 + 76) = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_BYTE *)(v2 + 90) = 0;
  *(_WORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  return v2;
}


unsigned int __fastcall MoveInputHandler::tick(MoveInputHandler *this, LocalPlayer *a2)
{
  LocalPlayer *v3; // r6@1
  int v4; // r10@1
  unsigned int v5; // r2@2
  unsigned int *v6; // r1@2
  unsigned int v7; // r3@5
  unsigned int v8; // r7@6
  unsigned int v9; // r2@7
  signed int v10; // r1@7
  ClientInstance *v11; // r7@11
  int v12; // r0@11
  signed int v14; // r9@20
  signed int v15; // r0@21
  signed int v16; // r1@21
  char v17; // r0@27
  int v18; // r1@30
  int v19; // r4@30
  bool v20; // zf@30
  char v21; // r0@33
  __int64 v22; // r1@35
  int v29; // r0@51
  unsigned int v32; // r4@57
  int v33; // r3@61
  signed int v34; // r4@69
  signed int v35; // r3@69
  char v36; // r0@80
  bool v37; // zf@87
  bool v38; // zf@91
  unsigned int result; // r0@95
  unsigned int *v40; // r1@100
  unsigned int *v41; // r4@106

  _R5 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 19);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6;
          v10 = 0;
          if ( !v9 )
            v10 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v4 = 0;
LABEL_11:
  v11 = (ClientInstance *)*((_DWORD *)this + 18);
  *((_WORD *)this + 31) = 0;
  *((_BYTE *)this + 67) = 0;
  *((_BYTE *)this + 61) = *((_BYTE *)this + 83);
  v12 = *((_BYTE *)this + 81);
  if ( v10 )
    v11 = 0;
  _ZF = v12 == 0;
  if ( !*((_BYTE *)_R5 + 81) )
    _ZF = *((_BYTE *)_R5 + 84) == 0;
  if ( _ZF )
    goto LABEL_20;
  if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v3 + 208))(v3)
    || (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v3 + 216))(v3)
    || Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320)) == 1 )
    *((_BYTE *)_R5 + 67) = 1;
LABEL_20:
    v14 = 0;
    goto LABEL_21;
  v14 = 1;
LABEL_21:
  v15 = Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320));
  v16 = (signed int)v11;
  if ( v11 )
    v16 = 1;
  if ( (v15 & v16) == 1 && ClientInstance::getCurrentInputMode(v11) == 2 )
    *((_BYTE *)_R5 + 82) = 0;
  if ( *((_BYTE *)_R5 + 82) )
    v17 = 1;
  else
    v17 = *((_BYTE *)_R5 + 70);
    if ( *((_BYTE *)_R5 + 70) )
      v17 = 1;
  *((_BYTE *)_R5 + 60) = v17;
  v18 = *((_DWORD *)_R5 + 23);
  v19 = *((_BYTE *)_R5 + 85);
  v20 = (v18 & 0x7FFFFFFF) == 0;
  if ( !(v18 & 0x7FFFFFFF) )
    v20 = (*((_DWORD *)_R5 + 24) & 0x7FFFFFFF) == 0;
  if ( v20 )
    if ( !*((_BYTE *)_R5 + 85) )
      goto LABEL_50;
    goto LABEL_44;
  v21 = byte_27CAE6C[0];
  __dmb();
  if ( !(v21 & 1) && j___cxa_guard_acquire(byte_27CAE6C) )
    LODWORD(v22) = 0;
    HIDWORD(v22) = 1065353216;
    unk_27CAE70 = v22;
    j___cxa_guard_release(byte_27CAE6C);
  if ( v19 )
  __asm
    VLDR            S0, [R5,#0x5C]
    VLDR            S2, [R5,#0x60]
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R0 = *(&Vec2::ZERO + 1);
    _R1 = Vec2::ZERO;
    __asm
      VDIV.F32        S2, S2, S4
      VDIV.F32        S0, S0, S4
      VMOV            R0, S2
      VMOV            R1, S0
    VMOV            S0, R1
    VMOV            S6, R0
  _R2 = byte_27CAE6C;
    VLDR            S2, [R2,#4]
    VLDR            S4, [R2,#8]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S4, S6
    VMOV.F32        S4, #0.5
    VADD.F32        S0, S2, S0
    VCMPE.F32       S0, S4
  if ( !(_NF ^ _VF) )
LABEL_44:
    if ( LocalPlayer::isAutoJumpEnabled(v3) == 1
      && !Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320))
      && !Entity::isRiding(v3)
      && ((*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v3 + 208))(v3)
       || (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v3 + 216))(v3) == 1) )
      (*(void (__fastcall **)(MoveInputHandler *, signed int))(*(_DWORD *)_R5 + 32))(_R5, 1);
LABEL_50:
  if ( *((_BYTE *)_R5 + 60) )
    v29 = Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320)) ^ 1;
    v29 = 0;
    VMOV            R2, S0
    VCMPE.F32       S0, #0.0
      VLDR            S0, [R5,#0x60]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      _R1 = *((_BYTE *)_R5 + 85);
      _R2 = 1065353216;
      v32 = *((_WORD *)_R5 + 43);
      if ( *((_BYTE *)_R5 + 85) )
        _R1 = 1065353216;
      if ( (_BYTE)v32 )
        __asm
          VMOVNE.F32      S0, #-1.0
          VMOVNE          S2, R1
          VADDNE.F32      S0, S2, S0
          VMOVNE          R1, S0
      v33 = *((_DWORD *)_R5 + 22);
      if ( v32 < 0x100 )
        _R2 = 0;
      if ( (_BYTE)v33 )
          VMOVNE          S2, R2
          VMOVNE          R2, S0
      if ( v33 & 0xFF00 )
          VMOV.F32        S0, #1.0
          VMOV            S2, R1
          VMOV            S4, R2
          VADD.F32        S2, S2, S0
          VADD.F32        S0, S4, S0
          VMOV            R1, S2
          VMOV            R2, S0
      if ( v33 & 0xFF0000 )
          VMOV.F32        S2, #-1.0
          VMOV            S4, R1
          VMOV            S6, R2
          VADD.F32        S2, S6, S2
          VMOV            R1, S0
          VMOV            R2, S2
      __asm { VMOV            S2, R1 }
      v34 = 0;
      __asm { VMOV            S0, R2 }
      v35 = 0;
      __asm
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, #0.0
      if ( !_ZF )
        v34 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        v35 = 1;
      if ( v35 | v34 )
          VMUL.F32        S4, S0, S0
          VMUL.F32        S6, S2, S2
          VADD.F32        S4, S6, S4
          VLDR            S6, =0.0001
          VSQRT.F32       S4, S4
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          _R1 = *(&Vec2::ZERO + 1);
          _R2 = Vec2::ZERO;
        else
          __asm
          {
            VDIV.F32        S2, S2, S4
            VDIV.F32        S0, S0, S4
            VMOV            R1, S2
            VMOV            R2, S0
          }
    else
      __asm { VMOV            R1, S0 }
    _R1 = *((_DWORD *)_R5 + 24);
  if ( v29 == 1 )
      VLDR            S0, =0.3
      VMOV            S2, R1
      VMOV            S4, R2
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VMOV            R1, S2
      VMOV            R2, S0
  v36 = 0;
  *((_DWORD *)_R5 + 1) = _R2;
  *((_DWORD *)_R5 + 2) = _R1;
  if ( v14 == 1 )
    if ( *((_BYTE *)_R5 + 80) && (!v11 || ClientInstance::getCurrentInputMode(v11) == 2) && Entity::isRiding(v3) != 1 )
      v36 = 1;
      *((_BYTE *)_R5 + 67) = 1;
  *((_BYTE *)_R5 + 80) = v36;
  *((_BYTE *)_R5 + 66) = 0;
  v37 = *((_BYTE *)_R5 + 81) == 0;
    v37 = *((_BYTE *)_R5 + 69) == 0;
  if ( !v37 )
    *((_BYTE *)_R5 + 62) = 1;
  v38 = *((_BYTE *)_R5 + 82) == 0;
  if ( !*((_BYTE *)_R5 + 82) )
    v38 = *((_BYTE *)_R5 + 70) == 0;
  if ( !v38 )
    *((_BYTE *)_R5 + 63) = 1;
  result = Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320));
  if ( result == 1 )
    result = *((_WORD *)_R5 + 31);
    if ( (_BYTE)result || result >= 0x100 )
      result = 1;
      *((_BYTE *)_R5 + 66) = 1;
    v40 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v40);
      while ( __strex(result - 1, v40) );
      result = (*v40)--;
    if ( result == 1 )
      v41 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v41);
        while ( __strex(result - 1, v41) );
        result = (*v41)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


int __fastcall MoveInputHandler::clearInputState(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 63) = 0;
  *(_BYTE *)(result + 62) = 0;
  *(_BYTE *)(result + 82) = 0;
  *(_BYTE *)(result + 70) = 0;
  *(_BYTE *)(result + 69) = 0;
  *(_DWORD *)(result + 85) = 0;
  return result;
}


int __fastcall MoveInputHandler::setSneakDown(int result, bool a2)
{
  *(_BYTE *)(result + 82) = a2;
  return result;
}


int __fastcall MoveInputHandler::_toggleSneak(int result)
{
  *(_BYTE *)(result + 82) ^= 1u;
  return result;
}


int __fastcall MoveInputHandler::_updateGGVector(int result, int a2, float _R2, float _R3, float a5)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VMOV            S2, R3
    VMOV            S4, R2
  }
  if ( a2 == 1 )
    __asm
    {
      VLDR            S6, [R0,#0xC]
      VLDR            S8, [R0,#0x10]
      VSUB.F32        S6, S4, S6
      VLDR            S10, [R0,#0x14]
      VSTR            S4, [R0,#0xC]
      VSTR            S2, [R0,#0x10]
      VSUB.F32        S2, S2, S8
      VSTR            S0, [R0,#0x14]
      VSUB.F32        S0, S0, S10
      VLDR            S4, [R0,#0x18]
      VADD.F32        S4, S6, S4
      VSTR            S4, [R0,#0x18]
      VLDR            S4, [R0,#0x1C]
      VADD.F32        S2, S2, S4
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0,#0x20]
    }
  else if ( !a2 )
      VLDR            S6, [R0,#0x24]
      VLDR            S8, [R0,#0x28]
      VLDR            S10, [R0,#0x2C]
      VSTR            S4, [R0,#0x24]
      VSTR            S2, [R0,#0x28]
      VSTR            S0, [R0,#0x2C]
      VLDR            S4, [R0,#0x30]
      VSTR            S4, [R0,#0x30]
      VLDR            S4, [R0,#0x34]
      VSTR            S2, [R0,#0x34]
      VLDR            S2, [R0,#0x38]
      VSTR            S0, [R0,#0x38]
  return result;
}


void __fastcall MoveInputHandler::_registerButtonStateTracking(int a1, int *a2, int a3)
{
  MoveInputHandler::_registerButtonStateTracking(a1, a2, a3);
}


MoveInputHandler *__fastcall MoveInputHandler::~MoveInputHandler(MoveInputHandler *this)
{
  MoveInputHandler *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26D938C;
  v2 = *((_DWORD *)this + 19);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


void __fastcall MoveInputHandler::_registerButtonStateTracking(int a1, int *a2, int a3)
{
  int v3; // r7@1
  int v4; // r5@1
  int *v5; // r6@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  void *v8; // r0@3
  _DWORD *v9; // r0@4
  __int64 v10; // r1@4
  void *v11; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  _DWORD *v16; // [sp+0h] [bp-40h]@4
  __int64 v17; // [sp+8h] [bp-38h]@4
  int v18; // [sp+10h] [bp-30h]@4
  _DWORD *v19; // [sp+14h] [bp-2Ch]@1
  __int64 v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+24h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  sub_119C854(&v21, a2);
  v6 = operator new(4u);
  LODWORD(v7) = sub_E293C0;
  *v6 = v4;
  HIDWORD(v7) = sub_E293AE;
  v19 = v6;
  v20 = v7;
  InputHandler::registerButtonDownHandler(v3, (int **)&v21, (int)&v19, 0);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  v8 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  sub_119C854(&v18, v5);
  v9 = operator new(4u);
  LODWORD(v10) = sub_E29408;
  *v9 = v4;
  HIDWORD(v10) = sub_E293F6;
  v16 = v9;
  v17 = v10;
  InputHandler::registerButtonUpHandler(v3, (int **)&v18, (int)&v16, 0);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


int __fastcall MoveInputHandler::_registerInputHandlers(MoveInputHandler *this, InputHandler *a2)
{
  MoveInputHandler *v2; // r5@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@17
  __int64 v18; // r1@17
  void *v19; // r0@19
  int result; // r0@20
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  unsigned int *v39; // r2@59
  signed int v40; // r1@61
  unsigned int *v41; // r2@63
  signed int v42; // r1@65
  unsigned int *v43; // r2@67
  signed int v44; // r1@69
  unsigned int *v45; // r2@71
  signed int v46; // r1@73
  unsigned int *v47; // r2@75
  signed int v48; // r1@77
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  void *v51; // [sp+4h] [bp-BCh]@20
  int (*v52)(void); // [sp+Ch] [bp-B4h]@20
  int (__fastcall *v53)(ClientInstance *, int, int, int, ClientInstance *); // [sp+10h] [bp-B0h]@20
  void *v54; // [sp+14h] [bp-ACh]@17
  __int64 v55; // [sp+1Ch] [bp-A4h]@17
  int v56; // [sp+28h] [bp-98h]@17
  void *v57; // [sp+2Ch] [bp-94h]@15
  void (*v58)(void); // [sp+34h] [bp-8Ch]@15
  int (__fastcall *v59)(float, int, ClientInstance *, int, int, int, ClientInstance *); // [sp+38h] [bp-88h]@15
  int v60; // [sp+40h] [bp-80h]@14
  int v61; // [sp+48h] [bp-78h]@13
  int v62; // [sp+50h] [bp-70h]@12
  int v63; // [sp+58h] [bp-68h]@11
  int v64; // [sp+60h] [bp-60h]@10
  int v65; // [sp+68h] [bp-58h]@9
  int v66; // [sp+70h] [bp-50h]@8
  int v67; // [sp+78h] [bp-48h]@7
  int v68; // [sp+80h] [bp-40h]@6
  int v69; // [sp+88h] [bp-38h]@5
  int v70; // [sp+90h] [bp-30h]@4
  int v71; // [sp+98h] [bp-28h]@3
  int v72; // [sp+A0h] [bp-20h]@2
  int v73; // [sp+A8h] [bp-18h]@1

  v2 = this;
  sub_119C884((void **)&v73, "button.jump");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v73, 81);
  v3 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v73 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  sub_119C884((void **)&v72, "button.change_flight_height");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v72, 84);
  v4 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v72 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884((void **)&v71, "button.sneak");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v71, 82);
  v5 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v71 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v70, "button.up");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v70, 85);
  v6 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v70 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v69, "button.down");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v69, 86);
  v7 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v69 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v68, "button.left");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v68, 87);
  v8 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v68 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v67, "button.right");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v67, 88);
  v9 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v67 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v66, "button.upleft");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v66, 89);
  v10 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v66 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v65, "button.upright");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v65, 90);
  v11 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v65 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v64, "button.ascend");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v64, 69);
  v12 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v64 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v63, "button.descend");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v63, 70);
  v13 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v63 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v62, "button.sprint");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v62, 83);
  v14 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v62 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v61, "button.fly_down_slow");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v61, 64);
  v15 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v61 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v60, "button.fly_up_slow");
  MoveInputHandler::_registerButtonStateTracking((int)v2, &v60, 65);
  v16 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v60 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v57 = operator new(1u);
  v58 = (void (*)(void))sub_E292FC;
  v59 = sub_E2923E;
  InputHandler::registerVectorHandler((int)v2, (int)&v57);
  if ( v58 )
    v58();
  sub_119C884((void **)&v56, "button.sneak_toggle");
  v17 = operator new(1u);
  LODWORD(v18) = sub_E29340;
  v54 = v17;
  HIDWORD(v18) = sub_E2932A;
  v55 = v18;
  InputHandler::registerButtonDownHandler((int)v2, (int **)&v56, (int)&v54, 0);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v19 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v56 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v51 = operator new(1u);
  v52 = (int (*)(void))sub_E29380;
  v53 = sub_E2936E;
  result = InputHandler::registerDirectionHandler((int)v2, 0, (int)&v51);
  if ( v52 )
    result = v52();
  return result;
}


signed int __fastcall MoveInputHandler::isMovingForward(MoveInputHandler *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#8] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall MoveInputHandler::_updateMoveVector(int result, __int64 a2)
{
  *(_QWORD *)(result + 92) = a2;
  return result;
}
