

signed int __fastcall VisualTree::hasControlsToUpdate(VisualTree *this)
{
  __int64 v1; // r1@2
  bool v2; // zf@2
  signed int result; // r0@5

  if ( (unsigned int)*((_QWORD *)this + 6) != *((_QWORD *)this + 6) >> 32 )
    goto LABEL_9;
  v1 = *((_QWORD *)this + 9);
  v2 = (_DWORD)v1 == HIDWORD(v1);
  if ( (_DWORD)v1 == HIDWORD(v1) )
    v2 = (unsigned int)*(_QWORD *)((char *)this + 60) == *(_QWORD *)((char *)this + 60) >> 32;
  if ( v2 )
    result = *((_BYTE *)this + 96) != 0;
  else
LABEL_9:
    result = 1;
  return result;
}


int __fastcall std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<SliderComponent>(std::function<bool ()(SliderComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  char v4; // r0@1
  int v5; // r5@4
  int result; // r0@7

  v2 = a2;
  v3 = *a1;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
  {
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SliderComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v5)) )
    if ( !*(_DWORD *)(*(_DWORD *)v3 + 8) )
      sub_DA7654();
    result = (*(int (**)(void))(*(_DWORD *)v3 + 12))();
  else
    result = 0;
  return result;
}


void __fastcall VisualTree::markToRemoveDeadDependencies(int a1, int a2)
{
  VisualTree::markToRemoveDeadDependencies(a1, a2);
}


int __fastcall std::_Function_handler<bool ()(UIControl const&),std::shared_ptr<UIControl> VisualTree::getFirstControlWith<GridItemComponent>(std::function<bool ()(GridItemComponent const&)> const&)::{lambda(UIControl const&)#1}>::_M_invoke(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  char v4; // r0@1
  int v5; // r5@4
  int result; // r0@7

  v2 = a2;
  v3 = *a1;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
  {
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v5)) )
    if ( !*(_DWORD *)(*(_DWORD *)v3 + 8) )
      sub_21E5F48();
    result = (*(int (**)(void))(*(_DWORD *)v3 + 12))();
  else
    result = 0;
  return result;
}


int __fastcall VisualTree::clearControlsToRemoveFromCollections(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)(result + 72);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 76) = v2;
  return result;
}


void __fastcall VisualTree::removeFromControlCollection(int a1, int a2)
{
  VisualTree::removeFromControlCollection(a1, a2);
}


int __fastcall VisualTree::setMeasureStrategy(int result, UIMeasureStrategy *a2)
{
  *(_DWORD *)(result + 32) = a2;
  return result;
}


int __fastcall VisualTree::initRootControl(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int *v5; // r5@8

  v2 = *(_QWORD *)a2;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(result + 4) = v2;
  v3 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = HIDWORD(v2);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v4);
      while ( __strex(result - 1, v4) );
    }
    else
      result = (*v4)--;
    if ( result == 1 )
      v5 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v5);
        while ( __strex(result - 1, v5) );
      }
      else
        result = (*v5)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}


int __fastcall VisualTree::clearBindUpdateFromRoot(int result)
{
  *(_BYTE *)(result + 97) = 0;
  return result;
}


char *__fastcall VisualTree::visitTree(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@3
  void (__fastcall *v5)(int *, int, signed int); // r3@3
  char *result; // r0@5
  int v7; // [sp+0h] [bp-20h]@4
  int (*v8)(void); // [sp+8h] [bp-18h]@3
  int v9; // [sp+Ch] [bp-14h]@4

  v3 = a2;
  if ( !a2 )
    v3 = *(_DWORD *)(a1 + 4);
  v4 = a3;
  v8 = 0;
  v5 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  if ( v5 )
  {
    v5(&v7, a3, 2);
    v9 = *(_DWORD *)(v4 + 12);
    v8 = *(int (**)(void))(v4 + 8);
  }
  result = visitTreeInternal(v3, (int)&v7, 0, 1);
  if ( v8 )
    result = (char *)v8();
  return result;
}


int __fastcall std::_Function_base::_Base_manager<std::shared_ptr<UIControl> VisualTree::getFirstControlWith<GridComponent>(std::function<bool ()(GridComponent const&)> const&)::{lambda(UIControl const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall VisualTree::setInitialSelectedControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 16);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 16) = v3;
  return result;
}


void __fastcall VisualTree::removeFromControlCollection(int a1, int a2)
{
  int v2; // r3@1
  int v3; // lr@1
  int v4; // r2@1
  int v5; // r4@2
  int v6; // r5@2
  bool v7; // zf@3
  _DWORD *v8; // r2@3
  int v9; // r6@6
  bool v10; // zf@6
  int v11; // r2@11
  int v12; // r4@13
  __int64 v13; // r2@22

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 76);
  v4 = (v3 - v2) >> 5;
  if ( v4 >= 1 )
  {
    v5 = *(_DWORD *)a2;
    v6 = v4 + 1;
    do
    {
      v7 = *(_DWORD *)v2 == v5;
      v8 = (_DWORD *)v2;
      if ( *(_DWORD *)v2 != v5 )
      {
        v8 = (_DWORD *)(v2 + 8);
        v7 = *(_DWORD *)(v2 + 8) == v5;
      }
      if ( v7 )
        break;
      v8 = (_DWORD *)(v2 + 16);
      v9 = *(_DWORD *)(v2 + 16);
      v10 = v9 == v5;
      if ( v9 != v5 )
        v8 = (_DWORD *)(v2 + 24);
        v10 = *(_DWORD *)(v2 + 24) == v5;
      if ( v10 )
      --v6;
      v2 += 32;
    }
    while ( v6 > 1 );
LABEL_20:
    if ( v8 != (_DWORD *)v3 )
      return;
    goto LABEL_21;
  }
  if ( 1 == (v3 - v2) >> 3 )
    v12 = *(_DWORD *)a2;
    v8 = (_DWORD *)v2;
  else
    v11 = (v3 - v2) >> 3;
    if ( v11 == 3 )
      v12 = *(_DWORD *)a2;
      if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
        goto LABEL_20;
      v8 = (_DWORD *)(v2 + 8);
    else
      if ( v11 != 2 )
        goto LABEL_21;
    if ( *v8 == v12 )
      goto LABEL_20;
    v8 += 2;
  if ( *v8 == v12 )
    goto LABEL_20;
LABEL_21:
  if ( v3 == *(_DWORD *)(a1 + 80) )
    j_j_j__ZNSt6vectorISt10shared_ptrI9UIControlESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_((_QWORD *)(a1 + 72), a2);
    v13 = *(_DWORD *)a2;
    *(_QWORD *)v3 = v13;
    LODWORD(v13) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = HIDWORD(v13);
    *(_DWORD *)(v3 + 4) = v13;
    *(_DWORD *)a2 = HIDWORD(v13);
    *(_DWORD *)(a1 + 76) = v3 + 8;
}


void __fastcall VisualTree::updateControlBinds(int a1, int a2)
{
  int v2; // r3@1
  int v3; // lr@1
  int v4; // r2@1
  int v5; // r4@2
  int v6; // r5@2
  bool v7; // zf@3
  _DWORD *v8; // r2@3
  int v9; // r6@6
  bool v10; // zf@6
  int v11; // r2@11
  int v12; // r4@13
  __int64 v13; // r2@22

  v2 = *(_DWORD *)(a1 + 84);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = (v3 - v2) >> 5;
  if ( v4 >= 1 )
  {
    v5 = *(_DWORD *)a2;
    v6 = v4 + 1;
    do
    {
      v7 = *(_DWORD *)v2 == v5;
      v8 = (_DWORD *)v2;
      if ( *(_DWORD *)v2 != v5 )
      {
        v8 = (_DWORD *)(v2 + 8);
        v7 = *(_DWORD *)(v2 + 8) == v5;
      }
      if ( v7 )
        break;
      v8 = (_DWORD *)(v2 + 16);
      v9 = *(_DWORD *)(v2 + 16);
      v10 = v9 == v5;
      if ( v9 != v5 )
        v8 = (_DWORD *)(v2 + 24);
        v10 = *(_DWORD *)(v2 + 24) == v5;
      if ( v10 )
      --v6;
      v2 += 32;
    }
    while ( v6 > 1 );
LABEL_20:
    if ( v8 != (_DWORD *)v3 )
      return;
    goto LABEL_21;
  }
  if ( 1 == (v3 - v2) >> 3 )
    v12 = *(_DWORD *)a2;
    v8 = (_DWORD *)v2;
  else
    v11 = (v3 - v2) >> 3;
    if ( v11 == 3 )
      v12 = *(_DWORD *)a2;
      if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
        goto LABEL_20;
      v8 = (_DWORD *)(v2 + 8);
    else
      if ( v11 != 2 )
        goto LABEL_21;
    if ( *v8 == v12 )
      goto LABEL_20;
    v8 += 2;
  if ( *v8 == v12 )
    goto LABEL_20;
LABEL_21:
  if ( v3 == *(_DWORD *)(a1 + 92) )
    j_j_j__ZNSt6vectorISt10shared_ptrI9UIControlESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_((_QWORD *)(a1 + 84), a2);
    v13 = *(_DWORD *)a2;
    *(_QWORD *)v3 = v13;
    LODWORD(v13) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = HIDWORD(v13);
    *(_DWORD *)(v3 + 4) = v13;
    *(_DWORD *)a2 = HIDWORD(v13);
    *(_DWORD *)(a1 + 88) = v3 + 8;
}


char *__fastcall VisualTree::getControlsToUpdate(VisualTree *this)
{
  char *result; // r0@1
  int v2; // t1@1
  int v3; // r1@1
  int v4; // r1@1

  v2 = *((_DWORD *)this + 12);
  result = (char *)this + 48;
  *(_DWORD *)result = *((_DWORD *)result + 3);
  *((_DWORD *)result + 3) = v2;
  v3 = *((_DWORD *)result + 1);
  *((_DWORD *)result + 1) = *((_DWORD *)result + 4);
  *((_DWORD *)result + 4) = v3;
  v4 = *((_DWORD *)result + 2);
  *((_DWORD *)result + 2) = *((_DWORD *)result + 5);
  *((_DWORD *)result + 5) = v4;
  return result;
}


int __fastcall VisualTree::addDirtyFlag(int result, int a2)
{
  *(_DWORD *)(result + 24) |= a2;
  return result;
}


char *__fastcall VisualTree::getControlsToBind(VisualTree *this)
{
  return (char *)this + 84;
}


int __fastcall VisualTree::VisualTree(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26D7354;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = 7;
  *(_BYTE *)(a1 + 28) = 1;
  _aeabi_memclr8(a1 + 32, 64);
  *(_WORD *)(v1 + 96) = 257;
  Json::Value::Value((_DWORD *)(v1 + 104), 0);
  return v1;
}


int __fastcall std::_Function_base::_Base_manager<std::shared_ptr<UIControl> VisualTree::getFirstControlWith<GridItemComponent>(std::function<bool ()(GridItemComponent const&)> const&)::{lambda(UIControl const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


_QWORD *__fastcall VisualTree::getVisibleControls(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  _QWORD *result; // r0@1
  _DWORD *v9; // [sp+0h] [bp-30h]@1
  __int64 v10; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = operator new(8u);
  HIDWORD(v7) = sub_C83280;
  *v6 = v4;
  v6[1] = v3;
  LODWORD(v7) = sub_C833FC;
  v9 = v6;
  v10 = v7;
  result = getVisibleControlsInternal((int)&v9, *(_DWORD *)(v5 + 4));
  if ( (_DWORD)v10 )
    result = (_QWORD *)((int (__cdecl *)(_DWORD **))v10)(&v9);
  return result;
}


void __fastcall VisualTree::~VisualTree(VisualTree *this)
{
  VisualTree *v1; // r0@1

  v1 = VisualTree::~VisualTree(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall VisualTree::updateControlBinds(int a1, int a2)
{
  VisualTree::updateControlBinds(a1, a2);
}


unsigned int __fastcall VisualTree::getFirstControl(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return getFirstControlInternal(a1, a3, *(_DWORD *)(a2 + 4));
}


int __fastcall VisualTree::updateBindsFromRoot(int result)
{
  *(_BYTE *)(result + 97) = 1;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


void __fastcall VisualTree::updateControlCollection(int a1, int a2)
{
  VisualTree::updateControlCollection(a1, a2);
}


char *__fastcall VisualTree::getInitGlobalVars(VisualTree *this)
{
  return (char *)this + 104;
}


void __fastcall VisualTree::getControlByName(int a1, int a2, int a3)
{
  VisualTree::getControlByName(a1, a2, a3);
}


int __fastcall VisualTree::clearControlsToBind(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)(result + 84);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 88) = v2;
  return result;
}


int __fastcall VisualTree::updateControlCollectionFromRoot(int result)
{
  *(_BYTE *)(result + 96) = 1;
  return result;
}


signed int __fastcall VisualTree::hasControlsToBind(VisualTree *this)
{
  signed int result; // r0@2
  __int64 v2; // r1@3

  if ( *((_BYTE *)this + 97) )
  {
    result = 1;
  }
  else
    v2 = *(_QWORD *)((char *)this + 84);
    result = 0;
    if ( (_DWORD)v2 != HIDWORD(v2) )
      result = 1;
  return result;
}


VisualTree *__fastcall VisualTree::~VisualTree(VisualTree *this)
{
  VisualTree *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r5@20
  int v10; // r7@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r6@28
  unsigned int v15; // r0@30
  int v16; // r5@39
  int v17; // r7@39
  int v18; // r4@40
  unsigned int *v19; // r1@41
  unsigned int v20; // r0@43
  unsigned int *v21; // r6@47
  unsigned int v22; // r0@49
  int v23; // r5@58
  int v24; // r7@58
  int v25; // r4@59
  unsigned int *v26; // r1@60
  unsigned int v27; // r0@62
  unsigned int *v28; // r6@66
  unsigned int v29; // r0@68
  int v30; // r4@77
  int v31; // r5@77
  int v32; // r0@78
  unsigned int *v33; // r2@79
  unsigned int v34; // r1@81
  int v35; // r1@90
  void *v36; // r0@90
  int v37; // r0@91
  unsigned int *v38; // r2@92
  unsigned int v39; // r1@94
  int v40; // r5@99
  unsigned int *v41; // r1@100
  unsigned int v42; // r0@102
  unsigned int *v43; // r4@106
  unsigned int v44; // r0@108
  unsigned int *v46; // r2@114
  signed int v47; // r1@116

  v1 = this;
  *(_DWORD *)this = &off_26D7354;
  Json::Value::~Value((VisualTree *)((char *)this + 104));
  v3 = *(_QWORD *)((char *)v1 + 84) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 21);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_QWORD *)v1 + 9) >> 32;
  v9 = *((_QWORD *)v1 + 9);
  if ( v9 != v10 )
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v9 += 8;
    while ( v9 != v10 );
    v9 = *((_DWORD *)v1 + 18);
  if ( v9 )
    operator delete((void *)v9);
  v17 = *(_QWORD *)((char *)v1 + 60) >> 32;
  v16 = *(_QWORD *)((char *)v1 + 60);
  if ( v16 != v17 )
      v18 = *(_DWORD *)(v16 + 4);
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          v21 = (unsigned int *)(v18 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
      v16 += 8;
    while ( v16 != v17 );
    v16 = *((_DWORD *)v1 + 15);
  if ( v16 )
    operator delete((void *)v16);
  v24 = *((_QWORD *)v1 + 6) >> 32;
  v23 = *((_QWORD *)v1 + 6);
  if ( v23 != v24 )
      v25 = *(_DWORD *)(v23 + 4);
      if ( v25 )
        v26 = (unsigned int *)(v25 + 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          v28 = (unsigned int *)(v25 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
      v23 += 8;
    while ( v23 != v24 );
    v23 = *((_DWORD *)v1 + 12);
  if ( v23 )
    operator delete((void *)v23);
  v30 = *(_QWORD *)((char *)v1 + 36) >> 32;
  v31 = *(_QWORD *)((char *)v1 + 36);
  if ( v31 != v30 )
      v32 = *(_DWORD *)(v31 + 8);
      if ( v32 )
        v33 = (unsigned int *)(v32 + 8);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          (*(void (**)(void))(*(_DWORD *)v32 + 12))();
      v31 += 12;
    while ( v31 != v30 );
    v31 = *((_DWORD *)v1 + 9);
  if ( v31 )
    operator delete((void *)v31);
  v35 = *((_DWORD *)v1 + 5);
  v36 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = *((_DWORD *)v1 + 4);
  if ( v37 )
    v38 = (unsigned int *)(v37 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      (*(void (**)(void))(*(_DWORD *)v37 + 12))();
  v40 = *((_DWORD *)v1 + 2);
  if ( v40 )
    v41 = (unsigned int *)(v40 + 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 == 1 )
      v43 = (unsigned int *)(v40 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
      if ( &pthread_create )
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      else
        v44 = (*v43)--;
      if ( v44 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
  return v1;
}


int __fastcall std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getVisibleControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  char v4; // r0@1
  int v5; // r5@4
  int result; // r0@7

  v2 = a2;
  v3 = *a1;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
  {
    type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ToggleComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v5)) )
    if ( !*(_DWORD *)(*(_DWORD *)v3 + 8) )
      sub_21E5F48();
    result = (*(int (**)(void))(*(_DWORD *)v3 + 12))();
  else
    result = 0;
  return result;
}


unsigned int __fastcall VisualTree::getFirstVisibleControl(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return getFirstVisibleControlInternal(a1, a3, *(_DWORD *)(a2 + 4));
}


int __fastcall VisualTree::clearControlCollectionUpdateFromRoot(int result)
{
  *(_BYTE *)(result + 96) = 0;
  return result;
}


void __fastcall VisualTree::getControlByName(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r4@3
  int v9; // r8@3
  int v10; // r0@4
  unsigned int *v11; // r0@5
  unsigned int v12; // r1@7
  int v13; // r6@12
  unsigned int *v14; // r1@13
  unsigned int v15; // r0@15
  unsigned int *v16; // r5@19
  unsigned int v17; // r0@21
  _DWORD *v18; // [sp+4h] [bp-34h]@1
  __int64 v19; // [sp+Ch] [bp-2Ch]@1
  _DWORD *v20; // [sp+14h] [bp-24h]@1
  _DWORD *v21; // [sp+18h] [bp-20h]@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(4u);
  LODWORD(v7) = sub_C83462;
  *v6 = v4;
  HIDWORD(v7) = sub_C83436;
  v18 = v6;
  v19 = v7;
  VisualTree::getControls((int)&v20, v5, (int)&v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  v9 = (int)v21;
  v8 = (int)v20;
  if ( v20 == v21 )
  {
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
  }
  else
    *(_DWORD *)v3 = *v20;
    v10 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v3 + 4) = v10;
    if ( v10 )
    {
      v11 = (unsigned int *)(v10 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        v9 = (int)v21;
        v8 = (int)v20;
      }
      else
        ++*v11;
    }
    if ( v8 == v9 )
      v8 = v9;
    else
      do
        v13 = *(_DWORD *)(v8 + 4);
        if ( v13 )
        {
          v14 = (unsigned int *)(v13 + 4);
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
            v16 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        }
        v8 += 8;
      while ( v8 != v9 );
      v8 = (int)v20;
  if ( v8 )
    operator delete((void *)v8);
}


void __fastcall VisualTree::updateControlCollection(int a1, int a2)
{
  int v2; // r3@1
  int v3; // lr@1
  int v4; // r2@1
  int v5; // r4@2
  int v6; // r5@2
  bool v7; // zf@3
  _DWORD *v8; // r2@3
  int v9; // r6@6
  bool v10; // zf@6
  int v11; // r2@11
  int v12; // r4@13
  __int64 v13; // r2@22

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(a1 + 64);
  v4 = (v3 - v2) >> 5;
  if ( v4 >= 1 )
  {
    v5 = *(_DWORD *)a2;
    v6 = v4 + 1;
    do
    {
      v7 = *(_DWORD *)v2 == v5;
      v8 = (_DWORD *)v2;
      if ( *(_DWORD *)v2 != v5 )
      {
        v8 = (_DWORD *)(v2 + 8);
        v7 = *(_DWORD *)(v2 + 8) == v5;
      }
      if ( v7 )
        break;
      v8 = (_DWORD *)(v2 + 16);
      v9 = *(_DWORD *)(v2 + 16);
      v10 = v9 == v5;
      if ( v9 != v5 )
        v8 = (_DWORD *)(v2 + 24);
        v10 = *(_DWORD *)(v2 + 24) == v5;
      if ( v10 )
      --v6;
      v2 += 32;
    }
    while ( v6 > 1 );
LABEL_20:
    if ( v8 != (_DWORD *)v3 )
      return;
    goto LABEL_21;
  }
  if ( 1 == (v3 - v2) >> 3 )
    v12 = *(_DWORD *)a2;
    v8 = (_DWORD *)v2;
  else
    v11 = (v3 - v2) >> 3;
    if ( v11 == 3 )
      v12 = *(_DWORD *)a2;
      if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
        goto LABEL_20;
      v8 = (_DWORD *)(v2 + 8);
    else
      if ( v11 != 2 )
        goto LABEL_21;
    if ( *v8 == v12 )
      goto LABEL_20;
    v8 += 2;
  if ( *v8 == v12 )
    goto LABEL_20;
LABEL_21:
  if ( v3 == *(_DWORD *)(a1 + 68) )
    j_j_j__ZNSt6vectorISt10shared_ptrI9UIControlESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_((_QWORD *)(a1 + 60), a2);
    v13 = *(_DWORD *)a2;
    *(_QWORD *)v3 = v13;
    LODWORD(v13) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = HIDWORD(v13);
    *(_DWORD *)(v3 + 4) = v13;
    *(_DWORD *)a2 = HIDWORD(v13);
    *(_DWORD *)(a1 + 64) = v3 + 8;
}


void __fastcall VisualTree::~VisualTree(VisualTree *this)
{
  VisualTree::~VisualTree(this);
}


char *__fastcall VisualTree::measureControls(VisualTree *this, UIControl *a2)
{
  VisualTree *v2; // r5@1
  UIControl *v3; // r4@1
  char *result; // r0@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  _DWORD *v7; // [sp+0h] [bp-20h]@2
  __int64 v8; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  result = (char *)*((_DWORD *)this + 8);
  if ( result )
  {
    v5 = operator new(4u);
    LODWORD(v6) = sub_C8350C;
    *v5 = v2;
    HIDWORD(v6) = sub_C83498;
    v7 = v5;
    v8 = v6;
    result = VisualTree::visitTree((int)v2, (int)v3, (int)&v7);
    if ( (_DWORD)v8 )
      result = (char *)((int (__cdecl *)(_DWORD **))v8)(&v7);
  }
  return result;
}


int __fastcall VisualTree::removeDeadDependencies(int result)
{
  int v1; // r7@0
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r10@1
  int v5; // r5@3
  unsigned int *v6; // r8@4
  int v7; // r1@7
  unsigned int v8; // r2@8
  bool v9; // zf@9
  char v10; // r0@12
  unsigned __int16 v11; // r0@14
  int v12; // r4@15
  LayoutComponent *v13; // r0@16
  unsigned int *v14; // r4@24
  int v15; // r4@32
  int v16; // r7@33
  unsigned int *v17; // r2@35
  unsigned int v18; // r1@37
  int v19; // [sp+0h] [bp-30h]@2

  v2 = result;
  v4 = *(_QWORD *)(result + 36) >> 32;
  v3 = *(_QWORD *)(result + 36);
  if ( v3 != v4 )
  {
    v19 = result;
    result = (int)type_id<UIComponent,LayoutComponent>(void)::id;
    do
    {
      v5 = *(_DWORD *)(v3 + 8);
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
              v9 = *v6 == 0;
              if ( *v6 )
              {
                v1 = *(_DWORD *)(v3 + 4);
                v9 = v1 == 0;
              }
              if ( !v9 )
                v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
                __dmb();
                if ( !(v10 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
                {
                  v11 = typeid_t<UIComponent>::count[0]++;
                  type_id<UIComponent,LayoutComponent>(void)::id[0] = v11;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
                }
                v12 = type_id<UIComponent,LayoutComponent>(void)::id[0];
                if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
                  v13 = *(LayoutComponent **)(*(_DWORD *)(v1 + 108)
                                            + 4 * UIControl::_getComponentIndex((UIControl *)v1, v12));
                  if ( v13 )
                    LayoutComponent::removeDeadDependencies(v13);
              if ( &pthread_create )
                do
                  result = __ldrex(v6);
                while ( __strex(result - 1, v6) );
              else
                result = (*v6)--;
              if ( result == 1 )
                v14 = (unsigned int *)(v5 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
                if ( &pthread_create )
                  __dmb();
                  do
                    result = __ldrex(v14);
                  while ( __strex(result - 1, v14) );
                else
                  result = (*v14)--;
                if ( result == 1 )
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
              break;
            }
          }
          else
            __clrex();
        }
      }
      v3 += 12;
    }
    while ( v3 != v4 );
    v2 = v19;
    v15 = *(_QWORD *)(v19 + 36) >> 32;
    v3 = *(_QWORD *)(v19 + 36);
    if ( v15 != v3 )
      v16 = *(_QWORD *)(v19 + 36);
      do
        result = *(_DWORD *)(v16 + 8);
        if ( result )
          v17 = (unsigned int *)(result + 8);
          if ( &pthread_create )
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 == 1 )
            result = (*(int (**)(void))(*(_DWORD *)result + 12))();
        v16 += 12;
      while ( v16 != v15 );
  }
  *(_DWORD *)(v2 + 40) = v3;
  return result;
}


int __fastcall VisualTree::getInitialSelectedControl(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 16);
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
  v10 = *(_DWORD *)(a2 + 12);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getVisibleControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall VisualTree::clearControlsUpdate(int result, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  __int64 v4; // kr00_8@1
  int v5; // r7@2
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int *v8; // r6@10
  __int64 v9; // kr08_8@19
  int v10; // r6@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int *v13; // r5@28

  v2 = result;
  v3 = a2;
  v4 = *(_QWORD *)(result + 48);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = v4;
    result = (int)&pthread_create_ptr;
    do
    {
      v6 = *(_DWORD *)(v5 + 4);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v7);
          while ( __strex(result - 1, v7) );
        }
        else
          result = (*v7)--;
        if ( result == 1 )
          v8 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v8);
            while ( __strex(result - 1, v8) );
          }
          else
            result = (*v8)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v5 += 8;
    }
    while ( v5 != HIDWORD(v4) );
  }
  *(_DWORD *)(v2 + 52) = v4;
  if ( v3 == 1 )
    v9 = *(_QWORD *)(v2 + 60);
    if ( HIDWORD(v9) != (_DWORD)v9 )
      v10 = v9;
      result = (int)&pthread_create_ptr;
      do
        v11 = *(_DWORD *)(v10 + 4);
        if ( v11 )
          v12 = (unsigned int *)(v11 + 4);
              result = __ldrex(v12);
            while ( __strex(result - 1, v12) );
            result = (*v12)--;
            v13 = (unsigned int *)(v11 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v13);
              while ( __strex(result - 1, v13) );
            }
            else
              result = (*v13)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
        v10 += 8;
      while ( v10 != HIDWORD(v9) );
    *(_DWORD *)(v2 + 64) = v9;
  return result;
}


char *__fastcall VisualTree::getControls(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  char *result; // r0@3
  int v8; // [sp+0h] [bp-30h]@2
  int (*v9)(void); // [sp+8h] [bp-28h]@1
  int v10; // [sp+Ch] [bp-24h]@2

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = a2;
  v9 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(&v8, a3, 2);
    v10 = *(_DWORD *)(v4 + 12);
    v9 = *(int (**)(void))(v4 + 8);
  }
  result = getControlsInternal(v3, (int)&v8, *(_DWORD *)(v5 + 4));
  if ( v9 )
    result = (char *)v9();
  return result;
}


unsigned int __fastcall VisualTree::recreateControlTree(VisualTree *this, UIControlFactory *a2, int a3)
{
  VisualTree *v3; // r8@1
  int v4; // r7@1
  UIControlFactory *v5; // r5@1
  _DWORD *v6; // r4@1
  __int64 v7; // kr00_8@1
  unsigned int *v8; // r2@2
  unsigned int v9; // r3@4
  int v10; // r7@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r4@14
  unsigned int v14; // r0@16
  int v15; // r0@21
  unsigned int result; // r0@21
  int v17; // r4@21
  unsigned int *v18; // r1@22
  unsigned int *v19; // r5@28
  char v20; // [sp+10h] [bp-20h]@1
  int v21; // [sp+14h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x78u);
  VisualTree::VisualTree((int)v6);
  *(_DWORD *)v3 = v6;
  UIControlFactory::createControlTree((int)&v20, v4, (int)v5 + 20, (int)v6, 0, 1, 0, 0);
  v7 = *(_QWORD *)&v20;
  if ( v21 )
  {
    v8 = (unsigned int *)(v21 + 4);
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
  v6[1] = v7;
  v10 = v6[2];
  v6[2] = HIDWORD(v7);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
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
  v15 = *(_DWORD *)v3;
  *(_DWORD *)(v15 + 32) = *((_DWORD *)v5 + 8);
  EntityInteraction::setInteractText((int *)(v15 + 20), (int *)v5 + 5);
  (*(void (__fastcall **)(UIControlFactory *))(*(_DWORD *)v5 + 36))(v5);
  result = (*(int (__fastcall **)(UIControlFactory *))(*(_DWORD *)v5 + 48))(v5);
  v17 = v21;
    v18 = (unsigned int *)(v21 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall std::_Function_handler<bool ()(UIControl const&),std::shared_ptr<UIControl> VisualTree::getFirstControlWith<GridComponent>(std::function<bool ()(GridComponent const&)> const&)::{lambda(UIControl const&)#1}>::_M_invoke(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  char v4; // r0@1
  int v5; // r5@4
  int result; // r0@7

  v2 = a2;
  v3 = *a1;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,GridComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v5)) )
    if ( !*(_DWORD *)(*(_DWORD *)v3 + 8) )
      sub_21E5F48();
    result = (*(int (**)(void))(*(_DWORD *)v3 + 12))();
  else
    result = 0;
  return result;
}


signed int __fastcall VisualTree::getDirty(VisualTree *this)
{
  VisualTree *v1; // r1@1
  int v2; // r0@1
  bool v3; // zf@1
  signed int result; // r0@4
  __int64 v5; // kr00_8@5
  bool v6; // zf@5
  unsigned int v7; // r2@9

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = (unsigned int)*((_QWORD *)v1 + 6) == *((_QWORD *)v1 + 6) >> 32;
  if ( !v3 )
    goto LABEL_15;
  v5 = *((_QWORD *)v1 + 9);
  v6 = (_DWORD)v5 == HIDWORD(v5);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    v6 = (unsigned int)*(_QWORD *)((char *)v1 + 60) == *(_QWORD *)((char *)v1 + 60) >> 32;
  if ( v6 )
  {
    v7 = *((_WORD *)v1 + 48);
    result = 1;
    if ( !(_BYTE)v7 && v7 <= 0xFF )
    {
      result = 0;
      if ( (unsigned int)*(_QWORD *)((char *)v1 + 84) != *(_QWORD *)((char *)v1 + 84) >> 32 )
        result = 1;
    }
  }
  else
LABEL_15:
  return result;
}


_BOOL4 __fastcall VisualTree::getDirty(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 24) & a2) != 0;
}


int __fastcall VisualTree::setClearPersistantMeshes(int result, bool a2)
{
  *(_BYTE *)(result + 28) = a2;
  return result;
}


void __fastcall VisualTree::markToRemoveDeadDependencies(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r4@1
  int v4; // r11@1
  int v5; // r0@2
  int v6; // r6@3
  unsigned int v7; // r1@4
  unsigned int *v8; // r0@4
  unsigned int v9; // r2@7
  unsigned int v10; // r3@8
  unsigned int v11; // r1@9
  int v12; // r10@9
  unsigned int v13; // r5@9
  bool v14; // zf@16
  unsigned int *v15; // r7@19
  unsigned int v16; // r0@21
  int v17; // r6@27
  int v18; // r0@28
  int v19; // r8@29
  unsigned int v20; // r1@30
  unsigned int *v21; // r0@30
  unsigned int v22; // r2@33
  unsigned int v23; // r3@34
  unsigned int v24; // r1@35
  int v25; // r5@35
  unsigned int v26; // r10@35
  unsigned int *v27; // r7@46
  unsigned int v28; // r0@48
  int v29; // r0@54
  int v30; // r5@55
  unsigned int v31; // r1@56
  unsigned int *v32; // r0@56
  unsigned int v33; // r2@59
  unsigned int v34; // r3@60
  unsigned int v35; // r1@61
  int v36; // r8@61
  unsigned int v37; // r10@61
  unsigned int *v38; // r7@72
  unsigned int v39; // r0@74
  int v40; // r0@80
  int v41; // r5@81
  unsigned int v42; // r1@82
  unsigned int *v43; // r0@82
  unsigned int v44; // r2@85
  unsigned int v45; // r3@86
  unsigned int v46; // r1@87
  int v47; // r8@87
  unsigned int v48; // r10@87
  unsigned int *v49; // r7@98
  unsigned int v50; // r0@100
  unsigned __int8 v51; // vf@106
  int v52; // r0@108
  int v53; // r4@113
  unsigned int v54; // r1@114
  unsigned int *v55; // r0@114
  unsigned int v56; // r2@117
  unsigned int v57; // r3@118
  unsigned int v58; // r1@119
  signed int v59; // r0@119
  int v60; // r5@123
  int v61; // r8@123
  unsigned int *v62; // r1@126
  unsigned int v63; // r0@128
  unsigned int *v64; // r7@132
  unsigned int v65; // r0@134
  int v66; // r4@142
  unsigned int v67; // r1@143
  unsigned int *v68; // r0@143
  unsigned int v69; // r2@146
  unsigned int v70; // r3@147
  unsigned int v71; // r1@148
  signed int v72; // r0@148
  int v73; // r5@152
  int v74; // r8@152
  unsigned int *v75; // r1@155
  unsigned int v76; // r0@157
  unsigned int *v77; // r7@161
  unsigned int v78; // r0@163
  int v79; // r4@172
  unsigned int v80; // r1@173
  unsigned int *v81; // r0@173
  unsigned int v82; // r2@176
  unsigned int v83; // r3@177
  unsigned int v84; // r1@178
  signed int v85; // r0@178
  int v86; // r5@182
  int v87; // r8@182
  unsigned int *v88; // r1@185
  unsigned int v89; // r0@187
  unsigned int *v90; // r7@191
  unsigned int v91; // r0@193
  int v92; // r0@201
  int v93; // r0@202
  unsigned int *v94; // r0@203
  unsigned int v95; // r1@205
  unsigned __int64 *v96; // [sp+0h] [bp-38h]@1
  int v97; // [sp+4h] [bp-34h]@1
  int v98; // [sp+8h] [bp-30h]@1
  int v99; // [sp+10h] [bp-28h]@201

  v97 = a1;
  v2 = a2;
  v3 = *(_DWORD *)(a1 + 36);
  v96 = (unsigned __int64 *)(a1 + 36);
  v98 = *(_DWORD *)(a1 + 40);
  v4 = -1431655765 * ((v98 - v3) >> 2) >> 2;
  if ( v4 < 1 )
  {
LABEL_108:
    v17 = v3;
    v52 = -1431655765 * ((v98 - v3) >> 2);
    if ( v52 != 1 )
    {
      if ( v52 == 3 )
      {
        if ( *(_DWORD *)v3 == *(_DWORD *)v2 )
        {
          v53 = *(_DWORD *)(v3 + 8);
          if ( v53 )
          {
            v54 = *(_DWORD *)(v53 + 4);
            v55 = (unsigned int *)(v53 + 4);
            while ( v54 )
            {
              __dmb();
              v56 = __ldrex(v55);
              if ( v56 == v54 )
              {
                v57 = __strex(v54 + 1, v55);
                v54 = v56;
                if ( !v57 )
                {
                  __dmb();
                  v58 = *v55;
                  v59 = 0;
                  if ( !v58 )
                    v59 = 1;
                  goto LABEL_123;
                }
              }
              else
                __clrex();
            }
          }
          v59 = 1;
          v53 = 0;
LABEL_123:
          v60 = *(_DWORD *)(v17 + 4);
          v61 = *(_DWORD *)v2;
          if ( v59 )
            v60 = 0;
            v62 = (unsigned int *)(v53 + 4);
            if ( &pthread_create )
              do
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
            else
              v63 = (*v62)--;
            if ( v63 == 1 )
              v64 = (unsigned int *)(v53 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
              if ( &pthread_create )
                __dmb();
                do
                  v65 = __ldrex(v64);
                while ( __strex(v65 - 1, v64) );
                v65 = (*v64)--;
              if ( v65 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
          if ( v60 == v61 )
            goto LABEL_200;
        }
        v17 += 12;
      }
      else if ( v52 != 2 )
        goto LABEL_171;
      if ( *(_DWORD *)v17 == *(_DWORD *)v2 )
        v66 = *(_DWORD *)(v17 + 8);
        if ( v66 )
          v67 = *(_DWORD *)(v66 + 4);
          v68 = (unsigned int *)(v66 + 4);
          while ( v67 )
            __dmb();
            v69 = __ldrex(v68);
            if ( v69 == v67 )
              v70 = __strex(v67 + 1, v68);
              v67 = v69;
              if ( !v70 )
                v71 = *v68;
                v72 = 0;
                if ( !v71 )
                  v72 = 1;
                goto LABEL_152;
              __clrex();
        v72 = 1;
        v66 = 0;
LABEL_152:
        v73 = *(_DWORD *)(v17 + 4);
        v74 = *(_DWORD *)v2;
        if ( v72 )
          v73 = 0;
          v75 = (unsigned int *)(v66 + 4);
          if ( &pthread_create )
            do
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
          else
            v76 = (*v75)--;
          if ( v76 == 1 )
            v77 = (unsigned int *)(v66 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 8))(v66);
                v78 = __ldrex(v77);
              while ( __strex(v78 - 1, v77) );
              v78 = (*v77)--;
            if ( v78 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 12))(v66);
        if ( v73 == v74 )
          goto LABEL_200;
      v17 += 12;
    }
    if ( *(_DWORD *)v17 == *(_DWORD *)v2 )
      v79 = *(_DWORD *)(v17 + 8);
      if ( v79 )
        v80 = *(_DWORD *)(v79 + 4);
        v81 = (unsigned int *)(v79 + 4);
        while ( v80 )
          __dmb();
          v82 = __ldrex(v81);
          if ( v82 == v80 )
            v83 = __strex(v80 + 1, v81);
            v80 = v82;
            if ( !v83 )
              v84 = *v81;
              v85 = 0;
              if ( !v84 )
                v85 = 1;
              goto LABEL_182;
            __clrex();
      v85 = 1;
      v79 = 0;
LABEL_182:
      v86 = *(_DWORD *)(v17 + 4);
      v87 = *(_DWORD *)v2;
      if ( v85 )
        v86 = 0;
        v88 = (unsigned int *)(v79 + 4);
        if ( &pthread_create )
          do
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
        else
          v89 = (*v88)--;
        if ( v89 == 1 )
          v90 = (unsigned int *)(v79 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
            v91 = (*v90)--;
          if ( v91 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
      if ( v86 != v87 )
        v17 = v98;
      goto LABEL_200;
LABEL_171:
    v17 = v98;
    goto LABEL_200;
  }
  while ( 1 )
    v5 = *(_DWORD *)v2;
    if ( *(_DWORD *)v3 == *(_DWORD *)v2 )
      v6 = *(_DWORD *)(v3 + 8);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 4);
        v8 = (unsigned int *)(v6 + 4);
        do
          while ( 1 )
            if ( !v7 )
              v5 = *(_DWORD *)v2;
              goto LABEL_16;
            v9 = __ldrex(v8);
            if ( v9 == v7 )
              break;
            v7 = v9;
          v10 = __strex(v7 + 1, v8);
          v7 = v9;
        while ( v10 );
        __dmb();
        v11 = *v8;
        v12 = *(_DWORD *)v2;
        v13 = *(_DWORD *)(v3 + 4);
        if ( !*v8 )
          v13 = *v8;
            v11 = __ldrex(v8);
          while ( __strex(v11 - 1, v8) );
          *v8 = v11 - 1;
        if ( v11 == 1 )
          v15 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
        v14 = v13 == v12;
      else
LABEL_16:
        v14 = v5 == 0;
      v17 = v3;
      if ( v14 )
        break;
    v18 = *(_DWORD *)v2;
    v17 = v3 + 12;
    if ( *(_DWORD *)(v3 + 12) == *(_DWORD *)v2 )
      v19 = *(_DWORD *)(v3 + 20);
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 4);
        v21 = (unsigned int *)(v19 + 4);
            if ( !v20 )
              v18 = *(_DWORD *)v2;
              goto LABEL_42;
            v22 = __ldrex(v21);
            if ( v22 == v20 )
            v20 = v22;
          v23 = __strex(v20 + 1, v21);
          v20 = v22;
        while ( v23 );
        v24 = *v21;
        v25 = *(_DWORD *)v2;
        v26 = *(_DWORD *)(v3 + 16);
        if ( !*v21 )
          v26 = *v21;
            v24 = __ldrex(v21);
          while ( __strex(v24 - 1, v21) );
          *v21 = v24 - 1;
        if ( v24 == 1 )
          v27 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
        if ( v26 == v25 )
          break;
LABEL_42:
        if ( !v18 )
    v29 = *(_DWORD *)v2;
    v17 = v3 + 24;
    if ( *(_DWORD *)(v3 + 24) == *(_DWORD *)v2 )
      v30 = *(_DWORD *)(v3 + 32);
      if ( v30 )
        v31 = *(_DWORD *)(v30 + 4);
        v32 = (unsigned int *)(v30 + 4);
            if ( !v31 )
              v29 = *(_DWORD *)v2;
              goto LABEL_68;
            v33 = __ldrex(v32);
            if ( v33 == v31 )
            v31 = v33;
          v34 = __strex(v31 + 1, v32);
          v31 = v33;
        while ( v34 );
        v35 = *v32;
        v36 = *(_DWORD *)v2;
        v37 = *(_DWORD *)(v3 + 28);
        if ( !*v32 )
          v37 = *v32;
            v35 = __ldrex(v32);
          while ( __strex(v35 - 1, v32) );
          *v32 = v35 - 1;
        if ( v35 == 1 )
          v38 = (unsigned int *)(v30 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
        if ( v37 == v36 )
LABEL_68:
        if ( !v29 )
    v40 = *(_DWORD *)v2;
    v17 = v3 + 36;
    if ( *(_DWORD *)(v3 + 36) == *(_DWORD *)v2 )
      v41 = *(_DWORD *)(v3 + 44);
      if ( v41 )
        v42 = *(_DWORD *)(v41 + 4);
        v43 = (unsigned int *)(v41 + 4);
            if ( !v42 )
              v40 = *(_DWORD *)v2;
              goto LABEL_94;
            v44 = __ldrex(v43);
            if ( v44 == v42 )
            v42 = v44;
          v45 = __strex(v42 + 1, v43);
          v42 = v44;
        while ( v45 );
        v46 = *v43;
        v47 = *(_DWORD *)v2;
        v48 = *(_DWORD *)(v3 + 40);
        if ( !*v43 )
          v48 = *v43;
            v46 = __ldrex(v43);
          while ( __strex(v46 - 1, v43) );
          *v43 = v46 - 1;
        if ( v46 == 1 )
          v49 = (unsigned int *)(v41 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
        if ( v48 == v47 )
LABEL_94:
        if ( !v40 )
    v51 = __OFSUB__(v4--, 1);
    v3 += 48;
    if ( (unsigned __int8)((v4 < 0) ^ v51) | (v4 == 0) )
      goto LABEL_108;
LABEL_200:
  if ( v17 == *(_DWORD *)(v97 + 40) )
    v92 = *(_DWORD *)v2;
    v99 = *(_DWORD *)v2;
    if ( v17 == *(_DWORD *)(v97 + 44) )
      std::vector<std::pair<void *,std::weak_ptr<UIControl>>,std::allocator<std::pair<void *,std::weak_ptr<UIControl>>>>::_M_emplace_back_aux<UIControl*,std::shared_ptr<UIControl> &>(
        v96,
        (int)&v99,
        v2);
    else
      *(_DWORD *)v17 = v92;
      *(_DWORD *)(v17 + 4) = v92;
      v93 = *(_DWORD *)(v2 + 4);
      *(_DWORD *)(v17 + 8) = v93;
      if ( v93 )
        v94 = (unsigned int *)(v93 + 8);
            v95 = __ldrex(v94);
          while ( __strex(v95 + 1, v94) );
          v17 = *(_DWORD *)(v97 + 40);
          ++*v94;
      *(_DWORD *)(v97 + 40) = v17 + 12;
}


int __fastcall VisualTree::getRootControl(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 4);
  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
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


int __fastcall std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<SliderComponent>(std::function<bool ()(SliderComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager(void **a1, _DWORD **a2, int a3)
{
  _DWORD **v3; // r5@1
  void **v4; // r4@1
  _DWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = operator new(4u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall VisualTree::setDirty(int result, int a2)
{
  if ( a2 )
    a2 = 7;
  *(_DWORD *)(result + 24) = a2;
  return result;
}


char *__fastcall VisualTree::getInvisibleControls(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  char *result; // r0@3
  int v8; // [sp+0h] [bp-30h]@2
  int (*v9)(void); // [sp+8h] [bp-28h]@1
  int v10; // [sp+Ch] [bp-24h]@2

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = a2;
  v9 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(&v8, a3, 2);
    v10 = *(_DWORD *)(v4 + 12);
    v9 = *(int (**)(void))(v4 + 8);
  }
  result = getInvisibleControlsInternal(v3, (int)&v8, *(_DWORD *)(v5 + 4), 0);
  if ( v9 )
    result = (char *)v9();
  return result;
}


char *__fastcall VisualTree::getControlsToRemoveFromCollections(VisualTree *this)
{
  return (char *)this + 72;
}


int __fastcall VisualTree::removeDirtyFlag(int result, int a2)
{
  *(_DWORD *)(result + 24) &= ~a2;
  return result;
}


int __fastcall std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  char v4; // r0@1
  int v5; // r5@4
  int result; // r0@7

  v2 = a2;
  v3 = *a1;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
  {
    type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ToggleComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v5)) )
    if ( !*(_DWORD *)(*(_DWORD *)v3 + 8) )
      sub_DA7654();
    result = (*(int (**)(void))(*(_DWORD *)v3 + 12))();
  else
    result = 0;
  return result;
}
