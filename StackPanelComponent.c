

int __fastcall StackPanelComponent::StackPanelComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26E099C;
  *(_QWORD *)(result + 8) = 1LL;
  return result;
}


int __fastcall StackPanelComponent::setOrientation(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall StackPanelComponent::onNotifyChildRemoved(StackPanelComponent *this)
{
  StackPanelComponent *v1; // r5@1
  int v2; // r4@1
  char v3; // r0@1
  int v4; // r6@4
  __int64 v5; // r0@4
  UIControl *v6; // r0@6
  char *v7; // r11@6
  UIControl **v8; // r5@6
  UIControl **v9; // r8@6
  UIControl *v10; // r7@9
  char v11; // r0@9
  int v12; // r4@12
  UIComponent *v13; // r0@13
  UIControl *v14; // r7@17
  char v15; // r0@17
  int v16; // r4@20
  UIComponent *v17; // r0@21
  UIControl *v18; // r7@25
  char v19; // r0@25
  int v20; // r4@28
  void *v21; // r1@33
  int v22; // r4@37
  char v23; // r0@37
  int v24; // r5@40
  int v26; // [sp+4h] [bp-2Ch]@6
  int v27; // [sp+8h] [bp-28h]@6

  v1 = this;
  v2 = UIComponent::getOwner(this);
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v4 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  LODWORD(v5) = UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,LayoutComponent>(void)::id[0]);
  if ( (_DWORD)v5 != 1 )
    return v5;
  LODWORD(v5) = *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
  if ( !(_DWORD)v5 )
  v26 = v5;
  v27 = *((_DWORD *)v1 + 2);
  v6 = (UIControl *)UIComponent::getOwner(v1);
  v7 = UIControl::getChildren(v6);
  v9 = (UIControl **)(*(_QWORD *)v7 >> 32);
  v8 = (UIControl **)*(_QWORD *)v7;
  if ( v8 != v9 )
    if ( v27 == 1 )
    {
      do
      {
        v14 = *v8;
        v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        __dmb();
        if ( !(v15 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        {
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        }
        v16 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v14, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v17 = *(UIComponent **)(*((_DWORD *)v14 + 27) + 4 * UIControl::_getComponentIndex(v14, v16));
          if ( v17 )
            LayoutComponent::reinitialize(v17, (char *)&unk_262D1E5, 1);
        v8 += 2;
      }
      while ( v9 != v8 );
    }
    else if ( v27 )
        v18 = *v8;
        v19 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v19 & 1)
        v20 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v18, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          UIControl::_getComponentIndex(v18, v20);
    else
        v10 = *v8;
        v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        if ( !(v11 & 1)
        v12 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v10, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v13 = *(UIComponent **)(*((_DWORD *)v10 + 27) + 4 * UIControl::_getComponentIndex(v10, v12));
          if ( v13 )
            LayoutComponent::reinitialize(v13, (char *)&unk_262D1E4, 1);
  if ( v27 )
    if ( v27 != 1 )
      goto LABEL_36;
    v21 = &unk_262D1E7;
  else
    v21 = &unk_262D1E6;
  LayoutComponent::layout(v26, (int)v21, 1, 1);
LABEL_36:
  v5 = *(_QWORD *)v7;
  if ( (_DWORD)v5 != HIDWORD(v5) )
    v22 = *(_DWORD *)v5;
    v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    __dmb();
    if ( !(v23 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    v24 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v22, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
      LODWORD(v5) = *(_DWORD *)(*(_DWORD *)(v22 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v22, v24));
      LODWORD(v5) = 0;
    if ( v27 )
      if ( v27 != 1 )
        return v5;
      HIDWORD(v5) = &unk_262D1E9;
      HIDWORD(v5) = &unk_262D1E8;
    LODWORD(v5) = j_j_j__ZN15LayoutComponent6layoutESt16initializer_listI18LayoutVariableTypeEb_0(
                    v5,
                    SHIDWORD(v5),
                    1,
                    1);
  return v5;
}


int __fastcall StackPanelComponent::setFirstRenderedChildIndex(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


void __fastcall StackPanelComponent::~StackPanelComponent(StackPanelComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall StackPanelComponent::~StackPanelComponent(StackPanelComponent *this)
{
  StackPanelComponent::~StackPanelComponent(this);
}


int __fastcall StackPanelComponent::clone(StackPanelComponent *this, UIControl *a2, UIControl *a3)
{
  StackPanelComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  UIComponent *v6; // r6@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x10u);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26E099C;
  *((_DWORD *)v6 + 3) = 0;
  result = *((_DWORD *)v5 + 2);
  *((_DWORD *)v6 + 2) = result;
  *(_DWORD *)v3 = v6;
  return result;
}
