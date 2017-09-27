

signed int __fastcall VariableRef::isValid(VariableRef *this)
{
  signed int result; // r0@2
  int v2; // r1@3

  if ( *((_BYTE *)this + 16) == 100 )
  {
    result = 0;
  }
  else
    v2 = *((_DWORD *)this + 2);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 4) > 0 )
        result = 1;
    }
  return result;
}


int __fastcall VariableRef::VariableRef(int a1, int a2, char a3)
{
  int v3; // r9@0
  int v4; // r4@1
  int v5; // r5@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  _DWORD *v8; // r6@5
  unsigned int v9; // r0@9
  unsigned int *v10; // r7@9
  unsigned int v11; // r1@12
  unsigned int v12; // r2@13
  bool v13; // zf@14
  char v14; // r0@17
  int v15; // r8@20
  int v16; // r0@21
  unsigned int v17; // r0@26
  unsigned int *v18; // r6@30
  unsigned int v19; // r0@32

  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = v5;
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_BYTE *)(a1 + 16) = a3;
    return v4;
  }
  v6 = (unsigned int *)(v5 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 + 1, v6) );
    v5 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 12) = 0;
    v8 = (_DWORD *)(v4 + 12);
    *(_BYTE *)(v4 + 16) = a3;
    if ( !v5 )
      return v4;
  else
    ++*v6;
  v9 = *(_DWORD *)(v5 + 4);
  v10 = (unsigned int *)(v5 + 4);
  while ( v9 )
    v11 = __ldrex(v10);
    if ( v11 == v9 )
    {
      v12 = __strex(v9 + 1, v10);
      v9 = v11;
      if ( !v12 )
      {
        __dmb();
        v13 = *v10 == 0;
        if ( *v10 )
        {
          v3 = *(_DWORD *)(v4 + 4);
          v13 = v3 == 0;
        }
        if ( !v13 )
          *(_DWORD *)v4 = v3;
          v14 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          __dmb();
          if ( !(v14 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          {
            type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          }
          v15 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
            v16 = *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v15));
          else
            v16 = 0;
          *v8 = v16;
        if ( &pthread_create )
          do
            v17 = __ldrex(v10);
          while ( __strex(v17 - 1, v10) );
        else
          v17 = (*v10)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v5 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        return v4;
      }
    }
    else
      __clrex();
  return v4;
}


int __fastcall VariableRef::VariableRef(int a1, int a2, char a3)
{
  int v3; // r4@1
  int v4; // r5@1
  char v5; // r6@1
  char v6; // r0@1
  int v7; // r6@4
  int v8; // r0@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = a2;
  UIControl::weakRef((UIControl *)(a1 + 4), a2);
  *(_DWORD *)(v3 + 12) = 0;
  *(_BYTE *)(v3 + 16) = v5;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v7 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v8 = *(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v7));
  else
    v8 = 0;
  *(_DWORD *)(v3 + 12) = v8;
  return v3;
}


void *__fastcall VariableRef::getVariable(VariableRef *this, int a2, int a3)
{
  int v3; // r1@1
  bool v4; // zf@1
  void *result; // r0@5

  v3 = *((_BYTE *)this + 16);
  v4 = v3 == 100;
  if ( v3 != 100 )
  {
    a3 = *((_DWORD *)this + 2);
    v4 = a3 == 0;
  }
  if ( v4 || *(_DWORD *)(a3 + 4) < 1 )
    result = 0;
  else
    result = j_j_j__ZN15LayoutComponent11getVariableE18LayoutVariableType(*((UIComponent **)this + 3), v3);
  return result;
}


void *__fastcall VariableRef::getVariable(VariableRef *this, int a2, int a3)
{
  int v3; // r1@1
  bool v4; // zf@1
  void *result; // r0@5

  v3 = *((_BYTE *)this + 16);
  v4 = v3 == 100;
  if ( v3 != 100 )
  {
    a3 = *((_DWORD *)this + 2);
    v4 = a3 == 0;
  }
  if ( v4 || *(_DWORD *)(a3 + 4) < 1 )
    result = 0;
  else
    result = j_j_j__ZN15LayoutComponent11getVariableE18LayoutVariableType(*((UIComponent **)this + 3), v3);
  return result;
}


int __fastcall VariableRef::VariableRef(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 16) = 100;
  return result;
}


int __fastcall VariableRef::getControl(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 8);
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
  v10 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}
