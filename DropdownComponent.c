

void __fastcall DropdownComponent::_positionContent(DropdownComponent *this)
{
  DropdownComponent::_positionContent(this);
}


int __fastcall DropdownComponent::setDropdownContentControl(int a1, int a2)
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


void __fastcall DropdownComponent::~DropdownComponent(DropdownComponent *this)
{
  DropdownComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r0@9
  unsigned int *v6; // r2@10
  unsigned int v7; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFE74;
  v2 = *((_DWORD *)this + 6);
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
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  UIComponent::~UIComponent(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall DropdownComponent::setDropdownNameId(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = a2;
  return result;
}


int __fastcall DropdownComponent::DropdownComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFE74;
  *(_WORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


int __fastcall DropdownComponent::~DropdownComponent(DropdownComponent *this)
{
  DropdownComponent *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r0@9
  unsigned int *v6; // r2@10
  unsigned int v7; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFE74;
  v2 = *((_DWORD *)this + 6);
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
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  return j_j_j__ZN11UIComponentD2Ev_0(v1);
}


int __fastcall DropdownComponent::clone(DropdownComponent *this, UIControl *a2, UIControl *a3)
{
  DropdownComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  UIComponent *v6; // r5@1
  int v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r0@5
  unsigned int *v11; // r2@6
  unsigned int v12; // r1@8
  int v13; // r6@14
  unsigned int *v14; // r0@15
  unsigned int v15; // r1@17
  int result; // r0@20
  unsigned int *v17; // r2@21
  unsigned int v18; // r1@23

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x1Cu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26DFE74;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_WORD *)v6 + 4) = *((_WORD *)v5 + 4);
  *((_DWORD *)v6 + 3) = *((_DWORD *)v5 + 3);
  v7 = *((_DWORD *)v5 + 4);
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      v10 = *((_DWORD *)v6 + 4);
      if ( v10 )
      {
        v11 = (unsigned int *)(v10 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v10 + 12))();
      }
    }
    else
      ++*v8;
  }
  *((_DWORD *)v6 + 4) = v7;
  *((_DWORD *)v6 + 5) = *((_DWORD *)v5 + 5);
  v13 = *((_DWORD *)v5 + 6);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = *((_DWORD *)v6 + 6);
  if ( result )
    v17 = (unsigned int *)(result + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *((_DWORD *)v6 + 6) = v13;
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall DropdownComponent::setDropdownAreaControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 24);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 24) = v3;
  return result;
}


void __fastcall DropdownComponent::_positionContent(DropdownComponent *this)
{
  DropdownComponent *v1; // r6@1
  UIControl *v2; // r5@1
  int v3; // r9@1
  int v4; // r8@1
  UIControl *v5; // r11@1
  int v6; // r0@1
  unsigned int v7; // r2@2
  unsigned int *v8; // r1@2
  unsigned int v9; // r3@5
  unsigned int v10; // r7@6
  unsigned int v11; // r2@7
  signed int v12; // r1@7
  int v13; // r7@12
  int v14; // r10@12
  unsigned int v15; // r1@15
  unsigned int *v16; // r0@15
  unsigned int v17; // r2@18
  unsigned int v18; // r3@19
  unsigned int v19; // r1@20
  signed int v20; // r0@20
  UIControl *v21; // r6@24
  char v30; // r0@36
  int v31; // r4@39
  int v32; // r0@40
  int v33; // r1@40
  LayoutComponent *v34; // r7@40
  char *v35; // r0@41
  __int64 v37; // r0@41
  __int64 v38; // r2@42
  int v39; // r2@43
  unsigned int v40; // r6@43
  unsigned int v41; // r2@45
  unsigned int v42; // r5@45
  char *v43; // r8@51
  __int64 v44; // kr08_8@53
  char *v45; // r2@53
  __int64 v46; // kr10_8@54
  int v47; // r4@54
  void *v48; // r6@56
  LayoutVariable *v49; // r0@59
  char *v50; // r0@61
  unsigned int *v51; // r1@68
  unsigned int v52; // r0@70
  unsigned int *v53; // r4@74
  unsigned int v54; // r0@76
  unsigned int *v55; // r1@82
  unsigned int v56; // r0@84
  unsigned int *v57; // r4@88
  unsigned int v58; // r0@90
  unsigned int *v59; // r1@96
  unsigned int v60; // r0@98
  unsigned int *v61; // r4@102
  unsigned int v62; // r0@104
  int v63; // [sp+4h] [bp-7Ch]@30
  int v64; // [sp+8h] [bp-78h]@62
  int v65; // [sp+Ch] [bp-74h]@62
  char v66; // [sp+10h] [bp-70h]@41
  __int64 v67; // [sp+14h] [bp-6Ch]@42
  void *v68; // [sp+20h] [bp-60h]@41
  void *ptr; // [sp+2Ch] [bp-54h]@41
  void *v70; // [sp+30h] [bp-50h]@41
  char *v71; // [sp+34h] [bp-4Ch]@41
  int v72; // [sp+3Ch] [bp-44h]@59
  UIControl *v73; // [sp+40h] [bp-40h]@1
  int v74; // [sp+44h] [bp-3Ch]@1

  v1 = this;
  v2 = (UIControl *)UIComponent::getOwner(this);
  UIControl::getParent((UIControl *)&v73, (int)v2);
  v3 = 0;
  v4 = v74;
  v5 = v73;
  v73 = 0;
  v74 = 0;
  v6 = *((_DWORD *)v1 + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    v8 = (unsigned int *)(v6 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v7 )
        {
          v12 = 1;
          v3 = 0;
          goto LABEL_12;
        }
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
    v3 = v6;
    v11 = *v8;
    v12 = 0;
    if ( !v11 )
      v12 = 1;
  }
  else
    v12 = 1;
LABEL_12:
  v13 = *((_DWORD *)v1 + 3);
  v14 = *((_DWORD *)v1 + 6);
  if ( v12 )
    v13 = 0;
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 4);
    v16 = (unsigned int *)(v14 + 4);
    while ( v15 )
      __dmb();
      v17 = __ldrex(v16);
      if ( v17 == v15 )
        v18 = __strex(v15 + 1, v16);
        v15 = v17;
        if ( !v18 )
          __dmb();
          v19 = *v16;
          v20 = 0;
          if ( !v19 )
            v20 = 1;
          goto LABEL_24;
      else
  v20 = 1;
  v14 = 0;
LABEL_24:
  v21 = (UIControl *)*((_DWORD *)v1 + 5);
  if ( v20 )
    v21 = 0;
  if ( v5 )
    _ZF = v13 == 0;
    if ( v13 )
      _ZF = v21 == 0;
    if ( !_ZF )
      v63 = v4;
      _R4 = UIControl::getSize((UIControl *)v13);
      _R5 = UIControl::getPosition(v2);
      _R8 = UIControl::getSize(v21);
      _R0 = UIControl::getPosition(v21);
      __asm
        VLDR            S4, [R8,#4]
        VLDR            S2, [R4,#4]
        VLDR            S0, [R0,#4]
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
          VLDR            S16, [R5,#4]
          VADD.F32        S4, S4, S0
          VADD.F32        S6, S2, S16
          VSUB.F32        S2, S4, S2
          VCMPE.F32       S6, S4
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S16, S2 }
          VCMPE.F32       S16, S0
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S16, S0 }
          VMOV.F32        S6, #0.5
          VMUL.F32        S2, S2, S6
          VADD.F32        S16, S2, S0
      UIControl::getPosition(v5);
      __asm { VLDR            S18, [R5,#4] }
      v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      if ( !(v30 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v31 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      v4 = v63;
      if ( UIControl::_hasComponent((UIControl *)v13, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v32 = UIControl::_getComponentIndex((UIControl *)v13, v31);
        v33 = *(_DWORD *)(v13 + 108);
        v4 = v63;
        v34 = *(LayoutComponent **)(v33 + 4 * v32);
        if ( v34 )
          v35 = LayoutComponent::getOffset(*(LayoutComponent **)(v33 + 4 * v32));
          ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&v68, (const ui::LayoutOffset *)v35);
          __asm { VSUB.F32        S0, S16, S18 }
          v70 = ptr;
          __asm { VMOV            R2, S0 }
          ui::AxisOffset::AxisOffset((int)&v66, 0, _R2, 0);
          HIDWORD(v37) = v70;
          if ( v70 == v71 )
          {
            LODWORD(v37) = ptr;
            v39 = ((_BYTE *)v70 - (_BYTE *)ptr) >> 2;
            v40 = -1431655765 * v39;
            if ( v70 == ptr )
              v40 = 1;
            v41 = v40 + -1431655765 * v39;
            v42 = v41;
            if ( v41 > 0x15555555 )
              v42 = 357913941;
            if ( v41 < v40 )
            if ( v42 )
            {
              if ( v42 >= 0x15555556 )
                sub_119C874();
              v43 = (char *)operator new(12 * v42);
              v37 = *(_QWORD *)&ptr;
            }
            else
              v43 = 0;
            v44 = v67;
            *(_DWORD *)&v43[HIDWORD(v37) - v37] = *(_DWORD *)&v66;
            *(_QWORD *)&v43[HIDWORD(v37) - v37 + 4] = v44;
            v45 = v43;
            if ( HIDWORD(v37) != (_DWORD)v37 )
              do
              {
                v46 = *(_QWORD *)v37;
                v47 = *(_DWORD *)(v37 + 8);
                LODWORD(v37) = v37 + 12;
                *(_QWORD *)v45 = v46;
                *((_DWORD *)v45 + 2) = v47;
                v45 += 12;
              }
              while ( HIDWORD(v37) != (_DWORD)v37 );
              LODWORD(v37) = ptr;
            v48 = v45 + 12;
            if ( (_DWORD)v37 )
              operator delete((void *)v37);
            ptr = v43;
            v70 = v48;
            v71 = &v43[12 * v42];
          }
          else
            v38 = v67;
            *(_DWORD *)v70 = *(_DWORD *)&v66;
            *(_QWORD *)(HIDWORD(v37) + 4) = v38;
            v70 = (char *)v70 + 12;
          v72 = 1;
          LayoutComponent::setOffset(v34, (const ui::LayoutOffset *)&v68);
          v49 = (LayoutVariable *)LayoutComponent::getVariable(v34, 1);
          if ( v49 )
            LayoutVariable::initialize(v49);
          LayoutComponent::layout((int)v34, (int)&unk_262D1B8, 1, 0);
          v50 = LayoutComponent::getOffsetDelta(v34);
          if ( *((_DWORD *)v50 + 1) & 0x7FFFFFFF )
            v64 = *(_DWORD *)v50;
            v65 = 0;
            LayoutComponent::setOffsetDelta(v34, (int)&v64, 0);
            LayoutComponent::layout((int)v34, (int)&unk_262D1B9, 1, 0);
          if ( ptr )
            operator delete(ptr);
          v4 = v63;
          if ( v68 )
            operator delete(v68);
    v51 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    else
      v52 = (*v51)--;
    if ( v52 == 1 )
      v53 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  if ( v3 )
    v55 = (unsigned int *)(v3 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  if ( v4 )
    v59 = (unsigned int *)(v4 + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 == 1 )
      v61 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


void __fastcall DropdownComponent::_handleToggleEvent(DropdownComponent *this, int a2)
{
  if ( *(_WORD *)a2 == *((_WORD *)this + 4) )
  {
    if ( *(_BYTE *)(a2 + 8) )
      j_j_j__ZN17DropdownComponent16_positionContentEv(this);
  }
}


int __fastcall DropdownComponent::receive(UIComponent *a1, int a2, unsigned __int16 a3, int a4, char a5)
{
  unsigned __int16 v5; // r5@1
  int v6; // r6@1
  UIComponent *v7; // r4@1
  unsigned int v8; // r0@1
  bool v9; // zf@1

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = UIComponent::isLocked(a1);
  v9 = v6 == 13;
  if ( v6 == 13 )
    v9 = (v8 ^ 1) == 1;
  if ( v9 && a5 && v5 == *((_WORD *)v7 + 4) )
    DropdownComponent::_positionContent(v7);
  return 0;
}


void __fastcall DropdownComponent::~DropdownComponent(DropdownComponent *this)
{
  DropdownComponent::~DropdownComponent(this);
}
