

int __fastcall ScreenView::setTextboxText(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r8@1
  int v4; // r4@1
  unsigned int *v5; // r0@3
  unsigned int v6; // r1@3
  unsigned int v7; // r2@6
  unsigned int v8; // r3@7
  unsigned int v9; // r1@8
  signed int v10; // r0@8
  int v11; // r7@12
  char v12; // r1@12
  int v13; // r6@17
  int v14; // r0@18
  int v15; // r1@18
  TextEditComponent *v16; // r7@18
  __int16 v17; // r8@19
  int v18; // r6@19
  int v19; // r0@19
  unsigned int *v20; // r1@21
  unsigned int v21; // r0@23
  unsigned int *v22; // r6@27
  unsigned int v23; // r0@29
  int result; // r0@34
  int v25; // r1@34
  unsigned int *v26; // r2@34

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 332);
  if ( v4 && *(_DWORD *)(v4 + 4) >= 1 )
  {
    v5 = (unsigned int *)(v4 + 4);
    v6 = *(_DWORD *)(v4 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v10 = 1;
          v4 = 0;
          goto LABEL_12;
        }
        __dmb();
        v7 = __ldrex(v5);
        if ( v7 == v6 )
          break;
        __clrex();
        v6 = v7;
      }
      v8 = __strex(v6 + 1, v5);
      v6 = v7;
    }
    while ( v8 );
    __dmb();
    v9 = *v5;
    v10 = 0;
    if ( !v9 )
      v10 = 1;
LABEL_12:
    v11 = *(_DWORD *)(v2 + 328);
    v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
    if ( v10 )
      v11 = 0;
    if ( !(v12 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
      type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
    v13 = type_id<UIComponent,TextEditComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v11, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
      v14 = UIControl::_getComponentIndex((UIControl *)v11, v13);
      v15 = *(_DWORD *)(v11 + 108);
      v16 = *(TextEditComponent **)(v15 + 4 * v14);
      if ( v16 )
        TextEditComponent::setText(*(_DWORD *)(v15 + 4 * v14), v3);
        v17 = TextEditComponent::getTextEditComponentId(v16);
        v18 = TextEditComponent::getCollectionIndex(v16);
        v19 = TextEditComponent::getLabelPropertyBag(v16);
        ScreenView::_fireTextChangedEvent(v2, 0, 0, v17, v18, v19);
    if ( v4 )
      v20 = (unsigned int *)(v4 + 4);
      if ( &pthread_create )
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  result = (*(int (**)(void))(**(_DWORD **)(v2 + 484) + 12))();
  if ( result == 1 )
    result = j_j_j__ZN10ScreenView16_deselectControlEv((ScreenView *)v2, v25, v26);
  return result;
}


void __fastcall ScreenView::_fireTextChangedEvent(int a1, char a2, int a3, __int16 a4, int a5, int a6)
{
  ScreenView::_fireTextChangedEvent(a1, a2, a3, a4, a5, a6);
}


int __fastcall ScreenView::_executeDelayedCommands(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r9@1
  int result; // r0@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // r7@4
  void (__fastcall *v8)(int, int); // r4@4
  int v9; // r0@4

  v2 = a1;
  v3 = a2;
  v6 = *(_QWORD *)(a1 + 512);
  result = *(_QWORD *)(a1 + 512) >> 32;
  v5 = v6;
  while ( v5 != result )
  {
    if ( *(_DWORD *)(v5 + 16) == v3 )
    {
      if ( !*(_DWORD *)(v5 + 8) )
        sub_21E5F48();
      v7 = *(_DWORD *)(v2 + 132);
      v8 = *(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 20);
      v9 = (*(int (__fastcall **)(int))(v5 + 12))(v5);
      v8(v7, v9);
      v5 = std::vector<ScreenView::DelayedCommand,std::allocator<ScreenView::DelayedCommand>>::_M_erase(v2 + 512, v5);
      result = *(_DWORD *)(v2 + 516);
    }
    else
      v5 += 20;
  }
  return result;
}


char *__fastcall ScreenView::_setKeyboardHeight(ScreenView *this, float a2)
{
  char *result; // r0@1
  int v11; // r8@2
  unsigned int *v12; // r0@4
  unsigned int v13; // r1@4
  unsigned int v14; // r2@7
  unsigned int v15; // r3@8
  unsigned int v16; // r1@9
  signed int v17; // r0@9
  int v18; // r4@19
  unsigned int *v19; // r1@20
  unsigned int *v20; // r5@26
  int v21; // r6@35
  char v22; // r1@35
  int v23; // r7@40
  TextEditComponent *v24; // r6@41
  unsigned int *v26; // r1@50
  unsigned int *v27; // r6@56
  int v28; // [sp+0h] [bp-48h]@42
  int v30; // [sp+8h] [bp-40h]@1
  int v31; // [sp+Ch] [bp-3Ch]@1
  UIControl *v32; // [sp+10h] [bp-38h]@1
  int v33; // [sp+14h] [bp-34h]@19

  _R4 = this;
  _R5 = a2;
  VisualTree::getRootControl((VisualTree *)&v32, *((_DWORD *)this + 33));
  result = UIControl::getParentRelativePosition(v32);
  __asm { VMOV            S16, R5 }
  _R5 = *(_DWORD *)result;
  v30 = *(_DWORD *)result;
  _R9 = *((_DWORD *)result + 1);
  __asm { VCMPE.F32       S16, #0.0 }
  v31 = *((_DWORD *)result + 1);
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  {
    result = 0;
    v31 = 0;
  }
  else
    v11 = *((_DWORD *)_R4 + 83);
    if ( v11 )
    {
      result = *(char **)(v11 + 4);
      if ( (signed int)result >= 1 )
      {
        v12 = (unsigned int *)(v11 + 4);
        v13 = *(_DWORD *)(v11 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v13 )
            {
              v17 = 1;
              v11 = 0;
              goto LABEL_35;
            }
            __dmb();
            v14 = __ldrex(v12);
            if ( v14 == v13 )
              break;
            __clrex();
            v13 = v14;
          }
          v15 = __strex(v13 + 1, v12);
          v13 = v14;
        }
        while ( v15 );
        __dmb();
        v16 = *v12;
        v17 = 0;
        if ( !v16 )
          v17 = 1;
LABEL_35:
        v21 = *((_DWORD *)_R4 + 82);
        v22 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
        if ( v17 )
          v21 = 0;
        if ( !(v22 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
          type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
        v23 = type_id<UIComponent,TextEditComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v21, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
          v24 = *(TextEditComponent **)(*(_DWORD *)(v21 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v21, v23));
          if ( v24 )
            TextEditComponent::getTextPos((TextEditComponent *)&v28, (int)v24);
            __asm { VLDR            S18, [SP,#0x48+var_44] }
            _R0 = TextEditComponent::getCaretHeightOffset(v24);
            __asm
              VMOV            S0, R0
              VADD.F32        S0, S0, S18
              VMOV            R0, S0
          else
            result = 0;
        else
          result = 0;
        __asm
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v31 = 0;
          VLDR            S2, [R4,#0x5C]
          VCVTR.S32.F32   S2, S2
          VCVT.F32.S32    S2, S2
          VSUB.F32        S2, S2, S16
          VCMPE.F32       S0, S2
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm
            VMOV.F32        S4, #-2.0
            VSUB.F32        S0, S4, S0
            VADD.F32        S0, S0, S2
            VLDR            S2, [SP,#0x48+var_3C]
            VSTR            S0, [SP,#0x48+var_3C]
        if ( v11 )
          v26 = (unsigned int *)(v11 + 4);
          if ( &pthread_create )
            do
              result = (char *)__ldrex(v26);
            while ( __strex((unsigned int)(result - 1), v26) );
            result = (char *)(*v26)--;
          if ( result == (char *)1 )
            v27 = (unsigned int *)(v11 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
            if ( &pthread_create )
              __dmb();
              do
                result = (char *)__ldrex(v27);
              while ( __strex((unsigned int)(result - 1), v27) );
            else
              result = (char *)(*v27)--;
            if ( result == (char *)1 )
              result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
    }
  __asm
    VMOV            S0, R5
    VLDR            S2, [SP,#0x48+var_40]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_65;
    VLDR            S0, [SP,#0x48+var_3C]
    VMOV            S2, R9
    VCMPE.F32       S2, S0
LABEL_65:
    UIControl::setParentRelativePosition(v32, (int)&v30);
    result = (char *)VisualTree::setDirty(*((VisualTree **)_R4 + 33), 1);
    VLDR            S0, [R4,#0x1DC]
    VCMPE.F32       S0, S16
    __asm { VSTR            S16, [R4,#0x1DC] }
    result = (char *)(*(int (**)(void))(**((_DWORD **)_R4 + 33) + 20))();
  v18 = v33;
  if ( v33 )
    v19 = (unsigned int *)(v33 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (char *)__ldrex(v19);
      while ( __strex((unsigned int)(result - 1), v19) );
    else
      result = (char *)(*v19)--;
    if ( result == (char *)1 )
      v20 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      if ( &pthread_create )
          result = (char *)__ldrex(v20);
        while ( __strex((unsigned int)(result - 1), v20) );
      else
        result = (char *)(*v20)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  return result;
}


signed int __fastcall ScreenView::_shouldSuppressActivateFocus(ScreenView *this)
{
  ScreenView *v1; // r1@1
  unsigned int v2; // r2@1
  signed int result; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 84) - 3;
  result = 0;
  if ( v2 <= 1 && *((_DWORD *)v1 + 85) == 2 )
    result = 1;
  return result;
}


void __fastcall ScreenView::handleButtonEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  ScreenView::handleButtonEvent(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}


void __fastcall ScreenView::setupAndRender(ScreenView *a1, int a2)
{
  int v2; // r11@1
  int v4; // r5@1
  int v5; // r7@1
  int v11; // r0@1
  unsigned int v12; // r6@1
  int v13; // r1@1
  int v14; // r4@1
  unsigned int v15; // r12@1
  unsigned int v16; // r9@1
  int v17; // r10@1
  signed int v18; // r2@1
  int v19; // r0@1
  signed int v20; // r1@1
  int v21; // r7@1
  unsigned int v22; // r3@7
  signed int v23; // r0@9
  unsigned int v24; // kr00_4@9
  signed int v25; // r1@9
  unsigned __int64 v26; // kr28_8@9
  unsigned __int64 v27; // r0@16
  unsigned __int64 *v28; // r10@17
  int v29; // r2@18
  signed int v30; // r3@18
  signed int v31; // r5@18
  signed int v32; // r2@25
  signed int v33; // r3@25
  int *v35; // r4@33
  void *v37; // r5@37 OVERLAPPED
  void *v38; // r6@37 OVERLAPPED
  int v39; // r0@39
  int v40; // r3@41
  int v41; // r4@41
  int v42; // r7@41
  int v43; // r0@41
  int v44; // r3@41
  int v45; // r4@41
  int v46; // r7@41
  int v47; // r0@44
  int v48; // r3@44
  int v49; // r4@44
  int v50; // r7@44
  int v51; // r3@44
  int v52; // r4@44
  int v53; // r7@44
  int v54; // r0@44
  int v57; // r4@52
  int v58; // r4@52
  unsigned int *v59; // r1@53
  unsigned int v60; // r0@55
  unsigned int *v61; // r5@59
  unsigned int v62; // r0@61
  int v63; // r7@66
  int v64; // r11@70
  char v65; // r0@70
  unsigned __int16 v66; // r0@72
  int v67; // r4@73
  DataBindingComponent *v68; // r4@74
  char v69; // r0@76
  unsigned __int16 v70; // r0@78
  int v71; // r5@79
  LayoutComponent *v72; // r6@80
  void (*v73)(void); // r2@84
  int v74; // r1@84
  unsigned int *v75; // r1@85
  unsigned int v76; // r3@87
  int v77; // r0@91
  int v78; // r5@91
  int v79; // r6@91
  int v80; // r0@92
  int v81; // r1@92
  unsigned int *v82; // r1@93
  unsigned int v83; // r2@95
  int v84; // r4@98
  unsigned int *v85; // r1@99
  unsigned int v86; // r0@101
  unsigned int *v87; // r7@105
  unsigned int v88; // r0@107
  int v89; // r1@113
  int v90; // r2@113
  int v91; // r4@115
  unsigned int *v92; // r1@116
  unsigned int v93; // r0@118
  unsigned int *v94; // r5@122
  unsigned int v95; // r0@124
  int v96; // r1@127
  int v97; // r4@128
  unsigned int *v98; // r1@129
  unsigned int v99; // r0@131
  unsigned int *v100; // r7@135
  unsigned int v101; // r0@137
  void (*v102)(void); // r2@155
  int v103; // r1@155
  unsigned int *v104; // r1@156
  unsigned int v105; // r3@158
  int v106; // r4@161
  unsigned int *v107; // r1@162
  unsigned int v108; // r0@164
  unsigned int *v109; // r5@168
  unsigned int v110; // r0@170
  int v111; // r5@175
  int v112; // r6@175
  int v113; // r7@176
  unsigned int *v114; // r1@177
  unsigned int v115; // r0@179
  unsigned int *v116; // r4@183
  unsigned int v117; // r0@185
  int v121; // ST00_4@196
  __int64 v122; // [sp+0h] [bp-168h]@0
  int v123; // [sp+18h] [bp-150h]@1
  int v124; // [sp+20h] [bp-148h]@17
  int i; // [sp+28h] [bp-140h]@66
  char v126; // [sp+30h] [bp-138h]@197
  float v127; // [sp+40h] [bp-128h]@196
  int v131; // [sp+50h] [bp-118h]@92
  int v132; // [sp+54h] [bp-114h]@92
  int v133; // [sp+58h] [bp-110h]@98
  int v134; // [sp+5Ch] [bp-10Ch]@98
  int v135; // [sp+60h] [bp-108h]@98
  int v136; // [sp+64h] [bp-104h]@98
  __int16 v137; // [sp+68h] [bp-100h]@98
  __int64 v138; // [sp+6Ch] [bp-FCh]@98
  int v139; // [sp+74h] [bp-F4h]@91
  int v140; // [sp+78h] [bp-F0h]@91
  int v141; // [sp+7Ch] [bp-ECh]@91
  int v142; // [sp+80h] [bp-E8h]@155
  int v143; // [sp+84h] [bp-E4h]@155
  int v144; // [sp+88h] [bp-E0h]@84
  int v145; // [sp+8Ch] [bp-DCh]@84
  UIControl *v146; // [sp+90h] [bp-D8h]@52
  int v147; // [sp+94h] [bp-D4h]@52
  int v148; // [sp+98h] [bp-D0h]@52
  int v149; // [sp+9Ch] [bp-CCh]@52
  int v150; // [sp+A0h] [bp-C8h]@52
  int v151; // [sp+A4h] [bp-C4h]@52
  __int16 v152; // [sp+A8h] [bp-C0h]@52
  signed int v153; // [sp+ACh] [bp-BCh]@52
  signed int v154; // [sp+B0h] [bp-B8h]@52
  int v155; // [sp+B4h] [bp-B4h]@52
  int v156; // [sp+B8h] [bp-B0h]@52
  int v157; // [sp+BCh] [bp-ACh]@52
  int v158; // [sp+C0h] [bp-A8h]@50
  double v159; // [sp+C8h] [bp-A0h]@50
  int v161; // [sp+D8h] [bp-90h]@50
  float v162; // [sp+E0h] [bp-88h]@35
  int v163; // [sp+E8h] [bp-80h]@35
  int v164; // [sp+ECh] [bp-7Ch]@35
  char v165; // [sp+F0h] [bp-78h]@35
  int v166; // [sp+F8h] [bp-70h]@35
  int v167; // [sp+FCh] [bp-6Ch]@35
  void *ptr; // [sp+104h] [bp-64h]@9
  void *v169; // [sp+108h] [bp-60h]@9
  int v170; // [sp+10Ch] [bp-5Ch]@9
  float v171; // [sp+110h] [bp-58h]@18
  float v172; // [sp+118h] [bp-50h]@9
  float v173; // [sp+11Ch] [bp-4Ch]@9
  char v174; // [sp+120h] [bp-48h]@9
  int v175; // [sp+128h] [bp-40h]@9
  int v176; // [sp+12Ch] [bp-3Ch]@9
  int v177; // [sp+130h] [bp-38h]@1
  int v178; // [sp+134h] [bp-34h]@1

  v2 = a2;
  _R8 = a1;
  v123 = a2;
  ScreenView::_update(a1);
  *((_QWORD *)_R8 + 56) = *((_QWORD *)_R8 + 57);
  sub_21E034C(&v177);
  v5 = v178;
  v4 = v177;
  *((_DWORD *)_R8 + 114) = v177;
  *((_DWORD *)_R8 + 115) = v5;
  __asm
  {
    VLDR            S0, =1.0e9
    VLDR            S16, [R8,#0x1D8]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  }
  v11 = _aeabi_f2lz(_R0);
  v12 = v11;
  v14 = v13;
  v15 = 5 * v11;
  v16 = v4 - *((_QWORD *)_R8 + 56);
  __asm { VMUL.F32        S0, S16, S16 }
  v17 = v5 - ((*((_QWORD *)_R8 + 56) >> 32) + !_CF);
  v18 = 0;
  v19 = 5 * v13 + (5 * (unsigned __int64)(unsigned int)v11 >> 32);
  v20 = 0;
  v21 = 0;
  if ( v15 < v16 )
    v20 = 1;
  if ( v19 < v17 )
    v18 = 1;
  if ( v19 == v17 )
    v18 = v20;
  v22 = *((_QWORD *)_R8 + 58) >> 32;
  if ( v18 )
    v17 = v19;
    v16 = v15;
  v23 = 0;
  v24 = *((_QWORD *)_R8 + 58);
  v25 = 0;
  v26 = __PAIR__(v17, v16) + __PAIR__(v22, v24);
  *((_QWORD *)_R8 + 58) = __PAIR__(v17, v16) + __PAIR__(v22, v24);
    VSTR            S16, [SP,#0x168+var_58]
    VSTR            S0, [SP,#0x168+var_54]
  v172 = 0.0;
  v173 = 0.0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  ptr = 0;
  v169 = 0;
  v170 = 0;
  if ( _NF ^ _VF )
    v23 = 1;
  if ( (unsigned int)v26 < v12 )
    v25 = 1;
  if ( HIDWORD(v26) != v14 )
    v25 = v23;
  if ( v25 )
    v27 = __PAIR__(v17, v16) + __PAIR__(v22, v24);
LABEL_33:
    _R0 = _aeabi_l2f(v27, HIDWORD(v27));
    __asm
    {
      VLDR            S0, =1.0e-9
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VLDR            S2, [SP,#0x168+var_58]
      VDIV.F32        S2, S0, S2
      VSTR            S2, [SP,#0x168+var_50]
      VSTR            S0, [SP,#0x168+var_4C]
    }
    v35 = (int *)((char *)_R8 + 296);
    v21 |= AnimationController::tickFixedTimestep(*((unsigned __int64 **)_R8 + 74), (int)&v171, (unsigned int)&ptr);
    goto LABEL_35;
  v124 = v17;
  v28 = (unsigned __int64 *)((char *)_R8 + 464);
  v123 = v2;
  v27 = v26;
  do
    *v28 = v27 - __PAIR__(v14, v12);
    v29 = AnimationController::tickFixedTimestep(*((unsigned __int64 **)_R8 + 74), (int)&v171, (unsigned int)&ptr);
    v27 = *v28;
    v30 = 0;
    v31 = 0;
    v21 |= v29;
    if ( (unsigned int)*v28 < v12 )
      v30 = 1;
    if ( SHIDWORD(v27) < v14 )
      v31 = 1;
    if ( HIDWORD(v27) == v14 )
      v31 = v30;
  while ( !v31 );
  v32 = 0;
  v33 = 0;
    v33 = 1;
  if ( SHIDWORD(v26) < v14 )
    v32 = 1;
  if ( HIDWORD(v26) == v14 )
    v32 = v33;
  if ( v32 )
    v17 = v124;
    goto LABEL_33;
  v17 = v124;
  v35 = (int *)((char *)_R8 + 296);
LABEL_35:
  _R0 = _aeabi_l2f(v16, v17);
    VMOV            S2, R0
    VLDR            S0, =1.0e-9
    VMUL.F32        S16, S2, S0
    VMUL.F32        S0, S16, S16
    VSTR            S16, [SP,#0x168+var_88]
    VSTR            S0, [SP,#0x168+var_84]
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  if ( ((unsigned __int8)AnimationController::tickRenderTimestep(*v35, (int)&v162, (unsigned int)&ptr) | (unsigned __int8)v21) & 1 )
    (*(void (**)(void))(**((_DWORD **)_R8 + 33) + 36))();
  *(_QWORD *)&v37 = *(_QWORD *)&ptr;
  if ( v169 != ptr )
    if ( ptr != v169 )
      v39 = *((_DWORD *)_R8 + 8);
      do
      {
        if ( v39 == *((_DWORD *)_R8 + 10) - 32 )
        {
          if ( (unsigned int)((*((_QWORD *)_R8 + 1) >> 32)
                            - ((signed int)(*((_DWORD *)_R8 + 11) - *((_QWORD *)_R8 + 1)) >> 2)) <= 1 )
            std::deque<ScreenEvent,std::allocator<ScreenEvent>>::_M_reallocate_map((int)_R8 + 8, 1u, 0);
          *(_DWORD *)(*((_DWORD *)_R8 + 11) + 4) = operator new(0x200u);
          v47 = *((_DWORD *)_R8 + 8);
          v48 = *((_DWORD *)v37 + 1);
          v49 = *((_DWORD *)v37 + 2);
          v50 = *((_DWORD *)v37 + 3);
          *(_DWORD *)v47 = *(_DWORD *)v37;
          *(_DWORD *)(v47 + 4) = v48;
          *(_DWORD *)(v47 + 8) = v49;
          *(_DWORD *)(v47 + 12) = v50;
          v47 += 16;
          v51 = *((_DWORD *)v37 + 5);
          v52 = *((_DWORD *)v37 + 6);
          v53 = *((_DWORD *)v37 + 7);
          *(_DWORD *)v47 = *((_DWORD *)v37 + 4);
          *(_DWORD *)(v47 + 4) = v51;
          *(_DWORD *)(v47 + 8) = v52;
          *(_DWORD *)(v47 + 12) = v53;
          v54 = *((_DWORD *)_R8 + 11);
          *((_DWORD *)_R8 + 11) = v54 + 4;
          v39 = *(_DWORD *)(v54 + 4);
          *((_DWORD *)_R8 + 9) = v39;
          *((_DWORD *)_R8 + 10) = v39 + 512;
        }
        else
          v40 = *((_DWORD *)v37 + 1);
          v41 = *((_DWORD *)v37 + 2);
          v42 = *((_DWORD *)v37 + 3);
          *(_DWORD *)v39 = *(_DWORD *)v37;
          *(_DWORD *)(v39 + 4) = v40;
          *(_DWORD *)(v39 + 8) = v41;
          *(_DWORD *)(v39 + 12) = v42;
          v43 = v39 + 16;
          v44 = *((_DWORD *)v37 + 5);
          v45 = *((_DWORD *)v37 + 6);
          v46 = *((_DWORD *)v37 + 7);
          *(_DWORD *)v43 = *((_DWORD *)v37 + 4);
          *(_DWORD *)(v43 + 4) = v44;
          *(_DWORD *)(v43 + 8) = v45;
          *(_DWORD *)(v43 + 12) = v46;
          v39 = *((_DWORD *)_R8 + 8) + 32;
        v37 = (char *)v37 + 32;
        *((_DWORD *)_R8 + 8) = v39;
      }
      while ( v38 != v37 );
      v37 = ptr;
    v169 = v37;
  if ( VisualTree::getClearPersistantMeshes(*((VisualTree **)_R8 + 33)) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 96))(v2);
    VisualTree::setClearPersistantMeshes(*((VisualTree **)_R8 + 33), 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 68))(v2);
  v159 = 0.0;
  v161 = 27;
  v158 = unk_27F636C;
  unk_27F636C = &v158;
  _R0 = getTimeS();
    VMOV            D0, R0, R1
    VNEG.F64        D1, D0
    VSTR            D1, [SP,#0x168+var_A0]
    VSTR            D1, [SP,#0x168+var_98]
  _R0 = v158;
  if ( v158 )
      VLDR            D1, [R0,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R0,#8]
  ScreenRenderBatch::preUpdate(*((ScreenRenderBatch **)_R8 + 73));
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v57 = *((_DWORD *)_R8 + 73);
  VisualTree::getRootControl((VisualTree *)&v146, *((_DWORD *)_R8 + 33));
  v152 = 0;
  v150 = 0;
  v151 = 0;
  v148 = 0;
  v149 = 0;
  v153 = 1065353216;
  v154 = 1065353216;
  ScreenRenderBatch::update(v57, &v146, v2, (int)&v155);
  v58 = v147;
  if ( v147 )
    v59 = (unsigned int *)(v147 + 4);
    if ( &pthread_create )
      __dmb();
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
    else
      v60 = (*v59)--;
    if ( v60 == 1 )
      v61 = (unsigned int *)(v58 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 8))(v58);
      if ( &pthread_create )
        __dmb();
        do
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
      else
        v62 = (*v61)--;
      if ( v62 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 12))(v58);
  v63 = v155;
  for ( i = v156; v155 != v156; i = v156 )
    while ( v63 != i )
      v64 = *(_DWORD *)v63;
      v65 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
      if ( !(v65 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
        v66 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,DataBindingComponent>(void)::id[0] = v66;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
      v67 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v64, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
        v68 = *(DataBindingComponent **)(*(_DWORD *)(v64 + 108)
                                       + 4 * UIControl::_getComponentIndex((UIControl *)v64, v67));
        v68 = 0;
      v69 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      if ( !(v69 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        v70 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,LayoutComponent>(void)::id[0] = v70;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v71 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v64, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v72 = *(LayoutComponent **)(*(_DWORD *)(v64 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v64, v71));
        v72 = 0;
      if ( v68 && DataBindingComponent::getDirty(v68) == 1 )
        v73 = *(void (**)(void))(**((_DWORD **)_R8 + 33) + 44);
        v144 = *(_DWORD *)v63;
        v74 = *(_DWORD *)(v63 + 4);
        v145 = v74;
        if ( v74 )
          v75 = (unsigned int *)(v74 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v76 = __ldrex(v75);
            while ( __strex(v76 + 1, v75) );
          }
          else
            ++*v75;
        v73();
        v91 = v145;
        if ( v145 )
          v92 = (unsigned int *)(v145 + 4);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 == 1 )
            v94 = (unsigned int *)(v91 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 8))(v91);
            if ( &pthread_create )
            {
              __dmb();
              do
                v95 = __ldrex(v94);
              while ( __strex(v95 - 1, v94) );
            }
            else
              v95 = (*v94)--;
            if ( v95 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 12))(v91);
      if ( v72 && LayoutComponent::isDelayingLayout(v72) == 1 )
        LayoutManager::addDelayedLayout(*((LayoutManager **)_R8 + 86), (UIControl *)v64);
      if ( UIControl::getDelayCollectionUpdate((UIControl *)v64) == 1 )
        UIControl::setDelayCollectionUpdate((UIControl *)v64, 0);
        v102 = *(void (**)(void))(**((_DWORD **)_R8 + 33) + 32);
        v142 = *(_DWORD *)v63;
        v103 = *(_DWORD *)(v63 + 4);
        v143 = v103;
        if ( v103 )
          v104 = (unsigned int *)(v103 + 4);
              v105 = __ldrex(v104);
            while ( __strex(v105 + 1, v104) );
            ++*v104;
        v102();
        v106 = v143;
        if ( v143 )
          v107 = (unsigned int *)(v143 + 4);
              v108 = __ldrex(v107);
            while ( __strex(v108 - 1, v107) );
            v108 = (*v107)--;
          if ( v108 == 1 )
            v109 = (unsigned int *)(v106 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v106 + 8))(v106);
                v110 = __ldrex(v109);
              while ( __strex(v110 - 1, v109) );
              v110 = (*v109)--;
            if ( v110 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v106 + 12))(v106);
      v63 += 36;
    if ( LayoutManager::hasDelayedLayout(*((LayoutManager **)_R8 + 86)) == 1 )
      LayoutManager::processDelayedLayout(*((LayoutManager **)_R8 + 86));
    ScreenView::_handleDirtyVisualTree(_R8, 1, 1);
    v77 = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v78 = v156;
    v79 = v155;
    v2 = v123;
    if ( v155 == v156 )
      v89 = 0;
      v90 = 0;
        v80 = *((_DWORD *)_R8 + 73);
        v131 = *(_DWORD *)v79;
        v81 = *(_DWORD *)(v79 + 4);
        v132 = v81;
        if ( v81 )
          v82 = (unsigned int *)(v81 + 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 + 1, v82) );
            ++*v82;
        v133 = *(_DWORD *)(v79 + 8);
        v134 = *(_DWORD *)(v79 + 12);
        v135 = *(_DWORD *)(v79 + 16);
        v136 = *(_DWORD *)(v79 + 20);
        v137 = *(_WORD *)(v79 + 24);
        v138 = *(_QWORD *)(v79 + 28);
        ScreenRenderBatch::update(v80, (UIControl **)&v131, v123, (int)&v139);
        v84 = v132;
        if ( v132 )
          v85 = (unsigned int *)(v132 + 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 == 1 )
            v87 = (unsigned int *)(v84 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 8))(v84);
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
              v88 = (*v87)--;
            if ( v88 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 12))(v84);
        v79 += 36;
      while ( v79 != v78 );
      v89 = v140;
      v90 = v139;
      v77 = v141;
      v78 = v156;
      v79 = v155;
    v155 = v90;
    v156 = v89;
    v139 = v79;
    v140 = v78;
    v96 = v157;
    v157 = v77;
    v141 = v96;
    if ( v79 != v78 )
        v97 = *(_DWORD *)(v79 + 4);
        if ( v97 )
          v98 = (unsigned int *)(v97 + 4);
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
            v99 = (*v98)--;
          if ( v99 == 1 )
            v100 = (unsigned int *)(v97 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 8))(v97);
                v101 = __ldrex(v100);
              while ( __strex(v101 - 1, v100) );
              v101 = (*v100)--;
            if ( v101 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 12))(v97);
      v79 = v139;
    if ( v79 )
      operator delete((void *)v79);
    v63 = v155;
  ScreenRenderBatch::postUpdate(*((ScreenRenderBatch **)_R8 + 73), v2);
  v111 = v156;
  v112 = v155;
  if ( v155 != v156 )
    do
      v113 = *(_DWORD *)(v112 + 4);
      if ( v113 )
        v114 = (unsigned int *)(v113 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 == 1 )
          v116 = (unsigned int *)(v113 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v113 + 8))(v113);
              v117 = __ldrex(v116);
            while ( __strex(v117 - 1, v116) );
            v117 = (*v116)--;
          if ( v117 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v113 + 12))(v113);
      v112 += 36;
    while ( v112 != v111 );
    v112 = v155;
  if ( v112 )
    operator delete((void *)v112);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x168+var_A0]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x168+var_A0]
    VLDR            D0, [SP,#0x168+var_98]
    VADD.F64        D0, D0, D1
    VSTR            D0, [SP,#0x168+var_98]
  HIDWORD(_R0) = v158;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x168+var_A0]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v158;
  __asm { VSTR            D0, [SP,#0x168+var_168] }
  ProfilerLite::_endScope(_R0, _R2, _R3, v122);
  RectangleArea::RectangleArea((RectangleArea *)&v127);
  __asm { VSTR            S16, [SP,#0x168+var_168] }
  ScreenView::_renderBatches(*(float *)&_R8, v2, *((_DWORD *)_R8 + 73), (RectangleArea *)&v127, v121);
  if ( RectangleArea::isEmpty((RectangleArea *)&v127) == 1 )
    RectangleArea::RectangleArea((RectangleArea *)&v126);
    RectangleArea::operator=((int)_R8 + 488, (int)&v126);
  else
      VLDR            S0, [SP,#0x168+var_128]
      VLDR            S2, [R8,#0x58]
      VDIV.F32        S0, S0, S2
      VSTR            S0, [R8,#0x1E8]
      VLDR            S0, [SP,#0x168+var_124]
      VSTR            S0, [R8,#0x1EC]
      VLDR            S0, [R8,#0x5C]
      VLDR            S2, [SP,#0x168+var_120]
      VDIV.F32        S2, S2, S0
      VSTR            S2, [R8,#0x1F0]
      VLDR            S2, [SP,#0x168+var_11C]
      VDIV.F32        S0, S2, S0
      VSTR            S0, [R8,#0x1F4]
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ScreenView::_isValidControllerStick(int a1, int a2)
{
  signed int v2; // r2@1
  signed int v3; // r0@3

  v2 = 0;
  if ( a2 == 3 )
    v2 = 1;
  v3 = 0;
  if ( !a2 )
    v3 = 1;
  return v3 | v2;
}


void __fastcall ScreenView::_switchTabToTargetIndex(int a1, __int64 *a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r5@2
  unsigned int v6; // r3@5
  unsigned int v7; // r7@6
  unsigned int v8; // r2@7
  __int64 v9; // r8@10
  UIComponent *v10; // r10@11
  UIComponent *v11; // r7@11
  int v12; // r6@12
  char v13; // r0@12
  int v14; // r5@15
  ToggleComponent *v15; // r6@16
  int v16; // r4@25
  char v17; // r0@25
  int v18; // r5@28
  FocusComponent *v19; // r0@29
  FocusManager *v20; // r4@31
  const UIControl *v21; // r0@31
  signed int v22; // r8@32
  UIControl *v23; // r0@33
  UIControl *v24; // r9@35
  int v25; // r4@37
  char v26; // r0@37
  int v27; // r5@40
  UIComponent *v28; // r5@41
  int v35; // r4@43
  char v36; // r0@43
  int v37; // r5@46
  UIComponent *v38; // r4@47
  UIControl *v39; // r0@48
  UIControl *v41; // r0@48
  __int64 v43; // r4@49
  int v44; // r0@50
  unsigned int *v45; // r2@51
  unsigned int v46; // r1@53
  unsigned int *v47; // r1@65
  unsigned int v48; // r0@67
  unsigned int *v49; // r4@71
  unsigned int v50; // r0@73
  int v51; // [sp+1Ch] [bp-7Ch]@11
  int v52; // [sp+20h] [bp-78h]@11
  int v53; // [sp+28h] [bp-70h]@1
  float v54; // [sp+2Ch] [bp-6Ch]@48
  float v55; // [sp+34h] [bp-64h]@42
  void *ptr; // [sp+3Ch] [bp-5Ch]@36
  __int64 v57; // [sp+48h] [bp-50h]@49
  int v58; // [sp+54h] [bp-44h]@35
  int v59; // [sp+58h] [bp-40h]@35
  __int64 v60; // [sp+5Ch] [bp-3Ch]@35
  int v61; // [sp+64h] [bp-34h]@35

  v3 = *(_DWORD *)(a1 + 356);
  v53 = a3;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
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
          goto LABEL_10;
        }
      }
      else
        __clrex();
    }
    v3 = 0;
  }
  else
LABEL_10:
  v9 = *a2;
  if ( (_DWORD)v9 != HIDWORD(v9) )
    v51 = a1;
    v52 = v3;
    v10 = 0;
    v11 = 0;
    do
      v12 = *(_DWORD *)v9;
      v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
      if ( !(v13 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
        type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
      v14 = type_id<UIComponent,ToggleComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v12, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
        v15 = *(ToggleComponent **)(*(_DWORD *)(v12 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v12, v14));
        v15 = 0;
      if ( ToggleComponent::getGroupIndex(v15) == v53 )
        ToggleComponent::setChecked(v15, 1);
        v10 = v15;
        if ( ToggleComponent::isChecked(v15) )
          v11 = v15;
        ToggleComponent::setChecked(v15, 0);
      LODWORD(v9) = v9 + 8;
    while ( HIDWORD(v9) != (_DWORD)v9 );
    v3 = v52;
    if ( v10 )
      v16 = UIComponent::getOwner(v10);
      v17 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
      if ( !(v17 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
        type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
      v18 = type_id<UIComponent,FocusComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v16, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
        v19 = *(FocusComponent **)(*(_DWORD *)(v16 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v16, v18));
        if ( v19 )
          if ( FocusComponent::getFocusEnabled(v19) == 1 )
          {
            v20 = *(FocusManager **)(v51 + 348);
            v21 = (const UIControl *)UIComponent::getOwner(v10);
            if ( FocusManager::setFocusControl(v20, v21) == 1 )
            {
              v22 = 1;
              ScreenView::_updateFocusControl((ScreenView *)v51, 1);
              goto LABEL_35;
            }
            v23 = (UIControl *)UIComponent::getOwner(v10);
            ScreenView::_adjustScrollToFocusedControl((ScreenView *)v51, v23);
          }
      v22 = 0;
LABEL_35:
      ScreenEvent::ScreenEvent((ScreenEvent *)&v58);
      v58 = 13;
      LOWORD(v59) = *(_WORD *)ToggleComponent::getToggleGroup(v10);
      LODWORD(v60) = v53;
      WORD2(v60) = 1;
      v24 = (UIControl *)UIComponent::getOwner(v10);
      v61 = UIControl::getPropertyBag(v24);
      UIControl::broadcastEvent((int)v24, (int)v10, v58, v59, v60, SHIDWORD(v60));
      (*(void (**)(void))(**(_DWORD **)(v51 + 124) + 28))();
      if ( !v22 )
        ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
        if ( v11 )
          v25 = UIComponent::getOwner(v11);
          v26 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
          if ( !(v26 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
            type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
          v27 = type_id<UIComponent,InputComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v25, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
            v28 = *(UIComponent **)(*(_DWORD *)(v25 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v25, v27));
            if ( v28 )
              _R7 = UIControl::getPosition((UIControl *)v25);
              _R0 = UIControl::getSize((UIControl *)v25);
              __asm
              {
                VMOV.F32        S0, #0.5
                VLDR            S2, [R0]
                VLDR            S4, [R0,#4]
                VLDR            S6, [R7,#4]
                VMUL.F32        S2, S2, S0
                VMUL.F32        S0, S4, S0
                VLDR            S4, [R7]
                VADD.F32        S2, S4, S2
                VADD.F32        S0, S6, S0
                VSTR            S2, [SP,#0x98+var_64]
                VSTR            S0, [SP,#0x98+var_60]
              }
              InputComponent::handleFocusLocation(
                v28,
                *(_DWORD *)(v51 + 132),
                *(_DWORD *)(v51 + 296),
                (int)&ptr,
                (int)&v55,
                1);
        v35 = UIComponent::getOwner(v10);
        v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
        __dmb();
        if ( !(v36 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
          type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
        v37 = type_id<UIComponent,InputComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v35, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
          v38 = *(UIComponent **)(*(_DWORD *)(v35 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v35, v37));
          if ( v38 )
            v39 = (UIControl *)UIComponent::getOwner(v10);
            _R5 = UIControl::getPosition(v39);
            v41 = (UIControl *)UIComponent::getOwner(v10);
            _R0 = UIControl::getSize(v41);
            __asm
              VMOV.F32        S0, #0.5
              VLDR            S2, [R0]
              VLDR            S4, [R0,#4]
              VLDR            S6, [R5,#4]
              VMUL.F32        S2, S2, S0
              VMUL.F32        S0, S4, S0
              VLDR            S4, [R5]
              VADD.F32        S2, S4, S2
              VADD.F32        S0, S6, S0
              VSTR            S2, [SP,#0x98+var_6C]
              VSTR            S0, [SP,#0x98+var_68]
            InputComponent::handleFocusLocation(
              v38,
              *(_DWORD *)(v51 + 132),
              *(_DWORD *)(v51 + 296),
              (int)&ptr,
              (int)&v54,
              0);
        ScreenView::_processEvents((ScreenView *)v51, (ScreenInputContext *)&ptr);
        v43 = v57;
        if ( (_DWORD)v57 != HIDWORD(v57) )
          do
            v44 = *(_DWORD *)(v43 + 8);
            if ( v44 )
              v45 = (unsigned int *)(v44 + 8);
              if ( &pthread_create )
                __dmb();
                do
                  v46 = __ldrex(v45);
                while ( __strex(v46 - 1, v45) );
              else
                v46 = (*v45)--;
              if ( v46 == 1 )
                (*(void (**)(void))(*(_DWORD *)v44 + 12))();
            LODWORD(v43) = v43 + 12;
          while ( (_DWORD)v43 != HIDWORD(v43) );
          LODWORD(v43) = v57;
        if ( (_DWORD)v43 )
          operator delete((void *)v43);
        if ( ptr )
          operator delete(ptr);
      goto LABEL_64;
LABEL_64:
    v47 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    else
      v48 = (*v47)--;
    if ( v48 == 1 )
      v49 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}


void __fastcall ScreenView::_handleSliderMovement(ScreenView *this)
{
  ScreenView::_handleSliderMovement(this);
}


void __fastcall ScreenView::_prepResevedButtonUpLists(ScreenView *this, ScreenInputContext *a2)
{
  unsigned int v2; // r7@0
  ScreenView *v3; // r4@1
  int v4; // r9@1
  __int64 v5; // kr00_8@1
  int v6; // r1@3 OVERLAPPED
  int v7; // r2@3
  int v8; // r2@4
  unsigned int *v9; // r2@5
  unsigned int v10; // r1@7
  __int64 v11; // kr08_8@12
  unsigned int v12; // r6@12
  int *v13; // r0@12
  int *v14; // r4@13
  unsigned __int16 v15; // r2@13
  int v16; // r5@15
  bool v17; // zf@18
  __int64 v18; // kr10_8@22
  int v19; // r5@22
  int v20; // r0@22
  unsigned __int16 v21; // r2@23
  unsigned int v22; // r8@25
  bool v23; // zf@28
  _WORD *v24; // r0@32
  int v25; // r4@33
  int v26; // r5@33
  int v27; // r0@34
  unsigned int *v28; // r2@35
  unsigned int v29; // r1@37
  int j; // r11@47
  __int64 v31; // r0@48
  char *v32; // r4@48
  signed int v33; // r0@48
  unsigned int v34; // r5@48
  __int64 v35; // r0@51
  int v36; // r12@52
  int v37; // r6@53
  unsigned int *v38; // r6@54
  unsigned int v39; // r5@56
  int v40; // r6@60
  int v41; // r5@64
  int v42; // r4@65
  int v43; // r5@70
  int v44; // r0@70
  _DWORD *v45; // r10@71
  unsigned __int16 v46; // r2@71
  _DWORD *v47; // r8@73
  bool v48; // zf@76
  _WORD *v49; // r0@80
  int v50; // r4@81
  int v51; // r5@81
  int v52; // r0@82
  unsigned int *v53; // r2@83
  unsigned int v54; // r1@85
  int i; // [sp+8h] [bp-48h]@1
  unsigned int v56; // [sp+Ch] [bp-44h]@22
  unsigned int v57; // [sp+Ch] [bp-44h]@70
  ScreenView *v58; // [sp+10h] [bp-40h]@1
  char *v59; // [sp+14h] [bp-3Ch]@48
  char *v60; // [sp+18h] [bp-38h]@48
  char *v61; // [sp+1Ch] [bp-34h]@48
  unsigned __int64 v62; // [sp+20h] [bp-30h]@22
  int v63; // [sp+28h] [bp-28h]@22

  v3 = this;
  v58 = this;
  v5 = *(_QWORD *)ScreenInputContext::getButtonUpRightOfFirstRefusalRequests(a2);
  v4 = v5;
  for ( i = (int)v3 + 300; v4 != HIDWORD(v5); v4 += 12 )
  {
    v11 = *(_QWORD *)((char *)v58 + 300);
    v2 = *(_WORD *)v4;
    v12 = v2 % (unsigned int)(*(_QWORD *)((char *)v58 + 300) >> 32);
    v13 = *(int **)(v11 + 4 * v12);
    if ( !v13 )
      goto LABEL_22;
    v14 = (int *)*v13;
    v15 = *(_WORD *)(*v13 + 4);
    while ( *(_WORD *)v4 != v15 )
    {
      v16 = *v14;
      if ( *v14 )
      {
        v2 = *(_WORD *)(v16 + 4);
        v13 = (int *)v11;
        v15 = *(_WORD *)(v16 + 4);
        v14 = *(int **)v11;
        if ( v2 % HIDWORD(v11) == v12 )
          continue;
      }
    }
    v17 = v13 == 0;
    if ( v13 )
      v13 = (int *)*v13;
      v17 = v13 == 0;
    if ( v17 )
LABEL_22:
      v62 = 0LL;
      v63 = 0;
      std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::_M_emplace_back_aux<std::weak_ptr<UIControl> const&>(
        &v62,
        v4 + 4);
      v18 = *(_QWORD *)((char *)v58 + 300);
      v56 = *(_WORD *)v4;
      v19 = v56 % (unsigned int)(*(_QWORD *)((char *)v58 + 300) >> 32);
      v20 = *(_DWORD *)(v18 + 4 * v19);
      if ( !v20 )
        goto LABEL_32;
      v2 = *(_DWORD *)v20;
      v21 = *(_WORD *)(*(_DWORD *)v20 + 4);
      while ( v56 != v21 )
        v22 = *(_DWORD *)v2;
        if ( *(_DWORD *)v2 )
        {
          v20 = v2;
          v21 = *(_WORD *)(v22 + 4);
          v2 = *(_DWORD *)v2;
          if ( (unsigned int)*(_WORD *)(v22 + 4) % HIDWORD(v18) == v19 )
            continue;
        }
      v23 = v20 == 0;
      if ( v20 )
        v20 = *(_DWORD *)v20;
        v23 = v20 == 0;
      if ( v23 )
LABEL_32:
        v24 = operator new(0x14u);
        *(_DWORD *)v24 = 0;
        v24[2] = *(_WORD *)v4;
        *((_DWORD *)v24 + 2) = 0;
        *((_DWORD *)v24 + 3) = 0;
        *((_DWORD *)v24 + 4) = 0;
        v20 = std::_Hashtable<short,std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>,std::allocator<std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                i,
                v19,
                v56,
                (int)v24);
      std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::operator=(v20 + 8, &v62);
      v25 = HIDWORD(v62);
      v26 = v62;
      if ( (_DWORD)v62 != HIDWORD(v62) )
        do
          v27 = *(_DWORD *)(v26 + 4);
          if ( v27 )
          {
            v28 = (unsigned int *)(v27 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
              {
                v29 = __ldrex(v28);
                v2 = __strex(v29 - 1, v28);
              }
              while ( v2 );
            }
            else
              v29 = (*v28)--;
            if ( v29 == 1 )
              (*(void (**)(void))(*(_DWORD *)v27 + 12))();
          }
          v26 += 8;
        while ( v26 != v25 );
        v26 = v62;
      if ( v26 )
        operator delete((void *)v26);
    else
      *(_QWORD *)&v6 = *(_QWORD *)(v13 + 3);
      if ( v6 == v7 )
        std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::_M_emplace_back_aux<std::weak_ptr<UIControl> const&>(
          (unsigned __int64 *)v13 + 1,
          v4 + 4);
      else
        *(_DWORD *)v6 = *(_DWORD *)(v4 + 4);
        v8 = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(v6 + 4) = v8;
        if ( v8 )
          v9 = (unsigned int *)(v8 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 + 1, v9) );
            v6 = v13[3];
          else
            ++*v9;
        v13[3] = v6 + 8;
  }
  for ( j = *((_DWORD *)v58 + 77); j; j = *(_DWORD *)j )
    v31 = *(_QWORD *)(j + 8);
    v32 = 0;
    v59 = 0;
    v60 = 0;
    v33 = HIDWORD(v31) - v31;
    v61 = 0;
    v34 = v33 >> 3;
    if ( v33 >> 3 )
      if ( v34 >= 0x20000000 )
        sub_21E57F4();
      v32 = (char *)operator new(v33);
    v59 = v32;
    v60 = v32;
    v61 = &v32[8 * v34];
    v35 = *(_QWORD *)(j + 8);
    if ( (_DWORD)v35 == HIDWORD(v35) )
      v40 = (int)v32;
      v36 = -(signed int)v35;
      v2 = (unsigned int)v32;
      do
        *(_DWORD *)v2 = *(_DWORD *)v35;
        v37 = *(_DWORD *)(v35 + 4);
        *(_DWORD *)(v2 + 4) = v37;
        if ( v37 )
          v38 = (unsigned int *)(v37 + 8);
              v39 = __ldrex(v38);
            while ( __strex(v39 + 1, v38) );
            ++*v38;
        LODWORD(v35) = v35 + 8;
        v2 += 8;
      while ( (_DWORD)v35 != HIDWORD(v35) );
      v40 = (int)v59;
      v32 += ((HIDWORD(v35) - 8 + v36) & 0xFFFFFFF8) + 8;
    if ( (char *)v40 != v32 )
      sub_130A09C(v40, (int)v32, 2 * (31 - __clz((signed int)&v32[-v40] >> 3)), 0);
      if ( (signed int)&v32[-v40] < 129 )
        sub_130AB88(v40, v32);
        v41 = v40 + 128;
        sub_130AB88(v40, (_DWORD *)(v40 + 128));
        if ( (char *)(v40 + 128) != v32 )
          v42 = (int)(v32 - 128);
          do
            v2 &= 0xFFFFFF00;
            sub_130AD30(v41);
            v41 = v40 + 136;
            v17 = v42 == v40 + 8;
            v40 += 8;
          while ( !v17 );
    v2 = *(_QWORD *)((char *)v58 + 300) >> 32;
    v57 = *(_WORD *)(j + 4);
    v43 = v57 % v2;
    v44 = *(_DWORD *)(*(_QWORD *)((char *)v58 + 300) + 4 * v43);
    if ( !v44 )
      goto LABEL_80;
    v45 = *(_DWORD **)v44;
    v46 = *(_WORD *)(*(_DWORD *)v44 + 4);
    while ( (unsigned __int16)v57 != v46 )
      v47 = (_DWORD *)*v45;
      if ( *v45 )
        v44 = (int)v45;
        v46 = *((_WORD *)v47 + 2);
        v45 = (_DWORD *)*v45;
        if ( *((_WORD *)v47 + 2) % v2 == v43 )
    v48 = v44 == 0;
    if ( v44 )
      v44 = *(_DWORD *)v44;
      v48 = v44 == 0;
    if ( v48 )
LABEL_80:
      v49 = operator new(0x14u);
      *(_DWORD *)v49 = 0;
      v49[2] = *(_WORD *)(j + 4);
      *((_DWORD *)v49 + 2) = 0;
      *((_DWORD *)v49 + 3) = 0;
      *((_DWORD *)v49 + 4) = 0;
      v44 = std::_Hashtable<short,std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>,std::allocator<std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              i,
              v43,
              v57,
              (int)v49);
    std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::operator=(
      v44 + 8,
      (unsigned __int64 *)&v59);
    v50 = (int)v60;
    v51 = (int)v59;
    if ( v59 != v60 )
        v52 = *(_DWORD *)(v51 + 4);
        if ( v52 )
          v53 = (unsigned int *)(v52 + 8);
              v54 = __ldrex(v53);
              v2 = __strex(v54 - 1, v53);
            while ( v2 );
            v54 = (*v53)--;
          if ( v54 == 1 )
            (*(void (**)(void))(*(_DWORD *)v52 + 12))();
        v51 += 8;
      while ( v51 != v50 );
      v51 = (int)v59;
    if ( v51 )
      operator delete((void *)v51);
}


int __fastcall ScreenView::_bindAlwaysBinds(int result)
{
  int v1; // r8@1
  UIControl **i; // r4@1
  UIControl **v3; // r9@1
  UIControl *v4; // r6@2
  char v5; // r0@2
  int v6; // r7@5
  DataBindingComponent *v7; // r6@6
  ScreenController *v8; // r7@8
  UIControl *v9; // t1@8
  int v10; // r0@8

  v1 = result;
  v3 = (UIControl **)(*(_QWORD *)(result + 136) >> 32);
  for ( i = (UIControl **)*(_QWORD *)(result + 136); v3 != i; result = DataBindingComponent::bindAlwaysBinds(
                                                                         v7,
                                                                         v8,
                                                                         v10) )
  {
    v4 = *i;
    v5 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
    __dmb();
    if ( !(v5 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
    {
      type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
    }
    v6 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
      v7 = *(DataBindingComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v6));
    else
      v7 = 0;
    v8 = *(ScreenController **)(v1 + 124);
    v9 = *i;
    i += 2;
    v10 = UIControl::isVisibleInTree(v9);
  }
  return result;
}


unsigned int __fastcall ScreenView::ignoreAsTop(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent19getForceRenderBelowEv(v1);
}


void __fastcall ScreenView::processBufferedTextCharEvents(int a1, unsigned __int64 *a2)
{
  int *v2; // r5@0
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r10@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void *v8; // r0@11
  int v9; // r4@13
  unsigned int *v10; // r7@15
  unsigned int v11; // r0@15
  unsigned int v12; // r1@18
  unsigned int v13; // r2@19
  bool v14; // zf@20
  char v15; // r0@23
  int v16; // r6@26
  int v17; // r1@27
  void *v18; // r0@29
  void *v19; // r0@31
  unsigned int v20; // r0@35
  unsigned int *v21; // r5@39
  unsigned int v22; // r0@41
  unsigned int *v23; // r2@47
  signed int v24; // r1@49
  int v25; // [sp+0h] [bp-40h]@28
  int v26; // [sp+8h] [bp-38h]@3

  v4 = *a2 >> 32;
  v3 = *a2;
  v5 = a1;
  if ( v3 != v4 )
  {
    v2 = &dword_28898C0;
    do
    {
      sub_21E94B4((void **)&v26, (const char *)v3);
      ScreenView::handleTextChar(v5, (const void **)&v26, *(_BYTE *)(v3 + 5), 0);
      v8 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v3 += 6;
    }
    while ( v3 != v4 );
  }
  v9 = *(_DWORD *)(v5 + 332);
  if ( v9 && *(_DWORD *)(v9 + 4) > 0 )
    v10 = (unsigned int *)(v9 + 4);
    v11 = *(_DWORD *)(v9 + 4);
    while ( v11 )
      __dmb();
      v12 = __ldrex(v10);
      if ( v12 == v11 )
        v13 = __strex(v11 + 1, v10);
        v11 = v12;
        if ( !v13 )
          v14 = *v10 == 0;
          if ( *v10 )
          {
            v2 = *(int **)(v5 + 328);
            v14 = v2 == 0;
          }
          if ( v14 )
            goto LABEL_57;
          v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
          if ( !(v15 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
            type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
          v16 = type_id<UIComponent,TextEditComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextEditComponent>(void)::id[0]) != 1 )
          v17 = *(_DWORD *)(v2[27] + 4 * UIControl::_getComponentIndex((UIControl *)v2, v16));
          if ( !v17 )
          TextEditComponent::getText((TextEditComponent *)&v25, v17);
          if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
            v18 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
          else
            v18 = &ServiceLocator<AppPlatform>::mDefaultService;
          (*(void (**)(void))(**(_DWORD **)v18 + 356))();
          v19 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v25 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            }
            else
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          if ( v9 )
LABEL_57:
                v20 = __ldrex(v10);
              while ( __strex(v20 - 1, v10) );
              v20 = (*v10)--;
            if ( v20 == 1 )
              v21 = (unsigned int *)(v9 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v22 = __ldrex(v21);
                while ( __strex(v22 - 1, v21) );
              }
              else
                v22 = (*v21)--;
              if ( v22 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
          return;
      else
        __clrex();
}


unsigned int __fastcall ScreenView::_initSelectedControl(ScreenView *this)
{
  ScreenView *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r4@3
  unsigned int *v4; // r1@4
  unsigned int *v5; // r5@10
  UIControl *v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@3

  v1 = this;
  result = VisualTree::getInitialSelectedControl((VisualTree *)&v6, *((_DWORD *)this + 33));
  if ( v6 )
    result = ScreenView::_selectControl(v1, v6);
  v3 = v7;
  if ( v7 )
  {
    v4 = (unsigned int *)(v7 + 4);
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


void __fastcall ScreenView::_handlePointerLocation(int a1, int a2, int a3, int a4)
{
  char v6; // r0@1
  int v7; // r5@3
  int v12; // r0@8
  int *v13; // r4@8
  int *v14; // r8@8
  char i; // r10@8
  int v16; // r5@9
  char v17; // r0@9
  int v18; // r6@12
  UIComponent *v19; // r0@13
  int *j; // r4@16
  int *v21; // r8@16
  int v22; // r5@17
  char v23; // r0@17
  int v24; // r6@20
  UIComponent *v25; // r0@21
  __int64 v26; // r4@25
  int v27; // r0@26
  unsigned int *v28; // r2@27
  unsigned int v29; // r1@29
  int v30; // [sp+10h] [bp-48h]@1
  float v31; // [sp+14h] [bp-44h]@14
  void *ptr; // [sp+1Ch] [bp-3Ch]@3
  __int64 v33; // [sp+28h] [bp-30h]@25

  _R11 = a1;
  _R4 = a2;
  v6 = *(_BYTE *)(a1 + 48);
  v30 = a2;
  if ( a3 )
    v6 = a3;
  *(_BYTE *)(_R11 + 48) = v6;
  v7 = a4;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  __asm
  {
    VLDR            S6, [R11,#0x1B4]
    VLDR            S0, [R4]
    VLDR            S4, [R11,#0x1B8]
    VCMPE.F32       S0, S6
    VLDR            S2, [R4,#4]
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S8, S0, S6
    VSUB.F32        S10, S2, S4
    VSTR            S8, [SP,#0x58+var_44]
    VSTR            S10, [SP,#0x58+var_40]
  }
  if ( _ZF )
    _ZF = v7 == 0;
  if ( !_ZF )
    goto LABEL_42;
    VCMPE.F32       S2, S4
LABEL_42:
    __asm
    {
      VSTR            S0, [R11,#0x1B4]
      VSTR            S2, [R11,#0x1B8]
    }
    v12 = *(_DWORD *)(_R11 + 348);
    FocusManager::setFocusPosition();
    ScreenView::_updateFocusControl((ScreenView *)_R11, 0);
    v14 = (int *)(*(_QWORD *)(_R11 + 148) >> 32);
    v13 = (int *)*(_QWORD *)(_R11 + 148);
    for ( i = 0; v14 != v13; v13 += 2 )
      v16 = *v13;
      v17 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
      __dmb();
      if ( !(v17 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
      {
        type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
      }
      v18 = type_id<UIComponent,InputComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v16, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
        v19 = *(UIComponent **)(*(_DWORD *)(v16 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v16, v18));
        if ( v19 )
          i = InputComponent::handlePointerLocation(
                v19,
                *(_DWORD *)(_R11 + 132),
                *(_DWORD *)(_R11 + 296),
                (int)&ptr,
                v30,
                (int)&v31,
                i & 1);
    v21 = (int *)(*(_QWORD *)(_R11 + 220) >> 32);
    for ( j = (int *)*(_QWORD *)(_R11 + 220); v21 != j; j += 2 )
      v22 = *j;
      v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
      if ( !(v23 & 1)
      v24 = type_id<UIComponent,InputComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v22, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
        v25 = *(UIComponent **)(*(_DWORD *)(v22 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v22, v24));
        if ( v25 )
                v25,
    ScreenView::_processEvents((ScreenView *)_R11, (ScreenInputContext *)&ptr);
  v26 = v33;
  if ( (_DWORD)v33 != HIDWORD(v33) )
    do
      v27 = *(_DWORD *)(v26 + 8);
      if ( v27 )
        v28 = (unsigned int *)(v27 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 == 1 )
          (*(void (**)(void))(*(_DWORD *)v27 + 12))();
      LODWORD(v26) = v26 + 12;
    while ( (_DWORD)v26 != HIDWORD(v26) );
    LODWORD(v26) = v33;
  if ( (_DWORD)v26 )
    operator delete((void *)v26);
  if ( ptr )
    operator delete(ptr);
}


void __fastcall ScreenView::_directionHeld(int a1, int a2, int a3)
{
  bool v3; // zf@3

  if ( !a2 && a3 )
    goto LABEL_10;
  v3 = a3 == 4;
  if ( a3 != 4 )
    v3 = a3 == 2;
  if ( v3 )
LABEL_10:
    j_j_j__ZN10ScreenView22_selectNextFocusObjectEN2ui17CardinalDirectionE(a1);
}


int __fastcall ScreenView::ScreenView(int a1, unsigned int a2, int a3, unsigned int a4, int *a5, int a6, int a7, int *a8)
{
  int v8; // r4@1
  int v9; // r9@1
  unsigned __int64 v10; // r10@1
  int v11; // r1@1
  int v12; // r1@1
  __int64 v13; // kr00_8@2
  __int64 v14; // kr08_8@2
  __int64 v15; // kr10_8@2
  __int64 v16; // kr18_8@2
  __int64 v17; // kr20_8@2
  __int64 v18; // kr28_8@2
  void *v19; // r7@2
  void *v20; // r0@2
  unsigned int v21; // r5@4
  void *v22; // t1@5
  int v23; // r6@7
  int v24; // r2@7
  unsigned int *v25; // r2@8
  unsigned int v26; // r3@10
  int v27; // r2@13
  void *v28; // r5@13
  double v29; // r0@13
  AnimationController *v30; // r5@13
  double v31; // r0@13
  unsigned int v32; // r0@13
  int v33; // r7@15
  void *v34; // r5@15
  int v35; // r2@16
  void *v36; // r5@16
  double v37; // r0@16
  unsigned int v38; // r0@16
  int v39; // r7@18
  void *v40; // r5@18
  unsigned __int64 *v41; // r5@19
  void *v42; // r0@19
  unsigned __int64 *v43; // r5@20
  void *v44; // r0@20
  unsigned __int64 *v45; // r5@21
  void *v46; // r0@21
  unsigned __int64 *v47; // r5@22
  void *v48; // r0@22
  unsigned __int64 *v49; // r5@23
  void *v50; // r0@23
  unsigned __int64 *v51; // r5@24
  void *v52; // r0@24
  unsigned int *v54; // r2@28
  signed int v55; // r1@30
  unsigned int *v56; // r2@32
  signed int v57; // r1@34
  unsigned int *v58; // r2@36
  signed int v59; // r1@38
  unsigned int *v60; // r2@40
  signed int v61; // r1@42
  unsigned int *v62; // r2@44
  signed int v63; // r1@46
  unsigned int *v64; // r2@48
  signed int v65; // r1@50
  int v66; // [sp+Ch] [bp-2Ch]@24
  int v67; // [sp+14h] [bp-24h]@23
  int v68; // [sp+1Ch] [bp-1Ch]@22
  int v69; // [sp+24h] [bp-14h]@21
  int v70; // [sp+2Ch] [bp-Ch]@20
  int v71; // [sp+34h] [bp-4h]@19
  int v72; // [sp+38h] [bp+0h]@1
  void *ptr; // [sp+3Ch] [bp+4h]@2
  __int64 v74; // [sp+40h] [bp+8h]@2
  __int64 v75; // [sp+48h] [bp+10h]@2
  __int64 v76; // [sp+50h] [bp+18h]@2
  __int64 v77; // [sp+58h] [bp+20h]@2

  v8 = a1;
  v9 = a3;
  v10 = __PAIR__(a4, a2);
  *(_QWORD *)a1 = *(_DWORD *)a6;
  v11 = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(a6 + 4) = 0;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)a6 = 0;
  _aeabi_memclr8(&v72, 40);
  std::_Deque_base<ScreenEvent,std::allocator<ScreenEvent>>::_M_initialize_map((int)&v72, 0);
  _aeabi_memclr4(v8 + 8, 40);
  std::_Deque_base<ScreenEvent,std::allocator<ScreenEvent>>::_M_initialize_map(v8 + 8, 0);
  v12 = v72;
  if ( v72 )
  {
    v13 = *(_QWORD *)(v8 + 16);
    v14 = *(_QWORD *)(v8 + 24);
    v15 = v74;
    *(_QWORD *)(v8 + 24) = v75;
    *(_QWORD *)(v8 + 16) = v15;
    v74 = v13;
    v75 = v14;
    v16 = *(_QWORD *)(v8 + 32);
    v17 = *(_QWORD *)(v8 + 40);
    v18 = v76;
    *(_QWORD *)(v8 + 40) = v77;
    *(_QWORD *)(v8 + 32) = v18;
    v76 = v16;
    v77 = v17;
    v19 = *(void **)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v12;
    v72 = (int)v19;
    v20 = *(void **)(v8 + 12);
    *(_DWORD *)(v8 + 12) = ptr;
    ptr = v20;
    if ( v19 )
    {
      if ( HIDWORD(v14) < HIDWORD(v17) + 4 )
      {
        v21 = HIDWORD(v14) - 4;
        do
        {
          v22 = *(void **)(v21 + 4);
          v21 += 4;
          operator delete(v22);
        }
        while ( v21 < HIDWORD(v17) );
      }
      operator delete(v19);
    }
  }
  *(_BYTE *)(v8 + 48) = 0;
  *(_BYTE *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 76) = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 84) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 92) = 0;
  *(_DWORD *)(v8 + 96) = v10;
  *(_DWORD *)(v8 + 100) = 0;
  v23 = v8 + 100;
  *(_DWORD *)(v23 + 20) = 0;
  *(_DWORD *)(v23 + 12) = 0;
  *(_DWORD *)(v23 + 16) = 0;
  *(_DWORD *)(v23 + 4) = 0;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 24) = *(_DWORD *)HIDWORD(v10);
  v24 = *(_DWORD *)(HIDWORD(v10) + 4);
  *(_DWORD *)(v23 + 28) = v24;
  if ( v24 )
    v25 = (unsigned int *)(v24 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
    else
      ++*v25;
  v27 = *a5;
  *a5 = 0;
  *(_DWORD *)(v8 + 132) = v27;
  *(_DWORD *)(v8 + 272) = 0;
  *(_DWORD *)(v8 + 276) = 0;
  *(_DWORD *)(v8 + 280) = 0;
  *(_DWORD *)(v8 + 284) = 0;
  *(_DWORD *)(v8 + 288) = 0;
  _aeabi_memclr4(v8 + 136, 132);
  *(_DWORD *)(v8 + 280) = v8 + 272;
  *(_DWORD *)(v8 + 284) = v8 + 272;
  v28 = operator new(0x34u);
  _aeabi_memclr4(v28, 52);
  LODWORD(v29) = v28;
  ScreenRenderBatch::ScreenRenderBatch(v29);
  *(_DWORD *)(v8 + 292) = v28;
  v30 = (AnimationController *)operator new(0x18u);
  AnimationController::AnimationController(v30);
  *(_DWORD *)(v8 + 296) = v30;
  *(_DWORD *)(v8 + 308) = 0;
  *(_DWORD *)(v8 + 312) = 0;
  *(_DWORD *)(v8 + 316) = 1065353216;
  *(_DWORD *)(v8 + 320) = 0;
  LODWORD(v31) = v8 + 316;
  v32 = sub_21E6254(v31);
  *(_DWORD *)(v8 + 304) = v32;
  if ( v32 == 1 )
    v34 = (void *)(v8 + 324);
    *(_DWORD *)(v8 + 324) = 0;
  else
    if ( v32 >= 0x40000000 )
      sub_21E57F4();
    v33 = 4 * v32;
    v34 = operator new(4 * v32);
    _aeabi_memclr4(v34, v33);
  *(_DWORD *)(v8 + 300) = v34;
  *(_DWORD *)(v8 + 328) = 0;
  *(_DWORD *)(v8 + 332) = 0;
  *(_DWORD *)(v8 + 336) = 0;
  v35 = *a8;
  *a8 = 0;
  *(_DWORD *)(v8 + 344) = v35;
  v36 = operator new(0x2Cu);
  FocusManager::FocusManager((int)v36);
  *(_DWORD *)(v8 + 348) = v36;
  *(_DWORD *)(v8 + 352) = 0;
  *(_DWORD *)(v8 + 356) = 0;
  *(_DWORD *)(v8 + 368) = 0;
  *(_DWORD *)(v8 + 372) = 0;
  *(_DWORD *)(v8 + 376) = 1065353216;
  *(_DWORD *)(v8 + 380) = 0;
  LODWORD(v37) = v8 + 376;
  v38 = sub_21E6254(v37);
  *(_DWORD *)(v8 + 364) = v38;
  if ( v38 == 1 )
    v40 = (void *)(v8 + 384);
    *(_DWORD *)(v8 + 384) = 0;
    if ( v38 >= 0x40000000 )
    v39 = 4 * v38;
    v40 = operator new(4 * v38);
    _aeabi_memclr4(v40, v39);
  *(_DWORD *)(v8 + 360) = v40;
  *(_DWORD *)(v8 + 388) = 0;
  *(_DWORD *)(v8 + 392) = 0;
  *(_DWORD *)(v8 + 396) = 1050253722;
  *(_DWORD *)(v8 + 400) = 1050253722;
  *(_DWORD *)(v8 + 404) = 0;
  *(_DWORD *)(v8 + 408) = 0;
  *(_DWORD *)(v8 + 412) = 0;
  *(_DWORD *)(v8 + 416) = 0;
  *(_DWORD *)(v8 + 420) = 0;
  *(_DWORD *)(v8 + 424) = 0;
  *(_DWORD *)(v8 + 428) = 0;
  *(_DWORD *)(v8 + 432) = 0;
  *(_DWORD *)(v8 + 436) = 0;
  *(_DWORD *)(v8 + 440) = 0;
  *(_BYTE *)(v8 + 444) = 0;
  sub_21E034C((_QWORD *)(v8 + 448));
  sub_21E034C((_QWORD *)(v8 + 456));
  *(_DWORD *)(v8 + 464) = 0;
  *(_DWORD *)(v8 + 468) = 0;
  *(_DWORD *)(v8 + 472) = 1028443341;
  *(_BYTE *)(v8 + 482) = 0;
  *(_WORD *)(v8 + 480) = 0;
  *(_DWORD *)(v8 + 476) = 0;
  *(_DWORD *)(v8 + 484) = v9;
  RectangleArea::RectangleArea((RectangleArea *)(v8 + 488));
  *(_DWORD *)(v8 + 504) = a7;
  *(_BYTE *)(v8 + 508) = 1;
  *(_DWORD *)(v8 + 512) = 0;
  *(_DWORD *)(v8 + 516) = 0;
  *(_DWORD *)(v8 + 520) = 0;
  v41 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v71, "button.menu_up");
  *(_DWORD *)v23 = NameRegistry::getNameId(v41, (int **)&v71);
  v42 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v71 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v70, "button.menu_down");
  *(_DWORD *)(v8 + 104) = NameRegistry::getNameId(v43, (int **)&v70);
  v44 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v70 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v69, "button.menu_left");
  *(_DWORD *)(v8 + 108) = NameRegistry::getNameId(v45, (int **)&v69);
  v46 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v69 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v68, "button.menu_right");
  *(_DWORD *)(v8 + 112) = NameRegistry::getNameId(v47, (int **)&v68);
  v48 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v68 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v67, "button.menu_tab_left");
  *(_DWORD *)(v8 + 116) = NameRegistry::getNameId(v49, (int **)&v67);
  v50 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v67 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = *(unsigned __int64 **)(v8 + 96);
  sub_21E94B4((void **)&v66, "button.menu_tab_right");
  *(_DWORD *)(v8 + 120) = NameRegistry::getNameId(v51, (int **)&v66);
  v52 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v66 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  (*(void (**)(void))(**(_DWORD **)(v8 + 124) + 64))();
  ScreenView::_setupControlFactoryCallbacks((ScreenView *)v8);
  ScreenView::_passViewCommand((ScreenView *)v8);
  ScreenView::_initSelectedControl((ScreenView *)v8);
  return v8;
}


int __fastcall ScreenView::_adjustFocusedControlToScrollRegion(ScreenView *this)
{
  ScreenView *v1; // r4@1
  int v2; // r10@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  UIControl *v9; // r5@11
  int result; // r0@13
  int *v11; // r6@13
  int *v12; // r7@13
  int v13; // r5@14
  __int64 v14; // kr10_8@15
  int v15; // r8@15
  unsigned int *v16; // r1@16
  unsigned int v17; // r0@18
  unsigned int *v18; // r4@22
  unsigned int v19; // r0@24
  UIControl *v21; // r0@37
  UIControl *v22; // r5@38
  UIControl *v23; // r4@41
  char v24; // r0@41
  unsigned __int16 v25; // r0@43
  int v26; // r5@44
  int v27; // r4@46
  unsigned int *v28; // r0@48
  unsigned int v29; // r1@50
  unsigned int *v30; // r1@55
  unsigned int v31; // r0@57
  unsigned int *v32; // r7@61
  unsigned int v33; // r0@63
  __int64 v34; // r0@69
  int v35; // r4@69
  unsigned int *v36; // r1@70
  unsigned int v37; // r0@72
  unsigned int *v38; // r7@76
  unsigned int v39; // r0@78
  int v40; // r4@83
  unsigned int *v41; // r1@84
  unsigned int v42; // r0@86
  unsigned int *v43; // r7@90
  unsigned int v44; // r0@92
  int v45; // r6@99
  unsigned int *v53; // r3@110
  unsigned int v54; // r1@112
  unsigned int *v55; // r3@118
  unsigned int v56; // r1@120
  int v57; // r5@123
  unsigned int *v58; // r1@124
  unsigned int *v59; // r4@130
  unsigned int *v60; // r1@138
  unsigned int *v61; // r4@144
  int v62; // r5@151
  unsigned int *v63; // r1@152
  unsigned int *v64; // r4@158
  unsigned int *v65; // r1@166
  unsigned int *v66; // r4@172
  int v67; // r4@181
  unsigned int *v68; // r1@182
  unsigned int v69; // r0@184
  unsigned int *v70; // r5@188
  unsigned int v71; // r0@190
  unsigned int *v72; // r1@194
  unsigned int v73; // r0@196
  int v74; // [sp+8h] [bp-68h]@38
  UIControl *v75; // [sp+Ch] [bp-64h]@14
  int v76; // [sp+10h] [bp-60h]@13
  UIControl *v77; // [sp+1Ch] [bp-54h]@117
  int v78; // [sp+20h] [bp-50h]@117
  UIControl *v79; // [sp+24h] [bp-4Ch]@109
  int v80; // [sp+28h] [bp-48h]@109
  char v81; // [sp+2Ch] [bp-44h]@69
  int v82; // [sp+30h] [bp-40h]@69
  UIControl *v83; // [sp+34h] [bp-3Ch]@37
  int v84; // [sp+38h] [bp-38h]@46
  char v85; // [sp+3Ch] [bp-34h]@15
  int v86; // [sp+40h] [bp-30h]@15
  int v87; // [sp+44h] [bp-2Ch]@13
  int v88; // [sp+48h] [bp-28h]@151

  v1 = this;
  v2 = *((_DWORD *)this + 89);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = (UIControl *)(*(_QWORD *)((char *)v1 + 348) >> 32);
  if ( v8 )
    v9 = 0;
  result = FocusManager::getCurrentModalRoot((FocusManager *)&v87, *(_QWORD *)((char *)v1 + 348));
  v11 = (int *)(*((_QWORD *)v1 + 20) >> 32);
  v12 = (int *)*((_QWORD *)v1 + 20);
  v76 = (int)v1;
  if ( v12 != v11 )
    v75 = v9;
    v13 = 0;
    do
      UIControl::getModalAncestor((UIControl *)&v85, *v12);
      v14 = *(_QWORD *)&v85;
      v15 = v87;
      if ( v86 )
        v16 = (unsigned int *)(v86 + 4);
        if ( &pthread_create )
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(HIDWORD(v14) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 8))(HIDWORD(v14));
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 12))(HIDWORD(v14));
      result = 0;
      if ( (_DWORD)v14 == v15 )
        result = 1;
      _ZF = (_DWORD)v14 == v15;
      v13 |= result;
      if ( (_DWORD)v14 != v15 )
        v12 += 2;
        _ZF = v12 == v11;
    while ( !_ZF );
    if ( v75 )
      result = v13 ^ 1;
      if ( !((v13 ^ 1) & 1) )
        UIControl::getParent((UIControl *)&v83, (int)v75);
        v21 = v83;
        if ( !v83 )
          result = (int)&v84;
          v45 = 0;
          goto LABEL_123;
        v22 = 0;
        v74 = 0;
        while ( !UIControl::getClipsChildren(v21) )
          if ( !v22 )
            v23 = v83;
            v24 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
            if ( !(v24 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
            {
              v25 = typeid_t<UIComponent>::count[0]++;
              type_id<UIComponent,GridComponent>(void)::id[0] = v25;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
            }
            v26 = type_id<UIComponent,GridComponent>(void)::id[0];
            if ( UIControl::_hasComponent(v23, type_id<UIComponent,GridComponent>(void)::id[0]) == 1
              && *(_DWORD *)(*((_DWORD *)v23 + 27) + 4 * UIControl::_getComponentIndex(v23, v26)) )
              v27 = v84;
              v22 = v83;
              if ( v84 != v74 )
              {
                if ( v84 )
                {
                  v28 = (unsigned int *)(v84 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v29 = __ldrex(v28);
                    while ( __strex(v29 + 1, v28) );
                  }
                  else
                    ++*v28;
                }
                if ( v74 )
                  v30 = (unsigned int *)(v74 + 4);
                      v31 = __ldrex(v30);
                    while ( __strex(v31 - 1, v30) );
                    v31 = (*v30)--;
                  if ( v31 == 1 )
                    v32 = (unsigned int *)(v74 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v33 = __ldrex(v32);
                      while ( __strex(v33 - 1, v32) );
                    }
                    else
                      v33 = (*v32)--;
                    if ( v33 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v74 + 12))();
                v74 = v27;
              }
            else
              v22 = 0;
          UIControl::getParent((UIControl *)&v81, (int)v83);
          v34 = *(_QWORD *)&v81;
          *(_DWORD *)&v81 = 0;
          v82 = 0;
          v83 = (UIControl *)v34;
          v35 = v84;
          v84 = HIDWORD(v34);
          if ( v35 )
            v36 = (unsigned int *)(v35 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 == 1 )
              v38 = (unsigned int *)(v35 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
              if ( &pthread_create )
                __dmb();
                do
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
              else
                v39 = (*v38)--;
              if ( v39 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
          v40 = v82;
          if ( v82 )
            v41 = (unsigned int *)(v82 + 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 == 1 )
              v43 = (unsigned int *)(v40 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
                  v44 = __ldrex(v43);
                while ( __strex(v44 - 1, v43) );
                v44 = (*v43)--;
              if ( v44 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
          v21 = v83;
          if ( !v83 )
            goto LABEL_122;
        if ( !v83 || UIControl::getClipsChildren(v83) != 1 )
LABEL_122:
          v45 = v74;
        _R9 = UIControl::getPosition(v83);
        _R5 = UIControl::getPosition(v75);
        _R4 = UIControl::getSize(v83);
        _R0 = UIControl::getSize(v75);
        __asm
          VLDR            S0, [R9,#4]
          VLDR            S2, [R5,#4]
          VLDR            S4, [R4,#4]
          VSUB.F32        S0, S2, S0
          VLDR            S2, [R0,#4]
          VLDR            S6, =0.0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
          VADD.F32        S2, S0, S2
          VSUB.F32        S2, S2, S4
          VMOV.F32        S4, S6
          VCMPE.F32       S2, #0.0
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S4, S0 }
          VABS.F32        S4, S4
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S6, S2 }
          VLDR            S2, =0.1
          VABS.F32        S0, S6
          VCMPE.F32       S4, S2
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          goto LABEL_210;
          VCMPE.F32       S0, S2
          v79 = v83;
          v80 = v84;
          if ( v84 )
            v53 = (unsigned int *)(v84 + 4);
                v54 = __ldrex(v53);
              while ( __strex(v54 + 1, v53) );
              ++*v53;
          ScreenView::_findAndSetFocusOnFocusableControlNotClippedVertical(v76, &v79, 1);
          v67 = v80;
          if ( !v80 )
            goto LABEL_207;
          v68 = (unsigned int *)(v80 + 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 != 1 )
          v70 = (unsigned int *)(v67 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
LABEL_205:
            if ( v71 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
LABEL_207:
            result = (int)&v84;
LABEL_123:
            v57 = *(_DWORD *)result;
            if ( *(_DWORD *)result )
              v58 = (unsigned int *)(v57 + 4);
                  result = __ldrex(v58);
                while ( __strex(result - 1, v58) );
                result = (*v58)--;
              if ( result == 1 )
                v59 = (unsigned int *)(v57 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
                if ( &pthread_create )
                  __dmb();
                  do
                    result = __ldrex(v59);
                  while ( __strex(result - 1, v59) );
                else
                  result = (*v59)--;
                if ( result == 1 )
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
            if ( v45 )
              v60 = (unsigned int *)(v45 + 4);
                  result = __ldrex(v60);
                while ( __strex(result - 1, v60) );
                result = (*v60)--;
                v61 = (unsigned int *)(v45 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 8))(v45);
                    result = __ldrex(v61);
                  while ( __strex(result - 1, v61) );
                  result = (*v61)--;
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v45 + 12))(v45);
            goto LABEL_151;
LABEL_210:
          __asm
            VCMPE.F32       S4, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF) )
            VCMPE.F32       S0, S2
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v77 = v83;
          v78 = v84;
            v55 = (unsigned int *)(v84 + 4);
                v56 = __ldrex(v55);
              while ( __strex(v56 + 1, v55) );
              ++*v55;
          ScreenView::_findAndSetFocusOnFocusableControlNotClippedVertical(v76, &v77, 0);
          v67 = v78;
          if ( !v78 )
          v72 = (unsigned int *)(v78 + 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 != 1 )
            goto LABEL_205;
        v71 = (*v70)--;
        goto LABEL_205;
LABEL_151:
  v62 = v88;
  if ( v88 )
    v63 = (unsigned int *)(v88 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v63);
      while ( __strex(result - 1, v63) );
    else
      result = (*v63)--;
    if ( result == 1 )
      v64 = (unsigned int *)(v62 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v64);
        while ( __strex(result - 1, v64) );
        result = (*v64)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
    v65 = (unsigned int *)(v2 + 4);
        result = __ldrex(v65);
      while ( __strex(result - 1, v65) );
      result = (*v65)--;
      v66 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v66);
        while ( __strex(result - 1, v66) );
        result = (*v66)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall ScreenView::_selectNextFocusObject(int a1)
{
  ScreenView::_selectNextFocusObject(a1);
}


void __fastcall ScreenView::handleRawInputEvent(ScreenView *a1, int a2, char a3, char a4, char a5)
{
  ScreenView *v5; // r4@1
  char v6; // r5@1
  char v7; // r6@1
  int v8; // r7@1
  __int64 v9; // r0@1
  __int64 v10; // r4@1
  int v11; // r0@2
  unsigned int *v12; // r2@3
  unsigned int v13; // r1@5
  signed int v14; // [sp+0h] [bp-50h]@1
  int v15; // [sp+4h] [bp-4Ch]@1
  char v16; // [sp+8h] [bp-48h]@1
  char v17; // [sp+9h] [bp-47h]@1
  char v18; // [sp+Ah] [bp-46h]@1
  void *ptr; // [sp+20h] [bp-30h]@1
  __int64 v20; // [sp+2Ch] [bp-24h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  ScreenEvent::ScreenEvent((ScreenEvent *)&v14);
  v14 = 15;
  v15 = v8;
  v16 = v7;
  v17 = v6;
  v18 = a5;
  LODWORD(v9) = &ptr;
  ScreenInputContext::enqueueEvent(v9);
  ScreenView::_processEvents(v5, (ScreenInputContext *)&ptr);
  v10 = v20;
  if ( (_DWORD)v20 != HIDWORD(v20) )
  {
    do
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (__cdecl **)(int, _DWORD, unsigned int *))(*(_DWORD *)v11 + 12))(
            v11,
            *(_DWORD *)(*(_DWORD *)v11 + 12),
            v12);
      }
      LODWORD(v10) = v10 + 12;
    }
    while ( (_DWORD)v10 != HIDWORD(v10) );
    LODWORD(v10) = v20;
  }
  if ( (_DWORD)v10 )
    operator delete((void *)v10);
  if ( ptr )
    operator delete(ptr);
}


void __fastcall ScreenView::setupAndRender(ScreenView *a1, int a2)
{
  ScreenView::setupAndRender(a1, a2);
}


int __fastcall ScreenView::_deselectControl(ScreenView *this, int a2, unsigned int *a3)
{
  int v3; // r8@0
  ScreenView *v4; // r5@1
  int v5; // r4@1
  unsigned int *v6; // r6@3
  int v7; // r0@3
  bool v8; // zf@8
  char v9; // r0@11
  int v10; // r7@14
  TextEditComponent *v11; // r7@15
  __int16 v12; // r8@17
  int v13; // r9@17
  int v14; // r0@17
  int v15; // r0@17
  unsigned int v16; // r1@20
  unsigned int v17; // r0@27
  unsigned int *v18; // r6@31
  unsigned int v19; // r0@33
  char *v20; // r0@38
  int result; // r0@38
  AppPlatform **v22; // r0@40

  v4 = this;
  v5 = *((_DWORD *)this + 83);
  if ( v5 && *(_DWORD *)(v5 + 4) >= 1 )
  {
    v6 = (unsigned int *)(v5 + 4);
    v7 = *(_DWORD *)(v5 + 4);
    while ( v7 )
    {
      __dmb();
      a2 = __ldrex(v6);
      if ( a2 == v7 )
      {
        a3 = (unsigned int *)__strex(v7 + 1, v6);
        v7 = a2;
        if ( !a3 )
        {
          __dmb();
          v8 = *v6 == 0;
          if ( *v6 )
          {
            v3 = *((_DWORD *)v4 + 82);
            v8 = v3 == 0;
          }
          if ( !v8 )
            v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
            __dmb();
            if ( !(v9 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
            {
              type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
            }
            v10 = type_id<UIComponent,TextEditComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
              v11 = *(TextEditComponent **)(*(_DWORD *)(v3 + 108)
                                          + 4 * UIControl::_getComponentIndex((UIControl *)v3, v10));
              if ( v11 )
              {
                (*(void (**)(void))(**((_DWORD **)v4 + 121) + 44))();
                if ( TextEditComponent::canBeDeselected(v11) == 1 )
                {
                  TextEditComponent::deselectControl(v11);
                  UIControl::setSelected((UIControl *)v3, 0);
                  v12 = TextEditComponent::getTextEditComponentId(v11);
                  v13 = TextEditComponent::getCollectionIndex(v11);
                  v14 = TextEditComponent::getLabelPropertyBag(v11);
                  ScreenView::_fireTextChangedEvent((int)v4, 1, 0, v12, v13, v14);
                  *((_DWORD *)v4 + 82) = 0;
                  v15 = *((_DWORD *)v4 + 83);
                  *((_DWORD *)v4 + 83) = 0;
                  if ( v15 )
                  {
                    a3 = (unsigned int *)(v15 + 8);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v16 = __ldrex(a3);
                      while ( __strex(v16 - 1, a3) );
                    }
                    else
                      v16 = (*a3)--;
                    if ( v16 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v15 + 12))();
                  }
                }
              }
          if ( &pthread_create )
            do
              v17 = __ldrex(v6);
              a2 = v17 - 1;
              a3 = (unsigned int *)__strex(v17 - 1, v6);
            while ( a3 );
          else
            v17 = *v6;
            a2 = *v6 - 1;
            *v6 = a2;
          if ( v17 == 1 )
            v18 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
                v19 = __ldrex(v18);
                a2 = v19 - 1;
                a3 = (unsigned int *)__strex(v19 - 1, v18);
              while ( a3 );
            else
              v19 = *v18;
              a2 = *v18 - 1;
              *v18 = a2;
            if ( v19 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          break;
        }
      }
      else
        __clrex();
    }
  }
  *((_WORD *)v4 + 240) = 256;
  v20 = ScreenView::_updateKeyboardVisibility(v4, a2, a3);
  result = AppPlatform::isInitialized((AppPlatform *)v20);
  if ( result == 1 )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v22 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v22 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    result = AppPlatform::restartRequested(*v22);
    if ( !result )
      result = (*(int (**)(void))(**((_DWORD **)v4 + 31) + 64))();
  return result;
}


VisualTree *__fastcall ScreenView::_findAndSetFocusOnFocusableControlNotClippedVertical(int a1, UIControl **a2, int a3)
{
  UIControl **v3; // r4@1
  int v4; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r5@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r4@8
  unsigned int v12; // r0@10
  void *v13; // r0@15
  __int64 v14; // r1@15
  __int64 v15; // r8@17
  int v16; // r11@18
  UIControl *v17; // r6@18
  int v26; // r4@25
  unsigned int *v27; // r0@27
  unsigned int v28; // r1@29
  unsigned int *v29; // r0@33
  unsigned int v30; // r1@35
  unsigned int *v32; // r0@41
  unsigned int v33; // r1@43
  unsigned int *v34; // r1@47
  unsigned int v35; // r0@49
  unsigned int *v36; // r5@53
  unsigned int v37; // r0@55
  unsigned int *v38; // r1@59
  unsigned int v39; // r0@61
  unsigned int *v40; // r1@71
  unsigned int v41; // r0@73
  unsigned int *v44; // r1@89
  unsigned int v45; // r0@91
  unsigned int *v46; // r4@95
  unsigned int v47; // r0@97
  int v48; // r4@102
  int v49; // r6@102
  int v50; // r7@103
  unsigned int *v51; // r1@104
  unsigned int v52; // r0@106
  unsigned int *v53; // r5@110
  unsigned int v54; // r0@112
  int v56; // [sp+4h] [bp-ECh]@18
  int v57; // [sp+Ch] [bp-E4h]@1
  char *v58; // [sp+10h] [bp-E0h]@1
  float v59; // [sp+14h] [bp-DCh]@87
  void *v60; // [sp+1Ch] [bp-D4h]@15
  __int64 v61; // [sp+24h] [bp-CCh]@15
  int v62; // [sp+2Ch] [bp-C4h]@15
  int v63; // [sp+30h] [bp-C0h]@17
  UIControl *v64; // [sp+38h] [bp-B8h]@1
  int v65; // [sp+3Ch] [bp-B4h]@1
  char v66; // [sp+40h] [bp-B0h]@1

  v3 = a2;
  v4 = a1;
  v57 = a3;
  _R7 = UIControl::getPosition(*a2);
  v58 = UIControl::getSize(*v3);
  v6 = VisualTree::VisualTree((VisualTree *)&v66);
  v64 = *v3;
  v7 = (int)v3[1];
  v3[1] = 0;
  v65 = v7;
  *v3 = 0;
  VisualTree::initRootControl(v6, (int)&v64);
  v8 = v65;
  if ( v65 )
  {
    v9 = (unsigned int *)(v65 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v13 = operator new(1u);
  LODWORD(v14) = sub_130B134;
  v60 = v13;
  HIDWORD(v14) = sub_130B098;
  v61 = v14;
  VisualTree::getVisibleControls((int)&v62, (int)&v66, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  v15 = *(_QWORD *)&v62;
  if ( v62 != v63 )
    v16 = 0;
    v56 = v4;
    v17 = 0;
    while ( 1 )
      _R4 = UIControl::getPosition(*(UIControl **)v15);
      _R5 = UIControl::getSize(*(UIControl **)v15);
      __asm
        VLDR            S2, [R7,#4]
        VLDR            S0, [R4,#4]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        goto LABEL_85;
      _R0 = v58;
        VLDR            S6, [R5,#4]
        VLDR            S4, [R0,#4]
        VADD.F32        S0, S6, S0
        VADD.F32        S2, S4, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      if ( v17 )
        break;
      v26 = *(_QWORD *)v15 >> 32;
      v17 = (UIControl *)*(_QWORD *)v15;
      if ( v26 != v16 )
        if ( v26 )
        {
          v29 = (unsigned int *)(v26 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 + 1, v29) );
          }
          else
            ++*v29;
        }
        if ( v16 )
          v34 = (unsigned int *)(v16 + 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 == 1 )
            v36 = (unsigned int *)(v16 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            if ( &pthread_create )
            {
              __dmb();
              do
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              goto LABEL_82;
            }
LABEL_81:
            v37 = (*v36)--;
LABEL_82:
            if ( v37 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
LABEL_84:
        v16 = v26;
LABEL_85:
      LODWORD(v15) = v15 + 8;
      if ( (_DWORD)v15 == HIDWORD(v15) )
        if ( v17 )
          _R0 = UIControl::getPosition(v17);
          __asm
            VLDR            S16, [R0]
            VLDR            S18, [R0,#4]
          _R0 = UIControl::getSize(v17);
            VMOV.F32        S0, #0.5
            VLDR            S2, [R0]
            VLDR            S4, [R0,#4]
            VMUL.F32        S2, S2, S0
            VMUL.F32        S0, S4, S0
            VADD.F32        S2, S2, S16
            VADD.F32        S0, S0, S18
            VSTR            S2, [SP,#0xF0+var_DC]
            VSTR            S0, [SP,#0xF0+var_D8]
          ScreenView::_handlePointerLocation(v56, (int)&v59, 0, 1);
          v44 = (unsigned int *)(v16 + 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 == 1 )
            v46 = (unsigned int *)(v16 + 8);
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
            else
              v47 = (*v46)--;
            if ( v47 == 1 )
        goto LABEL_102;
    _R10 = *((_DWORD *)UIControl::getPosition(v17) + 1);
    if ( v57 == 1 )
        VMOV            S2, R10
        VCMPE.F32       S2, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      if ( v26 == v16 )
      if ( v26 )
        v27 = (unsigned int *)(v26 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 + 1, v27) );
        else
          ++*v27;
      if ( v16 )
        v38 = (unsigned int *)(v16 + 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          v36 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 8))(v16);
          if ( !&pthread_create )
            goto LABEL_81;
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          goto LABEL_82;
      _R0 = UIControl::getSize(v17);
        VMOV            S4, R10
        VLDR            S2, [R5,#4]
        VLDR            S6, [R0,#4]
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S6, S4
      if ( !(_NF ^ _VF) )
        v32 = (unsigned int *)(v26 + 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 + 1, v32) );
          ++*v32;
        v40 = (unsigned int *)(v16 + 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 == 1 )
    goto LABEL_84;
LABEL_102:
  v49 = v63;
  v48 = v62;
    do
      v50 = *(_DWORD *)(v48 + 4);
      if ( v50 )
        v51 = (unsigned int *)(v50 + 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 == 1 )
          v53 = (unsigned int *)(v50 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
      v48 += 8;
    while ( v48 != v49 );
    v48 = v62;
  if ( v48 )
    operator delete((void *)v48);
  return VisualTree::~VisualTree((VisualTree *)&v66);
}


void __fastcall ScreenView::handleButtonEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  int v15; // r5@0
  unsigned int v16; // r7@0
  int v17; // r6@1
  char v18; // r0@1
  int v19; // r11@1
  int v20; // r0@3
  signed int v21; // r0@4
  signed int v22; // r0@6
  ScreenView *v23; // r9@6
  int v24; // r8@6
  unsigned int v25; // r1@8
  unsigned int *v26; // r0@8
  unsigned int v27; // r2@11
  unsigned int v28; // r3@12
  unsigned int v29; // r0@13
  bool v30; // zf@13
  char v31; // r0@16
  int v32; // r6@19
  TextEditComponent *v33; // r0@20
  unsigned int v34; // r1@24
  unsigned int *v35; // r0@24
  unsigned int v36; // r2@27
  unsigned int v37; // r3@28
  unsigned int v38; // r1@29
  signed int v39; // r0@29
  char v40; // r0@36
  int v41; // r5@39
  TextEditComponent *v42; // r0@40
  unsigned __int64 *v43; // r5@42
  int v44; // r5@42
  void *v45; // r0@42
  unsigned __int64 *v46; // r6@43
  int v47; // r6@43
  void *v48; // r0@43
  bool v49; // zf@44
  signed int v50; // r4@47
  char v51; // r0@48
  int v52; // r5@51
  InputComponent *v53; // r0@52
  int v54; // r1@53
  unsigned int *v55; // r2@53
  unsigned int *v56; // r1@57
  unsigned int v57; // r0@59
  unsigned int *v58; // r1@66
  unsigned int v59; // r0@68
  unsigned int *v60; // r5@72
  unsigned int v61; // r0@74
  __int64 v62; // r8@88
  unsigned int v63; // r10@88
  unsigned int *v64; // r0@88
  unsigned int *v65; // r5@89
  unsigned __int16 v66; // r2@89
  _DWORD *v67; // r4@91
  bool v68; // zf@94
  int v69; // r3@97
  int v70; // r4@97
  char v71; // r11@98
  int v72; // r5@99
  unsigned int v73; // r0@100
  unsigned int *v74; // r10@100
  unsigned int v75; // r1@103
  unsigned int v76; // r2@104
  int v77; // r9@106
  char v78; // r0@107
  unsigned __int16 v79; // r0@109
  int v80; // r8@110
  int v81; // r0@111
  UIComponent *v82; // r0@111
  unsigned int v83; // r0@118
  int v84; // r9@121
  unsigned int *v85; // r6@122
  unsigned int v86; // r0@124
  int v87; // r10@131
  UIControl **v88; // r4@133
  UIControl **v89; // r8@133
  UIControl *v90; // r5@135
  char v91; // r0@135
  int v92; // r6@138
  UIComponent *v93; // r9@139
  int v94; // r5@141
  unsigned int *v95; // r0@143
  unsigned int v96; // r1@143
  unsigned int v97; // r2@146
  unsigned int v98; // r3@147
  UIControl *v99; // r12@148
  UIControl *v100; // r6@148
  unsigned int v101; // r1@153
  unsigned int *v102; // r6@159
  unsigned int v103; // r0@161
  void (__fastcall *v104)(int); // r1@165
  int v105; // r0@165
  UIControl *v106; // r5@165
  unsigned int v107; // r6@168
  __int64 v108; // kr10_8@168
  int v109; // r0@168
  int v110; // r11@171
  int *i; // r4@171
  int *v112; // r10@171
  __int64 v113; // kr18_8@171
  int v114; // r7@172
  char v115; // r0@172
  int v116; // r6@175
  UIComponent *v117; // r0@176
  __int64 v118; // kr20_8@177
  __int64 v119; // r4@180
  int v120; // r0@181
  unsigned int *v121; // r2@182
  unsigned int v122; // r1@184
  UIControl **v123; // r1@196 OVERLAPPED
  UIControl **v124; // r2@196 OVERLAPPED
  UIControl *v125; // r0@197
  UIControl *v126; // t1@198
  int v127; // r1@202
  _DWORD *v128; // r0@202
  _DWORD *v129; // r2@203
  unsigned int *v130; // r2@209
  signed int v131; // r1@211
  unsigned int *v132; // r2@213
  signed int v133; // r1@215
  __int64 *v134; // [sp+18h] [bp-78h]@98
  int v135; // [sp+1Ch] [bp-74h]@98
  UIControl *v136; // [sp+20h] [bp-70h]@159
  UIControl *v137; // [sp+24h] [bp-6Ch]@159
  int v138; // [sp+28h] [bp-68h]@97
  __int64 *v139; // [sp+2Ch] [bp-64h]@134
  int v140; // [sp+34h] [bp-5Ch]@87
  signed int v141; // [sp+38h] [bp-58h]@87
  int v142; // [sp+38h] [bp-58h]@89
  unsigned int v143; // [sp+3Ch] [bp-54h]@1
  int v144; // [sp+44h] [bp-4Ch]@43
  int v145; // [sp+4Ch] [bp-44h]@42
  void *ptr; // [sp+50h] [bp-40h]@3
  __int64 v147; // [sp+5Ch] [bp-34h]@180

  v17 = a1;
  v18 = *(_BYTE *)(a1 + 48);
  v19 = a3;
  v143 = a2;
  if ( a4 )
    v18 = a4;
  *(_BYTE *)(v17 + 48) = v18;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  v20 = *(_DWORD *)(v17 + 332);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 + 4);
    if ( !v19 && v21 >= 1 )
    {
      v22 = ScreenView::_updateSelectedControl(v17, (int)&ptr, v143, 0);
      v23 = (ScreenView *)v17;
      v24 = *(_DWORD *)(v17 + 332);
      if ( v22 != 1 )
      {
        if ( v24 )
        {
          v34 = *(_DWORD *)(v24 + 4);
          v35 = (unsigned int *)(v24 + 4);
          while ( v34 )
          {
            __dmb();
            v36 = __ldrex(v35);
            if ( v36 == v34 )
            {
              v37 = __strex(v34 + 1, v35);
              v34 = v36;
              if ( !v37 )
              {
                __dmb();
                v38 = *v35;
                v39 = 0;
                if ( !v38 )
                  v39 = 1;
                goto LABEL_33;
              }
            }
            else
              __clrex();
          }
        }
        v39 = 1;
        v24 = 0;
LABEL_33:
        v16 = *(_DWORD *)(v17 + 328);
        if ( v39 )
          v16 = 0;
        if ( !v16 )
          goto LABEL_227;
        v40 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
        __dmb();
        if ( !(v40 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
          type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
        v41 = type_id<UIComponent,TextEditComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v16, type_id<UIComponent,TextEditComponent>(void)::id[0]) != 1 )
        v42 = *(TextEditComponent **)(*(_DWORD *)(v16 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v16, v41));
        if ( !v42 || TextEditComponent::canBeDeselected(v42) )
        v43 = *(unsigned __int64 **)(v17 + 96);
        sub_21E94B4((void **)&v145, "button.menu_cancel");
        v44 = NameRegistry::getNameId(v43, (int **)&v145);
        v45 = (void *)(v145 - 12);
        if ( (int *)(v145 - 12) != &dword_28898C0 )
          v130 = (unsigned int *)(v145 - 4);
          if ( &pthread_create )
            do
              v131 = __ldrex(v130);
            while ( __strex(v131 - 1, v130) );
          else
            v131 = (*v130)--;
          if ( v131 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        v46 = *(unsigned __int64 **)(v17 + 96);
        sub_21E94B4((void **)&v144, "button.menu_select");
        v47 = NameRegistry::getNameId(v46, (int **)&v144);
        v48 = (void *)(v144 - 12);
        if ( (int *)(v144 - 12) != &dword_28898C0 )
          v132 = (unsigned int *)(v144 - 4);
              v133 = __ldrex(v132);
            while ( __strex(v133 - 1, v132) );
            v133 = (*v132)--;
          if ( v133 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v49 = v44 == v143;
        if ( v44 != v143 )
          v49 = v47 == v143;
        if ( v49 )
LABEL_227:
          v51 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
          __dmb();
          if ( !(v51 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
            type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
          v52 = type_id<UIComponent,InputComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v16, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
            v53 = *(InputComponent **)(*(_DWORD *)(v16 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v16, v52));
            if ( v53 )
              if ( InputComponent::canHandleDeselect(v53, v143) == 1 )
                ScreenView::_deselectControl(v23, v54, v55);
          v50 = 0;
        else
          ScreenView::_processEvents(v23, (ScreenInputContext *)&ptr);
          v50 = 1;
        v17 = (int)v23;
        if ( !v24 )
          goto LABEL_85;
        v56 = (unsigned int *)(v24 + 4);
        if ( &pthread_create )
          do
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 != 1 )
        v60 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
LABEL_83:
          if ( v61 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
LABEL_85:
          if ( v50 )
            goto LABEL_180;
          goto LABEL_86;
LABEL_82:
        v61 = (*v60)--;
        goto LABEL_83;
      }
      if ( v24 )
        v25 = *(_DWORD *)(v24 + 4);
        v26 = (unsigned int *)(v24 + 4);
        do
          while ( 1 )
            if ( !v25 )
              v24 = 0;
              goto LABEL_63;
            v27 = __ldrex(v26);
            if ( v27 == v25 )
              break;
            __clrex();
            v25 = v27;
          v28 = __strex(v25 + 1, v26);
          v25 = v27;
        while ( v28 );
        v29 = *v26;
        v30 = v29 == 0;
        if ( v29 )
          v15 = *(_DWORD *)(v17 + 328);
          v30 = v15 == 0;
        if ( !v30 )
          v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
          if ( !(v31 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
            v16 = typeid_t<UIComponent>::count[0];
            type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
          v32 = type_id<UIComponent,TextEditComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v15, type_id<UIComponent,TextEditComponent>(void)::id[0]) != 1
            || (v33 = *(TextEditComponent **)(*(_DWORD *)(v15 + 108)
                                            + 4 * UIControl::_getComponentIndex((UIControl *)v15, v32))) == 0
            || TextEditComponent::canBeDeselected(v33) == 1 )
            ScreenView::_processEvents(v23, (ScreenInputContext *)&ptr);
            goto LABEL_64;
LABEL_65:
          v17 = (int)v23;
          if ( !v24 )
            goto LABEL_85;
          v58 = (unsigned int *)(v24 + 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 != 1 )
          v60 = (unsigned int *)(v24 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            goto LABEL_83;
          goto LABEL_82;
      else
LABEL_63:
      ScreenView::_processEvents((ScreenView *)v17, (ScreenInputContext *)&ptr);
LABEL_64:
      v50 = 1;
      goto LABEL_65;
    }
  }
LABEL_86:
  if ( v19 )
    v140 = v19;
    v141 = 0;
  else
    v62 = *(_QWORD *)(v17 + 300);
    v63 = v143 % (unsigned int)(*(_QWORD *)(v17 + 300) >> 32);
    v64 = *(unsigned int **)(v62 + 4 * v63);
    if ( !v64 )
      goto LABEL_132;
    v65 = (unsigned int *)*v64;
    v142 = v17 + 300;
    v66 = *(_WORD *)(*v64 + 4);
    while ( v66 != (unsigned __int16)v143 )
      v67 = (_DWORD *)*v65;
      if ( *v65 )
        v16 = *((_WORD *)v67 + 2);
        v64 = v65;
        v66 = *((_WORD *)v67 + 2);
        v65 = (unsigned int *)*v65;
        if ( v16 % HIDWORD(v62) == v63 )
          continue;
    v68 = v64 == 0;
    if ( v64 )
      v16 = *v64;
      v68 = *v64 == 0;
    if ( v68 )
LABEL_132:
      v140 = 0;
      v141 = 1;
    else
      v69 = *(_QWORD *)(v16 + 8) >> 32;
      v70 = *(_QWORD *)(v16 + 8);
      v138 = v69;
      if ( v70 == v69 )
        v87 = v17;
        v71 = 0;
        v134 = (__int64 *)(v17 + 436);
        v135 = v17;
          v72 = *(_DWORD *)(v70 + 4);
          if ( v72 )
            v73 = *(_DWORD *)(v72 + 4);
            v74 = (unsigned int *)(v72 + 4);
            while ( v73 )
              __dmb();
              v75 = __ldrex(v74);
              if ( v75 == v73 )
                v76 = __strex(v73 + 1, v74);
                v73 = v75;
                if ( !v76 )
                {
                  __dmb();
                  if ( *v74 )
                  {
                    v77 = *(_DWORD *)v70;
                    if ( *(_DWORD *)v70 )
                    {
                      v78 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
                      __dmb();
                      if ( !(v78 & 1)
                        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
                      {
                        v79 = typeid_t<UIComponent>::count[0]++;
                        type_id<UIComponent,InputComponent>(void)::id[0] = v79;
                        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
                      }
                      v80 = type_id<UIComponent,InputComponent>(void)::id[0];
                      if ( UIControl::_hasComponent((UIControl *)v77, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
                        v81 = UIControl::_getComponentIndex((UIControl *)v77, v80);
                        v69 = v138;
                        v82 = *(UIComponent **)(*(_DWORD *)(v77 + 108) + 4 * v81);
                        if ( v82 )
                        {
                          v71 = InputComponent::handleButtonEvent(
                                  v82,
                                  *(_DWORD *)(v135 + 132),
                                  *(_DWORD *)(v135 + 296),
                                  (int)&ptr,
                                  v143,
                                  0,
                                  v134,
                                  *(_QWORD *)(v135 + 336),
                                  *(_QWORD *)(v135 + 336) >> 32);
                          v69 = v138;
                        }
                      else
                    }
                  }
                  if ( &pthread_create )
                    __dmb();
                    do
                      v83 = __ldrex(v74);
                    while ( __strex(v83 - 1, v74) );
                  else
                    v83 = (*v74)--;
                  v84 = v69;
                  if ( v83 == 1 )
                    v85 = (unsigned int *)(v72 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
                    if ( &pthread_create )
                      do
                        v86 = __ldrex(v85);
                      while ( __strex(v86 - 1, v85) );
                    else
                      v86 = (*v85)--;
                    if ( v86 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
                  v69 = v84;
                  if ( v71 & 1 )
                    goto LABEL_131;
                  goto LABEL_130;
                }
              else
                __clrex();
          if ( v71 & 1 )
            break;
LABEL_130:
          v70 += 8;
        while ( v70 != v69 );
LABEL_131:
        v87 = v135;
        v62 = *(_QWORD *)(v135 + 300);
      v127 = (unsigned int)*(_WORD *)(v16 + 4) % HIDWORD(v62);
      v128 = *(_DWORD **)(v62 + 4 * v127);
      do
        v129 = v128;
        v128 = (_DWORD *)*v128;
      while ( v128 != (_DWORD *)v16 );
      std::_Hashtable<short,std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>,std::allocator<std::pair<short const,std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
        v142,
        v127,
        v129,
        v16);
      if ( v71 & 1 )
        goto LABEL_171;
      v17 = v87;
  v89 = (UIControl **)(*(_QWORD *)(v17 + 148) >> 32);
  v88 = (UIControl **)*(_QWORD *)(v17 + 148);
  v87 = v17;
  if ( v88 == v89 )
    goto LABEL_171;
  v139 = (__int64 *)(v17 + 436);
  while ( 1 )
    v90 = *v88;
    v91 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
    __dmb();
    if ( !(v91 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
      type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
    v92 = type_id<UIComponent,InputComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v90, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
      v93 = *(UIComponent **)(*((_DWORD *)v90 + 27) + 4 * UIControl::_getComponentIndex(v90, v92));
      if ( v93 )
        break;
LABEL_170:
    v88 += 2;
    if ( v88 == v89 )
      goto LABEL_171;
  if ( v141 != 1 )
    goto LABEL_168;
  v94 = *(_DWORD *)(v87 + 332);
  if ( !v94 || *(_DWORD *)(v94 + 4) < 1 )
  v95 = (unsigned int *)(v94 + 4);
  v96 = *(_DWORD *)(v94 + 4);
  do
    while ( 1 )
      if ( !v96 )
        if ( *v88 )
          goto LABEL_168;
        goto LABEL_170;
      __dmb();
      v97 = __ldrex(v95);
      if ( v97 == v96 )
      __clrex();
      v96 = v97;
    v98 = __strex(v96 + 1, v95);
    v96 = v97;
  while ( v98 );
  __dmb();
  v99 = *v88;
  v100 = *(UIControl **)(v87 + 328);
  if ( !*(_DWORD *)(v94 + 4) )
    v100 = *(UIControl **)(v94 + 4);
  if ( v94 )
    if ( &pthread_create )
        v101 = __ldrex(v95);
      while ( __strex(v101 - 1, v95) );
      v101 = (*v95)--;
    if ( v101 == 1 )
      v136 = v99;
      v137 = v100;
      v102 = (unsigned int *)(v94 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v94 + 8))(v94);
      if ( &pthread_create )
        v99 = v136;
          v103 = __ldrex(v102);
        while ( __strex(v103 - 1, v102) );
        v103 = *v102;
        --*v102;
      v100 = v137;
      if ( v103 == 1 )
        v104 = *(void (__fastcall **)(int))(*(_DWORD *)v94 + 12);
        v105 = v94;
        v106 = v99;
        v104(v105);
        if ( v106 != v137 )
  if ( v99 == v100 )
    goto LABEL_170;
LABEL_168:
  v107 = UIControl::getSelected(*v88);
  v108 = *(_QWORD *)(v87 + 336);
  v109 = InputComponent::handleButtonEvent(
           v93,
           *(_DWORD *)(v87 + 132),
           *(_DWORD *)(v87 + 296),
           (int)&ptr,
           v143,
           v140,
           v139,
           *(_QWORD *)(v87 + 336),
           *(_QWORD *)(v87 + 336) >> 32);
  if ( (v141 & v109) != 1 )
    if ( v109 )
  *(_QWORD *)&v123 = *(_QWORD *)(v87 + 208);
  if ( v123 != v124 )
    v125 = *v88;
      v126 = *v123;
      v123 += 2;
      if ( v126 == v125 )
      if ( v124 == v123 )
    if ( (UIControl::getSelected(v125) ^ v107) == 1 )
      ScreenView::_selectControl((ScreenView *)v87, *v88);
LABEL_171:
  v110 = v87;
  v113 = *(_QWORD *)(v87 + 220);
  v112 = (int *)(*(_QWORD *)(v87 + 220) >> 32);
  for ( i = (int *)v113; v112 != i; i += 2 )
    v114 = *i;
    v115 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
    if ( !(v115 & 1)
    v116 = type_id<UIComponent,InputComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v114, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
      v117 = *(UIComponent **)(*(_DWORD *)(v114 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v114, v116));
      if ( v117 )
        v118 = *(_QWORD *)(v110 + 336);
        InputComponent::handleButtonEvent(
          v117,
          *(_DWORD *)(v110 + 132),
          *(_DWORD *)(v110 + 296),
          (int)&ptr,
          v143,
          v140,
          (__int64 *)(v110 + 436),
          *(_QWORD *)(v110 + 336),
          *(_QWORD *)(v110 + 336) >> 32);
  ScreenView::_prepResevedButtonUpLists((ScreenView *)v110, (ScreenInputContext *)&ptr);
  ScreenView::_processEvents((ScreenView *)v110, (ScreenInputContext *)&ptr);
LABEL_180:
  v119 = v147;
  if ( (_DWORD)v147 != HIDWORD(v147) )
    do
      v120 = *(_DWORD *)(v119 + 8);
      if ( v120 )
        v121 = (unsigned int *)(v120 + 8);
            v122 = __ldrex(v121);
          while ( __strex(v122 - 1, v121) );
          v122 = (*v121)--;
        if ( v122 == 1 )
          (*(void (**)(void))(*(_DWORD *)v120 + 12))();
      LODWORD(v119) = v119 + 12;
    while ( (_DWORD)v119 != HIDWORD(v119) );
    LODWORD(v119) = v147;
  if ( (_DWORD)v119 )
    operator delete((void *)v119);
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ScreenView::setSize(int result, int a2)
{
  *(_DWORD *)(result + 88) = *(_DWORD *)a2;
  *(_DWORD *)(result + 92) = *(_DWORD *)(a2 + 4);
  return result;
}


unsigned int __fastcall ScreenView::renderGameBehind(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent19getRenderGameBehindEv(v1);
}


void __fastcall ScreenView::handleInputModeChanged(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r10@1
  __int64 v4; // r0@1
  int *i; // r4@1
  int *v6; // r11@1
  int v7; // r7@2
  char v8; // r0@2
  int v9; // r5@5
  UIComponent *v10; // r0@6
  __int64 v11; // r4@9
  int v12; // r0@10
  unsigned int *v13; // r2@11
  unsigned int v14; // r1@13
  int v15; // [sp+8h] [bp-60h]@1
  void *ptr; // [sp+Ch] [bp-5Ch]@1
  __int64 v17; // [sp+18h] [bp-50h]@9
  char v18; // [sp+24h] [bp-44h]@1
  int v19; // [sp+28h] [bp-40h]@1

  v2 = a2;
  v3 = a1;
  v15 = a2;
  *(_DWORD *)(a1 + 336) = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v18);
  *(_DWORD *)&v18 = 7;
  v19 = v2;
  LODWORD(v4) = ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  ScreenInputContext::enqueueEvent(v4);
  v6 = (int *)(*(_QWORD *)(v3 + 148) >> 32);
  for ( i = (int *)*(_QWORD *)(v3 + 148); v6 != i; i += 2 )
  {
    v7 = *i;
    v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
    __dmb();
    if ( !(v8 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
    {
      type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
    }
    v9 = type_id<UIComponent,InputComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
      v10 = *(UIComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9));
      if ( v10 )
        InputComponent::handleInputModeChange(v10, *(_DWORD *)(v3 + 132), *(_DWORD *)(v3 + 296), (int)&ptr, v15);
  }
  ScreenView::_processEvents((ScreenView *)v3, (ScreenInputContext *)&ptr);
  v11 = v17;
  if ( (_DWORD)v17 != HIDWORD(v17) )
    do
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v12 + 12))();
      }
      LODWORD(v11) = v11 + 12;
    while ( (_DWORD)v11 != HIDWORD(v11) );
    LODWORD(v11) = v17;
  if ( (_DWORD)v11 )
    operator delete((void *)v11);
  if ( ptr )
    operator delete(ptr);
}


char *__fastcall ScreenView::getRenderingAABB(ScreenView *this)
{
  return (char *)this + 488;
}


void __fastcall ScreenView::_adjustScrollToIncludePosition(int a1, UIControl *a2, int a3, int a4)
{
  ScreenView::_adjustScrollToIncludePosition(a1, a2, a3, a4);
}


void __fastcall ScreenView::handleDirection(int a1, int a2, int a3, int a4, int a5)
{
  ScreenView::handleDirection(a1, a2, a3, a4, a5);
}


void __fastcall ScreenView::_handleStickScrolling(ScreenView *a1, int a2)
{
  ScreenView::_handleStickScrolling(a1, a2);
}


unsigned int __fastcall ScreenView::screenDrawsLast(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent18getScreenDrawsLastEv(v1);
}


void __fastcall ScreenView::onFocusGained(ScreenView *this)
{
  ScreenView::onFocusGained(this);
}


unsigned __int64 __fastcall ScreenView::_renderBatches(float a1, int a2, int a3, RectangleArea *a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  RectangleArea *v7; // r11@1
  int *v15; // r10@4
  signed int v16; // r0@5
  __int64 v17; // r0@7
  int *v19; // r4@14
  int *v20; // r7@14
  ScreenView *v21; // r0@15
  void (__fastcall *v22)(int, int *, _DWORD, int); // r7@16
  int v23; // r1@16
  int v24; // r2@16
  int v25; // r3@16
  int *v26; // r7@18
  bool v27; // zf@18
  int v28; // r2@21
  UIComponent **i; // r4@26
  UIComponent **v30; // r7@26
  ScreenView *v31; // r0@27
  int v32; // r4@35
  unsigned int *v33; // r1@36
  unsigned int v34; // r0@38
  unsigned int *v35; // r6@42
  unsigned int v36; // r0@44
  __int64 v38; // kr18_8@50
  __int64 v39; // kr20_8@50
  int v40; // r5@51
  int v41; // r7@52
  unsigned int *v42; // r1@53
  unsigned int v43; // r0@55
  unsigned int *v44; // r4@59
  unsigned int v45; // r0@61
  __int64 v50; // [sp+0h] [bp-B8h]@0
  int v51; // [sp+Ch] [bp-ACh]@3
  int v52; // [sp+10h] [bp-A8h]@1
  int v53; // [sp+14h] [bp-A4h]@4
  int v54; // [sp+18h] [bp-A0h]@3
  signed int v55; // [sp+1Ch] [bp-9Ch]@14
  int v56; // [sp+20h] [bp-98h]@35
  int v57; // [sp+24h] [bp-94h]@35
  char v58; // [sp+28h] [bp-90h]@22
  char v59; // [sp+38h] [bp-80h]@21
  int v60; // [sp+48h] [bp-70h]@16
  int v61; // [sp+4Ch] [bp-6Ch]@16
  int v62; // [sp+50h] [bp-68h]@16
  int v63; // [sp+54h] [bp-64h]@16
  char v64; // [sp+58h] [bp-60h]@4
  int v65; // [sp+68h] [bp-50h]@1
  double v66; // [sp+70h] [bp-48h]@1
  unsigned int v68; // [sp+80h] [bp-38h]@1

  v52 = LODWORD(a1);
  v5 = a2;
  v66 = 0.0;
  v68 = 28;
  v6 = a3;
  v7 = a4;
  v65 = unk_27F636C;
  unk_27F636C = &v65;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0xB8+var_48]
    VSTR            D0, [SP,#0xB8+var_40]
  }
  _R2 = v65;
  if ( v65 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  v51 = v6;
  _R6 = *(_DWORD *)(v6 + 12);
  __asm { VLDR            S16, [SP,#0xB8+arg_0] }
  v54 = *(_DWORD *)(v6 + 16);
  if ( _R6 != v54 )
    __asm { VMOV            R0, S16 }
    v15 = (int *)&v64;
    v53 = _R0;
    do
      __asm { VLDR            S0, [R6,#0x2C] }
      HIDWORD(v50) = 1;
      __asm { VSTR            S0, [SP,#0xB8+var_B8] }
      RectangleArea::RectangleArea(
        *(float *)&v15,
        *(_DWORD *)(_R6 + 32),
        *(_DWORD *)(_R6 + 36),
        *(_DWORD *)(_R6 + 40),
        v50);
      if ( (unsigned int)*(_QWORD *)(_R6 + 92) != *(_QWORD *)(_R6 + 92) >> 32 )
        goto LABEL_72;
      v17 = *(_QWORD *)(_R6 + 80);
      _ZF = (_DWORD)v17 == HIDWORD(v17);
      if ( (_DWORD)v17 == HIDWORD(v17) )
        _ZF = (unsigned int)*(_QWORD *)(_R6 + 104) == *(_QWORD *)(_R6 + 104) >> 32;
      if ( _ZF )
      {
        v16 = 0;
      }
      else
LABEL_72:
        if ( *(_BYTE *)(_R6 + 48) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 60))(v5);
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 72))(v5, v15);
          if ( *(_BYTE *)(_R6 + 49) )
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 76))(v5, v15);
        }
        v16 = 1;
      v55 = v16;
      v20 = (int *)(*(_QWORD *)(_R6 + 92) >> 32);
      v19 = (int *)*(_QWORD *)(_R6 + 92);
      if ( v19 != v20 )
        do
          SpriteComponent::render(*v19, v5);
          v21 = (ScreenView *)UIComponent::getOwner((UIComponent *)*v19);
          ScreenView::_growRenderAABB(v21, v21, v7);
          ++v19;
        while ( v20 != v19 );
        v22 = *(void (__fastcall **)(int, int *, _DWORD, int))(*(_DWORD *)v5 + 40);
        v23 = *(_DWORD *)(_R6 + 20);
        v24 = *(_DWORD *)(_R6 + 24);
        v25 = *(_DWORD *)(_R6 + 28);
        v60 = *(_DWORD *)(_R6 + 16);
        v61 = v23;
        v62 = v24;
        v63 = v25;
        v22(v5, &v60, *(_DWORD *)(_R6 + 12), _R6 + 52);
      if ( (unsigned int)*(_QWORD *)(_R6 + 80) != *(_QWORD *)(_R6 + 80) >> 32 )
        ComponentRenderBatch::begin((int *)_R6, v5);
        v26 = v15;
        v27 = *(_BYTE *)(_R6 + 72) == 0;
        if ( *(_BYTE *)(_R6 + 72) )
          v19 = (int *)(*(_QWORD *)(_R6 + 80) >> 32);
          v15 = (int *)*(_QWORD *)(_R6 + 80);
          v27 = v15 == v19;
        if ( !v27 )
          do
          {
            RectangleArea::RectangleArea((RectangleArea *)&v59);
            v28 = *(_DWORD *)(_R6 + 76);
            CustomRenderComponent::render(*v15, v5);
            if ( !RectangleArea::isEmpty((RectangleArea *)&v59) )
            {
              RectangleArea::unionRects((RectangleArea *)&v58, v7, (int)&v59);
              RectangleArea::operator=((int)v7, (int)&v58);
            }
            ++v15;
          }
          while ( v19 != v15 );
        ComponentRenderBatch::end((int *)_R6, v5);
        v15 = v26;
      if ( (unsigned int)*(_QWORD *)(_R6 + 104) != *(_QWORD *)(_R6 + 104) >> 32 )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 16))(v5, *(_DWORD *)(_R6 + 12));
        v30 = (UIComponent **)(*(_QWORD *)(_R6 + 104) >> 32);
        for ( i = (UIComponent **)*(_QWORD *)(_R6 + 104); v30 != i; ++i )
          (*(void (**)(void))(*(_DWORD *)*i + 72))();
          v31 = (ScreenView *)UIComponent::getOwner(*i);
          ScreenView::_growRenderAABB(v31, v31, v7);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 28))(v5, v53);
      if ( v55 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 64))(v5);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 80))(v5);
      _R6 += 116;
    while ( _R6 != v54 );
  if ( ScreenView::sRenderDebugControls )
    VisualTree::getRootControl((VisualTree *)&v56, *(_DWORD *)(v52 + 132));
    ScreenView::_debugRenderControl(v52, v5, v56);
    v32 = v57;
    if ( v57 )
      v33 = (unsigned int *)(v57 + 4);
      if ( &pthread_create )
        __dmb();
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        v35 = (unsigned int *)(v32 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
        if ( &pthread_create )
          __dmb();
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
    __asm { VMOV            R1, S16 }
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 28))(v5, _R1);
  v38 = *(_QWORD *)(v51 + 12);
  std::_Destroy<ComponentRenderBatch *,ComponentRenderBatch>(*(_QWORD *)(v51 + 12), SHIDWORD(v38));
  *(_DWORD *)(v51 + 16) = v38;
  v39 = *(_QWORD *)v51;
  if ( HIDWORD(v39) != (_DWORD)v39 )
    v40 = v39;
      v41 = *(_DWORD *)(v40 + 4);
      if ( v41 )
        v42 = (unsigned int *)(v41 + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          v44 = (unsigned int *)(v41 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          if ( &pthread_create )
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          else
            v45 = (*v44)--;
          if ( v45 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
      v40 += 36;
    while ( v40 != HIDWORD(v39) );
  *(_DWORD *)(v51 + 4) = v39;
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0xB8+var_48]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0xB8+var_48]
    VLDR            D0, [SP,#0xB8+var_40]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v65;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0xB8+var_48]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v65;
  __asm { VSTR            D0, [SP,#0xB8+var_B8] }
  return __PAIR__(v68, ProfilerLite::_endScope(_R0, _R2, _R3, v50));
}


unsigned int __fastcall ScreenView::isModal(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent10getIsModalEv(v1);
}


unsigned int __fastcall ScreenView::shouldStealMouse(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent19getShouldStealMouseEv(v1);
}


int __fastcall ScreenView::reload(ScreenView *this, const Json::Value *a2)
{
  ScreenView *v2; // r4@1
  UIControl *v3; // r5@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  int v14; // r5@29
  void (__fastcall *v15)(int, char *); // r6@29
  int v16; // r5@29
  unsigned int *v17; // r1@30
  unsigned int v18; // r0@32
  unsigned int *v19; // r6@36
  unsigned int v20; // r0@38
  int v21; // r0@43
  int v22; // r1@43
  int result; // r0@45
  char v24; // [sp+4h] [bp-2Ch]@29
  int v25; // [sp+8h] [bp-28h]@29
  UIControl *v26; // [sp+Ch] [bp-24h]@1
  int v27; // [sp+10h] [bp-20h]@1
  UIControl *v28; // [sp+14h] [bp-1Ch]@1
  int v29; // [sp+18h] [bp-18h]@15
  int v30; // [sp+1Ch] [bp-14h]@1

  v2 = this;
  UIControlFactory::setGlobalVars(*(UIControlFactory **)this, a2);
  VisualTree::recreateControlTree((VisualTree *)&v30, *((UIControlFactory **)v2 + 33), *(_DWORD *)v2);
  VisualTree::getRootControl((VisualTree *)&v28, v30);
  v3 = v28;
  VisualTree::getRootControl((VisualTree *)&v26, *((_DWORD *)v2 + 33));
  UIControl::reloadFromControl(v3, v26);
  v4 = v27;
  if ( v27 )
  {
    v5 = (unsigned int *)(v27 + 4);
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
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *((_DWORD *)v2 + 33);
  v15 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v14 + 40);
  VisualTree::getRootControl((VisualTree *)&v24, *((_DWORD *)v2 + 33));
  v15(v14, &v24);
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  AnimationController::clearAnimationLists(*((AnimationController **)v2 + 74));
  ScreenView::_updateControlCollections(v2, 0);
  v21 = v30;
  v30 = 0;
  v22 = *((_DWORD *)v2 + 33);
  *((_DWORD *)v2 + 33) = v21;
  if ( v22 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
    v21 = *((_DWORD *)v2 + 33);
  (*(void (**)(void))(*(_DWORD *)v21 + 20))();
  (*(void (**)(void))(**((_DWORD **)v2 + 33) + 20))();
  (*(void (**)(void))(**((_DWORD **)v2 + 33) + 36))();
  result = v30;
  if ( v30 )
    result = (*(int (**)(void))(*(_DWORD *)v30 + 4))();
  return result;
}


signed int __fastcall ScreenView::_removeFromControlCollection(signed int result, UIControl *a2, signed int a3)
{
  if ( a3 > 63 )
  {
    if ( a3 <= 255 )
    {
      if ( a3 == 64 )
      {
        result = sub_1300F78(result + 232, result + 268, a2, 64);
      }
      else if ( a3 == 128 )
        result = sub_1300F78(result + 244, result + 268, a2, 128);
    }
    else
      switch ( a3 )
        case 256:
          result = sub_1300F78(result + 220, result + 268, a2, 256);
          break;
        case 512:
          result = j_j_j__ZN12FocusManager13removeControlER9UIControlRSt3mapIPSt6vectorISt10shared_ptrIS0_ESaIS5_EES7_St4lessIS8_ESaISt4pairIKS8_S7_EEE(
                     *(_DWORD *)(result + 348),
                     a2,
                     result + 268);
        case 1024:
          result = sub_1300F78(result + 256, result + 268, a2, 1024);
  }
  else
    switch ( a3 )
      case 1:
        result = sub_1300F78(result + 136, result + 268, a2, 1);
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        return result;
      case 2:
        result = sub_1300F78(result + 148, result + 268, a2, 2);
      case 4:
        result = sub_1300F78(result + 208, result + 268, a2, 4);
      case 8:
        result = sub_1300F78(result + 184, result + 268, a2, 8);
      default:
        if ( a3 == 16 )
        {
          result = sub_1300F78(result + 196, result + 268, a2, 16);
        }
        else if ( a3 == 32 )
          result = sub_1300F78(result + 160, result + 268, a2, 32);
  return result;
}


int __fastcall ScreenView::render(ScreenView *a1, int a2)
{
  int v2; // r4@1

  v2 = a2;
  ScreenView::setupAndRender(a1, a2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 92))(v2);
}


unsigned int __fastcall ScreenView::alwaysAcceptsInput(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent21getAlwaysAcceptsInputEv(v1);
}


void __fastcall ScreenView::_adjustScrollToIncludePosition(int a1, UIControl *a2, int a3, int a4)
{
  UIControl *v4; // r5@1
  int v5; // r8@1
  __int64 v14; // r4@14
  int v15; // r0@15
  unsigned int *v16; // r2@16
  unsigned int v17; // r1@18
  int v18; // r4@29
  unsigned int *v19; // r1@30
  unsigned int v20; // r0@32
  unsigned int *v21; // r5@36
  unsigned int v22; // r0@38
  void *ptr; // [sp+28h] [bp-90h]@14
  __int64 v24; // [sp+34h] [bp-84h]@14
  void *v25; // [sp+40h] [bp-78h]@11
  void (*v26)(void); // [sp+48h] [bp-70h]@11
  int (__fastcall *v27)(int, int); // [sp+4Ch] [bp-6Ch]@11
  int v28; // [sp+50h] [bp-68h]@11
  int v29; // [sp+54h] [bp-64h]@29
  __int64 v30; // [sp+58h] [bp-60h]@1
  __int64 v31; // [sp+60h] [bp-58h]@14

  v4 = a2;
  v5 = a1;
  _R6 = a4;
  _R7 = a3;
  _R4 = UIControl::getPosition(a2);
  _R0 = UIControl::getSize(v4);
  __asm
  {
    VLDR            S16, [R0,#4]
    VLDR            S18, [R6,#4]
    VLDR            S20, [R4,#4]
    VLDR            S22, [R7,#4]
  }
  ScreenEvent::ScreenEvent((ScreenEvent *)&v30);
    VSUB.F32        S0, S22, S20
    VLDR            S4, =0.0
    VMOV.F32        S6, S4
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S2, S0, S18
    VSUB.F32        S2, S2, S16
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S6, S0 }
    VMOV.F32        S0, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VABS.F32        S2, S6
    VABS.F32        S8, S0
    VCMPE.F32       S2, S8
    __asm { VMOVGT.F32      S0, S6 }
    VLDR            S6, =0.1
    VCMPE.F32       S8, S6
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S4, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  v30 = 11LL;
  __asm { VSTR            S4, [SP,#0xB8+var_58] }
  v25 = operator new(1u);
  v26 = (void (*)(void))sub_130582C;
  v27 = sub_13057A4;
  UIControl::getAncestorWhere((int)&v28, (int)v4, (int)&v25);
  if ( v26 )
    v26();
  if ( v28 )
    ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
    UIControl::broadcastEvent(
      v28,
      *(_DWORD *)(v5 + 132),
      (int)&ptr,
      *(_DWORD *)(v5 + 296),
      0,
      v30,
      SHIDWORD(v30),
      v31,
      SHIDWORD(v31));
    v14 = v24;
    if ( (_DWORD)v24 != HIDWORD(v24) )
    {
      do
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( v15 )
        {
          v16 = (unsigned int *)(v15 + 8);
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
            (*(void (**)(void))(*(_DWORD *)v15 + 12))();
        }
        LODWORD(v14) = v14 + 12;
      }
      while ( (_DWORD)v14 != HIDWORD(v14) );
      LODWORD(v14) = v24;
    }
    if ( (_DWORD)v14 )
      operator delete((void *)v14);
    if ( ptr )
      operator delete(ptr);
  v18 = v29;
  if ( v29 )
    v19 = (unsigned int *)(v29 + 4);
    if ( &pthread_create )
      __dmb();
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


void __fastcall ScreenView::_switchTabToTargetIndex(int a1, __int64 *a2, int a3)
{
  ScreenView::_switchTabToTargetIndex(a1, a2, a3);
}


void __fastcall ScreenView::handleRawInputEvent(ScreenView *a1, int a2, char a3, char a4, char a5)
{
  ScreenView::handleRawInputEvent(a1, a2, a3, a4, a5);
}


int __fastcall ScreenView::getHeight(ScreenView *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x5C]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall ScreenView::_prepResevedButtonUpLists(ScreenView *this, ScreenInputContext *a2)
{
  ScreenView::_prepResevedButtonUpLists(this, a2);
}


signed int __fastcall ScreenView::handlePointerLocation(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1

  v4 = a2;
  v5 = a1;
  ScreenView::_handlePointerLocation(a1, a2, a4, a3);
  return j_j_j__ZN12FocusManager35doesPositionIntersectFocusedControlERKN3glm6detail5tvec2IfEE(
           *(_DWORD *)(v5 + 348),
           v4);
}


unsigned int __fastcall ScreenView::_selectControl(ScreenView *this, UIControl *a2)
{
  UIControl *v2; // r5@1
  ScreenView *v3; // r4@1
  unsigned int result; // r0@1
  int v5; // r1@2
  unsigned int *v6; // r2@2
  char v7; // r0@3
  int v8; // r6@6
  TextEditComponent *v9; // r6@7
  unsigned int v10; // r5@12
  unsigned int *v11; // r0@13
  unsigned int v12; // r1@15
  int v13; // r0@18
  unsigned int *v14; // r2@19
  unsigned int v15; // r1@21
  unsigned int *v16; // r2@27
  unsigned int v17; // r1@29
  int v18; // [sp+0h] [bp-18h]@12
  unsigned int v19; // [sp+4h] [bp-14h]@12

  v2 = a2;
  v3 = this;
  result = UIControl::getEnabled(a2);
  if ( result == 1 )
  {
    result = UIControl::areAllAncestorsEnabled(v2);
    if ( result == 1 )
    {
      ScreenView::_deselectControl(v3, v5, v6);
      (*(void (**)(void))(**((_DWORD **)v3 + 31) + 64))();
      v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
      __dmb();
      if ( !(v7 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
      {
        type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
      }
      v8 = type_id<UIComponent,TextEditComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v2, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
        v9 = *(TextEditComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v8));
        if ( v9 )
        {
          if ( (*(int (**)(void))(**((_DWORD **)v3 + 121) + 40))() == 1 )
          {
            if ( FocusManager::setFocusControl(*((FocusManager **)v3 + 87), v2) == 1 )
              ScreenView::_updateFocusControl(v3, 1);
            TextEditComponent::selectControl(v9);
            UIControl::setSelected(v2, 1);
            *((_WORD *)v3 + 240) = 257;
          }
        }
      UIControl::weakRef((UIControl *)&v18, (int)v2);
      *((_DWORD *)v3 + 82) = v18;
      v10 = v19;
      if ( v19 )
        v11 = (unsigned int *)(v19 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
        else
          ++*v11;
      v13 = *((_DWORD *)v3 + 83);
      if ( v13 )
        v14 = (unsigned int *)(v13 + 8);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (**)(void))(*(_DWORD *)v13 + 12))();
      *((_DWORD *)v3 + 83) = v10;
      result = v19;
        v16 = (unsigned int *)(v19 + 8);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    }
  }
  return result;
}


void __fastcall ScreenView::_selectNextFocusObject(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r9@3
  unsigned int v4; // r1@4
  unsigned int *v5; // r0@4
  unsigned int v6; // r2@7
  unsigned int v7; // r3@8
  signed int v8; // r1@9
  int v9; // r7@13
  int v10; // r4@15
  unsigned int v11; // r1@16
  unsigned int *v12; // r0@16
  unsigned int v13; // r2@19
  unsigned int v14; // r3@20
  unsigned int v15; // r1@21
  unsigned int v16; // r8@21
  unsigned int *v17; // r6@31
  unsigned int v18; // r0@33
  unsigned int *v19; // r1@41
  unsigned int v20; // r0@43
  unsigned int *v21; // r4@47
  unsigned int v22; // r0@49

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 332);
  if ( !v2 || *(_DWORD *)(v2 + 4) <= 0 )
  {
    v3 = *(_DWORD *)(v1 + 356);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = (unsigned int *)(v3 + 4);
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
            v8 = 0;
            if ( !*v5 )
              v8 = 1;
            goto LABEL_13;
          }
        }
        else
          __clrex();
      }
    }
    v8 = 1;
    v3 = 0;
LABEL_13:
    v9 = *(_QWORD *)(v1 + 348) >> 32;
    if ( v8 )
      v9 = 0;
    FocusManager::hasFocusedControl((FocusManager *)*(_QWORD *)(v1 + 348));
    FocusManager::moveFocus(*(FocusManager **)(v1 + 348));
    ScreenView::_updateFocusControl((ScreenView *)v1, 0);
    v10 = *(_DWORD *)(v1 + 356);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 4);
      v12 = (unsigned int *)(v10 + 4);
      while ( v11 )
        v13 = __ldrex(v12);
        if ( v13 == v11 )
          v14 = __strex(v11 + 1, v12);
          v11 = v13;
          if ( !v14 )
            v15 = *v12;
            v16 = *(_DWORD *)(v1 + 352);
            if ( !*v12 )
              v16 = *v12;
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v12);
              while ( __strex(v15 - 1, v12) );
            }
            else
              *v12 = v15 - 1;
            if ( v15 == 1 )
              v17 = (unsigned int *)(v10 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v18 = __ldrex(v17);
                while ( __strex(v18 - 1, v17) );
              }
              else
                v18 = (*v17)--;
              if ( v18 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
            if ( v9 == v16 )
              goto LABEL_40;
            goto LABEL_39;
    if ( v9 )
LABEL_39:
      *(_BYTE *)(v1 + 444) = 1;
LABEL_40:
      v19 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


int __fastcall ScreenView::setDebugRendering(int result, bool a2)
{
  ScreenView::sRenderDebugControls = result;
  return result;
}


int __fastcall ScreenView::_sendAnimationEvents(ScreenView *this)
{
  ScreenView *v1; // r4@1
  int v2; // r1@1
  int result; // r0@3
  int v4; // r0@4
  int v5; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  while ( 1 )
  {
    result = *((_DWORD *)v1 + 8);
    if ( result == v2 )
      break;
    (*(void (**)(void))(**((_DWORD **)v1 + 31) + 28))();
    v4 = *((_DWORD *)v1 + 4);
    if ( v4 == *((_DWORD *)v1 + 6) - 32 )
    {
      operator delete(*((void **)v1 + 5));
      v5 = *((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 7) = v5 + 4;
      v2 = *(_DWORD *)(v5 + 4);
      *((_DWORD *)v1 + 5) = v2;
      *((_DWORD *)v1 + 6) = v2 + 512;
      *((_DWORD *)v1 + 4) = v2;
    }
    else
      v2 = v4 + 32;
      *((_DWORD *)v1 + 4) = v4 + 32;
  }
  return result;
}


int __fastcall ScreenView::handleGazeGestureInput(int result, int a2, int a3, int a4, int a5, int a6)
{
  char v6; // r2@1

  v6 = *(_BYTE *)(result + 48);
  if ( a6 )
    v6 = a6;
  *(_BYTE *)(result + 48) = v6;
  return result;
}


unsigned int __fastcall ScreenView::_updateControlCollections(ScreenView *this, bool a2)
{
  ScreenView *v2; // r8@1
  int v8; // r0@4
  unsigned int *v9; // r1@5
  unsigned int v10; // r2@7
  signed int v11; // r0@9
  int v12; // r0@11
  unsigned int *v13; // r2@12
  unsigned int v14; // r1@14
  void (*v15)(void); // r2@19
  unsigned int *v16; // r1@20
  unsigned int v17; // r3@22
  int v18; // r5@25
  unsigned int *v19; // r1@26
  unsigned int v20; // r0@28
  unsigned int *v21; // r4@32
  unsigned int v22; // r0@34
  int v23; // r5@39
  unsigned int *v24; // r1@40
  unsigned int v25; // r0@42
  unsigned int *v26; // r4@46
  unsigned int v27; // r0@48
  char *v28; // r0@54
  UIControl **v29; // r5@54
  UIControl **v30; // r7@54
  UIControl *v31; // r6@56
  _DWORD *v32; // r0@56
  unsigned __int64 *v33; // r10@60
  int v34; // r6@60
  int *v35; // r7@60
  unsigned int *v36; // r1@61
  unsigned int v37; // r0@63
  unsigned int *v38; // r4@68
  unsigned int v39; // r0@70
  UIControl *v40; // r4@75
  char v41; // r0@75
  int v42; // r7@78
  char v43; // r0@78
  InputComponent *v44; // r0@80
  UIControl **v45; // r5@83
  UIControl **j; // r6@83
  int v47; // r11@85
  UIControl *v48; // r7@85
  _DWORD *v49; // r0@85
  int v50; // r2@85
  __int64 v51; // r6@88
  __int64 v52; // r10@89
  int v53; // r5@90
  _DWORD *v54; // r0@90
  int v55; // r11@93
  int v56; // r7@95
  int v57; // r8@96
  int v58; // r9@96
  int v59; // r1@96
  __int64 v60; // kr18_8@97
  int v61; // r7@98
  int v62; // r3@98
  int v63; // r3@101
  int v64; // r6@101
  int v65; // r3@104
  int v66; // r6@104
  int v67; // r3@107
  int v68; // r6@107
  int v69; // r0@113
  int v70; // r0@116
  int v71; // r1@118
  int v72; // r1@119
  int v73; // r4@119
  unsigned int *v74; // r1@120
  int v75; // r3@125
  int v76; // r2@125
  int v77; // r3@130
  int v78; // r2@130
  int v79; // r2@136
  int v80; // r2@140
  unsigned int *v81; // r1@141
  int v82; // r1@145
  int v83; // r4@145
  unsigned int *v84; // r1@146
  int v85; // r1@150
  unsigned int *v86; // r1@151
  unsigned int *v87; // r6@158
  int v88; // r1@163
  unsigned int *v89; // r1@164
  int v90; // r1@168
  unsigned int *v91; // r1@169
  unsigned int *v92; // r6@179
  unsigned int *v93; // r6@186
  unsigned int *v94; // r6@193
  int v95; // r1@198
  unsigned int *v96; // r1@199
  unsigned int *v97; // r6@215
  _DWORD *v99; // r6@238
  int v100; // r3@239
  _DWORD *v101; // r1@240
  int v102; // r0@240
  int v103; // r2@240
  int v104; // r0@244
  int v105; // r4@244
  unsigned int *v106; // r1@245
  unsigned int v107; // r0@247
  int v108; // r1@249
  int v109; // r0@249
  int v110; // r5@249
  unsigned int *v111; // r1@250
  unsigned int v112; // r0@252
  unsigned int *v113; // r5@256
  unsigned int v114; // r0@258
  unsigned int *v115; // r4@262
  unsigned int v116; // r0@264
  unsigned int v117; // r4@276
  int v118; // r5@276
  unsigned int *v119; // r1@277
  unsigned int v120; // r0@279
  unsigned int *v121; // r6@283
  unsigned int v122; // r0@285
  __int64 v127; // [sp+0h] [bp-D0h]@0
  ScreenView *v128; // [sp+Ch] [bp-C4h]@93
  FocusManager **v129; // [sp+10h] [bp-C0h]@75
  char *i; // [sp+14h] [bp-BCh]@54
  int v131; // [sp+14h] [bp-BCh]@93
  signed int v132; // [sp+18h] [bp-B8h]@54
  int v133; // [sp+18h] [bp-B8h]@96
  _DWORD *v134; // [sp+1Ch] [bp-B4h]@90
  __int64 v135; // [sp+24h] [bp-ACh]@90
  _DWORD *v136; // [sp+2Ch] [bp-A4h]@85
  int (__fastcall *v137)(void **, void **, int); // [sp+34h] [bp-9Ch]@85
  signed int (__fastcall *v138)(signed int **, UIControl *); // [sp+38h] [bp-98h]@85
  ScreenView *v139; // [sp+3Ch] [bp-94h]@83
  UIControl **v140; // [sp+40h] [bp-90h]@83
  char *v141; // [sp+44h] [bp-8Ch]@83
  int v142; // [sp+48h] [bp-88h]@83
  char v143; // [sp+4Fh] [bp-81h]@83
  UIControl *v144; // [sp+50h] [bp-80h]@75
  int v145; // [sp+54h] [bp-7Ch]@276
  char v146; // [sp+58h] [bp-78h]@60
  int v147; // [sp+5Ch] [bp-74h]@60
  _DWORD *v148; // [sp+60h] [bp-70h]@56
  int (__fastcall *v149)(void **, _DWORD **, int); // [sp+68h] [bp-68h]@56
  signed int (__fastcall *v150)(int **, UIControl *); // [sp+6Ch] [bp-64h]@56
  int v151; // [sp+70h] [bp-60h]@19
  int v152; // [sp+74h] [bp-5Ch]@19
  int v153; // [sp+78h] [bp-58h]@4
  int v154; // [sp+7Ch] [bp-54h]@4
  int v155; // [sp+80h] [bp-50h]@4
  int v156; // [sp+84h] [bp-4Ch]@4
  int v157; // [sp+88h] [bp-48h]@1
  double v158; // [sp+90h] [bp-40h]@1
  int v160; // [sp+A0h] [bp-30h]@1

  v2 = this;
  v158 = 0.0;
  v160 = 23;
  v157 = unk_27F636C;
  unk_27F636C = &v157;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0xD0+var_40]
    VSTR            D0, [SP,#0xD0+var_38]
  }
  _R2 = v157;
  if ( v157 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  if ( VisualTree::needsControlCollectionUpdateFromRoot(*((VisualTree **)v2 + 33)) == 1 )
    VisualTree::clearControlsUpdate(*((VisualTree **)v2 + 33), 1);
    VisualTree::getRootControl((VisualTree *)&v155, *((_DWORD *)v2 + 33));
    v8 = v155;
    v153 = v155;
    v154 = v156;
    if ( v156 )
      v9 = (unsigned int *)(v156 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
      }
      else
        ++*v9;
    UIControl::setModalAncestor(v8, (int)&v153);
    v12 = v154;
    if ( v154 )
      v13 = (unsigned int *)(v154 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (**)(void))(*(_DWORD *)v12 + 12))();
    v15 = *(void (**)(void))(**((_DWORD **)v2 + 33) + 32);
    v151 = v155;
    v152 = v156;
      v16 = (unsigned int *)(v156 + 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 + 1, v16) );
        ++*v16;
    v15();
    v18 = v152;
    if ( v152 )
      v19 = (unsigned int *)(v152 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    VisualTree::clearControlCollectionUpdateFromRoot(*((VisualTree **)v2 + 33));
    v23 = v156;
      v24 = (unsigned int *)(v156 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v11 = 1;
  else
    v11 = 0;
  v132 = v11;
  v28 = VisualTree::getControlsToUpdate(*((VisualTree **)v2 + 33));
  v30 = (UIControl **)(*(_QWORD *)v28 >> 32);
  v29 = (UIControl **)*(_QWORD *)v28;
  for ( i = v28; v30 != v29; v29 += 2 )
    if ( sub_12FE99C((int)v2, *v29) == 1 )
      v31 = *v29;
      v149 = 0;
      v32 = operator new(4u);
      *v32 = v2;
      v148 = v32;
      v149 = sub_1305064;
      v150 = sub_130505C;
      UIControl::applyToChildrenConditional((int)v31, (int)&v148);
      if ( v149 )
        v149((void **)&v148, &v148, 3);
  if ( v132 )
    ScreenView::_findModalRootControl((ScreenView *)&v146, (int)v2);
    v33 = (unsigned __int64 *)i;
    FocusManager::setModalRoot(*((_DWORD *)v2 + 87), (int)&v146);
    v34 = v147;
    v35 = (int *)((char *)v2 + 348);
    if ( v147 )
      v36 = (unsigned int *)(v147 + 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        v38 = (unsigned int *)(v34 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  FocusManager::getCurrentModalRoot((FocusManager *)&v144, *v35);
  v40 = v144;
  v129 = (FocusManager **)v35;
  v41 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  __dmb();
  if ( !(v41 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  v42 = type_id<UIComponent,InputComponent>(void)::id[0];
  _ZF = UIControl::_hasComponent(v40, type_id<UIComponent,InputComponent>(void)::id[0]) == 1;
  v43 = 0;
  if ( _ZF )
    v44 = *(InputComponent **)(*((_DWORD *)v40 + 27) + 4 * UIControl::_getComponentIndex(v40, v42));
    if ( v44 )
      v43 = InputComponent::getInlineModal(v44);
    else
      v43 = 0;
  v143 = 0;
  v139 = v2;
  v140 = &v144;
  v141 = &v143;
  LOBYTE(v142) = v43;
  v45 = (UIControl **)(*v33 >> 32);
  for ( j = (UIControl **)*v33; v45 != j; j += 2 )
    if ( sub_12FEE30((signed int *)&v139, *j) == 1 )
      v47 = v142;
      v48 = *j;
      v137 = 0;
      v49 = operator new(0x10u);
      v50 = (int)(v49 + 1);
      *v49 = v2;
      *(_DWORD *)v50 = &v144;
      *(_DWORD *)(v50 + 4) = &v143;
      *(_DWORD *)(v50 + 8) = v47;
      v136 = v49;
      v138 = sub_130509A;
      v137 = sub_13050A0;
      UIControl::applyToChildrenConditional((int)v48, (int)&v136);
      if ( v137 )
        v137((void **)&v136, (void **)&v136, 3);
  VisualTree::clearControlsUpdate(*((VisualTree **)v2 + 33), 0);
  v51 = *(_QWORD *)VisualTree::getControlsToRemoveFromCollections(*((VisualTree **)v2 + 33));
  if ( (_DWORD)v51 != HIDWORD(v51) )
    LODWORD(v52) = sub_13050E6;
    HIDWORD(v52) = sub_13050DE;
    do
      sub_12FFB58((int)v2, *(_DWORD *)v51);
      v53 = *(_DWORD *)v51;
      LODWORD(v135) = 0;
      v54 = operator new(8u);
      *v54 = v2;
      v54[1] = &v143;
      v134 = v54;
      v135 = v52;
      UIControl::applyToChildren(v53, (int)&v134);
      if ( (_DWORD)v135 )
        ((void (__fastcall *)(_DWORD **, _DWORD **, signed int))v135)(&v134, &v134, 3);
      LODWORD(v51) = v51 + 8;
    while ( HIDWORD(v51) != (_DWORD)v51 );
  VisualTree::clearControlsToRemoveFromCollections(*((VisualTree **)v2 + 33));
  v55 = *((_DWORD *)v2 + 70);
  v131 = (int)v2 + 272;
  v128 = v2;
  while ( v55 != v131 )
    v133 = *(_DWORD *)(v55 + 16);
    v57 = *(_QWORD *)v133 >> 32;
    v58 = *(_QWORD *)v133;
    v59 = (v57 - v58) >> 5;
    if ( v59 >= 1 )
      v60 = *(_QWORD *)(v55 + 20);
      if ( (_DWORD)v60 != HIDWORD(v60) )
LABEL_98:
        v61 = *(_DWORD *)v58;
        v62 = *(_QWORD *)(v55 + 20);
        while ( v61 != *(_DWORD *)v62 )
          v62 += 8;
          if ( HIDWORD(v60) == v62 )
          {
            v63 = *(_QWORD *)(v55 + 20);
            v56 = v58 + 8;
            v64 = *(_DWORD *)(v58 + 8);
            while ( v64 != *(_DWORD *)v63 )
            {
              v63 += 8;
              if ( HIDWORD(v60) == v63 )
              {
                v65 = *(_QWORD *)(v55 + 20);
                v56 = v58 + 16;
                v66 = *(_DWORD *)(v58 + 16);
                while ( v66 != *(_DWORD *)v65 )
                {
                  v65 += 8;
                  if ( HIDWORD(v60) == v65 )
                  {
                    v67 = *(_QWORD *)(v55 + 20);
                    v56 = v58 + 24;
                    v68 = *(_DWORD *)(v58 + 24);
                    while ( v68 != *(_DWORD *)v67 )
                    {
                      v67 += 8;
                      if ( HIDWORD(v60) == v67 )
                      {
                        _VF = __OFSUB__(v59--, 1);
                        v58 += 32;
                        if ( (unsigned __int8)((v59 < 0) ^ _VF) | (v59 == 0) )
                          goto LABEL_115;
                        goto LABEL_98;
                      }
                    }
                    *(_DWORD *)v67 = *(_DWORD *)(HIDWORD(v60) - 8);
                    *(_DWORD *)(HIDWORD(v60) - 8) = v68;
                    v95 = *(_DWORD *)(HIDWORD(v60) - 4);
                    *(_DWORD *)(HIDWORD(v60) - 4) = *(_DWORD *)(v67 + 4);
                    *(_DWORD *)(v67 + 4) = v95;
                    v70 = *(_DWORD *)(v55 + 24);
                    *(_DWORD *)(v55 + 24) = v70 - 8;
                    v83 = *(_DWORD *)(v70 - 4);
                    if ( !v83 )
                      goto LABEL_235;
                    v96 = (unsigned int *)(v83 + 4);
                    if ( &pthread_create )
                      __dmb();
                      do
                        v70 = __ldrex(v96);
                      while ( __strex(v70 - 1, v96) );
                    else
                      v70 = (*v96)--;
                    if ( v70 != 1 )
                    v93 = (unsigned int *)(v83 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 8))(v83);
                    if ( !&pthread_create )
                      goto LABEL_229;
                    __dmb();
                    do
                      v70 = __ldrex(v93);
                    while ( __strex(v70 - 1, v93) );
                    goto LABEL_230;
                  }
                }
                *(_DWORD *)v65 = *(_DWORD *)(HIDWORD(v60) - 8);
                *(_DWORD *)(HIDWORD(v60) - 8) = v66;
                v88 = *(_DWORD *)(HIDWORD(v60) - 4);
                *(_DWORD *)(HIDWORD(v60) - 4) = *(_DWORD *)(v65 + 4);
                *(_DWORD *)(v65 + 4) = v88;
                v70 = *(_DWORD *)(v55 + 24);
                *(_DWORD *)(v55 + 24) = v70 - 8;
                v83 = *(_DWORD *)(v70 - 4);
                if ( !v83 )
                  goto LABEL_235;
                v89 = (unsigned int *)(v83 + 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v70 = __ldrex(v89);
                  while ( __strex(v70 - 1, v89) );
                else
                  v70 = (*v89)--;
                if ( v70 != 1 )
                v93 = (unsigned int *)(v83 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 8))(v83);
                if ( !&pthread_create )
                  goto LABEL_229;
                __dmb();
                do
                  v70 = __ldrex(v93);
                while ( __strex(v70 - 1, v93) );
                goto LABEL_230;
              }
            }
            *(_DWORD *)v63 = *(_DWORD *)(HIDWORD(v60) - 8);
            *(_DWORD *)(HIDWORD(v60) - 8) = v64;
            v82 = *(_DWORD *)(HIDWORD(v60) - 4);
            *(_DWORD *)(HIDWORD(v60) - 4) = *(_DWORD *)(v63 + 4);
            *(_DWORD *)(v63 + 4) = v82;
            v70 = *(_DWORD *)(v55 + 24);
            *(_DWORD *)(v55 + 24) = v70 - 8;
            v83 = *(_DWORD *)(v70 - 4);
            if ( !v83 )
              goto LABEL_235;
            v84 = (unsigned int *)(v83 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v70 = __ldrex(v84);
              while ( __strex(v70 - 1, v84) );
            else
              v70 = (*v84)--;
            if ( v70 != 1 )
            v93 = (unsigned int *)(v83 + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v83 + 8))(v83);
                v70 = __ldrex(v93);
              while ( __strex(v70 - 1, v93) );
LABEL_229:
              v70 = (*v93)--;
LABEL_230:
            if ( v70 == 1 )
              v70 = (*(int (__fastcall **)(int))(*(_DWORD *)v83 + 12))(v83);
            goto LABEL_235;
          }
        *(_DWORD *)v62 = *(_DWORD *)(HIDWORD(v60) - 8);
        *(_DWORD *)(HIDWORD(v60) - 8) = v61;
        v72 = *(_DWORD *)(HIDWORD(v60) - 4);
        *(_DWORD *)(HIDWORD(v60) - 4) = *(_DWORD *)(v62 + 4);
        *(_DWORD *)(v62 + 4) = v72;
        v70 = *(_DWORD *)(v55 + 24);
        *(_DWORD *)(v55 + 24) = v70 - 8;
        v73 = *(_DWORD *)(v70 - 4);
        if ( !v73 )
          v56 = v58;
          goto LABEL_235;
        v74 = (unsigned int *)(v73 + 4);
            v70 = __ldrex(v74);
          while ( __strex(v70 - 1, v74) );
          v70 = (*v74)--;
        if ( v70 != 1 )
        v87 = (unsigned int *)(v73 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 8))(v73);
            v70 = __ldrex(v87);
          while ( __strex(v70 - 1, v87) );
          v70 = (*v87)--;
LABEL_234:
        v70 = (*(int (__fastcall **)(int))(*(_DWORD *)v73 + 12))(v73);
        v56 = v58;
        goto LABEL_235;
      v69 = v59 + 1;
      do
        --v69;
        v58 += 32;
      while ( v69 > 1 );
LABEL_115:
    if ( 1 == (v57 - v58) >> 3 )
      v70 = *(_QWORD *)(v55 + 20) >> 32;
      v71 = *(_QWORD *)(v55 + 20);
LABEL_135:
      v56 = *(_QWORD *)v133 >> 32;
      if ( v71 != v70 )
        v79 = *(_DWORD *)v58;
        while ( v79 != *(_DWORD *)v71 )
          v71 += 8;
          if ( v70 == v71 )
            v56 = *(_QWORD *)v133 >> 32;
        *(_DWORD *)v71 = *(_DWORD *)(v70 - 8);
        *(_DWORD *)(v70 - 8) = v79;
        v80 = *(_DWORD *)(v70 - 4);
        *(_DWORD *)(v70 - 4) = *(_DWORD *)(v71 + 4);
        *(_DWORD *)(v71 + 4) = v80;
        if ( v73 )
          v81 = (unsigned int *)(v73 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v70 = __ldrex(v81);
            while ( __strex(v70 - 1, v81) );
          else
            v70 = (*v81)--;
          if ( v70 == 1 )
            v92 = (unsigned int *)(v73 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 8))(v73);
                v70 = __ldrex(v92);
              while ( __strex(v70 - 1, v92) );
              v70 = (*v92)--;
              goto LABEL_234;
            v56 = v58;
      goto LABEL_235;
    v70 = (v57 - v58) >> 3;
    if ( v70 == 3 )
        v75 = *(_DWORD *)v58;
        v76 = *(_QWORD *)(v55 + 20);
        while ( v75 != *(_DWORD *)v76 )
          v76 += 8;
          if ( v70 == v76 )
            goto LABEL_128;
        *(_DWORD *)v76 = *(_DWORD *)(v70 - 8);
        *(_DWORD *)(v70 - 8) = v75;
        v90 = *(_DWORD *)(v70 - 4);
        *(_DWORD *)(v70 - 4) = *(_DWORD *)(v76 + 4);
        *(_DWORD *)(v76 + 4) = v90;
          v91 = (unsigned int *)(v73 + 4);
              v70 = __ldrex(v91);
            while ( __strex(v70 - 1, v91) );
            v70 = (*v91)--;
            v97 = (unsigned int *)(v73 + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v73 + 8))(v73);
                v70 = __ldrex(v97);
              while ( __strex(v70 - 1, v97) );
              v70 = (*v97)--;
LABEL_128:
      v58 += 8;
      if ( v70 != 2 )
    if ( v71 == v70 )
LABEL_133:
      goto LABEL_135;
    v77 = *(_DWORD *)v58;
    v78 = v71;
    while ( v77 != *(_DWORD *)v78 )
      v78 += 8;
      if ( v70 == v78 )
        goto LABEL_133;
    *(_DWORD *)v78 = *(_DWORD *)(v70 - 8);
    *(_DWORD *)(v70 - 8) = v77;
    v85 = *(_DWORD *)(v70 - 4);
    *(_DWORD *)(v70 - 4) = *(_DWORD *)(v78 + 4);
    *(_DWORD *)(v78 + 4) = v85;
    v70 = *(_DWORD *)(v55 + 24);
    *(_DWORD *)(v55 + 24) = v70 - 8;
    v73 = *(_DWORD *)(v70 - 4);
    if ( v73 )
      v86 = (unsigned int *)(v73 + 4);
          v70 = __ldrex(v86);
        while ( __strex(v70 - 1, v86) );
        v70 = (*v86)--;
      if ( v70 == 1 )
        v94 = (unsigned int *)(v73 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v73 + 8))(v73);
            v70 = __ldrex(v94);
          while ( __strex(v70 - 1, v94) );
          v70 = (*v94)--;
        if ( v70 == 1 )
          goto LABEL_234;
      v56 = v58;
LABEL_235:
    _ZF = v56 == v57;
    if ( v56 != v57 )
      v70 = v56 + 8;
      _ZF = v56 + 8 == v57;
    if ( !_ZF )
      v99 = (_DWORD *)v56;
        v101 = v99;
        v99 = (_DWORD *)v70;
        v103 = *(_QWORD *)(v55 + 20) >> 32;
        v102 = *(_QWORD *)(v55 + 20);
        if ( v102 == v103 )
          v100 = *v99;
LABEL_244:
          v104 = v101[3];
          v101[3] = 0;
          *v99 = 0;
          *(_DWORD *)v56 = v100;
          v105 = *(_DWORD *)(v56 + 4);
          *(_DWORD *)(v56 + 4) = v104;
          if ( v105 )
            v106 = (unsigned int *)(v105 + 4);
                v107 = __ldrex(v106);
              while ( __strex(v107 - 1, v106) );
              v107 = (*v106)--;
            if ( v107 == 1 )
              v113 = (unsigned int *)(v105 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 8))(v105);
              if ( &pthread_create )
                  v114 = __ldrex(v113);
                while ( __strex(v114 - 1, v113) );
              else
                v114 = (*v113)--;
              if ( v114 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 12))(v105);
          v70 = (int)(v99 + 2);
          v56 += 8;
          while ( v100 != *(_DWORD *)v102 )
            v102 += 8;
            if ( v103 == v102 )
              goto LABEL_244;
          *(_DWORD *)v102 = *(_DWORD *)(v103 - 8);
          *(_DWORD *)(v103 - 8) = v100;
          v108 = *(_DWORD *)(v103 - 4);
          *(_DWORD *)(v103 - 4) = *(_DWORD *)(v102 + 4);
          *(_DWORD *)(v102 + 4) = v108;
          v109 = *(_DWORD *)(v55 + 24);
          *(_DWORD *)(v55 + 24) = v109 - 8;
          v110 = *(_DWORD *)(v109 - 4);
          if ( v110 )
            v111 = (unsigned int *)(v110 + 4);
                v112 = __ldrex(v111);
              while ( __strex(v112 - 1, v111) );
              v112 = (*v111)--;
            if ( v112 == 1 )
              v115 = (unsigned int *)(v110 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 8))(v110);
                  v116 = __ldrex(v115);
                while ( __strex(v116 - 1, v115) );
                v116 = (*v115)--;
              if ( v116 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 12))(v110);
      while ( v70 != v57 );
    std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(
      v133,
      v56,
      *(_DWORD *)(v133 + 4));
    v55 = sub_21D47E8(v55);
  std::_Rb_tree<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *,std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>,std::_Select1st<std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>>,std::less<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *>,std::allocator<std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>>>::_M_erase(
    (int)v128 + 268,
    *((_DWORD *)v128 + 69));
  *((_DWORD *)v128 + 69) = 0;
  *((_DWORD *)v128 + 70) = v131;
  *((_DWORD *)v128 + 71) = v131;
  *((_DWORD *)v128 + 72) = 0;
  FocusManager::updateDefaultFocusIfNeeded(*((FocusManager **)v128 + 87));
  v117 = FocusManager::focusPositionCaptured(*v129);
  v118 = v145;
  if ( v145 )
    v119 = (unsigned int *)(v145 + 4);
    if ( &pthread_create )
      __dmb();
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 == 1 )
      v121 = (unsigned int *)(v118 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v118 + 8))(v118);
          v122 = __ldrex(v121);
        while ( __strex(v122 - 1, v121) );
        v122 = (*v121)--;
      if ( v122 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v118 + 12))(v118);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0xD0+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0xD0+var_40]
    VLDR            D0, [SP,#0xD0+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v157;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0xD0+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v157;
  __asm { VSTR            D0, [SP,#0xD0+var_D0] }
  ProfilerLite::_endScope(_R0, _R2, _R3, v127);
  return v117 ^ 1;
}


void __fastcall ScreenView::handleInputModeChanged(int a1, int a2)
{
  ScreenView::handleInputModeChanged(a1, a2);
}


int __fastcall ScreenView::_updateFocusActivationState(ScreenView *this)
{
  ScreenView *v1; // r4@1
  int v2; // r0@1
  FocusManager *v3; // r0@5
  bool v4; // r1@5
  int result; // r0@8

  v1 = this;
  v2 = *((_BYTE *)this + 48);
  if ( v2 == 2 )
  {
    v3 = (FocusManager *)*((_DWORD *)v1 + 87);
    v4 = 0;
    goto LABEL_7;
  }
  if ( v2 == 1 && ((unsigned int)(*((_DWORD *)v1 + 84) - 3) > 1 || *((_DWORD *)v1 + 85) != 2) )
    v4 = 1;
LABEL_7:
    FocusManager::setActive(v3, v4);
  result = 0;
  *((_BYTE *)v1 + 48) = 0;
  return result;
}


signed int __fastcall ScreenView::_getControllerDirection(int _R0, int a2)
{
  _ZF = a2 == 3;
  if ( a2 != 3 )
    _ZF = a2 == 0;
  if ( _ZF )
  {
    _R1 = _R0 + 8 * a2;
    __asm
    {
      VLDR            S0, [R1,#0x194]
      VLDR            S2, [R1,#0x198]
      VABS.F32        S6, S0
      VABS.F32        S4, S2
      VCMPE.F32       S6, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S0, [R0,#0x190]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        return 1;
        VNEG.F32        S0, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        return 2;
    else
        VLDR            S2, [R0,#0x18C]
        VCMPE.F32       S0, S2
        return 4;
        VNEG.F32        S2, S2
        return 3;
  }
  return 0;
}


ScreenView *__fastcall ScreenView::~ScreenView(ScreenView *this)
{
  ScreenView *v1; // r8@1
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int, int, signed int); // r3@2
  void *v5; // r0@8
  void *v6; // r4@9
  char *v7; // r0@10
  int v8; // r0@13
  unsigned int *v9; // r2@14
  unsigned int v10; // r1@16
  FocusManager *v11; // r0@21
  FocusManager *v12; // r0@22
  int v13; // r0@23
  unsigned int *v14; // r2@24
  unsigned int v15; // r1@26
  int v16; // r10@31
  int v17; // r9@32
  __int64 v18; // r6@32
  int v19; // r0@33
  unsigned int *v20; // r2@34
  unsigned int v21; // r1@36
  char *v22; // r0@46
  AnimationController *v23; // r0@49
  AnimationController *v24; // r0@50
  ScreenRenderBatch *v25; // r0@51
  ScreenRenderBatch *v26; // r0@52
  int v27; // r5@53
  int v28; // r7@53
  int v29; // r4@54
  unsigned int *v30; // r1@55
  unsigned int v31; // r0@57
  unsigned int *v32; // r6@61
  unsigned int v33; // r0@63
  int v34; // r5@72
  int v35; // r7@72
  int v36; // r4@73
  unsigned int *v37; // r1@74
  unsigned int v38; // r0@76
  unsigned int *v39; // r6@80
  unsigned int v40; // r0@82
  int v41; // r5@91
  int v42; // r7@91
  int v43; // r4@92
  unsigned int *v44; // r1@93
  unsigned int v45; // r0@95
  unsigned int *v46; // r6@99
  unsigned int v47; // r0@101
  int v48; // r5@110
  int v49; // r7@110
  int v50; // r4@111
  unsigned int *v51; // r1@112
  unsigned int v52; // r0@114
  unsigned int *v53; // r6@118
  unsigned int v54; // r0@120
  int v55; // r5@129
  int v56; // r7@129
  int v57; // r4@130
  unsigned int *v58; // r1@131
  unsigned int v59; // r0@133
  unsigned int *v60; // r6@137
  unsigned int v61; // r0@139
  int v62; // r5@148
  int v63; // r7@148
  int v64; // r4@149
  unsigned int *v65; // r1@150
  unsigned int v66; // r0@152
  unsigned int *v67; // r6@156
  unsigned int v68; // r0@158
  int v69; // r5@167
  int v70; // r7@167
  int v71; // r4@168
  unsigned int *v72; // r1@169
  unsigned int v73; // r0@171
  unsigned int *v74; // r6@175
  unsigned int v75; // r0@177
  int v76; // r5@186
  int v77; // r7@186
  int v78; // r4@187
  unsigned int *v79; // r1@188
  unsigned int v80; // r0@190
  unsigned int *v81; // r6@194
  unsigned int v82; // r0@196
  int v83; // r5@205
  int v84; // r7@205
  int v85; // r4@206
  unsigned int *v86; // r1@207
  unsigned int v87; // r0@209
  unsigned int *v88; // r6@213
  unsigned int v89; // r0@215
  int v90; // r5@224
  int v91; // r7@224
  int v92; // r4@225
  unsigned int *v93; // r1@226
  unsigned int v94; // r0@228
  unsigned int *v95; // r6@232
  unsigned int v96; // r0@234
  int v97; // r5@243
  int v98; // r7@243
  int v99; // r4@244
  unsigned int *v100; // r1@245
  unsigned int v101; // r0@247
  unsigned int *v102; // r6@251
  unsigned int v103; // r0@253
  int v104; // r0@262
  int v105; // r5@264
  unsigned int *v106; // r1@265
  unsigned int v107; // r0@267
  unsigned int *v108; // r4@271
  unsigned int v109; // r0@273
  void *v110; // r0@278
  unsigned int v111; // r4@279
  unsigned int v112; // r1@279
  unsigned int v113; // r5@280
  void *v114; // t1@281
  int v115; // r5@284
  unsigned int *v116; // r1@285
  unsigned int v117; // r0@287
  unsigned int *v118; // r4@291
  unsigned int v119; // r0@293

  v1 = this;
  v2 = *((_QWORD *)this + 64) >> 32;
  v3 = *((_QWORD *)this + 64);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *(void (__fastcall **)(int, int, signed int))(v3 + 8);
      if ( v4 )
        v4(v3, v3, 3);
      v3 += 20;
    }
    while ( v2 != v3 );
    v3 = *((_DWORD *)v1 + 128);
  }
  if ( v3 )
    operator delete((void *)v3);
  v5 = (void *)*((_DWORD *)v1 + 92);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*((_QWORD *)v1 + 45), 4 * (*((_QWORD *)v1 + 45) >> 32));
  *((_DWORD *)v1 + 92) = 0;
  *((_DWORD *)v1 + 93) = 0;
  v7 = (char *)*((_DWORD *)v1 + 90);
  if ( v7 && (char *)v1 + 384 != v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 89);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  v11 = (FocusManager *)*((_DWORD *)v1 + 87);
  if ( v11 )
    v12 = FocusManager::~FocusManager(v11);
    operator delete((void *)v12);
  *((_DWORD *)v1 + 87) = 0;
  std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>::~unique_ptr((_DWORD *)v1 + 86);
  v13 = *((_DWORD *)v1 + 83);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  v16 = *((_DWORD *)v1 + 77);
  if ( v16 )
      v17 = *(_DWORD *)v16;
      v18 = *(_QWORD *)(v16 + 8);
      if ( (_DWORD)v18 != HIDWORD(v18) )
      {
        do
        {
          v19 = *(_DWORD *)(v18 + 4);
          if ( v19 )
          {
            v20 = (unsigned int *)(v19 + 8);
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
              (*(void (**)(void))(*(_DWORD *)v19 + 12))();
          }
          LODWORD(v18) = v18 + 8;
        }
        while ( (_DWORD)v18 != HIDWORD(v18) );
        LODWORD(v18) = *(_DWORD *)(v16 + 8);
      }
      if ( (_DWORD)v18 )
        operator delete((void *)v18);
      operator delete((void *)v16);
      v16 = v17;
    while ( v17 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 300), 4 * (*(_QWORD *)((char *)v1 + 300) >> 32));
  *((_DWORD *)v1 + 77) = 0;
  *((_DWORD *)v1 + 78) = 0;
  v22 = (char *)*((_DWORD *)v1 + 75);
  if ( v22 && (char *)v1 + 324 != v22 )
    operator delete(v22);
  v23 = (AnimationController *)*((_DWORD *)v1 + 74);
  if ( v23 )
    v24 = AnimationController::~AnimationController(v23);
    operator delete((void *)v24);
  *((_DWORD *)v1 + 74) = 0;
  v25 = (ScreenRenderBatch *)*((_DWORD *)v1 + 73);
  if ( v25 )
    v26 = ScreenRenderBatch::~ScreenRenderBatch(v25);
    operator delete((void *)v26);
  *((_DWORD *)v1 + 73) = 0;
  std::_Rb_tree<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *,std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>,std::_Select1st<std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>>,std::less<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *>,std::allocator<std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>>>::_M_erase(
    (int)v1 + 268,
    *((_DWORD *)v1 + 69));
  v28 = *((_QWORD *)v1 + 32) >> 32;
  v27 = *((_QWORD *)v1 + 32);
  if ( v27 != v28 )
      v29 = *(_DWORD *)(v27 + 4);
      if ( v29 )
        v30 = (unsigned int *)(v29 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        else
          v31 = (*v30)--;
        if ( v31 == 1 )
          v32 = (unsigned int *)(v29 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
          if ( &pthread_create )
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          else
            v33 = (*v32)--;
          if ( v33 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
      v27 += 8;
    while ( v27 != v28 );
    v27 = *((_DWORD *)v1 + 64);
  if ( v27 )
    operator delete((void *)v27);
  v35 = *(_QWORD *)((char *)v1 + 244) >> 32;
  v34 = *(_QWORD *)((char *)v1 + 244);
  if ( v34 != v35 )
      v36 = *(_DWORD *)(v34 + 4);
      if ( v36 )
        v37 = (unsigned int *)(v36 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          v39 = (unsigned int *)(v36 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
      v34 += 8;
    while ( v34 != v35 );
    v34 = *((_DWORD *)v1 + 61);
  if ( v34 )
    operator delete((void *)v34);
  v42 = *((_QWORD *)v1 + 29) >> 32;
  v41 = *((_QWORD *)v1 + 29);
  if ( v41 != v42 )
      v43 = *(_DWORD *)(v41 + 4);
      if ( v43 )
        v44 = (unsigned int *)(v43 + 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          v46 = (unsigned int *)(v43 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
      v41 += 8;
    while ( v41 != v42 );
    v41 = *((_DWORD *)v1 + 58);
  if ( v41 )
    operator delete((void *)v41);
  v49 = *(_QWORD *)((char *)v1 + 220) >> 32;
  v48 = *(_QWORD *)((char *)v1 + 220);
  if ( v48 != v49 )
      v50 = *(_DWORD *)(v48 + 4);
      if ( v50 )
        v51 = (unsigned int *)(v50 + 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 == 1 )
          v53 = (unsigned int *)(v50 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
      v48 += 8;
    while ( v48 != v49 );
    v48 = *((_DWORD *)v1 + 55);
  if ( v48 )
    operator delete((void *)v48);
  v56 = *((_QWORD *)v1 + 26) >> 32;
  v55 = *((_QWORD *)v1 + 26);
  if ( v55 != v56 )
      v57 = *(_DWORD *)(v55 + 4);
      if ( v57 )
        v58 = (unsigned int *)(v57 + 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 == 1 )
          v60 = (unsigned int *)(v57 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
      v55 += 8;
    while ( v55 != v56 );
    v55 = *((_DWORD *)v1 + 52);
  if ( v55 )
    operator delete((void *)v55);
  v63 = *(_QWORD *)((char *)v1 + 196) >> 32;
  v62 = *(_QWORD *)((char *)v1 + 196);
  if ( v62 != v63 )
      v64 = *(_DWORD *)(v62 + 4);
      if ( v64 )
        v65 = (unsigned int *)(v64 + 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 == 1 )
          v67 = (unsigned int *)(v64 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 8))(v64);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 12))(v64);
      v62 += 8;
    while ( v62 != v63 );
    v62 = *((_DWORD *)v1 + 49);
  if ( v62 )
    operator delete((void *)v62);
  v70 = *((_QWORD *)v1 + 23) >> 32;
  v69 = *((_QWORD *)v1 + 23);
  if ( v69 != v70 )
      v71 = *(_DWORD *)(v69 + 4);
      if ( v71 )
        v72 = (unsigned int *)(v71 + 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 == 1 )
          v74 = (unsigned int *)(v71 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v71 + 8))(v71);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v71 + 12))(v71);
      v69 += 8;
    while ( v69 != v70 );
    v69 = *((_DWORD *)v1 + 46);
  if ( v69 )
    operator delete((void *)v69);
  v77 = *(_QWORD *)((char *)v1 + 172) >> 32;
  v76 = *(_QWORD *)((char *)v1 + 172);
  if ( v76 != v77 )
      v78 = *(_DWORD *)(v76 + 4);
      if ( v78 )
        v79 = (unsigned int *)(v78 + 4);
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
          v80 = (*v79)--;
        if ( v80 == 1 )
          v81 = (unsigned int *)(v78 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 8))(v78);
              v82 = __ldrex(v81);
            while ( __strex(v82 - 1, v81) );
            v82 = (*v81)--;
          if ( v82 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 12))(v78);
      v76 += 8;
    while ( v76 != v77 );
    v76 = *((_DWORD *)v1 + 43);
  if ( v76 )
    operator delete((void *)v76);
  v84 = *((_QWORD *)v1 + 20) >> 32;
  v83 = *((_QWORD *)v1 + 20);
  if ( v83 != v84 )
      v85 = *(_DWORD *)(v83 + 4);
      if ( v85 )
        v86 = (unsigned int *)(v85 + 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 == 1 )
          v88 = (unsigned int *)(v85 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 8))(v85);
              v89 = __ldrex(v88);
            while ( __strex(v89 - 1, v88) );
            v89 = (*v88)--;
          if ( v89 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 12))(v85);
      v83 += 8;
    while ( v83 != v84 );
    v83 = *((_DWORD *)v1 + 40);
  if ( v83 )
    operator delete((void *)v83);
  v91 = *(_QWORD *)((char *)v1 + 148) >> 32;
  v90 = *(_QWORD *)((char *)v1 + 148);
  if ( v90 != v91 )
      v92 = *(_DWORD *)(v90 + 4);
      if ( v92 )
        v93 = (unsigned int *)(v92 + 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 == 1 )
          v95 = (unsigned int *)(v92 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
              v96 = __ldrex(v95);
            while ( __strex(v96 - 1, v95) );
            v96 = (*v95)--;
          if ( v96 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
      v90 += 8;
    while ( v90 != v91 );
    v90 = *((_DWORD *)v1 + 37);
  if ( v90 )
    operator delete((void *)v90);
  v98 = *((_QWORD *)v1 + 17) >> 32;
  v97 = *((_QWORD *)v1 + 17);
  if ( v97 != v98 )
      v99 = *(_DWORD *)(v97 + 4);
      if ( v99 )
        v100 = (unsigned int *)(v99 + 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 == 1 )
          v102 = (unsigned int *)(v99 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v99 + 8))(v99);
              v103 = __ldrex(v102);
            while ( __strex(v103 - 1, v102) );
            v103 = (*v102)--;
          if ( v103 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v99 + 12))(v99);
      v97 += 8;
    while ( v97 != v98 );
    v97 = *((_DWORD *)v1 + 34);
  if ( v97 )
    operator delete((void *)v97);
  v104 = *((_DWORD *)v1 + 33);
  if ( v104 )
    (*(void (**)(void))(*(_DWORD *)v104 + 4))();
  *((_DWORD *)v1 + 33) = 0;
  v105 = *((_DWORD *)v1 + 32);
  if ( v105 )
    v106 = (unsigned int *)(v105 + 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 == 1 )
      v108 = (unsigned int *)(v105 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 8))(v105);
      if ( &pthread_create )
        __dmb();
          v109 = __ldrex(v108);
        while ( __strex(v109 - 1, v108) );
      else
        v109 = (*v108)--;
      if ( v109 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 12))(v105);
  v110 = (void *)*((_DWORD *)v1 + 2);
  if ( v110 )
    v111 = *((_DWORD *)v1 + 11);
    v112 = *((_DWORD *)v1 + 7);
    if ( v112 < v111 + 4 )
      v113 = v112 - 4;
        v114 = *(void **)(v113 + 4);
        v113 += 4;
        operator delete(v114);
      while ( v113 < v111 );
      v110 = (void *)*((_DWORD *)v1 + 2);
    operator delete(v110);
  v115 = *((_DWORD *)v1 + 1);
  if ( v115 )
    v116 = (unsigned int *)(v115 + 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 == 1 )
      v118 = (unsigned int *)(v115 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 8))(v115);
          v119 = __ldrex(v118);
        while ( __strex(v119 - 1, v118) );
        v119 = (*v118)--;
      if ( v119 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 12))(v115);
  return v1;
}


int __fastcall ScreenView::getWidth(ScreenView *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x58]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


unsigned int __fastcall ScreenView::_debugRenderControl(int a1, int a2, UIControl *a3)
{
  UIControl *v3; // r9@1
  int v4; // r4@1
  int v5; // r5@1
  unsigned int result; // r0@1
  __int64 v7; // r6@2
  int v8; // t1@3
  float *v17; // r1@4
  int v18; // r0@6
  float *v19; // r1@6
  __int64 v20; // kr00_8@9
  unsigned int *v21; // r1@10
  unsigned int v22; // r0@12
  unsigned int *v23; // r6@16
  unsigned int v24; // r0@18
  char v25; // r0@24
  int v26; // r4@27
  int v27; // r0@28
  int (__fastcall *v28)(int, int *, int *, signed int); // r7@28
  int *v29; // r2@29
  int *v30; // r1@29
  int v31; // r0@29
  signed int v32; // r3@29
  int *v33; // r8@30
  char *v34; // r10@30
  int v35; // r11@31
  int *v36; // r10@31
  char *v37; // r6@31
  int v38; // r8@31
  char v39; // r1@33
  char *v40; // r0@38
  int *v41; // r0@40
  char *v42; // r6@40
  int v43; // r7@40
  char v44; // r1@42
  char *v45; // r0@44
  char *v46; // r6@44
  int *v47; // r0@45
  char *v48; // r6@47
  int v49; // r7@47
  char v50; // r1@49
  char *v51; // r0@51
  char *v52; // r6@51
  char *v56; // r6@51
  char *v60; // r6@51
  int v61; // r7@51
  char v62; // r1@53
  char *v63; // r0@55
  char *v64; // r6@55
  char *v68; // r6@55
  char *v72; // r6@55
  int v73; // r7@55
  char v74; // r1@57
  char *v75; // r0@59
  char *v76; // r6@59
  int v77; // r0@59
  char *v78; // r6@59
  int v79; // r7@59
  char v80; // r1@61
  char *v81; // r0@63
  char *v82; // r6@63
  int v83; // r0@63
  const char *v84; // r1@63
  int v85; // r2@65
  int v86; // r7@67
  char v87; // r1@69
  char *v88; // r0@71
  char *v89; // r6@71
  unsigned int v90; // r0@71
  const char *v91; // r1@71
  int v92; // r2@73
  int v93; // r7@75
  char v94; // r1@77
  char *v95; // r0@79
  void *v96; // r0@79
  int v97; // r4@82
  unsigned int *v98; // r1@83
  unsigned int v99; // r0@85
  unsigned int *v100; // r6@89
  unsigned int v101; // r0@91
  void (__fastcall *v102)(int, float *, int *, float *); // r7@96
  void *v103; // r0@96
  void (__fastcall *v104)(int, int *, int *); // r7@97
  void **v105; // r0@97
  void *v106; // r0@97
  int v107; // r4@98
  unsigned int *v108; // r1@99
  unsigned int *v109; // r5@105
  unsigned int *v110; // r2@113
  signed int v111; // r1@115
  unsigned int *v112; // r2@117
  signed int v113; // r1@119
  unsigned int *v114; // r2@121
  signed int v115; // r1@123
  unsigned int *v116; // r1@137
  signed int v117; // r0@139
  char v118; // [sp+8h] [bp-1B0h]@0
  int v119; // [sp+1Ch] [bp-19Ch]@35
  int v120; // [sp+20h] [bp-198h]@35
  signed int v121; // [sp+24h] [bp-194h]@35
  signed int v122; // [sp+28h] [bp-190h]@35
  int v123; // [sp+2Ch] [bp-18Ch]@29
  signed int v124; // [sp+30h] [bp-188h]@29
  int v125; // [sp+34h] [bp-184h]@29
  signed int v126; // [sp+38h] [bp-180h]@29
  int v127; // [sp+3Ch] [bp-17Ch]@97
  int v128; // [sp+40h] [bp-178h]@97
  int v129; // [sp+44h] [bp-174h]@97
  int v130; // [sp+48h] [bp-170h]@97
  int v131; // [sp+4Ch] [bp-16Ch]@96
  char v132; // [sp+50h] [bp-168h]@96
  char v133; // [sp+58h] [bp-160h]@96
  UIControl *v134; // [sp+64h] [bp-154h]@80
  int v135; // [sp+68h] [bp-150h]@82
  float v136; // [sp+6Ch] [bp-14Ch]@96
  int v137; // [sp+70h] [bp-148h]@82
  int v138; // [sp+78h] [bp-140h]@82
  int v139; // [sp+80h] [bp-138h]@45
  int v140; // [sp+84h] [bp-134h]@31
  void **v141; // [sp+88h] [bp-130h]@30
  int v142; // [sp+8Ch] [bp-12Ch]@98
  void **v143; // [sp+90h] [bp-128h]@30
  void **v144; // [sp+94h] [bp-124h]@97
  int v145; // [sp+B8h] [bp-100h]@97
  UIControl *v146; // [sp+144h] [bp-74h]@30
  int v147; // [sp+148h] [bp-70h]@98
  char v148; // [sp+14Ch] [bp-6Ch]@9
  int v149; // [sp+150h] [bp-68h]@9
  float v150; // [sp+154h] [bp-64h]@6
  float v151; // [sp+158h] [bp-60h]@7
  float v152; // [sp+15Ch] [bp-5Ch]@4
  float v153; // [sp+160h] [bp-58h]@5
  float v154; // [sp+164h] [bp-54h]@4
  int v155; // [sp+168h] [bp-50h]@6
  int v156; // [sp+170h] [bp-48h]@8
  int v157; // [sp+174h] [bp-44h]@4
  int v159; // [sp+17Ch] [bp-3Ch]@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  result = UIControl::getVisible(a3);
  if ( result == 1 )
  {
    v7 = *(_QWORD *)UIControl::getChildren(v3);
    while ( HIDWORD(v7) != (_DWORD)v7 )
    {
      v8 = *(_DWORD *)v7;
      LODWORD(v7) = v7 + 8;
      ScreenView::_debugRenderControl(v4, v5, v8);
    }
    RectangleArea::RectangleArea((RectangleArea *)&v157);
    v157 = *(_DWORD *)UIControl::getPosition(v3);
    v159 = *((_DWORD *)UIControl::getPosition(v3) + 1);
    _R0 = UIControl::getPosition(v3);
    __asm { VLDR            S16, [R0] }
    _R0 = UIControl::getSize(v3);
    __asm
      VLDR            S0, [R0]
      VADD.F32        S0, S0, S16
      VSTR            S0, [SP,#0x1B8+var_40]
    __asm { VLDR            S16, [R0,#4] }
      VLDR            S0, [R0,#4]
      VSTR            S0, [SP,#0x1B8+var_38]
    RectangleArea::RectangleArea((RectangleArea *)&v154);
      VMOV.F32        S16, #1.0
      VLDR            S0, [SP,#0x1B8+var_44]
      VMOV.F32        S6, #-1.0
      VMOV.F32        S8, #2.0
    v17 = &v152;
      VADD.F32        S2, S0, S16
      VADD.F32        S0, S0, S8
      VSTR            S2, [SP,#0x1B8+var_54]
      VLDR            S2, [SP,#0x1B8+var_3C]
      VSTR            S0, [SP,#0x1B8+var_5C]
      VADD.F32        S4, S2, S16
      VADD.F32        S2, S2, S8
      VSTR            S4, [SP,#0x1B8+var_4C]
      VLDR            S4, [SP,#0x1B8+var_40]
      VADD.F32        S4, S4, S6
      VCMPE.F32       S4, S0
      VSTR            S4, [SP,#0x1B8+var_58]
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v17 = &v153;
    __asm { VLDR            S0, [SP,#0x1B8+var_38] }
    v18 = *(_DWORD *)v17;
    v19 = &v150;
    __asm { VADD.F32        S0, S0, S6 }
    v155 = v18;
      VSTR            S2, [SP,#0x1B8+var_64]
      VCMPE.F32       S0, S2
      VSTR            S0, [SP,#0x1B8+var_60]
      v19 = &v151;
    v156 = *(_DWORD *)v19;
    if ( !UIControl::getHover(v3) )
      FocusManager::getFocusedControl((FocusManager *)&v148, *(_DWORD *)(v4 + 348));
      v20 = *(_QWORD *)&v148;
      if ( v149 )
      {
        v21 = (unsigned int *)(v149 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          v23 = (unsigned int *)(HIDWORD(v20) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 8))(HIDWORD(v20));
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 12))(HIDWORD(v20));
      }
      if ( (UIControl *)v20 != v3 )
        v25 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
        __dmb();
        if ( !(v25 & 1) )
          if ( j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
        v26 = type_id<UIComponent,TextComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v3, type_id<UIComponent,TextComponent>(void)::id[0]) )
          v27 = UIControl::_getComponentIndex(v3, v26);
          v28 = *(int (__fastcall **)(int, int *, int *, signed int))(*(_DWORD *)v5 + 56);
          if ( *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * v27) )
            v123 = 1065353216;
            v124 = 1065353216;
            v29 = &v123;
            v125 = 0;
            v126 = 1065353216;
            v30 = &v157;
            v31 = v5;
            v32 = 1065353216;
            return v28(v31, v30, v29, v32);
        v32 = 1028443341;
        v119 = 0;
        v120 = 0;
        v121 = 1065353216;
        v122 = 1065353216;
        v30 = &v157;
        v29 = &v119;
        v31 = v5;
        return v28(v31, v30, v29, v32);
    UIControl::getParent((UIControl *)&v146, (int)v3);
    v33 = (int *)&v141;
    sub_21D103C((int)&v141, 24);
    v34 = (char *)&v143;
    if ( !v146 )
      sub_21CBF38((char *)&v143, (int)"Screen name: ", 13);
      ScreenView::getScreenName((ScreenView *)&v140, v4);
      v35 = v140;
      v36 = (int *)(v140 - 12);
      v37 = sub_21CBF38((char *)&v143, v140, *(_DWORD *)(v140 - 12));
      v38 = *(_DWORD *)&v37[*(_DWORD *)(*(_DWORD *)v37 - 12) + 124];
      if ( !v38 )
        sub_21E5824();
      if ( *(_BYTE *)(v38 + 28) )
        v39 = *(_BYTE *)(v38 + 39);
      else
        sub_21B50F0(v38);
        v39 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v38 + 24))(v38, 10);
      v40 = sub_21CBC4C(v37, v39);
      sub_21CB78C(v40);
      v33 = (int *)&v141;
      if ( v36 != &dword_28898C0 )
        v116 = (unsigned int *)(v35 - 4);
            v117 = __ldrex(v116);
          while ( __strex(v117 - 1, v116) );
          v117 = (*v116)--;
        if ( v117 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v34 = (char *)&v143;
    sub_21CBF38(v34, (int)"Control name: ", 14);
    v41 = (int *)UIControl::getName(v3);
    v42 = sub_21CBF38(v34, *v41, *(_DWORD *)(*v41 - 12));
    v43 = *(_DWORD *)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12) + 124];
    if ( !v43 )
      sub_21E5824();
    if ( *(_BYTE *)(v43 + 28) )
      v44 = *(_BYTE *)(v43 + 39);
    else
      sub_21B50F0(v43);
      v44 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v43 + 24))(v43, 10);
    v45 = sub_21CBC4C(v42, v44);
    v46 = sub_21CB78C(v45);
    sub_21CBF38(v46, (int)"Parent: ", 8);
    if ( v146 )
      v47 = (int *)UIControl::getName(v146);
      sub_21E8AF4(&v139, v47);
      sub_21E94B4((void **)&v139, "None");
    v48 = sub_21CBF38(v46, v139, *(_DWORD *)(v139 - 12));
    v49 = *(_DWORD *)&v48[*(_DWORD *)(*(_DWORD *)v48 - 12) + 124];
    if ( !v49 )
    if ( *(_BYTE *)(v49 + 28) )
      v50 = *(_BYTE *)(v49 + 39);
      sub_21B50F0(v49);
      v50 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v49 + 24))(v49, 10);
    v51 = sub_21CBC4C(v48, v50);
    v52 = sub_21CB78C(v51);
    sub_21CBF38(v52, (int)"Size: ", 6);
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    v56 = sub_21CC9F0(v52);
    sub_21CBF38(v56, (int)", ", 2);
    v60 = sub_21CC9F0(v56);
    v61 = *(_DWORD *)&v60[*(_DWORD *)(*(_DWORD *)v60 - 12) + 124];
    if ( !v61 )
    if ( *(_BYTE *)(v61 + 28) )
      v62 = *(_BYTE *)(v61 + 39);
      sub_21B50F0(v61);
      v62 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v61 + 24))(v61, 10);
    v63 = sub_21CBC4C(v60, v62);
    v64 = sub_21CB78C(v63);
    sub_21CBF38(v64, (int)"Position: ", 10);
    v68 = sub_21CC9F0(v64);
    sub_21CBF38(v68, (int)", ", 2);
    v72 = sub_21CC9F0(v68);
    v73 = *(_DWORD *)&v72[*(_DWORD *)(*(_DWORD *)v72 - 12) + 124];
    if ( !v73 )
    if ( *(_BYTE *)(v73 + 28) )
      v74 = *(_BYTE *)(v73 + 39);
      sub_21B50F0(v73);
      v74 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v73 + 24))(v73, 10);
    v75 = sub_21CBC4C(v72, v74);
    v76 = sub_21CB78C(v75);
    sub_21CBF38(v76, (int)"Z Layer: ", 9);
    v77 = UIControl::getZOrder(v3);
    v78 = (char *)sub_21CC43C(v76, v77);
    v79 = *(_DWORD *)&v78[*(_DWORD *)(*(_DWORD *)v78 - 12) + 124];
    if ( !v79 )
    if ( *(_BYTE *)(v79 + 28) )
      v80 = *(_BYTE *)(v79 + 39);
      sub_21B50F0(v79);
      v80 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v79 + 24))(v79, 10);
    v81 = sub_21CBC4C(v78, v80);
    v82 = sub_21CB78C(v81);
    sub_21CBF38(v82, (int)"Hover: ", 7);
    v83 = UIControl::getHover(v3);
    v84 = "true";
    if ( !v83 )
      v84 = "false";
    v85 = 5;
    if ( v83 )
      v85 = 4;
    sub_21CBF38(v82, (int)v84, v85);
    v86 = *(_DWORD *)&v82[*(_DWORD *)(*(_DWORD *)v82 - 12) + 124];
    if ( !v86 )
    if ( *(_BYTE *)(v86 + 28) )
      v87 = *(_BYTE *)(v86 + 39);
      sub_21B50F0(v86);
      v87 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v86 + 24))(v86, 10);
    v88 = sub_21CBC4C(v82, v87);
    v89 = sub_21CB78C(v88);
    sub_21CBF38(v89, (int)"Visible: ", 9);
    v90 = UIControl::getVisible(v3);
    v91 = "true";
    if ( !v90 )
      v91 = "false";
    v92 = 5;
    if ( v90 )
      v92 = 4;
    sub_21CBF38(v89, (int)v91, v92);
    v93 = *(_DWORD *)&v89[*(_DWORD *)(*(_DWORD *)v89 - 12) + 124];
    if ( !v93 )
    if ( *(_BYTE *)(v93 + 28) )
      v94 = *(_BYTE *)(v93 + 39);
      sub_21B50F0(v93);
      v94 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v93 + 24))(v93, 10);
    v95 = sub_21CBC4C(v89, v94);
    sub_21CB78C(v95);
    v96 = (void *)(v139 - 12);
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v110 = (unsigned int *)(v139 - 4);
      if ( &pthread_create )
        do
          v111 = __ldrex(v110);
        while ( __strex(v111 - 1, v110) );
        v111 = (*v110)--;
      if ( v111 <= 0 )
        j_j_j_j__ZdlPv_9(v96);
    FocusManager::getFocusedControl((FocusManager *)&v134, *(_DWORD *)(v4 + 348));
    __asm { VLDR            S0, =0.0 }
    if ( v134 == v3 )
      __asm { VMOVEQ.F32      S16, S0 }
    v97 = v135;
    __asm { VSTR            S16, [SP,#0x1B8+var_14C] }
    v137 = 1065353216;
    __asm { VSTR            S16, [SP,#0x1B8+var_144] }
    v138 = 1065353216;
    if ( !_ZF )
      v98 = (unsigned int *)(v135 + 4);
          v99 = __ldrex(v98);
        while ( __strex(v99 - 1, v98) );
        v99 = (*v98)--;
      if ( v99 == 1 )
        v100 = (unsigned int *)(v97 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 8))(v97);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 12))(v97);
    TextMeasureData::TextMeasureData((TextMeasureData *)&v133, 0.5, 0LL, 0, 0, v118);
    CaretMeasureData::CaretMeasureData((CaretMeasureData *)&v132, -1, 0);
    v102 = *(void (__fastcall **)(int, float *, int *, float *))(*(_DWORD *)v5 + 20);
    sub_21CFED8(&v131, (int)(v33 + 3));
    v102(v5, &v154, &v131, &v136);
    v103 = (void *)(v131 - 12);
    if ( (int *)(v131 - 12) != &dword_28898C0 )
      v112 = (unsigned int *)(v131 - 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    (*(void (__fastcall **)(int, int *, _DWORD *, signed int))(*(_DWORD *)v5 + 52))(
      v5,
      &v157,
      &Color::WHITE,
      1061158912);
    v104 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v5 + 56);
    v127 = 1065353216;
    v128 = 0;
    v129 = 0;
    v130 = 1065353216;
    v104(v5, &v157, &v127);
    v105 = off_26D3F84;
    v141 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v33) = off_26D3F80[0];
    v143 = v105;
    v144 = &off_27734E8;
    v106 = (void *)(v145 - 12);
    if ( (int *)(v145 - 12) != &dword_28898C0 )
      v114 = (unsigned int *)(v145 - 4);
          v115 = __ldrex(v114);
        while ( __strex(v115 - 1, v114) );
        v115 = (*v114)--;
      if ( v115 <= 0 )
        j_j_j_j__ZdlPv_9(v106);
    v144 = &off_26D40A8;
    sub_21C802C((unsigned int **)v33 + 10);
    v141 = (void **)off_26D3F68;
    *(int *)((char *)v33 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
    v142 = 0;
    result = (unsigned int)sub_21B6560(v33 + 13);
    v107 = v147;
    if ( v147 )
      v108 = (unsigned int *)(v147 + 4);
          result = __ldrex(v108);
        while ( __strex(result - 1, v108) );
        result = (*v108)--;
      if ( result == 1 )
        v109 = (unsigned int *)(v107 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 8))(v107);
            result = __ldrex(v109);
          while ( __strex(result - 1, v109) );
          result = (*v109)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v107 + 12))(v107);
  }
  return result;
}


void __fastcall ScreenView::_sendPointerHeldEvents(ScreenView *this)
{
  ScreenView::_sendPointerHeldEvents(this);
}


unsigned int __fastcall ScreenView::closeOnPlayerHurt(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent20getCloseOnPlayerHurtEv(v1);
}


void __fastcall ScreenView::_updateFocusControl(ScreenView *this, int a2)
{
  ScreenView::_updateFocusControl(this, a2);
}


void __fastcall ScreenView::onFocusGained(ScreenView *this)
{
  ScreenView *v1; // r4@1
  __int64 v2; // r0@1
  __int64 v3; // kr00_8@1
  __int64 v4; // r2@1
  __int64 v5; // r0@1
  __int64 v6; // r5@1
  int v12; // r0@1
  int v13; // r1@1
  void *v14; // r6@3
  void *v15; // r9@3
  int v16; // r0@5
  int v17; // r3@7
  int v18; // r5@7
  int v19; // r7@7
  int v20; // r0@7
  int v21; // r3@7
  int v22; // r5@7
  int v23; // r7@7
  int v24; // r0@10
  int v25; // r3@10
  int v26; // r5@10
  int v27; // r7@10
  int v28; // r3@10
  int v29; // r5@10
  int v30; // r7@10
  int v31; // r0@10
  UIControl **v32; // r5@18 OVERLAPPED
  UIControl **v33; // r6@18 OVERLAPPED
  float v34; // [sp+0h] [bp-58h]@1
  int v35; // [sp+8h] [bp-50h]@1
  int v36; // [sp+Ch] [bp-4Ch]@1
  char v37; // [sp+10h] [bp-48h]@1
  __int64 v38; // [sp+18h] [bp-40h]@1
  void *ptr; // [sp+24h] [bp-34h]@1
  void *v40; // [sp+28h] [bp-30h]@1
  int v41; // [sp+2Ch] [bp-2Ch]@1
  char v42; // [sp+30h] [bp-28h]@1

  v1 = this;
  ScreenView::resize(this);
  VisualTree::setClearPersistantMeshes(*((VisualTree **)v1 + 33), 1);
  *((_QWORD *)v1 + 56) = *((_QWORD *)v1 + 57);
  sub_21E034C(&v42);
  v2 = *(_QWORD *)&v42;
  *((_QWORD *)v1 + 57) = *(_QWORD *)&v42;
  v3 = *((_QWORD *)v1 + 56);
  v4 = *((_QWORD *)v1 + 58);
  v5 = v2 - *((_QWORD *)v1 + 56);
  HIDWORD(v6) = (unsigned __int64)(v5 + v4) >> 32;
  LODWORD(v6) = v5 + v4;
  _R0 = _aeabi_l2f(v5 + v4, HIDWORD(v6));
  __asm
  {
    VMOV            S2, R0
    VLDR            S0, =1.0e-9
  }
  *((_QWORD *)v1 + 58) = v6;
  __asm { VMUL.F32        S0, S2, S0 }
  ptr = 0;
  v40 = 0;
  v41 = 0;
    VMUL.F32        S2, S0, S0
    VSTR            S0, [SP,#0x58+var_58]
    VSTR            S2, [SP,#0x58+var_54]
  v35 = 0;
  v36 = 0;
  v37 = 1;
  v38 = v3;
  LODWORD(v6) = AnimationController::tickFixedTimestep(*((unsigned __int64 **)v1 + 74), (int)&v34, (unsigned int)&ptr);
  v12 = AnimationController::tickRenderTimestep(*((_DWORD *)v1 + 74), (int)&v34, (unsigned int)&ptr);
  v13 = (int)v1 + 464;
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 4) = 0;
  if ( (v12 | (unsigned int)v6) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 33) + 36))();
  v15 = v40;
  v14 = ptr;
  if ( v40 != ptr )
    if ( ptr != v40 )
    {
      v16 = *((_DWORD *)v1 + 8);
      do
      {
        if ( v16 == *((_DWORD *)v1 + 10) - 32 )
        {
          if ( (unsigned int)((*((_QWORD *)v1 + 1) >> 32)
                            - ((signed int)(*((_DWORD *)v1 + 11) - *((_QWORD *)v1 + 1)) >> 2)) <= 1 )
            std::deque<ScreenEvent,std::allocator<ScreenEvent>>::_M_reallocate_map((int)v1 + 8, 1u, 0);
          *(_DWORD *)(*((_DWORD *)v1 + 11) + 4) = operator new(0x200u);
          v24 = *((_DWORD *)v1 + 8);
          v25 = *((_DWORD *)v14 + 1);
          v26 = *((_DWORD *)v14 + 2);
          v27 = *((_DWORD *)v14 + 3);
          *(_DWORD *)v24 = *(_DWORD *)v14;
          *(_DWORD *)(v24 + 4) = v25;
          *(_DWORD *)(v24 + 8) = v26;
          *(_DWORD *)(v24 + 12) = v27;
          v24 += 16;
          v28 = *((_DWORD *)v14 + 5);
          v29 = *((_DWORD *)v14 + 6);
          v30 = *((_DWORD *)v14 + 7);
          *(_DWORD *)v24 = *((_DWORD *)v14 + 4);
          *(_DWORD *)(v24 + 4) = v28;
          *(_DWORD *)(v24 + 8) = v29;
          *(_DWORD *)(v24 + 12) = v30;
          v31 = *((_DWORD *)v1 + 11);
          *((_DWORD *)v1 + 11) = v31 + 4;
          v16 = *(_DWORD *)(v31 + 4);
          *((_DWORD *)v1 + 9) = v16;
          *((_DWORD *)v1 + 10) = v16 + 512;
        }
        else
          v17 = *((_DWORD *)v14 + 1);
          v18 = *((_DWORD *)v14 + 2);
          v19 = *((_DWORD *)v14 + 3);
          *(_DWORD *)v16 = *(_DWORD *)v14;
          *(_DWORD *)(v16 + 4) = v17;
          *(_DWORD *)(v16 + 8) = v18;
          *(_DWORD *)(v16 + 12) = v19;
          v20 = v16 + 16;
          v21 = *((_DWORD *)v14 + 5);
          v22 = *((_DWORD *)v14 + 6);
          v23 = *((_DWORD *)v14 + 7);
          *(_DWORD *)v20 = *((_DWORD *)v14 + 4);
          *(_DWORD *)(v20 + 4) = v21;
          *(_DWORD *)(v20 + 8) = v22;
          *(_DWORD *)(v20 + 12) = v23;
          v16 = *((_DWORD *)v1 + 8) + 32;
        v14 = (char *)v14 + 32;
        *((_DWORD *)v1 + 8) = v16;
      }
      while ( v15 != v14 );
      v14 = ptr;
    }
    v40 = v14;
  ScreenView::_handleDirtyVisualTree(v1, 1, 0);
  if ( (unsigned int)(*((_DWORD *)v1 + 84) - 3) <= 1 )
    *((_DWORD *)v1 + 101) = 0;
    *((_DWORD *)v1 + 102) = 0;
    *((_DWORD *)v1 + 103) = 0;
    *((_DWORD *)v1 + 104) = 0;
    *((_DWORD *)v1 + 105) = 0;
    *((_DWORD *)v1 + 106) = 0;
    *((_DWORD *)v1 + 107) = 0;
    *((_DWORD *)v1 + 108) = 0;
    *((_BYTE *)v1 + 48) = 1;
    if ( *((_DWORD *)v1 + 85) != 2 )
      FocusManager::setActive(*((FocusManager **)v1 + 87), 1);
    *((_BYTE *)v1 + 48) = 0;
    FocusManager::validateFocusControl(*((FocusManager **)v1 + 87));
    ScreenView::_updateFocusControl(v1, 0);
    ScreenView::_handleDirtyVisualTree(v1, 1, 0);
  (*(void (**)(void))(**((_DWORD **)v1 + 31) + 8))();
  for ( *(_QWORD *)&v32 = *((_QWORD *)v1 + 20); v33 != v32; v32 += 2 )
    UIControl::notifyLayoutChange(*v32);
  (*(void (**)(void))(**((_DWORD **)v1 + 33) + 20))();
  if ( ptr )
    operator delete(ptr);
}


signed int __fastcall ScreenView::_addToControlCollection(signed int result, UIControl *a2, signed int a3)
{
  UIControl *v3; // r4@1
  signed int v4; // r5@1
  int v5; // r1@4
  unsigned int v6; // r2@5
  unsigned int *v7; // r1@5
  unsigned int v8; // r3@8
  unsigned int v9; // r6@9
  int v10; // r2@10
  __int64 v11; // kr00_8@10
  int v12; // r0@11
  int v13; // r1@17
  unsigned int v14; // r2@18
  unsigned int *v15; // r1@18
  unsigned int v16; // r3@21
  unsigned int v17; // r6@22
  int v18; // r2@23
  __int64 v19; // kr08_8@23
  int v20; // r0@24
  int v21; // r0@27
  int v22; // r2@27
  int v23; // r1@31
  unsigned int v24; // r2@32
  unsigned int *v25; // r1@32
  unsigned int v26; // r3@35
  unsigned int v27; // r6@36
  int v28; // r2@37
  __int64 v29; // kr10_8@37
  int v30; // r0@38
  int v31; // r1@40
  unsigned int v32; // r2@41
  unsigned int *v33; // r1@41
  unsigned int v34; // r3@44
  unsigned int v35; // r6@45
  int v36; // r2@46
  __int64 v37; // kr18_8@46
  int v38; // r0@47
  int v39; // r1@50
  unsigned int v40; // r2@51
  unsigned int *v41; // r1@51
  unsigned int v42; // r3@54
  unsigned int v43; // r6@55
  int v44; // r2@56
  __int64 v45; // kr20_8@56
  int v46; // r0@57
  int v47; // r1@59
  unsigned int v48; // r2@60
  unsigned int *v49; // r1@60
  unsigned int v50; // r3@63
  unsigned int v51; // r6@64
  int v52; // r2@65
  __int64 v53; // kr28_8@65
  int v54; // r0@66
  int v55; // r1@71
  unsigned int v56; // r2@72
  unsigned int *v57; // r1@72
  unsigned int v58; // r3@75
  unsigned int v59; // r6@76
  int v60; // r2@77
  __int64 v61; // kr30_8@77
  int v62; // r0@78
  int v63; // r5@79
  unsigned int *v64; // r1@80
  unsigned int v65; // r0@82
  int v66; // r5@84
  unsigned int *v67; // r1@85
  unsigned int v68; // r0@87
  int v69; // r5@89
  unsigned int *v70; // r1@90
  unsigned int v71; // r0@92
  int v72; // r5@94
  unsigned int *v73; // r1@95
  unsigned int v74; // r0@97
  int v75; // r5@99
  unsigned int *v76; // r1@100
  unsigned int v77; // r0@102
  int v78; // r5@104
  unsigned int *v79; // r1@105
  unsigned int v80; // r0@107
  int v81; // r5@109
  unsigned int *v82; // r1@110
  unsigned int v83; // r0@112
  unsigned int *v84; // r6@116
  unsigned int v85; // r0@118
  unsigned int *v86; // r6@122
  unsigned int v87; // r0@124
  unsigned int *v88; // r6@128
  unsigned int v89; // r0@130
  unsigned int *v90; // r6@134
  unsigned int v91; // r0@136
  unsigned int *v92; // r6@140
  unsigned int v93; // r0@142
  unsigned int *v94; // r6@146
  unsigned int v95; // r0@148
  unsigned int *v96; // r6@152
  unsigned int v97; // r0@154
  UIControl *v98; // r0@159
  int v99; // r1@159
  int v100; // [sp+0h] [bp-48h]@10
  int v101; // [sp+4h] [bp-44h]@4
  int v102; // [sp+8h] [bp-40h]@56
  int v103; // [sp+Ch] [bp-3Ch]@50
  int v104; // [sp+10h] [bp-38h]@46
  int v105; // [sp+14h] [bp-34h]@40
  int v106; // [sp+18h] [bp-30h]@77
  int v107; // [sp+1Ch] [bp-2Ch]@71
  int v108; // [sp+20h] [bp-28h]@65
  int v109; // [sp+24h] [bp-24h]@59
  int v110; // [sp+28h] [bp-20h]@37
  int v111; // [sp+2Ch] [bp-1Ch]@31
  int v112; // [sp+30h] [bp-18h]@23
  int v113; // [sp+34h] [bp-14h]@17

  v3 = a2;
  v4 = result;
  if ( a3 <= 63 )
  {
    switch ( a3 )
    {
      case 1:
        result = UIControl::hasControlCollectionFlag(a2, 1);
        if ( result )
          return result;
        v5 = *((_DWORD *)v3 + 2);
        v101 = v5;
        if ( !v5 )
          std::__throw_bad_weak_ptr();
        v6 = *(_DWORD *)(v5 + 4);
        v7 = (unsigned int *)(v5 + 4);
        do
        {
          while ( 2 )
          {
            if ( !v6 )
              goto LABEL_186;
            __dmb();
            v8 = __ldrex(v7);
            if ( v8 != v6 )
            {
              __clrex();
              v6 = v8;
              continue;
            }
            break;
          }
          v9 = __strex(v6 + 1, v7);
          v6 = v8;
        }
        while ( v9 );
        __dmb();
        v10 = *((_DWORD *)v3 + 1);
        v100 = *((_DWORD *)v3 + 1);
        v11 = *(_QWORD *)(v4 + 140);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
            (_QWORD *)(v4 + 136),
            (int)&v100);
          v63 = v101;
          if ( v101 )
            v64 = (unsigned int *)(v101 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
            else
              v65 = (*v64)--;
            if ( v65 == 1 )
              v84 = (unsigned int *)(v63 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v85 = __ldrex(v84);
                while ( __strex(v85 - 1, v84) );
              }
              else
                v85 = (*v84)--;
              if ( v85 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
        else
          *(_DWORD *)v11 = v10;
          v12 = v101;
          v101 = 0;
          *(_DWORD *)(v11 + 4) = v12;
          v100 = 0;
          *(_DWORD *)(v4 + 140) = v11 + 8;
        v98 = v3;
        v99 = 1;
        return UIControl::addControlCollectionFlag(v98, v99);
      case 8:
        result = UIControl::hasControlCollectionFlag(a2, 8);
        v31 = *((_DWORD *)v3 + 2);
        v105 = v31;
        if ( !v31 )
        v32 = *(_DWORD *)(v31 + 4);
        v33 = (unsigned int *)(v31 + 4);
            if ( !v32 )
            v34 = __ldrex(v33);
            if ( v34 != v32 )
              v32 = v34;
          v35 = __strex(v32 + 1, v33);
          v32 = v34;
        while ( v35 );
        v36 = *((_DWORD *)v3 + 1);
        v104 = *((_DWORD *)v3 + 1);
        v37 = *(_QWORD *)(v4 + 188);
        if ( (_DWORD)v37 == HIDWORD(v37) )
            (_QWORD *)(v4 + 184),
            (int)&v104);
          v66 = v105;
          if ( v105 )
            v67 = (unsigned int *)(v105 + 4);
                v68 = __ldrex(v67);
              while ( __strex(v68 - 1, v67) );
              v68 = (*v67)--;
            if ( v68 == 1 )
              v86 = (unsigned int *)(v66 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 8))(v66);
                  v87 = __ldrex(v86);
                while ( __strex(v87 - 1, v86) );
                v87 = (*v86)--;
              if ( v87 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 12))(v66);
          *(_DWORD *)v37 = v36;
          v38 = v105;
          v105 = 0;
          *(_DWORD *)(v37 + 4) = v38;
          v104 = 0;
          *(_DWORD *)(v4 + 188) = v37 + 8;
        v99 = 8;
      case 2:
        v21 = result + 148;
        v22 = 2;
        goto LABEL_69;
      case 4:
        result = UIControl::hasControlCollectionFlag(a2, 4);
        v39 = *((_DWORD *)v3 + 2);
        v103 = v39;
        if ( !v39 )
        v40 = *(_DWORD *)(v39 + 4);
        v41 = (unsigned int *)(v39 + 4);
            if ( !v40 )
            v42 = __ldrex(v41);
            if ( v42 != v40 )
              v40 = v42;
          v43 = __strex(v40 + 1, v41);
          v40 = v42;
        while ( v43 );
        v44 = *((_DWORD *)v3 + 1);
        v102 = *((_DWORD *)v3 + 1);
        v45 = *(_QWORD *)(v4 + 212);
        if ( (_DWORD)v45 == HIDWORD(v45) )
            (_QWORD *)(v4 + 208),
            (int)&v102);
          v69 = v103;
          if ( v103 )
            v70 = (unsigned int *)(v103 + 4);
                v71 = __ldrex(v70);
              while ( __strex(v71 - 1, v70) );
              v71 = (*v70)--;
            if ( v71 == 1 )
              v88 = (unsigned int *)(v69 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v69 + 8))(v69);
                  v89 = __ldrex(v88);
                while ( __strex(v89 - 1, v88) );
                v89 = (*v88)--;
              if ( v89 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v69 + 12))(v69);
          *(_DWORD *)v45 = v44;
          v46 = v103;
          v103 = 0;
          *(_DWORD *)(v45 + 4) = v46;
          v102 = 0;
          *(_DWORD *)(v4 + 212) = v45 + 8;
        v99 = 4;
      case 3:
      case 5:
      case 6:
      case 7:
        return result;
      default:
        if ( a3 != 16 )
          if ( a3 != 32 )
            return result;
          v21 = result + 160;
          v22 = 32;
          goto LABEL_69;
        result = UIControl::hasControlCollectionFlag(a2, 16);
        v55 = *((_DWORD *)v3 + 2);
        v107 = v55;
        if ( !v55 )
        v56 = *(_DWORD *)(v55 + 4);
        v57 = (unsigned int *)(v55 + 4);
          while ( 1 )
            if ( !v56 )
            v58 = __ldrex(v57);
            if ( v58 == v56 )
              break;
            __clrex();
            v56 = v58;
          v59 = __strex(v56 + 1, v57);
          v56 = v58;
        while ( v59 );
        v60 = *((_DWORD *)v3 + 1);
        v106 = *((_DWORD *)v3 + 1);
        v61 = *(_QWORD *)(v4 + 200);
        if ( (_DWORD)v61 == HIDWORD(v61) )
            (_QWORD *)(v4 + 196),
            (int)&v106);
          v81 = v107;
          if ( v107 )
            v82 = (unsigned int *)(v107 + 4);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 == 1 )
              v96 = (unsigned int *)(v81 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 8))(v81);
                  v97 = __ldrex(v96);
                while ( __strex(v97 - 1, v96) );
                v97 = (*v96)--;
              if ( v97 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 12))(v81);
          *(_DWORD *)v61 = v60;
          v62 = v107;
          v107 = 0;
          *(_DWORD *)(v61 + 4) = v62;
          v106 = 0;
          *(_DWORD *)(v4 + 200) = v61 + 8;
        v99 = 16;
        break;
    }
    return UIControl::addControlCollectionFlag(v98, v99);
  }
  if ( a3 <= 255 )
    if ( a3 == 64 )
      result = UIControl::hasControlCollectionFlag(a2, 64);
      if ( result )
      v47 = *((_DWORD *)v3 + 2);
      v109 = v47;
      if ( !v47 )
        std::__throw_bad_weak_ptr();
      v48 = *(_DWORD *)(v47 + 4);
      v49 = (unsigned int *)(v47 + 4);
      do
      {
        while ( 1 )
          if ( !v48 )
LABEL_186:
            std::__throw_bad_weak_ptr();
          __dmb();
          v50 = __ldrex(v49);
          if ( v50 == v48 )
          __clrex();
          v48 = v50;
        v51 = __strex(v48 + 1, v49);
        v48 = v50;
      }
      while ( v51 );
      __dmb();
      v52 = *((_DWORD *)v3 + 1);
      v108 = *((_DWORD *)v3 + 1);
      v53 = *(_QWORD *)(v4 + 236);
      if ( (_DWORD)v53 == HIDWORD(v53) )
        std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
          (_QWORD *)(v4 + 232),
          (int)&v108);
        v72 = v109;
        if ( v109 )
          v73 = (unsigned int *)(v109 + 4);
          if ( &pthread_create )
            do
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
          else
            v74 = (*v73)--;
          if ( v74 == 1 )
            v90 = (unsigned int *)(v72 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
                v91 = __ldrex(v90);
              while ( __strex(v91 - 1, v90) );
              v91 = (*v90)--;
            if ( v91 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
      else
        *(_DWORD *)v53 = v52;
        v54 = v109;
        v109 = 0;
        *(_DWORD *)(v53 + 4) = v54;
        v108 = 0;
        *(_DWORD *)(v4 + 236) = v53 + 8;
      v98 = v3;
      v99 = 64;
      return UIControl::addControlCollectionFlag(v98, v99);
    if ( a3 == 128 )
      result = UIControl::hasControlCollectionFlag(a2, 128);
      if ( !result )
        v23 = *((_DWORD *)v3 + 2);
        v111 = v23;
        if ( !v23 )
        v24 = *(_DWORD *)(v23 + 4);
        v25 = (unsigned int *)(v23 + 4);
            if ( !v24 )
            v26 = __ldrex(v25);
            if ( v26 == v24 )
            v24 = v26;
          v27 = __strex(v24 + 1, v25);
          v24 = v26;
        while ( v27 );
        v28 = *((_DWORD *)v3 + 1);
        v110 = *((_DWORD *)v3 + 1);
        v29 = *(_QWORD *)(v4 + 248);
        if ( (_DWORD)v29 == HIDWORD(v29) )
            (_QWORD *)(v4 + 244),
            (int)&v110);
          v75 = v111;
          if ( v111 )
            v76 = (unsigned int *)(v111 + 4);
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
          *(_DWORD *)v29 = v28;
          v30 = v111;
          v111 = 0;
          *(_DWORD *)(v29 + 4) = v30;
          v110 = 0;
          *(_DWORD *)(v4 + 248) = v29 + 8;
        v99 = 128;
  else if ( a3 == 256 )
    v21 = result + 220;
    v22 = 256;
LABEL_69:
    result = sub_1300C90(v21, a2, v22);
  else
    if ( a3 == 512 )
      return j_j_j__ZN12FocusManager10addControlER9UIControl(*(FocusManager **)(result + 348), a2);
    if ( a3 == 1024 )
      result = UIControl::hasControlCollectionFlag(a2, 1024);
        v13 = *((_DWORD *)v3 + 2);
        v113 = v13;
        if ( !v13 )
        v14 = *(_DWORD *)(v13 + 4);
        v15 = (unsigned int *)(v13 + 4);
            if ( !v14 )
            v16 = __ldrex(v15);
            if ( v16 == v14 )
            v14 = v16;
          v17 = __strex(v14 + 1, v15);
          v14 = v16;
        while ( v17 );
        v18 = *((_DWORD *)v3 + 1);
        v112 = *((_DWORD *)v3 + 1);
        v19 = *(_QWORD *)(v4 + 260);
        if ( (_DWORD)v19 == HIDWORD(v19) )
            (_QWORD *)(v4 + 256),
            (int)&v112);
          v78 = v113;
          if ( v113 )
            v79 = (unsigned int *)(v113 + 4);
                v80 = __ldrex(v79);
              while ( __strex(v80 - 1, v79) );
              v80 = (*v79)--;
            if ( v80 == 1 )
              v94 = (unsigned int *)(v78 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 8))(v78);
                  v95 = __ldrex(v94);
                while ( __strex(v95 - 1, v94) );
                v95 = (*v94)--;
              if ( v95 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 12))(v78);
          *(_DWORD *)v19 = v18;
          v20 = v113;
          v113 = 0;
          *(_DWORD *)(v19 + 4) = v20;
          v112 = 0;
          *(_DWORD *)(v4 + 260) = v19 + 8;
        v99 = 1024;
  return result;
}


void __fastcall ScreenView::_handleSliderMovement(ScreenView *this)
{
  int v1; // r8@0
  int v3; // r11@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  char v9; // r0@10
  int v10; // r7@13
  char v15; // r0@17
  int v16; // r7@20
  int v17; // r0@20
  int v18; // r5@25
  int v19; // r7@25
  int v20; // r0@26
  unsigned int *v21; // r2@27
  unsigned int v22; // r1@29
  unsigned int v23; // r0@43
  unsigned int *v24; // r5@47
  unsigned int v25; // r0@49
  __int64 v26; // [sp+Ch] [bp-44h]@15
  void *ptr; // [sp+14h] [bp-3Ch]@15
  __int64 v28; // [sp+20h] [bp-30h]@25

  _R5 = this;
  v3 = *((_DWORD *)this + 89);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
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
          _ZF = *v5 == 0;
          if ( *v5 )
          {
            v1 = *((_DWORD *)_R5 + 88);
            _ZF = v1 == 0;
          }
          if ( _ZF )
            goto LABEL_56;
          v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
          if ( !(v9 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
            type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
          v10 = type_id<UIComponent,SliderComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,SliderComponent>(void)::id[0]) != 1
            || !*(_DWORD *)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v10)) )
          ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
          v26 = *(_QWORD *)((char *)_R5 + 404);
          _R0 = getTimeS();
          __asm
            VMOV            D0, R0, R1
            VLDR            D1, [R5,#0x50]
            VMOV.F32        S4, #0.5
            VLDR            S6, =0.0
            VSUB.F64        D0, D0, D1
            VCVT.F32.F64    S0, D0
            VCMPE.F32       S0, S4
            VMRS            APSR_nzcv, FPSCR
            VMOV.F32        S2, #20.0
            VMUL.F32        S2, S0, S2
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S2, S6 }
            VLDR            S0, [SP,#0x50+var_44]
            VMUL.F32        S0, S2, S0
            VSTR            S0, [SP,#0x50+var_44]
            VLDR            S0, [SP,#0x50+var_44+4]
            VSTR            S0, [SP,#0x50+var_44+4]
          v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
          if ( !(v15 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
            type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
          v16 = type_id<UIComponent,InputComponent>(void)::id[0];
          _ZF = UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,InputComponent>(void)::id[0]) == 1;
          v17 = 0;
            v17 = *(_DWORD *)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v16));
          if ( InputComponent::handleControllerDirection(
                 v17,
                 *((_DWORD *)_R5 + 33),
                 *((_DWORD *)_R5 + 74),
                 (int)&ptr,
                 0,
                 &v26,
                 0) == 1 )
            *((_BYTE *)_R5 + 508) = 0;
          ScreenView::_processEvents(_R5, (ScreenInputContext *)&ptr);
          v19 = HIDWORD(v28);
          v18 = v28;
          if ( (_DWORD)v28 != HIDWORD(v28) )
            do
            {
              v20 = *(_DWORD *)(v18 + 8);
              if ( v20 )
              {
                v21 = (unsigned int *)(v20 + 8);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v22 = __ldrex(v21);
                  while ( __strex(v22 - 1, v21) );
                }
                else
                  v22 = (*v21)--;
                if ( v22 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v20 + 12))();
              }
              v18 += 12;
            }
            while ( v18 != v19 );
            v18 = v28;
          if ( v18 )
            operator delete((void *)v18);
          if ( ptr )
            operator delete(ptr);
          if ( v3 )
LABEL_56:
            if ( &pthread_create )
              __dmb();
              do
                v23 = __ldrex(v5);
              while ( __strex(v23 - 1, v5) );
            else
              v23 = (*v5)--;
            if ( v23 == 1 )
              v24 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
                __dmb();
                do
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
              else
                v25 = (*v24)--;
              if ( v25 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


void __fastcall ScreenView::handleHoloInputModeChanged(int a1, int a2)
{
  ScreenView::handleHoloInputModeChanged(a1, a2);
}


int __fastcall ScreenView::terminate(ScreenView *this)
{
  ScreenView *v1; // r4@1
  int v2; // r1@1
  unsigned int *v3; // r2@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 31) + 12))();
  return j_j_j__ZN10ScreenView16_deselectControlEv(v1, v2, v3);
}


char *__fastcall ScreenView::_updateKeyboardVisibility(ScreenView *this, int a2, unsigned int *a3)
{
  int v3; // r8@0
  ScreenView *v4; // r4@1
  int v5; // r5@1
  unsigned int *v6; // r6@3
  unsigned int v7; // r0@3
  unsigned int v8; // r1@6
  char v10; // r0@11
  int v11; // r7@14
  TextEditComponent *v12; // r0@15
  unsigned int v13; // r0@19
  bool v14; // zf@23
  unsigned int *v15; // r6@27
  unsigned int v16; // r0@27
  unsigned int v17; // r1@30
  bool v18; // zf@32
  char v19; // r0@35
  int v20; // r7@38
  TextEditComponent *v21; // r7@39
  int v26; // r9@40
  void (__fastcall *v27)(int, int *, int, signed int); // r11@40
  int v28; // r8@40
  void *v29; // r0@40
  unsigned int v30; // r0@43
  char *result; // r0@47
  float v32; // r0@48
  unsigned int *v33; // r6@52
  unsigned int v34; // r0@54
  unsigned int *v35; // r6@58
  unsigned int v36; // r0@60
  signed int v37; // r1@70
  int v38; // [sp+10h] [bp-38h]@40
  __int64 v39; // [sp+14h] [bp-34h]@40

  v4 = this;
  v5 = *((_DWORD *)this + 83);
  if ( v5 && *(_DWORD *)(v5 + 4) >= 1 )
  {
    v6 = (unsigned int *)(v5 + 4);
    v7 = *(_DWORD *)(v5 + 4);
    while ( v7 )
    {
      __dmb();
      v8 = __ldrex(v6);
      if ( v8 == v7 )
      {
        a3 = (unsigned int *)__strex(v7 + 1, v6);
        v7 = v8;
        if ( !a3 )
        {
          __dmb();
          _ZF = *v6 == 0;
          if ( *v6 )
          {
            v3 = *((_DWORD *)v4 + 82);
            _ZF = v3 == 0;
          }
          if ( !_ZF )
            v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
            __dmb();
            if ( !(v10 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
            {
              type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
            }
            v11 = type_id<UIComponent,TextEditComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
              v12 = *(TextEditComponent **)(*(_DWORD *)(v3 + 108)
                                          + 4 * UIControl::_getComponentIndex((UIControl *)v3, v11));
              if ( v12 )
                TextEditComponent::updateCaretBlink(v12, *((float *)v4 + 19));
          if ( &pthread_create )
            do
              v13 = __ldrex(v6);
              a3 = (unsigned int *)__strex(v13 - 1, v6);
            while ( a3 );
          else
            v13 = (*v6)--;
          if ( v13 == 1 )
            v33 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
              {
                v34 = __ldrex(v33);
                a3 = (unsigned int *)__strex(v34 - 1, v33);
              }
              while ( a3 );
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          break;
        }
      }
      else
        __clrex();
    }
  }
  else
    *((_BYTE *)this + 480) = 0;
  if ( *((_BYTE *)v4 + 481) )
    v14 = *((_BYTE *)v4 + 480) == 0;
    if ( *((_BYTE *)v4 + 480) )
      v5 = *((_DWORD *)v4 + 83);
      v14 = v5 == 0;
    if ( v14 || *(_DWORD *)(v5 + 4) < 1 )
      (*(void (**)(void))(**((_DWORD **)v4 + 121) + 16))();
      ScreenView::_setKeyboardHeight(v4, 0.0);
    else
      v15 = (unsigned int *)(v5 + 4);
      v16 = *(_DWORD *)(v5 + 4);
      while ( v16 )
        __dmb();
        v17 = __ldrex(v15);
        if ( v17 == v16 )
          a3 = (unsigned int *)__strex(v16 + 1, v15);
          v16 = v17;
          if ( !a3 )
            v18 = *v15 == 0;
            if ( *v15 )
              v3 = *((_DWORD *)v4 + 82);
              v18 = v3 == 0;
            if ( v18 )
              goto LABEL_79;
            v19 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
            if ( !(v19 & 1)
            v20 = type_id<UIComponent,TextEditComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) != 1 )
            v21 = *(TextEditComponent **)(*(_DWORD *)(v3 + 108) + 4
                                                                * UIControl::_getComponentIndex((UIControl *)v3, v20));
            if ( !v21 )
            v39 = *(_QWORD *)UIControl::getPosition((UIControl *)v3);
            _R0 = UIControl::getSize((UIControl *)v3);
            __asm
              VLDR            S0, [SP,#0x48+var_34+4]
              VLDR            S2, [R0,#4]
              VADD.F32        S0, S0, S2
              VSTR            S0, [SP,#0x48+var_34+4]
            v26 = *((_DWORD *)v4 + 121);
            v27 = *(void (__fastcall **)(int, int *, int, signed int))(*(_DWORD *)v26 + 8);
            TextEditComponent::getText((TextEditComponent *)&v38, (int)v21);
            v28 = TextEditComponent::getMaxLength(v21);
            TextEditComponent::isNumbersOnly(v21);
            TextEditComponent::getEnabledNewline(v21);
            v27(v26, &v38, v28, 1);
            a3 = (unsigned int *)&dword_28898C0;
            v29 = (void *)(v38 - 12);
            if ( (int *)(v38 - 12) == &dword_28898C0 )
            a3 = (unsigned int *)(v38 - 4);
                v37 = __ldrex(a3);
              while ( __strex(v37 - 1, a3) );
              v37 = (*a3)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
            if ( v5 )
LABEL_79:
              if ( &pthread_create )
                __dmb();
                do
                {
                  v30 = __ldrex(v15);
                  a3 = (unsigned int *)__strex(v30 - 1, v15);
                }
                while ( a3 );
              else
                v30 = (*v15)--;
              if ( v30 == 1 )
                v35 = (unsigned int *)(v5 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
                if ( &pthread_create )
                  __dmb();
                  do
                  {
                    v36 = __ldrex(v35);
                    a3 = (unsigned int *)__strex(v36 - 1, v35);
                  }
                  while ( a3 );
                else
                  v36 = (*v35)--;
                if ( v36 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
            break;
        else
          __clrex();
    *((_BYTE *)v4 + 481) = 0;
  result = (char *)*((_BYTE *)v4 + 480);
  if ( *((_BYTE *)v4 + 480) )
    v32 = COERCE_FLOAT((*(int (__cdecl **)(_DWORD, _DWORD, unsigned int *))(**((_DWORD **)v4 + 121) + 32))(*((_DWORD *)v4 + 121), *(_DWORD *)(**((_DWORD **)v4 + 121) + 32), a3));
    result = ScreenView::_setKeyboardHeight(v4, v32);
  return result;
}


void __fastcall ScreenView::handleHoloInputModeChanged(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r10@1
  __int64 v4; // r0@1
  int *i; // r4@1
  int *v6; // r11@1
  int v7; // r7@2
  char v8; // r0@2
  int v9; // r5@5
  UIComponent *v10; // r0@6
  __int64 v11; // r4@13
  int v12; // r0@14
  unsigned int *v13; // r2@15
  unsigned int v14; // r1@17
  int v15; // [sp+8h] [bp-60h]@1
  void *ptr; // [sp+Ch] [bp-5Ch]@1
  __int64 v17; // [sp+18h] [bp-50h]@13
  char v18; // [sp+24h] [bp-44h]@1
  int v19; // [sp+28h] [bp-40h]@1

  v2 = a2;
  v3 = a1;
  v15 = a2;
  *(_DWORD *)(a1 + 340) = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v18);
  *(_DWORD *)&v18 = 8;
  v19 = v2;
  LODWORD(v4) = ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  ScreenInputContext::enqueueEvent(v4);
  v6 = (int *)(*(_QWORD *)(v3 + 148) >> 32);
  for ( i = (int *)*(_QWORD *)(v3 + 148); v6 != i; i += 2 )
  {
    v7 = *i;
    v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
    __dmb();
    if ( !(v8 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
    {
      type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
    }
    v9 = type_id<UIComponent,InputComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
      v10 = *(UIComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9));
      if ( v10 )
        InputComponent::handleHoloInputModeChange(v10, *(_DWORD *)(v3 + 132), *(_DWORD *)(v3 + 296), (int)&ptr, v15);
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 336) - 3) < 2 && *(_DWORD *)(v3 + 340) != 2 )
    FocusManager::setActive(*(FocusManager **)(v3 + 348), 1);
  else
    FocusManager::setActive(*(FocusManager **)(v3 + 348), 0);
  ScreenView::_processEvents((ScreenView *)v3, (ScreenInputContext *)&ptr);
  v11 = v17;
  if ( (_DWORD)v17 != HIDWORD(v17) )
    do
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v12 + 12))();
      }
      LODWORD(v11) = v11 + 12;
    while ( (_DWORD)v11 != HIDWORD(v11) );
    LODWORD(v11) = v17;
  if ( (_DWORD)v11 )
    operator delete((void *)v11);
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ScreenView::_findModalRootControl(ScreenView *this, int a2)
{
  ScreenView *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  __int64 v7; // r0@3
  int v8; // r4@4
  unsigned int *v9; // r5@11
  int v10; // r4@18
  unsigned int *v11; // r5@25
  int v13; // [sp+0h] [bp-28h]@4
  int v14; // [sp+4h] [bp-24h]@4
  _DWORD *v15; // [sp+8h] [bp-20h]@1
  __int64 v16; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = *(_DWORD *)(a2 + 132);
  v5 = operator new(4u);
  LODWORD(v6) = sub_130B060;
  *v5 = v2;
  HIDWORD(v6) = sub_130AEF8;
  v15 = v5;
  v16 = v6;
  VisualTree::visitTree(v4, 0, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  LODWORD(v7) = *(_DWORD *)v2;
  if ( !*(_DWORD *)v2 )
  {
    VisualTree::getRootControl((VisualTree *)&v13, *(_DWORD *)(v3 + 132));
    v7 = *(_QWORD *)&v13;
    v13 = 0;
    v14 = 0;
    *(_DWORD *)v2 = v7;
    v8 = *((_DWORD *)v2 + 1);
    *((_DWORD *)v2 + 1) = HIDWORD(v7);
    if ( v8 )
    {
      HIDWORD(v7) = v8 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          LODWORD(v7) = __ldrex((unsigned int *)HIDWORD(v7));
        while ( __strex(v7 - 1, (unsigned int *)HIDWORD(v7)) );
      }
      else
        LODWORD(v7) = (*(_DWORD *)HIDWORD(v7))--;
      if ( (_DWORD)v7 == 1 )
        v9 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            LODWORD(v7) = __ldrex(v9);
          while ( __strex(v7 - 1, v9) );
        }
        else
          LODWORD(v7) = (*v9)--;
        if ( (_DWORD)v7 == 1 )
          LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
    v10 = v14;
    if ( v14 )
      HIDWORD(v7) = v14 + 4;
        v11 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            LODWORD(v7) = __ldrex(v11);
          while ( __strex(v7 - 1, v11) );
          LODWORD(v7) = (*v11)--;
          LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  return v7;
}


void __fastcall ScreenView::_fireTextChangedEvent(int a1, char a2, int a3, __int16 a4, int a5, int a6)
{
  int v6; // r4@1
  __int16 v7; // r5@1
  int v8; // r6@1
  char v9; // r7@1
  char v10; // r0@1
  int v11; // r1@1
  __int64 v12; // r0@4
  __int64 v13; // r4@4
  int v14; // r0@5
  unsigned int *v15; // r2@6
  unsigned int v16; // r1@8
  void *ptr; // [sp+0h] [bp-50h]@4
  __int64 v18; // [sp+Ch] [bp-44h]@4
  int v19; // [sp+18h] [bp-38h]@1
  __int16 v20; // [sp+1Ch] [bp-34h]@1
  int v21; // [sp+20h] [bp-30h]@1
  char v22; // [sp+24h] [bp-2Ch]@1
  int v23; // [sp+28h] [bp-28h]@1
  int v24; // [sp+2Ch] [bp-24h]@1
  char v25; // [sp+30h] [bp-20h]@4

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v19);
  v19 = 12;
  v20 = v7;
  v21 = a5;
  v22 = v9;
  v23 = a6;
  v24 = v8;
  v10 = 0;
  v11 = *(_DWORD *)(v6 + 332);
  if ( v11 && *(_DWORD *)(v11 + 4) > 0 )
    v10 = 1;
  v25 = v10;
  LODWORD(v12) = ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  ScreenInputContext::enqueueEvent(v12);
  ScreenView::_processEvents((ScreenView *)v6, (ScreenInputContext *)&ptr);
  v13 = v18;
  if ( (_DWORD)v18 != HIDWORD(v18) )
  {
    do
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( v14 )
      {
        v15 = (unsigned int *)(v14 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v14 + 12))();
      }
      LODWORD(v13) = v13 + 12;
    }
    while ( (_DWORD)v13 != HIDWORD(v13) );
    LODWORD(v13) = v18;
  }
  if ( (_DWORD)v13 )
    operator delete((void *)v13);
  if ( ptr )
    operator delete(ptr);
}


_DWORD *__fastcall ScreenView::_processControllerDirection(int a1, unsigned int a2)
{
  unsigned int v3; // r9@1
  _DWORD *result; // r0@1
  int v5; // r0@2
  signed int v9; // r8@5
  __int64 v10; // kr00_8@19
  int v11; // r6@19
  int v12; // r0@19
  _DWORD *v13; // r11@20
  int v14; // r5@20
  bool v15; // zf@25
  _DWORD *v16; // r0@29
  int v17; // r3@30
  int v18; // r11@30
  int v19; // r5@30
  int v22; // r4@37
  unsigned int v23; // r0@38
  unsigned int *v24; // r7@38
  unsigned int v25; // r1@41
  unsigned int v26; // r2@42
  bool v27; // zf@43
  char v28; // r0@46
  _BOOL4 v29; // r0@49
  int v30; // r0@50
  unsigned int v31; // r0@57
  unsigned int *v32; // r7@61
  unsigned int v33; // r0@63
  void (__fastcall *v34)(int); // r1@67
  int v35; // r0@67
  int v36; // r4@67
  signed int v37; // r0@68
  bool v38; // zf@77
  bool v41; // zf@86
  __int64 v42; // kr10_8@92
  int v43; // r10@92
  _DWORD *v44; // r5@93
  int v45; // r7@93
  bool v46; // zf@98
  _DWORD *v47; // r0@102
  unsigned int *v48; // r5@107
  int v49; // [sp+4h] [bp-44h]@49
  UIControl *v50; // [sp+8h] [bp-40h]@0
  int v51; // [sp+Ch] [bp-3Ch]@46
  int v52; // [sp+Ch] [bp-3Ch]@61
  int v53; // [sp+10h] [bp-38h]@2
  int v54; // [sp+14h] [bp-34h]@19

  _R10 = a1;
  v3 = a2;
  result = (_DWORD *)*(_BYTE *)(a1 + 508);
  if ( result )
  {
    v5 = getTimeMs();
    _ZF = v3 == 3;
    v53 = v5;
    if ( v3 != 3 )
      _ZF = v3 == 0;
    if ( _ZF )
    {
      _R0 = _R10 + 8 * v3;
      __asm
      {
        VLDR            S0, [R0,#0x194]
        VLDR            S2, [R0,#0x198]
        VABS.F32        S6, S0
        VABS.F32        S4, S2
        VCMPE.F32       S6, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VLDR            S0, [R10,#0x190]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VNEG.F32        S0, S0
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v9 = 2;
          else
            v9 = 0;
        else
          v9 = 1;
      else
          VLDR            S2, [R10,#0x18C]
          VCMPE.F32       S0, S2
            VNEG.F32        S2, S2
            VCMPE.F32       S0, S2
            v9 = 3;
          v9 = 4;
    }
    else
      v9 = 0;
    v10 = *(_QWORD *)(_R10 + 360);
    v11 = v3 % (unsigned int)(*(_QWORD *)(_R10 + 360) >> 32);
    v12 = *(_DWORD *)(v10 + 4 * v11);
    v54 = _R10 + 360;
    if ( !v12 )
      goto LABEL_29;
    v13 = *(_DWORD **)v12;
    v14 = *(_DWORD *)(*(_DWORD *)v12 + 4);
    while ( v14 != v3 )
      if ( *v13 )
        v14 = *(_DWORD *)(v10 + 4);
        v12 = (int)v13;
        v13 = (_DWORD *)*v13;
        if ( *(_DWORD *)(v10 + 4) % HIDWORD(v10) == v11 )
          continue;
    v15 = v12 == 0;
    if ( v12 )
      v12 = *(_DWORD *)v12;
      v15 = v12 == 0;
    if ( v15 )
LABEL_29:
      v16 = operator new(0xCu);
      *v16 = 0;
      v16[1] = v3;
      *((_BYTE *)v16 + 8) = 0;
      v12 = std::_Hashtable<int,std::pair<int const,ui::CardinalDirection>,std::allocator<std::pair<int const,ui::CardinalDirection>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v54,
              v11,
              v3,
              (int)v16);
    v18 = *(_QWORD *)(_R10 + 388) >> 32;
    v17 = *(_QWORD *)(_R10 + 388);
    v19 = *(_BYTE *)(v12 + 8);
    if ( (unsigned int)(v9 - 3) < 2 )
      __asm { VLDR            S16, [R0,#0x194] }
    else if ( (unsigned int)(v9 - 1) > 1 )
      __asm { VLDR            S16, =0.0 }
      __asm { VLDR            S16, [R0,#0x198] }
    if ( !v3 && (unsigned __int8)(v9 - 3) <= 1u )
      v22 = *(_DWORD *)(_R10 + 356);
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 4);
        v24 = (unsigned int *)(v22 + 4);
        while ( v23 )
          __dmb();
          v25 = __ldrex(v24);
          if ( v25 == v23 )
            v26 = __strex(v23 + 1, v24);
            v23 = v25;
            if ( !v26 )
            {
              __dmb();
              v27 = *v24 == 0;
              if ( *v24 )
              {
                v50 = *(UIControl **)(_R10 + 352);
                v27 = v50 == 0;
              }
              if ( !v27 )
                v51 = v17;
                v28 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
                __dmb();
                if ( !(v28 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
                {
                  type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
                }
                v49 = type_id<UIComponent,SliderComponent>(void)::id[0];
                v29 = UIControl::_hasComponent(v50, type_id<UIComponent,SliderComponent>(void)::id[0]);
                v17 = v51;
                if ( v29 == 1 )
                  v30 = UIControl::_getComponentIndex(v50, v49);
                  v17 = v51;
                  if ( *(_DWORD *)(*((_DWORD *)v50 + 27) + 4 * v30) )
                  {
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        result = (_DWORD *)__ldrex(v24);
                      while ( __strex((unsigned int)result - 1, v24) );
                    }
                    else
                      result = (_DWORD *)(*v24)--;
                    if ( result == (_DWORD *)1 )
                      v48 = (unsigned int *)(v22 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          result = (_DWORD *)__ldrex(v48);
                        while ( __strex((unsigned int)result - 1, v48) );
                      }
                      else
                        result = (_DWORD *)(*v48)--;
                      if ( result == (_DWORD *)1 )
                        result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
                    return result;
                  }
              if ( &pthread_create )
                do
                  v31 = __ldrex(v24);
                while ( __strex(v31 - 1, v24) );
              else
                v31 = (*v24)--;
              if ( v31 == 1 )
                v52 = v17;
                v32 = (unsigned int *)(v22 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
                if ( &pthread_create )
                  __dmb();
                  v17 = v52;
                  do
                    v33 = __ldrex(v32);
                  while ( __strex(v33 - 1, v32) );
                else
                  v33 = (*v32)--;
                if ( v33 == 1 )
                  v34 = *(void (__fastcall **)(int))(*(_DWORD *)v22 + 12);
                  v35 = v22;
                  v36 = v17;
                  v34(v35);
                  v17 = v36;
              break;
            }
            __clrex();
    v37 = 0;
    if ( v19 == v9 )
      v37 = 1;
    if ( !v9 )
      goto LABEL_116;
    if ( v37 != 1 )
    __asm
      VABS.F32        S0, S16
      VLDR            S2, =0.8
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
LABEL_116:
      if ( v19 != v9 )
        if ( !v3 && (_BYTE)v9 )
          goto LABEL_117;
        v38 = v9 == 4;
        if ( v9 != 4 )
          v38 = v9 == 2;
        if ( v38 )
LABEL_117:
          ScreenView::_selectNextFocusObject(_R10);
        *(_DWORD *)(_R10 + 388) = v53;
      _VF = __OFSUB__(v53 - v17, 250);
      _NF = v53 - v17 - 250 < 0;
      if ( v53 - v17 >= 250 )
        _VF = __OFSUB__(v53 - v18, 66);
        _NF = v53 - v18 - 66 < 0;
      if ( !(_NF ^ _VF) )
        v41 = v3 == 0;
        if ( v3 )
          v41 = v9 == 4;
        if ( v41 || v9 == 2 )
        *(_DWORD *)(_R10 + 392) = v53;
    v42 = *(_QWORD *)(_R10 + 360);
    v43 = v3 % (unsigned int)(*(_QWORD *)(_R10 + 360) >> 32);
    result = *(_DWORD **)(v42 + 4 * v43);
    if ( !result )
      goto LABEL_102;
    v44 = (_DWORD *)*result;
    v45 = *(_DWORD *)(*result + 4);
    while ( v45 != v3 )
      if ( *v44 )
        v45 = *(_DWORD *)(v42 + 4);
        result = v44;
        v44 = (_DWORD *)*v44;
        if ( *(_DWORD *)(v42 + 4) % HIDWORD(v42) == v43 )
    v46 = result == 0;
    if ( result )
      result = (_DWORD *)*result;
      v46 = result == 0;
    if ( v46 )
LABEL_102:
      v47 = operator new(0xCu);
      *v47 = 0;
      v47[1] = v3;
      *((_BYTE *)v47 + 8) = 0;
      result = (_DWORD *)std::_Hashtable<int,std::pair<int const,ui::CardinalDirection>,std::allocator<std::pair<int const,ui::CardinalDirection>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                           v54,
                           v43,
                           v3,
                           (int)v47);
    *((_BYTE *)result + 8) = v9;
  }
  return result;
}


char *__fastcall ScreenView::onGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  char *result; // r0@7
  UIControl *v11; // r7@11
  char v12; // r0@15
  int v13; // r1@18
  unsigned int *v14; // r2@18
  unsigned int *v15; // r1@21
  unsigned int *v16; // r5@27

  v2 = a1;
  v3 = a2;
  (*(void (**)(void))(**(_DWORD **)(a1 + 124) + 32))();
  (*(void (**)(void))(**(_DWORD **)(v2 + 132) + 20))();
  v4 = *(_DWORD *)(v2 + 332);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6;
          result = 0;
          if ( !v9 )
            result = (char *)1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  result = (char *)1;
  v4 = 0;
LABEL_11:
  v11 = *(UIControl **)(v2 + 328);
  if ( result )
    v11 = 0;
  if ( v3 == 17 && v11 )
    v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
    __dmb();
    if ( !(v12 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
      type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
    result = (char *)UIControl::_hasComponent(v11, type_id<UIComponent,TextEditComponent>(void)::id[0]);
    if ( result == (char *)1 )
      *(_WORD *)(v2 + 480) = 257;
      result = ScreenView::_updateKeyboardVisibility((ScreenView *)v2, v13, v14);
    v15 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        result = (char *)__ldrex(v15);
      while ( __strex((unsigned int)(result - 1), v15) );
    else
      result = (char *)(*v15)--;
      v16 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          result = (char *)__ldrex(v16);
        while ( __strex((unsigned int)(result - 1), v16) );
        result = (char *)(*v16)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


unsigned int __fastcall ScreenView::getShouldSendEvents(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent19getShouldSendEventsEv(v1);
}


void __fastcall ScreenView::_sendPointerHeldEvents(ScreenView *this)
{
  char v6; // r0@3
  char v7; // r1@3
  __int64 v8; // r0@7
  __int64 v9; // r4@7
  int v10; // r0@8
  unsigned int *v11; // r2@9
  unsigned int v12; // r1@11
  void *ptr; // [sp+0h] [bp-50h]@7
  __int64 v14; // [sp+Ch] [bp-44h]@7
  int v15; // [sp+18h] [bp-38h]@3
  char v16; // [sp+2Ch] [bp-24h]@7
  char v17; // [sp+34h] [bp-1Ch]@3

  _R4 = this;
  __asm
  {
    VLDR            S0, [R4,#0x3C]
    VLDR            S2, [R4,#0x4C]
    VSUB.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VSTR            S0, [R4,#0x3C]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF || *((_BYTE *)this + 444) )
    ScreenEvent::ScreenEvent((ScreenEvent *)&v15);
    v6 = 0;
    v17 = 0;
    v15 = 4;
    v7 = 0;
    __asm
    {
      VLDR            S0, [R4,#0x38]
      VLDR            S6, [R4,#0x1B8]
      VLDR            S2, [R4,#0x34]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R4,#0x1B4]
      VSUB.F32        S2, S2, S4
      VMOV.F32        S4, #5.0
      VABS.F32        S0, S0
      VABS.F32        S2, S2
      VCMPE.F32       S0, S4
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v7 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
      v6 = 1;
    v16 = v6 | v7;
    LODWORD(v8) = ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
    ScreenInputContext::enqueueEvent(v8);
    ScreenView::_processEvents(_R4, (ScreenInputContext *)&ptr);
    *((_DWORD *)_R4 + 15) = *((_DWORD *)_R4 + 16);
    v9 = v14;
    if ( (_DWORD)v14 != HIDWORD(v14) )
      do
      {
        v10 = *(_DWORD *)(v9 + 8);
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
        LODWORD(v9) = v9 + 12;
      }
      while ( (_DWORD)v9 != HIDWORD(v9) );
      LODWORD(v9) = v14;
    if ( (_DWORD)v9 )
      operator delete((void *)v9);
    if ( ptr )
      operator delete(ptr);
}


void __fastcall ScreenView::handleTextChar(int a1, const void **a2, int a3, int a4)
{
  ScreenView::handleTextChar(a1, a2, a3, a4);
}


unsigned int __fastcall ScreenView::isShowingMenu(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent16getIsShowingMenuEv(v1);
}


void __fastcall ScreenView::_processEvents(ScreenView *this, ScreenInputContext *a2)
{
  ScreenView::_processEvents(this, a2);
}


void __fastcall ScreenView::_fireTextChangedEventTextEditControl(int a1, TextEditComponent *a2, char a3, int a4)
{
  TextEditComponent *v4; // r6@1
  int v5; // r7@1
  int v6; // r8@1
  char v7; // r9@1
  __int16 v8; // r4@1
  int v9; // r5@1
  int v10; // r0@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = TextEditComponent::getTextEditComponentId(a2);
  v9 = TextEditComponent::getCollectionIndex(v4);
  v10 = TextEditComponent::getLabelPropertyBag(v4);
  ScreenView::_fireTextChangedEvent(v5, v7, v6, v8, v9, v10);
}


void __fastcall ScreenView::_advanceToNextToggleInNavigationTabGroup(ScreenView *this, int a2)
{
  ScreenView::_advanceToNextToggleInNavigationTabGroup(this, a2);
}


int __fastcall ScreenView::_updateMeasureStrategy(int result, UIMeasureStrategy *a2)
{
  UIMeasureStrategy *v2; // r8@1
  int *v3; // r4@1
  int *v4; // r7@1
  __int64 v5; // r10@2
  int v6; // r6@3
  _DWORD *v7; // r0@3
  _DWORD *v8; // [sp+0h] [bp-38h]@3
  __int64 v9; // [sp+8h] [bp-30h]@3
  char v10; // [sp+13h] [bp-25h]@1

  v2 = a2;
  v10 = 0;
  v3 = (int *)(*(_QWORD *)(result + 232) >> 32);
  v4 = (int *)*(_QWORD *)(result + 232);
  if ( v4 != v3 )
  {
    LODWORD(v5) = sub_130B182;
    HIDWORD(v5) = sub_130B162;
    do
    {
      v6 = *v4;
      v7 = operator new(8u);
      *v7 = &v10;
      v7[1] = v2;
      v8 = v7;
      v9 = v5;
      result = UIControl::foreachRenderableComponents(v6, (int)&v8);
      if ( (_DWORD)v9 )
        result = ((int (__fastcall *)(_DWORD **, _DWORD **, signed int))v9)(&v8, &v8, 3);
      v4 += 2;
    }
    while ( v3 != v4 );
  }
  return result;
}


signed int __fastcall ScreenView::_checkIsTextEditControl(ScreenView *this, UIControl *a2)
{
  UIControl **v2; // r0@1
  UIControl **v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2
  UIControl *v6; // t1@6

  v4 = *((_QWORD *)this + 26);
  v2 = (UIControl **)(*((_QWORD *)this + 26) >> 32);
  v3 = (UIControl **)v4;
  if ( (UIControl **)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v3;
      v3 += 2;
      if ( v6 == a2 )
        break;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall ScreenView::_setupControlFactoryCallbacks(ScreenView *this)
{
  ScreenView *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  int v4; // r5@3
  _DWORD *v5; // r0@3
  int v6; // r5@5
  _DWORD *v7; // r0@5
  int result; // r0@5
  _DWORD *v9; // [sp+0h] [bp-40h]@5
  int (__cdecl *v10)(_DWORD); // [sp+8h] [bp-38h]@5
  int (__fastcall *v11)(int **, const void **); // [sp+Ch] [bp-34h]@5
  _DWORD *v12; // [sp+10h] [bp-30h]@3
  void (*v13)(void); // [sp+18h] [bp-28h]@3
  int (__fastcall *v14)(int **, const void **, const void **); // [sp+1Ch] [bp-24h]@3
  _DWORD *v15; // [sp+20h] [bp-20h]@1
  void (*v16)(void); // [sp+28h] [bp-18h]@1
  int (__fastcall *v17)(int **, const void **, int); // [sp+2Ch] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 31);
  v3 = operator new(4u);
  *v3 = v1;
  v15 = v3;
  v16 = (void (*)(void))sub_1309B18;
  v17 = sub_13099EC;
  ScreenController::setControlFactoryCreateCallback(v2, (int)&v15);
  if ( v16 )
    v16();
  v4 = *((_DWORD *)v1 + 31);
  v5 = operator new(4u);
  *v5 = v1;
  v12 = v5;
  v13 = (void (*)(void))sub_1309C34;
  v14 = sub_1309B50;
  ScreenController::setControlFactoryDestroyCallback(v4, (int)&v12);
  if ( v13 )
    v13();
  v6 = *((_DWORD *)v1 + 31);
  v7 = operator new(4u);
  *v7 = v1;
  v9 = v7;
  v10 = (int (__cdecl *)(_DWORD))sub_1309D4C;
  v11 = sub_1309C6C;
  result = ScreenController::setControlFactoryDestroyAllCallback(v6, (int)&v9);
  if ( v10 )
    result = v10(&v9);
  return result;
}


unsigned __int64 __fastcall ScreenView::_bindData(ScreenView *this, int a2)
{
  int v8; // r4@4
  void (__fastcall *v9)(int, char *); // r5@4
  int v10; // r4@4
  unsigned int *v11; // r1@5
  unsigned int v12; // r0@7
  unsigned int *v13; // r5@11
  unsigned int v14; // r0@13
  char *v15; // r0@19
  int *v16; // r1@19
  int *v17; // r8@19
  int *v18; // r9@20
  int v19; // r6@21
  char v20; // r0@21
  int v21; // r5@24
  int v22; // r0@25
  DataBindingComponent *v23; // r5@25
  ScreenController *v24; // r4@27
  int v25; // r0@27
  int v26; // r5@28
  _DWORD *v27; // r0@28
  int *v28; // r7@33
  void (*v29)(void); // r2@34
  int v30; // r1@34
  unsigned int *v31; // r1@35
  unsigned int v32; // r3@37
  int v33; // r4@40
  unsigned int *v34; // r1@41
  unsigned int v35; // r0@43
  unsigned int *v36; // r6@47
  unsigned int v37; // r0@49
  int *v38; // r9@57
  int v39; // r6@58
  char v40; // r0@58
  int v41; // r5@61
  int v42; // r0@62
  DataBindingComponent *v43; // r5@62
  ScreenController *v44; // r4@64
  int v45; // r0@64
  int v46; // r5@65
  _DWORD *v47; // r0@65
  int *v48; // r6@69
  int v49; // r4@70
  unsigned int *v50; // r1@71
  unsigned int v51; // r0@73
  unsigned int *v52; // r7@77
  unsigned int v53; // r0@79
  __int64 v58; // [sp+0h] [bp-90h]@0
  int *ptr; // [sp+Ch] [bp-84h]@19
  int v60; // [sp+10h] [bp-80h]@1
  ScreenView *v61; // [sp+14h] [bp-7Ch]@1
  _DWORD *v62; // [sp+18h] [bp-78h]@65
  int (__fastcall *v63)(void **, _QWORD **, int); // [sp+20h] [bp-70h]@65
  signed int (__fastcall *v64)(int **, int); // [sp+24h] [bp-6Ch]@65
  int v65; // [sp+28h] [bp-68h]@34
  int v66; // [sp+2Ch] [bp-64h]@34
  _DWORD *v67; // [sp+30h] [bp-60h]@28
  int (__fastcall *v68)(void **, _QWORD **, int); // [sp+38h] [bp-58h]@28
  signed int (__fastcall *v69)(int **, int); // [sp+3Ch] [bp-54h]@28
  char v70; // [sp+40h] [bp-50h]@4
  int v71; // [sp+44h] [bp-4Ch]@4
  int v72; // [sp+48h] [bp-48h]@1
  double v73; // [sp+50h] [bp-40h]@1
  unsigned int v75; // [sp+60h] [bp-30h]@1

  v60 = a2;
  v61 = this;
  v73 = 0.0;
  v75 = 24;
  v72 = unk_27F636C;
  unk_27F636C = &v72;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x90+var_40]
    VSTR            D0, [SP,#0x90+var_38]
  }
  _R2 = v72;
  if ( v72 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  if ( VisualTree::needsControlBindsFromRoot(*((VisualTree **)v61 + 33)) == 1 )
    VisualTree::clearControlsToBind(*((VisualTree **)v61 + 33));
    v8 = *((_DWORD *)v61 + 33);
    v9 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v8 + 44);
    VisualTree::getRootControl((VisualTree *)&v70, *((_DWORD *)v61 + 33));
    v9(v8, &v70);
    v10 = v71;
    if ( v71 )
      v11 = (unsigned int *)(v71 + 4);
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
    VisualTree::clearBindUpdateFromRoot(*((VisualTree **)v61 + 33));
  v15 = VisualTree::getControlsToBind(*((VisualTree **)v61 + 33));
  v16 = *(int **)v15;
  *(_DWORD *)v15 = 0;
  v17 = (int *)*((_DWORD *)v15 + 1);
  ptr = v16;
  *((_DWORD *)v15 + 1) = 0;
  *((_DWORD *)v15 + 2) = 0;
  if ( v16 != v17 )
    v18 = v16;
    while ( 1 )
      v19 = *v18;
      v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
      __dmb();
      if ( !(v20 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
        type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
      v21 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v19, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1 )
        goto LABEL_28;
      v22 = UIControl::_getComponentIndex((UIControl *)v19, v21);
      v23 = *(DataBindingComponent **)(*(_DWORD *)(v19 + 108) + 4 * v22);
      if ( !v23 )
      if ( ScreenView::_shouldBindChildren((ScreenView *)v22, v60, (UIControl *)v19, v23) == 1 )
        break;
LABEL_30:
      v18 += 2;
      if ( v17 == v18 )
        goto LABEL_31;
    v24 = (ScreenController *)*((_DWORD *)v61 + 31);
    v25 = UIControl::isVisibleInTree((UIControl *)v19);
    DataBindingComponent::bindHighPriorityBinds(v23, v24, v25);
LABEL_28:
    v26 = *v18;
    v68 = 0;
    v27 = operator new(8u);
    *v27 = v61;
    v27[1] = v60;
    v67 = v27;
    v69 = sub_13055CC;
    v68 = sub_130567C;
    UIControl::applyToChildrenConditional(v26, (int)&v67);
    if ( v68 )
      v68((void **)&v67, (_QWORD **)&v67, 3);
    goto LABEL_30;
LABEL_31:
  if ( !VisualTree::hasControlsToUpdate(*((VisualTree **)v61 + 33)) )
    if ( ptr == v17 )
      goto LABEL_85;
    v38 = ptr;
      v39 = *v38;
      v40 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
      if ( !(v40 & 1)
      v41 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v39, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1 )
        goto LABEL_65;
      v42 = UIControl::_getComponentIndex((UIControl *)v39, v41);
      v43 = *(DataBindingComponent **)(*(_DWORD *)(v39 + 108) + 4 * v42);
      if ( !v43 )
      if ( ScreenView::_shouldBindChildren((ScreenView *)v42, v60, (UIControl *)v39, v43) == 1 )
LABEL_67:
      v38 += 2;
      if ( v17 == v38 )
        goto LABEL_68;
    v44 = (ScreenController *)*((_DWORD *)v61 + 31);
    v45 = UIControl::isVisibleInTree((UIControl *)v39);
    DataBindingComponent::bindLowPriorityBinds(v43, v44, v45);
LABEL_65:
    v46 = *v38;
    v63 = 0;
    v47 = operator new(8u);
    *v47 = v61;
    v47[1] = v60;
    v62 = v47;
    v64 = sub_13056B8;
    v63 = sub_1305768;
    UIControl::applyToChildrenConditional(v46, (int)&v62);
    if ( v63 )
      v63((void **)&v62, (_QWORD **)&v62, 3);
    goto LABEL_67;
  if ( ptr != v17 )
    v28 = ptr;
    do
      v29 = *(void (**)(void))(**((_DWORD **)v61 + 33) + 44);
      v65 = *v28;
      v30 = v28[1];
      v66 = v30;
      if ( v30 )
        v31 = (unsigned int *)(v30 + 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 + 1, v31) );
          ++*v31;
      v29();
      v33 = v66;
      if ( v66 )
        v34 = (unsigned int *)(v66 + 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          v36 = (unsigned int *)(v33 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
      v28 += 2;
    while ( v28 != v17 );
LABEL_68:
    if ( ptr != v17 )
      v48 = ptr;
      do
        v49 = v48[1];
        if ( v49 )
          v50 = (unsigned int *)(v49 + 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 == 1 )
            v52 = (unsigned int *)(v49 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
            if ( &pthread_create )
            {
              __dmb();
              do
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
            }
            else
              v53 = (*v52)--;
            if ( v53 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
        v48 += 2;
      while ( v48 != v17 );
LABEL_85:
  if ( ptr )
    operator delete(ptr);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x90+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x90+var_40]
    VLDR            D0, [SP,#0x90+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v72;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x90+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v72;
  __asm { VSTR            D0, [SP,#0x90+var_90] }
  return __PAIR__(v75, ProfilerLite::_endScope(_R0, _R2, _R3, v58));
}


unsigned int __fastcall ScreenView::renderOnlyWhenTopMost(ScreenView *this)
{
  unsigned int v1; // r4@2
  int v2; // r5@4
  unsigned int *v3; // r1@5
  unsigned int v4; // r0@7
  unsigned int *v5; // r6@11
  unsigned int v6; // r0@13
  UIControl *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@4

  VisualTree::getRootControl((VisualTree *)&v8, *((_DWORD *)this + 33));
  if ( v8 )
    v1 = UIControl::getRenderOnlyWhenTopmost(v8);
  else
    v1 = 1;
  v2 = v9;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
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
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return v1;
}


void __fastcall ScreenView::_directionChanged(int a1, int a2, int a3)
{
  bool v3; // zf@3

  if ( !a2 && a3 )
    goto LABEL_10;
  v3 = a3 == 4;
  if ( a3 != 4 )
    v3 = a3 == 2;
  if ( v3 )
LABEL_10:
    j_j_j__ZN10ScreenView22_selectNextFocusObjectEN2ui17CardinalDirectionE(a1);
}


signed int __fastcall ScreenView::_growRenderAABB(ScreenView *this, UIControl *a2, RectangleArea *a3)
{
  UIControl *v3; // r5@1
  RectangleArea *v4; // r4@1
  RectangleArea *v14; // r0@1
  signed int result; // r0@1
  int v16; // [sp+0h] [bp-38h]@0
  char v17; // [sp+8h] [bp-30h]@2
  char v18; // [sp+18h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  _R6 = UIControl::getPosition(a2);
  _R0 = UIControl::getSize(v3);
  __asm
  {
    VLDR            S0, [R6]
    VLDR            S4, [R0]
    VLDR            S2, [R6,#4]
    VMOV            R1, S0
    VADD.F32        S4, S4, S0
    VLDR            S6, [R0,#4]
    VMOV            R2, S2
    VADD.F32        S0, S6, S2
    VMOV            R3, S4
    VSTR            S0, [SP,#0x38+var_38]
  }
  v14 = (RectangleArea *)RectangleArea::RectangleArea(COERCE_FLOAT(&v18), _R1, _R2, _R3, v16);
  result = RectangleArea::isEmpty(v14);
  if ( !result )
    RectangleArea::unionRects((RectangleArea *)&v17, v4, (int)&v18);
    result = RectangleArea::operator=((int)v4, (int)&v17);
  return result;
}


int __fastcall ScreenView::_forwardEventToAnimationControls(int result, const ScreenEvent *a2)
{
  int v2; // r9@1
  int *i; // r5@1
  int *v4; // r10@1
  int v5; // r7@2
  char v6; // r0@2
  int v7; // r4@5
  int v8; // r1@6
  AnimationComponent *v9; // r7@6
  ScreenEvent *v10; // [sp+0h] [bp-28h]@1

  v2 = result;
  v10 = a2;
  v4 = (int *)(*(_QWORD *)(result + 184) >> 32);
  for ( i = (int *)*(_QWORD *)(result + 184); v4 != i; i += 2 )
  {
    v5 = *i;
    v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
    __dmb();
    if ( !(v6 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
    {
      type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
    }
    v7 = type_id<UIComponent,AnimationComponent>(void)::id[0];
    result = UIControl::_hasComponent((UIControl *)v5, type_id<UIComponent,AnimationComponent>(void)::id[0]);
    if ( result == 1 )
      result = UIControl::_getComponentIndex((UIControl *)v5, v7);
      v8 = *(_DWORD *)(v5 + 108);
      v9 = *(AnimationComponent **)(v8 + 4 * result);
      if ( v9 )
      {
        result = AnimationComponent::isEventListener(*(AnimationComponent **)(v8 + 4 * result));
        if ( result == 1 )
          result = AnimationComponent::handleScreenEvent(v9, *(AnimationController **)(v2 + 296), v10);
      }
  }
  return result;
}


signed __int64 __fastcall ScreenView::_handleDirtyVisualTree(ScreenView *this, int a2, int a3)
{
  ScreenView *v3; // r4@1
  int v4; // r11@1
  int v5; // r10@1
  int v12; // r8@6
  FocusManager *v13; // r9@6
  int v14; // r6@6
  unsigned int v15; // r5@12
  int v16; // r10@14
  UIControl *v17; // r7@14
  int v18; // r8@14
  UIControl *v19; // r9@14
  unsigned int *v20; // r1@15
  unsigned int v21; // r0@17
  unsigned int *v22; // r5@21
  unsigned int v23; // r0@23
  unsigned int v24; // r5@36
  signed int v25; // r5@41
  int v26; // r0@49
  int v27; // r5@49
  int v28; // r10@52
  int v29; // r7@53
  void (__fastcall *v30)(int, int); // r8@53
  int v31; // r0@53
  __int64 v32; // r6@58
  char i; // r5@58
  char v34; // r0@59
  int v35; // r5@65
  int v36; // r6@71
  void (__fastcall *v37)(int, int); // r7@71
  int v38; // r0@71
  int v39; // r4@75
  unsigned int *v40; // r1@76
  unsigned int v41; // r0@78
  unsigned int *v42; // r5@82
  unsigned int v43; // r0@84
  __int64 v48; // [sp+0h] [bp-68h]@0
  int v49; // [sp+8h] [bp-60h]@14
  int v50; // [sp+8h] [bp-60h]@52
  char v51; // [sp+10h] [bp-58h]@6
  int v52; // [sp+14h] [bp-54h]@14
  UIControl *v53; // [sp+18h] [bp-50h]@4
  int v54; // [sp+1Ch] [bp-4Ch]@75
  int v55; // [sp+20h] [bp-48h]@1
  double v56; // [sp+28h] [bp-40h]@1
  unsigned int v58; // [sp+38h] [bp-30h]@1

  v3 = this;
  v4 = a2;
  v56 = 0.0;
  v5 = a3;
  v58 = 22;
  v55 = unk_27F636C;
  unk_27F636C = &v55;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x68+var_40]
    VSTR            D0, [SP,#0x68+var_38]
  }
  _R2 = v55;
  if ( v55 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  if ( (*(int (**)(void))(**((_DWORD **)v3 + 33) + 8))() )
    FocusManager::getFocusedControl((FocusManager *)&v53, *((_DWORD *)v3 + 87));
    if ( (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() )
      VisualTree::removeDirtyFlag(*((_DWORD *)v3 + 33), 1);
      (*(void (**)(void))(**((_DWORD **)v3 + 33) + 48))();
    v12 = (int)v3 + 512;
    v13 = (FocusManager *)&v51;
    v14 = 0;
    while ( VisualTree::hasControlsToUpdate(*((VisualTree **)v3 + 33))
         || VisualTree::hasControlsToBind(*((VisualTree **)v3 + 33))
         || (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))()
         || (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() == 1 )
      if ( VisualTree::hasControlsToUpdate(*((VisualTree **)v3 + 33)) == 1 )
      {
        getTimeS();
        v15 = ScreenView::_updateControlCollections(v3, 0);
        v14 |= v15;
      }
      if ( (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() == 1 )
        VisualTree::removeDirtyFlag(*((_DWORD *)v3 + 33), 2);
        FocusManager::getFocusedControl(v13, *((_DWORD *)v3 + 87));
        v49 = v5;
        v16 = v12;
        v17 = *(UIControl **)&v51;
        v18 = v52;
        v19 = v53;
        if ( v52 )
        {
          v20 = (unsigned int *)(v52 + 4);
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
            v22 = (unsigned int *)(v18 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
        }
        v12 = v16;
        v5 = v49;
        _ZF = v19 == v17;
        v13 = (FocusManager *)&v51;
        if ( _ZF )
          ScreenView::_selectNextFocusObject((int)v3);
        VisualTree::removeDirtyFlag(*((_DWORD *)v3 + 33), 1);
        (*(void (**)(void))(**((_DWORD **)v3 + 33) + 48))();
      if ( VisualTree::hasControlsToBind(*((VisualTree **)v3 + 33)) == 1 )
        ScreenView::_bindData(v3, v5);
      while ( VisualTree::hasControlsToUpdate(*((VisualTree **)v3 + 33)) == 1 )
        v24 = ScreenView::_updateControlCollections(v3, 0);
        v14 |= v24;
      ScreenView::_updateMeasureStrategy(v3, *((UIMeasureStrategy **)v3 + 126));
      if ( (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() == 1
        && !LayoutManager::update(*((LayoutManager **)v3 + 86), *((VisualTree **)v3 + 33), v53) )
        VisualTree::removeDirtyFlag(*((_DWORD *)v3 + 33), 4);
        (*(void (**)(void))(**((_DWORD **)v3 + 33) + 20))();
      v25 = (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() ? 1 : VisualTree::hasControlsToUpdate(*((VisualTree **)v3 + 33));
      if ( v14 & 1 )
        ScreenView::_updateFocusControl(v3, v4);
        if ( !v25
          && ((*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))()
           || VisualTree::hasControlsToUpdate(*((VisualTree **)v3 + 33))) )
          break;
      v26 = *((_QWORD *)v3 + 64) >> 32;
      v27 = *((_QWORD *)v3 + 64);
      while ( v27 != v26 )
        if ( *(_DWORD *)(v27 + 16) )
          v27 += 20;
        else
          v50 = v5;
          v28 = v12;
          if ( !*(_DWORD *)(v27 + 8) )
            sub_21E5F48();
          v29 = *((_DWORD *)v3 + 33);
          v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)v29 + 20);
          v31 = (*(int (__fastcall **)(int))(v27 + 12))(v27);
          v30(v29, v31);
          v12 = v28;
          v27 = std::vector<ScreenView::DelayedCommand,std::allocator<ScreenView::DelayedCommand>>::_M_erase(v28, v27);
          v26 = *((_DWORD *)v3 + 129);
          v5 = v50;
    if ( (*(int (**)(void))(**((_DWORD **)v3 + 33) + 12))() == 1 )
      VisualTree::removeDirtyFlag(*((_DWORD *)v3 + 33), 8);
      v32 = *((_QWORD *)v3 + 20);
      for ( i = 0; HIDWORD(v32) != (_DWORD)v32; i |= v34 )
        v34 = UIControl::notifyLayoutChange(*(UIControl **)v32);
        LODWORD(v32) = v32 + 8;
    else
      i = 0;
    FocusManager::requestFocusReset(*((FocusManager **)v3 + 87), 0);
    VisualTree::setDirty(*((VisualTree **)v3 + 33), 0);
    if ( i & 1 )
      ScreenView::_handleScreenViewRefresh(v3);
      sub_130333C((int)v3, (unsigned __int64 *)v3 + 23);
      sub_130333C((int)v3, (unsigned __int64 *)v3 + 20);
      sub_130333C((int)v3, (unsigned __int64 *)v3 + 32);
    v35 = *((_DWORD *)v3 + 128);
    while ( v35 != *((_DWORD *)v3 + 129) )
      if ( *(_DWORD *)(v35 + 16) == 1 )
        if ( !*(_DWORD *)(v35 + 8) )
          sub_21E5F48();
        v36 = *((_DWORD *)v3 + 33);
        v37 = *(void (__fastcall **)(int, int))(*(_DWORD *)v36 + 20);
        v38 = (*(int (__fastcall **)(int))(v35 + 12))(v35);
        v37(v36, v38);
        v35 = std::vector<ScreenView::DelayedCommand,std::allocator<ScreenView::DelayedCommand>>::_M_erase(v12, v35);
      else
        v35 += 20;
    if ( FocusManager::hasRequestedFocusReset(*((FocusManager **)v3 + 87)) == 1 )
      ScreenView::_updateFocusControl(v3, 1);
      (*(void (**)(void))(**((_DWORD **)v3 + 33) + 20))();
    v39 = v54;
    if ( v54 )
      v40 = (unsigned int *)(v54 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        v42 = (unsigned int *)(v39 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
        if ( &pthread_create )
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x68+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x68+var_40]
    VLDR            D0, [SP,#0x68+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v55;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x68+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v55;
  __asm { VSTR            D0, [SP,#0x68+var_68] }
  return __PAIR__(v58, ProfilerLite::_endScope(_R0, _R2, _R3, v48));
}


signed int __fastcall ScreenView::_handleScreenViewRefresh(ScreenView *this)
{
  ScreenView *v1; // r9@1
  int i; // r0@3
  int *v9; // r5@4
  int v10; // r6@4
  unsigned int *v11; // r1@5
  unsigned int v12; // r0@7
  unsigned int *v13; // r7@11
  unsigned int v14; // r0@13
  int v15; // r7@19
  __int64 v16; // kr00_8@19
  _DWORD *v17; // r0@22
  int v18; // r1@23
  unsigned int *v19; // r1@24
  unsigned int v20; // r0@26
  __int64 v21; // r4@32
  int v22; // r0@33
  unsigned int *v23; // r2@34
  unsigned int v24; // r1@36
  int v25; // r4@47
  _DWORD *v26; // r6@47
  int v27; // r7@48
  unsigned int *v28; // r1@49
  unsigned int v29; // r0@51
  unsigned int *v30; // r5@55
  unsigned int v31; // r0@57
  int v32; // r4@66
  unsigned int *v33; // r1@67
  unsigned int v34; // r0@69
  unsigned int *v35; // r5@73
  unsigned int v36; // r0@75
  __int64 v41; // [sp+0h] [bp-C0h]@0
  void *ptr; // [sp+2Ch] [bp-94h]@3
  __int64 v43; // [sp+38h] [bp-88h]@32
  int v44; // [sp+44h] [bp-7Ch]@3
  int v45; // [sp+48h] [bp-78h]@19
  int v46; // [sp+4Ch] [bp-74h]@19
  int v47; // [sp+50h] [bp-70h]@19
  _DWORD *v48; // [sp+64h] [bp-5Ch]@3
  _DWORD *v49; // [sp+68h] [bp-58h]@3
  _DWORD *v50; // [sp+6Ch] [bp-54h]@3
  char v51; // [sp+70h] [bp-50h]@3
  int v52; // [sp+74h] [bp-4Ch]@66
  int v53; // [sp+78h] [bp-48h]@1
  double v54; // [sp+80h] [bp-40h]@1
  int v56; // [sp+90h] [bp-30h]@1

  v1 = this;
  v54 = 0.0;
  v56 = 26;
  v53 = unk_27F636C;
  unk_27F636C = &v53;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0xC0+var_40]
    VSTR            D0, [SP,#0xC0+var_38]
  }
  _R2 = v53;
  if ( v53 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  VisualTree::getRootControl((VisualTree *)&v51, *((_DWORD *)v1 + 33));
  v48 = 0;
  v49 = 0;
  v50 = 0;
  std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>&>(
    (unsigned __int64 *)&v48,
    (int)&v51);
  ScreenEvent::ScreenEvent((ScreenEvent *)&v44);
  v44 = 9;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  for ( i = (int)v49; v48 != v49; i = (int)v49 )
    v9 = (int *)(i - 8);
    v49 = (_DWORD *)(i - 8);
    v10 = *(_DWORD *)(i - 4);
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
    if ( UIControl::getVisible((UIControl *)*v9) == 1 )
      UIControl::broadcastEvent(*v9, *((_DWORD *)v1 + 33), (int)&ptr, *((_DWORD *)v1 + 74), 0, v44, v45, v46, v47);
      v16 = *(_QWORD *)UIControl::getChildren((UIControl *)*v9);
      v15 = v16;
      while ( v15 != HIDWORD(v16) )
        v17 = v49;
        if ( v49 == v50 )
          std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl> const&>(
            (unsigned __int64 *)&v48,
            v15);
          v15 += 8;
          *v49 = *(_DWORD *)v15;
          v18 = *(_DWORD *)(v15 + 4);
          v17[1] = v18;
          if ( v18 )
          {
            v19 = (unsigned int *)(v18 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 + 1, v19) );
              v17 = v49;
            }
            else
              ++*v19;
          }
          v49 = v17 + 2;
      ScreenInputContext::clear((ScreenInputContext *)&ptr);
  v21 = v43;
  if ( (_DWORD)v43 != HIDWORD(v43) )
    do
      v22 = *(_DWORD *)(v21 + 8);
      if ( v22 )
        v23 = (unsigned int *)(v22 + 8);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (**)(void))(*(_DWORD *)v22 + 12))();
      LODWORD(v21) = v21 + 12;
    while ( (_DWORD)v21 != HIDWORD(v21) );
    LODWORD(v21) = v43;
  if ( (_DWORD)v21 )
    operator delete((void *)v21);
  if ( ptr )
    operator delete(ptr);
  v26 = v49;
  v25 = (int)v48;
  if ( v48 != v49 )
      v27 = *(_DWORD *)(v25 + 4);
      if ( v27 )
        v28 = (unsigned int *)(v27 + 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 == 1 )
          v30 = (unsigned int *)(v27 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          if ( &pthread_create )
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          else
            v31 = (*v30)--;
          if ( v31 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
      v25 += 8;
    while ( (_DWORD *)v25 != v26 );
    v25 = (int)v48;
  if ( v25 )
    operator delete((void *)v25);
  v32 = v52;
  if ( v52 )
    v33 = (unsigned int *)(v52 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0xC0+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0xC0+var_40]
    VLDR            D0, [SP,#0xC0+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v53;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0xC0+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v53;
  __asm { VSTR            D0, [SP,#0xC0+var_C0] }
  ProfilerLite::_endScope(_R0, _R2, _R3, v41);
  return 1;
}


int __fastcall ScreenView::getFocusedControl(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 356);
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
  v10 = *(_DWORD *)(a2 + 352);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall ScreenView::screenIsNotFlushable(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent23getScreenIsNotFlushableEv(v1);
}


void __fastcall ScreenView::cacheOnDelete(ScreenView *this, CachedScenes *a2)
{
  CachedScenes *v2; // r4@1
  ScreenView *v3; // r5@1
  ScreenComponent *v4; // r0@1
  int v5; // r6@2
  __int64 v6; // r6@4
  int v7; // r1@6
  int v8; // r1@6
  unsigned int *v9; // r1@7
  unsigned int v10; // r2@9
  int v11; // r1@12
  int v12; // r4@12
  unsigned int *v13; // r1@13
  unsigned int v14; // r0@15
  unsigned int *v15; // r5@19
  unsigned int v16; // r0@21
  int v17; // r4@28
  int v18; // r6@28
  int v19; // r7@29
  unsigned int *v20; // r1@30
  unsigned int v21; // r0@32
  unsigned int *v22; // r5@36
  unsigned int v23; // r0@38
  int v24; // [sp+0h] [bp-48h]@12
  int v25; // [sp+4h] [bp-44h]@6
  int v26; // [sp+8h] [bp-40h]@6
  int v27; // [sp+Ch] [bp-3Ch]@6
  void *v28; // [sp+10h] [bp-38h]@2
  void (*v29)(void); // [sp+18h] [bp-30h]@2
  signed int (*v30)(); // [sp+1Ch] [bp-2Ch]@2
  int v31; // [sp+20h] [bp-28h]@2
  int v32; // [sp+24h] [bp-24h]@4

  v2 = a2;
  v3 = this;
  v4 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  if ( ScreenComponent::getCacheScreen(v4) == 1 )
  {
    v5 = *((_DWORD *)v3 + 33);
    v28 = operator new(1u);
    v29 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN10VisualTree11getControlsESt8functionIFbRK9UIControlEEEd_UlS5_E_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
    v30 = ZNSt17_Function_handlerIFbRK9UIControlEZN10VisualTree11getControlsESt8functionIS3_EEd_UlS2_E_E9_M_invokeERKSt9_Any_dataS2_;
    VisualTree::getControls((int)&v31, v5, (int)&v28);
    if ( v29 )
      v29();
    v6 = *(_QWORD *)&v31;
    if ( v31 != v32 )
    {
      do
      {
        UIControl::clearControlCollectionFlag(*(UIControl **)v6);
        LODWORD(v6) = v6 + 8;
      }
      while ( HIDWORD(v6) != (_DWORD)v6 );
    }
    VisualTree::setClearPersistantMeshes(*((VisualTree **)v3 + 33), 1);
    v7 = *((_DWORD *)v3 + 33);
    *((_DWORD *)v3 + 33) = 0;
    v27 = v7;
    v25 = *(_DWORD *)v3;
    v8 = *((_DWORD *)v3 + 1);
    v26 = v8;
    if ( v8 )
      v9 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
      else
        ++*v9;
    v11 = *((_DWORD *)v3 + 86);
    *((_DWORD *)v3 + 86) = 0;
    v24 = v11;
    CachedScenes::cacheVisualTree(v2, (void ***)&v27, (int)&v25, &v24);
    std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>::~unique_ptr(&v24);
    v12 = v26;
    if ( v26 )
      v13 = (unsigned int *)(v26 + 4);
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
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 4))();
    v27 = 0;
    v18 = v32;
    v17 = v31;
        v19 = *(_DWORD *)(v17 + 4);
        if ( v19 )
          v20 = (unsigned int *)(v19 + 4);
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
            v22 = (unsigned int *)(v19 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
        v17 += 8;
      while ( v17 != v18 );
      v17 = v31;
    if ( v17 )
      operator delete((void *)v17);
  }
}


void __fastcall ScreenView::handleControlEvent(int a1, int a2, __int16 a3, unsigned __int16 a4)
{
  ScreenView::handleControlEvent(a1, a2, a3, a4);
}


int __fastcall ScreenView::_getScreenComponent(ScreenView *this)
{
  UIControl *v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  int v4; // r4@5
  int v5; // r5@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r0@10
  unsigned int *v8; // r6@14
  unsigned int v9; // r0@16
  UIControl *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@7

  VisualTree::getRootControl((VisualTree *)&v11, *((_DWORD *)this + 33));
  v1 = v11;
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id) )
  {
    type_id<UIComponent,ScreenComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id);
  }
  v3 = type_id<UIComponent,ScreenComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v1, type_id<UIComponent,ScreenComponent>(void)::id[0]) == 1 )
    v4 = *(_DWORD *)(*((_DWORD *)v1 + 27) + 4 * UIControl::_getComponentIndex(v1, v3));
  else
    v4 = 0;
  v5 = v12;
  if ( v12 )
    v6 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v4;
}


int *__fastcall ScreenView::_adjustScrollToFocusedControl(ScreenView *this, UIControl *a2)
{
  UIControl *v2; // r6@1 OVERLAPPED
  ScreenView *v3; // r5@1 OVERLAPPED
  UIControl *v4; // r0@1
  int v5; // r5@2 OVERLAPPED
  int v6; // r10@2
  UIControl *v7; // r6@5
  char v8; // r0@5
  int v9; // r5@8
  int v10; // r6@10 OVERLAPPED
  unsigned int *v11; // r0@12
  unsigned int v12; // r1@14
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r4@25
  unsigned int v16; // r0@27
  __int64 v17; // r0@33
  int v18; // r6@33
  unsigned int *v19; // r1@34
  unsigned int v20; // r0@36
  unsigned int *v21; // r4@40
  unsigned int v22; // r0@42
  int v23; // r6@47
  unsigned int *v24; // r1@48
  unsigned int v25; // r0@50
  unsigned int *v26; // r4@54
  unsigned int v27; // r0@56
  int *result; // r0@63
  UIControl *v29; // r5@66
  char *v30; // r0@66
  int v31; // r5@68
  unsigned int *v32; // r1@69
  unsigned int *v33; // r6@75
  unsigned int *v34; // r1@83
  unsigned int *v35; // r5@89
  __int64 v36; // [sp+4h] [bp-54h]@2
  int v37; // [sp+14h] [bp-44h]@66
  int v38; // [sp+18h] [bp-40h]@66
  int v39; // [sp+1Ch] [bp-3Ch]@66
  int v40; // [sp+20h] [bp-38h]@66
  char v41; // [sp+24h] [bp-34h]@33
  int v42; // [sp+28h] [bp-30h]@33
  UIControl *v43; // [sp+2Ch] [bp-2Ch]@1
  int v44; // [sp+30h] [bp-28h]@10

  v2 = a2;
  v3 = this;
  UIControl::getParent((UIControl *)&v43, (int)a2);
  v4 = v43;
  if ( v43 )
  {
    v36 = *(_QWORD *)&v3;
    v5 = 0;
    v6 = 0;
    while ( !UIControl::getClipsChildren(v4) )
    {
      if ( !v5 )
      {
        v7 = v43;
        v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
        __dmb();
        if ( !(v8 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
        {
          type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
        }
        v9 = type_id<UIComponent,GridComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v7, type_id<UIComponent,GridComponent>(void)::id[0]) == 1
          && *(_DWORD *)(*((_DWORD *)v7 + 27) + 4 * UIControl::_getComponentIndex(v7, v9)) )
          *(_QWORD *)&v5 = *(_QWORD *)&v43;
          if ( v44 != v6 )
          {
            if ( v44 )
            {
              v11 = (unsigned int *)(v44 + 4);
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
            if ( v6 )
              v13 = (unsigned int *)(v6 + 4);
                  v14 = __ldrex(v13);
                while ( __strex(v14 - 1, v13) );
                v14 = (*v13)--;
              if ( v14 == 1 )
                v15 = (unsigned int *)(v6 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
                  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
            v6 = v10;
          }
        else
          v5 = 0;
      }
      UIControl::getParent((UIControl *)&v41, (int)v43);
      v17 = *(_QWORD *)&v41;
      *(_DWORD *)&v41 = 0;
      v42 = 0;
      v43 = (UIControl *)v17;
      v18 = v44;
      v44 = HIDWORD(v17);
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
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
      v23 = v42;
      if ( v42 )
        v24 = (unsigned int *)(v42 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          v26 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
      v4 = v43;
      if ( !v43 )
        goto LABEL_67;
    }
    if ( v43 && UIControl::getClipsChildren(v43) == 1 )
      v29 = UIControl::getPosition((UIControl *)HIDWORD(v36));
      v30 = UIControl::getSize((UIControl *)HIDWORD(v36));
      v39 = *(_DWORD *)v29;
      v40 = *((_DWORD *)v29 + 1);
      v37 = *(_DWORD *)v30;
      v38 = *((_DWORD *)v30 + 1);
      ScreenView::_adjustScrollToIncludePosition(v36, v43, (int)&v39, (int)&v37);
LABEL_67:
    result = &v44;
  }
  else
  v31 = *result;
  if ( *result )
    v32 = (unsigned int *)(v31 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (int *)__ldrex(v32);
      while ( __strex((unsigned int)result - 1, v32) );
    else
      result = (int *)(*v32)--;
    if ( result == (int *)1 )
      v33 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
      if ( &pthread_create )
        do
          result = (int *)__ldrex(v33);
        while ( __strex((unsigned int)result - 1, v33) );
      else
        result = (int *)(*v33)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  if ( v6 )
    v34 = (unsigned int *)(v6 + 4);
        result = (int *)__ldrex(v34);
      while ( __strex((unsigned int)result - 1, v34) );
      result = (int *)(*v34)--;
      v35 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          result = (int *)__ldrex(v35);
        while ( __strex((unsigned int)result - 1, v35) );
        result = (int *)(*v35)--;
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


void __fastcall ScreenView::_handleStickScrolling(ScreenView *a1, int a2)
{
  int v3; // r4@1
  int v8; // r9@5
  unsigned int v9; // r1@6
  unsigned int *v10; // r0@6
  unsigned int v11; // r2@9
  unsigned int v12; // r3@10
  unsigned int v13; // r0@11
  void *v15; // r0@15
  __int64 v16; // r1@15
  UIControl *v19; // r4@18
  int v20; // r6@21
  int v21; // r0@22
  int v22; // r1@22
  signed int v23; // r4@22
  int v24; // r0@22
  UIControl *v25; // r4@26
  char v26; // r0@26
  int v27; // r6@29
  InputComponent *v28; // r0@30
  int v29; // r0@31
  __int64 v30; // r8@33
  char v31; // r6@34
  int v32; // r7@35
  char v33; // r0@35
  int v34; // r5@38
  int v35; // r0@39
  __int64 v36; // kr00_8@43
  UIControl *v37; // r4@43
  unsigned int *v38; // r1@44
  unsigned int v39; // r0@46
  unsigned int *v40; // r7@50
  unsigned int v41; // r0@52
  int v42; // r7@58
  char v43; // r0@58
  unsigned __int16 v44; // r0@60
  int v45; // r5@61
  int v46; // r0@62
  int v47; // r4@65
  unsigned int *v48; // r1@66
  unsigned int v49; // r0@68
  unsigned int *v50; // r5@72
  unsigned int v51; // r0@74
  unsigned int *v52; // r1@81
  unsigned int v53; // r0@83
  unsigned int *v54; // r4@87
  unsigned int v55; // r0@89
  __int64 v56; // r4@94
  int v57; // r0@95
  unsigned int *v58; // r2@96
  unsigned int v59; // r1@98
  int v60; // r6@111
  unsigned int *v61; // r1@112
  unsigned int v62; // r0@114
  unsigned int *v63; // r7@118
  unsigned int v64; // r0@120
  int v65; // [sp+10h] [bp-88h]@31
  __int64 *v66; // [sp+14h] [bp-84h]@34
  ScreenView *v67; // [sp+1Ch] [bp-7Ch]@33
  char v68; // [sp+24h] [bp-74h]@43
  int v69; // [sp+28h] [bp-70h]@43
  UIControl *v70; // [sp+2Ch] [bp-6Ch]@26
  int v71; // [sp+30h] [bp-68h]@65
  float v72; // [sp+34h] [bp-64h]@23
  void *v73; // [sp+3Ch] [bp-5Ch]@15
  __int64 v74; // [sp+44h] [bp-54h]@15
  UIControl *v75; // [sp+4Ch] [bp-4Ch]@15
  int v76; // [sp+50h] [bp-48h]@111
  __int64 v77; // [sp+54h] [bp-44h]@1
  void *ptr; // [sp+5Ch] [bp-3Ch]@1
  __int64 v79; // [sp+68h] [bp-30h]@94

  _R5 = a1;
  v3 = a2;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  v77 = *(_QWORD *)((char *)_R5 + 8 * v3 + 404);
  if ( v3 == 3 )
  {
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R5,#0x50]
      VMOV.F32        S4, #0.5
      VLDR            S6, =0.0
      VSUB.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S0, S4
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S2, #20.0
      VMUL.F32        S2, S0, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S6 }
      VLDR            S0, [SP,#0x98+var_44]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0x98+var_44]
      VLDR            S0, [SP,#0x98+var_44+4]
      VSTR            S0, [SP,#0x98+var_44+4]
  }
  v8 = *((_DWORD *)_R5 + 89);
  if ( !v8 )
    v8 = 0;
LABEL_26:
    FocusManager::getCurrentModalRoot((FocusManager *)&v70, *((_DWORD *)_R5 + 87));
    v25 = v70;
    v26 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
    __dmb();
    if ( !(v26 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
      type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
    v27 = type_id<UIComponent,InputComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v25, type_id<UIComponent,InputComponent>(void)::id[0]) == 1
      && (v28 = *(InputComponent **)(*((_DWORD *)v25 + 27) + 4 * UIControl::_getComponentIndex(v25, v27))) != 0 )
      v29 = InputComponent::getInlineModal(v28);
      v65 = v8;
    else
      v29 = 0;
    v30 = *((_QWORD *)_R5 + 20);
    v67 = _R5;
    if ( (_DWORD)v30 != HIDWORD(v30) )
      v31 = 0;
      v66 = (__int64 *)((char *)_R5 + 436);
      if ( v29 == 1 )
      {
        do
        {
          v32 = *(_DWORD *)v30;
          v33 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
          __dmb();
          if ( !(v33 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
          {
            type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
          }
          v34 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v32, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
            v35 = *(_DWORD *)(*(_DWORD *)(v32 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v32, v34));
            if ( v35 )
              v31 = ScrollViewComponent::handleScrollDirection(
                      v35,
                      *((_DWORD *)v67 + 33),
                      *((_DWORD *)v67 + 74),
                      (int)&ptr,
                      v66,
                      &v77,
                      v31 & 1);
          LODWORD(v30) = v30 + 8;
        }
        while ( HIDWORD(v30) != (_DWORD)v30 );
      }
      else
          UIControl::getModalAncestor((UIControl *)&v68, *(_DWORD *)v30);
          v36 = *(_QWORD *)&v68;
          v37 = v70;
          if ( v69 )
            v38 = (unsigned int *)(v69 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            }
            else
              v39 = (*v38)--;
            if ( v39 == 1 )
              v40 = (unsigned int *)(HIDWORD(v36) + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v36) + 8))(HIDWORD(v36));
              if ( &pthread_create )
              {
                __dmb();
                do
                  v41 = __ldrex(v40);
                while ( __strex(v41 - 1, v40) );
              }
              else
                v41 = (*v40)--;
              if ( v41 == 1 )
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v36) + 12))(HIDWORD(v36));
          if ( (UIControl *)v36 == v37 )
            v42 = *(_DWORD *)v30;
            v43 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
            __dmb();
            if ( !(v43 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
              v44 = typeid_t<UIComponent>::count[0]++;
              type_id<UIComponent,ScrollViewComponent>(void)::id[0] = v44;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
            v45 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v42, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
              v46 = *(_DWORD *)(*(_DWORD *)(v42 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v42, v45));
              if ( v46 )
                v31 = ScrollViewComponent::handleScrollDirection(
                        v46,
                        *((_DWORD *)v67 + 33),
                        *((_DWORD *)v67 + 74),
                        (int)&ptr,
                        v66,
                        &v77,
                        v31 & 1);
        while ( (_DWORD)v30 != HIDWORD(v30) );
    v47 = v71;
    v8 = v65;
    if ( v71 )
      v48 = (unsigned int *)(v71 + 4);
      if ( &pthread_create )
        __dmb();
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
        if ( &pthread_create )
          do
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
        else
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    _R5 = v67;
    goto LABEL_80;
  v9 = *(_DWORD *)(v8 + 4);
  v10 = (unsigned int *)(v8 + 4);
  do
    while ( 1 )
      if ( !v9 )
        v8 = 0;
        goto LABEL_26;
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  while ( v12 );
  __dmb();
  v13 = *v10;
  _ZF = v13 == 0;
  if ( v13 )
    v3 = *((_DWORD *)_R5 + 88);
    _ZF = v3 == 0;
  if ( _ZF || UIControl::getHover((UIControl *)v3) != 1 )
    goto LABEL_26;
  v15 = operator new(1u);
  LODWORD(v16) = sub_1304F40;
  v73 = v15;
  HIDWORD(v16) = sub_1304EB8;
  v74 = v16;
  UIControl::getAncestorWhere((int)&v75, v3, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  if ( !v75 )
    goto LABEL_129;
  _R4 = UIControl::getPosition(v75);
  _R0 = UIControl::getSize(v75);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VLDR            S6, [R4,#4]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
    VLDR            S4, [R4]
  v19 = v75;
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x98+var_64]
    VSTR            S0, [SP,#0x98+var_60]
  LOBYTE(_R0) = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  if ( !((unsigned __int8)_R0 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
    type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
  v20 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v19, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
    v21 = UIControl::_getComponentIndex(v19, v20);
    v22 = *((_DWORD *)v19 + 27);
    v23 = 0;
    v24 = *(_DWORD *)(v22 + 4 * v21);
    if ( v24 )
      v23 = ScrollViewComponent::handleScrollDirection(
              v24,
              *((_DWORD *)_R5 + 33),
              *((_DWORD *)_R5 + 74),
              (int)&ptr,
              (__int64 *)&v72,
              &v77,
              0);
  else
LABEL_129:
  v60 = v76;
  if ( v76 )
    v61 = (unsigned int *)(v76 + 4);
    if ( &pthread_create )
      do
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 == 1 )
      v63 = (unsigned int *)(v60 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
  if ( !v23 )
LABEL_80:
  ScreenView::_processEvents(_R5, (ScreenInputContext *)&ptr);
  if ( v8 )
    v52 = (unsigned int *)(v8 + 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 == 1 )
      v54 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v56 = v79;
  if ( (_DWORD)v79 != HIDWORD(v79) )
    do
      v57 = *(_DWORD *)(v56 + 8);
      if ( v57 )
        v58 = (unsigned int *)(v57 + 8);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 == 1 )
          (*(void (**)(void))(*(_DWORD *)v57 + 12))();
      LODWORD(v56) = v56 + 12;
    while ( (_DWORD)v56 != HIDWORD(v56) );
    LODWORD(v56) = v79;
  if ( (_DWORD)v56 )
    operator delete((void *)v56);
  if ( ptr )
    operator delete(ptr);
}


void __fastcall ScreenView::handleDirection(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@0
  int v6; // r11@1
  int v7; // r10@1
  char v8; // r1@1
  int v14; // r6@9
  unsigned int v15; // r0@10
  unsigned int *v16; // r5@10
  unsigned int v17; // r1@13
  unsigned int v18; // r2@14
  char v20; // r0@18
  int v21; // r7@21
  unsigned int v22; // r0@25
  unsigned int v23; // r0@30
  unsigned int *v24; // r4@34
  unsigned int v25; // r0@36
  int *v26; // r4@41
  int *v27; // r9@41
  int v28; // r7@42
  char v29; // r0@42
  int v30; // r5@45
  int v31; // r0@46
  char v32; // r0@49
  int *i; // r4@52
  int *v34; // r8@52
  int v35; // r7@53
  char v36; // r0@53
  int v37; // r5@56
  int v38; // r0@57
  int v39; // r0@63
  __int64 v40; // r4@67
  int v41; // r0@68
  unsigned int *v42; // r2@69
  unsigned int v43; // r1@71
  unsigned int *v44; // r4@85
  unsigned int v45; // r0@87
  char v46; // [sp+14h] [bp-5Ch]@41
  __int64 v47; // [sp+18h] [bp-58h]@3
  void *ptr; // [sp+20h] [bp-50h]@3
  __int64 v49; // [sp+2Ch] [bp-44h]@67

  v6 = a1;
  v7 = a2;
  v8 = *(_BYTE *)(a1 + 48);
  _R5 = a4;
  if ( a5 )
    v8 = a5;
  _R6 = a3;
  *(_BYTE *)(a1 + 48) = v8;
  ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
  __asm { VMOV            S16, R5 }
  v47 = __PAIR__(_R5, _R6);
  __asm { VMOV            S18, R6 }
  if ( v7 == 3 )
  {
LABEL_41:
    v27 = (int *)(*(_QWORD *)(v6 + 148) >> 32);
    v26 = (int *)*(_QWORD *)(v6 + 148);
    v46 = 0;
    if ( v26 != v27 )
    {
      while ( 1 )
      {
        v28 = *v26;
        v29 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
        __dmb();
        if ( !(v29 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
        {
          type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
        }
        v30 = type_id<UIComponent,InputComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v28, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
          v31 = *(_DWORD *)(*(_DWORD *)(v28 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v28, v30));
          if ( v31 )
          {
            if ( InputComponent::handleControllerDirection(
                   v31,
                   *(_DWORD *)(v6 + 132),
                   *(_DWORD *)(v6 + 296),
                   (int)&ptr,
                   v7,
                   &v47,
                   0) )
            {
              break;
            }
          }
        v26 += 2;
        if ( v27 == v26 )
          v32 = 0;
          goto LABEL_51;
      }
      v32 = 1;
LABEL_51:
      v46 = v32;
    }
    v34 = (int *)(*(_QWORD *)(v6 + 220) >> 32);
    for ( i = (int *)*(_QWORD *)(v6 + 220); v34 != i; i += 2 )
      v35 = *i;
      v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
      __dmb();
      if ( !(v36 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
        type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
      v37 = type_id<UIComponent,InputComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v35, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
        v38 = *(_DWORD *)(*(_DWORD *)(v35 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v35, v37));
        if ( v38 )
          if ( InputComponent::handleControllerDirection(
                 v38,
                 *(_DWORD *)(v6 + 132),
                 *(_DWORD *)(v6 + 296),
                 (int)&ptr,
                 v7,
                 &v47,
                 v46 & 1) )
            v46 = 1;
            break;
          v46 = 0;
    ScreenView::_processEvents((ScreenView *)v6, (ScreenInputContext *)&ptr);
    v39 = v6 + 8 * v7;
    if ( v46 & 1 )
      *(_DWORD *)(v39 + 404) = 0;
      *(_DWORD *)(v39 + 408) = 0;
    else
      __asm
        VSTR            S18, [R1]
        VSTR            S16, [R0,#0x198]
    goto LABEL_66;
  }
  if ( v7 == 2 )
    __asm
      VSTR            S18, [R0,#0x194]
      VSTR            S16, [R0,#0x198]
    ScreenView::_handleStickScrolling((ScreenView *)v6, 2);
  else if ( !v7 )
      VABS.F32        S0, S18
      VLDR            S2, =1.1921e-7
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VABSGT.F32      S2, S16
        VCMPEGT.F32     S0, S2
        VMRSGT          APSR_nzcv, FPSCR
        VSTR            S18, [R11,#0x194]
        VSTR            S16, [R11,#0x198]
      v14 = *(_DWORD *)(v6 + 356);
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
              _ZF = *v16 == 0;
              if ( *v16 )
              {
                v5 = *(_DWORD *)(v6 + 352);
                _ZF = v5 == 0;
              }
              if ( !_ZF )
                v20 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
                __dmb();
                if ( !(v20 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
                {
                  type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
                }
                v21 = type_id<UIComponent,SliderComponent>(void)::id[0];
                if ( UIControl::_hasComponent((UIControl *)v5, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
                  if ( *(_DWORD *)(*(_DWORD *)(v5 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v5, v21)) )
                  {
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v22 = __ldrex(v16);
                      while ( __strex(v22 - 1, v16) );
                    }
                    else
                      v22 = (*v16)--;
                    if ( v22 == 1 )
                      v44 = (unsigned int *)(v14 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
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
                        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
                    goto LABEL_67;
                  }
              if ( &pthread_create )
                do
                  v23 = __ldrex(v16);
                while ( __strex(v23 - 1, v16) );
              else
                v23 = (*v16)--;
              if ( v23 == 1 )
                v24 = (unsigned int *)(v14 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
                if ( &pthread_create )
                  __dmb();
                  do
                    v25 = __ldrex(v24);
                  while ( __strex(v25 - 1, v24) );
                else
                  v25 = (*v24)--;
                if ( v25 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
              goto LABEL_41;
          else
            __clrex();
    goto LABEL_41;
LABEL_66:
  ScreenView::_adjustFocusedControlToScrollRegion((ScreenView *)v6);
LABEL_67:
  v40 = v49;
  if ( (_DWORD)v49 != HIDWORD(v49) )
    do
      v41 = *(_DWORD *)(v40 + 8);
      if ( v41 )
        v42 = (unsigned int *)(v41 + 8);
        if ( &pthread_create )
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        else
          v43 = (*v42)--;
        if ( v43 == 1 )
          (*(void (**)(void))(*(_DWORD *)v41 + 12))();
      LODWORD(v40) = v40 + 12;
    while ( (_DWORD)v40 != HIDWORD(v40) );
    LODWORD(v40) = v49;
  if ( (_DWORD)v40 )
    operator delete((void *)v40);
  if ( ptr )
    operator delete(ptr);
}


unsigned int __fastcall ScreenView::absorbsInput(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent15getAbsorbsInputEv(v1);
}


void __fastcall ScreenView::handleControlEvent(int a1, int a2, __int16 a3, unsigned __int16 a4)
{
  int v4; // r4@1
  int v5; // r0@1
  bool v6; // zf@4
  int v7; // r5@8
  int v8; // r0@19
  int v9; // r0@24

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 332);
  if ( !v5 || *(_DWORD *)(v5 + 4) <= 0 )
  {
    if ( a2 == 3 )
    {
      j_j_j__ZN10ScreenView22_handlePointerLocationERKN3glm6detail5tvec2IfEE11FocusImpactb(v4, v4 + 436, 0, 1);
    }
    else
      v6 = a2 == 1;
      if ( a2 == 1 )
        v6 = a4 >> 8 == 0;
      if ( v6 )
      {
        v7 = a3;
        if ( a3 == *(_DWORD *)(v4 + 100) )
        {
          j_j_j__ZN10ScreenView22_selectNextFocusObjectEN2ui17CardinalDirectionE(v4);
        }
        else if ( a3 == *(_DWORD *)(v4 + 104) )
        else if ( a3 == *(_DWORD *)(v4 + 108) )
        else if ( a3 == *(_DWORD *)(v4 + 112) )
        else if ( a3 != *(_DWORD *)(v4 + 116) || (*(int (**)(void))(**(_DWORD **)(v4 + 124) + 20))() != 1 )
          if ( v7 == *(_DWORD *)(v4 + 120) && (*(int (**)(void))(**(_DWORD **)(v4 + 124) + 20))() == 1 )
          {
            v9 = *(_DWORD *)(v4 + 332);
            if ( !v9 || *(_DWORD *)(v9 + 4) <= 0 )
              j_j_j__ZN10ScreenView40_advanceToNextToggleInNavigationTabGroupEb((ScreenView *)v4, 1);
          }
        else
          v8 = *(_DWORD *)(v4 + 332);
          if ( !v8 || *(_DWORD *)(v8 + 4) <= 0 )
            j_j_j__ZN10ScreenView40_advanceToNextToggleInNavigationTabGroupEb((ScreenView *)v4, 0);
      }
  }
}


signed int __fastcall ScreenView::_changeControlCollection(signed int result, UIControl *a2, signed int a3, int a4)
{
  if ( a4 == 1 )
  {
    result = j_j_j__ZN10ScreenView28_removeFromControlCollectionER9UIControl21ControlCollectionFlag(result, a2, a3);
  }
  else if ( !a4 )
    JUMPOUT(0, ScreenView::_addToControlCollection);
    result = j_j_j__ZN10ScreenView23_addToControlCollectionER9UIControl21ControlCollectionFlag(result, a2, a3);
  return result;
}


void __fastcall ScreenView::_updateFocusControl(ScreenView *this, int a2)
{
  ScreenView *v2; // r5@1
  int v3; // r6@1
  int v4; // r10@2
  unsigned int v5; // r1@3
  unsigned int *v6; // r0@3
  unsigned int v7; // r2@6
  unsigned int v8; // r3@7
  signed int v9; // r4@8
  UIControl *v10; // r7@12
  int v11; // r0@16
  int *v18; // r7@20 OVERLAPPED
  int *v19; // r8@20 OVERLAPPED
  int v20; // r6@22
  char v21; // r0@22
  int v22; // r4@25
  UIComponent *v23; // r0@26
  int *v24; // r7@31 OVERLAPPED
  int *v25; // r8@31 OVERLAPPED
  int v26; // r6@32
  char v27; // r0@32
  int v28; // r4@35
  UIComponent *v29; // r0@36
  int v30; // r4@39
  unsigned int *v31; // r0@40
  unsigned int v32; // r1@42
  int v33; // r0@45
  unsigned int *v34; // r2@46
  unsigned int v35; // r1@48
  int v36; // r4@53
  int v37; // r5@53
  int v38; // r0@54
  unsigned int *v39; // r2@55
  unsigned int v40; // r1@57
  int v41; // r5@68
  unsigned int *v42; // r1@69
  unsigned int v43; // r0@71
  unsigned int *v44; // r4@75
  unsigned int v45; // r0@77
  unsigned int *v46; // r1@83
  unsigned int v47; // r0@85
  unsigned int *v48; // r4@89
  unsigned int v49; // r0@91
  char v50; // [sp+10h] [bp-50h]@21
  float v51; // [sp+14h] [bp-4Ch]@27
  void *ptr; // [sp+1Ch] [bp-44h]@18
  __int64 v53; // [sp+28h] [bp-38h]@53
  UIControl *v54; // [sp+34h] [bp-2Ch]@12
  int v55; // [sp+38h] [bp-28h]@39

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 87) )
  {
    v4 = *((_DWORD *)this + 89);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v6 = (unsigned int *)(v4 + 4);
      while ( v5 )
      {
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
        {
          v8 = __strex(v5 + 1, v6);
          v5 = v7;
          if ( !v8 )
          {
            __dmb();
            v9 = 0;
            if ( !*v6 )
              v9 = 1;
            goto LABEL_12;
          }
        }
        else
          __clrex();
      }
    }
    v9 = 1;
    v4 = 0;
LABEL_12:
    v10 = (UIControl *)(*(_QWORD *)((char *)v2 + 348) >> 32);
    FocusManager::getFocusedControl((FocusManager *)&v54, *(_QWORD *)((char *)v2 + 348));
    if ( v9 )
      v10 = 0;
    if ( v10 != v54 || v3 == 1 )
      v11 = *((_DWORD *)v2 + 83);
      if ( !v11 || *(_DWORD *)(v11 + 4) <= 0 )
        ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
        if ( FocusManager::isActive(*((FocusManager **)v2 + 87)) == 1 && v54 )
          ScreenView::_adjustScrollToFocusedControl(v2, v54);
          _R6 = UIControl::getPosition(v54);
          _R0 = UIControl::getSize(v54);
          __asm
            VMOV.F32        S0, #0.5
            VLDR            S2, [R0]
            VLDR            S4, [R0,#4]
            VLDR            S6, [R6,#4]
            VMUL.F32        S2, S2, S0
            VMUL.F32        S0, S4, S0
            VLDR            S4, [R6]
            VADD.F32        S2, S4, S2
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0x60+var_4C]
            VSTR            S0, [SP,#0x60+var_48]
          *(_QWORD *)&v18 = *(_QWORD *)((char *)v2 + 148);
          if ( v18 == v19 )
            v50 = 0;
          else
            do
            {
              v20 = *v18;
              v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
              __dmb();
              if ( !(v21 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
              {
                type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
              }
              v22 = type_id<UIComponent,InputComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v20, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
                v23 = *(UIComponent **)(*(_DWORD *)(v20 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v20, v22));
                if ( v23 )
                  v50 = InputComponent::handleFocusLocation(
                          v23,
                          *((_DWORD *)v2 + 33),
                          *((_DWORD *)v2 + 74),
                          (int)&ptr,
                          (int)&v51,
                          v50 & 1);
              v18 += 2;
            }
            while ( v19 != v18 );
          for ( *(_QWORD *)&v24 = *(_QWORD *)((char *)v2 + 220); v25 != v24; v24 += 2 )
            v26 = *v24;
            v27 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
            if ( !(v27 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
              type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
            v28 = type_id<UIComponent,InputComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v26, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
              v29 = *(UIComponent **)(*(_DWORD *)(v26 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v26, v28));
              if ( v29 )
                v50 = InputComponent::handleFocusLocation(
                        v29,
                        *((_DWORD *)v2 + 33),
                        *((_DWORD *)v2 + 74),
                        (int)&ptr,
                        (int)&v51,
                        v50 & 1);
        ScreenView::_processEvents(v2, (ScreenInputContext *)&ptr);
        *((_DWORD *)v2 + 88) = v54;
        v30 = v55;
        if ( v55 )
          v31 = (unsigned int *)(v55 + 8);
          if ( &pthread_create )
              v32 = __ldrex(v31);
            while ( __strex(v32 + 1, v31) );
            ++*v31;
        v33 = *((_DWORD *)v2 + 89);
        if ( v33 )
          v34 = (unsigned int *)(v33 + 8);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 == 1 )
            (*(void (**)(void))(*(_DWORD *)v33 + 12))();
        *((_DWORD *)v2 + 89) = v30;
        v36 = HIDWORD(v53);
        v37 = v53;
        if ( (_DWORD)v53 != HIDWORD(v53) )
          do
            v38 = *(_DWORD *)(v37 + 8);
            if ( v38 )
              v39 = (unsigned int *)(v38 + 8);
              if ( &pthread_create )
                __dmb();
                do
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
              else
                v40 = (*v39)--;
              if ( v40 == 1 )
                (*(void (**)(void))(*(_DWORD *)v38 + 12))();
            v37 += 12;
          while ( v37 != v36 );
          v37 = v53;
        if ( v37 )
          operator delete((void *)v37);
        if ( ptr )
          operator delete(ptr);
    v41 = v55;
    if ( v55 )
      v42 = (unsigned int *)(v55 + 4);
      if ( &pthread_create )
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v41 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
        if ( &pthread_create )
          __dmb();
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
      v46 = (unsigned int *)(v4 + 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        v48 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


int __fastcall ScreenView::_getJoystickScrollingDeltaTime(ScreenView *this)
{
  int result; // r0@3

  _R4 = this;
  _R0 = getTimeS();
  __asm
  {
    VLDR            D0, [R4,#0x50]
    VMOV            D1, R0, R1
    VLDR            S4, =0.0
    VSUB.F64        D0, D1, D0
    VMOV.F32        S2, #0.5
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall ScreenView::_shouldBindChildren(ScreenView *this, int a2, UIControl *a3, DataBindingComponent *a4)
{
  DataBindingComponent *v4; // r4@1
  UIControl *v5; // r5@1
  char v6; // r0@2
  int v7; // r6@5
  UIControl *v8; // r5@8
  char v9; // r0@8
  int v10; // r6@11
  GridComponent *v11; // r0@12
  int v12; // r4@15
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  int v15; // r4@20
  unsigned int *v16; // r1@21
  unsigned int v17; // r0@23
  unsigned int *v18; // r5@27
  unsigned int v19; // r0@29
  unsigned int *v20; // r5@33
  unsigned int v21; // r0@35
  UIControl *v23; // [sp+0h] [bp-18h]@8
  int v24; // [sp+4h] [bp-14h]@15

  v4 = a4;
  v5 = a3;
  if ( a2 )
    goto LABEL_47;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
  {
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  }
  v7 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,GridItemComponent>(void)::id[0]) != 1
    || !*(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7)) )
LABEL_47:
    if ( UIControl::getDelayCollectionUpdate(v5) != 1 )
      return 1;
  UIControl::getParent((UIControl *)&v23, (int)v5);
  v8 = v23;
  v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  if ( !(v9 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v10 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v8, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v11 = *(GridComponent **)(*((_DWORD *)v8 + 27) + 4 * UIControl::_getComponentIndex(v8, v10));
  else
    v11 = 0;
  if ( GridComponent::isDynamic(v11) != 1 )
    v15 = v24;
    if ( v24 )
    {
      v16 = (unsigned int *)(v24 + 4);
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
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    }
    return 1;
  DataBindingComponent::setDirty(v4, 1);
  v12 = v24;
  if ( v24 )
    v13 = (unsigned int *)(v24 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v20 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return 0;
}


void __fastcall ScreenView::_advanceToNextTab(ScreenView *this, int a2)
{
  int v2; // r2@1

  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 4) <= 0 )
      j_j_j__ZN10ScreenView40_advanceToNextToggleInNavigationTabGroupEb(this, a2);
  }
  else
    j_j_j__ZN10ScreenView40_advanceToNextToggleInNavigationTabGroupEb(this, a2);
}


int __fastcall ScreenView::_notifyLayoutChange(ScreenView *this)
{
  UIControl **v1; // r5@1 OVERLAPPED
  UIControl **v2; // r6@1 OVERLAPPED
  char i; // r4@1
  UIControl *v4; // t1@2

  *(_QWORD *)&v1 = *((_QWORD *)this + 20);
  for ( i = 0; v2 != v1; i |= UIControl::notifyLayoutChange(v4) )
  {
    v4 = *v1;
    v1 += 2;
  }
  return i & 1;
}


void __fastcall ScreenView::getScreenName(ScreenView *this, int a2)
{
  int v2; // r5@1
  ScreenView *v3; // r4@1
  unsigned int *v4; // r6@1
  const void **v5; // r0@1
  void *v6; // r0@1
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r5@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  int v14; // [sp+4h] [bp-24h]@1
  UIControl *v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  VisualTree::getRootControl((VisualTree *)&v15, *(_DWORD *)(a2 + 132));
  v4 = (unsigned int *)UIControl::getName(v15);
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v2 + 124) + 84))(&v14);
  v5 = sub_21E82D8((const void **)&v14, 0, *v4, *(_BYTE **)(*v4 - 12));
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


signed int __fastcall ScreenView::_updateSelectedControl(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  unsigned int v7; // r11@1
  int v8; // r8@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@3
  unsigned int v11; // r2@6
  unsigned int v12; // r3@7
  unsigned int v13; // r1@8
  signed int v14; // r0@8
  signed int v15; // r5@11
  int v16; // r7@13
  char v17; // r1@13
  int v18; // r6@18
  UIComponent *v19; // r6@19
  unsigned int v20; // r10@20
  int v21; // r1@21
  unsigned int *v22; // r2@21
  unsigned int *v23; // r1@25
  unsigned int v24; // r0@27
  unsigned int *v25; // r6@32
  unsigned int v26; // r0@34

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 332);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 4) )
    {
      v9 = (unsigned int *)(v6 + 4);
      v10 = *(_DWORD *)(v6 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v10 )
          {
            v14 = 1;
            v6 = 0;
            goto LABEL_13;
          }
          __dmb();
          v11 = __ldrex(v9);
          if ( v11 == v10 )
            break;
          __clrex();
          v10 = v11;
        }
        v12 = __strex(v10 + 1, v9);
        v10 = v11;
      }
      while ( v12 );
      __dmb();
      v13 = *v9;
      v14 = 0;
      if ( !v13 )
        v14 = 1;
LABEL_13:
      v16 = *(_DWORD *)(v4 + 328);
      v17 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
      if ( v14 )
        v16 = 0;
      if ( !(v17 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
        type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
      v18 = type_id<UIComponent,InputComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v16, type_id<UIComponent,InputComponent>(void)::id[0]) == 1
        && (v19 = *(UIComponent **)(*(_DWORD *)(v16 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v16, v18))) != 0
        && (v20 = UIControl::getSelected((UIControl *)v16),
            InputComponent::handleButtonEvent(
              v19,
              *(_DWORD *)(v4 + 132),
              *(_DWORD *)(v4 + 296),
              v8,
              v7,
              v5,
              (__int64 *)(v4 + 436),
              *(_QWORD *)(v4 + 336),
              *(_QWORD *)(v4 + 336) >> 32) == 1) )
        if ( (UIControl::getSelected((UIControl *)v16) ^ v20) == 1 )
          ScreenView::_deselectControl((ScreenView *)v4, v21, v22);
          v15 = 1;
        else
      else
        v15 = 0;
      if ( v6 )
        v23 = (unsigned int *)(v6 + 4);
        if ( &pthread_create )
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          v25 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          else
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    else
      v15 = 0;
  }
  else
    v15 = 0;
  return v15;
}


void __fastcall ScreenView::_advanceToNextToggleInNavigationTabGroup(ScreenView *this, int a2)
{
  ScreenView *v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r0@5
  int v9; // r2@5
  int v10; // r4@7
  int v11; // r6@7
  int v12; // r7@8
  unsigned int *v13; // r1@9
  unsigned int v14; // r0@11
  unsigned int *v15; // r5@15
  unsigned int v16; // r0@17
  _DWORD *v17; // [sp+0h] [bp-48h]@1
  void (__cdecl *v18)(_DWORD); // [sp+8h] [bp-40h]@1
  signed int (__fastcall *v19)(int **, ToggleComponent *); // [sp+Ch] [bp-3Ch]@1
  unsigned __int64 v20; // [sp+10h] [bp-38h]@1
  _DWORD *v21; // [sp+1Ch] [bp-2Ch]@1
  __int64 v22; // [sp+24h] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 33);
  v5 = operator new(4u);
  *v5 = v2;
  v17 = v5;
  v18 = (void (__cdecl *)(_DWORD))sub_130543C;
  v19 = sub_1305358;
  v6 = operator new(4u);
  *v6 = &v17;
  v21 = v6;
  LODWORD(v7) = std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getVisibleControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
  HIDWORD(v7) = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getVisibleControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
  v22 = v7;
  VisualTree::getVisibleControls((int)&v20, v4, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (__cdecl *)(_DWORD **))v22)(&v21);
  if ( v18 )
    v18(&v17);
  v8 = _getCurrentlySelectedToggleGroupIndex(&v20);
  v9 = _findNextIndex(&v20, v8, v3);
  if ( v9 != -1 )
  {
    ScreenView::_switchTabToTargetIndex((int)v2, (__int64 *)&v20, v9);
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v2 + 33) + 20))(*((_DWORD *)v2 + 33));
    ScreenView::_handleDirtyVisualTree(v2, 1, 0);
  }
  v11 = HIDWORD(v20);
  v10 = v20;
  if ( (_DWORD)v20 != HIDWORD(v20) )
    do
    {
      v12 = *(_DWORD *)(v10 + 4);
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
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
      v10 += 8;
    }
    while ( v10 != v11 );
    v10 = v20;
  if ( v10 )
    operator delete((void *)v10);
}


int __fastcall ScreenView::setShouldSendEvents(ScreenView *this, __int16 a2)
{
  __int16 v2; // r4@1
  UIControl *v3; // r5@1
  char v4; // r0@1
  int v5; // r6@4
  ScreenComponent *v6; // r5@5
  int v7; // r6@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  UIControl *v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+8h] [bp-18h]@7

  v2 = a2;
  VisualTree::getRootControl((VisualTree *)&v13, *((_DWORD *)this + 33));
  v3 = v13;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id) )
  {
    type_id<UIComponent,ScreenComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ScreenComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,ScreenComponent>(void)::id[0]) == 1 )
    v6 = *(ScreenComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v5));
  else
    v6 = 0;
  v7 = v14;
  if ( v14 )
    v8 = (unsigned int *)(v14 + 4);
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
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return ScreenComponent::setShouldSendEvents(v6, v2);
}


void __fastcall ScreenView::handleTextChar(int a1, const void **a2, int a3, int a4)
{
  int v4; // r11@0
  int v5; // r4@1
  char v6; // r0@1
  const void **v7; // r9@1
  int v8; // r7@3
  unsigned int *v9; // r0@5
  unsigned int v10; // r1@5
  unsigned int v11; // r2@8
  unsigned int v12; // r3@9
  unsigned int v13; // r1@10
  signed int v14; // r0@10
  unsigned int v15; // r0@14
  unsigned int *v16; // r6@14
  unsigned int v17; // r1@17
  unsigned int v18; // r2@18
  TextEditComponent *v19; // r10@19
  bool v20; // zf@19
  char v21; // r0@22
  int v22; // r5@25
  int v23; // r0@26
  unsigned int *v24; // r2@26
  int v25; // r1@26
  int v26; // r11@27
  unsigned int *v27; // r0@28
  unsigned int v28; // r1@30
  int v29; // r5@33
  char v30; // r1@33
  int v31; // r6@38
  unsigned int *v32; // r1@42
  unsigned int v33; // r0@44
  unsigned int *v34; // r5@48
  unsigned int v35; // r0@50
  int v36; // r0@55
  unsigned int *v37; // r2@56
  unsigned int v38; // r1@58
  int v39; // r0@63
  unsigned int *v40; // r2@64
  unsigned int v41; // r1@66
  unsigned int v42; // r0@74
  int v43; // r6@86
  __int16 v44; // r7@86
  int v45; // r5@86
  int v46; // r0@86
  int v47; // r0@86
  bool v48; // zf@86
  int v49; // [sp+Ch] [bp-2Ch]@27
  int v50; // [sp+10h] [bp-28h]@27

  v5 = a1;
  v6 = *(_BYTE *)(a1 + 48);
  v7 = a2;
  if ( a4 )
    v6 = a4;
  *(_BYTE *)(v5 + 48) = v6;
  ScreenView::_fireTextChangedEvent(v5, 0, 0, -1, -1, 0);
  v8 = *(_DWORD *)(v5 + 332);
  if ( v8 && *(_DWORD *)(v8 + 4) >= 1 )
  {
    v9 = (unsigned int *)(v8 + 4);
    v10 = *(_DWORD *)(v8 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v10 )
        {
          v14 = 1;
          v8 = 0;
          goto LABEL_33;
        }
        __dmb();
        v11 = __ldrex(v9);
        if ( v11 == v10 )
          break;
        __clrex();
        v10 = v11;
      }
      v12 = __strex(v10 + 1, v9);
      v10 = v11;
    }
    while ( v12 );
    __dmb();
    v13 = *v9;
    v14 = 0;
    if ( !v13 )
      v14 = 1;
LABEL_33:
    v29 = *(_DWORD *)(v5 + 328);
    v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
    if ( v14 )
      v29 = 0;
    if ( !(v30 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
      type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
    v31 = type_id<UIComponent,TextEditComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v29, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
      v19 = *(TextEditComponent **)(*(_DWORD *)(v29 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v29, v31));
    else
      v19 = 0;
    if ( v8 )
      v32 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 == 1 )
        v34 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        else
LABEL_82:
          v35 = (*v34)--;
LABEL_83:
        if ( v35 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
LABEL_85:
    if ( v19 )
      v43 = TextEditComponent::handleTextCharEvent((int)v19, *(_DWORD *)(v5 + 132), v7);
      v44 = TextEditComponent::getTextEditComponentId(v19);
      v45 = TextEditComponent::getCollectionIndex(v19);
      v46 = TextEditComponent::getLabelPropertyBag(v19);
      ScreenView::_fireTextChangedEvent(v5, 0, v43, v44, v45, v46);
      v47 = TextEditComponent::canBeDeselected(v19);
      v48 = v43 == 1;
      if ( v43 == 1 )
        v48 = v47 == 1;
      if ( v48 && !TextEditComponent::getEnabledNewline(v19) )
        *(_BYTE *)(v5 + 482) = 1;
  }
  else
    v8 = *(_DWORD *)(v5 + 356);
      v15 = *(_DWORD *)(v8 + 4);
      v16 = (unsigned int *)(v8 + 4);
      while ( v15 )
        v17 = __ldrex(v16);
        if ( v17 == v15 )
          v18 = __strex(v15 + 1, v16);
          v15 = v17;
          if ( !v18 )
          {
            __dmb();
            v19 = 0;
            v20 = *v16 == 0;
            if ( *v16 )
            {
              v4 = *(_DWORD *)(v5 + 352);
              v20 = v4 == 0;
            }
            if ( !v20 )
              v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
              __dmb();
              if ( !(v21 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
              {
                type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
              }
              v22 = type_id<UIComponent,TextEditComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
                v23 = UIControl::_getComponentIndex((UIControl *)v4, v22);
                v25 = *(_DWORD *)(v4 + 108);
                v19 = *(TextEditComponent **)(v25 + 4 * v23);
                if ( v19 )
                {
                  ScreenView::_deselectControl((ScreenView *)v5, v25, v24);
                  TextEditComponent::selectControl(v19);
                  UIControl::setSelected((UIControl *)v4, 1);
                  (*(void (**)(void))(**(_DWORD **)(v5 + 124) + 64))();
                  UIControl::weakRef((UIControl *)&v49, v4);
                  *(_DWORD *)(v5 + 328) = v49;
                  v26 = v50;
                  if ( v50 )
                  {
                    v27 = (unsigned int *)(v50 + 8);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v28 = __ldrex(v27);
                      while ( __strex(v28 + 1, v27) );
                    }
                    else
                      ++*v27;
                  }
                  v36 = *(_DWORD *)(v5 + 332);
                  if ( v36 )
                    v37 = (unsigned int *)(v36 + 8);
                        v38 = __ldrex(v37);
                      while ( __strex(v38 - 1, v37) );
                      v38 = (*v37)--;
                    if ( v38 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v36 + 12))();
                  *(_DWORD *)(v5 + 332) = v26;
                  v39 = v50;
                    v40 = (unsigned int *)(v50 + 8);
                        v41 = __ldrex(v40);
                      while ( __strex(v41 - 1, v40) );
                      v41 = (*v40)--;
                    if ( v41 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v39 + 12))();
                  if ( !v8 )
                    goto LABEL_85;
                }
                else
                  v19 = 0;
              else
                v19 = 0;
            if ( &pthread_create )
              do
                v42 = __ldrex(v16);
              while ( __strex(v42 - 1, v16) );
            else
              v42 = (*v16)--;
            if ( v42 != 1 )
              goto LABEL_85;
            v34 = (unsigned int *)(v8 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            if ( !&pthread_create )
              goto LABEL_82;
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            goto LABEL_83;
          }
          __clrex();
}


signed __int64 __fastcall ScreenView::resize(ScreenView *this)
{
  signed int v8; // r6@2
  int v9; // r5@5
  unsigned int *v10; // r1@6
  unsigned int v11; // r0@8
  unsigned int *v12; // r7@12
  unsigned int v13; // r0@14
  UIControl *v15; // [sp+4h] [bp-1Ch]@1
  int v16; // [sp+8h] [bp-18h]@5

  _R4 = this;
  (*(void (**)(void))(**((_DWORD **)this + 33) + 20))();
  _R5 = (int)_R4 + 88;
  FocusManager::setSize(*((_DWORD *)_R4 + 87), (int)_R4 + 88);
  LayoutManager::setSize(*((_DWORD *)_R4 + 86), (int)_R4 + 88);
  VisualTree::getRootControl((VisualTree *)&v15, *((_DWORD *)_R4 + 33));
  _R0 = UIControl::getSize(v15);
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VLDR            S0, [R4,#0x5C] }
    v8 = 0;
    __asm
    {
      VLDR            S2, [R0,#4]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      v8 = 1;
  else
    v8 = 1;
  v9 = v16;
  if ( v16 )
    v10 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  if ( v8 == 1 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 33) + 20))();
  (*(void (**)(void))(**((_DWORD **)_R4 + 33) + 36))();
  return ScreenView::_handleDirtyVisualTree(_R4, 1, 0);
}


int __fastcall ScreenView::handleCaretLocation(int result, int a2, int a3)
{
  int v3; // r5@1
  char v4; // r1@1
  int v5; // r4@3
  unsigned int *v6; // r1@5
  unsigned int v7; // r2@5
  unsigned int v8; // r3@8
  unsigned int v9; // r7@9
  unsigned int v10; // r2@10
  signed int v11; // r1@10
  int v12; // r6@14
  char v13; // r0@14
  int v14; // r7@19
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29

  v3 = a2;
  v4 = *(_BYTE *)(result + 48);
  if ( a3 )
    v4 = a3;
  *(_BYTE *)(result + 48) = v4;
  v5 = *(_DWORD *)(result + 332);
  if ( v5 && *(_DWORD *)(v5 + 4) >= 1 )
  {
    v6 = (unsigned int *)(v5 + 4);
    v7 = *(_DWORD *)(v5 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v7 )
        {
          v11 = 1;
          v5 = 0;
          goto LABEL_14;
        }
        __dmb();
        v8 = __ldrex(v6);
        if ( v8 == v7 )
          break;
        __clrex();
        v7 = v8;
      }
      v9 = __strex(v7 + 1, v6);
      v7 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = *v6;
    v11 = 0;
    if ( !v10 )
      v11 = 1;
LABEL_14:
    v12 = *(_DWORD *)(result + 328);
    v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
    if ( v11 )
      v12 = 0;
    if ( !(v13 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
      type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
    v14 = type_id<UIComponent,TextEditComponent>(void)::id[0];
    result = UIControl::_hasComponent((UIControl *)v12, type_id<UIComponent,TextEditComponent>(void)::id[0]);
    if ( result == 1 )
      result = *(_DWORD *)(*(_DWORD *)(v12 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v12, v14));
      if ( result )
        result = TextEditComponent::setCaretPosition((TextEditComponent *)result, v3);
    if ( v5 )
      v15 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      else
        result = (*v15)--;
      if ( result == 1 )
        v16 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v16);
          while ( __strex(result - 1, v16) );
        else
          result = (*v16)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


int __fastcall ScreenView::applyInput(ScreenView *this, float a2)
{
  ScreenView *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = *((_DWORD *)this + 84);
  if ( result != 2 )
  {
    ScreenView::_handleStickScrolling(v2, 3);
    ScreenView::_handleSliderMovement(v2);
    result = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VSTR            D0, [R4,#0x50]
    }
  }
  return result;
}


void __fastcall ScreenView::_processEvents(ScreenView *this, ScreenInputContext *a2)
{
  int v2; // r3@1
  int v3; // r11@1
  __int64 v4; // kr08_8@1
  int v5; // r10@2
  int v6; // r6@2
  char *v7; // r8@2
  __int64 v8; // ST08_8@6
  int v9; // ST10_4@6
  char *v10; // r7@7
  int v11; // r1@8
  int v12; // r3@8
  int v13; // r5@8
  int v14; // r7@8
  int v15; // r5@8
  int v16; // r7@8
  char *v17; // r9@9
  unsigned int v18; // r1@9
  unsigned int v19; // r0@11
  unsigned int v20; // r10@11
  int v21; // r0@18
  int v22; // r3@18
  int v23; // r4@18
  int v24; // r5@18
  int v25; // r4@18
  int v26; // r5@18
  int v27; // r0@19
  char *v28; // lr@19
  int v29; // r1@19
  int v30; // r2@19
  int v31; // r3@20
  int v32; // r2@20
  int v33; // r4@20
  int v34; // r5@20
  int v35; // r6@20
  int v36; // r7@20
  int v37; // r3@20
  int v38; // r4@20
  int v39; // r5@20
  int v40; // r6@20
  int v41; // r7@20
  int v42; // r2@20
  unsigned int v43; // r0@21
  char *v44; // r7@31
  char v45; // r0@32
  int v46; // r1@32
  unsigned int *v47; // r2@32
  int v53; // r1@40
  unsigned int *v54; // r2@40
  __int64 v55; // [sp+0h] [bp-40h]@0
  int v56; // [sp+14h] [bp-2Ch]@31
  ScreenView *v57; // [sp+18h] [bp-28h]@1

  v57 = this;
  v4 = *(_QWORD *)ScreenInputContext::getEventQueue(a2);
  v3 = v4;
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = 0;
    v7 = 0;
  }
  else
    v5 = 0;
    do
    {
      if ( *(_DWORD *)v3 == 1 )
        ScreenView::_forwardEventToAnimationControls(v57, (const ScreenEvent *)v3);
      if ( *(_BYTE *)(v3 + 28) == 1 )
      {
        v55 = *(_QWORD *)(v3 + 12);
        v8 = *(_QWORD *)(v3 + 20);
        v9 = *(_DWORD *)(v3 + 28);
        ScreenView::handleControlEvent((int)v57, *(_DWORD *)v3, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8));
      }
      else
        v10 = (char *)v5;
        if ( v6 == v5 )
        {
          v17 = 0;
          v18 = (v6 - (signed int)v7) >> 5;
          if ( !v18 )
            v18 = 1;
          v19 = v18 + ((v6 - (signed int)v7) >> 5);
          v20 = v18 + ((v6 - (signed int)v7) >> 5);
          if ( 0 != v19 >> 27 )
            v20 = 0x7FFFFFF;
          if ( v19 < v18 )
          if ( v20 )
          {
            if ( v20 >= 0x8000000 )
              sub_21E57F4();
            v17 = (char *)operator new(32 * v20);
          }
          v21 = (int)&v17[32 * ((v6 - (signed int)v7) >> 5)];
          v22 = *(_DWORD *)(v3 + 4);
          v23 = *(_DWORD *)(v3 + 8);
          v24 = *(_DWORD *)(v3 + 12);
          *(_DWORD *)v21 = *(_DWORD *)v3;
          *(_DWORD *)(v21 + 4) = v22;
          *(_DWORD *)(v21 + 8) = v23;
          *(_DWORD *)(v21 + 12) = v24;
          v21 += 16;
          v2 = *(_DWORD *)(v3 + 20);
          v25 = *(_DWORD *)(v3 + 24);
          v26 = *(_DWORD *)(v3 + 28);
          *(_DWORD *)v21 = *(_DWORD *)(v3 + 16);
          *(_DWORD *)(v21 + 4) = v2;
          *(_DWORD *)(v21 + 8) = v25;
          *(_DWORD *)(v21 + 12) = v26;
          if ( v7 == v10 )
            v7 = v10;
            v43 = (unsigned int)v17;
          else
            v27 = v10 - v7;
            v28 = v10;
            v29 = 0;
            v30 = (int)v7;
            do
            {
              v31 = (int)&v17[v29];
              v33 = *(_DWORD *)v30;
              v34 = *(_DWORD *)(v30 + 4);
              v35 = *(_DWORD *)(v30 + 8);
              v36 = *(_DWORD *)(v30 + 12);
              v32 = v30 + 16;
              *(_DWORD *)v31 = v33;
              *(_DWORD *)(v31 + 4) = v34;
              *(_DWORD *)(v31 + 8) = v35;
              *(_DWORD *)(v31 + 12) = v36;
              v37 = (int)&v17[v29 + 16];
              v38 = *(_DWORD *)v32;
              v39 = *(_DWORD *)(v32 + 4);
              v40 = *(_DWORD *)(v32 + 8);
              v41 = *(_DWORD *)(v32 + 12);
              v42 = (int)&v7[v29];
              v29 += 32;
              v30 = v42 + 32;
              *(_DWORD *)v37 = v38;
              *(_DWORD *)(v37 + 4) = v39;
              *(_DWORD *)(v37 + 8) = v40;
              *(_DWORD *)(v37 + 12) = v41;
              v2 = v37 + 16;
            }
            while ( v27 != v29 );
            v43 = (unsigned int)&v17[((v28 - 32 - v7) & 0xFFFFFFE0) + 32];
          v6 = v43 + 32;
          if ( v7 )
            operator delete(v7);
          v5 = (int)&v17[32 * v20];
          v7 = v17;
        }
        else
          v11 = v6;
          v12 = *(_DWORD *)(v3 + 4);
          v13 = *(_DWORD *)(v3 + 8);
          v14 = *(_DWORD *)(v3 + 12);
          v6 += 32;
          *(_DWORD *)v11 = *(_DWORD *)v3;
          *(_DWORD *)(v11 + 4) = v12;
          *(_DWORD *)(v11 + 8) = v13;
          *(_DWORD *)(v11 + 12) = v14;
          v11 += 16;
          v15 = *(_DWORD *)(v3 + 24);
          v16 = *(_DWORD *)(v3 + 28);
          *(_DWORD *)v11 = *(_DWORD *)(v3 + 16);
          *(_DWORD *)(v11 + 4) = v2;
          *(_DWORD *)(v11 + 8) = v15;
          *(_DWORD *)(v11 + 12) = v16;
      v3 += 32;
    }
    while ( v3 != HIDWORD(v4) );
  if ( v7 != (char *)v6 )
    v44 = v7;
    v56 = (int)v57 + 52;
    while ( 1 )
      v45 = (*(int (__cdecl **)(_DWORD, char *, _DWORD, int, _DWORD))(**((_DWORD **)v57 + 31) + 28))(
              *((_DWORD *)v57 + 31),
              v44,
              *(_DWORD *)(**((_DWORD **)v57 + 31) + 28),
              v2,
              v55);
      if ( v45 & 8 )
        break;
      if ( v45 & 2 )
        *((_BYTE *)v57 + 68) = 1;
        *((_DWORD *)v57 + 15) = 1050253722;
        *((_DWORD *)v57 + 13) = *((_DWORD *)v57 + 109);
        *((_DWORD *)v57 + 14) = *((_DWORD *)v57 + 110);
        _R0 = (*(int (**)(void))(**((_DWORD **)v57 + 31) + 68))();
        __asm
          VMOV            S0, R0
          VSTR            S0, [R5,#0x40]
      else if ( v45 & 4 )
        *((_BYTE *)v57 + 68) = 0;
      (*(void (**)(void))(**((_DWORD **)v57 + 33) + 20))();
      v44 += 32;
      if ( (char *)v6 == v44 )
        goto LABEL_41;
    ScreenView::_deselectControl(v57, v46, v47);
    ScreenView::_updateKeyboardVisibility(v57, v53, v54);
    ScreenView::_handlePointerLocation((int)v57, v56, 0, 1);
    FocusManager::doesPositionIntersectFocusedControl(*((_DWORD *)v57 + 87), v56);
LABEL_41:
  if ( v7 )
    j_j_j__ZdlPv_5(v7);
}


void __fastcall ScreenView::getScreenName(ScreenView *this, int a2)
{
  ScreenView::getScreenName(this, a2);
}


void __fastcall ScreenView::_handlePointerLocation(int a1, int a2, int a3, int a4)
{
  ScreenView::_handlePointerLocation(a1, a2, a3, a4);
}


int __fastcall ScreenView::_resetDirection(int result)
{
  *(_DWORD *)(result + 404) = 0;
  *(_DWORD *)(result + 408) = 0;
  *(_DWORD *)(result + 412) = 0;
  *(_DWORD *)(result + 416) = 0;
  *(_DWORD *)(result + 420) = 0;
  *(_DWORD *)(result + 424) = 0;
  *(_DWORD *)(result + 428) = 0;
  *(_DWORD *)(result + 432) = 0;
  return result;
}


int __fastcall ScreenView::isDebugRendering(ScreenView *this)
{
  return ScreenView::sRenderDebugControls;
}


unsigned __int64 __fastcall ScreenView::_update(ScreenView *this)
{
  int v1; // r5@0
  const UIControl *v2; // r6@0
  int v5; // r1@1
  int v10; // r0@6
  int v12; // r0@9
  unsigned int *v13; // r7@9
  int v14; // r1@12
  unsigned int v15; // r2@13
  bool v16; // zf@14
  FocusManager *v17; // r0@17
  unsigned int v18; // r0@21
  unsigned int *v19; // r6@25
  unsigned int v20; // r0@27
  int v21; // r0@32
  int v23; // r1@40
  int v24; // r0@43
  int v25; // r0@44
  int v26; // r1@45
  unsigned int *v27; // r2@45
  __int64 v32; // [sp+0h] [bp-40h]@0
  unsigned int *v33; // [sp+8h] [bp-38h]@1
  double v34; // [sp+10h] [bp-30h]@1
  unsigned int v36; // [sp+20h] [bp-20h]@1

  _R4 = this;
  v34 = 0.0;
  v36 = 21;
  v33 = (unsigned int *)unk_27F636C;
  unk_27F636C = &v33;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x40+var_30]
    VSTR            D0, [SP,#0x40+var_28]
  }
  _R2 = v33;
  if ( v33 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  if ( *((_BYTE *)_R4 + 482) )
    *((_BYTE *)_R4 + 482) = 0;
    ScreenView::_deselectControl(_R4, v5, _R2);
  if ( (*(int (**)(void))(**((_DWORD **)_R4 + 121) + 48))() == 1 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 121) + 52))();
    v10 = *((_DWORD *)_R4 + 84);
    _ZF = v10 == 1;
    if ( v10 != 1 )
      v1 = *((_DWORD *)_R4 + 83);
      _ZF = v1 == 0;
    if ( !_ZF )
      v12 = *(_DWORD *)(v1 + 4);
      v13 = (unsigned int *)(v1 + 4);
      while ( v12 )
      {
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
        {
          v15 = __strex(v12 + 1, v13);
          v12 = v14;
          if ( !v15 )
          {
            __dmb();
            v16 = *v13 == 0;
            if ( *v13 )
            {
              v2 = (const UIControl *)*((_DWORD *)_R4 + 82);
              v16 = v2 == 0;
            }
            if ( !v16 )
              ScreenView::_deselectControl(_R4, v14, 0);
              v17 = (FocusManager *)*((_DWORD *)_R4 + 87);
              if ( v17 )
                FocusManager::setFocusControl(v17, v2);
            if ( &pthread_create )
              __dmb();
              do
                v18 = __ldrex(v13);
              while ( __strex(v18 - 1, v13) );
            else
              v18 = (*v13)--;
            if ( v18 == 1 )
              v19 = (unsigned int *)(v1 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
            break;
          }
        }
        else
          __clrex();
      }
  ScreenView::_updateMeasureStrategy(_R4, *((UIMeasureStrategy **)_R4 + 126));
  v21 = *((_BYTE *)_R4 + 48);
  if ( v21 == 2 )
    FocusManager::setActive(*((FocusManager **)_R4 + 87), 0);
  else if ( v21 == 1 && ((unsigned int)(*((_DWORD *)_R4 + 84) - 3) > 1 || *((_DWORD *)_R4 + 85) != 2) )
    FocusManager::setActive(*((FocusManager **)_R4 + 87), 1);
  *((_BYTE *)_R4 + 48) = 0;
  (*(void (**)(void))(**((_DWORD **)_R4 + 31) + 36))();
  (*(void (**)(void))(**((_DWORD **)_R4 + 33) + 20))();
  ScreenView::_bindAlwaysBinds(_R4);
  ScreenView::_processControllerDirection((int)_R4, 0);
  ScreenView::_processControllerDirection((int)_R4, 1u);
    VMOV            D0, R0, R1
    VLDR            S2, [R4,#0x48]
    VCVT.F32.F64    S0, D0
    VSUB.F32        S2, S0, S2
    VSTR            S0, [R4,#0x48]
    VSTR            S2, [R4,#0x4C]
  if ( *((_BYTE *)_R4 + 68) )
    ScreenView::_sendPointerHeldEvents(_R4);
  v23 = *((_DWORD *)_R4 + 4);
  while ( *((_DWORD *)_R4 + 8) != v23 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 31) + 28))();
    v24 = *((_DWORD *)_R4 + 4);
    if ( v24 == *((_DWORD *)_R4 + 6) - 32 )
      operator delete(*((void **)_R4 + 5));
      v25 = *((_DWORD *)_R4 + 7);
      *((_DWORD *)_R4 + 7) = v25 + 4;
      v23 = *(_DWORD *)(v25 + 4);
      *((_DWORD *)_R4 + 5) = v23;
      *((_DWORD *)_R4 + 6) = v23 + 512;
      *((_DWORD *)_R4 + 4) = v23;
    else
      v23 = v24 + 32;
      *((_DWORD *)_R4 + 4) = v24 + 32;
  ScreenView::_handleDirtyVisualTree(_R4, 1, 0);
  VisualTree::removeDeadDependencies(*((VisualTree **)_R4 + 33));
  *((_BYTE *)_R4 + 444) = 0;
  ScreenView::_updateKeyboardVisibility(_R4, v26, v27);
  *((_BYTE *)_R4 + 508) = 1;
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x40+var_30]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x40+var_30]
    VLDR            D0, [SP,#0x40+var_28]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v33;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x40+var_30]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v33;
  __asm { VSTR            D0, [SP,#0x40+var_40] }
  return __PAIR__(v36, ProfilerLite::_endScope(_R0, _R2, _R3, v32));
}


void __fastcall ScreenView::cacheOnDelete(ScreenView *this, CachedScenes *a2)
{
  ScreenView::cacheOnDelete(this, a2);
}


ScreenViewCommand *__fastcall ScreenView::_passViewCommand(ScreenView *this)
{
  ScreenView *v1; // r4@1
  _DWORD *v2; // r0@1
  int v3; // r1@1
  _DWORD *v4; // r0@1
  int v5; // r1@1
  _DWORD *v6; // r0@1
  int v7; // r1@1
  _DWORD *v8; // r0@1
  int v9; // r1@1
  _DWORD *v10; // r0@1
  int v11; // r1@1
  _DWORD *v12; // r0@1
  int v13; // r1@1
  _DWORD *v14; // r0@1
  int v15; // r1@1
  _DWORD *v16; // r0@1
  int v17; // r1@1
  _DWORD *v18; // r0@1
  int v19; // r1@1
  _DWORD *v20; // r0@1
  int v21; // r1@1
  _DWORD *v22; // r0@1
  _DWORD *v24; // [sp+0h] [bp-168h]@1
  int v25; // [sp+4h] [bp-164h]@1
  int (__fastcall *v26)(void **, _DWORD **, int); // [sp+8h] [bp-160h]@1
  void (__fastcall *v27)(int **, int); // [sp+Ch] [bp-15Ch]@1
  _DWORD *v28; // [sp+10h] [bp-158h]@1
  int v29; // [sp+14h] [bp-154h]@1
  int (__fastcall *v30)(void **, _DWORD **, int); // [sp+18h] [bp-150h]@1
  void (__fastcall *v31)(int **, int); // [sp+1Ch] [bp-14Ch]@1
  _DWORD *v32; // [sp+20h] [bp-148h]@1
  int v33; // [sp+24h] [bp-144h]@1
  int (__fastcall *v34)(void **, _DWORD **, int); // [sp+28h] [bp-140h]@1
  char *(__fastcall *v35)(int **, int, unsigned int *); // [sp+2Ch] [bp-13Ch]@1
  _DWORD *v36; // [sp+30h] [bp-138h]@1
  int v37; // [sp+34h] [bp-134h]@1
  int (__fastcall *v38)(void **, _DWORD **, int); // [sp+38h] [bp-130h]@1
  char *(__fastcall *v39)(int **, int, unsigned int *); // [sp+3Ch] [bp-12Ch]@1
  _DWORD *v40; // [sp+40h] [bp-128h]@1
  int v41; // [sp+44h] [bp-124h]@1
  int (__fastcall *v42)(void **, _DWORD **, int); // [sp+48h] [bp-120h]@1
  unsigned int (__fastcall *v43)(int **, int *); // [sp+4Ch] [bp-11Ch]@1
  _DWORD *v44; // [sp+50h] [bp-118h]@1
  int v45; // [sp+54h] [bp-114h]@1
  int (__fastcall *v46)(void **, _DWORD **, int); // [sp+58h] [bp-110h]@1
  int (__fastcall *v47)(int **, const void **); // [sp+5Ch] [bp-10Ch]@1
  _DWORD *v48; // [sp+60h] [bp-108h]@1
  int v49; // [sp+64h] [bp-104h]@1
  int (__fastcall *v50)(void **, _DWORD **, int); // [sp+68h] [bp-100h]@1
  signed int (__fastcall *v51)(int **, int); // [sp+6Ch] [bp-FCh]@1
  _DWORD *v52; // [sp+70h] [bp-F8h]@1
  int v53; // [sp+74h] [bp-F4h]@1
  int (__fastcall *v54)(void **, _DWORD **, int); // [sp+78h] [bp-F0h]@1
  signed int (__fastcall *v55)(int **, const void **); // [sp+7Ch] [bp-ECh]@1
  _DWORD *v56; // [sp+80h] [bp-E8h]@1
  int v57; // [sp+84h] [bp-E4h]@1
  int (__fastcall *v58)(void **, _DWORD **, int); // [sp+88h] [bp-E0h]@1
  void (__fastcall *v59)(int **, int *); // [sp+8Ch] [bp-DCh]@1
  _DWORD *v60; // [sp+90h] [bp-D8h]@1
  int v61; // [sp+94h] [bp-D4h]@1
  int (__fastcall *v62)(void **, _DWORD **, int); // [sp+98h] [bp-D0h]@1
  signed int (__fastcall *v63)(int **, int, int); // [sp+9Ch] [bp-CCh]@1
  _DWORD *v64; // [sp+A0h] [bp-C8h]@1
  int v65; // [sp+A4h] [bp-C4h]@1
  int (__fastcall *v66)(void **, _QWORD **, int); // [sp+A8h] [bp-C0h]@1
  signed int (__fastcall *v67)(int *, int *, unsigned int, unsigned int); // [sp+ACh] [bp-BCh]@1
  _DWORD *v68; // [sp+B0h] [bp-B8h]@1
  int v69; // [sp+B4h] [bp-B4h]@1
  _DWORD *v70; // [sp+C0h] [bp-A8h]@1
  int v71; // [sp+C4h] [bp-A4h]@1
  _DWORD *v72; // [sp+D0h] [bp-98h]@1
  int v73; // [sp+D4h] [bp-94h]@1
  _DWORD *v74; // [sp+E0h] [bp-88h]@1
  int v75; // [sp+E4h] [bp-84h]@1
  _DWORD *v76; // [sp+F0h] [bp-78h]@1
  int v77; // [sp+F4h] [bp-74h]@1
  _DWORD *v78; // [sp+100h] [bp-68h]@1
  int v79; // [sp+104h] [bp-64h]@1
  _DWORD *v80; // [sp+110h] [bp-58h]@1
  int v81; // [sp+114h] [bp-54h]@1
  _DWORD *v82; // [sp+120h] [bp-48h]@1
  int v83; // [sp+124h] [bp-44h]@1
  _DWORD *v84; // [sp+130h] [bp-38h]@1
  int v85; // [sp+134h] [bp-34h]@1
  _DWORD *v86; // [sp+140h] [bp-28h]@1
  int v87; // [sp+144h] [bp-24h]@1
  _DWORD *v88; // [sp+150h] [bp-18h]@1
  int v89; // [sp+154h] [bp-14h]@1

  v1 = this;
  v2 = operator new(4u);
  v68 = v2;
  v3 = v69;
  *v2 = v1;
  v24 = v2;
  v25 = v3;
  v26 = sub_1306A18;
  v27 = sub_130585C;
  v4 = operator new(4u);
  v70 = v4;
  v5 = v71;
  *v4 = v1;
  v28 = v4;
  v29 = v5;
  v30 = sub_1307578;
  v31 = sub_1307188;
  v6 = operator new(4u);
  v72 = v6;
  v7 = v73;
  *v6 = v1;
  v32 = v6;
  v33 = v7;
  v34 = sub_130761C;
  v35 = sub_130760C;
  v8 = operator new(4u);
  v74 = v8;
  v9 = v75;
  *v8 = v1;
  v36 = v8;
  v37 = v9;
  v38 = sub_1307662;
  v39 = sub_1307652;
  v10 = operator new(4u);
  v76 = v10;
  v11 = v77;
  *v10 = v1;
  v40 = v10;
  v41 = v11;
  v42 = sub_1307864;
  v43 = sub_1307698;
  v12 = operator new(4u);
  v78 = v12;
  v13 = v79;
  *v12 = v1;
  v44 = v12;
  v45 = v13;
  v46 = sub_1307A6C;
  v47 = sub_130789C;
  v14 = operator new(4u);
  v80 = v14;
  v15 = v81;
  *v14 = v1;
  v56 = v14;
  v57 = v15;
  v58 = sub_1307D0C;
  v59 = sub_1307AA4;
  v16 = operator new(4u);
  v82 = v16;
  v17 = v83;
  *v16 = v1;
  v48 = v16;
  v49 = v17;
  v50 = sub_1308024;
  v51 = sub_1307E04;
  v18 = operator new(4u);
  v84 = v18;
  v19 = v85;
  *v18 = v1;
  v52 = v18;
  v53 = v19;
  v54 = sub_1308230;
  v55 = sub_13080BC;
  v20 = operator new(4u);
  v86 = v20;
  v21 = v87;
  *v20 = v1;
  v60 = v20;
  v61 = v21;
  v62 = sub_1308A74;
  v63 = sub_1308268;
  v22 = operator new(8u);
  *v22 = v1;
  v22[1] = v1;
  v88 = v22;
  v64 = v22;
  v65 = v89;
  v66 = sub_130904C;
  v67 = sub_1308DC0;
  (*(void (__cdecl **)(_DWORD, _DWORD **, _DWORD, signed int (__fastcall *)(int *, int *, unsigned int, unsigned int), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), void (__fastcall *)(int **, int), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), void (__fastcall *)(int **, int), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), char *(__fastcall *)(int **, int, unsigned int *), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), char *(__fastcall *)(int **, int, unsigned int *), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), unsigned int (__fastcall *)(int **, int *), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), int (__fastcall *)(int **, const void **), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), signed int (__fastcall *)(int **, int), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), signed int (__fastcall *)(int **, const void **), _DWORD *, int, int (__fastcall *)(void **, _DWORD **, int), void (__fastcall *)()(**((_DWORD **)v1 + 31) + 72))(
    *((_DWORD *)v1 + 31),
    &v24,
    *(_DWORD *)(**((_DWORD **)v1 + 31) + 72),
    sub_1308DC0,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v22);
  return ScreenViewCommand::~ScreenViewCommand((ScreenViewCommand *)&v24);
}


unsigned int __fastcall ScreenView::lowFreqRendering(ScreenView *this)
{
  ScreenComponent *v1; // r0@1

  v1 = (ScreenComponent *)ScreenView::_getScreenComponent(this);
  return j_j_j__ZNK15ScreenComponent19getLowFreqRenderingEv(v1);
}
