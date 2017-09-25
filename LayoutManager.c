

signed int __fastcall LayoutManager::hasDelayedLayout(LayoutManager *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall LayoutManager::addDelayedLayout(LayoutManager *this, UIControl *a2)
{
  LayoutManager *v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r1@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  int result; // r0@10
  unsigned int *v8; // r2@11
  unsigned int v9; // r1@13
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@2

  v2 = this;
  UIControl::weakRef((UIControl *)&v10, (int)a2);
  v3 = *(_QWORD *)((char *)v2 + 20);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::_M_emplace_back_aux<std::weak_ptr<UIControl>>(
      (unsigned __int64 *)v2 + 2,
      (int)&v10);
  }
  else
    *(_DWORD *)v3 = v10;
    HIDWORD(v3) = v11;
    *(_DWORD *)(v3 + 4) = v11;
    if ( HIDWORD(v3) )
    {
      v5 = (unsigned int *)(v4 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 + 1, v5) );
        LODWORD(v3) = *((_DWORD *)v2 + 5);
      }
      else
        ++*v5;
    }
    *((_DWORD *)v2 + 5) = v3 + 8;
  result = v11;
  if ( v11 )
    v8 = (unsigned int *)(v11 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LayoutManager::processDelayedLayout(LayoutManager *this)
{
  int v1; // r9@0
  LayoutManager *v2; // r10@1
  __int64 v3; // r0@1
  int v4; // r7@2
  LayoutComponent *v5; // r6@3
  unsigned int v6; // r0@7
  unsigned int *v7; // r6@11
  unsigned int v8; // r0@13
  int v9; // r5@18
  unsigned int v10; // r1@19
  unsigned int *v11; // r11@19
  unsigned int v12; // r2@22
  unsigned int v13; // r3@23
  bool v14; // zf@24
  char v15; // r0@27
  unsigned __int16 v16; // r0@29
  int v17; // r6@30
  int result; // r0@34
  __int64 v19; // kr00_8@34
  int v20; // r5@35
  unsigned int *v21; // r2@37
  unsigned int v22; // r1@39

  v2 = this;
  getTimeS();
  v3 = *((_QWORD *)v2 + 2);
  if ( HIDWORD(v3) - (signed int)v3 >= 1 )
  {
    v4 = 0;
    do
    {
      v9 = *(_DWORD *)(v3 + 8 * v4 + 4);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 4);
        v11 = (unsigned int *)(v9 + 4);
        while ( v10 )
        {
          __dmb();
          v12 = __ldrex(v11);
          if ( v12 == v10 )
          {
            v13 = __strex(v10 + 1, v11);
            v10 = v12;
            if ( !v13 )
            {
              __dmb();
              v14 = *v11 == 0;
              if ( *v11 )
              {
                v1 = *(_DWORD *)(v3 + 8 * v4);
                v14 = v1 == 0;
              }
              if ( !v14 )
                v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
                __dmb();
                if ( !(v15 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
                {
                  v16 = typeid_t<UIComponent>::count[0]++;
                  type_id<UIComponent,LayoutComponent>(void)::id[0] = v16;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
                }
                v17 = type_id<UIComponent,LayoutComponent>(void)::id[0];
                if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
                  v5 = *(LayoutComponent **)(*(_DWORD *)(v1 + 108)
                                           + 4 * UIControl::_getComponentIndex((UIControl *)v1, v17));
                else
                  v5 = 0;
                LayoutComponent::setDelayLayout(v5, 0);
                UIControl::setVisible((UIControl *)v1, 1, 0, 0);
                LayoutComponent::recursiveInitialize(v5, (int)v2, 0);
              ++v4;
              if ( &pthread_create )
                do
                  v6 = __ldrex(v11);
                while ( __strex(v6 - 1, v11) );
              else
                v6 = (*v11)--;
              if ( v6 == 1 )
                v7 = (unsigned int *)(v9 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
                if ( &pthread_create )
                  __dmb();
                  do
                    v8 = __ldrex(v7);
                  while ( __strex(v8 - 1, v7) );
                  v8 = (*v7)--;
                if ( v8 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
              goto LABEL_33;
            }
          }
          else
            __clrex();
        }
      }
      ++v4;
LABEL_33:
      v3 = *((_QWORD *)v2 + 2);
    }
    while ( v4 < (HIDWORD(v3) - (signed int)v3) >> 3 );
  }
  LayoutVariables::solve(*(LayoutVariables **)v2);
  result = getTimeS();
  v19 = *((_QWORD *)v2 + 2);
  if ( HIDWORD(v19) != (_DWORD)v19 )
    v20 = *((_QWORD *)v2 + 2);
      result = *(_DWORD *)(v20 + 4);
      if ( result )
        v21 = (unsigned int *)(result + 8);
        if ( &pthread_create )
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      v20 += 8;
    while ( v20 != HIDWORD(v19) );
  *((_DWORD *)v2 + 5) = v19;
  return result;
}


int __fastcall LayoutManager::LayoutManager(int a1)
{
  int result; // r0@1

  result = j__ZNSt12__shared_ptrI15LayoutVariablesLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


int __fastcall LayoutManager::update(LayoutManager *this, VisualTree *a2, const UIControl *a3)
{
  LayoutManager *v3; // r8@1
  VisualTree *v4; // r5@1
  UIControl *v11; // r6@3
  char v12; // r0@4
  int v13; // r7@7
  int v14; // r0@8
  int v15; // r1@8
  UIComponent *v16; // r6@8
  LayoutVariable *v17; // r0@9
  LayoutVariable *v18; // r0@9
  void *v19; // r0@11
  __int64 v20; // r1@11
  int v21; // r5@13 OVERLAPPED
  int v22; // r6@13 OVERLAPPED
  int v23; // r7@15
  int v24; // r4@16
  UIControl *v25; // r5@21
  char v26; // r0@21
  int v27; // r6@24
  UIComponent *v28; // r0@25
  int v29; // r4@27
  int v30; // r5@27
  unsigned int *v31; // r1@28
  unsigned int v32; // r0@30
  unsigned int *v33; // r6@34
  unsigned int v34; // r0@36
  __int64 v39; // [sp+0h] [bp-58h]@0
  void *v40; // [sp+8h] [bp-50h]@11
  __int64 v41; // [sp+10h] [bp-48h]@11
  UIControl *v42; // [sp+18h] [bp-40h]@3
  int v43; // [sp+1Ch] [bp-3Ch]@27
  int v44; // [sp+20h] [bp-38h]@1
  double v45; // [sp+28h] [bp-30h]@1
  int v47; // [sp+38h] [bp-20h]@1

  v3 = this;
  v4 = a2;
  v45 = 0.0;
  v47 = 25;
  v44 = unk_27F636C;
  unk_27F636C = &v44;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x58+var_30]
    VSTR            D0, [SP,#0x58+var_28]
  }
  _R2 = v44;
  if ( v44 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  getTimeS();
  VisualTree::getRootControl((VisualTree *)&v42, (int)v4);
  v11 = v42;
  if ( v42 )
    v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    __dmb();
    if ( !(v12 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    v13 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v11, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
      v14 = UIControl::_getComponentIndex(v11, v13);
      v15 = *((_DWORD *)v11 + 27);
      v16 = *(UIComponent **)(v15 + 4 * v14);
      if ( v16 )
      {
        v17 = (LayoutVariable *)LayoutComponent::getVariable(*(UIComponent **)(v15 + 4 * v14), 2);
        LayoutVariable::setOverrideValue(v17, *((float *)v3 + 2));
        v18 = (LayoutVariable *)LayoutComponent::getVariable(v16, 3);
        LayoutVariable::setOverrideValue(v18, *((float *)v3 + 3));
      }
    UIControl::setSize((int)v42, (int)v3 + 8);
  LayoutVariables::_clear(*(LayoutVariables **)v3);
  v19 = operator new(1u);
  LODWORD(v20) = sub_12BEAA0;
  v40 = v19;
  HIDWORD(v20) = sub_12BE7D8;
  v41 = v20;
  VisualTree::visitTree((int)v4, 0, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  *(_QWORD *)&v21 = *((_QWORD *)v3 + 2);
  if ( v21 != v22 )
    sub_12BEAD0(v21, v22, 2 * (31 - __clz((v22 - v21) >> 3)), 0);
    if ( v22 - v21 < 129 )
      sub_12BF6CC(v21, (_DWORD *)v22);
    else
      v23 = v21 + 128;
      sub_12BF6CC(v21, (_DWORD *)(v21 + 128));
      if ( v21 + 128 != v22 )
        v24 = v22 - 128;
        do
        {
          v22 &= 0xFFFFFF00;
          sub_12BF874(v23);
          v23 = v21 + 136;
          _ZF = v24 == v21 + 8;
          v21 += 8;
        }
        while ( !_ZF );
  v25 = v42;
  v26 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v26 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v27 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v25, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v28 = *(UIComponent **)(*((_DWORD *)v25 + 27) + 4 * UIControl::_getComponentIndex(v25, v27));
    if ( v28 )
      LayoutComponent::recursiveInitialize(v28, (int)v3, 0);
  v29 = LayoutVariables::solve(*(LayoutVariables **)v3);
  v30 = v43;
  if ( v43 )
    v31 = (unsigned int *)(v43 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
      if ( &pthread_create )
        __dmb();
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x58+var_30]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x58+var_30]
    VLDR            D0, [SP,#0x58+var_28]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v44;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x58+var_30]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v44;
  __asm { VSTR            D0, [SP,#0x58+var_58] }
  ProfilerLite::_endScope(_R0, _R2, _R3, v39);
  return v29;
}


int __fastcall LayoutManager::setSize(int result, int a2)
{
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 4);
  return result;
}
