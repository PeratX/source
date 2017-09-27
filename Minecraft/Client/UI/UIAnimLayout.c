

int __fastcall UIAnimLayout::clone(UIAnimLayout *this, int a2)
{
  UIAnimLayout *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x98u);
  result = UIAnimLayout::UIAnimLayout((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall UIAnimLayout::UIAnimLayout(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  UIAnim::UIAnim(a1, a2);
  *(_DWORD *)v3 = &off_26DFCAC;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v2 + 52);
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v3 + 56), (const ui::LayoutOffset *)(v2 + 56));
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v3 + 88), (const ui::LayoutOffset *)(v2 + 88));
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v3 + 120), (const ui::LayoutOffset *)(v2 + 120));
  return v3;
}


int __fastcall UIAnimLayout::UIAnimLayout(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  int v5; // r7@1
  char v6; // r1@1
  int v7; // r4@3
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r5@5
  void *v11; // r0@6
  int v12; // r2@6
  _QWORD *v13; // r11@6
  int v14; // r1@9
  void *v15; // r0@16
  void *v16; // r0@17
  void *v17; // r0@19
  int v18; // r7@19
  void *v19; // r0@20
  bool v20; // zf@20
  void *v21; // r0@30
  __int64 v22; // r0@31
  __int64 v23; // r0@31
  __int64 v24; // r0@31
  __int64 v25; // r0@31
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  void *v31; // [sp+8h] [bp-D8h]@31
  void *v32; // [sp+14h] [bp-CCh]@31
  void *v33; // [sp+28h] [bp-B8h]@17
  void *v34; // [sp+34h] [bp-ACh]@26
  int v35; // [sp+4Ch] [bp-94h]@17
  void *v36; // [sp+50h] [bp-90h]@17
  int v37; // [sp+54h] [bp-8Ch]@17
  int v38; // [sp+58h] [bp-88h]@17
  void *v39; // [sp+5Ch] [bp-84h]@19
  int v40; // [sp+60h] [bp-80h]@19
  int v41; // [sp+64h] [bp-7Ch]@19
  __int64 v42; // [sp+68h] [bp-78h]@20
  void *v43; // [sp+70h] [bp-70h]@3
  void *v44; // [sp+7Ch] [bp-64h]@12
  int v45; // [sp+94h] [bp-4Ch]@3
  void *v46; // [sp+98h] [bp-48h]@3
  int v47; // [sp+9Ch] [bp-44h]@3
  int v48; // [sp+A0h] [bp-40h]@3
  void *ptr; // [sp+A4h] [bp-3Ch]@5
  int v50; // [sp+A8h] [bp-38h]@5
  int v51; // [sp+ACh] [bp-34h]@5
  int v52; // [sp+B0h] [bp-30h]@6
  int v53; // [sp+B4h] [bp-2Ch]@6

  v5 = a3;
  v6 = 5;
  if ( !a5 )
    v6 = 4;
  v7 = a1;
  UIAnim::UIAnim(a1, v6, a3, a3, a4);
  *(_DWORD *)v7 = &off_26DFCAC;
  *(_DWORD *)(v7 + 52) = a5;
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v7 + 56));
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v7 + 88));
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)(v7 + 120));
  sub_119C884((void **)&v45, "from");
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&v43);
  UIResolvedDef::getAsLayoutSize((ui::LayoutOffset *)&v46, v5, (int **)&v45, (const ui::LayoutOffset *)&v43);
  v8 = *(void **)(v7 + 88);
  *(_DWORD *)(v7 + 88) = v46;
  v46 = 0;
  *(_DWORD *)(v7 + 92) = v47;
  v47 = 0;
  *(_DWORD *)(v7 + 96) = v48;
  v48 = 0;
  if ( v8 )
    operator delete(v8);
  v10 = v7 + 100;
  v9 = *(void **)(v7 + 100);
  *(_DWORD *)v10 = ptr;
  ptr = 0;
  *(_DWORD *)(v10 + 4) = v50;
  v50 = 0;
  *(_DWORD *)(v10 + 8) = v51;
  v51 = 0;
  if ( v9 )
  {
    operator delete(v9);
    v11 = ptr;
    v12 = v53;
    *(_DWORD *)(v7 + 112) = v52;
    v13 = (_QWORD *)(v7 + 112);
    *(_DWORD *)(v7 + 116) = v12;
    if ( v11 )
      operator delete(v11);
  }
  else
    v14 = v53;
    *(_DWORD *)(v7 + 116) = v14;
  if ( v46 )
    operator delete(v46);
  if ( v44 )
    operator delete(v44);
  if ( v43 )
    operator delete(v43);
  v15 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v35, "to");
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&v33);
  UIResolvedDef::getAsLayoutSize((ui::LayoutOffset *)&v36, v5, (int **)&v35, (const ui::LayoutOffset *)&v33);
  v16 = *(void **)(v7 + 120);
  *(_DWORD *)(v7 + 120) = v36;
  v36 = 0;
  *(_DWORD *)(v7 + 124) = v37;
  v37 = 0;
  *(_DWORD *)(v7 + 128) = v38;
  v38 = 0;
  if ( v16 )
    operator delete(v16);
  v18 = v7 + 132;
  v17 = *(void **)(v7 + 132);
  *(_DWORD *)v18 = v39;
  v39 = 0;
  *(_DWORD *)(v18 + 4) = v40;
  v40 = 0;
  *(_DWORD *)(v18 + 8) = v41;
  v41 = 0;
  if ( v17 )
    operator delete(v17);
    v19 = v39;
    v20 = v39 == 0;
    *(_QWORD *)(v7 + 144) = v42;
    if ( !v20 )
      operator delete(v19);
  if ( v36 )
    operator delete(v36);
  if ( v34 )
    operator delete(v34);
  if ( v33 )
    operator delete(v33);
  v21 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_110071C(v7 + 88);
  sub_110071C(v7 + 100);
  sub_110071C(v7 + 120);
  sub_110071C(v7 + 132);
  ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&v31);
  sub_11008DE(
    *(_QWORD *)(v7 + 88),
    *(_QWORD *)(v7 + 88) >> 32,
    *(_QWORD *)(v7 + 120),
    *(_QWORD *)(v7 + 120) >> 32,
    (int)&v31);
    *(_QWORD *)(v7 + 100),
    *(_QWORD *)(v7 + 100) >> 32,
    *(_QWORD *)(v7 + 132),
    *(_QWORD *)(v7 + 132) >> 32,
    (int)&v32);
  HIDWORD(v22) = &v31;
  LODWORD(v22) = v7 + 88;
  sub_1100AEC(v22);
  LODWORD(v23) = v7 + 100;
  sub_1100AEC(v23);
  HIDWORD(v24) = &v31;
  LODWORD(v24) = v7 + 120;
  sub_1100AEC(v24);
  LODWORD(v25) = v7 + 132;
  sub_1100AEC(v25);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)(v7 + 56),
    (unsigned __int64 *)(v7 + 88));
    (unsigned __int64 *)(v7 + 68),
    (unsigned __int64 *)(v7 + 100));
  *(_QWORD *)(v7 + 80) = *v13;
  if ( v32 )
    operator delete(v32);
  if ( v31 )
    operator delete(v31);
  return v7;
}


void __fastcall UIAnimLayout::~UIAnimLayout(UIAnimLayout *this)
{
  UIAnimLayout *v1; // r0@1

  v1 = UIAnimLayout::~UIAnimLayout(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall UIAnimLayout::_reset(UIAnimLayout *this, UIControl *a2)
{
  UIAnimLayout *v2; // r5@1
  UIControl *v3; // r6@1
  bool v4; // zf@1
  signed int v5; // r0@1
  char v6; // r0@3
  int v7; // r7@6
  int result; // r0@6
  LayoutComponent *v9; // r6@7
  void *v10; // r1@10

  v2 = this;
  v3 = a2;
  v4 = *((_WORD *)this + 17) == 0xFFFF;
  v5 = 0;
  if ( !v4 )
    v5 = 1;
  *((_DWORD *)v2 + 7) = v5;
  *((_DWORD *)v2 + 2) = 0;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(
    (unsigned __int64 *)v2 + 7,
    (unsigned __int64 *)v2 + 11);
    (unsigned __int64 *)((char *)v2 + 68),
    (unsigned __int64 *)((char *)v2 + 100));
  *((_QWORD *)v2 + 10) = *((_QWORD *)v2 + 14);
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v7 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  result = UIControl::_hasComponent(v3, type_id<UIComponent,LayoutComponent>(void)::id[0]);
  if ( result == 1 )
    result = UIControl::_getComponentIndex(v3, v7);
    v9 = *(LayoutComponent **)(*((_DWORD *)v3 + 27) + 4 * result);
    if ( v9 )
    {
      result = *((_DWORD *)v2 + 13);
      if ( result == 1 )
      {
        LayoutComponent::setSize(v9, (UIAnimLayout *)((char *)v2 + 56));
        LayoutComponent::reinitialize(v9, (char *)&unk_262D1B0, 2);
        v10 = &unk_262D1B2;
        return (int)j_j_j__ZN15LayoutComponent6layoutESt16initializer_listI18LayoutVariableTypeEb_0(
                      (int)v9,
                      (int)v10,
                      2,
                      0);
      }
      if ( !result )
        LayoutComponent::setOffset(v9, (UIAnimLayout *)((char *)v2 + 56));
        LayoutComponent::reinitialize(v9, (char *)&unk_262D1AC, 2);
        v10 = &unk_262D1AE;
    }
  return result;
}


UIAnimLayout *__fastcall UIAnimLayout::~UIAnimLayout(UIAnimLayout *this)
{
  UIAnimLayout *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r0@7
  void *v6; // r0@9
  void *v7; // r0@11
  int v8; // r1@13
  void *v9; // r0@13
  int v10; // r1@14
  void *v11; // r0@14
  void (*v12)(void); // r3@15
  unsigned int *v14; // r12@18
  signed int v15; // r1@20
  unsigned int *v16; // r12@22
  signed int v17; // r1@24

  v1 = this;
  *(_DWORD *)this = &off_26DFCAC;
  v2 = (void *)*((_DWORD *)this + 33);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 30);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 22);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 17);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 14);
  if ( v7 )
    operator delete(v7);
  *(_DWORD *)v1 = &off_26DFBE4;
  v8 = *((_DWORD *)v1 + 12);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v10 = *((_DWORD *)v1 + 11);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v10 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v12 )
    v12();
  return v1;
}


signed int __fastcall UIAnimLayout::tick(UIAnimLayout *this, UIControl *a2, float _R2)
{
  UIControl *v8; // r8@1
  int v9; // r0@1
  int v11; // r1@5
  int v13; // r4@8
  signed int v14; // r7@8
  __int64 v15; // r0@11
  int v17; // r4@12
  signed int v18; // r7@12
  char v19; // r0@15
  int v20; // r6@18
  LayoutComponent *v21; // r6@19
  int v22; // r0@21
  void *v23; // r1@23
  signed int result; // r0@26

  _R5 = this;
  __asm
  {
    VMOV            S0, R2
    VLDR            S2, [R5,#8]
    VMOV.F32        S18, #1.0
    VLDR            S16, =0.0
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
  }
  v8 = a2;
  __asm { VSTR            S0, [R5,#8] }
  _R10 = (char *)this + 56;
  v9 = *((_DWORD *)this + 14);
    VLDR            S4, [R10,#-0x10]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S4 }
    VDIV.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VCMPE.F32       S0, S18
    __asm { VMOVGT.F32      S16, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  v11 = *((_DWORD *)_R10 + 1);
    __asm { VMOVGT.F32      S16, S18 }
  if ( v11 != v9 )
    __asm { VMOV            R9, S16 }
    v13 = -1431655765 * ((v11 - v9) >> 2);
    v14 = 4;
    while ( *((_DWORD *)_R5 + 5) )
    {
      --v13;
      *(_DWORD *)(*((_DWORD *)_R5 + 14) + v14) = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R5 + 6))(
                                                   (char *)_R5 + 12,
                                                   *(_DWORD *)(*((_DWORD *)_R5 + 22) + v14),
                                                   *(_DWORD *)(*((_DWORD *)_R5 + 30) + v14),
                                                   _R9);
      v14 += 12;
      if ( !v13 )
        goto LABEL_11;
    }
LABEL_29:
    sub_119C8E4();
LABEL_11:
  v15 = *(_QWORD *)((char *)_R5 + 68);
  if ( HIDWORD(v15) != (_DWORD)v15 )
    __asm { VMOV            R11, S16 }
    v17 = -1431655765 * ((HIDWORD(v15) - (signed int)v15) >> 2);
    v18 = 4;
      --v17;
      *(_DWORD *)(*((_DWORD *)_R5 + 17) + v18) = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R5 + 6))(
                                                   *(_DWORD *)(*((_DWORD *)_R5 + 25) + v18),
                                                   *(_DWORD *)(*((_DWORD *)_R5 + 33) + v18),
                                                   _R11);
      v18 += 12;
      if ( !v17 )
        goto LABEL_15;
    goto LABEL_29;
LABEL_15:
  v19 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v19 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v20 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v8, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v21 = *(LayoutComponent **)(*((_DWORD *)v8 + 27) + 4 * UIControl::_getComponentIndex(v8, v20));
  else
    v21 = 0;
  v22 = *((_DWORD *)_R5 + 13);
  if ( v22 )
    if ( v22 != 1 )
      goto LABEL_26;
    LayoutComponent::setSize(v21, (const ui::LayoutOffset *)_R10);
    LayoutComponent::reinitialize(v21, (char *)&unk_262D1A8, 2);
    v23 = &unk_262D1AA;
    LayoutComponent::setOffset(v21, (const ui::LayoutOffset *)_R10);
    LayoutComponent::reinitialize(v21, (char *)&unk_262D1A4, 2);
    v23 = &unk_262D1A6;
  LayoutComponent::layout((int)v21, (int)v23, 2, 0);
LABEL_26:
  __asm { VCMPE.F32       S16, S18 }
  result = 0;
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


void __fastcall UIAnimLayout::~UIAnimLayout(UIAnimLayout *this)
{
  UIAnimLayout::~UIAnimLayout(this);
}
