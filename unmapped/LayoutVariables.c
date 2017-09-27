

void __fastcall LayoutVariables::_traceUnsolvableGraph(LayoutVariables *this, int a2, unsigned int *a3)
{
  VariableRef *i; // r4@1
  VariableRef *v4; // r6@1
  LayoutVariable *v5; // r0@11
  int v6; // r7@11
  void *v7; // r0@13
  int v8; // [sp+0h] [bp-28h]@3

  v4 = (VariableRef *)(*(_QWORD *)((char *)this + 12) >> 32);
  for ( i = (VariableRef *)*(_QWORD *)((char *)this + 12); i != v4; i = (VariableRef *)((char *)i + 24) )
  {
    v5 = (LayoutVariable *)VariableRef::getVariable(i, a2, (int)a3);
    v6 = (int)v5;
    if ( v5 )
    {
      if ( !LayoutVariable::isSatisfied(v5) )
      {
        LayoutVariable::toString(&v8, v6, 1);
        a2 = v8;
        v7 = (void *)(v8 - 12);
        if ( (int *)(v8 - 12) != &dword_28898C0 )
        {
          a3 = (unsigned int *)(v8 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              a2 = __ldrex(a3);
            while ( __strex(a2 - 1, a3) );
          }
          else
            a2 = (*a3)--;
          if ( a2 <= 0 )
            j_j_j_j_j__ZdlPv_9(v7);
        }
      }
    }
  }
}


int __fastcall LayoutVariables::solve(LayoutVariables *this)
{
  LayoutVariables *v1; // r9@1
  int result; // r0@1
  int v3; // r5@2 OVERLAPPED
  int v4; // r6@2 OVERLAPPED
  __int64 v5; // kr00_8@5
  int v6; // r5@6
  int v7; // r0@7
  unsigned int *v8; // r2@8
  unsigned int v9; // r1@10
  __int64 v10; // r6@16
  int v11; // r5@17
  void (__fastcall *v12)(int, int, signed int); // r3@18
  int v13; // [sp+0h] [bp-20h]@1

  v1 = this;
  result = 0;
  v13 = 0;
  if ( (unsigned int)*(_QWORD *)((char *)v1 + 12) != *(_QWORD *)((char *)v1 + 12) >> 32 )
  {
    LayoutVariables::_solve((int)v1, &v13, (unsigned int *)1);
    for ( *(_QWORD *)&v3 = *(_QWORD *)v1; v4 != v3; v3 += 16 )
    {
      if ( !*(_DWORD *)(v3 + 8) )
        sub_DA7654();
      (*(void (__fastcall **)(int))(v3 + 12))(v3);
    }
    LayoutVariables::_solve((int)v1, &v13, (unsigned int *)2);
    LayoutVariables::_traceVariablesForDebugControls(v1);
    v5 = *(_QWORD *)((char *)v1 + 12);
    if ( HIDWORD(v5) != (_DWORD)v5 )
      v6 = v5;
      do
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( v7 )
        {
          v8 = (unsigned int *)(v7 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 == 1 )
            (*(void (**)(void))(*(_DWORD *)v7 + 12))();
        }
        v6 += 24;
      }
      while ( v6 != HIDWORD(v5) );
    *((_DWORD *)v1 + 4) = v5;
    v10 = *(_QWORD *)v1;
    if ( HIDWORD(v10) != (_DWORD)v10 )
      v11 = *(_QWORD *)v1;
        v12 = *(void (__fastcall **)(int, int, signed int))(v11 + 8);
        if ( v12 )
          v12(v11, v11, 3);
        v11 += 16;
      while ( HIDWORD(v10) != v11 );
    *((_DWORD *)v1 + 1) = v10;
    result = v13;
  }
  return result;
}


void __fastcall LayoutVariables::_solve(int a1, int *a2, unsigned int *a3)
{
  int v3; // r10@1
  int *v4; // r8@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r1@1
  int v8; // r9@1
  signed int i; // r4@4
  LayoutVariable *v10; // r0@6
  LayoutVariable *v11; // r7@6
  int v12; // r0@9
  LayoutVariable *v13; // r0@19
  LayoutVariable *v14; // r7@19
  int v15; // r0@22
  VariableRef *v16; // r5@29 OVERLAPPED
  VariableRef *v17; // r6@29 OVERLAPPED
  LayoutVariable *v18; // r0@39
  int v19; // r7@39
  void *v20; // r0@41
  int v21; // [sp+4h] [bp-2Ch]@31

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 12) >> 32;
  v6 = *(_QWORD *)(a1 + 12);
  v7 = -1431655765;
  v8 = -1431655765 * ((v5 - v6) >> 3);
  if ( a3 == (unsigned int *)1 )
  {
    while ( 1 )
    {
      i = 0;
      if ( v6 != v5 )
        break;
LABEL_14:
      if ( i >= v8 )
        goto LABEL_28;
      v5 = *(_QWORD *)(v3 + 12) >> 32;
      v6 = *(_QWORD *)(v3 + 12);
      v8 = i;
    }
      if ( *(_BYTE *)(v6 + 20) )
        goto LABEL_13;
      v10 = (LayoutVariable *)VariableRef::getVariable((VariableRef *)v6, v7, (int)a3);
      v11 = v10;
      if ( !v10 )
      LayoutVariable::addPostComputationalNeeds(v10, v3, v6);
      if ( !LayoutVariable::isSatisfied(v11) )
      {
        if ( LayoutVariable::isSatisfiable(v11, v7, (int)a3) != 1 )
        {
          ++i;
          goto LABEL_13;
        }
        v12 = LayoutVariable::satisfy(v11, v7, (int)a3);
        if ( v12 )
          v7 = *v4;
          *v4 |= v12;
      }
      *(_BYTE *)(v6 + 20) = 1;
LABEL_13:
      v6 += 24;
      if ( v5 == v6 )
        goto LABEL_14;
  }
  while ( 1 )
    for ( i = 0; v5 != v6; v6 += 24 )
        continue;
      v13 = (LayoutVariable *)VariableRef::getVariable((VariableRef *)v6, v7, (int)a3);
      v14 = v13;
      if ( !v13 )
      if ( !LayoutVariable::isSatisfied(v13) )
        if ( LayoutVariable::isSatisfiable(v14, v7, (int)a3) != 1 )
          continue;
        v15 = LayoutVariable::satisfy(v14, v7, (int)a3);
        if ( v15 )
          *v4 |= v15;
    if ( i >= v8 )
      break;
    v5 = *(_QWORD *)(v3 + 12) >> 32;
    v6 = *(_QWORD *)(v3 + 12);
    v8 = i;
LABEL_28:
  if ( i >= 1 )
    for ( *(_QWORD *)&v16 = *(_QWORD *)(v3 + 12); v16 != v17; v16 = (VariableRef *)((char *)v16 + 24) )
      v18 = (LayoutVariable *)VariableRef::getVariable(v16, v7, (int)a3);
      v19 = (int)v18;
      if ( v18 )
        if ( !LayoutVariable::isSatisfied(v18) )
          LayoutVariable::toString(&v21, v19, 1);
          v7 = v21;
          v20 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
          {
            a3 = (unsigned int *)(v21 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v7 = __ldrex(a3);
              while ( __strex(v7 - 1, a3) );
            }
            else
              v7 = (*a3)--;
            if ( v7 <= 0 )
              j_j_j_j_j__ZdlPv_9(v20);
          }
}


int __fastcall LayoutVariables::_clear(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  unsigned int *v4; // r2@4
  unsigned int v5; // r1@6

  v1 = result;
  v2 = *(_QWORD *)(result + 12);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      result = *(_DWORD *)(v3 + 8);
      if ( result )
      {
        v4 = (unsigned int *)(result + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      }
      v3 += 24;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 16) = v2;
  return result;
}


void __fastcall LayoutVariables::invalidate(LayoutVariables *this, VariableRef *a2, int a3)
{
  VariableRef *v3; // r5@1
  LayoutVariables *v4; // r4@1
  int v5; // r6@1
  void *v6; // r7@1
  _DWORD *v7; // r0@2
  __int64 v8; // r1@2
  __int64 v9; // r0@4
  int v10; // r1@5
  unsigned int *v11; // r1@6
  unsigned int v12; // r2@8
  _DWORD *v13; // [sp+4h] [bp-24h]@2
  __int64 v14; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = VariableRef::getVariable(a2, (int)a2, a3);
  if ( v6 )
  {
    v7 = operator new(4u);
    LODWORD(v8) = sub_CC8458;
    *v7 = v4;
    HIDWORD(v8) = sub_CC83DC;
    v13 = v7;
    v14 = v8;
    LayoutVariable::_invalidate((int)v6, (int)&v13, v5);
    if ( (_DWORD)v14 )
      ((void (*)(void))v14)();
    v9 = *((_QWORD *)v4 + 2);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<LayoutVariables::UnsatisfiedVar,std::allocator<LayoutVariables::UnsatisfiedVar>>::_M_emplace_back_aux<VariableRef &>(
        (unsigned __int64 *)((char *)v4 + 12),
        (int)v3);
    }
    else
      *(_QWORD *)v9 = *(_QWORD *)v3;
      HIDWORD(v9) = *((_DWORD *)v3 + 2);
      *(_DWORD *)(v9 + 8) = HIDWORD(v9);
      if ( HIDWORD(v9) )
      {
        v11 = (unsigned int *)(v10 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
        }
        else
          ++*v11;
      }
      HIDWORD(v9) = *((_DWORD *)v3 + 3);
      *(_BYTE *)(v9 + 16) = *((_BYTE *)v3 + 16);
      *(_DWORD *)(v9 + 12) = HIDWORD(v9);
      *(_BYTE *)(v9 + 20) = 0;
      *((_DWORD *)v4 + 4) += 24;
  }
}


LayoutVariable *__fastcall LayoutVariables::reinitialize(LayoutVariables *this, VariableRef *a2, int a3)
{
  LayoutVariable *result; // r0@1

  result = (LayoutVariable *)VariableRef::getVariable(a2, (int)a2, a3);
  if ( result )
    result = (LayoutVariable *)j_j_j__ZN14LayoutVariable13_reinitializeEv(result);
  return result;
}


void __fastcall LayoutVariables::_solve(int a1, int *a2, unsigned int *a3)
{
  LayoutVariables::_solve(a1, a2, a3);
}


void __fastcall LayoutVariables::invalidate(LayoutVariables *this, VariableRef *a2, int a3)
{
  LayoutVariables::invalidate(this, a2, a3);
}


void __fastcall LayoutVariables::_traceVariablesForDebugControls(LayoutVariables *this)
{
  VariableRef *i; // r4@1
  VariableRef *v2; // r9@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  UIControl *v7; // r7@19
  char v8; // r0@20
  int v9; // r5@23
  int v10; // r0@24
  int v11; // r2@24
  int v12; // r1@24
  DebugComponent *v13; // r5@24
  void *v14; // r7@25
  int *v15; // r0@26
  void *v16; // r0@26
  void *v17; // r0@27
  int v18; // r7@28
  unsigned int *v19; // r1@29
  unsigned int v20; // r0@31
  unsigned int *v21; // r5@35
  unsigned int v22; // r0@37
  int v23; // [sp+8h] [bp-38h]@3
  int v24; // [sp+Ch] [bp-34h]@7
  UIControl *v25; // [sp+10h] [bp-30h]@19
  int v26; // [sp+14h] [bp-2Ch]@28

  v2 = (VariableRef *)(*(_QWORD *)((char *)this + 12) >> 32);
  for ( i = (VariableRef *)*(_QWORD *)((char *)this + 12); i != v2; i = (VariableRef *)((char *)i + 24) )
  {
    VariableRef::getControl((VariableRef *)&v25, (int)i);
    v7 = v25;
    if ( v25 )
    {
      v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id;
      __dmb();
      if ( !(v8 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id) )
      {
        type_id<UIComponent,DebugComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id);
      }
      v9 = type_id<UIComponent,DebugComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v7, type_id<UIComponent,DebugComponent>(void)::id[0]) == 1 )
        v10 = UIControl::_getComponentIndex(v7, v9);
        v12 = *((_DWORD *)v7 + 27);
        v13 = *(DebugComponent **)(v12 + 4 * v10);
        if ( v13 )
        {
          v14 = VariableRef::getVariable(i, v12, v11);
          if ( v14 )
          {
            v15 = (int *)DebugComponent::getDescription(v13);
            sub_DA73B4(&v24, v15);
            LayoutVariable::toString(&v23, (int)v14, 2);
            v16 = (void *)(v23 - 12);
            if ( (int *)(v23 - 12) != &dword_28898C0 )
            {
              v3 = (unsigned int *)(v23 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v4 = __ldrex(v3);
                while ( __strex(v4 - 1, v3) );
              }
              else
                v4 = (*v3)--;
              if ( v4 <= 0 )
                j_j_j_j_j__ZdlPv_9(v16);
            }
            v17 = (void *)(v24 - 12);
            if ( (int *)(v24 - 12) != &dword_28898C0 )
              v5 = (unsigned int *)(v24 - 4);
                  v6 = __ldrex(v5);
                while ( __strex(v6 - 1, v5) );
                v6 = (*v5)--;
              if ( v6 <= 0 )
                j_j_j_j_j__ZdlPv_9(v17);
          }
        }
    }
    v18 = v26;
    if ( v26 )
      v19 = (unsigned int *)(v26 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  }
}


int __fastcall LayoutVariables::_add(LayoutVariables *this, UIControl *a2)
{
  LayoutVariables *v2; // r10@1
  UIControl *v3; // r5@1
  char v4; // r0@1
  int v5; // r6@4
  int result; // r0@4
  UIComponent *v7; // r11@5
  char *v8; // r4@6
  __int64 v9; // r0@8
  int v10; // r1@9
  unsigned int *v11; // r1@10
  unsigned int v12; // r2@12
  int v13; // r0@17
  unsigned int *v14; // r2@18
  unsigned int v15; // r1@20
  __int64 v16; // [sp+8h] [bp-38h]@8
  int v17; // [sp+10h] [bp-30h]@9
  int v18; // [sp+14h] [bp-2Ch]@16
  char v19; // [sp+18h] [bp-28h]@16

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v5 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  result = UIControl::_hasComponent(v3, type_id<UIComponent,LayoutComponent>(void)::id[0]);
  if ( result == 1 )
    result = UIControl::_getComponentIndex(v3, v5);
    v7 = *(UIComponent **)(*((_DWORD *)v3 + 27) + 4 * result);
    if ( v7 )
    {
      v8 = (char *)&AllLayoutVariableTypes;
      do
      {
        if ( LayoutComponent::getVariable(v7, (unsigned __int8)*v8) )
        {
          VariableRef::VariableRef((int)&v16, (int)v3, *v8);
          v9 = *((_QWORD *)v2 + 2);
          if ( (_DWORD)v9 == HIDWORD(v9) )
          {
            std::vector<LayoutVariables::UnsatisfiedVar,std::allocator<LayoutVariables::UnsatisfiedVar>>::_M_emplace_back_aux<VariableRef>(
              (unsigned __int64 *)((char *)v2 + 12),
              (int)&v16);
          }
          else
            *(_QWORD *)v9 = v16;
            HIDWORD(v9) = v17;
            *(_DWORD *)(v9 + 8) = v17;
            if ( HIDWORD(v9) )
            {
              v11 = (unsigned int *)(v10 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v12 = __ldrex(v11);
                while ( __strex(v12 + 1, v11) );
              }
              else
                ++*v11;
            }
            HIDWORD(v9) = v18;
            *(_BYTE *)(v9 + 16) = v19;
            *(_DWORD *)(v9 + 12) = HIDWORD(v9);
            *(_BYTE *)(v9 + 20) = 0;
            *((_DWORD *)v2 + 4) += 24;
          v13 = v17;
          if ( v17 )
            v14 = (unsigned int *)(v17 + 8);
            if ( &pthread_create )
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            else
              v15 = (*v14)--;
            if ( v15 == 1 )
              (*(void (**)(void))(*(_DWORD *)v13 + 12))();
        }
        ++v8;
        result = (int)&unk_262C64A;
      }
      while ( (_UNKNOWN *)v8 != &unk_262C64A );
    }
  return result;
}


void __fastcall LayoutVariables::_traceVariablesForDebugControls(LayoutVariables *this)
{
  LayoutVariables::_traceVariablesForDebugControls(this);
}


int __fastcall LayoutVariables::LayoutVariables(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}
