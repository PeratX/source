

signed int __fastcall ScrollTrackComponent::receive(int a1, int a2, int a3, int a4, int a5, __int16 a6)
{
  int v6; // r9@0
  int v7; // r10@1
  int v8; // r2@1
  int v9; // r4@1
  int v10; // r8@1
  int v11; // r7@1
  unsigned int *v12; // r6@2
  unsigned int v13; // r3@2
  unsigned int v14; // r0@5
  int v15; // r5@8
  bool v16; // zf@8
  char v17; // r0@11
  int v18; // r5@14
  int v19; // r0@15
  int v20; // r1@16
  int v21; // r9@16
  unsigned int v22; // r0@25
  unsigned int *v23; // r6@29
  unsigned int v24; // r0@31

  v7 = a3;
  v8 = a1;
  v9 = *(_DWORD *)(a1 + 12);
  v10 = a4;
  v11 = a2;
  if ( v9 )
  {
    v12 = (unsigned int *)(v9 + 4);
    v13 = *(_DWORD *)(v9 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v13 )
          return 1;
        __dmb();
        v14 = __ldrex(v12);
        if ( v14 == v13 )
          break;
        __clrex();
        v13 = v14;
      }
      v16 = __strex(v13 + 1, v12) == 0;
      v13 = v14;
    }
    while ( !v16 );
    __dmb();
    v15 = 1;
    v16 = *v12 == 0;
    if ( *v12 )
      v6 = *(_DWORD *)(v8 + 8);
      v16 = v6 == 0;
    if ( !v16 )
      v17 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
      __dmb();
      if ( !(v17 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
        type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
      v18 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
        v19 = UIControl::_getComponentIndex((UIControl *)v6, v18);
        v15 = 1;
        if ( a5 == 1 )
        {
          v20 = *(_DWORD *)(v6 + 108);
          v21 = *(_DWORD *)(v20 + 4 * v19);
          if ( v21 )
          {
            if ( a6 == ScrollViewComponent::getScrollbarBoxTrackButton(*(ScrollViewComponent **)(v20 + 4 * v19)) )
              v15 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v21 + 12))(v21, v11, v7, v10);
            else
              v15 = 1;
          }
        }
      else
    if ( &pthread_create )
      do
        v22 = __ldrex(v12);
      while ( __strex(v22 - 1, v12) );
    else
      v22 = (*v12)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
  else
  return v15;
}


int __fastcall ScrollTrackComponent::ScrollTrackComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26E0914;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall ScrollTrackComponent::setScrollView(int a1, int a2)
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


void __fastcall ScrollTrackComponent::~ScrollTrackComponent(ScrollTrackComponent *this)
{
  ScrollTrackComponent::~ScrollTrackComponent(this);
}


int __fastcall ScrollTrackComponent::clone(ScrollTrackComponent *this, UIControl *a2, UIControl *a3)
{
  ScrollTrackComponent *v3; // r4@1
  UIControl *v4; // r6@1
  UIComponent *v5; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (UIComponent *)operator new(0x10u);
  UIComponent::UIComponent(v5, v4);
  *(_DWORD *)v5 = &off_26E0914;
  result = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *(_DWORD *)v3 = v5;
  return result;
}


void __fastcall ScrollTrackComponent::~ScrollTrackComponent(ScrollTrackComponent *this)
{
  UIComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26E0914;
  v2 = *((_DWORD *)this + 3);
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
  UIComponent::~UIComponent(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ScrollTrackComponent::~ScrollTrackComponent(ScrollTrackComponent *this)
{
  UIComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26E0914;
  v2 = *((_DWORD *)this + 3);
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
  return j_j_j__ZN11UIComponentD2Ev_0(v1);
}


int __fastcall ScrollTrackComponent::getScrollView(int result, int a2)
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
