

void __fastcall UIControlFactory::_populateToggleComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateToggleComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{panel}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_createCustom(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createCustom(this, a2, a3);
}


ScrollbarBoxComponent *__fastcall UIControlFactory::_populateScrollbarBoxComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  ScrollbarBoxComponent *v4; // r5@1
  ScrollbarBoxComponent *result; // r0@1
  ScrollbarBoxComponent *v6; // [sp+4h] [bp-14h]@1

  v3 = a3;
  v4 = (ScrollbarBoxComponent *)operator new(0x10u);
  ScrollbarBoxComponent::ScrollbarBoxComponent(v4, v3);
  v6 = v4;
  UIControl::setComponent<ScrollbarBoxComponent>(v3, &v6);
  result = v6;
  if ( v6 )
    result = (ScrollbarBoxComponent *)(*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}


void __fastcall UIControlFactory::_createButton(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createButton(this, a2, a3);
}


void __fastcall UIControlFactory::_populateTextComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateTextComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createGrid(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{grid}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateGridComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
}


ScrollbarBoxComponent *__fastcall UIControlFactory::_createScrollbarBox(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  ScrollbarBoxComponent *v8; // r5@5
  ScrollbarBoxComponent *result; // r0@5
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+4h] [bp-24h]@1
  ScrollbarBoxComponent *v13; // [sp+10h] [bp-18h]@5

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v12, "{scrollbar_box}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v12);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  v8 = (ScrollbarBoxComponent *)operator new(0x10u);
  ScrollbarBoxComponent::ScrollbarBoxComponent(v8, v3);
  v13 = v8;
  UIControl::setComponent<ScrollbarBoxComponent>(v3, &v13);
  result = v13;
  if ( v13 )
    result = (ScrollbarBoxComponent *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


void __fastcall UIControlFactory::_createFactory(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{factory}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_populateAnchoredOffsetComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateAnchoredOffsetComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createToggle(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{toggle}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 1);
  UIControlFactory::_populateToggleComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_createFromResolvedDef(int a1, UIControlFactory *a2, const UIResolvedDef *a3, int a4, int a5, int a6, int a7)
{
  const UIResolvedDef *v7; // r9@1
  int v8; // r6@1
  int v9; // r4@1
  unsigned int *v10; // r0@5
  unsigned int v11; // r1@7
  int v12; // r4@10
  unsigned int *v13; // r1@11
  unsigned int v14; // r0@13
  unsigned int *v15; // r5@17
  unsigned int v16; // r0@19
  int *v17; // r0@38
  Json::Value *v18; // r4@38
  void *v19; // r0@38
  void *v20; // r0@39
  void *v21; // r0@40
  void *v22; // r0@41
  int v23; // r4@42
  unsigned int *v24; // r1@43
  unsigned int v25; // r0@45
  Json::Value *v26; // r4@52
  void *v27; // r0@52
  Json::Value *v28; // r5@55
  __int64 v29; // kr00_8@55
  int *v30; // r0@55
  const UIResolvedDef *v31; // r5@56
  int v32; // r9@56
  unsigned int *v33; // r1@57
  unsigned int v34; // r0@59
  unsigned int *v35; // r4@63
  unsigned int v36; // r0@65
  int v37; // r0@72
  unsigned int *v38; // r2@73
  signed int v39; // r1@75
  unsigned int *v40; // r5@83
  unsigned int v41; // r0@85
  unsigned int *v42; // r2@91
  signed int v43; // r1@93
  unsigned int *v44; // r2@95
  signed int v45; // r1@97
  unsigned int *v46; // r2@99
  signed int v47; // r1@101
  unsigned int *v48; // r2@103
  signed int v49; // r1@105
  UIControlFactory *v50; // [sp+14h] [bp-BCh]@1
  char v51; // [sp+18h] [bp-B8h]@56
  int v52; // [sp+1Ch] [bp-B4h]@56
  char v53; // [sp+20h] [bp-B0h]@55
  char v54; // [sp+68h] [bp-68h]@53
  char v55; // [sp+70h] [bp-60h]@53
  int v56; // [sp+7Ch] [bp-54h]@52
  int v57; // [sp+84h] [bp-4Ch]@38
  int v58; // [sp+8Ch] [bp-44h]@38
  int v59; // [sp+90h] [bp-40h]@38
  int v60; // [sp+94h] [bp-3Ch]@38
  UIControl *v61; // [sp+98h] [bp-38h]@4
  int v62; // [sp+9Ch] [bp-34h]@4
  UIControl *v63; // [sp+A0h] [bp-30h]@1
  int v64; // [sp+A4h] [bp-2Ch]@4
  char v65; // [sp+A8h] [bp-28h]@1

  v7 = a3;
  v50 = a2;
  v8 = a1;
  v9 = a4;
  std::__shared_ptr<UIControl,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UIControl>,ControlScreenAction &>(
    (int)&v63,
    (int)&v65,
    a5);
  if ( a7 == 1 )
    UIControl::setIsTemplate(v63, 1);
  if ( v9 )
  {
    v61 = v63;
    v62 = v64;
    if ( v64 )
    {
      v10 = (unsigned int *)(v64 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    }
    UIControl::addChild(v9, (int)&v61, a6);
    v12 = v62;
    if ( v62 )
      v13 = (unsigned int *)(v62 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
  switch ( UIResolvedDef::getDefType(v7) )
    case 0:
      UIControlFactory::_createButton(v50, v63, v7);
      goto LABEL_52;
    case 14:
      UIControlFactory::_createSlider(v50, v63, v7);
    case 16:
      UIControlFactory::_createStackPanel(v50, v63, v7);
    case 1:
      UIControlFactory::_createCustom(v50, v63, v7);
    case 2:
      UIControlFactory::_createDropdown(v50, v63, v7);
    case 3:
      UIControlFactory::_createEditBox(v50, v63, v7);
    case 4:
      UIControlFactory::_createFactory(v50, v63, v7);
    case 7:
      UIControlFactory::_createInputPanel(v50, v63, v7);
    case 9:
      UIControlFactory::_createPanel(v50, v63, v7);
    case 11:
      UIControlFactory::_createScrollbarBox(v50, v63, v7);
    case 12:
      UIControlFactory::_createScrollTrack(v50, v63, v7);
    case 15:
      UIControlFactory::_createSliderBox(v50, v63, v7);
    case 17:
      UIControlFactory::_createToggle(v50, v63, v7);
    case 5:
      UIControlFactory::_createGrid(v50, v63, v7);
    case 6:
      UIControlFactory::_createImage(v50, v63, v7);
    case 8:
      UIControlFactory::_createLabel(v50, v63, v7);
    case 10:
      UIControlFactory::_createScreen(v50, v63, v7);
    case 13:
      UIControlFactory::_createScrollView(v50, v63, v7);
LABEL_52:
      sub_DA7364((void **)&v56, "controls");
      v26 = UIResolvedDef::getValue((int)v7, (int **)&v56, 0);
      v27 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v56 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j_j__ZdlPv_9(v27);
      Json::Value::begin((Json::Value *)&v55, (int)v26);
      Json::Value::end((Json::Value *)&v54, (int)v26);
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v55, (const Json::ValueIteratorBase *)&v54) != 1 )
        v28 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v55);
        v29 = *((_QWORD *)v50 + 1);
        v30 = (int *)UIResolvedDef::getNamespace(v7);
        UIResolvedDef::create((int)&v53, (Json::Value *)v29, (unsigned __int64 *)v50 + 5, SHIDWORD(v29), v30, v28);
        if ( !UIResolvedDef::isIgnored((UIResolvedDef *)&v53) )
          UIControlFactory::_createFromResolvedDef((int)&v51, (int)v50, (int)&v53, (int)v63, a5, 1, a7);
          v31 = v7;
          v32 = v52;
          if ( v52 )
          {
            v33 = (unsigned int *)(v52 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            }
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              v35 = (unsigned int *)(v32 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
          }
          v7 = v31;
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v53);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v55);
      UIControlFactory::_postCreate(v50, v63, v7);
      *(_DWORD *)v8 = v63;
      v37 = v64;
      v64 = 0;
      *(_DWORD *)(v8 + 4) = v37;
      v63 = 0;
      break;
    default:
      v17 = (int *)UIResolvedDef::getName(v7);
      sub_DA73B4(&v60, v17);
      sub_DA7364((void **)&v58, "type");
      v18 = UIResolvedDef::getValue((int)v7, (int **)&v58, 0);
      sub_DA7364((void **)&v57, (const char *)&unk_257BC67);
      Json::Value::asString(&v59, (int)v18, &v57);
      v19 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v57 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v58 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      sub_DA7374((const void **)&v59, (const char *)&unk_257BC67);
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      v21 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v59 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v60 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j_j__ZdlPv_9(v22);
      v23 = v64;
      if ( v64 )
        v24 = (unsigned int *)(v64 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          v40 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          if ( &pthread_create )
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          else
            v41 = (*v40)--;
          if ( v41 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
}


void __fastcall UIControlFactory::_createImage(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createImage(this, a2, a3);
}


void __fastcall UIControlFactory::_populateStackPanelComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r5@1
  const UIResolvedDef *v4; // r4@1
  StackPanelComponent *v5; // r6@1
  char v6; // r0@3
  int v7; // r6@6
  int v8; // r5@7
  int v9; // r0@9
  void *v10; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-20h]@9
  StackPanelComponent *v14; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = (StackPanelComponent *)operator new(0x10u);
  StackPanelComponent::StackPanelComponent(v5, v3);
  v14 = v5;
  UIControl::setComponent<StackPanelComponent>(v3, &v14);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v14 = 0;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
  {
    type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
  }
  v7 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,StackPanelComponent>(void)::id[0]) == 1 )
    v8 = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v7));
  else
    v8 = 0;
  sub_DA7364((void **)&v13, "orientation");
  v9 = UIResolvedDef::getAsOrientation((int)v4, (int **)&v13, 1);
  StackPanelComponent::setOrientation(v8, v9);
  v10 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<ui::LayoutOffset>(ui::LayoutOffset *a1, int a2, int a3, UIControl *a4, int **a5)
{
  UIControlFactory::_resolveAnimatedProperty<ui::LayoutOffset>(a1, a2, a3, a4, a5);
}


void __fastcall UIControlFactory::_populateDataBindingComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateDataBindingComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<ui::LayoutOffset>(ui::LayoutOffset *a1, int a2, int a3, UIControl *a4, int **a5)
{
  int v5; // r5@1
  int v6; // r11@1
  ui::LayoutOffset *v7; // r10@1
  UIControl *v8; // r9@1
  Json::Value *v9; // r7@1
  void *v10; // r0@2
  int v11; // r0@5
  const char *v12; // r0@6
  void *v13; // r0@6
  signed int v14; // r4@7
  _BYTE *v15; // r0@10
  Json::Value *v16; // r0@13
  int v17; // r4@14
  int *v18; // r0@14
  void *v19; // r0@14
  void *v20; // r0@15
  int v21; // r0@16
  const char *v22; // r0@17
  void *v23; // r0@17
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  __int64 v36; // [sp+8h] [bp-F8h]@0
  int v37; // [sp+14h] [bp-ECh]@17
  int v38; // [sp+1Ch] [bp-E4h]@14
  int v39; // [sp+24h] [bp-DCh]@14
  char v40; // [sp+28h] [bp-D8h]@14
  int v41; // [sp+74h] [bp-8Ch]@6
  char v42; // [sp+78h] [bp-88h]@5
  int v43; // [sp+C8h] [bp-38h]@2
  _BYTE *v44; // [sp+CCh] [bp-34h]@2
  char v45; // [sp+D0h] [bp-30h]@6
  char v46; // [sp+D4h] [bp-2Ch]@17
  char v47; // [sp+D8h] [bp-28h]@20

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = UIResolvedDef::getValue(a3, a5, 0);
  if ( Json::Value::isString(v9) != 1 )
    goto LABEL_12;
  sub_DA7364((void **)&v43, (const char *)&unk_257BC67);
  Json::Value::asString((int *)&v44, (int)v9, &v43);
  v10 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  if ( !*((_DWORD *)v44 - 3) || *v44 != 64 )
    goto LABEL_9;
  UIResolvedDef::create(
    (int)&v42,
    (unsigned __int64 *)*(_QWORD *)(v6 + 8),
    (unsigned __int64 *)(v6 + 40),
    *(_QWORD *)(v6 + 8) >> 32,
    (int *)(v6 + 20),
    (int *)&v44);
  v11 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v42, v8);
  if ( !v11 )
    UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
LABEL_9:
    v14 = 0;
    goto LABEL_10;
  v12 = (const char *)(*(int (**)(void))(*(_DWORD *)v11 + 12))();
  sub_DA7364((void **)&v41, v12);
  UIResolvedDefValConversion<ui::LayoutOffset>::as(v7, (int)&v45, (int)&v42, (int **)&v41);
  v13 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v41 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
  v14 = 1;
LABEL_10:
  v15 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  if ( !v14 )
LABEL_12:
    if ( Json::Value::isObject(v9) == 1 )
      v16 = (Json::Value *)Json::Value::operator[]((int)v9, "anim_type");
      if ( !Json::Value::isNull(v16) )
      {
        v17 = *(_DWORD *)(v6 + 12);
        sub_DA7364((void **)&v39, (const char *)&unk_257BC67);
        v18 = (int *)sub_DA7364((void **)&v38, (const char *)&unk_257BC67);
        LODWORD(v36) = v9;
        UIResolvedDef::UIResolvedDef((int)&v40, v6 + 40, v17, &v39, v18, (int)v9, v36);
        v19 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
        {
          v28 = (unsigned int *)(v38 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9(v19);
        }
        v20 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v39 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9(v20);
        v21 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v40, v8);
        if ( v21 )
          v22 = (const char *)(*(int (**)(void))(*(_DWORD *)v21 + 12))();
          sub_DA7364((void **)&v37, v22);
          UIResolvedDefValConversion<ui::LayoutOffset>::as(v7, (int)&v46, (int)&v40, (int **)&v37);
          v23 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v37 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
            }
            else
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j_j__ZdlPv_9(v23);
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
          return;
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
      }
    UIResolvedDefValConversion<ui::LayoutOffset>::as(v7, (int)&v47, v5, a5);
}


void __fastcall UIControlFactory::_populateTextComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r8@1
  UIControl *v4; // r5@1
  const UIResolvedDef *v5; // r4@1
  RenderableComponent *v6; // r6@1
  char v7; // r0@3
  int v8; // r6@6
  UIComponent *v9; // r6@7
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  void *v14; // r0@13
  char v15; // r0@14
  void *v16; // r0@14
  char v17; // r0@15
  void *v18; // r0@15
  int v19; // r0@16
  void *v20; // r0@16
  int v21; // r0@17
  void *v22; // r0@17
  int v23; // r0@18
  void *v24; // r0@18
  int v25; // r0@19
  void *v26; // r0@19
  int v27; // r0@20
  void *v28; // r0@20
  Json::Value *v29; // r10@21
  Font **v30; // r9@21
  void *v31; // r0@21
  int v32; // r5@23
  void *v33; // r0@23
  void *v34; // r0@24
  int v35; // r5@26
  void *v36; // r0@26
  void *v37; // r0@27
  int v38; // r5@29
  void *v39; // r0@29
  void *v40; // r0@30
  int v41; // r5@32
  void *v42; // r0@32
  void *v43; // r0@33
  Font *v44; // r5@35
  int v45; // r0@42
  void *v46; // r0@42
  unsigned int *v47; // r2@44
  signed int v48; // r1@46
  unsigned int *v49; // r2@48
  signed int v50; // r1@50
  unsigned int *v51; // r2@52
  signed int v52; // r1@54
  unsigned int *v53; // r2@56
  signed int v54; // r1@58
  unsigned int *v55; // r2@60
  signed int v56; // r1@62
  unsigned int *v57; // r2@64
  signed int v58; // r1@66
  unsigned int *v59; // r2@68
  signed int v60; // r1@70
  unsigned int *v61; // r2@72
  signed int v62; // r1@74
  unsigned int *v63; // r2@76
  signed int v64; // r1@78
  unsigned int *v65; // r2@80
  signed int v66; // r1@82
  unsigned int *v67; // r2@84
  signed int v68; // r1@86
  unsigned int *v69; // r2@88
  signed int v70; // r1@90
  unsigned int *v71; // r2@92
  signed int v72; // r1@94
  unsigned int *v73; // r2@96
  signed int v74; // r1@98
  unsigned int *v75; // r2@152
  signed int v76; // r1@154
  unsigned int *v77; // r2@156
  signed int v78; // r1@158
  unsigned int *v79; // r2@164
  signed int v80; // r1@166
  unsigned int *v81; // r2@168
  signed int v82; // r1@170
  unsigned int *v83; // r2@180
  signed int v84; // r1@182
  unsigned int *v85; // r2@184
  signed int v86; // r1@186
  unsigned int *v87; // r2@196
  signed int v88; // r1@198
  unsigned int *v89; // r2@200
  signed int v90; // r1@202
  int v91; // [sp+8h] [bp-E0h]@42
  int v92; // [sp+10h] [bp-D8h]@32
  int v93; // [sp+14h] [bp-D4h]@32
  int v94; // [sp+1Ch] [bp-CCh]@29
  int v95; // [sp+20h] [bp-C8h]@29
  int v96; // [sp+28h] [bp-C0h]@26
  int v97; // [sp+2Ch] [bp-BCh]@26
  int v98; // [sp+34h] [bp-B4h]@23
  int v99; // [sp+38h] [bp-B0h]@23
  int v100; // [sp+40h] [bp-A8h]@21
  int v101; // [sp+48h] [bp-A0h]@20
  int v102; // [sp+50h] [bp-98h]@19
  int v103; // [sp+58h] [bp-90h]@18
  int v104; // [sp+60h] [bp-88h]@17
  int v105; // [sp+68h] [bp-80h]@16
  int v106; // [sp+70h] [bp-78h]@15
  int v107; // [sp+78h] [bp-70h]@14
  int v108; // [sp+80h] [bp-68h]@13
  char v109; // [sp+84h] [bp-64h]@13
  int v110; // [sp+98h] [bp-50h]@12
  char v111; // [sp+9Ch] [bp-4Ch]@12
  int v112; // [sp+B0h] [bp-38h]@9
  int v113; // [sp+B8h] [bp-30h]@9
  int v114; // [sp+BCh] [bp-2Ch]@9
  RenderableComponent *v115; // [sp+C0h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (RenderableComponent *)operator new(0x94u);
  TextComponent::TextComponent(v6, v4);
  v115 = v6;
  UIControl::setComponent<TextComponent>(v4, &v115);
  if ( v115 )
    (*(void (**)(void))(*(_DWORD *)v115 + 4))();
  v115 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
  {
    type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
  }
  v8 = type_id<UIComponent,TextComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
    v9 = *(UIComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v113, "text");
  sub_DA7364((void **)&v112, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v114, (int)v5, (int **)&v113, &v112);
  TextComponent::setText(v9, (const void **)&v114);
  v10 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v114 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    }
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v112 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v113 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  sub_DA7364((void **)&v110, "color");
  UIResolvedDef::getAsColor((int)&v111, (int)v5, (int **)&v110, (int)&Color::WHITE);
  v13 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v110 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  TextComponent::setColor(v9, (const Color *)&v111);
  sub_DA7364((void **)&v108, "locked_color");
  UIResolvedDef::getAsColor((int)&v109, (int)v5, (int **)&v108, (int)&v111);
  TextComponent::setLockedColor(v9, (const Color *)&v109);
  v14 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v108 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  sub_DA7364((void **)&v107, "shadow");
  v15 = UIResolvedDef::getAsBool((int)v5, (int **)&v107, 0);
  TextComponent::setShadow(v9, v15);
  v16 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v107 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  sub_DA7364((void **)&v106, "hide_hyphen");
  v17 = UIResolvedDef::getAsBool((int)v5, (int **)&v106, 0);
  TextComponent::setHideHyphen(v9, v17);
  v18 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v106 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  sub_DA7364((void **)&v105, "locked_alpha");
  v19 = UIResolvedDef::getAsFloat((int)v5, (int **)&v105, 1065353216);
  TextComponent::setLockedAlpha(v9, *(float *)&v19);
  v20 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v105 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v104, "font_size");
  v21 = UIResolvedDef::getAsFontSize((int)v5, (int **)&v104, 1);
  TextComponent::setFontSize((int)v9, v21);
  v22 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v104 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v103, "font_scale_factor");
  v23 = UIResolvedDef::getAsFloat((int)v5, (int **)&v103, 1065353216);
  TextComponent::setFontScaleFactor(v9, *(float *)&v23);
  v24 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v103 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v102, "localize");
  v25 = UIResolvedDef::getAsBool((int)v5, (int **)&v102, 1);
  TextComponent::setLocalize(v9, v25);
  v26 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v102 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  sub_DA7364((void **)&v101, "line_padding");
  v27 = UIResolvedDef::getAsFloat((int)v5, (int **)&v101, 0);
  TextComponent::setLinePadding(v9, *(float *)&v27);
  v28 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v101 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  sub_DA7364((void **)&v100, "font_type");
  v29 = UIResolvedDef::getValue((int)v5, (int **)&v100, 0);
  v30 = (Font **)((char *)v3 + 52);
  v31 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v100 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  if ( Json::Value::isString(v29) == 1 )
    sub_DA7364((void **)&v98, (const char *)&unk_257BC67);
    Json::Value::asString(&v99, (int)v29, &v98);
    v32 = sub_DA7374((const void **)&v99, "default");
    v33 = (void *)(v99 - 12);
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v99 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
      }
      else
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v98 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j_j__ZdlPv_9(v34);
    if ( v32 )
      sub_DA7364((void **)&v96, (const char *)&unk_257BC67);
      Json::Value::asString(&v97, (int)v29, &v96);
      v35 = sub_DA7374((const void **)&v97, "rune");
      v36 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v79 = (unsigned int *)(v97 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
        }
        else
          v80 = (*v79)--;
        if ( v80 <= 0 )
          j_j_j_j_j__ZdlPv_9(v36);
      v37 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v96 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j_j__ZdlPv_9(v37);
      if ( v35 )
        sub_DA7364((void **)&v94, (const char *)&unk_257BC67);
        Json::Value::asString(&v95, (int)v29, &v94);
        v38 = sub_DA7374((const void **)&v95, "unicode");
        v39 = (void *)(v95 - 12);
        if ( (int *)(v95 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v95 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
          }
          else
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j_j__ZdlPv_9(v39);
        v40 = (void *)(v94 - 12);
        if ( (int *)(v94 - 12) != &dword_28898C0 )
          v85 = (unsigned int *)(v94 - 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 <= 0 )
            j_j_j_j_j__ZdlPv_9(v40);
        if ( v38 )
          sub_DA7364((void **)&v92, (const char *)&unk_257BC67);
          Json::Value::asString(&v93, (int)v29, &v92);
          v41 = sub_DA7374((const void **)&v93, "smooth");
          v42 = (void *)(v93 - 12);
          if ( (int *)(v93 - 12) != &dword_28898C0 )
            v87 = (unsigned int *)(v93 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
            }
            else
              v88 = (*v87)--;
            if ( v88 <= 0 )
              j_j_j_j_j__ZdlPv_9(v42);
          v43 = (void *)(v92 - 12);
          if ( (int *)(v92 - 12) != &dword_28898C0 )
            v89 = (unsigned int *)(v92 - 4);
                v90 = __ldrex(v89);
              while ( __strex(v90 - 1, v89) );
              v90 = (*v89)--;
            if ( v90 <= 0 )
              j_j_j_j_j__ZdlPv_9(v43);
          if ( v41 )
            v44 = 0;
            v44 = (Font *)*((_DWORD *)v3 + 15);
            v30 = (Font **)((char *)v3 + 64);
          v30 = (Font **)((char *)v3 + 60);
          v44 = 0;
        v30 = (Font **)((char *)v3 + 56);
        v44 = 0;
      v44 = 0;
    v44 = 0;
  TextComponent::setPrimaryFont(v9, *v30);
  TextComponent::setBackupFont(v9, v44);
  sub_DA7364((void **)&v91, "text_alignment");
  v45 = UIResolvedDef::getAsTextAlignment((int)v5, (int **)&v91, 0);
  TextComponent::setAlignment((int)v9, v45);
  v46 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v91 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v46);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<Color>(int a1, int a2, int a3, UIControl *a4, int **a5)
{
  int v5; // r5@1
  int v6; // r11@1
  int v7; // r10@1
  UIControl *v8; // r9@1
  Json::Value *v9; // r7@1
  void *v10; // r0@2
  int v11; // r0@5
  const char *v12; // r0@6
  void *v13; // r0@6
  signed int v14; // r4@7
  _BYTE *v15; // r0@10
  Json::Value *v16; // r0@13
  int v17; // r4@14
  int *v18; // r0@14
  void *v19; // r0@14
  void *v20; // r0@15
  int v21; // r0@16
  const char *v22; // r0@17
  void *v23; // r0@17
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  __int64 v36; // [sp+8h] [bp-F0h]@0
  int v37; // [sp+14h] [bp-E4h]@17
  int v38; // [sp+1Ch] [bp-DCh]@14
  int v39; // [sp+24h] [bp-D4h]@14
  char v40; // [sp+28h] [bp-D0h]@14
  int v41; // [sp+74h] [bp-84h]@6
  char v42; // [sp+78h] [bp-80h]@5
  int v43; // [sp+C8h] [bp-30h]@2
  _BYTE *v44; // [sp+CCh] [bp-2Ch]@2

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = UIResolvedDef::getValue(a3, a5, 0);
  if ( Json::Value::isString(v9) != 1 )
    goto LABEL_12;
  sub_DA7364((void **)&v43, (const char *)&unk_257BC67);
  Json::Value::asString((int *)&v44, (int)v9, &v43);
  v10 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  if ( !*((_DWORD *)v44 - 3) || *v44 != 64 )
    goto LABEL_9;
  UIResolvedDef::create(
    (int)&v42,
    (unsigned __int64 *)*(_QWORD *)(v6 + 8),
    (unsigned __int64 *)(v6 + 40),
    *(_QWORD *)(v6 + 8) >> 32,
    (int *)(v6 + 20),
    (int *)&v44);
  v11 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v42, v8);
  if ( !v11 )
    UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
LABEL_9:
    v14 = 0;
    goto LABEL_10;
  v12 = (const char *)(*(int (**)(void))(*(_DWORD *)v11 + 12))();
  sub_DA7364((void **)&v41, v12);
  UIResolvedDef::getAsColor(v7, (int)&v42, (int **)&v41, (int)&Color::WHITE);
  v13 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v41 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
  v14 = 1;
LABEL_10:
  v15 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  if ( !v14 )
LABEL_12:
    if ( Json::Value::isObject(v9) == 1 )
      v16 = (Json::Value *)Json::Value::operator[]((int)v9, "anim_type");
      if ( !Json::Value::isNull(v16) )
      {
        v17 = *(_DWORD *)(v6 + 12);
        sub_DA7364((void **)&v39, (const char *)&unk_257BC67);
        v18 = (int *)sub_DA7364((void **)&v38, (const char *)&unk_257BC67);
        LODWORD(v36) = v9;
        UIResolvedDef::UIResolvedDef((int)&v40, v6 + 40, v17, &v39, v18, (int)v9, v36);
        v19 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
        {
          v28 = (unsigned int *)(v38 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9(v19);
        }
        v20 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v39 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9(v20);
        v21 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v40, v8);
        if ( v21 )
          v22 = (const char *)(*(int (**)(void))(*(_DWORD *)v21 + 12))();
          sub_DA7364((void **)&v37, v22);
          UIResolvedDef::getAsColor(v7, (int)&v40, (int **)&v37, (int)&Color::WHITE);
          v23 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v37 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
            }
            else
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j_j__ZdlPv_9(v23);
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
          return;
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
      }
    UIResolvedDef::getAsColor(v7, v5, a5, (int)&Color::WHITE);
}


void __fastcall UIControlFactory::_createSliderBox(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  UIControlFactory *v8; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v11, "{slider_box}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSliderBoxComponent(v8, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_populateAnimations(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateAnimations(this, a2, a3);
}


int __fastcall UIControlFactory::addAnimRefToControl(int a1, UIControl *a2, int *a3)
{
  UIControlFactory *v3; // r5@1
  UIControl *v4; // r4@1
  int v5; // r4@2
  char v7; // [sp+8h] [bp-58h]@2

  v3 = (UIControlFactory *)a1;
  v4 = a2;
  if ( *(_DWORD *)(*a3 - 12) )
  {
    UIResolvedDef::create(
      (int)&v7,
      (unsigned __int64 *)*(_QWORD *)(a1 + 8),
      (unsigned __int64 *)(a1 + 40),
      *(_QWORD *)(a1 + 8) >> 32,
      (int *)(a1 + 20),
      a3);
    v5 = UIControlFactory::_addAnimToComponent(v3, (const UIResolvedDef *)&v7, v4);
    UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v7);
  }
  else
    v5 = 0;
  return v5;
}


void __fastcall UIControlFactory::_populateCollectionComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r5@1
  const UIResolvedDef *v4; // r4@1
  UIComponent *v5; // r6@1
  char v6; // r0@3
  int v7; // r6@6
  int v8; // r5@7
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+8h] [bp-28h]@9
  int v19; // [sp+10h] [bp-20h]@9
  int v20; // [sp+14h] [bp-1Ch]@9
  UIComponent *v21; // [sp+18h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = (UIComponent *)operator new(0x1Cu);
  CollectionComponent::CollectionComponent(v5, v3);
  v21 = v5;
  UIControl::setComponent<CollectionComponent>(v3, &v21);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v21 = 0;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
  {
    type_id<UIComponent,CollectionComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
  }
  v7 = type_id<UIComponent,CollectionComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,CollectionComponent>(void)::id[0]) == 1 )
    v8 = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v7));
  else
    v8 = 0;
  sub_DA7364((void **)&v19, "collection_name");
  sub_DA7364((void **)&v18, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v20, (int)v4, (int **)&v19, &v18);
  CollectionComponent::setCollectionName(v8, &v20);
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
}


void __fastcall UIControlFactory::_createDropdown(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createDropdown(this, a2, a3);
}


UIResolvedDef *__fastcall UIControlFactory::createControlTree(UIControl **a1, int a2, int *a3, int a4, int a5, int a6, Json::Value *a7, int a8)
{
  int v8; // r9@1
  int *v9; // r10@1
  int v10; // r11@1
  UIControl **v11; // r7@1
  const char **v12; // r4@2
  const char **v13; // r8@2
  int v14; // r5@3
  const Json::Value *v15; // r0@3
  const char **v16; // r5@4
  char *v17; // r1@5
  int (**v18)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@5
  unsigned int *v19; // r2@6
  signed int v20; // r7@8
  char *v21; // r6@12
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@12
  int *v23; // r0@13
  int *v24; // r0@18
  UIControl *v25; // r6@18
  UIControl *i; // r5@19
  int v27; // r0@20
  UIControl **v28; // r10@20
  __int64 v29; // r0@21
  int v30; // r7@21
  unsigned int *v31; // r1@22
  unsigned int v32; // r0@24
  unsigned int *v33; // r4@28
  unsigned int v34; // r0@30
  int v35; // r4@35
  unsigned int *v36; // r1@36
  unsigned int v37; // r0@38
  unsigned int *v38; // r7@42
  unsigned int v39; // r0@44
  int v40; // r4@50
  unsigned int *v41; // r1@51
  unsigned int v42; // r0@53
  unsigned int *v43; // r6@57
  unsigned int v44; // r0@59
  UIControl **v46; // [sp+Ch] [bp-94h]@2
  char v47; // [sp+10h] [bp-90h]@21
  int v48; // [sp+14h] [bp-8Ch]@21
  int v49; // [sp+18h] [bp-88h]@20
  int v50; // [sp+1Ch] [bp-84h]@21
  char v51; // [sp+20h] [bp-80h]@18
  const char **v52; // [sp+6Ch] [bp-34h]@2
  const char **v53; // [sp+70h] [bp-30h]@2
  char v54; // [sp+78h] [bp-28h]@5

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( a7 )
  {
    v46 = a1;
    Json::Value::getMemberNames((Json::Value *)&v52, (int)a7);
    v13 = v53;
    v12 = v52;
    if ( v52 != v53 )
    {
      do
      {
        v14 = Json::Value::operator[]((Json::Value *)(v10 + 24), v12);
        v15 = (const Json::Value *)Json::Value::operator[](a7, v12);
        Json::Value::operator=(v14, v15);
        ++v12;
      }
      while ( v13 != v12 );
      v12 = v53;
      v16 = v52;
      if ( v52 != v53 )
        v17 = &v54;
        v18 = &pthread_create;
        do
        {
          v23 = (int *)(*v16 - 12);
          if ( v23 != &dword_28898C0 )
          {
            v19 = (unsigned int *)(*v16 - 4);
            if ( v18 )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 <= 0 )
              v21 = v17;
              v22 = v18;
              j_j_j_j_j__ZdlPv_9(v23);
              v18 = v22;
              v17 = v21;
          }
          ++v16;
        }
        while ( v16 != v12 );
        v12 = v52;
    }
    v11 = v46;
    if ( v12 )
      operator delete(v12);
  }
  UIResolvedDef::create(
    (int)&v51,
    (unsigned __int64 *)*(_QWORD *)(v10 + 8),
    (unsigned __int64 *)(v10 + 40),
    *(_QWORD *)(v10 + 8) >> 32,
    (int *)(v10 + 20),
    v9);
  v24 = (int *)UIResolvedDef::getNamespace((UIResolvedDef *)&v51);
  EntityInteraction::setInteractText((int *)(v10 + 20), v24);
  UIControlFactory::_createFromResolvedDef((int)v11, v10, (int)&v51, a5, v8, a6, a8);
  v25 = *v11;
  if ( *v11 )
    i = *v11;
    if ( a5 )
      UIControl::getParent((UIControl *)&v49, a5);
      v27 = v49;
      v28 = v11;
      for ( i = (UIControl *)a5; v49; v27 = v49 )
        i = (UIControl *)v27;
        UIControl::getParent((UIControl *)&v47, v27);
        v29 = *(_QWORD *)&v47;
        *(_DWORD *)&v47 = 0;
        v48 = 0;
        v49 = v29;
        v30 = v50;
        v50 = HIDWORD(v29);
        if ( v30 )
          v31 = (unsigned int *)(v30 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          else
            v32 = (*v31)--;
          if ( v32 == 1 )
            v33 = (unsigned int *)(v30 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
            if ( &pthread_create )
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
        v35 = v48;
        if ( v48 )
          v36 = (unsigned int *)(v48 + 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 == 1 )
            v38 = (unsigned int *)(v35 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
      v40 = v50;
      if ( v50 )
        v41 = (unsigned int *)(v50 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        else
          v42 = (*v41)--;
        if ( v42 == 1 )
          v43 = (unsigned int *)(v40 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
      v25 = *v28;
    UIControl::_resolveControlNames(v25, i);
    UIControl::_resolvePostCreate(v25);
  return UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v51);
}


void __fastcall UIControlFactory::_createPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createPanel(this, a2, a3);
}


GridComponent *__fastcall UIControlFactory::_postCreateGrid(UIControlFactory *this, UIControl *a2)
{
  UIControl *v2; // r4@1
  char v3; // r0@1
  int v4; // r5@4
  GridComponent *result; // r0@4

  v2 = a2;
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v4 = type_id<UIComponent,GridComponent>(void)::id[0];
  result = (GridComponent *)UIControl::_hasComponent(v2, type_id<UIComponent,GridComponent>(void)::id[0]);
  if ( result == (GridComponent *)1 )
    result = *(GridComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v4));
    if ( result )
      result = (GridComponent *)j_j_j__ZN13GridComponent16refreshGridItemsEv(result);
  return result;
}


int __fastcall UIControlFactory::createControlTree(int a1, int a2, UIControl *a3, int a4, int a5)
{
  UIControl *v5; // r5@1
  int v6; // r9@1
  int v7; // r0@2
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  int v10; // r6@9
  unsigned int *v11; // r1@10
  unsigned int v12; // r0@12
  unsigned int *v13; // r4@16
  unsigned int v14; // r0@18
  int i; // r0@23
  __int64 v16; // r0@24
  int v17; // r4@24
  unsigned int *v18; // r1@25
  unsigned int v19; // r0@27
  unsigned int *v20; // r7@31
  unsigned int v21; // r0@33
  int v22; // r7@38
  unsigned int *v23; // r1@39
  unsigned int v24; // r0@41
  unsigned int *v25; // r4@45
  unsigned int v26; // r0@47
  int v27; // r6@53
  unsigned int *v28; // r1@54
  unsigned int v29; // r0@56
  unsigned int *v30; // r4@60
  unsigned int v31; // r0@62
  char v33; // [sp+4h] [bp-3Ch]@24
  int v34; // [sp+8h] [bp-38h]@24
  int v35; // [sp+Ch] [bp-34h]@23
  int v36; // [sp+10h] [bp-30h]@24
  UIControl *v37; // [sp+14h] [bp-2Ch]@2
  int v38; // [sp+18h] [bp-28h]@2

  v5 = (UIControl *)a4;
  v6 = a1;
  UIControl::clone((UIControl *)a1, a3, a4);
  if ( v5 )
  {
    v37 = *(UIControl **)v6;
    v7 = *(_DWORD *)(v6 + 4);
    v38 = v7;
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
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
    UIControl::addChild((int)v5, (int)&v37, a5);
    v10 = v38;
    if ( v38 )
      v11 = (unsigned int *)(v38 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    UIControl::getParent((UIControl *)&v35, (int)v5);
    for ( i = v35; v35; i = v35 )
      v5 = (UIControl *)i;
      UIControl::getParent((UIControl *)&v33, i);
      v16 = *(_QWORD *)&v33;
      *(_DWORD *)&v33 = 0;
      v34 = 0;
      v35 = v16;
      v17 = v36;
      v36 = HIDWORD(v16);
      if ( v17 )
        v18 = (unsigned int *)(v17 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      v22 = v34;
      if ( v34 )
        v23 = (unsigned int *)(v34 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          v25 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    v27 = v36;
    if ( v36 )
      v28 = (unsigned int *)(v36 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        v30 = (unsigned int *)(v27 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  }
  else
    v5 = *(UIControl **)v6;
  UIControl::_resolveControlNames(*(UIControl **)v6, v5);
  return UIControl::_resolvePostCreate(*(UIControl **)v6);
}


void __fastcall UIControlFactory::_populateTextEditComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateTextEditComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateCustomRenderComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateCustomRenderComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateDropdownComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateDropdownComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateToggleGroupManagerComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateToggleGroupManagerComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSoundComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3, int a4)
{
  UIControlFactory::_populateSoundComponent(this, a2, a3, a4);
}


void __fastcall UIControlFactory::_populateCollectionComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateCollectionComponent(this, a2, a3);
}


UIControlFactory *__fastcall UIControlFactory::~UIControlFactory(UIControlFactory *this)
{
  UIControlFactory *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  void *v5; // r0@9
  int v6; // r1@11
  void *v7; // r0@11
  int v8; // r0@12
  unsigned int *v9; // r2@13
  unsigned int v10; // r1@15
  unsigned int *v12; // r2@21
  signed int v13; // r1@23

  v1 = this;
  *((_DWORD *)this + 11) -= 4;
  v2 = *((_DWORD *)this + 19);
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
  v5 = (void *)*((_DWORD *)v1 + 10);
  if ( v5 )
    operator delete(v5);
  Json::Value::~Value((UIControlFactory *)((char *)v1 + 24));
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  return v1;
}


void __fastcall UIControlFactory::_populateFactoryComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateFactoryComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSliderGroupManagerComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r6@1
  UIControl *v4; // r9@1
  UIControlFactory *v5; // r4@1
  int v6; // r7@1
  void *v7; // r0@1
  UIComponent *v8; // r7@3
  char v9; // r0@5
  int v10; // r7@8
  int v11; // r7@9
  int v12; // r0@11
  void *v13; // r0@11
  __int64 v14; // kr00_8@12
  int v15; // r1@12
  char *v16; // r1@13
  _DWORD *v17; // r6@13
  unsigned int *v18; // r2@14
  signed int v19; // r5@16
  char *v20; // r5@20
  int *v21; // r0@21
  int v22; // r5@25
  void *v23; // r6@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  int *v26; // r0@35
  void *v27; // r0@40
  __int64 v28; // r0@41
  char *v29; // r5@41 OVERLAPPED
  int v30; // r7@41
  unsigned int v31; // r4@41
  int v32; // r6@44
  _DWORD *v33; // r0@44
  __int64 v34; // r2@44
  void *v35; // r4@46
  void *v36; // r6@46
  unsigned int *v37; // r2@48
  signed int v38; // r1@50
  int *v39; // r0@56
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  unsigned int *v42; // r2@70
  signed int v43; // r1@72
  unsigned int *v44; // r2@74
  signed int v45; // r1@76
  _DWORD *v46; // [sp+4h] [bp-6Ch]@44
  __int64 v47; // [sp+Ch] [bp-64h]@44
  int v48; // [sp+18h] [bp-58h]@12
  void *v49; // [sp+1Ch] [bp-54h]@12
  void *v50; // [sp+20h] [bp-50h]@12
  int v51; // [sp+24h] [bp-4Ch]@12
  __int64 v52; // [sp+28h] [bp-48h]@12
  int v53; // [sp+30h] [bp-40h]@12
  int v54; // [sp+38h] [bp-38h]@11
  UIComponent *v55; // [sp+3Ch] [bp-34h]@3
  int v56; // [sp+44h] [bp-2Ch]@1
  char v57; // [sp+48h] [bp-28h]@13

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v56, "slider_manager_behavior");
  v6 = UIResolvedDef::hasValue((int)v3, (int **)&v56);
  v7 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    }
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 )
    v8 = (UIComponent *)operator new(0x18u);
    SliderManagerComponent::SliderManagerComponent(v8, v4);
    v55 = v8;
    UIControl::setComponent<SliderManagerComponent>(v4, &v55);
    if ( v55 )
      (*(void (**)(void))(*(_DWORD *)v55 + 4))();
    v55 = 0;
    v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id[0];
    __dmb();
    if ( !(v9 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id) )
      type_id<UIComponent,SliderManagerComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id);
    v10 = type_id<UIComponent,SliderManagerComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,SliderManagerComponent>(void)::id[0]) == 1 )
      v11 = *(_DWORD *)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v10));
      v11 = 0;
    sub_DA7364((void **)&v54, "slider_manager_behavior");
    v12 = UIResolvedDef::getAsSliderManagerBehavior((int)v3, (int **)&v54, 0);
    SliderManagerComponent::setBehavior(v11, v12);
    v13 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v54 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      }
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v52 = 0LL;
    v53 = 0;
    sub_DA7364((void **)&v48, "slider_manage_groups");
    UIResolvedDef::getAsStringVector((int)&v49, (int)v3, (int **)&v48, (unsigned __int64 *)&v52);
    v14 = v52;
    LODWORD(v52) = v49;
    v49 = 0;
    v15 = (int)v50;
    v50 = 0;
    HIDWORD(v52) = v15;
    v53 = v51;
    v51 = 0;
    if ( (_DWORD)v14 != HIDWORD(v14) )
      v16 = &v57;
      v17 = (_DWORD *)v14;
        v21 = (int *)(*v17 - 12);
        if ( v21 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            v20 = v16;
            j_j_j_j_j__ZdlPv_9(v21);
            v16 = v20;
        }
        ++v17;
      while ( v17 != (_DWORD *)HIDWORD(v14) );
    if ( (_DWORD)v14 )
      operator delete((void *)v14);
    v22 = (int)v50;
    v23 = v49;
    if ( v49 != v50 )
        v26 = (int *)(*(_DWORD *)v23 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)(*(_DWORD *)v23 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9(v26);
        v23 = (char *)v23 + 4;
      while ( v23 != (void *)v22 );
      v23 = v49;
    if ( v23 )
      operator delete(v23);
    v27 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v48 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    v28 = v52;
    v29 = 0;
    v30 = *((_DWORD *)v5 + 3);
    v31 = (HIDWORD(v52) - (signed int)v52) >> 2;
    if ( v31 )
      if ( v31 >= 0x40000000 )
        sub_DA7414();
      v29 = (char *)operator new(HIDWORD(v52) - v52);
      v28 = v52;
    v32 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            v28,
            SHIDWORD(v28),
            (int)v29);
    v33 = operator new(0x10u);
    HIDWORD(v34) = sub_C7E728;
    *(_QWORD *)v33 = *(_QWORD *)&v29;
    v33[2] = &v29[4 * v31];
    v33[3] = v30;
    LODWORD(v34) = sub_C7E8E4;
    v46 = v33;
    v47 = v34;
    UIControl::_registerPostCreateCallback((int)v4, (int)&v46);
    if ( (_DWORD)v47 )
      ((void (*)(void))v47)();
    v36 = (void *)HIDWORD(v52);
    v35 = (void *)v52;
    if ( (_DWORD)v52 != HIDWORD(v52) )
        v39 = (int *)(*(_DWORD *)v35 - 12);
        if ( v39 != &dword_28898C0 )
          v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9(v39);
        v35 = (char *)v35 + 4;
      while ( v35 != v36 );
      v35 = (void *)v52;
    if ( v35 )
      operator delete(v35);
}


void __fastcall UIControlFactory::_populateSoundComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3, int a4)
{
  UIControl *v4; // r5@1
  const UIResolvedDef *v5; // r6@1
  UIControlFactory *v6; // r9@1
  int v7; // r4@2
  void *v8; // r0@2
  SoundComponent *v9; // r7@4
  char v10; // r0@6
  int v11; // r4@9
  SoundComponent *v12; // r8@10
  void *v13; // r0@12
  void *v14; // r0@13
  int v15; // r1@14
  int v16; // r7@15
  void *v17; // r0@15
  int v18; // r4@16
  void *v19; // r0@16
  void *v20; // r0@17
  void *v21; // r0@19
  Json::Value *v22; // r4@20
  void *v23; // r0@20
  Json::ValueIteratorBase *v24; // r6@23
  void **v25; // r11@23
  const char *v26; // r8@23
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  unsigned int *v33; // r2@28
  signed int v34; // r1@30
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  unsigned int *v39; // r2@40
  signed int v40; // r1@42
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  unsigned int *v43; // r2@48
  signed int v44; // r1@50
  unsigned int *v45; // r2@52
  signed int v46; // r1@54
  unsigned int *v47; // r2@72
  signed int v48; // r1@74
  unsigned int *v49; // r2@76
  signed int v50; // r1@78
  unsigned int *v51; // r2@80
  signed int v52; // r1@82
  unsigned int *v53; // r2@84
  signed int v54; // r1@86
  unsigned int *v55; // r2@88
  signed int v56; // r1@90
  unsigned int *v57; // r2@92
  signed int v58; // r1@94
  unsigned int *v59; // r2@96
  signed int v60; // r1@98
  unsigned int *v61; // r2@100
  signed int v62; // r1@102
  unsigned int *v63; // r2@104
  signed int v64; // r1@106
  unsigned int *v65; // r2@108
  signed int v66; // r1@110
  unsigned int *v67; // r2@112
  signed int v68; // r1@114
  unsigned int *v69; // r2@116
  signed int v70; // r1@118
  unsigned int *v71; // r2@120
  signed int v72; // r1@122
  Json::Value *v73; // r4@176
  void *v74; // r0@177
  void *v75; // r0@178
  int v76; // r6@179
  void *v77; // r0@179
  int v78; // r4@180
  void *v79; // r0@180
  UIControlFactory *v80; // r4@181
  void *v82; // r0@181
  void *v83; // r0@182
  void *v84; // r0@183
  void *v85; // r0@184
  void *v86; // r0@185
  int v87; // r1@186
  char v88; // r2@186
  unsigned int v89; // r2@188
  __int16 v90; // r0@189
  void *v91; // r0@190
  __int64 v93; // r0@191
  void *v94; // r0@191
  void *v95; // r0@192
  void *v96; // r0@193
  int v97; // [sp+30h] [bp-138h]@181
  int v98; // [sp+34h] [bp-134h]@23
  int v99; // [sp+38h] [bp-130h]@22
  int v100; // [sp+3Ch] [bp-12Ch]@112
  int v101; // [sp+44h] [bp-124h]@100
  int v102; // [sp+4Ch] [bp-11Ch]@104
  int v103; // [sp+50h] [bp-118h]@184
  __int16 v104; // [sp+54h] [bp-114h]@189
  unsigned __int8 v105; // [sp+56h] [bp-112h]@188
  int v106; // [sp+5Ch] [bp-10Ch]@92
  int v107; // [sp+64h] [bp-104h]@96
  int v108; // [sp+68h] [bp-100h]@116
  int v109; // [sp+70h] [bp-F8h]@88
  int v110; // [sp+78h] [bp-F0h]@84
  int v111; // [sp+80h] [bp-E8h]@80
  int v112; // [sp+88h] [bp-E0h]@72
  int v113; // [sp+90h] [bp-D8h]@23
  int v114; // [sp+94h] [bp-D4h]@120
  char v115; // [sp+98h] [bp-D0h]@177
  char v116; // [sp+E4h] [bp-84h]@22
  char v117; // [sp+ECh] [bp-7Ch]@22
  int v118; // [sp+F8h] [bp-70h]@20
  int v119; // [sp+FCh] [bp-6Ch]@17
  int v120; // [sp+100h] [bp-68h]@17
  int v121; // [sp+108h] [bp-60h]@16
  int v122; // [sp+110h] [bp-58h]@15
  int v123; // [sp+118h] [bp-50h]@12
  int v124; // [sp+120h] [bp-48h]@12
  int v125; // [sp+124h] [bp-44h]@12
  SoundComponent *v126; // [sp+128h] [bp-40h]@4
  int v127; // [sp+130h] [bp-38h]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( a4 )
    goto LABEL_215;
  sub_DA7364((void **)&v127, "sounds");
  v7 = UIResolvedDef::hasValue((int)v5, (int **)&v127);
  v8 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v127 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  if ( v7 )
LABEL_215:
    v9 = (SoundComponent *)operator new(0x24u);
    SoundComponent::SoundComponent(v9, v4);
    v126 = v9;
    UIControl::setComponent<SoundComponent>(v4, &v126);
    if ( v126 )
      (*(void (**)(void))(*(_DWORD *)v126 + 4))();
    v126 = 0;
    v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id[0];
    __dmb();
    if ( !(v10 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id) )
      type_id<UIComponent,SoundComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id);
    v11 = type_id<UIComponent,SoundComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,SoundComponent>(void)::id[0]) == 1 )
      v12 = *(SoundComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v11));
      v12 = 0;
    SoundComponent::setSoundPlayer(v12, *((const UISoundPlayer **)v6 + 4));
    sub_DA7364((void **)&v124, "sound_name");
    sub_DA7364((void **)&v123, (const char *)&unk_257BC67);
    UIResolvedDef::getAsString(&v125, (int)v5, (int **)&v124, &v123);
    v13 = (void *)(v123 - 12);
    if ( (int *)(v123 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v123 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      }
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v124 - 12);
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v124 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = v125;
    if ( *(_DWORD *)(v125 - 12) )
      sub_DA7364((void **)&v122, "sound_volume");
      v16 = UIResolvedDef::getAsFloat((int)v5, (int **)&v122, 1065353216);
      v17 = (void *)(v122 - 12);
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v122 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        }
        else
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9(v17);
      sub_DA7364((void **)&v121, "sound_pitch");
      v18 = UIResolvedDef::getAsFloat((int)v5, (int **)&v121, 1065353216);
      v19 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v121 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      sub_DA73B4(&v120, &v125);
      v119 = 0;
      SoundComponent::addSoundEvent((int)v12, &v120, v16, v18, 0LL, 1, &v119);
      v20 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v120 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      v15 = v125;
    v21 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v15 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
    sub_DA7364((void **)&v118, "sounds");
    v22 = UIResolvedDef::getValue((int)v5, (int **)&v118, 0);
    v23 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v118 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    if ( Json::Value::isArray(v22) == 1 )
      v99 = (int)v12;
      Json::Value::begin((Json::Value *)&v117, (int)v22);
      Json::Value::end((Json::Value *)&v116, (int)v22);
      if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v117, (const Json::ValueIteratorBase *)&v116) )
        v98 = (int)v6 + 40;
        v24 = (Json::ValueIteratorBase *)&v117;
        v25 = (void **)&v113;
        v26 = "sound_name";
        __asm { VLDR            S16, =1000.0 }
          v73 = (Json::Value *)Json::ValueIteratorBase::deref(v24);
          if ( Json::Value::isObject(v73) == 1 )
          {
            UIResolvedDef::UIResolvedDef((int)&v115, v98, (int)v73);
            sub_DA7364(v25, v26);
            sub_DA7364((void **)&v112, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v114, (int)&v115, (int **)v25, &v112);
            v74 = (void *)(v112 - 12);
            if ( (int *)(v112 - 12) != &dword_28898C0 )
            {
              v47 = (unsigned int *)(v112 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v48 = __ldrex(v47);
                while ( __strex(v48 - 1, v47) );
              }
              else
                v48 = (*v47)--;
              if ( v48 <= 0 )
                j_j_j_j_j__ZdlPv_9(v74);
            }
            v75 = (void *)(v113 - 12);
            if ( (int *)(v113 - 12) != &dword_28898C0 )
              v49 = (unsigned int *)(v113 - 4);
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j_j__ZdlPv_9(v75);
            sub_DA7364((void **)&v111, "sound_volume");
            v76 = UIResolvedDef::getAsFloat((int)&v115, (int **)&v111, 1065353216);
            v77 = (void *)(v111 - 12);
            if ( (int *)(v111 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v111 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j_j__ZdlPv_9(v77);
            sub_DA7364((void **)&v110, "sound_pitch");
            v78 = UIResolvedDef::getAsFloat((int)&v115, (int **)&v110, 1065353216);
            v79 = (void *)(v110 - 12);
            if ( (int *)(v110 - 12) != &dword_28898C0 )
              v53 = (unsigned int *)(v110 - 4);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j_j__ZdlPv_9(v79);
            sub_DA7364((void **)&v109, "min_seconds_between_plays");
            v97 = v78;
            v80 = v6;
            _R9 = UIResolvedDef::getAsFloat((int)&v115, (int **)&v109, 0);
            v82 = (void *)(v109 - 12);
            if ( (int *)(v109 - 12) != &dword_28898C0 )
              v55 = (unsigned int *)(v109 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j_j__ZdlPv_9(v82);
            sub_DA7364((void **)&v107, "event_type");
            sub_DA7364((void **)&v106, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v108, (int)&v115, (int **)&v107, &v106);
            v83 = (void *)(v106 - 12);
            if ( (int *)(v106 - 12) != &dword_28898C0 )
              v57 = (unsigned int *)(v106 - 4);
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
                v58 = (*v57)--;
              if ( v58 <= 0 )
                j_j_j_j_j__ZdlPv_9(v83);
            v84 = (void *)(v107 - 12);
            if ( (int *)(v107 - 12) != &dword_28898C0 )
              v59 = (unsigned int *)(v107 - 4);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 <= 0 )
                j_j_j_j_j__ZdlPv_9(v84);
            sub_DA7374((const void **)&v108, "button_event");
            sub_DA7364((void **)&v102, "button_name");
            sub_DA7364((void **)&v101, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v103, (int)&v115, (int **)&v102, &v101);
            v85 = (void *)(v101 - 12);
            if ( (int *)(v101 - 12) != &dword_28898C0 )
              v61 = (unsigned int *)(v101 - 4);
                  v62 = __ldrex(v61);
                while ( __strex(v62 - 1, v61) );
                v62 = (*v61)--;
              if ( v62 <= 0 )
                j_j_j_j_j__ZdlPv_9(v85);
            v86 = (void *)(v102 - 12);
            if ( (int *)(v102 - 12) != &dword_28898C0 )
              v63 = (unsigned int *)(v102 - 4);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j_j__ZdlPv_9(v86);
            v87 = v103;
            v88 = 0;
            if ( !*(_DWORD *)(v103 - 12) )
              v88 = 1;
            v89 = v88 & 1 | 2 * ((unsigned int)v105 >> 1);
            v105 = v89 ^ 1;
            if ( !(v89 & 1) )
              NameRegistry::registerName(*((unsigned __int64 **)v80 + 3), (int **)&v103);
              v90 = NameRegistry::getNameId(*((unsigned __int64 **)v80 + 3), (int **)&v103);
              v87 = v103;
              v104 = v90;
            v91 = (void *)(v87 - 12);
            if ( (int *)(v87 - 12) != &dword_28898C0 )
              v65 = (unsigned int *)(v87 - 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j_j__ZdlPv_9(v91);
            sub_DA73B4(&v100, &v114);
            __asm
              VMOV            S0, R9
              VMUL.F32        S0, S0, S16
              VMOV            R0, S0
            LODWORD(v93) = _aeabi_f2lz(_R0);
            SoundComponent::addSoundEvent(v99, &v100, v76, v97, v93, 1, &v104);
            v24 = (Json::ValueIteratorBase *)&v117;
            v25 = (void **)&v113;
            v6 = v80;
            v94 = (void *)(v100 - 12);
            if ( (int *)(v100 - 12) != &dword_28898C0 )
              v67 = (unsigned int *)(v100 - 4);
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j_j__ZdlPv_9(v94);
            v26 = "sound_name";
            v95 = (void *)(v108 - 12);
            if ( (int *)(v108 - 12) != &dword_28898C0 )
              v69 = (unsigned int *)(v108 - 4);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j_j__ZdlPv_9(v95);
            v96 = (void *)(v114 - 12);
            if ( (int *)(v114 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v114 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j_j__ZdlPv_9(v96);
            UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v115);
          }
          Json::ValueIteratorBase::increment(v24);
        while ( !Json::ValueIteratorBase::isEqual(v24, (const Json::ValueIteratorBase *)&v116) );
}


int __fastcall UIControlFactory::_addAnimToComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r4@1
  UIControlFactory *v4; // r9@1
  UIControl *v5; // r6@1
  int v6; // r8@2
  void *v7; // r0@2
  int result; // r0@4
  char v9; // r0@5
  int v10; // r7@8
  int v11; // r0@9
  int v12; // r0@10
  unsigned int v13; // r1@11
  unsigned int *v14; // r0@11
  unsigned int v15; // r2@14
  unsigned int v16; // r3@15
  int v17; // r5@18
  unsigned int *v18; // r1@19
  unsigned int v19; // r0@21
  unsigned int *v20; // r7@25
  unsigned int v21; // r0@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  char v24; // r0@36
  int v25; // r7@39
  int v26; // [sp+4h] [bp-34h]@16
  int v27; // [sp+8h] [bp-30h]@10
  int v28; // [sp+Ch] [bp-2Ch]@16
  int v29; // [sp+14h] [bp-24h]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( UIResolvedDef::isValid(a2) != 1 )
    goto LABEL_51;
  sub_DA7364((void **)&v29, "anim_type");
  v6 = UIResolvedDef::getAsAnimationType((int)v3, (int **)&v29, 8);
  v7 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 != 8 )
    v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
    __dmb();
    if ( !(v9 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
      type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
    v10 = type_id<UIComponent,AnimationComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,AnimationComponent>(void)::id[0]) != 1
      || (v11 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v10))) == 0 )
      v12 = *((_DWORD *)v4 + 1);
      v27 = v12;
      if ( !v12 )
        std::__throw_bad_weak_ptr();
      v13 = *(_DWORD *)(v12 + 4);
      v14 = (unsigned int *)(v12 + 4);
      {
        while ( 1 )
        {
          if ( !v13 )
            std::__throw_bad_weak_ptr();
          __dmb();
          v15 = __ldrex(v14);
          if ( v15 == v13 )
            break;
          __clrex();
          v13 = v15;
        }
        v16 = __strex(v13 + 1, v14);
        v13 = v15;
      }
      while ( v16 );
      v26 = *(_DWORD *)v4;
      std::make_unique<AnimationComponent,UIControl &,std::shared_ptr<UIControlFactory>>(
        (UIComponent **)&v28,
        v5,
        (int)&v26);
      UIControl::setComponent<AnimationComponent>(v5, (UIComponent **)&v28);
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
      v17 = v27;
      v28 = 0;
      if ( v27 )
        v18 = (unsigned int *)(v27 + 4);
        if ( &pthread_create )
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      v24 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
      if ( !(v24 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
        type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
      v25 = type_id<UIComponent,AnimationComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v5, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1 )
        v11 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v25));
      else
        v11 = 0;
    result = AnimationComponent::addAnimation(v11, v6, v3, *((NameRegistry **)v4 + 3));
  else
LABEL_51:
    result = 0;
  return result;
}


void __fastcall UIControlFactory::_createScreen(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  __int16 v8; // r0@5
  void *v9; // r0@5
  UIControlFactory *v10; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  int v15; // [sp+8h] [bp-30h]@5
  int v16; // [sp+10h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v16, "{root}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v16);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControl::setZOrder(v3, -1);
  sub_DA7364((void **)&v15, "render_only_when_topmost");
  v8 = UIResolvedDef::getAsBool((int)v4, (int **)&v15, 1);
  UIControl::setRenderOnlyWhenTopmost(v3, v8);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateScreenComponent(v10, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 0);
}


void __fastcall UIControlFactory::_populateInputComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateInputComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createStackPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createStackPanel(this, a2, a3);
}


void __fastcall UIControlFactory::_populateFocusComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r5@1
  UIControl *v4; // r4@1
  const UIResolvedDef *v5; // r6@1
  UIComponent *v6; // r7@1
  char v7; // r0@3
  int v8; // r7@6
  FocusComponent *v9; // r9@7
  int v10; // r0@9
  void *v11; // r0@9
  char v12; // r0@10
  void *v13; // r0@10
  char v14; // r0@11
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  void *v20; // r0@16
  void *v21; // r0@17
  void *v22; // r0@18
  void *v23; // r0@19
  void *v24; // r0@20
  void *v25; // r0@21
  void *v26; // r0@22
  void *v27; // r0@23
  void *v28; // r0@24
  void *v29; // r0@25
  int v30; // r7@26
  void *v31; // r0@26
  Json::Value *v32; // r6@28
  void *v33; // r0@28
  int v34; // r6@30
  signed int *v35; // r10@30
  Json::ValueIteratorBase *v36; // r4@30
  const Json::ValueIteratorBase *v37; // r7@30
  void **v38; // r8@30
  Json::Value *v39; // r5@32
  void *v40; // r0@34
  void *v41; // r0@35
  int v42; // r1@36
  unsigned int v43; // r0@37
  int v44; // r6@39
  int *v45; // r5@39
  unsigned int v46; // r7@39
  int v47; // r8@40
  int *v48; // r0@42
  int v49; // r6@43
  int v50; // r5@43
  bool v51; // zf@44
  int v52; // r4@47
  bool v53; // zf@50
  _BYTE *v54; // r0@54
  void *v55; // r0@55
  void *v56; // r0@56
  void *v57; // r0@57
  int v58; // r5@58
  int v59; // r8@58
  int *v60; // r0@58
  int v61; // r7@59
  int v62; // r6@59
  bool v63; // zf@60
  int v64; // r4@63
  bool v65; // zf@66
  _BYTE *v66; // r0@70
  void *v67; // r0@71
  void *v68; // r0@72
  void *v69; // r0@73
  int v70; // r5@74
  int v71; // r8@74
  int *v72; // r0@74
  int v73; // r7@75
  int v74; // r6@75
  bool v75; // zf@76
  int v76; // r4@79
  unsigned int *v77; // r2@82
  signed int v78; // r1@84
  unsigned int *v79; // r2@86
  signed int v80; // r1@88
  bool v81; // zf@90
  _BYTE *v82; // r0@94
  void *v83; // r0@95
  void *v84; // r0@96
  void *v85; // r0@97
  int v86; // r5@98
  int v87; // r8@98
  int *v88; // r0@98
  int v89; // r7@99
  int v90; // r6@99
  bool v91; // zf@100
  int v92; // r4@103
  bool v93; // zf@106
  _BYTE *v94; // r0@110
  void *v95; // r0@111
  void *v96; // r0@112
  void *v97; // r0@113
  int v98; // r8@114
  int v99; // r0@116
  int v100; // r7@117
  int v101; // r6@117
  bool v102; // zf@118
  int v103; // r4@121
  bool v104; // zf@124
  _BYTE *v105; // r0@128
  int v106; // r8@130
  int v107; // r0@130
  int v108; // r7@131
  int v109; // r6@131
  bool v110; // zf@132
  int v111; // r4@135
  unsigned int *v112; // r2@147
  signed int v113; // r1@149
  unsigned int *v114; // r2@151
  signed int v115; // r1@153
  unsigned int *v116; // r2@155
  signed int v117; // r1@157
  unsigned int *v118; // r2@159
  signed int v119; // r1@161
  unsigned int *v120; // r2@163
  signed int v121; // r1@165
  unsigned int *v122; // r2@167
  signed int v123; // r1@169
  unsigned int *v124; // r2@171
  signed int v125; // r1@173
  unsigned int *v126; // r2@175
  signed int v127; // r1@177
  unsigned int *v128; // r2@179
  signed int v129; // r1@181
  unsigned int *v130; // r2@183
  signed int v131; // r1@185
  unsigned int *v132; // r2@187
  signed int v133; // r1@189
  unsigned int *v134; // r2@191
  signed int v135; // r1@193
  bool v136; // zf@207
  _BYTE *v137; // r0@211
  int v138; // r8@213
  int v139; // r0@213
  int v140; // r7@214
  int v141; // r6@214
  bool v142; // zf@215
  int v143; // r4@218
  bool v144; // zf@257
  _BYTE *v145; // r0@261
  int v146; // r8@263
  int v147; // r0@263
  int v148; // r7@264
  int v149; // r6@264
  bool v150; // zf@265
  int v151; // r4@268
  bool v152; // zf@271
  _BYTE *v153; // r0@275
  int v154; // r6@278
  unsigned int *v155; // r2@280
  signed int v156; // r1@282
  void *v157; // r5@288
  int v158; // r1@288
  void *v159; // r0@288
  void *v160; // r0@294
  unsigned int *v161; // r2@297
  signed int v162; // r1@299
  void *v163; // r0@305
  unsigned int *v164; // r2@307
  signed int v165; // r1@309
  unsigned int *v166; // r2@311
  signed int v167; // r1@313
  unsigned int *v168; // r2@315
  signed int v169; // r1@317
  unsigned int *v170; // r2@319
  signed int v171; // r1@321
  unsigned int *v172; // r2@323
  signed int v173; // r1@325
  unsigned int *v174; // r2@327
  signed int v175; // r1@329
  unsigned int *v176; // r2@331
  signed int v177; // r1@333
  unsigned int *v178; // r2@335
  signed int v179; // r1@337
  unsigned int *v180; // r2@339
  signed int v181; // r1@341
  unsigned int *v182; // r2@343
  signed int v183; // r1@345
  unsigned int *v184; // r2@347
  signed int v185; // r1@349
  unsigned int *v186; // r2@351
  signed int v187; // r1@353
  unsigned int *v188; // r2@355
  signed int v189; // r1@357
  unsigned int *v190; // r2@359
  signed int v191; // r1@361
  unsigned int *v192; // r2@363
  signed int v193; // r1@365
  unsigned int *v194; // r2@367
  signed int v195; // r1@369
  unsigned int *v196; // r2@371
  signed int v197; // r1@373
  unsigned int *v198; // r2@375
  signed int v199; // r1@377
  unsigned int *v200; // r2@379
  signed int v201; // r1@381
  unsigned int *v202; // r2@455
  signed int v203; // r1@457
  int v204; // [sp+38h] [bp-1A0h]@37
  int v205; // [sp+4Ch] [bp-18Ch]@111
  int v206; // [sp+54h] [bp-184h]@111
  int v207; // [sp+58h] [bp-180h]@111
  int v208; // [sp+60h] [bp-178h]@95
  int v209; // [sp+68h] [bp-170h]@95
  int v210; // [sp+6Ch] [bp-16Ch]@95
  int v211; // [sp+74h] [bp-164h]@71
  int v212; // [sp+7Ch] [bp-15Ch]@71
  int v213; // [sp+80h] [bp-158h]@71
  int v214; // [sp+88h] [bp-150h]@55
  int v215; // [sp+90h] [bp-148h]@55
  int v216; // [sp+94h] [bp-144h]@55
  void *ptr; // [sp+98h] [bp-140h]@40
  unsigned int v218; // [sp+9Ch] [bp-13Ch]@37
  int v219; // [sp+A0h] [bp-138h]@37
  int v220; // [sp+A4h] [bp-134h]@37
  signed int v221; // [sp+A8h] [bp-130h]@30
  int v222; // [sp+ACh] [bp-12Ch]@37
  int v223; // [sp+B0h] [bp-128h]@138
  int v224; // [sp+B8h] [bp-120h]@30
  int v225; // [sp+C0h] [bp-118h]@34
  int v226; // [sp+C4h] [bp-114h]@34
  char v227; // [sp+C8h] [bp-110h]@33
  char v228; // [sp+110h] [bp-C8h]@30
  char v229; // [sp+118h] [bp-C0h]@30
  int v230; // [sp+124h] [bp-B4h]@28
  int v231; // [sp+12Ch] [bp-ACh]@26
  int v232; // [sp+134h] [bp-A4h]@23
  int v233; // [sp+13Ch] [bp-9Ch]@23
  int v234; // [sp+140h] [bp-98h]@23
  int v235; // [sp+148h] [bp-90h]@20
  int v236; // [sp+150h] [bp-88h]@20
  int v237; // [sp+154h] [bp-84h]@20
  int v238; // [sp+15Ch] [bp-7Ch]@17
  int v239; // [sp+164h] [bp-74h]@17
  int v240; // [sp+168h] [bp-70h]@17
  int v241; // [sp+170h] [bp-68h]@15
  int v242; // [sp+178h] [bp-60h]@15
  int v243; // [sp+17Ch] [bp-5Ch]@15
  int v244; // [sp+184h] [bp-54h]@12
  int v245; // [sp+18Ch] [bp-4Ch]@12
  int v246; // [sp+190h] [bp-48h]@12
  int v247; // [sp+198h] [bp-40h]@11
  int v248; // [sp+1A0h] [bp-38h]@10
  int v249; // [sp+1A8h] [bp-30h]@9
  UIComponent *v250; // [sp+1ACh] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x58u);
  FocusComponent::FocusComponent(v6, v4);
  v250 = v6;
  UIControl::setComponent<FocusComponent>(v4, &v250);
  if ( v250 )
    (*(void (**)(void))(*(_DWORD *)v250 + 4))();
  v250 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v8 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v9 = *(FocusComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v249, "default_focus_precedence");
  v10 = UIResolvedDef::getAsInt((int)v5, (int **)&v249, 0);
  FocusComponent::setDefaultFocusPrecedence(v9, v10);
  v11 = (void *)(v249 - 12);
  if ( (int *)(v249 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v249 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
    }
    else
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  sub_DA7364((void **)&v248, "focus_enabled");
  v12 = UIResolvedDef::getAsBool((int)v5, (int **)&v248, 0);
  FocusComponent::setFocusEnabled(v9, v12);
  v13 = (void *)(v248 - 12);
  if ( (int *)(v248 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v248 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v247, "focus_wrap_enabled");
  v14 = UIResolvedDef::getAsBool((int)v5, (int **)&v247, 1);
  FocusComponent::setFocusWrapEnabled(v9, v14);
  v15 = (void *)(v247 - 12);
  if ( (int *)(v247 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v247 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  sub_DA7364((void **)&v245, "focus_identifier");
  sub_DA7364((void **)&v244, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v246, (int)v5, (int **)&v245, &v244);
  FocusComponent::setFocusIdentifier((int)v9, &v246);
  v16 = (void *)(v246 - 12);
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v246 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v244 - 12);
  if ( (int *)(v244 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v244 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v245 - 12);
  if ( (int *)(v245 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v245 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  sub_DA7364((void **)&v242, "focus_change_down");
  sub_DA7364((void **)&v241, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v243, (int)v5, (int **)&v242, &v241);
  v19 = (void *)(v241 - 12);
  if ( (int *)(v241 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v241 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v242 - 12);
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v242 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  FocusComponent::setFocusChangeOverride((int)v9, 2u, &v243);
  sub_DA7364((void **)&v239, "focus_change_up");
  sub_DA7364((void **)&v238, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v240, (int)v5, (int **)&v239, &v238);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v243, &v240);
  v21 = (void *)(v240 - 12);
  if ( (int *)(v240 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v240 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v238 - 12);
  if ( (int *)(v238 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v238 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v239 - 12);
  if ( (int *)(v239 - 12) != &dword_28898C0 )
    v184 = (unsigned int *)(v239 - 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  FocusComponent::setFocusChangeOverride((int)v9, 1u, &v243);
  sub_DA7364((void **)&v236, "focus_change_left");
  sub_DA7364((void **)&v235, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v237, (int)v5, (int **)&v236, &v235);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v243, &v237);
  v24 = (void *)(v237 - 12);
  if ( (int *)(v237 - 12) != &dword_28898C0 )
    v186 = (unsigned int *)(v237 - 4);
        v187 = __ldrex(v186);
      while ( __strex(v187 - 1, v186) );
      v187 = (*v186)--;
    if ( v187 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v235 - 12);
  if ( (int *)(v235 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v235 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v236 - 12);
  if ( (int *)(v236 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v236 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  FocusComponent::setFocusChangeOverride((int)v9, 3u, &v243);
  sub_DA7364((void **)&v233, "focus_change_right");
  sub_DA7364((void **)&v232, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v234, (int)v5, (int **)&v233, &v232);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v243, &v234);
  v27 = (void *)(v234 - 12);
  if ( (int *)(v234 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v234 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v232 - 12);
  if ( (int *)(v232 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v232 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v233 - 12);
  if ( (int *)(v233 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v233 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  FocusComponent::setFocusChangeOverride((int)v9, 4u, &v243);
  sub_DA7364((void **)&v231, "focus_mapping");
  v30 = UIResolvedDef::hasValue((int)v5, (int **)&v231);
  v31 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v231 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  if ( v30 == 1 )
    sub_DA7364((void **)&v230, "focus_mapping");
    v32 = UIResolvedDef::getValue((int)v5, (int **)&v230, 0);
    v33 = (void *)(v230 - 12);
    if ( (int *)(v230 - 12) != &dword_28898C0 )
      v202 = (unsigned int *)(v230 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
      }
      else
        v203 = (*v202)--;
      if ( v203 <= 0 )
        j_j_j_j_j__ZdlPv_9(v33);
    if ( Json::Value::isArray(v32) == 1 )
      Json::Value::begin((Json::Value *)&v229, (int)v32);
      Json::Value::end((Json::Value *)&v228, (int)v32);
      v34 = (int)v3 + 40;
      v35 = &v221;
      v36 = (Json::ValueIteratorBase *)&v229;
      v37 = (const Json::ValueIteratorBase *)&v228;
      v38 = (void **)&v224;
      while ( Json::ValueIteratorBase::isEqual(v36, v37) != 1 )
        v39 = (Json::Value *)Json::ValueIteratorBase::deref(v36);
        if ( Json::Value::isObject(v39) == 1 )
        {
          UIResolvedDef::UIResolvedDef((int)&v227, v34, (int)v39);
          if ( !UIResolvedDef::isIgnored((UIResolvedDef *)&v227) )
          {
            sub_DA7364((void **)&v225, "focus_identifier");
            sub_DA7364(v38, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v226, (int)&v227, (int **)&v225, (int *)v38);
            v40 = (void *)(v224 - 12);
            if ( (int *)(v224 - 12) != &dword_28898C0 )
            {
              v77 = (unsigned int *)(v224 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v78 = __ldrex(v77);
                while ( __strex(v78 - 1, v77) );
              }
              else
                v78 = (*v77)--;
              if ( v78 <= 0 )
                j_j_j_j_j__ZdlPv_9(v40);
            }
            v41 = (void *)(v225 - 12);
            if ( (int *)(v225 - 12) != &dword_28898C0 )
              v79 = (unsigned int *)(v225 - 4);
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j_j__ZdlPv_9(v41);
            v42 = v226;
            if ( *(_DWORD *)(v226 - 12) )
              v204 = v34;
              v219 = 0;
              v220 = 0;
              v221 = 1065353216;
              v222 = 0;
              v43 = sub_DA7744(COERCE_DOUBLE(__PAIR__(10, (unsigned int)v35)));
              v218 = v43;
              if ( v43 == 1 )
                v46 = 1;
                v223 = 0;
                v45 = &v223;
                if ( v43 >= 0x40000000 )
                  sub_DA7414();
                v44 = 4 * v43;
                v45 = (int *)operator new(4 * v43);
                _aeabi_memclr4(v45, v44);
                v46 = v218;
              v47 = 0;
              ptr = v45;
              if ( v46 != 1 )
                v47 = 1;
              v48 = (int *)v45[v47];
              if ( !v48 )
                goto LABEL_54;
              v49 = *v48;
              v50 = *(_DWORD *)(*v48 + 12);
              while ( 1 )
                v51 = v50 == 1;
                if ( v50 == 1 )
                  v51 = *(_BYTE *)(v49 + 4) == 1;
                if ( v51 )
                  break;
                v52 = *(_DWORD *)v49;
                if ( *(_DWORD *)v49 )
                {
                  v50 = *(_DWORD *)(v52 + 12);
                  v48 = (int *)v49;
                  v49 = *(_DWORD *)v49;
                  if ( *(_DWORD *)(v52 + 12) % v46 == v47 )
                    continue;
                }
              v53 = v48 == 0;
              if ( v48 )
                v50 = *v48;
                v53 = *v48 == 0;
              if ( v53 )
LABEL_54:
                v54 = operator new(0x10u);
                *(_DWORD *)v54 = 0;
                v54[4] = 1;
                *((_DWORD *)v54 + 2) = &unk_28898CC;
                v50 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        (int)&ptr,
                        v47,
                        1u,
                        (int)v54);
              sub_DA7364((void **)&v215, "focus_change_up");
              sub_DA7364((void **)&v214, (const char *)&unk_257BC67);
              UIResolvedDef::getAsString(&v216, (int)&v227, (int **)&v215, &v214);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)(v50 + 8),
                &v216);
              v55 = (void *)(v216 - 12);
              if ( (int *)(v216 - 12) != &dword_28898C0 )
                v112 = (unsigned int *)(v216 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v113 = __ldrex(v112);
                  while ( __strex(v113 - 1, v112) );
                else
                  v113 = (*v112)--;
                if ( v113 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v55);
              v56 = (void *)(v214 - 12);
              if ( (int *)(v214 - 12) != &dword_28898C0 )
                v114 = (unsigned int *)(v214 - 4);
                    v115 = __ldrex(v114);
                  while ( __strex(v115 - 1, v114) );
                  v115 = (*v114)--;
                if ( v115 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v56);
              v57 = (void *)(v215 - 12);
              if ( (int *)(v215 - 12) != &dword_28898C0 )
                v116 = (unsigned int *)(v215 - 4);
                    v117 = __ldrex(v116);
                  while ( __strex(v117 - 1, v116) );
                  v117 = (*v116)--;
                if ( v117 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v57);
              v58 = v218;
              v59 = 2 % v218;
              v60 = (int *)*((_DWORD *)ptr + 2 % v218);
              if ( !v60 )
                goto LABEL_70;
              v61 = *v60;
              v62 = *(_DWORD *)(*v60 + 12);
                v63 = v62 == 2;
                if ( v62 == 2 )
                  v63 = *(_BYTE *)(v61 + 4) == 2;
                if ( v63 )
                v64 = *(_DWORD *)v61;
                if ( *(_DWORD *)v61 )
                  v62 = *(_DWORD *)(v64 + 12);
                  v60 = (int *)v61;
                  v61 = *(_DWORD *)v61;
                  if ( *(_DWORD *)(v64 + 12) % v218 == v59 )
              v65 = v60 == 0;
              if ( v60 )
                v58 = *v60;
                v65 = *v60 == 0;
              if ( v65 )
LABEL_70:
                v66 = operator new(0x10u);
                *(_DWORD *)v66 = 0;
                v66[4] = 2;
                *((_DWORD *)v66 + 2) = &unk_28898CC;
                v58 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        v59,
                        2u,
                        (int)v66);
              sub_DA7364((void **)&v212, "focus_change_down");
              sub_DA7364((void **)&v211, (const char *)&unk_257BC67);
              UIResolvedDef::getAsString(&v213, (int)&v227, (int **)&v212, &v211);
                (int *)(v58 + 8),
                &v213);
              v67 = (void *)(v213 - 12);
              if ( (int *)(v213 - 12) != &dword_28898C0 )
                v118 = (unsigned int *)(v213 - 4);
                    v119 = __ldrex(v118);
                  while ( __strex(v119 - 1, v118) );
                  v119 = (*v118)--;
                if ( v119 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v67);
              v68 = (void *)(v211 - 12);
              if ( (int *)(v211 - 12) != &dword_28898C0 )
                v120 = (unsigned int *)(v211 - 4);
                    v121 = __ldrex(v120);
                  while ( __strex(v121 - 1, v120) );
                  v121 = (*v120)--;
                if ( v121 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v68);
              v69 = (void *)(v212 - 12);
              if ( (int *)(v212 - 12) != &dword_28898C0 )
                v122 = (unsigned int *)(v212 - 4);
                    v123 = __ldrex(v122);
                  while ( __strex(v123 - 1, v122) );
                  v123 = (*v122)--;
                if ( v123 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v69);
              v70 = v218;
              v71 = 3 % v218;
              v72 = (int *)*((_DWORD *)ptr + 3 % v218);
              if ( !v72 )
                goto LABEL_94;
              v73 = *v72;
              v74 = *(_DWORD *)(*v72 + 12);
                v75 = v74 == 3;
                if ( v74 == 3 )
                  v75 = *(_BYTE *)(v73 + 4) == 3;
                if ( v75 )
                v76 = *(_DWORD *)v73;
                if ( *(_DWORD *)v73 )
                  v74 = *(_DWORD *)(v76 + 12);
                  v72 = (int *)v73;
                  v73 = *(_DWORD *)v73;
                  if ( *(_DWORD *)(v76 + 12) % v218 == v71 )
              v81 = v72 == 0;
              if ( v72 )
                v70 = *v72;
                v81 = *v72 == 0;
              if ( v81 )
LABEL_94:
                v82 = operator new(0x10u);
                *(_DWORD *)v82 = 0;
                v82[4] = 3;
                *((_DWORD *)v82 + 2) = &unk_28898CC;
                v70 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        v71,
                        3u,
                        (int)v82);
              sub_DA7364((void **)&v209, "focus_change_left");
              sub_DA7364((void **)&v208, (const char *)&unk_257BC67);
              UIResolvedDef::getAsString(&v210, (int)&v227, (int **)&v209, &v208);
                (int *)(v70 + 8),
                &v210);
              v83 = (void *)(v210 - 12);
              if ( (int *)(v210 - 12) != &dword_28898C0 )
                v124 = (unsigned int *)(v210 - 4);
                    v125 = __ldrex(v124);
                  while ( __strex(v125 - 1, v124) );
                  v125 = (*v124)--;
                if ( v125 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v83);
              v84 = (void *)(v208 - 12);
              if ( (int *)(v208 - 12) != &dword_28898C0 )
                v126 = (unsigned int *)(v208 - 4);
                    v127 = __ldrex(v126);
                  while ( __strex(v127 - 1, v126) );
                  v127 = (*v126)--;
                if ( v127 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v84);
              v85 = (void *)(v209 - 12);
              if ( (int *)(v209 - 12) != &dword_28898C0 )
                v128 = (unsigned int *)(v209 - 4);
                    v129 = __ldrex(v128);
                  while ( __strex(v129 - 1, v128) );
                  v129 = (*v128)--;
                if ( v129 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v85);
              v86 = v218;
              v87 = 4 % v218;
              v88 = (int *)*((_DWORD *)ptr + 4 % v218);
              if ( !v88 )
                goto LABEL_110;
              v89 = *v88;
              v90 = *(_DWORD *)(*v88 + 12);
                v91 = v90 == 4;
                if ( v90 == 4 )
                  v91 = *(_BYTE *)(v89 + 4) == 4;
                if ( v91 )
                v92 = *(_DWORD *)v89;
                if ( *(_DWORD *)v89 )
                  v90 = *(_DWORD *)(v92 + 12);
                  v88 = (int *)v89;
                  v89 = *(_DWORD *)v89;
                  if ( *(_DWORD *)(v92 + 12) % v218 == v87 )
              v93 = v88 == 0;
              if ( v88 )
                v86 = *v88;
                v93 = *v88 == 0;
              if ( v93 )
LABEL_110:
                v94 = operator new(0x10u);
                *(_DWORD *)v94 = 0;
                v94[4] = 4;
                *((_DWORD *)v94 + 2) = &unk_28898CC;
                v86 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        v87,
                        4u,
                        (int)v94);
              sub_DA7364((void **)&v206, "focus_change_right");
              sub_DA7364((void **)&v205, (const char *)&unk_257BC67);
              UIResolvedDef::getAsString(&v207, (int)&v227, (int **)&v206, &v205);
                (int *)(v86 + 8),
                &v207);
              v95 = (void *)(v207 - 12);
              if ( (int *)(v207 - 12) != &dword_28898C0 )
                v130 = (unsigned int *)(v207 - 4);
                    v131 = __ldrex(v130);
                  while ( __strex(v131 - 1, v130) );
                  v131 = (*v130)--;
                if ( v131 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v95);
              v96 = (void *)(v205 - 12);
              if ( (int *)(v205 - 12) != &dword_28898C0 )
                v132 = (unsigned int *)(v205 - 4);
                    v133 = __ldrex(v132);
                  while ( __strex(v133 - 1, v132) );
                  v133 = (*v132)--;
                if ( v133 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v96);
              v97 = (void *)(v206 - 12);
              if ( (int *)(v206 - 12) != &dword_28898C0 )
                v134 = (unsigned int *)(v206 - 4);
                    v135 = __ldrex(v134);
                  while ( __strex(v135 - 1, v134) );
                  v135 = (*v134)--;
                if ( v135 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v97);
              v98 = 0;
              if ( v218 != 1 )
                v98 = 1;
              v99 = *((_DWORD *)ptr + v98);
              if ( !v99 )
                goto LABEL_128;
              v100 = *(_DWORD *)v99;
              v101 = *(_DWORD *)(*(_DWORD *)v99 + 12);
                v102 = v101 == 1;
                if ( v101 == 1 )
                  v102 = *(_BYTE *)(v100 + 4) == 1;
                if ( v102 )
                v103 = *(_DWORD *)v100;
                if ( *(_DWORD *)v100 )
                  v101 = *(_DWORD *)(v103 + 12);
                  v99 = v100;
                  v100 = *(_DWORD *)v100;
                  if ( *(_DWORD *)(v103 + 12) % v218 == v98 )
              v104 = v99 == 0;
              if ( v99 )
                v99 = *(_DWORD *)v99;
                v104 = v99 == 0;
              if ( v104 )
LABEL_128:
                v105 = operator new(0x10u);
                *(_DWORD *)v105 = 0;
                v105[4] = 1;
                *((_DWORD *)v105 + 2) = &unk_28898CC;
                v99 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        v98,
                        (int)v105);
              if ( *(_DWORD *)(*(_DWORD *)(v99 + 8) - 12) )
                goto LABEL_469;
              v106 = 2 % v218;
              v107 = *((_DWORD *)ptr + 2 % v218);
              if ( !v107 )
                goto LABEL_211;
              v108 = *(_DWORD *)v107;
              v109 = *(_DWORD *)(*(_DWORD *)v107 + 12);
                v110 = v109 == 2;
                if ( v109 == 2 )
                  v110 = *(_BYTE *)(v108 + 4) == 2;
                if ( v110 )
                v111 = *(_DWORD *)v108;
                if ( *(_DWORD *)v108 )
                  v109 = *(_DWORD *)(v111 + 12);
                  v107 = v108;
                  v108 = *(_DWORD *)v108;
                  if ( *(_DWORD *)(v111 + 12) % v218 == v106 )
              v136 = v107 == 0;
              if ( v107 )
                v107 = *(_DWORD *)v107;
                v136 = v107 == 0;
              if ( v136 )
LABEL_211:
                v137 = operator new(0x10u);
                *(_DWORD *)v137 = 0;
                v137[4] = 2;
                *((_DWORD *)v137 + 2) = &unk_28898CC;
                v107 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                         (int)&ptr,
                         v106,
                         2u,
                         (int)v137);
              if ( *(_DWORD *)(*(_DWORD *)(v107 + 8) - 12) )
              v138 = 3 % v218;
              v139 = *((_DWORD *)ptr + 3 % v218);
              if ( !v139 )
                goto LABEL_261;
              v140 = *(_DWORD *)v139;
              v141 = *(_DWORD *)(*(_DWORD *)v139 + 12);
                v142 = v141 == 3;
                if ( v141 == 3 )
                  v142 = *(_BYTE *)(v140 + 4) == 3;
                if ( v142 )
                v143 = *(_DWORD *)v140;
                if ( *(_DWORD *)v140 )
                  v141 = *(_DWORD *)(v143 + 12);
                  v139 = v140;
                  v140 = *(_DWORD *)v140;
                  if ( *(_DWORD *)(v143 + 12) % v218 == v138 )
              v144 = v139 == 0;
              if ( v139 )
                v139 = *(_DWORD *)v139;
                v144 = v139 == 0;
              if ( v144 )
LABEL_261:
                v145 = operator new(0x10u);
                *(_DWORD *)v145 = 0;
                v145[4] = 3;
                *((_DWORD *)v145 + 2) = &unk_28898CC;
                v139 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                         v138,
                         3u,
                         (int)v145);
              if ( *(_DWORD *)(*(_DWORD *)(v139 + 8) - 12) )
              v146 = 4 % v218;
              v147 = *((_DWORD *)ptr + 4 % v218);
              if ( !v147 )
                goto LABEL_275;
              v148 = *(_DWORD *)v147;
              v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
                v150 = v149 == 4;
                if ( v149 == 4 )
                  v150 = *(_BYTE *)(v148 + 4) == 4;
                if ( v150 )
                v151 = *(_DWORD *)v148;
                if ( *(_DWORD *)v148 )
                  v149 = *(_DWORD *)(v151 + 12);
                  v147 = v148;
                  v148 = *(_DWORD *)v148;
                  if ( *(_DWORD *)(v151 + 12) % v218 == v146 )
              v152 = v147 == 0;
              if ( v147 )
                v147 = *(_DWORD *)v147;
                v152 = v147 == 0;
              if ( v152 )
LABEL_275:
                v153 = operator new(0x10u);
                *(_DWORD *)v153 = 0;
                v153[4] = 4;
                *((_DWORD *)v153 + 2) = &unk_28898CC;
                v147 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                         v146,
                         4u,
                         (int)v153);
              if ( *(_DWORD *)(*(_DWORD *)(v147 + 8) - 12) )
LABEL_469:
                FocusComponent::registerNewLookupMapEntry((int)v9, &v226, (int)&ptr);
              v154 = v219;
              v37 = (const Json::ValueIteratorBase *)&v228;
              v35 = &v221;
              v36 = (Json::ValueIteratorBase *)&v229;
              while ( v154 )
                v157 = (void *)v154;
                v158 = *(_DWORD *)(v154 + 8);
                v154 = *(_DWORD *)v154;
                v159 = (void *)(v158 - 12);
                if ( (int *)(v158 - 12) != &dword_28898C0 )
                  v155 = (unsigned int *)(v158 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v156 = __ldrex(v155);
                    while ( __strex(v156 - 1, v155) );
                  }
                  else
                    v156 = (*v155)--;
                  if ( v156 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v159);
                operator delete(v157);
              _aeabi_memclr4(ptr, 4 * v218);
              if ( ptr && &v223 != ptr )
                operator delete(ptr);
              v42 = v226;
              v38 = (void **)&v224;
              v34 = v204;
            v160 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v161 = (unsigned int *)(v42 - 4);
                  v162 = __ldrex(v161);
                while ( __strex(v162 - 1, v161) );
                v162 = (*v161)--;
              if ( v162 <= 0 )
                j_j_j_j_j__ZdlPv_9(v160);
          }
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v227);
        }
        Json::ValueIteratorBase::increment(v36);
  v163 = (void *)(v243 - 12);
  if ( (int *)(v243 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v243 - 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j_j__ZdlPv_9(v163);
}


int __fastcall UIControlFactory::UIControlFactory(int a1, int a2, const Json::Value *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11)
{
  int v11; // r4@1
  int v12; // r8@1
  const Json::Value *v13; // r6@1
  __int64 v14; // r0@1
  void *v15; // r6@3
  unsigned int v16; // r2@3
  unsigned int v17; // r1@5
  unsigned int v18; // r5@5
  char *v19; // r7@11 OVERLAPPED
  char *v20; // r8@13
  int v21; // r8@15 OVERLAPPED

  v11 = a1;
  v12 = a1 + 24;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  v13 = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  Json::Value::Value((_DWORD *)(a1 + 24), 0);
  *(_DWORD *)(v11 + 40) = 0;
  *(_DWORD *)(v11 + 44) = 0;
  *(_DWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 52) = a6;
  *(_DWORD *)(v11 + 56) = a7;
  *(_DWORD *)(v11 + 60) = a8;
  *(_DWORD *)(v11 + 64) = a9;
  *(_BYTE *)(v11 + 68) = a11;
  *(_DWORD *)(v11 + 72) = 0;
  *(_DWORD *)(v11 + 76) = 0;
  Json::Value::operator=(v12, v13);
  v14 = *(_QWORD *)(v11 + 44);
  if ( (_DWORD)v14 == HIDWORD(v14) )
  {
    v15 = *(void **)(v11 + 40);
    v16 = ((signed int)v14 - (signed int)v15) >> 2;
    if ( !v16 )
      v16 = 1;
    HIDWORD(v14) = v16 + (((signed int)v14 - (signed int)v15) >> 2);
    v18 = v16 + (((signed int)v14 - (signed int)v15) >> 2);
    if ( 0 != HIDWORD(v14) >> 30 )
      v18 = 0x3FFFFFFF;
    if ( v17 < v16 )
    if ( v18 )
    {
      if ( v18 >= 0x40000000 )
        sub_DA7414();
      v19 = (char *)operator new(4 * v18);
      LODWORD(v14) = *(_QWORD *)(v11 + 40) >> 32;
      v15 = (void *)*(_QWORD *)(v11 + 40);
    }
    else
      v19 = 0;
    *(_DWORD *)&v19[v14 - (_DWORD)v15] = v12;
    v20 = &v19[v14 - (_DWORD)v15];
    if ( 0 != ((signed int)v14 - (signed int)v15) >> 2 )
      _aeabi_memmove4(v19, v15);
    v21 = (int)(v20 + 4);
    if ( v15 )
      operator delete(v15);
    *(_QWORD *)(v11 + 40) = *(_QWORD *)&v19;
    *(_DWORD *)(v11 + 48) = &v19[4 * v18];
  }
  else
    *(_DWORD *)v14 = v12;
    *(_DWORD *)(v11 + 44) += 4;
  return v11;
}


void __fastcall UIControlFactory::_populateDropdownComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r6@1
  UIControl *v4; // r4@1
  const UIResolvedDef *v5; // r8@1
  DropdownComponent *v6; // r7@1
  char v7; // r0@3
  int v8; // r7@6
  DropdownComponent *v9; // r7@7
  void *v10; // r0@9
  void *v11; // r0@10
  __int16 v12; // r0@11
  void *v13; // r0@11
  __int64 v14; // r1@11
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  __int64 v19; // r1@16
  void *v20; // r0@18
  void *v21; // r0@19
  void *v22; // r0@20
  void *v23; // r0@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  unsigned int *v34; // r2@43
  signed int v35; // r1@45
  unsigned int *v36; // r2@47
  signed int v37; // r1@49
  unsigned int *v38; // r2@51
  signed int v39; // r1@53
  unsigned int *v40; // r2@55
  signed int v41; // r1@57
  void *v42; // [sp+4h] [bp-7Ch]@16
  __int64 v43; // [sp+Ch] [bp-74h]@16
  int v44; // [sp+18h] [bp-68h]@16
  int v45; // [sp+20h] [bp-60h]@16
  int v46; // [sp+24h] [bp-5Ch]@16
  void *v47; // [sp+28h] [bp-58h]@11
  __int64 v48; // [sp+30h] [bp-50h]@11
  int v49; // [sp+3Ch] [bp-44h]@11
  int v50; // [sp+44h] [bp-3Ch]@11
  int v51; // [sp+48h] [bp-38h]@11
  int v52; // [sp+50h] [bp-30h]@9
  int v53; // [sp+58h] [bp-28h]@9
  int v54; // [sp+5Ch] [bp-24h]@9
  DropdownComponent *v55; // [sp+60h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (DropdownComponent *)operator new(0x1Cu);
  DropdownComponent::DropdownComponent(v6, v4);
  v55 = v6;
  UIControl::setComponent<DropdownComponent>(v4, &v55);
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  v55 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id) )
  {
    type_id<UIComponent,DropdownComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id);
  }
  v8 = type_id<UIComponent,DropdownComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,DropdownComponent>(void)::id[0]) == 1 )
    v9 = *(DropdownComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v53, "dropdown_name");
  sub_DA7364((void **)&v52, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v54, (int)v5, (int **)&v53, &v52);
  v10 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v52 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v53 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v54);
  v12 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v54);
  DropdownComponent::setDropdownNameId(v9, v12);
  sub_DA7364((void **)&v50, "dropdown_content_control");
  sub_DA7364((void **)&v49, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v51, (int)v5, (int **)&v50, &v49);
  v13 = operator new(1u);
  LODWORD(v14) = sub_C7A2A0;
  v47 = v13;
  HIDWORD(v14) = sub_C7A06C;
  v48 = v14;
  UIControl::_registerControlNameResolver((int)v4, &v51, 2, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v15 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v51 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v49 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v50 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v45, "dropdown_area");
  sub_DA7364((void **)&v44, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v46, (int)v5, (int **)&v45, &v44);
  v18 = operator new(1u);
  LODWORD(v19) = sub_C7A504;
  v42 = v18;
  HIDWORD(v19) = sub_C7A2D0;
  v43 = v19;
  UIControl::_registerControlNameResolver((int)v4, &v46, 0, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v20 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v46 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v44 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v45 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v54 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
}


void __fastcall UIControlFactory::_populateAnimations(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r8@1
  UIControl *v4; // r6@1
  UIControlFactory *v5; // r10@1
  int v6; // r4@1
  void *v7; // r0@1
  char v8; // r0@3
  int v9; // r4@6
  int v10; // r9@7
  int v11; // r0@8
  unsigned int v12; // r1@9
  unsigned int *v13; // r0@9
  unsigned int v14; // r2@12
  unsigned int v15; // r3@13
  int v16; // r4@16
  unsigned int *v17; // r1@17
  unsigned int v18; // r0@19
  unsigned int *v19; // r5@23
  unsigned int v20; // r0@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  char v23; // r0@34
  int v24; // r4@37
  Json::Value *v25; // r4@40
  void *v26; // r0@40
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  unsigned int *v29; // r2@47
  signed int v30; // r1@49
  signed int v31; // r1@55
  Json::Value *v32; // r11@62
  int v33; // r1@63
  void *v34; // r0@65
  void *v35; // r0@66
  unsigned int *v36; // r2@67
  int v37; // r0@71
  void *v38; // r0@71
  char v39; // r0@74
  int v40; // r4@77
  AnimationComponent *v41; // r4@78
  char v42; // r0@79
  void *v43; // r0@79
  unsigned int *v44; // r2@85
  signed int v45; // r1@87
  unsigned int *v46; // r2@89
  signed int v47; // r1@91
  unsigned __int64 *v48; // [sp+20h] [bp-108h]@42
  int *v49; // [sp+24h] [bp-104h]@42
  int v50; // [sp+2Ch] [bp-FCh]@79
  int v51; // [sp+34h] [bp-F4h]@43
  char v52; // [sp+38h] [bp-F0h]@71
  int v53; // [sp+84h] [bp-A4h]@63
  int v54; // [sp+88h] [bp-A0h]@63
  char v55; // [sp+8Ch] [bp-9Ch]@41
  char v56; // [sp+94h] [bp-94h]@41
  int v57; // [sp+A0h] [bp-88h]@40
  int v58; // [sp+A4h] [bp-84h]@14
  int v59; // [sp+A8h] [bp-80h]@8
  int v60; // [sp+ACh] [bp-7Ch]@14
  int v61; // [sp+B4h] [bp-74h]@1
  char v62; // [sp+B8h] [bp-70h]@64

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v61, "anims");
  v6 = UIResolvedDef::hasValue((int)v3, (int **)&v61);
  v7 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 == 1 )
    v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
    __dmb();
    if ( !(v8 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
      type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
    v9 = type_id<UIComponent,AnimationComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,AnimationComponent>(void)::id[0]) != 1
      || (v10 = *(_DWORD *)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v9))) == 0 )
      v11 = *((_DWORD *)v5 + 1);
      v59 = v11;
      if ( !v11 )
        std::__throw_bad_weak_ptr();
      v12 = *(_DWORD *)(v11 + 4);
      v13 = (unsigned int *)(v11 + 4);
      {
        while ( 1 )
        {
          if ( !v12 )
            std::__throw_bad_weak_ptr();
          __dmb();
          v14 = __ldrex(v13);
          if ( v14 == v12 )
            break;
          __clrex();
          v12 = v14;
        }
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
      }
      while ( v15 );
      v58 = *(_DWORD *)v5;
      std::make_unique<AnimationComponent,UIControl &,std::shared_ptr<UIControlFactory>>(
        (UIComponent **)&v60,
        v4,
        (int)&v58);
      UIControl::setComponent<AnimationComponent>(v4, (UIComponent **)&v60);
      if ( v60 )
        (*(void (**)(void))(*(_DWORD *)v60 + 4))();
      v16 = v59;
      v60 = 0;
      if ( v59 )
        v17 = (unsigned int *)(v59 + 4);
        if ( &pthread_create )
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
      if ( !(v23 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
        type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
      v24 = type_id<UIComponent,AnimationComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v4, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1 )
        v10 = *(_DWORD *)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v24));
      else
        v10 = 0;
    sub_DA7364((void **)&v57, "anims");
    v25 = UIResolvedDef::getValue((int)v3, (int **)&v57, 0);
    v26 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    Json::Value::begin((Json::Value *)&v56, (int)v25);
    Json::Value::end((Json::Value *)&v55, (int)v25);
    if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v56, (const Json::ValueIteratorBase *)&v55) )
      v49 = (int *)((char *)v5 + 20);
      v48 = (unsigned __int64 *)((char *)v5 + 40);
        v32 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v56);
        if ( Json::Value::isString(v32) == 1 )
          sub_DA7364((void **)&v53, (const char *)&unk_257BC67);
          Json::Value::asString(&v54, (int)v32, &v53);
          v33 = v54;
          if ( *(_DWORD *)(v54 - 12) )
            UIResolvedDef::create(
              (int)&v62,
              (unsigned __int64 *)*((_QWORD *)v5 + 1),
              v48,
              *((_QWORD *)v5 + 1) >> 32,
              v49,
              &v54);
            UIControlFactory::_addAnimToComponent(v5, (const UIResolvedDef *)&v62, v4);
            UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v62);
            v33 = v54;
          v34 = (void *)(v33 - 12);
          if ( (int *)(v33 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v33 - 4);
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
              j_j_j_j_j__ZdlPv_9(v34);
          v35 = (void *)(v53 - 12);
          if ( (int *)(v53 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v53 - 4);
                v31 = __ldrex(v36);
              while ( __strex(v31 - 1, v36) );
              v31 = (*v36)--;
            if ( v31 <= 0 )
              j_j_j_j_j__ZdlPv_9(v35);
          UIResolvedDef::create((int)&v52, (Json::Value *)*((_QWORD *)v5 + 1), v48, *((_QWORD *)v5 + 1) >> 32, v49, v32);
          sub_DA7364((void **)&v51, "anim_type");
          v37 = UIResolvedDef::getAsAnimationType((int)&v52, (int **)&v51, 8);
          AnimationComponent::addAnimation(v10, v37, (const UIResolvedDef *)&v52, *((NameRegistry **)v5 + 3));
          v38 = (void *)(v51 - 12);
          if ( (int *)(v51 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v51 - 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j_j__ZdlPv_9(v38);
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v52);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v56);
      while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v56, (const Json::ValueIteratorBase *)&v55) );
  v39 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
  __dmb();
  if ( !(v39 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
    type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
  v40 = type_id<UIComponent,AnimationComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1 )
    v41 = *(AnimationComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v40));
    if ( v41 )
      sub_DA7364((void **)&v50, "disable_anim_fast_forward");
      v42 = UIResolvedDef::getAsBool((int)v3, (int **)&v50, 0);
      AnimationComponent::disableFastForward(v41, v42);
      v43 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v50 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9(v43);
}


void __fastcall UIControlFactory::_createScrollView(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createScrollView(this, a2, a3);
}


void __fastcall UIControlFactory::_populateFactoryComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r5@1
  UIControlFactory *v4; // r7@1
  int v5; // r6@3
  void *v6; // r0@4
  void *v7; // r0@5
  int v8; // r6@8
  void *v9; // r0@8
  Json::Value *v10; // r5@10
  void *v11; // r0@10
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@26
  signed int v17; // r1@28
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  int v20; // [sp+0h] [bp-88h]@12
  int v21; // [sp+4Ch] [bp-3Ch]@10
  int v22; // [sp+54h] [bp-34h]@8
  int v23; // [sp+5Ch] [bp-2Ch]@4
  int v24; // [sp+64h] [bp-24h]@2
  UIControl *v25; // [sp+68h] [bp-20h]@1
  UIControlFactory *v26; // [sp+6Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  v25 = a3;
  v26 = this;
  if ( UIResolvedDef::getDefType(a2) != 4 )
    goto LABEL_48;
  sub_DA7364((void **)&v24, "control_name");
  if ( UIResolvedDef::hasValue((int)v3, (int **)&v24) )
  {
    v5 = 1;
  }
  else
    sub_DA7364((void **)&v23, "control_ids");
    v5 = UIResolvedDef::hasValue((int)v3, (int **)&v23);
    v6 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9(v6);
    }
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  if ( v5 != 1 )
LABEL_48:
    sub_DA7364((void **)&v22, "factory");
    v8 = UIResolvedDef::hasValue((int)v3, (int **)&v22);
    v9 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v22 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    if ( v8 == 1 )
      sub_DA7364((void **)&v21, "factory");
      v10 = UIResolvedDef::getValue((int)v3, (int **)&v21, 0);
      v11 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
      if ( Json::Value::isObject(v10) == 1 )
        UIResolvedDef::UIResolvedDef((int)&v20, (int)v4 + 40, (int)v10);
        sub_C6144C((int)&v25, 0, (int)&v20);
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v20);
    sub_C6144C((int)&v25, 1, (int)v3);
}


void __fastcall UIControlFactory::_populateLayoutComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r8@1
  UIControl *v4; // r6@1
  const UIResolvedDef *v5; // r4@1
  UIComponent *v6; // r5@1
  char v7; // r0@3
  int v8; // r5@6
  LayoutComponent *v9; // r5@7
  char v10; // r0@9
  void *v11; // r0@9
  char v12; // r0@10
  void *v13; // r0@10
  char v14; // r0@11
  void *v15; // r0@11
  char v16; // r0@12
  void *v17; // r0@12
  char v18; // r0@13
  void *v19; // r0@13
  void **v20; // r0@14
  void *v21; // r0@18
  void **v22; // r0@19
  void *v23; // r0@23
  void **v24; // r0@24
  void *v25; // r0@28
  void **v26; // r0@29
  void *v27; // r0@33
  char v28; // r0@34
  void *v29; // r0@34
  char v30; // r0@35
  void *v31; // r0@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  unsigned int *v34; // r2@41
  signed int v35; // r1@43
  unsigned int *v36; // r2@45
  signed int v37; // r1@47
  unsigned int *v38; // r2@49
  signed int v39; // r1@51
  unsigned int *v40; // r2@53
  signed int v41; // r1@55
  unsigned int *v42; // r2@57
  signed int v43; // r1@59
  unsigned int *v44; // r2@61
  signed int v45; // r1@63
  unsigned int *v46; // r2@65
  signed int v47; // r1@67
  unsigned int *v48; // r2@69
  signed int v49; // r1@71
  unsigned int *v50; // r2@73
  signed int v51; // r1@75
  unsigned int *v52; // r2@77
  signed int v53; // r1@79
  int v54; // [sp+Ch] [bp-F4h]@35
  int v55; // [sp+14h] [bp-ECh]@34
  int v56; // [sp+1Ch] [bp-E4h]@29
  void *v57; // [sp+20h] [bp-E0h]@29
  void *v58; // [sp+2Ch] [bp-D4h]@29
  int v59; // [sp+44h] [bp-BCh]@24
  void *v60; // [sp+48h] [bp-B8h]@24
  void *v61; // [sp+54h] [bp-ACh]@24
  int v62; // [sp+6Ch] [bp-94h]@19
  void *v63; // [sp+70h] [bp-90h]@19
  void *v64; // [sp+7Ch] [bp-84h]@19
  int v65; // [sp+94h] [bp-6Ch]@14
  void *v66; // [sp+98h] [bp-68h]@14
  void *ptr; // [sp+A4h] [bp-5Ch]@14
  int v68; // [sp+BCh] [bp-44h]@13
  int v69; // [sp+C4h] [bp-3Ch]@12
  int v70; // [sp+CCh] [bp-34h]@11
  int v71; // [sp+D4h] [bp-2Ch]@10
  int v72; // [sp+DCh] [bp-24h]@9
  UIComponent *v73; // [sp+E0h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0xD8u);
  LayoutComponent::LayoutComponent(v6, v4);
  v73 = v6;
  UIControl::setComponent<LayoutComponent>(v4, &v73);
  if ( v73 )
    (*(void (**)(void))(*(_DWORD *)v73 + 4))();
  v73 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v8 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v9 = *(LayoutComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v72, "anchor_from");
  v10 = UIResolvedDef::getAsAnchorPoint((int)v5, (int **)&v72, 4);
  LayoutComponent::setAnchorFrom((int)v9, v10);
  v11 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v72 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  sub_DA7364((void **)&v71, "anchor_to");
  v12 = UIResolvedDef::getAsAnchorPoint((int)v5, (int **)&v71, 4);
  LayoutComponent::setAnchorTo((int)v9, v12);
  v13 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v71 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v70, "contained");
  v14 = UIResolvedDef::getAsBool((int)v5, (int **)&v70, 0);
  LayoutComponent::setContained(v9, v14);
  v15 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v70 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  sub_DA7364((void **)&v69, "draggable");
  v16 = UIResolvedDef::getAsDraggable((int)v5, (int **)&v69, 0);
  LayoutComponent::setDraggable((int)v9, v16);
  v17 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v69 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v68, "follows_cursor");
  v18 = UIResolvedDef::getAsBool((int)v5, (int **)&v68, 0);
  LayoutComponent::setFollowsCursor(v9, v18);
  v19 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v68 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = sub_DA7364((void **)&v65, "offset");
  UIControlFactory::_resolveAnimatedProperty<ui::LayoutOffset>(
    (ui::LayoutOffset *)&v66,
    (int)v3,
    (int)v5,
    v4,
    (int **)v20);
  LayoutComponent::setOffset(v9, (const ui::LayoutOffset *)&v66);
  if ( ptr )
    operator delete(ptr);
  if ( v66 )
    operator delete(v66);
  v21 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v65 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = sub_DA7364((void **)&v62, "size");
    (ui::LayoutOffset *)&v63,
    (int **)v22);
  LayoutComponent::setSize(v9, (const ui::LayoutOffset *)&v63);
  if ( v64 )
    operator delete(v64);
  if ( v63 )
    operator delete(v63);
  v23 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v62 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  v24 = sub_DA7364((void **)&v59, "min_size");
    (ui::LayoutOffset *)&v60,
    (int **)v24);
  LayoutComponent::setMinSize(v9, (const ui::LayoutOffset *)&v60);
  if ( v61 )
    operator delete(v61);
  if ( v60 )
    operator delete(v60);
  v25 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v59 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = sub_DA7364((void **)&v56, "max_size");
    (ui::LayoutOffset *)&v57,
    (int **)v26);
  LayoutComponent::setMaxSize(v9, (const ui::LayoutOffset *)&v57);
  if ( v58 )
    operator delete(v58);
  if ( v57 )
    operator delete(v57);
  v27 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v56 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  sub_DA7364((void **)&v55, "inherit_max_sibling_width");
  v28 = UIResolvedDef::getAsBool((int)v5, (int **)&v55, 0);
  LayoutComponent::setInheritMaxSiblingWidth(v9, v28);
  v29 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v55 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  sub_DA7364((void **)&v54, "inherit_max_sibling_height");
  v30 = UIResolvedDef::getAsBool((int)v5, (int **)&v54, 0);
  LayoutComponent::setInheritMaxSiblingHeight(v9, v30);
  v31 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v54 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
}


void __fastcall UIControlFactory::_createSliderBox(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createSliderBox(this, a2, a3);
}


CollectionComponent *__fastcall UIControlFactory::_populateCollectionItemComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  CollectionComponent *result; // r0@1
  UIControl *v5; // r5@1
  char v6; // r0@2
  int v7; // r6@5
  UIComponent *v8; // r5@8
  int v9; // r4@11
  unsigned int *v10; // r1@12
  unsigned int *v11; // r5@18
  UIComponent *v12; // [sp+4h] [bp-1Ch]@8
  UIControl *v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@11

  v3 = a3;
  result = (CollectionComponent *)UIControl::getParent((UIControl *)&v13, (int)a3);
  v5 = v13;
  if ( v13 )
  {
    v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
    __dmb();
    if ( !(v6 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
    {
      type_id<UIComponent,CollectionComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
    }
    v7 = type_id<UIComponent,CollectionComponent>(void)::id[0];
    result = (CollectionComponent *)UIControl::_hasComponent(v5, type_id<UIComponent,CollectionComponent>(void)::id[0]);
    if ( result == (CollectionComponent *)1 )
      result = *(CollectionComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7));
      if ( result )
      {
        result = *(CollectionComponent **)(*(_DWORD *)CollectionComponent::getCollectionName(result) - 12);
        if ( result )
        {
          v8 = (UIComponent *)operator new(0xCu);
          CollectionItemComponent::CollectionItemComponent(v8, v3);
          v12 = v8;
          UIControl::setComponent<CollectionItemComponent>(v3, &v12);
          if ( v12 )
            (*(void (**)(void))(*(_DWORD *)v12 + 4))();
          result = 0;
          v12 = 0;
        }
      }
  }
  v9 = v14;
  if ( v14 )
    v10 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (CollectionComponent *)__ldrex(v10);
      while ( __strex((unsigned int)result - 1, v10) );
    else
      result = (CollectionComponent *)(*v10)--;
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
        __dmb();
        do
          result = (CollectionComponent *)__ldrex(v11);
        while ( __strex((unsigned int)result - 1, v11) );
      else
        result = (CollectionComponent *)(*v11)--;
      if ( result == (CollectionComponent *)1 )
        result = (CollectionComponent *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


void __fastcall UIControlFactory::_createScreen(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createScreen(this, a2, a3);
}


ScrollTrackComponent *__fastcall UIControlFactory::_createScrollTrack(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  ScrollTrackComponent *v8; // r5@5
  ScrollTrackComponent *result; // r0@5
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+4h] [bp-24h]@1
  ScrollTrackComponent *v13; // [sp+10h] [bp-18h]@5

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v12, "{scroll_track}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v12);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  v8 = (ScrollTrackComponent *)operator new(0x10u);
  ScrollTrackComponent::ScrollTrackComponent(v8, v3);
  v13 = v8;
  UIControl::setComponent<ScrollTrackComponent>(v3, &v13);
  result = v13;
  if ( v13 )
    result = (ScrollTrackComponent *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


void __fastcall UIControlFactory::_populateSliderBoxComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateSliderBoxComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSpriteComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r8@1
  UIControl *v4; // r6@1
  const UIResolvedDef *v5; // r4@1
  RenderableComponent *v6; // r5@1
  char v7; // r0@3
  int v8; // r5@6
  SpriteComponent *v9; // r5@7
  void **v10; // r0@9
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  int v14; // r0@12
  signed int v15; // r7@13
  char *v16; // r0@15
  char *v17; // r0@16
  void *v18; // r0@17
  void **v19; // r0@18
  void *v20; // r0@18
  void *v21; // r0@19
  __int16 v22; // r0@20
  void *v23; // r0@20
  void *v24; // r0@21
  void *v25; // r0@22
  int v26; // r0@23
  void *v27; // r0@23
  __int16 v28; // r0@24
  void *v29; // r0@24
  __int16 v30; // r0@25
  void *v31; // r0@25
  __int16 v32; // r0@26
  void *v33; // r0@26
  __int16 v34; // r0@27
  void *v35; // r0@27
  void *v36; // r0@28
  void *v37; // r0@29
  void *v38; // r0@30
  __int16 v39; // r0@31
  void *v40; // r0@31
  __int16 v41; // r0@32
  void *v42; // r0@32
  _BYTE *v43; // r0@33
  unsigned int *v44; // r2@35
  signed int v45; // r1@37
  unsigned int *v46; // r2@39
  signed int v47; // r1@41
  unsigned int *v48; // r2@43
  signed int v49; // r1@45
  unsigned int *v50; // r2@47
  signed int v51; // r1@49
  unsigned int *v52; // r2@51
  signed int v53; // r1@53
  unsigned int *v54; // r2@55
  signed int v55; // r1@57
  unsigned int *v56; // r2@59
  signed int v57; // r1@61
  unsigned int *v58; // r2@63
  signed int v59; // r1@65
  unsigned int *v60; // r2@67
  signed int v61; // r1@69
  unsigned int *v62; // r2@71
  signed int v63; // r1@73
  unsigned int *v64; // r2@75
  signed int v65; // r1@77
  unsigned int *v66; // r2@79
  signed int v67; // r1@81
  unsigned int *v68; // r2@83
  signed int v69; // r1@85
  unsigned int *v70; // r2@87
  signed int v71; // r1@89
  unsigned int *v72; // r2@91
  signed int v73; // r1@93
  unsigned int *v74; // r2@95
  signed int v75; // r1@97
  unsigned int *v76; // r2@99
  signed int v77; // r1@101
  unsigned int *v78; // r2@103
  signed int v79; // r1@105
  unsigned int *v80; // r2@107
  signed int v81; // r1@109
  unsigned int *v82; // r2@111
  signed int v83; // r1@113
  unsigned int *v84; // r2@115
  signed int v85; // r1@117
  unsigned int *v86; // r2@119
  signed int v87; // r1@121
  int v88; // [sp+Ch] [bp-11Ch]@32
  int v89; // [sp+14h] [bp-114h]@31
  int v90; // [sp+1Ch] [bp-10Ch]@28
  int v91; // [sp+24h] [bp-104h]@28
  int v92; // [sp+28h] [bp-100h]@28
  int v93; // [sp+30h] [bp-F8h]@27
  int v94; // [sp+38h] [bp-F0h]@26
  int v95; // [sp+40h] [bp-E8h]@25
  int v96; // [sp+48h] [bp-E0h]@24
  int v97; // [sp+50h] [bp-D8h]@23
  int v98; // [sp+58h] [bp-D0h]@22
  char v99; // [sp+5Fh] [bp-C9h]@22
  int v100; // [sp+60h] [bp-C8h]@21
  signed int v101; // [sp+64h] [bp-C4h]@21
  int v102; // [sp+6Ch] [bp-BCh]@21
  char v103; // [sp+70h] [bp-B8h]@21
  int v104; // [sp+7Ch] [bp-ACh]@20
  char v105; // [sp+80h] [bp-A8h]@19
  int v106; // [sp+94h] [bp-94h]@19
  char v107; // [sp+98h] [bp-90h]@19
  int v108; // [sp+ACh] [bp-7Ch]@18
  char v109; // [sp+B0h] [bp-78h]@18
  int v110; // [sp+C0h] [bp-68h]@17
  int v111; // [sp+C4h] [bp-64h]@17
  int v112; // [sp+CCh] [bp-5Ch]@17
  char v113; // [sp+D0h] [bp-58h]@17
  char *v114; // [sp+D8h] [bp-50h]@15
  char *v115; // [sp+DCh] [bp-4Ch]@15
  int v116; // [sp+E0h] [bp-48h]@15
  int v117; // [sp+E8h] [bp-40h]@10
  int v118; // [sp+F0h] [bp-38h]@10
  _BYTE *v119; // [sp+F4h] [bp-34h]@10
  int v120; // [sp+FCh] [bp-2Ch]@9
  char v121; // [sp+100h] [bp-28h]@9
  RenderableComponent *v122; // [sp+108h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (RenderableComponent *)operator new(0xA4u);
  SpriteComponent::SpriteComponent(v6, v4);
  v122 = v6;
  UIControl::setComponent<SpriteComponent>(v4, &v122);
  if ( v122 )
    (*(void (**)(void))(*(_DWORD *)v122 + 4))();
  v122 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
  {
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  }
  v8 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
    v9 = *(SpriteComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  v10 = sub_DA7364((void **)&v120, "uv");
  UIControlFactory::_resolveAnimatedProperty<glm::detail::tvec2<float>>((int)&v121, (int)v3, (int)v5, v4, (int **)v10);
  SpriteComponent::setUV((int)v9, (int)&v121);
  v11 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v120 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
    }
    else
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  sub_DA7364((void **)&v118, "texture_file_system");
  sub_DA7364((void **)&v117, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString((int *)&v119, (int)v5, (int **)&v118, &v117);
  v12 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v117 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v118 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v119 - 3);
  if ( v14 )
    v15 = ResourceUtil::pathFromString(v14, v119);
    v15 = 0;
  UIResolvedDef::getAsTextureString((UIResolvedDef *)&v114, (int)v5);
  v115 = v114;
  v116 = v15;
  v114 = (char *)&unk_28898CC;
  SpriteComponent::setResourceLocation(v9, (const ResourceLocation *)&v115);
  v16 = v115 - 12;
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v115 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = v114 - 12;
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v114 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v112, "uv_size");
  v110 = 0;
  v111 = 0;
  UIResolvedDef::getAsUVSize((int)&v113, (int)v5, (int **)&v112, (int)&v110);
  SpriteComponent::setUVSize((int)v9, (int)&v113);
  v18 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v112 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = sub_DA7364((void **)&v108, "color");
  UIControlFactory::_resolveAnimatedProperty<Color>((int)&v109, (int)v3, (int)v5, v4, (int **)v19);
  SpriteComponent::setColor(v9, (const Color *)&v109);
  v20 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v108 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v106, "nineslice_size");
  ui::SliceSize::SliceSize((ui::SliceSize *)&v105);
  UIResolvedDef::getAsSliceSize((int)&v107, (int)v5, (int **)&v106, (int)&v105);
  SpriteComponent::setNineSliceSize(v9, (const ui::SliceSize *)&v107);
  v21 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v106 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  sub_DA7364((void **)&v104, "tiled");
  v22 = UIResolvedDef::getAsBool((int)v5, (int **)&v104, 0);
  SpriteComponent::setTiled(v9, v22);
  v23 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v104 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  sub_DA7364((void **)&v102, "tiled_scale");
  v100 = 1065353216;
  v101 = 1065353216;
  UIResolvedDef::getAsSize((int)&v103, (int)v5, (int **)&v102, (int)&v100);
  SpriteComponent::setTiledScale((int)v9, (int)&v103);
  v24 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v102 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v98, "clip_direction");
  v99 = UIResolvedDef::getAsClipDirection((int)v5, (int **)&v98, 0);
  SpriteComponent::setClipDirection((int)v9, &v99);
  v25 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v98 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  sub_DA7364((void **)&v97, "clip_ratio");
  v26 = UIControlFactory::_resolveAnimatedProperty<float>((int)v3, (int)v5, v4, (int **)&v97);
  SpriteComponent::setClipRatio(v9, *(float *)&v26);
  v27 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v97 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  sub_DA7364((void **)&v96, "clip_pixelperfect");
  v28 = UIResolvedDef::getAsBool((int)v5, (int **)&v96, 1);
  SpriteComponent::setClipPixelPerfect(v9, v28);
  v29 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v96 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  sub_DA7364((void **)&v95, "pixel_perfect");
  v30 = UIResolvedDef::getAsBool((int)v5, (int **)&v95, 1);
  SpriteComponent::setPixelPerfect(v9, v30);
  v31 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v95 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  sub_DA7364((void **)&v94, "keep_ratio");
  v32 = UIResolvedDef::getAsBool((int)v5, (int **)&v94, 1);
  SpriteComponent::setKeepRatio(v9, v32);
  v33 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v94 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  sub_DA7364((void **)&v93, "fill");
  v34 = UIResolvedDef::getAsBool((int)v5, (int **)&v93, 0);
  SpriteComponent::setFilled(v9, v34);
  v35 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v93 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  sub_DA7364((void **)&v91, "zip_folder");
  sub_DA7364((void **)&v90, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v92, (int)v5, (int **)&v91, &v90);
  SpriteComponent::setZipFolder((int)v9, &v92);
  v36 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v92 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v90 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v91 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9(v38);
  sub_DA7364((void **)&v89, "grayscale");
  v39 = UIResolvedDef::getAsBool((int)v5, (int **)&v89, 0);
  SpriteComponent::setGrayscaleEnabled(v9, v39);
  v40 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v89 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  sub_DA7364((void **)&v88, "force_texture_reload");
  v41 = UIResolvedDef::getAsBool((int)v5, (int **)&v88, 0);
  SpriteComponent::setForceReloadTexture(v9, v41);
  v42 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v88 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9(v42);
  v43 = v119 - 12;
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v119 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9(v43);
}


void __fastcall UIControlFactory::_populateGestureComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateGestureComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSliderComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r6@1
  UIControl *v4; // r8@1
  const UIResolvedDef *v5; // r5@1
  UIComponent *v6; // r7@1
  char v7; // r0@3
  int v8; // r7@6
  SliderComponent *v9; // r7@7
  void *v10; // r0@9
  void *v11; // r0@10
  __int16 v12; // r0@11
  void *v13; // r0@11
  void *v14; // r0@12
  __int16 v15; // r0@13
  void *v16; // r0@13
  void *v17; // r0@14
  __int16 v18; // r0@15
  int v19; // r0@15
  void *v20; // r0@15
  int v21; // r0@16
  void *v22; // r0@16
  int v23; // r0@17
  void *v24; // r0@17
  int v25; // r0@18
  void *v26; // r0@18
  void *v27; // r0@19
  void *v28; // r0@20
  void *v29; // r0@21
  void *v30; // r0@22
  void *v31; // r0@23
  __int16 v32; // r0@24
  void *v33; // r0@24
  __int64 v34; // r1@24
  void *v35; // r0@26
  void *v36; // r0@27
  void *v37; // r0@28
  void *v38; // r0@29
  __int64 v39; // r1@29
  void *v40; // r0@31
  void *v41; // r0@32
  void *v42; // r0@33
  void *v43; // r0@34
  __int64 v44; // r1@34
  void *v45; // r0@36
  void *v46; // r0@37
  void *v47; // r0@38
  void *v48; // r0@39
  __int64 v49; // r1@39
  void *v50; // r0@41
  void *v51; // r0@42
  void *v52; // r0@43
  void *v53; // r0@44
  __int64 v54; // r1@44
  void *v55; // r0@46
  void *v56; // r0@47
  void *v57; // r0@48
  void *v58; // r0@49
  __int64 v59; // r1@49
  void *v60; // r0@51
  void *v61; // r0@52
  void *v62; // r0@53
  void *v63; // r0@54
  __int64 v64; // r1@54
  void *v65; // r0@56
  void *v66; // r0@57
  void *v67; // r0@58
  void *v68; // r0@59
  void *v69; // r0@60
  void *v70; // r0@61
  void *v71; // r0@62
  unsigned int *v72; // r2@64
  signed int v73; // r1@66
  unsigned int *v74; // r2@68
  signed int v75; // r1@70
  unsigned int *v76; // r2@72
  signed int v77; // r1@74
  unsigned int *v78; // r2@76
  signed int v79; // r1@78
  unsigned int *v80; // r2@80
  signed int v81; // r1@82
  unsigned int *v82; // r2@84
  signed int v83; // r1@86
  unsigned int *v84; // r2@88
  signed int v85; // r1@90
  unsigned int *v86; // r2@92
  signed int v87; // r1@94
  unsigned int *v88; // r2@96
  signed int v89; // r1@98
  unsigned int *v90; // r2@100
  signed int v91; // r1@102
  unsigned int *v92; // r2@104
  signed int v93; // r1@106
  unsigned int *v94; // r2@108
  signed int v95; // r1@110
  unsigned int *v96; // r2@112
  signed int v97; // r1@114
  unsigned int *v98; // r2@116
  signed int v99; // r1@118
  unsigned int *v100; // r2@120
  signed int v101; // r1@122
  unsigned int *v102; // r2@124
  signed int v103; // r1@126
  unsigned int *v104; // r2@128
  signed int v105; // r1@130
  unsigned int *v106; // r2@132
  signed int v107; // r1@134
  unsigned int *v108; // r2@136
  signed int v109; // r1@138
  unsigned int *v110; // r2@140
  signed int v111; // r1@142
  unsigned int *v112; // r2@144
  signed int v113; // r1@146
  unsigned int *v114; // r2@148
  signed int v115; // r1@150
  unsigned int *v116; // r2@152
  signed int v117; // r1@154
  unsigned int *v118; // r2@156
  signed int v119; // r1@158
  unsigned int *v120; // r2@160
  signed int v121; // r1@162
  unsigned int *v122; // r2@164
  signed int v123; // r1@166
  unsigned int *v124; // r2@168
  signed int v125; // r1@170
  unsigned int *v126; // r2@172
  signed int v127; // r1@174
  unsigned int *v128; // r2@176
  signed int v129; // r1@178
  unsigned int *v130; // r2@180
  signed int v131; // r1@182
  unsigned int *v132; // r2@184
  signed int v133; // r1@186
  unsigned int *v134; // r2@188
  signed int v135; // r1@190
  unsigned int *v136; // r2@192
  signed int v137; // r1@194
  unsigned int *v138; // r2@196
  signed int v139; // r1@198
  unsigned int *v140; // r2@200
  signed int v141; // r1@202
  unsigned int *v142; // r2@204
  signed int v143; // r1@206
  unsigned int *v144; // r2@208
  signed int v145; // r1@210
  unsigned int *v146; // r2@212
  signed int v147; // r1@214
  unsigned int *v148; // r2@216
  signed int v149; // r1@218
  unsigned int *v150; // r2@220
  signed int v151; // r1@222
  void *v152; // [sp+0h] [bp-1A0h]@54
  __int64 v153; // [sp+8h] [bp-198h]@54
  int v154; // [sp+14h] [bp-18Ch]@54
  int v155; // [sp+1Ch] [bp-184h]@54
  int v156; // [sp+20h] [bp-180h]@54
  void *v157; // [sp+24h] [bp-17Ch]@49
  __int64 v158; // [sp+2Ch] [bp-174h]@49
  int v159; // [sp+38h] [bp-168h]@49
  int v160; // [sp+40h] [bp-160h]@49
  int v161; // [sp+44h] [bp-15Ch]@49
  void *v162; // [sp+48h] [bp-158h]@44
  __int64 v163; // [sp+50h] [bp-150h]@44
  int v164; // [sp+5Ch] [bp-144h]@44
  int v165; // [sp+64h] [bp-13Ch]@44
  int v166; // [sp+68h] [bp-138h]@44
  void *v167; // [sp+6Ch] [bp-134h]@39
  __int64 v168; // [sp+74h] [bp-12Ch]@39
  int v169; // [sp+80h] [bp-120h]@39
  int v170; // [sp+88h] [bp-118h]@39
  int v171; // [sp+8Ch] [bp-114h]@39
  void *v172; // [sp+90h] [bp-110h]@34
  __int64 v173; // [sp+98h] [bp-108h]@34
  int v174; // [sp+A4h] [bp-FCh]@34
  int v175; // [sp+ACh] [bp-F4h]@34
  int v176; // [sp+B0h] [bp-F0h]@34
  void *v177; // [sp+B4h] [bp-ECh]@29
  __int64 v178; // [sp+BCh] [bp-E4h]@29
  int v179; // [sp+C8h] [bp-D8h]@29
  int v180; // [sp+D0h] [bp-D0h]@29
  int v181; // [sp+D4h] [bp-CCh]@29
  void *v182; // [sp+D8h] [bp-C8h]@24
  __int64 v183; // [sp+E0h] [bp-C0h]@24
  int v184; // [sp+ECh] [bp-B4h]@24
  int v185; // [sp+F4h] [bp-ACh]@24
  int v186; // [sp+F8h] [bp-A8h]@24
  int v187; // [sp+100h] [bp-A0h]@22
  int v188; // [sp+108h] [bp-98h]@22
  int v189; // [sp+10Ch] [bp-94h]@22
  int v190; // [sp+114h] [bp-8Ch]@19
  int v191; // [sp+11Ch] [bp-84h]@19
  int v192; // [sp+120h] [bp-80h]@19
  int v193; // [sp+128h] [bp-78h]@18
  int v194; // [sp+130h] [bp-70h]@17
  int v195; // [sp+138h] [bp-68h]@16
  int v196; // [sp+140h] [bp-60h]@15
  int v197; // [sp+148h] [bp-58h]@13
  int v198; // [sp+150h] [bp-50h]@13
  int v199; // [sp+154h] [bp-4Ch]@13
  int v200; // [sp+15Ch] [bp-44h]@11
  int v201; // [sp+164h] [bp-3Ch]@11
  int v202; // [sp+168h] [bp-38h]@11
  int v203; // [sp+170h] [bp-30h]@9
  int v204; // [sp+178h] [bp-28h]@9
  int v205; // [sp+17Ch] [bp-24h]@9
  UIComponent *v206; // [sp+180h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x78u);
  SliderComponent::SliderComponent(v6, v4);
  v206 = v6;
  UIControl::setComponent<SliderComponent>(v4, &v206);
  if ( v206 )
    (*(void (**)(void))(*(_DWORD *)v206 + 4))();
  v206 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
  {
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  }
  v8 = type_id<UIComponent,SliderComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
    v9 = *(SliderComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v204, "slider_track_button");
  sub_DA7364((void **)&v203, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v205, (int)v5, (int **)&v204, &v203);
  v10 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v203 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
    }
    else
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v204 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v205);
  v12 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v205);
  SliderComponent::setSliderBoxTrackButton(v9, v12);
  sub_DA7364((void **)&v201, "slider_small_decrease_button");
  sub_DA7364((void **)&v200, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v202, (int)v5, (int **)&v201, &v200);
  v13 = (void *)(v200 - 12);
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v200 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v201 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v202);
  v15 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v202);
  SliderComponent::setSmallDecreaseButton(v9, v15);
  sub_DA7364((void **)&v198, "slider_small_increase_button");
  sub_DA7364((void **)&v197, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v199, (int)v5, (int **)&v198, &v197);
  v16 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v197 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v198 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v199);
  v18 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v199);
  SliderComponent::setSmallIncreaseButton(v9, v18);
  sub_DA7364((void **)&v196, "slider_steps");
  v19 = UIResolvedDef::getAsInt((int)v5, (int **)&v196, 1);
  SliderComponent::setNumberSteps(v9, v19);
  v20 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v196 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v195, "slider_direction");
  v21 = UIResolvedDef::getAsOrientation((int)v5, (int **)&v195, 0);
  SliderComponent::setSliderDirection((int)v9, v21);
  v22 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v195 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v194, "slider_speed");
  v23 = UIResolvedDef::getAsFloat((int)v5, (int **)&v194, 1065353216);
  SliderComponent::setSliderSpeed(v9, *(float *)&v23);
  v24 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v194 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v193, "slider_timeout");
  v25 = UIResolvedDef::getAsFloat((int)v5, (int **)&v193, 1048576000);
  SliderComponent::setSliderTimeout(v9, *(float *)&v25);
  v26 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v193 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  sub_DA7364((void **)&v191, "slider_collection_name");
  sub_DA7364((void **)&v190, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v192, (int)v5, (int **)&v191, &v190);
  SliderComponent::setSliderCollectionName((int)v9, &v192);
  v27 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v192 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v190 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v191 - 12);
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v191 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  sub_DA7364((void **)&v188, "slider_name");
  sub_DA7364((void **)&v187, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v189, (int)v5, (int **)&v188, &v187);
  v30 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v187 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v188 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v189);
  v32 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v189);
  SliderComponent::setSliderNameId(v9, v32);
  sub_DA7364((void **)&v185, "slider_box_control");
  sub_DA7364((void **)&v184, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v186, (int)v5, (int **)&v185, &v184);
  v33 = operator new(1u);
  LODWORD(v34) = sub_C7B6A4;
  v182 = v33;
  HIDWORD(v34) = sub_C7B370;
  v183 = v34;
  UIControl::_registerControlNameResolver((int)v4, &v186, 1, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  v35 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v186 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v184 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v185 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  sub_DA7364((void **)&v180, "default_control");
  sub_DA7364((void **)&v179, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v181, (int)v5, (int **)&v180, &v179);
  v38 = operator new(1u);
  LODWORD(v39) = sub_C7B908;
  v177 = v38;
  HIDWORD(v39) = sub_C7B6D4;
  v178 = v39;
  UIControl::_registerControlNameResolver((int)v4, &v181, 1, (int)&v177);
  if ( (_DWORD)v178 )
    ((void (*)(void))v178)();
  v40 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v181 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v179 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v180 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9(v42);
  sub_DA7364((void **)&v175, "hover_control");
  sub_DA7364((void **)&v174, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v176, (int)v5, (int **)&v175, &v174);
  v43 = operator new(1u);
  LODWORD(v44) = sub_C7BB6C;
  v172 = v43;
  HIDWORD(v44) = sub_C7B938;
  v173 = v44;
  UIControl::_registerControlNameResolver((int)v4, &v176, 1, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  v45 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v176 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v174 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v175 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9(v47);
  sub_DA7364((void **)&v170, "background_control");
  sub_DA7364((void **)&v169, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v171, (int)v5, (int **)&v170, &v169);
  v48 = operator new(1u);
  LODWORD(v49) = sub_C7BDD0;
  v167 = v48;
  HIDWORD(v49) = sub_C7BB9C;
  v168 = v49;
  UIControl::_registerControlNameResolver((int)v4, &v171, 1, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  v50 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v171 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v169 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v170 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9(v52);
  sub_DA7364((void **)&v165, "background_hover_control");
  sub_DA7364((void **)&v164, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v166, (int)v5, (int **)&v165, &v164);
  v53 = operator new(1u);
  LODWORD(v54) = sub_C7C034;
  v162 = v53;
  HIDWORD(v54) = sub_C7BE00;
  v163 = v54;
  UIControl::_registerControlNameResolver((int)v4, &v166, 1, (int)&v162);
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  v55 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v166 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v164 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v165 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j_j__ZdlPv_9(v57);
  sub_DA7364((void **)&v160, "progress_control");
  sub_DA7364((void **)&v159, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v161, (int)v5, (int **)&v160, &v159);
  v58 = operator new(1u);
  LODWORD(v59) = sub_C7C298;
  v157 = v58;
  HIDWORD(v59) = sub_C7C064;
  v158 = v59;
  UIControl::_registerControlNameResolver((int)v4, &v161, 1, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  v60 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v161 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v159 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v160 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9(v62);
  sub_DA7364((void **)&v155, "progress_hover_control");
  sub_DA7364((void **)&v154, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v156, (int)v5, (int **)&v155, &v154);
  v63 = operator new(1u);
  LODWORD(v64) = sub_C7C4FC;
  v152 = v63;
  HIDWORD(v64) = sub_C7C2C8;
  v153 = v64;
  UIControl::_registerControlNameResolver((int)v4, &v156, 1, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v65 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v156 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v154 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v155 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v189 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v199 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9(v69);
  v70 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v202 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9(v70);
  v71 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v205 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9(v71);
}


ScrollTrackComponent *__fastcall UIControlFactory::_populateScrollbarComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  ScrollTrackComponent *v4; // r5@1
  ScrollTrackComponent *result; // r0@1
  ScrollTrackComponent *v6; // [sp+4h] [bp-14h]@1

  v3 = a3;
  v4 = (ScrollTrackComponent *)operator new(0x10u);
  ScrollTrackComponent::ScrollTrackComponent(v4, v3);
  v6 = v4;
  UIControl::setComponent<ScrollTrackComponent>(v3, &v6);
  result = v6;
  if ( v6 )
    result = (ScrollTrackComponent *)(*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}


void __fastcall UIControlFactory::_populateControl(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r9@1
  UIControl *v4; // r6@1
  const UIResolvedDef *v5; // r7@1
  __int64 v6; // kr00_8@1
  __int16 v7; // r0@1
  void *v8; // r0@1
  int v9; // r0@2
  void *v10; // r0@2
  int v11; // r0@3
  void *v12; // r0@3
  int v13; // r0@4
  void *v14; // r0@4
  __int16 v15; // r0@5
  void *v16; // r0@5
  __int16 v17; // r0@6
  void *v18; // r0@6
  void *v19; // r0@7
  signed int v20; // r4@9
  __int16 v21; // r0@11
  void *v22; // r0@11
  __int16 v23; // r0@12
  void *v24; // r0@12
  void *v25; // r0@17
  signed int v26; // r4@18
  void *v27; // r0@18
  int v28; // r4@20
  unsigned int *v29; // r0@21
  unsigned int v30; // r1@23
  int v31; // r0@26
  unsigned int *v32; // r2@27
  unsigned int v33; // r1@29
  int v34; // r0@34
  unsigned int *v35; // r2@35
  unsigned int v36; // r1@37
  unsigned int *v37; // r1@43
  unsigned int v38; // r0@45
  unsigned int *v39; // r4@49
  unsigned int v40; // r0@51
  unsigned int *v41; // r2@57
  signed int v42; // r1@59
  unsigned int *v43; // r2@61
  signed int v44; // r1@63
  unsigned int *v45; // r2@65
  signed int v46; // r1@67
  unsigned int *v47; // r2@69
  signed int v48; // r1@71
  unsigned int *v49; // r2@73
  signed int v50; // r1@75
  unsigned int *v51; // r2@77
  signed int v52; // r1@79
  unsigned int *v53; // r2@81
  signed int v54; // r1@83
  unsigned int *v55; // r2@85
  signed int v56; // r1@87
  unsigned int *v57; // r2@89
  signed int v58; // r1@91
  unsigned int *v59; // r2@93
  signed int v60; // r1@95
  unsigned int *v61; // r2@97
  signed int v62; // r1@99
  int v63; // [sp+0h] [bp-A0h]@20
  int v64; // [sp+4h] [bp-9Ch]@20
  int v65; // [sp+Ch] [bp-94h]@18
  int v66; // [sp+10h] [bp-90h]@13
  int v67; // [sp+18h] [bp-88h]@13
  int v68; // [sp+1Ch] [bp-84h]@13
  int v69; // [sp+24h] [bp-7Ch]@12
  int v70; // [sp+2Ch] [bp-74h]@11
  __int64 v71; // [sp+30h] [bp-70h]@7
  int v72; // [sp+3Ch] [bp-64h]@7
  __int64 v73; // [sp+40h] [bp-60h]@7
  int v74; // [sp+4Ch] [bp-54h]@6
  int v75; // [sp+54h] [bp-4Ch]@5
  int v76; // [sp+5Ch] [bp-44h]@4
  int v77; // [sp+64h] [bp-3Ch]@3
  int v78; // [sp+6Ch] [bp-34h]@2
  int v79; // [sp+74h] [bp-2Ch]@1
  char v80; // [sp+78h] [bp-28h]@1
  int v81; // [sp+7Ch] [bp-24h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  UIControl::getParent((UIControl *)&v80, (int)a3);
  v6 = *(_QWORD *)&v80;
  *(_DWORD *)&v80 = 0;
  v81 = 0;
  sub_DA7364((void **)&v79, "visible");
  v7 = UIResolvedDef::getAsBool((int)v5, (int **)&v79, 1);
  UIControl::initializeVisibility(v4, v7);
  v8 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
  {
    v41 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  sub_DA7364((void **)&v78, "enabled");
  v9 = UIResolvedDef::getAsBool((int)v5, (int **)&v78, 1);
  UIControl::setEnabled(v4, v9, 1);
  v10 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v78 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  sub_DA7364((void **)&v77, "layer");
  v11 = UIResolvedDef::getAsInt((int)v5, (int **)&v77, 0);
  UIControl::setLayer(v4, v11);
  v12 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v77 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  sub_DA7364((void **)&v76, "alpha");
  v13 = UIControlFactory::_resolveAnimatedProperty<float>((int)v3, (int)v5, v4, (int **)&v76);
  UIControl::setAlpha(v4, *(float *)&v13);
  v14 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v76 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  sub_DA7364((void **)&v75, "propagate_alpha");
  v15 = UIResolvedDef::getAsBool((int)v5, (int **)&v75, 0);
  UIControl::setPropagateAlpha(v4, v15);
  v16 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v75 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  sub_DA7364((void **)&v74, "clips_children");
  v17 = UIResolvedDef::getAsBool((int)v5, (int **)&v74, 0);
  UIControl::setClipsChildren(v4, v17);
  v18 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v74 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  sub_DA7364((void **)&v72, "clip_offset");
  v71 = 0LL;
  UIResolvedDef::getAsClipOffset(&v73, (int)v5, (int **)&v72, &v71);
  UIControl::setClipOffset((int)v4, &v73);
  v19 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v72 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  if ( (_DWORD)v6 )
    v20 = UIControl::getAllowClipping((UIControl *)v6);
  else
    v20 = 1;
  sub_DA7364((void **)&v70, "allow_clipping");
  v21 = UIResolvedDef::getAsBool((int)v5, (int **)&v70, v20);
  UIControl::setAllowClipping(v4, v21);
  v22 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v70 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v69, "enable_scissor_test");
  v23 = UIResolvedDef::getAsBool((int)v5, (int **)&v69, 0);
  UIControl::setEnableClippingScissorTest(v4, v23);
  v24 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v69 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v67, "property_bag");
  v66 = 0;
  UIResolvedDef::getAsPropertyBag((UIPropertyBag **)&v68, (int)v5, (int **)&v67, (UIPropertyBag **)&v66);
  UIControl::createPropertyBag((int)v4, &v68);
  if ( v68 )
    (*(void (**)(void))(*(_DWORD *)v68 + 4))();
  v68 = 0;
  if ( v66 )
    (*(void (**)(void))(*(_DWORD *)v66 + 4))();
  v25 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v67 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  sub_DA7364((void **)&v65, "selected");
  v26 = UIResolvedDef::getAsBool((int)v5, (int **)&v65, 0);
  v27 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v65 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  if ( v26 == 1 )
    UIControl::weakRef((UIControl *)&v63, (int)v4);
    *((_DWORD *)v3 + 18) = v63;
    v28 = v64;
    if ( v64 )
      v29 = (unsigned int *)(v64 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 + 1, v29) );
      }
      else
        ++*v29;
    v31 = *((_DWORD *)v3 + 19);
    if ( v31 )
      v32 = (unsigned int *)(v31 + 8);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (**)(void))(*(_DWORD *)v31 + 12))();
    *((_DWORD *)v3 + 19) = v28;
    v34 = v64;
      v35 = (unsigned int *)(v64 + 8);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (**)(void))(*(_DWORD *)v34 + 12))();
  if ( HIDWORD(v6) )
    v37 = (unsigned int *)(HIDWORD(v6) + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
      v39 = (unsigned int *)(HIDWORD(v6) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
}


void __fastcall UIControlFactory::_createInputPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createInputPanel(this, a2, a3);
}


void __fastcall UIControlFactory::_populateScreenComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateScreenComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<glm::detail::tvec2<float>>(int a1, int a2, int a3, UIControl *a4, int **a5)
{
  int v5; // r5@1
  int v6; // r11@1
  int v7; // r10@1
  UIControl *v8; // r9@1
  Json::Value *v9; // r7@1
  void *v10; // r0@2
  int v11; // r0@5
  const char *v12; // r0@6
  void *v13; // r0@6
  signed int v14; // r4@7
  _BYTE *v15; // r0@10
  Json::Value *v16; // r0@13
  int v17; // r4@14
  int *v18; // r0@14
  void *v19; // r0@14
  void *v20; // r0@15
  int v21; // r0@16
  const char *v22; // r0@17
  void *v23; // r0@17
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  __int64 v36; // [sp+8h] [bp-100h]@0
  int v37; // [sp+14h] [bp-F4h]@17
  int v38; // [sp+1Ch] [bp-ECh]@14
  int v39; // [sp+24h] [bp-E4h]@14
  char v40; // [sp+28h] [bp-E0h]@14
  int v41; // [sp+74h] [bp-94h]@6
  char v42; // [sp+78h] [bp-90h]@5
  int v43; // [sp+C4h] [bp-44h]@2
  _BYTE *v44; // [sp+C8h] [bp-40h]@2
  int v45; // [sp+CCh] [bp-3Ch]@20
  int v46; // [sp+D0h] [bp-38h]@20
  int v47; // [sp+D4h] [bp-34h]@6
  int v48; // [sp+D8h] [bp-30h]@6
  int v49; // [sp+DCh] [bp-2Ch]@17
  int v50; // [sp+E0h] [bp-28h]@17

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = UIResolvedDef::getValue(a3, a5, 0);
  if ( Json::Value::isString(v9) != 1 )
    goto LABEL_12;
  sub_DA7364((void **)&v43, (const char *)&unk_257BC67);
  Json::Value::asString((int *)&v44, (int)v9, &v43);
  v10 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  if ( !*((_DWORD *)v44 - 3) || *v44 != 64 )
    goto LABEL_9;
  UIResolvedDef::create(
    (int)&v42,
    (unsigned __int64 *)*(_QWORD *)(v6 + 8),
    (unsigned __int64 *)(v6 + 40),
    *(_QWORD *)(v6 + 8) >> 32,
    (int *)(v6 + 20),
    (int *)&v44);
  v11 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v42, v8);
  if ( !v11 )
    UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
LABEL_9:
    v14 = 0;
    goto LABEL_10;
  v12 = (const char *)(*(int (**)(void))(*(_DWORD *)v11 + 12))();
  sub_DA7364((void **)&v41, v12);
  v47 = 0;
  v48 = 0;
  UIResolvedDef::getAsUV(v7, (int)&v42, (int **)&v41, (int)&v47);
  v13 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v41 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v42);
  v14 = 1;
LABEL_10:
  v15 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  if ( !v14 )
LABEL_12:
    if ( Json::Value::isObject(v9) == 1 )
      v16 = (Json::Value *)Json::Value::operator[]((int)v9, "anim_type");
      if ( !Json::Value::isNull(v16) )
      {
        v17 = *(_DWORD *)(v6 + 12);
        sub_DA7364((void **)&v39, (const char *)&unk_257BC67);
        v18 = (int *)sub_DA7364((void **)&v38, (const char *)&unk_257BC67);
        LODWORD(v36) = v9;
        UIResolvedDef::UIResolvedDef((int)&v40, v6 + 40, v17, &v39, v18, (int)v9, v36);
        v19 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
        {
          v28 = (unsigned int *)(v38 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9(v19);
        }
        v20 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v39 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9(v20);
        v21 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v6, (const UIResolvedDef *)&v40, v8);
        if ( v21 )
          v22 = (const char *)(*(int (**)(void))(*(_DWORD *)v21 + 12))();
          sub_DA7364((void **)&v37, v22);
          v49 = 0;
          v50 = 0;
          UIResolvedDef::getAsUV(v7, (int)&v40, (int **)&v37, (int)&v49);
          v23 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v37 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
            }
            else
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j_j__ZdlPv_9(v23);
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
          return;
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v40);
      }
    v45 = 0;
    v46 = 0;
    UIResolvedDef::getAsUV(v7, v5, a5, (int)&v45);
}


void __fastcall UIControlFactory::_createFactory(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createFactory(this, a2, a3);
}


void __fastcall UIControlFactory::_createLabel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{label}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateTextComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_createImage(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{image}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSpriteComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_populateButtonComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  const UIResolvedDef *v4; // r5@1
  UIComponent *v5; // r6@1
  void *v6; // r0@3
  __int64 v7; // r1@3
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  __int64 v12; // r1@8
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  __int64 v17; // r1@13
  void *v18; // r0@15
  void *v19; // r0@16
  void *v20; // r0@17
  void *v21; // r0@18
  __int64 v22; // r1@18
  void *v23; // r0@20
  void *v24; // r0@21
  void *v25; // r0@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  unsigned int *v32; // r2@36
  signed int v33; // r1@38
  unsigned int *v34; // r2@40
  signed int v35; // r1@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  unsigned int *v38; // r2@48
  signed int v39; // r1@50
  unsigned int *v40; // r2@52
  signed int v41; // r1@54
  unsigned int *v42; // r2@56
  signed int v43; // r1@58
  unsigned int *v44; // r2@60
  signed int v45; // r1@62
  unsigned int *v46; // r2@64
  signed int v47; // r1@66
  unsigned int *v48; // r2@68
  signed int v49; // r1@70
  void *v50; // [sp+0h] [bp-A8h]@18
  __int64 v51; // [sp+8h] [bp-A0h]@18
  int v52; // [sp+14h] [bp-94h]@18
  int v53; // [sp+1Ch] [bp-8Ch]@18
  int v54; // [sp+20h] [bp-88h]@18
  void *v55; // [sp+24h] [bp-84h]@13
  __int64 v56; // [sp+2Ch] [bp-7Ch]@13
  int v57; // [sp+38h] [bp-70h]@13
  int v58; // [sp+40h] [bp-68h]@13
  int v59; // [sp+44h] [bp-64h]@13
  void *v60; // [sp+48h] [bp-60h]@8
  __int64 v61; // [sp+50h] [bp-58h]@8
  int v62; // [sp+5Ch] [bp-4Ch]@8
  int v63; // [sp+64h] [bp-44h]@8
  int v64; // [sp+68h] [bp-40h]@8
  void *v65; // [sp+6Ch] [bp-3Ch]@3
  __int64 v66; // [sp+74h] [bp-34h]@3
  int v67; // [sp+80h] [bp-28h]@3
  int v68; // [sp+88h] [bp-20h]@3
  int v69; // [sp+8Ch] [bp-1Ch]@3
  UIComponent *v70; // [sp+90h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = (UIComponent *)operator new(0x2Cu);
  ButtonComponent::ButtonComponent(v5, v3);
  v70 = v5;
  UIControl::setComponent<ButtonComponent>(v3, &v70);
  if ( v70 )
    (*(void (**)(void))(*(_DWORD *)v70 + 4))();
  v70 = 0;
  sub_DA7364((void **)&v68, "default_control");
  sub_DA7364((void **)&v67, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v69, (int)v4, (int **)&v68, &v67);
  v6 = operator new(1u);
  LODWORD(v7) = sub_C76990;
  v65 = v6;
  HIDWORD(v7) = sub_C7675C;
  v66 = v7;
  UIControl::_registerControlNameResolver((int)v3, &v69, 1, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v8 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v67 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v68 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  sub_DA7364((void **)&v63, "hover_control");
  sub_DA7364((void **)&v62, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v64, (int)v4, (int **)&v63, &v62);
  v11 = operator new(1u);
  LODWORD(v12) = sub_C76BF4;
  v60 = v11;
  HIDWORD(v12) = sub_C769C0;
  v61 = v12;
  UIControl::_registerControlNameResolver((int)v3, &v64, 1, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  v13 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v64 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v62 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v63 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  sub_DA7364((void **)&v58, "pressed_control");
  sub_DA7364((void **)&v57, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v59, (int)v4, (int **)&v58, &v57);
  v16 = operator new(1u);
  LODWORD(v17) = sub_C76E58;
  v55 = v16;
  HIDWORD(v17) = sub_C76C24;
  v56 = v17;
  UIControl::_registerControlNameResolver((int)v3, &v59, 1, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v18 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v59 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v57 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v58 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v53, "locked_control");
  sub_DA7364((void **)&v52, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v54, (int)v4, (int **)&v53, &v52);
  v21 = operator new(1u);
  LODWORD(v22) = sub_C770BC;
  v50 = v21;
  HIDWORD(v22) = sub_C76E88;
  v51 = v22;
  UIControl::_registerControlNameResolver((int)v3, &v54, 1, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v23 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v54 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v52 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v53 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
}


void __fastcall UIControlFactory::_createFromResolvedDef(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  UIControlFactory::_createFromResolvedDef(a1, (UIControlFactory *)a2, (const UIResolvedDef *)a3, a4, a5, a6, a7);
}


void __fastcall UIControlFactory::_populateAnchoredOffsetComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r5@1
  UIControl *v4; // r6@1
  signed int v5; // r5@1
  void *v6; // r0@1
  UIComponent *v7; // r5@3
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  UIComponent *v10; // [sp+4h] [bp-24h]@3
  int v11; // [sp+Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  sub_DA7364((void **)&v11, "use_anchored_offset");
  v5 = UIResolvedDef::getAsBool((int)v3, (int **)&v11, 0);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 )
    v7 = (UIComponent *)operator new(0xCu);
    AnchoredOffsetComponent::AnchoredOffsetComponent(v7, v4);
    v10 = v7;
    UIControl::setComponent<AnchoredOffsetComponent>(v4, &v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v10 = 0;
}


void __fastcall UIControlFactory::_populateScrollViewComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r7@1
  UIControl *v4; // r8@1
  const UIResolvedDef *v5; // r4@1
  UIComponent *v6; // r5@1
  char v7; // r0@3
  int v8; // r5@6
  ScrollViewComponent *v9; // r5@7
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  __int16 v14; // r0@13
  __int16 v15; // r0@13
  __int16 v16; // r0@13
  __int16 v17; // r0@13
  __int16 v18; // r0@13
  int v19; // r0@13
  void *v20; // r0@13
  char v21; // r0@14
  void *v22; // r0@14
  char v23; // r0@15
  void *v24; // r0@15
  char v25; // r0@16
  void *v26; // r0@16
  void *v27; // r0@17
  __int64 v28; // r1@17
  void *v29; // r0@19
  void *v30; // r0@20
  void *v31; // r0@21
  void *v32; // r0@22
  __int64 v33; // r1@22
  void *v34; // r0@24
  void *v35; // r0@25
  void *v36; // r0@26
  void *v37; // r0@27
  __int64 v38; // r1@27
  void *v39; // r0@29
  void *v40; // r0@30
  void *v41; // r0@31
  void *v42; // r0@32
  __int64 v43; // r1@32
  void *v44; // r0@34
  void *v45; // r0@35
  void *v46; // r0@36
  void *v47; // r0@37
  __int64 v48; // r1@37
  void *v49; // r0@39
  void *v50; // r0@40
  void *v51; // r0@41
  char v52; // r0@42
  void *v53; // r0@42
  void *v54; // r0@43
  void *v55; // r0@44
  void *v56; // r0@45
  void *v57; // r0@46
  void *v58; // r0@47
  unsigned int *v59; // r2@49
  signed int v60; // r1@51
  unsigned int *v61; // r2@53
  signed int v62; // r1@55
  unsigned int *v63; // r2@57
  signed int v64; // r1@59
  unsigned int *v65; // r2@61
  signed int v66; // r1@63
  unsigned int *v67; // r2@65
  signed int v68; // r1@67
  unsigned int *v69; // r2@69
  signed int v70; // r1@71
  unsigned int *v71; // r2@73
  signed int v72; // r1@75
  unsigned int *v73; // r2@77
  signed int v74; // r1@79
  unsigned int *v75; // r2@81
  signed int v76; // r1@83
  unsigned int *v77; // r2@85
  signed int v78; // r1@87
  unsigned int *v79; // r2@89
  signed int v80; // r1@91
  unsigned int *v81; // r2@93
  signed int v82; // r1@95
  unsigned int *v83; // r2@97
  signed int v84; // r1@99
  unsigned int *v85; // r2@101
  signed int v86; // r1@103
  unsigned int *v87; // r2@105
  signed int v88; // r1@107
  unsigned int *v89; // r2@109
  signed int v90; // r1@111
  unsigned int *v91; // r2@113
  signed int v92; // r1@115
  unsigned int *v93; // r2@117
  signed int v94; // r1@119
  unsigned int *v95; // r2@121
  signed int v96; // r1@123
  unsigned int *v97; // r2@125
  signed int v98; // r1@127
  unsigned int *v99; // r2@129
  signed int v100; // r1@131
  unsigned int *v101; // r2@133
  signed int v102; // r1@135
  unsigned int *v103; // r2@137
  signed int v104; // r1@139
  unsigned int *v105; // r2@141
  signed int v106; // r1@143
  unsigned int *v107; // r2@145
  signed int v108; // r1@147
  unsigned int *v109; // r2@149
  signed int v110; // r1@151
  unsigned int *v111; // r2@153
  signed int v112; // r1@155
  unsigned int *v113; // r2@157
  signed int v114; // r1@159
  unsigned int *v115; // r2@161
  signed int v116; // r1@163
  int v117; // [sp+8h] [bp-138h]@42
  void *v118; // [sp+Ch] [bp-134h]@37
  __int64 v119; // [sp+14h] [bp-12Ch]@37
  int v120; // [sp+20h] [bp-120h]@37
  int v121; // [sp+28h] [bp-118h]@37
  int v122; // [sp+2Ch] [bp-114h]@37
  void *v123; // [sp+30h] [bp-110h]@32
  __int64 v124; // [sp+38h] [bp-108h]@32
  int v125; // [sp+44h] [bp-FCh]@32
  int v126; // [sp+4Ch] [bp-F4h]@32
  int v127; // [sp+50h] [bp-F0h]@32
  void *v128; // [sp+54h] [bp-ECh]@27
  __int64 v129; // [sp+5Ch] [bp-E4h]@27
  int v130; // [sp+68h] [bp-D8h]@27
  int v131; // [sp+70h] [bp-D0h]@27
  int v132; // [sp+74h] [bp-CCh]@27
  void *v133; // [sp+78h] [bp-C8h]@22
  __int64 v134; // [sp+80h] [bp-C0h]@22
  int v135; // [sp+8Ch] [bp-B4h]@22
  int v136; // [sp+94h] [bp-ACh]@22
  int v137; // [sp+98h] [bp-A8h]@22
  void *v138; // [sp+9Ch] [bp-A4h]@17
  __int64 v139; // [sp+A4h] [bp-9Ch]@17
  int v140; // [sp+B0h] [bp-90h]@17
  int v141; // [sp+B8h] [bp-88h]@17
  int v142; // [sp+BCh] [bp-84h]@17
  int v143; // [sp+C4h] [bp-7Ch]@16
  int v144; // [sp+CCh] [bp-74h]@15
  int v145; // [sp+D4h] [bp-6Ch]@14
  int v146; // [sp+DCh] [bp-64h]@13
  int v147; // [sp+E4h] [bp-5Ch]@13
  int v148; // [sp+ECh] [bp-54h]@13
  int v149; // [sp+F4h] [bp-4Ch]@13
  int v150; // [sp+FCh] [bp-44h]@11
  int v151; // [sp+104h] [bp-3Ch]@11
  int v152; // [sp+108h] [bp-38h]@11
  int v153; // [sp+110h] [bp-30h]@9
  int v154; // [sp+118h] [bp-28h]@9
  int v155; // [sp+11Ch] [bp-24h]@9
  UIComponent *v156; // [sp+120h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x9Cu);
  ScrollViewComponent::ScrollViewComponent(v6, v4);
  v156 = v6;
  UIControl::setComponent<ScrollViewComponent>(v4, &v156);
  if ( v156 )
    (*(void (**)(void))(*(_DWORD *)v156 + 4))();
  v156 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
  {
    type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
  }
  v8 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
    v9 = *(ScrollViewComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v154, "scrollbar_track_button");
  sub_DA7364((void **)&v153, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v155, (int)v5, (int **)&v154, &v153);
  v10 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v153 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
    }
    else
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v154 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  sub_DA7364((void **)&v151, "scrollbar_touch_button");
  sub_DA7364((void **)&v150, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v152, (int)v5, (int **)&v151, &v150);
  v12 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v150 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v151 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v149, "scrollbar.active");
  sub_DA7364((void **)&v148, "scrollbar.released");
  sub_DA7364((void **)&v147, "scrollbar.hitBottom");
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v155);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v152);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v149);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v148);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v147);
  v14 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v149);
  ScrollViewComponent::setScrollbarActiveEventId(v9, v14);
  v15 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v148);
  ScrollViewComponent::setScrollbarReleasedEventId(v9, v15);
  v16 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v155);
  ScrollViewComponent::setScrollbarBoxTrackButton(v9, v16);
  v17 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v152);
  ScrollViewComponent::setScrollbarTouchButton(v9, v17);
  v18 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v147);
  ScrollViewComponent::setScrollBarBottomEventId(v9, v18);
  sub_DA7364((void **)&v146, "scroll_speed");
  v19 = UIResolvedDef::getAsFloat((int)v5, (int **)&v146, 1065353216);
  ScrollViewComponent::setScrollSpeed(v9, *(float *)&v19);
  v20 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v146 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v145, "gesture_control_enabled");
  v21 = UIResolvedDef::getAsBool((int)v5, (int **)&v145, 0);
  ScrollViewComponent::setGestureControlMode(v9, v21);
  v22 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v145 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v144, "always_handle_scrolling");
  v23 = UIResolvedDef::getAsBool((int)v5, (int **)&v144, 0);
  ScrollViewComponent::setAlwaysHandleScrolling(v9, v23);
  v24 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v144 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v143, "touch_mode");
  v25 = UIResolvedDef::getAsBool((int)v5, (int **)&v143, 0);
  ScrollViewComponent::setTouchMode(v9, v25);
  v26 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v143 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  sub_DA7364((void **)&v141, "scrollbar_box");
  sub_DA7364((void **)&v140, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v142, (int)v5, (int **)&v141, &v140);
  v27 = operator new(1u);
  LODWORD(v28) = sub_C7A8B4;
  v138 = v27;
  HIDWORD(v28) = sub_C7A584;
  v139 = v28;
  UIControl::_registerControlNameResolver((int)v4, &v142, 1, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  v29 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v142 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v140 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v141 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  sub_DA7364((void **)&v136, "scrollbar_track");
  sub_DA7364((void **)&v135, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v137, (int)v5, (int **)&v136, &v135);
  v32 = operator new(1u);
  LODWORD(v33) = sub_C7AC14;
  v133 = v32;
  HIDWORD(v33) = sub_C7A8E4;
  v134 = v33;
  UIControl::_registerControlNameResolver((int)v4, &v137, 1, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  v34 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v137 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v135 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v136 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  sub_DA7364((void **)&v131, "scroll_view_port");
  sub_DA7364((void **)&v130, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v132, (int)v5, (int **)&v131, &v130);
  v37 = operator new(1u);
  LODWORD(v38) = sub_C7AE78;
  v128 = v37;
  HIDWORD(v38) = sub_C7AC44;
  v129 = v38;
  UIControl::_registerControlNameResolver((int)v4, &v132, 1, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v39 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v132 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v130 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v131 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9(v41);
  sub_DA7364((void **)&v126, "scroll_content");
  sub_DA7364((void **)&v125, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v127, (int)v5, (int **)&v126, &v125);
  v42 = operator new(1u);
  LODWORD(v43) = sub_C7B0DC;
  v123 = v42;
  HIDWORD(v43) = sub_C7AEA8;
  v124 = v43;
  UIControl::_registerControlNameResolver((int)v4, &v127, 1, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  v44 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v127 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v125 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v126 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9(v46);
  sub_DA7364((void **)&v121, "scroll_box_and_track_panel");
  sub_DA7364((void **)&v120, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v122, (int)v5, (int **)&v121, &v120);
  v47 = operator new(1u);
  LODWORD(v48) = sub_C7B340;
  v118 = v47;
  HIDWORD(v48) = sub_C7B10C;
  v119 = v48;
  UIControl::_registerControlNameResolver((int)v4, &v122, 1, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  v49 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v122 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v120 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v121 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9(v51);
  sub_DA7364((void **)&v117, "jump_to_bottom_on_update");
  v52 = UIResolvedDef::getAsBool((int)v5, (int **)&v117, 0);
  ScrollViewComponent::setJumpToBottomOnUpdate(v9, v52);
  v53 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v117 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v147 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v148 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v149 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v152 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v155 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
}


void __fastcall UIControlFactory::_postCreate(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_postCreate(this, a2, a3);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<glm::detail::tvec2<float>>(int a1, int a2, int a3, UIControl *a4, int **a5)
{
  UIControlFactory::_resolveAnimatedProperty<glm::detail::tvec2<float>>(a1, a2, a3, a4, a5);
}


void __fastcall UIControlFactory::_postCreate(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  const UIResolvedDef *v3; // r5@1
  UIControlFactory *v4; // r6@1
  UIControl *v5; // r4@1
  char v6; // r0@2
  int v7; // r7@5
  GridComponent *v8; // r0@6
  UIControlFactory *v9; // r0@8
  UIControlFactory *v10; // r0@8
  UIControlFactory *v11; // r0@8
  const UIResolvedDef *v12; // r1@8
  UIControlFactory *v13; // r0@8

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( UIResolvedDef::getDefType(a3) == 5 )
  {
    v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
    __dmb();
    if ( !(v6 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    {
      type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
    }
    v7 = type_id<UIComponent,GridComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
      v8 = *(GridComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7));
      if ( v8 )
        GridComponent::refreshGridItems(v8);
  }
  UIControlFactory::_populateAnimations(v4, v3, v5);
  UIControlFactory::_populateDebugRendererComponent(v9, v3, v5);
  UIControlFactory::_populateFactoryComponent(v4, v3, v5);
  v11 = (UIControlFactory *)UIControlFactory::_populateGridItemComponent(v10, v3, v5);
  UIControlFactory::_populateCollectionItemComponent(v11, v12, v5);
  UIControlFactory::_populateToggleGroupManagerComponent(v4, v3, v5);
  UIControlFactory::_populateSliderGroupManagerComponent(v4, v3, v5);
  j_j_j__ZN16UIControlFactory32_populateAnchoredOffsetComponentERK13UIResolvedDefR9UIControl(v13, v3, v5);
}


void __fastcall UIControlFactory::_populateGridComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r8@1
  UIControl *v4; // r9@1
  __int64 v5; // r6@1
  const UIResolvedDef *v6; // r10@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r4@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  UIComponent *v11; // r5@7
  unsigned int *v12; // r6@7
  unsigned int v13; // r0@9
  int v14; // r0@12
  unsigned int *v15; // r2@13
  unsigned int v16; // r1@15
  unsigned int v17; // r0@24
  unsigned int v18; // r0@30
  char v19; // r0@35
  int v20; // r5@38
  GridComponent *v21; // r11@39
  void *v22; // r0@41
  int v23; // r5@42
  void *v24; // r0@42
  void *v25; // r0@43
  void *v26; // r0@44
  void *v27; // r0@45
  void *v28; // r0@46
  void *v29; // r0@47
  void *v30; // r0@48
  void *v31; // r0@49
  void *v32; // r0@50
  int v33; // r0@51
  void *v34; // r0@51
  void *v35; // r0@52
  void *v36; // r0@53
  int v37; // r1@54
  int v38; // r0@55
  __int64 v39; // kr00_8@55
  int v40; // r4@56
  int v41; // r7@57
  unsigned int *v42; // r1@58
  unsigned int v43; // r0@60
  unsigned int *v44; // r5@64
  unsigned int v45; // r0@66
  unsigned int *v46; // r0@73
  unsigned int v47; // r1@75
  int v48; // r4@78
  unsigned int *v49; // r1@79
  unsigned int v50; // r0@81
  unsigned int *v51; // r5@85
  unsigned int v52; // r0@87
  int v53; // r4@92
  unsigned int *v54; // r1@93
  unsigned int v55; // r0@95
  unsigned int *v56; // r5@99
  unsigned int v57; // r0@101
  void *v58; // r0@107
  unsigned int *v59; // r2@109
  signed int v60; // r1@111
  unsigned int *v61; // r2@113
  signed int v62; // r1@115
  unsigned int *v63; // r2@117
  signed int v64; // r1@119
  unsigned int *v65; // r2@121
  signed int v66; // r1@123
  unsigned int *v67; // r2@125
  signed int v68; // r1@127
  unsigned int *v69; // r2@129
  signed int v70; // r1@131
  unsigned int *v71; // r2@133
  signed int v72; // r1@135
  unsigned int *v73; // r2@137
  signed int v74; // r1@139
  unsigned int *v75; // r2@141
  signed int v76; // r1@143
  unsigned int *v77; // r2@145
  signed int v78; // r1@147
  unsigned int *v79; // r2@149
  signed int v80; // r1@151
  unsigned int *v81; // r2@153
  signed int v82; // r1@155
  unsigned int *v83; // r2@157
  signed int v84; // r1@159
  unsigned int *v85; // r2@161
  signed int v86; // r1@163
  int v87; // [sp+10h] [bp-C0h]@72
  int v88; // [sp+14h] [bp-BCh]@72
  int v89; // [sp+18h] [bp-B8h]@55
  int v90; // [sp+1Ch] [bp-B4h]@72
  int v91; // [sp+24h] [bp-ACh]@52
  int v92; // [sp+2Ch] [bp-A4h]@52
  int v93; // [sp+30h] [bp-A0h]@52
  int v94; // [sp+38h] [bp-98h]@51
  int v95; // [sp+40h] [bp-90h]@50
  int v96; // [sp+44h] [bp-8Ch]@50
  int v97; // [sp+4Ch] [bp-84h]@49
  int v98; // [sp+50h] [bp-80h]@49
  int v99; // [sp+58h] [bp-78h]@46
  int v100; // [sp+60h] [bp-70h]@46
  int v101; // [sp+64h] [bp-6Ch]@46
  int v102; // [sp+6Ch] [bp-64h]@43
  int v103; // [sp+74h] [bp-5Ch]@43
  int v104; // [sp+78h] [bp-58h]@43
  int v105; // [sp+80h] [bp-50h]@42
  int v106; // [sp+84h] [bp-4Ch]@41
  int v107; // [sp+88h] [bp-48h]@41
  int v108; // [sp+90h] [bp-40h]@41
  char v109; // [sp+94h] [bp-3Ch]@41
  UIComponent *v110; // [sp+9Ch] [bp-34h]@12
  __int64 v111; // [sp+A0h] [bp-30h]@7

  v3 = this;
  v4 = a3;
  HIDWORD(v5) = *((_DWORD *)this + 1);
  v6 = a2;
  if ( !HIDWORD(v5) )
    std::__throw_bad_weak_ptr();
  v7 = *(_DWORD *)(HIDWORD(v5) + 4);
  v8 = (unsigned int *)(HIDWORD(v5) + 4);
  do
  {
    while ( 1 )
    {
      if ( !v7 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
        break;
      __clrex();
      v7 = v9;
    }
    v10 = __strex(v7 + 1, v8);
    v7 = v9;
  }
  while ( v10 );
  __dmb();
  LODWORD(v5) = *(_DWORD *)v3;
  v11 = (UIComponent *)operator new(0x48u);
  v111 = v5;
  v12 = (unsigned int *)(HIDWORD(v5) + 8);
  if ( &pthread_create )
    __dmb();
    do
      v13 = __ldrex(v12);
    while ( __strex(v13 + 1, v12) );
  else
    ++*v12;
  GridComponent::GridComponent(v11, v4, (int)&v111);
  v14 = HIDWORD(v111);
  v110 = v11;
  if ( HIDWORD(v111) )
    v15 = (unsigned int *)(HIDWORD(v111) + 8);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  UIControl::setComponent<GridComponent>(v4, &v110);
  if ( v110 )
    (*(void (**)(void))(*(_DWORD *)v110 + 4))();
  v110 = 0;
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 8))(HIDWORD(v5));
        v18 = __ldrex(v12);
      while ( __strex(v18 - 1, v12) );
      v18 = (*v12)--;
    if ( v18 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  v19 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  if ( !(v19 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v20 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v21 = *(GridComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v20));
    v21 = 0;
  sub_DA7364((void **)&v108, "grid_dimensions");
  v106 = 0;
  v107 = 0;
  UIResolvedDef::getAsGridSize((int)&v109, (int)v6, (int **)&v108, (int)&v106);
  v22 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v108 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v105, "maximum_grid_items");
  v23 = UIResolvedDef::getAsInt((int)v6, (int **)&v105, 0);
  v24 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v105 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  GridComponent::setGridDimensions((int)v21, (int)&v109);
  GridComponent::setMaximumGridItems(v21, v23);
  sub_DA7364((void **)&v103, "grid_dimension_binding");
  sub_DA7364((void **)&v102, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v104, (int)v6, (int **)&v103, &v102);
  GridComponent::setGridDimensionBinding((int)v21, &v104);
  v25 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v104 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v102 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v103 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  sub_DA7364((void **)&v100, "collection_name");
  sub_DA7364((void **)&v99, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v101, (int)v6, (int **)&v100, &v99);
  GridComponent::setCollectionName((int)v21, &v101);
  v28 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v101 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v99 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v100 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  sub_DA7364((void **)&v97, "grid_rescaling_type");
  v98 = UIResolvedDef::getAsOrientation((int)v6, (int **)&v97, 2);
  GridComponent::setGridRescalingType((int)v21, &v98);
  v31 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v97 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  sub_DA7364((void **)&v95, "grid_fill_direction");
  v96 = UIResolvedDef::getAsOrientation((int)v6, (int **)&v95, 2);
  GridComponent::setGridFillDirection((int)v21, &v96);
  v32 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v95 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  sub_DA7364((void **)&v94, "precached_grid_item_count");
  v33 = UIResolvedDef::getAsInt((int)v6, (int **)&v94, 0);
  GridComponent::setPrecachedGridItemCount(v21, v33);
  v34 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v94 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  GridComponent::setLowMemoryMode(v21, *((_BYTE *)v3 + 68));
  sub_DA7364((void **)&v92, "grid_item_template");
  sub_DA7364((void **)&v91, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v93, (int)v6, (int **)&v92, &v91);
  v35 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v91 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v92 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = v93;
  if ( *(_DWORD *)(v93 - 12) )
    v38 = UIControl::getScreenAction(v4, 1);
    UIControlFactory::createControlTree((int)&v89, (int)v3, (int)&v93, v38, (int)v4, 1, 0, 1);
    v39 = *(_QWORD *)((char *)v4 + 92);
    if ( HIDWORD(v39) != (_DWORD)v39 )
      v40 = *(_QWORD *)((char *)v4 + 92);
      {
        v41 = *(_DWORD *)(v40 + 4);
        if ( v41 )
        {
          v42 = (unsigned int *)(v41 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
          }
          else
            v43 = (*v42)--;
          if ( v43 == 1 )
            v44 = (unsigned int *)(v41 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
            if ( &pthread_create )
            {
              __dmb();
              do
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
            }
            else
              v45 = (*v44)--;
            if ( v45 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
        }
        v40 += 8;
      }
      while ( v40 != HIDWORD(v39) );
    *((_DWORD *)v4 + 24) = v39;
    v87 = v89;
    v88 = v90;
    if ( v90 )
      v46 = (unsigned int *)(v90 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 + 1, v46) );
      else
        ++*v46;
    GridComponent::setGridItemTemplate((int)v21, (int)&v87);
    v48 = v88;
    if ( v88 )
      v49 = (unsigned int *)(v88 + 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        v51 = (unsigned int *)(v48 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
        if ( &pthread_create )
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        else
          v52 = (*v51)--;
        if ( v52 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
    v53 = v90;
      v54 = (unsigned int *)(v90 + 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 == 1 )
        v56 = (unsigned int *)(v53 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
    v37 = v93;
  v58 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v37 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
}


void __fastcall UIControlFactory::_populateSliderGroupManagerComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateSliderGroupManagerComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createToggle(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createToggle(this, a2, a3);
}


int __fastcall UIControlFactory::_resolveAnimatedProperty<float>(int a1, int a2, UIControl *a3, int **a4)
{
  int **v4; // r10@1
  int v5; // r5@1
  UIControl *v6; // r8@1
  int v7; // r9@1
  Json::Value *v8; // r6@1
  void *v9; // r0@2
  int v10; // r0@5
  const char *v11; // r0@6
  void *v13; // r0@6
  signed int v18; // r7@7
  _BYTE *v19; // r0@10
  Json::Value *v20; // r0@13
  int v21; // r7@14
  int *v22; // r0@14
  void *v23; // r0@14
  void *v24; // r0@15
  int v25; // r0@16
  const char *v26; // r0@17
  void *v28; // r0@17
  int result; // r0@21
  unsigned int *v31; // r2@22
  signed int v32; // r1@24
  unsigned int *v33; // r2@26
  signed int v34; // r1@28
  unsigned int *v35; // r2@38
  signed int v36; // r1@40
  unsigned int *v37; // r2@42
  signed int v38; // r1@44
  unsigned int *v39; // r2@46
  signed int v40; // r1@48
  unsigned int *v41; // r2@50
  signed int v42; // r1@52
  __int64 v43; // [sp+8h] [bp-F0h]@0
  int v44; // [sp+14h] [bp-E4h]@17
  int v45; // [sp+1Ch] [bp-DCh]@14
  int v46; // [sp+24h] [bp-D4h]@14
  char v47; // [sp+28h] [bp-D0h]@14
  int v48; // [sp+74h] [bp-84h]@6
  char v49; // [sp+78h] [bp-80h]@5
  int v50; // [sp+C4h] [bp-34h]@2
  _BYTE *v51; // [sp+C8h] [bp-30h]@2

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = UIResolvedDef::getValue(a2, a4, 0);
  if ( Json::Value::isString(v8) != 1 )
    goto LABEL_12;
  sub_DA7364((void **)&v50, (const char *)&unk_257BC67);
  Json::Value::asString((int *)&v51, (int)v8, &v50);
  v9 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  if ( !*((_DWORD *)v51 - 3) || *v51 != 64 )
    goto LABEL_9;
  UIResolvedDef::create(
    (int)&v49,
    (unsigned __int64 *)*(_QWORD *)(v7 + 8),
    (unsigned __int64 *)(v7 + 40),
    *(_QWORD *)(v7 + 8) >> 32,
    (int *)(v7 + 20),
    (int *)&v51);
  v10 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v7, (const UIResolvedDef *)&v49, v6);
  if ( !v10 )
    UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v49);
LABEL_9:
    v18 = 0;
    goto LABEL_10;
  v11 = (const char *)(*(int (**)(void))(*(_DWORD *)v10 + 12))();
  sub_DA7364((void **)&v48, v11);
  _R7 = UIResolvedDef::getAsFloat((int)&v49, (int **)&v48, 1065353216);
  v13 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v48 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  __asm { VMOV            S16, R7 }
  UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v49);
  v18 = 1;
LABEL_10:
  v19 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v51 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  if ( !v18 )
LABEL_12:
    if ( Json::Value::isObject(v8) == 1 )
      v20 = (Json::Value *)Json::Value::operator[]((int)v8, "anim_type");
      if ( !Json::Value::isNull(v20) )
      {
        v21 = *(_DWORD *)(v7 + 12);
        sub_DA7364((void **)&v46, (const char *)&unk_257BC67);
        v22 = (int *)sub_DA7364((void **)&v45, (const char *)&unk_257BC67);
        LODWORD(v43) = v8;
        UIResolvedDef::UIResolvedDef((int)&v47, v7 + 40, v21, &v46, v22, (int)v8, v43);
        v23 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
        {
          v35 = (unsigned int *)(v45 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j_j__ZdlPv_9(v23);
        }
        v24 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v46 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9(v24);
        v25 = UIControlFactory::_addAnimToComponent((UIControlFactory *)v7, (const UIResolvedDef *)&v47, v6);
        if ( v25 )
          v26 = (const char *)(*(int (**)(void))(*(_DWORD *)v25 + 12))();
          sub_DA7364((void **)&v44, v26);
          _R4 = UIResolvedDef::getAsFloat((int)&v47, (int **)&v44, 1065353216);
          v28 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
            v39 = (unsigned int *)(v44 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
            }
            else
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j_j__ZdlPv_9(v28);
          __asm { VMOV            S16, R4 }
          UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v47);
          goto LABEL_21;
        UIResolvedDef::~UIResolvedDef((UIResolvedDef *)&v47);
      }
    _R0 = UIResolvedDef::getAsFloat(v5, v4, 1065353216);
    __asm { VMOV            S16, R0 }
LABEL_21:
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall UIControlFactory::_populateGridComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateGridComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateLayoutComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateLayoutComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSliderBoxComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  const UIResolvedDef *v4; // r5@1
  UIComponent *v5; // r6@1
  void *v6; // r0@3
  __int64 v7; // r1@3
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  __int64 v12; // r1@8
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  __int64 v17; // r1@13
  void *v18; // r0@15
  void *v19; // r0@16
  void *v20; // r0@17
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  unsigned int *v23; // r2@23
  signed int v24; // r1@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  unsigned int *v27; // r2@31
  signed int v28; // r1@33
  unsigned int *v29; // r2@35
  signed int v30; // r1@37
  unsigned int *v31; // r2@39
  signed int v32; // r1@41
  unsigned int *v33; // r2@43
  signed int v34; // r1@45
  unsigned int *v35; // r2@47
  signed int v36; // r1@49
  unsigned int *v37; // r2@51
  signed int v38; // r1@53
  void *v39; // [sp+4h] [bp-84h]@13
  __int64 v40; // [sp+Ch] [bp-7Ch]@13
  int v41; // [sp+18h] [bp-70h]@13
  int v42; // [sp+20h] [bp-68h]@13
  int v43; // [sp+24h] [bp-64h]@13
  void *v44; // [sp+28h] [bp-60h]@8
  __int64 v45; // [sp+30h] [bp-58h]@8
  int v46; // [sp+3Ch] [bp-4Ch]@8
  int v47; // [sp+44h] [bp-44h]@8
  int v48; // [sp+48h] [bp-40h]@8
  void *v49; // [sp+4Ch] [bp-3Ch]@3
  __int64 v50; // [sp+54h] [bp-34h]@3
  int v51; // [sp+60h] [bp-28h]@3
  int v52; // [sp+68h] [bp-20h]@3
  int v53; // [sp+6Ch] [bp-1Ch]@3
  UIComponent *v54; // [sp+70h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = (UIComponent *)operator new(0x2Cu);
  SliderBoxComponent::SliderBoxComponent(v5, v3);
  v54 = v5;
  UIControl::setComponent<SliderBoxComponent>(v3, &v54);
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v54 = 0;
  sub_DA7364((void **)&v52, "default_control");
  sub_DA7364((void **)&v51, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v53, (int)v4, (int **)&v52, &v51);
  v6 = operator new(1u);
  LODWORD(v7) = sub_C7C760;
  v49 = v6;
  HIDWORD(v7) = sub_C7C52C;
  v50 = v7;
  UIControl::_registerControlNameResolver((int)v3, &v53, 1, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  v8 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v51 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v52 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  sub_DA7364((void **)&v47, "hover_control");
  sub_DA7364((void **)&v46, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v48, (int)v4, (int **)&v47, &v46);
  v11 = operator new(1u);
  LODWORD(v12) = sub_C7C9C4;
  v44 = v11;
  HIDWORD(v12) = sub_C7C790;
  v45 = v12;
  UIControl::_registerControlNameResolver((int)v3, &v48, 1, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v13 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v48 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v46 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  sub_DA7364((void **)&v42, "locked_control");
  sub_DA7364((void **)&v41, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v43, (int)v4, (int **)&v42, &v41);
  v16 = operator new(1u);
  LODWORD(v17) = sub_C7CC28;
  v39 = v16;
  HIDWORD(v17) = sub_C7C9F4;
  v40 = v17;
  UIControl::_registerControlNameResolver((int)v3, &v43, 1, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  v18 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v43 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v41 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v42 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
}


int __fastcall UIControlFactory::getInitSelectedControl(int result, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r12@2
  unsigned int v5; // lr@5
  unsigned int v6; // r2@6
  int v7; // r2@7
  int v8; // r3@8
  signed int v9; // r2@8
  int v10; // r1@14

  v2 = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          *(_DWORD *)(result + 4) = 0;
          v9 = 1;
          goto LABEL_14;
        }
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = *(_DWORD *)(result + 4);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 4);
      v9 = 0;
      if ( !v8 )
        v9 = 1;
    else
      v9 = 1;
  }
  else
    v9 = 1;
LABEL_14:
  v10 = *(_DWORD *)(a2 + 72);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


void __fastcall UIControlFactory::_populateCustomRenderComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r7@1
  UIControl *v4; // r6@1
  const UIResolvedDef *v5; // r5@1
  CustomRenderComponent *v6; // r4@1
  char v7; // r0@3
  int v8; // r4@6
  CustomRenderComponent *v9; // r8@7
  void *v10; // r0@9
  void *v11; // r0@10
  int v12; // r4@43
  unsigned int *v13; // r1@44
  unsigned int v14; // r0@46
  int v15; // r4@48
  unsigned int *v16; // r1@49
  unsigned int v17; // r0@51
  int v18; // r4@53
  unsigned int *v19; // r1@54
  unsigned int v20; // r0@56
  int v21; // r4@58
  unsigned int *v22; // r1@59
  unsigned int v23; // r0@61
  unsigned int *v24; // r5@65
  unsigned int v25; // r0@67
  int v26; // r4@69
  unsigned int *v27; // r1@70
  unsigned int v28; // r0@72
  unsigned int *v29; // r5@76
  unsigned int v30; // r0@78
  unsigned int *v31; // r2@80
  signed int v32; // r1@82
  unsigned int *v33; // r2@84
  signed int v34; // r1@86
  int v35; // r4@91
  unsigned int *v36; // r1@92
  unsigned int v37; // r0@94
  unsigned int *v38; // r5@98
  unsigned int v39; // r0@100
  int v40; // r4@102
  unsigned int *v41; // r1@103
  unsigned int v42; // r0@105
  unsigned int *v43; // r5@109
  unsigned int v44; // r0@111
  unsigned int *v45; // r1@117
  unsigned int v46; // r0@119
  int v47; // r4@127
  unsigned int *v48; // r1@128
  unsigned int v49; // r0@130
  unsigned int *v50; // r5@142
  unsigned int v51; // r0@144
  unsigned int *v52; // r1@150
  unsigned int v53; // r0@152
  int v54; // r4@160
  unsigned int *v55; // r1@161
  unsigned int v56; // r0@163
  unsigned int *v57; // r5@167
  unsigned int v58; // r0@169
  unsigned int *v59; // r1@175
  unsigned int v60; // r0@177
  int v61; // r4@185
  unsigned int *v62; // r1@186
  unsigned int v63; // r0@188
  unsigned int *v64; // r5@192
  unsigned int v65; // r0@194
  unsigned int *v66; // r1@200
  unsigned int v67; // r0@202
  int v68; // r4@210
  unsigned int *v69; // r1@211
  unsigned int v70; // r0@213
  unsigned int *v71; // r5@217
  unsigned int v72; // r0@219
  unsigned int *v73; // r1@225
  unsigned int v74; // r0@227
  int v75; // r4@235
  unsigned int *v76; // r1@236
  unsigned int v77; // r0@238
  unsigned int *v78; // r5@242
  unsigned int v79; // r0@244
  unsigned int *v80; // r1@250
  unsigned int v81; // r0@252
  int v82; // r4@260
  unsigned int *v83; // r1@261
  unsigned int v84; // r0@263
  unsigned int *v85; // r5@267
  unsigned int v86; // r0@269
  unsigned int *v87; // r1@275
  unsigned int v88; // r0@277
  int v89; // r4@285
  unsigned int *v90; // r1@286
  unsigned int v91; // r0@288
  unsigned int *v92; // r5@292
  unsigned int v93; // r0@294
  unsigned int *v94; // r1@300
  unsigned int v95; // r0@302
  int v96; // r6@310
  void *v97; // r0@310
  ProgressBarRenderer *v98; // r6@312
  void *v99; // r0@312
  int v100; // r6@313
  void *v101; // r0@313
  ProgressBarRenderer *v102; // r6@315
  void *v103; // r0@315
  unsigned int *v104; // r0@317
  unsigned int v105; // r1@319
  unsigned int *v106; // r5@323
  unsigned int v107; // r0@325
  unsigned int *v108; // r1@331
  unsigned int v109; // r0@333
  int v110; // r4@341
  unsigned int *v111; // r1@342
  unsigned int v112; // r0@344
  unsigned int *v113; // r5@348
  unsigned int v114; // r0@350
  unsigned int *v115; // r1@356
  unsigned int v116; // r0@358
  int v117; // r4@366
  unsigned int *v118; // r1@367
  unsigned int v119; // r0@369
  int v120; // r4@372
  unsigned int *v121; // r1@373
  unsigned int v122; // r0@375
  unsigned int *v123; // r5@379
  unsigned int v124; // r0@381
  unsigned int *v125; // r1@387
  unsigned int v126; // r0@389
  int v127; // r4@397
  unsigned int *v128; // r1@398
  unsigned int v129; // r0@400
  unsigned int *v130; // r5@404
  unsigned int v131; // r0@406
  unsigned int *v132; // r1@412
  unsigned int v133; // r0@414
  int v134; // r4@422
  unsigned int *v135; // r1@423
  unsigned int v136; // r0@425
  unsigned int *v137; // r5@429
  unsigned int v138; // r0@431
  unsigned int *v139; // r1@437
  unsigned int v140; // r0@439
  int v141; // r4@447
  unsigned int *v142; // r1@448
  unsigned int v143; // r0@450
  unsigned int *v144; // r5@454
  unsigned int v145; // r0@456
  unsigned int *v146; // r1@462
  unsigned int v147; // r0@464
  int v148; // r4@472
  unsigned int *v149; // r1@473
  unsigned int v150; // r0@475
  unsigned int *v151; // r2@477
  signed int v152; // r1@479
  unsigned int *v153; // r2@481
  signed int v154; // r1@483
  unsigned int *v155; // r5@487
  unsigned int v156; // r0@489
  unsigned int *v157; // r1@495
  unsigned int v158; // r0@497
  int v159; // r4@505
  unsigned int *v160; // r1@506
  unsigned int v161; // r0@508
  unsigned int *v162; // r5@512
  unsigned int v163; // r0@514
  unsigned int *v164; // r2@520
  signed int v165; // r1@522
  unsigned int *v166; // r2@528
  signed int v167; // r1@530
  unsigned int *v168; // r1@536
  unsigned int v169; // r0@538
  int v170; // r4@546
  unsigned int *v171; // r1@547
  unsigned int v172; // r0@549
  unsigned int *v173; // r5@553
  unsigned int v174; // r0@555
  unsigned int *v175; // r1@561
  unsigned int v176; // r0@563
  int v177; // r4@579
  unsigned int *v178; // r1@580
  unsigned int v179; // r0@582
  unsigned int *v180; // r5@586
  unsigned int v181; // r0@588
  unsigned int *v182; // r1@594
  unsigned int v183; // r0@596
  int v184; // r4@604
  unsigned int *v185; // r1@605
  unsigned int v186; // r0@607
  unsigned int *v187; // r5@611
  unsigned int v188; // r0@613
  unsigned int *v189; // r1@619
  unsigned int v190; // r0@621
  int v191; // r4@629
  unsigned int *v192; // r1@630
  unsigned int v193; // r0@632
  unsigned int *v194; // r5@636
  unsigned int v195; // r0@638
  unsigned int *v196; // r1@644
  unsigned int v197; // r0@646
  int v198; // r4@654
  unsigned int *v199; // r1@655
  unsigned int v200; // r0@657
  unsigned int *v201; // r5@661
  unsigned int v202; // r0@663
  unsigned int *v203; // r1@669
  unsigned int v204; // r0@671
  int v205; // r4@679
  unsigned int *v206; // r1@680
  unsigned int v207; // r0@682
  unsigned int *v208; // r5@686
  unsigned int v209; // r0@688
  unsigned int *v210; // r1@694
  unsigned int v211; // r0@696
  int v212; // r4@704
  unsigned int *v213; // r1@705
  unsigned int v214; // r0@707
  unsigned int *v215; // r5@711
  unsigned int v216; // r0@713
  unsigned int *v217; // r1@719
  unsigned int v218; // r0@721
  int v219; // r4@729
  unsigned int *v220; // r1@730
  unsigned int v221; // r0@732
  unsigned int *v222; // r5@736
  unsigned int v223; // r0@738
  unsigned int *v224; // r1@744
  unsigned int v225; // r0@746
  int v226; // r4@754
  unsigned int *v227; // r1@755
  unsigned int v228; // r0@757
  unsigned int *v229; // r5@761
  unsigned int v230; // r0@763
  unsigned int *v231; // r1@769
  unsigned int v232; // r0@771
  unsigned int *v233; // r5@782
  unsigned int v234; // r0@784
  unsigned int *v235; // r1@790
  unsigned int v236; // r0@792
  UIControlFactory *v237; // r0@800
  int v238; // r4@800
  unsigned int *v239; // r1@801
  unsigned int v240; // r0@803
  unsigned int *v241; // r5@807
  unsigned int v242; // r0@809
  unsigned int *v243; // r1@815
  unsigned int v244; // r0@817
  unsigned int *v245; // r1@829
  unsigned int v246; // r0@831
  unsigned int *v247; // r5@841
  unsigned int v248; // r0@843
  unsigned int *v249; // r5@847
  unsigned int v250; // r0@849
  unsigned int *v251; // r1@855
  unsigned int v252; // r0@857
  unsigned int *v253; // r1@869
  unsigned int v254; // r0@871
  void *v255; // r0@882
  unsigned int *v256; // r2@884
  signed int v257; // r1@886
  int v258; // [sp+0h] [bp-2E0h]@43
  int v259; // [sp+4h] [bp-2DCh]@43
  int v260; // [sp+8h] [bp-2D8h]@43
  int v261; // [sp+Ch] [bp-2D4h]@43
  int v262; // [sp+10h] [bp-2D0h]@800
  int v263; // [sp+14h] [bp-2CCh]@800
  int v264; // [sp+18h] [bp-2C8h]@800
  int v265; // [sp+1Ch] [bp-2C4h]@800
  int v266; // [sp+20h] [bp-2C0h]@754
  int v267; // [sp+24h] [bp-2BCh]@754
  int v268; // [sp+28h] [bp-2B8h]@754
  int v269; // [sp+2Ch] [bp-2B4h]@754
  int v270; // [sp+30h] [bp-2B0h]@729
  int v271; // [sp+34h] [bp-2ACh]@729
  int v272; // [sp+38h] [bp-2A8h]@729
  int v273; // [sp+3Ch] [bp-2A4h]@729
  int v274; // [sp+40h] [bp-2A0h]@704
  int v275; // [sp+44h] [bp-29Ch]@704
  int v276; // [sp+48h] [bp-298h]@704
  int v277; // [sp+4Ch] [bp-294h]@704
  int v278; // [sp+50h] [bp-290h]@679
  int v279; // [sp+54h] [bp-28Ch]@679
  int v280; // [sp+58h] [bp-288h]@679
  int v281; // [sp+5Ch] [bp-284h]@679
  int v282; // [sp+60h] [bp-280h]@654
  int v283; // [sp+64h] [bp-27Ch]@654
  int v284; // [sp+68h] [bp-278h]@654
  int v285; // [sp+6Ch] [bp-274h]@654
  int v286; // [sp+70h] [bp-270h]@629
  int v287; // [sp+74h] [bp-26Ch]@629
  int v288; // [sp+78h] [bp-268h]@629
  int v289; // [sp+7Ch] [bp-264h]@629
  int v290; // [sp+80h] [bp-260h]@604
  int v291; // [sp+84h] [bp-25Ch]@604
  int v292; // [sp+88h] [bp-258h]@604
  int v293; // [sp+8Ch] [bp-254h]@604
  int v294; // [sp+90h] [bp-250h]@579
  int v295; // [sp+94h] [bp-24Ch]@579
  int v296; // [sp+98h] [bp-248h]@579
  int v297; // [sp+9Ch] [bp-244h]@579
  int v298; // [sp+A0h] [bp-240h]@546
  int v299; // [sp+A4h] [bp-23Ch]@546
  int v300; // [sp+A8h] [bp-238h]@546
  int v301; // [sp+ACh] [bp-234h]@546
  int v302; // [sp+B0h] [bp-230h]@505
  int v303; // [sp+B4h] [bp-22Ch]@505
  int v304; // [sp+B8h] [bp-228h]@505
  int v305; // [sp+BCh] [bp-224h]@505
  int v306; // [sp+C0h] [bp-220h]@472
  int v307; // [sp+C4h] [bp-21Ch]@472
  int v308; // [sp+C8h] [bp-218h]@472
  int v309; // [sp+CCh] [bp-214h]@472
  int v310; // [sp+D0h] [bp-210h]@447
  int v311; // [sp+D4h] [bp-20Ch]@447
  int v312; // [sp+D8h] [bp-208h]@447
  int v313; // [sp+DCh] [bp-204h]@447
  int v314; // [sp+E0h] [bp-200h]@422
  int v315; // [sp+E4h] [bp-1FCh]@422
  int v316; // [sp+E8h] [bp-1F8h]@422
  int v317; // [sp+ECh] [bp-1F4h]@422
  int v318; // [sp+F0h] [bp-1F0h]@397
  int v319; // [sp+F4h] [bp-1ECh]@397
  int v320; // [sp+F8h] [bp-1E8h]@397
  int v321; // [sp+FCh] [bp-1E4h]@397
  int v322; // [sp+100h] [bp-1E0h]@366
  int v323; // [sp+104h] [bp-1DCh]@366
  int v324; // [sp+108h] [bp-1D8h]@366
  int v325; // [sp+10Ch] [bp-1D4h]@366
  int v326; // [sp+110h] [bp-1D0h]@341
  int v327; // [sp+114h] [bp-1CCh]@341
  int v328; // [sp+118h] [bp-1C8h]@341
  int v329; // [sp+11Ch] [bp-1C4h]@341
  ProgressBarRenderer *v330; // [sp+120h] [bp-1C0h]@316
  int v331; // [sp+124h] [bp-1BCh]@316
  int v332; // [sp+12Ch] [bp-1B4h]@315
  char v333; // [sp+130h] [bp-1B0h]@315
  int v334; // [sp+144h] [bp-19Ch]@313
  int v335; // [sp+14Ch] [bp-194h]@312
  char v336; // [sp+150h] [bp-190h]@312
  int v337; // [sp+164h] [bp-17Ch]@310
  ProgressBarRenderer *v338; // [sp+168h] [bp-178h]@310
  int v339; // [sp+16Ch] [bp-174h]@316
  int v340; // [sp+170h] [bp-170h]@285
  int v341; // [sp+174h] [bp-16Ch]@285
  int v342; // [sp+178h] [bp-168h]@285
  int v343; // [sp+17Ch] [bp-164h]@285
  int v344; // [sp+180h] [bp-160h]@260
  int v345; // [sp+184h] [bp-15Ch]@260
  int v346; // [sp+188h] [bp-158h]@260
  int v347; // [sp+18Ch] [bp-154h]@260
  int v348; // [sp+190h] [bp-150h]@235
  int v349; // [sp+194h] [bp-14Ch]@235
  int v350; // [sp+198h] [bp-148h]@235
  int v351; // [sp+19Ch] [bp-144h]@235
  int v352; // [sp+1A0h] [bp-140h]@210
  int v353; // [sp+1A4h] [bp-13Ch]@210
  int v354; // [sp+1A8h] [bp-138h]@210
  int v355; // [sp+1ACh] [bp-134h]@210
  int v356; // [sp+1B0h] [bp-130h]@185
  int v357; // [sp+1B4h] [bp-12Ch]@185
  int v358; // [sp+1B8h] [bp-128h]@185
  int v359; // [sp+1BCh] [bp-124h]@185
  int v360; // [sp+1C0h] [bp-120h]@160
  int v361; // [sp+1C4h] [bp-11Ch]@160
  int v362; // [sp+1C8h] [bp-118h]@160
  int v363; // [sp+1CCh] [bp-114h]@160
  int v364; // [sp+1D0h] [bp-110h]@127
  int v365; // [sp+1D4h] [bp-10Ch]@127
  int v366; // [sp+1D8h] [bp-108h]@127
  int v367; // [sp+1DCh] [bp-104h]@127
  int v368; // [sp+1E0h] [bp-100h]@102
  int v369; // [sp+1E4h] [bp-FCh]@102
  int v370; // [sp+1E8h] [bp-F8h]@102
  int v371; // [sp+1ECh] [bp-F4h]@102
  int v372; // [sp+1F0h] [bp-F0h]@69
  int v373; // [sp+1F4h] [bp-ECh]@69
  int v374; // [sp+1F8h] [bp-E8h]@69
  int v375; // [sp+1FCh] [bp-E4h]@69
  int v376; // [sp+200h] [bp-E0h]@58
  int v377; // [sp+204h] [bp-DCh]@58
  int v378; // [sp+208h] [bp-D8h]@58
  int v379; // [sp+20Ch] [bp-D4h]@58
  int v380; // [sp+210h] [bp-D0h]@53
  int v381; // [sp+214h] [bp-CCh]@53
  int v382; // [sp+218h] [bp-C8h]@53
  int v383; // [sp+21Ch] [bp-C4h]@53
  int v384; // [sp+220h] [bp-C0h]@48
  int v385; // [sp+224h] [bp-BCh]@48
  int v386; // [sp+228h] [bp-B8h]@48
  int v387; // [sp+22Ch] [bp-B4h]@48
  int v388; // [sp+234h] [bp-ACh]@9
  int v389; // [sp+23Ch] [bp-A4h]@9
  int v390; // [sp+240h] [bp-A0h]@9
  CustomRenderComponent *v391; // [sp+244h] [bp-9Ch]@1
  char v392; // [sp+264h] [bp-7Ch]@185
  char v393; // [sp+2BCh] [bp-24h]@800

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (CustomRenderComponent *)operator new(0x14u);
  CustomRenderComponent::CustomRenderComponent(v6, v4);
  v391 = v6;
  UIControl::setComponent<CustomRenderComponent>(v4, &v391);
  if ( v391 )
    (*(void (**)(void))(*(_DWORD *)v391 + 4))();
  v391 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
  {
    type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
  }
  v8 = type_id<UIComponent,CustomRenderComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,CustomRenderComponent>(void)::id[0]) == 1 )
    v9 = *(CustomRenderComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v389, "renderer");
  sub_DA7364((void **)&v388, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v390, (int)v5, (int **)&v389, &v388);
  v10 = (void *)(v388 - 12);
  if ( (int *)(v388 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v388 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v389 - 12);
  if ( (int *)(v389 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v389 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  if ( !sub_DA7374((const void **)&v390, "inventory_item_renderer") )
    j__ZNSt12__shared_ptrI21InventoryItemRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v384);
    v386 = v384;
    v387 = v385;
    v384 = 0;
    v385 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v386);
    v15 = v387;
    if ( v387 )
      v16 = (unsigned int *)(v387 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        v24 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v35 = v385;
    if ( !v385 )
      goto LABEL_882;
    v36 = (unsigned int *)(v385 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 != 1 )
    v38 = (unsigned int *)(v35 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
    if ( !&pthread_create )
      goto LABEL_879;
    __dmb();
    do
      v39 = __ldrex(v38);
    while ( __strex(v39 - 1, v38) );
LABEL_880:
    if ( v39 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
    goto LABEL_882;
  if ( !sub_DA7374((const void **)&v390, "background_renderer") )
    j__ZNSt12__shared_ptrI18BackgroundRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v380);
    v382 = v380;
    v383 = v381;
    v380 = 0;
    v381 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v382);
    v18 = v383;
    if ( v383 )
      v19 = (unsigned int *)(v383 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v29 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v35 = v381;
    if ( !v381 )
    v45 = (unsigned int *)(v381 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 != 1 )
    goto LABEL_880;
  if ( !sub_DA7374((const void **)&v390, "trial_time_renderer") )
    j__ZNSt12__shared_ptrI22TrialTimerTextRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v376);
    v378 = v376;
    v379 = v377;
    v376 = 0;
    v377 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v378);
    v21 = v379;
    if ( v379 )
      v22 = (unsigned int *)(v379 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v43 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    v35 = v377;
    if ( !v377 )
    v52 = (unsigned int *)(v377 + 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 != 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v35 + 8))(v35);
  if ( !sub_DA7374((const void **)&v390, "live_horse_renderer") )
    j__ZNSt12__shared_ptrI17LiveHorseRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v372);
    v374 = v372;
    v375 = v373;
    v372 = 0;
    v373 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v374);
    v26 = v375;
    if ( v375 )
      v27 = (unsigned int *)(v375 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v50 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v35 = v373;
    if ( !v373 )
    v59 = (unsigned int *)(v373 + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 != 1 )
  if ( !sub_DA7374((const void **)&v390, "hud_player_renderer") )
    j__ZNSt12__shared_ptrI17HudPlayerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v368);
    v370 = v368;
    v371 = v369;
    v368 = 0;
    v369 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v370);
    v40 = v371;
    if ( v371 )
      v41 = (unsigned int *)(v371 + 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        v57 = (unsigned int *)(v40 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
    v35 = v369;
    if ( !v369 )
    v66 = (unsigned int *)(v369 + 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 != 1 )
  if ( !sub_DA7374((const void **)&v390, "live_player_renderer") )
    j__ZNSt12__shared_ptrI18LivePlayerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v364);
    v366 = v364;
    v367 = v365;
    v364 = 0;
    v365 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v366);
    v47 = v367;
    if ( v367 )
      v48 = (unsigned int *)(v367 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v64 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    v35 = v365;
    if ( !v365 )
    v73 = (unsigned int *)(v365 + 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 != 1 )
  if ( !sub_DA7374((const void **)&v390, "name_tag_renderer") )
    j__ZNSt12__shared_ptrI15NameTagRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v360);
    v362 = v360;
    v363 = v361;
    v360 = 0;
    v361 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v362);
    v54 = v363;
    if ( v363 )
      v55 = (unsigned int *)(v363 + 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        v71 = (unsigned int *)(v54 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
    v35 = v361;
    if ( !v361 )
    v80 = (unsigned int *)(v361 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 != 1 )
  if ( !sub_DA7374((const void **)&v390, "paper_doll_renderer") )
    std::__shared_ptr<PaperDollRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PaperDollRenderer>,UIResolvedDef const&>(
      (int)&v356,
      (int)&v392,
      v5);
    v358 = v356;
    v359 = v357;
    v356 = 0;
    v357 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v358);
    v61 = v359;
    if ( v359 )
      v62 = (unsigned int *)(v359 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v78 = (unsigned int *)(v61 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
    v35 = v357;
    if ( !v357 )
    v87 = (unsigned int *)(v357 + 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 != 1 )
  if ( !sub_DA7374((const void **)&v390, "splash_text_renderer") )
    j__ZNSt12__shared_ptrI18SplashTextRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v352);
    v354 = v352;
    v355 = v353;
    v352 = 0;
    v353 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v354);
    v68 = v355;
    if ( v355 )
      v69 = (unsigned int *)(v355 + 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 == 1 )
        v85 = (unsigned int *)(v68 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
    v35 = v353;
    if ( !v353 )
    v94 = (unsigned int *)(v353 + 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 != 1 )
  if ( !sub_DA7374((const void **)&v390, "debug_screen_renderer") )
    j__ZNSt12__shared_ptrI19DebugScreenRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v348);
    v350 = v348;
    v351 = v349;
    v348 = 0;
    v349 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v350);
    v75 = v351;
    if ( v351 )
      v76 = (unsigned int *)(v351 + 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 == 1 )
        v92 = (unsigned int *)(v75 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 8))(v75);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 12))(v75);
    v35 = v349;
    if ( !v349 )
    v108 = (unsigned int *)(v349 + 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 != 1 )
  if ( !sub_DA7374((const void **)&v390, "ui_holo_cursor") )
    j__ZNSt12__shared_ptrI20UIHoloCursorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v344);
    v346 = v344;
    v347 = v345;
    v344 = 0;
    v345 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v346);
    v82 = v347;
    if ( v347 )
      v83 = (unsigned int *)(v347 + 4);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 == 1 )
        v106 = (unsigned int *)(v82 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
    v35 = v345;
    if ( !v345 )
    v115 = (unsigned int *)(v345 + 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 != 1 )
  if ( !sub_DA7374((const void **)&v390, "holographic_postrenderer") )
    j__ZNSt12__shared_ptrI23HolographicPostRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v340);
    v342 = v340;
    v343 = v341;
    v340 = 0;
    v341 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v342);
    v89 = v343;
    if ( v343 )
      v90 = (unsigned int *)(v343 + 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 == 1 )
        v113 = (unsigned int *)(v89 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v89 + 8))(v89);
            v114 = __ldrex(v113);
          while ( __strex(v114 - 1, v113) );
          v114 = (*v113)--;
        if ( v114 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v89 + 12))(v89);
    v35 = v341;
    if ( !v341 )
    v125 = (unsigned int *)(v341 + 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 != 1 )
  if ( !sub_DA7374((const void **)&v390, "progress_bar_renderer") )
    j__ZNSt12__shared_ptrI19ProgressBarRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v338);
    sub_DA7364((void **)&v337, "primary_color");
    v96 = UIResolvedDef::hasValue((int)v5, (int **)&v337);
    v97 = (void *)(v337 - 12);
    if ( (int *)(v337 - 12) != &dword_28898C0 )
      v151 = (unsigned int *)(v337 - 4);
          v152 = __ldrex(v151);
        while ( __strex(v152 - 1, v151) );
        v152 = (*v151)--;
      if ( v152 <= 0 )
        j_j_j_j_j__ZdlPv_9(v97);
    if ( v96 == 1 )
      v98 = v338;
      sub_DA7364((void **)&v335, "primary_color");
      UIResolvedDef::getAsColor((int)&v336, (int)v5, (int **)&v335, (int)&Color::WHITE);
      ProgressBarRenderer::setPrimaryColor(v98, (const Color *)&v336);
      v99 = (void *)(v335 - 12);
      if ( (int *)(v335 - 12) != &dword_28898C0 )
        v164 = (unsigned int *)(v335 - 4);
            v165 = __ldrex(v164);
          while ( __strex(v165 - 1, v164) );
          v165 = (*v164)--;
        if ( v165 <= 0 )
          j_j_j_j_j__ZdlPv_9(v99);
    sub_DA7364((void **)&v334, "secondary_color");
    v100 = UIResolvedDef::hasValue((int)v5, (int **)&v334);
    v101 = (void *)(v334 - 12);
    if ( (int *)(v334 - 12) != &dword_28898C0 )
      v153 = (unsigned int *)(v334 - 4);
          v154 = __ldrex(v153);
        while ( __strex(v154 - 1, v153) );
        v154 = (*v153)--;
      if ( v154 <= 0 )
        j_j_j_j_j__ZdlPv_9(v101);
    if ( v100 == 1 )
      v102 = v338;
      sub_DA7364((void **)&v332, "secondary_color");
      UIResolvedDef::getAsColor((int)&v333, (int)v5, (int **)&v332, (int)&Color::WHITE);
      ProgressBarRenderer::setSecondaryColor(v102, (const Color *)&v333);
      v103 = (void *)(v332 - 12);
      if ( (int *)(v332 - 12) != &dword_28898C0 )
        v166 = (unsigned int *)(v332 - 4);
            v167 = __ldrex(v166);
          while ( __strex(v167 - 1, v166) );
          v167 = (*v166)--;
        if ( v167 <= 0 )
          j_j_j_j_j__ZdlPv_9(v103);
    v330 = v338;
    v331 = v339;
    if ( v339 )
      v104 = (unsigned int *)(v339 + 4);
          v105 = __ldrex(v104);
        while ( __strex(v105 + 1, v104) );
        ++*v104;
    CustomRenderComponent::setRenderer((int)v9, (int)&v330);
    v120 = v331;
    if ( v331 )
      v121 = (unsigned int *)(v331 + 4);
          v122 = __ldrex(v121);
        while ( __strex(v122 - 1, v121) );
        v122 = (*v121)--;
      if ( v122 == 1 )
        v123 = (unsigned int *)(v120 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v120 + 8))(v120);
            v124 = __ldrex(v123);
          while ( __strex(v124 - 1, v123) );
          v124 = (*v123)--;
        if ( v124 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v120 + 12))(v120);
    v35 = v339;
    if ( !v339 )
    v132 = (unsigned int *)(v339 + 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 != 1 )
  if ( !sub_DA7374((const void **)&v390, "hover_text_renderer") )
    j__ZNSt12__shared_ptrI17HoverTextRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v326);
    v328 = v326;
    v329 = v327;
    v326 = 0;
    v327 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v328);
    v110 = v329;
    if ( v329 )
      v111 = (unsigned int *)(v329 + 4);
          v112 = __ldrex(v111);
        while ( __strex(v112 - 1, v111) );
        v112 = (*v111)--;
      if ( v112 == 1 )
        v130 = (unsigned int *)(v110 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 8))(v110);
            v131 = __ldrex(v130);
          while ( __strex(v131 - 1, v130) );
          v131 = (*v130)--;
        if ( v131 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 12))(v110);
    v35 = v327;
    if ( !v327 )
    v139 = (unsigned int *)(v327 + 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 != 1 )
  if ( !sub_DA7374((const void **)&v390, "enchanting_book_renderer") )
    j__ZNSt12__shared_ptrI22EnchantingBookRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v322);
    v324 = v322;
    v325 = v323;
    v322 = 0;
    v323 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v324);
    v117 = v325;
    if ( v325 )
      v118 = (unsigned int *)(v325 + 4);
          v119 = __ldrex(v118);
        while ( __strex(v119 - 1, v118) );
        v119 = (*v118)--;
      if ( v119 == 1 )
        v137 = (unsigned int *)(v117 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 8))(v117);
            v138 = __ldrex(v137);
          while ( __strex(v138 - 1, v137) );
          v138 = (*v137)--;
        if ( v138 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 12))(v117);
    v35 = v323;
    if ( !v323 )
    v146 = (unsigned int *)(v323 + 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 != 1 )
  if ( !sub_DA7374((const void **)&v390, "hotbar_renderer") )
    j__ZNSt12__shared_ptrI18HotBarDropRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v318);
    v320 = v318;
    v321 = v319;
    v318 = 0;
    v319 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v320);
    v127 = v321;
    if ( v321 )
      v128 = (unsigned int *)(v321 + 4);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 == 1 )
        v144 = (unsigned int *)(v127 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v127 + 8))(v127);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v127 + 12))(v127);
    v35 = v319;
    if ( !v319 )
    v157 = (unsigned int *)(v319 + 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 != 1 )
  if ( !sub_DA7374((const void **)&v390, "hotbar_cooldown_renderer") )
    j__ZNSt12__shared_ptrI22HotBarCooldownRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v314);
    v316 = v314;
    v317 = v315;
    v314 = 0;
    v315 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v316);
    v134 = v317;
    if ( v317 )
      v135 = (unsigned int *)(v317 + 4);
          v136 = __ldrex(v135);
        while ( __strex(v136 - 1, v135) );
        v136 = (*v135)--;
      if ( v136 == 1 )
        v155 = (unsigned int *)(v134 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v134 + 8))(v134);
            v156 = __ldrex(v155);
          while ( __strex(v156 - 1, v155) );
          v156 = (*v155)--;
        if ( v156 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v134 + 12))(v134);
    v35 = v315;
    if ( !v315 )
    v168 = (unsigned int *)(v315 + 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 != 1 )
  if ( !sub_DA7374((const void **)&v390, "flying_item_renderer") )
    j__ZNSt12__shared_ptrI18FlyingItemRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v310);
    v312 = v310;
    v313 = v311;
    v310 = 0;
    v311 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v312);
    v141 = v313;
    if ( v313 )
      v142 = (unsigned int *)(v313 + 4);
          v143 = __ldrex(v142);
        while ( __strex(v143 - 1, v142) );
        v143 = (*v142)--;
      if ( v143 == 1 )
        v162 = (unsigned int *)(v141 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 8))(v141);
            v163 = __ldrex(v162);
          while ( __strex(v163 - 1, v162) );
          v163 = (*v162)--;
        if ( v163 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 12))(v141);
    v35 = v311;
    if ( !v311 )
    v175 = (unsigned int *)(v311 + 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 != 1 )
  if ( !sub_DA7374((const void **)&v390, "heart_renderer") )
    j__ZNSt12__shared_ptrI16HudHeartRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v306);
    v308 = v306;
    v309 = v307;
    v306 = 0;
    v307 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v308);
    v148 = v309;
    if ( v309 )
      v149 = (unsigned int *)(v309 + 4);
          v150 = __ldrex(v149);
        while ( __strex(v150 - 1, v149) );
        v150 = (*v149)--;
      if ( v150 == 1 )
        v173 = (unsigned int *)(v148 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v148 + 8))(v148);
            v174 = __ldrex(v173);
          while ( __strex(v174 - 1, v173) );
          v174 = (*v173)--;
        if ( v174 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v148 + 12))(v148);
    v35 = v307;
    if ( !v307 )
    v182 = (unsigned int *)(v307 + 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 != 1 )
  if ( !sub_DA7374((const void **)&v390, "horse_heart_renderer") )
    j__ZNSt12__shared_ptrI21HudHorseHeartRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v302);
    v304 = v302;
    v305 = v303;
    v302 = 0;
    v303 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v304);
    v159 = v305;
    if ( v305 )
      v160 = (unsigned int *)(v305 + 4);
          v161 = __ldrex(v160);
        while ( __strex(v161 - 1, v160) );
        v161 = (*v160)--;
      if ( v161 == 1 )
        v180 = (unsigned int *)(v159 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v159 + 8))(v159);
            v181 = __ldrex(v180);
          while ( __strex(v181 - 1, v180) );
          v181 = (*v180)--;
        if ( v181 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v159 + 12))(v159);
    v35 = v303;
    if ( !v303 )
    v189 = (unsigned int *)(v303 + 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 != 1 )
  if ( !sub_DA7374((const void **)&v390, "armor_renderer") )
    j__ZNSt12__shared_ptrI16HudArmorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v298);
    v300 = v298;
    v301 = v299;
    v298 = 0;
    v299 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v300);
    v170 = v301;
    if ( v301 )
      v171 = (unsigned int *)(v301 + 4);
          v172 = __ldrex(v171);
        while ( __strex(v172 - 1, v171) );
        v172 = (*v171)--;
      if ( v172 == 1 )
        v187 = (unsigned int *)(v170 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 8))(v170);
            v188 = __ldrex(v187);
          while ( __strex(v188 - 1, v187) );
          v188 = (*v187)--;
        if ( v188 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 12))(v170);
    v35 = v299;
    if ( !v299 )
    v196 = (unsigned int *)(v299 + 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 != 1 )
  if ( !sub_DA7374((const void **)&v390, "horse_jump_renderer") )
    j__ZNSt12__shared_ptrI20HudHorseJumpRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v294);
    v296 = v294;
    v297 = v295;
    v294 = 0;
    v295 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v296);
    v177 = v297;
    if ( v297 )
      v178 = (unsigned int *)(v297 + 4);
          v179 = __ldrex(v178);
        while ( __strex(v179 - 1, v178) );
        v179 = (*v178)--;
      if ( v179 == 1 )
        v194 = (unsigned int *)(v177 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v177 + 8))(v177);
            v195 = __ldrex(v194);
          while ( __strex(v195 - 1, v194) );
          v195 = (*v194)--;
        if ( v195 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v177 + 12))(v177);
    v35 = v295;
    if ( !v295 )
    v203 = (unsigned int *)(v295 + 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 != 1 )
  if ( !sub_DA7374((const void **)&v390, "hunger_renderer") )
    j__ZNSt12__shared_ptrI17HudHungerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v290);
    v292 = v290;
    v293 = v291;
    v290 = 0;
    v291 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v292);
    v184 = v293;
    if ( v293 )
      v185 = (unsigned int *)(v293 + 4);
          v186 = __ldrex(v185);
        while ( __strex(v186 - 1, v185) );
        v186 = (*v185)--;
      if ( v186 == 1 )
        v201 = (unsigned int *)(v184 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v184 + 8))(v184);
            v202 = __ldrex(v201);
          while ( __strex(v202 - 1, v201) );
          v202 = (*v201)--;
        if ( v202 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v184 + 12))(v184);
    v35 = v291;
    if ( !v291 )
    v210 = (unsigned int *)(v291 + 4);
        v211 = __ldrex(v210);
      while ( __strex(v211 - 1, v210) );
      v211 = (*v210)--;
    if ( v211 != 1 )
  if ( !sub_DA7374((const void **)&v390, "bubbles_renderer") )
    j__ZNSt12__shared_ptrI18HudBubblesRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v286);
    v288 = v286;
    v289 = v287;
    v286 = 0;
    v287 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v288);
    v191 = v289;
    if ( v289 )
      v192 = (unsigned int *)(v289 + 4);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 == 1 )
        v208 = (unsigned int *)(v191 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v191 + 8))(v191);
            v209 = __ldrex(v208);
          while ( __strex(v209 - 1, v208) );
          v209 = (*v208)--;
        if ( v209 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v191 + 12))(v191);
    v35 = v287;
    if ( !v287 )
    v217 = (unsigned int *)(v287 + 4);
        v218 = __ldrex(v217);
      while ( __strex(v218 - 1, v217) );
      v218 = (*v217)--;
    if ( v218 != 1 )
  if ( !sub_DA7374((const void **)&v390, "vignette_renderer") )
    j__ZNSt12__shared_ptrI19HudVignetteRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v282);
    v284 = v282;
    v285 = v283;
    v282 = 0;
    v283 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v284);
    v198 = v285;
    if ( v285 )
      v199 = (unsigned int *)(v285 + 4);
          v200 = __ldrex(v199);
        while ( __strex(v200 - 1, v199) );
        v200 = (*v199)--;
      if ( v200 == 1 )
        v215 = (unsigned int *)(v198 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v198 + 8))(v198);
            v216 = __ldrex(v215);
          while ( __strex(v216 - 1, v215) );
          v216 = (*v215)--;
        if ( v216 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v198 + 12))(v198);
    v35 = v283;
    if ( !v283 )
    v224 = (unsigned int *)(v283 + 4);
        v225 = __ldrex(v224);
      while ( __strex(v225 - 1, v224) );
      v225 = (*v224)--;
    if ( v225 != 1 )
  if ( !sub_DA7374((const void **)&v390, "cursor_renderer") )
    j__ZNSt12__shared_ptrI17HudCursorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v278);
    v280 = v278;
    v281 = v279;
    v278 = 0;
    v279 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v280);
    v205 = v281;
    if ( v281 )
      v206 = (unsigned int *)(v281 + 4);
          v207 = __ldrex(v206);
        while ( __strex(v207 - 1, v206) );
        v207 = (*v206)--;
      if ( v207 == 1 )
        v222 = (unsigned int *)(v205 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v205 + 8))(v205);
            v223 = __ldrex(v222);
          while ( __strex(v223 - 1, v222) );
          v223 = (*v222)--;
        if ( v223 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v205 + 12))(v205);
    v35 = v279;
    if ( !v279 )
    v231 = (unsigned int *)(v279 + 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 != 1 )
  if ( !sub_DA7374((const void **)&v390, "progress_indicator_renderer") )
    j__ZNSt12__shared_ptrI19HudProgressRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v274);
    v276 = v274;
    v277 = v275;
    v274 = 0;
    v275 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v276);
    v212 = v277;
    if ( v277 )
      v213 = (unsigned int *)(v277 + 4);
          v214 = __ldrex(v213);
        while ( __strex(v214 - 1, v213) );
        v214 = (*v213)--;
      if ( v214 == 1 )
        v229 = (unsigned int *)(v212 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v212 + 8))(v212);
            v230 = __ldrex(v229);
          while ( __strex(v230 - 1, v229) );
          v230 = (*v229)--;
        if ( v230 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v212 + 12))(v212);
    v35 = v275;
    if ( !v275 )
    v235 = (unsigned int *)(v275 + 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 != 1 )
  if ( !sub_DA7374((const void **)&v390, "mob_effects_renderer") )
    j__ZNSt12__shared_ptrI21HudMobEffectsRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v270);
    v272 = v270;
    v273 = v271;
    v270 = 0;
    v271 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v272);
    v219 = v273;
    if ( v273 )
      v220 = (unsigned int *)(v273 + 4);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 == 1 )
        v233 = (unsigned int *)(v219 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v219 + 8))(v219);
            v234 = __ldrex(v233);
          while ( __strex(v234 - 1, v233) );
          v234 = (*v233)--;
        if ( v234 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v219 + 12))(v219);
    v35 = v271;
    if ( !v271 )
    v243 = (unsigned int *)(v271 + 4);
        v244 = __ldrex(v243);
      while ( __strex(v244 - 1, v243) );
      v244 = (*v243)--;
    if ( v244 != 1 )
  if ( !sub_DA7374((const void **)&v390, "debug_overlay_renderer") )
    j__ZNSt12__shared_ptrI23HudDebugOverlayRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v266);
    v268 = v266;
    v269 = v267;
    v266 = 0;
    v267 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v268);
    v226 = v269;
    if ( v269 )
      v227 = (unsigned int *)(v269 + 4);
          v228 = __ldrex(v227);
        while ( __strex(v228 - 1, v227) );
        v228 = (*v227)--;
      if ( v228 == 1 )
        v241 = (unsigned int *)(v226 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v226 + 8))(v226);
            v242 = __ldrex(v241);
          while ( __strex(v242 - 1, v241) );
          v242 = (*v241)--;
        if ( v242 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v226 + 12))(v226);
    v35 = v267;
    if ( !v267 )
    v245 = (unsigned int *)(v267 + 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 != 1 )
  if ( !sub_DA7374((const void **)&v390, "gradient_renderer") )
    UIControlFactory::_createGradientRenderer(0, v9, v5);
  if ( !sub_DA7374((const void **)&v390, "panorama_renderer") )
    UIControlFactory::_populateSpriteComponent(v3, v5, v4);
    UIControlFactory::_populateGestureComponent(v237, v5, v4);
    std::__shared_ptr<PanoramaRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PanoramaRenderer>,UIResolvedDef const&>(
      (int)&v262,
      (int)&v393,
    v264 = v262;
    v265 = v263;
    v262 = 0;
    v263 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v264);
    v238 = v265;
    if ( v265 )
      v239 = (unsigned int *)(v265 + 4);
          v240 = __ldrex(v239);
        while ( __strex(v240 - 1, v239) );
        v240 = (*v239)--;
      if ( v240 == 1 )
        v247 = (unsigned int *)(v238 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v238 + 8))(v238);
            v248 = __ldrex(v247);
          while ( __strex(v248 - 1, v247) );
          v248 = (*v247)--;
        if ( v248 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v238 + 12))(v238);
    v35 = v263;
    if ( !v263 )
    v251 = (unsigned int *)(v263 + 4);
        v252 = __ldrex(v251);
      while ( __strex(v252 - 1, v251) );
      v252 = (*v251)--;
    if ( v252 != 1 )
  if ( !sub_DA7374((const void **)&v390, "3d_structure_renderer") )
    j__ZNSt12__shared_ptrI23StructureVolumeRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v258);
    v260 = v258;
    v261 = v259;
    v258 = 0;
    v259 = 0;
    CustomRenderComponent::setRenderer((int)v9, (int)&v260);
    v12 = v261;
    if ( v261 )
      v13 = (unsigned int *)(v261 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v249 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v250 = __ldrex(v249);
          while ( __strex(v250 - 1, v249) );
          v250 = (*v249)--;
        if ( v250 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v35 = v259;
    if ( v259 )
      v253 = (unsigned int *)(v259 + 4);
          v254 = __ldrex(v253);
        while ( __strex(v254 - 1, v253) );
        v254 = (*v253)--;
      if ( v254 == 1 )
        v38 = (unsigned int *)(v35 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v35 + 8))(v35);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          goto LABEL_880;
LABEL_879:
        v39 = (*v38)--;
        goto LABEL_880;
LABEL_882:
  v255 = (void *)(v390 - 12);
  if ( (int *)(v390 - 12) != &dword_28898C0 )
    v256 = (unsigned int *)(v390 - 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 <= 0 )
      j_j_j_j_j__ZdlPv_9(v255);
}


void __fastcall UIControlFactory::_populateDebugRendererComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateDebugRendererComponent(this, a2, a3);
}


unsigned int __fastcall UIControlFactory::_populateGridItemComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  const UIResolvedDef *v4; // r5@1
  unsigned int result; // r0@1
  UIControl *v6; // r6@1
  char v7; // r0@2
  int v8; // r7@5
  UIComponent *v9; // r6@7
  char v10; // r0@9
  int v11; // r6@12
  int v12; // r6@13
  void *v13; // r0@15
  char v14; // r0@16
  int v15; // r5@19
  UIComponent *v16; // r5@21
  int v17; // r4@24
  unsigned int *v18; // r1@25
  unsigned int *v19; // r5@31
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  UIComponent *v22; // [sp+0h] [bp-40h]@21
  int v23; // [sp+4h] [bp-3Ch]@15
  int v24; // [sp+8h] [bp-38h]@15
  int v25; // [sp+10h] [bp-30h]@15
  char v26; // [sp+14h] [bp-2Ch]@15
  UIComponent *v27; // [sp+1Ch] [bp-24h]@7
  UIControl *v28; // [sp+20h] [bp-20h]@1
  int v29; // [sp+24h] [bp-1Ch]@24

  v3 = a3;
  v4 = a2;
  result = UIControl::getParent((UIControl *)&v28, (int)a3);
  v6 = v28;
  if ( v28 )
  {
    v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
    __dmb();
    if ( !(v7 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    {
      type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
    }
    v8 = type_id<UIComponent,GridComponent>(void)::id[0];
    result = UIControl::_hasComponent(v6, type_id<UIComponent,GridComponent>(void)::id[0]);
    if ( result == 1 )
      result = *(_DWORD *)(*((_DWORD *)v6 + 27) + 4 * UIControl::_getComponentIndex(v6, v8));
      if ( result )
      {
        v9 = (UIComponent *)operator new(0x14u);
        GridItemComponent::GridItemComponent(v9, v3);
        v27 = v9;
        UIControl::setComponent<GridItemComponent>(v3, &v27);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        v27 = 0;
        v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
        __dmb();
        if ( !(v10 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
        {
          type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
        }
        v11 = type_id<UIComponent,GridItemComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v3, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
          v12 = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v11));
        else
          v12 = 0;
        sub_DA7364((void **)&v25, "grid_position");
        v23 = 0;
        v24 = 0;
        UIResolvedDef::getAsGridSize((int)&v26, (int)v4, (int **)&v25, (int)&v23);
        GridItemComponent::setGridPosition(v12, (int)&v26);
        v13 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j_j__ZdlPv_9(v13);
        v14 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
        if ( !(v14 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
          type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
        v15 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v3, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1
          || (result = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v15))) == 0 )
          v16 = (UIComponent *)operator new(0x30u);
          DataBindingComponent::DataBindingComponent(v16, v3);
          v22 = v16;
          UIControl::setComponent<DataBindingComponent>(v3, &v22);
          if ( v22 )
            (*(void (**)(void))(*(_DWORD *)v22 + 4))();
          result = 0;
          v22 = 0;
      }
  }
  v17 = v29;
  if ( v29 )
    v18 = (unsigned int *)(v29 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
    else
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int *__fastcall UIControlFactory::_setName(int a1, int a2, UIResolvedDef *a3, int *a4)
{
  UIResolvedDef *v4; // r6@1
  int *v5; // r5@1
  int v6; // r4@1
  int *v7; // r1@2
  int *result; // r0@2

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( UIResolvedDef::isNamed(a3) == 1 )
  {
    v7 = (int *)UIResolvedDef::getName(v4);
    result = j_j_j__ZN9UIControl7setNameERKSs(v6, v7);
  }
  else
    result = j_j_j__ZN9UIControl7setNameERKSs(v6, v5);
  return result;
}


void __fastcall UIControlFactory::_populateControl(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateControl(this, a2, a3);
}


void __fastcall UIControlFactory::_populateButtonComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateButtonComponent(this, a2, a3);
}


unsigned int *__fastcall UIControlFactory::_createGradientRenderer(UIControlFactory *this, CustomRenderComponent *a2, const UIResolvedDef *a3)
{
  CustomRenderComponent *v3; // r7@1
  const UIResolvedDef *v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  GradientRenderer *v9; // r6@7
  void *v10; // r0@7
  void *v11; // r0@8
  unsigned int *v12; // r0@10
  unsigned int v13; // r1@12
  unsigned int *result; // r0@15
  int v15; // r4@15
  unsigned int *v16; // r1@16
  unsigned int *v17; // r5@22
  int v18; // r4@29
  unsigned int *v19; // r1@30
  unsigned int *v20; // r5@36
  unsigned int *v21; // r2@44
  signed int v22; // r1@46
  unsigned int *v23; // r2@48
  signed int v24; // r1@50
  unsigned int *v25; // r2@52
  signed int v26; // r1@54
  unsigned int *v27; // r2@56
  signed int v28; // r1@58
  unsigned int *v29; // r2@60
  signed int v30; // r1@62
  GradientRenderer *v31; // [sp+4h] [bp-6Ch]@9
  int v32; // [sp+8h] [bp-68h]@9
  int v33; // [sp+10h] [bp-60h]@7
  char v34; // [sp+14h] [bp-5Ch]@7
  int v35; // [sp+28h] [bp-48h]@7
  char v36; // [sp+2Ch] [bp-44h]@7
  int v37; // [sp+40h] [bp-30h]@1
  int v38; // [sp+48h] [bp-28h]@1
  int v39; // [sp+4Ch] [bp-24h]@1
  GradientRenderer *v40; // [sp+50h] [bp-20h]@1
  int v41; // [sp+54h] [bp-1Ch]@9

  v3 = a2;
  v4 = a3;
  j__ZNSt12__shared_ptrI16GradientRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v40);
  sub_DA7364((void **)&v38, "gradient_direction");
  sub_DA7364((void **)&v37, "vertical");
  UIResolvedDef::getAsString(&v39, (int)v4, (int **)&v38, &v37);
  v5 = sub_DA7374((const void **)&v39, "horizontal");
  v6 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  if ( v5 )
    GradientRenderer::setGradientDirection((int)v40, 0);
  else
    GradientRenderer::setGradientDirection((int)v40, 1);
  v9 = v40;
  sub_DA7364((void **)&v35, "color1");
  UIResolvedDef::getAsColor((int)&v36, (int)v4, (int **)&v35, (int)&Color::WHITE);
  sub_DA7364((void **)&v33, "color2");
  UIResolvedDef::getAsColor((int)&v34, (int)v4, (int **)&v33, (int)&Color::WHITE);
  GradientRenderer::setGradientColors(v9, (const Color *)&v36, (const Color *)&v34);
  v10 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v31 = v40;
  v32 = v41;
  if ( v41 )
    v12 = (unsigned int *)(v41 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  result = CustomRenderComponent::setRenderer((int)v3, (int)&v31);
  v15 = v32;
  if ( v32 )
    v16 = (unsigned int *)(v32 + 4);
        result = (unsigned int *)__ldrex(v16);
      while ( __strex((unsigned int)result - 1, v16) );
      result = (unsigned int *)(*v16)--;
    if ( result == (unsigned int *)1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v17);
        while ( __strex((unsigned int)result - 1, v17) );
      }
      else
        result = (unsigned int *)(*v17)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v18 = v41;
    v19 = (unsigned int *)(v41 + 4);
        result = (unsigned int *)__ldrex(v19);
      while ( __strex((unsigned int)result - 1, v19) );
      result = (unsigned int *)(*v19)--;
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          result = (unsigned int *)__ldrex(v20);
        while ( __strex((unsigned int)result - 1, v20) );
        result = (unsigned int *)(*v20)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


void __fastcall UIControlFactory::_populateInputComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r9@1
  UIControl *v4; // r5@1
  const UIResolvedDef *v5; // r8@1
  UIComponent *v6; // r6@1
  char v7; // r0@3
  int v8; // r6@6
  InputComponent *v9; // r4@7
  Json::Value *v10; // r6@9
  void *v11; // r0@9
  Json::ValueIteratorBase *v12; // r5@12
  UIResolvedDef *v13; // r7@12
  void **v14; // r11@12
  const Json::ValueIteratorBase *v15; // r10@12
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  const char *v20; // r6@24
  void **v21; // r5@24
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int *v30; // r2@41
  signed int v31; // r1@43
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  unsigned int *v34; // r2@49
  signed int v35; // r1@51
  unsigned int *v36; // r2@53
  signed int v37; // r1@55
  unsigned int *v38; // r2@57
  signed int v39; // r1@59
  unsigned int *v40; // r2@61
  signed int v41; // r1@63
  unsigned int *v42; // r2@65
  signed int v43; // r1@67
  unsigned int *v44; // r2@69
  signed int v45; // r1@71
  unsigned int *v46; // r2@73
  signed int v47; // r1@75
  unsigned int *v48; // r2@85
  signed int v49; // r1@87
  unsigned int *v50; // r2@105
  signed int v51; // r1@107
  unsigned int *v52; // r2@109
  signed int v53; // r1@111
  unsigned int *v54; // r2@113
  signed int v55; // r1@115
  unsigned int *v56; // r2@117
  signed int v57; // r1@119
  unsigned int *v58; // r2@121
  signed int v59; // r1@123
  Json::Value *v60; // r6@181
  void *v61; // r0@183
  void *v62; // r0@184
  void *v63; // r0@185
  void *v64; // r0@186
  void *v65; // r0@187
  void *v66; // r0@188
  void *v67; // r0@189
  void *v68; // r0@190
  void *v69; // r0@191
  void *v70; // r0@192
  char v71; // r10@193
  void *v72; // r0@193
  char v73; // r4@194
  void *v74; // r0@194
  char v75; // r6@195
  void *v76; // r0@195
  char v77; // r5@196
  void *v78; // r0@196
  char v79; // r11@197
  char v80; // r4@197
  void *v81; // r0@197
  int v82; // r5@201
  signed int v83; // r10@208
  int v84; // r7@212
  int v85; // r0@215
  __int16 v86; // r6@217
  __int16 v87; // r0@217
  int v88; // r0@221
  void *v89; // r0@222
  void *v90; // r0@223
  void *v91; // r0@224
  void *v92; // r0@225
  void *v93; // r0@226
  int v94; // r0@229
  void *v95; // r0@229
  int v96; // r0@230
  void *v97; // r0@230
  char v98; // r0@231
  void *v99; // r0@231
  char v100; // r0@232
  void *v101; // r0@232
  char v102; // r0@233
  void *v103; // r0@233
  char v104; // r0@234
  void *v105; // r0@234
  unsigned int *v106; // r2@236
  signed int v107; // r1@238
  unsigned int *v108; // r2@240
  signed int v109; // r1@242
  unsigned int *v110; // r2@244
  signed int v111; // r1@246
  unsigned int *v112; // r2@248
  signed int v113; // r1@250
  unsigned int *v114; // r2@252
  signed int v115; // r1@254
  unsigned int *v116; // r2@256
  signed int v117; // r1@258
  char v118; // [sp+50h] [bp-168h]@197
  char v119; // [sp+54h] [bp-164h]@197
  char v120; // [sp+58h] [bp-160h]@197
  int v121; // [sp+60h] [bp-158h]@183
  int v122; // [sp+70h] [bp-148h]@234
  int v123; // [sp+78h] [bp-140h]@233
  int v124; // [sp+80h] [bp-138h]@232
  int v125; // [sp+88h] [bp-130h]@231
  int v126; // [sp+90h] [bp-128h]@230
  int v127; // [sp+98h] [bp-120h]@229
  int v128; // [sp+A0h] [bp-118h]@85
  int v129; // [sp+A8h] [bp-110h]@73
  int v130; // [sp+B0h] [bp-108h]@69
  int v131; // [sp+B8h] [bp-100h]@65
  int v132; // [sp+C0h] [bp-F8h]@61
  int v133; // [sp+C8h] [bp-F0h]@53
  int v134; // [sp+D0h] [bp-E8h]@57
  int v135; // [sp+D4h] [bp-E4h]@105
  int v136; // [sp+DCh] [bp-DCh]@45
  int v137; // [sp+E4h] [bp-D4h]@49
  int v138; // [sp+E8h] [bp-D0h]@109
  int v139; // [sp+F0h] [bp-C8h]@37
  int v140; // [sp+F8h] [bp-C0h]@41
  int v141; // [sp+FCh] [bp-BCh]@113
  int v142; // [sp+104h] [bp-B4h]@12
  int v143; // [sp+10Ch] [bp-ACh]@24
  int v144; // [sp+110h] [bp-A8h]@117
  int v145; // [sp+118h] [bp-A0h]@21
  int v146; // [sp+120h] [bp-98h]@25
  int v147; // [sp+124h] [bp-94h]@121
  char v148; // [sp+128h] [bp-90h]@12
  char v149; // [sp+174h] [bp-44h]@11
  char v150; // [sp+17Ch] [bp-3Ch]@11
  int v151; // [sp+188h] [bp-30h]@9
  UIComponent *v152; // [sp+18Ch] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x50u);
  InputComponent::InputComponent(v6, v4);
  v152 = v6;
  UIControl::setComponent<InputComponent>(v4, &v152);
  if ( v152 )
    (*(void (**)(void))(*(_DWORD *)v152 + 4))();
  v152 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
  {
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  }
  v8 = type_id<UIComponent,InputComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
    v9 = *(InputComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v151, "button_mappings");
  v10 = UIResolvedDef::getValue((int)v5, (int **)&v151, 0);
  v11 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v151 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  if ( Json::Value::isArray(v10) == 1 )
    Json::Value::begin((Json::Value *)&v150, (int)v10);
    Json::Value::end((Json::Value *)&v149, (int)v10);
    if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v150, (const Json::ValueIteratorBase *)&v149) )
      v12 = (Json::ValueIteratorBase *)&v150;
      v13 = (UIResolvedDef *)&v148;
      v14 = (void **)&v142;
      v15 = (const Json::ValueIteratorBase *)&v149;
      {
        v60 = (Json::Value *)Json::ValueIteratorBase::deref(v12);
        if ( Json::Value::isObject(v60) == 1 )
        {
          UIResolvedDef::UIResolvedDef((int)v13, (int)v3 + 40, (int)v60);
          if ( !UIResolvedDef::isIgnored(v13) )
          {
            v121 = (int)v9;
            sub_DA7364((void **)&v146, "from_button_id");
            v20 = (const char *)&unk_257BC67;
            sub_DA7364((void **)&v145, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v147, (int)v13, (int **)&v146, &v145);
            v21 = (void **)&v143;
            v61 = (void *)(v145 - 12);
            if ( (int *)(v145 - 12) != &dword_28898C0 )
            {
              v18 = (unsigned int *)(v145 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v20 = (const char *)&unk_257BC67;
                v21 = (void **)&v143;
              }
              else
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j_j__ZdlPv_9(v61);
            }
            v62 = (void *)(v146 - 12);
            if ( (int *)(v146 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v146 - 4);
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j_j__ZdlPv_9(v62);
            sub_DA7364(v21, "to_button_id");
            sub_DA7364(v14, v20);
            UIResolvedDef::getAsString(&v144, (int)v13, (int **)v21, (int *)v14);
            v63 = (void *)(v142 - 12);
            if ( (int *)(v142 - 12) != &dword_28898C0 )
              v24 = (unsigned int *)(v142 - 4);
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
                v25 = (*v24)--;
              if ( v25 <= 0 )
                j_j_j_j_j__ZdlPv_9(v63);
            v64 = (void *)(v143 - 12);
            if ( (int *)(v143 - 12) != &dword_28898C0 )
              v26 = (unsigned int *)(v143 - 4);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j_j__ZdlPv_9(v64);
            sub_DA7364((void **)&v140, "mapping_type");
            sub_DA7364((void **)&v139, v20);
            UIResolvedDef::getAsString(&v141, (int)v13, (int **)&v140, &v139);
            v65 = (void *)(v139 - 12);
            if ( (int *)(v139 - 12) != &dword_28898C0 )
              v28 = (unsigned int *)(v139 - 4);
                  v29 = __ldrex(v28);
                while ( __strex(v29 - 1, v28) );
                v29 = (*v28)--;
              if ( v29 <= 0 )
                j_j_j_j_j__ZdlPv_9(v65);
            v66 = (void *)(v140 - 12);
            if ( (int *)(v140 - 12) != &dword_28898C0 )
              v30 = (unsigned int *)(v140 - 4);
                  v31 = __ldrex(v30);
                while ( __strex(v31 - 1, v30) );
                v31 = (*v30)--;
              if ( v31 <= 0 )
                j_j_j_j_j__ZdlPv_9(v66);
            sub_DA7364((void **)&v137, "scope");
            sub_DA7364((void **)&v136, v20);
            UIResolvedDef::getAsString(&v138, (int)v13, (int **)&v137, &v136);
            v67 = (void *)(v136 - 12);
            if ( (int *)(v136 - 12) != &dword_28898C0 )
              v32 = (unsigned int *)(v136 - 4);
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j_j__ZdlPv_9(v67);
            v68 = (void *)(v137 - 12);
            if ( (int *)(v137 - 12) != &dword_28898C0 )
              v34 = (unsigned int *)(v137 - 4);
                  v35 = __ldrex(v34);
                while ( __strex(v35 - 1, v34) );
                v35 = (*v34)--;
              if ( v35 <= 0 )
                j_j_j_j_j__ZdlPv_9(v68);
            sub_DA7364((void **)&v134, "input_mode_condition");
            sub_DA7364((void **)&v133, v20);
            UIResolvedDef::getAsString(&v135, (int)v13, (int **)&v134, &v133);
            v69 = (void *)(v133 - 12);
            if ( (int *)(v133 - 12) != &dword_28898C0 )
              v36 = (unsigned int *)(v133 - 4);
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j_j__ZdlPv_9(v69);
            v70 = (void *)(v134 - 12);
            if ( (int *)(v134 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v134 - 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j_j__ZdlPv_9(v70);
            sub_DA7364((void **)&v132, "button_up_right_of_first_refusal");
            v71 = UIResolvedDef::getAsBool((int)v13, (int **)&v132, 0);
            v72 = (void *)(v132 - 12);
            if ( (int *)(v132 - 12) != &dword_28898C0 )
              v40 = (unsigned int *)(v132 - 4);
                  v41 = __ldrex(v40);
                while ( __strex(v41 - 1, v40) );
                v41 = (*v40)--;
              if ( v41 <= 0 )
                j_j_j_j_j__ZdlPv_9(v72);
            sub_DA7364((void **)&v131, "handle_select");
            v73 = UIResolvedDef::getAsBool((int)v13, (int **)&v131, 1);
            v74 = (void *)(v131 - 12);
            if ( (int *)(v131 - 12) != &dword_28898C0 )
              v42 = (unsigned int *)(v131 - 4);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j_j__ZdlPv_9(v74);
            sub_DA7364((void **)&v130, "handle_deselect");
            v75 = UIResolvedDef::getAsBool((int)v13, (int **)&v130, 1);
            v76 = (void *)(v130 - 12);
            if ( (int *)(v130 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)(v130 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j_j__ZdlPv_9(v76);
            sub_DA7364((void **)&v129, "alternate_input_scope");
            v77 = UIResolvedDef::getAsBool((int)v13, (int **)&v129, 0);
            v78 = (void *)(v129 - 12);
            if ( (int *)(v129 - 12) != &dword_28898C0 )
              v46 = (unsigned int *)(v129 - 4);
                  v47 = __ldrex(v46);
                while ( __strex(v47 - 1, v46) );
                v47 = (*v46)--;
              if ( v47 <= 0 )
                j_j_j_j_j__ZdlPv_9(v78);
            sub_DA7364((void **)&v128, "consume_event");
            v79 = UIResolvedDef::getAsBool((int)v13, (int **)&v128, 1);
            v118 = v73;
            v119 = v77;
            v120 = v75;
            v80 = v71;
            v81 = (void *)(v128 - 12);
            if ( (int *)(v128 - 12) != &dword_28898C0 )
              v48 = (unsigned int *)(v128 - 4);
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
                v49 = (*v48)--;
              if ( v49 <= 0 )
                j_j_j_j_j__ZdlPv_9(v81);
            if ( sub_DA7374((const void **)&v141, "global") )
              if ( sub_DA7374((const void **)&v141, "double_pressed") )
                if ( sub_DA7374((const void **)&v141, "pressed") )
                {
                  v82 = 2;
                  if ( !sub_DA7374((const void **)&v141, "focused") )
                    v82 = 3;
                }
                else
                v82 = 1;
            else
              v82 = 0;
            if ( sub_DA7374((const void **)&v138, "controller") )
              v83 = 0;
              if ( !sub_DA7374((const void **)&v138, "view") )
                v83 = 1;
            v84 = 0;
            if ( !sub_DA7374((const void **)&v135, "gamepad_and_not_gaze") )
              v84 = 1;
            if ( sub_DA7374((const void **)&v147, "any") )
              v85 = *(_DWORD *)(v144 - 12);
              if ( *(_DWORD *)(v147 - 12) )
                if ( v85 )
                  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v144);
                  v86 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v147);
                  v87 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v144);
                  InputComponent::addButtonMapping(v121, v86, v87, v82, v83, v80, v118, v120, v119, v79, v84);
              else if ( v82 == 2 && v85 )
                NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v144);
                v88 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v144);
                InputComponent::addHoverButtonMapping(v121, v88, v83);
              InputComponent::addRemappingMapping(v121, v83);
            v14 = (void **)&v142;
            v15 = (const Json::ValueIteratorBase *)&v149;
            v89 = (void *)(v135 - 12);
            if ( (int *)(v135 - 12) != &dword_28898C0 )
              v50 = (unsigned int *)(v135 - 4);
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v51 = (*v50)--;
              if ( v51 <= 0 )
                j_j_j_j_j__ZdlPv_9(v89);
            v12 = (Json::ValueIteratorBase *)&v150;
            v9 = (InputComponent *)v121;
            v90 = (void *)(v138 - 12);
            if ( (int *)(v138 - 12) != &dword_28898C0 )
              v52 = (unsigned int *)(v138 - 4);
                  v53 = __ldrex(v52);
                while ( __strex(v53 - 1, v52) );
                v53 = (*v52)--;
              if ( v53 <= 0 )
                j_j_j_j_j__ZdlPv_9(v90);
            v13 = (UIResolvedDef *)&v148;
            v91 = (void *)(v141 - 12);
            if ( (int *)(v141 - 12) != &dword_28898C0 )
              v54 = (unsigned int *)(v141 - 4);
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
                v13 = (UIResolvedDef *)&v148;
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j_j__ZdlPv_9(v91);
            v92 = (void *)(v144 - 12);
            if ( (int *)(v144 - 12) != &dword_28898C0 )
              v56 = (unsigned int *)(v144 - 4);
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
                v57 = (*v56)--;
              if ( v57 <= 0 )
                j_j_j_j_j__ZdlPv_9(v92);
            v93 = (void *)(v147 - 12);
            if ( (int *)(v147 - 12) != &dword_28898C0 )
              v58 = (unsigned int *)(v147 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j_j__ZdlPv_9(v93);
          }
          UIResolvedDef::~UIResolvedDef(v13);
        }
        Json::ValueIteratorBase::increment(v12);
      }
      while ( !Json::ValueIteratorBase::isEqual(v12, v15) );
  sub_DA7364((void **)&v127, "modal");
  v94 = UIResolvedDef::getAsBool((int)v5, (int **)&v127, 0);
  InputComponent::setModal(v9, v94);
  v95 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v127 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9(v95);
  sub_DA7364((void **)&v126, "inline_modal");
  v96 = UIResolvedDef::getAsBool((int)v5, (int **)&v126, 0);
  InputComponent::setInlineModal(v9, v96);
  v97 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v126 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9(v97);
  sub_DA7364((void **)&v125, "always_listen_to_input");
  v98 = UIResolvedDef::getAsBool((int)v5, (int **)&v125, 0);
  InputComponent::setAlwaysListensToInput(v9, v98);
  v99 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v125 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9(v99);
  sub_DA7364((void **)&v124, "always_handle_pointer");
  v100 = UIResolvedDef::getAsBool((int)v5, (int **)&v124, 0);
  InputComponent::setAlwaysHandlePointer(v9, v100);
  v101 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v124 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9(v101);
  sub_DA7364((void **)&v123, "always_handle_controller_direction");
  v102 = UIResolvedDef::getAsBool((int)v5, (int **)&v123, 0);
  InputComponent::setAlwaysHandleControllerDirection(v9, v102);
  v103 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v123 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9(v103);
  sub_DA7364((void **)&v122, "hover_enabled");
  v104 = UIResolvedDef::getAsBool((int)v5, (int **)&v122, 1);
  InputComponent::setHoverEnabled(v9, v104);
  v105 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v122 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9(v105);
}


void __fastcall UIControlFactory::_createGrid(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createGrid(this, a2, a3);
}


void __fastcall UIControlFactory::_populateTextEditComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r7@1
  UIControl *v4; // r8@1
  const UIResolvedDef *v5; // r4@1
  TextEditComponent *v6; // r5@1
  char v7; // r0@3
  int v8; // r5@6
  TextEditComponent *v9; // r5@7
  void *v10; // r0@9
  void *v11; // r0@10
  __int16 v12; // r0@11
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  char v16; // r0@14
  void *v17; // r0@14
  char v18; // r0@15
  void *v19; // r0@15
  void *v20; // r0@16
  void *v21; // r0@17
  int v22; // r0@24
  void *v23; // r0@24
  void *v24; // r0@25
  __int64 v25; // r1@25
  void *v26; // r0@27
  void *v27; // r0@28
  void *v28; // r0@29
  void *v29; // r0@30
  __int64 v30; // r1@30
  void *v31; // r0@32
  void *v32; // r0@33
  void *v33; // r0@34
  char v34; // r0@35
  void *v35; // r0@35
  void *v36; // r0@36
  void *v37; // r0@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@47
  signed int v43; // r1@49
  unsigned int *v44; // r2@51
  signed int v45; // r1@53
  unsigned int *v46; // r2@55
  signed int v47; // r1@57
  unsigned int *v48; // r2@59
  signed int v49; // r1@61
  unsigned int *v50; // r2@63
  signed int v51; // r1@65
  unsigned int *v52; // r2@67
  signed int v53; // r1@69
  unsigned int *v54; // r2@71
  signed int v55; // r1@73
  unsigned int *v56; // r2@75
  signed int v57; // r1@77
  unsigned int *v58; // r2@79
  signed int v59; // r1@81
  unsigned int *v60; // r2@83
  signed int v61; // r1@85
  unsigned int *v62; // r2@87
  signed int v63; // r1@89
  unsigned int *v64; // r2@91
  signed int v65; // r1@93
  unsigned int *v66; // r2@95
  signed int v67; // r1@97
  unsigned int *v68; // r2@99
  signed int v69; // r1@101
  unsigned int *v70; // r2@103
  signed int v71; // r1@105
  unsigned int *v72; // r2@107
  signed int v73; // r1@109
  unsigned int *v74; // r2@111
  signed int v75; // r1@113
  int v76; // [sp+8h] [bp-C0h]@35
  void *v77; // [sp+Ch] [bp-BCh]@30
  __int64 v78; // [sp+14h] [bp-B4h]@30
  int v79; // [sp+20h] [bp-A8h]@30
  int v80; // [sp+28h] [bp-A0h]@30
  int v81; // [sp+2Ch] [bp-9Ch]@30
  void *v82; // [sp+30h] [bp-98h]@25
  __int64 v83; // [sp+38h] [bp-90h]@25
  int v84; // [sp+44h] [bp-84h]@25
  int v85; // [sp+4Ch] [bp-7Ch]@25
  int v86; // [sp+50h] [bp-78h]@25
  int v87; // [sp+58h] [bp-70h]@24
  int v88; // [sp+60h] [bp-68h]@16
  int v89; // [sp+68h] [bp-60h]@16
  int v90; // [sp+6Ch] [bp-5Ch]@16
  int v91; // [sp+74h] [bp-54h]@15
  int v92; // [sp+7Ch] [bp-4Ch]@14
  int v93; // [sp+84h] [bp-44h]@11
  int v94; // [sp+8Ch] [bp-3Ch]@11
  int v95; // [sp+90h] [bp-38h]@11
  int v96; // [sp+98h] [bp-30h]@9
  int v97; // [sp+A0h] [bp-28h]@9
  int v98; // [sp+A4h] [bp-24h]@9
  TextEditComponent *v99; // [sp+A8h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (TextEditComponent *)operator new(0x30u);
  TextEditComponent::TextEditComponent(v6, v4);
  v99 = v6;
  UIControl::setComponent<TextEditComponent>(v4, &v99);
  if ( v99 )
    (*(void (**)(void))(*(_DWORD *)v99 + 4))();
  v99 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
  {
    type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
  }
  v8 = type_id<UIComponent,TextEditComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
    v9 = *(TextEditComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  TextEditComponent::setFont(v9, *((Font **)v3 + 13));
  sub_DA7364((void **)&v97, "text_box_name");
  sub_DA7364((void **)&v96, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v98, (int)v5, (int **)&v97, &v96);
  v10 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v96 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    }
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v97 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v98);
  v12 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v98);
  TextEditComponent::setTextEditComponentId(v9, v12);
  sub_DA7364((void **)&v94, "text_edit_box_grid_collection_name");
  sub_DA7364((void **)&v93, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v95, (int)v5, (int **)&v94, &v93);
  TextEditComponent::setGridCollectionName((int)v9, &v95);
  v13 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v95 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v93 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v94 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  sub_DA7364((void **)&v92, "constrain_to_rect");
  v16 = UIResolvedDef::getAsBool((int)v5, (int **)&v92, 0);
  TextEditComponent::setConstrainedToRect(v9, v16);
  v17 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v92 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v91, "enabled_newline");
  v18 = UIResolvedDef::getAsBool((int)v5, (int **)&v91, 0);
  TextEditComponent::setEnabledNewline(v9, v18);
  v19 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v91 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  sub_DA7364((void **)&v89, "text_type");
  sub_DA7364((void **)&v88, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v90, (int)v5, (int **)&v89, &v88);
  v20 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v88 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v89 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  if ( sub_DA7374((const void **)&v90, "ExtendedASCII") )
    if ( sub_DA7374((const void **)&v90, "IdentifierChars") )
      if ( !sub_DA7374((const void **)&v90, "NumberChars") )
        TextEditComponent::setTextType((int)v9, 2);
      TextEditComponent::setTextType((int)v9, 1);
    TextEditComponent::setTextType((int)v9, 0);
  sub_DA7364((void **)&v87, "max_length");
  v22 = UIResolvedDef::getAsInt((int)v5, (int **)&v87, 0);
  TextEditComponent::setMaxLength(v9, v22);
  v23 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v87 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  sub_DA7364((void **)&v85, "text_control");
  sub_DA7364((void **)&v84, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v86, (int)v5, (int **)&v85, &v84);
  v24 = operator new(1u);
  LODWORD(v25) = sub_C7CE8C;
  v82 = v24;
  HIDWORD(v25) = sub_C7CC58;
  v83 = v25;
  UIControl::_registerControlNameResolver((int)v4, &v86, 1, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  v26 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v86 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v84 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v85 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  sub_DA7364((void **)&v80, "place_holder_control");
  sub_DA7364((void **)&v79, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v81, (int)v5, (int **)&v80, &v79);
  v29 = operator new(1u);
  LODWORD(v30) = sub_C7D0F0;
  v77 = v29;
  HIDWORD(v30) = sub_C7CEBC;
  v78 = v30;
  UIControl::_registerControlNameResolver((int)v4, &v81, 1, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v31 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v81 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v79 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v80 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  sub_DA7364((void **)&v76, "can_be_deselected");
  v34 = UIResolvedDef::getAsBool((int)v5, (int **)&v76, 1);
  TextEditComponent::setCanBeDeselected(v9, v34);
  v35 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v76 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v90 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v98 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
}


void __fastcall UIControlFactory::_createEditBox(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  UIControlFactory *v8; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v11, "{edit_box}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateButtonComponent(v8, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateTextEditComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_populateDebugRendererComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r5@1
  UIControl *v4; // r4@1
  void *v5; // r0@1
  void *v6; // r0@2
  int v7; // r1@3
  char *v8; // r7@12
  char *v9; // r7@12
  int v10; // r5@12
  char v11; // r1@14
  signed int v12; // r0@15
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  char *v17; // r0@44
  void *v18; // r0@44
  DebugComponent *v19; // r5@46
  char v20; // r0@48
  int v21; // r5@51
  int v22; // r5@52
  char *v23; // r0@54
  RenderableComponent *v24; // r5@55
  char v25; // r0@57
  int v26; // r5@60
  SpriteComponent *v27; // r5@61
  char *v28; // r0@63
  char *v29; // r0@64
  void *v30; // r0@66
  unsigned int *v31; // r2@68
  signed int v32; // r1@70
  unsigned int *v33; // r2@72
  signed int v34; // r1@74
  unsigned int *v35; // r2@76
  signed int v36; // r1@78
  unsigned int *v37; // r2@80
  signed int v38; // r1@82
  unsigned int *v39; // r2@100
  signed int v40; // r1@102
  int v41; // [sp+0h] [bp-130h]@65
  int v42; // [sp+10h] [bp-120h]@65
  signed int v43; // [sp+14h] [bp-11Ch]@65
  int v44; // [sp+18h] [bp-118h]@65
  int v45; // [sp+1Ch] [bp-114h]@65
  char *v46; // [sp+24h] [bp-10Ch]@63
  char *v47; // [sp+28h] [bp-108h]@63
  int v48; // [sp+2Ch] [bp-104h]@63
  RenderableComponent *v49; // [sp+30h] [bp-100h]@55
  char *v50; // [sp+34h] [bp-FCh]@54
  DebugComponent *v51; // [sp+38h] [bp-F8h]@46
  void **v52; // [sp+3Ch] [bp-F4h]@12
  void **v53; // [sp+40h] [bp-F0h]@44
  int v54; // [sp+5Ch] [bp-D4h]@45
  int v55; // [sp+64h] [bp-CCh]@44
  int v56; // [sp+68h] [bp-C8h]@45
  int v57; // [sp+F0h] [bp-40h]@4
  int v58; // [sp+F4h] [bp-3Ch]@4
  int v59; // [sp+F8h] [bp-38h]@4
  int v60; // [sp+FCh] [bp-34h]@4
  int v61; // [sp+104h] [bp-2Ch]@1
  int v62; // [sp+10Ch] [bp-24h]@1
  int v63; // [sp+110h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  sub_DA7364((void **)&v62, "debug");
  sub_DA7364((void **)&v61, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v63, (int)v3, (int **)&v62, &v61);
  v5 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v62 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = v63;
  if ( *(_DWORD *)(v63 - 12) )
    v57 = 1065353216;
    v58 = 0;
    v59 = 0;
    v60 = 1065353216;
    if ( sub_DA7374((const void **)&v63, "black") )
      if ( !sub_DA7374((const void **)&v63, "white") )
      {
        v57 = 1065353216;
        v58 = 1065353216;
        goto LABEL_30;
      }
      if ( sub_DA7374((const void **)&v63, "gray") )
        if ( !sub_DA7374((const void **)&v63, "red") )
        {
          v57 = 1065353216;
          v58 = 0;
          goto LABEL_41;
        }
        if ( sub_DA7374((const void **)&v63, "blue") )
          if ( !sub_DA7374((const void **)&v63, "green") )
          {
            v57 = 0;
            v58 = 1065353216;
            v59 = 0;
            v60 = 1065353216;
            goto LABEL_46;
          }
          if ( sub_DA7374((const void **)&v63, "yellow") )
            if ( sub_DA7374((const void **)&v63, "purple") )
            {
              sub_DA7A7C((int)&v52, 16);
              sub_DA78D4((char *)&v52, (int)"unrecognized debug color specified: ", 36);
              v8 = sub_DA78D4((char *)&v52, v63, *(_DWORD *)(v63 - 12));
              sub_DA78D4(v8, (int)" @ ", 3);
              sub_DA78D4(v8, (int)"_populateDebugRendererComponent", 31);
              sub_DA78D4(v8, (int)" (", 2);
              sub_DA78D4(
                v8,
                (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\Minecraft\\Minecraft.Client\\..\\..\\..\\..\\src-"
                     "client\\common\\client\\gui\\controls\\UIControlFactory.cpp",
                140);
              sub_DA78D4(v8, (int)":", 1);
              v9 = (char *)sub_DA78E4((int)v8, 791);
              sub_DA78D4(v9, (int)")", 1);
              v10 = *(_DWORD *)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12) + 124];
              if ( !v10 )
                sub_DA7ACC();
              if ( *(_BYTE *)(v10 + 28) )
              {
                v11 = *(_BYTE *)(v10 + 39);
              }
              else
                sub_DA7A9C(v10);
                v11 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v10 + 24))(v10, 10);
              v17 = sub_DA7AAC(v9, v11);
              sub_DA7ABC(v17);
              v52 = off_26D3F28;
              *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v52) = off_26D3F34;
              v53 = &off_27734E8;
              v18 = (void *)(v55 - 12);
              if ( (int *)(v55 - 12) != &dword_28898C0 )
                v39 = (unsigned int *)(v55 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                }
                else
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v18);
              v53 = &off_26D40A8;
              sub_DA76D4((unsigned int **)&v54);
              sub_DA76E4(&v56);
              goto LABEL_46;
            }
            v12 = 1056964608;
            v57 = 1056964608;
            v58 = 0;
            goto LABEL_19;
          v58 = 1065353216;
LABEL_41:
          v59 = 0;
          v60 = 1065353216;
          goto LABEL_46;
        v57 = 0;
        v58 = 0;
LABEL_30:
        v59 = 1065353216;
        v60 = 1065353216;
        goto LABEL_46;
      v12 = 1056964608;
      v12 = 0;
    v57 = v12;
    v58 = v12;
LABEL_19:
    v59 = v12;
LABEL_46:
    v19 = (DebugComponent *)operator new(0xCu);
    DebugComponent::DebugComponent(v19, v4);
    v51 = v19;
    UIControl::setComponent<DebugComponent>(v4, &v51);
    if ( v51 )
      (*(void (**)(void))(*(_DWORD *)v51 + 4))();
    v51 = 0;
    v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id;
    __dmb();
    if ( !(v20 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id) )
      type_id<UIComponent,DebugComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id);
    v21 = type_id<UIComponent,DebugComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,DebugComponent>(void)::id[0]) == 1 )
      v22 = *(_DWORD *)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v21));
      v22 = 0;
    v50 = (char *)&unk_28898CC;
    sub_DA7404((const void **)&v50, *(_DWORD *)(v63 - 12) + 6);
    sub_DA73D4((const void **)&v50, "debug ", 6u);
    sub_DA7564((const void **)&v50, (const void **)&v63);
    DebugComponent::setDescription(v22, (int *)&v50);
    v23 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    v24 = (RenderableComponent *)operator new(0xA4u);
    SpriteComponent::SpriteComponent(v24, v4);
    v49 = v24;
    UIControl::setComponent<SpriteComponent>(v4, &v49);
    if ( v49 )
      (*(void (**)(void))(*(_DWORD *)v49 + 4))();
    v49 = 0;
    v25 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
    if ( !(v25 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
      type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
    v26 = type_id<UIComponent,SpriteComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
      v27 = *(SpriteComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v26));
      v27 = 0;
    sub_DA7364((void **)&v46, "textures/ui/White");
    v47 = v46;
    v46 = (char *)&unk_28898CC;
    v48 = 0;
    SpriteComponent::setResourceLocation(v27, (const ResourceLocation *)&v47);
    v28 = v47 - 12;
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v47 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
    v29 = v46 - 12;
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v46 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
    v44 = 0;
    v45 = 0;
    SpriteComponent::setUV((int)v27, (int)&v44);
    v42 = 1065353216;
    v43 = 1065353216;
    SpriteComponent::setUVSize((int)v27, (int)&v42);
    ui::SliceSize::SliceSize((ui::SliceSize *)&v41, 1.0);
    SpriteComponent::setNineSliceSize(v27, (const ui::SliceSize *)&v41);
    SpriteComponent::setColor(v27, (const Color *)&v57);
    UIControl::setAlpha(v4, 0.2);
    v7 = v63;
  v30 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v7 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
}


void __fastcall UIControlFactory::_createStackPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  UIControlFactory *v8; // r0@5
  UIControlFactory *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v12, "{stack_panel}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v12);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateCollectionComponent(v8, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateStackPanelComponent(v9, v4, v3);
}


void __fastcall UIControlFactory::_createSlider(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createSlider(this, a2, a3);
}


void __fastcall UIControlFactory::_createSlider(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{slider}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSliderComponent(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 0);
}


void __fastcall UIControlFactory::_populateSliderComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateSliderComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateDataBindingComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r7@1
  UIControl *v4; // r6@1
  UIControlFactory *v5; // r8@1
  int v6; // r5@1
  void *v7; // r0@1
  UIComponent *v8; // r5@3
  char v9; // r0@5
  int v10; // r5@8
  DataBindingComponent *v11; // r10@9
  Json::Value *v12; // r5@11
  void *v13; // r0@11
  int v14; // r11@14
  Json::ValueIteratorBase *v15; // r8@14
  char *v16; // r6@14
  void **v17; // r4@14
  const Json::ValueIteratorBase *v18; // r7@14
  Json::Value *v19; // r5@15
  DataBindingComponent *v20; // r8@16
  signed int v21; // r10@16
  void *v22; // r0@16
  int v23; // r4@17
  void *v24; // r5@17 OVERLAPPED
  void *v25; // r6@17 OVERLAPPED
  UIResolvedDef *v26; // r6@20
  void *v27; // r0@22
  void *v28; // r0@23
  void *v29; // r0@24
  void *v30; // r0@25
  void *v31; // r0@26
  void *v32; // r0@27
  void *v33; // r0@28
  int v34; // r11@29
  void *v35; // r0@29
  int v36; // r1@31
  unsigned int v37; // r5@31
  char *v38; // r2@31
  int v39; // r3@31
  char *v40; // r5@34 OVERLAPPED
  char *v41; // r6@34 OVERLAPPED
  UIControl *v42; // r10@38
  void *v43; // r0@38
  void *v44; // r0@39
  void *v45; // r5@40 OVERLAPPED
  void *v46; // r6@40 OVERLAPPED
  void *v47; // r0@45
  void *v48; // r0@46
  void *v49; // r0@47
  int v50; // r5@48
  void *v51; // r0@48
  int v52; // r8@52
  int v53; // r1@53
  unsigned int v54; // r5@53
  char *v55; // r2@53
  int v56; // r3@53
  char *v57; // r6@56 OVERLAPPED
  unsigned int *v58; // r2@61
  signed int v59; // r1@63
  unsigned int *v60; // r2@65
  signed int v61; // r1@67
  unsigned int *v62; // r2@69
  signed int v63; // r1@71
  unsigned int *v64; // r2@73
  signed int v65; // r1@75
  unsigned int *v66; // r2@77
  signed int v67; // r1@79
  unsigned int *v68; // r2@81
  signed int v69; // r1@83
  unsigned int *v70; // r2@85
  signed int v71; // r1@87
  unsigned int *v72; // r2@89
  signed int v73; // r1@91
  unsigned int *v74; // r2@93
  signed int v75; // r1@95
  int *v76; // r0@97
  int v77; // r1@98
  unsigned int v78; // r6@98
  char *v79; // r2@98
  int v80; // r3@98
  char *v81; // ST48_4@101
  int v82; // ST50_4@101
  int v83; // ST4C_4@101
  char v84; // ST54_1@101
  void *v85; // r6@101
  char *v86; // r0@101
  int v87; // r0@101
  void *v88; // r0@103
  void *v89; // r5@104
  void *v91; // r0@109
  void *v92; // r5@110 OVERLAPPED
  void *v93; // r6@110 OVERLAPPED
  void *v94; // r0@115
  void *v95; // r0@117
  void *v96; // r0@118
  UIResolvedDef *v97; // r4@119
  void *v98; // r0@119
  void *v99; // r5@120 OVERLAPPED
  void *v100; // r6@120 OVERLAPPED
  unsigned int *v101; // r2@128
  signed int v102; // r1@130
  unsigned int *v103; // r2@132
  signed int v104; // r1@134
  unsigned int *v105; // r2@136
  signed int v106; // r1@138
  unsigned int *v107; // r2@188
  signed int v108; // r1@190
  unsigned int *v109; // r2@192
  signed int v110; // r1@194
  unsigned int *v111; // r2@196
  signed int v112; // r1@198
  unsigned int *v113; // r2@200
  signed int v114; // r1@202
  unsigned int *v115; // r2@204
  signed int v116; // r1@206
  unsigned int *v117; // r2@208
  signed int v118; // r1@210
  unsigned int *v119; // r2@212
  signed int v120; // r1@214
  unsigned int *v121; // r2@216
  signed int v122; // r1@218
  unsigned int *v123; // r2@220
  signed int v124; // r1@222
  unsigned int *v125; // r2@264
  signed int v126; // r1@266
  unsigned int *v127; // r2@272
  signed int v128; // r1@274
  int v129; // [sp+0h] [bp-1F0h]@0
  int v130; // [sp+4h] [bp-1ECh]@0
  int v131; // [sp+8h] [bp-1E8h]@0
  int v132; // [sp+Ch] [bp-1E4h]@0
  int v133; // [sp+10h] [bp-1E0h]@0
  int v134; // [sp+14h] [bp-1DCh]@0
  int v135; // [sp+18h] [bp-1D8h]@0
  int v136; // [sp+1Ch] [bp-1D4h]@0
  int v137; // [sp+20h] [bp-1D0h]@0
  int v138; // [sp+24h] [bp-1CCh]@0
  int v139; // [sp+28h] [bp-1C8h]@0
  char v140; // [sp+2Ch] [bp-1C4h]@0
  int v141; // [sp+30h] [bp-1C0h]@0
  int v142; // [sp+34h] [bp-1BCh]@0
  int *v143; // [sp+38h] [bp-1B8h]@14
  int (**v144)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+3Ch] [bp-1B4h]@14
  int v145; // [sp+40h] [bp-1B0h]@14
  int v146; // [sp+44h] [bp-1ACh]@13
  int v147; // [sp+48h] [bp-1A8h]@0
  char v148; // [sp+4Ch] [bp-1A4h]@0
  int v149; // [sp+58h] [bp-198h]@14
  void *v150; // [sp+5Ch] [bp-194h]@101
  void (*v151)(void); // [sp+64h] [bp-18Ch]@101
  void (__fastcall *v152)(int *, int, int); // [sp+68h] [bp-188h]@101
  int v153; // [sp+70h] [bp-180h]@48
  int v154; // [sp+78h] [bp-178h]@46
  int v155; // [sp+80h] [bp-170h]@46
  int v156; // [sp+84h] [bp-16Ch]@46
  __int64 v157; // [sp+88h] [bp-168h]@40
  int v158; // [sp+90h] [bp-160h]@40
  int v159; // [sp+94h] [bp-15Ch]@40
  int v160; // [sp+9Ch] [bp-154h]@40
  void *v161; // [sp+A0h] [bp-150h]@40
  int v162; // [sp+A4h] [bp-14Ch]@98
  char v163; // [sp+ACh] [bp-144h]@101
  int v164; // [sp+B4h] [bp-13Ch]@38
  int v165; // [sp+BCh] [bp-134h]@38
  int v166; // [sp+C0h] [bp-130h]@38
  char *v167; // [sp+C4h] [bp-12Ch]@53
  char *v168; // [sp+C8h] [bp-128h]@53
  char *v169; // [sp+CCh] [bp-124h]@53
  char v170; // [sp+D0h] [bp-120h]@56
  char *v171; // [sp+D4h] [bp-11Ch]@31
  char *v172; // [sp+D8h] [bp-118h]@31
  char *v173; // [sp+DCh] [bp-114h]@31
  char v174; // [sp+E0h] [bp-110h]@34
  int v175; // [sp+E8h] [bp-108h]@29
  int v176; // [sp+F0h] [bp-100h]@27
  int v177; // [sp+F8h] [bp-F8h]@27
  int v178; // [sp+FCh] [bp-F4h]@27
  int v179; // [sp+104h] [bp-ECh]@25
  int v180; // [sp+10Ch] [bp-E4h]@25
  int v181; // [sp+110h] [bp-E0h]@25
  int v182; // [sp+118h] [bp-D8h]@23
  int v183; // [sp+120h] [bp-D0h]@23
  int v184; // [sp+124h] [bp-CCh]@23
  __int64 v185; // [sp+128h] [bp-C8h]@17
  int v186; // [sp+130h] [bp-C0h]@17
  int v187; // [sp+134h] [bp-BCh]@17
  int v188; // [sp+13Ch] [bp-B4h]@17
  void *v189; // [sp+140h] [bp-B0h]@17
  int v190; // [sp+144h] [bp-ACh]@31
  char v191; // [sp+14Ch] [bp-A4h]@34
  int v192; // [sp+154h] [bp-9Ch]@14
  char v193; // [sp+158h] [bp-98h]@14
  char v194; // [sp+1A4h] [bp-4Ch]@13
  char v195; // [sp+1ACh] [bp-44h]@13
  int v196; // [sp+1B8h] [bp-38h]@11
  UIComponent *v197; // [sp+1BCh] [bp-34h]@3
  int v198; // [sp+1C4h] [bp-2Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v198, "bindings");
  v6 = UIResolvedDef::hasValue((int)v3, (int **)&v198);
  v7 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
  {
    v125 = (unsigned int *)(v198 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
    }
    else
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 )
    v8 = (UIComponent *)operator new(0x30u);
    DataBindingComponent::DataBindingComponent(v8, v4);
    v197 = v8;
    UIControl::setComponent<DataBindingComponent>(v4, &v197);
    if ( v197 )
      (*(void (**)(void))(*(_DWORD *)v197 + 4))();
    v197 = 0;
    v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
    __dmb();
    if ( !(v9 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
      type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
    v10 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
      v11 = *(DataBindingComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v10));
      v11 = 0;
    sub_DA7364((void **)&v196, "bindings");
    v12 = UIResolvedDef::getValue((int)v3, (int **)&v196, 0);
    v13 = (void *)(v196 - 12);
    if ( (int *)(v196 - 12) != &dword_28898C0 )
      v127 = (unsigned int *)(v196 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v128 = __ldrex(v127);
        while ( __strex(v128 - 1, v127) );
      }
      else
        v128 = (*v127)--;
      if ( v128 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    if ( Json::Value::isArray(v12) == 1 )
      v146 = (int)v4;
      Json::Value::begin((Json::Value *)&v195, (int)v12);
      Json::Value::end((Json::Value *)&v194, (int)v12);
      if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v195, (const Json::ValueIteratorBase *)&v194) )
        v14 = (int)v5 + 40;
        v143 = &v149;
        v15 = (Json::ValueIteratorBase *)&v195;
        v16 = &v193;
        v17 = (void **)&v192;
        v18 = (const Json::ValueIteratorBase *)&v194;
        v145 = v14;
        v144 = &pthread_create;
        {
          v19 = (Json::Value *)Json::ValueIteratorBase::deref(v15);
          if ( Json::Value::isObject(v19) == 1 )
          {
            v20 = v11;
            UIResolvedDef::UIResolvedDef((int)v16, v14, (int)v19);
            sub_DA7364(v17, "binding_type");
            v21 = UIResolvedDef::getAsBindingType((int)v16, (int **)v17, 1);
            v22 = (void *)(v192 - 12);
            if ( (int *)(v192 - 12) != &dword_28898C0 )
            {
              v58 = (unsigned int *)(v192 - 4);
              if ( v144 )
              {
                __dmb();
                do
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
              }
              else
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j_j__ZdlPv_9(v22);
            }
            sub_DA7364((void **)&v188, "binding_name");
            v186 = 0;
            v187 = 0;
            v185 = 0LL;
            LOBYTE(v187) = 1;
            UIResolvedDef::getAsPropetyEvaluation(
              (int)&v189,
              (int)v16,
              (int)&v188,
              (int)&v185,
              v129,
              v130,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136,
              v137,
              v138,
              v139,
              v140,
              v141,
              v142,
              (int)v143,
              (int)v144,
              v145,
              v146,
              v147,
              v148);
            v23 = (int)v16;
            *(_QWORD *)&v24 = v185;
            if ( (_DWORD)v185 != HIDWORD(v185) )
              do
                std::_Destroy<ExprToken>((int)v24);
                v24 = (char *)v24 + 48;
              while ( v25 != v24 );
              v24 = (void *)v185;
            v26 = (UIResolvedDef *)v23;
            if ( v24 )
              operator delete(v24);
            v27 = (void *)(v188 - 12);
            if ( (int *)(v188 - 12) != &dword_28898C0 )
              v60 = (unsigned int *)(v188 - 4);
                  v61 = __ldrex(v60);
                while ( __strex(v61 - 1, v60) );
                v61 = (*v60)--;
              if ( v61 <= 0 )
                j_j_j_j_j__ZdlPv_9(v27);
            sub_DA7364((void **)&v183, "binding_name_override");
            sub_DA7364((void **)&v182, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v184, v23, (int **)&v183, &v182);
            v28 = (void *)(v182 - 12);
            if ( (int *)(v182 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v182 - 4);
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
                v63 = (*v62)--;
              if ( v63 <= 0 )
                j_j_j_j_j__ZdlPv_9(v28);
            v29 = (void *)(v183 - 12);
            if ( (int *)(v183 - 12) != &dword_28898C0 )
              v64 = (unsigned int *)(v183 - 4);
                  v65 = __ldrex(v64);
                while ( __strex(v65 - 1, v64) );
                v65 = (*v64)--;
              if ( v65 <= 0 )
                j_j_j_j_j__ZdlPv_9(v29);
            sub_DA7364((void **)&v180, "binding_collection_name");
            sub_DA7364((void **)&v179, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v181, v23, (int **)&v180, &v179);
            v30 = (void *)(v179 - 12);
            if ( (int *)(v179 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)(v179 - 4);
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j_j__ZdlPv_9(v30);
            v31 = (void *)(v180 - 12);
            if ( (int *)(v180 - 12) != &dword_28898C0 )
              v68 = (unsigned int *)(v180 - 4);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j_j__ZdlPv_9(v31);
            sub_DA7364((void **)&v177, "binding_collection_prefix");
            sub_DA7364((void **)&v176, (const char *)&unk_257BC67);
            UIResolvedDef::getAsString(&v178, v23, (int **)&v177, &v176);
            v32 = (void *)(v176 - 12);
            if ( (int *)(v176 - 12) != &dword_28898C0 )
              v70 = (unsigned int *)(v176 - 4);
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
                v71 = (*v70)--;
              if ( v71 <= 0 )
                j_j_j_j_j__ZdlPv_9(v32);
            v33 = (void *)(v177 - 12);
            if ( (int *)(v177 - 12) != &dword_28898C0 )
              v72 = (unsigned int *)(v177 - 4);
                  v73 = __ldrex(v72);
                while ( __strex(v73 - 1, v72) );
                v73 = (*v72)--;
              if ( v73 <= 0 )
                j_j_j_j_j__ZdlPv_9(v33);
            sub_DA7364((void **)&v175, "binding_condition");
            v34 = UIResolvedDef::getAsBindingCondition(v23, (int **)&v175, 0);
            v35 = (void *)(v175 - 12);
            if ( (int *)(v175 - 12) != &dword_28898C0 )
              v74 = (unsigned int *)(v175 - 4);
                  v75 = __ldrex(v74);
                while ( __strex(v75 - 1, v74) );
                v75 = (*v74)--;
              if ( v75 <= 0 )
                j_j_j_j_j__ZdlPv_9(v35);
            switch ( v21 )
              case 1:
                v36 = v190;
                v37 = -1431655765 * ((v190 - (signed int)v189) >> 4);
                v38 = 0;
                v39 = v190;
                v171 = 0;
                v172 = 0;
                v173 = 0;
                if ( (void *)v190 != v189 )
                {
                  if ( v37 >= 0x5555556 )
                    sub_DA7414();
                  v38 = (char *)operator new(v190 - (_DWORD)v189);
                  v36 = v190;
                  v39 = (int)v189;
                }
                v171 = v38;
                v172 = v38;
                v173 = &v38[48 * v37];
                v172 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                 v39,
                                 v36,
                                 (int)v38);
                v174 = v191;
                DataBindingComponent::addGlobalBinding(v20, (unsigned __int64 *)&v171, (const void **)&v184, v34);
                *(_QWORD *)&v40 = *(_QWORD *)&v171;
                if ( v171 != v172 )
                  do
                  {
                    std::_Destroy<ExprToken>((int)v40);
                    v40 += 48;
                  }
                  while ( v41 != v40 );
                  v40 = v171;
                goto LABEL_59;
              case 3:
                DataBindingComponent::addCollectionDetailsBinding((int)v20, &v181, &v178, v34);
                break;
              case 4:
                sub_DA7364((void **)&v165, "source_control_name");
                v42 = (UIControl *)v146;
                sub_DA7364((void **)&v164, (const char *)&unk_257BC67);
                UIResolvedDef::getAsString(&v166, v23, (int **)&v165, &v164);
                v43 = (void *)(v164 - 12);
                if ( (int *)(v164 - 12) != &dword_28898C0 )
                  v107 = (unsigned int *)(v164 - 4);
                  if ( v144 )
                    __dmb();
                    do
                      v108 = __ldrex(v107);
                    while ( __strex(v108 - 1, v107) );
                  else
                    v108 = (*v107)--;
                  if ( v108 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v43);
                v44 = (void *)(v165 - 12);
                if ( (int *)(v165 - 12) != &dword_28898C0 )
                  v109 = (unsigned int *)(v165 - 4);
                      v110 = __ldrex(v109);
                    while ( __strex(v110 - 1, v109) );
                    v110 = (*v109)--;
                  if ( v110 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v44);
                sub_DA7364((void **)&v160, "source_property_name");
                v158 = 0;
                v159 = 0;
                v157 = 0LL;
                LOBYTE(v159) = 1;
                UIResolvedDef::getAsPropetyEvaluation(
                  (int)&v161,
                  v23,
                  (int)&v160,
                  (int)&v157,
                  v129,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134,
                  v135,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142,
                  (int)v143,
                  (int)v144,
                  v145,
                  v146,
                  v147,
                  v148);
                v142 = (int)v20;
                *(_QWORD *)&v45 = v157;
                if ( (_DWORD)v157 != HIDWORD(v157) )
                    std::_Destroy<ExprToken>((int)v45);
                    v45 = (char *)v45 + 48;
                  while ( v46 != v45 );
                  v45 = (void *)v157;
                if ( v45 )
                  operator delete(v45);
                v47 = (void *)(v160 - 12);
                if ( (int *)(v160 - 12) != &dword_28898C0 )
                  v111 = (unsigned int *)(v160 - 4);
                      v112 = __ldrex(v111);
                    while ( __strex(v112 - 1, v111) );
                    v112 = (*v111)--;
                  if ( v112 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v47);
                sub_DA7364((void **)&v155, "target_property_name");
                sub_DA7364((void **)&v154, (const char *)&unk_257BC67);
                UIResolvedDef::getAsString(&v156, v23, (int **)&v155, &v154);
                v48 = (void *)(v154 - 12);
                if ( (int *)(v154 - 12) != &dword_28898C0 )
                  v113 = (unsigned int *)(v154 - 4);
                      v114 = __ldrex(v113);
                    while ( __strex(v114 - 1, v113) );
                    v114 = (*v113)--;
                  if ( v114 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v48);
                v49 = (void *)(v155 - 12);
                if ( (int *)(v155 - 12) != &dword_28898C0 )
                  v115 = (unsigned int *)(v155 - 4);
                      v116 = __ldrex(v115);
                    while ( __strex(v116 - 1, v115) );
                    v116 = (*v115)--;
                  if ( v116 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v49);
                sub_DA7364((void **)&v153, "resolve_sibling_scope");
                v50 = UIResolvedDef::getAsBool(v23, (int **)&v153, 0);
                v51 = (void *)(v153 - 12);
                if ( (int *)(v153 - 12) != &dword_28898C0 )
                  v117 = (unsigned int *)(v153 - 4);
                      v118 = __ldrex(v117);
                    while ( __strex(v118 - 1, v117) );
                    v118 = (*v117)--;
                  if ( v118 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v51);
                if ( v50 )
                  v50 = 2;
                if ( *(_DWORD *)(v166 - 12) )
                  v52 = v23;
                else
                  v76 = (int *)UIControl::getName(v42);
                  EntityInteraction::setInteractText(&v166, v76);
                  v50 = 1;
                v77 = v162;
                v78 = -1431655765 * ((v162 - (signed int)v161) >> 4);
                v79 = 0;
                v80 = v162;
                if ( (void *)v162 != v161 )
                  if ( v78 >= 0x5555556 )
                  v79 = (char *)operator new(v162 - (_DWORD)v161);
                  v77 = v162;
                  v80 = (int)v161;
                v81 = v79;
                v82 = (int)&v79[48 * v78];
                v83 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                        v80,
                        v77,
                        (int)v79);
                v84 = v163;
                sub_DA73B4(v143, &v156);
                v151 = 0;
                v85 = operator new(0x14u);
                v86 = v81;
                v147 = 0;
                *(_DWORD *)v85 = v86;
                v87 = v83;
                v148 = 0;
                *((_DWORD *)v85 + 1) = v87;
                *((_DWORD *)v85 + 2) = v82;
                *((_BYTE *)v85 + 12) = v84;
                sub_DA73B4((int *)v85 + 4, v143);
                v150 = v85;
                v152 = sub_C79D44;
                v151 = (void (*)(void))sub_C79F80;
                UIControl::_registerControlNameResolver((int)v42, &v166, v50, (int)&v150);
                if ( v151 )
                  v151();
                v88 = (void *)(v149 - 12);
                if ( (int *)(v149 - 12) != &dword_28898C0 )
                  v119 = (unsigned int *)(v149 - 4);
                      v120 = __ldrex(v119);
                    while ( __strex(v120 - 1, v119) );
                    v120 = (*v119)--;
                  if ( v120 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v88);
                v89 = 0;
                if ( v89 )
                  operator delete(v89);
                v91 = (void *)(v156 - 12);
                if ( (int *)(v156 - 12) != &dword_28898C0 )
                  v121 = (unsigned int *)(v156 - 4);
                      v122 = __ldrex(v121);
                    while ( __strex(v122 - 1, v121) );
                    v122 = (*v121)--;
                  if ( v122 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v91);
                *(_QWORD *)&v92 = *(_QWORD *)&v161;
                if ( v161 != (void *)v162 )
                    std::_Destroy<ExprToken>((int)v92);
                    v92 = (char *)v92 + 48;
                  while ( v93 != v92 );
                  v92 = v161;
                if ( v92 )
                  operator delete(v92);
                v26 = (UIResolvedDef *)v52;
                v94 = (void *)(v166 - 12);
                if ( (int *)(v166 - 12) != &dword_28898C0 )
                  v123 = (unsigned int *)(v166 - 4);
                      v124 = __ldrex(v123);
                    while ( __strex(v124 - 1, v123) );
                    v26 = (UIResolvedDef *)v52;
                    v124 = (*v123)--;
                  if ( v124 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v94);
                v20 = (DataBindingComponent *)v142;
              case 2:
                v53 = v190;
                v54 = -1431655765 * ((v190 - (signed int)v189) >> 4);
                v55 = 0;
                v56 = v190;
                v167 = 0;
                v168 = 0;
                v169 = 0;
                  if ( v54 >= 0x5555556 )
                  v55 = (char *)operator new(v190 - (_DWORD)v189);
                  v53 = v190;
                  v56 = (int)v189;
                v167 = v55;
                v168 = v55;
                v169 = &v55[48 * v54];
                v168 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                 v56,
                                 v53,
                                 (int)v55);
                v170 = v191;
                DataBindingComponent::addCollectionBinding(
                  v20,
                  &v181,
                  (unsigned __int64 *)&v167,
                  (const void **)&v184,
                  v34);
                *(_QWORD *)&v40 = *(_QWORD *)&v167;
                if ( v167 != v168 )
                  while ( v57 != v40 );
                  v40 = v167;
LABEL_59:
                v26 = (UIResolvedDef *)v23;
                if ( v40 )
                  operator delete(v40);
              default:
            v14 = v145;
            v11 = v20;
            v95 = (void *)(v178 - 12);
            v15 = (Json::ValueIteratorBase *)&v195;
            v18 = (const Json::ValueIteratorBase *)&v194;
            if ( (int *)(v178 - 12) != &dword_28898C0 )
              v101 = (unsigned int *)(v178 - 4);
                  v102 = __ldrex(v101);
                while ( __strex(v102 - 1, v101) );
                v102 = (*v101)--;
              if ( v102 <= 0 )
                j_j_j_j_j__ZdlPv_9(v95);
            v96 = (void *)(v181 - 12);
            if ( (int *)(v181 - 12) != &dword_28898C0 )
              v103 = (unsigned int *)(v181 - 4);
                  v104 = __ldrex(v103);
                while ( __strex(v104 - 1, v103) );
                v104 = (*v103)--;
              if ( v104 <= 0 )
                j_j_j_j_j__ZdlPv_9(v96);
            v97 = v26;
            v98 = (void *)(v184 - 12);
            if ( (int *)(v184 - 12) != &dword_28898C0 )
              v105 = (unsigned int *)(v184 - 4);
                  v106 = __ldrex(v105);
                while ( __strex(v106 - 1, v105) );
                v106 = (*v105)--;
              if ( v106 <= 0 )
                j_j_j_j_j__ZdlPv_9(v98);
            *(_QWORD *)&v99 = *(_QWORD *)&v189;
            if ( v189 != (void *)v190 )
                std::_Destroy<ExprToken>((int)v99);
                v99 = (char *)v99 + 48;
              while ( v100 != v99 );
              v99 = v189;
            if ( v99 )
              operator delete(v99);
            v16 = (char *)v97;
            UIResolvedDef::~UIResolvedDef(v97);
            v17 = (void **)&v192;
          }
          Json::ValueIteratorBase::increment(v15);
        }
        while ( !Json::ValueIteratorBase::isEqual(v15, v18) );
}


void __fastcall UIControlFactory::_createDropdown(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r6@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{dropdown}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 1);
  UIControlFactory::_populateToggleComponent(v5, v4, v3);
  UIControlFactory::_populateDropdownComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_resolveAnimatedProperty<Color>(int a1, int a2, int a3, UIControl *a4, int **a5)
{
  UIControlFactory::_resolveAnimatedProperty<Color>(a1, a2, a3, a4, a5);
}


void __fastcall UIControlFactory::_createScrollView(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{scroll_view}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateScrollViewComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_populateToggleGroupManagerComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  const UIResolvedDef *v3; // r6@1
  UIControl *v4; // r9@1
  UIControlFactory *v5; // r4@1
  int v6; // r7@1
  void *v7; // r0@1
  UIComponent *v8; // r7@3
  char v9; // r0@5
  int v10; // r7@8
  int v11; // r7@9
  int v12; // r0@11
  void *v13; // r0@11
  __int64 v14; // kr00_8@12
  int v15; // r1@12
  char *v16; // r1@13
  _DWORD *v17; // r6@13
  unsigned int *v18; // r2@14
  signed int v19; // r5@16
  char *v20; // r5@20
  int *v21; // r0@21
  int v22; // r5@25
  void *v23; // r6@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  int *v26; // r0@35
  void *v27; // r0@40
  __int64 v28; // r0@41
  char *v29; // r5@41 OVERLAPPED
  int v30; // r7@41
  unsigned int v31; // r4@41
  int v32; // r6@44
  _DWORD *v33; // r0@44
  __int64 v34; // r2@44
  void *v35; // r4@46
  void *v36; // r6@46
  unsigned int *v37; // r2@48
  signed int v38; // r1@50
  int *v39; // r0@56
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  unsigned int *v42; // r2@70
  signed int v43; // r1@72
  unsigned int *v44; // r2@74
  signed int v45; // r1@76
  _DWORD *v46; // [sp+4h] [bp-6Ch]@44
  __int64 v47; // [sp+Ch] [bp-64h]@44
  int v48; // [sp+18h] [bp-58h]@12
  void *v49; // [sp+1Ch] [bp-54h]@12
  void *v50; // [sp+20h] [bp-50h]@12
  int v51; // [sp+24h] [bp-4Ch]@12
  __int64 v52; // [sp+28h] [bp-48h]@12
  int v53; // [sp+30h] [bp-40h]@12
  int v54; // [sp+38h] [bp-38h]@11
  UIComponent *v55; // [sp+3Ch] [bp-34h]@3
  int v56; // [sp+44h] [bp-2Ch]@1
  char v57; // [sp+48h] [bp-28h]@13

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v56, "toggle_manager_behavior");
  v6 = UIResolvedDef::hasValue((int)v3, (int **)&v56);
  v7 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    }
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 )
    v8 = (UIComponent *)operator new(0x18u);
    ToggleManagerComponent::ToggleManagerComponent(v8, v4);
    v55 = v8;
    UIControl::setComponent<ToggleManagerComponent>(v4, &v55);
    if ( v55 )
      (*(void (**)(void))(*(_DWORD *)v55 + 4))();
    v55 = 0;
    v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id;
    __dmb();
    if ( !(v9 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id) )
      type_id<UIComponent,ToggleManagerComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id);
    v10 = type_id<UIComponent,ToggleManagerComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,ToggleManagerComponent>(void)::id[0]) == 1 )
      v11 = *(_DWORD *)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v10));
      v11 = 0;
    sub_DA7364((void **)&v54, "toggle_manager_behavior");
    v12 = UIResolvedDef::getAsToggleManagerBehavior((int)v3, (int **)&v54, 2);
    ToggleManagerComponent::setBehavior(v11, v12);
    v13 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v54 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      }
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v52 = 0LL;
    v53 = 0;
    sub_DA7364((void **)&v48, "toggle_manage_groups");
    UIResolvedDef::getAsStringVector((int)&v49, (int)v3, (int **)&v48, (unsigned __int64 *)&v52);
    v14 = v52;
    LODWORD(v52) = v49;
    v49 = 0;
    v15 = (int)v50;
    v50 = 0;
    HIDWORD(v52) = v15;
    v53 = v51;
    v51 = 0;
    if ( (_DWORD)v14 != HIDWORD(v14) )
      v16 = &v57;
      v17 = (_DWORD *)v14;
        v21 = (int *)(*v17 - 12);
        if ( v21 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            v20 = v16;
            j_j_j_j_j__ZdlPv_9(v21);
            v16 = v20;
        }
        ++v17;
      while ( v17 != (_DWORD *)HIDWORD(v14) );
    if ( (_DWORD)v14 )
      operator delete((void *)v14);
    v22 = (int)v50;
    v23 = v49;
    if ( v49 != v50 )
        v26 = (int *)(*(_DWORD *)v23 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)(*(_DWORD *)v23 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9(v26);
        v23 = (char *)v23 + 4;
      while ( v23 != (void *)v22 );
      v23 = v49;
    if ( v23 )
      operator delete(v23);
    v27 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v48 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    v28 = v52;
    v29 = 0;
    v30 = *((_DWORD *)v5 + 3);
    v31 = (HIDWORD(v52) - (signed int)v52) >> 2;
    if ( v31 )
      if ( v31 >= 0x40000000 )
        sub_DA7414();
      v29 = (char *)operator new(HIDWORD(v52) - v52);
      v28 = v52;
    v32 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            v28,
            SHIDWORD(v28),
            (int)v29);
    v33 = operator new(0x10u);
    HIDWORD(v34) = sub_C7E4FC;
    *(_QWORD *)v33 = *(_QWORD *)&v29;
    v33[2] = &v29[4 * v31];
    v33[3] = v30;
    LODWORD(v34) = sub_C7E658;
    v46 = v33;
    v47 = v34;
    UIControl::_registerPostCreateCallback((int)v4, (int)&v46);
    if ( (_DWORD)v47 )
      ((void (*)(void))v47)();
    v36 = (void *)HIDWORD(v52);
    v35 = (void *)v52;
    if ( (_DWORD)v52 != HIDWORD(v52) )
        v39 = (int *)(*(_DWORD *)v35 - 12);
        if ( v39 != &dword_28898C0 )
          v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9(v39);
        v35 = (char *)v35 + 4;
      while ( v35 != v36 );
      v35 = (void *)v52;
    if ( v35 )
      operator delete(v35);
}


void __fastcall UIControlFactory::_populateStackPanelComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateStackPanelComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_populateSpriteComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateSpriteComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createInputPanel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  UIControlFactory *v8; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v11, "{input_panel}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateGestureComponent(v8, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 0);
}


void __fastcall UIControlFactory::_populateGestureComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r5@1
  const UIResolvedDef *v4; // r4@1
  GestureComponent *v5; // r6@1
  char v6; // r0@3
  int v7; // r6@6
  GestureComponent *v8; // r5@7
  __int16 v9; // r0@9
  void *v10; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-20h]@9
  GestureComponent *v14; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = (GestureComponent *)operator new(0xCu);
  GestureComponent::GestureComponent(v5, v3);
  v14 = v5;
  UIControl::setComponent<GestureComponent>(v3, &v14);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v14 = 0;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id) )
  {
    type_id<UIComponent,GestureComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id);
  }
  v7 = type_id<UIComponent,GestureComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,GestureComponent>(void)::id[0]) == 1 )
    v8 = *(GestureComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v7));
  else
    v8 = 0;
  sub_DA7364((void **)&v13, "gesture_tracking_button");
  v9 = UIResolvedDef::getAsButtonId((int)v4, (int **)&v13, -1);
  GestureComponent::setTrackpadButtonId(v8, v9);
  v10 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


void __fastcall UIControlFactory::_populateFocusComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateFocusComponent(this, a2, a3);
}


void __fastcall UIControlFactory::_createButton(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  UIControlFactory *v8; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v11, "{button}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateButtonComponent(v8, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateFocusComponent(v5, v4, v3);
  UIControlFactory::_populateInputComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
  UIControlFactory::_populateSoundComponent(v5, v4, v3, 1);
}


void __fastcall UIControlFactory::_createLabel(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createLabel(this, a2, a3);
}


void __fastcall UIControlFactory::_createCustom(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControl *v3; // r4@1
  UIResolvedDef *v4; // r5@1
  UIControlFactory *v5; // r7@1
  int *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_DA7364((void **)&v10, "{custom_renderer}");
  if ( UIResolvedDef::isNamed(v4) == 1 )
  {
    v6 = (int *)UIResolvedDef::getName(v4);
    UIControl::setName((int)v3, v6);
  }
  else
    UIControl::setName((int)v3, &v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  UIControlFactory::_populateControl(v5, v4, v3);
  UIControlFactory::_populateCustomRenderComponent(v5, v4, v3);
  UIControlFactory::_populateDataBindingComponent(v5, v4, v3);
  UIControlFactory::_populateLayoutComponent(v5, v4, v3);
}


void __fastcall UIControlFactory::_createEditBox(UIControlFactory *this, UIControl *a2, const UIResolvedDef *a3)
{
  UIControlFactory::_createEditBox(this, a2, a3);
}


void __fastcall UIControlFactory::_populateScreenComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControl *v3; // r5@1
  const UIResolvedDef *v4; // r4@1
  ScreenComponent *v5; // r6@1
  char v6; // r0@3
  int v7; // r6@6
  ScreenComponent *v8; // r5@7
  __int16 v9; // r0@9
  void *v10; // r0@9
  __int16 v11; // r0@10
  void *v12; // r0@10
  __int16 v13; // r0@11
  void *v14; // r0@11
  __int16 v15; // r0@12
  void *v16; // r0@12
  __int16 v17; // r0@13
  void *v18; // r0@13
  __int16 v19; // r0@14
  void *v20; // r0@14
  __int16 v21; // r0@15
  void *v22; // r0@15
  __int16 v23; // r0@16
  void *v24; // r0@16
  __int16 v25; // r0@17
  void *v26; // r0@17
  __int16 v27; // r0@18
  void *v28; // r0@18
  __int16 v29; // r0@19
  void *v30; // r0@19
  __int16 v31; // r0@20
  void *v32; // r0@20
  __int16 v33; // r0@21
  void *v34; // r0@21
  __int16 v35; // r0@22
  void *v36; // r0@22
  unsigned int *v37; // r2@24
  signed int v38; // r1@26
  unsigned int *v39; // r2@28
  signed int v40; // r1@30
  unsigned int *v41; // r2@32
  signed int v42; // r1@34
  unsigned int *v43; // r2@36
  signed int v44; // r1@38
  unsigned int *v45; // r2@40
  signed int v46; // r1@42
  unsigned int *v47; // r2@44
  signed int v48; // r1@46
  unsigned int *v49; // r2@48
  signed int v50; // r1@50
  unsigned int *v51; // r2@52
  signed int v52; // r1@54
  unsigned int *v53; // r2@56
  signed int v54; // r1@58
  unsigned int *v55; // r2@60
  signed int v56; // r1@62
  unsigned int *v57; // r2@64
  signed int v58; // r1@66
  unsigned int *v59; // r2@68
  signed int v60; // r1@70
  unsigned int *v61; // r2@72
  signed int v62; // r1@74
  unsigned int *v63; // r2@76
  signed int v64; // r1@78
  int v65; // [sp+4h] [bp-84h]@22
  int v66; // [sp+Ch] [bp-7Ch]@21
  int v67; // [sp+14h] [bp-74h]@20
  int v68; // [sp+1Ch] [bp-6Ch]@19
  int v69; // [sp+24h] [bp-64h]@18
  int v70; // [sp+2Ch] [bp-5Ch]@17
  int v71; // [sp+34h] [bp-54h]@16
  int v72; // [sp+3Ch] [bp-4Ch]@15
  int v73; // [sp+44h] [bp-44h]@14
  int v74; // [sp+4Ch] [bp-3Ch]@13
  int v75; // [sp+54h] [bp-34h]@12
  int v76; // [sp+5Ch] [bp-2Ch]@11
  int v77; // [sp+64h] [bp-24h]@10
  int v78; // [sp+6Ch] [bp-1Ch]@9
  ScreenComponent *v79; // [sp+70h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = (ScreenComponent *)operator new(0xCu);
  ScreenComponent::ScreenComponent(v5, v3);
  v79 = v5;
  UIControl::setComponent<ScreenComponent>(v3, &v79);
  if ( v79 )
    (*(void (**)(void))(*(_DWORD *)v79 + 4))();
  v79 = 0;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id) )
  {
    type_id<UIComponent,ScreenComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id);
  }
  v7 = type_id<UIComponent,ScreenComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,ScreenComponent>(void)::id[0]) == 1 )
    v8 = *(ScreenComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v7));
  else
    v8 = 0;
  sub_DA7364((void **)&v78, "screen_not_flushable");
  v9 = UIResolvedDef::getAsBool((int)v4, (int **)&v78, 0);
  ScreenComponent::setScreenIsNotFlushable(v8, v9);
  v10 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v78 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    }
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  sub_DA7364((void **)&v77, "always_accepts_input");
  v11 = UIResolvedDef::getAsBool((int)v4, (int **)&v77, 0);
  ScreenComponent::setAlwaysAcceptsInput(v8, v11);
  v12 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v77 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  sub_DA7364((void **)&v76, "render_game_behind");
  v13 = UIResolvedDef::getAsBool((int)v4, (int **)&v76, 1);
  ScreenComponent::setRenderGameBehind(v8, v13);
  v14 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v76 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  sub_DA7364((void **)&v75, "absorbs_input");
  v15 = UIResolvedDef::getAsBool((int)v4, (int **)&v75, 1);
  ScreenComponent::setAbsorbsInput(v8, v15);
  v16 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v75 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  sub_DA7364((void **)&v74, "is_showing_menu");
  v17 = UIResolvedDef::getAsBool((int)v4, (int **)&v74, 1);
  ScreenComponent::setIsShowingMenu(v8, v17);
  v18 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v74 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  sub_DA7364((void **)&v73, "is_modal");
  v19 = UIResolvedDef::getAsBool((int)v4, (int **)&v73, 0);
  ScreenComponent::setIsModal(v8, v19);
  v20 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v73 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v72, "should_steal_mouse");
  v21 = UIResolvedDef::getAsBool((int)v4, (int **)&v72, 0);
  ScreenComponent::setShouldStealMouse(v8, v21);
  v22 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v72 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v71, "low_frequency_rendering");
  v23 = UIResolvedDef::getAsBool((int)v4, (int **)&v71, 0);
  ScreenComponent::setLowFreqRendering(v8, v23);
  v24 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v71 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v70, "screen_draws_last");
  v25 = UIResolvedDef::getAsBool((int)v4, (int **)&v70, 0);
  ScreenComponent::setScreenDrawsLast(v8, v25);
  v26 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v70 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  sub_DA7364((void **)&v69, "vr_mode");
  v27 = UIResolvedDef::getAsBool((int)v4, (int **)&v69, 0);
  ScreenComponent::setIsVRMode(v8, v27);
  v28 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v69 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  sub_DA7364((void **)&v68, "force_render_below");
  v29 = UIResolvedDef::getAsBool((int)v4, (int **)&v68, 0);
  ScreenComponent::setForceRenderBelow(v8, v29);
  v30 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v68 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  sub_DA7364((void **)&v67, "send_telemetry");
  v31 = UIResolvedDef::getAsBool((int)v4, (int **)&v67, 1);
  ScreenComponent::setShouldSendEvents(v8, v31);
  v32 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v67 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  sub_DA7364((void **)&v66, "close_on_player_hurt");
  v33 = UIResolvedDef::getAsBool((int)v4, (int **)&v66, 0);
  ScreenComponent::setCloseOnPlayerHurt(v8, v33);
  v34 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v66 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  sub_DA7364((void **)&v65, "cache_screen");
  v35 = UIResolvedDef::getAsBool((int)v4, (int **)&v65, 0);
  ScreenComponent::setCacheScreen(v8, v35);
  v36 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v65 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
}


void __fastcall UIControlFactory::_populateToggleComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory *v3; // r6@1
  UIControl *v4; // r8@1
  const UIResolvedDef *v5; // r5@1
  UIComponent *v6; // r7@1
  char v7; // r0@3
  int v8; // r7@6
  ToggleComponent *v9; // r7@7
  char v10; // r0@9
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  __int16 v14; // r0@12
  char v15; // r0@12
  void *v16; // r0@12
  int v17; // r0@13
  void *v18; // r0@13
  int v19; // r0@14
  void *v20; // r0@14
  char v21; // r0@15
  void *v22; // r0@15
  char v23; // r0@16
  void *v24; // r0@16
  void *v25; // r0@17
  void *v26; // r0@18
  __int16 v27; // r0@19
  void *v28; // r0@19
  void *v29; // r0@20
  __int16 v30; // r0@21
  void *v31; // r0@21
  void *v32; // r0@22
  void *v33; // r0@23
  void *v34; // r0@24
  __int64 v35; // r1@24
  void *v36; // r0@26
  void *v37; // r0@27
  void *v38; // r0@28
  void *v39; // r0@29
  __int64 v40; // r1@29
  void *v41; // r0@31
  void *v42; // r0@32
  void *v43; // r0@33
  void *v44; // r0@34
  __int64 v45; // r1@34
  void *v46; // r0@36
  void *v47; // r0@37
  void *v48; // r0@38
  void *v49; // r0@39
  __int64 v50; // r1@39
  void *v51; // r0@41
  void *v52; // r0@42
  void *v53; // r0@43
  void *v54; // r0@44
  __int64 v55; // r1@44
  void *v56; // r0@46
  void *v57; // r0@47
  void *v58; // r0@48
  void *v59; // r0@49
  __int64 v60; // r1@49
  void *v61; // r0@51
  void *v62; // r0@52
  void *v63; // r0@53
  void *v64; // r0@54
  __int64 v65; // r1@54
  void *v66; // r0@56
  void *v67; // r0@57
  void *v68; // r0@58
  void *v69; // r0@59
  __int64 v70; // r1@59
  void *v71; // r0@61
  void *v72; // r0@62
  void *v73; // r0@63
  void *v74; // r0@64
  __int64 v75; // r1@64
  void *v76; // r0@66
  void *v77; // r0@67
  void *v78; // r0@68
  unsigned int *v79; // r2@70
  signed int v80; // r1@72
  unsigned int *v81; // r2@74
  signed int v82; // r1@76
  unsigned int *v83; // r2@78
  signed int v84; // r1@80
  unsigned int *v85; // r2@82
  signed int v86; // r1@84
  unsigned int *v87; // r2@86
  signed int v88; // r1@88
  unsigned int *v89; // r2@90
  signed int v90; // r1@92
  unsigned int *v91; // r2@94
  signed int v92; // r1@96
  unsigned int *v93; // r2@98
  signed int v94; // r1@100
  unsigned int *v95; // r2@102
  signed int v96; // r1@104
  unsigned int *v97; // r2@106
  signed int v98; // r1@108
  unsigned int *v99; // r2@110
  signed int v100; // r1@112
  unsigned int *v101; // r2@114
  signed int v102; // r1@116
  unsigned int *v103; // r2@118
  signed int v104; // r1@120
  unsigned int *v105; // r2@122
  signed int v106; // r1@124
  unsigned int *v107; // r2@126
  signed int v108; // r1@128
  unsigned int *v109; // r2@130
  signed int v110; // r1@132
  unsigned int *v111; // r2@134
  signed int v112; // r1@136
  unsigned int *v113; // r2@138
  signed int v114; // r1@140
  unsigned int *v115; // r2@142
  signed int v116; // r1@144
  unsigned int *v117; // r2@146
  signed int v118; // r1@148
  unsigned int *v119; // r2@150
  signed int v120; // r1@152
  unsigned int *v121; // r2@154
  signed int v122; // r1@156
  unsigned int *v123; // r2@158
  signed int v124; // r1@160
  unsigned int *v125; // r2@162
  signed int v126; // r1@164
  unsigned int *v127; // r2@166
  signed int v128; // r1@168
  unsigned int *v129; // r2@170
  signed int v130; // r1@172
  unsigned int *v131; // r2@174
  signed int v132; // r1@176
  unsigned int *v133; // r2@178
  signed int v134; // r1@180
  unsigned int *v135; // r2@182
  signed int v136; // r1@184
  unsigned int *v137; // r2@186
  signed int v138; // r1@188
  unsigned int *v139; // r2@190
  signed int v140; // r1@192
  unsigned int *v141; // r2@194
  signed int v142; // r1@196
  unsigned int *v143; // r2@198
  signed int v144; // r1@200
  unsigned int *v145; // r2@202
  signed int v146; // r1@204
  unsigned int *v147; // r2@206
  signed int v148; // r1@208
  unsigned int *v149; // r2@210
  signed int v150; // r1@212
  unsigned int *v151; // r2@214
  signed int v152; // r1@216
  unsigned int *v153; // r2@218
  signed int v154; // r1@220
  unsigned int *v155; // r2@222
  signed int v156; // r1@224
  unsigned int *v157; // r2@226
  signed int v158; // r1@228
  unsigned int *v159; // r2@230
  signed int v160; // r1@232
  unsigned int *v161; // r2@234
  signed int v162; // r1@236
  void *v163; // [sp+0h] [bp-1D0h]@64
  __int64 v164; // [sp+8h] [bp-1C8h]@64
  void *v165; // [sp+10h] [bp-1C0h]@59
  __int64 v166; // [sp+18h] [bp-1B8h]@59
  int v167; // [sp+24h] [bp-1ACh]@59
  int v168; // [sp+2Ch] [bp-1A4h]@59
  int v169; // [sp+30h] [bp-1A0h]@59
  void *v170; // [sp+34h] [bp-19Ch]@54
  __int64 v171; // [sp+3Ch] [bp-194h]@54
  int v172; // [sp+48h] [bp-188h]@54
  int v173; // [sp+50h] [bp-180h]@54
  int v174; // [sp+54h] [bp-17Ch]@54
  void *v175; // [sp+58h] [bp-178h]@49
  __int64 v176; // [sp+60h] [bp-170h]@49
  int v177; // [sp+6Ch] [bp-164h]@49
  int v178; // [sp+74h] [bp-15Ch]@49
  int v179; // [sp+78h] [bp-158h]@49
  void *v180; // [sp+7Ch] [bp-154h]@44
  __int64 v181; // [sp+84h] [bp-14Ch]@44
  int v182; // [sp+90h] [bp-140h]@44
  int v183; // [sp+98h] [bp-138h]@44
  int v184; // [sp+9Ch] [bp-134h]@44
  void *v185; // [sp+A0h] [bp-130h]@39
  __int64 v186; // [sp+A8h] [bp-128h]@39
  int v187; // [sp+B4h] [bp-11Ch]@39
  int v188; // [sp+BCh] [bp-114h]@39
  int v189; // [sp+C0h] [bp-110h]@39
  void *v190; // [sp+C4h] [bp-10Ch]@34
  __int64 v191; // [sp+CCh] [bp-104h]@34
  int v192; // [sp+D8h] [bp-F8h]@34
  int v193; // [sp+E0h] [bp-F0h]@34
  int v194; // [sp+E4h] [bp-ECh]@34
  void *v195; // [sp+E8h] [bp-E8h]@29
  __int64 v196; // [sp+F0h] [bp-E0h]@29
  int v197; // [sp+FCh] [bp-D4h]@29
  int v198; // [sp+104h] [bp-CCh]@29
  int v199; // [sp+108h] [bp-C8h]@29
  void *v200; // [sp+10Ch] [bp-C4h]@24
  __int64 v201; // [sp+114h] [bp-BCh]@24
  int v202; // [sp+120h] [bp-B0h]@24
  int v203; // [sp+128h] [bp-A8h]@24
  int v204; // [sp+12Ch] [bp-A4h]@24
  int v205; // [sp+134h] [bp-9Ch]@21
  int v206; // [sp+13Ch] [bp-94h]@21
  int v207; // [sp+140h] [bp-90h]@21
  int v208; // [sp+148h] [bp-88h]@19
  int v209; // [sp+150h] [bp-80h]@19
  int v210; // [sp+154h] [bp-7Ch]@19
  int v211; // [sp+15Ch] [bp-74h]@17
  int v212; // [sp+164h] [bp-6Ch]@17
  int v213; // [sp+168h] [bp-68h]@17
  int v214; // [sp+170h] [bp-60h]@16
  int v215; // [sp+178h] [bp-58h]@15
  int v216; // [sp+180h] [bp-50h]@14
  int v217; // [sp+188h] [bp-48h]@13
  int v218; // [sp+190h] [bp-40h]@12
  int v219; // [sp+198h] [bp-38h]@10
  int v220; // [sp+1A0h] [bp-30h]@10
  int v221; // [sp+1A4h] [bp-2Ch]@10
  int v222; // [sp+1ACh] [bp-24h]@9
  UIComponent *v223; // [sp+1B0h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x60u);
  ToggleComponent::ToggleComponent(v6, v4);
  v223 = v6;
  UIControl::setComponent<ToggleComponent>(v4, &v223);
  if ( v223 )
    (*(void (**)(void))(*(_DWORD *)v223 + 4))();
  v223 = 0;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
  {
    type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
  }
  v8 = type_id<UIComponent,ToggleComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v4, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
    v9 = *(ToggleComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v8));
  else
    v9 = 0;
  sub_DA7364((void **)&v222, "radio_toggle_group");
  v10 = UIResolvedDef::getAsBool((int)v5, (int **)&v222, 0);
  ToggleComponent::setRadioToggleGroup(v9, v10);
  v11 = (void *)(v222 - 12);
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v222 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
    }
    else
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  sub_DA7364((void **)&v220, "toggle_name");
  sub_DA7364((void **)&v219, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v221, (int)v5, (int **)&v220, &v219);
  v12 = (void *)(v219 - 12);
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v219 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v220 - 12);
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v220 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v221);
  v14 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v221);
  ToggleComponent::setToggleNameId(v9, v14);
  sub_DA7364((void **)&v218, "toggle_default_state");
  v15 = UIResolvedDef::getAsBool((int)v5, (int **)&v218, 0);
  ToggleComponent::setDefaultState(v9, v15);
  v16 = (void *)(v218 - 12);
  if ( (int *)(v218 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v218 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  sub_DA7364((void **)&v217, "toggle_group_forced_index");
  v17 = UIResolvedDef::getAsInt((int)v5, (int **)&v217, -1);
  ToggleComponent::setForcedGroupIndex(v9, v17);
  v18 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v217 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  sub_DA7364((void **)&v216, "toggle_group_default_selected");
  v19 = UIResolvedDef::getAsInt((int)v5, (int **)&v216, 0);
  ToggleComponent::setDefaultGroupSelectedIndex(v9, v19);
  v20 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v216 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v215, "toggle_on_hover");
  v21 = UIResolvedDef::getAsBool((int)v5, (int **)&v215, 0);
  ToggleComponent::setToggleOnHover(v9, v21);
  v22 = (void *)(v215 - 12);
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v215 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  sub_DA7364((void **)&v214, "enable_directional_toggling");
  v23 = UIResolvedDef::getAsBool((int)v5, (int **)&v214, 0);
  ToggleComponent::setEnableDirectionalToggling(v9, v23);
  v24 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v214 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  sub_DA7364((void **)&v212, "toggle_on_button");
  sub_DA7364((void **)&v211, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v213, (int)v5, (int **)&v212, &v211);
  v25 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v211 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v212 - 12);
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v212 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v213);
  v27 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v213);
  ToggleComponent::setToggleOnButton(v9, v27);
  sub_DA7364((void **)&v209, "toggle_off_button");
  sub_DA7364((void **)&v208, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v210, (int)v5, (int **)&v209, &v208);
  v28 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v208 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v209 - 12);
  if ( (int *)(v209 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v209 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  NameRegistry::registerName(*((unsigned __int64 **)v3 + 3), (int **)&v210);
  v30 = NameRegistry::getNameId(*((unsigned __int64 **)v3 + 3), (int **)&v210);
  ToggleComponent::setToggleOffButton(v9, v30);
  sub_DA7364((void **)&v206, "toggle_grid_collection_name");
  sub_DA7364((void **)&v205, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v207, (int)v5, (int **)&v206, &v205);
  ToggleComponent::setGridCollectionName((int)v9, &v207);
  v31 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v207 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v205 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v206 - 12);
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v206 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  sub_DA7364((void **)&v203, "checked_control");
  sub_DA7364((void **)&v202, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v204, (int)v5, (int **)&v203, &v202);
  v34 = operator new(1u);
  LODWORD(v35) = sub_C7D354;
  v200 = v34;
  HIDWORD(v35) = sub_C7D120;
  v201 = v35;
  UIControl::_registerControlNameResolver((int)v4, &v204, 1, (int)&v200);
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  v36 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v204 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v202 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v203 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9(v38);
  sub_DA7364((void **)&v198, "unchecked_control");
  sub_DA7364((void **)&v197, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v199, (int)v5, (int **)&v198, &v197);
  v39 = operator new(1u);
  LODWORD(v40) = sub_C7D5B8;
  v195 = v39;
  HIDWORD(v40) = sub_C7D384;
  v196 = v40;
  UIControl::_registerControlNameResolver((int)v4, &v199, 1, (int)&v195);
  if ( (_DWORD)v196 )
    ((void (*)(void))v196)();
  v41 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v199 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v197 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v198 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j_j__ZdlPv_9(v43);
  sub_DA7364((void **)&v193, "checked_hover_control");
  sub_DA7364((void **)&v192, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v194, (int)v5, (int **)&v193, &v192);
  v44 = operator new(1u);
  LODWORD(v45) = sub_C7D81C;
  v190 = v44;
  HIDWORD(v45) = sub_C7D5E8;
  v191 = v45;
  UIControl::_registerControlNameResolver((int)v4, &v194, 1, (int)&v190);
  if ( (_DWORD)v191 )
    ((void (*)(void))v191)();
  v46 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v194 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v192 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v193 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9(v48);
  sub_DA7364((void **)&v188, "unchecked_hover_control");
  sub_DA7364((void **)&v187, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v189, (int)v5, (int **)&v188, &v187);
  v49 = operator new(1u);
  LODWORD(v50) = sub_C7DA80;
  v185 = v49;
  HIDWORD(v50) = sub_C7D84C;
  v186 = v50;
  UIControl::_registerControlNameResolver((int)v4, &v189, 1, (int)&v185);
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  v51 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v189 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v187 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v188 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9(v53);
  sub_DA7364((void **)&v183, "checked_locked_control");
  sub_DA7364((void **)&v182, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v184, (int)v5, (int **)&v183, &v182);
  v54 = operator new(1u);
  LODWORD(v55) = sub_C7DCE4;
  v180 = v54;
  HIDWORD(v55) = sub_C7DAB0;
  v181 = v55;
  UIControl::_registerControlNameResolver((int)v4, &v184, 1, (int)&v180);
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  v56 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v184 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v182 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v183 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
  sub_DA7364((void **)&v178, "checked_locked_hover_control");
  sub_DA7364((void **)&v177, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v179, (int)v5, (int **)&v178, &v177);
  v59 = operator new(1u);
  LODWORD(v60) = sub_C7DF48;
  v175 = v59;
  HIDWORD(v60) = sub_C7DD14;
  v176 = v60;
  UIControl::_registerControlNameResolver((int)v4, &v179, 1, (int)&v175);
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  v61 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v179 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v177 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v178 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j_j__ZdlPv_9(v63);
  sub_DA7364((void **)&v173, "unchecked_locked_control");
  sub_DA7364((void **)&v172, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v174, (int)v5, (int **)&v173, &v172);
  v64 = operator new(1u);
  LODWORD(v65) = sub_C7E1AC;
  v170 = v64;
  HIDWORD(v65) = sub_C7DF78;
  v171 = v65;
  UIControl::_registerControlNameResolver((int)v4, &v174, 1, (int)&v170);
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v66 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v174 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v172 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v173 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j_j__ZdlPv_9(v68);
  sub_DA7364((void **)&v168, "unchecked_locked_hover_control");
  sub_DA7364((void **)&v167, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v169, (int)v5, (int **)&v168, &v167);
  v69 = operator new(1u);
  LODWORD(v70) = sub_C7E410;
  v165 = v69;
  HIDWORD(v70) = sub_C7E1DC;
  v166 = v70;
  UIControl::_registerControlNameResolver((int)v4, &v169, 1, (int)&v165);
  if ( (_DWORD)v166 )
    ((void (*)(void))v166)();
  v71 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v169 - 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j_j__ZdlPv_9(v71);
  v72 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v153 = (unsigned int *)(v167 - 4);
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v168 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j_j__ZdlPv_9(v73);
  v74 = operator new(1u);
  LODWORD(v75) = sub_C7E4CC;
  v163 = v74;
  HIDWORD(v75) = sub_C7E440;
  v164 = v75;
  UIControl::_registerPostCreateCallback((int)v4, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  v76 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v157 = (unsigned int *)(v210 - 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 <= 0 )
      j_j_j_j_j__ZdlPv_9(v76);
  v77 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v213 - 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v221 - 12);
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v221 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j_j__ZdlPv_9(v78);
}


void __fastcall UIControlFactory::_populateScrollViewComponent(UIControlFactory *this, const UIResolvedDef *a2, UIControl *a3)
{
  UIControlFactory::_populateScrollViewComponent(this, a2, a3);
}
