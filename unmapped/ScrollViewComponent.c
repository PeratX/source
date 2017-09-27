

int __fastcall ScrollViewComponent::setScrollbarActiveEventId(int result, __int16 a2)
{
  *(_WORD *)(result + 52) = a2;
  return result;
}


int __fastcall ScrollViewComponent::setScrollbarBoxTrackButton(int result, __int16 a2)
{
  *(_WORD *)(result + 48) = a2;
  return result;
}


int __fastcall ScrollViewComponent::getScrollTrack(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 24);
  v2 = *(_DWORD *)(a2 + 28);
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


signed int __fastcall ScrollViewComponent::_handleScrollRequest(int a1, int a2, int a3, int a4, int a5, _WORD *a6)
{
  int v6; // r8@0
  int v7; // r5@1
  int v8; // r4@1
  unsigned int *v10; // r7@2
  unsigned int v11; // r0@2
  unsigned int v12; // r1@5
  unsigned int v13; // r2@6
  signed int v14; // r6@7
  char v16; // r0@10
  int v17; // r6@13
  LayoutComponent *v18; // r6@14
  int v20; // r0@15
  unsigned int v24; // r0@25
  unsigned int *v25; // r5@29
  unsigned int v26; // r0@31
  float v28; // [sp+4h] [bp-24h]@15
  float v29; // [sp+8h] [bp-20h]@15

  v7 = a1;
  *a6 = 0;
  v8 = *(_DWORD *)(a1 + 36);
  if ( v8 )
  {
    _R9 = a5;
    v10 = (unsigned int *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v11 )
          return 1;
        __dmb();
        v12 = __ldrex(v10);
        if ( v12 == v11 )
          break;
        __clrex();
        v11 = v12;
      }
      v13 = __strex(v11 + 1, v10);
      v11 = v12;
    }
    while ( v13 );
    __dmb();
    v14 = 1;
    _ZF = *v10 == 0;
    if ( *v10 )
      v6 = *(_DWORD *)(v7 + 32);
      _ZF = v6 == 0;
    if ( !_ZF )
      v16 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      __dmb();
      if ( !(v16 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v17 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v18 = *(LayoutComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v17));
        if ( v18 )
        {
          _R8 = ScrollbarDynamics::getCurrentPos((ScrollbarDynamics *)(v7 + 72));
          v28 = 0.0;
          v29 = 0.0;
          v20 = LayoutComponent::getDraggable(v18);
          __asm { VMOV            S0, R8 }
          if ( v20 == 1 )
          {
            __asm
            {
              VLDR            S2, [R9,#4]
              VADD.F32        S2, S2, S0
              VLDR            S0, =0.0
              VSTR            S2, [SP,#0x28+var_24]
            }
          }
          else
            v28 = 0.0;
              VLDR            S2, [R9,#8]
              VADD.F32        S0, S2, S0
          __asm { VSTR            S0, [SP,#0x28+var_20] }
          ScrollViewComponent::_updateScroll(v7, (int)&v28, 1);
          v14 = 0;
        }
        else
          v14 = 1;
      else
        v14 = 1;
    if ( &pthread_create )
      do
        v24 = __ldrex(v10);
      while ( __strex(v24 - 1, v10) );
    else
      v24 = (*v10)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  else
  return v14;
}


int __fastcall ScrollViewComponent::_handleTouchScrollButton(ScrollViewComponent *this, int a2, int a3, int a4, int a5, _WORD *a6)
{
  int v7; // r0@1

  _R4 = this;
  *a6 = 1;
  v7 = *(_BYTE *)(a5 + 9);
  _ZF = v7 == 0;
  if ( *(_BYTE *)(a5 + 9) )
    _ZF = v7 == 2;
  if ( _ZF )
  {
    *((_BYTE *)_R4 + 140) = 0;
    ScrollbarDynamics::setTargetPointActive((ScrollViewComponent *)((char *)_R4 + 72), 0);
    _R0 = ScrollbarDynamics::targetPointMovedDistance((ScrollViewComponent *)((char *)_R4 + 72));
    __asm
    {
      VLDR            S0, [R4,#0x3C]
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      *a6 = 0;
  }
  else if ( v7 == 1 )
    ScrollViewComponent::_makeScrollBarVisible(_R4);
    ScrollbarDynamics::setTargetPointActive((ScrollViewComponent *)((char *)_R4 + 72), 1);
  *((_BYTE *)_R4 + 58) = *(_BYTE *)(a5 + 9);
  return 1;
}


signed int __fastcall ScrollViewComponent::_makeScrollBarVisible(ScrollViewComponent *this)
{
  int v5; // r8@3
  unsigned int v6; // r1@4
  unsigned int *v7; // r0@4
  unsigned int v8; // r2@7
  unsigned int v9; // r3@8
  unsigned int v10; // r1@9
  signed int v11; // r0@9
  UIControl *v12; // r6@13
  UIControl **v14; // r7@18
  __int64 v15; // kr00_8@18
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r4@28
  unsigned int v19; // r0@30
  signed int result; // r0@35

  __asm { VMOV.F32        S0, #1.0 }
  _R5 = this;
  *((_BYTE *)this + 140) = 1;
  __asm
  {
    VLDR            S2, [R5,#0x90]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v5 = *((_DWORD *)this + 9);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 4);
      v7 = (unsigned int *)(v5 + 4);
      while ( v6 )
      {
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
        {
          v9 = __strex(v6 + 1, v7);
          v6 = v8;
          if ( !v9 )
          {
            __dmb();
            v10 = *v7;
            v11 = 0;
            if ( !v10 )
              v11 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v11 = 1;
    v5 = 0;
LABEL_13:
    v12 = (UIControl *)*((_DWORD *)_R5 + 8);
    if ( v11 )
      v12 = 0;
    _ZF = *((_BYTE *)_R5 + 70) == 0;
    if ( *((_BYTE *)_R5 + 70) )
      _ZF = v12 == 0;
    if ( !_ZF )
      v15 = *(_QWORD *)UIControl::getChildren(v12);
      v14 = (UIControl **)v15;
      if ( (_DWORD)v15 != HIDWORD(v15) )
        do
          UIControl::setAlpha(*v14, 1.0);
          v14 += 2;
        while ( (UIControl **)HIDWORD(v15) != v14 );
      UIControl::setVisible(v12, 1, 1, 1);
      v16 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  result = 1065353216;
  *((_DWORD *)_R5 + 36) = 1065353216;
  return result;
}


unsigned int __fastcall ScrollViewComponent::_getContentSize(ScrollViewComponent *this, int a2)
{
  ScrollViewComponent *v2; // r5@1
  unsigned int result; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r6@2
  unsigned int v6; // r2@5
  unsigned int v7; // r3@6
  UIControl *v8; // r0@7
  bool v9; // zf@7
  char *v10; // r0@10
  unsigned int *v11; // r5@17

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  v4 = *(_DWORD *)(a2 + 20);
  if ( v4 )
  {
    result = *(_DWORD *)(v4 + 4);
    v5 = (unsigned int *)(v4 + 4);
    while ( result )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == result )
      {
        v7 = __strex(result + 1, v5);
        result = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = (UIControl *)*v5;
          v9 = *v5 == 0;
          if ( *v5 )
          {
            v8 = *(UIControl **)(a2 + 16);
            v9 = v8 == 0;
          }
          if ( !v9 )
            v10 = UIControl::getSize(v8);
            *(_DWORD *)v2 = *(_DWORD *)v10;
            *((_DWORD *)v2 + 1) = *((_DWORD *)v10 + 1);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v11 = (unsigned int *)(v4 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v11);
              while ( __strex(result - 1, v11) );
            }
            else
              result = (*v11)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall ScrollViewComponent::getScrollContent(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 20);
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


int __fastcall ScrollViewComponent::setScrollBox(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 36);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 36) = v3;
  return result;
}


int __fastcall ScrollViewComponent::setScrollContent(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 20);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 20) = v3;
  return result;
}


int __fastcall ScrollViewComponent::setTouchMode(int result, bool a2)
{
  *(_BYTE *)(result + 70) = a2;
  return result;
}


int __fastcall ScrollViewComponent::setScrollSpeed(int result, float a2)
{
  *(float *)(result + 64) = a2;
  return result;
}


int __fastcall ScrollViewComponent::setAlwaysHandleScrolling(int result, bool a2)
{
  *(_BYTE *)(result + 69) = a2;
  return result;
}


int __fastcall ScrollViewComponent::setScrollTrack(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 28);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 28) = v3;
  return result;
}


void __fastcall ScrollViewComponent::~ScrollViewComponent(ScrollViewComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)ScrollViewComponent::~ScrollViewComponent(this);
  j_j_j__ZdlPv_3(v1);
}


int __fastcall ScrollViewComponent::setScrollBarBottomEventId(int result, __int16 a2)
{
  *(_WORD *)(result + 56) = a2;
  return result;
}


int __fastcall ScrollViewComponent::clone(ScrollViewComponent *this, UIControl *a2, UIControl *a3)
{
  ScrollViewComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  UIComponent *v6; // r6@1
  int v7; // r0@1
  int v8; // r0@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x9Cu);
  ScrollViewComponent::ScrollViewComponent(v6, v4);
  v7 = *((_DWORD *)v5 + 12);
  *((_WORD *)v6 + 24) = v7;
  *((_WORD *)v6 + 25) = HIWORD(v7);
  v8 = *((_DWORD *)v5 + 13);
  *((_WORD *)v6 + 26) = v8;
  *((_WORD *)v6 + 27) = HIWORD(v8);
  *((_DWORD *)v6 + 15) = *((_DWORD *)v5 + 15);
  result = *((_DWORD *)v5 + 16);
  *((_DWORD *)v6 + 16) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


signed int __fastcall ScrollViewComponent::reload(ScrollViewComponent *this, const UIComponent *a2)
{
  ScrollViewComponent *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-30h]@1
  int v6; // [sp+4h] [bp-2Ch]@1
  int v7; // [sp+8h] [bp-28h]@1
  int v8; // [sp+Ch] [bp-24h]@1
  char v9; // [sp+10h] [bp-20h]@1
  int v10; // [sp+18h] [bp-18h]@1
  int v11; // [sp+1Ch] [bp-14h]@1

  v2 = this;
  v3 = ScrollbarDynamics::getCurrentPos((const UIComponent *)((char *)a2 + 72));
  ScrollbarDynamics::setPos((ScrollViewComponent *)((char *)v2 + 72), *(float *)&v3);
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v7 = 0;
  v8 = 0;
  v5 = 0;
  v6 = 0;
  ScrollViewComponent::_updateTouchScrollbarVisibility((int)v2, (int)&v5);
  return ScrollViewComponent::_updateDynamicsAndScrollPosition((int)v2, (float *)&v5);
}


int __fastcall ScrollViewComponent::getScrollBox(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 32);
  v2 = *(_DWORD *)(a2 + 36);
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


signed int __fastcall ScrollViewComponent::animationScrollingTick(int a1, int a2)
{
  float *v2; // r4@1
  int v3; // r5@1

  v2 = (float *)a2;
  v3 = a1;
  ScrollViewComponent::_updateTouchScrollbarVisibility(a1, a2);
  return j_j_j__ZN19ScrollViewComponent32_updateDynamicsAndScrollPositionERKN3mce8TimeStepE(v3, v2);
}


int __fastcall ScrollViewComponent::~ScrollViewComponent(ScrollViewComponent *this)
{
  ScrollViewComponent *v1; // r5@1
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

  v1 = this;
  *(_DWORD *)this = &off_26D6D54;
  v2 = *((_DWORD *)this + 11);
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
  v5 = *((_DWORD *)v1 + 9);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = *((_DWORD *)v1 + 7);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = *((_DWORD *)v1 + 5);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  v14 = *((_DWORD *)v1 + 3);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


int __fastcall ScrollViewComponent::setScrollViewPort(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
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
  result = *(_DWORD *)(v2 + 12);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 12) = v3;
  return result;
}


int __fastcall ScrollViewComponent::receive(ScrollViewComponent *this, int a2, int a3, int a4, int a5, int a6, unsigned int a7, int a8, __int64 a9, __int64 a10)
{
  int v10; // r5@1
  unsigned int v12; // r2@2
  unsigned int v13; // r6@9
  unsigned __int16 v20; // [sp+Eh] [bp-3Ah]@1
  int v21; // [sp+10h] [bp-38h]@1
  int v22; // [sp+14h] [bp-34h]@1
  unsigned int v23; // [sp+18h] [bp-30h]@1
  int v24; // [sp+1Ch] [bp-2Ch]@1
  __int64 v25; // [sp+20h] [bp-28h]@1
  __int64 v26; // [sp+28h] [bp-20h]@1

  v10 = a4;
  _R8 = this;
  v21 = a5;
  v22 = a6;
  v23 = a7;
  v24 = a8;
  v25 = a9;
  v26 = a10;
  v20 = 0;
  switch ( a5 )
  {
    case 1:
      v12 = *((_DWORD *)this + 12);
      if ( (unsigned __int16)a6 == (unsigned __int16)v12 )
      {
        ScrollViewComponent::_handleTrackScrollButton((int)this, (int)&v21, v12, a8, (int)&v21, &v20);
        return v20;
      }
      if ( (unsigned __int16)a6 != v12 >> 16 )
      v13 = a7 >> 8;
      v20 = 1;
      _ZF = BYTE1(a7) == 0;
      if ( BYTE1(a7) )
        _ZF = BYTE1(a7) == 2;
      if ( _ZF )
        *((_BYTE *)this + 140) = 0;
        ScrollbarDynamics::setTargetPointActive((ScrollViewComponent *)((char *)this + 72), 0);
        _R0 = ScrollbarDynamics::targetPointMovedDistance((ScrollViewComponent *)((char *)_R8 + 72));
        __asm
        {
          VLDR            S0, [R8,#0x3C]
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v20 = 0;
      else if ( BYTE1(a7) == 1 )
        ScrollViewComponent::_makeScrollBarVisible(this);
        ScrollbarDynamics::setTargetPointActive((ScrollViewComponent *)((char *)_R8 + 72), 1);
        *((_BYTE *)_R8 + 58) = v13;
      *((_BYTE *)_R8 + 58) = v13;
      return v20;
    case 3:
      ScrollViewComponent::_handlePointerMove(this, (int)&v21, a5, a8, (ScreenEvent *)&v21, &v20);
    case 9:
      ScrollViewComponent::_updateScrollBoxSize(this);
      AnimationController::removeComponentAnimationCallback<ScrollViewComponent>(v10, _R8);
      AnimationController::addComponentAnimationCallback<ui::AnimationStatus (ScrollViewComponent::*)(mce::TimeStep const&),ScrollViewComponent>(
        v10,
        (int)ScrollViewComponent::animationScrollingTick,
        0,
        _R8,
        1);
    case 10:
      ScrollViewComponent::_handleScrollDirection((int)this, (int)&v21, a5, a8, (int)&v21, &v20);
    case 11:
      ScrollViewComponent::_handleScrollRequest((int)this, (int)&v21, a5, a8, (int)&v21, &v20);
    default:
  }
}


int __fastcall ScrollViewComponent::setBoxAndTrackPanel(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 44);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 44) = v3;
  return result;
}


int __fastcall ScrollViewComponent::getScrollViewPort(int result, int a2)
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


signed int __fastcall ScrollViewComponent::_handleTrackScrollButton(int a1, int a2, int a3, int a4, int a5, _WORD *a6)
{
  int v6; // r7@1
  int v7; // r9@1
  unsigned int v8; // r1@2
  unsigned int *v9; // r0@2
  unsigned int v10; // r2@5
  unsigned int v11; // r3@6
  unsigned int v12; // r1@7
  signed int v13; // r0@7
  int v14; // r5@11
  int v15; // r6@11
  unsigned int v16; // r1@14
  unsigned int *v17; // r0@14
  unsigned int v18; // r2@17
  unsigned int v19; // r3@18
  unsigned int v20; // r1@19
  signed int v21; // r0@19
  UIControl *v22; // r6@23
  int v23; // r10@23
  unsigned int v24; // r1@26
  unsigned int *v25; // r0@26
  unsigned int v26; // r2@29
  unsigned int v27; // r3@30
  unsigned int v28; // r1@31
  signed int v29; // r0@31
  int v30; // r4@35
  UIControl *v31; // r11@35
  unsigned int v32; // r1@38
  unsigned int *v33; // r0@38
  unsigned int v34; // r2@41
  unsigned int v35; // r3@42
  unsigned int v36; // r1@43
  signed int v37; // r0@43
  UIControl *v38; // r8@47
  signed int v40; // r7@53
  char v41; // r0@54
  int v42; // r9@57
  LayoutComponent *v43; // r5@58
  int v53; // r0@63
  unsigned int *v54; // r1@70
  unsigned int v55; // r0@72
  unsigned int *v56; // r5@76
  unsigned int v57; // r0@78
  unsigned int *v58; // r1@84
  unsigned int v59; // r0@86
  unsigned int *v60; // r4@90
  unsigned int v61; // r0@92
  unsigned int *v62; // r1@98
  unsigned int v63; // r0@100
  unsigned int *v64; // r4@104
  unsigned int v65; // r0@106
  unsigned int *v66; // r1@112
  unsigned int v67; // r0@114
  unsigned int *v68; // r4@118
  unsigned int v69; // r0@120
  int v71; // [sp+0h] [bp-60h]@54
  int v72; // [sp+4h] [bp-5Ch]@19
  float v73; // [sp+8h] [bp-58h]@67

  v6 = a1;
  v7 = *(_DWORD *)(a1 + 36);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = (unsigned int *)(v7 + 4);
    while ( v8 )
    {
      __dmb();
      v10 = __ldrex(v9);
      if ( v10 == v8 )
      {
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
        if ( !v11 )
        {
          __dmb();
          v12 = *v9;
          v13 = 0;
          if ( !v12 )
            v13 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v13 = 1;
  v7 = 0;
LABEL_11:
  v14 = *(_QWORD *)(v6 + 28) >> 32;
  v15 = *(_QWORD *)(v6 + 28);
  if ( v13 )
    v14 = 0;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4);
    v17 = (unsigned int *)(v15 + 4);
    while ( v16 )
      v18 = __ldrex(v17);
      if ( v18 == v16 )
        v19 = __strex(v16 + 1, v17);
        v16 = v18;
        if ( !v19 )
          v72 = v15;
          v20 = *v17;
          v21 = 0;
          if ( !v20 )
            v21 = 1;
          goto LABEL_23;
  v21 = 1;
  v72 = 0;
LABEL_23:
  v22 = (UIControl *)(*(_QWORD *)(v6 + 20) >> 32);
  v23 = *(_QWORD *)(v6 + 20);
  if ( v21 )
    v22 = 0;
  if ( v23 )
    v24 = *(_DWORD *)(v23 + 4);
    v25 = (unsigned int *)(v23 + 4);
    while ( v24 )
      v26 = __ldrex(v25);
      if ( v26 == v24 )
        v27 = __strex(v24 + 1, v25);
        v24 = v26;
        if ( !v27 )
          v28 = *v25;
          v29 = 0;
          if ( !v28 )
            v29 = 1;
          goto LABEL_35;
  v29 = 1;
  v23 = 0;
LABEL_35:
  v31 = (UIControl *)(*(_QWORD *)(v6 + 12) >> 32);
  v30 = *(_QWORD *)(v6 + 12);
  if ( v29 )
    v31 = 0;
  if ( v30 )
    v32 = *(_DWORD *)(v30 + 4);
    v33 = (unsigned int *)(v30 + 4);
    while ( v32 )
      v34 = __ldrex(v33);
      if ( v34 == v32 )
        v35 = __strex(v32 + 1, v33);
        v32 = v34;
        if ( !v35 )
          v36 = *v33;
          v37 = 0;
          if ( !v36 )
            v37 = 1;
          goto LABEL_47;
  v37 = 1;
  v30 = 0;
LABEL_47:
  v38 = *(UIControl **)(v6 + 8);
  if ( v37 )
    v38 = 0;
  _ZF = v14 == 0;
  if ( v14 )
    _ZF = v22 == 0;
  if ( _ZF )
    v40 = 1;
    *a6 = 0;
  else
    v71 = v7;
    v41 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    __dmb();
    if ( !(v41 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    v42 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v14, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
      && (v43 = *(LayoutComponent **)(*(_DWORD *)(v14 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v14, v42))) != 0 )
      _R0 = a5;
      __asm
        VLDR            S16, [R0,#0x10]
        VLDR            S20, [R0,#0x14]
      _R0 = UIControl::getPosition(v22);
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VSUB.F32        S18, S16, S0
        VSUB.F32        S16, S20, S2
        VSTR            S18, [SP,#0x60+var_58]
        VSTR            S16, [SP,#0x60+var_54]
      _R0 = UIControl::getSize(v22);
      __asm { VLDR            S20, [R0] }
      if ( LayoutComponent::getDraggable(v43) == 2 )
        _R0 = UIControl::getSize(v22);
        __asm
          VMOV.F32        S18, S16
          VLDR            S20, [R0,#4]
        VMOV.F32        S2, #0.5
        VDIV.F32        S0, S18, S20
        VCMPE.F32       S20, S2
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S16, #1.0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S0 }
      _R0 = UIControl::getSize(v31);
        VLDR            S18, [R0]
        VLDR            S20, [R0,#4]
      _R0 = UIControl::getSize(v38);
        VLDR            S22, [R0]
        VLDR            S24, [R0,#4]
      v53 = LayoutComponent::getDraggable(v43);
      __asm { VMOV.F32        S0, #-0.5 }
      if ( v53 == 1 )
          VMUL.F32        S2, S18, S16
          VMUL.F32        S0, S22, S0
          VADD.F32        S2, S2, S0
          VLDR            S0, =0.0
          VMUL.F32        S2, S20, S16
          VMUL.F32        S0, S24, S0
          VADD.F32        S0, S2, S0
          VLDR            S2, =0.0
        VSTR            S2, [SP,#0x60+var_58]
        VSTR            S0, [SP,#0x60+var_54]
      ScrollViewComponent::_updateScroll(v6, (int)&v73, 1);
      v40 = 0;
    else
      v40 = 1;
      *a6 = 0;
    v7 = v71;
    v54 = (unsigned int *)(v30 + 4);
    if ( &pthread_create )
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 == 1 )
      v56 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
      if ( &pthread_create )
        __dmb();
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    v58 = (unsigned int *)(v23 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 == 1 )
      v60 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  if ( v72 )
    v62 = (unsigned int *)(v72 + 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v72 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
    v66 = (unsigned int *)(v7 + 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 == 1 )
      v68 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return v40;
}


UIComponent *__fastcall ScrollViewComponent::ScrollViewComponent(UIComponent *a1, UIControl *a2)
{
  UIControl *v2; // r5@1
  UIComponent *v3; // r4@1
  int v4; // r5@1
  char v6; // [sp+7h] [bp-19h]@1
  int v7; // [sp+8h] [bp-18h]@1
  const char *v8; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v3 = &off_26D6D54;
  *((_WORD *)v3 + 29) = 0;
  _aeabi_memclr4((char *)v3 + 8, 48);
  *((_DWORD *)v3 + 15) = 1084227584;
  *((_DWORD *)v3 + 16) = 1084227584;
  *((_WORD *)v3 + 34) = 0;
  *((_BYTE *)v3 + 70) = 0;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 0;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 18) = 0;
  *((_DWORD *)v3 + 19) = 0;
  *((_DWORD *)v3 + 24) = 1103626240;
  *((_BYTE *)v3 + 112) = 0;
  *((_DWORD *)v3 + 27) = 0;
  *((_DWORD *)v3 + 25) = 0;
  *((_DWORD *)v3 + 26) = 0;
  *((_BYTE *)v3 + 132) = 0;
  *((_DWORD *)v3 + 31) = 0;
  *((_DWORD *)v3 + 32) = 0;
  *((_DWORD *)v3 + 29) = 0;
  *((_DWORD *)v3 + 30) = 0;
  *((_DWORD *)v3 + 34) = 1065353216;
  *((_BYTE *)v3 + 140) = 0;
  *((_DWORD *)v3 + 36) = 0;
  *((_BYTE *)v3 + 148) = 0;
  *((_DWORD *)v3 + 38) = 0;
  v4 = UIControl::getPropertyBag(v2);
  gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v7, (int)"#scrollbar_hit_bottom");
  v6 = 0;
  UIPropertyBag::set<bool>(v4, v7, v8, &v6);
  return v3;
}


signed int __fastcall ScrollViewComponent::handleScrollDirection(int a1, int a2, int a3, int a4, __int64 *a5, __int64 *a6, int a7)
{
  int v7; // r9@1
  int v8; // r10@1
  int v9; // lr@1
  unsigned int v10; // r6@2
  unsigned int *v11; // r0@2
  unsigned int v12; // r4@5
  unsigned int v13; // r7@6
  signed int v14; // r7@7
  UIControl *v15; // r6@11
  int v16; // r11@11
  unsigned int v17; // r4@14
  unsigned int *v18; // r7@14
  unsigned int v19; // r0@17
  unsigned int v20; // r5@18
  unsigned int v21; // r0@19
  signed int v22; // r7@19
  UIControl *v23; // r8@23
  signed int v24; // r6@35
  __int64 v25; // kr00_8@37
  __int64 v26; // kr08_8@37
  unsigned int *v27; // r1@40
  unsigned int v28; // r0@42
  unsigned int *v29; // r4@46
  unsigned int v30; // r0@48
  unsigned int *v31; // r1@54
  unsigned int v32; // r0@56
  unsigned int *v33; // r4@60
  unsigned int v34; // r0@62
  int v36; // [sp+20h] [bp-50h]@26
  int v37; // [sp+24h] [bp-4Ch]@26
  int v38; // [sp+28h] [bp-48h]@26
  char v39; // [sp+2Ch] [bp-44h]@37
  __int64 v40; // [sp+30h] [bp-40h]@37
  __int64 v41; // [sp+38h] [bp-38h]@37

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 12);
  v9 = *(_BYTE *)(a1 + 69);
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    v11 = (unsigned int *)(v8 + 4);
    while ( v10 )
    {
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
      {
        v13 = v10 + 1;
        v10 = v12;
        if ( !__strex(v13, v11) )
        {
          __dmb();
          v14 = 0;
          if ( !*v11 )
            v14 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v14 = 1;
  v8 = 0;
LABEL_11:
  v15 = *(UIControl **)(v7 + 8);
  v16 = *(_DWORD *)(v7 + 28);
  if ( v14 )
    v15 = 0;
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 4);
    v18 = (unsigned int *)(v16 + 4);
    while ( v17 )
      v19 = __ldrex(v18);
      if ( v19 == v17 )
        v20 = __strex(v17 + 1, v18);
        v17 = v19;
        if ( !v20 )
          v21 = *v18;
          v22 = 0;
          if ( !v21 )
            v22 = 1;
          goto LABEL_23;
  v22 = 1;
  v16 = 0;
LABEL_23:
  v23 = *(UIControl **)(v7 + 24);
  if ( v22 )
    v23 = 0;
  if ( a7 )
    goto LABEL_38;
  v36 = a2;
  v37 = a4;
  v38 = a3;
  if ( v9
    || v15
    && UIControl::isVisibleInTree(v15) == 1
    && UIControl::containsPoint(v15, (int)a5) == 1
    && UIControl::getEnabled(v15) )
    goto LABEL_71;
  if ( !v23 || UIControl::isVisibleInTree(v23) != 1 || UIControl::containsPoint(v23, (int)a5) != 1 )
    v24 = 0;
    goto LABEL_39;
  if ( UIControl::getEnabled(v23) )
LABEL_71:
    v25 = *a6;
    v26 = *a5;
    ScreenEvent::ScreenEvent((ScreenEvent *)&v39);
    *(_DWORD *)&v39 = 10;
    v40 = v26;
    v41 = v25;
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v7 + 12))(v7, v36, v37, v38);
LABEL_38:
    v24 = 1;
  v24 = 0;
LABEL_39:
    v27 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v31 = (unsigned int *)(v8 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v24;
}


int __fastcall ScrollViewComponent::setGestureControlMode(int result, bool a2)
{
  *(_BYTE *)(result + 68) = a2;
  return result;
}


int __fastcall ScrollViewComponent::setScrollbarTouchButton(int result, __int16 a2)
{
  *(_WORD *)(result + 50) = a2;
  return result;
}


int __fastcall ScrollViewComponent::_setContentOffset(int a1, LayoutComponent *this, int a3, int a4, int a5)
{
  LayoutComponent *v5; // r5@1
  unsigned int v8; // r0@1

  v5 = this;
  _R6 = a4;
  _R4 = a3;
  v8 = LayoutComponent::getAnchorFrom(this);
  _R1 = a5;
  if ( v8 <= 8 )
  {
    if ( (1 << v8) & 0x124 )
    {
      __asm
      {
        VLDR            S0, [R1]
        VLDR            S2, [R6]
        VSUB.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDRGT          S2, [R4]
          VADDGT.F32      S0, S2, S0
          VSTRGT          S0, [R4]
        }
    }
  }
  _ZF = v8 == 8;
  if ( v8 != 8 )
    _ZF = (v8 | 1) == 7;
  if ( _ZF )
    __asm
      VLDR            S0, [R1,#4]
      VLDR            S2, [R6,#4]
      VSUB.F32        S0, S2, S0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VLDRGT          S2, [R4,#4]
        VADDGT.F32      S0, S2, S0
        VSTRGT          S0, [R4,#4]
  return j_j_j__ZN15LayoutComponent14setOffsetDeltaERKN3glm6detail5tvec2IfEEPK9UIControl(v5, _R4, 0);
}


void __fastcall ScrollViewComponent::~ScrollViewComponent(ScrollViewComponent *this)
{
  ScrollViewComponent::~ScrollViewComponent(this);
}


int __fastcall ScrollViewComponent::setScrollBoxPressed(int result, char a2)
{
  *(_BYTE *)(result + 59) = a2;
  return result;
}


unsigned int __fastcall ScrollViewComponent::_updateScrollFromScrollBox(ScrollViewComponent *this, ScreenEvent *a2)
{
  ScrollViewComponent *v2; // r7@1
  unsigned int result; // r0@1
  int v4; // r9@2
  unsigned int v5; // r1@3
  unsigned int *v6; // r0@3
  unsigned int v7; // r2@6
  unsigned int v8; // r3@7
  unsigned int v9; // r1@8
  signed int v10; // r0@8
  UIControl *v11; // r4@12
  int v12; // r10@12
  unsigned int v13; // r1@15
  unsigned int *v14; // r0@15
  unsigned int v15; // r2@18
  unsigned int v16; // r3@19
  unsigned int v17; // r1@20
  signed int v18; // r0@20
  int v19; // r11@24
  int v20; // r5@24
  unsigned int v21; // r1@27
  unsigned int *v22; // r0@27
  unsigned int v23; // r2@30
  unsigned int v24; // r3@31
  unsigned int v25; // r1@32
  UIControl *v26; // r6@36
  char v28; // r0@42
  int v29; // r8@45
  LayoutComponent *v30; // r5@46
  int v39; // r0@50
  unsigned int *v40; // r1@55
  unsigned int *v41; // r4@61
  unsigned int *v42; // r1@69
  unsigned int *v43; // r4@75
  unsigned int *v44; // r1@83
  unsigned int *v45; // r4@89
  ScreenEvent *v46; // [sp+4h] [bp-54h]@2
  float v47; // [sp+8h] [bp-50h]@50
  float v48; // [sp+Ch] [bp-4Ch]@50

  v2 = this;
  result = *((_BYTE *)this + 58);
  if ( result == 1 )
  {
    v46 = a2;
    v4 = *((_DWORD *)v2 + 7);
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
            goto LABEL_12;
          }
        }
        else
          __clrex();
      }
    }
    v10 = 1;
    v4 = 0;
LABEL_12:
    v11 = (UIControl *)*((_DWORD *)v2 + 6);
    v12 = *((_DWORD *)v2 + 9);
    if ( v10 )
      v11 = 0;
    if ( v12 )
      v13 = *(_DWORD *)(v12 + 4);
      v14 = (unsigned int *)(v12 + 4);
      while ( v13 )
        v15 = __ldrex(v14);
        if ( v15 == v13 )
          v16 = __strex(v13 + 1, v14);
          v13 = v15;
          if ( !v16 )
            v17 = *v14;
            v18 = 0;
            if ( !v17 )
              v18 = 1;
            goto LABEL_24;
    v18 = 1;
    v12 = 0;
LABEL_24:
    v19 = *((_DWORD *)v2 + 5);
    v20 = *((_DWORD *)v2 + 8);
    if ( v18 )
      v20 = 0;
    if ( v19 )
      v21 = *(_DWORD *)(v19 + 4);
      v22 = (unsigned int *)(v19 + 4);
      while ( v21 )
        v23 = __ldrex(v22);
        if ( v23 == v21 )
          v24 = __strex(v21 + 1, v22);
          v21 = v23;
          if ( !v24 )
            v25 = *v22;
            result = 0;
            if ( !v25 )
              result = 1;
            goto LABEL_36;
    result = 1;
    v19 = 0;
LABEL_36:
    v26 = (UIControl *)*((_DWORD *)v2 + 4);
    if ( result )
      v26 = 0;
    if ( v11 )
      _ZF = v20 == 0;
      if ( v20 )
        _ZF = v26 == 0;
      if ( !_ZF )
        v28 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v28 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v29 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        result = UIControl::_hasComponent((UIControl *)v20, type_id<UIComponent,LayoutComponent>(void)::id[0]);
        if ( result == 1 )
          result = UIControl::_getComponentIndex((UIControl *)v20, v29);
          v30 = *(LayoutComponent **)(*(_DWORD *)(v20 + 108) + 4 * result);
          if ( v30 )
            _R0 = UIControl::getSize(v11);
            __asm
            {
              VLDR            S16, [R0]
              VLDR            S18, [R0,#4]
            }
            _R0 = UIControl::getSize(v26);
              VLDR            S20, [R0]
              VLDR            S22, [R0,#4]
            if ( LayoutComponent::getDraggable(v30) == 1 )
              _R0 = v46;
              __asm
              {
                VDIV.F32        S0, S20, S16
                VLDR            S2, [R0,#0xC]
              }
            else
              __asm { VDIV.F32        S0, S22, S18 }
              __asm { VLDR            S2, [R0,#0x10] }
            __asm { VMUL.F32        S16, S2, S0 }
            _R4 = ScrollbarDynamics::getCurrentPos((ScrollViewComponent *)((char *)v2 + 72));
            v47 = 0.0;
            v48 = 0.0;
            v39 = LayoutComponent::getDraggable(v30);
            __asm { VMOV            S0, R4 }
            if ( v39 == 1 )
                VADD.F32        S2, S0, S16
                VLDR            S0, =0.0
                VSTR            S2, [SP,#0x58+var_50]
              __asm { VADD.F32        S0, S0, S16 }
              v47 = 0.0;
            __asm { VSTR            S0, [SP,#0x58+var_4C] }
            result = ScrollViewComponent::_updateScroll((int)v2, (int)&v47, 1);
      v40 = (unsigned int *)(v19 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v40);
        while ( __strex(result - 1, v40) );
      else
        result = (*v40)--;
      if ( result == 1 )
        v41 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v41);
          while ( __strex(result - 1, v41) );
          result = (*v41)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v42 = (unsigned int *)(v12 + 4);
          result = __ldrex(v42);
        while ( __strex(result - 1, v42) );
        result = (*v42)--;
        v43 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            result = __ldrex(v43);
          while ( __strex(result - 1, v43) );
          result = (*v43)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      v44 = (unsigned int *)(v4 + 4);
          result = __ldrex(v44);
        while ( __strex(result - 1, v44) );
        result = (*v44)--;
        v45 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
            result = __ldrex(v45);
          while ( __strex(result - 1, v45) );
          result = (*v45)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return result;
}


int __fastcall ScrollViewComponent::setJumpToBottomOnUpdate(int result, bool a2)
{
  *(_BYTE *)(result + 148) = a2;
  return result;
}


signed int __fastcall ScrollViewComponent::onLayoutChange(ScrollViewComponent *this)
{
  ScrollViewComponent *v1; // r7@1
  UIControl *v2; // r0@1
  int v3; // r8@2
  unsigned int v4; // r1@3
  unsigned int *v5; // r0@3
  unsigned int v6; // r2@6
  unsigned int v7; // r3@7
  unsigned int v8; // r1@8
  signed int v9; // r0@8
  int v10; // r9@12
  UIControl *v11; // r11@12
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  unsigned int v16; // r1@20
  signed int v17; // r0@20
  int v18; // r5@24
  int v19; // r10@24
  unsigned int v20; // r1@27
  unsigned int *v21; // r0@27
  unsigned int v22; // r2@30
  unsigned int v23; // r3@31
  unsigned int v24; // r1@32
  signed int v25; // r0@32
  int v26; // r4@36
  signed int v27; // r6@38
  char v29; // r0@42
  int v30; // r6@45
  LayoutComponent *v31; // r0@46
  int v32; // r6@48
  float v33; // r3@49
  char v38; // r0@53
  int v39; // r4@56
  int v40; // r0@57
  int v41; // r0@59
  unsigned int *v42; // r1@64
  unsigned int v43; // r0@66
  unsigned int *v44; // r4@70
  unsigned int v45; // r0@72
  unsigned int *v46; // r1@78
  unsigned int v47; // r0@80
  unsigned int *v48; // r4@84
  unsigned int v49; // r0@86
  unsigned int *v50; // r1@92
  unsigned int v51; // r0@94
  unsigned int *v52; // r4@98
  unsigned int v53; // r0@100
  signed int result; // r0@106
  int v55; // [sp+0h] [bp-48h]@53
  char v56; // [sp+4h] [bp-44h]@60
  int v57; // [sp+8h] [bp-40h]@60
  int v58; // [sp+Ch] [bp-3Ch]@59
  char v59; // [sp+14h] [bp-34h]@50
  float v61; // [sp+1Ch] [bp-2Ch]@49

  v1 = this;
  v2 = (UIControl *)UIComponent::getOwner(this);
  if ( UIControl::isVisibleInTree(v2) != 1 )
    goto LABEL_110;
  v3 = *((_DWORD *)v1 + 11);
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
          v8 = *v5;
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          goto LABEL_12;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v3 = 0;
LABEL_12:
  v10 = *((_DWORD *)v1 + 3);
  v11 = (UIControl *)*((_DWORD *)v1 + 10);
  if ( v9 )
    v11 = 0;
  if ( v10 )
    v12 = *(_DWORD *)(v10 + 4);
    v13 = (unsigned int *)(v10 + 4);
    while ( v12 )
      v14 = __ldrex(v13);
      if ( v14 == v12 )
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
        if ( !v15 )
          v16 = *v13;
          v17 = 0;
          if ( !v16 )
            v17 = 1;
          goto LABEL_24;
  v17 = 1;
  v10 = 0;
LABEL_24:
  v18 = *((_DWORD *)v1 + 2);
  v19 = *((_DWORD *)v1 + 9);
  if ( v17 )
    v18 = 0;
  if ( v19 )
    v20 = *(_DWORD *)(v19 + 4);
    v21 = (unsigned int *)(v19 + 4);
    while ( v20 )
      v22 = __ldrex(v21);
      if ( v22 == v20 )
        v23 = __strex(v20 + 1, v21);
        v20 = v22;
        if ( !v23 )
          v24 = *v21;
          v25 = 0;
          if ( !v24 )
            v25 = 1;
          goto LABEL_36;
  v25 = 1;
  v19 = 0;
LABEL_36:
  v26 = *((_DWORD *)v1 + 8);
  if ( v25 )
    v26 = 0;
  v27 = 0;
  if ( v11 )
    _ZF = v18 == 0;
    if ( v18 )
      _ZF = v26 == 0;
    if ( !_ZF )
      v29 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      if ( !(v29 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v30 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v26, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v31 = *(LayoutComponent **)(*(_DWORD *)(v26 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v26, v30));
        v31 = 0;
      v32 = LayoutComponent::getDraggable(v31);
      if ( v32 == 1 )
        ScrollViewComponent::_getContentSize((ScrollViewComponent *)&v61, (int)v1);
        __asm { VLDR            S0, [SP,#0x48+var_2C] }
        ScrollViewComponent::_getContentSize((ScrollViewComponent *)&v59, (int)v1);
        __asm { VLDR            S0, [SP,#0x48+var_30] }
      __asm { VMOV            R0, S0 }
      if ( mce::MathUtility::floatEqualsEpsilon(_R0, *((float *)v1 + 38), 0.000001, v33) )
        v27 = 0;
        v55 = UIControl::getVisible(v11);
        UIControl::setVisible(v11, 0, 0, 1);
        v38 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        __dmb();
        if ( !(v38 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v39 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v18, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v40 = *(_DWORD *)(*(_DWORD *)(v18 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v18, v39));
          if ( v40 )
          {
            LayoutComponent::layout(v40, (int)&unk_262C141, 2, 0);
            if ( v32 == 1 )
            {
              ScrollViewComponent::_getContentSize((ScrollViewComponent *)&v58, (int)v1);
              v41 = v58;
            }
            else
              ScrollViewComponent::_getContentSize((ScrollViewComponent *)&v56, (int)v1);
              v41 = v57;
            *((_DWORD *)v1 + 38) = v41;
          }
        v27 = 1;
        UIControl::setVisible(v11, v55, 0, 1);
    v42 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    else
      v43 = (*v42)--;
    if ( v43 == 1 )
      v44 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    v46 = (unsigned int *)(v10 + 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 == 1 )
      v48 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v50 = (unsigned int *)(v3 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      v52 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  if ( v27 )
    result = 1;
  else
LABEL_110:
    result = 0;
  return result;
}


char *__fastcall ScrollViewComponent::_updateTouchScrollbarVisibility(int a1, int a2)
{
  char *result; // r0@1
  int v8; // r8@4
  unsigned int v9; // r1@5
  unsigned int *v10; // r0@5
  unsigned int v11; // r2@8
  unsigned int v12; // r3@9
  unsigned int v13; // r1@10
  UIControl *v14; // r6@14
  UIControl **v16; // r4@19
  UIControl **v17; // r7@19
  unsigned int *v20; // r1@26
  unsigned int *v21; // r4@32

  _R5 = a1;
  _R6 = a2;
  result = (char *)*(_BYTE *)(a1 + 140);
  if ( !result )
  {
    result = (char *)ScrollbarDynamics::isMoving((ScrollbarDynamics *)(_R5 + 72));
    if ( !result )
    {
      __asm
      {
        VLDR            S0, [R5,#0x90]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v8 = *(_DWORD *)(_R5 + 36);
        __asm { VLDR            S16, [R6] }
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 4);
          v10 = (unsigned int *)(v8 + 4);
          while ( v9 )
          {
            __dmb();
            v11 = __ldrex(v10);
            if ( v11 == v9 )
            {
              v12 = __strex(v9 + 1, v10);
              v9 = v11;
              if ( !v12 )
              {
                __dmb();
                v13 = *v10;
                result = 0;
                if ( !v13 )
                  result = (char *)1;
                goto LABEL_14;
              }
            }
            else
              __clrex();
          }
        }
        result = (char *)1;
        v8 = 0;
LABEL_14:
        v14 = *(UIControl **)(_R5 + 32);
        if ( result )
          v14 = 0;
        _ZF = *(_BYTE *)(_R5 + 70) == 0;
        if ( *(_BYTE *)(_R5 + 70) )
          _ZF = v14 == 0;
        if ( !_ZF )
          result = UIControl::getChildren(v14);
          v16 = (UIControl **)(*(_QWORD *)result >> 32);
          v17 = (UIControl **)*(_QWORD *)result;
          if ( v17 != v16 )
            __asm { VLDR            S18, =0.0 }
            do
              _R0 = UIControl::getAlpha(*v17);
              __asm
                VMOV            S0, R0
                VSUB.F32        S20, S0, S16
                VCMPE.F32       S20, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                result = (char *)UIControl::setVisible(v14, 0, 1, 1);
                __asm { VMOV.F32        S20, S18 }
              else
                __asm { VMOV            R1, S20 }
                result = (char *)UIControl::setAlpha(*v17, _R1);
              v17 += 2;
              __asm { VSTR            S20, [R5,#0x90] }
            while ( v16 != v17 );
          v20 = (unsigned int *)(v8 + 4);
          if ( &pthread_create )
              result = (char *)__ldrex(v20);
            while ( __strex((unsigned int)(result - 1), v20) );
          else
            result = (char *)(*v20)--;
          if ( result == (char *)1 )
            v21 = (unsigned int *)(v8 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            if ( &pthread_create )
              __dmb();
              do
                result = (char *)__ldrex(v21);
              while ( __strex((unsigned int)(result - 1), v21) );
              result = (char *)(*v21)--;
            if ( result == (char *)1 )
              result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
  }
  return result;
}


int __fastcall ScrollViewComponent::isPointInViewPort(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r4@1
  unsigned int v4; // r5@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r0@5
  int v7; // r5@8
  UIControl *v8; // r0@8
  bool v9; // zf@8
  unsigned int v10; // r0@14
  unsigned int *v12; // r6@19
  unsigned int v13; // r0@21

  v2 = a1;
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
        v9 = __strex(v4 + 1, v5) == 0;
        v4 = v6;
        if ( v9 )
        {
          __dmb();
          v7 = 0;
          v8 = (UIControl *)*v5;
          v9 = *v5 == 0;
          if ( *v5 )
          {
            v8 = *(UIControl **)(v2 + 8);
            v9 = v8 == 0;
          }
          if ( !v9 )
            v7 = UIControl::containsPoint(v8, a2);
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v5);
            while ( __strex(v10 - 1, v5) );
          else
            v10 = (*v5)--;
          if ( v10 == 1 )
            v12 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            }
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


signed int __fastcall ScrollViewComponent::_updateDynamicsAndScrollPosition(int a1, float *a2)
{
  int v2; // r4@1
  float *v3; // r12@1
  int v4; // r6@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  signed int v10; // r0@7
  UIControl *v11; // r11@11
  int v12; // r7@11
  unsigned int v13; // r1@14
  unsigned int *v14; // r0@14
  unsigned int v15; // r2@17
  unsigned int v16; // r3@18
  unsigned int v17; // r1@19
  signed int v18; // r0@19
  int v19; // r5@23
  int v20; // r9@23
  unsigned int v21; // r1@26
  unsigned int *v22; // r0@26
  unsigned int v23; // r2@29
  unsigned int v24; // r3@30
  unsigned int v25; // r1@31
  signed int v26; // r0@31
  int v27; // r5@35
  int v28; // r8@35
  unsigned int v29; // r1@38
  unsigned int *v30; // r0@38
  unsigned int v31; // r2@41
  unsigned int v32; // r3@42
  unsigned int v33; // r1@43
  signed int v34; // r0@43
  UIControl *v35; // r10@47
  signed int v37; // r0@49
  bool v38; // zf@52
  float *v39; // r7@55
  char v40; // r0@55
  int v41; // r6@58
  LayoutComponent *v42; // r0@59
  __int64 v50; // r2@64
  int v59; // r6@76
  LayoutComponent *v60; // r6@77
  UIControl *v61; // r0@81
  int v62; // r4@81
  unsigned int v63; // r0@83
  signed int v64; // r2@87
  int v65; // r0@87
  signed int v66; // r1@89
  unsigned int v67; // r0@97
  signed int v68; // r2@101
  int v69; // r0@101
  signed int v70; // r1@103
  signed int v71; // r8@113
  unsigned int *v72; // r1@114
  unsigned int v73; // r0@116
  unsigned int *v74; // r4@120
  unsigned int v75; // r0@122
  unsigned int *v76; // r1@128
  unsigned int v77; // r0@130
  unsigned int *v78; // r4@134
  unsigned int v79; // r0@136
  unsigned int *v80; // r1@142
  unsigned int v81; // r0@144
  unsigned int *v82; // r4@148
  unsigned int v83; // r0@150
  unsigned int *v84; // r1@156
  unsigned int v85; // r0@158
  unsigned int *v86; // r4@162
  unsigned int v87; // r0@164
  LayoutComponent *v89; // [sp+0h] [bp-A0h]@60
  int v90; // [sp+4h] [bp-9Ch]@60
  int v91; // [sp+8h] [bp-98h]@55
  int v92; // [sp+Ch] [bp-94h]@31
  int v93; // [sp+10h] [bp-90h]@31
  int v94; // [sp+14h] [bp-8Ch]@97
  int v96; // [sp+1Ch] [bp-84h]@97
  float v97; // [sp+24h] [bp-7Ch]@86
  int v98; // [sp+28h] [bp-78h]@83
  float v99; // [sp+2Ch] [bp-74h]@96
  int v100; // [sp+30h] [bp-70h]@83
  char v101; // [sp+37h] [bp-69h]@81
  int v102; // [sp+38h] [bp-68h]@81
  const char *v103; // [sp+3Ch] [bp-64h]@81

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 28);
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
  v11 = *(UIControl **)(v2 + 24);
  v12 = *(_DWORD *)(v2 + 36);
  if ( v10 )
    v11 = 0;
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 4);
    v14 = (unsigned int *)(v12 + 4);
    while ( v13 )
      v15 = __ldrex(v14);
      if ( v15 == v13 )
        v16 = __strex(v13 + 1, v14);
        v13 = v15;
        if ( !v16 )
          v17 = *v14;
          v18 = 0;
          if ( !v17 )
            v18 = 1;
          goto LABEL_23;
  v18 = 1;
  v12 = 0;
LABEL_23:
  v19 = *(_DWORD *)(v2 + 20);
  v20 = *(_DWORD *)(v2 + 32);
  if ( v18 )
    v20 = 0;
  if ( v19 )
    v21 = *(_DWORD *)(v19 + 4);
    v22 = (unsigned int *)(v19 + 4);
    while ( v21 )
      v23 = __ldrex(v22);
      if ( v23 == v21 )
        v24 = __strex(v21 + 1, v22);
        v21 = v23;
        if ( !v24 )
          v92 = v19;
          v93 = v12;
          v25 = *v22;
          v26 = 0;
          if ( !v25 )
            v26 = 1;
          goto LABEL_35;
  v93 = v12;
  v26 = 1;
  v92 = 0;
LABEL_35:
  v28 = *(_QWORD *)(v2 + 12) >> 32;
  v27 = *(_QWORD *)(v2 + 12);
  if ( v26 )
    v28 = 0;
  if ( v27 )
    v29 = *(_DWORD *)(v27 + 4);
    v30 = (unsigned int *)(v27 + 4);
    while ( v29 )
      v31 = __ldrex(v30);
      if ( v31 == v29 )
        v32 = __strex(v29 + 1, v30);
        v29 = v31;
        if ( !v32 )
          v33 = *v30;
          v34 = 0;
          if ( !v33 )
            v34 = 1;
          goto LABEL_47;
  v34 = 1;
  v27 = 0;
LABEL_47:
  v35 = *(UIControl **)(v2 + 8);
  if ( v34 )
    v35 = 0;
  _ZF = v11 == 0;
  v37 = 1;
  if ( v11 )
    _ZF = v20 == 0;
  if ( !_ZF )
    v38 = v28 == 0;
    if ( v28 )
      v38 = v35 == 0;
    if ( !v38 )
      v39 = v3;
      v91 = v4;
      v40 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      if ( !(v40 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v41 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v28, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
        && (v42 = *(LayoutComponent **)(*(_DWORD *)(v28 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v28, v41))) != 0 )
        v89 = v42;
        v90 = LayoutComponent::getDraggable(v42);
        _R0 = UIControl::getSize((UIControl *)v28);
        __asm
          VLDR            S18, [R0]
          VLDR            S16, [R0,#4]
        _R0 = UIControl::getSize(v35);
          VLDR            S24, [R0,#4]
          VLDR            S22, [R0]
          VSUB.F32        S16, S16, S24
          VSUB.F32        S18, S18, S22
          VLDR            S26, =0.0
          VMOV.F32        S20, S16
        if ( _ZF )
          __asm { VMOVEQ.F32      S20, S18 }
          VCMPE.F32       S20, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S20, S26 }
        _R10 = ScrollbarDynamics::getMaxRange((ScrollbarDynamics *)(v2 + 72));
        __asm { VMOV            R8, S20 }
        *(float *)&v50 = _R8;
        ScrollbarDynamics::setMinMaxRange((ScrollbarDynamics *)(v2 + 72), 0.0, v50);
        __asm { VMOV.F32        S0, #0.25 }
        if ( v90 == 1 )
          __asm { VMOVEQ.F32      S24, S22 }
          VMUL.F32        S0, S24, S0
          VCMPE.F32       S0, #0.0
          __asm { VMOVLT.F32      S0, S26 }
        __asm { VMOV            R1, S0 }
        ScrollbarDynamics::setMaxDisplacementPastMinMax((ScrollbarDynamics *)(v2 + 72), _R1);
          VMOV            S0, R10
          VCMPE.F32       S20, S0
        if ( !_ZF )
          _ZF = *(_BYTE *)(v2 + 148) == 0;
          ScrollbarDynamics::setPos((ScrollbarDynamics *)(v2 + 72), _R8);
        _R8 = ScrollbarDynamics::getLastPos((ScrollbarDynamics *)(v2 + 72));
        ScrollbarDynamics::update((ScrollbarDynamics *)(v2 + 72), *v39);
        _R0 = ScrollbarDynamics::getCurrentPos((ScrollbarDynamics *)(v2 + 72));
          VMOV.F32        S4, #8.0
          VMOV            S2, R0
          VMOV            S0, R8
          VMUL.F32        S2, S2, S4
          VMUL.F32        S4, S0, S4
          VCVTR.S32.F32   S0, S2
          VCVTR.S32.F32   S2, S4
          VMOV            R0, S0
          VMOV            R1, S2
        if ( _R0 != _R1 )
          __asm { VCVT.F32.S32    S24, S0 }
          _R0 = UIControl::getSize(v11);
          __asm
          {
            VLDR            S20, [R0]
            VLDR            S22, [R0,#4]
          }
          _R0 = UIControl::getSize((UIControl *)v20);
            VLDR            S26, [R0]
            VLDR            S28, [R0,#4]
          LOBYTE(_R0) = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          if ( !((unsigned __int8)_R0 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          v59 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v20, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
            v60 = *(LayoutComponent **)(*(_DWORD *)(v20 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v20, v59));
          else
            v60 = 0;
            VMOV.F32        S0, #0.125
            VMUL.F32        S24, S24, S0
            VCMPE.F32       S24, S16
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF) )
            v61 = (UIControl *)UIComponent::getOwner((UIComponent *)v2);
            v62 = UIControl::getPropertyBag(v61);
            gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v102, (int)"#scrollbar_hit_bottom");
            v101 = 1;
            UIPropertyBag::set<bool>(v62, v102, v103, &v101);
          __asm { VNEG.F32        S0, S24 }
          if ( v90 == 1 )
            __asm
            {
              VSTR            S0, [SP,#0xA0+var_74]
              VSTR            S0, [SP,#0xA0+var_7C]
            }
            v100 = 0;
            v98 = 0;
            v63 = LayoutComponent::getAnchorFrom(v89);
            if ( v63 <= 8 )
              if ( (1 << v63) & 0x124 )
              {
                __asm
                {
                  VCMPE.F32       S18, #0.0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  __asm
                  {
                    VLDRGT          S0, [SP,#0xA0+var_7C]
                    VADDGT.F32      S0, S0, S18
                    VSTRGT          S0, [SP,#0xA0+var_7C]
                  }
              }
            _ZF = v63 == 8;
            v64 = 0;
            v65 = v63 | 1;
            if ( _ZF )
              v64 = 1;
            v66 = 0;
            if ( v65 == 7 )
              v66 = 1;
              VCMPE.F32       S16, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && (v64 | v66) == 1 )
              __asm
                VLDREQ          S0, [SP,#0xA0+var_78]
                VADDEQ.F32      S0, S0, S16
                VSTREQ          S0, [SP,#0xA0+var_78]
            LayoutComponent::setOffsetDelta(v89, (int)&v97, 0);
            LayoutComponent::layout((int)v89, (int)&unk_262C13B, 1, 0);
              VMOV.F32        S2, #0.5
              VDIV.F32        S0, S24, S18
              VCMPE.F32       S18, S2
              VSUB.F32        S6, S20, S26
              VMOV.F32        S4, #1.0
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S4, S0 }
              VMUL.F32        S0, S6, S4
            LayoutComponent::setOffsetDelta(v60, (int)&v99, 0);
            LayoutComponent::layout((int)v60, (int)&unk_262C13C, 1, 0);
            v96 = 0;
            v94 = 0;
              VSTR            S0, [SP,#0xA0+var_80]
              VSTR            S0, [SP,#0xA0+var_88]
            v67 = LayoutComponent::getAnchorFrom(v89);
            if ( v67 <= 8 )
              if ( (1 << v67) & 0x124 )
                    VLDRGT          S0, [SP,#0xA0+var_8C]
                    VSTRGT          S0, [SP,#0xA0+var_8C]
            _ZF = v67 == 8;
            v68 = 0;
            v69 = v67 | 1;
              v68 = 1;
            v70 = 0;
            if ( v69 == 7 )
              v70 = 1;
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && (v68 | v70) == 1 )
                VLDREQ          S0, [SP,#0xA0+var_88]
                VSTREQ          S0, [SP,#0xA0+var_88]
            LayoutComponent::setOffsetDelta(v89, (int)&v94, 0);
            LayoutComponent::layout((int)v89, (int)&unk_262C13D, 1, 0);
              VDIV.F32        S0, S24, S16
              VCMPE.F32       S16, S2
              VSUB.F32        S6, S22, S28
            LayoutComponent::setOffsetDelta(v60, (int)&v96, 0);
            LayoutComponent::layout((int)v60, (int)&unk_262C13E, 1, 0);
        v37 = 0;
        v37 = 1;
      v4 = v91;
  v71 = v37;
    v72 = (unsigned int *)(v27 + 4);
    if ( &pthread_create )
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
    else
      v73 = (*v72)--;
    if ( v73 == 1 )
      v74 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
      if ( &pthread_create )
        __dmb();
        do
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  if ( v92 )
    v76 = (unsigned int *)(v92 + 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 == 1 )
      v78 = (unsigned int *)(v92 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
  if ( v93 )
    v80 = (unsigned int *)(v93 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v93 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v93 + 8))(v93);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v93 + 12))(v93);
    v84 = (unsigned int *)(v4 + 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 == 1 )
      v86 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v71;
}


int __fastcall ScrollViewComponent::getBoxAndTrackPanel(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 40);
  v2 = *(_DWORD *)(a2 + 44);
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


unsigned int __fastcall ScrollViewComponent::_updateScroll(int a1, int a2, int a3)
{
  int v3; // r11@1
  int v4; // r4@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r6@5
  signed int v8; // r12@8
  int v9; // r6@12
  int v10; // lr@12
  unsigned int v11; // r3@13
  unsigned int *v12; // r2@13
  unsigned int v13; // r0@16
  unsigned int v14; // r0@19
  signed int v15; // r2@19
  int v16; // r9@23
  int v17; // r5@23
  unsigned int v18; // r3@26
  unsigned int *v19; // r2@26
  unsigned int v20; // r0@29
  unsigned int v21; // r0@32
  __int64 v22; // r2@32
  int v23; // r8@36
  int v24; // r6@36
  unsigned int v25; // r0@37
  unsigned int *v26; // r7@37
  unsigned int v27; // r1@40
  unsigned int v28; // r4@41
  unsigned int v29; // r0@42
  signed int v30; // r7@42
  unsigned int result; // r0@46
  char v33; // r0@57
  int v34; // r10@60
  LayoutComponent *v35; // r10@61
  int v36; // r4@63
  unsigned int v37; // r1@64
  unsigned int *v38; // r0@64
  unsigned int v39; // r2@67
  unsigned int v40; // r3@68
  signed int v41; // r1@69
  UIControl *v42; // r0@73
  int v43; // r6@73
  unsigned int v44; // r2@76
  unsigned int *v45; // r1@76
  unsigned int v46; // r3@79
  unsigned int v47; // r7@80
  UIControl *v48; // r5@83
  float v54; // r3@85
  UIControl *v59; // r0@100
  int v60; // r5@100
  unsigned int *v62; // r1@102
  int v63; // r5@108
  unsigned int *v64; // r4@108
  unsigned int *v65; // r1@116
  int v66; // r0@122
  unsigned int *v67; // r4@122
  int v68; // t1@122
  int v69; // r5@122
  unsigned int v70; // r0@124
  unsigned int *v71; // r1@131
  unsigned int *v72; // r4@137
  unsigned int *v73; // r1@145
  unsigned int *v74; // r4@151
  unsigned int *v75; // r1@159
  unsigned int *v76; // r4@165
  unsigned int *v77; // r1@173
  unsigned int *v78; // r4@179
  __int64 v79; // [sp+0h] [bp-88h]@8
  int v80; // [sp+8h] [bp-80h]@32
  int v81; // [sp+Ch] [bp-7Ch]@32
  int v82; // [sp+10h] [bp-78h]@101
  int v83; // [sp+14h] [bp-74h]@101
  int v84; // [sp+18h] [bp-70h]@101
  int v85; // [sp+1Ch] [bp-6Ch]@101
  char v86; // [sp+20h] [bp-68h]@101
  int v87; // [sp+28h] [bp-60h]@101
  int v88; // [sp+2Ch] [bp-5Ch]@101
  char v89; // [sp+37h] [bp-51h]@100
  int v90; // [sp+38h] [bp-50h]@100
  const char *v91; // [sp+3Ch] [bp-4Ch]@100

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 28);
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
        _ZF = __strex(v5 + 1, v6) == 0;
        v5 = v7;
        if ( _ZF )
        {
          v79 = *(_QWORD *)&a2;
          v8 = 0;
          __dmb();
          if ( !*v6 )
            v8 = 1;
          goto LABEL_12;
        }
      }
      else
        __clrex();
    }
  }
  v79 = *(_QWORD *)&a2;
  v8 = 1;
  v4 = 0;
LABEL_12:
  v9 = *(_DWORD *)(v3 + 36);
  v10 = *(_DWORD *)(v3 + 24);
  if ( v9 )
    v11 = *(_DWORD *)(v9 + 4);
    v12 = (unsigned int *)(v9 + 4);
    while ( v11 )
      v13 = __ldrex(v12);
      if ( v13 == v11 )
        _ZF = __strex(v11 + 1, v12) == 0;
        v11 = v13;
          v14 = *v12;
          v15 = 0;
          if ( !v14 )
            v15 = 1;
          goto LABEL_23;
  v15 = 1;
  v9 = 0;
LABEL_23:
  v16 = *(_DWORD *)(v3 + 12);
  v17 = *(_DWORD *)(v3 + 32);
  if ( v15 )
    v17 = 0;
  if ( v16 )
    v18 = *(_DWORD *)(v16 + 4);
    v19 = (unsigned int *)(v16 + 4);
    while ( v18 )
      v20 = __ldrex(v19);
      if ( v20 == v18 )
        _ZF = __strex(v18 + 1, v19) == 0;
        v18 = v20;
          v80 = v9;
          v81 = v4;
          v21 = *v19;
          LODWORD(v22) = 0;
          if ( !v21 )
            LODWORD(v22) = 1;
          goto LABEL_36;
  v80 = v9;
  v81 = v4;
  LODWORD(v22) = 1;
  v16 = 0;
LABEL_36:
  v23 = *(_DWORD *)(v3 + 20);
  HIDWORD(v22) = 0;
  v24 = *(_DWORD *)(v3 + 8);
  if ( v23 )
    v25 = *(_DWORD *)(v23 + 4);
    v26 = (unsigned int *)(v23 + 4);
    while ( v25 )
      v27 = __ldrex(v26);
      if ( v27 == v25 )
        v28 = __strex(v25 + 1, v26);
        v25 = v27;
        if ( !v28 )
          v29 = *v26;
          v30 = 0;
          if ( !v29 )
            v30 = 1;
          goto LABEL_46;
  v30 = 1;
  v23 = 0;
LABEL_46:
  result = 0;
  if ( !v10 )
    result = 1;
  if ( !v24 )
    HIDWORD(v22) = 1;
  _ZF = v22 == 0;
  if ( !v22 )
    result |= v8;
    _ZF = result == 0;
  if ( _ZF )
    if ( v17 )
      if ( !v30 )
        result = *(_DWORD *)(v3 + 16);
        if ( result )
          v33 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          if ( !(v33 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          {
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          }
          v34 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          result = UIControl::_hasComponent((UIControl *)v17, type_id<UIComponent,LayoutComponent>(void)::id[0]);
          if ( result == 1 )
            result = UIControl::_getComponentIndex((UIControl *)v17, v34);
            v35 = *(LayoutComponent **)(*(_DWORD *)(v17 + 108) + 4 * result);
            if ( v35 )
            {
              result = HIDWORD(v79) ^ 1;
              if ( HIDWORD(v79) == 1 )
              {
                v36 = *(_DWORD *)(v3 + 20);
                if ( v36 )
                {
                  v37 = *(_DWORD *)(v36 + 4);
                  v38 = (unsigned int *)(v36 + 4);
                  while ( v37 )
                  {
                    __dmb();
                    v39 = __ldrex(v38);
                    if ( v39 == v37 )
                    {
                      v40 = __strex(v37 + 1, v38);
                      v37 = v39;
                      if ( !v40 )
                      {
                        __dmb();
                        v41 = 0;
                        if ( !*v38 )
                          v41 = 1;
                        goto LABEL_73;
                      }
                    }
                    else
                      __clrex();
                  }
                }
                v41 = 1;
                v36 = 0;
LABEL_73:
                v42 = (UIControl *)(*(_QWORD *)(v3 + 12) >> 32);
                v43 = *(_QWORD *)(v3 + 12);
                if ( v41 )
                  v42 = 0;
                if ( v43 )
                  v44 = *(_DWORD *)(v43 + 4);
                  v45 = (unsigned int *)(v43 + 4);
                  while ( v44 )
                    v46 = __ldrex(v45);
                    if ( v46 == v44 )
                      v47 = __strex(v44 + 1, v45);
                      v44 = v46;
                      if ( !v47 )
                        *v45;
                        goto LABEL_83;
                v43 = 0;
LABEL_83:
                v48 = *(UIControl **)(v3 + 8);
                _R0 = UIControl::getSize(v42);
                __asm
                  VLDR            S16, [R0]
                  VLDR            S18, [R0,#4]
                if ( !_ZF )
                  v48 = 0;
                _R0 = UIControl::getSize(v48);
                  VLDR            S20, [R0]
                  VLDR            S22, [R0,#4]
                if ( LayoutComponent::getDraggable(v35) == 1 )
                  _R0 = v79;
                  __asm
                    VSUB.F32        S0, S16, S20
                    VLDR            S2, =0.0
                    VLDR            S4, [R0]
                    VMOV.F32        S16, S2
                    VCMPE.F32       S4, #0.0
                    VMRS            APSR_nzcv, FPSCR
                    VCMPE.F32       S0, #0.0
                  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                    __asm { VMOVGT.F32      S16, S4 }
                  __asm { VMRS            APSR_nzcv, FPSCR }
                    __asm { VMOVGT.F32      S2, S0 }
                    VCMPE.F32       S4, S2
                    __asm { VMOVGT.F32      S16, S2 }
                else
                    VSUB.F32        S0, S18, S22
                    VLDR            S4, [R0,#4]
                    VMOV            R1, S2
                  __asm { VMOV            R0, S16 }
                  if ( mce::MathUtility::floatEqualsEpsilon(_R0, _R1, 0.1, v54) == 1 )
                    v59 = (UIControl *)UIComponent::getOwner((UIComponent *)v3);
                    v60 = UIControl::getPropertyBag(v59);
                    gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v90, (int)"#scrollbar_hit_bottom");
                    v89 = 1;
                    UIPropertyBag::set<bool>(v60, v90, v91, &v89);
                __asm { VMOV            R1, S16 }
                ScrollbarDynamics::setPos((ScrollbarDynamics *)(v3 + 72), _R1);
                v87 = 0;
                v88 = 0;
                v86 = 0;
                v84 = 0;
                v85 = 0;
                v82 = 0;
                v83 = 0;
                ScrollViewComponent::_updateTouchScrollbarVisibility(v3, (int)&v82);
                result = ScrollViewComponent::_updateDynamicsAndScrollPosition(v3, (float *)&v82);
                  v62 = (unsigned int *)(v43 + 4);
                  if ( &pthread_create )
                    do
                      result = __ldrex(v62);
                    while ( __strex(result - 1, v62) );
                  else
                    result = (*v62)--;
                  if ( result == 1 )
                    v63 = v36;
                    v64 = (unsigned int *)(v43 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
                    if ( &pthread_create )
                      __dmb();
                      do
                        result = __ldrex(v64);
                      while ( __strex(result - 1, v64) );
                      result = (*v64)--;
                    v36 = v63;
                    if ( result == 1 )
                      result = (*(int (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
                  v65 = (unsigned int *)(v36 + 4);
                      result = __ldrex(v65);
                    while ( __strex(result - 1, v65) );
                    result = (*v65)--;
                    v66 = v36;
                    v68 = *(_DWORD *)v36;
                    v67 = (unsigned int *)(v36 + 8);
                    v69 = v66;
                    (*(void (**)(void))(v68 + 8))();
                        v70 = __ldrex(v67);
                      while ( __strex(v70 - 1, v67) );
                      v70 = (*v67)--;
                    _ZF = v70 == 1;
                    result = v69;
                    if ( _ZF )
                      result = (*(int (**)(void))(*(_DWORD *)v69 + 12))();
              }
            }
    v71 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v71);
      while ( __strex(result - 1, v71) );
    else
      result = (*v71)--;
    if ( result == 1 )
      v72 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v72);
        while ( __strex(result - 1, v72) );
        result = (*v72)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v73 = (unsigned int *)(v16 + 4);
        result = __ldrex(v73);
      while ( __strex(result - 1, v73) );
      result = (*v73)--;
      v74 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v74);
        while ( __strex(result - 1, v74) );
        result = (*v74)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  if ( v80 )
    v75 = (unsigned int *)(v80 + 4);
        result = __ldrex(v75);
      while ( __strex(result - 1, v75) );
      result = (*v75)--;
      v76 = (unsigned int *)(v80 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 8))(v80);
          result = __ldrex(v76);
        while ( __strex(result - 1, v76) );
        result = (*v76)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v80 + 12))(v80);
  if ( v81 )
    v77 = (unsigned int *)(v81 + 4);
        result = __ldrex(v77);
      while ( __strex(result - 1, v77) );
      result = (*v77)--;
      v78 = (unsigned int *)(v81 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 8))(v81);
          result = __ldrex(v78);
        while ( __strex(result - 1, v78) );
        result = (*v78)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v81 + 12))(v81);
  return result;
}


int __fastcall ScrollViewComponent::setScrollbarReleasedEventId(int result, __int16 a2)
{
  *(_WORD *)(result + 54) = a2;
  return result;
}


int __fastcall ScrollViewComponent::_handlePointerMove(ScreenEvent *a1, int a2, int a3, int a4, ScreenEvent *a5, _WORD *a6)
{
  ScreenEvent *v6; // r7@1
  int v7; // r8@2
  unsigned int v8; // r1@3
  unsigned int *v9; // r0@3
  unsigned int v10; // r2@6
  unsigned int v11; // r3@7
  unsigned int v12; // r1@8
  signed int v13; // r0@8
  int v14; // r4@12
  int v15; // r9@12
  unsigned int v16; // r1@15
  unsigned int *v17; // r0@15
  unsigned int v18; // r2@18
  unsigned int v19; // r3@19
  signed int v20; // r12@20
  int v21; // r2@24
  int v22; // r11@24
  signed int v23; // r1@24
  unsigned int v24; // r5@25
  unsigned int *v25; // r3@25
  unsigned int v26; // r6@28
  unsigned int v27; // r0@29
  unsigned int v28; // r0@30
  signed int v29; // r3@30
  char v31; // r0@42
  int v32; // r5@45
  LayoutComponent *v33; // r0@46
  signed int v35; // r4@48
  unsigned int *v36; // r1@51
  unsigned int v37; // r0@53
  unsigned int *v38; // r5@57
  unsigned int v39; // r0@59
  unsigned int *v40; // r1@65
  unsigned int v41; // r0@67
  unsigned int *v42; // r5@71
  unsigned int v43; // r0@73
  unsigned int *v44; // r1@79
  unsigned int v45; // r0@81
  unsigned int *v46; // r5@85
  unsigned int v47; // r0@87
  int result; // r0@93

  v6 = a1;
  if ( *((_BYTE *)a1 + 58) != 1 )
    goto LABEL_103;
  v7 = *((_DWORD *)a1 + 9);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = (unsigned int *)(v7 + 4);
    while ( v8 )
    {
      __dmb();
      v10 = __ldrex(v9);
      if ( v10 == v8 )
      {
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
        if ( !v11 )
        {
          __dmb();
          v12 = *v9;
          v13 = 0;
          if ( !v12 )
            v13 = 1;
          goto LABEL_12;
        }
      }
      else
        __clrex();
    }
  }
  v13 = 1;
  v7 = 0;
LABEL_12:
  v14 = *(_QWORD *)((char *)v6 + 28) >> 32;
  v15 = *(_QWORD *)((char *)v6 + 28);
  if ( v13 )
    v14 = 0;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4);
    v17 = (unsigned int *)(v15 + 4);
    while ( v16 )
      v18 = __ldrex(v17);
      if ( v18 == v16 )
        v19 = __strex(v16 + 1, v17);
        v16 = v18;
        if ( !v19 )
          v20 = 0;
          if ( !*v17 )
            v20 = 1;
          goto LABEL_24;
  v20 = 1;
  v15 = 0;
LABEL_24:
  v21 = *(_QWORD *)((char *)v6 + 20) >> 32;
  v22 = *(_QWORD *)((char *)v6 + 20);
  v23 = 0;
  if ( v22 )
    v24 = *(_DWORD *)(v22 + 4);
    v25 = (unsigned int *)(v22 + 4);
    while ( v24 )
      v26 = __ldrex(v25);
      if ( v26 == v24 )
        v27 = __strex(v24 + 1, v25);
        v24 = v26;
        if ( !v27 )
          v28 = *v25;
          v29 = 0;
          if ( !v28 )
            v29 = 1;
          goto LABEL_34;
  v29 = 1;
  v22 = 0;
LABEL_34:
  if ( !v21 )
    v23 = 1;
  if ( !v14 )
    goto LABEL_104;
  _ZF = (v20 | v23) == 0;
  if ( !(v20 | v23) )
    _ZF = v29 == 0;
  if ( !_ZF || !*((_DWORD *)v6 + 4) )
  v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v31 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v32 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v14, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
    && (v33 = *(LayoutComponent **)(*(_DWORD *)(v14 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v14, v32))) != 0 )
    _R4 = a5;
    if ( *((_BYTE *)v6 + 59) == 1 )
      ScrollViewComponent::_updateScrollFromScrollBox(v6, a5);
      v35 = 1;
    else if ( *((_BYTE *)v6 + 68) )
      __asm { VLDR            S16, [R4,#0x10] }
      if ( LayoutComponent::getDraggable(v33) == 1 )
        __asm { VLDREQ          S16, [R4,#0xC] }
      __asm { VMOV            R1, S16 }
      ScrollbarDynamics::adjustTargetPos((ScreenEvent *)((char *)v6 + 72), COERCE_FLOAT(_R1 ^ 0x80000000));
      v35 = 0;
      *a6 = 0;
    else
  else
LABEL_104:
    v35 = 1;
    *a6 = 0;
    v36 = (unsigned int *)(v22 + 4);
    if ( &pthread_create )
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      if ( &pthread_create )
        __dmb();
        do
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    v40 = (unsigned int *)(v15 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v44 = (unsigned int *)(v7 + 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      v46 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  if ( v35 )
    result = 1;
LABEL_103:
    result = 0;
  return result;
}


int __fastcall ScrollViewComponent::_updateScrollBoxSize(ScrollViewComponent *this)
{
  int v2; // r10@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  int v9; // lr@11
  UIControl *v10; // r1@11
  unsigned int v11; // r1@14
  unsigned int *v12; // r0@14
  unsigned int v13; // r2@17
  unsigned int v14; // r3@18
  unsigned int v15; // r1@19
  signed int v16; // r0@19
  int v17; // r5@23
  int v18; // r1@23
  unsigned int v19; // r1@26
  unsigned int *v20; // r0@26
  unsigned int v21; // r2@29
  unsigned int v22; // r3@30
  signed int v23; // r12@31
  int v24; // r1@35
  int v25; // r9@35
  unsigned int v26; // r3@36
  unsigned int *v27; // r2@36
  unsigned int v28; // r7@39
  unsigned int v29; // r6@40
  unsigned int v30; // r3@41
  signed int v31; // r2@41
  UIControl *v32; // r7@45
  int v33; // r0@45
  signed int v34; // r2@47
  unsigned int v35; // r4@48
  unsigned int *v36; // r3@48
  unsigned int v37; // r6@51
  unsigned int v38; // r0@52
  int v39; // r6@53
  unsigned int v40; // r0@53
  signed int v41; // r3@53
  UIControl *v42; // r8@57
  bool v44; // zf@65
  char v46; // r0@68
  int v47; // r7@71
  LayoutComponent *v48; // r7@72
  int v49; // r9@74
  char *v50; // r0@74
  UIControl *v54; // r0@90
  int v55; // r5@90
  float v58; // r1@107
  float v61; // r1@111
  int result; // r0@112
  unsigned int *v65; // r1@113
  unsigned int v66; // r5@115
  unsigned int *v67; // r5@119
  unsigned int v68; // r3@121
  unsigned int *v69; // r1@127
  unsigned int *v70; // r4@133
  unsigned int *v71; // r1@141
  unsigned int *v72; // r4@147
  unsigned int *v73; // r1@155
  unsigned int *v74; // r4@161
  unsigned int *v75; // r1@169
  unsigned int *v76; // r4@175
  int v77; // [sp+4h] [bp-54h]@25
  int v78; // [sp+8h] [bp-50h]@53
  int v79; // [sp+Ch] [bp-4Ch]@53
  UIControl *v80; // [sp+10h] [bp-48h]@13
  int v81; // [sp+14h] [bp-44h]@48
  char v82; // [sp+1Bh] [bp-3Dh]@90
  int v83; // [sp+1Ch] [bp-3Ch]@90
  const char *v84; // [sp+20h] [bp-38h]@90
  mce::Math *v85; // [sp+24h] [bp-34h]@74
  mce::Math *v86; // [sp+28h] [bp-30h]@74
  char v87; // [sp+2Ch] [bp-2Ch]@68

  _R11 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)_R11 + 9);
  v10 = (UIControl *)*((_DWORD *)_R11 + 6);
  if ( v8 )
    v10 = 0;
  v80 = v10;
  if ( v9 )
    v11 = *(_DWORD *)(v9 + 4);
    v12 = (unsigned int *)(v9 + 4);
    while ( v11 )
      v13 = __ldrex(v12);
      if ( v13 == v11 )
        v14 = __strex(v11 + 1, v12);
        v11 = v13;
        if ( !v14 )
          v15 = *v12;
          v16 = 0;
          if ( !v15 )
            v16 = 1;
          goto LABEL_23;
  v16 = 1;
  v9 = 0;
LABEL_23:
  v17 = *((_DWORD *)_R11 + 5);
  v18 = *((_DWORD *)_R11 + 8);
  if ( v16 )
    v18 = 0;
  v77 = v18;
  if ( v17 )
    v19 = *(_DWORD *)(v17 + 4);
    v20 = (unsigned int *)(v17 + 4);
    while ( v19 )
      v21 = __ldrex(v20);
      if ( v21 == v19 )
        v22 = __strex(v19 + 1, v20);
        v19 = v21;
        if ( !v22 )
          v23 = 0;
          if ( !*v20 )
            v23 = 1;
          goto LABEL_35;
  v23 = 1;
  v17 = 0;
LABEL_35:
  v25 = *(_QWORD *)((char *)_R11 + 12) >> 32;
  v24 = *(_QWORD *)((char *)_R11 + 12);
  if ( v24 )
    v26 = *(_DWORD *)(v24 + 4);
    v27 = (unsigned int *)(v24 + 4);
    while ( v26 )
      v28 = __ldrex(v27);
      if ( v28 == v26 )
        v29 = __strex(v26 + 1, v27);
        v26 = v28;
        if ( !v29 )
          v30 = *v27;
          v31 = 0;
          if ( !v30 )
            v31 = 1;
          goto LABEL_45;
  v31 = 1;
  v24 = 0;
LABEL_45:
  v32 = (UIControl *)*((_DWORD *)_R11 + 2);
  v33 = *((_DWORD *)_R11 + 11);
  if ( v31 )
    v32 = 0;
  v34 = 0;
  if ( v33 )
    v35 = *(_DWORD *)(v33 + 4);
    v36 = (unsigned int *)(v33 + 4);
    v81 = *((_DWORD *)_R11 + 11);
    while ( v35 )
      v37 = __ldrex(v36);
      if ( v37 == v35 )
        v38 = __strex(v35 + 1, v36);
        v35 = v37;
        if ( !v38 )
          v78 = v17;
          v79 = v9;
          v39 = v24;
          v40 = *v36;
          v41 = 0;
          if ( !v40 )
            v41 = 1;
          goto LABEL_57;
  v78 = v17;
  v79 = v9;
  v39 = v24;
  v41 = 1;
  v81 = 0;
LABEL_57:
  v42 = (UIControl *)*((_DWORD *)_R11 + 10);
  if ( v41 )
    v42 = 0;
  if ( !v25 )
    v34 = 1;
  _ZF = v80 == 0;
  if ( v80 )
    _ZF = v77 == 0;
  if ( !_ZF && !(v23 | v34) )
    v44 = v32 == 0;
    if ( v32 )
      v44 = v42 == 0;
    if ( !v44 )
      ScrollViewComponent::_getContentSize((ScrollViewComponent *)&v87, (int)_R11);
      _R4 = UIControl::getSize(v32);
      v46 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      if ( !(v46 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v47 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v77, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v48 = *(LayoutComponent **)(*(_DWORD *)(v77 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v77, v47));
        v48 = 0;
      v49 = LayoutComponent::getDraggable(v48);
      v50 = UIControl::getSize((UIControl *)v77);
      v85 = *(mce::Math **)v50;
      v86 = (mce::Math *)*((_DWORD *)v50 + 1);
      __asm
        VLDR            S0, [R11,#0x98]
        VCMPE.F32       S0, #0.0
      if ( _ZF )
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm { VMOV.F32        S0, #1.0 }
          goto LABEL_87;
        __asm { VLDR            S2, [R4] }
        __asm { VLDR            S2, [R4,#4] }
        VDIV.F32        S2, S2, S0
        VLDR            S0, =0.1
        VMOV.F32        S4, #1.0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, S4
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S0, S4 }
LABEL_87:
      if ( (unsigned __int8)(v49 - 1) <= 1u )
        __asm
          VMOV.F32        S2, #1.0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          UIControl::setVisible(v42, 0, 1, 1);
          v54 = (UIControl *)UIComponent::getOwner(_R11);
          v55 = UIControl::getPropertyBag(v54);
          gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v83, (int)"#scrollbar_hit_bottom");
          v82 = 1;
          UIPropertyBag::set<bool>(v55, v83, v84, &v82);
          goto LABEL_112;
      UIControl::setVisible(v42, 1, 1, 1);
      _R0 = UIControl::getSize(v80);
      _R1 = &v86;
        VLDR            S4, [R11,#0x98]
        VLDR            S0, [R1,#-4]
        VCMPE.F32       S4, #0.0
        VLDR            S2, [R1]
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm
          {
            VLDR            S4, [R1,#4]
            VLDR            S6, [R4]
          }
LABEL_97:
            VDIV.F32        S6, S6, S4
            VLDR            S4, =0.1
            VMOV.F32        S8, #1.0
            VCMPE.F32       S6, S4
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S6, S8
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S4, S6 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S4, S8 }
          goto LABEL_104;
        __asm { VMOV.F32        S4, #1.0 }
            VLDR            S4, [R1,#8]
            VLDR            S6, [R4,#4]
          goto LABEL_97;
LABEL_104:
      if ( v49 != 2 )
        goto LABEL_184;
        VLDR            S6, [R1,#8]
        VCMPE.F32       S6, #0.0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_184:
        if ( v49 == 1 )
            VLDR            S2, [R1,#4]
            VCMPE.F32       S2, #0.0
            __asm
            {
              VLDR            S2, [R0]
              VMUL.F32        S2, S2, S4
              VCMPE.F32       S2, S0
              VSTR            S2, [R1,#-4]
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !_ZF )
              UIControl::setSize(v77, (int)&v85);
              _R0 = mce::Math::ceil(v85, v61);
              __asm
              {
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
                VMOV            R2, S0
              }
              LayoutComponent::setVariableOverrideValue(v48, 2, _R2);
              LayoutComponent::layout((int)v48, (int)&unk_262C140, 1, 0);
          VLDR            S0, [R0,#4]
          VMUL.F32        S0, S0, S4
          VSTR            S0, [R1]
        if ( !_ZF )
          UIControl::setSize(v77, (int)&v85);
          _R0 = mce::Math::ceil(v86, v58);
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
            VMOV            R2, S0
          LayoutComponent::setVariableOverrideValue(v48, 3, _R2);
          LayoutComponent::layout((int)v48, (int)&unk_262C13F, 1, 0);
      goto LABEL_112;
LABEL_112:
  result = v81;
  if ( v81 )
    v65 = (unsigned int *)(v81 + 4);
    if ( &pthread_create )
      do
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
    else
      v66 = (*v65)--;
    if ( v66 == 1 )
      v67 = (unsigned int *)(v81 + 8);
      (*(void (**)(void))(*(_DWORD *)v81 + 8))();
      if ( &pthread_create )
        __dmb();
        do
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      result = v81;
      if ( v68 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)v81 + 12))();
  if ( v39 )
    v69 = (unsigned int *)(v39 + 4);
        result = __ldrex(v69);
      while ( __strex(result - 1, v69) );
      result = (*v69)--;
    if ( result == 1 )
      v70 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          result = __ldrex(v70);
        while ( __strex(result - 1, v70) );
        result = (*v70)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  if ( v78 )
    v71 = (unsigned int *)(v78 + 4);
        result = __ldrex(v71);
      while ( __strex(result - 1, v71) );
      result = (*v71)--;
      v72 = (unsigned int *)(v78 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 8))(v78);
          result = __ldrex(v72);
        while ( __strex(result - 1, v72) );
        result = (*v72)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v78 + 12))(v78);
  if ( v79 )
    v73 = (unsigned int *)(v79 + 4);
        result = __ldrex(v73);
      while ( __strex(result - 1, v73) );
      result = (*v73)--;
      v74 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          result = __ldrex(v74);
        while ( __strex(result - 1, v74) );
        result = (*v74)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
    v75 = (unsigned int *)(v2 + 4);
        result = __ldrex(v75);
      while ( __strex(result - 1, v75) );
      result = (*v75)--;
      v76 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v76);
        while ( __strex(result - 1, v76) );
        result = (*v76)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


signed int __fastcall ScrollViewComponent::_handleScrollDirection(int a1, int a2, int a3, int a4, int a5, _WORD *a6)
{
  int v6; // r8@0
  char v8; // r0@1
  int v14; // r4@4
  unsigned int *v15; // r6@5
  unsigned int v18; // r0@5
  unsigned int v19; // r1@8
  unsigned int v20; // r2@9
  char v22; // r0@13
  int v23; // r9@16
  signed int v25; // r5@18
  unsigned int v27; // r0@24
  unsigned int *v28; // r6@28
  unsigned int v29; // r0@30
  float v30; // [sp+0h] [bp-38h]@18

  _R5 = a1;
  v8 = byte_27C6BD8;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C6BD8) )
  {
    __asm
    {
      VLDR            S0, [R5,#0x40]
      VNEG.F32        S0, S0
    }
    _R0 = &unk_27C6BD4;
    __asm { VSTMIA          R0!, {S0} }
    j___cxa_guard_release(_R0);
  }
  v14 = *(_DWORD *)(_R5 + 36);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
    _R0 = a5;
    _R1 = &unk_27C6BD4;
      VLDR            S0, [R0,#0x10]
      VLDR            S2, [R1]
      VLDR            S16, [R0,#0xC]
      VMUL.F32        S18, S0, S2
    v18 = *(_DWORD *)(v14 + 4);
    while ( v18 )
      __dmb();
      v19 = __ldrex(v15);
      if ( v19 == v18 )
      {
        v20 = __strex(v18 + 1, v15);
        v18 = v19;
        if ( !v20 )
        {
          __dmb();
          _ZF = *v15 == 0;
          if ( *v15 )
          {
            v6 = *(_DWORD *)(_R5 + 32);
            _ZF = v6 == 0;
          }
          if ( _ZF )
            goto LABEL_37;
          v22 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          if ( !(v22 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          v23 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,LayoutComponent>(void)::id[0]) != 1
            || !*(_DWORD *)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v23)) )
LABEL_37:
            v25 = 1;
            *a6 = 0;
          else
            _R0 = ScrollbarDynamics::getCurrentPos((ScrollbarDynamics *)(_R5 + 72));
            __asm
            {
              VMOV            S0, R0
              VADD.F32        S2, S0, S16
              VADD.F32        S0, S0, S18
              VSTR            S2, [SP,#0x38+var_38]
              VSTR            S0, [SP,#0x38+var_34]
            }
            ScrollViewComponent::_updateScroll(_R5, (int)&v30, 1);
            v25 = 0;
          if ( &pthread_create )
            __dmb();
            do
              v27 = __ldrex(v15);
            while ( __strex(v27 - 1, v15) );
            v27 = (*v15)--;
          if ( v27 == 1 )
            v28 = (unsigned int *)(v14 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
            if ( &pthread_create )
              __dmb();
              do
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
            else
              v29 = (*v28)--;
            if ( v29 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
          return v25;
        }
      }
      else
        __clrex();
  v25 = 1;
  *a6 = 0;
  return v25;
}
