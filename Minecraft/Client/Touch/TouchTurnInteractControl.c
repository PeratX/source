

int __fastcall TouchTurnInteractControl::TouchTurnInteractControl(int result, float a2, float a3, __int16 a4, __int16 a5, int a6, int a7)
{
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r8@1
  int v11; // r1@1

  v7 = *(_DWORD *)LODWORD(a2);
  v8 = *(_DWORD *)(LODWORD(a2) + 4);
  v9 = *(_DWORD *)(LODWORD(a2) + 8);
  *(_DWORD *)(LODWORD(a2) + 8) = 0;
  v10 = result + 4;
  v11 = *(_DWORD *)(LODWORD(a2) + 12);
  *(_DWORD *)v10 = v7;
  *(_DWORD *)(v10 + 4) = v8;
  *(_DWORD *)(v10 + 8) = v9;
  *(_DWORD *)(result + 16) = v11;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  __asm
  {
    VLDR            S0, [SP,#0x1C+arg_4]
    VLDR            S2, [SP,#0x1C+arg_8]
  }
  *(_DWORD *)result = &off_26E8AD8;
  *(_WORD *)(result + 32) = LOWORD(a3);
  *(_WORD *)(result + 34) = a4;
  *(_WORD *)(result + 36) = a5;
    VSTR            S0, [R0,#0x28]
    VSTR            S2, [R0,#0x2C]
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = -1;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_BYTE *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  return result;
}


int __fastcall TouchTurnInteractControl::incrementMoveDelta(int result, InputEventQueue *a2, float _R2, float _R3, int a5)
{
  __int64 v10; // r2@1

  _R4 = result;
  __asm
  {
    VMOV            S16, R2
    VLDR            S2, [R4,#0x48]
    VMOV            S18, R3
    VLDR            S6, [R4,#0x4C]
  }
  v10 = 0LL;
    VSUB.F32        S2, S16, S2
    VLDR            S8, =-0.0
    VSUB.F32        S6, S18, S6
    VLDR            S10, =0.0
    VMOV.F32        S12, S8
    VLDR            S0, [R4,#0x28]
    VLDR            S4, [R4,#0x40]
    VLDR            S14, [SP,#0x28+arg_0]
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S6, #0.0
    VABS.F32        S1, S2
    VABS.F32        S5, S6
  if ( !(_NF ^ _VF) )
    __asm { VMOVGE.F32      S12, S10 }
    VABS.F32        S3, S12
    VSUB.F32        S2, S2, S12
    VMOV.F32        S12, S10
    VCMPE.F32       S3, S1
    __asm { VMOVGE.F32      S8, S10 }
    VABS.F32        S7, S8
    VSUB.F32        S6, S6, S8
    VMOV.F32        S8, S10
    VCVT.F32.S32    S14, S14
    VCMPE.F32       S7, S5
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S8, S2 }
    VMUL.F32        S2, S0, S14
    VMUL.F32        S0, S8, S0
    __asm { VMOVLT.F32      S12, S6 }
    VMUL.F32        S6, S0, S0
    VMUL.F32        S2, S2, S12
    VMUL.F32        S8, S2, S2
    VADD.F32        S6, S8, S6
    VLDR            S8, =200.0
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S10 }
    VADD.F32        S4, S6, S4
    VCMPE.F32       S0, #0.0
    VSTR            S4, [R4,#0x40]
  if ( !_ZF )
    LODWORD(v10) = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    HIDWORD(v10) = 1;
  if ( v10 )
    __asm
    {
      VLDR            S4, [R4,#0x14]
      VNEG.F32        S2, S2
      VLDR            S6, [R4,#0x18]
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VDIV.F32        S0, S0, S4
      VDIV.F32        S2, S2, S6
      VMOV            R2, S0
      VMOV            R3, S2
    }
    result = InputEventQueue::enqueueDirection((int)a2, 1, _R2, _R3, 2, -1, 0);
    VSTR            S16, [R4,#0x48]
    VSTR            S18, [R4,#0x4C]
  return result;
}


void __fastcall TouchTurnInteractControl::~TouchTurnInteractControl(TouchTurnInteractControl *this)
{
  TouchTurnInteractControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8A84;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  operator delete((void *)v1);
}


int __fastcall TouchTurnInteractControl::switchState(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  result = getTimeS();
  switch ( v3 )
  {
    case 0:
      *(_DWORD *)(v5 + 64) = 0;
      *(_DWORD *)(v5 + 52) = -1;
      InputEventQueue::enqueueButton(v4, *(_WORD *)(v5 + 32), 0, 0, 2, -1, 0);
      result = *(_BYTE *)(v5 + 68);
      if ( *(_BYTE *)(v5 + 68) )
      {
        result = InputEventQueue::enqueueButton(v4, *(_WORD *)(v5 + 36), 0, 0, 2, -1, 0);
        *(_BYTE *)(v5 + 68) = 0;
      }
      break;
    case 1:
      __asm { VMOV            D8, R0, R1; jumptable 01433FD2 case 1 }
      result = InputEventQueue::enqueueButton(v4, *(_WORD *)(v5 + 32), 1, 0, 2, -1, 0);
      __asm { VSTR            D8, [R5,#0x38] }
    case 3:
      result = InputEventQueue::enqueueButton(v4, *(_WORD *)(v5 + 36), 1, 0, 2, -1, 0);
      *(_BYTE *)(v5 + 68) = 1;
    case 4:
      result = InputEventQueue::enqueueButtonPressAndRelease(v4, *(_WORD *)(v5 + 34), 2, -1);
    default:
  }
  *(_DWORD *)(v5 + 48) = v3;
  return result;
}


signed int __fastcall TouchTurnInteractControl::isActive(TouchTurnInteractControl *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 13);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


signed int __fastcall TouchTurnInteractControl::getNewActivePointer(TouchTurnInteractControl *this, TouchPointResults *a2, float *a3, float *a4)
{
  TouchPointResults *v4; // r6@1
  float *v5; // r8@1
  float *v6; // r5@1
  __int64 v7; // r0@2
  int v8; // r4@3
  int v9; // r7@3
  signed int result; // r0@7
  int v11; // [sp+0h] [bp-28h]@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  if ( !*((_DWORD *)this + 3) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD))this + 4))(&v11, (char *)this + 4);
  v7 = *(_QWORD *)v4;
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
LABEL_7:
    result = -1;
  }
  else
    v8 = -HIDWORD(v7);
    v9 = v7 + 12;
    while ( *(_DWORD *)(v9 + 8) != 2
         || RectangleArea::isInside((RectangleArea *)&v11, *(float *)(v9 - 4), *(float *)v9) != 1 )
    {
      v9 += 24;
      if ( v9 + v8 == 12 )
        goto LABEL_7;
    }
    *(_DWORD *)(v9 + 8) = 0;
    *v6 = *(float *)(v9 - 4);
    *v5 = *(float *)v9;
    result = *(_DWORD *)(v9 - 12);
  return result;
}


int __fastcall TouchTurnInteractControl::tick(__int64 this, TouchPointResults *a2, int a3)
{
  __int64 *v5; // r10@1
  int v6; // r8@1
  __int64 v7; // r0@3
  int v8; // r7@4
  int v9; // r6@4
  __int64 v10; // r0@10
  int v11; // r7@11
  signed int v13; // r0@13
  __int64 v15; // r0@24
  int v16; // r6@25
  signed int v18; // r0@27
  bool v19; // zf@27
  __int64 v24; // r0@38
  int v25; // r7@39
  signed int v27; // r0@41
  bool v28; // zf@41
  signed int v30; // r2@53
  signed int v33; // r1@70
  signed int v34; // r2@70
  signed int v38; // r2@90
  signed int v41; // r0@87
  int v42; // r2@110
  char v44; // [sp+10h] [bp-50h]@3

  _R4 = this;
  _R9 = a3;
  LODWORD(this) = *(_DWORD *)(this + 48);
  v5 = (__int64 *)a2;
  v6 = HIDWORD(this);
  switch ( (_DWORD)this )
  {
    case 0:
      if ( !*(_DWORD *)(_R4 + 12) )
        goto LABEL_115;
      (*(void (__fastcall **)(char *, int))(_R4 + 16))(&v44, _R4 + 4);
      v7 = *v5;
      if ( (_DWORD)v7 == HIDWORD(v7) )
        goto LABEL_8;
      v8 = -HIDWORD(v7);
      v9 = v7 + 12;
      while ( *(_DWORD *)(v9 + 8) != 2
           || !RectangleArea::isInside((RectangleArea *)&v44, *(float *)(v9 - 4), *(float *)v9) )
      {
        v9 += 24;
        if ( v9 + v8 == 12 )
        {
LABEL_8:
          LODWORD(this) = -1;
          *(_DWORD *)(_R4 + 52) = -1;
          return this;
        }
      }
      *(_DWORD *)(v9 + 8) = 0;
      *(_DWORD *)(_R4 + 72) = *(_DWORD *)(v9 - 4);
      *(_DWORD *)(_R4 + 76) = *(_DWORD *)v9;
      LODWORD(this) = *(_DWORD *)(v9 - 12);
      *(_DWORD *)(_R4 + 52) = this;
      if ( (_DWORD)this != -1 )
        _R5 = getTimeS();
        LODWORD(this) = InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 32), 1, 0, 2, -1, 0);
        __asm
          VMOV            D0, R5, R6
          VSTR            D0, [R4,#0x38]
        *(_DWORD *)(_R4 + 64) = 0;
        *(_DWORD *)(_R4 + 48) = 1;
      return this;
    case 2:
      v10 = *v5;
      if ( (_DWORD)v10 == HIDWORD(v10) )
        goto LABEL_17;
      v11 = -HIDWORD(v10);
      _R5 = v10 + 12;
      while ( 1 )
        if ( *(_DWORD *)(_R5 - 12) == *(_DWORD *)(_R4 + 52) )
          v13 = RectangleArea::isInside((RectangleArea *)&v44, *(float *)(_R5 - 4), *(float *)_R5);
          _ZF = v13 == 1;
          if ( v13 == 1 )
            _ZF = *(_DWORD *)(_R5 + 8) == 2;
          if ( _ZF )
            break;
        _R5 += 24;
        if ( _R5 + v11 == 12 )
LABEL_17:
          getTimeS();
          *(_DWORD *)(_R4 + 64) = 0;
          InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 32), 0, 0, 2, -1, 0);
          LODWORD(this) = *(_BYTE *)(_R4 + 68);
          if ( *(_BYTE *)(_R4 + 68) )
          {
            LODWORD(this) = InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 36), 0, 0, 2, -1, 0);
            *(_BYTE *)(_R4 + 68) = 0;
          }
          *(_DWORD *)(_R4 + 48) = 0;
      __asm
        VLDR            S16, [R5,#-4]
        VMOV            S3, R9
        VLDR            S2, [R4,#0x48]
        VLDR            S18, [R5]
      v30 = 0;
        VSUB.F32        S2, S16, S2
        VLDR            S6, [R4,#0x4C]
        VLDR            S8, =-0.0
      this = 0LL;
        VSUB.F32        S6, S18, S6
        VLDR            S10, =0.0
        VMOV.F32        S12, S8
        VLDR            S0, [R4,#0x28]
        VLDR            S4, [R4,#0x40]
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
        VABS.F32        S14, S2
        VCMPE.F32       S6, #0.0
        VABS.F32        S5, S6
      if ( !(_NF ^ _VF) )
        __asm { VMOVGE.F32      S12, S10 }
        VABS.F32        S1, S12
        VSUB.F32        S2, S2, S12
        VMOV.F32        S12, S10
        VCMPE.F32       S1, S14
        __asm { VMOVGE.F32      S8, S10 }
        VABS.F32        S7, S8
        VSUB.F32        S6, S6, S8
        VMOV.F32        S8, S10
        VCVT.F32.S32    S3, S3
        VCMPE.F32       S7, S5
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S8, S2 }
        VMUL.F32        S2, S0, S3
        VMUL.F32        S0, S8, S0
        __asm { VMOVLT.F32      S12, S6 }
        VMUL.F32        S6, S0, S0
        VMUL.F32        S2, S2, S12
        VMUL.F32        S8, S2, S2
        VADD.F32        S6, S8, S6
        VLDR            S8, =200.0
        VSQRT.F32       S6, S6
        VCMPE.F32       S6, S8
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S6, S10 }
        VADD.F32        S4, S6, S4
        VCMPE.F32       S0, #0.0
        VSTR            S4, [R4,#0x40]
      if ( !_ZF )
        HIDWORD(this) = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        v30 = 1;
      if ( HIDWORD(this) | v30 )
          VLDR            S4, [R4,#0x14]
          VNEG.F32        S2, S2
          VLDR            S6, [R4,#0x18]
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S6, S6
          VDIV.F32        S0, S0, S4
          VDIV.F32        S2, S2, S6
          VMOV            R2, S0
          VMOV            R3, S2
        LODWORD(this) = InputEventQueue::enqueueDirection(v6, 1, _R2, _R3, 2, -1, 0);
        VSTR            S16, [R4,#0x48]
        VSTR            S18, [R4,#0x4C]
    case 4:
      getTimeS();
      *(_DWORD *)(_R4 + 64) = 0;
      *(_DWORD *)(_R4 + 52) = -1;
      InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 32), 0, 0, 2, -1, 0);
      LODWORD(this) = *(_BYTE *)(_R4 + 68);
      if ( *(_BYTE *)(_R4 + 68) )
        LODWORD(this) = InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 36), 0, 0, 2, -1, 0);
        *(_BYTE *)(_R4 + 68) = 0;
      *(_DWORD *)(_R4 + 48) = 0;
    case 1:
      (*(void (__fastcall **)(_DWORD, _DWORD))(_R4 + 16))(&v44, _R4 + 4);
      v15 = *v5;
      if ( (_DWORD)v15 == HIDWORD(v15) )
        goto LABEL_31;
      v16 = -HIDWORD(v15);
      _R7 = v15 + 12;
        if ( *(_DWORD *)(_R7 - 12) == *(_DWORD *)(_R4 + 52) )
          v18 = RectangleArea::isInside((RectangleArea *)&v44, *(float *)(_R7 - 4), *(float *)_R7);
          v19 = v18 == 1;
          if ( v18 == 1 )
            v19 = *(_DWORD *)(_R7 + 8) == 2;
          if ( v19 )
        _R7 += 24;
        if ( _R7 + v16 == 12 )
LABEL_31:
          __asm
            VLDR            S0, [R4,#0x14]
            VLDR            S16, [R4,#0x2C]
            VLDR            S18, [R4,#0x40]
            VCVT.F32.S32    S20, S0
          _R0 = getTimeS();
            VLDR            D0, [R4,#0x38]
            VMOV            D1, R0, R1
            VSUB.F64        D11, D1, D0
            VCVT.F32.F64    S0, D11
            VMOV.F32        S2, #0.25
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF) )
            goto LABEL_119;
            VDIV.F32        S2, S18, S20
            VMUL.F32        S2, S2, S16
            VLDR            S4, =0.05
            VCMPE.F32       S2, S4
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            VCMPE.F32       S0, #0.0
            InputEventQueue::enqueueButtonPressAndRelease(v6, *(_WORD *)(_R4 + 34), 2, -1);
            LODWORD(this) = 4;
            *(_DWORD *)(_R4 + 48) = 4;
          else
LABEL_119:
            *(_DWORD *)(_R4 + 64) = 0;
            *(_DWORD *)(_R4 + 52) = -1;
            InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 32), 0, 0, 2, -1, 0);
            LODWORD(this) = *(_BYTE *)(_R4 + 68);
            if ( *(_BYTE *)(_R4 + 68) )
            {
              LODWORD(this) = InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 36), 0, 0, 2, -1, 0);
              *(_BYTE *)(_R4 + 68) = 0;
            }
            *(_DWORD *)(_R4 + 48) = 0;
        VLDR            S16, [R7,#-4]
      v33 = 0;
      __asm { VLDR            S18, [R7] }
      v34 = 0;
        v33 = 1;
        v34 = 1;
      if ( v33 | v34 )
        InputEventQueue::enqueueDirection(v6, 1, _R2, _R3, 2, -1, 0);
        __asm { VLDR            S4, [R4,#0x40] }
        VLDR            S0, [R4,#0x14]
        VLDR            S2, [R4,#0x2C]
        VCVT.F32.S32    S0, S0
        VDIV.F32        S0, S4, S0
        VMUL.F32        S16, S0, S2
      _R0 = getTimeS();
        VLDR            S0, =0.05
        VCMPE.F32       S16, S0
          VMOV            D0, R0, R1
          VLDR            D1, [R4,#0x38]
          VSUB.F64        D0, D0, D1
          VCVT.F32.F64    S0, D0
          VLDR            S2, =0.4
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          goto LABEL_109;
        getTimeS();
        InputEventQueue::enqueueButton(v6, *(_WORD *)(_R4 + 36), 1, 0, 2, -1, 0);
        v41 = 3;
        *(_BYTE *)(_R4 + 68) = 1;
      else
        v41 = 2;
      *(_DWORD *)(_R4 + 48) = v41;
LABEL_109:
      this = *v5;
      if ( (_DWORD)this != HIDWORD(this) )
        v42 = *(_DWORD *)(_R4 + 52);
        do
          if ( *(_DWORD *)this == v42 )
            *(_BYTE *)(this + 16) = 1;
          LODWORD(this) = this + 24;
        while ( HIDWORD(this) != (_DWORD)this );
    case 3:
LABEL_115:
        sub_21E5F48();
      v24 = *v5;
      if ( (_DWORD)v24 == HIDWORD(v24) )
        goto LABEL_45;
      v25 = -HIDWORD(v24);
      _R5 = v24 + 12;
      break;
    default:
  }
  while ( 1 )
    if ( *(_DWORD *)(_R5 - 12) == *(_DWORD *)(_R4 + 52) )
    {
      v27 = RectangleArea::isInside((RectangleArea *)&v44, *(float *)(_R5 - 4), *(float *)_R5);
      v28 = v27 == 1;
      if ( v27 == 1 )
        v28 = *(_DWORD *)(_R5 + 8) == 2;
      if ( v28 )
        break;
    }
    _R5 += 24;
    if ( _R5 + v25 == 12 )
LABEL_45:
  __asm
    VLDR            S16, [R5,#-4]
    VMOV            S3, R9
    VLDR            S2, [R4,#0x48]
    VLDR            S18, [R5]
  v38 = 0;
    VSUB.F32        S2, S16, S2
    VLDR            S6, [R4,#0x4C]
    VLDR            S8, =-0.0
  this = 0LL;
    VSUB.F32        S6, S18, S6
    VLDR            S10, =0.0
    VMOV.F32        S12, S8
    VLDR            S0, [R4,#0x28]
    VLDR            S4, [R4,#0x40]
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VABS.F32        S14, S2
    VCMPE.F32       S6, #0.0
    VABS.F32        S5, S6
  if ( !(_NF ^ _VF) )
    __asm { VMOVGE.F32      S12, S10 }
    VABS.F32        S1, S12
    VSUB.F32        S2, S2, S12
    VMOV.F32        S12, S10
    VCMPE.F32       S1, S14
    __asm { VMOVGE.F32      S8, S10 }
    VABS.F32        S7, S8
    VSUB.F32        S6, S6, S8
    VMOV.F32        S8, S10
    VCVT.F32.S32    S3, S3
    VCMPE.F32       S7, S5
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S8, S2 }
    VMUL.F32        S2, S0, S3
    VMUL.F32        S0, S8, S0
    __asm { VMOVLT.F32      S12, S6 }
    VMUL.F32        S6, S0, S0
    VMUL.F32        S2, S2, S12
    VMUL.F32        S8, S2, S2
    VADD.F32        S6, S8, S6
    VLDR            S8, =200.0
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S10 }
    VADD.F32        S4, S6, S4
    VCMPE.F32       S0, #0.0
    VSTR            S4, [R4,#0x40]
  if ( !_ZF )
    HIDWORD(this) = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v38 = 1;
  if ( HIDWORD(this) | v38 )
    __asm
      VLDR            S4, [R4,#0x14]
      VNEG.F32        S2, S2
      VLDR            S6, [R4,#0x18]
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VDIV.F32        S0, S0, S4
      VDIV.F32        S2, S2, S6
      VMOV            R2, S0
      VMOV            R3, S2
    LODWORD(this) = InputEventQueue::enqueueDirection(v6, 1, _R2, _R3, 2, -1, 0);
    __asm { VLDR            S4, [R4,#0x40] }
    VSTR            S16, [R4,#0x48]
    VSTR            S18, [R4,#0x4C]
    VLDR            S0, [R4,#0x14]
    VLDR            S2, [R4,#0x2C]
    VCVT.F32.S32    S0, S0
    VDIV.F32        S0, S4, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.05
    VCMPE.F32       S0, S2
    getTimeS();
    LODWORD(this) = 2;
    *(_DWORD *)(_R4 + 48) = 2;
  return this;
}


signed int __fastcall TouchTurnInteractControl::updateActivePointer(TouchTurnInteractControl *this, TouchPointResults *a2, float *a3, float *a4)
{
  TouchTurnInteractControl *v4; // r6@1
  float *v5; // r8@1
  float *v6; // r9@1
  TouchPointResults *v7; // r7@1
  __int64 v8; // r4@2
  signed int v9; // r0@4
  bool v10; // zf@4
  signed int result; // r0@8
  char v12; // [sp+4h] [bp-2Ch]@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*((_DWORD *)this + 3) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD))this + 4))(&v12, (char *)this + 4);
  v8 = *(_QWORD *)v7;
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
LABEL_8:
    *((_DWORD *)v4 + 13) = -1;
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( *(_DWORD *)v8 == *((_DWORD *)v4 + 13) )
      {
        v9 = RectangleArea::isInside(
               (RectangleArea *)&v12,
               COERCE_FLOAT(*(_QWORD *)(v8 + 8)),
               COERCE_FLOAT(*(_QWORD *)(v8 + 8) >> 32));
        v10 = v9 == 1;
        if ( v9 == 1 )
          v10 = *(_DWORD *)(v8 + 20) == 2;
        if ( v10 )
          break;
      }
      LODWORD(v8) = v8 + 24;
      if ( HIDWORD(v8) == (_DWORD)v8 )
        goto LABEL_8;
    }
    *v6 = *(float *)(v8 + 8);
    *v5 = *(float *)(v8 + 12);
    result = 1;
  return result;
}


void __fastcall TouchTurnInteractControl::~TouchTurnInteractControl(TouchTurnInteractControl *this)
{
  TouchTurnInteractControl::~TouchTurnInteractControl(this);
}
