

int __fastcall AnimationComponent::collectScreenEvents(int a1, int a2, unsigned int a3)
{
  int v3; // r8@1
  unsigned int v4; // r9@1
  unsigned int v5; // r5@1
  int result; // r0@1
  int v7; // r7@3
  __int64 v8; // r0@4
  int v9; // r3@5
  int v10; // r4@5
  int v11; // r6@5
  int v12; // r0@5
  int v13; // r3@5
  int v14; // r4@5
  int v15; // r6@5

  v3 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 20);
  result = (*(_QWORD *)(a1 + 20) >> 32) - v5;
  if ( result >> 5 )
  {
    if ( result >= 1 )
    {
      v7 = (result >> 5) + 1;
      do
      {
        v8 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v8 == HIDWORD(v8) )
        {
          result = (int)std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent>(__PAIR__(v5, v4));
        }
        else
          v9 = *(_DWORD *)(v5 + 4);
          v10 = *(_DWORD *)(v5 + 8);
          v11 = *(_DWORD *)(v5 + 12);
          *(_DWORD *)v8 = *(_DWORD *)v5;
          *(_DWORD *)(v8 + 4) = v9;
          *(_DWORD *)(v8 + 8) = v10;
          *(_DWORD *)(v8 + 12) = v11;
          v12 = v8 + 16;
          v13 = *(_DWORD *)(v5 + 20);
          v14 = *(_DWORD *)(v5 + 24);
          v15 = *(_DWORD *)(v5 + 28);
          *(_DWORD *)v12 = *(_DWORD *)(v5 + 16);
          *(_DWORD *)(v12 + 4) = v13;
          *(_DWORD *)(v12 + 8) = v14;
          *(_DWORD *)(v12 + 12) = v15;
          result = *(_DWORD *)(v4 + 4) + 32;
          *(_DWORD *)(v4 + 4) = result;
        --v7;
        v5 += 32;
      }
      while ( v7 > 1 );
      v5 = *(_DWORD *)(v3 + 20);
    }
    *(_DWORD *)(v3 + 24) = v5;
  }
  return result;
}


UIComponent *__fastcall AnimationComponent::AnimationComponent(UIComponent *a1, UIControl *a2, int a3)
{
  int v3; // r5@1
  UIComponent *v4; // r4@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4

  v3 = a3;
  v4 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v4 = &off_26DFCFC;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 8) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v3 + 4);
  *((_DWORD *)v4 + 9) = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
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
  *((_BYTE *)v4 + 40) = 0;
  sub_119D43C((_QWORD *)v4 + 6);
  *((_WORD *)v4 + 28) = 1;
  return v4;
}


int __fastcall AnimationComponent::addAnimation(int a1, int a2, const UIResolvedDef *a3, NameRegistry *a4)
{
  NameRegistry *v4; // r5@1
  const UIResolvedDef *v5; // r6@1
  int v6; // r4@1
  UIAnimAlpha *v7; // r7@2
  AnimationComponent *v8; // r1@2
  UIAnimAlpha **v9; // r0@2
  _DWORD *v10; // r5@2
  UIAnimClip *v11; // r7@5
  AnimationComponent *v12; // r1@5
  UIAnimClip **v13; // r0@5
  UIAnimColor *v14; // r7@7
  AnimationComponent *v15; // r1@7
  UIAnimColor **v16; // r0@7
  UIAnimFlipbook *v17; // r7@9
  AnimationComponent *v18; // r1@9
  UIAnimFlipbook **v19; // r0@9
  void *v20; // r7@11
  int v21; // r1@11
  _DWORD *v22; // r0@11
  void *v23; // r7@13
  int v24; // r1@13
  _DWORD *v25; // r0@13
  UIAnimUV *v26; // r7@15
  AnimationComponent *v27; // r1@15
  UIAnimUV **v28; // r0@15
  void *v29; // r7@17
  int v30; // r2@17
  _DWORD *v31; // r0@17
  void *v33; // [sp+4h] [bp-34h]@17
  UIAnimUV *v34; // [sp+8h] [bp-30h]@15
  void *v35; // [sp+Ch] [bp-2Ch]@13
  void *v36; // [sp+10h] [bp-28h]@11
  UIAnimFlipbook *v37; // [sp+14h] [bp-24h]@9
  UIAnimColor *v38; // [sp+18h] [bp-20h]@7
  UIAnimClip *v39; // [sp+1Ch] [bp-1Ch]@5
  UIAnimAlpha *v40; // [sp+20h] [bp-18h]@2

  v4 = a4;
  v5 = a3;
  v6 = a1;
  switch ( a2 )
  {
    case 0:
      v7 = (UIAnimAlpha *)operator new(0x3Cu);
      UIAnimAlpha::UIAnimAlpha(v7, v8, v5, v4);
      v40 = v7;
      v10 = (_DWORD *)(v6 + 12);
      v9 = *(UIAnimAlpha ***)(v6 + 12);
      if ( v9 == *(UIAnimAlpha ***)(v6 + 16) )
      {
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimAlpha,std::default_delete<UIAnimAlpha>>>(
          (_QWORD *)(v6 + 8),
          (int *)&v40);
        if ( v40 )
          (*(void (**)(void))(*(_DWORD *)v40 + 4))();
      }
      else
        v40 = 0;
        *v9 = v7;
        *v10 = v9 + 1;
      v40 = 0;
      break;
    case 1:
      v11 = (UIAnimClip *)operator new(0x3Cu);
      UIAnimClip::UIAnimClip(v11, v12, v5, v4);
      v39 = v11;
      v13 = *(UIAnimClip ***)(v6 + 12);
      if ( v13 == *(UIAnimClip ***)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimClip,std::default_delete<UIAnimClip>>>(
          (int *)&v39);
        if ( v39 )
          (*(void (**)(void))(*(_DWORD *)v39 + 4))();
        v39 = 0;
        *v13 = v11;
        *v10 = v13 + 1;
      v39 = 0;
    case 2:
      v14 = (UIAnimColor *)operator new(0x54u);
      UIAnimColor::UIAnimColor(v14, v15, v5, v4);
      v38 = v14;
      v16 = *(UIAnimColor ***)(v6 + 12);
      if ( v16 == *(UIAnimColor ***)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimColor,std::default_delete<UIAnimColor>>>(
          (int *)&v38);
        if ( v38 )
          (*(void (**)(void))(*(_DWORD *)v38 + 4))();
        v38 = 0;
        *v16 = v14;
        *v10 = v16 + 1;
      v38 = 0;
    case 3:
      v17 = (UIAnimFlipbook *)operator new(0x4Cu);
      UIAnimFlipbook::UIAnimFlipbook(v17, v18, v5, v4);
      v37 = v17;
      v19 = *(UIAnimFlipbook ***)(v6 + 12);
      if ( v19 == *(UIAnimFlipbook ***)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimFlipbook,std::default_delete<UIAnimFlipbook>>>(
          (int *)&v37);
        if ( v37 )
          (*(void (**)(void))(*(_DWORD *)v37 + 4))();
        v37 = 0;
        *v19 = v17;
        *v10 = v19 + 1;
      v37 = 0;
    case 4:
      v20 = operator new(0x98u);
      UIAnimLayout::UIAnimLayout((int)v20, v21, (int)v5, (unsigned __int64 *)v4, 0);
      v36 = v20;
      v22 = *(_DWORD **)(v6 + 12);
      if ( v22 == *(_DWORD **)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimLayout,std::default_delete<UIAnimLayout>>>(
          (int *)&v36);
        if ( v36 )
          (*(void (**)(void))(*(_DWORD *)v36 + 4))();
        v36 = 0;
        *v22 = v20;
        *v10 = v22 + 1;
      v36 = 0;
    case 5:
      v23 = operator new(0x98u);
      UIAnimLayout::UIAnimLayout((int)v23, v24, (int)v5, (unsigned __int64 *)v4, 1);
      v35 = v23;
      v25 = *(_DWORD **)(v6 + 12);
      if ( v25 == *(_DWORD **)(v6 + 16) )
          (int *)&v35);
        if ( v35 )
          (*(void (**)(void))(*(_DWORD *)v35 + 4))();
        v35 = 0;
        *v25 = v23;
        *v10 = v25 + 1;
      v35 = 0;
    case 6:
      v26 = (UIAnimUV *)operator new(0x44u);
      UIAnimUV::UIAnimUV(v26, v27, v5, v4);
      v34 = v26;
      v28 = *(UIAnimUV ***)(v6 + 12);
      if ( v28 == *(UIAnimUV ***)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnimUV,std::default_delete<UIAnimUV>>>(
          (int *)&v34);
        if ( v34 )
          (*(void (**)(void))(*(_DWORD *)v34 + 4))();
        v34 = 0;
        *v28 = v26;
        *v10 = v28 + 1;
      v34 = 0;
    case 7:
      v29 = operator new(0x34u);
      UIAnim::UIAnim((int)v29, 7, v30, (int)v5, (unsigned __int64 *)v4);
      v33 = v29;
      v31 = *(_DWORD **)(v6 + 12);
      if ( v31 == *(_DWORD **)(v6 + 16) )
        std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>(
          (int *)&v33);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        v33 = 0;
        *v31 = v29;
        *v10 = v31 + 1;
      v33 = 0;
    default:
      v10 = (_DWORD *)(a1 + 12);
  }
  return *(_DWORD *)(*v10 - 4);
}


int __fastcall AnimationComponent::updateProperties(int result)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int v3; // t1@2

  for ( *(_QWORD *)&v1 = *(_QWORD *)(result + 8); v2 != v1; result = (*(int (**)(void))(*(_DWORD *)v3 + 20))() )
  {
    v3 = *v1;
    ++v1;
  }
  return result;
}


signed int __fastcall AnimationComponent::reset(AnimationComponent *this)
{
  AnimationComponent *v1; // r4@1
  signed int result; // r0@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = this;
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 6) = *((_DWORD *)this + 5);
  sub_119D43C(&v3);
  *((_QWORD *)v1 + 6) = *(_QWORD *)&v3;
  result = 1;
  *((_BYTE *)v1 + 56) = 1;
  return result;
}


int __fastcall AnimationComponent::disableFastForward(int result, bool a2)
{
  *(_BYTE *)(result + 57) = a2;
  return result;
}


int __fastcall AnimationComponent::_animationTick(int a1, int _R1)
{
  int v5; // r9@1
  unsigned int v6; // r2@4
  unsigned int v7; // r0@4
  __int64 v8; // r0@6
  signed int v11; // r6@10
  int *v12; // r10@10
  int v13; // r0@14
  int v14; // r2@14
  signed int v15; // r11@14
  int *v16; // r1@17
  int v17; // r0@17
  signed int v18; // r2@18
  int v19; // r6@19
  int *v20; // r7@19
  int v21; // r1@20
  int v22; // r0@20
  _DWORD *v23; // r6@24
  int v24; // r0@24
  __int64 v25; // kr00_8@28
  void *v26; // r11@31
  int v27; // r10@33
  _DWORD *v28; // r5@33
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  int *v31; // r0@42
  int v33; // r5@46
  UIControl *v34; // r0@46
  int v35; // r0@46
  int v36; // r5@46
  void *v38; // r4@49
  int v39; // r0@52
  int v40; // r1@52
  int v41; // r2@52
  int v42; // r2@53
  int v43; // r11@54
  int v45; // r3@57
  bool v46; // zf@57
  int v47; // r2@62
  signed int v48; // r1@76
  int v49; // r5@77
  int v50; // r1@78
  int v51; // r0@78
  _DWORD *v52; // r5@82
  int v53; // r0@82
  _DWORD *v54; // r5@88
  unsigned int *v55; // r2@91
  signed int v56; // r1@93
  int *v57; // r0@99
  void *v58; // r4@107
  int v59; // r6@107
  int v60; // r10@107
  unsigned int *v61; // r2@109
  signed int v62; // r1@111
  int *v63; // r0@117
  signed int v65; // [sp+0h] [bp-48h]@27
  _BYTE *v66; // [sp+8h] [bp-40h]@10
  _BYTE *v67; // [sp+Ch] [bp-3Ch]@10
  int v68; // [sp+10h] [bp-38h]@10

  __asm { VLDR            S2, [R1,#8] }
  v5 = a1;
  __asm
  {
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S16, [R1]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
  if ( *(_BYTE *)(_R1 + 16) )
    v6 = *(_WORD *)(a1 + 56);
    v7 = v6 >> 8;
    if ( !(_BYTE)v6 || v7 )
    {
      if ( !v7 )
        __asm { VMOVEQ.F32      S0, S16 }
    }
    else
      v8 = *(_QWORD *)(v5 + 48) - *(_QWORD *)(_R1 + 24);
      _R0 = _aeabi_l2f(v8, HIDWORD(v8));
      __asm
      {
        VLDR            S0, =-1.0e-9
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S16, S0
      }
  else
    __asm { VMOV.F32        S0, S16 }
  __asm { VMOV            R5, S0 }
  *(_BYTE *)(v5 + 56) = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v11 = 0;
  v12 = *(int **)(v5 + 8);
def_1101D4C:
  while ( v12 != *(int **)(v5 + 12) )
    if ( *(_DWORD *)(*v12 + 28) )
      ++v12;
      v13 = AnimationComponent::_tickUIAnim((UIComponent *)v5, *v12, (int)&v66, _R5);
      v14 = 2;
      v15 = 1;
      switch ( v13 )
        case 0:
          ++v12;
          v11 = 1;
          goto def_1101D4C;
        case 2:
          v15 = v11;
          goto LABEL_17;
        case 1:
LABEL_17:
          v16 = *(int **)(v5 + 12);
          v17 = (int)(v12 + 1);
          if ( v12 + 1 != v16 )
          {
            v18 = (signed int)v16 - v17;
            v17 = *(_DWORD *)(v5 + 12);
            if ( v18 >= 1 )
            {
              v19 = (v18 >> 2) + 1;
              v20 = v12;
              do
              {
                v21 = v20[1];
                v20[1] = 0;
                v22 = *v20;
                *v20 = v21;
                if ( v22 )
                  (*(void (**)(void))(*(_DWORD *)v22 + 4))();
                --v19;
                ++v20;
              }
              while ( v19 > 1 );
              v17 = *(_DWORD *)(v5 + 12);
            }
          }
          v23 = (_DWORD *)(v17 - 4);
          *(_DWORD *)(v5 + 12) = v17 - 4;
          v24 = *(_DWORD *)(v17 - 4);
          if ( v24 )
            (*(void (**)(void))(*(_DWORD *)v24 + 4))();
          *v23 = 0;
          v11 = v15;
        case 3:
          goto LABEL_107;
        default:
  v65 = v11;
  while ( 1 )
    v25 = *(_QWORD *)&v66;
    if ( v66 == v67 )
      break;
    if ( v67 == v66 )
      v26 = 0;
      if ( (unsigned int)(-1431655765 * ((v67 - v66) >> 2)) >= 0x15555556 )
        sub_119C874();
      v26 = operator new(v67 - v66);
    v27 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<AnimationComponent::NewAnimation const*,std::vector<AnimationComponent::NewAnimation,std::allocator<AnimationComponent::NewAnimation>>>,AnimationComponent::NewAnimation*>(
            v25,
            SHIDWORD(v25),
            (int)v26);
    v28 = (_DWORD *)v25;
    do
      v31 = (int *)(*v28 - 12);
      if ( v31 != &dword_28898C0 )
        v29 = (unsigned int *)(*v28 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v31);
      v28 += 3;
    while ( v28 != (_DWORD *)HIDWORD(v25) );
    v67 = (_BYTE *)v25;
    if ( v26 == (void *)v27 )
      v38 = v26;
      v26 = (void *)1;
      _R6 = (int *)v26;
      do
        v33 = *(_DWORD *)(v5 + 32);
        v34 = (UIControl *)UIComponent::getOwner((UIComponent *)v5);
        v35 = UIControlFactory::addAnimRefToControl(v33, v34, _R6);
        v36 = v35;
        if ( v35 )
          if ( !*(_DWORD *)(v35 + 28) )
            __asm
              VLDR            S0, [R6,#4]
              VLDR            S2, [R6,#8]
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( !(_NF ^ _VF) )
              __asm
                VSUB.F32        S0, S2, S0
                VMOV            R3, S0
              v38 = v26;
              v26 = 0;
              switch ( AnimationComponent::_tickUIAnim((UIComponent *)v5, v35, (int)&v66, _R3) )
                case 0:
                  v65 = 1;
                  goto LABEL_85;
                case 1:
                  goto LABEL_52;
                case 2:
LABEL_52:
                  v39 = *(_QWORD *)(v5 + 8) >> 32;
                  v40 = *(_QWORD *)(v5 + 8);
                  v41 = (v39 - v40) >> 4;
                  if ( v41 < 1 )
                    goto LABEL_61;
                  v42 = v41 + 1;
                  break;
                case 3:
                  goto LABEL_88;
                default:
                  goto def_1101EBA;
              while ( 1 )
                v43 = v40;
                _ZF = *(_DWORD *)v40 == v36;
                if ( *(_DWORD *)v40 != v36 )
                {
                  v43 = v40 + 4;
                  _ZF = *(_DWORD *)(v40 + 4) == v36;
                }
                if ( _ZF )
                v43 = v40 + 8;
                v45 = *(_DWORD *)(v40 + 8);
                v46 = v45 == v36;
                if ( v45 != v36 )
                  v43 = v40 + 12;
                  v46 = *(_DWORD *)(v40 + 12) == v36;
                if ( v46 )
                --v42;
                v40 += 16;
                if ( v42 <= 1 )
LABEL_61:
                  if ( 1 == (v39 - v40) >> 2 )
                  {
                    v43 = v40;
                  }
                  else
                    v47 = (v39 - v40) >> 2;
                    if ( v47 == 2 )
                    {
                      v43 = v40;
                    }
                    else
                      if ( v47 != 3 )
                      {
                        v43 = *(_QWORD *)(v5 + 8) >> 32;
                        break;
                      }
                      if ( *(_DWORD *)v40 == v36 )
                      v43 = v40 + 4;
                    if ( *(_DWORD *)v43 == v36 )
                      break;
                    v43 += 4;
                  if ( *(_DWORD *)v43 != v36 )
                    v43 = *(_QWORD *)(v5 + 8) >> 32;
              if ( v43 != v39 )
                if ( v43 + 4 != v39 )
                  v48 = v39 - (v43 + 4);
                  if ( v48 >= 1 )
                    v49 = (v48 >> 2) + 1;
                    do
                      v50 = *(_DWORD *)(v43 + 4);
                      *(_DWORD *)(v43 + 4) = 0;
                      v51 = *(_DWORD *)v43;
                      *(_DWORD *)v43 = v50;
                      if ( v51 )
                        (*(void (**)(void))(*(_DWORD *)v51 + 4))();
                      --v49;
                      v43 += 4;
                    while ( v49 > 1 );
                    v39 = *(_DWORD *)(v5 + 12);
                v52 = (_DWORD *)(v39 - 4);
                *(_DWORD *)(v5 + 12) = v39 - 4;
                v53 = *(_DWORD *)(v39 - 4);
                if ( v53 )
                  (*(void (**)(void))(*(_DWORD *)v53 + 4))();
                *v52 = 0;
LABEL_85:
              v26 = v38;
def_1101EBA:
        _R6 += 3;
      while ( _R6 != (int *)v27 );
LABEL_88:
      v54 = v38;
      if ( v38 != (void *)v27 )
        do
          v57 = (int *)(*v54 - 12);
          if ( v57 != &dword_28898C0 )
            v55 = (unsigned int *)(*v54 - 4);
            if ( &pthread_create )
              __dmb();
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
            else
              v56 = (*v55)--;
            if ( v56 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v57);
          v54 += 3;
        while ( v54 != (_DWORD *)v27 );
    if ( v38 )
      operator delete(v38);
    if ( !v26 )
      goto LABEL_107;
  *(_BYTE *)(v5 + 40) = v65 & 1;
  v14 = ~v65 & 1;
LABEL_107:
  v59 = (int)v67;
  v58 = v66;
  v60 = v14;
  if ( v66 != v67 )
      v63 = (int *)(*(_DWORD *)v58 - 12);
      if ( v63 != &dword_28898C0 )
        v61 = (unsigned int *)(*(_DWORD *)v58 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v63);
      v58 = (char *)v58 + 12;
    while ( v58 != (void *)v59 );
    v58 = v66;
  if ( v58 )
    operator delete(v58);
  return v60;
}


int __fastcall AnimationComponent::handleScreenEvent(AnimationComponent *this, AnimationController *a2, const ScreenEvent *a3)
{
  AnimationComponent *v3; // r9@1
  const ScreenEvent *v4; // r6@1
  int *v5; // r4@1
  int *v6; // r5@1
  AnimationController *i; // r8@1
  int v8; // r7@2
  int v9; // r1@2
  int v10; // r0@3
  __int64 v11; // r0@8

  v3 = this;
  v4 = a3;
  v5 = (int *)(*((_QWORD *)this + 1) >> 32);
  v6 = (int *)*((_QWORD *)this + 1);
  for ( i = a2; v5 != v6; ++v6 )
  {
    v8 = *v6;
    v9 = UIComponent::getOwner(v3);
    if ( *(_DWORD *)v4 == 1 )
    {
      v10 = *((_WORD *)v4 + 2);
      if ( v10 == *(_WORD *)(v8 + 34) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8);
      }
      else if ( v10 == *(_WORD *)(v8 + 36) )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 28))(v8, v9);
    }
  }
  LODWORD(v11) = *((_BYTE *)v3 + 40);
  if ( !*((_BYTE *)v3 + 40) )
    v11 = *((_QWORD *)v3 + 1);
    if ( (_DWORD)v11 != HIDWORD(v11) )
      while ( !*(_DWORD *)v11 || *(_DWORD *)(*(_DWORD *)v11 + 28) )
        LODWORD(v11) = v11 + 4;
        if ( HIDWORD(v11) == (_DWORD)v11 )
          return v11;
      AnimationController::addComponentAnimationCallback<ui::AnimationStatus (AnimationComponent::*)(mce::TimeStep const&),AnimationComponent>(
        (int)i,
        (int)AnimationComponent::_animationTick,
        0,
        v3,
        0);
      LODWORD(v11) = 1;
      *((_BYTE *)v3 + 40) = 1;
  return v11;
}


int __fastcall AnimationComponent::_tickUIAnim(UIComponent *this, int a2, int a3, int a4)
{
  int v4; // r5@1
  UIComponent *v5; // r6@1
  int v6; // r7@1
  int v7; // r9@1
  int (__fastcall *v8)(int, int, int); // r4@1
  int v9; // r0@1
  int result; // r0@2
  int v11; // r8@3
  int v12; // r10@3
  int v13; // r4@3
  __int64 v14; // r0@3 OVERLAPPED
  int v15; // r2@6
  __int64 v16; // r2@7
  int v17; // r4@7
  int v18; // r7@7
  int v19; // r4@7
  int v20; // r7@7
  int v21; // r0@10
  int *v22; // r5@12
  int v23; // t1@12
  __int64 v24; // r0@13
  int *v25; // r0@14
  int v26; // r1@14
  char *v27; // r0@17
  unsigned int *v28; // r2@19
  signed int v29; // r1@21
  char *v30; // [sp+4h] [bp-54h]@13
  int v31; // [sp+8h] [bp-50h]@13
  int v32; // [sp+Ch] [bp-4Ch]@13
  int v33; // [sp+10h] [bp-48h]@3
  __int16 v34; // [sp+14h] [bp-44h]@4

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 16);
  v9 = UIComponent::getOwner(this);
  if ( v8(v4, v9, v6) )
    return 0;
  v11 = *(_DWORD *)(v4 + 8);
  v12 = *(_DWORD *)(v4 + 40);
  v13 = *(_WORD *)(v4 + 32);
  LODWORD(v14) = ScreenEvent::ScreenEvent((ScreenEvent *)&v33);
  if ( v13 == 0xFFFF )
  {
    if ( !v33 )
      goto LABEL_9;
  }
  else
    v33 = 17;
    v34 = *(_WORD *)(v4 + 32);
  *(__int64 *)((char *)&v14 + 4) = *((_QWORD *)v5 + 3);
  if ( HIDWORD(v14) == v15 )
    LODWORD(v14) = (char *)v5 + 20;
    std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(v14);
    v16 = *(_QWORD *)v14;
    v17 = *(_DWORD *)(v14 + 8);
    v18 = *(_DWORD *)(v14 + 12);
    LODWORD(v14) = v14 + 16;
    *(_QWORD *)HIDWORD(v14) = v16;
    *(_DWORD *)(HIDWORD(v14) + 8) = v17;
    *(_DWORD *)(HIDWORD(v14) + 12) = v18;
    HIDWORD(v14) += 16;
    HIDWORD(v16) = *(_DWORD *)(v14 + 4);
    v19 = *(_DWORD *)(v14 + 8);
    v20 = *(_DWORD *)(v14 + 12);
    *(_DWORD *)HIDWORD(v14) = *(_DWORD *)v14;
    *(_DWORD *)(HIDWORD(v14) + 4) = HIDWORD(v16);
    *(_DWORD *)(HIDWORD(v14) + 8) = v19;
    *(_DWORD *)(HIDWORD(v14) + 12) = v20;
    *((_DWORD *)v5 + 6) += 32;
LABEL_9:
  if ( *(_DWORD *)(*(_DWORD *)(v4 + 48) - 12)
    && (v21 = UIComponent::getOwner(v5), UIControl::removeParentByName(v21, (const void **)(v4 + 48))) )
    result = 3;
    v23 = *(_DWORD *)(v4 + 44);
    v22 = (int *)(v4 + 44);
    if ( *(_DWORD *)(v23 - 12) )
    {
      v30 = (char *)&unk_28898CC;
      EntityInteraction::setInteractText((int *)&v30, v22);
      v31 = v12;
      v32 = v11;
      v24 = *(_QWORD *)(v7 + 4);
      if ( (_DWORD)v24 == HIDWORD(v24) )
      {
        std::vector<AnimationComponent::NewAnimation,std::allocator<AnimationComponent::NewAnimation>>::_M_emplace_back_aux<AnimationComponent::NewAnimation const&>(
          (unsigned __int64 *)v7,
          (int)&v30);
      }
      else
        v25 = sub_119C854((int *)v24, (int *)&v30);
        v26 = v32;
        v25[1] = v31;
        v25[2] = v26;
        *(_DWORD *)(v7 + 4) += 12;
      v27 = v30 - 12;
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      result = 1;
    }
    else
      result = 2;
  return result;
}


void __fastcall AnimationComponent::~AnimationComponent(AnimationComponent *this)
{
  AnimationComponent::~AnimationComponent(this);
}


int __fastcall AnimationComponent::~AnimationComponent(AnimationComponent *this)
{
  AnimationComponent *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void *v7; // r0@15
  char *v8; // r5@17 OVERLAPPED
  char *v9; // r6@17 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_26DFCFC;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
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
  v7 = (void *)*((_DWORD *)v1 + 5);
  if ( v7 )
    operator delete(v7);
  *(_QWORD *)&v8 = *((_QWORD *)v1 + 1);
  if ( v8 != v9 )
    do
      if ( *(_DWORD *)v8 )
        (*(void (**)(void))(**(_DWORD **)v8 + 4))();
      *(_DWORD *)v8 = 0;
      v8 += 4;
    while ( v9 != v8 );
    v8 = (char *)*((_DWORD *)v1 + 2);
  if ( v8 )
    operator delete(v8);
  return j_j_j__ZN11UIComponentD2Ev_0(v1);
}


void __fastcall AnimationComponent::~AnimationComponent(AnimationComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)AnimationComponent::~AnimationComponent(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall AnimationComponent::clone(AnimationComponent *this, UIControl *a2, UIControl *a3)
{
  AnimationComponent *v3; // r8@1
  int v4; // r4@1
  int result; // r0@1
  UIControl *v6; // r5@1 OVERLAPPED
  UIControl *v7; // r6@1 OVERLAPPED
  __int64 v8; // r0@2
  int v9; // [sp+0h] [bp-28h]@2
  int v10; // [sp+4h] [bp-24h]@1

  v7 = a2;
  v3 = this;
  std::make_unique<AnimationComponent,UIControl &,std::shared_ptr<UIControlFactory> const&>(
    (UIComponent **)&v10,
    a3,
    (unsigned __int64 *)a2 + 4);
  v4 = v10;
  result = *((_BYTE *)v7 + 40);
  *(_BYTE *)(v10 + 40) = result;
  for ( *(_QWORD *)&v6 = *((_QWORD *)v7 + 1); v7 != v6; v9 = 0 )
  {
    (*(void (__fastcall **)(int *))(**(_DWORD **)v6 + 8))(&v9);
    v8 = *(_QWORD *)(v4 + 12);
    if ( (_DWORD)v8 == HIDWORD(v8) )
    {
      std::vector<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>,std::allocator<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>>::_M_emplace_back_aux<std::unique_ptr<UIAnim,std::default_delete<UIAnim>>>(
        (_QWORD *)(v4 + 8),
        &v9);
    }
    else
      HIDWORD(v8) = v9;
      v9 = 0;
      *(_DWORD *)v8 = HIDWORD(v8);
      *(_DWORD *)(v4 + 12) += 4;
    result = v9;
    if ( v9 )
      result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
    v6 = (UIControl *)((char *)v6 + 4);
  }
  *(_DWORD *)v3 = v4;
  return result;
}


signed int __fastcall AnimationComponent::isEventListener(AnimationComponent *this)
{
  int v1; // r0@1
  int v2; // r1@1
  __int64 v3; // kr00_8@1
  signed int result; // r0@2
  int v5; // r2@6
  bool v6; // zf@6

  v3 = *((_QWORD *)this + 1);
  v1 = *((_QWORD *)this + 1) >> 32;
  v2 = v3;
  if ( (_DWORD)v3 == v1 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = *(_WORD *)(*(_DWORD *)v2 + 34);
      v6 = v5 == 0xFFFF;
      if ( v5 == 0xFFFF )
        v6 = *(_WORD *)(*(_DWORD *)v2 + 36) == 0xFFFF;
      if ( !v6 )
        break;
      v2 += 4;
      if ( v1 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall AnimationComponent::receive(UIComponent *this, int a2, int a3, int a4, int a5)
{
  UIComponent *v5; // r4@1
  bool v6; // zf@1
  __int64 v7; // r0@5

  v5 = this;
  v6 = a5 == 9;
  if ( a5 == 9 )
    v6 = *((_BYTE *)this + 40) == 0;
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 1);
    if ( (_DWORD)v7 != HIDWORD(v7) )
    {
      while ( !*(_DWORD *)v7 || *(_DWORD *)(*(_DWORD *)v7 + 28) )
      {
        LODWORD(v7) = v7 + 4;
        if ( HIDWORD(v7) == (_DWORD)v7 )
          return 0;
      }
      AnimationController::addComponentAnimationCallback<ui::AnimationStatus (AnimationComponent::*)(mce::TimeStep const&),AnimationComponent>(
        a4,
        (int)AnimationComponent::_animationTick,
        0,
        v5,
        0);
      *((_BYTE *)v5 + 40) = 1;
    }
  }
  return 0;
}


signed int __fastcall AnimationComponent::_attachTick(AnimationComponent *this, AnimationController *a2)
{
  AnimationComponent *v2; // r4@1
  signed int result; // r0@1
  int v4; // r2@2

  v2 = this;
  result = *((_BYTE *)this + 40);
  if ( !result )
  {
    v4 = *((_QWORD *)v2 + 1) >> 32;
    result = *((_QWORD *)v2 + 1);
    if ( result != v4 )
    {
      while ( !*(_DWORD *)result || *(_DWORD *)(*(_DWORD *)result + 28) )
      {
        result += 4;
        if ( v4 == result )
          return result;
      }
      AnimationController::addComponentAnimationCallback<ui::AnimationStatus (AnimationComponent::*)(mce::TimeStep const&),AnimationComponent>(
        (int)a2,
        (int)AnimationComponent::_animationTick,
        0,
        v2,
        0);
      result = 1;
      *((_BYTE *)v2 + 40) = 1;
    }
  }
  return result;
}
