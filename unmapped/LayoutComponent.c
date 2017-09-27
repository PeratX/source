

char *__fastcall LayoutComponent::getOffsetDelta(LayoutComponent *this)
{
  return (char *)this + 188;
}


unsigned int __fastcall LayoutComponent::isActive(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 8u) >> 3;
}


int __fastcall LayoutComponent::setContained(int result, bool a2)
{
  *(_BYTE *)(result + 213) = *(_BYTE *)(result + 213) & 0xFD | 2 * a2;
  return result;
}


int __fastcall LayoutComponent::receive(UIComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  UIControl *v13; // r0@7
  int v14; // r0@7
  int v16; // r0@12
  __int64 v17; // kr00_8@12
  bool v18; // zf@12
  UIControl *v22; // r0@15
  UIControl *v23; // r0@15
  int v24; // r0@15
  UIControl *v25; // r0@20
  LayoutVariable *v27; // r0@20
  LayoutVariable *v28; // r0@20
  UIControl *v29; // r0@22
  UIControl *v31; // r0@22
  LayoutVariable *v33; // r0@22
  LayoutVariable *v34; // r0@22
  LayoutVariable *v35; // r0@27
  LayoutVariable *v36; // r0@27
  unsigned int *v37; // r1@29
  unsigned int v38; // r0@31
  unsigned int *v39; // r4@35
  unsigned int v40; // r0@37
  int v42; // [sp+0h] [bp-30h]@12
  int v43; // [sp+4h] [bp-2Ch]@12

  _R5 = this;
  _R4 = a6;
  _R7 = a7;
  switch ( a5 )
  {
    case 5:
      if ( *((_BYTE *)this + 213) & 4 )
      {
        v25 = (UIControl *)UIComponent::getOwner(this);
        _R0 = UIControl::getPosition(v25);
        __asm
        {
          VMOV            S0, R4
          VLDR            S2, [R0]
          VLDR            S4, [R0,#4]
          VMOV            S6, R7
          VSUB.F32        S0, S0, S2
          VSUB.F32        S2, S6, S4
          VLDR            S4, [R5,#0xBC]
          VLDR            S6, [R5,#0xC0]
          VADD.F32        S0, S0, S4
          VADD.F32        S2, S2, S6
          VSTR            S0, [R5,#0xBC]
          VSTR            S2, [R5,#0xC0]
        }
        v27 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 4);
        LayoutVariable::setOverrideValue(v27, *((float *)_R5 + 47));
        v28 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 5);
        LayoutVariable::setOverrideValue(v28, *((float *)_R5 + 48));
        LayoutComponent::layout((int)_R5, (int)&unk_262C131, 2, 0);
      }
      break;
    case 3:
      v16 = UIComponent::getOwner(this);
      UIControl::getParent((UIControl *)&v42, v16);
      v17 = *(_QWORD *)&v42;
      v42 = 0;
      v43 = 0;
      v18 = (_DWORD)v17 == 0;
      if ( (_DWORD)v17 )
        v18 = (*((_BYTE *)_R5 + 213) & 1) == 0;
      if ( v18 )
        if ( *((_BYTE *)_R5 + 213) & 4 )
          v29 = (UIControl *)UIComponent::getOwner(_R5);
          _R0 = UIControl::getSize(v29);
          __asm
          {
            VLDR            S16, [R0]
            VLDR            S18, [R0,#4]
          }
          v31 = (UIControl *)UIComponent::getOwner(_R5);
          _R0 = UIControl::getPosition(v31);
            VMOV.F32        S0, #-0.5
            VMOV            S4, R7
            VMOV            S6, R4
            VMUL.F32        S2, S18, S0
            VMUL.F32        S0, S16, S0
            VADD.F32        S2, S2, S4
            VLDR            S4, [R0]
            VADD.F32        S0, S0, S6
            VLDR            S6, [R0,#4]
            VSUB.F32        S2, S2, S6
            VLDR            S6, [R5,#0xC0]
            VSUB.F32        S0, S0, S4
            VLDR            S4, [R5,#0xBC]
            VADD.F32        S2, S2, S6
            VADD.F32        S0, S0, S4
            VSTR            S0, [R5,#0xBC]
            VSTR            S2, [R5,#0xC0]
          v33 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 4);
          LayoutVariable::setOverrideValue(v33, *((float *)_R5 + 47));
          v34 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 5);
          LayoutVariable::setOverrideValue(v34, *((float *)_R5 + 48));
          LayoutComponent::layout((int)_R5, (int)&unk_262C12F, 2, 0);
      else
          VLDR            S18, [R5,#0xCC]
          VLDR            S16, [R5,#0xD0]
        v22 = (UIControl *)UIComponent::getOwner(_R5);
        UIControl::getPosition(v22);
        UIControl::getPosition((UIControl *)v17);
        UIControl::getSize((UIControl *)v17);
        v23 = (UIControl *)UIComponent::getOwner(_R5);
        UIControl::getSize(v23);
        __asm { VMOV            S0, R4 }
        v24 = *((_BYTE *)_R5 + 212);
        __asm { VSUB.F32        S0, S0, S18 }
        if ( v24 == 1 )
          __asm { VLDR            S2, =0.0 }
        else
          __asm { VMOV            S2, R7 }
          if ( v24 == 2 )
            __asm { VLDREQ          S0, =0.0 }
          __asm { VSUB.F32        S2, S2, S16 }
          VADD.F32        S0, S4, S0
          VADD.F32        S2, S6, S2
        LayoutComponent::_clampOffsetDeltaToParentSize(_R5, (const UIControl *)v17);
        v35 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 4);
        LayoutVariable::setOverrideValue(v35, *((float *)_R5 + 47));
        v36 = (LayoutVariable *)LayoutComponent::getVariable(_R5, 5);
        LayoutVariable::setOverrideValue(v36, *((float *)_R5 + 48));
        LayoutComponent::layout((int)_R5, (int)&unk_262C12D, 2, 0);
        *((_DWORD *)_R5 + 51) = a6;
        *((_DWORD *)_R5 + 52) = a7;
      if ( HIDWORD(v17) )
        v37 = (unsigned int *)(HIDWORD(v17) + 4);
        if ( &pthread_create )
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          v39 = (unsigned int *)(HIDWORD(v17) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 8))(HIDWORD(v17));
          if ( &pthread_create )
            __dmb();
            do
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
          else
            v40 = (*v39)--;
          if ( v40 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
    case 1:
      if ( (unsigned __int16)a7 >> 8 )
        if ( (unsigned __int16)a7 >> 8 == 1 && *((_BYTE *)this + 212) )
          v13 = (UIControl *)UIComponent::getOwner(this);
          v14 = UIControl::getHover(v13);
          _ZF = v14 == 1;
          if ( v14 == 1 )
            LOBYTE(v14) = *((_BYTE *)_R5 + 213);
            _ZF = (v14 & 1) == 0;
          if ( _ZF )
            *((_BYTE *)_R5 + 213) = v14 | 1;
            *((_DWORD *)_R5 + 51) = a9;
            *((_DWORD *)_R5 + 52) = a10;
      else if ( *((_BYTE *)this + 213) & 1 )
        *((_BYTE *)this + 213) &= 0xFEu;
  }
  return 0;
}


unsigned int __fastcall LayoutComponent::getContained(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 2u) >> 1;
}


void __fastcall LayoutComponent::~LayoutComponent(LayoutComponent *this)
{
  LayoutComponent::~LayoutComponent(this);
}


int __fastcall LayoutComponent::hasMaxSize(LayoutComponent *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 45);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall LayoutComponent::isBeingDragged(LayoutComponent *this)
{
  return *((_BYTE *)this + 213) & 1;
}


UIComponent *__fastcall LayoutComponent::LayoutComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6B84;
  _aeabi_memclr4((char *)v2 + 8, 48);
  *((_WORD *)v2 + 28) = 1028;
  ui::LayoutOffset::LayoutOffset((UIComponent *)((char *)v2 + 60));
  ui::LayoutOffset::LayoutOffset((UIComponent *)((char *)v2 + 92));
  ui::LayoutOffset::LayoutOffset((UIComponent *)((char *)v2 + 124));
  ui::LayoutOffset::LayoutOffset((UIComponent *)((char *)v2 + 156));
  *((_BYTE *)v2 + 212) = 0;
  *((_DWORD *)v2 + 47) = 0;
  *((_DWORD *)v2 + 48) = 0;
  *((_DWORD *)v2 + 49) = 0;
  *((_DWORD *)v2 + 50) = 0;
  *((_DWORD *)v2 + 51) = 0;
  *((_DWORD *)v2 + 52) = 0;
  *((_BYTE *)v2 + 213) = *((_BYTE *)v2 + 213) & 0x80 | 8;
  return v2;
}


char *__fastcall LayoutComponent::getSize(LayoutComponent *this)
{
  return (char *)this + 92;
}


unsigned int __fastcall LayoutComponent::getFollowsCursor(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 4u) >> 2;
}


__int64 __fastcall LayoutComponent::setSize(LayoutComponent *this, const ui::LayoutOffset *a2)
{
  LayoutComponent *v2; // r5@1
  const ui::LayoutOffset *v3; // r4@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)((char *)this + 92),
    (unsigned __int64 *)a2);
    (unsigned __int64 *)v2 + 13,
    (unsigned __int64 *)((char *)v3 + 12));
  result = *((_QWORD *)v3 + 3);
  *(_QWORD *)((char *)v2 + 116) = result;
  return result;
}


__int64 __fastcall LayoutComponent::setOffset(LayoutComponent *this, const ui::LayoutOffset *a2)
{
  LayoutComponent *v2; // r5@1
  const ui::LayoutOffset *v3; // r4@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)((char *)this + 60),
    (unsigned __int64 *)a2);
    (unsigned __int64 *)v2 + 9,
    (unsigned __int64 *)((char *)v3 + 12));
  result = *((_QWORD *)v3 + 3);
  *(_QWORD *)((char *)v2 + 84) = result;
  return result;
}


int __fastcall LayoutComponent::~LayoutComponent(LayoutComponent *this)
{
  LayoutComponent *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r0@7
  void *v6; // r0@9
  void *v7; // r0@11
  void *v8; // r0@13
  void *v9; // r0@15
  int v10; // r0@17
  unsigned int *v11; // r2@18
  unsigned int v12; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26D6B84;
  v2 = (void *)*((_DWORD *)this + 42);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 39);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 34);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 31);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 26);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 23);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 18);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 15);
  if ( v9 )
    operator delete(v9);
  std::array<std::unique_ptr<LayoutVariable,std::default_delete<LayoutVariable>>,10u>::~array((int)v1 + 16);
  v10 = *((_DWORD *)v1 + 3);
  if ( v10 )
  {
    v11 = (unsigned int *)(v10 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  }
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


UIControl *__fastcall LayoutComponent::getPositionMinusOffsetDelta(LayoutComponent *this, UIComponent *a2)
{
  UIControl *v3; // r0@1
  UIControl *result; // r0@1

  _R4 = a2;
  v3 = (UIControl *)UIComponent::getOwner(a2);
  result = UIControl::getPosition(v3);
  __asm
  {
    VLDR            S0, [R4,#0xBC]
    VLDR            S4, [R0]
    VLDR            S2, [R4,#0xC0]
    VLDR            S6, [R0,#4]
    VSUB.F32        S0, S4, S0
    VSUB.F32        S2, S6, S2
    VSTR            S0, [R5]
    VSTR            S2, [R5,#4]
  }
  return result;
}


int __fastcall LayoutComponent::setInheritMaxSiblingWidth(int result, bool a2)
{
  *(_BYTE *)(result + 213) = *(_BYTE *)(result + 213) & 0xEF | 16 * a2;
  return result;
}


int __fastcall LayoutComponent::setDraggable(int result, char a2)
{
  *(_BYTE *)(result + 212) = a2;
  return result;
}


char *__fastcall LayoutComponent::getOffset(LayoutComponent *this)
{
  return (char *)this + 60;
}


UIControl *__fastcall LayoutComponent::_getLayoutVariables(LayoutComponent *this, int a2)
{
  LayoutComponent *v2; // r4@1
  int v3; // r0@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r0@2
  unsigned int v6; // r3@5
  unsigned int v7; // r7@6
  int v8; // r0@7
  int v9; // r2@8
  UIControl *result; // r0@8
  int v11; // r2@14
  int v12; // r0@17
  UIControl *v13; // r5@19
  char v14; // r0@19
  int v15; // r6@22
  int v16; // r1@24
  unsigned int v17; // r3@25
  unsigned int *v18; // r2@25
  unsigned int v19; // r7@28
  unsigned int v20; // r6@29
  signed int v21; // r2@30
  int v22; // r5@37
  unsigned int *v23; // r1@38
  unsigned int *v24; // r4@44
  int v25; // r4@51
  unsigned int *v26; // r1@52
  unsigned int *v27; // r5@58
  UIControl *v28; // [sp+4h] [bp-1Ch]@17
  int v29; // [sp+8h] [bp-18h]@51

  v2 = this;
  v3 = *(_DWORD *)(a2 + 12);
  *((_DWORD *)v2 + 1) = v3;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v4 )
        {
          *((_DWORD *)v2 + 1) = 0;
          result = (UIControl *)1;
          goto LABEL_14;
        }
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
    v8 = *((_DWORD *)v2 + 1);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 4);
      result = 0;
      if ( !v9 )
        result = (UIControl *)1;
    else
      result = (UIControl *)1;
  }
  else
    result = (UIControl *)1;
LABEL_14:
  v11 = *(_DWORD *)(a2 + 8);
  if ( result )
    v11 = 0;
  *(_DWORD *)v2 = v11;
  if ( !v11 )
    v12 = UIComponent::getOwner((UIComponent *)a2);
    UIControl::getParent((UIControl *)&v28, v12);
    result = v28;
    if ( v28 )
      result = (UIControl *)UIControl::isVisibleInTree(v28);
      if ( result == (UIControl *)1 )
        v13 = v28;
        v14 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v14 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v15 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        result = (UIControl *)UIControl::_hasComponent(v13, type_id<UIComponent,LayoutComponent>(void)::id[0]);
        if ( result == (UIControl *)1 )
          result = *(UIControl **)(*((_DWORD *)v13 + 27) + 4 * UIControl::_getComponentIndex(v13, v15));
          if ( result )
          {
            v16 = *((_DWORD *)result + 3);
            if ( v16 )
            {
              v17 = *(_DWORD *)(v16 + 4);
              v18 = (unsigned int *)(v16 + 4);
              do
              {
                while ( 1 )
                {
                  if ( !v17 )
                  {
                    v21 = 1;
                    v16 = 0;
                    goto LABEL_35;
                  }
                  __dmb();
                  v19 = __ldrex(v18);
                  if ( v19 == v17 )
                    break;
                  __clrex();
                  v17 = v19;
                }
                v20 = __strex(v17 + 1, v18);
                v17 = v19;
              }
              while ( v20 );
              __dmb();
              v21 = 0;
              if ( !*(_DWORD *)(v16 + 4) )
                v21 = 1;
            }
            else
              v21 = 1;
LABEL_35:
            result = (UIControl *)*((_DWORD *)result + 2);
            if ( v21 )
              result = 0;
            *(_DWORD *)v2 = result;
            v22 = *((_DWORD *)v2 + 1);
            *((_DWORD *)v2 + 1) = v16;
            if ( v22 )
              v23 = (unsigned int *)(v22 + 4);
              if ( &pthread_create )
                __dmb();
                do
                  result = (UIControl *)__ldrex(v23);
                while ( __strex((unsigned int)result - 1, v23) );
              else
                result = (UIControl *)(*v23)--;
              if ( result == (UIControl *)1 )
                v24 = (unsigned int *)(v22 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
                if ( &pthread_create )
                  do
                    result = (UIControl *)__ldrex(v24);
                  while ( __strex((unsigned int)result - 1, v24) );
                else
                  result = (UIControl *)(*v24)--;
                if ( result == (UIControl *)1 )
                  result = (UIControl *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
          }
    v25 = v29;
    if ( v29 )
      v26 = (unsigned int *)(v29 + 4);
      if ( &pthread_create )
        do
          result = (UIControl *)__ldrex(v26);
        while ( __strex((unsigned int)result - 1, v26) );
      else
        result = (UIControl *)(*v26)--;
        v27 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
        if ( &pthread_create )
          __dmb();
          do
            result = (UIControl *)__ldrex(v27);
          while ( __strex((unsigned int)result - 1, v27) );
        else
          result = (UIControl *)(*v27)--;
          result = (UIControl *)(*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return result;
}


int __fastcall LayoutComponent::removeDependencies(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariable *v2; // r0@1
  LayoutVariable *v3; // r0@3
  LayoutVariable *v4; // r0@5
  LayoutVariable *v5; // r0@7
  LayoutVariable *v6; // r0@9
  LayoutVariable *v7; // r0@11
  LayoutVariable *v8; // r0@13
  LayoutVariable *v9; // r0@15
  LayoutVariable *v10; // r0@17
  LayoutVariable *v11; // r0@19
  int result; // r0@21
  unsigned int *v13; // r2@22
  unsigned int v14; // r1@24

  v1 = this;
  v2 = (LayoutVariable *)LayoutComponent::getVariable(this, AllLayoutVariableTypes);
  if ( v2 )
    LayoutVariable::removeDependencies(v2);
  v3 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C641);
  if ( v3 )
    LayoutVariable::removeDependencies(v3);
  v4 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C642);
  if ( v4 )
    LayoutVariable::removeDependencies(v4);
  v5 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C643);
  if ( v5 )
    LayoutVariable::removeDependencies(v5);
  v6 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C644);
  if ( v6 )
    LayoutVariable::removeDependencies(v6);
  v7 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C645);
  if ( v7 )
    LayoutVariable::removeDependencies(v7);
  v8 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C646);
  if ( v8 )
    LayoutVariable::removeDependencies(v8);
  v9 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C647);
  if ( v9 )
    LayoutVariable::removeDependencies(v9);
  v10 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C648);
  if ( v10 )
    LayoutVariable::removeDependencies(v10);
  v11 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C649);
  if ( v11 )
    LayoutVariable::removeDependencies(v11);
  *((_DWORD *)v1 + 2) = 0;
  result = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( result )
  {
    v13 = (unsigned int *)(result + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


signed int __fastcall LayoutComponent::_isVariableIsSupported(UIComponent *a1, int a2)
{
  int v2; // r1@1
  int v4; // r4@4
  char v5; // r0@4
  int v6; // r5@7
  char v7; // r0@10

  v2 = a2 | 1;
  if ( v2 == 9 )
  {
    v4 = UIComponent::getOwner(a1);
    v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
    __dmb();
    if ( !(v7 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    {
      type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
    }
    v6 = type_id<UIComponent,GridComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,GridComponent>(void)::id[0]) != 1 )
      return 0;
  }
  else
    if ( v2 != 7 )
      return 1;
    v5 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
    if ( !(v5 & 1) )
      if ( j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
    v6 = type_id<UIComponent,GridItemComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,GridItemComponent>(void)::id[0]) != 1 )
  return *(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v6)) != 0;
}


unsigned int __fastcall LayoutComponent::clone(LayoutComponent *this, UIControl *a2, UIControl *a3)
{
  LayoutComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  __int16 v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r2@1
  unsigned int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0xD8u);
  LayoutComponent::LayoutComponent((UIComponent *)v6, v4);
  v7 = *((_WORD *)v5 + 28);
  *((_BYTE *)v6 + 56) = v7;
  *((_BYTE *)v6 + 57) = HIBYTE(v7);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)((char *)v6 + 60),
    (unsigned __int64 *)((char *)v5 + 60));
    (unsigned __int64 *)v6 + 9,
    (unsigned __int64 *)v5 + 9);
  *(_QWORD *)((char *)v6 + 84) = *(_QWORD *)((char *)v5 + 84);
    (unsigned __int64 *)((char *)v6 + 92),
    (unsigned __int64 *)((char *)v5 + 92));
    (unsigned __int64 *)v6 + 13,
    (unsigned __int64 *)v5 + 13);
  *(_QWORD *)((char *)v6 + 116) = *(_QWORD *)((char *)v5 + 116);
  *((_DWORD *)v6 + 47) = *((_DWORD *)v5 + 47);
  *((_DWORD *)v6 + 48) = *((_DWORD *)v5 + 48);
  *((_DWORD *)v6 + 49) = *((_DWORD *)v5 + 49);
  *((_DWORD *)v6 + 50) = *((_DWORD *)v5 + 50);
  *((_DWORD *)v6 + 51) = *((_DWORD *)v5 + 51);
  *((_DWORD *)v6 + 52) = *((_DWORD *)v5 + 52);
  v8 = *((_WORD *)v5 + 106);
  *((_BYTE *)v6 + 212) = v8;
  v9 = *((_BYTE *)v6 + 213) & 0xC9;
  *(_DWORD *)v3 = v6;
  result = (v8 >> 8) & 0x20 | (v8 >> 8) & 4 | v9 | (v8 >> 8) & 2 | (v8 >> 8) & 0x10;
  *((_BYTE *)v6 + 213) = result;
  return result;
}


LayoutVariable *__fastcall LayoutComponent::setVariableOverrideValue(UIComponent *a1, int a2, float a3)
{
  float v3; // r4@1
  LayoutVariable *result; // r0@1

  v3 = a3;
  result = (LayoutVariable *)LayoutComponent::getVariable(a1, a2);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable16setOverrideValueEf(result, v3);
  return result;
}


__int64 __fastcall LayoutComponent::setMinSize(LayoutComponent *this, const ui::LayoutOffset *a2)
{
  LayoutComponent *v2; // r5@1
  const ui::LayoutOffset *v3; // r4@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)((char *)this + 124),
    (unsigned __int64 *)a2);
    (unsigned __int64 *)v2 + 17,
    (unsigned __int64 *)((char *)v3 + 12));
  result = *((_QWORD *)v3 + 3);
  *(_QWORD *)((char *)v2 + 148) = result;
  return result;
}


char *__fastcall LayoutComponent::getMinSize(LayoutComponent *this)
{
  return (char *)this + 124;
}


signed int __fastcall LayoutComponent::hasOffsetAxisType(int a1, int a2, int a3)
{
  signed int v3; // r1@3
  signed int result; // r0@7

  if ( a2 == 1 )
  {
    v3 = *(_DWORD *)(a1 + 88);
  }
  else if ( a2 )
    v3 = 3;
  else
    v3 = *(_DWORD *)(a1 + 84);
  result = 0;
  if ( v3 == a3 )
    result = 1;
  return result;
}


char *__fastcall LayoutComponent::getMaxSize(LayoutComponent *this)
{
  return (char *)this + 156;
}


int __fastcall LayoutComponent::_recursiveInitialize(UIComponent *a1, int a2, int a3, int a4)
{
  signed int v4; // r10@1
  int v5; // r9@1
  UIComponent *v6; // r5@1
  int v7; // r7@1
  char v8; // r0@3
  int v9; // r4@6
  unsigned int v10; // r0@8
  bool v11; // zf@8
  unsigned int v12; // r0@11
  bool v13; // zf@11
  UIControl *v14; // r4@15
  char v15; // r0@16
  int v16; // r6@19
  int v17; // r8@22
  int v18; // r4@25
  unsigned int *v19; // r1@26
  unsigned int v20; // r0@28
  unsigned int *v21; // r6@32
  unsigned int v22; // r0@34
  char v23; // r0@40
  int v24; // r4@43
  int v25; // r1@44
  UIControl *v26; // r4@45
  char v27; // r0@46
  int v28; // r6@49
  UIComponent *v29; // r0@50
  int v30; // r6@59
  unsigned int *v31; // r1@60
  unsigned int v32; // r0@62
  unsigned int *v33; // r4@66
  unsigned int v34; // r0@68
  char v35; // r0@73
  int v36; // r6@76
  int v37; // r1@77
  UIControl *v38; // r11@78
  char v39; // r0@79
  int v40; // r6@82
  UIComponent *v41; // r0@83
  int v42; // r6@85
  unsigned int *v43; // r1@86
  unsigned int v44; // r0@88
  unsigned int *v45; // r4@92
  unsigned int v46; // r0@94
  int *v47; // r4@102
  __int64 v48; // kr00_8@102
  int v49; // r6@103
  char v50; // r0@103
  int v51; // r7@106
  UIComponent *v52; // r0@107
  int v54; // [sp+8h] [bp-40h]@1
  UIControl *v55; // [sp+Ch] [bp-3Ch]@78
  int v56; // [sp+10h] [bp-38h]@85
  UIControl *v57; // [sp+14h] [bp-34h]@45
  int v58; // [sp+18h] [bp-30h]@59
  UIControl *v59; // [sp+1Ch] [bp-2Ch]@15
  int v60; // [sp+20h] [bp-28h]@25

  v4 = a4;
  v5 = a3;
  v54 = a2;
  v6 = a1;
  v7 = UIComponent::getOwner(a1);
  if ( *((_BYTE *)v6 + 213) & 0x40 )
    return 0;
  if ( !v5 )
  {
    v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
    __dmb();
    if ( !(v8 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
    {
      type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
    }
    v9 = type_id<UIComponent,GridItemComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1
      && *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9)) )
      v10 = UIControl::getVisible((UIControl *)v7);
      v11 = v10 == 0;
      if ( !v10 )
        v11 = (*((_BYTE *)v6 + 213) & 8) == 0;
      if ( v11 )
        return 0;
  }
  v12 = UIControl::isTemplate((UIControl *)v7);
  v13 = v4 == 0;
  if ( !v4 )
    v13 = v12 == 1;
  if ( v13 )
    UIControl::getParent((UIControl *)&v59, v7);
    v14 = v59;
    if ( v59 )
      v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      __dmb();
      if ( !(v15 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
      {
        type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
      }
      v16 = type_id<UIComponent,GridComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v14, type_id<UIComponent,GridComponent>(void)::id[0]) != 1 )
        v4 = 0;
        goto LABEL_25;
      if ( !*(_DWORD *)(*((_DWORD *)v14 + 27) + 4 * UIControl::_getComponentIndex(v14, v16)) )
    v4 = 1;
LABEL_25:
    v18 = v60;
    if ( v60 )
      v19 = (unsigned int *)(v60 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    if ( v4 != 1 )
      return 0;
  LayoutComponent::_initialize(v6, v54, v5);
  v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v23 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v24 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v25 = *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v24));
    if ( v25 )
      GridComponent::getGridItemTemplate((GridComponent *)&v57, v25);
      v26 = v57;
      if ( v57 )
        v27 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v27 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v28 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v26, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v29 = *(UIComponent **)(*((_DWORD *)v26 + 27) + 4 * UIControl::_getComponentIndex(v26, v28));
          if ( v29 )
            v17 = LayoutComponent::_recursiveInitialize(v29, v54, v5, v4) + 1;
          else
            v17 = 1;
          v17 = 1;
        v17 = 1;
      v30 = v58;
      if ( v58 )
        v31 = (unsigned int *)(v58 + 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          v33 = (unsigned int *)(v30 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          if ( &pthread_create )
          {
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
          }
            v34 = (*v33)--;
          if ( v34 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    else
      v17 = 1;
  else
    v17 = 1;
  v35 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( !(v35 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  v36 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
    v37 = *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v36));
    if ( v37 )
      FactoryComponent::getControlTemplate((FactoryComponent *)&v55, v37);
      v38 = v55;
      if ( v55 )
        v39 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v39 & 1)
        v40 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v38, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v41 = *(UIComponent **)(*((_DWORD *)v38 + 27) + 4 * UIControl::_getComponentIndex(v38, v40));
          if ( v41 )
            v17 += LayoutComponent::_recursiveInitialize(v41, v54, v5, v4);
      v42 = v56;
      if ( v56 )
        v43 = (unsigned int *)(v56 + 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 == 1 )
          v45 = (unsigned int *)(v42 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  if ( *((_BYTE *)v6 + 213) & 8 || v5 == 1 && UIControl::getVisible((UIControl *)v7) == 1 )
    v48 = *(_QWORD *)UIControl::getChildren((UIControl *)v7);
    v47 = (int *)v48;
    if ( (_DWORD)v48 != HIDWORD(v48) )
      do
        v49 = *v47;
        v50 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v50 & 1)
        v51 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v49, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v52 = *(UIComponent **)(*(_DWORD *)(v49 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v49, v51));
          if ( v52 )
            v17 += LayoutComponent::_recursiveInitialize(v52, v54, v5, v4);
        v47 += 2;
      while ( (int *)HIDWORD(v48) != v47 );
  return v17;
}


int __fastcall LayoutComponent::setAnchorFrom(int result, char a2)
{
  *(_BYTE *)(result + 56) = a2;
  return result;
}


int __fastcall LayoutComponent::setAnchorTo(int result, char a2)
{
  *(_BYTE *)(result + 57) = a2;
  return result;
}


LayoutVariables *__fastcall LayoutComponent::layout(int a1, char *a2, int a3, int a4)
{
  int v4; // r6@1
  char *v5; // r5@1
  int v6; // r8@1
  int v7; // r7@1
  LayoutVariables *result; // r0@1
  int v9; // r10@5
  int v10; // r0@6
  int v11; // r0@6
  unsigned int *v12; // r2@7
  unsigned int v13; // r1@9
  int v14; // r4@16
  unsigned int *v15; // r1@17
  unsigned int *v16; // r5@23
  char v17; // [sp+4h] [bp-3Ch]@6
  int v18; // [sp+Ch] [bp-34h]@6
  LayoutVariables *v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@16

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  LayoutComponent::_getLayoutVariables((LayoutComponent *)&v19, a1);
  result = v19;
  if ( v19 )
  {
    if ( !(*(_BYTE *)(v4 + 213) & 8) )
      LayoutComponent::_recursiveInitialize((UIComponent *)v4, (int)&v19, 1, 0);
    if ( v7 )
    {
      v9 = (int)&v5[v7];
      do
      {
        v10 = UIComponent::getOwner((UIComponent *)v4);
        VariableRef::VariableRef((int)&v17, v10, *v5);
        LayoutVariables::invalidate(v19, (VariableRef *)&v17, v6);
        v11 = v18;
        if ( v18 )
        {
          v12 = (unsigned int *)(v18 + 8);
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
            (*(void (**)(void))(*(_DWORD *)v11 + 12))();
        }
        ++v5;
      }
      while ( v5 != (char *)v9 );
    }
    result = (LayoutVariables *)LayoutVariables::solve(v19);
  }
  v14 = v20;
  if ( v20 )
    v15 = (unsigned int *)(v20 + 4);
    if ( &pthread_create )
      __dmb();
        result = (LayoutVariables *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
    else
      result = (LayoutVariables *)(*v15)--;
    if ( result == (LayoutVariables *)1 )
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        __dmb();
        do
          result = (LayoutVariables *)__ldrex(v16);
        while ( __strex((unsigned int)result - 1, v16) );
      else
        result = (LayoutVariables *)(*v16)--;
      if ( result == (LayoutVariables *)1 )
        result = (LayoutVariables *)(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return result;
}


LayoutVariable *__fastcall LayoutComponent::setInactive(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariable *v2; // r0@1
  LayoutVariable *result; // r0@3

  v1 = this;
  *((_BYTE *)this + 213) &= 0xF7u;
  v2 = (LayoutVariable *)LayoutComponent::getVariable(this, 2);
  if ( v2 )
    LayoutVariable::setOverrideValue(v2, 0.0);
  result = (LayoutVariable *)LayoutComponent::getVariable(v1, 3);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable16setOverrideValueEf(result, 0.0);
  return result;
}


int __fastcall LayoutComponent::reset(int result)
{
  *(_BYTE *)(result + 213) &= 0xFEu;
  return result;
}


LayoutVariable *__fastcall LayoutComponent::_initializeVariables(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariable *v2; // r0@1
  LayoutVariable *v3; // r0@3
  LayoutVariable *v4; // r0@5
  LayoutVariable *v5; // r0@7
  LayoutVariable *v6; // r0@9
  LayoutVariable *v7; // r0@11
  LayoutVariable *v8; // r0@13
  LayoutVariable *v9; // r0@15
  LayoutVariable *v10; // r0@17
  LayoutVariable *result; // r0@19

  v1 = this;
  v2 = (LayoutVariable *)LayoutComponent::getVariable(this, AllLayoutVariableTypes);
  if ( v2 )
    LayoutVariable::initialize(v2);
  v3 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C641);
  if ( v3 )
    LayoutVariable::initialize(v3);
  v4 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C642);
  if ( v4 )
    LayoutVariable::initialize(v4);
  v5 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C643);
  if ( v5 )
    LayoutVariable::initialize(v5);
  v6 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C644);
  if ( v6 )
    LayoutVariable::initialize(v6);
  v7 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C645);
  if ( v7 )
    LayoutVariable::initialize(v7);
  v8 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C646);
  if ( v8 )
    LayoutVariable::initialize(v8);
  v9 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C647);
  if ( v9 )
    LayoutVariable::initialize(v9);
  v10 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C648);
  if ( v10 )
    LayoutVariable::initialize(v10);
  result = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C649);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable10initializeEv(result);
  return result;
}


int __fastcall LayoutComponent::setFollowsCursor(int result, bool a2)
{
  *(_BYTE *)(result + 213) = *(_BYTE *)(result + 213) & 0xFB | 4 * a2;
  return result;
}


signed int __fastcall LayoutComponent::_initialize(UIComponent *a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  UIComponent *v5; // r6@1
  UIControl *v6; // r8@1
  LayoutVariable *v7; // r0@4
  LayoutVariable *v8; // r0@4
  int v9; // r7@5
  unsigned int *v10; // r0@6
  unsigned int v11; // r1@8
  int v12; // r0@11
  unsigned int *v13; // r2@12
  unsigned int v14; // r1@14

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = (UIControl *)UIComponent::getOwner(a1);
  if ( !(*((_BYTE *)v5 + 213) & 8) && (v3 || UIControl::getVisible(v6) == 1) )
  {
    v7 = (LayoutVariable *)LayoutComponent::getVariable(v5, 2);
    LayoutVariable::clearOverrideValue(v7);
    v8 = (LayoutVariable *)LayoutComponent::getVariable(v5, 3);
    LayoutVariable::clearOverrideValue(v8);
    *((_BYTE *)v5 + 213) |= 8u;
  }
  *((_DWORD *)v5 + 2) = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 4);
  if ( v9 )
    v10 = (unsigned int *)(v9 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  v12 = *((_DWORD *)v5 + 3);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v12 + 12))();
  *((_DWORD *)v5 + 3) = v9;
  LayoutComponent::_initializeVariables(v5);
  LayoutVariables::_add(*(LayoutVariables **)v4, v6);
  return 1;
}


int __fastcall LayoutComponent::setDelayLayout(int result, bool a2)
{
  *(_BYTE *)(result + 213) = *(_BYTE *)(result + 213) & 0xBF | (a2 << 6);
  return result;
}


int __fastcall LayoutComponent::setInheritMaxSiblingHeight(int result, bool a2)
{
  *(_BYTE *)(result + 213) = *(_BYTE *)(result + 213) & 0xDF | 32 * a2;
  return result;
}


__int64 __fastcall LayoutComponent::setMaxSize(LayoutComponent *this, const ui::LayoutOffset *a2)
{
  LayoutComponent *v2; // r5@1
  const ui::LayoutOffset *v3; // r4@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)((char *)this + 156),
    (unsigned __int64 *)a2);
    (unsigned __int64 *)v2 + 21,
    (unsigned __int64 *)((char *)v3 + 12));
  result = *((_QWORD *)v3 + 3);
  *(_QWORD *)((char *)v2 + 180) = result;
  return result;
}


LayoutVariables *__fastcall LayoutComponent::onAdded(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariables *result; // r0@1
  UIControl *v3; // r0@2
  int v4; // r0@2
  int v5; // r5@2
  void (__fastcall *v6)(int, int); // r6@2
  int v7; // r0@2
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  LayoutVariables *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@3

  v1 = this;
  LayoutComponent::_getLayoutVariables((LayoutComponent *)&v11, (int)this);
  result = v11;
  if ( v11 )
  {
    LayoutComponent::recursiveInitialize(v1, (int)&v11, 0);
    v3 = (UIControl *)UIComponent::getOwner(v1);
    v4 = UIControl::getScreenAction(v3, 0);
    v5 = v4;
    v6 = *(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 24);
    v7 = UIComponent::getOwner(v1);
    v6(v5, v7);
    result = (LayoutVariables *)LayoutVariables::solve(v11);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (LayoutVariables *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
    }
    else
      result = (LayoutVariables *)(*v9)--;
    if ( result == (LayoutVariables *)1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (LayoutVariables *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
      }
      else
        result = (LayoutVariables *)(*v10)--;
      if ( result == (LayoutVariables *)1 )
        result = (LayoutVariables *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


int __fastcall LayoutComponent::reinitialize(int result, char *a2, int a3)
{
  int v3; // r6@1
  char *v4; // r5@1
  int v5; // r11@1
  unsigned int *v6; // r7@2
  int v7; // r1@5
  unsigned int v8; // r3@6
  LayoutVariables *v9; // r9@8
  bool v10; // zf@8
  int v11; // r10@11
  int v12; // r0@12
  int v13; // r2@12
  unsigned int *v14; // r2@13
  unsigned int v15; // r1@15
  unsigned int *v16; // r5@28
  int v17; // [sp+0h] [bp-38h]@12
  int v18; // [sp+8h] [bp-30h]@12

  v3 = result;
  v4 = a2;
  v5 = *(_DWORD *)(result + 12);
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 4);
    v6 = (unsigned int *)(v5 + 4);
    while ( result )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == result )
      {
        v8 = __strex(result + 1, v6);
        result = v7;
        if ( !v8 )
        {
          __dmb();
          if ( !*v6 )
            goto LABEL_37;
          v9 = *(LayoutVariables **)(v3 + 8);
          v10 = v9 == 0;
          if ( v9 )
            v10 = a3 == 0;
          if ( v10 )
          v11 = (int)&v4[a3];
          do
          {
            v12 = UIComponent::getOwner((UIComponent *)v3);
            VariableRef::VariableRef((int)&v17, v12, *v4);
            LayoutVariables::reinitialize(v9, (VariableRef *)&v17, v13);
            result = v18;
            if ( v18 )
            {
              v14 = (unsigned int *)(v18 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v15 = __ldrex(v14);
                while ( __strex(v15 - 1, v14) );
              }
              else
                v15 = (*v14)--;
              if ( v15 == 1 )
                result = (*(int (**)(void))(*(_DWORD *)result + 12))();
            }
            ++v4;
          }
          while ( v4 != (char *)v11 );
          if ( v5 )
LABEL_37:
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v6);
              while ( __strex(result - 1, v6) );
            else
              result = (*v6)--;
            if ( result == 1 )
              v16 = (unsigned int *)(v5 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
                  result = __ldrex(v16);
                while ( __strex(result - 1, v16) );
                result = (*v16)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


unsigned int __fastcall LayoutComponent::getInheritMaxSiblingHeight(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 0x20u) >> 5;
}


signed int __fastcall LayoutComponent::hasSizeAxisType(int a1, int a2, int a3)
{
  signed int v3; // r1@3
  signed int result; // r0@7

  if ( a2 == 3 )
  {
    v3 = *(_DWORD *)(a1 + 120);
  }
  else if ( a2 == 2 )
    v3 = *(_DWORD *)(a1 + 116);
  else
    v3 = 3;
  result = 0;
  if ( v3 == a3 )
    result = 1;
  return result;
}


LayoutVariable *__fastcall LayoutComponent::removeDeadDependencies(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariable *v2; // r0@1
  LayoutVariable *v3; // r0@3
  LayoutVariable *v4; // r0@5
  LayoutVariable *v5; // r0@7
  LayoutVariable *v6; // r0@9
  LayoutVariable *v7; // r0@11
  LayoutVariable *v8; // r0@13
  LayoutVariable *v9; // r0@15
  LayoutVariable *v10; // r0@17
  LayoutVariable *result; // r0@19

  v1 = this;
  v2 = (LayoutVariable *)LayoutComponent::getVariable(this, AllLayoutVariableTypes);
  if ( v2 )
    LayoutVariable::removeDeadDependencies(v2);
  v3 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C641);
  if ( v3 )
    LayoutVariable::removeDeadDependencies(v3);
  v4 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C642);
  if ( v4 )
    LayoutVariable::removeDeadDependencies(v4);
  v5 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C643);
  if ( v5 )
    LayoutVariable::removeDeadDependencies(v5);
  v6 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C644);
  if ( v6 )
    LayoutVariable::removeDeadDependencies(v6);
  v7 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C645);
  if ( v7 )
    LayoutVariable::removeDeadDependencies(v7);
  v8 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C646);
  if ( v8 )
    LayoutVariable::removeDeadDependencies(v8);
  v9 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C647);
  if ( v9 )
    LayoutVariable::removeDeadDependencies(v9);
  v10 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C648);
  if ( v10 )
    LayoutVariable::removeDeadDependencies(v10);
  result = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C649);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable22removeDeadDependenciesEv(result);
  return result;
}


int __fastcall LayoutComponent::_clampOffsetDeltaToParentSize(int result, const UIControl *a2)
{
  UIControl *v2; // r6@1
  UIControl *v5; // r0@4

  v2 = a2;
  _R4 = (UIComponent *)result;
  _ZF = a2 == 0;
  if ( a2 )
  {
    result = *(_BYTE *)(result + 213) & 2;
    _ZF = (unsigned __int8)result == 0;
  }
  if ( !_ZF )
    v5 = (UIControl *)UIComponent::getOwner(_R4);
    _R5 = UIControl::getSize(v5);
    result = (int)UIControl::getSize(v2);
    __asm
    {
      VLDR            S0, [R4,#0xBC]
      VLDR            S2, [R4,#0xC0]
      VCMPE.F32       S0, #0.0
      VLDR            S4, =0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, #0.0
      VLDR            S6, [R5]
      VLDR            S10, [R0]
      VLDR            S8, [R5,#4]
      VLDR            S12, [R0,#4]
      VSUB.F32        S6, S10, S6
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S4 }
      VCMPE.F32       S6, S0
      __asm { VMOVLT.F32      S2, S4 }
      VSUB.F32        S4, S12, S8
      VCMPE.F32       S4, S2
      __asm { VMOVLT.F32      S0, S6 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      VSTR            S0, [R4,#0xBC]
      VSTR            S2, [R4,#0xC0]
      VLDR            S0, [R5]
      VLDR            S2, [R0]
      VCMPE.F32       S2, S0
      __asm
      {
        VMOVLT.F32      S4, #-0.5
        VSUBLT.F32      S0, S0, S2
        VMULLT.F32      S0, S0, S4
        VSTRLT          S0, [R4,#0xBC]
      }
      VLDR            S0, [R5,#4]
      VLDR            S2, [R0,#4]
        VSTRLT          S0, [R4,#0xC0]
  return result;
}


int __fastcall LayoutComponent::setOffsetDelta(LayoutComponent *this, int a2, const UIControl *a3)
{
  LayoutComponent *v3; // r4@1
  LayoutVariable *v4; // r0@3
  LayoutVariable *v5; // r0@3

  v3 = this;
  *((_DWORD *)this + 47) = *(_DWORD *)a2;
  *((_DWORD *)this + 48) = *(_DWORD *)(a2 + 4);
  if ( a3 )
    LayoutComponent::_clampOffsetDeltaToParentSize(this, a3);
  v4 = (LayoutVariable *)LayoutComponent::getVariable(v3, 4);
  LayoutVariable::setOverrideValue(v4, *((float *)v3 + 47));
  v5 = (LayoutVariable *)LayoutComponent::getVariable(v3, 5);
  return j_j_j__ZN14LayoutVariable16setOverrideValueEf(v5, *((float *)v3 + 48));
}


int __fastcall LayoutComponent::recursiveInitialize(UIComponent *a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r10@1
  UIComponent *v5; // r6@1
  int v6; // r0@1
  UIControl *v7; // r7@1
  char v8; // r0@2
  int v9; // r4@5
  int v10; // r1@6
  int v11; // r4@8
  unsigned int v12; // r2@9
  unsigned int *v13; // r0@9
  unsigned int v14; // r3@12
  unsigned int v15; // r7@13
  unsigned int v16; // r2@14
  int v17; // r1@14
  signed int v18; // r3@14
  int v19; // r1@16
  int v20; // r9@21
  unsigned int *v21; // r7@22
  unsigned int v22; // r0@24
  int v23; // r7@30
  unsigned int *v24; // r1@31
  unsigned int v25; // r0@33
  int v26; // r4@35
  unsigned int *v27; // r1@36
  unsigned int v28; // r0@38
  unsigned int *v29; // r5@42
  unsigned int v30; // r0@44
  unsigned int *v31; // r4@48
  unsigned int v32; // r0@50
  int result; // r0@55
  UIControl *v34; // [sp+0h] [bp-28h]@1
  int v35; // [sp+4h] [bp-24h]@30

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = UIComponent::getOwner(a1);
  UIControl::getParent((UIControl *)&v34, v6);
  v7 = v34;
  if ( v34 )
  {
    v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    __dmb();
    if ( !(v8 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    {
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    }
    v9 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v7, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
      v10 = *(_DWORD *)(*((_DWORD *)v7 + 27) + 4 * UIControl::_getComponentIndex(v7, v9));
    else
      v10 = 0;
    v11 = *(_DWORD *)(v10 + 12);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 4);
      v13 = (unsigned int *)(v11 + 4);
      while ( v12 )
      {
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
        {
          v15 = __strex(v12 + 1, v13);
          v12 = v14;
          if ( !v15 )
          {
            __dmb();
            v16 = *v13;
            v17 = *(_DWORD *)(v10 + 8);
            v18 = *v13;
            if ( *v13 )
              v18 = 1;
            v19 = v17 != 0;
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v13);
              while ( __strex(v16 - 1, v13) );
            }
            else
              *v13 = v16 - 1;
            v20 = v18 & v19;
            if ( v16 == 1 )
              v21 = (unsigned int *)(v11 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v22 = __ldrex(v21);
                while ( __strex(v22 - 1, v21) );
              }
              else
                v22 = (*v21)--;
              if ( v22 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
            if ( !v20 )
              break;
            goto LABEL_30;
          }
        }
        else
          __clrex();
      }
    v26 = v35;
    if ( v35 )
      v27 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    result = 0;
  }
  else
LABEL_30:
    v23 = v35;
      v24 = (unsigned int *)(v35 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v31 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    result = LayoutComponent::_recursiveInitialize(v5, v4, v3, 0);
  return result;
}


void __fastcall LayoutComponent::~LayoutComponent(LayoutComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)LayoutComponent::~LayoutComponent(this);
  j_j_j__ZdlPv_3(v1);
}


int __fastcall LayoutComponent::hasMinSize(LayoutComponent *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 37);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall LayoutComponent::invalidateVariable(int result, VariableRef *a2, int a3)
{
  int v3; // r7@1
  unsigned int v4; // r3@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r5@5
  unsigned int v7; // r4@6
  bool v8; // zf@7
  unsigned int *v9; // r5@17

  v3 = *(_DWORD *)(result + 12);
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
            result = *(_DWORD *)(result + 8);
            v8 = result == 0;
          }
          if ( !v8 )
            LayoutVariables::invalidate((LayoutVariables *)result, a2, a3);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v9 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v9);
              while ( __strex(result - 1, v9) );
            }
            else
              result = (*v9)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


unsigned int __fastcall LayoutComponent::getInheritMaxSiblingWidth(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 0x10u) >> 4;
}


LayoutVariables *__fastcall LayoutComponent::onNotifyChildAdded(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1

  v1 = this;
  LayoutComponent::reinitialize(this, (char *)&unk_262C133, 4);
  return j_j_j__ZN15LayoutComponent6layoutESt16initializer_listI18LayoutVariableTypeEb((int)v1, (int)&unk_262C137, 4, 0);
}


void *__fastcall LayoutComponent::getVariable(UIComponent *a1, int a2)
{
  int v2; // r4@1
  UIComponent *v3; // r6@1
  int v4; // r9@2
  void *v5; // r5@2
  void **v6; // r9@2
  void *v7; // t1@2
  int v8; // r6@3
  void *v9; // r8@3
  LayoutVariable::MinMaxRuleValue *v10; // r0@4
  LayoutVariable::MinMaxRuleValue *v11; // r0@5
  int v12; // r10@6
  int v13; // r11@6
  void (*v14)(void); // r3@7
  int v15; // r4@9
  int v16; // r6@9
  int v17; // r0@10
  unsigned int *v18; // r2@11
  unsigned int v19; // r1@13
  int v20; // r4@26
  int v21; // r5@26
  int v22; // r0@27
  unsigned int *v23; // r2@28
  unsigned int v24; // r1@30

  v2 = a2;
  v3 = a1;
  if ( LayoutComponent::_isVariableIsSupported(a1, a2) == 1 )
  {
    v4 = (int)v3 + 4 * v2;
    v7 = *(void **)(v4 + 16);
    v6 = (void **)(v4 + 16);
    v5 = v7;
    if ( !v7 )
    {
      v8 = UIComponent::getOwner(v3);
      v5 = operator new(0x28u);
      LayoutVariable::LayoutVariable((int)v5, v8, v2);
      v9 = *v6;
      *v6 = v5;
      if ( v9 )
      {
        v10 = (LayoutVariable::MinMaxRuleValue *)*((_DWORD *)v9 + 8);
        if ( v10 )
        {
          v11 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v10);
          operator delete((void *)v11);
        }
        *((_DWORD *)v9 + 8) = 0;
        v12 = *(_QWORD *)((char *)v9 + 20) >> 32;
        v13 = *(_QWORD *)((char *)v9 + 20);
        if ( v13 != v12 )
          do
          {
            v14 = *(void (**)(void))(v13 + 24);
            if ( v14 )
              v14();
            v15 = *(_QWORD *)(v13 + 4) >> 32;
            v16 = *(_QWORD *)(v13 + 4);
            if ( v16 != v15 )
            {
              do
              {
                v17 = *(_DWORD *)(v16 + 8);
                if ( v17 )
                {
                  v18 = (unsigned int *)(v17 + 8);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v19 = __ldrex(v18);
                    while ( __strex(v19 - 1, v18) );
                  }
                  else
                    v19 = (*v18)--;
                  if ( v19 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v17 + 12))();
                }
                v16 += 20;
              }
              while ( v16 != v15 );
              v16 = *(_DWORD *)(v13 + 4);
            }
            if ( v16 )
              operator delete((void *)v16);
            v13 += 40;
          }
          while ( v13 != v12 );
          v13 = *((_DWORD *)v9 + 5);
        if ( v13 )
          operator delete((void *)v13);
        v20 = *(_QWORD *)((char *)v9 + 4) >> 32;
        v21 = *(_QWORD *)((char *)v9 + 4);
        if ( v21 != v20 )
            v22 = *(_DWORD *)(v21 + 8);
            if ( v22 )
              v23 = (unsigned int *)(v22 + 8);
              if ( &pthread_create )
                __dmb();
                do
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
              else
                v24 = (*v23)--;
              if ( v24 == 1 )
                (*(void (**)(void))(*(_DWORD *)v22 + 12))();
            v21 += 20;
          while ( v21 != v20 );
          v21 = *((_DWORD *)v9 + 1);
        if ( v21 )
          operator delete((void *)v21);
        operator delete(v9);
        v5 = *v6;
      }
    }
  }
  else
    v5 = 0;
  return v5;
}


unsigned int __fastcall LayoutComponent::isDelayingLayout(LayoutComponent *this)
{
  return (*((_BYTE *)this + 213) & 0x40u) >> 6;
}


LayoutVariable *__fastcall LayoutComponent::removeReferencesToMe(LayoutComponent *this)
{
  LayoutComponent *v1; // r4@1
  LayoutVariable *v2; // r0@1
  LayoutVariable *v3; // r0@3
  LayoutVariable *v4; // r0@5
  LayoutVariable *v5; // r0@7
  LayoutVariable *v6; // r0@9
  LayoutVariable *v7; // r0@11
  LayoutVariable *v8; // r0@13
  LayoutVariable *v9; // r0@15
  LayoutVariable *v10; // r0@17
  LayoutVariable *result; // r0@19

  v1 = this;
  v2 = (LayoutVariable *)LayoutComponent::getVariable(this, AllLayoutVariableTypes);
  if ( v2 )
    LayoutVariable::_removeDependsOnMeEntries(v2);
  v3 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C641);
  if ( v3 )
    LayoutVariable::_removeDependsOnMeEntries(v3);
  v4 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C642);
  if ( v4 )
    LayoutVariable::_removeDependsOnMeEntries(v4);
  v5 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C643);
  if ( v5 )
    LayoutVariable::_removeDependsOnMeEntries(v5);
  v6 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C644);
  if ( v6 )
    LayoutVariable::_removeDependsOnMeEntries(v6);
  v7 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C645);
  if ( v7 )
    LayoutVariable::_removeDependsOnMeEntries(v7);
  v8 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C646);
  if ( v8 )
    LayoutVariable::_removeDependsOnMeEntries(v8);
  v9 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C647);
  if ( v9 )
    LayoutVariable::_removeDependsOnMeEntries(v9);
  v10 = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C648);
  if ( v10 )
    LayoutVariable::_removeDependsOnMeEntries(v10);
  result = (LayoutVariable *)LayoutComponent::getVariable(v1, unk_262C649);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable25_removeDependsOnMeEntriesEv(result);
  return result;
}
