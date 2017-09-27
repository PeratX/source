

int __fastcall GridItemComponent::GridItemComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26D6AFC;
  *(_QWORD *)(result + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


void __fastcall GridItemComponent::~GridItemComponent(GridItemComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_3(v1);
}


char *__fastcall GridItemComponent::getGridPosition(GridItemComponent *this)
{
  return (char *)this + 12;
}


unsigned int __fastcall GridItemComponent::reset(GridItemComponent *this)
{
  UIComponent *v1; // r4@1
  int v2; // r0@1
  UIControl *v3; // r5@1
  char v4; // r0@1
  int v5; // r6@4
  unsigned int result; // r0@4
  GridComponent *v7; // r5@5
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int *v10; // r7@14
  UIControl *v11; // r0@23
  UIControl *v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@7

  v1 = this;
  v2 = UIComponent::getOwner(this);
  UIControl::getParent((UIControl *)&v12, v2);
  v3 = v12;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GridComponent>(void)::id[0];
  result = UIControl::_hasComponent(v3, type_id<UIComponent,GridComponent>(void)::id[0]);
  if ( result == 1 )
    result = UIControl::_getComponentIndex(v3, v5);
    v7 = *(GridComponent **)(*((_DWORD *)v3 + 27) + 4 * result);
  else
    v7 = 0;
  v8 = v13;
  if ( v13 )
    v9 = (unsigned int *)(v13 + 4);
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
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  if ( v7 )
    result = GridComponent::isDynamic(v7);
      v11 = (UIControl *)UIComponent::getOwner(v1);
      result = UIControl::setDelayCollectionUpdate(v11, 1);
  return result;
}


int __fastcall GridItemComponent::clone(GridItemComponent *this, UIControl *a2, UIControl *a3)
{
  GridItemComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  UIComponent *v6; // r6@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x14u);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26D6AFC;
  *((_DWORD *)v6 + 3) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
  result = *((_DWORD *)v5 + 2);
  *((_DWORD *)v6 + 2) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall GridItemComponent::setGridPosition(int result, int a2)
{
  *(_DWORD *)(result + 12) = *(_DWORD *)a2;
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 4);
  return result;
}


int __fastcall GridItemComponent::setCollectionIndex(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


void __fastcall GridItemComponent::~GridItemComponent(GridItemComponent *this)
{
  GridItemComponent::~GridItemComponent(this);
}
