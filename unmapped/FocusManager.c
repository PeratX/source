

int __fastcall FocusManager::requestFocusReset(int result, bool a2)
{
  *(_BYTE *)(result + 20) = *(_BYTE *)(result + 20) & 0xFD | 2 * a2;
  return result;
}


int __fastcall FocusManager::setSize(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  return result;
}


signed int __fastcall FocusManager::addControlSorted(FocusManager *this, UIControl *a2)
{
  FocusManager *v2; // r5@1
  UIControl *v3; // r4@1
  char v4; // r0@1
  int v5; // r6@4
  FocusComponent *v6; // r6@5
  signed int result; // r0@7
  int v8; // r7@10
  int v9; // r0@10
  UIControl *v10; // r6@13
  int v20; // r0@18
  unsigned int v21; // r1@19
  unsigned int *v22; // r0@19
  unsigned int v23; // r2@22
  unsigned int v24; // r3@23
  unsigned int v25; // r0@24
  int v26; // r1@24
  int v27; // r0@26
  int v28; // r0@28
  unsigned int v29; // r1@29
  unsigned int *v30; // r0@29
  unsigned int v31; // r2@32
  unsigned int v32; // r3@33
  int v33; // r1@34
  __int64 v34; // kr00_8@34
  int v35; // r1@35
  int v36; // r5@36
  unsigned int *v37; // r1@37
  unsigned int v38; // r0@39
  int v39; // r0@41
  unsigned int v40; // r1@42
  unsigned int *v41; // r0@42
  unsigned int v42; // r2@45
  unsigned int v43; // r3@46
  unsigned int v44; // r0@47
  int v45; // r1@47
  int v46; // r0@49
  unsigned int *v47; // r1@52
  unsigned int v48; // r0@54
  unsigned int *v49; // r6@58
  unsigned int v50; // r0@60
  unsigned int *v51; // r1@70
  unsigned int v52; // r0@72
  int v53; // [sp+0h] [bp-40h]@34
  int v54; // [sp+4h] [bp-3Ch]@28
  int v55; // [sp+8h] [bp-38h]@24
  int v56; // [sp+Ch] [bp-34h]@18
  int v57; // [sp+10h] [bp-30h]@47
  int v58; // [sp+14h] [bp-2Ch]@41

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v5 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v6 = *(FocusComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v5));
  else
    v6 = 0;
  result = UIControl::hasControlCollectionFlag(v3, 512);
  if ( v6 )
    result ^= 1u;
    if ( result == 1 )
    {
      result = FocusComponent::getFocusEnabled(v6);
      if ( result == 1 )
      {
        v8 = *((_DWORD *)v2 + 2);
        v9 = *((_DWORD *)v2 + 3);
        while ( v8 != v9 )
        {
          v10 = *(UIControl **)v8;
          _R0 = UIControl::getPosition(*(UIControl **)v8);
          __asm { VLDR            S16, [R0,#4] }
          _R0 = UIControl::getPosition(v3);
          __asm { VLDR            S18, [R0,#4] }
          _R0 = UIControl::getPosition(v10);
          __asm
          {
            VCMPE.F32       S16, S18
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            __asm { VLDR            S16, [R0] }
            _R0 = UIControl::getPosition(v3);
            __asm
            {
              VLDR            S0, [R0]
              VCMPE.F32       S16, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v39 = *((_DWORD *)v3 + 2);
              v58 = v39;
              if ( !v39 )
                std::__throw_bad_weak_ptr();
              v40 = *(_DWORD *)(v39 + 4);
              v41 = (unsigned int *)(v39 + 4);
              do
              {
                while ( 1 )
                {
                  if ( !v40 )
                    goto LABEL_84;
                  __dmb();
                  v42 = __ldrex(v41);
                  if ( v42 == v40 )
                    break;
                  __clrex();
                  v40 = v42;
                }
                v43 = __strex(v40 + 1, v41);
                v40 = v42;
              }
              while ( v43 );
              __dmb();
              v44 = *((_DWORD *)v3 + 1);
              v57 = *((_DWORD *)v3 + 1);
              v45 = *((_DWORD *)v2 + 3);
              if ( v8 != v45 || v45 == *((_DWORD *)v2 + 4) )
                std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_insert_aux<std::shared_ptr<UIControl>>(
                  (int)v2 + 8,
                  v8,
                  (int)&v57);
              else
                *(_QWORD *)v8 = v44;
                v46 = v58;
                v58 = 0;
                *(_DWORD *)(v8 + 4) = v46;
                v57 = 0;
                *((_DWORD *)v2 + 3) = v8 + 8;
              v36 = v58;
              if ( v58 )
                v47 = (unsigned int *)(v58 + 4);
                if ( &pthread_create )
                  do
                    v48 = __ldrex(v47);
                  while ( __strex(v48 - 1, v47) );
                else
                  v48 = (*v47)--;
                if ( v48 == 1 )
                  v49 = (unsigned int *)(v36 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v50 = __ldrex(v49);
                    while ( __strex(v50 - 1, v49) );
                    goto LABEL_81;
                  }
                  goto LABEL_80;
              goto LABEL_83;
          else
            __asm { VLDR            S16, [R0,#4] }
              VLDR            S0, [R0,#4]
              v20 = *((_DWORD *)v3 + 2);
              v56 = v20;
              if ( !v20 )
              v21 = *(_DWORD *)(v20 + 4);
              v22 = (unsigned int *)(v20 + 4);
                  if ( !v21 )
                  v23 = __ldrex(v22);
                  if ( v23 == v21 )
                  v21 = v23;
                v24 = __strex(v21 + 1, v22);
                v21 = v23;
              while ( v24 );
              v25 = *((_DWORD *)v3 + 1);
              v55 = *((_DWORD *)v3 + 1);
              v26 = *((_DWORD *)v2 + 3);
              if ( v8 != v26 || v26 == *((_DWORD *)v2 + 4) )
                  (int)&v55);
                *(_QWORD *)v8 = v25;
                v27 = v56;
                v56 = 0;
                *(_DWORD *)(v8 + 4) = v27;
                v55 = 0;
              v36 = v56;
              if ( v56 )
                v51 = (unsigned int *)(v56 + 4);
                    v52 = __ldrex(v51);
                  while ( __strex(v52 - 1, v51) );
                  v52 = (*v51)--;
                if ( v52 == 1 )
LABEL_80:
                  v50 = (*v49)--;
LABEL_81:
                  if ( v50 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
                  goto LABEL_83;
          v9 = *((_DWORD *)v2 + 3);
          v8 += 8;
        }
        v28 = *((_DWORD *)v3 + 2);
        v54 = v28;
        if ( !v28 )
          std::__throw_bad_weak_ptr();
        v29 = *(_DWORD *)(v28 + 4);
        v30 = (unsigned int *)(v28 + 4);
        do
          while ( 1 )
            if ( !v29 )
LABEL_84:
              std::__throw_bad_weak_ptr();
            __dmb();
            v31 = __ldrex(v30);
            if ( v31 == v29 )
              break;
            __clrex();
            v29 = v31;
          v32 = __strex(v29 + 1, v30);
          v29 = v31;
        while ( v32 );
        __dmb();
        v33 = *((_DWORD *)v3 + 1);
        v53 = *((_DWORD *)v3 + 1);
        v34 = *(_QWORD *)((char *)v2 + 12);
        if ( (_DWORD)v34 != HIDWORD(v34) )
          *(_DWORD *)v34 = v33;
          v35 = v54;
          v54 = 0;
          *(_DWORD *)(v34 + 4) = v35;
          v53 = 0;
          *((_DWORD *)v2 + 3) = v34 + 8;
          goto LABEL_83;
        std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
          (_QWORD *)v2 + 1,
          (int)&v53);
        v36 = v54;
        if ( v54 )
          v37 = (unsigned int *)(v54 + 4);
          if ( &pthread_create )
            do
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 == 1 )
            v49 = (unsigned int *)(v36 + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v36 + 8))(v36);
            if ( &pthread_create )
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
              goto LABEL_81;
            goto LABEL_80;
LABEL_83:
        result = j_j_j__ZN9UIControl24addControlCollectionFlagEi(v3, 512);
      }
    }
  return result;
}


void __fastcall FocusManager::_sweepToNextFocusObject(FocusManager *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24)
{
  FocusManager::_sweepToNextFocusObject(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24);
}


void __fastcall FocusManager::_sweepForControlFocusOverride(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  int v5; // r8@1
  unsigned __int64 *v6; // r7@1
  int v7; // r4@1
  int v8; // r9@1
  int *v9; // r3@2
  unsigned int v10; // r0@2
  unsigned int *v11; // r10@2
  unsigned int v12; // r1@5
  unsigned int v13; // r2@6
  int v14; // r6@7
  char v15; // r0@10
  int v16; // r5@13
  int v17; // r0@14
  int v18; // r5@14
  unsigned int v19; // r5@16
  signed int v20; // r12@16
  void *v21; // r0@16
  int v22; // r6@18
  unsigned int v23; // r0@22
  unsigned int v24; // r0@26
  unsigned int *v25; // r5@30
  unsigned int v26; // r0@32
  unsigned int v27; // r0@36
  int v28; // r2@47
  int v29; // r6@47
  int v30; // r11@49
  unsigned int *v31; // r3@54
  unsigned int v32; // r1@56
  int v33; // r7@59
  int v34; // r0@59
  unsigned int *v35; // r2@60
  unsigned int v36; // r1@62
  int v37; // r7@68
  char v38; // r0@68
  unsigned __int16 v39; // r0@70
  int v40; // r5@71
  FocusComponent *v41; // r0@72
  unsigned int v42; // r5@74
  char *v43; // r0@74
  int v44; // r11@77
  int v45; // r1@81
  unsigned int *v46; // r3@82
  unsigned int v47; // r1@84
  int v48; // r0@87
  unsigned int *v49; // r2@88
  unsigned int v50; // r1@90
  UIControl *v51; // r7@95
  char v52; // r0@95
  unsigned __int16 v53; // r0@97
  int v54; // r5@98
  FocusComponent *v55; // r0@99
  unsigned int v56; // r5@101
  char *v57; // r0@101
  signed int v58; // r0@103
  signed int v59; // r1@103
  int v60; // r5@104
  unsigned int v61; // r0@107
  unsigned int *v62; // r1@111
  unsigned int v63; // r0@113
  unsigned int *v64; // r5@117
  unsigned int v65; // r0@119
  unsigned int *v66; // r6@123
  unsigned int v67; // r0@125
  unsigned int *v68; // r2@127
  signed int v69; // r1@129
  unsigned int v70; // r0@138
  unsigned int *v71; // r5@142
  unsigned int v72; // r0@144
  unsigned int *v73; // r1@151
  unsigned int v74; // r0@153
  signed int v75; // r5@167
  int v76; // r5@168
  int v77; // r6@168
  unsigned int *v78; // r0@170
  unsigned int v79; // r1@172
  unsigned int *v80; // r1@176
  unsigned int v81; // r0@178
  unsigned int *v82; // r7@182
  unsigned int v83; // r0@184
  int v84; // [sp+14h] [bp-44h]@16
  int v85; // [sp+18h] [bp-40h]@7
  UIControl *v86; // [sp+1Ch] [bp-3Ch]@53
  int v87; // [sp+20h] [bp-38h]@53
  int v88; // [sp+28h] [bp-30h]@16

  v5 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 32);
  v8 = a3;
  if ( !v7 )
    return;
  v9 = (int *)(a2 + 28);
  v10 = *(_DWORD *)(v7 + 4);
  v11 = (unsigned int *)(v7 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v10 )
        return;
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
        break;
      __clrex();
      v10 = v12;
    }
    v13 = __strex(v10 + 1, v11);
    v10 = v12;
  }
  while ( v13 );
  __dmb();
  v14 = *v9;
  v85 = (int)v9;
  if ( !*v11 )
    v14 = 0;
  if ( !v14 )
    goto LABEL_193;
  v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  if ( !(v15 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  v16 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v14, type_id<UIComponent,FocusComponent>(void)::id[0]) != 1
    || (v17 = UIControl::_getComponentIndex((UIControl *)v14, v16),
        (v18 = *(_DWORD *)(*(_DWORD *)(v14 + 108) + 4 * v17)) == 0) )
LABEL_193:
    if ( &pthread_create )
      do
        v24 = __ldrex(v11);
      while ( __strex(v24 - 1, v11) );
    else
      v24 = (*v11)--;
    if ( v24 != 1 )
      return;
    v25 = (unsigned int *)(v7 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
LABEL_45:
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
LABEL_44:
    v26 = (*v25)--;
    goto LABEL_45;
  if ( FocusComponent::hasFocusChangeOverride(*(_DWORD *)(*(_DWORD *)(v14 + 108) + 4 * v17), *(_BYTE *)(v8 + 12)) != 1 )
        v27 = __ldrex(v11);
      while ( __strex(v27 - 1, v11) );
      v27 = (*v11)--;
    if ( v27 != 1 )
      goto LABEL_45;
    goto LABEL_44;
  v84 = v18;
  v19 = *(_BYTE *)(v8 + 12);
  sub_DA7364((void **)&v88, "FOCUS_OVERRIDE_STOP");
  v20 = FocusComponent::checkFocusChangeOverride(v84, v19, (const void **)&v88);
  v21 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v88 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      v75 = v20;
      j_j_j_j_j__ZdlPv_9(v21);
      v20 = v75;
  if ( v20 == 1 )
    *(_DWORD *)v5 = v14;
    v22 = *(_DWORD *)(v5 + 4);
    if ( v7 != v22 )
      if ( v7 )
      {
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v11);
          while ( __strex(v23 + 1, v11) );
          v22 = *(_DWORD *)(v5 + 4);
        }
        else
          ++*v11;
      }
      if ( v22 )
        v62 = (unsigned int *)(v22 + 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 == 1 )
          v64 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          if ( &pthread_create )
          {
            __dmb();
            do
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
          }
          else
            v65 = (*v64)--;
          if ( v65 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
      *(_DWORD *)(v5 + 4) = v7;
    if ( v7 )
      if ( &pthread_create )
        __dmb();
        do
          v70 = __ldrex(v11);
        while ( __strex(v70 - 1, v11) );
      else
        v70 = (*v11)--;
      if ( v70 == 1 )
        v71 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 8))(v7);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          goto LABEL_162;
LABEL_161:
        v72 = (*v71)--;
LABEL_162:
        if ( v72 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  else
    v28 = *v6 >> 32;
    v29 = *v6;
    if ( v29 == v28 )
LABEL_103:
      v58 = 0;
      v59 = 1;
      if ( a5 == 1 )
        v30 = *v6 >> 32;
        while ( 1 )
          if ( UIControl::getEnabled(*(UIControl **)v29) == 1
            && UIControl::areAllAncestorsEnabled(*(UIControl **)v29) == 1
            && UIControl::getVisible(*(UIControl **)v29) == 1 )
            v86 = *(UIControl **)v29;
            v87 = *(_DWORD *)(v29 + 4);
            if ( v87 )
            {
              v31 = (unsigned int *)(v87 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v32 = __ldrex(v31);
                while ( __strex(v32 + 1, v31) );
              }
              else
                ++*v31;
            }
            v33 = _haveSameScrollSection(v85, (int)&v86);
            v34 = v87;
              v35 = (unsigned int *)(v87 + 8);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 == 1 )
                (*(void (**)(void))(*(_DWORD *)v34 + 12))();
            if ( !v33 )
              v37 = *(_DWORD *)v29;
              v38 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
              __dmb();
              if ( !(v38 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
                v39 = typeid_t<UIComponent>::count[0]++;
                type_id<UIComponent,FocusComponent>(void)::id[0] = v39;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
              v40 = type_id<UIComponent,FocusComponent>(void)::id[0];
              v41 = (FocusComponent *)(UIControl::_hasComponent(
                                         (UIControl *)v37,
                                         type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 ? *(_DWORD *)(*(_DWORD *)(v37 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v37, v40)) : 0);
              v42 = *(_BYTE *)(v8 + 12);
              v43 = FocusComponent::getFocusIdentifier(v41);
              if ( FocusComponent::checkFocusChangeOverride(v84, v42, (const void **)v43) )
                break;
          v29 += 8;
          if ( v29 == v30 )
            goto LABEL_103;
        v44 = *v6 >> 32;
            v45 = *(_DWORD *)(v29 + 4);
            v87 = v45;
            if ( v45 )
              v46 = (unsigned int *)(v45 + 8);
                  v47 = __ldrex(v46);
                while ( __strex(v47 + 1, v46) );
                ++*v46;
            _haveSameScrollSection(v85, (int)&v86);
            v48 = v87;
              v49 = (unsigned int *)(v87 + 8);
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                v50 = (*v49)--;
              if ( v50 == 1 )
                (*(void (**)(void))(*(_DWORD *)v48 + 12))();
            v51 = *(UIControl **)v29;
            v52 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
            if ( !(v52 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
              v53 = typeid_t<UIComponent>::count[0]++;
              type_id<UIComponent,FocusComponent>(void)::id[0] = v53;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
            v54 = type_id<UIComponent,FocusComponent>(void)::id[0];
            v55 = (FocusComponent *)(UIControl::_hasComponent(v51, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 ? *(_DWORD *)(*((_DWORD *)v51 + 27) + 4 * UIControl::_getComponentIndex(v51, v54)) : 0);
            v56 = *(_BYTE *)(v8 + 12);
            v57 = FocusComponent::getFocusIdentifier(v55);
            if ( FocusComponent::checkFocusChangeOverride(v84, v56, (const void **)v57) == 1 )
              break;
          if ( v29 == v44 )
      *(_DWORD *)v5 = *(_DWORD *)v29;
      v76 = *(_DWORD *)(v5 + 4);
      v77 = *(_DWORD *)(v29 + 4);
      if ( v77 != v76 )
        if ( v77 )
          v78 = (unsigned int *)(v77 + 4);
              v79 = __ldrex(v78);
            while ( __strex(v79 + 1, v78) );
            v76 = *(_DWORD *)(v5 + 4);
            ++*v78;
        if ( v76 )
          v80 = (unsigned int *)(v76 + 4);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 == 1 )
            v82 = (unsigned int *)(v76 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 8))(v76);
            if ( &pthread_create )
              do
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
            else
              v83 = (*v82)--;
            if ( v83 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 12))(v76);
        *(_DWORD *)(v5 + 4) = v77;
      v58 = 1;
      v59 = 0;
    v60 = v59 | v58;
          v61 = __ldrex(v11);
        while ( __strex(v61 - 1, v11) );
        v61 = (*v11)--;
      if ( v61 == 1 )
        v66 = (unsigned int *)(v7 + 8);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 12))(v7);
    if ( !v60 )
      v7 = *(_DWORD *)(v5 + 4);
        v73 = (unsigned int *)(v7 + 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 == 1 )
          v71 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 8))(v7);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            goto LABEL_162;
          goto LABEL_161;
}


int __fastcall FocusManager::setActive(int result, bool a2)
{
  *(_BYTE *)(result + 20) = a2 | *(_BYTE *)(result + 20) & 0xFE;
  return result;
}


int __fastcall FocusManager::_sweepForControl(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  int result; // r0@2

  if ( *(_BYTE *)(a3 + 12) )
    result = FocusManager::_sweepForControlDirectional(a1, a2, a3, (int)a4, a5);
  else
    result = FocusManager::_getControlAtFocusPoint(a1, a2, a3, a4);
  return result;
}


signed int __fastcall FocusManager::setFocusControl(FocusManager *this, const UIControl *a2)
{
  FocusManager *v2; // r6@1
  const UIControl *v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@6
  int v8; // r4@11
  unsigned int v9; // r1@12
  unsigned int *v10; // r0@12
  unsigned int v11; // r2@15
  unsigned int v12; // r3@16
  unsigned int v13; // r1@17
  unsigned int v14; // r3@17
  signed int v15; // r6@17
  unsigned int *v17; // r5@28
  unsigned int v18; // r0@30

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 6);
  v6 = (HIDWORD(v4) - (signed int)v4) >> 3;
  if ( v5 >= v6 )
  {
    if ( !v6 )
      goto LABEL_11;
  }
  else if ( !v6 || *(const UIControl **)(v4 + 8 * v5) == v3 )
    goto LABEL_11;
  v7 = 0;
  while ( *(const UIControl **)(v4 + 8 * v7) != v3 )
    if ( ++v7 >= (unsigned int)v6 )
  v5 = v7;
LABEL_11:
  FocusManager::_setFocusControlFromIndex(this, v5);
  v8 = *((_DWORD *)v2 + 8);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 4);
    v10 = (unsigned int *)(v8 + 4);
    while ( v9 )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
      {
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10;
          v14 = *((_DWORD *)v2 + 7);
          v15 = 0;
          if ( !*v10 )
            v14 = *v10;
          if ( (const UIControl *)v14 == v3 )
            v15 = 1;
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v10);
            while ( __strex(v13 - 1, v10) );
          }
          else
            *v10 = v13 - 1;
          if ( v13 == 1 )
            v17 = (unsigned int *)(v8 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
          return v15;
        }
      }
      else
        __clrex();
    }
  return 0;
}


unsigned int __fastcall FocusManager::hasRequestedFocusReset(FocusManager *this)
{
  return (*((_BYTE *)this + 20) & 2u) >> 1;
}


signed int __fastcall FocusManager::doesPositionIntersectFocusedControl(int a1, int _R1)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  UIControl *v6; // r5@6
  UIControl *v11; // r0@10
  char *v12; // r0@10
  signed int v13; // r5@11
  unsigned int v14; // r0@17
  unsigned int *v15; // r6@21
  unsigned int v16; // r0@23
  int v18; // [sp+8h] [bp-30h]@10
  int v19; // [sp+Ch] [bp-2Ch]@10
  int v20; // [sp+10h] [bp-28h]@10
  int v21; // [sp+14h] [bp-24h]@10
  __int64 v22; // [sp+18h] [bp-20h]@10
  float v23; // [sp+20h] [bp-18h]@10

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
          return 0;
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = (UIControl *)__strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    _ZF = *v4 == 0;
    if ( *v4 )
      v6 = *(UIControl **)(a1 + 28);
      _ZF = v6 == 0;
    if ( _ZF )
      goto LABEL_31;
    __asm
      VMOV.F32        S0, #-1.0
      VLDR            S2, [R1]
      VLDR            S4, [R1,#4]
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0x38+var_18]
      VSTR            S0, [SP,#0x38+var_14]
    v22 = 4629700418014806016LL;
    v11 = UIControl::getPosition(v6);
    v20 = *(_DWORD *)v11;
    v21 = *((_DWORD *)v11 + 1);
    v12 = UIControl::getSize(v6);
    v18 = *(_DWORD *)v12;
    v19 = *((_DWORD *)v12 + 1);
    if ( !FocusManager::_intersectAABB((int)&v22, (__int64 *)&v20, (__int64 *)&v18, (__int64 *)&v23, &v22) )
LABEL_31:
      v13 = 0;
    else
      v13 = 1;
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v4);
      while ( __strex(v14 - 1, v4) );
      v14 = (*v4)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  else
    v13 = 0;
  return v13;
}


int __fastcall FocusManager::getCurrentModalRoot(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 40);
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
  v10 = *(_DWORD *)(a2 + 36);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


void __fastcall FocusManager::_sweepForControlFocusOverride(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  FocusManager::_sweepForControlFocusOverride(a1, a2, a3, a4, a5);
}


FocusManager *__fastcall FocusManager::~FocusManager(FocusManager *this)
{
  FocusManager *v1; // r8@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r0@9
  unsigned int *v6; // r2@10
  unsigned int v7; // r1@12
  int v8; // r5@17
  int v9; // r7@17
  int v10; // r4@18
  unsigned int *v11; // r1@19
  unsigned int v12; // r0@21
  unsigned int *v13; // r6@25
  unsigned int v14; // r0@27

  v1 = this;
  v2 = *((_DWORD *)this + 10);
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
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v9 = *((_QWORD *)v1 + 1) >> 32;
  v8 = *((_QWORD *)v1 + 1);
  if ( v8 != v9 )
    do
      v10 = *(_DWORD *)(v8 + 4);
      if ( v10 )
      {
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
      }
      v8 += 8;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 2);
  if ( v8 )
    operator delete((void *)v8);
  return v1;
}


int __fastcall FocusManager::getFocusedControl(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 32);
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
  v10 = *(_DWORD *)(a2 + 28);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


unsigned int __fastcall FocusManager::addControl(FocusManager *this, UIControl *a2)
{
  FocusManager *v2; // r4@1
  UIControl *v3; // r5@1
  char v4; // r0@1
  int v5; // r6@4
  FocusComponent *v6; // r6@5
  unsigned int result; // r0@7
  int v8; // r1@10
  unsigned int v9; // r2@11
  unsigned int *v10; // r1@11
  unsigned int v11; // r3@14
  unsigned int v12; // r7@15
  int v13; // r2@16
  __int64 v14; // kr00_8@16
  int v15; // r0@17
  int v16; // r6@18
  unsigned int *v17; // r1@19
  unsigned int v18; // r0@21
  unsigned int *v19; // r7@25
  unsigned int v20; // r0@27
  char v21; // r0@32
  int v22; // r6@35
  FocusComponent *v23; // r0@36
  char v24; // r0@38
  int v25; // r6@41
  int v26; // r1@42
  UIControl *v27; // r6@43
  char v28; // r0@44
  int v29; // r7@47
  FocusComponent *v30; // r0@48
  int v31; // r6@50
  unsigned int *v32; // r1@51
  unsigned int v33; // r0@53
  unsigned int *v34; // r7@57
  unsigned int v35; // r0@59
  char v36; // r0@64
  int v37; // r6@67
  int v38; // r1@68
  UIControl *v39; // r5@69
  char v40; // r0@70
  int v41; // r6@73
  int v42; // r4@76
  unsigned int *v43; // r1@77
  unsigned int *v44; // r5@83
  UIControl *v45; // [sp+4h] [bp-2Ch]@69
  int v46; // [sp+8h] [bp-28h]@76
  UIControl *v47; // [sp+Ch] [bp-24h]@43
  int v48; // [sp+10h] [bp-20h]@50
  int v49; // [sp+14h] [bp-1Ch]@16
  int v50; // [sp+18h] [bp-18h]@10

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v5 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v3, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v6 = *(FocusComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v5));
  else
    v6 = 0;
  result = UIControl::hasControlCollectionFlag(v3, 512);
  if ( v6 )
    result ^= 1u;
    if ( result == 1 )
    {
      result = FocusComponent::getFocusEnabled(v6);
      if ( result == 1 )
      {
        v8 = *((_DWORD *)v3 + 2);
        v50 = v8;
        if ( !v8 )
          std::__throw_bad_weak_ptr();
        v9 = *(_DWORD *)(v8 + 4);
        v10 = (unsigned int *)(v8 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v9 )
              std::__throw_bad_weak_ptr();
            __dmb();
            v11 = __ldrex(v10);
            if ( v11 == v9 )
              break;
            __clrex();
            v9 = v11;
          }
          v12 = __strex(v9 + 1, v10);
          v9 = v11;
        }
        while ( v12 );
        __dmb();
        v13 = *((_DWORD *)v3 + 1);
        v49 = *((_DWORD *)v3 + 1);
        v14 = *(_QWORD *)((char *)v2 + 12);
        if ( (_DWORD)v14 == HIDWORD(v14) )
          std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
            (_QWORD *)v2 + 1,
            (int)&v49);
          v16 = v50;
          if ( v50 )
            v17 = (unsigned int *)(v50 + 4);
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
              v19 = (unsigned int *)(v16 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
        else
          *(_DWORD *)v14 = v13;
          v15 = v50;
          v50 = 0;
          *(_DWORD *)(v14 + 4) = v15;
          v49 = 0;
          *((_DWORD *)v2 + 3) = v14 + 8;
        UIControl::addControlCollectionFlag(v3, 512);
        v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
        if ( !(v21 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
          type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
        v22 = type_id<UIComponent,FocusComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v3, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
          v23 = *(FocusComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v22));
          if ( v23 )
            FocusComponent::initialize(v23, v2);
        v24 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
        if ( !(v24 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
          type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
        v25 = type_id<UIComponent,GridComponent>(void)::id[0];
        if ( UIControl::_hasComponent(v3, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
          v26 = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v25));
          if ( v26 )
            GridComponent::getGridItemTemplate((GridComponent *)&v47, v26);
            v27 = v47;
            if ( v47 )
              v28 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
              if ( !(v28 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
                type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
              v29 = type_id<UIComponent,FocusComponent>(void)::id[0];
              if ( UIControl::_hasComponent(v27, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
                v30 = *(FocusComponent **)(*((_DWORD *)v27 + 27) + 4 * UIControl::_getComponentIndex(v27, v29));
                if ( v30 )
                  FocusComponent::initialize(v30, v2);
            v31 = v48;
            if ( v48 )
              v32 = (unsigned int *)(v48 + 4);
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
                v33 = (*v32)--;
              if ( v33 == 1 )
                v34 = (unsigned int *)(v31 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v35 = __ldrex(v34);
                  while ( __strex(v35 - 1, v34) );
                }
                else
                  v35 = (*v34)--;
                if ( v35 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
        v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
        if ( !(v36 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
          type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
        v37 = type_id<UIComponent,FactoryComponent>(void)::id[0];
        result = UIControl::_hasComponent(v3, type_id<UIComponent,FactoryComponent>(void)::id[0]);
        if ( result == 1 )
          result = UIControl::_getComponentIndex(v3, v37);
          v38 = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * result);
          if ( v38 )
            result = FactoryComponent::getControlTemplate((FactoryComponent *)&v45, v38);
            v39 = v45;
            if ( v45 )
              v40 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
              if ( !(v40 & 1)
              v41 = type_id<UIComponent,FocusComponent>(void)::id[0];
              result = UIControl::_hasComponent(v39, type_id<UIComponent,FocusComponent>(void)::id[0]);
              if ( result == 1 )
                result = *(_DWORD *)(*((_DWORD *)v39 + 27) + 4 * UIControl::_getComponentIndex(v39, v41));
                if ( result )
                  result = FocusComponent::initialize((FocusComponent *)result, v2);
            v42 = v46;
            if ( v46 )
              v43 = (unsigned int *)(v46 + 4);
                  result = __ldrex(v43);
                while ( __strex(result - 1, v43) );
                result = (*v43)--;
                v44 = (unsigned int *)(v42 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
                    result = __ldrex(v44);
                  while ( __strex(result - 1, v44) );
                  result = (*v44)--;
                if ( result == 1 )
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
      }
    }
  return result;
}


void __fastcall FocusManager::_setFocusControlFromIndex(FocusManager *this, int a2)
{
  FocusManager::_setFocusControlFromIndex(this, a2);
}


void __fastcall FocusManager::validateFocusControl(FocusManager *this)
{
  FocusManager::validateFocusControl(this);
}


void __fastcall FocusManager::defaultFocus(FocusManager *this)
{
  FocusManager::defaultFocus(this);
}


signed int __fastcall FocusManager::_prepareForWrap(int a1, int a2)
{
  signed int result; // r0@1
  int v3; // r2@4

  result = 0;
  switch ( *(_BYTE *)(a2 + 12) )
  {
    case 1:
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 56);
      goto def_CC2FA4;
    case 2:
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 52);
    case 3:
      v3 = *(_DWORD *)(a2 + 48);
      goto LABEL_6;
    case 4:
      v3 = *(_DWORD *)(a2 + 44);
LABEL_6:
      *(_DWORD *)a2 = v3;
    case 0:
      return result;
    default:
def_CC2FA4:
      *(_BYTE *)(a2 + 24) = 0;
      result = 1;
      break;
  }
  return result;
}


unsigned int __fastcall FocusManager::focusPositionCaptured(FocusManager *this)
{
  return (*((_BYTE *)this + 20) & 4u) >> 2;
}


int __fastcall FocusManager::_intersectAABB(int a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // kr00_8@1
  __int64 *v6; // r5@1
  __int64 *v7; // r6@1
  __int64 v10; // kr08_8@1
  __int64 v12; // kr10_8@1
  __int64 v19; // kr18_8@1
  int v26; // r2@1
  int v30; // r7@3
  int v32; // r1@4
  int v34; // r3@6
  signed int v35; // r7@6
  signed int v36; // r2@6
  int result; // r0@10

  v5 = *a2;
  v6 = a4;
  v7 = a3;
  _R7 = roundf(*a2);
  _R8 = roundf(HIDWORD(v5));
  v10 = *v7;
  _R0 = roundf(*v7);
  v12 = *v6;
  __asm { VMOV            S20, R0 }
  _R0 = roundf(*v6);
  __asm { VMOV            S22, R0 }
  _R0 = roundf(HIDWORD(v12));
  __asm { VMOV            S24, R0 }
  v19 = *a5;
  __asm { VMOV            S26, R7 }
  _R0 = roundf(HIDWORD(v10));
  __asm
  {
    VMOV            S16, R0
    VMOV            S18, R8
  }
  _R0 = roundf(HIDWORD(v19));
    VMOV            S28, R0
    VCVTR.S32.F32   S18, S18
    VCVTR.S32.F32   S16, S16
  _R0 = roundf(v19);
    VCVTR.S32.F32   S4, S26
    VMOV            S6, R0
    VCVTR.S32.F32   S2, S24
    VCVTR.S32.F32   S8, S22
    VCVTR.S32.F32   S0, S20
    VMOV            R1, S4
    VCVTR.S32.F32   S4, S28
    VCVTR.S32.F32   S6, S6
    VMOV            R0, S8
    VMOV            R2, S6
  v26 = _R2 + _R0;
  if ( _R1 > v26 )
    goto LABEL_14;
  if ( _R1 == v26 )
    VMOV            R2, S2
    VMOV            R7, S4
    VMOV            R3, S18
  v30 = _R7 + _R2;
  if ( _R3 > v30 )
  __asm { VMOV            R6, S0 }
  v32 = _R1 + _R6;
  if ( v32 < _R0 || _R3 == v30 )
LABEL_14:
    result = 0;
  else
    __asm { VMOV            R7, S16 }
    v34 = _R3 + _R7;
    v35 = 0;
    _VF = __OFSUB__(v34, _R2);
    _ZF = v34 == _R2;
    _NF = v34 - _R2 < 0;
    v36 = 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v36 = 1;
    if ( v32 != _R0 )
      v35 = 1;
    result = v35 & v36;
  return result;
}


void __fastcall FocusManager::validateFocusControl(FocusManager *this)
{
  int v1; // r8@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  signed int v6; // r5@7
  __int64 v7; // kr00_8@11
  int v8; // r3@11
  signed int v9; // r6@11
  signed int v10; // r4@14
  signed int v11; // r5@14
  signed int v12; // r6@14
  signed int v13; // r3@18
  unsigned int *v14; // r1@25
  unsigned int v15; // r0@27
  unsigned int *v16; // r4@31
  unsigned int v17; // r0@33

  v1 = *((_DWORD *)this + 8);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = 0;
          if ( !*v3 )
            v6 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v6 = 1;
  v1 = 0;
LABEL_11:
  v7 = *((_QWORD *)this + 1);
  v8 = *((_DWORD *)this + 7);
  v9 = HIDWORD(v7) - v7;
  if ( v6 )
    v8 = 0;
  if ( v9 < 1 )
    if ( (_DWORD)v7 == HIDWORD(v7) )
      goto LABEL_24;
LABEL_23:
    FocusManager::defaultFocus(this);
    goto LABEL_24;
  v10 = v9 >> 3;
  v11 = 0;
  v12 = 0;
  do
    if ( v8 == *(_DWORD *)(v7 + 8 * v12) )
      *((_DWORD *)this + 6) = v12;
      v11 = 1;
    ++v12;
  while ( v12 < v10 );
  v13 = 0;
  if ( (_DWORD)v7 == HIDWORD(v7) )
    v13 = 1;
  if ( !((v11 | v13) & 1) )
    goto LABEL_23;
LABEL_24:
    v14 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
}


void __fastcall FocusManager::_setFocusControlFromIndex(FocusManager *this, int a2)
{
  FocusManager *v2; // r5@1
  __int64 v3; // kr00_8@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r4@8
  unsigned int v8; // r2@9
  unsigned int *v9; // r0@9
  unsigned int v10; // r3@12
  unsigned int v11; // r6@13
  unsigned int v12; // r0@14
  __int64 v13; // kr08_8@22
  int v14; // r7@23
  unsigned int *v15; // r0@24
  unsigned int v16; // r1@26
  int v17; // r0@30
  unsigned int *v18; // r2@31
  unsigned int v19; // r1@33
  unsigned int *v20; // r1@40
  unsigned int v21; // r0@42
  unsigned int *v22; // r5@46
  unsigned int v23; // r0@48

  v2 = this;
  v3 = *((_QWORD *)this + 1);
  if ( HIDWORD(v3) == (_DWORD)v3 )
  {
    *((_DWORD *)this + 7) = 0;
    v4 = *((_DWORD *)this + 8);
    *((_DWORD *)v2 + 8) = 0;
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
    *((_DWORD *)v2 + 6) = 0;
  }
  else if ( (_DWORD)v3 != HIDWORD(v3) )
    v7 = *((_DWORD *)this + 8);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 4);
      v9 = (unsigned int *)(v7 + 4);
      while ( v8 )
        v10 = __ldrex(v9);
        if ( v10 == v8 )
        {
          v11 = __strex(v8 + 1, v9);
          v8 = v10;
          if ( !v11 )
          {
            __dmb();
            v12 = *v9;
            goto LABEL_21;
          }
        }
        else
          __clrex();
      v7 = 0;
    else
LABEL_21:
    if ( a2 < 0 || (v13 = *((_QWORD *)v2 + 1), (HIDWORD(v13) - (signed int)v13) >> 3 <= a2) )
      FocusManager::defaultFocus(v2);
      *((_DWORD *)v2 + 6) = a2;
      *((_DWORD *)v2 + 7) = *(_DWORD *)(v13 + 8 * a2);
      v14 = *(_DWORD *)(v13 + 8 * a2 + 4);
      if ( v14 )
        v15 = (unsigned int *)(v14 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 + 1, v15) );
          ++*v15;
      v17 = *((_DWORD *)v2 + 8);
      if ( v17 )
        v18 = (unsigned int *)(v17 + 8);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      *((_DWORD *)v2 + 8) = v14;
      v20 = (unsigned int *)(v7 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


void __fastcall FocusManager::_setFocusControlInternal(FocusManager *this, const UIControl *a2)
{
  __int64 v2; // kr00_8@1
  const UIControl *v3; // r12@1
  int v4; // r1@1
  int v5; // lr@1
  int v6; // r2@6

  v2 = *((_QWORD *)this + 1);
  v3 = a2;
  v4 = *((_DWORD *)this + 6);
  v5 = (HIDWORD(v2) - (signed int)v2) >> 3;
  if ( v4 >= v5 )
  {
    if ( !v5 )
    {
LABEL_9:
      j_j_j__ZN12FocusManager25_setFocusControlFromIndexEi(this, v4);
      return;
    }
  }
  else if ( !v5 || *(const UIControl **)(v2 + 8 * v4) == v3 )
    goto LABEL_9;
  v6 = 0;
  while ( *(const UIControl **)(v2 + 8 * HIDWORD(v2)) != v3 )
    if ( ++v6 >= (unsigned int)v5 )
      goto LABEL_9;
  j_j_j__ZN12FocusManager25_setFocusControlFromIndexEi(this, v6);
}


int __fastcall FocusManager::setModalRoot(int a1, int a2)
{
  int v2; // r6@0
  int v3; // r10@1
  int v4; // r9@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  unsigned int v10; // r1@7
  signed int v11; // r0@7
  int v12; // r5@11
  int v13; // r7@11
  unsigned int *v14; // r1@14
  unsigned int v15; // r0@16
  unsigned int v16; // r0@22
  bool v17; // zf@27
  unsigned int v18; // r1@30
  unsigned int *v19; // r0@30
  unsigned int v20; // r2@33
  unsigned int v21; // r3@34
  unsigned int v22; // r2@35
  signed int v23; // r3@35
  int v24; // r1@37
  int v25; // r5@42
  unsigned int *v26; // r4@43
  unsigned int v27; // r0@45
  int v28; // r8@52
  unsigned int v29; // r1@53
  unsigned int *v30; // r0@53
  unsigned int v31; // r2@56
  unsigned int v32; // r3@57
  unsigned int v33; // r1@58
  signed int v34; // r0@58
  int v35; // r7@62
  char v36; // r1@62
  int v37; // r6@67
  InputComponent *v38; // r7@68
  unsigned int *v39; // r1@71
  unsigned int v40; // r0@73
  unsigned int *v41; // r4@77
  unsigned int v42; // r0@79
  int v43; // r0@86
  unsigned int v44; // r1@87
  unsigned int *v45; // r0@87
  unsigned int v46; // r2@90
  unsigned int v47; // r3@91
  signed int v48; // r0@93
  int v49; // r1@99
  int v50; // r6@101
  unsigned int *v51; // r1@102
  unsigned int v52; // r0@104
  unsigned int *v53; // r4@108
  unsigned int v54; // r0@110
  int v55; // r5@115
  unsigned int *v56; // r0@116
  unsigned int v57; // r1@118
  int result; // r0@121
  unsigned int *v59; // r2@122
  unsigned int v60; // r1@124
  int v61; // [sp+0h] [bp-28h]@101
  int v62; // [sp+4h] [bp-24h]@86

  v3 = a1;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          __dmb();
          v10 = *v7;
          v11 = 0;
          if ( !v10 )
            v11 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v11 = 1;
  v5 = 0;
LABEL_11:
  v12 = *(_DWORD *)v4;
  v13 = *(_DWORD *)(v3 + 36);
  if ( v11 )
    v13 = 0;
    v14 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v2 = v5 + 8;
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex((unsigned int *)v2);
        while ( __strex(v16 - 1, (unsigned int *)v2) );
        v16 = (*(_DWORD *)v2)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v17 = v12 == v13;
  if ( v12 != v13 )
    v2 = *(_DWORD *)(v3 + 40);
    v17 = v2 == 0;
  if ( !v17 )
    v18 = *(_DWORD *)(v2 + 4);
    v19 = (unsigned int *)(v2 + 4);
    while ( v18 )
      v20 = __ldrex(v19);
      if ( v20 == v18 )
        v21 = __strex(v18 + 1, v19);
        v18 = v20;
        if ( !v21 )
          v22 = *v19;
          v23 = *v19;
          if ( *v19 )
            v23 = 1;
          v24 = *(_DWORD *)(v3 + 36) != 0;
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v19);
            while ( __strex(v22 - 1, v19) );
          }
          else
            *v19 = v22 - 1;
          v25 = v23 & v24;
          if ( v22 != 1 )
            goto LABEL_132;
          v26 = (unsigned int *)(v2 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 != 1 )
LABEL_132:
            if ( v25 != 1 )
              break;
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
            if ( !v25 )
          v28 = *(_DWORD *)(v3 + 40);
          if ( v28 )
            v29 = *(_DWORD *)(v28 + 4);
            v30 = (unsigned int *)(v28 + 4);
            while ( v29 )
            {
              __dmb();
              v31 = __ldrex(v30);
              if ( v31 == v29 )
              {
                v32 = __strex(v29 + 1, v30);
                v29 = v31;
                if ( !v32 )
                {
                  __dmb();
                  v33 = *v30;
                  v34 = 0;
                  if ( !v33 )
                    v34 = 1;
                  goto LABEL_62;
                }
              }
              else
                __clrex();
            }
          v34 = 1;
          v28 = 0;
LABEL_62:
          v35 = *(_DWORD *)(v3 + 36);
          v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
          if ( v34 )
            v35 = 0;
          if ( !(v36 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
            type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
          v37 = type_id<UIComponent,InputComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v35, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
            v38 = *(InputComponent **)(*(_DWORD *)(v35 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v35, v37));
            v38 = 0;
            v39 = (unsigned int *)(v28 + 4);
            if ( &pthread_create )
              do
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
            else
              v40 = (*v39)--;
            if ( v40 == 1 )
              v41 = (unsigned int *)(v28 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
              if ( &pthread_create )
                __dmb();
                do
                  v42 = __ldrex(v41);
                while ( __strex(v42 - 1, v41) );
                v42 = (*v41)--;
              if ( v42 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
          if ( v38 && InputComponent::remembersModalFocus(v38) == 1 )
            v43 = *(_DWORD *)(v3 + 32);
            v62 = v43;
            if ( v43 )
              v44 = *(_DWORD *)(v43 + 4);
              v45 = (unsigned int *)(v43 + 4);
                while ( 1 )
                  if ( !v44 )
                  {
                    v62 = 0;
                    v48 = 1;
                    goto LABEL_99;
                  }
                  v46 = __ldrex(v45);
                  if ( v46 == v44 )
                    break;
                  __clrex();
                  v44 = v46;
                v47 = __strex(v44 + 1, v45);
                v44 = v46;
              while ( v47 );
              if ( v62 )
                v48 = 0;
                if ( !*(_DWORD *)(v62 + 4) )
                  v48 = 1;
                v48 = 1;
              v48 = 1;
LABEL_99:
            v49 = *(_DWORD *)(v3 + 28);
            if ( v48 )
              v49 = 0;
            v61 = v49;
            InputComponent::setPreviousFocusControl((int)v38, (int)&v61);
            v50 = v62;
            if ( v62 )
              v51 = (unsigned int *)(v62 + 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 == 1 )
                v53 = (unsigned int *)(v50 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
                if ( &pthread_create )
                  do
                    v54 = __ldrex(v53);
                  while ( __strex(v54 - 1, v53) );
                else
                  v54 = (*v53)--;
                if ( v54 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
          break;
  *(_DWORD *)(v3 + 36) = *(_DWORD *)v4;
  v55 = *(_DWORD *)(v4 + 4);
  if ( v55 )
    v56 = (unsigned int *)(v55 + 8);
        v57 = __ldrex(v56);
      while ( __strex(v57 + 1, v56) );
      ++*v56;
  result = *(_DWORD *)(v3 + 40);
  if ( result )
    v59 = (unsigned int *)(result + 8);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v3 + 40) = v55;
  return result;
}


signed int __fastcall FocusManager::_calculateSweepDirectionAngleAndCorner(int a1, int _R1, int _R2, int a4, int a5)
{
  int v5; // r12@1
  signed int result; // r0@1
  signed int v8; // r4@2
  signed int v9; // r0@2
  signed int v14; // r0@4
  signed int v15; // r4@4

  v5 = *(_BYTE *)(_R1 + 12);
  _LR = a5;
  result = 0;
  switch ( v5 )
  {
    case 1:
      v8 = -1082130432;
      v9 = 0;
      goto LABEL_6;
    case 2:
      v14 = 0;
      v15 = 1065353216;
      goto LABEL_8;
    case 3:
      v9 = -1082130432;
      v8 = 0;
LABEL_6:
      *(_DWORD *)_R2 = v9;
      *(_DWORD *)(_R2 + 4) = v8;
      __asm
      {
        VLDR            S2, [R1,#4]
        VLDR            S0, [R1]
        VLDR            S4, [R1,#0x1C]
        VLDR            S6, [R1,#0x24]
      }
      goto LABEL_9;
    case 4:
      v14 = 1065353216;
      v15 = 0;
LABEL_8:
      *(_DWORD *)_R2 = v14;
      *(_DWORD *)(_R2 + 4) = v15;
        VLDR            S4, [R1,#0x20]
        VLDR            S6, [R1,#0x28]
LABEL_9:
        VSUB.F32        S0, S4, S0
        VSUB.F32        S2, S6, S2
        VSTR            S0, [LR]
        VSTR            S2, [LR,#4]
      goto LABEL_10;
    case 0:
      return result;
    default:
        VLDR            S0, [LR]; jumptable 00CC2E22 default case
        VLDR            S2, [LR,#4]
LABEL_10:
      __asm { VMUL.F32        S4, S0, S0 }
      _R0 = a5 + 4;
        VMUL.F32        S2, S2, S2
        VADD.F32        S2, S2, S4
        VLDR            S4, =0.0001
        VSQRT.F32       S2, S2
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VDIV.F32        S0, S0, S2
          VSTR            S0, [LR]
          VLDR            S4, [R0]
          VDIV.F32        S2, S4, S2
          VSTR            S2, [R0]
        }
      if ( (unsigned int)(v5 - 3) < 2 )
          VLDR            S2, [R2]
          VMUL.F32        S0, S0, S2
      else
        if ( (unsigned int)(v5 - 1) > 1 )
          return 1;
          VLDR            S0, [R2,#4]
          VLDR            S2, [R0]
          VMUL.F32        S0, S2, S0
      __asm { VSTR            S0, [R3] }
      return 1;
  }
}


signed int __fastcall FocusManager::_getControlAtFocusPoint(signed int a1, int a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 *v9; // r5@1
  signed int result; // r0@1
  int v11; // r7@1
  int v12; // r4@2
  unsigned int v13; // r8@2
  UIControl *v14; // r0@3
  __int64 *v15; // r10@6
  __int64 *v16; // r0@6
  int v17; // r4@9
  unsigned int *v18; // r0@10
  unsigned int v19; // r1@12
  int v20; // r5@13
  unsigned int *v21; // r1@14
  unsigned int v22; // r0@16
  unsigned int *v23; // r6@21
  unsigned int v24; // r0@23
  signed int v25; // [sp+8h] [bp-38h]@1
  __int64 v26; // [sp+Ch] [bp-34h]@1
  float v27; // [sp+14h] [bp-2Ch]@6

  __asm { VMOV.F32        S0, #-1.0 }
  _R6 = a3;
  __asm
  {
    VLDR            S2, [R6]
    VLDR            S4, [R6,#4]
  }
  v25 = a1;
  v9 = a4;
    VADD.F32        S2, S2, S0
    VADD.F32        S0, S4, S0
    VSTR            S2, [SP,#0x40+var_2C]
    VSTR            S0, [SP,#0x40+var_28]
  v26 = 4629700418014806016LL;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  result = *a4 >> 32;
  v11 = *a4;
  if ( result != v11 )
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *(UIControl **)(v11 + v12);
      if ( v14 != *(UIControl **)(_R6 + 16)
        && UIControl::getEnabled(v14) == 1
        && UIControl::areAllAncestorsEnabled(*(UIControl **)(v11 + v12)) == 1 )
      {
        v15 = (__int64 *)UIControl::getPosition(*(UIControl **)(v11 + v12));
        v16 = (__int64 *)UIControl::getSize(*(UIControl **)(v11 + v12));
        if ( FocusManager::_intersectAABB((int)v16, v15, v16, (__int64 *)&v27, &v26) == 1 )
          break;
      }
      v11 = *v9;
      v12 += 8;
      ++v13;
      result = (*v9 >> 32) - v11;
      if ( v13 >= result >> 3 )
        return result;
    }
    *(_DWORD *)v25 = *(_DWORD *)(v11 + v12);
    result = v11 + 8 * v13;
    v17 = *(_DWORD *)(result + 4);
    if ( v17 )
      v18 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
        v20 = *(_DWORD *)(v25 + 4);
        if ( v20 )
        {
          v21 = (unsigned int *)(v20 + 4);
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
            v23 = (unsigned int *)(v20 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
        }
      else
        ++*v18;
      result = v25;
      *(_DWORD *)(v25 + 4) = v17;
  return result;
}


void __fastcall FocusManager::updateDefaultFocusIfNeeded(FocusManager *this)
{
  FocusManager *v1; // r4@1
  char v2; // r0@1
  bool v3; // zf@2
  int v4; // r5@5
  unsigned int v5; // r1@6
  unsigned int *v6; // r0@6
  unsigned int v7; // r2@9
  unsigned int v8; // r3@10
  unsigned int v9; // r2@11
  signed int v10; // r3@11
  int v11; // r1@13
  int v12; // r6@18
  unsigned int *v13; // r7@19
  unsigned int v14; // r0@21
  int v15; // r5@27
  unsigned int v16; // r1@28
  unsigned int *v17; // r0@28
  unsigned int v18; // r2@31
  unsigned int v19; // r3@32
  unsigned int v20; // r1@33
  signed int v21; // r0@33
  int v22; // r6@37
  char v23; // r1@37
  int v24; // r7@42
  InputComponent *v25; // r6@43
  unsigned int *v26; // r1@46
  unsigned int v27; // r0@48
  unsigned int *v28; // r7@52
  unsigned int v29; // r0@54
  int v30; // r1@62
  signed int v31; // r7@62
  __int64 v32; // r2@62
  signed int v33; // r6@66
  int v34; // r7@68
  int v35; // r5@74
  unsigned int *v36; // r1@75
  unsigned int v37; // r0@77
  unsigned int *v38; // r7@81
  unsigned int v39; // r0@83
  int v40; // [sp+4h] [bp-1Ch]@61
  int v41; // [sp+8h] [bp-18h]@74

  v1 = this;
  v2 = *((_BYTE *)this + 20);
  if ( !(v2 & 8) )
  {
    v3 = (v2 & 1) == 0;
    if ( v2 & 1 )
      v3 = *((_QWORD *)v1 + 1) >> 32 == (unsigned int)*((_QWORD *)v1 + 1);
    if ( v3 )
      return;
    v4 = *((_DWORD *)v1 + 8);
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
            v10 = *v6;
            if ( *v6 )
              v10 = 1;
            v11 = *((_DWORD *)v1 + 7) != 0;
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v6);
              while ( __strex(v9 - 1, v6) );
            }
            else
              *v6 = v9 - 1;
            v12 = v10 & v11;
            if ( v9 == 1 )
              v13 = (unsigned int *)(v4 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
            if ( v12 )
              return;
            break;
          }
        }
        else
          __clrex();
      }
    }
  }
  *((_BYTE *)v1 + 20) &= 0xF7u;
  v15 = *((_DWORD *)v1 + 10);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4);
    v17 = (unsigned int *)(v15 + 4);
    while ( v16 )
      __dmb();
      v18 = __ldrex(v17);
      if ( v18 == v16 )
        v19 = __strex(v16 + 1, v17);
        v16 = v18;
        if ( !v19 )
          __dmb();
          v20 = *v17;
          v21 = 0;
          if ( !v20 )
            v21 = 1;
          goto LABEL_37;
      else
        __clrex();
  v21 = 1;
  v15 = 0;
LABEL_37:
  v22 = *((_DWORD *)v1 + 9);
  v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  if ( v21 )
    v22 = 0;
  __dmb();
  if ( !(v23 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  v24 = type_id<UIComponent,InputComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v22, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
    v25 = *(InputComponent **)(*(_DWORD *)(v22 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v22, v24));
  else
    v25 = 0;
    v26 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  if ( !v25 || InputComponent::remembersModalFocus(v25) != 1 )
    goto LABEL_89;
  InputComponent::getPreviousFocusControl((InputComponent *)&v40, (int)v25);
  if ( v40 )
    v32 = *((_QWORD *)v1 + 1);
    v30 = *((_DWORD *)v1 + 6);
    v31 = HIDWORD(v32) - v32;
    HIDWORD(v32) = (HIDWORD(v32) - (signed int)v32) >> 3;
    if ( v30 >= v31 >> 3 )
      if ( !HIDWORD(v32) )
LABEL_73:
        FocusManager::_setFocusControlFromIndex(v1, v30);
        v33 = 1;
        goto LABEL_74;
    else if ( !HIDWORD(v32) || *(_DWORD *)(v32 + 8 * v30) == v40 )
      goto LABEL_73;
    v34 = 0;
    while ( *(_DWORD *)(v32 + 8 * v34) != v40 )
      if ( (unsigned int)++v34 >= HIDWORD(v32) )
        goto LABEL_73;
    v30 = v34;
    goto LABEL_73;
  v33 = 0;
LABEL_74:
  v35 = v41;
  if ( v41 )
    v36 = (unsigned int *)(v41 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v35 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  if ( !v33 )
LABEL_89:
    FocusManager::defaultFocus(v1);
}


void __fastcall FocusManager::updateDefaultFocusIfNeeded(FocusManager *this)
{
  FocusManager::updateDefaultFocusIfNeeded(this);
}


int __fastcall FocusManager::hasFocusedControl(FocusManager *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  int v7; // r0@7
  unsigned int v8; // r6@7
  int v9; // r5@9
  unsigned int *v11; // r6@16
  unsigned int v12; // r0@18

  v1 = *((_DWORD *)this + 8);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = *((_DWORD *)this + 7);
          v8 = *v3;
          if ( *v3 )
            LOBYTE(v8) = 1;
          v9 = (unsigned __int8)v8 & (v7 != 0);
          if ( &pthread_create )
          {
            __dmb();
            do
              v6 = __ldrex(v3);
            while ( __strex(v6 - 1, v3) );
          }
          else
            *v3 = v6 - 1;
          if ( v6 == 1 )
            v11 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v9;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall FocusManager::defaultFocus(FocusManager *this)
{
  int *v1; // r5@2
  int *v2; // r9@2
  int v3; // r11@3
  int v4; // r6@4
  char v5; // r0@4
  int v6; // r4@7
  FocusComponent *v7; // r0@8
  int v8; // r0@9
  int v9; // r6@12
  int v10; // r7@16
  char v11; // r0@16
  int v12; // r4@19
  FocusComponent *v13; // r0@20
  char *v14; // r0@22
  int v15; // r1@23
  unsigned int *v16; // r1@24
  unsigned int v17; // r0@26
  int v18; // r7@32
  char *v19; // r9@32
  unsigned int v24; // r4@33
  int v25; // r8@33
  unsigned int v26; // r6@33
  __int64 v28; // kr18_8@38
  int v29; // r1@38
  int v30; // r2@38
  int v31; // r3@43
  int v32; // r4@50
  unsigned int *v33; // r1@51
  unsigned int v34; // r0@53
  unsigned int *v35; // r5@57
  unsigned int v36; // r0@59
  FocusManager *v37; // [sp+8h] [bp-40h]@3
  FocusManager *v38; // [sp+8h] [bp-40h]@15
  char *v39; // [sp+Ch] [bp-3Ch]@14
  char *v40; // [sp+10h] [bp-38h]@14
  char *v41; // [sp+14h] [bp-34h]@14

  if ( *((_BYTE *)this + 20) & 1 )
  {
    v2 = (int *)(*((_QWORD *)this + 1) >> 32);
    v1 = (int *)*((_QWORD *)this + 1);
    if ( v1 == v2 )
    {
      v9 = *((_QWORD *)this + 1);
      v3 = 0;
    }
    else
      v37 = this;
      do
      {
        v4 = *v1;
        v5 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
        __dmb();
        if ( !(v5 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
        {
          type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
        }
        v6 = type_id<UIComponent,FocusComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
          v7 = *(FocusComponent **)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v6));
          if ( v7 )
          {
            v8 = FocusComponent::getDefaultFocusPrecedence(v7);
            if ( v8 > v3 )
              v3 = v8;
          }
        v1 += 2;
      }
      while ( v2 != v1 );
      this = v37;
      v1 = (int *)(*((_QWORD *)v37 + 1) >> 32);
      v9 = *((_QWORD *)v37 + 1);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    if ( (int *)v9 != v1 )
      v38 = this;
        v10 = *(_DWORD *)v9;
        v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
        if ( !(v11 & 1)
        v12 = type_id<UIComponent,FocusComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v10, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
          v13 = *(FocusComponent **)(*(_DWORD *)(v10 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v10, v12));
          if ( v13 )
            if ( FocusComponent::getDefaultFocusPrecedence(v13) == v3 )
            {
              v14 = v40;
              if ( v40 == v41 )
              {
                std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl> const&>(
                  (unsigned __int64 *)&v39,
                  v9);
              }
              else
                *(_DWORD *)v40 = *(_DWORD *)v9;
                v15 = *(_DWORD *)(v9 + 4);
                *((_DWORD *)v14 + 1) = v15;
                if ( v15 )
                {
                  v16 = (unsigned int *)(v15 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v17 = __ldrex(v16);
                    while ( __strex(v17 + 1, v16) );
                    v14 = v40;
                  }
                  else
                    ++*v16;
                }
                v40 = v14 + 8;
            }
        v9 += 8;
      while ( (int *)v9 != v1 );
      v19 = v40;
      v18 = (int)v39;
      if ( v40 == v39 )
        goto LABEL_49;
      __asm { VLDR            S16, =3.4028e38 }
      v24 = 0;
      v25 = 0;
      v26 = (v40 - v39) >> 3;
        _R0 = UIControl::getPosition(*(UIControl **)(v18 + 8 * v24));
        __asm
          VLDR            S2, [R0,#4]
          VLDR            S0, [R0]
          VMUL.F32        S2, S2, S2
          VADD.F32        S0, S2, S0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v25 = *(_DWORD *)(v18 + 8 * v24);
          __asm { VMOVLT.F32      S16, S0 }
        ++v24;
      while ( v24 < v26 );
      if ( !v25 )
      v28 = *((_QWORD *)v38 + 1);
      v29 = *((_DWORD *)v38 + 6);
      v30 = (HIDWORD(v28) - (signed int)v28) >> 3;
      if ( v29 >= v30 )
        if ( !v30 )
LABEL_48:
          FocusManager::_setFocusControlFromIndex(v38, v29);
LABEL_49:
          if ( (char *)v18 != v19 )
            do
              v32 = *(_DWORD *)(v18 + 4);
              if ( v32 )
                v33 = (unsigned int *)(v32 + 4);
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
              v18 += 8;
            while ( (char *)v18 != v19 );
            v19 = v39;
          if ( v19 )
            operator delete(v19);
          return;
      else if ( !v30 || *(_DWORD *)(v28 + 8 * v29) == v25 )
        goto LABEL_48;
      v31 = 0;
      while ( *(_DWORD *)(v28 + 8 * v31) != v25 )
        if ( ++v31 >= (unsigned int)v30 )
          goto LABEL_48;
      v29 = v31;
      goto LABEL_48;
  }
}


int __fastcall FocusManager::FocusManager(int result)
{
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_WORD *)(result + 20) = *(_BYTE *)(result + 20) & 0xF0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}


FocusComponent *__fastcall FocusManager::_initializeFocusControl(FocusManager *this, UIControl *a2)
{
  FocusManager *v2; // r4@1
  UIControl *v3; // r5@1
  char v4; // r0@1
  int v5; // r6@4
  FocusComponent *result; // r0@4

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v5 = type_id<UIComponent,FocusComponent>(void)::id[0];
  result = (FocusComponent *)UIControl::_hasComponent(v3, type_id<UIComponent,FocusComponent>(void)::id[0]);
  if ( result == (FocusComponent *)1 )
    result = *(FocusComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v5));
    if ( result )
      result = (FocusComponent *)j_j_j__ZN14FocusComponent10initializeER12FocusManager(result, v2);
  return result;
}


signed int __fastcall FocusManager::removeControl(int a1, UIControl *a2, int a3)
{
  UIControl *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  signed int result; // r0@1
  int v7; // r0@2
  int v8; // r1@2
  unsigned int v9; // r2@3
  unsigned int *v10; // r1@3
  unsigned int v11; // r3@6
  unsigned int v12; // r7@7
  int v13; // r2@8
  __int64 v14; // kr00_8@8
  int v15; // r2@9
  int v16; // r6@10
  unsigned int *v17; // r1@11
  unsigned int v18; // r0@13
  unsigned int *v19; // r7@17
  unsigned int v20; // r0@19
  int v21; // r7@24
  unsigned int v22; // r1@25
  unsigned int *v23; // r0@25
  unsigned int v24; // r2@28
  unsigned int v25; // r3@29
  unsigned int v26; // r1@30
  UIControl *v27; // r1@34
  unsigned int *v28; // r1@38
  __int64 v29; // kr08_8@42
  unsigned int *v30; // r1@43
  unsigned int *v31; // r4@49
  unsigned int *v32; // r6@55
  int v33; // r0@66
  unsigned int *v34; // r2@67
  unsigned int v35; // r1@69
  int v36; // [sp+4h] [bp-24h]@8
  int v37; // [sp+8h] [bp-20h]@2
  int v38; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = UIControl::hasControlCollectionFlag(a2, 512);
  if ( result == 1 )
  {
    v38 = v4 + 8;
    v7 = std::map<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>,std::less<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> *>,std::allocator<std::pair<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> * const,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>>>>::operator[](
           v5,
           &v38);
    v8 = *((_DWORD *)v3 + 2);
    v37 = v8;
    if ( !v8 )
      std::__throw_bad_weak_ptr();
    v9 = *(_DWORD *)(v8 + 4);
    v10 = (unsigned int *)(v8 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v9 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v11 = __ldrex(v10);
        if ( v11 == v9 )
          break;
        __clrex();
        v9 = v11;
      }
      v12 = __strex(v9 + 1, v10);
      v9 = v11;
    }
    while ( v12 );
    __dmb();
    v13 = *((_DWORD *)v3 + 1);
    v36 = *((_DWORD *)v3 + 1);
    v14 = *(_QWORD *)(v7 + 4);
    if ( (_DWORD)v14 == HIDWORD(v14) )
      std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
        (_QWORD *)v7,
        (int)&v36);
      v16 = v37;
      if ( v37 )
        v17 = (unsigned int *)(v37 + 4);
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
          v19 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    else
      *(_DWORD *)v14 = v13;
      v15 = v37;
      v37 = 0;
      *(_DWORD *)(v14 + 4) = v15;
      v36 = 0;
      *(_DWORD *)(v7 + 4) = v14 + 8;
    UIControl::removeControlCollectionFlag(v3, 512);
    v21 = *(_DWORD *)(v4 + 32);
    if ( v21 )
      v22 = *(_DWORD *)(v21 + 4);
      v23 = (unsigned int *)(v21 + 4);
      while ( v22 )
        v24 = __ldrex(v23);
        if ( v24 == v22 )
          v25 = __strex(v22 + 1, v23);
          v22 = v24;
          if ( !v25 )
            v26 = *v23;
            result = 0;
            if ( !v26 )
              result = 1;
            goto LABEL_34;
          __clrex();
    result = 1;
    v21 = 0;
LABEL_34:
    v27 = *(UIControl **)(v4 + 28);
    if ( result )
      v27 = 0;
    if ( v27 == v3 )
      v29 = *(_QWORD *)(v4 + 8);
      if ( v21 )
        v30 = (unsigned int *)(v21 + 4);
            result = __ldrex(v30);
          while ( __strex(result - 1, v30) );
          result = (*v30)--;
        if ( result == 1 )
          v32 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              result = __ldrex(v32);
            while ( __strex(result - 1, v32) );
            result = (*v32)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      if ( (_DWORD)v29 != HIDWORD(v29) )
        *(_DWORD *)(v4 + 28) = 0;
        v33 = *(_DWORD *)(v4 + 32);
        if ( v33 )
          v34 = (unsigned int *)(v33 + 8);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 == 1 )
            (*(void (**)(void))(*(_DWORD *)v33 + 12))();
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 24) = 0;
        result = *(_BYTE *)(v4 + 20) | 8;
        *(_BYTE *)(v4 + 20) = result;
    else if ( v21 )
      v28 = (unsigned int *)(v21 + 4);
      if ( &pthread_create )
        do
          result = __ldrex(v28);
        while ( __strex(result - 1, v28) );
      else
        result = (*v28)--;
      if ( result == 1 )
        v31 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            result = __ldrex(v31);
          while ( __strex(result - 1, v31) );
          result = (*v31)--;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  }
  return result;
}


int __fastcall FocusManager::_sweepForControlDirectional(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  UIControl *v5; // r8@0
  int v7; // r10@1
  int v8; // r0@1
  unsigned __int64 *v9; // r7@1
  int v13; // r4@1
  int result; // r0@2
  int v15; // r11@18
  unsigned int v16; // r0@19
  unsigned int *v17; // r6@19
  unsigned int v18; // r1@22
  unsigned int v19; // r2@23
  char v21; // r0@27
  int v22; // r9@30
  unsigned int v23; // r0@34
  unsigned int *v24; // r6@38
  unsigned int v25; // r0@40
  int v26; // r8@45
  int v27; // r9@45
  int v28; // r7@46
  int v29; // r4@46
  int *v30; // r1@49
  int v31; // r12@49
  int v32; // r6@49
  int v33; // lr@49
  int v34; // r11@49
  unsigned int *v35; // r0@55
  unsigned int v36; // r1@57
  unsigned int *v37; // r1@62
  unsigned int v38; // r0@64
  unsigned int *v39; // r6@68
  unsigned int v40; // r0@70
  unsigned int *v41; // r1@75
  unsigned int v42; // r0@77
  unsigned int *v43; // r4@84
  unsigned int v44; // r0@86
  int v45; // r11@91
  int v46; // r6@91
  int v47; // r0@95
  unsigned int *v48; // r0@96
  unsigned int v49; // r1@98
  int v50; // r1@101
  int v51; // r0@101
  int v52; // r4@101
  unsigned int *v53; // r2@102
  unsigned int v54; // r1@104
  UIControl *v58; // r4@117
  char v59; // r0@117
  unsigned __int16 v60; // r0@119
  int v61; // r10@120
  UIComponent *v62; // r0@122
  bool v63; // zf@122
  int v64; // r0@125
  signed int v65; // r1@125
  unsigned int *v66; // r0@136
  unsigned int v67; // r1@138
  int v68; // r1@143
  int v69; // r0@143
  unsigned int *v70; // r0@144
  unsigned int v71; // r1@146
  int v72; // r0@149
  int v73; // r2@149
  int v74; // r3@149
  int v75; // r5@149
  int v76; // r7@149
  int v77; // r3@149
  int v78; // r4@149
  int v79; // r5@149
  int v80; // r7@149
  int v81; // r0@156
  int v82; // r5@161
  unsigned int *v83; // r1@162
  unsigned int *v84; // r4@168
  unsigned int *v85; // r1@176
  unsigned int *v86; // r4@182
  unsigned int *v87; // r1@190
  unsigned int *v88; // r4@196
  __int64 v89; // [sp+10h] [bp-D8h]@48
  int v90; // [sp+1Ch] [bp-CCh]@45
  int v91; // [sp+20h] [bp-C8h]@45
  int v92; // [sp+28h] [bp-C0h]@45
  UIControl **v93; // [sp+2Ch] [bp-BCh]@18
  int v94; // [sp+30h] [bp-B8h]@143
  int v95; // [sp+34h] [bp-B4h]@143
  int v96; // [sp+38h] [bp-B0h]@143
  char v97; // [sp+3Ch] [bp-ACh]@143
  int v98; // [sp+40h] [bp-A8h]@143
  int v99; // [sp+44h] [bp-A4h]@143
  int v100; // [sp+48h] [bp-A0h]@149
  int v101; // [sp+4Ch] [bp-9Ch]@149
  int v102; // [sp+50h] [bp-98h]@149
  int v103; // [sp+54h] [bp-94h]@149
  int v104; // [sp+58h] [bp-90h]@149
  int v105; // [sp+5Ch] [bp-8Ch]@149
  int v106; // [sp+60h] [bp-88h]@149
  int v107; // [sp+64h] [bp-84h]@149
  int v108; // [sp+68h] [bp-80h]@149
  float v109; // [sp+70h] [bp-78h]@114
  UIControl *v111; // [sp+78h] [bp-70h]@95
  int v112; // [sp+7Ch] [bp-6Ch]@95

  _R5 = a3;
  v7 = a1;
  v8 = *(_BYTE *)(a3 + 12);
  v9 = a4;
  __asm { VLDR            S4, =0.0 }
  v13 = a2;
  switch ( v8 )
  {
    case 0:
      result = 0;
      *(_DWORD *)v7 = 0;
      *(_DWORD *)(v7 + 4) = 0;
      return result;
    case 4:
      __asm
      {
        VMOV.F32        S16, #1.0; jumptable 00CC2326 case 4
        VLDR            S0, [R5,#4]
        VLDR            S2, [R5]
        VLDR            S6, [R5,#0x20]
        VLDR            S8, [R5,#0x28]
      }
      goto LABEL_6;
    case 2:
        VMOV.F32        S18, #1.0; jumptable 00CC2326 case 2
      goto LABEL_8;
    case 3:
        VLDR            S0, [R5,#4]; jumptable 00CC2326 case 3
        VMOV.F32        S16, #-1.0
        VLDR            S6, [R5,#0x1C]
        VLDR            S8, [R5,#0x24]
LABEL_6:
        VSUB.F32        S0, S8, S0
        VSUB.F32        S2, S6, S2
        VMOV.F32        S18, S4
      break;
    case 1:
        VLDR            S0, [R5,#4]; jumptable 00CC2326 case 1
        VMOV.F32        S18, #-1.0
LABEL_8:
        VMOV.F32        S16, S4
    default:
        VMOV.F32        S0, S4  ; jumptable 00CC2326 default case
        VMOV.F32        S2, S4
  }
  __asm
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VDIV.F32        S0, S0, S4
      VDIV.F32        S2, S2, S4
    }
  if ( (unsigned int)(v8 - 3) < 2 )
    __asm { VMUL.F32        S20, S2, S16 }
  else if ( (unsigned int)(v8 - 1) > 1 )
    __asm { VMOVHI.F32      S20, #1.0 }
  else
    __asm { VMULLS.F32      S20, S0, S18 }
  v15 = *(_DWORD *)(a2 + 32);
  v93 = (UIControl **)(a2 + 28);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4);
    v17 = (unsigned int *)(v15 + 4);
    while ( v16 )
      __dmb();
      v18 = __ldrex(v17);
      if ( v18 == v16 )
        v19 = __strex(v16 + 1, v17);
        v16 = v18;
        if ( !v19 )
        {
          __dmb();
          _ZF = *v17 == 0;
          if ( *v17 )
          {
            v5 = *v93;
            _ZF = *v93 == 0;
          }
          if ( !_ZF )
            v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
            __dmb();
            if ( !(v21 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
            {
              type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
            }
            v22 = type_id<UIComponent,FocusComponent>(void)::id[0];
            if ( UIControl::_hasComponent(v5, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
              UIControl::_getComponentIndex(v5, v22);
          if ( &pthread_create )
            do
              v23 = __ldrex(v17);
            while ( __strex(v23 - 1, v17) );
          else
            v23 = (*v17)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(v15 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
            if ( &pthread_create )
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            else
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
          break;
        }
      else
        __clrex();
  v90 = v13;
  v92 = v7;
  v26 = *v9 >> 32;
  v27 = *v9;
  v91 = (int)v9;
  if ( v27 != v26 )
      VLDR            S22, =0.02
      VMOV.F32        S24, #0.5
      VCMPE.F32       S20, S22
      VLDR            S21, =1000000.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S26, #1.0
    v28 = 0;
    __asm { VMOV.F32        S28, #-0.5 }
    v29 = 0;
    __asm { VMOV.F32        S17, S21 }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S22, S20 }
    v89 = 0LL;
    while ( 1 )
        VMOV.F32        S30, S17
        VMOV.F32        S19, S21
      v45 = v29;
      v46 = v28;
      if ( *(_DWORD *)v27 != *(_DWORD *)(_R5 + 16)
        && UIControl::getEnabled(*(UIControl **)v27) == 1
        && UIControl::areAllAncestorsEnabled(*(UIControl **)v27) == 1
        && UIControl::getVisible(*(UIControl **)v27) == 1 )
        v111 = *(UIControl **)v27;
        v47 = *(_DWORD *)(v27 + 4);
        v112 = v47;
        if ( v47 )
          v48 = (unsigned int *)(v47 + 8);
              v49 = __ldrex(v48);
            while ( __strex(v49 + 1, v48) );
            ++*v48;
        v50 = _haveSameScrollSection((int)v93, (int)&v111);
        v51 = v112;
        v52 = v50 & a5;
        if ( v112 )
          v53 = (unsigned int *)(v112 + 8);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 == 1 )
            (*(void (**)(void))(*(_DWORD *)v51 + 12))();
        if ( !v52 )
          _R7 = UIControl::getPosition(*(UIControl **)v27);
          _R0 = UIControl::getSize(*(UIControl **)v27);
          __asm
            VLDR            S0, [R0]
            VLDR            S2, [R0,#4]
            VMUL.F32        S0, S0, S24
            VLDR            S4, [R7]
            VMUL.F32        S2, S2, S24
            VLDR            S6, [R7,#4]
            VADD.F32        S0, S4, S0
            VADD.F32        S2, S6, S2
            VSTR            S0, [SP,#0xE8+var_78]
            VSTR            S2, [SP,#0xE8+var_74]
          switch ( *(_BYTE *)(_R5 + 12) )
            case 1:
              __asm
              {
                VLDR            S0, [R0,#4]; jumptable 00CC2800 case 1
                VMUL.F32        S0, S0, S24
              }
              goto LABEL_116;
            case 3:
                VLDR            S0, [R0]; jumptable 00CC2800 case 3
              goto LABEL_114;
            case 4:
                VLDR            S0, [R0]; jumptable 00CC2800 case 4
                VMUL.F32        S0, S0, S28
LABEL_114:
                VLDR            S2, [SP,#0xE8+var_78]
                VADD.F32        S0, S2, S0
                VSTR            S0, [SP,#0xE8+var_78]
              break;
            case 2:
                VLDR            S0, [R0,#4]; jumptable 00CC2800 case 2
LABEL_116:
                VLDR            S2, [SP,#0xE8+var_74]
                VSTR            S0, [SP,#0xE8+var_74]
            default:
          v58 = *(UIControl **)v27;
            VLDR            S17, [SP,#0xE8+var_78]
            VLDR            S21, [SP,#0xE8+var_74]
            VLDR            S23, [R5]
            VLDR            S25, [R5,#4]
          v59 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
          if ( !(v59 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
            v60 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,InputComponent>(void)::id[0] = v60;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
          v61 = type_id<UIComponent,InputComponent>(void)::id[0];
          UIControl::_hasComponent(v58, type_id<UIComponent,InputComponent>(void)::id[0]);
            VSUB.F32        S0, S17, S23
            VSUB.F32        S2, S21, S25
            VMUL.F32        S4, S0, S0
            VMUL.F32        S6, S2, S2
            VADD.F32        S4, S6, S4
            VSQRT.F32       S17, S4
            VDIV.F32        S2, S2, S17
            VDIV.F32        S0, S0, S17
            VMUL.F32        S2, S2, S18
            VMUL.F32        S0, S0, S16
            VADD.F32        S21, S0, S2
            goto LABEL_205;
          v62 = *(UIComponent **)(*((_DWORD *)v58 + 27) + 4 * UIControl::_getComponentIndex(v58, v61));
          v63 = v62 == 0;
          if ( v62 )
            v63 = *(_BYTE *)(_R5 + 25) == 0;
          if ( v63 )
LABEL_205:
            __asm
              VCMPE.F32       S21, S22
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              goto LABEL_130;
            v64 = InputComponent::isWithinClipRegion(v62, (int)&v109);
            __asm { VCMPE.F32       S21, S22 }
            v65 = 0;
            __asm { VMRS            APSR_nzcv, FPSCR }
              v65 = 1;
            if ( v64 & v65 )
LABEL_130:
                VCMPE.F32       S21, S20
                VMRS            APSR_nzcv, FPSCR
              if ( !(_NF ^ _VF) )
                goto LABEL_206;
                VSUB.F32        S21, S26, S21
                VCMPE.F32       S21, S19
              if ( _NF ^ _VF )
                v28 = *(_DWORD *)(v27 + 4);
                LODWORD(v89) = *(_DWORD *)v27;
                if ( v28 == v46 )
                {
                  v28 = v46;
                }
                else
                  if ( v28 )
                  {
                    v66 = (unsigned int *)(v28 + 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v67 = __ldrex(v66);
                      while ( __strex(v67 + 1, v66) );
                    }
                    else
                      ++*v66;
                  }
                  if ( v46 )
                    v41 = (unsigned int *)(v46 + 4);
                        v42 = __ldrex(v41);
                      while ( __strex(v42 - 1, v41) );
                      v42 = (*v41)--;
                    if ( v42 == 1 )
                      v43 = (unsigned int *)(v46 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v44 = __ldrex(v43);
                        while ( __strex(v44 - 1, v43) );
                      }
                      else
                        v44 = (*v43)--;
                      if ( v44 == 1 )
                        (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
              else
LABEL_206:
                v28 = v46;
                __asm { VMOV.F32        S21, S19 }
                VCMPE.F32       S17, S30
                v29 = *(_DWORD *)(v27 + 4);
                HIDWORD(v89) = *(_DWORD *)v27;
                if ( v29 == v45 )
                  v29 = v45;
                  if ( v29 )
                    v35 = (unsigned int *)(v29 + 4);
                        v36 = __ldrex(v35);
                      while ( __strex(v36 + 1, v35) );
                      ++*v35;
                  if ( v45 )
                    v37 = (unsigned int *)(v45 + 4);
                        v38 = __ldrex(v37);
                      while ( __strex(v38 - 1, v37) );
                      v38 = (*v37)--;
                    if ( v38 == 1 )
                      v39 = (unsigned int *)(v45 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 8))(v45);
                          v40 = __ldrex(v39);
                        while ( __strex(v40 - 1, v39) );
                        v40 = (*v39)--;
                      if ( v40 == 1 )
                        (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 12))(v45);
                v29 = v45;
                __asm { VMOV.F32        S17, S30 }
              goto LABEL_141;
      v29 = v45;
      v28 = v46;
        VMOV.F32        S17, S30
        VMOV.F32        S21, S19
LABEL_141:
      v27 += 8;
      if ( v27 == v26 )
        v33 = HIDWORD(v89);
        v31 = v89;
        v32 = v28;
        v34 = v29;
        v30 = (int *)(_R5 + 4);
        goto LABEL_143;
  v30 = (int *)(_R5 + 4);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
LABEL_143:
  v94 = *(_DWORD *)_R5;
  v95 = *v30;
  v68 = *(_DWORD *)(_R5 + 8);
  v97 = *(_BYTE *)(_R5 + 12);
  v96 = v68;
  v98 = *(_DWORD *)(_R5 + 16);
  v69 = *(_DWORD *)(_R5 + 20);
  v99 = v69;
  if ( v69 )
    v70 = (unsigned int *)(v69 + 4);
    if ( &pthread_create )
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 + 1, v70) );
    else
      ++*v70;
  v72 = _R5 + 24;
  v73 = *(_DWORD *)(_R5 + 24);
  v74 = *(_DWORD *)(_R5 + 28);
  v75 = *(_DWORD *)(_R5 + 32);
  v76 = *(_DWORD *)(v72 + 12);
  v72 += 16;
  v100 = v73;
  v101 = v74;
  v102 = v75;
  v103 = v76;
  v77 = *(_DWORD *)(v72 + 4);
  v78 = *(_DWORD *)(v72 + 8);
  v79 = *(_DWORD *)(v72 + 12);
  v80 = *(_DWORD *)(v72 + 16);
  v104 = *(_DWORD *)v72;
  v105 = v77;
  v106 = v78;
  v107 = v79;
  v108 = v80;
  if ( v31 | v33 || !(_BYTE)v100 )
    if ( v33 )
LABEL_154:
      result = v92;
      *(_DWORD *)v92 = v33;
      *(_DWORD *)(v92 + 4) = v34;
      v34 = 0;
      *(_DWORD *)v92 = v31;
      *(_DWORD *)(v92 + 4) = v32;
      v32 = 0;
    switch ( v97 )
      case 1:
        v95 = v108;
        break;
      case 0:
        goto LABEL_154;
      case 4:
        v81 = v105;
        goto LABEL_159;
      case 2:
        v95 = v107;
      case 3:
        v81 = v106;
LABEL_159:
        v94 = v81;
      default:
    LOBYTE(v100) = 0;
    result = FocusManager::_sweepForControlDirectional(v92, v90, (int)&v94, v91, 1);
  v82 = v99;
  if ( v99 )
    v83 = (unsigned int *)(v99 + 4);
        result = __ldrex(v83);
      while ( __strex(result - 1, v83) );
      result = (*v83)--;
    if ( result == 1 )
      v84 = (unsigned int *)(v82 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v84);
        while ( __strex(result - 1, v84) );
        result = (*v84)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
  if ( v32 )
    v85 = (unsigned int *)(v32 + 4);
        result = __ldrex(v85);
      while ( __strex(result - 1, v85) );
      result = (*v85)--;
      v86 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          result = __ldrex(v86);
        while ( __strex(result - 1, v86) );
        result = (*v86)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  if ( v34 )
    v87 = (unsigned int *)(v34 + 4);
        result = __ldrex(v87);
      while ( __strex(result - 1, v87) );
      result = (*v87)--;
      v88 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          result = __ldrex(v88);
        while ( __strex(result - 1, v88) );
        result = (*v88)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  return result;
}


int __fastcall FocusManager::setFocusPositionCaptured(int result, bool a2)
{
  *(_BYTE *)(result + 20) = *(_BYTE *)(result + 20) & 0xFB | 4 * a2;
  return result;
}


int __fastcall FocusManager::isActive(FocusManager *this)
{
  return *((_BYTE *)this + 20) & 1;
}


int __fastcall FocusManager::_findFocusToControlAngleAndDist(int a1, int _R1, int _R2, int _R3, int a5)
{
  int result; // r0@8

  _LR = a5;
  switch ( *(_BYTE *)(_R1 + 12) )
  {
    case 1:
      __asm { VMOV.F32        S0, #0.5; jumptable 00CC2F06 case 1 }
      goto LABEL_4;
    case 2:
      __asm { VMOV.F32        S0, #-0.5; jumptable 00CC2F06 case 2 }
LABEL_4:
      __asm
      {
        VLDR            S2, [R3,#4]
        VMUL.F32        S0, S2, S0
        VLDR            S2, [LR,#4]
        VADD.F32        S0, S2, S0
        VSTR            S0, [LR,#4]
      }
      break;
    case 3:
      __asm { VMOV.F32        S0, #0.5; jumptable 00CC2F06 case 3 }
      goto LABEL_7;
    case 4:
      __asm { VMOV.F32        S0, #-0.5; jumptable 00CC2F06 case 4 }
LABEL_7:
        VLDR            S2, [R3]
        VLDR            S2, [LR]
        VSTR            S0, [LR]
    default:
  }
  __asm
    VLDR            S0, [R1]; jumptable 00CC2F06 default case
    VLDR            S4, [LR]
    VLDR            S2, [R1,#4]
    VLDR            S6, [LR,#4]
    VSUB.F32        S0, S4, S0
    VSUB.F32        S2, S6, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VSQRT.F32       S4, S4
    VDIV.F32        S2, S2, S4
    VDIV.F32        S0, S0, S4
    VSTR            S4, [R12]
    VLDR            S4, [R2]
    VLDR            S6, [R2,#4]
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S6
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


    if ( FocusManager::setFocusControl(*(FocusManager **)(v4 + 348), v60) == 1 )
{
      v35 = 1;
      ScreenView::_updateFocusControl((ScreenView *)v4, 1);
    }
    else
    {
      v35 = 0;
    goto LABEL_77;
  }
  v35 = 0;
LABEL_77:
  v38 = v61;
  v23 = &v69;
  if ( v61 )
  {
    v39 = (unsigned int *)(v61 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v38 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  VisualTree::~VisualTree((VisualTree *)&v64);
  if ( !v35 )
    goto LABEL_93;
  v43 = 1;
LABEL_94:
  v44 = *v23;
  v12 = &v76;
  if ( *v23 )
    v45 = (unsigned int *)(v44 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  VisualTree::~VisualTree((VisualTree *)&v72);
  if ( !v43 )
    goto LABEL_110;
  v49 = 1;
LABEL_111:
  v50 = *v12;
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
  return v49;
}


void __fastcall FocusManager::_sweepToNextFocusObject(FocusManager *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24)
{
  FocusManager *v24; // r9@1
  _QWORD *v25; // r5@1
  int v26; // r10@1
  int v27; // r6@1
  char v28; // r4@1
  unsigned int v29; // r1@2
  unsigned int *v30; // r0@2
  unsigned int v31; // r2@5
  unsigned int v32; // r3@6
  unsigned int v33; // r1@7
  signed int v34; // r0@7
  int v35; // r8@11
  int *v41; // r6@19
  int v42; // r0@19
  int v43; // r1@19
  unsigned int *v45; // r0@25
  unsigned int v46; // r1@26
  int v47; // r4@30
  unsigned int *v48; // r1@31
  unsigned int v49; // r0@33
  unsigned int *v50; // r5@37
  unsigned int v51; // r0@39
  char v52; // r0@44
  int v53; // r4@47
  FocusComponent *v54; // r0@48
  int v55; // r7@50
  int v56; // r11@50
  __int64 v57; // kr08_8@50
  unsigned int *v58; // r1@52
  unsigned int v59; // r0@54
  int v60; // r9@56
  unsigned int *v61; // r6@56
  char v62; // r0@57
  unsigned __int16 v63; // r0@59
  int v64; // r5@60
  int v65; // r1@61
  _DWORD *v66; // r4@62
  unsigned int v67; // r1@63
  unsigned int *v68; // r0@63
  unsigned int v69; // r2@66
  unsigned int v70; // r3@67
  signed int v71; // r1@68
  int v72; // r4@71
  unsigned int *v73; // r1@73
  unsigned int v74; // r0@75
  int v75; // r5@79
  unsigned int *v76; // r4@79
  unsigned int v77; // r0@81
  int v78; // r5@86
  unsigned int *v79; // r1@87
  unsigned int v80; // r0@89
  int v81; // r7@93
  unsigned int *v82; // r4@93
  unsigned int v83; // r0@95
  int v84; // r0@103
  UIControl *v85; // r9@103
  unsigned int *v86; // r2@106
  unsigned int v87; // r1@108
  unsigned int *v88; // r0@115
  unsigned int v89; // r1@117
  int v90; // r9@119
  _DWORD *v91; // r6@121
  int v92; // r4@121
  unsigned int *v93; // r1@122
  unsigned int v94; // r0@124
  unsigned int *v95; // r5@128
  unsigned int v96; // r0@130
  UIControl *v98; // r0@137
  unsigned int *v100; // r1@141
  unsigned int v101; // r6@143
  unsigned int *v102; // r5@147
  unsigned int v103; // r3@149
  int v104; // r6@154
  unsigned int *v105; // r1@155
  unsigned int v106; // r0@157
  unsigned int *v107; // r5@161
  unsigned int v108; // r0@163
  __int64 v109; // r6@168
  int v110; // r4@169
  unsigned int *v111; // r1@170
  unsigned int v112; // r0@172
  unsigned int *v113; // r5@176
  unsigned int v114; // r0@178
  int v115; // r7@187
  unsigned int *v116; // r1@189
  unsigned int v117; // r0@191
  _DWORD *v118; // r0@195
  unsigned int *v119; // r4@195
  int v120; // t1@195
  _DWORD *v121; // r5@195
  unsigned int v122; // r0@197
  int v123; // r4@205
  int v124; // r12@205
  unsigned int *v125; // r0@207
  unsigned int v126; // r1@209
  unsigned int *v127; // r4@213
  unsigned int v128; // r0@215
  int v129; // r4@220
  unsigned int *v130; // r1@221
  unsigned int v131; // r0@223
  unsigned int *v132; // r5@227
  unsigned int v133; // r0@229
  unsigned int *v134; // r1@235
  unsigned int v135; // r0@237
  unsigned int *v136; // r4@241
  unsigned int v137; // r3@243
  int v138; // r0@246
  void (__fastcall *v139)(int); // r1@247
  unsigned int *v140; // r1@250
  unsigned int v141; // r0@252
  unsigned int *v142; // r5@256
  unsigned int v143; // r0@258
  void (__fastcall *v144)(int); // r1@262
  int v145; // r0@262
  int v146; // r4@262
  int v147; // r4@265
  int v148; // r6@267
  int v149; // r8@267
  int v150; // r0@267
  unsigned int *v151; // r1@268
  unsigned int v152; // r5@270
  int v153; // r5@274
  unsigned int *v154; // r4@274
  unsigned int v155; // r3@276
  int v156; // r4@281
  unsigned int *v157; // r1@282
  unsigned int v158; // r0@284
  unsigned int *v159; // r5@288
  unsigned int v160; // r0@290
  __int64 v161; // kr28_8@296
  int v162; // r1@296
  int v163; // r2@296
  int v164; // r3@301
  unsigned int *v165; // r1@309
  unsigned int v166; // r0@311
  unsigned int *v167; // r4@315
  unsigned int v168; // r0@317
  int v169; // r4@322
  unsigned int *v170; // r1@323
  unsigned int v171; // r0@325
  unsigned int *v172; // r5@329
  unsigned int v173; // r0@331
  unsigned int *v174; // r1@337
  unsigned int v175; // r0@339
  unsigned int *v176; // r4@343
  unsigned int v177; // r0@345
  unsigned int *v178; // r1@352
  unsigned int v179; // r0@354
  unsigned int *v180; // r4@358
  unsigned int v181; // r0@360
  _DWORD *v182; // [sp+8h] [bp-170h]@140
  int v183; // [sp+Ch] [bp-16Ch]@119
  unsigned __int64 *v184; // [sp+14h] [bp-164h]@50
  int *v185; // [sp+18h] [bp-160h]@47
  char *v186; // [sp+20h] [bp-158h]@19
  int v187; // [sp+24h] [bp-154h]@56
  int v188; // [sp+24h] [bp-154h]@154
  FocusManager *v189; // [sp+28h] [bp-150h]@50
  int v190; // [sp+34h] [bp-144h]@265
  int v191; // [sp+38h] [bp-140h]@267
  int v192; // [sp+3Ch] [bp-13Ch]@72
  int v193; // [sp+40h] [bp-138h]@72
  char v194; // [sp+44h] [bp-134h]@138
  int v195; // [sp+48h] [bp-130h]@140
  void *v196; // [sp+4Ch] [bp-12Ch]@135
  void (*v197)(void); // [sp+54h] [bp-124h]@135
  int (__fastcall *v198)(int, int); // [sp+58h] [bp-120h]@135
  void *ptr; // [sp+5Ch] [bp-11Ch]@135
  void *v200; // [sp+60h] [bp-118h]@168
  UIControl *v201; // [sp+68h] [bp-110h]@114
  _DWORD *v202; // [sp+6Ch] [bp-10Ch]@114
  char v203; // [sp+70h] [bp-108h]@114
  UIControl *v204; // [sp+ECh] [bp-8Ch]@62
  int v205; // [sp+F0h] [bp-88h]@62
  __int64 v206; // [sp+F4h] [bp-84h]@50
  int v207; // [sp+FCh] [bp-7Ch]@50
  int v208; // [sp+100h] [bp-78h]@50
  float v209; // [sp+104h] [bp-74h]@17
  float v210; // [sp+108h] [bp-70h]@17
  int v211; // [sp+10Ch] [bp-6Ch]@17
  char v212; // [sp+110h] [bp-68h]@19
  int v213; // [sp+114h] [bp-64h]@17
  int v214; // [sp+118h] [bp-60h]@17
  __int16 v215; // [sp+11Ch] [bp-5Ch]@44
  float v216; // [sp+120h] [bp-58h]@17
  int v217; // [sp+130h] [bp-48h]@17
  float v218; // [sp+134h] [bp-44h]@44
  int v219; // [sp+138h] [bp-40h]@44
  int v220; // [sp+13Ch] [bp-3Ch]@44

  v24 = this;
  v25 = (_QWORD *)a4;
  v26 = *((_DWORD *)this + 8);
  v27 = a3;
  v28 = a2;
  if ( v26 )
  {
    v29 = *(_DWORD *)(v26 + 4);
    v30 = (unsigned int *)(v26 + 4);
    while ( v29 )
    {
      __dmb();
      v31 = __ldrex(v30);
      if ( v31 == v29 )
      {
        v32 = __strex(v29 + 1, v30);
        v29 = v31;
        if ( !v32 )
        {
          __dmb();
          v33 = *v30;
          v34 = 0;
          if ( !v33 )
            v34 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v34 = 1;
  v26 = 0;
LABEL_11:
  v35 = *((_DWORD *)v24 + 7);
  if ( v34 )
    v35 = 0;
  _ZF = v27 == 0;
  if ( !v27 )
    LOBYTE(v34) = *((_BYTE *)v24 + 20);
    _ZF = (v34 & 1) == 0;
  if ( _ZF )
    goto LABEL_21;
  if ( !v35 )
LABEL_21:
    if ( v34 & 1 )
      FocusManager::_setFocusControlFromIndex(v24, *((_DWORD *)v24 + 6));
    goto LABEL_351;
  v209 = 0.0;
  v210 = 0.0;
  v211 = 1056964608;
  v213 = 0;
  v214 = 0;
  RectangleArea::RectangleArea((RectangleArea *)&v216);
  RectangleArea::RectangleArea((RectangleArea *)&v217);
  _R0 = UIControl::getSize((UIControl *)v35);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VMUL.F32        S16, S4, S0
    VMUL.F32        S18, S2, S0
    v41 = &v213;
    *(_QWORD *)&v209 = *v25;
    v186 = &v212;
    v42 = 0;
    v212 = v28;
    v43 = 0;
  else
    _R0 = UIControl::getPosition((UIControl *)v35);
    __asm { VLDR            S0, [R0] }
    __asm
      VLDR            S2, [R0,#4]
      VADD.F32        S0, S0, S18
      VADD.F32        S2, S2, S16
      VSTR            S0, [SP,#0x178+var_74]
      VSTR            S2, [SP,#0x178+var_70]
    if ( !_ZF )
      if ( &pthread_create )
        v45 = (unsigned int *)(v26 + 4);
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 + 1, v45) );
        ++*(_DWORD *)(v26 + 4);
    v42 = v26;
    v43 = v35;
  *v41 = v43;
  v47 = v214;
  v214 = v42;
  if ( v47 )
    v48 = (unsigned int *)(v47 + 4);
    if ( &pthread_create )
      do
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
    else
      v49 = (*v48)--;
    if ( v49 == 1 )
      v50 = (unsigned int *)(v47 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  v217 = 0;
  v218 = *(float *)v24;
  v219 = 0;
  v220 = *((_DWORD *)v24 + 1);
    VLDR            S0, [SP,#0x178+var_74]
    VSUB.F32        S2, S0, S18
    VADD.F32        S0, S0, S18
    VSTR            S2, [SP,#0x178+var_58]
    VSTR            S0, [SP,#0x178+var_54]
    VLDR            S0, [SP,#0x178+var_70]
    VSUB.F32        S2, S0, S16
    VADD.F32        S0, S0, S16
    VSTR            S2, [SP,#0x178+var_50]
    VSTR            S0, [SP,#0x178+var_4C]
  v215 = 257;
  v52 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v52 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  v185 = v41;
  v53 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v35, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v54 = *(FocusComponent **)(*(_DWORD *)(v35 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v35, v53));
    if ( v54 )
      LOBYTE(v215) = FocusComponent::getFocusWrapEnabled(v54);
  UIControl::getParent((UIControl *)&v207, v35);
  v55 = v208;
  v56 = v207;
  v207 = 0;
  v208 = 0;
  v184 = (unsigned __int64 *)((char *)v24 + 8);
  v189 = v24;
  FocusManager::_sweepForControlFocusOverride((int)&v206, (int)v24, (int)&v209, (unsigned __int64 *)v24 + 1, 0);
  v57 = v206;
  v206 = 0LL;
  if ( (_DWORD)v57 )
    FocusManager::setFocusControl(v24, (const UIControl *)v57);
    if ( v55 )
      v58 = (unsigned int *)(v55 + 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        v127 = (unsigned int *)(v55 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 8))(v55);
        if ( &pthread_create )
          do
            v128 = __ldrex(v127);
          while ( __strex(v128 - 1, v127) );
        else
          v128 = (*v127)--;
        if ( v128 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 12))(v55);
    v129 = v214;
    if ( v214 )
      v130 = (unsigned int *)(v214 + 4);
          v131 = __ldrex(v130);
        while ( __strex(v131 - 1, v130) );
        v131 = (*v130)--;
      if ( v131 == 1 )
        v132 = (unsigned int *)(v129 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v129 + 8))(v129);
            v133 = __ldrex(v132);
          while ( __strex(v133 - 1, v132) );
          v133 = (*v132)--;
        if ( v133 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v129 + 12))(v129);
    if ( HIDWORD(v57) )
      v134 = (unsigned int *)(HIDWORD(v57) + 4);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 == 1 )
        v136 = (unsigned int *)(HIDWORD(v57) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v57) + 8))(HIDWORD(v57));
            v137 = __ldrex(v136);
          while ( __strex(v137 - 1, v136) );
          v137 = (*v136)--;
        v138 = HIDWORD(v57);
        if ( v137 == 1 )
          v139 = *(void (__fastcall **)(int))(*(_DWORD *)HIDWORD(v57) + 12);
LABEL_350:
          v139(v138);
          goto LABEL_351;
  v187 = HIDWORD(v57);
  v60 = v55;
  v61 = &`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  while ( 1 )
    v115 = v60;
    if ( !v56 )
      break;
    v62 = *(_BYTE *)v61;
    __dmb();
    if ( !(v62 & 1) && j___cxa_guard_acquire(v61) )
      v63 = typeid_t<UIComponent>::count[0]++;
      type_id<UIComponent,ScrollViewComponent>(void)::id[0] = v63;
      j___cxa_guard_release(v61);
    v64 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v56, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1
      && (v65 = *(_DWORD *)(*(_DWORD *)(v56 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v56, v64))) != 0
      && (ScrollViewComponent::getScrollContent((ScrollViewComponent *)&v204, v65), (v66 = (_DWORD *)v205) != 0) )
      v67 = *(_DWORD *)(v205 + 4);
      v68 = (unsigned int *)(v205 + 4);
        while ( 1 )
          if ( !v67 )
          {
            v71 = 1;
            v66 = 0;
            goto LABEL_103;
          }
          v69 = __ldrex(v68);
          if ( v69 == v67 )
            break;
          __clrex();
          v67 = v69;
        v70 = __strex(v67 + 1, v68);
        v67 = v69;
      while ( v70 );
      v71 = 0;
      if ( !*v68 )
        v71 = 1;
LABEL_103:
      v84 = v205;
      v85 = v204;
      if ( v71 )
        v85 = 0;
      if ( v205 )
        v86 = (unsigned int *)(v205 + 8);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 == 1 )
          (*(void (**)(void))(*(_DWORD *)v84 + 12))();
      if ( v85 )
        VisualTree::VisualTree((VisualTree *)&v203);
        v201 = v85;
        v202 = v66;
        if ( v66 )
          v88 = v66 + 1;
          if ( &pthread_create )
            __dmb();
            do
              v89 = __ldrex(v88);
            while ( __strex(v89 + 1, v88) );
          else
            ++*v88;
        VisualTree::initRootControl((int)&v203, (int)&v201);
        v91 = v66;
        v92 = (int)v202;
        if ( v202 )
          v93 = v202 + 1;
              v94 = __ldrex(v93);
            while ( __strex(v94 - 1, v93) );
            v94 = (*v93)--;
          if ( v94 == 1 )
            v95 = (unsigned int *)(v92 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
            if ( &pthread_create )
            {
              __dmb();
              do
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
            }
            else
              v96 = (*v95)--;
            if ( v96 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
        v197 = 0;
        v196 = operator new(1u);
        v198 = sub_CC3158;
        v197 = (void (*)(void))sub_CC31E0;
        VisualTree::getVisibleControls((int)&ptr, (int)&v203, (int)&v196);
        if ( v197 )
          v197();
        v215 = 0;
        _R5 = UIControl::getSize(v85);
        v98 = UIControl::getPosition(v85);
        _R1 = *(_DWORD *)v98;
        v217 = _R1;
        __asm
          VLDR            S0, [R5]
          VMOV            S2, R1
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0x178+var_44]
        v219 = *((_DWORD *)v98 + 1);
          VLDR            S0, [R5,#4]
          VMOV            S2, R0
          VSTR            S0, [SP,#0x178+var_3C]
        if ( *v186 )
          FocusManager::_sweepForControlDirectional((int)&v194, (int)v189, (int)&v209, (int)&ptr, 0);
          FocusManager::_getControlAtFocusPoint((signed int)&v194, _R1, (int)&v209, (unsigned __int64 *)&ptr);
        v182 = v91;
        v90 = *(_DWORD *)&v194;
        v183 = v195;
        *(_DWORD *)&v194 = 0;
        v195 = 0;
        if ( v187 )
          v100 = (unsigned int *)(v187 + 4);
              v101 = __ldrex(v100);
            while ( __strex(v101 - 1, v100) );
            v101 = (*v100)--;
          if ( v101 == 1 )
            v102 = (unsigned int *)(v187 + 8);
            (*(void (**)(void))(*(_DWORD *)v187 + 8))();
                v103 = __ldrex(v102);
              while ( __strex(v103 - 1, v102) );
              v103 = (*v102)--;
            if ( v103 == 1 )
              (*(void (**)(void))(*(_DWORD *)v187 + 12))();
        v104 = v195;
        v188 = v115;
        if ( v195 )
          v105 = (unsigned int *)(v195 + 4);
              v106 = __ldrex(v105);
            while ( __strex(v106 - 1, v105) );
            v106 = (*v105)--;
          if ( v106 == 1 )
            v107 = (unsigned int *)(v104 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 8))(v104);
                v108 = __ldrex(v107);
              while ( __strex(v108 - 1, v107) );
              v108 = (*v107)--;
            if ( v108 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 12))(v104);
        v109 = *(_QWORD *)&ptr;
        if ( ptr != v200 )
            v110 = *(_DWORD *)(v109 + 4);
            if ( v110 )
              v111 = (unsigned int *)(v110 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v112 = __ldrex(v111);
                while ( __strex(v112 - 1, v111) );
              }
              else
                v112 = (*v111)--;
              if ( v112 == 1 )
                v113 = (unsigned int *)(v110 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 8))(v110);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v114 = __ldrex(v113);
                  while ( __strex(v114 - 1, v113) );
                }
                else
                  v114 = (*v113)--;
                if ( v114 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 12))(v110);
            LODWORD(v109) = v109 + 8;
          while ( (_DWORD)v109 != HIDWORD(v109) );
          LODWORD(v109) = ptr;
        if ( (_DWORD)v109 )
          operator delete((void *)v109);
        VisualTree::~VisualTree((VisualTree *)&v203);
        v115 = v188;
        v66 = v182;
        v90 = 0;
        v183 = v187;
      v61 = &`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
      if ( !v66 )
        goto LABEL_367;
      v116 = v66 + 1;
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 == 1 )
        v118 = v66;
        v120 = *v66;
        v119 = v66 + 2;
        v121 = v118;
        (*(void (**)(void))(v120 + 8))();
            v122 = __ldrex(v119);
          while ( __strex(v122 - 1, v119) );
          v122 = (*v119)--;
        v72 = v90;
        if ( v122 == 1 )
          (*(void (**)(void))(*v121 + 12))();
        v187 = v183;
LABEL_367:
      v72 = 0;
    UIControl::getParent((UIControl *)&v192, v56);
    v60 = v193;
    v56 = v192;
    v192 = 0;
    v193 = 0;
    if ( v115 )
      v73 = (unsigned int *)(v115 + 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        v75 = v72;
        v76 = (unsigned int *)(v115 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 8))(v115);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
          v77 = (*v76)--;
        v72 = v75;
        if ( v77 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 12))(v115);
    v78 = v193;
    if ( v193 )
      v79 = (unsigned int *)(v193 + 4);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 == 1 )
        v81 = v72;
        v82 = (unsigned int *)(v78 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 8))(v78);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        v72 = v81;
        if ( v83 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 12))(v78);
    if ( v72 )
      goto LABEL_296;
  *v185 = v35;
  v123 = v214;
  v124 = v187;
  if ( v26 != v214 )
    if ( v26 )
      v125 = (unsigned int *)(v26 + 4);
          v126 = __ldrex(v125);
        while ( __strex(v126 + 1, v125) );
        v123 = v214;
        ++*v125;
    if ( v123 )
      v140 = (unsigned int *)(v123 + 4);
          v141 = __ldrex(v140);
        while ( __strex(v141 - 1, v140) );
        v141 = (*v140)--;
      if ( v141 == 1 )
        v142 = (unsigned int *)(v123 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v123 + 8))(v123);
          v124 = v187;
            v143 = __ldrex(v142);
          while ( __strex(v143 - 1, v142) );
          v143 = *v142;
          --*v142;
        if ( v143 == 1 )
          v144 = *(void (__fastcall **)(int))(*(_DWORD *)v123 + 12);
          v145 = v123;
          v146 = v124;
          v144(v145);
          v124 = v146;
    v214 = v26;
  v218 = *(float *)v189;
  v220 = *((_DWORD *)v189 + 1);
  HIBYTE(v215) = 1;
  if ( *v186 )
    v147 = v124;
    FocusManager::_sweepForControlDirectional((int)&v190, (int)v189, (int)&v209, (int)v184, 0);
    FocusManager::_getControlAtFocusPoint((signed int)&v190, (unsigned __int8)*v186, (int)&v209, v184);
  v148 = v191;
  v149 = v190;
  v190 = 0;
  v191 = 0;
  v150 = v147;
  if ( v147 )
    v151 = (unsigned int *)(v147 + 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 == 1 )
      v153 = v147;
      v154 = (unsigned int *)(v147 + 8);
      (*(void (**)(void))(*(_DWORD *)v150 + 8))();
          v155 = __ldrex(v154);
        while ( __strex(v155 - 1, v154) );
        v155 = (*v154)--;
      if ( v155 == 1 )
        (*(void (**)(void))(*(_DWORD *)v153 + 12))();
  v156 = v191;
  if ( v191 )
    v157 = (unsigned int *)(v191 + 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 == 1 )
      v159 = (unsigned int *)(v156 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v156 + 8))(v156);
          v160 = __ldrex(v159);
        while ( __strex(v160 - 1, v159) );
        v160 = (*v159)--;
      if ( v160 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v156 + 12))(v156);
  v72 = v149;
  v187 = v148;
  if ( v149 )
LABEL_296:
    v148 = v187;
    v161 = *((_QWORD *)v189 + 1);
    v162 = *((_DWORD *)v189 + 6);
    v163 = (HIDWORD(v161) - (signed int)v161) >> 3;
    if ( v162 >= v163 )
      if ( !v163 )
LABEL_307:
        FocusManager::_setFocusControlFromIndex(v189, v162);
        goto LABEL_308;
    else if ( !v163 || *(_DWORD *)(v161 + 8 * v162) == v72 )
      goto LABEL_307;
    v164 = 0;
    while ( *(_DWORD *)(v161 + 8 * v164) != v72 )
      if ( ++v164 >= (unsigned int)v163 )
        goto LABEL_306;
    v162 = v164;
LABEL_306:
    goto LABEL_307;
LABEL_308:
  if ( v115 )
    v165 = (unsigned int *)(v115 + 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 == 1 )
      v167 = (unsigned int *)(v115 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 8))(v115);
          v168 = __ldrex(v167);
        while ( __strex(v168 - 1, v167) );
        v168 = (*v167)--;
      if ( v168 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 12))(v115);
  v169 = v214;
  if ( v214 )
    v170 = (unsigned int *)(v214 + 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 == 1 )
      v172 = (unsigned int *)(v169 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 8))(v169);
          v173 = __ldrex(v172);
        while ( __strex(v173 - 1, v172) );
        v173 = (*v172)--;
      if ( v173 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 12))(v169);
  if ( v148 )
    v174 = (unsigned int *)(v148 + 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 == 1 )
      v176 = (unsigned int *)(v148 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v148 + 8))(v148);
          v177 = __ldrex(v176);
        while ( __strex(v177 - 1, v176) );
        v177 = (*v176)--;
      if ( v177 == 1 )
        v139 = *(void (__fastcall **)(int))(*(_DWORD *)v148 + 12);
        v138 = v148;
        goto LABEL_350;
LABEL_351:
    v178 = (unsigned int *)(v26 + 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 == 1 )
      v180 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v181 = __ldrex(v180);
        while ( __strex(v181 - 1, v180) );
        v181 = (*v180)--;
      if ( v181 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
}


int __fastcall FocusManager::_findFocusControlIndex(FocusManager *this, const UIControl *a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@1
  int v4; // r12@1
  int v5; // r3@4

  v2 = *((_QWORD *)this + 1);
  result = *((_DWORD *)this + 6);
  v4 = (HIDWORD(v2) - (signed int)v2) >> 3;
  if ( (result >= v4 || *(const UIControl **)(v2 + 8 * result) != a2) && v4 )
  {
    v5 = 0;
    while ( *(const UIControl **)(v2 + 8 * HIDWORD(v2)) != a2 )
    {
      if ( ++v5 >= (unsigned int)v4 )
        return result;
    }
    result = v5;
  }
  return result;
}
