

void __fastcall ScrollbarBoxComponent::~ScrollbarBoxComponent(ScrollbarBoxComponent *this)
{
  UIComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26E08D0;
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


int __fastcall ScrollbarBoxComponent::clone(ScrollbarBoxComponent *this, UIControl *a2, UIControl *a3)
{
  ScrollbarBoxComponent *v3; // r4@1
  UIControl *v4; // r6@1
  UIComponent *v5; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (UIComponent *)operator new(0x10u);
  UIComponent::UIComponent(v5, v4);
  *(_DWORD *)v5 = &off_26E08D0;
  result = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *(_DWORD *)v3 = v5;
  return result;
}


signed int __fastcall ScrollbarBoxComponent::receive(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 a7)
{
  int v7; // r5@0
  int v8; // r1@1
  int v9; // r4@2
  unsigned int *v10; // r7@3
  unsigned int v11; // r2@3
  unsigned int v12; // r0@6
  unsigned int v13; // r3@7
  signed int v14; // r6@8
  bool v15; // zf@8
  char v16; // r0@11
  int v17; // r6@14
  int v18; // r0@15
  unsigned int v19; // r0@25
  unsigned int *v20; // r5@29
  unsigned int v21; // r0@31
  signed int result; // r0@37

  v8 = a1;
  if ( a5 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    if ( v9 )
    {
      v10 = (unsigned int *)(v9 + 4);
      v11 = *(_DWORD *)(v9 + 4);
      while ( v11 )
      {
        __dmb();
        v12 = __ldrex(v10);
        if ( v12 == v11 )
        {
          v13 = __strex(v11 + 1, v10);
          v11 = v12;
          if ( !v13 )
          {
            __dmb();
            v14 = 1;
            v15 = *v10 == 0;
            if ( *v10 )
            {
              v7 = *(_DWORD *)(v8 + 8);
              v15 = v7 == 0;
            }
            if ( !v15 )
              v16 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
              __dmb();
              if ( !(v16 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
              {
                type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
              }
              v17 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
                v18 = *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v17));
                if ( v18 )
                {
                  if ( a7 >> 8 )
                  {
                    if ( a7 >> 8 == 1 )
                    {
                      ScrollViewComponent::setScrollBoxPressed(v18, 1);
                      v14 = 0;
                    }
                    else
                  }
                  else
                    v14 = 0;
                    ScrollViewComponent::setScrollBoxPressed(v18, 0);
                }
                else
                  v14 = 1;
              else
                v14 = 1;
            if ( &pthread_create )
              do
                v19 = __ldrex(v10);
              while ( __strex(v19 - 1, v10) );
            else
              v19 = (*v10)--;
            if ( v19 == 1 )
              v20 = (unsigned int *)(v9 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
              if ( &pthread_create )
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
            if ( !v14 )
              goto LABEL_38;
            break;
          }
        }
        else
          __clrex();
      }
    }
    result = 1;
  }
  else
LABEL_38:
    result = 0;
  return result;
}


void __fastcall ScrollbarBoxComponent::~ScrollbarBoxComponent(ScrollbarBoxComponent *this)
{
  ScrollbarBoxComponent::~ScrollbarBoxComponent(this);
}


int __fastcall ScrollbarBoxComponent::~ScrollbarBoxComponent(ScrollbarBoxComponent *this)
{
  UIComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26E08D0;
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


int __fastcall ScrollbarBoxComponent::setScrollView(int a1, int a2)
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


int __fastcall ScrollbarBoxComponent::ScrollbarBoxComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26E08D0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall ScrollbarBoxComponent::getScrollView(int result, int a2)
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
