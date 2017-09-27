

int __fastcall SliderManagerComponent::clone(SliderManagerComponent *this, UIControl *a2, UIControl *a3)
{
  SliderManagerComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  UIComponent *v6; // r4@1
  __int64 v7; // r0@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0x18u);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26D6DDC;
  *((_DWORD *)v6 + 3) = 0;
  LODWORD(v7) = (char *)v6 + 12;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 - 4) = 0;
  *(_DWORD *)(v7 - 4) = *((_DWORD *)v5 + 2);
  HIDWORD(v7) = (char *)v5 + 12;
  result = std::vector<short,std::allocator<short>>::operator=(v7);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall SliderManagerComponent::SliderManagerComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26D6DDC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall SliderManagerComponent::setBehavior(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


void __fastcall SliderManagerComponent::~SliderManagerComponent(SliderManagerComponent *this)
{
  UIComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6DDC;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  UIComponent::~UIComponent(v1);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall SliderManagerComponent::~SliderManagerComponent(SliderManagerComponent *this)
{
  UIComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6DDC;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


void __fastcall SliderManagerComponent::~SliderManagerComponent(SliderManagerComponent *this)
{
  SliderManagerComponent::~SliderManagerComponent(this);
}


int __fastcall SliderManagerComponent::setGroupNames(__int64 a1)
{
  LODWORD(a1) = a1 + 12;
  return j_j_j__ZNSt6vectorIsSaIsEEaSERKS1_(a1);
}


void __fastcall SliderManagerComponent::_gatherSliderGroupState(SliderManagerComponent *this, VisualTree *a2)
{
  VisualTree *v2; // r5@1
  _WORD *v3; // r0@1
  _WORD *v4; // r7@1
  __int64 v5; // kr00_8@1
  int v6; // r6@1
  void *v8; // r0@1
  void *v9; // r11@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  __int16 v12; // r4@11
  _WORD *v13; // r0@11
  _DWORD *v14; // r0@11
  int v15; // r0@13
  void *v16; // r4@13
  int v17; // r10@13
  int v18; // r5@14
  unsigned int *v19; // r1@15
  unsigned int v20; // r0@17
  unsigned int *v21; // r7@21
  unsigned int v22; // r0@23
  int v23; // r4@31
  int v24; // r5@31
  int v25; // r6@32
  unsigned int *v26; // r1@33
  unsigned int v27; // r0@35
  unsigned int *v28; // r7@39
  unsigned int v29; // r0@41
  int v30; // r4@53
  int *v31; // r7@53
  int v32; // r5@54
  char v33; // r0@54
  unsigned __int16 v34; // r0@56
  int v35; // r6@57
  int v36; // r0@58
  const void **v37; // r5@60
  int v38; // r0@61
  int v39; // r0@61
  unsigned int v40; // r2@66
  int *v41; // r4@66
  int v42; // r5@68
  char v43; // r0@68
  unsigned __int16 v44; // r0@70
  int v45; // r6@71
  int v47; // r0@75
  int v48; // r0@75
  UIControl *v53; // r0@82
  int v54; // r5@82
  char *v55; // r0@82
  void *v56; // r4@83
  int v57; // r5@84
  unsigned int *v58; // r1@85
  unsigned int v59; // r0@87
  unsigned int *v60; // r6@91
  unsigned int v61; // r0@93
  void *v62; // r9@104
  void *v63; // r7@105
  int v64; // r4@106
  unsigned int *v65; // r1@107
  unsigned int v66; // r0@109
  unsigned int *v67; // r5@113
  unsigned int v68; // r0@115
  SliderManagerComponent *v69; // [sp+14h] [bp-8Ch]@1
  _WORD *v70; // [sp+18h] [bp-88h]@11
  _WORD *v71; // [sp+1Ch] [bp-84h]@1
  VisualTree *v72; // [sp+20h] [bp-80h]@1
  void *v73; // [sp+2Ch] [bp-74h]@13
  const char *v74; // [sp+38h] [bp-68h]@3
  int v75; // [sp+3Ch] [bp-64h]@66
  void *ptr; // [sp+40h] [bp-60h]@66
  unsigned int v77; // [sp+44h] [bp-5Ch]@66
  int v78; // [sp+48h] [bp-58h]@66
  _WORD *v79; // [sp+4Ch] [bp-54h]@11
  void (*v80)(void); // [sp+54h] [bp-4Ch]@11
  signed int (__fastcall *v81)(_WORD **, int); // [sp+58h] [bp-48h]@11
  int v82; // [sp+5Ch] [bp-44h]@11
  int v83; // [sp+60h] [bp-40h]@13
  int i; // [sp+64h] [bp-3Ch]@13
  _DWORD *v85; // [sp+68h] [bp-38h]@11
  void (*v86)(void); // [sp+70h] [bp-30h]@11
  int (__fastcall *v87)(int *, int); // [sp+74h] [bp-2Ch]@11

  v2 = a2;
  v69 = this;
  v72 = a2;
  v5 = *(_QWORD *)((char *)this + 12);
  v3 = (_WORD *)(*(_QWORD *)((char *)this + 12) >> 32);
  v4 = (_WORD *)v5;
  v6 = 0;
  v71 = v3;
  _ZF = (_DWORD)v5 == (_DWORD)v3;
  v8 = 0;
  if ( !_ZF )
  {
    v6 = 0;
    v9 = 0;
    do
    {
      v12 = *v4;
      v80 = 0;
      v13 = operator new(2u);
      *v13 = v12;
      v79 = v13;
      v81 = sub_C42BFA;
      v80 = (void (*)(void))sub_C42C0A;
      v14 = operator new(4u);
      *v14 = &v79;
      v85 = v14;
      v87 = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<SliderComponent>(std::function<bool ()(SliderComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
      v86 = (void (*)(void))std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<SliderComponent>(std::function<bool ()(SliderComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
      VisualTree::getControls((int)&v82, (int)v2, (int)&v85);
      v70 = v4;
      if ( v86 )
        v86();
      v15 = v82;
      v16 = v9;
      v82 = 0;
      v17 = v83;
      v73 = (void *)v15;
      v83 = 0;
      for ( i = 0; v16 != (void *)v6; v16 = (char *)v16 + 8 )
      {
        v18 = *((_DWORD *)v16 + 1);
        if ( v18 )
        {
          v19 = (unsigned int *)(v18 + 4);
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
        }
      }
      if ( v9 )
        operator delete(v9);
      v23 = v83;
      v24 = v82;
      v9 = v73;
      if ( v82 != v83 )
        do
          v25 = *(_DWORD *)(v24 + 4);
          if ( v25 )
            v26 = (unsigned int *)(v25 + 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 == 1 )
              v28 = (unsigned int *)(v25 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
          v24 += 8;
        while ( v24 != v23 );
        v24 = v82;
      if ( v24 )
        operator delete((void *)v24);
      if ( v80 )
        v80();
      if ( v73 == (void *)v17 )
        v6 = v17;
      else
        v30 = 0;
        v31 = (int *)v73;
          v32 = *v31;
          v33 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
          __dmb();
          if ( !(v33 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
            v34 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,SliderComponent>(void)::id[0] = v34;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
          v35 = type_id<UIComponent,SliderComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v32, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
            v36 = *(_DWORD *)(*(_DWORD *)(v32 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v32, v35));
            v36 = 0;
          v37 = (const void **)(v36 + 60);
          if ( *(_DWORD *)(*(_DWORD *)(v36 + 60) - 12) )
            v38 = UIComponent::getOwner((UIComponent *)v36);
            v39 = UIControl::findCollectionIndex(v38, v37);
            v39 = 0;
          v31 += 2;
          if ( v30 <= v39 )
            v30 = v39;
        while ( (int *)v17 != v31 );
        v40 = v30 + 1;
        _ZF = v30 == -1;
        v41 = (int *)v73;
        v77 = 0;
        v78 = 0;
        v75 = 0;
        ptr = 0;
        if ( !_ZF )
          std::vector<int,std::allocator<int>>::_M_fill_insert((int)&ptr, 0, v40, &v75);
          v41 = (int *)v73;
          v42 = *v41;
          v43 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
          if ( !(v43 & 1)
            v44 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,SliderComponent>(void)::id[0] = v44;
          v45 = type_id<UIComponent,SliderComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v42, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
            _R5 = *(_DWORD *)(*(_DWORD *)(v42 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v42, v45));
            _R5 = 0;
          if ( *(_DWORD *)(*(_DWORD *)(_R5 + 60) - 12) )
            v47 = UIComponent::getOwner((UIComponent *)_R5);
            v48 = UIControl::findCollectionIndex(v47, (const void **)(_R5 + 60));
            v48 = 0;
          v41 += 2;
          if ( *(_BYTE *)(_R5 + 56) & 1 )
            __asm
              VLDRNE          S0, [R5,#0x20]
              VCVTNE.F32.S32  S0, S0
            __asm { VLDREQ          S0, [R5,#0x1C] }
          __asm
            VCVTR.S32.F32   S0, S0
            VMOV            R2, S0
          *((_DWORD *)ptr + v48) = _R2;
        while ( !_ZF );
        v53 = (UIControl *)UIComponent::getOwner(v69);
        v54 = UIControl::getPropertyBag(v53);
        Util::toString<short,(void *)0,(void *)0>((void **)&v74, *v70);
        UIPropertyBag::set(v54, *((_DWORD *)v74 - 3), v74, (unsigned int)ptr, v77);
        v55 = (char *)(v74 - 12);
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v74 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9(v55);
        v56 = v73;
          v57 = *((_DWORD *)v56 + 1);
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
          v56 = (char *)v56 + 8;
        while ( v56 != (void *)v17 );
        if ( ptr )
          operator delete(ptr);
        v6 = (int)v73;
      v2 = v72;
      v4 = v70 + 1;
      v8 = v73;
    }
    while ( v70 + 1 != v71 );
  }
  v62 = v8;
  if ( v8 != (void *)v6 )
    v63 = v8;
      v64 = *((_DWORD *)v63 + 1);
      if ( v64 )
        v65 = (unsigned int *)(v64 + 4);
        if ( &pthread_create )
          do
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
        else
          v66 = (*v65)--;
        if ( v66 == 1 )
          v67 = (unsigned int *)(v64 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 8))(v64);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 12))(v64);
      v63 = (char *)v63 + 8;
    while ( v63 != (void *)v6 );
  if ( v62 )
    operator delete(v62);
}


int __fastcall SliderManagerComponent::receive(int a1, VisualTree *a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  if ( a5 == 1 && a7 == 1 && !*(_DWORD *)(a1 + 8) )
    SliderManagerComponent::_gatherSliderGroupState((SliderManagerComponent *)a1, a2);
  return 0;
}


void __fastcall SliderManagerComponent::_gatherSliderGroupState(SliderManagerComponent *this, VisualTree *a2)
{
  SliderManagerComponent::_gatherSliderGroupState(this, a2);
}
