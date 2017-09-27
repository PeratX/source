

int __fastcall ToggleComponent::setUncheckedStateControl(int a1, int a2)
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


int __fastcall ToggleComponent::_handleControllerDirectionEvent(ToggleComponent *this, VisualTree *a2, ScreenInputContext *a3, int *_R3)
{
  ToggleComponent *v4; // r5@1
  int result; // r0@1
  VisualTree *v6; // r4@1
  char v7; // r6@2

  v4 = this;
  result = *_R3;
  v6 = a2;
  if ( !*_R3 )
  {
    v7 = *((_BYTE *)v4 + 72);
    if ( *((_BYTE *)v4 + 72) & 0x10 )
    {
      __asm
      {
        VLDR            S0, [R3,#4]
        VLDR            S4, =0.8
        VABS.F32        S2, S0
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDRGT          S4, [R3,#8]
          VABSGT.F32      S4, S4
          VCMPEGT.F32     S2, S4
          VMRSGT          APSR_nzcv, FPSCR
        }
        result = v7 & 1;
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( !(v7 & 1) )
            return result;
          if ( *((_BYTE *)v4 + 72) & 4 )
          {
            ToggleComponent::_setChecked(v4, a3, 1, 1);
LABEL_15:
            ToggleComponent::_updateToggleGroupState(v4, v6, 0);
            return (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v6 + 20))(v6, 1);
          }
          ToggleComponent::_setChecked(v4, a3, 0, 1);
          return (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v6 + 20))(v6, 1);
        if ( !(v7 & 1) )
          ToggleComponent::_setChecked(v4, a3, 1, 1);
          if ( v7 & 4 )
            goto LABEL_15;
          return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v6 + 20))(v6, 1);
    }
  }
  return result;
}


int __fastcall ToggleComponent::getUncheckedLockedHoverStateControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 64);
  v2 = *(_DWORD *)(a2 + 68);
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


void __fastcall ToggleComponent::_updateControlVisibility(ToggleComponent *this)
{
  ToggleComponent::_updateControlVisibility(this);
}


int __fastcall ToggleComponent::setUncheckedHoverStateControl(int a1, int a2)
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


void __fastcall ToggleComponent::_updateToggleGroupState(ToggleComponent *this, VisualTree *a2, bool a3)
{
  ToggleComponent::_updateToggleGroupState(this, a2, a3);
}


char *__fastcall ToggleComponent::getGridCollectionName(ToggleComponent *this)
{
  return (char *)this + 76;
}


int __fastcall ToggleComponent::setForcedGroupIndex(ToggleComponent *this, int a2)
{
  int *v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r5@1
  int v6; // [sp+0h] [bp-18h]@1
  const char *v7; // [sp+4h] [bp-14h]@1

  *((_DWORD *)this + 22) = a2;
  v2 = (int *)((char *)this + 88);
  v3 = (UIControl *)UIComponent::getOwner(this);
  v4 = UIControl::getPropertyBag(v3);
  gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&v6, (int)"#toggle_group_forced_index");
  return j_j_j__ZN13UIPropertyBag3setIiEEvN3gsl17basic_string_spanIKcLin1EEERKT_(v4, v6, v7, v2);
}


int __fastcall ToggleComponent::getCheckedStateControl(int result, int a2)
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


int __fastcall ToggleComponent::getCheckedHoverStateControl(int result, int a2)
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


int __fastcall ToggleComponent::setUncheckedLockedHoverStateControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 68);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 68) = v3;
  return result;
}


int __fastcall ToggleComponent::_toggleOn(int result, VisualTree *a2, ScreenInputContext *a3, bool a4)
{
  ToggleComponent *v4; // r5@1
  VisualTree *v5; // r4@1
  char v6; // r6@1

  v4 = (ToggleComponent *)result;
  v5 = a2;
  v6 = *(_BYTE *)(result + 72);
  if ( !(*(_BYTE *)(result + 72) & 1) )
  {
    ToggleComponent::_setChecked((ToggleComponent *)result, a3, 1, 1);
    if ( v6 & 4 )
      ToggleComponent::_updateToggleGroupState(v4, v5, 0);
    result = (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v5 + 20))(v5, 1);
  }
  return result;
}


int __fastcall ToggleComponent::setUncheckedLockedStateControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 60);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 60) = v3;
  return result;
}


void __fastcall ToggleComponent::setChecked(ToggleComponent *this, bool a2)
{
  ToggleComponent::setChecked(this, a2);
}


UIComponent *__fastcall ToggleComponent::ToggleComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r0@1
  char v6; // [sp+7h] [bp-11h]@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6F4C;
  _aeabi_memclr4((char *)v2 + 8, 64);
  *((_BYTE *)v2 + 72) &= 0xE0u;
  sub_DA7364((void **)v2 + 19, (const char *)&unk_257BC67);
  *((_WORD *)v2 + 40) = -1;
  *((_WORD *)v2 + 41) = 0;
  *((_WORD *)v2 + 42) = 0;
  *((_DWORD *)v2 + 22) = -1;
  *((_DWORD *)v2 + 23) = 0;
  *((_BYTE *)v2 + 72) &= 0xFEu;
  v3 = (UIControl *)UIComponent::getOwner(v2);
  v4 = UIControl::getPropertyBag(v3);
  v6 = *((_BYTE *)v2 + 72) & 1;
  UIPropertyBag::set<bool>(v4, 13, "#toggle_state", &v6);
  ToggleComponent::_updateControlVisibility(v2);
  return v2;
}


int __fastcall ToggleComponent::setToggleOnHover(ToggleComponent *this, bool a2)
{
  UIControl *v2; // r0@1
  int v3; // r0@1
  bool v5; // [sp+7h] [bp-9h]@1

  v5 = a2;
  v2 = (UIControl *)UIComponent::getOwner(this);
  v3 = UIControl::getPropertyBag(v2);
  return UIPropertyBag::set<bool>(v3, 16, "#toggle_on_hover", &v5);
}


int __fastcall ToggleComponent::getCheckedLockedStateControl(int result, int a2)
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


unsigned int __fastcall ToggleComponent::getEnableDirectionalToggling(ToggleComponent *this)
{
  return (*((_BYTE *)this + 72) & 0x10u) >> 4;
}


void __fastcall ToggleComponent::reset(ToggleComponent *this)
{
  ToggleComponent::reset(this);
}


void __fastcall ToggleComponent::resetDefaultState(ToggleComponent *this)
{
  ToggleComponent *v1; // r4@1
  unsigned int v2; // r0@1
  UIControl *v3; // r0@2
  int v4; // r0@2
  char *v5; // r3@2
  const char *v6; // r2@2
  int v7; // r0@3
  int v8; // r0@4
  UIControl *v9; // r0@6
  UIControl *v10; // r0@7
  char v11; // [sp+5h] [bp-Bh]@2
  char v12; // [sp+6h] [bp-Ah]@6
  char v13; // [sp+7h] [bp-9h]@7

  v1 = this;
  v2 = *((_BYTE *)this + 72);
  if ( v2 & 4 )
  {
    v7 = *((_DWORD *)v1 + 22);
    if ( v7 <= -1 )
    {
      v8 = UIComponent::getOwner(v1);
      v7 = UIControl::findCollectionIndex(v8, (const void **)v1 + 19);
    }
    if ( v7 == *((_DWORD *)v1 + 23) )
      *((_BYTE *)v1 + 72) |= 1u;
      v9 = (UIControl *)UIComponent::getOwner(v1);
      v4 = UIControl::getPropertyBag(v9);
      v5 = &v12;
      v12 = *((_BYTE *)v1 + 72) & 1;
      v6 = "#toggle_state";
    else
      *((_BYTE *)v1 + 72) &= 0xFEu;
      v10 = (UIControl *)UIComponent::getOwner(v1);
      v4 = UIControl::getPropertyBag(v10);
      v5 = &v13;
      v13 = *((_BYTE *)v1 + 72) & 1;
  }
  else
    *((_BYTE *)v1 + 72) = v2 & 0xFE | (v2 >> 3) & 1;
    v3 = (UIControl *)UIComponent::getOwner(v1);
    v4 = UIControl::getPropertyBag(v3);
    v5 = &v11;
    v11 = *((_BYTE *)v1 + 72) & 1;
    v6 = "#toggle_state";
  UIPropertyBag::set<bool>(v4, 13, v6, v5);
  ToggleComponent::_updateControlVisibility(v1);
}


int __fastcall ToggleComponent::setDefaultState(int result, bool a2)
{
  *(_BYTE *)(result + 72) = *(_BYTE *)(result + 72) & 0xF7 | 8 * a2;
  return result;
}


int __fastcall ToggleComponent::isChecked(ToggleComponent *this)
{
  return *((_BYTE *)this + 72) & 1;
}


void __fastcall ToggleComponent::_setVisible(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r3@5
  unsigned int v7; // r5@6
  UIControl *v8; // r0@7
  bool v9; // zf@7
  unsigned int v10; // r0@13
  unsigned int *v11; // r5@17
  unsigned int v12; // r0@19

  v3 = *(_DWORD *)(a2 + 4);
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
          v8 = (UIControl *)*v5;
          v9 = *v5 == 0;
          if ( *v5 )
          {
            v8 = *(UIControl **)a2;
            v9 = *(_DWORD *)a2 == 0;
          }
          if ( !v9 )
            UIControl::setVisible(v8, a3, 0, 1);
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v5);
            while ( __strex(v10 - 1, v5) );
          else
            v10 = (*v5)--;
          if ( v10 == 1 )
            v11 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


int __fastcall ToggleComponent::setCheckedLockedStateControl(int a1, int a2)
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


int __fastcall ToggleComponent::getUncheckedStateControl(int result, int a2)
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


int __fastcall ToggleComponent::_setChecked(ToggleComponent *this, ScreenInputContext *a2, bool a3, bool a4)
{
  ToggleComponent *v4; // r5@1
  bool v5; // r6@1
  ScreenInputContext *v6; // r8@1
  UIControl *v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@2
  UIControl *v11; // r0@3
  int v12; // r0@3
  int v14; // [sp+18h] [bp-38h]@1
  int v15; // [sp+1Ch] [bp-34h]@1
  int v16; // [sp+20h] [bp-30h]@3
  char v17; // [sp+24h] [bp-2Ch]@3
  bool v18; // [sp+25h] [bp-2Bh]@3
  __int64 v19; // [sp+28h] [bp-28h]@3

  v4 = this;
  v5 = a4;
  v6 = a2;
  *((_BYTE *)this + 72) = *((_BYTE *)this + 72) & 0xFE | a3;
  v7 = (UIControl *)UIComponent::getOwner(this);
  v8 = UIControl::getPropertyBag(v7);
  LOBYTE(v14) = *((_BYTE *)v4 + 72) & 1;
  UIPropertyBag::set<bool>(v8, 13, "#toggle_state", &v14);
  ToggleComponent::_updateControlVisibility(v4);
  ScreenEvent::ScreenEvent((ScreenEvent *)&v14);
  v14 = 13;
  LOWORD(v15) = *((_WORD *)v4 + 40);
  v9 = *((_DWORD *)v4 + 22);
  if ( v9 <= -1 )
  {
    v10 = UIComponent::getOwner(v4);
    v9 = UIControl::findCollectionIndex(v10, (const void **)v4 + 19);
  }
  v16 = v9;
  v17 = *((_BYTE *)v4 + 72) & 1;
  v18 = v5;
  v11 = (UIControl *)UIComponent::getOwner(v4);
  LODWORD(v19) = UIControl::getPropertyBag(v11);
  v12 = UIComponent::getOwner(v4);
  UIControl::broadcastEvent(v12, (int)v4, v14, v15, v16, *(int *)&v17);
  return ScreenInputContext::enqueueEvent(__PAIR__(&v14, (unsigned int)v6));
}


int __fastcall ToggleComponent::setToggleOffButton(int result, __int16 a2)
{
  *(_WORD *)(result + 84) = a2;
  return result;
}


int __fastcall ToggleComponent::_toggleOff(ToggleComponent *this, VisualTree *a2, ScreenInputContext *a3, bool a4)
{
  ToggleComponent *v4; // r5@1
  VisualTree *v5; // r4@1
  int result; // r0@1

  v4 = this;
  v5 = a2;
  result = *((_BYTE *)this + 72);
  if ( result & 1 )
  {
    if ( result & 4 )
    {
      ToggleComponent::_setChecked(v4, a3, 1, 1);
      ToggleComponent::_updateToggleGroupState(v4, v5, 0);
    }
    else
      ToggleComponent::_setChecked(v4, a3, 0, 1);
    result = (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v5 + 20))(v5, 1);
  }
  return result;
}


int __fastcall ToggleComponent::_handleHoverEvent(ToggleComponent *this, VisualTree *a2, ScreenInputContext *a3, int a4)
{
  ToggleComponent *v4; // r5@1
  VisualTree *v5; // r4@1
  int result; // r0@1
  ScreenInputContext *v7; // r6@1
  int v8; // r1@1
  UIControl *v9; // r0@2
  int v10; // r0@2
  Json::Value *v11; // r7@2
  Json::Value *v12; // r0@4
  Json::Value *v13; // r7@4
  bool v14; // r2@9

  v4 = this;
  v5 = a2;
  result = *((_BYTE *)this + 72);
  v7 = a3;
  v8 = *(_BYTE *)(a4 + 4);
  if ( (((unsigned int)result >> 1) & 1) != v8 )
  {
    *((_BYTE *)v4 + 72) = result & 0xFD | 2 * v8;
    ToggleComponent::_updateControlVisibility(v4);
    v9 = (UIControl *)UIComponent::getOwner(v4);
    v10 = UIControl::getPropertyBag(v9);
    v11 = (Json::Value *)(v10 + 8);
    result = Json::Value::isNull((Json::Value *)(v10 + 8));
    if ( !result )
    {
      result = Json::Value::isObject(v11);
      if ( result == 1 )
      {
        v12 = (Json::Value *)Json::Value::operator[]((int)v11, "#toggle_on_hover");
        v13 = v12;
        result = Json::Value::isBool(v12);
        if ( result == 1 )
        {
          result = Json::Value::asBool(v13, 0);
          if ( result == 1 )
          {
            result = *((_BYTE *)v4 + 72);
            if ( result & 2 )
            {
              if ( result & 4 )
              {
                ToggleComponent::_setChecked(v4, v7, 1, 0);
                ToggleComponent::_updateToggleGroupState(v4, v5, 0);
              }
              else
                v14 = 0;
                if ( !(result & 1) )
                  v14 = 1;
                ToggleComponent::_setChecked(v4, v7, v14, 0);
              result = (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v5 + 20))(v5, 1);
            }
          }
        }
      }
    }
  }
  return result;
}


int __fastcall ToggleComponent::getGroupIndex(ToggleComponent *this)
{
  ToggleComponent *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2

  v1 = this;
  result = *((_DWORD *)this + 22);
  if ( result <= -1 )
  {
    v3 = UIComponent::getOwner(v1);
    result = j_j_j__ZNK9UIControl19findCollectionIndexERKSs(v3, (const void **)v1 + 19);
  }
  return result;
}


signed int __fastcall ToggleComponent::getToggleOnHover(ToggleComponent *this)
{
  UIControl *v1; // r0@1
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  signed int result; // r0@4

  v1 = (UIControl *)UIComponent::getOwner(this);
  v2 = (Json::Value *)(UIControl::getPropertyBag(v1) + 8);
  if ( Json::Value::isNull(v2)
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#toggle_on_hover"), Json::Value::isBool(v3) != 1) )
  {
    result = 0;
  }
  else
    result = Json::Value::asBool(v3, 0);
  return result;
}


int __fastcall ToggleComponent::getCheckedLockedHoverStateControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 48);
  v2 = *(_DWORD *)(a2 + 52);
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


void __fastcall ToggleComponent::_updateControlVisibility(ToggleComponent *this)
{
  ToggleComponent *v1; // r7@1
  int v2; // r0@1
  int v3; // r4@1
  char v4; // ST08_1@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1

  v1 = this;
  v2 = UIComponent::isLocked(this);
  v3 = (int)v1 + 8;
  v4 = v2;
  ToggleComponent::_setVisible(v2, (int)v1 + 8, 0);
  ToggleComponent::_setVisible(v5, (int)v1 + 24, 0);
  ToggleComponent::_setVisible(v6, (int)v1 + 16, 0);
  ToggleComponent::_setVisible(v7, (int)v1 + 32, 0);
  ToggleComponent::_setVisible(v8, (int)v1 + 40, 0);
  ToggleComponent::_setVisible(v9, (int)v1 + 48, 0);
  ToggleComponent::_setVisible(v10, (int)v1 + 56, 0);
  ToggleComponent::_setVisible(v11, (int)v1 + 64, 0);
  v12 = ((*((_BYTE *)v1 + 72) & 1) + 1) & 0xFFFFFFF7 | 8 * (v4 & 1) | 2 * *((_BYTE *)v1 + 72) & 4;
  switch ( v12 )
  {
    case 1:
      v3 = (int)v1 + 16;
      break;
    default:
      return;
    case 5:
      v3 = (int)v1 + 32;
    case 6:
      v3 = (int)v1 + 24;
    case 9:
      v3 = (int)v1 + 56;
    case 10:
      v3 = (int)v1 + 40;
    case 13:
      v3 = (int)v1 + 64;
    case 14:
      v3 = (int)v1 + 48;
    case 2:
  }
  j_j_j__ZN15ToggleComponent11_setVisibleERSt8weak_ptrI9UIControlEb(v12, v3, 1);
}


int __fastcall ToggleComponent::clone(ToggleComponent *this, UIControl *a2, UIControl *a3)
{
  ToggleComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r0@7
  unsigned int *v11; // r2@8
  unsigned int v12; // r1@10
  int v13; // r7@15
  unsigned int *v14; // r0@16
  unsigned int v15; // r1@18
  int v16; // r0@21
  unsigned int *v17; // r2@22
  unsigned int v18; // r1@24
  int v19; // r7@29
  unsigned int *v20; // r0@30
  unsigned int v21; // r1@32
  int v22; // r0@35
  unsigned int *v23; // r2@36
  unsigned int v24; // r1@38
  int v25; // r7@43
  unsigned int *v26; // r0@44
  unsigned int v27; // r1@46
  int v28; // r0@49
  unsigned int *v29; // r2@50
  unsigned int v30; // r1@52
  int v31; // r7@57
  unsigned int *v32; // r0@58
  unsigned int v33; // r1@60
  int v34; // r0@63
  unsigned int *v35; // r2@64
  unsigned int v36; // r1@66
  int v37; // r7@71
  unsigned int *v38; // r0@72
  unsigned int v39; // r1@74
  int v40; // r0@77
  unsigned int *v41; // r2@78
  unsigned int v42; // r1@80
  int v43; // r0@85
  int result; // r0@85

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x60u);
  ToggleComponent::ToggleComponent((UIComponent *)v6, v4);
  *((_DWORD *)v6 + 2) = *((_DWORD *)v5 + 2);
  v7 = *((_DWORD *)v5 + 3);
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  v10 = *((_DWORD *)v6 + 3);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  *((_DWORD *)v6 + 3) = v7;
  *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
  v13 = *((_DWORD *)v5 + 5);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  v16 = *((_DWORD *)v6 + 5);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  *((_DWORD *)v6 + 5) = v13;
  *((_DWORD *)v6 + 6) = *((_DWORD *)v5 + 6);
  v19 = *((_DWORD *)v5 + 7);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  v22 = *((_DWORD *)v6 + 7);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  *((_DWORD *)v6 + 7) = v19;
  *((_DWORD *)v6 + 8) = *((_DWORD *)v5 + 8);
  v25 = *((_DWORD *)v5 + 9);
  if ( v25 )
    v26 = (unsigned int *)(v25 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  v28 = *((_DWORD *)v6 + 9);
  if ( v28 )
    v29 = (unsigned int *)(v28 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  *((_DWORD *)v6 + 9) = v25;
  *((_DWORD *)v6 + 10) = *((_DWORD *)v5 + 10);
  v31 = *((_DWORD *)v5 + 11);
  if ( v31 )
    v32 = (unsigned int *)(v31 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 + 1, v32) );
      ++*v32;
  v34 = *((_DWORD *)v6 + 11);
  if ( v34 )
    v35 = (unsigned int *)(v34 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      (*(void (**)(void))(*(_DWORD *)v34 + 12))();
  *((_DWORD *)v6 + 11) = v31;
  *((_DWORD *)v6 + 14) = *((_DWORD *)v5 + 14);
  v37 = *((_DWORD *)v5 + 15);
  if ( v37 )
    v38 = (unsigned int *)(v37 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      ++*v38;
  v40 = *((_DWORD *)v6 + 15);
  if ( v40 )
    v41 = (unsigned int *)(v40 + 8);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 == 1 )
      (*(void (**)(void))(*(_DWORD *)v40 + 12))();
  *((_DWORD *)v6 + 15) = v37;
  *((_BYTE *)v6 + 72) = *((_BYTE *)v5 + 72) & 0x10 | *((_BYTE *)v6 + 72) & 0xE0 | *((_BYTE *)v5 + 72) & 1 | *((_BYTE *)v5 + 72) & 4 | *((_BYTE *)v5 + 72) & 8;
  EntityInteraction::setInteractText((int *)v6 + 19, (int *)v5 + 19);
  v43 = *((_DWORD *)v5 + 20);
  *((_WORD *)v6 + 40) = v43;
  *((_WORD *)v6 + 41) = HIWORD(v43);
  *((_WORD *)v6 + 42) = *((_WORD *)v5 + 42);
  *((_DWORD *)v6 + 22) = *((_DWORD *)v5 + 22);
  result = *((_DWORD *)v5 + 23);
  *((_DWORD *)v6 + 23) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall ToggleComponent::getUncheckedHoverStateControl(int result, int a2)
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


int __fastcall ToggleComponent::setEnableDirectionalToggling(int result, bool a2)
{
  *(_BYTE *)(result + 72) = *(_BYTE *)(result + 72) & 0xEF | 16 * a2;
  return result;
}


void __fastcall ToggleComponent::setChecked(ToggleComponent *this, bool a2)
{
  ToggleComponent *v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r0@1
  char v5; // [sp+7h] [bp-9h]@1

  v2 = this;
  *((_BYTE *)this + 72) = *((_BYTE *)this + 72) & 0xFE | a2;
  v3 = (UIControl *)UIComponent::getOwner(this);
  v4 = UIControl::getPropertyBag(v3);
  v5 = *((_BYTE *)v2 + 72) & 1;
  UIPropertyBag::set<bool>(v4, 13, "#toggle_state", &v5);
  j_j_j__ZN15ToggleComponent24_updateControlVisibilityEv(v2);
}


void __fastcall ToggleComponent::~ToggleComponent(ToggleComponent *this)
{
  ToggleComponent::~ToggleComponent(this);
}


void __fastcall ToggleComponent::~ToggleComponent(ToggleComponent *this)
{
  ToggleComponent *v1; // r0@1

  v1 = ToggleComponent::~ToggleComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall ToggleComponent::setCheckedStateControl(int a1, int a2)
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


int __fastcall ToggleComponent::setToggleOnButton(int result, __int16 a2)
{
  *(_WORD *)(result + 82) = a2;
  return result;
}


int __fastcall ToggleComponent::setRadioToggleGroup(int result, bool a2)
{
  *(_BYTE *)(result + 72) = *(_BYTE *)(result + 72) & 0xFB | 4 * a2;
  return result;
}


int __fastcall ToggleComponent::_handleButtonEvent(ToggleComponent *this, VisualTree *a2, ScreenInputContext *a3, int a4)
{
  ToggleComponent *v4; // r5@1
  int result; // r0@1
  VisualTree *v6; // r4@1
  char v7; // r6@2
  bool v8; // zf@4
  ScreenInputContext *v9; // r1@16
  ToggleComponent *v10; // r0@16
  bool v11; // r2@16
  bool v12; // zf@17
  char v13; // r3@22

  v4 = this;
  result = *(_WORD *)a4;
  v6 = a2;
  if ( result == *((_WORD *)v4 + 41) )
  {
    v7 = *((_BYTE *)v4 + 72);
    if ( !(*((_BYTE *)v4 + 72) & 0x10) )
      return result;
    result = *(_BYTE *)(a4 + 5);
    if ( *(_BYTE *)(a4 + 5) )
    v8 = (v7 & 1) == 0;
    if ( !(*((_BYTE *)v4 + 72) & 1) )
    {
      result = *(_BYTE *)(a4 + 4);
      v8 = result == 1;
    }
    if ( !v8 )
    ToggleComponent::_setChecked(v4, a3, 1, 1);
    if ( v7 & 4 )
      goto LABEL_27;
    return (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v6 + 20))(v6, 1);
  }
  if ( result == *((_WORD *)v4 + 42) )
    result = *((_BYTE *)v4 + 72);
    if ( !(result & 0x10) || *(_BYTE *)(a4 + 5) || !(result & 1) || *(_BYTE *)(a4 + 4) != 1 )
    if ( !(result & 4) )
      v9 = a3;
      v10 = v4;
      v11 = 0;
LABEL_25:
      ToggleComponent::_setChecked(v10, v9, v11, 1);
      return (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v6 + 20))(v6, 1);
    goto LABEL_26;
  result = *(_BYTE *)(a4 + 5);
  v12 = result == 0;
  if ( !*(_BYTE *)(a4 + 5) )
    result = *(_BYTE *)(a4 + 4);
    v12 = result == 1;
  if ( v12 )
    if ( !(*((_BYTE *)v4 + 72) & 4) )
      v13 = 0;
      if ( !(*((_BYTE *)v4 + 72) & 1) )
        v13 = 1;
      v11 = v13;
      goto LABEL_25;
LABEL_26:
LABEL_27:
    ToggleComponent::_updateToggleGroupState(v4, v6, 0);
    return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v6 + 20))(v6, 1);
  return result;
}


void __fastcall ToggleComponent::reset(ToggleComponent *this)
{
  ToggleComponent *v1; // r4@1
  UIControl *v2; // r0@1
  int v3; // r0@1
  char v4; // [sp+7h] [bp-9h]@1

  v1 = this;
  *((_BYTE *)this + 72) = (*((_BYTE *)this + 72) >> 3) & 1 | *((_BYTE *)this + 72) & 0xFC;
  v2 = (UIControl *)UIComponent::getOwner(this);
  v3 = UIControl::getPropertyBag(v2);
  v4 = *((_BYTE *)v1 + 72) & 1;
  UIPropertyBag::set<bool>(v3, 13, "#toggle_state", &v4);
  ToggleComponent::_updateControlVisibility(v1);
}


unsigned int __fastcall ToggleComponent::isRadioToggleGroup(ToggleComponent *this)
{
  return (*((_BYTE *)this + 72) & 4u) >> 2;
}


int __fastcall ToggleComponent::setDefaultGroupSelectedIndex(int result, int a2)
{
  *(_DWORD *)(result + 92) = a2;
  return result;
}


ToggleComponent *__fastcall ToggleComponent::~ToggleComponent(ToggleComponent *this)
{
  ToggleComponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r0@10
  unsigned int *v8; // r2@11
  unsigned int v9; // r1@13
  int v10; // r0@18
  unsigned int *v11; // r2@19
  unsigned int v12; // r1@21
  int v13; // r0@26
  unsigned int *v14; // r2@27
  unsigned int v15; // r1@29
  int v16; // r0@34
  unsigned int *v17; // r2@35
  unsigned int v18; // r1@37
  int v19; // r0@42
  unsigned int *v20; // r2@43
  unsigned int v21; // r1@45
  int v22; // r0@50
  unsigned int *v23; // r2@51
  unsigned int v24; // r1@53
  int v25; // r0@58
  unsigned int *v26; // r2@59
  unsigned int v27; // r1@61
  unsigned int *v29; // r2@67
  signed int v30; // r1@69

  v1 = this;
  *(_DWORD *)this = &off_26D6F4C;
  v2 = *((_DWORD *)this + 19);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v7 = *((_DWORD *)v1 + 15);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  v10 = *((_DWORD *)v1 + 13);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v13 = *((_DWORD *)v1 + 11);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  v16 = *((_DWORD *)v1 + 9);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  v19 = *((_DWORD *)v1 + 7);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  v22 = *((_DWORD *)v1 + 5);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  v25 = *((_DWORD *)v1 + 3);
  if ( v25 )
    v26 = (unsigned int *)(v25 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  UIComponent::~UIComponent(v1);
  return v1;
}


int __fastcall ToggleComponent::getUncheckedLockedStateControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 56);
  v2 = *(_DWORD *)(a2 + 60);
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


char *__fastcall ToggleComponent::getToggleGroup(ToggleComponent *this)
{
  return (char *)this + 80;
}


int __fastcall ToggleComponent::setCheckedHoverStateControl(int a1, int a2)
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


int __fastcall ToggleComponent::setToggleNameId(int result, __int16 a2)
{
  *(_WORD *)(result + 80) = a2;
  return result;
}


void __fastcall ToggleComponent::_setVisible(int a1, int a2, int a3)
{
  ToggleComponent::_setVisible(a1, a2, a3);
}


int __fastcall ToggleComponent::_toggleCheckedInternal(ToggleComponent *this, VisualTree *a2, ScreenInputContext *a3, bool a4)
{
  ToggleComponent *v4; // r5@1
  VisualTree *v5; // r6@1
  char v6; // r0@1
  bool v7; // r4@2

  v4 = this;
  v5 = a2;
  v6 = *((_BYTE *)this + 72);
  if ( v6 & 4 )
  {
    ToggleComponent::_setChecked(v4, a3, 1, a4);
    ToggleComponent::_updateToggleGroupState(v4, v5, 0);
  }
  else
    v7 = 0;
    if ( !(v6 & 1) )
      v7 = 1;
    ToggleComponent::_setChecked(v4, a3, v7, a4);
  return (*(int (__fastcall **)(VisualTree *, signed int))(*(_DWORD *)v5 + 20))(v5, 1);
}


void __fastcall ToggleComponent::_updateToggleGroupState(ToggleComponent *this, VisualTree *a2, bool a3)
{
  __int64 v3; // r5@1
  bool v4; // r10@1
  VisualTree *v5; // r4@1
  _QWORD *v6; // r0@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  void *v9; // r4@5
  void *v10; // r11@5
  int v11; // r7@6
  char v12; // r0@6
  int v13; // r5@9
  int v14; // r7@10
  UIControl *v15; // r0@12
  int v16; // r0@12
  int v17; // r6@13
  int v18; // r7@14
  unsigned int *v19; // r1@15
  unsigned int v20; // r0@17
  unsigned int *v21; // r5@21
  unsigned int v22; // r0@23
  _QWORD *v23; // [sp+4h] [bp-54h]@1
  void (*v24)(void); // [sp+Ch] [bp-4Ch]@1
  signed int (__fastcall *v25)(int *, int); // [sp+10h] [bp-48h]@1
  void *v26; // [sp+14h] [bp-44h]@1
  void *v27; // [sp+18h] [bp-40h]@5
  _DWORD *v28; // [sp+20h] [bp-38h]@1
  __int64 v29; // [sp+28h] [bp-30h]@1
  char v30; // [sp+33h] [bp-25h]@12

  LODWORD(v3) = this;
  v4 = a3;
  v5 = a2;
  HIDWORD(v3) = *((_WORD *)this + 40);
  v6 = operator new(8u);
  *v6 = v3;
  v23 = v6;
  v24 = (void (*)(void))sub_C4CC16;
  v25 = sub_C4CBC6;
  v7 = operator new(4u);
  *v7 = &v23;
  v28 = v7;
  LODWORD(v8) = std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
  HIDWORD(v8) = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
  v29 = v8;
  VisualTree::getControls((int)&v26, (int)v5, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( v24 )
    v24();
  v10 = v27;
  v9 = v26;
  if ( v26 != v27 )
  {
    do
    {
      v11 = *(_DWORD *)v9;
      v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
      __dmb();
      if ( !(v12 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
      {
        type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
      }
      v13 = type_id<UIComponent,ToggleComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v11, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
        v14 = *(_DWORD *)(*(_DWORD *)(v11 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v11, v13));
      else
        v14 = 0;
      *(_BYTE *)(v14 + 72) = *(_BYTE *)(v14 + 72) & 0xFE | v4;
      v15 = (UIControl *)UIComponent::getOwner((UIComponent *)v14);
      v16 = UIControl::getPropertyBag(v15);
      v30 = *(_BYTE *)(v14 + 72) & 1;
      UIPropertyBag::set<bool>(v16, 13, "#toggle_state", &v30);
      ToggleComponent::_updateControlVisibility((ToggleComponent *)v14);
      v9 = (char *)v9 + 8;
    }
    while ( v10 != v9 );
    v9 = v27;
    v17 = (int)v26;
    if ( v26 != v27 )
      do
        v18 = *(_DWORD *)(v17 + 4);
        if ( v18 )
        {
          v19 = (unsigned int *)(v18 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
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
        }
        v17 += 8;
      while ( (void *)v17 != v9 );
      v9 = v26;
  }
  if ( v9 )
    operator delete(v9);
}


int __fastcall ToggleComponent::receive(ToggleComponent *a1, int a2)
{
  if ( a2 == 18 )
    ToggleComponent::_updateControlVisibility(a1);
  return 0;
}


int __fastcall ToggleComponent::setCheckedLockedHoverStateControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 52);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 52) = v3;
  return result;
}


int __fastcall ToggleComponent::receive(ToggleComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  ScreenInputContext *v12; // r8@1
  VisualTree *v13; // r9@1
  ToggleComponent *v14; // r10@1
  int v16; // [sp+0h] [bp-40h]@1
  int v17; // [sp+4h] [bp-3Ch]@1
  int v18; // [sp+8h] [bp-38h]@1
  int v19; // [sp+Ch] [bp-34h]@1
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1

  v12 = (ScreenInputContext *)a3;
  v13 = (VisualTree *)a2;
  v14 = this;
  v16 = a5;
  v17 = a6;
  v18 = a7;
  v19 = a8;
  v20 = a9;
  v21 = a10;
  v22 = a11;
  v23 = a12;
  if ( a5 == 14 )
  {
    ToggleComponent::_handleControllerDirectionEvent(this, (VisualTree *)a2, (ScreenInputContext *)a3, &v17);
  }
  else if ( a5 == 2 )
    ToggleComponent::_handleHoverEvent(this, (VisualTree *)a2, (ScreenInputContext *)a3, (int)&v17);
  else if ( a5 == 1 && !UIComponent::isLocked(this) )
    ToggleComponent::_handleButtonEvent(v14, v13, v12, (int)&v17);
  return 0;
}


void __fastcall ToggleComponent::resetDefaultState(ToggleComponent *this)
{
  ToggleComponent::resetDefaultState(this);
}
