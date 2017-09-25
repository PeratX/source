

int __fastcall SliderComponent::setSliderDirection(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  return result;
}


int __fastcall SliderComponent::setBackgroundHoverControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 80);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 80) = v3;
  return result;
}


void __fastcall SliderComponent::_updateSliderFromDirection(int a1, int a2)
{
  int v2; // r2@1
  int v3; // r1@1
  int v4; // r1@5
  int v5; // r1@10

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 != 1 )
  {
    if ( v3 )
    {
      j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi((SliderComponent *)a1, 0);
      return;
    }
    if ( v2 != 3 )
      v4 = 0;
      if ( v2 == 4 )
        v4 = 1;
      j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi((SliderComponent *)a1, v4);
LABEL_9:
    j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi((SliderComponent *)a1, -1);
    return;
  }
  if ( v2 == 1 )
    goto LABEL_9;
  v5 = 0;
  if ( v2 == 2 )
    v5 = 1;
  j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi((SliderComponent *)a1, v5);
}


int __fastcall SliderComponent::_handlePointerMoveEvent(int a1, int a2, ScreenInputContext *a3, int a4)
{
  UIComponent *v4; // r5@1
  ScreenInputContext *v5; // r4@1
  int result; // r0@1
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v4 = (UIComponent *)a1;
  v7 = *(_DWORD *)a4;
  v5 = a3;
  v8 = *(_DWORD *)(a4 + 4);
  result = *(_BYTE *)(a1 + 22);
  if ( result )
  {
    SliderComponent::_updateSliderFromPosition(v4, (int)&v7, 0);
    result = SliderComponent::_sendSliderChangeEvent(v4, v5, 0);
  }
  return result;
}


int __fastcall SliderComponent::getSliderBoxControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 8);
  v2 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


int __fastcall SliderComponent::receive(SliderComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  ScreenInputContext *v12; // r8@1
  SliderComponent *v13; // r4@1
  int v14; // r1@4
  int result; // r0@5
  int v16; // [sp+0h] [bp-48h]@0
  int v17; // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  int v19; // [sp+10h] [bp-38h]@1
  int v20; // [sp+14h] [bp-34h]@1
  int v21; // [sp+18h] [bp-30h]@1
  int v22; // [sp+1Ch] [bp-2Ch]@1
  int v23; // [sp+20h] [bp-28h]@1
  int v24; // [sp+24h] [bp-24h]@13
  int v25; // [sp+28h] [bp-20h]@13

  v12 = (ScreenInputContext *)a3;
  v13 = this;
  v17 = a6;
  v18 = a7;
  v19 = a8;
  v20 = a9;
  v21 = a10;
  v22 = a11;
  v23 = a12;
  if ( a5 == 9 && !*((_BYTE *)this + 22) )
    SliderComponent::_finalizeSliderBox(this);
  if ( !UIComponent::isLocked(v13) )
  {
    result = 0;
    if ( a5 > 2 )
    {
      if ( a5 == 3 )
      {
        v24 = a6;
        v25 = a7;
        if ( *((_BYTE *)v13 + 22) )
        {
          SliderComponent::_updateSliderFromPosition(v13, (int)&v24, 0);
          SliderComponent::_sendSliderChangeEvent(v13, v12, 0);
        }
      }
      else
        if ( a5 != 14 )
          return result;
        SliderComponent::_handleControllerDirectionEvent((int)v13, v14, v12, &v17);
    }
    else
      if ( a5 == 1 )
        return SliderComponent::_handleButtonEvent(v13, v14, v12, (int)&v17);
      if ( a5 != 2 )
        return result;
      SliderComponent::_handleHoverEvent((int)v13, v14, (int)&v17, (int)&v17, v16, 2, v17, v18, v19);
  }
  return 0;
}


int __fastcall SliderComponent::setSmallIncreaseButton(int result, __int16 a2)
{
  *(_WORD *)(result + 20) = a2;
  return result;
}


void __fastcall SliderComponent::_moveSliderBox(int a1, int a2)
{
  SliderComponent::_moveSliderBox(a1, a2);
}


int __fastcall SliderComponent::setProgressControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 88);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 88) = v3;
  return result;
}


int __fastcall SliderComponent::_setCurrentStep(SliderComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  SliderComponent *v9; // r4@1
  int v10; // r2@1
  __int64 v11; // kr00_8@1
  int v12; // r1@5
  int v13; // r2@5
  int v14; // r3@5
  int result; // r0@5

  v9 = this;
  v10 = 0;
  v11 = *((_QWORD *)this + 4);
  if ( a2 > 0 )
    v10 = a2;
  if ( SHIDWORD(v11) <= a2 )
    v10 = HIDWORD(v11) - 1;
  *((_DWORD *)this + 8) = v10;
  SliderComponent::_updateSliderFromStepSize(this, 0);
  result = *((_DWORD *)v9 + 8);
  if ( (_DWORD)v11 != result )
    result = j_j_j__ZN15SliderComponent12_createStepsEv(v9, v12, v13, v14, a5, a6, a7, a8, a9);
  return result;
}


void __fastcall SliderComponent::setSliderValue(SliderComponent *this, float _R1, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  SliderComponent::setSliderValue(this, _R1, a3, a4, a5, a6, a7, a8, a9);
}


void __fastcall SliderComponent::_updateSliderFromPosition(UIComponent *a1, int a2, int a3)
{
  SliderComponent::_updateSliderFromPosition(a1, a2, a3);
}


void __fastcall SliderComponent::_updateSliderFromStepSize(SliderComponent *this, int _R1)
{
  UIControl *v7; // r0@6
  int v8; // r0@6
  __int64 v9; // kr00_8@7
  UIControl *v12; // r0@11
  int v13; // r0@11
  int v14; // r1@11
  int v15; // r2@11
  int v16; // r3@11
  int v17; // [sp+0h] [bp-18h]@11
  int v18; // [sp+4h] [bp-14h]@6
  int v19; // [sp+8h] [bp-10h]@12
  int v20; // [sp+Ch] [bp-Ch]@12
  int v21; // [sp+10h] [bp-8h]@12

  _R4 = this;
  if ( *((_BYTE *)this + 56) & 1 )
  {
    v9 = *((_QWORD *)this + 4);
    _R3 = HIDWORD(v9) - 1;
    __asm { VMOV            S0, R3 }
    _R2 = _R1 + v9;
    if ( _R1 + (signed int)v9 <= 0 )
      _R2 = 0;
    __asm { VCVT.F32.S32    S0, S0 }
    if ( !(_NF ^ _VF) )
      _R2 = HIDWORD(v9) - 1;
    __asm
    {
      VMOV            S2, R2
      VCVT.F32.S32    S2, S2
    }
    *((_DWORD *)this + 8) = _R2;
      VDIV.F32        S0, S2, S0
      VSTR            S0, [R4,#0x1C]
      VSTR            S2, [SP,#0x18+var_18]
    v12 = (UIControl *)UIComponent::getOwner(this);
    v13 = UIControl::getPropertyBag(v12);
    UIPropertyBag::set<float>(v13, 13, "#slider_value", (int)&v17);
    SliderComponent::_updateSliderBarProgress(_R4);
    if ( (_DWORD)v9 != *((_DWORD *)_R4 + 8) )
      SliderComponent::_createSteps(_R4, v14, v15, v16, v17, v18, v19, v20, v21);
  }
  else
      VMOV            S0, R1
      VLDR            S2, =0.01
      VCVT.F32.S32    S0, S0
    *((_DWORD *)this + 8) = 1;
      VLDR            S4, [R4,#0x28]
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R4,#0x1C]
      VMUL.F32        S0, S0, S4
      VMOV.F32        S4, #1.0
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S2, S4 }
      VSTR            S2, [R4,#0x1C]
      VSTR            S2, [SP,#0x18+var_14]
    v7 = (UIControl *)UIComponent::getOwner(this);
    v8 = UIControl::getPropertyBag(v7);
    UIPropertyBag::set<float>(v8, 13, "#slider_value", (int)&v18);
  j_j_j__ZN15SliderComponent18_finalizeSliderBoxEv(_R4);
}


void __fastcall SliderComponent::setSliderValue(SliderComponent *this, float _R1, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  SliderComponent *v9; // r4@1
  int v14; // r2@8
  __int64 v15; // kr00_8@8
  int v17; // r1@12
  int v18; // r2@12
  int v19; // r3@12

  v9 = this;
  if ( !*((_BYTE *)this + 22) )
  {
    __asm { VMOV            S0, R1 }
    if ( *((_BYTE *)this + 56) & 1 )
    {
      __asm { VCVTR.S32.F32   S0, S0 }
      v14 = 0;
      v15 = *((_QWORD *)this + 4);
      __asm { VMOV            R1, S0 }
      if ( _R1 > 0 )
        v14 = _R1;
      if ( SHIDWORD(v15) <= _R1 )
        v14 = HIDWORD(v15) - 1;
      *((_DWORD *)this + 8) = v14;
      SliderComponent::_updateSliderFromStepSize(this, 0);
      if ( (_DWORD)v15 != *((_DWORD *)v9 + 8) )
        j_j_j__ZN15SliderComponent12_createStepsEv(v9, v17, v18, v19, a5, a6, a7, a8, a9);
    }
    else
      __asm
      {
        VCMPE.F32       S0, #0.0
        VLDR            S2, =0.0
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S4, #1.0
        VCMPE.F32       S0, S4
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S2, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S2, S4 }
      __asm { VSTR            S2, [R4,#0x1C] }
      j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi(this, 0);
  }
}


int __fastcall SliderComponent::_updateSliderBarProgress(SliderComponent *this)
{
  int v7; // r0@4
  unsigned int *v8; // r0@5
  unsigned int v9; // r1@7
  int v10; // r0@10
  unsigned int *v11; // r2@11
  unsigned int v12; // r1@13
  int v13; // r0@18
  unsigned int *v14; // r0@19
  unsigned int v15; // r1@21
  int result; // r0@24
  unsigned int *v17; // r2@25
  unsigned int v18; // r1@27
  int v19; // [sp+0h] [bp-28h]@18
  int v20; // [sp+4h] [bp-24h]@18
  int v21; // [sp+8h] [bp-20h]@4
  int v22; // [sp+Ch] [bp-1Ch]@4

  _R5 = this;
  if ( *((_BYTE *)this + 56) & 1 )
  {
    __asm { VLDR            S0, [R5,#0x20] }
    _R0 = *((_DWORD *)this + 9) - 1;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S0, S2
    }
  }
  else
    __asm { VLDR            S0, [R5,#0x1C] }
  v21 = *((_DWORD *)_R5 + 21);
  v7 = *((_DWORD *)_R5 + 22);
  v22 = v7;
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    else
      ++*v8;
  __asm
    VMOV.F32        S2, #1.0
    VSUB.F32        S16, S2, S0
    VMOV.F32        S0, S16
  sub_C41EC8((int)&v21);
  v10 = v22;
  if ( v22 )
    v11 = (unsigned int *)(v22 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v19 = *((_DWORD *)_R5 + 23);
  v13 = *((_DWORD *)_R5 + 24);
  v20 = v13;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  __asm { VMOV.F32        S0, S16 }
  sub_C41EC8((int)&v19);
  result = v20;
  if ( v20 )
    v17 = (unsigned int *)(v20 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall SliderComponent::~SliderComponent(SliderComponent *this)
{
  SliderComponent::~SliderComponent(this);
}


void __fastcall SliderComponent::_updateSliderFromPosition(UIComponent *a1, int a2, int a3)
{
  UIControl *v3; // r11@0
  int v4; // r8@1
  int v7; // r0@1
  int v8; // r10@1
  UIControl *v9; // r6@1
  unsigned int v10; // r0@2
  unsigned int *v11; // r4@2
  unsigned int v12; // r1@5
  unsigned int v13; // r2@6
  float v21; // r1@10
  UIControl *v22; // r0@29
  int v23; // r0@29
  int v25; // r6@30
  UIControl *v29; // r0@30
  int v30; // r0@30
  int v31; // r1@30
  int v32; // r2@30
  int v33; // r3@30
  unsigned int v34; // r0@38
  unsigned int *v35; // r4@42
  unsigned int v36; // r0@44
  int v37; // [sp+0h] [bp-58h]@31
  int v38; // [sp+4h] [bp-54h]@31
  int v39; // [sp+8h] [bp-50h]@29
  int v40; // [sp+Ch] [bp-4Ch]@30
  int v41; // [sp+10h] [bp-48h]@31

  v4 = a3;
  _R7 = a2;
  _R5 = a1;
  v7 = UIComponent::getOwner(a1);
  v8 = *((_DWORD *)_R5 + 3);
  v9 = (UIControl *)v7;
  if ( !v8 )
    return;
  v10 = *(_DWORD *)(v8 + 4);
  v11 = (unsigned int *)(v8 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v10 )
        return;
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
        break;
      __clrex();
      v10 = v12;
    }
    v13 = __strex(v10 + 1, v11);
    v10 = v12;
  }
  while ( v13 );
  __dmb();
  _ZF = *v11 == 0;
  if ( *v11 )
    v3 = (UIControl *)*((_DWORD *)_R5 + 2);
    _ZF = v3 == 0;
  if ( _ZF )
LABEL_36:
    if ( &pthread_create )
      do
        v34 = __ldrex(v11);
      while ( __strex(v34 - 1, v11) );
    else
      v34 = (*v11)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      }
      else
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  _R9 = UIControl::getPosition(v9);
  _R6 = UIControl::getSize(v9);
  __asm
    VLDR            S16, [R9]
    VLDR            S20, [R9,#4]
    VLDR            S18, [R6]
    VLDR            S22, [R6,#4]
  _R0 = UIControl::getSize(v3);
  v21 = *((float *)_R5 + 6);
  __asm { VLDR            S0, =0.0 }
  if ( LODWORD(v21) == 1 )
    __asm
      VLDR            S6, [R9,#4]
      VADD.F32        S2, S22, S20
      VLDR            S14, [R7,#4]
      VMOV.F32        S10, #0.5
      VMOV.F32        S1, S6
      VLDR            S4, [R0,#4]
      VCMPE.F32       S14, S6
      VLDR            S8, [R6,#4]
      VMRS            APSR_nzcv, FPSCR
      VSUB.F32        S12, S4, S8
      VCMPE.F32       S14, S2
      VMUL.F32        S4, S4, S10
      VMUL.F32        S12, S12, S10
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S1, S14 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S1, S2 }
      VSUB.F32        S2, S12, S6
      VSUB.F32        S4, S1, S4
      VADD.F32        S16, S4, S2
      VDIV.F32        S2, S16, S8
      VADD.F32        S2, S2, S10
      VSTR            S2, [R5,#0x1C]
    goto LABEL_23;
  if ( v21 != 0.0 )
    __asm { VMOV.F32        S16, S0 }
LABEL_23:
    __asm { VMOV.F32        S18, S0 }
    goto LABEL_24;
    VLDR            S6, [R9]
    VADD.F32        S2, S18, S16
    VLDR            S14, [R7]
    VMOV.F32        S10, #0.5
    VMOV.F32        S1, S6
    VLDR            S4, [R0]
    VCMPE.F32       S14, S6
    VLDR            S8, [R6]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S16, S0
    VSUB.F32        S12, S4, S8
    VCMPE.F32       S14, S2
    VMUL.F32        S4, S4, S10
    VMUL.F32        S12, S12, S10
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S1, S14 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S1, S2 }
    VSUB.F32        S2, S12, S6
    VSUB.F32        S4, S1, S4
    VADD.F32        S18, S4, S2
    VDIV.F32        S2, S18, S8
    VADD.F32        S2, S2, S10
    VSTR            S2, [R5,#0x1C]
LABEL_24:
  if ( *((_BYTE *)_R5 + 56) & 1 )
    __asm { VMOV.F32        S4, #0.5 }
    _R0 = *((_DWORD *)_R5 + 9) - 1;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R5,#0x1C]
    v25 = *((_DWORD *)_R5 + 8);
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    _R0 = mce::Math::floor(_R0, v21);
    *((_DWORD *)_R5 + 8) = _R0;
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S2, S0, S2
      VSTR            S0, [SP,#0x58+var_4C]
    v29 = (UIControl *)UIComponent::getOwner(_R5);
    v30 = UIControl::getPropertyBag(v29);
    UIPropertyBag::set<float>(v30, 13, "#slider_value", (int)&v40);
    SliderComponent::_updateSliderBarProgress(_R5);
    if ( v25 != *((_DWORD *)_R5 + 8) )
      SliderComponent::_createSteps(_R5, v31, v32, v33, v37, v38, v39, v40, v41);
  else
    __asm { VMOV.F32        S4, #1.0 }
    *((_DWORD *)_R5 + 8) = 1;
      VLDR            S0, =0.0
      VCMPE.F32       S2, #0.0
      VCMPE.F32       S2, S4
      __asm { VMOVGT.F32      S0, S2 }
      __asm { VMOVGT.F32      S0, S4 }
      VSTR            S0, [R5,#0x1C]
      VSTR            S0, [SP,#0x58+var_50]
    v22 = (UIControl *)UIComponent::getOwner(_R5);
    v23 = UIControl::getPropertyBag(v22);
    UIPropertyBag::set<float>(v23, 13, "#slider_value", (int)&v39);
  if ( v4 == 1 )
    SliderComponent::_finalizeSliderBox(_R5);
      VSTR            S18, [SP,#0x58+var_58]
      VSTR            S16, [SP,#0x58+var_54]
    SliderComponent::_moveSliderBox((int)_R5, (int)&v37);
  if ( v8 )
    goto LABEL_36;
}


void __fastcall SliderComponent::_moveSliderBox(int a1, int a2)
{
  int v2; // r5@0
  int v3; // r4@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  char v10; // r0@10
  int v11; // r7@13
  int v12; // r0@14
  int v13; // r1@14
  LayoutComponent *v14; // r5@14
  char *v15; // r0@15
  signed int v17; // r9@16
  signed int v18; // r7@19
  LayoutVariable *v22; // r0@22
  LayoutVariable *v23; // r0@26
  unsigned int v24; // r0@40
  unsigned int *v25; // r5@44
  unsigned int v26; // r0@46
  void *v27; // [sp+0h] [bp-60h]@15
  void *v28; // [sp+4h] [bp-5Ch]@18
  void *ptr; // [sp+Ch] [bp-54h]@15
  void *v30; // [sp+10h] [bp-50h]@15

  v3 = *(_DWORD *)(a1 + 12);
  _R8 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
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
          _ZF = *v6 == 0;
          if ( *v6 )
          {
            v2 = *(_DWORD *)(a1 + 8);
            _ZF = v2 == 0;
          }
          if ( _ZF )
            goto LABEL_53;
          v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          if ( !(v10 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          v11 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,LayoutComponent>(void)::id[0]) != 1 )
          v12 = UIControl::_getComponentIndex((UIControl *)v2, v11);
          v13 = *(_DWORD *)(v2 + 108);
          v14 = *(LayoutComponent **)(v13 + 4 * v12);
          if ( !v14 )
          v15 = LayoutComponent::getOffset(*(LayoutComponent **)(v13 + 4 * v12));
          ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&v27, (const ui::LayoutOffset *)v15);
          _R0 = LayoutComponent::getOffsetDelta(v14);
          if ( ptr == v30 )
            v17 = 0;
          else
            v30 = ptr;
            v17 = 1;
          if ( v27 == v28 )
            v18 = 0;
            v28 = v27;
            v18 = 1;
          __asm
            VLDR            S20, [R8]
            VLDR            S16, [R8,#4]
            VLDR            S22, [R0]
            VLDR            S18, [R0,#4]
          LayoutComponent::setOffset(v14, (const ui::LayoutOffset *)&v27);
          LayoutComponent::setOffsetDelta(v14, _R8, 0);
          if ( v18 == 1 )
            v22 = (LayoutVariable *)LayoutComponent::getVariable(v14, 0);
            if ( v22 )
              LayoutVariable::initialize(v22);
            LayoutComponent::layout((int)v14, (int)&unk_262C147, 1, 0);
          if ( v17 == 1 )
            v23 = (LayoutVariable *)LayoutComponent::getVariable(v14, 1);
            if ( v23 )
              LayoutVariable::initialize(v23);
            LayoutComponent::layout((int)v14, (int)&unk_262C148, 1, 0);
            VCMPE.F32       S22, S20
            VMRS            APSR_nzcv, FPSCR
          if ( !_ZF )
            LayoutComponent::layout((int)v14, (int)&unk_262C149, 1, 0);
            VCMPE.F32       S18, S16
            LayoutComponent::layout((int)v14, (int)&unk_262C14A, 1, 0);
          if ( ptr )
            operator delete(ptr);
          if ( v27 )
            operator delete(v27);
          if ( v3 )
LABEL_53:
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v6);
              while ( __strex(v24 - 1, v6) );
            }
            else
              v24 = (*v6)--;
            if ( v24 == 1 )
              v25 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
              }
              else
                v26 = (*v25)--;
              if ( v26 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


int __fastcall SliderComponent::receive(int a1, int a2)
{
  int v2; // r5@0
  int v3; // r4@2
  unsigned int v4; // r1@3
  unsigned int *v5; // r7@3
  unsigned int v6; // r2@6
  unsigned int v7; // r3@7
  bool v8; // zf@8
  char v9; // r0@11
  int v10; // r6@14
  SliderBoxComponent *v11; // r0@15
  unsigned int v12; // r0@19
  unsigned int *v13; // r5@23
  unsigned int v14; // r0@25

  if ( a2 == 18 )
  {
    v3 = *(_DWORD *)(a1 + 12);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = (unsigned int *)(v3 + 4);
      while ( v4 )
      {
        __dmb();
        v6 = __ldrex(v5);
        if ( v6 == v4 )
        {
          v7 = __strex(v4 + 1, v5);
          v4 = v6;
          if ( !v7 )
          {
            __dmb();
            v8 = *v5 == 0;
            if ( *v5 )
            {
              v2 = *(_DWORD *)(a1 + 8);
              v8 = v2 == 0;
            }
            if ( !v8 )
              v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id[0];
              __dmb();
              if ( !(v9 & 1)
                && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id) )
              {
                type_id<UIComponent,SliderBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id);
              }
              v10 = type_id<UIComponent,SliderBoxComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,SliderBoxComponent>(void)::id[0]) == 1 )
                v11 = *(SliderBoxComponent **)(*(_DWORD *)(v2 + 108)
                                             + 4 * UIControl::_getComponentIndex((UIControl *)v2, v10));
                if ( v11 )
                  SliderBoxComponent::updateControlVisibility(v11);
            if ( &pthread_create )
              do
                v12 = __ldrex(v5);
              while ( __strex(v12 - 1, v5) );
            else
              v12 = (*v5)--;
            if ( v12 == 1 )
              v13 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
                __dmb();
                do
                  v14 = __ldrex(v13);
                while ( __strex(v14 - 1, v13) );
              else
                v14 = (*v13)--;
              if ( v14 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
            return 0;
          }
        }
        else
          __clrex();
      }
    }
  }
  return 0;
}


int __fastcall SliderComponent::findGroupIndex(SliderComponent *this)
{
  const void **v1; // r4@1
  int result; // r0@2
  int v3; // r0@3

  v1 = (const void **)((char *)this + 60);
  if ( *(_DWORD *)(*((_DWORD *)this + 15) - 12) )
  {
    v3 = UIComponent::getOwner(this);
    result = j_j_j__ZNK9UIControl19findCollectionIndexERKSs(v3, v1);
  }
  else
    result = 0;
  return result;
}


int __fastcall SliderComponent::setDefaultControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 104);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 104) = v3;
  return result;
}


int __fastcall SliderComponent::_setTrackActive(int result, bool a2)
{
  *(_BYTE *)(result + 22) = a2;
  return result;
}


unsigned int __fastcall SliderComponent::_handleHoverEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r8@0
  int v10; // r4@1
  int v11; // r1@1
  unsigned int result; // r0@1
  int v14; // r1@2
  int v15; // r2@2
  int v16; // r3@2
  int v20; // r5@2
  int v21; // r0@3
  unsigned int *v22; // r6@3
  char v24; // r0@11
  int v25; // r7@14
  SliderBoxComponent *v26; // r7@15
  unsigned int v27; // r0@19
  unsigned int *v28; // r6@23
  unsigned int v29; // r0@25
  int v30; // r5@30
  int v31; // r0@31
  unsigned int *v32; // r6@31
  UIControl *v33; // r0@36
  bool v34; // zf@36
  unsigned int v35; // r0@42
  unsigned int *v36; // r6@46
  unsigned int v37; // r0@48
  int v38; // r5@53
  int v39; // r0@54
  unsigned int *v40; // r6@54
  UIControl *v41; // r0@59
  bool v42; // zf@59
  int v43; // r1@62
  unsigned int v44; // r0@67
  unsigned int *v45; // r6@71
  unsigned int v46; // r0@73

  v10 = a1;
  v11 = *(_BYTE *)(a3 + 4);
  result = *(_BYTE *)(a1 + 56);
  if ( ((result >> 1) & 1) != v11 )
  {
    *(_BYTE *)(v10 + 56) = result & 0xFD | 2 * v11;
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VSTR            D0, [R4,#0x30]
    }
    *(_BYTE *)(v10 + 64) = 0;
    v20 = *(_DWORD *)(v10 + 12);
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 4);
      v22 = (unsigned int *)(v20 + 4);
      while ( v21 )
      {
        __dmb();
        v14 = __ldrex(v22);
        if ( v14 == v21 )
        {
          v15 = __strex(v21 + 1, v22);
          v21 = v14;
          if ( !v15 )
          {
            __dmb();
            _ZF = *v22 == 0;
            if ( *v22 )
            {
              v9 = *(_DWORD *)(v10 + 8);
              _ZF = v9 == 0;
            }
            if ( !_ZF )
              v24 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id[0];
              __dmb();
              if ( !(v24 & 1)
                && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id) )
              {
                type_id<UIComponent,SliderBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id);
              }
              v25 = type_id<UIComponent,SliderBoxComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v9, type_id<UIComponent,SliderBoxComponent>(void)::id[0]) == 1 )
                v26 = *(SliderBoxComponent **)(*(_DWORD *)(v9 + 108)
                                             + 4 * UIControl::_getComponentIndex((UIControl *)v9, v25));
                if ( v26 )
                {
                  SliderBoxComponent::setHover(v26, (unsigned __int8)(*(_BYTE *)(v10 + 56) & 2) >> 1);
                  SliderBoxComponent::updateControlVisibility(v26);
                }
            if ( &pthread_create )
              do
                v27 = __ldrex(v22);
                v14 = v27 - 1;
                v15 = __strex(v27 - 1, v22);
              while ( v15 );
            else
              v27 = *v22;
              v14 = *v22 - 1;
              *v22 = v14;
            if ( v27 == 1 )
              v28 = (unsigned int *)(v20 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
              if ( &pthread_create )
                __dmb();
                do
                  v29 = __ldrex(v28);
                  v14 = v29 - 1;
                  v15 = __strex(v29 - 1, v28);
                while ( v15 );
              else
                v29 = *v28;
                v14 = *v28 - 1;
                *v28 = v14;
              if ( v29 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
            break;
          }
        }
        else
          __clrex();
      }
    v30 = *(_DWORD *)(v10 + 112);
    if ( v30 )
      v31 = *(_DWORD *)(v30 + 4);
      v32 = (unsigned int *)(v30 + 4);
      while ( v31 )
        v14 = __ldrex(v32);
        if ( v14 == v31 )
          v15 = __strex(v31 + 1, v32);
          v31 = v14;
            v33 = (UIControl *)*v32;
            v34 = *v32 == 0;
            if ( *v32 )
              v33 = *(UIControl **)(v10 + 108);
              v34 = v33 == 0;
            if ( !v34 )
              UIControl::setVisible(v33, (*(_BYTE *)(v10 + 56) & 2u) >> 1, 1, 1);
                v35 = __ldrex(v32);
                v14 = v35 - 1;
                v15 = __strex(v35 - 1, v32);
              v35 = *v32;
              v14 = *v32 - 1;
              *v32 = v14;
            if ( v35 == 1 )
              v36 = (unsigned int *)(v30 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
                  v37 = __ldrex(v36);
                  v14 = v37 - 1;
                  v15 = __strex(v37 - 1, v36);
                v37 = *v36;
                v14 = *v36 - 1;
                *v36 = v14;
              if ( v37 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    v38 = *(_DWORD *)(v10 + 104);
    if ( v38 )
      v39 = *(_DWORD *)(v38 + 4);
      v40 = (unsigned int *)(v38 + 4);
      while ( v39 )
        v14 = __ldrex(v40);
        if ( v14 == v39 )
          v15 = __strex(v39 + 1, v40);
          v39 = v14;
            v41 = (UIControl *)*v40;
            v42 = *v40 == 0;
            if ( *v40 )
              v41 = *(UIControl **)(v10 + 100);
              v42 = v41 == 0;
            if ( !v42 )
              v43 = 0;
              if ( !(*(_BYTE *)(v10 + 56) & 2) )
                v43 = 1;
              UIControl::setVisible(v41, v43, 1, 1);
                v44 = __ldrex(v40);
                v14 = v44 - 1;
                v15 = __strex(v44 - 1, v40);
              v44 = *v40;
              v14 = *v40 - 1;
              *v40 = v14;
            if ( v44 == 1 )
              v45 = (unsigned int *)(v38 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
                  v46 = __ldrex(v45);
                  v14 = v46 - 1;
                  v15 = __strex(v46 - 1, v45);
                v46 = *v45;
                v14 = *v45 - 1;
                *v45 = v14;
              if ( v46 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
    result = j_j_j__ZN15SliderComponent12_createStepsEv((SliderComponent *)v10, v14, v15, v16, a5, a6, a7, a8, a9);
  }
  return result;
}


void __fastcall SliderComponent::setNumberSteps(SliderComponent *this, int a2)
{
  bool v2; // zf@2
  bool v3; // nf@2
  unsigned __int8 v4; // vf@2
  char v5; // r1@2

  if ( *((_DWORD *)this + 9) != a2 )
  {
    *((_DWORD *)this + 9) = a2;
    v4 = __OFSUB__(a2, 1);
    v2 = a2 == 1;
    v3 = a2 - 1 < 0;
    v5 = 0;
    if ( !((unsigned __int8)(v3 ^ v4) | v2) )
      v5 = 1;
    *((_BYTE *)this + 56) = v5 | *((_BYTE *)this + 56) & 0xFE;
    j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi(this, 0);
  }
}


int __fastcall SliderComponent::_setSliderValue(SliderComponent *this, float a2)
{
  SliderComponent *v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r0@1
  float v6; // [sp+4h] [bp-Ch]@1

  v2 = this;
  v6 = a2;
  v3 = (UIControl *)UIComponent::getOwner(this);
  v4 = UIControl::getPropertyBag(v3);
  UIPropertyBag::set<float>(v4, 13, "#slider_value", (int)&v6);
  return j_j_j__ZN15SliderComponent24_updateSliderBarProgressEv(v2);
}


void __fastcall SliderComponent::setSliderBoxControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v6 = *(_DWORD *)(v2 + 12);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *(_DWORD *)(v2 + 12) = v3;
  if ( !*(_BYTE *)(v2 + 22) )
    j_j_j__ZN15SliderComponent18_finalizeSliderBoxEv((SliderComponent *)v2);
}


char *__fastcall SliderComponent::getSliderGroup(SliderComponent *this)
{
  return (char *)this + 58;
}


UIComponent *__fastcall SliderComponent::SliderComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6D98;
  *((_BYTE *)v2 + 22) = 0;
  *((_WORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 6) = 2;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 1;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  *((_DWORD *)v2 + 13) = 0;
  *((_BYTE *)v2 + 56) &= 0xFCu;
  *((_WORD *)v2 + 29) = -1;
  sub_DA7364((void **)v2 + 15, (const char *)&unk_262C143);
  *((_BYTE *)v2 + 64) = 0;
  _aeabi_memclr4((char *)v2 + 68, 48);
  return v2;
}


int __fastcall SliderComponent::setProgressHoverControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 92) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 96);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 96) = v3;
  return result;
}


int __fastcall SliderComponent::setSmallDecreaseButton(int result, __int16 a2)
{
  *(_WORD *)(result + 18) = a2;
  return result;
}


void __fastcall SliderComponent::_updateSliderFromStepSize(SliderComponent *this, int _R1)
{
  SliderComponent::_updateSliderFromStepSize(this, _R1);
}


int __fastcall SliderComponent::_sendSliderChangeEvent(SliderComponent *this, ScreenInputContext *a2, bool a3)
{
  bool v4; // r6@1
  ScreenInputContext *v5; // r4@1
  int v6; // r0@2
  int v7; // r0@2
  UIControl *v12; // r0@7
  int v14; // [sp+4h] [bp-34h]@1
  __int16 v15; // [sp+8h] [bp-30h]@1
  int v16; // [sp+Ch] [bp-2Ch]@4
  bool v17; // [sp+14h] [bp-24h]@7
  int v18; // [sp+18h] [bp-20h]@7

  _R5 = this;
  v4 = a3;
  v5 = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v14);
  v14 = 16;
  v15 = *((_WORD *)_R5 + 29);
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 15) - 12) )
  {
    v6 = UIComponent::getOwner(_R5);
    v7 = UIControl::findCollectionIndex(v6, (const void **)_R5 + 15);
  }
  else
    v7 = 0;
  v16 = v7;
  if ( *((_BYTE *)_R5 + 56) & 1 )
    __asm
    {
      VLDRNE          S0, [R5,#0x20]
      VCVTNE.F32.S32  S0, S0
    }
    __asm { VLDREQ          S0, [R5,#0x1C] }
  __asm { VSTR            S0, [SP,#0x38+var_28] }
  v17 = v4;
  v12 = (UIControl *)UIComponent::getOwner(_R5);
  v18 = UIControl::getPropertyBag(v12);
  return ScreenInputContext::enqueueEvent(__PAIR__(&v14, (unsigned int)v5));
}


int __fastcall SliderComponent::_handleControllerDirectionEvent(int a1, int a2, ScreenInputContext *a3, int *_R3)
{
  ScreenInputContext *v7; // r7@1
  int v8; // r5@1
  int v9; // r6@1
  char v11; // r2@4
  signed int v13; // r3@13
  int result; // r0@13
  char v15; // t1@14
  signed int v16; // r1@18
  int v18; // r0@25
  int v19; // r1@28

  __asm { VLDR            S20, [R3,#4] }
  v7 = a3;
  __asm { VLDR            S16, [R3,#8] }
  v8 = a1;
  __asm { VABS.F32        S22, S20 }
  v9 = *_R3;
  __asm { VABS.F32        S18, S16 }
  _R0 = getTimeS();
  __asm
  {
    VLDR            S0, =1.1921e-7
    VCMPE.F32       S22, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VCMPE.F32       S18, S22 }
    v11 = 0;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    {
      __asm
      {
        VCMPEGT.F32     S18, S0
        VMRSGT          APSR_nzcv, FPSCR
        VCMPE.F32       S16, #0.0
      }
      v11 = 2;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v11 = 1;
    }
  else
    __asm
      VCMPEGT.F32     S22, S18
      VMRSGT          APSR_nzcv, FPSCR
      VCMPE.F32       S20, #0.0
    v11 = 3;
      v11 = 4;
  __asm { VMOV            D8, R0, R1 }
  if ( *(_BYTE *)(v8 + 56) & 1 )
    v15 = *(_BYTE *)(v8 + 64);
    _R1 = (char *)(v8 + 64);
    result = 0;
      VLDR            S0, [R1,#-0x14]
      VLDR            D1, [R1,#-0x10]
    v13 = 0;
    __asm { VCVT.F64.F32    D0, S0 }
    if ( !_ZF )
      v13 = 1;
      VADD.F64        D0, D0, D1
      VCMPE.F64       D0, D8
      VMRS            APSR_nzcv, FPSCR
      result = 1;
    v13 = 1;
  *_R1 = v11;
  v16 = 0;
  if ( !v9 )
    v16 = 1;
  if ( v11 )
    _ZF = v13 == 1;
    if ( v13 == 1 )
      result = (result ^ 1) & v16;
      _ZF = result == 1;
    if ( _ZF )
      v18 = *(_DWORD *)(v8 + 24);
      if ( v18 == 1 )
        if ( v11 == 1 )
        {
          v19 = -1;
        }
        else
          v19 = 0;
          if ( v11 == 2 )
            v19 = 1;
      else if ( v18 )
        v19 = 0;
      else if ( v11 == 3 )
        v19 = -1;
      else
        if ( v11 == 4 )
          v19 = 1;
      SliderComponent::_updateSliderFromStepSize((SliderComponent *)v8, v19);
      __asm { VSTR            D8, [R5,#0x30] }
      result = j_j_j__ZN15SliderComponent22_sendSliderChangeEventER18ScreenInputContextb((SliderComponent *)v8, v7, 1);
  return result;
}


void __fastcall SliderComponent::setSliderBoxControl(int a1, int a2)
{
  SliderComponent::setSliderBoxControl(a1, a2);
}


int __fastcall SliderComponent::reset(int result)
{
  *(_BYTE *)(result + 22) = 0;
  *(_BYTE *)(result + 56) &= 0xFDu;
  *(_BYTE *)(result + 64) = 0;
  return result;
}


int __fastcall SliderComponent::setSliderNameId(int result, __int16 a2)
{
  *(_WORD *)(result + 58) = a2;
  return result;
}


SliderComponent *__fastcall SliderComponent::~SliderComponent(SliderComponent *this)
{
  SliderComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r0@9
  unsigned int *v6; // r2@10
  unsigned int v7; // r1@12
  int v8; // r0@17
  unsigned int *v9; // r2@18
  unsigned int v10; // r1@20
  int v11; // r0@25
  unsigned int *v12; // r2@26
  unsigned int v13; // r1@28
  int v14; // r0@33
  unsigned int *v15; // r2@34
  unsigned int v16; // r1@36
  int v17; // r0@41
  unsigned int *v18; // r2@42
  unsigned int v19; // r1@44
  int v20; // r1@49
  void *v21; // r0@49
  int v22; // r0@50
  unsigned int *v23; // r2@51
  unsigned int v24; // r1@53
  unsigned int *v26; // r2@59
  signed int v27; // r1@61

  v1 = this;
  *(_DWORD *)this = &off_26D6D98;
  v2 = *((_DWORD *)this + 28);
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
  v5 = *((_DWORD *)v1 + 26);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = *((_DWORD *)v1 + 24);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = *((_DWORD *)v1 + 22);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  v14 = *((_DWORD *)v1 + 20);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  v17 = *((_DWORD *)v1 + 18);
  if ( v17 )
    v18 = (unsigned int *)(v17 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  v20 = *((_DWORD *)v1 + 15);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v20 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 3);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  UIComponent::~UIComponent(v1);
  return v1;
}


void __fastcall SliderComponent::~SliderComponent(SliderComponent *this)
{
  SliderComponent *v1; // r0@1

  v1 = SliderComponent::~SliderComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall SliderComponent::_setPercentage(SliderComponent *this, float _R1)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV.F32        S4, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R0,#0x1C] }
  j_j_j__ZN15SliderComponent25_updateSliderFromStepSizeEi(this, 0);
}


int __fastcall SliderComponent::_createSteps(SliderComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  SliderComponent *v9; // r7@1
  int result; // r0@1
  int v11; // r5@2
  char v12; // r0@2
  int v13; // r6@5
  int v14; // r0@6
  int v15; // r4@6
  UIControl *v16; // r0@7
  FactoryComponent *v22; // r4@8
  void **v23; // r6@8
  void **v24; // r11@8
  int v26; // r5@8
  unsigned int *v27; // r2@10
  signed int v28; // r1@12
  unsigned int *v29; // r2@14
  int v30; // r12@15
  FactoryComponent *v31; // r5@15
  void **v32; // r4@15
  signed int v33; // r1@16
  signed int v34; // r1@21
  signed int v36; // r0@28
  void *v37; // r0@30
  unsigned int *v38; // r2@31
  void *v39; // r0@36
  void *v40; // r0@41
  int v41; // r0@45
  unsigned int *v42; // r2@46
  unsigned int v43; // r1@48
  UIPropertyBag *v44; // [sp+18h] [bp-A0h]@6
  char *v45; // [sp+1Ch] [bp-9Ch]@7
  char v46; // [sp+20h] [bp-98h]@8
  int v47; // [sp+24h] [bp-94h]@45
  int v48; // [sp+2Ch] [bp-8Ch]@10
  int v49; // [sp+34h] [bp-84h]@30
  int v50; // [sp+3Ch] [bp-7Ch]@8
  int v51; // [sp+44h] [bp-74h]@8
  float v52; // [sp+48h] [bp-70h]@28
  int v53; // [sp+4Ch] [bp-6Ch]@28
  char v54; // [sp+50h] [bp-68h]@28

  v9 = this;
  result = *((_BYTE *)this + 56);
  if ( result & 1 )
  {
    v11 = UIComponent::getOwner(v9);
    v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
    __dmb();
    if ( !(v12 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
    {
      type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
    }
    v13 = type_id<UIComponent,FactoryComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v11, type_id<UIComponent,FactoryComponent>(void)::id[0]) )
      v14 = UIControl::_getComponentIndex((UIControl *)v11, v13);
      v15 = *(_DWORD *)(*(_DWORD *)(v11 + 108) + 4 * v14);
      v44 = *(UIPropertyBag **)(*(_DWORD *)(v11 + 108) + 4 * v14);
      result = FactoryComponent::destroyAll(*(FactoryComponent **)(*(_DWORD *)(v11 + 108) + 4 * v14));
      if ( v15 )
      {
        v16 = (UIControl *)UIComponent::getOwner(v9);
        v45 = UIControl::getSize(v16);
        result = *((_DWORD *)v9 + 9) - 1;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
        }
        if ( !(_NF ^ _VF) )
          _R0 = v45;
          __asm { VMOV.F32        S18, #-0.5 }
          v22 = (FactoryComponent *)&v46;
          v23 = (void **)&v51;
          __asm { VLDR            S2, [R0] }
          v24 = (void **)&v50;
          __asm { VDIV.F32        S16, S2, S0 }
          _R8 = 1;
          v26 = 0;
          do
          {
            UIPropertyBag::UIPropertyBag((int)&v54);
            __asm
            {
              VMOV            S0, R8
              VCVT.F32.S32    S0, S0
            }
            _R0 = v45;
              VLDR            S2, [R0]
              VMUL.F32        S2, S2, S18
              VMUL.F32        S0, S0, S16
              VADD.F32        S0, S0, S2
              VSTR            S0, [SP,#0xB8+var_70]
            v53 = v26;
            UIPropertyBag::set((int)&v54, 12, "$step_offset", (int)&v52);
            v36 = *((_DWORD *)v9 + 8);
            if ( *((_BYTE *)v9 + 56) & 2 )
              if ( _R8 <= v36 )
              {
                sub_DA73F4(v24, unk_27C6C90, dword_27C6C8C);
                UIPropertyBag::set<std::string>((int)&v54, 10, "control_id", (const void **)v24);
                v39 = (void *)(v50 - 12);
                if ( (int *)(v50 - 12) != &dword_28898C0 )
                {
                  v29 = (unsigned int *)(v50 - 4);
                  if ( a9 )
                  {
                    v30 = v26;
                    v31 = v22;
                    v32 = v23;
                    __dmb();
                    do
                      v33 = __ldrex(v29);
                    while ( __strex(v33 - 1, v29) );
LABEL_17:
                    v23 = v32;
                    v22 = v31;
                    v26 = v30;
LABEL_19:
                    if ( v33 <= 0 )
                      j_j_j_j_j__ZdlPv_9(v39);
                    goto LABEL_45;
                  }
LABEL_18:
                  v33 = (*v29)--;
                  goto LABEL_19;
                }
              }
              else
                sub_DA73F4(v23, unk_27C6CA0, dword_27C6C9C);
                UIPropertyBag::set<std::string>((int)&v54, 10, "control_id", (const void **)v23);
                v39 = (void *)(v51 - 12);
                if ( (int *)(v51 - 12) != &dword_28898C0 )
                  v29 = (unsigned int *)(v51 - 4);
                  if ( &pthread_create )
                    goto LABEL_17;
                  goto LABEL_18;
            else
                sub_DA73F4((void **)&v48, unk_27C6C88, dword_27C6C84);
                UIPropertyBag::set<std::string>((int)&v54, 10, "control_id", (const void **)&v48);
                v40 = (void *)(v48 - 12);
                if ( (int *)(v48 - 12) != &dword_28898C0 )
                  v27 = (unsigned int *)(v48 - 4);
                      v28 = __ldrex(v27);
                    while ( __strex(v28 - 1, v27) );
                  else
                    v28 = (*v27)--;
                  if ( v28 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v40);
                v22 = (FactoryComponent *)&v46;
                sub_DA73F4((void **)&v49, unk_27C6C98, dword_27C6C94);
                UIPropertyBag::set<std::string>((int)&v54, 10, "control_id", (const void **)&v49);
                v37 = (void *)(v49 - 12);
                if ( (int *)(v49 - 12) != &dword_28898C0 )
                  v38 = (unsigned int *)(v49 - 4);
                      v34 = __ldrex(v38);
                    while ( __strex(v34 - 1, v38) );
                    v34 = (*v38)--;
                  if ( v34 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v37);
              v24 = (void **)&v50;
LABEL_45:
            FactoryComponent::create(v22, v44, (int)&v54);
            v41 = v47;
            if ( v47 )
              v42 = (unsigned int *)(v47 + 8);
              if ( &pthread_create )
                __dmb();
                do
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v26 = 0;
                v43 = (*v42)--;
              if ( v43 == 1 )
                (*(void (**)(void))(*(_DWORD *)v41 + 12))();
            UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v54);
            ++_R8;
            result = *((_DWORD *)v9 + 9) - 1;
          }
          while ( _R8 < result );
      }
    else
      result = j_j_j__ZN16FactoryComponent10destroyAllEv(0);
  }
  return result;
}


int __fastcall SliderComponent::setSliderBoxTrackButton(int result, __int16 a2)
{
  *(_WORD *)(result + 16) = a2;
  return result;
}


int __fastcall SliderComponent::_handleButtonEvent(SliderComponent *this, int a2, ScreenInputContext *a3, int a4)
{
  SliderComponent *v4; // r4@1
  ScreenInputContext *v5; // r5@1
  int v6; // r2@1
  signed int v7; // r6@4
  unsigned int v8; // r0@5
  int v9; // r1@10
  unsigned int v10; // r0@10
  int v11; // r1@16
  bool v12; // zf@17
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1

  v4 = this;
  v14 = *(_DWORD *)(a4 + 12);
  v5 = a3;
  v15 = *(_DWORD *)(a4 + 16);
  v6 = *(_WORD *)a4;
  if ( v6 == *((_WORD *)this + 9) )
  {
    if ( *(_BYTE *)(a4 + 5) != 1 )
      return 0;
    if ( *(_BYTE *)(a4 + 4) )
    v11 = -1;
LABEL_23:
    SliderComponent::_updateSliderFromStepSize(this, v11);
    SliderComponent::_sendSliderChangeEvent(v4, v5, 1);
    return 0;
  }
  v8 = *((_DWORD *)this + 5);
  if ( v6 == (unsigned __int16)v8 )
    this = v4;
    v11 = 1;
    goto LABEL_23;
  v9 = *(_BYTE *)(a4 + 5);
  v10 = v8 >> 16;
  if ( v6 == *((_WORD *)v4 + 8) )
    if ( v9 == *(_BYTE *)(a4 + 4) )
    {
      v7 = 0;
    }
    else
      v12 = v9 == 1;
      if ( v9 == 1 )
        v12 = (unsigned __int8)v10 == 0;
      if ( v12 )
      {
        *((_BYTE *)v4 + 22) = 1;
        v7 = 0;
        SliderComponent::_updateSliderFromPosition(v4, (int)&v14, 0);
        SliderComponent::_sendSliderChangeEvent(v4, v5, 0);
      }
      else
        if ( !*(_BYTE *)(a4 + 5) && (_BYTE)v10 )
        {
          *((_BYTE *)v4 + 22) = 0;
          v7 = 1;
          SliderComponent::_updateSliderFromPosition(v4, (int)&v14, 1);
          SliderComponent::_sendSliderChangeEvent(v4, v5, 1);
        }
  else if ( *(_BYTE *)(a4 + 5) )
    v7 = 0;
  else
    if ( (_BYTE)v10 )
      v7 = 1;
      SliderComponent::_updateSliderFromPosition(v4, (int)&v14, 1);
      SliderComponent::_sendSliderChangeEvent(v4, v5, 1);
    *((_BYTE *)v4 + 22) = 0;
  return v7;
}


int __fastcall SliderComponent::setHoverControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 112);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 112) = v3;
  return result;
}


void __fastcall SliderComponent::setNumberSteps(SliderComponent *this, int a2)
{
  SliderComponent::setNumberSteps(this, a2);
}


int __fastcall SliderComponent::clone(SliderComponent *this, UIControl *a2, UIControl *a3)
{
  SliderComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r7@1
  unsigned int *v11; // r0@2
  unsigned int v12; // r1@4
  int v13; // r0@7
  unsigned int *v14; // r2@8
  unsigned int v15; // r1@10
  int v16; // r7@15
  unsigned int *v17; // r0@16
  unsigned int v18; // r1@18
  int v19; // r0@21
  unsigned int *v20; // r2@22
  unsigned int v21; // r1@24
  int v22; // r7@29
  unsigned int *v23; // r0@30
  unsigned int v24; // r1@32
  int v25; // r0@35
  unsigned int *v26; // r2@36
  unsigned int v27; // r1@38
  int v28; // r7@43
  unsigned int *v29; // r0@44
  unsigned int v30; // r1@46
  int v31; // r0@49
  unsigned int *v32; // r2@50
  unsigned int v33; // r1@52
  int v34; // r7@57
  unsigned int *v35; // r0@58
  unsigned int v36; // r1@60
  int v37; // r0@63
  unsigned int *v38; // r2@64
  unsigned int v39; // r1@66
  int v40; // r6@71
  unsigned int *v41; // r0@72
  unsigned int v42; // r1@74
  int result; // r0@77
  unsigned int *v44; // r2@78
  unsigned int v45; // r1@80

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x78u);
  UIComponent::UIComponent((UIComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26D6D98;
  *((_BYTE *)v6 + 22) = 0;
  *((_WORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 6) = 2;
  *((_DWORD *)v6 + 7) = 0;
  *((_DWORD *)v6 + 8) = 0;
  *((_DWORD *)v6 + 9) = 1;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = 0;
  *((_DWORD *)v6 + 12) = 0;
  *((_DWORD *)v6 + 13) = 0;
  *((_BYTE *)v6 + 56) &= 0xFCu;
  *((_WORD *)v6 + 29) = -1;
  sub_DA7364((void **)v6 + 15, (const char *)&unk_262C143);
  *((_BYTE *)v6 + 64) = 0;
  _aeabi_memclr4((char *)v6 + 68, 48);
  v7 = *((_DWORD *)v5 + 4);
  *((_WORD *)v6 + 8) = v7;
  *((_WORD *)v6 + 9) = HIWORD(v7);
  *((_WORD *)v6 + 10) = *((_WORD *)v5 + 10);
  *((_DWORD *)v6 + 6) = *((_DWORD *)v5 + 6);
  *((_DWORD *)v6 + 9) = *((_DWORD *)v5 + 9);
  *((_DWORD *)v6 + 10) = *((_DWORD *)v5 + 10);
  v8 = *((_DWORD *)v5 + 11);
  *((_DWORD *)v6 + 11) = v8;
  v9 = *((_DWORD *)v5 + 14);
  *((_BYTE *)v6 + 56) = *((_BYTE *)v6 + 56) & 0xFC | v9 & 1;
  *((_WORD *)v6 + 29) = HIWORD(v9);
  EntityInteraction::setInteractText((int *)v6 + 15, (int *)v5 + 15);
  *((_DWORD *)v6 + 17) = *((_DWORD *)v5 + 17);
  v10 = *((_DWORD *)v5 + 18);
  if ( v10 )
  {
    v11 = (unsigned int *)(v10 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  }
  v13 = *((_DWORD *)v6 + 18);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  *((_DWORD *)v6 + 18) = v10;
  *((_DWORD *)v6 + 19) = *((_DWORD *)v5 + 19);
  v16 = *((_DWORD *)v5 + 20);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v19 = *((_DWORD *)v6 + 20);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  *((_DWORD *)v6 + 20) = v16;
  *((_DWORD *)v6 + 21) = *((_DWORD *)v5 + 21);
  v22 = *((_DWORD *)v5 + 22);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  v25 = *((_DWORD *)v6 + 22);
  if ( v25 )
    v26 = (unsigned int *)(v25 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  *((_DWORD *)v6 + 22) = v22;
  *((_DWORD *)v6 + 23) = *((_DWORD *)v5 + 23);
  v28 = *((_DWORD *)v5 + 24);
  if ( v28 )
    v29 = (unsigned int *)(v28 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
      ++*v29;
  v31 = *((_DWORD *)v6 + 24);
  if ( v31 )
    v32 = (unsigned int *)(v31 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  *((_DWORD *)v6 + 24) = v28;
  *((_DWORD *)v6 + 25) = *((_DWORD *)v5 + 25);
  v34 = *((_DWORD *)v5 + 26);
  if ( v34 )
    v35 = (unsigned int *)(v34 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 + 1, v35) );
      ++*v35;
  v37 = *((_DWORD *)v6 + 26);
  if ( v37 )
    v38 = (unsigned int *)(v37 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      (*(void (**)(void))(*(_DWORD *)v37 + 12))();
  *((_DWORD *)v6 + 26) = v34;
  *((_DWORD *)v6 + 27) = *((_DWORD *)v5 + 27);
  v40 = *((_DWORD *)v5 + 28);
  if ( v40 )
    v41 = (unsigned int *)(v40 + 8);
        v42 = __ldrex(v41);
      while ( __strex(v42 + 1, v41) );
      ++*v41;
  result = *((_DWORD *)v6 + 28);
  if ( result )
    v44 = (unsigned int *)(result + 8);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *((_DWORD *)v6 + 28) = v40;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall SliderComponent::_finalizeSliderBox(SliderComponent *this)
{
  SliderComponent::_finalizeSliderBox(this);
}


int __fastcall SliderComponent::setSliderTimeout(int result, float a2)
{
  *(float *)(result + 44) = a2;
  return result;
}


int __fastcall SliderComponent::setSliderSpeed(int result, float a2)
{
  *(float *)(result + 40) = a2;
  return result;
}


int __fastcall SliderComponent::getSliderValue(SliderComponent *this)
{
  int result; // r0@4

  if ( *((_BYTE *)this + 56) & 1 )
  {
    __asm
    {
      VLDRNE          S0, [R0,#0x20]
      VCVTNE.F32.S32  S0, S0
    }
  }
  else
    __asm { VLDREQ          S0, [R0,#0x1C] }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall SliderComponent::setBackgroundControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 72);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 72) = v3;
  return result;
}


void __fastcall SliderComponent::_finalizeSliderBox(SliderComponent *this)
{
  int v1; // r5@0
  SliderComponent *v2; // r6@1
  int v3; // r9@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r4@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  char v9; // r0@10
  int v10; // r7@13
  LayoutComponent *v11; // r5@14
  UIControl *v12; // r0@15
  char *v14; // r0@15
  int v15; // r0@15
  __int64 v16; // r0@17
  __int64 v17; // r2@18
  __int64 v18; // r0@19
  __int64 v19; // r2@20
  signed int v20; // r6@21
  signed int v21; // r7@21
  int v22; // r2@22
  unsigned int v23; // r6@22
  unsigned int v24; // r2@24
  unsigned int v25; // r10@24
  char *v26; // r8@30
  int v27; // r2@31
  unsigned int v28; // r6@31
  unsigned int v29; // r2@33
  unsigned int v30; // r10@33
  char *v31; // r8@39
  __int64 v32; // kr00_8@41
  char *v33; // r12@42
  char *v34; // r2@42
  int v35; // r3@43
  int v36; // r6@43
  int v37; // r7@43
  __int64 v38; // kr08_8@46
  char *v39; // r12@47
  char *v40; // r2@47
  int v41; // r3@48
  int v42; // r6@48
  int v43; // r7@48
  void *v44; // r11@51
  __int64 v49; // r0@54
  __int64 v50; // r2@55
  int v51; // r2@56
  unsigned int v52; // r6@56
  unsigned int v53; // r2@58
  unsigned int v54; // r11@58
  char *v55; // r8@64
  void *v56; // r11@66
  __int64 v58; // r0@69
  __int64 v59; // r2@70
  int v60; // r2@71
  unsigned int v61; // r6@71
  unsigned int v62; // r2@73
  unsigned int v63; // r11@73
  char *v64; // r8@79
  __int64 v65; // kr10_8@81
  char *v66; // r2@81
  int v67; // r3@82
  int v68; // r6@82
  int v69; // r7@82
  void *v70; // r10@84
  __int64 v71; // kr18_8@91
  char *v72; // r2@91
  int v73; // r3@92
  int v74; // r6@92
  int v75; // r7@92
  void *v76; // r10@94
  signed int v78; // r1@101
  signed int v79; // r2@101
  LayoutVariable *v80; // r0@108
  LayoutVariable *v81; // r0@112
  unsigned int v82; // r0@126
  unsigned int *v83; // r4@130
  unsigned int v84; // r0@132
  char *v85; // [sp+4h] [bp-A4h]@15
  int v86; // [sp+8h] [bp-A0h]@106
  int v87; // [sp+Ch] [bp-9Ch]@106
  int v88; // [sp+10h] [bp-98h]@69
  __int64 v89; // [sp+14h] [bp-94h]@70
  int v90; // [sp+20h] [bp-88h]@19
  __int64 v91; // [sp+24h] [bp-84h]@20
  int v92; // [sp+30h] [bp-78h]@54
  __int64 v93; // [sp+34h] [bp-74h]@55
  int v94; // [sp+40h] [bp-68h]@17
  __int64 v95; // [sp+44h] [bp-64h]@18
  void *ptr; // [sp+50h] [bp-58h]@15
  void *v97; // [sp+54h] [bp-54h]@17
  char *v98; // [sp+58h] [bp-50h]@17
  void *v99; // [sp+5Ch] [bp-4Ch]@19
  void *v100; // [sp+60h] [bp-48h]@19
  char *v101; // [sp+64h] [bp-44h]@19
  int v102; // [sp+68h] [bp-40h]@87
  int v103; // [sp+6Ch] [bp-3Ch]@97

  v2 = this;
  v3 = *((_DWORD *)this + 3);
  if ( !v3 )
    return;
  v4 = *(_DWORD *)(v3 + 4);
  v5 = (unsigned int *)(v3 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v4 )
        return;
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
        break;
      __clrex();
      v4 = v6;
    }
    v7 = __strex(v4 + 1, v5);
    v4 = v6;
  }
  while ( v7 );
  __dmb();
  _ZF = *v5 == 0;
  if ( *v5 )
    v1 = *((_DWORD *)v2 + 2);
    _ZF = v1 == 0;
  if ( _ZF )
    goto LABEL_124;
  v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  if ( !(v9 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v10 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) != 1
    || (v11 = *(LayoutComponent **)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v10))) == 0 )
LABEL_124:
    if ( &pthread_create )
      do
        v82 = __ldrex(v5);
      while ( __strex(v82 - 1, v5) );
    else
      v82 = (*v5)--;
    if ( v82 == 1 )
      v83 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
      }
      else
        v84 = (*v83)--;
      if ( v84 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  v12 = (UIControl *)UIComponent::getOwner(v2);
  _R7 = UIControl::getSize(v12);
  v14 = LayoutComponent::getOffset(v11);
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&ptr, (const ui::LayoutOffset *)v14);
  v85 = LayoutComponent::getOffsetDelta(v11);
  v15 = *((_DWORD *)v2 + 6);
  if ( v15 != 1 )
    if ( v15 )
      v20 = 0;
      v21 = 0;
      goto LABEL_101;
    v97 = ptr;
    ui::AxisOffset::AxisOffset((int)&v94, 1, *((_DWORD *)v2 + 7), 0);
    HIDWORD(v16) = v97;
    if ( v97 == v98 )
      LODWORD(v16) = ptr;
      v22 = ((_BYTE *)v97 - (_BYTE *)ptr) >> 2;
      v23 = -1431655765 * v22;
      if ( v97 == ptr )
        v23 = 1;
      v24 = v23 + -1431655765 * v22;
      v25 = v24;
      if ( v24 > 0x15555555 )
        v25 = 357913941;
      if ( v24 < v23 )
      if ( v25 )
        if ( v25 >= 0x15555556 )
          sub_DA7414();
        v26 = (char *)operator new(12 * v25);
        v16 = *(_QWORD *)&ptr;
        v26 = 0;
      v32 = v95;
      *(_DWORD *)&v26[HIDWORD(v16) - v16] = v94;
      *(_QWORD *)&v26[HIDWORD(v16) - v16 + 4] = v32;
      if ( HIDWORD(v16) == (_DWORD)v16 )
        v34 = v26;
        v33 = _R7;
        {
          v35 = *(_DWORD *)v16;
          v36 = *(_DWORD *)(v16 + 4);
          v37 = *(_DWORD *)(v16 + 8);
          LODWORD(v16) = v16 + 12;
          *(_DWORD *)v34 = v35;
          *((_DWORD *)v34 + 1) = v36;
          *((_DWORD *)v34 + 2) = v37;
          v34 += 12;
        }
        while ( HIDWORD(v16) != (_DWORD)v16 );
        LODWORD(v16) = ptr;
        _R7 = v33;
      v44 = v34 + 12;
      if ( (_DWORD)v16 )
        operator delete((void *)v16);
      ptr = v26;
      v97 = v44;
      v98 = &v26[12 * v25];
      v17 = v95;
      *(_DWORD *)v97 = v94;
      *(_QWORD *)(HIDWORD(v16) + 4) = v17;
      v97 = (char *)v97 + 12;
    __asm
      VMOV.F32        S0, #0.5
      VLDR            S2, [R7]
      VMUL.F32        S0, S2, S0
      VMOV            R2, S0
    ui::AxisOffset::AxisOffset((int)&v92, 0, _R2, 1);
    HIDWORD(v49) = v97;
      LODWORD(v49) = ptr;
      v51 = ((_BYTE *)v97 - (_BYTE *)ptr) >> 2;
      v52 = -1431655765 * v51;
        v52 = 1;
      v53 = v52 + -1431655765 * v51;
      v54 = v53;
      if ( v53 > 0x15555555 )
        v54 = 357913941;
      if ( v53 < v52 )
      if ( v54 )
        if ( v54 >= 0x15555556 )
        v55 = (char *)operator new(12 * v54);
        v49 = *(_QWORD *)&ptr;
        v55 = 0;
      v65 = v93;
      *(_DWORD *)&v55[HIDWORD(v49) - v49] = v92;
      *(_QWORD *)&v55[HIDWORD(v49) - v49 + 4] = v65;
      v66 = v55;
      if ( HIDWORD(v49) != (_DWORD)v49 )
          v67 = *(_DWORD *)v49;
          v68 = *(_DWORD *)(v49 + 4);
          v69 = *(_DWORD *)(v49 + 8);
          LODWORD(v49) = v49 + 12;
          *(_DWORD *)v66 = v67;
          *((_DWORD *)v66 + 1) = v68;
          *((_DWORD *)v66 + 2) = v69;
          v66 += 12;
        while ( HIDWORD(v49) != (_DWORD)v49 );
        LODWORD(v49) = ptr;
      v70 = v66 + 12;
      if ( (_DWORD)v49 )
        operator delete((void *)v49);
      ptr = v55;
      v97 = v70;
      v98 = &v55[12 * v54];
      v50 = v93;
      *(_DWORD *)v97 = v92;
      *(_QWORD *)(HIDWORD(v49) + 4) = v50;
    v21 = 1;
    v102 = 1;
    if ( v99 == v100 )
    v100 = v99;
    goto LABEL_99;
  v100 = v99;
  ui::AxisOffset::AxisOffset((int)&v90, 2, *((_DWORD *)v2 + 7), 0);
  HIDWORD(v18) = v100;
  if ( v100 == v101 )
    LODWORD(v18) = v99;
    v27 = ((_BYTE *)v100 - (_BYTE *)v99) >> 2;
    v28 = -1431655765 * v27;
    if ( v100 == v99 )
      v28 = 1;
    v29 = v28 + -1431655765 * v27;
    v30 = v29;
    if ( v29 > 0x15555555 )
      v30 = 357913941;
    if ( v29 < v28 )
    if ( v30 )
      if ( v30 >= 0x15555556 )
        sub_DA7414();
      v31 = (char *)operator new(12 * v30);
      v18 = *(_QWORD *)&v99;
      v31 = 0;
    v38 = v91;
    *(_DWORD *)&v31[HIDWORD(v18) - v18] = v90;
    *(_QWORD *)&v31[HIDWORD(v18) - v18 + 4] = v38;
    if ( HIDWORD(v18) == (_DWORD)v18 )
      v40 = v31;
      v39 = _R7;
        v41 = *(_DWORD *)v18;
        v42 = *(_DWORD *)(v18 + 4);
        v43 = *(_DWORD *)(v18 + 8);
        LODWORD(v18) = v18 + 12;
        *(_DWORD *)v40 = v41;
        *((_DWORD *)v40 + 1) = v42;
        *((_DWORD *)v40 + 2) = v43;
        v40 += 12;
      while ( HIDWORD(v18) != (_DWORD)v18 );
      LODWORD(v18) = v99;
      _R7 = v39;
    v56 = v40 + 12;
    if ( (_DWORD)v18 )
      operator delete((void *)v18);
    v99 = v31;
    v100 = v56;
    v101 = &v31[12 * v30];
  else
    v19 = v91;
    *(_DWORD *)v100 = v90;
    *(_QWORD *)(HIDWORD(v18) + 4) = v19;
    v100 = (char *)v100 + 12;
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [R7,#4]
    VMUL.F32        S0, S2, S0
    VMOV            R2, S0
  ui::AxisOffset::AxisOffset((int)&v88, 0, _R2, 1);
  HIDWORD(v58) = v100;
    LODWORD(v58) = v99;
    v60 = ((_BYTE *)v100 - (_BYTE *)v99) >> 2;
    v61 = -1431655765 * v60;
      v61 = 1;
    v62 = v61 + -1431655765 * v60;
    v63 = v62;
    if ( v62 > 0x15555555 )
      v63 = 357913941;
    if ( v62 < v61 )
    if ( v63 )
      if ( v63 >= 0x15555556 )
      v64 = (char *)operator new(12 * v63);
      v58 = *(_QWORD *)&v99;
      v64 = 0;
    v71 = v89;
    *(_DWORD *)&v64[HIDWORD(v58) - v58] = v88;
    *(_QWORD *)&v64[HIDWORD(v58) - v58 + 4] = v71;
    v72 = v64;
    if ( HIDWORD(v58) != (_DWORD)v58 )
        v73 = *(_DWORD *)v58;
        v74 = *(_DWORD *)(v58 + 4);
        v75 = *(_DWORD *)(v58 + 8);
        LODWORD(v58) = v58 + 12;
        *(_DWORD *)v72 = v73;
        *((_DWORD *)v72 + 1) = v74;
        *((_DWORD *)v72 + 2) = v75;
        v72 += 12;
      while ( HIDWORD(v58) != (_DWORD)v58 );
      LODWORD(v58) = v99;
    v76 = v72 + 12;
    if ( (_DWORD)v58 )
      operator delete((void *)v58);
    v99 = v64;
    v100 = v76;
    v101 = &v64[12 * v63];
    v59 = v89;
    *(_DWORD *)v100 = v88;
    *(_QWORD *)(HIDWORD(v58) + 4) = v59;
  v20 = 1;
  v103 = 1;
  if ( ptr != v97 )
LABEL_99:
    v20 = 1;
    goto LABEL_101;
  v21 = 0;
LABEL_101:
  _R2 = v85;
    VLDR            S18, [R2]
    VLDR            S16, [R2,#4]
  LayoutComponent::setOffset(v11, (const ui::LayoutOffset *)&ptr);
  __asm { VCMPE.F32       S16, #0.0 }
  v78 = 0;
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S18, #0.0
  v79 = 0;
  if ( !_ZF )
    v78 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v79 = 1;
  if ( v78 | v79 )
    v86 = 0;
    v87 = 0;
    LayoutComponent::setOffsetDelta(v11, (int)&v86, 0);
  if ( v21 == 1 )
    v80 = (LayoutVariable *)LayoutComponent::getVariable(v11, 0);
    if ( v80 )
      LayoutVariable::initialize(v80);
    LayoutComponent::layout((int)v11, (int)&unk_262C143, 1, 0);
  if ( v20 == 1 )
    v81 = (LayoutVariable *)LayoutComponent::getVariable(v11, 1);
    if ( v81 )
      LayoutVariable::initialize(v81);
    LayoutComponent::layout((int)v11, (int)&unk_262C144, 1, 0);
    LayoutComponent::layout((int)v11, (int)&unk_262C145, 1, 0);
    VCMPE.F32       S16, #0.0
    LayoutComponent::layout((int)v11, (int)&unk_262C146, 1, 0);
  if ( v99 )
    operator delete(v99);
  if ( ptr )
    operator delete(ptr);
  if ( v3 )
}
