

char *__fastcall CollectionComponent::getControlBindings(CollectionComponent *this)
{
  return (char *)this + 16;
}


int __fastcall CollectionComponent::setLength(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


void __fastcall CollectionComponent::~CollectionComponent(CollectionComponent *this)
{
  CollectionComponent *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26DFD40;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 3);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  UIComponent::~UIComponent(v1);
  operator delete((void *)v1);
}


int __fastcall CollectionComponent::clone(CollectionComponent *this, UIControl *a2, UIControl *a3)
{
  CollectionComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r7@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x1Cu);
  UIComponent::UIComponent((UIComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26DFD40;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = &unk_28898CC;
  *((_DWORD *)v6 + 4) = 0;
  v7 = (int)v6 + 16;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  EntityInteraction::setInteractText((int *)v6 + 3, (int *)v5 + 3);
  std::vector<std::string,std::allocator<std::string>>::operator=((int)v6 + 16, (unsigned __int64 *)v5 + 2);
  result = *((_DWORD *)v5 + 2);
  *((_DWORD *)v6 + 2) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


CollectionComponent *__fastcall CollectionComponent::~CollectionComponent(CollectionComponent *this)
{
  CollectionComponent *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26DFD40;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 3);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  UIComponent::~UIComponent(v1);
  return v1;
}


int __fastcall CollectionComponent::CollectionComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1
  __int64 v3; // r1@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFD40;
  HIDWORD(v3) = &unk_28898CC;
  LODWORD(v3) = 0;
  *(_QWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


int __fastcall CollectionComponent::refreshPanelItems(CollectionComponent *this)
{
  CollectionComponent *v1; // r10@1
  int v2; // r4@1
  char v3; // r0@1
  int v4; // r5@4
  FactoryComponent *v5; // r0@5
  int v6; // r11@7
  int v7; // r5@7
  int v8; // r6@7
  int *v9; // r6@7
  int *v10; // r9@7
  int v11; // r7@9
  char v12; // r0@9
  int v13; // r5@12
  int v14; // r0@13
  char v15; // r0@20
  int v16; // r5@23
  FactoryComponent *v17; // r0@24
  int result; // r0@26
  char *v19; // r6@27
  char v20; // r0@28
  int v21; // r5@31
  const UIPropertyBag *v22; // r7@32
  __int64 v23; // r0@33
  CollectionComponent *v24; // r4@33
  const void **v25; // r5@34
  int v26; // r6@35
  unsigned int v27; // r0@36
  unsigned int *v28; // r10@36
  unsigned int v29; // r1@39
  unsigned int v30; // r2@40
  int v31; // r7@41
  void (*v32)(void); // r2@44
  unsigned int v33; // r1@46
  int v34; // r4@49
  unsigned int *v35; // r1@50
  unsigned int v36; // r0@52
  unsigned int *v37; // r5@56
  unsigned int v38; // r3@58
  char v39; // r0@63
  unsigned __int16 v40; // r0@65
  int v41; // r5@66
  CollectionItemComponent *v42; // r0@67
  unsigned int v43; // r0@72
  unsigned int *v44; // r5@76
  unsigned int v45; // r0@78
  int v46; // r0@83
  unsigned int *v47; // r2@84
  unsigned int v48; // r1@86
  CollectionComponent *v49; // [sp+28h] [bp-98h]@49
  UIControl *v50; // [sp+34h] [bp-8Ch]@1
  int v51; // [sp+38h] [bp-88h]@44
  int v52; // [sp+3Ch] [bp-84h]@44
  int v53; // [sp+40h] [bp-80h]@35
  int v54; // [sp+44h] [bp-7Ch]@35
  char v55; // [sp+48h] [bp-78h]@27
  int v56; // [sp+70h] [bp-50h]@7
  const char *v57; // [sp+74h] [bp-4Ch]@7
  int v58; // [sp+78h] [bp-48h]@7
  int v59; // [sp+7Ch] [bp-44h]@1
  int v60; // [sp+80h] [bp-40h]@1
  int v61; // [sp+84h] [bp-3Ch]@1
  int v62; // [sp+88h] [bp-38h]@1

  v1 = this;
  v2 = UIComponent::getOwner(this);
  v50 = (UIControl *)v2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v59);
  v59 = 6;
  UIControl::broadcastEvent(v2, (int)v1, 6, v60, v61, v62);
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
  {
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  }
  v4 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
    v5 = *(FactoryComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
  else
    v5 = 0;
  v6 = 0;
  FactoryComponent::setFactoryIsChild(v5, 0);
  v7 = *((_DWORD *)v1 + 2);
  v58 = *((_DWORD *)v1 + 2);
  v8 = UIControl::getPropertyBag((UIControl *)v2);
  gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&v56, (int)"#collection_number_size");
  UIPropertyBag::set<int>(v8, v56, v57, &v58);
  v10 = (int *)(*(_QWORD *)(v2 + 92) >> 32);
  v9 = (int *)*(_QWORD *)(v2 + 92);
  if ( v9 != v10 )
    v50 = (UIControl *)v2;
    do
    {
      v11 = *v9;
      v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id[0];
      __dmb();
      if ( !(v12 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id) )
      {
        type_id<UIComponent,CollectionItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id);
      }
      v13 = type_id<UIComponent,CollectionItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v11, type_id<UIComponent,CollectionItemComponent>(void)::id[0]) == 1 )
        v14 = *(_DWORD *)(*(_DWORD *)(v11 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v11, v13));
      else
        v14 = 0;
      v9 += 2;
      if ( v14 )
        ++v6;
    }
    while ( v10 != v9 );
    v7 = v58;
  if ( v6 > v7 )
    v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
    __dmb();
    if ( !(v15 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
      type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
    v16 = type_id<UIComponent,FactoryComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
      v17 = *(FactoryComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v16));
      if ( v17 )
        FactoryComponent::destroyAll(v17);
        v6 = 0;
  result = v58;
  if ( v6 < v58 )
    v19 = &v55;
      v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
      if ( !(v20 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
        type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
      v21 = type_id<UIComponent,FactoryComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
        v22 = *(const UIPropertyBag **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v21));
        if ( v22 )
        {
          UIPropertyBag::UIPropertyBag((int)v19);
          v23 = *((_QWORD *)v1 + 2);
          v24 = v1;
          if ( (HIDWORD(v23) - (signed int)v23) >> 2 > v6 )
          {
            v25 = (const void **)(v23 + 4 * v6);
            UIPropertyBag::set<std::string>((int)v19, 4, "name", v25);
            UIPropertyBag::set<std::string>((int)v19, 10, "control_id", v25);
          }
          FactoryComponent::create((FactoryComponent *)&v53, v22, (int)v19);
          v26 = v54;
          if ( v54 )
            v27 = *(_DWORD *)(v54 + 4);
            v28 = (unsigned int *)(v54 + 4);
            while ( v27 )
            {
              __dmb();
              v29 = __ldrex(v28);
              if ( v29 == v27 )
              {
                v30 = __strex(v27 + 1, v28);
                v27 = v29;
                if ( !v30 )
                {
                  __dmb();
                  v31 = v53;
                  if ( !*v28 )
                    v31 = *v28;
                  if ( !v31 )
                    goto LABEL_95;
                  v32 = *(void (**)(void))(*(_DWORD *)UIControl::getScreenAction(v50, 0) + 32);
                  v51 = v31;
                  v52 = v26;
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v33 = __ldrex(v28);
                    while ( __strex(v33 + 1, v28) );
                  }
                  else
                    ++*v28;
                  v49 = v24;
                  v32();
                  v34 = v52;
                  if ( v52 )
                    v35 = (unsigned int *)(v52 + 4);
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
                      v37 = (unsigned int *)(v34 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v38 = __ldrex(v37);
                        while ( __strex(v38 - 1, v37) );
                      }
                      else
                        v38 = (*v37)--;
                      if ( v38 == 1 )
                        (*(void (**)(void))(*(_DWORD *)v34 + 12))();
                  v39 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id[0];
                  if ( !(v39 & 1)
                    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id) )
                    v40 = typeid_t<UIComponent>::count[0]++;
                    type_id<UIComponent,CollectionItemComponent>(void)::id[0] = v40;
                    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id);
                  v41 = type_id<UIComponent,CollectionItemComponent>(void)::id[0];
                  v24 = v49;
                  v42 = (CollectionItemComponent *)(UIControl::_hasComponent(
                                                      (UIControl *)v31,
                                                      type_id<UIComponent,CollectionItemComponent>(void)::id[0]) == 1 ? *(_DWORD *)(*(_DWORD *)(v31 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v31, v41)) : 0);
                  CollectionItemComponent::setCollectionIndex(v42, v6);
                  if ( v26 )
LABEL_95:
                        v43 = __ldrex(v28);
                      while ( __strex(v43 - 1, v28) );
                      v43 = (*v28)--;
                    if ( v43 == 1 )
                      v44 = (unsigned int *)(v26 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
                          v45 = __ldrex(v44);
                        while ( __strex(v45 - 1, v44) );
                        v45 = (*v44)--;
                      if ( v45 == 1 )
                        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
                  break;
                }
              }
              else
                __clrex();
            }
          v46 = v54;
          v19 = &v55;
          v1 = v24;
            v47 = (unsigned int *)(v54 + 8);
            if ( &pthread_create )
              do
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
            else
              v48 = (*v47)--;
            if ( v48 == 1 )
              (*(void (**)(void))(*(_DWORD *)v46 + 12))();
          UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v55);
          v2 = (int)v50;
        }
      ++v6;
      result = v58;
    while ( v6 < v58 );
  return result;
}


void __fastcall CollectionComponent::~CollectionComponent(CollectionComponent *this)
{
  CollectionComponent::~CollectionComponent(this);
}


char *__fastcall CollectionComponent::getCollectionName(CollectionComponent *this)
{
  return (char *)this + 12;
}


int __fastcall CollectionComponent::setControlBindings(UIComponent *a1, unsigned __int64 *a2)
{
  UIComponent *v2; // r4@1
  int v3; // r4@1
  char v4; // r0@1
  int v5; // r5@4
  FactoryComponent *v6; // r0@5
  int result; // r0@5

  v2 = a1;
  std::vector<std::string,std::allocator<std::string>>::operator=((int)a1 + 16, a2);
  v3 = UIComponent::getOwner(v2);
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
  {
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  }
  v5 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
    v6 = *(FactoryComponent **)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v5));
    result = j_j_j__ZN16FactoryComponent10destroyAllEv_0(v6);
  else
    result = j_j_j__ZN16FactoryComponent10destroyAllEv_0(0);
  return result;
}
