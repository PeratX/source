

void __fastcall ButtonComponent::setPressedStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 6) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 7);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 7) = v3;
  j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(v2);
}


int __fastcall ButtonComponent::reload(int result, const UIComponent *a2)
{
  __int16 v2; // r1@1

  v2 = *((_WORD *)a2 + 20);
  *(_BYTE *)(result + 40) = v2;
  *(_BYTE *)(result + 41) = HIBYTE(v2);
  return result;
}


void __fastcall ButtonComponent::onVisibilityChanged(ButtonComponent *this, int a2)
{
  ButtonComponent::onVisibilityChanged(this, a2);
}


void __fastcall ButtonComponent::setDefaultStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 2) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 3);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 3) = v3;
  j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(v2);
}


int __fastcall ButtonComponent::receive(UIComponent *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  UIComponent *v7; // r4@1
  int v8; // r2@4
  signed int v9; // r1@5
  bool v10; // zf@14

  v7 = a1;
  if ( !UIComponent::isLocked(a1) )
  {
    if ( a5 == 2 )
    {
      *((_BYTE *)v7 + 41) = a7 & 1;
      if ( !(a7 & 1) && *((_BYTE *)v7 + 40) )
        *((_BYTE *)v7 + 40) = 0;
      goto LABEL_20;
    }
    if ( a5 == 1 )
      v8 = *((_BYTE *)v7 + 40);
      if ( (unsigned __int16)a7 >> 8 )
      {
        v9 = *((_BYTE *)v7 + 40);
        if ( (unsigned __int16)a7 >> 8 != 1 )
        {
LABEL_13:
          if ( v8 != v9 )
          {
            v10 = (a7 & 0x1000000) == 0;
            if ( a7 & 0x1000000 )
              v10 = v9 == 0;
            if ( !v10 || a7 & 0x10000 && !v9 )
            {
LABEL_20:
              ButtonComponent::_updateControlVisibility(v7);
              return 0;
            }
          }
          return 0;
        }
        v9 = 1;
      }
      else
        v9 = 0;
      *((_BYTE *)v7 + 40) = v9;
      goto LABEL_13;
  }
  return 0;
}


void __fastcall ButtonComponent::onVisibilityChanged(ButtonComponent *this, int a2)
{
  if ( !a2 )
  {
    *((_WORD *)this + 20) = 0;
    j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(this);
  }
}


void __fastcall ButtonComponent::setVisible(int a1, int a2, int a3)
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


unsigned int __fastcall ButtonComponent::clone(ButtonComponent *this, UIControl *a2, UIControl *a3)
{
  ButtonComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  UIComponent *v6; // r5@1
  int v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r0@5
  unsigned int *v11; // r2@6
  unsigned int v12; // r1@8
  int v13; // r7@14
  unsigned int *v14; // r0@15
  unsigned int v15; // r1@17
  int v16; // r0@20
  unsigned int *v17; // r2@21
  unsigned int v18; // r1@23
  int v19; // r7@28
  unsigned int *v20; // r0@29
  unsigned int v21; // r1@31
  int v22; // r0@34
  unsigned int *v23; // r2@35
  unsigned int v24; // r1@37
  int v25; // r7@42
  unsigned int *v26; // r0@43
  unsigned int v27; // r1@45
  int v28; // r0@48
  unsigned int *v29; // r2@49
  unsigned int v30; // r1@51
  unsigned int v31; // r0@56
  unsigned int result; // r0@56

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x2Cu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26D69EC;
  _aeabi_memclr4((char *)v6 + 8, 34);
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
      v10 = *((_DWORD *)v6 + 3);
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
    }
    else
      ++*v8;
  }
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
  v31 = *((_WORD *)v5 + 20);
  *((_BYTE *)v6 + 40) = v31;
  *(_DWORD *)v3 = v6;
  result = v31 >> 8;
  *((_BYTE *)v6 + 41) = result;
  return result;
}


void __fastcall ButtonComponent::_updateControlVisibility(ButtonComponent *this)
{
  ButtonComponent *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@2
  unsigned int v4; // r1@3
  unsigned int *v5; // r0@3
  unsigned int v6; // r2@6
  unsigned int v7; // r3@7
  unsigned int v8; // r1@8
  int v9; // r0@8
  unsigned int v10; // r4@11
  int v11; // r1@11
  int v12; // r0@12
  int v13; // r0@12
  int v14; // r1@12
  int v15; // r2@12
  UIControl *v16; // r6@14
  int v17; // r2@18
  int v18; // r0@20
  int v19; // r0@20
  unsigned int *v20; // r1@21
  unsigned int v21; // r0@23
  int v22; // r0@25
  int v23; // r0@26
  unsigned int *v24; // r5@29
  unsigned int v25; // r0@31
  int v26; // r0@35

  v1 = this;
  v2 = UIComponent::isLocked(this);
  if ( v2 == 1 )
  {
    v3 = *((_DWORD *)v1 + 9);
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
            goto LABEL_14;
          }
        }
        else
          __clrex();
      }
    }
    v9 = 1;
    v3 = 0;
LABEL_14:
    v16 = (UIControl *)*((_DWORD *)v1 + 8);
    if ( v9 )
      v16 = 0;
    if ( v16 )
      v9 = UIControl::setVisible(v16, 1, 1, 1);
    v17 = 0;
    if ( !v16 )
      v17 = 1;
    ButtonComponent::setVisible(v9, (int)v1 + 8, v17);
    ButtonComponent::setVisible(v18, (int)v1 + 24, 0);
    ButtonComponent::setVisible(v19, (int)v1 + 16, 0);
      v20 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        v24 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  else
    v10 = *((_WORD *)v1 + 20);
    v11 = (int)v1 + 32;
    if ( (_BYTE)v10 )
      ButtonComponent::setVisible(v2, v11, 0);
      ButtonComponent::setVisible(v12, (int)v1 + 24, 1);
      v14 = (int)v1 + 16;
      v15 = 0;
    else
      ButtonComponent::setVisible(v22, (int)v1 + 24, 0);
      if ( v10 < 0x100 )
        ButtonComponent::setVisible(v13, v14, 0);
        j_j_j__ZN15ButtonComponent10setVisibleERKSt8weak_ptrI9UIControlEb(v23, (int)v1 + 8, 1);
        return;
      v15 = 1;
    ButtonComponent::setVisible(v13, v14, v15);
    j_j_j__ZN15ButtonComponent10setVisibleERKSt8weak_ptrI9UIControlEb(v26, (int)v1 + 8, 0);
}


void __fastcall ButtonComponent::setHoverStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent::setHoverStateControl(this, a2);
}


void __fastcall ButtonComponent::setHoverStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 5);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 5) = v3;
  j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(v2);
}


void __fastcall ButtonComponent::setVisible(int a1, int a2, int a3)
{
  ButtonComponent::setVisible(a1, a2, a3);
}


int __fastcall ButtonComponent::~ButtonComponent(ButtonComponent *this)
{
  ButtonComponent *v1; // r5@1
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

  v1 = this;
  *(_DWORD *)this = &off_26D69EC;
  v2 = *((_DWORD *)this + 9);
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
  v5 = *((_DWORD *)v1 + 7);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = *((_DWORD *)v1 + 5);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = *((_DWORD *)v1 + 3);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


int __fastcall ButtonComponent::receive(ButtonComponent *a1, int a2)
{
  if ( a2 == 18 )
    ButtonComponent::_updateControlVisibility(a1);
  return 0;
}


int __fastcall ButtonComponent::getHoverStateControl(int result, int a2)
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


int __fastcall ButtonComponent::onEnabledChanged(int result, int a2)
{
  if ( !a2 )
    *(_WORD *)(result + 40) = 0;
  return result;
}


int __fastcall ButtonComponent::getLockedStateControl(int result, int a2)
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


void __fastcall ButtonComponent::~ButtonComponent(ButtonComponent *this)
{
  ButtonComponent::~ButtonComponent(this);
}


int __fastcall ButtonComponent::getDefaultStateControl(int result, int a2)
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


int __fastcall ButtonComponent::getPressedStateControl(int result, int a2)
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


void __fastcall ButtonComponent::setLockedStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 8) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 9);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 9) = v3;
  j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(v2);
}


void __fastcall ButtonComponent::reset(ButtonComponent *this)
{
  ButtonComponent::reset(this);
}


void __fastcall ButtonComponent::setDefaultStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent::setDefaultStateControl(this, a2);
}


void __fastcall ButtonComponent::_updateControlVisibility(ButtonComponent *this)
{
  ButtonComponent::_updateControlVisibility(this);
}


void __fastcall ButtonComponent::reset(ButtonComponent *this)
{
  *((_WORD *)this + 20) = 0;
  j_j_j__ZN15ButtonComponent24_updateControlVisibilityEv(this);
}


UIComponent *__fastcall ButtonComponent::ButtonComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D69EC;
  _aeabi_memclr4((char *)v2 + 8, 34);
  return v2;
}


void __fastcall ButtonComponent::~ButtonComponent(ButtonComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)ButtonComponent::~ButtonComponent(this);
  j_j_j__ZdlPv_3(v1);
}


void __fastcall ButtonComponent::setLockedStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent::setLockedStateControl(this, a2);
}


void __fastcall ButtonComponent::setPressedStateControl(ButtonComponent *this, int a2)
{
  ButtonComponent::setPressedStateControl(this, a2);
}
