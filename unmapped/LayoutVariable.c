

int __fastcall LayoutVariable::setGridItemLayoutRule(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r8@1
  unsigned int v5; // r5@1
  int v6; // r10@1
  int v7; // r7@1
  char v8; // r0@1
  int v9; // r4@4
  GridComponent *v10; // r9@5
  char v11; // r0@7
  int v12; // r4@10
  LayoutComponent *v13; // r6@11
  char *v14; // r0@13
  int v15; // r11@14
  char v16; // r0@17
  int v17; // r6@20
  GridItemComponent *v18; // r6@21
  int result; // r0@22
  char *v20; // r0@23
  int v21; // r0@29
  float v28; // [sp+0h] [bp-30h]@0

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v8 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v9 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v10 = *(GridComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v9));
  else
    v10 = 0;
  v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  if ( !(v11 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v12 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v13 = *(LayoutComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v12));
    v13 = 0;
  LayoutRule::clearTerms((LayoutRule *)(v4 + 20));
  v14 = GridComponent::getGridRescalingType(v10);
  if ( v5 > 7 )
    return j_j_j__ZN14LayoutVariable21setRelativeLayoutRuleER9UIControlS1_18LayoutVariableType(v4, v7, v6, v5);
  v15 = *(_DWORD *)v14;
  if ( (1 << v5) & 3 )
    return LayoutRule::addGridItemPositionTerms(v4 + 20, v6, v7, v5, v15);
  if ( (1 << v5) & 0xC )
    v20 = LayoutComponent::getSize(v13);
    if ( v5 != 2 )
      v20 += 12;
    if ( (unsigned int)*(_QWORD *)v20 == *(_QWORD *)v20 >> 32 )
      return j_j_j__ZN10LayoutRule20addGridItemSizeTermsER9UIControl18LayoutVariableType(v4 + 20, v6, v5);
  if ( !((1 << v5) & 0xC0) )
  v16 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( !(v16 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  v17 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
    v18 = *(GridItemComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v17));
    v18 = 0;
  if ( GridComponent::isDynamic(v10) == 1 )
    v21 = GridItemComponent::getCollectionIndex(v18);
    result = LayoutRule::addDynamicGridItemGridPositionTerm(v4 + 20, v6, v7, v5, v15, v21);
    _R0 = GridItemComponent::getGridPosition(v18);
    if ( v5 != 6 )
      _R0 += 4;
    __asm
    {
      VLDR            S0, [R0]
      VCVT.F32.S32    S2, S0
      VLDR            S0, =0.0
    }
    *(_BYTE *)(v4 + 37) |= 2u;
      VSTR            S2, [SP,#0x30+var_28]
      VLDR            S4, [SP,#0x30+var_28]
      VLDR            S6, [SP,#0x30+var_28]
      VCMPE.F32       S4, S6
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
      {
        VLDR            S4, [SP,#0x30+var_28]
        VLDR            S6, =3.4028e38
        VABS.F32        S4, S4
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        __asm { VMOVNE.F32      S0, S2 }
      VMOV            R2, S0
      VSTR            S0, [R8,#0x10]
    if ( *(_DWORD *)(v4 + 32) )
        VSTRNE          S0, [R0]
        VSTRNE          S0, [R0,#0x10]
    *(_BYTE *)(v4 + 37) |= 1u;
    __asm { VSTR            S0, [SP,#0x30+var_30] }
    result = setControlVariableValue(*(UIControl **)v4, *(_BYTE *)(v4 + 36), _R2, _R2, v28);
  return result;
}


_DWORD *__fastcall LayoutVariable::toString(int *a1, int a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r2@2
  unsigned int v7; // r1@4
  int v8; // r0@9
  void *v9; // r6@9
  VariableRef *v10; // r8@10
  char *v11; // r4@10
  int v12; // r1@11
  int v13; // r2@11
  unsigned int *v14; // r1@12
  unsigned int v15; // r2@14
  unsigned int *v16; // r2@17
  int v17; // r0@17
  int v19; // r2@25
  int *v20; // r1@25
  int *i; // r0@25
  _DWORD *v22; // r6@35
  int v23; // r0@35
  int v24; // r7@35
  int *v25; // r8@35
  int *v26; // r0@36
  unsigned int v27; // r1@36
  int v28; // r0@39
  int v29; // r0@45
  int *v30; // r7@51
  char *v31; // r5@51
  char *v32; // r6@51
  int v33; // r0@51
  const char *v34; // r0@51
  int v35; // r4@51
  int v36; // r0@52
  void *v38; // r0@54
  int v44; // r1@60
  int v45; // r6@61
  char v46; // r1@63
  char *v47; // r0@65
  void *v48; // r0@66
  int v49; // r6@67
  char v50; // r1@69
  char *v51; // r0@71
  VariableRef *v52; // r10@72
  char *v53; // r8@72
  int v54; // r4@72
  int v55; // r6@72
  _QWORD *v56; // r0@73
  int v57; // r1@74
  int v58; // r2@74
  unsigned int *v59; // r1@75
  unsigned int v60; // r2@77
  int v61; // r2@81
  int v62; // r4@83
  int v63; // r0@84
  unsigned int *v64; // r2@85
  unsigned int v65; // r1@87
  int v66; // r6@97
  unsigned int *v67; // r1@98
  unsigned int v68; // r0@100
  int *v69; // r7@104
  char *v70; // r5@104
  unsigned int *v71; // r4@104
  unsigned int v72; // r0@106
  int v73; // r0@111
  unsigned int *v74; // r2@112
  unsigned int v75; // r1@114
  unsigned int *v76; // r2@121
  signed int v77; // r1@123
  unsigned int *v78; // r2@129
  signed int v79; // r1@131
  void **v80; // r0@141
  void *v81; // r0@141
  unsigned int *v83; // r2@143
  signed int v84; // r1@145
  int v85; // [sp+4h] [bp-154h]@1
  int v86; // [sp+Ch] [bp-14Ch]@72
  int v87; // [sp+10h] [bp-148h]@72
  int v88; // [sp+18h] [bp-140h]@60
  int v89; // [sp+1Ch] [bp-13Ch]@51
  int v90; // [sp+20h] [bp-138h]@51
  int v91; // [sp+24h] [bp-134h]@97
  int v92; // [sp+28h] [bp-130h]@10
  int v93; // [sp+2Ch] [bp-12Ch]@11
  int v94; // [sp+30h] [bp-128h]@11
  unsigned int *v95; // [sp+34h] [bp-124h]@17
  char v96; // [sp+38h] [bp-120h]@17
  char v97; // [sp+3Ch] [bp-11Ch]@1
  int v98; // [sp+44h] [bp-114h]@1
  char v99; // [sp+50h] [bp-108h]@139
  int v100; // [sp+54h] [bp-104h]@1
  int v101; // [sp+58h] [bp-100h]@1
  int *v102; // [sp+5Ch] [bp-FCh]@1
  int *v103; // [sp+60h] [bp-F8h]@1
  int v104; // [sp+64h] [bp-F4h]@1
  _QWORD *v105; // [sp+68h] [bp-F0h]@1
  _QWORD *v106; // [sp+6Ch] [bp-ECh]@1
  _QWORD *v107; // [sp+70h] [bp-E8h]@1
  void **v108; // [sp+74h] [bp-E4h]@1
  int v109; // [sp+78h] [bp-E0h]@142
  void **v110; // [sp+7Ch] [bp-DCh]@10
  void **v111; // [sp+80h] [bp-D8h]@139
  int v112; // [sp+9Ch] [bp-BCh]@142
  int v113; // [sp+A4h] [bp-B4h]@141
  int v114; // [sp+A8h] [bp-B0h]@142

  v3 = a2;
  v4 = a1;
  v85 = a3;
  sub_DA7794((int)&v108, 24);
  v106 = 0;
  v107 = 0;
  v104 = 0;
  v105 = 0;
  v100 = 0;
  v101 = 0;
  v102 = &v100;
  v103 = &v100;
  VariableRef::VariableRef((int)&v97, *(_DWORD *)v3, *(_BYTE *)(v3 + 36));
  std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<VariableRef>(
    (unsigned __int64 *)&v105,
    (int)&v97);
  v5 = v98;
  if ( v98 )
  {
    v6 = (unsigned int *)(v98 + 8);
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
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  }
  v8 = (int)v106;
  v9 = v105;
  if ( v105 != v106 )
    v10 = (VariableRef *)&v92;
    v11 = (char *)&v110;
    while ( 1 )
      v92 = *(_DWORD *)(v8 - 20);
      v93 = *(_DWORD *)(v8 - 16);
      v12 = v8;
      v13 = *(_DWORD *)(v8 - 12);
      v94 = v13;
      if ( v13 )
      {
        v14 = (unsigned int *)(v13 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 + 1, v14) );
          v12 = (int)v106;
        }
        else
          ++*v14;
          v12 = v8;
      }
      v16 = *(unsigned int **)(v8 - 8);
      v96 = *(_BYTE *)(v8 - 4);
      v95 = v16;
      v106 = (_QWORD *)(v12 - 20);
      v17 = *(_DWORD *)(v12 - 12);
      if ( v17 )
        v16 = (unsigned int *)(v17 + 8);
            v12 = __ldrex(v16);
          while ( __strex(v12 - 1, v16) );
          v12 = (*v16)--;
        if ( v12 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      _R10 = VariableRef::getVariable(v10, v12, (int)v16);
      v19 = v101;
      v20 = &v100;
      for ( i = &v100; v19; v20 = i )
        i = (int *)v19;
        while ( i[4] < (unsigned int)_R10 )
          i = (int *)i[3];
          if ( !i )
          {
            i = v20;
            goto LABEL_31;
          }
        v19 = i[2];
LABEL_31:
      if ( i != &v100 )
        if ( (unsigned int)_R10 < i[4] )
          i = &v100;
        if ( i != &v100 )
          goto LABEL_111;
      v22 = operator new(0x14u);
      v23 = v101;
      v24 = (int)v10;
      v25 = &v100;
      v22[4] = _R10;
      if ( v23 )
        do
          v25 = (int *)v23;
          v26 = (int *)(v23 + 12);
          v27 = v25[4];
          if ( (unsigned int)_R10 < v27 )
            v26 = v25 + 2;
          v23 = *v26;
        while ( v23 );
        v28 = (int)v25;
        if ( (unsigned int)_R10 >= v27 )
          goto LABEL_42;
      if ( v25 != v102 )
        break;
LABEL_43:
      if ( v25 )
        if ( &v100 == v25 )
          v29 = 1;
          v29 = 0;
          if ( (unsigned int)_R10 < v25[4] )
            v29 = 1;
        sub_DA7FAC(v29, (int)v22, (int)v25, (int)&v100);
        ++v104;
        goto LABEL_51;
LABEL_48:
      operator delete(v22);
LABEL_51:
      v10 = (VariableRef *)v24;
      VariableRef::getControl((VariableRef *)&v90, v24);
      sub_DA78D4(v11, (int)"[", 1);
      UIControl::getPathedName((UIControl *)&v89, v90);
      v30 = v4;
      v31 = v11;
      v32 = sub_DA78D4(v11, v89, *(_DWORD *)(v89 - 12));
      sub_DA78D4(v32, (int)".", 1);
      v33 = VariableRef::getType(v10);
      v34 = stringizeLayoutVariableType(v33);
      v35 = (int)v34;
      if ( v34 )
        v36 = strlen(v34);
        sub_DA78D4(v32, v35, v36);
      else
        sub_DA7A8C(
          (int)&v32[*(_DWORD *)(*(_DWORD *)v32 - 12)],
          *(_DWORD *)&v32[*(_DWORD *)(*(_DWORD *)v32 - 12) + 20] | 1);
      sub_DA78D4(v32, (int)" = ", 3);
      v38 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v89 - 4);
            v77 = __ldrex(v76);
            _R3 = v77 - 1;
          while ( __strex(v77 - 1, v76) );
          v77 = *v76;
          _R3 = *v76 - 1;
          *v76 = _R3;
        if ( v77 <= 0 )
          j_j_j_j_j__ZdlPv_9(v38);
      v11 = v31;
      if ( *((_BYTE *)_R10 + 37) & 1 )
        __asm
          VLDR            S0, [R10,#0x10]
          VCVT.F64.F32    D0, S0
          VMOV            R2, R3, D0
        sub_DA8D04(v31);
        v4 = v30;
        sub_DA78D4(v31, (int)"?", 1);
      sub_DA78D4(v11, (int)"]", 1);
      if ( v85 )
        if ( !(*((_BYTE *)_R10 + 37) & 2) )
          LayoutRule::toString((LayoutRule *)&v88, (unsigned __int64 *)((char *)_R10 + 20));
          v44 = v88;
          if ( *(_DWORD *)(v88 - 12) )
            sub_DA78D4(v11, (int)" (", 2);
            v45 = *(_DWORD *)&v11[(_DWORD)*(v110 - 3) + 124];
            if ( !v45 )
              sub_DA7ACC();
            if ( *(_BYTE *)(v45 + 28) )
            {
              v46 = *(_BYTE *)(v45 + 39);
            }
            else
              sub_DA7A9C(v45);
              v46 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v45 + 24))(v45, 10);
            v47 = sub_DA7AAC(v11, v46);
            sub_DA7ABC(v47);
            sub_DA78D4(v11, v88, *(_DWORD *)(v88 - 12));
            sub_DA78D4(v11, (int)")", 1);
            v44 = v88;
          v48 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
            v78 = (unsigned int *)(v44 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j_j__ZdlPv_9(v48);
        v49 = *(_DWORD *)&v11[(_DWORD)*(v110 - 3) + 124];
        if ( !v49 )
          sub_DA7ACC();
        if ( *(_BYTE *)(v49 + 28) )
          v50 = *(_BYTE *)(v49 + 39);
          sub_DA7A9C(v49);
          v50 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v49 + 24))(v49, 10);
        v51 = sub_DA7AAC(v11, v50);
        sub_DA7ABC(v51);
        if ( v85 == 2 )
          LayoutRule::getDependantVariables((LayoutRule *)&v86, (unsigned __int64 *)((char *)_R10 + 20));
          v52 = v10;
          v53 = v11;
          v54 = v87;
          v55 = v86;
          if ( v86 != v87 )
            do
              v56 = v106;
              if ( v106 == v107 )
              {
                std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<VariableRef const&>(
                  (unsigned __int64 *)&v105,
                  v55);
              }
              else
                *v106 = *(_QWORD *)v55;
                v57 = (int)v56;
                v58 = *(_DWORD *)(v55 + 8);
                *((_DWORD *)v56 + 2) = v58;
                if ( v58 )
                {
                  v59 = (unsigned int *)(v58 + 8);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v60 = __ldrex(v59);
                    while ( __strex(v60 + 1, v59) );
                    v57 = (int)v106;
                  }
                  else
                    ++*v59;
                    v57 = (int)v56;
                }
                v61 = *(_DWORD *)(v55 + 12);
                *((_BYTE *)v56 + 16) = *(_BYTE *)(v55 + 16);
                *((_DWORD *)v56 + 3) = v61;
                v106 = (_QWORD *)(v57 + 20);
              v55 += 20;
            while ( v55 != v54 );
            v55 = v87;
            v62 = v86;
            if ( v86 != v87 )
                v63 = *(_DWORD *)(v62 + 8);
                if ( v63 )
                  v64 = (unsigned int *)(v63 + 8);
                      v65 = __ldrex(v64);
                    while ( __strex(v65 - 1, v64) );
                    v65 = (*v64)--;
                  if ( v65 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v63 + 12))();
                v62 += 20;
              while ( v62 != v55 );
              v55 = v86;
          v11 = v53;
          if ( v55 )
            operator delete((void *)v55);
          v10 = v52;
      v66 = v91;
      if ( v91 )
        v67 = (unsigned int *)(v91 + 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 == 1 )
          v69 = v4;
          v70 = v11;
          v71 = (unsigned int *)(v66 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 8))(v66);
          if ( &pthread_create )
            __dmb();
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
          else
            v72 = (*v71)--;
          v11 = v70;
          v4 = v69;
          if ( v72 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 12))(v66);
LABEL_111:
      v73 = v94;
      if ( v94 )
        v74 = (unsigned int *)(v94 + 8);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 == 1 )
          (*(void (**)(void))(*(_DWORD *)v73 + 12))();
      v8 = (int)v106;
      v9 = v105;
      if ( v105 == v106 )
        goto LABEL_139;
    v28 = sub_DA7F9C((int)v25);
LABEL_42:
    if ( *(_DWORD *)(v28 + 16) >= (unsigned int)_R10 )
      goto LABEL_48;
    goto LABEL_43;
LABEL_139:
  sub_DA77A4(v4, (int)&v111);
  std::_Rb_tree<LayoutVariable const*,LayoutVariable const*,std::_Identity<LayoutVariable const*>,std::less<LayoutVariable const*>,std::allocator<LayoutVariable const*>>::_M_erase(
    (int)&v99,
    v101);
  if ( v9 )
    operator delete(v9);
  v80 = off_26D3F84;
  v108 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v108) = off_26D3F80[0];
  v110 = v80;
  v111 = &off_27734E8;
  v81 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v113 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v81);
  v111 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v112);
  v108 = (void **)off_26D3F68;
  *(void ***)((char *)&v108 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v109 = 0;
  return sub_DA76E4(&v114);
}


int __fastcall LayoutVariable::addPostComputationalNeeds(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r7@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r9@1
  char v7; // r0@1
  int v8; // r4@4
  LayoutComponent *v9; // r6@5
  int result; // r0@7
  __int64 v11; // kr00_8@11
  int v12; // r8@11
  unsigned int *v13; // r0@12
  unsigned int v14; // r1@14
  __int64 v15; // kr08_8@18
  unsigned int *v16; // r0@19
  unsigned int v17; // r1@21
  int v18; // r1@24
  void *v19; // r0@24
  unsigned int *v20; // r1@25
  unsigned int v21; // r2@27
  void *v22; // r0@30
  unsigned int *v23; // r1@31
  unsigned int v24; // r2@33
  int v25; // r1@36
  __int64 v26; // r0@36
  __int64 v27; // kr10_8@37
  int (*v28)(void); // r2@37
  int (__fastcall *v29)(LayoutVariable ***); // r2@37
  unsigned int *v30; // r1@42
  __int64 v31; // r0@47
  __int64 v32; // kr18_8@48
  int (*v33)(void); // r2@48
  int (__fastcall *v34)(LayoutVariable ***); // r2@48
  int v35; // [sp+0h] [bp-50h]@30
  char v36; // [sp+4h] [bp-4Ch]@30
  void *v37; // [sp+8h] [bp-48h]@47
  int (*v38)(void); // [sp+10h] [bp-40h]@30
  int (__fastcall *v39)(LayoutVariable ***); // [sp+14h] [bp-3Ch]@47
  int v40; // [sp+18h] [bp-38h]@24
  char v41; // [sp+1Ch] [bp-34h]@24
  void *v42; // [sp+20h] [bp-30h]@36
  int (*v43)(void); // [sp+28h] [bp-28h]@24
  int (__fastcall *v44)(LayoutVariable ***); // [sp+2Ch] [bp-24h]@36

  v3 = a1;
  v4 = *a1;
  v5 = a3;
  v6 = a2;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v8 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v9 = *(LayoutComponent **)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v8));
  else
    v9 = 0;
  result = *((_BYTE *)v3 + 36);
  if ( result == 2 )
    if ( v9 )
    {
      result = LayoutComponent::getInheritMaxSiblingWidth(v9);
      if ( result == 1 )
      {
        v15 = *(_QWORD *)v5;
        v12 = *(_DWORD *)(v5 + 8);
        if ( v12 )
        {
          v16 = (unsigned int *)(v12 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 + 1, v16) );
          }
          else
            ++*v16;
        }
        v36 = *(_BYTE *)(v5 + 16);
        v35 = *(_DWORD *)(v5 + 12);
        v38 = 0;
        v22 = operator new(0x1Cu);
        *(_DWORD *)v22 = v3;
        *(_QWORD *)((char *)v22 + 4) = v15;
        *((_DWORD *)v22 + 3) = v12;
          v23 = (unsigned int *)(v12 + 8);
              v24 = __ldrex(v23);
            while ( __strex(v24 + 1, v23) );
            ++*v23;
        *((_BYTE *)v22 + 20) = v36;
        *((_DWORD *)v22 + 4) = v35;
        *((_DWORD *)v22 + 6) = v9;
        v37 = v22;
        v38 = (int (*)(void))sub_CC75B4;
        v39 = sub_CC7454;
        v31 = *(_QWORD *)(v6 + 4);
        if ( (_DWORD)v31 == HIDWORD(v31) )
          result = (int)std::vector<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_emplace_back_aux<std::function<void ()(void)>>(
                          (unsigned __int64 *)v6,
                          (int)&v37);
        else
          *(_DWORD *)(v31 + 8) = 0;
          v32 = *(_QWORD *)&v37;
          *(_QWORD *)&v37 = *(_QWORD *)v31;
          *(_QWORD *)v31 = v32;
          v33 = v38;
          v38 = *(int (**)(void))(v31 + 8);
          *(_DWORD *)(v31 + 8) = v33;
          v34 = v39;
          v39 = *(int (__fastcall **)(LayoutVariable ***))(v31 + 12);
          *(_DWORD *)(v31 + 12) = v34;
          result = *(_DWORD *)(v6 + 4) + 16;
          *(_DWORD *)(v6 + 4) = result;
        if ( v38 )
          result = v38();
          v30 = (unsigned int *)(v12 + 8);
              result = __ldrex(v30);
            while ( __strex(result - 1, v30) );
            goto LABEL_58;
          goto LABEL_57;
      }
    }
  else if ( result == 3 )
      result = LayoutComponent::getInheritMaxSiblingHeight(v9);
        v11 = *(_QWORD *)v5;
          v13 = (unsigned int *)(v12 + 8);
              v14 = __ldrex(v13);
            while ( __strex(v14 + 1, v13) );
            ++*v13;
        v18 = *(_DWORD *)(v5 + 12);
        v41 = *(_BYTE *)(v5 + 16);
        v40 = v18;
        v43 = 0;
        v19 = operator new(0x1Cu);
        *(_DWORD *)v19 = v3;
        *(_QWORD *)((char *)v19 + 4) = v11;
        *((_DWORD *)v19 + 3) = v12;
          v20 = (unsigned int *)(v12 + 8);
              v21 = __ldrex(v20);
            while ( __strex(v21 + 1, v20) );
            ++*v20;
        v25 = v40;
        *((_BYTE *)v19 + 20) = v41;
        *((_DWORD *)v19 + 4) = v25;
        *((_DWORD *)v19 + 6) = v9;
        v42 = v19;
        v43 = (int (*)(void))sub_CC7398;
        v44 = sub_CC7238;
        v26 = *(_QWORD *)(v6 + 4);
        if ( (_DWORD)v26 == HIDWORD(v26) )
                          (int)&v42);
          *(_DWORD *)(v26 + 8) = 0;
          v27 = *(_QWORD *)&v42;
          *(_QWORD *)&v42 = *(_QWORD *)v26;
          *(_QWORD *)v26 = v27;
          v28 = v43;
          v43 = *(int (**)(void))(v26 + 8);
          *(_DWORD *)(v26 + 8) = v28;
          v29 = v44;
          v44 = *(int (__fastcall **)(LayoutVariable ***))(v26 + 12);
          *(_DWORD *)(v26 + 12) = v29;
        if ( v43 )
          result = v43();
LABEL_57:
          result = (*v30)--;
LABEL_58:
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
          return result;
  return result;
}


int __fastcall LayoutVariable::_initialize(LayoutVariable *this, int a2)
{
  LayoutVariable *v2; // r4@1
  int v3; // r5@1
  char v4; // r0@1
  int v5; // r1@3
  int result; // r0@6
  UIControl *v12; // r6@7
  char v13; // r0@8
  int v14; // r7@11
  UIControl *v15; // r6@14
  char v16; // r0@14
  int v17; // r7@17
  int v18; // r0@18
  UIControl *v19; // r2@18
  unsigned int v20; // r3@18
  UIControl *v21; // r1@18
  UIControl *v23; // r6@25
  char v24; // r0@25
  int v25; // r7@28
  int v26; // r0@29
  int v27; // r2@29
  int v28; // r1@29
  UIControl *v29; // r6@29
  char v30; // r0@32
  int v31; // r7@35
  int v32; // r0@36
  UIControl *v33; // r1@36
  int v34; // r4@42
  unsigned int *v35; // r1@43
  unsigned int *v36; // r5@49
  float v37; // [sp+0h] [bp-20h]@0
  UIControl *v38; // [sp+4h] [bp-1Ch]@7
  int v39; // [sp+8h] [bp-18h]@42

  v2 = this;
  v3 = a2;
  v4 = *((_BYTE *)this + 37);
  if ( !(v4 & 2) )
    *((_BYTE *)v2 + 37) = v4 & 0xFE;
  v5 = *((_BYTE *)v2 + 36);
  if ( (v5 & 0xFE) == 4 )
  {
    _R2 = getControlVariableValue(*(UIControl **)v2, v5);
    *((_DWORD *)v2 + 4) = _R2;
    __asm { VMOV            S0, R2 }
    if ( *((_DWORD *)v2 + 8) )
    {
      __asm
      {
        VSTRNE          S0, [R0]
        VSTRNE          S0, [R0,#0x10]
      }
    }
    *((_BYTE *)v2 + 37) |= 1u;
    __asm { VSTR            S0, [SP,#0x20+var_20] }
    return setControlVariableValue(*(UIControl **)v2, *((_BYTE *)v2 + 36), _R2, _R2, v37);
  }
  UIControl::getParent((UIControl *)&v38, *(_DWORD *)v2);
  v12 = v38;
  if ( !v38 )
    _R2 = getControlVariableValue(*(UIControl **)v2, *((_BYTE *)v2 + 36));
    __asm
      VMOV            S0, R2
      VSTR            S0, [R4,#0x10]
    result = setControlVariableValue(*(UIControl **)v2, *((_BYTE *)v2 + 36), _R2, _R2, v37);
    goto LABEL_42;
  v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v14 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v12, type_id<UIComponent,GridComponent>(void)::id[0]) != 1
    || !*(_DWORD *)(*((_DWORD *)v12 + 27) + 4 * UIControl::_getComponentIndex(v12, v14)) )
    v15 = v38;
    v16 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
    __dmb();
    if ( !(v16 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
      type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
    v17 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v15, type_id<UIComponent,StackPanelComponent>(void)::id[0]) )
      v18 = UIControl::_getComponentIndex(v15, v17);
      v19 = v38;
      v20 = *((_BYTE *)v2 + 36);
      v21 = *(UIControl **)v2;
      if ( *(_DWORD *)(*((_DWORD *)v15 + 27) + 4 * v18) )
        LayoutVariable::setStackPanelItemLayoutRule((int)v2, (int)v21, (int)v38, v20);
        goto LABEL_25;
    else
    LayoutVariable::setRelativeLayoutRule((int)v2, (int)v21, (int)v19, v20);
    goto LABEL_25;
  LayoutVariable::setGridItemLayoutRule((int)v2, *(_DWORD *)v2, (int)v38, *((_BYTE *)v2 + 36));
LABEL_25:
  v23 = *(UIControl **)v2;
  v24 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  if ( !(v24 & 1)
  v25 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( !UIControl::_hasComponent(v23, type_id<UIComponent,GridComponent>(void)::id[0]) )
    v29 = *(UIControl **)v2;
    goto LABEL_32;
  v26 = UIControl::_getComponentIndex(v23, v25);
  v28 = *((_DWORD *)v23 + 27);
  v29 = *(UIControl **)v2;
  if ( !*(_DWORD *)(v28 + 4 * v26) )
LABEL_32:
    v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
    if ( !(v30 & 1)
    v31 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v29, type_id<UIComponent,StackPanelComponent>(void)::id[0]) )
      v32 = UIControl::_getComponentIndex(v29, v31);
      v33 = *(UIControl **)v2;
      if ( *(_DWORD *)(*((_DWORD *)v29 + 27) + 4 * v32) )
        LayoutVariable::overrideStackPanelLayoutRule((int)v2, (int)v33, (int)v38, *((_BYTE *)v2 + 36));
        goto LABEL_41;
    if ( UIControl::hasRenderableComponent(v33) == 1 )
      LayoutVariable::overrideRenderableLayoutRule((int)v2, *(_DWORD *)v2, *((_BYTE *)v2 + 36));
    goto LABEL_41;
  LayoutVariable::overrideGridLayoutRule((int)v2, *(_DWORD *)v2, v27, *((_BYTE *)v2 + 36));
LABEL_41:
  result = LayoutVariable::_addDependsOnMeEntriesForInvalidation(v2, v3);
LABEL_42:
  v34 = v39;
  if ( v39 )
    v35 = (unsigned int *)(v39 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v35);
      while ( __strex(result - 1, v35) );
      result = (*v35)--;
    if ( result == 1 )
      v36 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v36);
        while ( __strex(result - 1, v36) );
      else
        result = (*v36)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  return result;
}


signed int __fastcall LayoutVariable::isSatisfiable(LayoutVariable *this, int a2, int a3)
{
  LayoutVariable *v3; // r4@1
  signed int result; // r0@2
  int v5; // r0@3
  int v6; // r1@4
  int v7; // r2@4

  v3 = this;
  if ( *((_BYTE *)this + 37) & 1 )
  {
    result = 1;
  }
  else
    v5 = *((_DWORD *)this + 8);
    if ( v5
      && (LayoutRule::isSatisfiable((LayoutRule *)(v5 + 4), a2, a3) != 1
       || LayoutRule::isSatisfiable((LayoutRule *)(*((_DWORD *)v3 + 8) + 20), v6, v7) != 1) )
    {
      result = 0;
    }
    else
      result = LayoutRule::isSatisfiable((LayoutVariable *)((char *)v3 + 20), a2, a3);
  return result;
}


int __fastcall LayoutVariable::_removeDependsOnMeEntries(LayoutVariable *this)
{
  LayoutVariable *v1; // r4@1
  int result; // r0@1

  v1 = this;
  LayoutRule::removeDependsOnMeEntries((LayoutVariable *)((char *)this + 20));
  result = *((_DWORD *)v1 + 8);
  if ( result )
  {
    LayoutRule::removeDependsOnMeEntries((LayoutRule *)(result + 4));
    result = j_j_j__ZN10LayoutRule24removeDependsOnMeEntriesEv((LayoutRule *)(*((_DWORD *)v1 + 8) + 20));
  }
  return result;
}


char *__fastcall LayoutVariable::overrideGridLayoutRule(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r5@1
  char v7; // r0@1
  int v8; // r4@4
  GridComponent *v9; // r6@5
  char v10; // r0@7
  int v11; // r4@10
  LayoutComponent *v12; // r4@11
  char *result; // r0@13
  int v14; // r7@14
  __int64 v20; // kr00_8@18
  int v21; // r4@26
  unsigned int *v22; // r1@27
  unsigned int *v23; // r1@33
  __int64 v25; // kr08_8@40
  unsigned int *v26; // r1@49
  unsigned int *v27; // r1@55
  int v31; // r4@70
  int *v32; // r0@70
  unsigned int *v33; // r1@71
  int v34; // r4@75
  int *v35; // r0@75
  unsigned int *v36; // r1@76
  unsigned int *v37; // r5@82
  int v38; // [sp+0h] [bp-60h]@0
  int v39; // [sp+4h] [bp-5Ch]@75
  int v40; // [sp+8h] [bp-58h]@75
  int v41; // [sp+Ch] [bp-54h]@54
  int v42; // [sp+10h] [bp-50h]@54
  int v43; // [sp+14h] [bp-4Ch]@70
  int v44; // [sp+18h] [bp-48h]@70
  int v45; // [sp+1Ch] [bp-44h]@32
  int v46; // [sp+20h] [bp-40h]@32
  int v47; // [sp+24h] [bp-3Ch]@48
  int v48; // [sp+28h] [bp-38h]@48
  int v49; // [sp+2Ch] [bp-34h]@26
  int v50; // [sp+30h] [bp-30h]@26

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v8 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    v9 = *(GridComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v8));
  else
    v9 = 0;
  v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  if ( !(v10 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v11 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v12 = *(LayoutComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v11));
    v12 = 0;
  result = GridComponent::getGridRescalingType(v9);
  if ( (unsigned int)(v5 - 2) <= 7 )
    v14 = *(_DWORD *)result;
    switch ( *(_DWORD *)result )
    {
      case 0:
        result = (char *)GridComponent::isDynamic(v9);
        if ( result == (char *)1 )
        {
          LayoutComponent::hasSizeAxisType((int)v12, 2, 0);
          __asm
          {
            VMOV.F32        S18, #1.0
            VLDR            S16, =0.0
          }
          if ( !_ZF )
            __asm { VMOVNE.F32      S16, S18 }
          v20 = *(_QWORD *)LayoutComponent::getSize(v12);
          result = (char *)HIDWORD(v20);
          _R1 = v20;
          if ( (_DWORD)v20 != HIDWORD(v20) )
            __asm { VMOV.F32        S0, #-1.0 }
            do
            {
              if ( *(_DWORD *)_R1 == 5 )
              {
                __asm { VMOV.F32        S2, S0 }
                if ( !*(_DWORD *)(_R1 + 8) )
                  __asm { VMOVEQ.F32      S2, S18 }
                __asm
                {
                  VLDR            S4, [R1,#4]
                  VMUL.F32        S2, S2, S4
                  VADD.F32        S16, S2, S16
                }
              }
              _R1 += 12;
            }
            while ( HIDWORD(v20) != _R1 );
            VCMPE.F32       S16, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            LayoutRule::clearTerms((LayoutRule *)(v4 + 20));
            GridComponent::getGridItemTemplate((GridComponent *)&v49, (int)v9);
            __asm { VSTR            S16, [SP,#0x60+var_60] }
            result = (char *)LayoutRule::addGridSizeTerms(COERCE_FLOAT(v4 + 20), v6, v49, 2, v38);
            v21 = v50;
            if ( v50 )
              v22 = (unsigned int *)(v50 + 4);
              if ( &pthread_create )
                __dmb();
                do
                  result = (char *)__ldrex(v22);
                while ( __strex((unsigned int)(result - 1), v22) );
              else
                result = (char *)(*v22)--;
              if ( result == (char *)1 )
                v37 = (unsigned int *)(v21 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
                if ( !&pthread_create )
                  goto LABEL_116;
                  result = (char *)__ldrex(v37);
                while ( __strex((unsigned int)(result - 1), v37) );
                goto LABEL_117;
        }
        return result;
      case 1:
          LayoutComponent::hasSizeAxisType((int)v12, 3, 0);
          v25 = *(_QWORD *)(LayoutComponent::getSize(v12) + 12);
          result = (char *)HIDWORD(v25);
          _R1 = v25;
          if ( (_DWORD)v25 != HIDWORD(v25) )
              if ( *(_DWORD *)_R1 == 6 )
            while ( HIDWORD(v25) != _R1 );
            GridComponent::getGridItemTemplate((GridComponent *)&v47, (int)v9);
            result = (char *)LayoutRule::addGridSizeTerms(COERCE_FLOAT(v4 + 20), v6, v47, 3, v38);
            v21 = v48;
            if ( v48 )
              v26 = (unsigned int *)(v48 + 4);
                  result = (char *)__ldrex(v26);
                while ( __strex((unsigned int)(result - 1), v26) );
                result = (char *)(*v26)--;
      default:
      case 6:
        if ( GridComponent::getNeedsRescaling(v9) == 1 )
          GridComponent::getGridItemTemplate((GridComponent *)&v45, (int)v9);
          result = (char *)LayoutRule::addRescalingGridDimensionTerm(v4 + 20, v6, v45, 8, v14);
          v21 = v46;
          if ( v46 )
            v23 = (unsigned int *)(v46 + 4);
            if ( &pthread_create )
              __dmb();
              do
                result = (char *)__ldrex(v23);
              while ( __strex((unsigned int)(result - 1), v23) );
            else
              result = (char *)(*v23)--;
            if ( result == (char *)1 )
              v37 = (unsigned int *)(v21 + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v21 + 8))(v21);
              if ( !&pthread_create )
                goto LABEL_116;
                result = (char *)__ldrex(v37);
              while ( __strex((unsigned int)(result - 1), v37) );
              goto LABEL_117;
        else
          if ( *(_DWORD *)GridComponent::getGridFillDirection(v9) == 2 )
            _R0 = GridComponent::getGridDimensions(v9);
            __asm { VLDR            S0, [R0] }
            goto LABEL_63;
          GridComponent::getGridItemTemplate((GridComponent *)&v43, (int)v9);
          v31 = v43;
          v32 = (int *)GridComponent::getGridFillDirection(v9);
          result = (char *)LayoutRule::addFillGridDimensionTerm(v4 + 20, v6, v31, 8, *v32);
          v21 = v44;
          if ( v44 )
            v33 = (unsigned int *)(v44 + 4);
                result = (char *)__ldrex(v33);
              while ( __strex((unsigned int)(result - 1), v33) );
              result = (char *)(*v33)--;
      case 7:
          GridComponent::getGridItemTemplate((GridComponent *)&v41, (int)v9);
          result = (char *)LayoutRule::addRescalingGridDimensionTerm(v4 + 20, v6, v41, 9, v14);
          v21 = v42;
          if ( v42 )
            v27 = (unsigned int *)(v42 + 4);
                result = (char *)__ldrex(v27);
              while ( __strex((unsigned int)(result - 1), v27) );
              result = (char *)(*v27)--;
LABEL_116:
              result = (char *)(*v37)--;
LABEL_117:
                result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
              return result;
        else if ( *(_DWORD *)GridComponent::getGridFillDirection(v9) == 2 )
          _R0 = GridComponent::getGridDimensions(v9);
          __asm { VLDR            S0, [R0,#4] }
LABEL_63:
            VCVT.F32.S32    S2, S0
            VLDR            S0, =0.0
          *(_BYTE *)(v4 + 37) |= 2u;
            VSTR            S2, [SP,#0x60+var_2C]
            VLDR            S4, [SP,#0x60+var_2C]
            VLDR            S6, [SP,#0x60+var_2C]
            VCMPE.F32       S4, S6
          if ( _ZF )
            __asm
              VLDR            S4, [SP,#0x60+var_2C]
              VLDR            S6, =3.4028e38
              VABS.F32        S4, S4
              VCMPE.F32       S4, S6
              VMRS            APSR_nzcv, FPSCR
            if ( !_ZF )
              __asm { VMOVNE.F32      S0, S2 }
            VMOV            R2, S0
            VSTR            S0, [R8,#0x10]
          if ( *(_DWORD *)(v4 + 32) )
              VSTRNE          S0, [R0]
              VSTRNE          S0, [R0,#0x10]
          *(_BYTE *)(v4 + 37) |= 1u;
          __asm { VSTR            S0, [SP,#0x60+var_60] }
          result = (char *)setControlVariableValue(*(UIControl **)v4, *(_BYTE *)(v4 + 36), _R2, _R2, *(float *)&v38);
          GridComponent::getGridItemTemplate((GridComponent *)&v39, (int)v9);
          v34 = v39;
          v35 = (int *)GridComponent::getGridFillDirection(v9);
          result = (char *)LayoutRule::addFillGridDimensionTerm(v4 + 20, v6, v34, 9, *v35);
          v21 = v40;
          if ( v40 )
            v36 = (unsigned int *)(v40 + 4);
                result = (char *)__ldrex(v36);
              while ( __strex((unsigned int)(result - 1), v36) );
              result = (char *)(*v36)--;
              goto LABEL_116;
        break;
    }
  return result;
}


int __fastcall LayoutVariable::_clearSatisfied(int result)
{
  if ( !(*(_BYTE *)(result + 37) & 2) )
    *(_BYTE *)(result + 37) &= 0xFEu;
  return result;
}


LayoutVariable::MinMaxRuleValue *__fastcall LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(LayoutVariable::MinMaxRuleValue *this)
{
  LayoutVariable::MinMaxRuleValue *v1; // r8@1
  int v2; // r9@1
  int v3; // r10@1
  void (*v4)(void); // r3@2
  __int64 v5; // r6@4
  int v6; // r0@5
  unsigned int *v7; // r2@6
  unsigned int v8; // r1@8
  int v9; // r9@21
  int v10; // r10@21
  void (*v11)(void); // r3@22
  __int64 v12; // r6@24
  int v13; // r0@25
  unsigned int *v14; // r2@26
  unsigned int v15; // r1@28

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 20) >> 32;
  v3 = *(_QWORD *)((char *)this + 20);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *(void (**)(void))(v3 + 24);
      if ( v4 )
        v4();
      v5 = *(_QWORD *)(v3 + 4);
      if ( (_DWORD)v5 != HIDWORD(v5) )
      {
        do
        {
          v6 = *(_DWORD *)(v5 + 8);
          if ( v6 )
          {
            v7 = (unsigned int *)(v6 + 8);
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
              (*(void (**)(void))(*(_DWORD *)v6 + 12))();
          }
          LODWORD(v5) = v5 + 20;
        }
        while ( (_DWORD)v5 != HIDWORD(v5) );
        LODWORD(v5) = *(_DWORD *)(v3 + 4);
      }
      if ( (_DWORD)v5 )
        operator delete((void *)v5);
      v3 += 40;
    }
    while ( v3 != v2 );
    v3 = *((_DWORD *)v1 + 5);
  }
  if ( v3 )
    operator delete((void *)v3);
  v9 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v10 = *(_QWORD *)((char *)v1 + 4);
  if ( v10 != v9 )
      v11 = *(void (**)(void))(v10 + 24);
      if ( v11 )
        v11();
      v12 = *(_QWORD *)(v10 + 4);
      if ( (_DWORD)v12 != HIDWORD(v12) )
          v13 = *(_DWORD *)(v12 + 8);
          if ( v13 )
            v14 = (unsigned int *)(v13 + 8);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 == 1 )
              (*(void (**)(void))(*(_DWORD *)v13 + 12))();
          LODWORD(v12) = v12 + 20;
        while ( (_DWORD)v12 != HIDWORD(v12) );
        LODWORD(v12) = *(_DWORD *)(v10 + 4);
      if ( (_DWORD)v12 )
        operator delete((void *)v12);
      v10 += 40;
    while ( v10 != v9 );
    v10 = *((_DWORD *)v1 + 1);
  if ( v10 )
    operator delete((void *)v10);
  return v1;
}


void __fastcall LayoutVariable::overrideRenderableLayoutRule(int a1, int a2, char a3)
{
  int v3; // r8@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r0@4
  int v7; // r3@4
  __int64 v8; // r6@4
  bool v9; // zf@4
  int v10; // r5@4
  int v11; // r2@4
  int v12; // r2@4
  __int64 v13; // kr08_8@5
  int v14; // r5@5
  int v15; // [sp+0h] [bp-50h]@4
  __int64 v16; // [sp+4h] [bp-4Ch]@4
  __int64 ptr; // [sp+10h] [bp-40h]@4
  int v18; // [sp+18h] [bp-38h]@4
  _DWORD *v19; // [sp+1Ch] [bp-34h]@1
  void (*v20)(void); // [sp+24h] [bp-2Ch]@1
  _BYTE *(__fastcall *v21)(_BYTE ***, int); // [sp+28h] [bp-28h]@1
  char v22; // [sp+2Fh] [bp-21h]@1
  int v23; // [sp+30h] [bp-20h]@1
  char v24; // [sp+37h] [bp-19h]@1

  v3 = a1;
  v23 = 0;
  v4 = a2;
  v22 = 0;
  v24 = a3;
  v5 = operator new(0xCu);
  *v5 = &v24;
  v5[1] = &v23;
  v5[2] = &v22;
  v19 = v5;
  v20 = (void (*)(void))sub_CC706C;
  v21 = sub_CC701C;
  UIControl::foreachRenderableComponents(v4, (int)&v19);
  if ( v20 )
    v20();
  if ( v22 )
  {
    ptr = 0LL;
    v18 = 0;
    ui::AxisOffset::AxisOffset((int)&v15, 0, v23, 0);
    LODWORD(v8) = operator new(0xCu);
    v6 = ptr;
    HIDWORD(v8) = HIDWORD(v16);
    v7 = v16;
    v10 = HIDWORD(ptr) - ptr;
    v9 = HIDWORD(ptr) == (_DWORD)ptr;
    *(_DWORD *)(v8 + v10) = v15;
    v11 = v8 + v10;
    *(_DWORD *)(v11 + 4) = v7;
    *(_DWORD *)(v11 + 8) = HIDWORD(v8);
    v12 = v8;
    if ( !v9 )
    {
      do
      {
        v13 = *(_QWORD *)v6;
        v14 = *(_DWORD *)(v6 + 8);
        LODWORD(v6) = v6 + 12;
        *(_QWORD *)v12 = v13;
        *(_DWORD *)(v12 + 8) = v14;
        v12 += 12;
      }
      while ( HIDWORD(v6) != (_DWORD)v6 );
      LODWORD(v6) = ptr;
    }
    HIDWORD(v8) = v12 + 12;
    if ( (_DWORD)v6 )
      operator delete((void *)v6);
    ptr = v8;
    v18 = v8 + 12;
    LayoutRule::clearTerms((LayoutRule *)(v3 + 20));
    LayoutRule::addAxisOffsetTerms(v3 + 20, v4, v4, (unsigned __int64 *)&ptr);
    if ( (_DWORD)ptr )
      operator delete((void *)ptr);
  }
}


int __fastcall LayoutVariable::setRelativeLayoutRule(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  int v7; // r11@1
  char v8; // r0@1
  int v9; // r5@4
  LayoutComponent *v10; // r9@5
  int v11; // r0@7
  int result; // r0@9
  int v13; // r0@10
  int v14; // r0@10
  unsigned __int64 *v15; // r0@11
  int v16; // r0@12
  int v17; // r1@12
  char v18; // r2@12
  int v19; // r0@13
  int v20; // r0@13
  char *v21; // r0@14
  char *v22; // r8@18
  int v23; // r1@18
  int v24; // lr@18
  int v25; // r0@18
  int v26; // r12@18
  int v28; // r3@18
  int v29; // r2@18
  int v30; // r12@19
  char *v31; // r2@19
  int v32; // r3@20
  int v33; // r4@20
  int v34; // r7@20
  char *v35; // r8@23
  int v36; // r1@23
  int v37; // lr@23
  int v38; // r12@23
  int v39; // r0@23
  int v40; // r4@23
  int v41; // r3@23
  int v42; // r2@23
  char *v43; // r2@23
  int v44; // r3@24
  int v45; // r4@24
  int v46; // r7@24
  int v47; // r10@26
  unsigned __int64 *v48; // r0@30
  char *v49; // r0@31
  int v50; // r5@33
  LayoutVariable::MinMaxRuleValue *v51; // r0@34
  LayoutVariable::MinMaxRuleValue *v52; // r0@35
  char *v53; // r0@37
  int v54; // r5@39
  LayoutVariable::MinMaxRuleValue *v55; // r0@40
  LayoutVariable::MinMaxRuleValue *v56; // r0@41
  char *v57; // r3@43
  int v58; // r0@43
  int v59; // r10@45
  int v60; // r5@50
  LayoutVariable::MinMaxRuleValue *v61; // r0@51
  LayoutVariable::MinMaxRuleValue *v62; // r0@52
  unsigned __int64 *v63; // r0@54
  int v64; // r5@56
  LayoutVariable::MinMaxRuleValue *v65; // r0@57
  LayoutVariable::MinMaxRuleValue *v66; // r0@58
  int v70; // r0@65
  int v71; // [sp+8h] [bp-58h]@23
  int v72; // [sp+Ch] [bp-54h]@23
  __int64 v73; // [sp+10h] [bp-50h]@23
  int v74; // [sp+18h] [bp-48h]@23
  char *v75; // [sp+1Ch] [bp-44h]@23
  int v76; // [sp+20h] [bp-40h]@18
  int v77; // [sp+24h] [bp-3Ch]@18
  __int64 v78; // [sp+28h] [bp-38h]@18
  int v79; // [sp+30h] [bp-30h]@18
  char *v80; // [sp+34h] [bp-2Ch]@18
  int v81; // [sp+38h] [bp-28h]@34

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v8 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v9 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v10 = *(LayoutComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9));
  else
    v10 = 0;
  LayoutRule::clearTerms((LayoutRule *)(v4 + 20));
  v11 = *(_DWORD *)(v4 + 32);
  if ( v11 )
    LayoutRule::clearTerms((LayoutRule *)(v11 + 4));
    LayoutRule::clearTerms((LayoutRule *)(*(_DWORD *)(v4 + 32) + 20));
  result = *(_BYTE *)(v4 + 37) & 0xFE;
  *(_BYTE *)(v4 + 37) = result;
  switch ( v5 )
    case 0:
      v13 = LayoutComponent::getAnchorFrom(v10);
      LayoutRule::addAnchorTerm(COERCE_FLOAT(v4 + 20), v6, 0, v13, 1065353216, 7);
      v14 = LayoutComponent::getAnchorTo(v10);
      LayoutRule::addAnchorTerm(COERCE_FLOAT(v4 + 20), v7, 0, v14, -1082130432, 6);
      if ( LayoutComponent::hasOffsetAxisType((int)v10, 0, 1) == 1 )
      {
        v15 = (unsigned __int64 *)LayoutComponent::getOffset(v10);
        LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, v15);
      }
      v16 = v4 + 20;
      v17 = v7;
      v18 = 4;
      return j_j_j__ZN10LayoutRule18addOffsetDeltaTermER9UIControl18LayoutVariableType(v16, v17, v18);
    case 1:
      v19 = LayoutComponent::getAnchorFrom(v10);
      LayoutRule::addAnchorTerm(COERCE_FLOAT(v4 + 20), v6, 1, v19, 1065353216, 7);
      v20 = LayoutComponent::getAnchorTo(v10);
      LayoutRule::addAnchorTerm(COERCE_FLOAT(v4 + 20), v7, 1, v20, -1082130432, 6);
      if ( LayoutComponent::hasOffsetAxisType((int)v10, 1, 1) == 1 )
        v21 = LayoutComponent::getOffset(v10);
        LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, (unsigned __int64 *)(v21 + 12));
      v18 = 5;
    case 2:
      if ( LayoutComponent::hasSizeAxisType((int)v10, 2, 0) == 1 )
        HIDWORD(v78) = 0;
        v79 = 0;
        v80 = 0;
        ui::AxisOffset::AxisOffset((int)&v76, 1, 1065353216, 0);
        v22 = (char *)operator new(0xCu);
        v23 = v79;
        v24 = v77;
        v25 = HIDWORD(v78);
        v26 = v78;
        v28 = v79 - HIDWORD(v78);
        _ZF = v79 == HIDWORD(v78);
        *(_DWORD *)&v22[v28] = v76;
        v29 = (int)&v22[v28];
        *(_DWORD *)(v29 + 4) = v24;
        *(_DWORD *)(v29 + 8) = v26;
        if ( _ZF )
        {
          v31 = v22;
        }
        else
          v30 = v6;
          do
          {
            v32 = *(_DWORD *)v25;
            v33 = *(_DWORD *)(v25 + 4);
            v34 = *(_DWORD *)(v25 + 8);
            v25 += 12;
            *(_DWORD *)v31 = v32;
            *((_DWORD *)v31 + 1) = v33;
            *((_DWORD *)v31 + 2) = v34;
            v31 += 12;
          }
          while ( v23 != v25 );
          v25 = HIDWORD(v78);
          v6 = v30;
        v59 = (int)(v31 + 12);
        if ( v25 )
          operator delete((void *)v25);
        HIDWORD(v78) = v22;
        v79 = v59;
        v80 = v22 + 12;
        LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, (unsigned __int64 *)((char *)&v78 + 4));
        if ( HIDWORD(v78) )
          operator delete((void *)HIDWORD(v78));
      else
        v48 = (unsigned __int64 *)LayoutComponent::getSize(v10);
        LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, v48);
      if ( *((_DWORD *)LayoutComponent::getMinSize(v10) + 6) == 1 )
        v60 = *(_DWORD *)(v4 + 32);
        if ( !v60 )
          j__ZSt11make_uniqueIN14LayoutVariable15MinMaxRuleValueEJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v81);
          v60 = v81;
          v81 = 0;
          v61 = *(LayoutVariable::MinMaxRuleValue **)(v4 + 32);
          *(_DWORD *)(v4 + 32) = v60;
          if ( v61 )
            v62 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v61);
            operator delete((void *)v62);
            v60 = *(_DWORD *)(v4 + 32);
        v63 = (unsigned __int64 *)LayoutComponent::getMinSize(v10);
        LayoutRule::addAxisOffsetTerms(v60 + 4, v6, v7, v63);
      if ( *((_DWORD *)LayoutComponent::getMaxSize(v10) + 6) != 1 )
        goto LABEL_62;
      v64 = *(_DWORD *)(v4 + 32);
      if ( !v64 )
        j__ZSt11make_uniqueIN14LayoutVariable15MinMaxRuleValueEJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v81);
        v64 = v81;
        v81 = 0;
        v65 = *(LayoutVariable::MinMaxRuleValue **)(v4 + 32);
        *(_DWORD *)(v4 + 32) = v64;
        if ( v65 )
          v66 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v65);
          operator delete((void *)v66);
          v64 = *(_DWORD *)(v4 + 32);
      v57 = LayoutComponent::getMaxSize(v10);
      v58 = v64 + 20;
      goto LABEL_61;
    case 3:
      if ( LayoutComponent::hasSizeAxisType((int)v10, 3, 0) == 1 )
        HIDWORD(v73) = 0;
        v74 = 0;
        v75 = 0;
        ui::AxisOffset::AxisOffset((int)&v71, 2, 1065353216, 0);
        v35 = (char *)operator new(0xCu);
        v36 = v74;
        v37 = v6;
        v38 = v72;
        v39 = HIDWORD(v73);
        v40 = v73;
        v41 = v74 - HIDWORD(v73);
        _ZF = v74 == HIDWORD(v73);
        *(_DWORD *)&v35[v41] = v71;
        v42 = (int)&v35[v41];
        *(_DWORD *)(v42 + 4) = v38;
        *(_DWORD *)(v42 + 8) = v40;
        v43 = v35;
        if ( !_ZF )
            v44 = *(_DWORD *)v39;
            v45 = *(_DWORD *)(v39 + 4);
            v46 = *(_DWORD *)(v39 + 8);
            v39 += 12;
            *(_DWORD *)v43 = v44;
            *((_DWORD *)v43 + 1) = v45;
            *((_DWORD *)v43 + 2) = v46;
            v43 += 12;
          while ( v36 != v39 );
          v39 = HIDWORD(v73);
        v6 = v37;
        v47 = (int)(v43 + 12);
        if ( v39 )
          operator delete((void *)v39);
        HIDWORD(v73) = v35;
        v74 = v47;
        v75 = v35 + 12;
        LayoutRule::addAxisOffsetTerms(v4 + 20, v37, v7, (unsigned __int64 *)((char *)&v73 + 4));
        if ( HIDWORD(v73) )
          operator delete((void *)HIDWORD(v73));
        v49 = LayoutComponent::getSize(v10);
        LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, (unsigned __int64 *)(v49 + 12));
      if ( *((_DWORD *)LayoutComponent::getMinSize(v10) + 7) == 1 )
        v50 = *(_DWORD *)(v4 + 32);
        if ( !v50 )
          v50 = v81;
          v51 = *(LayoutVariable::MinMaxRuleValue **)(v4 + 32);
          *(_DWORD *)(v4 + 32) = v50;
          if ( v51 )
            v52 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v51);
            operator delete((void *)v52);
            v50 = *(_DWORD *)(v4 + 32);
        v53 = LayoutComponent::getMinSize(v10);
        LayoutRule::addAxisOffsetTerms(v50 + 4, v6, v7, (unsigned __int64 *)(v53 + 12));
      if ( *((_DWORD *)LayoutComponent::getMaxSize(v10) + 7) == 1 )
        v54 = *(_DWORD *)(v4 + 32);
        if ( !v54 )
          v54 = v81;
          v55 = *(LayoutVariable::MinMaxRuleValue **)(v4 + 32);
          *(_DWORD *)(v4 + 32) = v54;
          if ( v55 )
            v56 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v55);
            operator delete((void *)v56);
            v54 = *(_DWORD *)(v4 + 32);
        v57 = LayoutComponent::getMaxSize(v10) + 12;
        v58 = v54 + 20;
LABEL_61:
        LayoutRule::addAxisOffsetTerms(v58, v6, v7, (unsigned __int64 *)v57);
LABEL_62:
      result = UIControl::getVisible((UIControl *)v7);
      if ( !result )
        *(_BYTE *)(v4 + 37) |= 2u;
        __asm
          VLDR            S0, [SP,#0x60+var_28]
          VLDR            S2, [SP,#0x60+var_28]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
          __asm { VLDREQ          S0, [SP,#0x60+var_28] }
        *(_DWORD *)(v4 + 16) = 0;
        v70 = *(_DWORD *)(v4 + 32);
        if ( v70 )
          *(_DWORD *)v70 = 0;
          *(_DWORD *)(v70 + 16) = 0;
        *(_BYTE *)(v4 + 37) |= 1u;
        result = setControlVariableValue(*(UIControl **)v4, *(_BYTE *)(v4 + 36), 0, 0, 0.0);
      break;
    default:
      return result;
  return result;
}


int __fastcall LayoutVariable::_invalidate(int a1, int a2, unsigned int *a3)
{
  int v3; // r7@1
  unsigned int *v4; // r8@1
  int result; // r0@1
  int v6; // r4@1
  VariableRef *v7; // r5@13 OVERLAPPED
  VariableRef *v8; // r6@13 OVERLAPPED
  int v9; // r7@15
  void (__fastcall *v10)(int *, int, signed int); // r3@16
  int v11; // r7@22
  bool v12; // zf@22
  void (__fastcall *v13)(int *, int, signed int); // r3@25
  int v14; // [sp+0h] [bp-40h]@17
  int (__fastcall *v15)(int *, int *, signed int); // [sp+8h] [bp-38h]@16
  int v16; // [sp+Ch] [bp-34h]@17
  char v17; // [sp+10h] [bp-30h]@4
  int v18; // [sp+18h] [bp-28h]@5

  v3 = a1;
  v4 = a3;
  result = *(_BYTE *)(a1 + 37);
  v6 = a2;
  if ( !(result & 2) && (result & 1 || a3 == (unsigned int *)1) )
  {
    *(_BYTE *)(v3 + 37) = result & 0xFE;
    VariableRef::VariableRef((int)&v17, *(_DWORD *)v3, *(_BYTE *)(v3 + 36));
    if ( !*(_DWORD *)(v6 + 8) )
      sub_DA7654();
    (*(void (__fastcall **)(int, char *))(v6 + 12))(v6, &v17);
    result = v18;
    if ( v18 )
    {
      a3 = (unsigned int *)(v18 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          a2 = __ldrex(a3);
        while ( __strex(a2 - 1, a3) );
      }
      else
        a2 = (*a3)--;
      if ( a2 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    }
  }
  *(_QWORD *)&v7 = *(_QWORD *)(v3 + 4);
  if ( v7 != v8 )
    if ( v4 == (unsigned int *)1 )
      do
        result = (int)VariableRef::getVariable(v7, a2, (int)a3);
        v9 = result;
        if ( result )
        {
          v15 = 0;
          v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
          if ( v10 )
          {
            v10(&v14, v6, 2);
            v16 = *(_DWORD *)(v6 + 12);
            v15 = *(int (__fastcall **)(int *, int *, signed int))(v6 + 8);
          }
          result = LayoutVariable::_invalidate(v9, (int)&v14, 1);
          if ( v15 )
            result = v15(&v14, &v14, 3);
        }
        v7 = (VariableRef *)((char *)v7 + 20);
      while ( v8 != v7 );
    else
        v11 = result;
        v12 = result == 0;
          result = *(_BYTE *)(result + 37);
          v12 = (result & 1) == 0;
        if ( !v12 )
          v13 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
          if ( v13 )
            v13(&v14, v6, 2);
          result = LayoutVariable::_invalidate(v11, (int)&v14, 0);
  return result;
}


LayoutVariable *__fastcall LayoutVariable::~LayoutVariable(LayoutVariable *this)
{
  LayoutVariable *v1; // r8@1
  LayoutVariable::MinMaxRuleValue *v2; // r0@1
  LayoutVariable::MinMaxRuleValue *v3; // r0@2
  int v4; // r5@3 OVERLAPPED
  int v5; // r6@3 OVERLAPPED
  int v6; // r0@4
  unsigned int *v7; // r2@5
  unsigned int v8; // r1@7

  v1 = this;
  v2 = (LayoutVariable::MinMaxRuleValue *)*((_DWORD *)this + 8);
  if ( v2 )
  {
    v3 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 8) = 0;
  LayoutVariable::RuleValue::~RuleValue((LayoutVariable *)((char *)v1 + 16));
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 4);
  if ( v4 != v5 )
    do
    {
      v6 = *(_DWORD *)(v4 + 8);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v6 + 12))();
      }
      v4 += 20;
    }
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 1);
  if ( v4 )
    operator delete((void *)v4);
  return v1;
}


LayoutVariable::RuleValue *__fastcall LayoutVariable::RuleValue::~RuleValue(LayoutVariable::RuleValue *this)
{
  LayoutVariable::RuleValue *v1; // r8@1
  int v2; // r9@1
  int v3; // r10@1
  void (*v4)(void); // r3@2
  __int64 v5; // r6@4
  int v6; // r0@5
  unsigned int *v7; // r2@6
  unsigned int v8; // r1@8

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 4) >> 32;
  v3 = *(_QWORD *)((char *)this + 4);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *(void (**)(void))(v3 + 24);
      if ( v4 )
        v4();
      v5 = *(_QWORD *)(v3 + 4);
      if ( (_DWORD)v5 != HIDWORD(v5) )
      {
        do
        {
          v6 = *(_DWORD *)(v5 + 8);
          if ( v6 )
          {
            v7 = (unsigned int *)(v6 + 8);
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
              (*(void (**)(void))(*(_DWORD *)v6 + 12))();
          }
          LODWORD(v5) = v5 + 20;
        }
        while ( (_DWORD)v5 != HIDWORD(v5) );
        LODWORD(v5) = *(_DWORD *)(v3 + 4);
      }
      if ( (_DWORD)v5 )
        operator delete((void *)v5);
      v3 += 40;
    }
    while ( v3 != v2 );
    v3 = *((_DWORD *)v1 + 1);
  }
  if ( v3 )
    operator delete((void *)v3);
  return v1;
}


int __fastcall LayoutVariable::_getOrCreateMinRule(LayoutVariable *this)
{
  LayoutVariable *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  LayoutVariable::MinMaxRuleValue *v4; // r0@2
  LayoutVariable::MinMaxRuleValue *v5; // r0@3
  int v7; // [sp+4h] [bp-14h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  if ( !v2 )
  {
    j__ZSt11make_uniqueIN14LayoutVariable15MinMaxRuleValueEJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v7);
    v3 = v7;
    v7 = 0;
    v4 = (LayoutVariable::MinMaxRuleValue *)*((_DWORD *)v1 + 8);
    *((_DWORD *)v1 + 8) = v3;
    if ( v4 )
    {
      v5 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v4);
      operator delete((void *)v5);
    }
    v2 = *((_DWORD *)v1 + 8);
  }
  return v2 + 4;
}


int __fastcall LayoutVariable::satisfy(LayoutVariable *this, int a2, int a3)
{
  LayoutVariable *v3; // r4@1
  int v5; // r1@1
  int v10; // r1@2
  int v11; // r2@2
  signed int v12; // r6@2
  int v13; // r0@2
  signed int v14; // r0@3
  int v15; // r1@3
  int v16; // r2@3
  signed int v17; // r5@3
  float v24; // [sp+0h] [bp-30h]@0

  v3 = this;
  _R0 = LayoutRule::compute((LayoutVariable *)((char *)this + 20), a2, a3);
  v5 = *((_DWORD *)v3 + 8);
  __asm
  {
    VMOV            S18, R0
    VLDR            S16, =32767.0
    VLDR            S20, =-32768.0
  }
  if ( v5 )
    v12 = LayoutRule::isActive((LayoutRule *)(v5 + 4));
    v13 = *((_DWORD *)v3 + 8);
    if ( v13 )
    {
      v14 = LayoutRule::isActive((LayoutRule *)(v13 + 20));
      v17 = v14;
      if ( v12 )
      {
        _R0 = LayoutRule::compute((LayoutRule *)(*((_DWORD *)v3 + 8) + 4), v15, v16);
        __asm { VMOV            S20, R0 }
        if ( !v17 )
          goto LABEL_10;
      }
      else
        __asm { VLDR            S20, =-32768.0 }
        if ( v14 != 1 )
      _R0 = LayoutRule::compute((LayoutRule *)(*((_DWORD *)v3 + 8) + 20), v15, v16);
      __asm { VMOV            S16, R0 }
      goto LABEL_10;
    }
    if ( v12 == 1 )
      _R0 = LayoutRule::compute((LayoutRule *)4, v10, v11);
      __asm { VMOV            S20, R0 }
LABEL_10:
    VCMPE.F32       S18, S20
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, S20
    VCMPE.F32       S18, S16
    VMOV            R3, S20
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S18 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S16 }
    VMOV            R2, S0
    VSTR            S0, [R4,#0x10]
  if ( *((_DWORD *)v3 + 8) )
    __asm
      VSTRNE          S20, [R0]
      VSTRNE          S16, [R0,#0x10]
  *((_BYTE *)v3 + 37) |= 1u;
  __asm { VSTR            S16, [SP,#0x30+var_30] }
  return setControlVariableValue(*(UIControl **)v3, *((_BYTE *)v3 + 36), _R2, _R3, v24);
}


int __fastcall LayoutVariable::isSatisfied(LayoutVariable *this)
{
  return *((_BYTE *)this + 37) & 1;
}


void __fastcall LayoutVariable::removeDependencies(LayoutVariable *this)
{
  LayoutVariable *v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  int v4; // r0@3
  unsigned int *v5; // r2@4
  unsigned int v6; // r1@6
  int v7; // r0@12

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v4 + 12))();
      }
      v3 += 20;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 2) = v2;
  LayoutRule::clearTerms((LayoutVariable *)((char *)v1 + 20));
  v7 = *((_DWORD *)v1 + 8);
  if ( v7 )
    LayoutRule::clearTerms((LayoutRule *)(v7 + 4));
    j_j_j__ZN10LayoutRule10clearTermsEv((LayoutRule *)(*((_DWORD *)v1 + 8) + 20));
}


int __fastcall LayoutVariable::_getMaxSiblingValue(LayoutVariable *this)
{
  int *v6; // r4@2
  __int64 v7; // kr00_8@2
  int v8; // r6@3
  char v9; // r0@3
  int v10; // r7@6
  UIComponent *v11; // r0@7
  int v13; // r4@12
  unsigned int *v14; // r1@13
  unsigned int v15; // r0@15
  unsigned int *v16; // r5@19
  unsigned int v17; // r0@21
  int result; // r0@26
  UIControl *v19; // [sp+0h] [bp-38h]@1
  int v20; // [sp+4h] [bp-34h]@12

  _R8 = this;
  __asm { VLDR            S16, [R8,#0x10] }
  UIControl::getParent((UIControl *)&v19, *(_DWORD *)this);
  if ( v19 )
  {
    v7 = *(_QWORD *)UIControl::getChildren(v19);
    v6 = (int *)v7;
    if ( (_DWORD)v7 != HIDWORD(v7) )
    {
      do
      {
        v8 = *v6;
        v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        __dmb();
        if ( !(v9 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        {
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        }
        v10 = type_id<UIComponent,LayoutComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v8, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
          v11 = *(UIComponent **)(*(_DWORD *)(v8 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v8, v10));
          if ( v11 )
          {
            _R0 = LayoutComponent::getVariable(v11, *((_BYTE *)_R8 + 36));
            if ( _R0 )
            {
              __asm
              {
                VLDR            S0, [R0,#0x10]
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm { VMOVGT.F32      S16, S0 }
            }
          }
        v6 += 2;
      }
      while ( (int *)HIDWORD(v7) != v6 );
    }
  }
  v13 = v20;
  if ( v20 )
    v14 = (unsigned int *)(v20 + 4);
    if ( &pthread_create )
      __dmb();
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall LayoutVariable::addDependsOnMeVariable(LayoutVariable *this, const VariableRef *a2, int a3)
{
  LayoutVariable::addDependsOnMeVariable(this, a2, a3);
}


int __fastcall LayoutVariable::clearOverrideValue(int result)
{
  *(_BYTE *)(result + 37) &= 0xFCu;
  return result;
}


void __fastcall LayoutVariable::overrideStackPanelLayoutRule(int a1, int a2, int a3, int a4)
{
  LayoutVariable::overrideStackPanelLayoutRule(a1, a2, a3, a4);
}


void __fastcall LayoutVariable::removeDependencies(LayoutVariable *this)
{
  LayoutVariable::removeDependencies(this);
}


void __fastcall LayoutVariable::addDependsOnMeVariable(LayoutVariable *this, const VariableRef *a2, int a3)
{
  LayoutVariable *v3; // r4@1
  unsigned __int64 *v4; // r6@1
  const VariableRef *v5; // r5@1
  __int64 v6; // r0@2
  int v7; // r1@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r2@7
  int v10; // r1@10
  unsigned int v11; // r2@13

  v3 = this;
  v4 = (unsigned __int64 *)((char *)this + 4);
  v5 = a2;
  if ( a3 == 1 )
  {
    LODWORD(v6) = std::__find_if<__gnu_cxx::__normal_iterator<VariableRef *,std::vector<VariableRef,std::allocator<VariableRef>>>,__gnu_cxx::__ops::_Iter_equals_val<VariableRef const>>(
                    *(_QWORD *)((char *)this + 4),
                    *(_QWORD *)((char *)this + 4) >> 32,
                    (int)a2);
    if ( (_DWORD)v6 != *((_DWORD *)v3 + 2) )
      return;
    if ( (_DWORD)v6 != *((_DWORD *)v3 + 3) )
    {
      *(_DWORD *)v6 = *(_DWORD *)v5;
      *(_DWORD *)(v6 + 4) = *((_DWORD *)v5 + 1);
      HIDWORD(v6) = *((_DWORD *)v5 + 2);
      *(_DWORD *)(v6 + 8) = HIDWORD(v6);
      if ( HIDWORD(v6) )
      {
        v8 = (unsigned int *)(v7 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
          goto LABEL_17;
        }
        goto LABEL_16;
      }
      goto LABEL_17;
    }
LABEL_15:
    j_j_j__ZNSt6vectorI11VariableRefSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(v4, (int)v5);
    return;
  }
  v6 = *((_QWORD *)this + 1);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    goto LABEL_15;
  *(_DWORD *)v6 = *(_DWORD *)v5;
  *(_DWORD *)(v6 + 4) = *((_DWORD *)v5 + 1);
  HIDWORD(v6) = *((_DWORD *)v5 + 2);
  *(_DWORD *)(v6 + 8) = HIDWORD(v6);
  if ( HIDWORD(v6) )
    v8 = (unsigned int *)(v10 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 + 1, v8) );
LABEL_16:
    ++*v8;
LABEL_17:
  HIDWORD(v6) = *((_DWORD *)v5 + 3);
  *(_BYTE *)(v6 + 16) = *((_BYTE *)v5 + 16);
  *(_DWORD *)(v6 + 12) = HIDWORD(v6);
  *((_DWORD *)v3 + 2) += 20;
}


void __fastcall LayoutVariable::overrideRenderableLayoutRule(int a1, int a2, char a3)
{
  LayoutVariable::overrideRenderableLayoutRule(a1, a2, a3);
}


int __fastcall LayoutVariable::_setValue(LayoutVariable *this, float a2, float a3, float _R3)
{
  float v10; // [sp+0h] [bp-10h]@0

  _R12 = a3;
  *((float *)this + 4) = a2;
  __asm
  {
    VMOV            S0, R3
    VMOV            S2, R12
  }
  if ( *((_DWORD *)this + 8) )
    __asm
    {
      VSTRNE          S2, [R1]
      VSTRNE          S0, [R1,#0x10]
    }
  *((_BYTE *)this + 37) |= 1u;
  __asm { VSTR            S0, [SP,#0x10+var_10] }
  return setControlVariableValue(*(UIControl **)this, *((_BYTE *)this + 36), SLODWORD(a2), SLODWORD(a3), v10);
}


int __fastcall LayoutVariable::_getOrCreateMaxRule(LayoutVariable *this)
{
  LayoutVariable *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  LayoutVariable::MinMaxRuleValue *v4; // r0@2
  LayoutVariable::MinMaxRuleValue *v5; // r0@3
  int v7; // [sp+4h] [bp-14h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  if ( !v2 )
  {
    j__ZSt11make_uniqueIN14LayoutVariable15MinMaxRuleValueEJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v7);
    v3 = v7;
    v7 = 0;
    v4 = (LayoutVariable::MinMaxRuleValue *)*((_DWORD *)v1 + 8);
    *((_DWORD *)v1 + 8) = v3;
    if ( v4 )
    {
      v5 = LayoutVariable::MinMaxRuleValue::~MinMaxRuleValue(v4);
      operator delete((void *)v5);
    }
    v2 = *((_DWORD *)v1 + 8);
  }
  return v2 + 20;
}


int __fastcall LayoutVariable::_addDependsOnMeEntriesForInvalidation(LayoutVariable *this, int a2)
{
  LayoutVariable *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int result; // r0@3
  unsigned int *v6; // r2@4
  unsigned int v7; // r1@6
  char v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+Ch] [bp-1Ch]@3

  v2 = this;
  v3 = a2;
  VariableRef::VariableRef((int)&v8, *(_DWORD *)this, *((_BYTE *)this + 36));
  LayoutRule::addDependsOnMeEntriesForInvalidation((LayoutVariable *)((char *)v2 + 20), (const VariableRef *)&v8, v3);
  v4 = *((_DWORD *)v2 + 8);
  if ( v4 )
  {
    LayoutRule::addDependsOnMeEntriesForInvalidation((LayoutRule *)(v4 + 4), (const VariableRef *)&v8, v3);
    LayoutRule::addDependsOnMeEntriesForInvalidation(
      (LayoutRule *)(*((_DWORD *)v2 + 8) + 20),
      (const VariableRef *)&v8,
      v3);
  }
  result = v9;
  if ( v9 )
    v6 = (unsigned int *)(v9 + 8);
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
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


UIControl *__fastcall LayoutVariable::setStackPanelItemLayoutRule(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r10@1
  unsigned int v5; // r4@1
  int v6; // r6@1
  int v7; // r5@1
  char v8; // r0@1
  int v9; // r7@4
  StackPanelComponent *v10; // r7@5
  int v11; // r8@7
  __int64 v12; // kr00_8@9
  int v13; // r7@10
  char v14; // r0@14
  int v15; // r7@17
  int v16; // r0@18
  bool v17; // zf@21
  bool v18; // zf@24
  UIControl *result; // r0@27
  bool v20; // zf@30
  bool v21; // zf@33
  __int64 v22; // kr08_8@39
  unsigned int *v23; // r0@40
  unsigned int v24; // r2@42
  unsigned int *v25; // r1@46
  unsigned int *v26; // r4@52
  int v27; // [sp+8h] [bp-28h]@37
  int v28; // [sp+Ch] [bp-24h]@37

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
  __dmb();
  if ( !(v8 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
  {
    type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
  }
  v9 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,StackPanelComponent>(void)::id[0]) == 1 )
    v10 = *(StackPanelComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v9));
  else
    v10 = 0;
  LayoutRule::clearTerms((LayoutRule *)(v4 + 20));
  v11 = StackPanelComponent::getOrientation(v10);
  if ( v5 - 2 < 2 )
    v14 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
    __dmb();
    if ( !(v14 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    {
      type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
    }
    v15 = type_id<UIComponent,LayoutComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
      v16 = *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v15));
    else
      v16 = 0;
    if ( LayoutComponent::hasSizeAxisType(v16, v5, 2) == 1 )
      v17 = v5 == 2;
      if ( v5 == 2 )
        v17 = v11 == 0;
      if ( v17 )
        return (UIControl *)j_j_j__ZN10LayoutRule35addStackPanelItemRemainderSizeTermsER9UIControlS1_18LayoutVariableType(
                              v4 + 20,
                              v6,
                              v7,
                              v5);
      v18 = v5 == 3;
      if ( v5 == 3 )
        v18 = v11 == 1;
      if ( v18 )
    return (UIControl *)j_j_j__ZN14LayoutVariable21setRelativeLayoutRuleER9UIControlS1_18LayoutVariableType(
                          v4,
                          v7,
                          v6,
                          v5);
  if ( v5 > 1 )
  v12 = *(_QWORD *)UIControl::getChildren((UIControl *)v6);
  if ( HIDWORD(v12) == (_DWORD)v12 )
    goto LABEL_37;
  v13 = 0;
  while ( *(_DWORD *)(v12 + 8 * v13) != v7 )
    if ( ++v13 >= (unsigned int)((HIDWORD(v12) - (signed int)v12) >> 3) )
      goto LABEL_37;
  if ( !v13 )
  v20 = v5 == 1;
  if ( v5 == 1 )
    v20 = v11 == 0;
  if ( v20 )
  v21 = v5 == 0;
  if ( !v5 )
    v21 = v11 == 1;
  if ( v21 )
LABEL_37:
    v27 = 0;
    v28 = 0;
    result = UIControl::setParentRelativePosition((UIControl *)v7, (int)&v27);
    v22 = *(_QWORD *)(*(_DWORD *)UIControl::getChildren((UIControl *)v6) + 8 * v13 - 8);
    if ( HIDWORD(v22) )
      v23 = (unsigned int *)(HIDWORD(v22) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
      }
      else
        ++*v23;
    result = (UIControl *)LayoutRule::addStackPanelItemPositionTerms(v4 + 20, v22, v7, v5);
      v25 = (unsigned int *)(HIDWORD(v22) + 4);
          result = (UIControl *)__ldrex(v25);
        while ( __strex((unsigned int)result - 1, v25) );
        result = (UIControl *)(*v25)--;
      if ( result == (UIControl *)1 )
        v26 = (unsigned int *)(HIDWORD(v22) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v22) + 8))(HIDWORD(v22));
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (UIControl *)__ldrex(v26);
          while ( __strex((unsigned int)result - 1, v26) );
        }
        else
          result = (UIControl *)(*v26)--;
        if ( result == (UIControl *)1 )
          result = (UIControl *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v22) + 12))(HIDWORD(v22));
  return result;
}


int __fastcall LayoutVariable::setOverrideValue(LayoutVariable *this, float _R1)
{
  float v8; // [sp+0h] [bp-10h]@0
  float v9; // [sp+4h] [bp-Ch]@1

  __asm { VLDR            S0, =0.0 }
  *((_BYTE *)this + 37) |= 2u;
  v9 = _R1;
  __asm
  {
    VLDR            S2, [SP,#0x10+var_C]
    VLDR            S4, [SP,#0x10+var_C]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S2, [SP,#0x10+var_C]
      VLDR            S4, =3.4028e38
      VABS.F32        S2, S2
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      __asm { VMOVNE          S0, R1 }
    VMOV            R2, S0
    VSTR            S0, [R0,#0x10]
  if ( *((_DWORD *)this + 8) )
      VSTRNE          S0, [R1]
      VSTRNE          S0, [R1,#0x10]
  *((_BYTE *)this + 37) |= 1u;
  __asm { VSTR            S0, [SP,#0x10+var_10] }
  return setControlVariableValue(*(UIControl **)this, *((_BYTE *)this + 36), _R2, _R2, v8);
}


int __fastcall LayoutVariable::removeDeadDependencies(LayoutVariable *this)
{
  LayoutVariable *v1; // r8@1
  int v2; // r5@1
  char *v3; // r10@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r4@2
  int v7; // r7@3
  int v8; // r0@8
  int v9; // r5@22
  int v10; // r1@23
  VariableRef *v11; // r1@24
  signed int v12; // r0@26
  int v13; // r11@27
  unsigned int *v14; // r0@28
  unsigned int v15; // r1@30
  int v16; // r0@33
  unsigned int *v17; // r2@34
  unsigned int v18; // r1@36

  v1 = this;
  v3 = (char *)this + 4;
  v2 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 2);
  v5 = -858993459 * ((v4 - v2) >> 2) >> 2;
  if ( v5 < 1 )
  {
LABEL_8:
    v8 = -858993459 * ((v4 - v2) >> 2);
    if ( v8 == 1 )
    {
      v7 = v2;
    }
    else
      if ( v8 == 2 )
      {
        v7 = v2;
      }
      else
        if ( v8 != 3 )
        {
          v7 = v4;
          goto LABEL_21;
        }
        if ( VariableRef::isValid((VariableRef *)v2) != 1 )
        v7 = v2 + 20;
      if ( VariableRef::isValid((VariableRef *)v7) != 1 )
        goto LABEL_21;
      v7 += 20;
    if ( VariableRef::isValid((VariableRef *)v7) == 1 )
      v7 = v4;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      if ( VariableRef::isValid((VariableRef *)v2) != 1 )
        break;
      v7 = v2 + 20;
      if ( VariableRef::isValid((VariableRef *)(v2 + 20)) != 1 )
      v7 = v2 + 40;
      if ( VariableRef::isValid((VariableRef *)(v2 + 40)) != 1 )
      v7 = v2 + 60;
      if ( VariableRef::isValid((VariableRef *)(v2 + 60)) != 1 )
      --v6;
      v2 += 80;
      if ( v6 <= 1 )
        goto LABEL_8;
LABEL_21:
  if ( v7 != v4 )
    v9 = v7;
LABEL_24:
    v11 = (VariableRef *)(v7 + 20);
      v7 = (int)v11;
      if ( (VariableRef *)v4 == v11 )
      v12 = VariableRef::isValid(v11);
      v11 = (VariableRef *)(v7 + 20);
      if ( v12 == 1 )
        *(_DWORD *)v9 = *(_DWORD *)v7;
        *(_DWORD *)(v9 + 4) = *(_DWORD *)(v7 + 4);
        v13 = *(_DWORD *)(v7 + 8);
        if ( v13 )
          v14 = (unsigned int *)(v13 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 + 1, v14) );
          }
          else
            ++*v14;
        v16 = *(_DWORD *)(v9 + 8);
        if ( v16 )
          v17 = (unsigned int *)(v16 + 8);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (**)(void))(*(_DWORD *)v16 + 12))();
        *(_DWORD *)(v9 + 8) = v13;
        v10 = *(_DWORD *)(v7 + 12);
        *(_BYTE *)(v9 + 16) = *(_BYTE *)(v7 + 16);
        *(_DWORD *)(v9 + 12) = v10;
        v9 += 20;
        goto LABEL_24;
    v4 = v9;
  return j_j_j__ZNSt6vectorI11VariableRefSaIS0_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EES6_(
           (int)v3,
           v4,
           *((_DWORD *)v1 + 2));
}


int __fastcall LayoutVariable::LayoutVariable(int a1, int a2, char a3)
{
  int v3; // r6@1
  int v4; // r7@1
  char v5; // r4@1

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  v5 = a3;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  LayoutRule::LayoutRule((LayoutRule *)(a1 + 20));
  *(_DWORD *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 36) = v5;
  *(_BYTE *)(v3 + 37) &= 0xFCu;
  return v3;
}


void __fastcall LayoutVariable::overrideStackPanelLayoutRule(int a1, int a2, int a3, int a4)
{
  int v4; // r9@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r4@1
  char v8; // r0@1
  int v9; // r5@4
  StackPanelComponent *v10; // r5@5
  char v11; // r0@7
  int v12; // r6@10
  int v13; // r6@11
  int v14; // r5@13
  signed int v15; // r0@15
  bool v16; // zf@15
  char *v17; // r5@19 OVERLAPPED
  __int64 v18; // r0@19
  __int64 v19; // kr00_8@19
  int v20; // r6@19
  char *v21; // r2@19
  __int64 v22; // kr08_8@20
  int v23; // r6@20
  int v24; // r6@22 OVERLAPPED
  void *v25; // r0@24
  signed int v26; // r0@25
  bool v27; // zf@25
  char *v28; // r5@29 OVERLAPPED
  __int64 v29; // r0@29
  __int64 v30; // kr10_8@29
  int v31; // r6@29
  char *v32; // r2@29
  __int64 v33; // kr18_8@30
  int v34; // r6@30
  int v35; // r6@32 OVERLAPPED
  int v36; // [sp+0h] [bp-50h]@29
  __int64 v37; // [sp+4h] [bp-4Ch]@29
  __int64 v38; // [sp+Ch] [bp-44h]@29
  char *v39; // [sp+14h] [bp-3Ch]@29
  char v40; // [sp+18h] [bp-38h]@19
  __int64 v41; // [sp+1Ch] [bp-34h]@19
  __int64 ptr; // [sp+28h] [bp-28h]@19
  char *v43; // [sp+30h] [bp-20h]@19

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
  __dmb();
  if ( !(v8 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
  {
    type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
  }
  v9 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,StackPanelComponent>(void)::id[0]) == 1 )
    v10 = *(StackPanelComponent **)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9));
  else
    v10 = 0;
  v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  if ( !(v11 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  v12 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v13 = *(_DWORD *)(*(_DWORD *)(v7 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v7, v12));
    v13 = 0;
  v14 = StackPanelComponent::getOrientation(v10);
  if ( v5 != 3 )
    if ( v5 != 2 )
      return;
    v15 = LayoutComponent::hasSizeAxisType(v13, 2, 0);
    v16 = v14 == 0;
    if ( !v14 )
      v16 = v15 == 1;
    if ( !v16 )
    ptr = 0LL;
    v43 = 0;
    ui::AxisOffset::AxisOffset((int)&v40, 5, 1065353216, 0);
    v17 = (char *)operator new(0xCu);
    v18 = ptr;
    v19 = v41;
    v20 = HIDWORD(ptr) - ptr;
    v16 = HIDWORD(ptr) == (_DWORD)ptr;
    *(_DWORD *)&v17[v20] = *(_DWORD *)&v40;
    *(_QWORD *)&v17[v20 + 4] = v19;
    v21 = v17;
    {
      do
      {
        v22 = *(_QWORD *)v18;
        v23 = *(_DWORD *)(v18 + 8);
        LODWORD(v18) = v18 + 12;
        *(_QWORD *)v21 = v22;
        *((_DWORD *)v21 + 2) = v23;
        v21 += 12;
      }
      while ( HIDWORD(v18) != (_DWORD)v18 );
      LODWORD(v18) = ptr;
    }
    v24 = (int)(v21 + 12);
    if ( (_DWORD)v18 )
      operator delete((void *)v18);
    ptr = *(_QWORD *)&v17;
    v43 = v17 + 12;
    LayoutRule::clearTerms((LayoutRule *)(v4 + 20));
    LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, (unsigned __int64 *)&ptr);
    v25 = (void *)ptr;
LABEL_35:
    if ( v25 )
      operator delete(v25);
    return;
  v26 = LayoutComponent::hasSizeAxisType(v13, 3, 0);
  v27 = v14 == 1;
  if ( v14 == 1 )
    v27 = v26 == 1;
  if ( v27 )
    v38 = 0LL;
    v39 = 0;
    ui::AxisOffset::AxisOffset((int)&v36, 6, 1065353216, 0);
    v28 = (char *)operator new(0xCu);
    v29 = v38;
    v30 = v37;
    v31 = HIDWORD(v38) - v38;
    v16 = HIDWORD(v38) == (_DWORD)v38;
    *(_DWORD *)&v28[v31] = v36;
    *(_QWORD *)&v28[v31 + 4] = v30;
    v32 = v28;
        v33 = *(_QWORD *)v29;
        v34 = *(_DWORD *)(v29 + 8);
        LODWORD(v29) = v29 + 12;
        *(_QWORD *)v32 = v33;
        *((_DWORD *)v32 + 2) = v34;
        v32 += 12;
      while ( HIDWORD(v29) != (_DWORD)v29 );
      LODWORD(v29) = v38;
    v35 = (int)(v32 + 12);
    if ( (_DWORD)v29 )
      operator delete((void *)v29);
    v38 = *(_QWORD *)&v28;
    v39 = v28 + 12;
    LayoutRule::addAxisOffsetTerms(v4 + 20, v6, v7, (unsigned __int64 *)&v38);
    v25 = (void *)v38;
    goto LABEL_35;
}
