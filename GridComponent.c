

char *__fastcall GridComponent::getGridRescalingType(GridComponent *this)
{
  return (char *)this + 40;
}


int __fastcall GridComponent::GridComponent(UIComponent *a1, UIControl *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  int v5; // r2@1
  unsigned int *v6; // r2@2
  unsigned int v7; // r3@4

  v3 = a3;
  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26D6AB8;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(result + 28) = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  *(_DWORD *)(result + 32) = &unk_28898CC;
  *(_DWORD *)(result + 36) = &unk_28898CC;
  *(_DWORD *)(result + 40) = 2;
  *(_DWORD *)(result + 44) = 2;
  *(_BYTE *)(result + 68) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


int __fastcall GridComponent::clone(GridComponent *this, UIControl *a2, UIControl *a3)
{
  GridComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  int v6; // r6@1
  UIControl *v7; // r1@1
  int v8; // r0@2
  int v9; // r1@2
  int v10; // r7@4
  unsigned int *v11; // r1@5
  unsigned int v12; // r0@7
  unsigned int *v13; // r6@11
  unsigned int v14; // r0@13
  int v15; // r6@18
  unsigned int *v16; // r1@19
  unsigned int v17; // r0@21
  unsigned int *v18; // r7@25
  unsigned int v19; // r0@27
  int v20; // r6@32
  int v21; // r7@32
  unsigned int *v22; // r0@33
  unsigned int v23; // r1@35
  int v24; // r0@38
  unsigned int *v25; // r2@39
  unsigned int v26; // r1@41
  int v27; // r6@46
  int result; // r0@46
  int v29; // [sp+4h] [bp-24h]@2
  int v30; // [sp+8h] [bp-20h]@2
  int v31; // [sp+Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  std::make_unique<GridComponent,UIControl &,std::weak_ptr<UIControlFactory> const&>(
    (UIComponent **)&v31,
    a3,
    (unsigned __int64 *)a2 + 3);
  v6 = v31;
  *(_DWORD *)(v31 + 8) = *((_DWORD *)v5 + 2);
  *(_DWORD *)(v6 + 12) = *((_DWORD *)v5 + 3);
  v7 = (UIControl *)*((_DWORD *)v5 + 4);
  if ( v7 )
  {
    UIControl::clone((UIControl *)&v29, v7, (int)v4);
    v8 = v30;
    v9 = v29;
  }
  else
    v8 = 0;
    v9 = 0;
    v29 = 0;
    v30 = 0;
  v29 = 0;
  v30 = 0;
  *(_DWORD *)(v6 + 16) = v9;
  v10 = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v6 + 20) = v8;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
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
  v15 = v30;
  if ( v30 )
    v16 = (unsigned int *)(v30 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v31;
  *(_DWORD *)(v31 + 24) = *((_DWORD *)v5 + 6);
  v21 = *((_DWORD *)v5 + 7);
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v24 = *(_DWORD *)(v20 + 28);
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  *(_DWORD *)(v20 + 28) = v21;
  v27 = v31;
  EntityInteraction::setInteractText((int *)(v31 + 32), (int *)v5 + 8);
  EntityInteraction::setInteractText((int *)(v27 + 36), (int *)v5 + 9);
  *(_DWORD *)(v27 + 40) = *((_DWORD *)v5 + 10);
  *(_DWORD *)(v27 + 44) = *((_DWORD *)v5 + 11);
  *(_DWORD *)(v27 + 48) = *((_DWORD *)v5 + 12);
  *(_DWORD *)(v27 + 52) = *((_DWORD *)v5 + 13);
  result = *((_BYTE *)v5 + 68);
  *(_BYTE *)(v27 + 68) = result;
  *(_DWORD *)v3 = v27;
  return result;
}


char *__fastcall GridComponent::getCollectionName(GridComponent *this)
{
  return (char *)this + 36;
}


int __fastcall GridComponent::_createGridItemAt(int result, int a2)
{
  int v2; // r10@1
  int v3; // r8@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r1@2
  unsigned int v6; // r3@5
  unsigned int v7; // r7@6
  unsigned int v8; // r2@7
  signed int v9; // r1@7
  UIControl *v10; // r5@11
  int v11; // r6@11
  bool v12; // zf@13
  unsigned __int64 *v13; // r1@16
  int *v14; // r7@16
  int v15; // r6@17
  int v16; // r9@17
  unsigned int *v17; // r1@18
  unsigned int v18; // r2@20
  int v19; // r0@22
  int v20; // r0@22
  int v21; // r0@25
  unsigned int *v22; // r1@26
  unsigned int v23; // r2@28
  int v24; // r4@31
  unsigned int *v25; // r1@32
  unsigned int v26; // r0@34
  unsigned int *v27; // r5@38
  unsigned int v28; // r0@40
  char v29; // r0@46
  int v30; // r5@49
  GridItemComponent *v31; // r0@50
  char v32; // r0@52
  int v33; // r5@55
  LayoutComponent *v34; // r0@56
  char v35; // r0@58
  int v36; // r5@61
  DataBindingComponent *v37; // r0@62
  unsigned int *v38; // r1@65
  unsigned int *v39; // r4@71
  unsigned int *v40; // r1@79
  unsigned int *v41; // r4@85
  int v42; // [sp+8h] [bp-30h]@22
  int v43; // [sp+Ch] [bp-2Ch]@22
  int v44; // [sp+10h] [bp-28h]@25
  int v45; // [sp+14h] [bp-24h]@25

  v2 = *(_DWORD *)(result + 28);
  v3 = a2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5;
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v2 = 0;
LABEL_11:
  v10 = *(UIControl **)(result + 16);
  v11 = *(_DWORD *)(result + 24);
  if ( v9 )
    v11 = 0;
  v12 = v10 == 0;
  if ( v10 )
    v12 = v11 == 0;
  if ( !v12 )
    v14 = (int *)(result + 56);
    v13 = *(unsigned __int64 **)(result + 56);
    if ( v13 == *(unsigned __int64 **)(result + 60) )
      v19 = UIComponent::getOwner((UIComponent *)result);
      UIControlFactory::createControlTree((int)&v42, v11, v10, v19, 1);
      v20 = v43;
      v15 = v42;
      v42 = 0;
      v43 = 0;
      v16 = v20;
    else
      v16 = *v13 >> 32;
      v15 = *v13;
      if ( v16 )
        v17 = (unsigned int *)(v16 + 4);
        if ( &pthread_create )
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 + 1, v17) );
        else
          ++*v17;
        v16 = 0;
      v21 = UIComponent::getOwner((UIComponent *)result);
      v44 = v15;
      v45 = v16;
        v22 = (unsigned int *)(v16 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 + 1, v22) );
          ++*v22;
      UIControl::addChild(v21, (int)&v44, 1);
      v24 = v45;
      if ( v45 )
        v25 = (unsigned int *)(v45 + 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 == 1 )
          v27 = (unsigned int *)(v24 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          if ( &pthread_create )
          {
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          }
          else
            v28 = (*v27)--;
          if ( v28 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
      std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase((int)v14, *v14);
    UIControl::reset((UIControl *)v15, 1);
    v29 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
    __dmb();
    if ( !(v29 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
    v30 = type_id<UIComponent,GridItemComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v15, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
      v31 = *(GridItemComponent **)(*(_DWORD *)(v15 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v15, v30));
      v31 = 0;
    GridItemComponent::setCollectionIndex(v31, v3);
    v32 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    if ( !(v32 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    v33 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v15, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
      v34 = *(LayoutComponent **)(*(_DWORD *)(v15 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v15, v33));
      v34 = 0;
    LayoutComponent::setDelayLayout(v34, 1);
    v35 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
    if ( !(v35 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
      type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
    v36 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v15, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
      v37 = *(DataBindingComponent **)(*(_DWORD *)(v15 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v15, v36));
      v37 = 0;
    DataBindingComponent::setDirty(v37, 1);
    result = UIControl::setVisible((UIControl *)v15, 0, 0, 0);
    if ( v16 )
      v38 = (unsigned int *)(v16 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v38);
        while ( __strex(result - 1, v38) );
        result = (*v38)--;
      if ( result == 1 )
        v39 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            result = __ldrex(v39);
          while ( __strex(result - 1, v39) );
          result = (*v39)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v40 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v40);
      while ( __strex(result - 1, v40) );
      result = (*v40)--;
    if ( result == 1 )
      v41 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v41);
        while ( __strex(result - 1, v41) );
        result = (*v41)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


char *__fastcall GridComponent::getGridDimensionBinding(GridComponent *this)
{
  return (char *)this + 32;
}


char *__fastcall GridComponent::getGridDimensions(GridComponent *this)
{
  return (char *)this + 8;
}


char *__fastcall GridComponent::getGridFillDirection(GridComponent *this)
{
  return (char *)this + 44;
}


int __fastcall GridComponent::setLowMemoryMode(int result, bool a2)
{
  *(_BYTE *)(result + 68) = a2;
  return result;
}


void __fastcall GridComponent::getItemBoundingBox(GridComponent *this, UIComponent *a2)
{
  UIControl *v2; // r0@1
  __int64 v3; // r4@1
  int v4; // r6@3
  char v5; // r0@3
  int v6; // r7@6
  signed int v16; // r2@9
  signed int v18; // r3@9
  int v21; // r2@13
  signed int v22; // r0@17
  signed int v23; // r1@17
  int v24; // r0@21
  int v29; // [sp+Ch] [bp-3Ch]@1
  int v30; // [sp+10h] [bp-38h]@2
  int v31; // [sp+14h] [bp-34h]@2
  int v32; // [sp+18h] [bp-30h]@2
  int v33; // [sp+1Ch] [bp-2Ch]@2

  v2 = (UIControl *)UIComponent::getOwner(a2);
  v3 = *(_QWORD *)UIControl::getChildren(v2);
  v29 = HIDWORD(v3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v30 = 0;
  }
  else
    do
    {
      v4 = *(_DWORD *)v3;
      v5 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      __dmb();
      if ( !(v5 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
      v6 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1
        && *(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v6)) )
        _KR00_8 = *(_QWORD *)UIControl::getPosition(*(UIControl **)v3);
        _R0 = UIControl::getSize(*(UIControl **)v3);
        __asm
        {
          VLDR            S4, [R0]
          VMOV            S0, R11
          VLDR            S6, [R0,#4]
          VMOV            S2, R9
          VADD.F32        S4, S4, S0
          VADD.F32        S6, S6, S2
          VMOV            R1, S4
          VMOV            R12, S6
        }
        if ( _ZF )
          v30 = _R1;
          v31 = HIDWORD(_KR00_8);
          v32 = _KR00_8;
          v33 = _R12;
        else
          _R5 = v33;
          v16 = 0;
          _R0 = v30;
          v18 = 0;
          _R7 = v31;
          __asm { VMOV            S10, R5 }
          _R6 = v32;
          __asm
          {
            VMOV            S12, R0
            VCMPE.F32       S6, S10
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S4, S12
            VMOV            S8, R7
            VMOV            S14, R6
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v16 = 1;
            VCMPE.F32       S2, S8
            v18 = 1;
          v21 = v16 | v18;
          if ( v21 )
            _R5 = _R12;
          v33 = _R5;
            _R0 = _R1;
          __asm { VMRS            APSR_nzcv, FPSCR }
          v30 = _R0;
          v22 = 0;
          __asm { VCMPE.F32       S0, S14 }
          v23 = 0;
          if ( _NF ^ _VF )
            v22 = 1;
            v23 = 1;
          v24 = v22 | v23;
          if ( v24 )
            _R7 = HIDWORD(_KR00_8);
          v31 = _R7;
            _R6 = _KR00_8;
          v32 = _R6;
        HIDWORD(v3) = v29;
      LODWORD(v3) = v3 + 8;
    }
    while ( HIDWORD(v3) != (_DWORD)v3 );
  _R0 = v31;
  __asm { VMOV            S0, R0 }
  _R0 = v32;
  __asm { VMOV            S2, R0 }
  _R0 = v30;
  __asm { VMOV            S4, R0 }
  _R0 = v33;
  __asm
    VSUB.F32        S2, S4, S2
    VMOV            S6, R0
    VSUB.F32        S0, S6, S0
    VSTR            S2, [R0]
    VSTR            S0, [R0,#4]
}


void __fastcall GridComponent::~GridComponent(GridComponent *this)
{
  GridComponent::~GridComponent(this);
}


GridComponent *__fastcall GridComponent::~GridComponent(GridComponent *this)
{
  GridComponent *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r1@20
  void *v10; // r0@20
  int v11; // r1@21
  void *v12; // r0@21
  int v13; // r0@22
  unsigned int *v14; // r2@23
  unsigned int v15; // r1@25
  int v16; // r5@30
  unsigned int *v17; // r1@31
  unsigned int v18; // r0@33
  unsigned int *v19; // r4@37
  unsigned int v20; // r0@39
  unsigned int *v22; // r2@45
  signed int v23; // r1@47
  unsigned int *v24; // r2@49
  signed int v25; // r1@51

  v1 = this;
  *(_DWORD *)this = &off_26D6AB8;
  v3 = *((_QWORD *)this + 7) >> 32;
  v2 = *((_QWORD *)this + 7);
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
    v2 = *((_DWORD *)v1 + 14);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = *((_DWORD *)v1 + 9);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 8);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v11 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 7);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  v16 = *((_DWORD *)v1 + 5);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  UIComponent::~UIComponent(v1);
  return v1;
}


int __fastcall GridComponent::reassignGridPositions(GridComponent *this)
{
  GridComponent *v1; // r5@1
  UIControl *v2; // r0@1
  int *v3; // r4@1
  __int64 v4; // kr00_8@1
  __int64 v5; // r0@1
  int v6; // r5@2
  int v7; // r9@2
  int v8; // r7@3
  char v9; // r0@3
  int v10; // r6@6
  GridItemComponent *v11; // r7@7
  GridComponent *v13; // [sp+8h] [bp-30h]@1
  int v14; // [sp+Ch] [bp-2Ch]@8
  int v15; // [sp+10h] [bp-28h]@8

  v1 = this;
  v13 = this;
  v2 = (UIControl *)UIComponent::getOwner(this);
  v4 = *(_QWORD *)UIControl::getChildren(v2);
  v3 = (int *)v4;
  LODWORD(v5) = 1;
  HIDWORD(v5) = (HIDWORD(v4) - (signed int)v4) >> 3;
  *((_QWORD *)v1 + 1) = v5;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *v3;
      v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      __dmb();
      if ( !(v9 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
      v10 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      LODWORD(v5) = UIControl::_hasComponent((UIControl *)v8, type_id<UIComponent,GridItemComponent>(void)::id[0]);
      if ( (_DWORD)v5 == 1 )
        LODWORD(v5) = UIControl::_getComponentIndex((UIControl *)v8, v10);
        v11 = *(GridItemComponent **)(*(_DWORD *)(v8 + 108) + 4 * v5);
        if ( v11 )
        {
          GridItemComponent::setCollectionIndex(v11, v6 + *((_DWORD *)v13 + 2) * v7);
          v14 = v6;
          v15 = v7;
          GridItemComponent::setGridPosition((int)v11, (int)&v14);
          LODWORD(v5) = *((_DWORD *)v13 + 2);
          if ( ++v6 == (_DWORD)v5 )
          {
            ++v7;
            v6 = 0;
          }
        }
      v3 += 2;
    }
    while ( (int *)HIDWORD(v4) != v3 );
  }
  return v5;
}


char *__fastcall GridComponent::getGridItemTemplateSize(GridComponent *this)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  int v4; // r0@5
  char *result; // r0@5

  v1 = *((_DWORD *)this + 4);
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v3 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v4 = UIControl::_getComponentIndex((UIControl *)v1, v3);
    result = LayoutComponent::getSize(*(LayoutComponent **)(*(_DWORD *)(v1 + 108) + 4 * v4));
  else
    result = LayoutComponent::getSize(0);
  return result;
}


int __fastcall GridComponent::setGridItemTemplate(int a1, int a2)
{
  int v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  unsigned int *v8; // r1@9
  unsigned int v9; // r0@11
  unsigned int *v10; // r7@15
  unsigned int v11; // r0@17

  v2 = a1;
  v3 = *(UIControl **)a2;
  *(_DWORD *)(v2 + 16) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 20);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
        v4 = *(_DWORD *)(v2 + 20);
      }
      else
        ++*v6;
    }
    if ( v4 )
      v8 = (unsigned int *)(v4 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 20) = v5;
    v3 = *(UIControl **)(v2 + 16);
  }
  return j_j_j__ZN9UIControl13setIsTemplateEb(v3, 1);
}


void __fastcall GridComponent::~GridComponent(GridComponent *this)
{
  GridComponent *v1; // r0@1

  v1 = GridComponent::~GridComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall GridComponent::setPrecachedGridItemCount(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


int __fastcall GridComponent::setGridDimensions(int result, int a2)
{
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 4);
  return result;
}


_BOOL4 __fastcall GridComponent::isDynamic(GridComponent *this)
{
  return *((_DWORD *)this + 4) != 0;
}


int __fastcall GridComponent::setGridFillDirection(int result, _DWORD *a2)
{
  *(_DWORD *)(result + 44) = *a2;
  return result;
}


signed int __fastcall GridComponent::getNeedsRescaling(GridComponent *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 10);
  result = 0;
  if ( v1 != 2 )
    result = 1;
  return result;
}


signed int __fastcall GridComponent::refreshGridItems(GridComponent *this)
{
  GridComponent *v1; // r5@1 OVERLAPPED
  int v2; // r8@1
  int v3; // r6@2 OVERLAPPED
  int v4; // r4@4
  signed int v5; // r4@7
  unsigned int v6; // r0@7
  signed int result; // r0@9
  int v8; // r0@13
  int *v9; // r5@13
  int *v10; // r8@13
  __int64 v11; // kr00_8@13
  int v12; // r9@13
  int v13; // r6@14
  char v14; // r0@14
  int v15; // r7@17
  int v16; // r0@18
  char *v17; // r11@24
  int v18; // r7@24
  int v19; // r8@24
  unsigned __int16 *v20; // r5@26
  int v21; // r4@29
  char v22; // r0@29
  unsigned __int16 v23; // r0@31
  int v24; // r6@32
  DataBindingComponent *v25; // r0@33
  int v26; // r4@35
  _DWORD *v27; // r0@35
  UIControl *v28; // r4@37
  const UIPropertyBag *v29; // r0@37
  UIControl *v30; // r0@37
  void (*v31)(void); // r2@37
  int v32; // r1@37
  unsigned int *v33; // r1@38
  unsigned int v34; // r3@40
  int v35; // r4@43
  unsigned int *v36; // r1@44
  unsigned int v37; // r0@46
  unsigned int *v38; // r5@50
  unsigned int v39; // r0@52
  int v40; // r4@57
  char v41; // r0@57
  unsigned __int16 v42; // r0@59
  int v43; // r6@60
  GridItemComponent *v44; // r0@61
  UIControl *v45; // r4@64
  UIControl *v46; // r8@65
  __int64 v47; // r0@68
  int v48; // r6@71
  unsigned int *v49; // r1@72
  unsigned int v50; // r0@74
  UIControl *v51; // r5@78
  UIControl *v52; // r8@78
  unsigned int *v53; // r4@78
  unsigned int v54; // r0@80
  unsigned __int16 *v55; // [sp+1Ch] [bp-84h]@35
  __int64 v56; // [sp+2Ch] [bp-74h]@13
  unsigned int v57; // [sp+38h] [bp-68h]@65
  int v58; // [sp+3Ch] [bp-64h]@69
  int v59; // [sp+40h] [bp-60h]@37
  int v60; // [sp+44h] [bp-5Ch]@37
  _DWORD *v61; // [sp+48h] [bp-58h]@35
  void (*v62)(void); // [sp+50h] [bp-50h]@35
  DataBindingComponent *(__fastcall *v63)(int, int); // [sp+54h] [bp-4Ch]@35
  int v64; // [sp+58h] [bp-48h]@7
  int v65; // [sp+5Ch] [bp-44h]@1
  int v66; // [sp+60h] [bp-40h]@1
  int v67; // [sp+64h] [bp-3Ch]@1
  int v68; // [sp+68h] [bp-38h]@1

  v1 = this;
  v2 = UIComponent::getOwner(this);
  ScreenEvent::ScreenEvent((ScreenEvent *)&v65);
  v65 = 6;
  UIControl::broadcastEvent(v2, (int)v1, 6, v66, v67, v68);
  if ( !*((_DWORD *)v1 + 4) )
    return (signed int)GridComponent::_assignStaticGridItemIndexes(v1);
  v3 = v2;
  if ( !*((_BYTE *)v1 + 68) && *((_DWORD *)v1 + 13) > 0 )
  {
    v4 = 0;
    do
      GridComponent::_createGridItemAt(v1, v4++);
    while ( v4 < *((_DWORD *)v1 + 13) );
    *((_DWORD *)v1 + 13) = 0;
  }
  v5 = 0;
  v64 = 0;
  v6 = *((_DWORD *)v1 + 10);
  if ( v6 < 2 )
    v5 = *((_DWORD *)v1 + 12);
LABEL_12:
    v64 = v5;
    goto LABEL_13;
  if ( v6 == 2 )
    v5 = (*((_QWORD *)v1 + 1) >> 32) * *((_QWORD *)v1 + 1);
    goto LABEL_12;
LABEL_13:
  v56 = *(_QWORD *)&v1;
  v8 = UIControl::getPropertyBag((UIControl *)v2);
  UIPropertyBag::set<int>(v8, 17, "#grid_number_size", &v64);
  v11 = *(_QWORD *)(v2 + 92);
  v10 = (int *)(*(_QWORD *)(v2 + 92) >> 32);
  v9 = (int *)v11;
  v12 = 0;
  if ( (int *)v11 != v10 )
    {
      v13 = *v9;
      v14 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      __dmb();
      if ( !(v14 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
      v15 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v13, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
        v16 = *(_DWORD *)(*(_DWORD *)(v13 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v13, v15));
      else
        v16 = 0;
      v9 += 2;
      if ( v16 )
        ++v12;
    }
    while ( v10 != v9 );
    v5 = v64;
  v17 = UIControl::getChildren((UIControl *)HIDWORD(v56));
  v18 = 0;
  result = *(_QWORD *)v17 >> 32;
  v19 = *(_QWORD *)v17;
  if ( v5 >= 1 && result != v19 )
    v18 = 0;
    v20 = typeid_t<UIComponent>::count;
      v40 = *(_DWORD *)(v19 + 8 * v18);
      v41 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( !(v41 & 1)
        v42 = (*v20)++;
        type_id<UIComponent,GridItemComponent>(void)::id[0] = v42;
      v43 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v40, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
        v44 = *(GridItemComponent **)(*(_DWORD *)(v40 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v40, v43));
        if ( v44 )
        {
          GridItemComponent::setCollectionIndex(v44, v18);
          v21 = *(_DWORD *)(v19 + 8 * v18);
          v22 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
          __dmb();
          if ( !(v22 & 1)
            && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
          {
            v23 = (*v20)++;
            type_id<UIComponent,DataBindingComponent>(void)::id[0] = v23;
            j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
          }
          v24 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v21, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
            v25 = *(DataBindingComponent **)(*(_DWORD *)(v21 + 108)
                                           + 4 * UIControl::_getComponentIndex((UIControl *)v21, v24));
            if ( v25 )
              DataBindingComponent::resetBindings(v25);
          v26 = *(_DWORD *)(v19 + 8 * v18);
          v27 = operator new(4u);
          *v27 = v56;
          v61 = v27;
          v63 = sub_C2EDF4;
          v62 = (void (*)(void))sub_C2EE80;
          UIControl::applyToChildren(v26, (int)&v61);
          v55 = v20;
          if ( v62 )
            v62();
          v28 = *(UIControl **)(v19 + 8 * v18);
          v29 = (const UIPropertyBag *)UIControl::getPropertyBag(*(UIControl **)(v56 + 16));
          UIControl::setPropertyBag(v28, v29);
          v30 = (UIControl *)UIComponent::getOwner((UIComponent *)v56);
          v31 = *(void (**)(void))(*(_DWORD *)UIControl::getScreenAction(v30, 0) + 32);
          v59 = *(_DWORD *)(v19 + 8 * v18);
          v32 = *(_DWORD *)(v19 + 8 * v18 + 4);
          v60 = v32;
          if ( v32 )
            v33 = (unsigned int *)(v32 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 + 1, v33) );
            }
            else
              ++*v33;
          v31();
          v35 = v60;
          ++v18;
          if ( v60 )
            v36 = (unsigned int *)(v60 + 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 == 1 )
              v38 = (unsigned int *)(v35 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
              }
              else
                v39 = (*v38)--;
              v20 = v55;
              if ( v39 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
        }
      v19 = *(_DWORD *)v17;
      result = *((_DWORD *)v17 + 1);
      v5 = v64;
    while ( v18 < v64 && v18 != (result - v19) >> 3 );
  if ( v12 <= v5 )
    for ( ; v12 < v5; ++v12 )
      result = GridComponent::_createGridItemAt((GridComponent *)v56, v12);
  else
    v45 = (UIControl *)HIDWORD(v56);
    result -= v19;
    if ( v18 != result >> 3 )
      v46 = (UIControl *)&v57;
      do
        if ( *(_BYTE *)(v56 + 68) )
          UIControl::removeChild(v45, v18, 0);
        else
          UIControl::moveChild(v46, (int)v45, v18, 0);
          v47 = *(_QWORD *)(v56 + 60);
          if ( (_DWORD)v47 == HIDWORD(v47) )
            std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
              (_QWORD *)(v56 + 56),
              (int)v46);
          else
            *(_QWORD *)v47 = v57;
            HIDWORD(v47) = v58;
            v58 = 0;
            *(_DWORD *)(v47 + 4) = HIDWORD(v47);
            v57 = 0;
            *(_DWORD *)(v56 + 60) = v47 + 8;
          v48 = v58;
          if ( v58 )
            v49 = (unsigned int *)(v58 + 4);
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
              v50 = (*v49)--;
            if ( v50 == 1 )
              v51 = v46;
              v52 = v45;
              v53 = (unsigned int *)(v48 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              v45 = v52;
              v46 = v51;
              if ( v54 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
        result = (*(_QWORD *)v17 >> 32) - *(_QWORD *)v17;
      while ( v18 != result >> 3 );
  return result;
}


int __fastcall GridComponent::getGridItemTemplate(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 20);
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


char *__fastcall GridComponent::_assignStaticGridItemIndexes(GridComponent *this)
{
  GridComponent *v1; // r8@1
  UIControl *v2; // r0@1
  char *result; // r0@1
  int *i; // r4@1
  int *v5; // r9@1
  int v6; // r6@2
  char v7; // r0@2
  int v8; // r7@5
  int v9; // r1@6
  GridItemComponent *v10; // r6@6
  char *v11; // r0@7

  v1 = this;
  v2 = (UIControl *)UIComponent::getOwner(this);
  result = UIControl::getChildren(v2);
  v5 = (int *)(*(_QWORD *)result >> 32);
  for ( i = (int *)*(_QWORD *)result; v5 != i; i += 2 )
  {
    v6 = *i;
    v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
    __dmb();
    if ( !(v7 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
    {
      type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
    }
    v8 = type_id<UIComponent,GridItemComponent>(void)::id[0];
    result = (char *)UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,GridItemComponent>(void)::id[0]);
    if ( result == (char *)1 )
      result = (char *)UIControl::_getComponentIndex((UIControl *)v6, v8);
      v9 = *(_DWORD *)(v6 + 108);
      v10 = *(GridItemComponent **)(v9 + 4 * (_DWORD)result);
      if ( v10 )
      {
        v11 = GridItemComponent::getGridPosition(*(GridItemComponent **)(v9 + 4 * (_DWORD)result));
        result = (char *)GridItemComponent::setCollectionIndex(
                           v10,
                           *(_QWORD *)v11 + *((_DWORD *)v1 + 2) * (*(_QWORD *)v11 >> 32));
      }
  }
  return result;
}


int __fastcall GridComponent::setGridRescalingType(int result, _DWORD *a2)
{
  *(_DWORD *)(result + 40) = *a2;
  return result;
}


int __fastcall GridComponent::setMaximumGridItems(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}
