

int __fastcall SliderBoxComponent::setHover(SliderBoxComponent *this, bool a2)
{
  *((_BYTE *)this + 8) = a2;
  return j_j_j__ZN18SliderBoxComponent23updateControlVisibilityEv(this);
}


int __fastcall SliderBoxComponent::getHoverControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 28);
  v2 = *(_DWORD *)(a2 + 32);
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


int __fastcall SliderBoxComponent::getSliderControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 12);
  v2 = *(_DWORD *)(a2 + 16);
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


int __fastcall SliderBoxComponent::SliderBoxComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26E0958;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}


int __fastcall SliderBoxComponent::getDefaultControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 20);
  v2 = *(_DWORD *)(a2 + 24);
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


int __fastcall SliderBoxComponent::setHoverControl(SliderBoxComponent *this, int a2)
{
  SliderBoxComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 7) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 8);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 8) = v3;
  return j_j_j__ZN18SliderBoxComponent23updateControlVisibilityEv(v2);
}


void __fastcall SliderBoxComponent::~SliderBoxComponent(SliderBoxComponent *this)
{
  SliderBoxComponent::~SliderBoxComponent(this);
}


int __fastcall SliderBoxComponent::clone(SliderBoxComponent *this, UIControl *a2, UIControl *a3)
{
  SliderBoxComponent *v3; // r8@1
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
  int v19; // r6@28
  unsigned int *v20; // r0@29
  unsigned int v21; // r1@31
  int result; // r0@34
  unsigned int *v23; // r2@35
  unsigned int v24; // r1@37

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x2Cu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26E0958;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 7) = 0;
  *((_DWORD *)v6 + 8) = 0;
  *((_DWORD *)v6 + 9) = 0;
  *((_DWORD *)v6 + 10) = 0;
  *((_BYTE *)v6 + 8) = 0;
  *((_DWORD *)v6 + 5) = *((_DWORD *)v5 + 5);
  v7 = *((_DWORD *)v5 + 6);
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      v10 = *((_DWORD *)v6 + 6);
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
  *((_DWORD *)v6 + 6) = v7;
  *((_DWORD *)v6 + 7) = *((_DWORD *)v5 + 7);
  v13 = *((_DWORD *)v5 + 8);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  v16 = *((_DWORD *)v6 + 8);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  *((_DWORD *)v6 + 8) = v13;
  *((_DWORD *)v6 + 9) = *((_DWORD *)v5 + 9);
  v19 = *((_DWORD *)v5 + 10);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  result = *((_DWORD *)v6 + 10);
  if ( result )
    v23 = (unsigned int *)(result + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *((_DWORD *)v6 + 10) = v19;
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall SliderBoxComponent::receive(UIComponent *a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7; // r9@0
  int v8; // r11@1
  int v9; // r7@1
  int v10; // r4@1
  UIComponent *v11; // r5@1
  unsigned int v12; // r0@1
  bool v13; // zf@1
  int v14; // r8@5
  unsigned int v15; // r0@7
  unsigned int *v16; // r6@7
  unsigned int v17; // r1@10
  unsigned int v18; // r2@11
  bool v19; // zf@12
  char v20; // r0@15
  int v21; // r5@18
  InputComponent *v22; // r0@19
  unsigned int v23; // r0@21
  unsigned int *v24; // r6@21
  unsigned int v25; // r1@24
  unsigned int v26; // r2@25
  bool v27; // zf@26
  char v28; // r0@29
  int v29; // r10@32
  InputComponent *v30; // r0@33
  unsigned int v31; // r0@38
  unsigned int *v32; // r4@42
  unsigned int v33; // r0@44
  UIControl *v34; // r0@47
  unsigned int v35; // r0@50
  int v37; // [sp+2Ch] [bp-44h]@47
  int v38; // [sp+30h] [bp-40h]@47
  int v39[4]; // [sp+34h] [bp-3Ch]@47

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  v12 = UIComponent::isLocked(a1);
  v13 = a5 == 2;
  if ( a5 == 2 )
    v13 = (v12 ^ 1) == 1;
  if ( v13 )
  {
    v14 = *((_DWORD *)v11 + 4);
    if ( a7 & 1 )
    {
      if ( v14 )
      {
        v23 = *(_DWORD *)(v14 + 4);
        v24 = (unsigned int *)(v14 + 4);
        while ( v23 )
        {
          __dmb();
          v25 = __ldrex(v24);
          if ( v25 == v23 )
          {
            v26 = __strex(v23 + 1, v24);
            v23 = v25;
            if ( !v26 )
            {
              __dmb();
              v27 = *v24 == 0;
              if ( *v24 )
              {
                v7 = *((_DWORD *)v11 + 3);
                v27 = v7 == 0;
              }
              if ( !v27 )
                UIControl::setHover((UIControl *)v7, 1);
                v28 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
                __dmb();
                if ( !(v28 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
                {
                  type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
                }
                v29 = type_id<UIComponent,InputComponent>(void)::id[0];
                if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
                  v30 = *(InputComponent **)(*(_DWORD *)(v7 + 108)
                                           + 4 * UIControl::_getComponentIndex((UIControl *)v7, v29));
                else
                  v30 = 0;
                InputComponent::setIgnoreHoverChange(v30, 1);
                ScreenEvent::ScreenEvent((ScreenEvent *)&v37);
                v37 = 2;
                LOBYTE(v39[0]) = 1;
                v34 = (UIControl *)UIComponent::getOwner(v11);
                v38 = UIControl::getPropertyBag(v34);
                UIControl::broadcastEvent(v7, v10, v9, v8, (int)v11, v37, v38, v39[0], v39[1]);
              if ( &pthread_create )
                do
                  v35 = __ldrex(v24);
                while ( __strex(v35 - 1, v24) );
              else
                v35 = (*v24)--;
              if ( v35 == 1 )
                v32 = (unsigned int *)(v14 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
                if ( &pthread_create )
                  __dmb();
                  do
                    v33 = __ldrex(v32);
                  while ( __strex(v33 - 1, v32) );
LABEL_58:
                  v33 = (*v32)--;
LABEL_59:
                if ( v33 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
              return 0;
            }
          }
          else
            __clrex();
        }
      }
    }
    else if ( v14 )
      v15 = *(_DWORD *)(v14 + 4);
      v16 = (unsigned int *)(v14 + 4);
      while ( v15 )
        __dmb();
        v17 = __ldrex(v16);
        if ( v17 == v15 )
          v18 = __strex(v15 + 1, v16);
          v15 = v17;
          if ( !v18 )
            __dmb();
            v19 = *v16 == 0;
            if ( *v16 )
              v10 = *((_DWORD *)v11 + 3);
              v19 = v10 == 0;
            if ( !v19 )
              v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
              if ( !(v20 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
                type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
              v21 = type_id<UIComponent,InputComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v10, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
                v22 = *(InputComponent **)(*(_DWORD *)(v10 + 108)
                                         + 4 * UIControl::_getComponentIndex((UIControl *)v10, v21));
                v22 = 0;
              InputComponent::setIgnoreHoverChange(v22, 0);
            if ( &pthread_create )
              do
                v31 = __ldrex(v16);
              while ( __strex(v31 - 1, v16) );
            else
              v31 = (*v16)--;
            if ( v31 != 1 )
            v32 = (unsigned int *)(v14 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
            if ( !&pthread_create )
              goto LABEL_58;
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            goto LABEL_59;
        else
          __clrex();
  }
  return 0;
}


int __fastcall SliderBoxComponent::setDefaultControl(SliderBoxComponent *this, int a2)
{
  SliderBoxComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 6);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 6) = v3;
  return j_j_j__ZN18SliderBoxComponent23updateControlVisibilityEv(v2);
}


int __fastcall SliderBoxComponent::~SliderBoxComponent(SliderBoxComponent *this)
{
  SliderBoxComponent *v1; // r5@1
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
  *(_DWORD *)this = &off_26E0958;
  v2 = *((_DWORD *)this + 10);
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
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = *((_DWORD *)v1 + 6);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = *((_DWORD *)v1 + 4);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return j_j_j__ZN11UIComponentD2Ev_0(v1);
}


int __fastcall SliderBoxComponent::getLockedControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 36);
  v2 = *(_DWORD *)(a2 + 40);
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


int __fastcall SliderBoxComponent::setSliderControl(SliderBoxComponent *this, int a2)
{
  SliderBoxComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 3) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 4);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 4) = v3;
  return j_j_j__ZN18SliderBoxComponent23updateControlVisibilityEv(v2);
}


int __fastcall SliderBoxComponent::updateControlVisibility(SliderBoxComponent *this)
{
  SliderBoxComponent *v1; // r5@1
  int result; // r0@1
  int v3; // r6@1
  int v4; // r4@1
  unsigned int *v5; // r7@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  UIControl *v8; // r0@7
  bool v9; // zf@7
  signed int v10; // r1@10
  unsigned int *v11; // r7@19
  int v12; // r6@26
  unsigned int *v13; // r7@27
  unsigned int v14; // r1@30
  unsigned int v15; // r2@31
  UIControl *v16; // r0@32
  bool v17; // zf@32
  signed int v18; // r1@35
  unsigned int *v19; // r7@44
  int v20; // r6@51
  unsigned int *v21; // r7@52
  unsigned int v22; // r1@55
  unsigned int v23; // r2@56
  UIControl *v24; // r0@57
  bool v25; // zf@57
  unsigned int *v26; // r4@67

  v1 = this;
  result = UIComponent::isLocked(this);
  v3 = *((_DWORD *)v1 + 6);
  v4 = result;
  if ( v3 )
  {
    result = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
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
            v8 = (UIControl *)*((_DWORD *)v1 + 5);
            v9 = v8 == 0;
          }
          if ( !v9 )
            v10 = 0;
            if ( !*((_BYTE *)v1 + 8) )
              v10 = 1;
            UIControl::setVisible(v8, v10 & (v4 ^ 1), 0, 1);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v11 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          break;
        }
      }
      else
        __clrex();
    }
  }
  v12 = *((_DWORD *)v1 + 8);
  if ( v12 )
    result = *(_DWORD *)(v12 + 4);
    v13 = (unsigned int *)(v12 + 4);
      v14 = __ldrex(v13);
      if ( v14 == result )
        v15 = __strex(result + 1, v13);
        result = v14;
        if ( !v15 )
          v16 = (UIControl *)*v13;
          v17 = *v13 == 0;
          if ( *v13 )
            v16 = (UIControl *)*((_DWORD *)v1 + 7);
            v17 = v16 == 0;
          if ( !v17 )
            v18 = *((_BYTE *)v1 + 8);
            if ( *((_BYTE *)v1 + 8) )
              v18 = 1;
            UIControl::setVisible(v16, v18 & (v4 ^ 1), 0, 1);
              result = __ldrex(v13);
            while ( __strex(result - 1, v13) );
            result = (*v13)--;
            v19 = (unsigned int *)(v12 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
                result = __ldrex(v19);
              while ( __strex(result - 1, v19) );
              result = (*v19)--;
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v20 = *((_DWORD *)v1 + 10);
  if ( v20 )
    result = *(_DWORD *)(v20 + 4);
    v21 = (unsigned int *)(v20 + 4);
      v22 = __ldrex(v21);
      if ( v22 == result )
        v23 = __strex(result + 1, v21);
        result = v22;
        if ( !v23 )
          v24 = (UIControl *)*v21;
          v25 = *v21 == 0;
          if ( *v21 )
            v24 = (UIControl *)*((_DWORD *)v1 + 9);
            v25 = v24 == 0;
          if ( !v25 )
            UIControl::setVisible(v24, v4, 0, 1);
              result = __ldrex(v21);
            while ( __strex(result - 1, v21) );
            result = (*v21)--;
            v26 = (unsigned int *)(v20 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
                result = __ldrex(v26);
              while ( __strex(result - 1, v26) );
              result = (*v26)--;
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
          return result;
  return result;
}


void __fastcall SliderBoxComponent::~SliderBoxComponent(SliderBoxComponent *this)
{
  SliderBoxComponent *v1; // r5@1
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
  *(_DWORD *)this = &off_26E0958;
  v2 = *((_DWORD *)this + 10);
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
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = *((_DWORD *)v1 + 6);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = *((_DWORD *)v1 + 4);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  UIComponent::~UIComponent(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall SliderBoxComponent::reset(int result)
{
  *(_BYTE *)(result + 8) = 0;
  return result;
}


int __fastcall SliderBoxComponent::setLockedControl(SliderBoxComponent *this, int a2)
{
  SliderBoxComponent *v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = this;
  *((_DWORD *)this + 9) = *(_DWORD *)a2;
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
  v6 = *((_DWORD *)v2 + 10);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v2 + 10) = v3;
  return j_j_j__ZN18SliderBoxComponent23updateControlVisibilityEv(v2);
}
