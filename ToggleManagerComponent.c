

void __fastcall ToggleManagerComponent::_updateToggleGroupState(ToggleManagerComponent *this, VisualTree *a2, bool a3)
{
  ToggleManagerComponent::_updateToggleGroupState(this, a2, a3);
}


int __fastcall ToggleManagerComponent::ToggleManagerComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26D6F90;
  *(_QWORD *)(result + 8) = 2LL;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall ToggleManagerComponent::setBehavior(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall ToggleManagerComponent::clone(ToggleManagerComponent *this, UIControl *a2, UIControl *a3)
{
  ToggleManagerComponent *v3; // r5@1
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
  *(_DWORD *)v6 = &off_26D6F90;
  *((_DWORD *)v6 + 3) = 0;
  LODWORD(v7) = (char *)v6 + 12;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 - 4) = *((_DWORD *)v5 + 2);
  HIDWORD(v7) = (char *)v5 + 12;
  result = std::vector<short,std::allocator<short>>::operator=(v7);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall ToggleManagerComponent::receive(int a1, VisualTree *a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  bool v7; // r2@4

  if ( a5 == 1 && a7 == 1 )
  {
    switch ( *(_DWORD *)(a1 + 8) )
    {
      case 0:
        v7 = 0;
        goto LABEL_6;
      case 1:
        v7 = 1;
LABEL_6:
        ToggleManagerComponent::_updateToggleGroupState((ToggleManagerComponent *)a1, a2, v7);
        return 0;
      case 2:
        ToggleManagerComponent::_gatherToggleGroupState((ToggleManagerComponent *)a1, a2);
      case 3:
        ToggleManagerComponent::_defaultToggleGroupState((ToggleManagerComponent *)a1, a2);
      default:
    }
  }
  return 0;
}


int __fastcall ToggleManagerComponent::setGroupNames(__int64 a1)
{
  LODWORD(a1) = a1 + 12;
  return j_j_j__ZNSt6vectorIsSaIsEEaSERKS1_(a1);
}


void __fastcall ToggleManagerComponent::_updateToggleGroupState(ToggleManagerComponent *this, VisualTree *a2, bool a3)
{
  VisualTree *v3; // r5@1
  _WORD *v4; // r0@1
  _WORD *v5; // r7@1
  __int64 v6; // kr00_8@1
  void *v7; // r10@1
  bool v8; // zf@1
  void *v9; // r0@1
  void *v10; // r9@2
  void (*v11)(void); // r8@2
  __int16 v12; // r4@3
  _WORD *v13; // r0@3
  _DWORD *v14; // r0@3
  int v15; // r7@5
  void *v16; // r4@5
  int v17; // r8@5
  int v18; // r6@6
  unsigned int *v19; // r1@7
  unsigned int v20; // r0@9
  unsigned int *v21; // r5@13
  unsigned int v22; // r0@15
  int v23; // r4@23
  int v24; // r6@23
  int v25; // r5@24
  unsigned int *v26; // r1@25
  unsigned int v27; // r0@27
  unsigned int *v28; // r7@31
  unsigned int v29; // r0@33
  int *v30; // r4@44
  int v31; // r5@45
  char v32; // r0@45
  unsigned __int16 v33; // r0@47
  int v34; // r6@48
  int v35; // r5@49
  UIControl *v36; // r0@51
  int v37; // r0@51
  void *v38; // r6@51
  int v39; // r5@52
  unsigned int *v40; // r1@53
  unsigned int v41; // r0@55
  unsigned int *v42; // r4@59
  unsigned int v43; // r0@61
  _WORD *v44; // r0@67
  void *v45; // r8@71
  void *v46; // r6@72
  int v47; // r5@73
  unsigned int *v48; // r1@74
  unsigned int v49; // r0@76
  unsigned int *v50; // r7@80
  unsigned int v51; // r0@82
  _WORD *v52; // [sp+8h] [bp-78h]@3
  VisualTree *v53; // [sp+Ch] [bp-74h]@1
  _WORD *v54; // [sp+10h] [bp-70h]@1
  bool v55; // [sp+24h] [bp-5Ch]@1
  _WORD *v56; // [sp+2Ch] [bp-54h]@3
  void (*v57)(void); // [sp+34h] [bp-4Ch]@3
  signed int (__fastcall *v58)(_WORD **, int); // [sp+38h] [bp-48h]@3
  int v59; // [sp+3Ch] [bp-44h]@3
  int v60; // [sp+40h] [bp-40h]@5
  int i; // [sp+44h] [bp-3Ch]@5
  _DWORD *v62; // [sp+48h] [bp-38h]@3
  void (*v63)(void); // [sp+50h] [bp-30h]@3
  int (__fastcall *v64)(int *, int); // [sp+54h] [bp-2Ch]@3
  char v65; // [sp+5Bh] [bp-25h]@51

  v3 = a2;
  v55 = a3;
  v53 = a2;
  v6 = *(_QWORD *)((char *)this + 12);
  v4 = (_WORD *)(*(_QWORD *)((char *)this + 12) >> 32);
  v5 = (_WORD *)v6;
  v7 = 0;
  v54 = v4;
  v8 = (_DWORD)v6 == (_DWORD)v4;
  v9 = 0;
  if ( !v8 )
  {
    v7 = 0;
    v10 = 0;
    v11 = (void (*)(void))sub_C4CC62;
    do
    {
      v12 = *v5;
      v57 = 0;
      v13 = operator new(2u);
      *v13 = v12;
      v56 = v13;
      v57 = v11;
      v58 = sub_C4CC50;
      v14 = operator new(4u);
      *v14 = &v56;
      v62 = v14;
      v64 = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
      v63 = (void (*)(void))std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
      VisualTree::getControls((int)&v59, (int)v3, (int)&v62);
      v52 = v5;
      if ( v63 )
        v63();
      v15 = v59;
      v16 = v10;
      v59 = 0;
      v17 = v60;
      v60 = 0;
      for ( i = 0; v16 != v7; v16 = (char *)v16 + 8 )
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
      if ( v10 )
        operator delete(v10);
      v23 = v60;
      v24 = v59;
      v10 = (void *)v15;
      if ( v59 != v60 )
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
        v24 = v59;
      if ( v24 )
        operator delete((void *)v24);
      if ( v57 )
        v57();
      v30 = (int *)v10;
      if ( v10 == (void *)v17 )
        v7 = (void *)v17;
        v44 = v54;
        v11 = (void (*)(void))sub_C4CC62;
      else
          v31 = *v30;
          v32 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
          __dmb();
          if ( !(v32 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
            v33 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,ToggleComponent>(void)::id[0] = v33;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
          v34 = type_id<UIComponent,ToggleComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v31, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
            v35 = *(_DWORD *)(*(_DWORD *)(v31 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v31, v34));
            v35 = 0;
          *(_BYTE *)(v35 + 72) = *(_BYTE *)(v35 + 72) & 0xFE | v55;
          v36 = (UIControl *)UIComponent::getOwner((UIComponent *)v35);
          v37 = UIControl::getPropertyBag(v36);
          v65 = *(_BYTE *)(v35 + 72) & 1;
          UIPropertyBag::set<bool>(v37, 13, "#toggle_state", &v65);
          ToggleComponent::_updateControlVisibility((ToggleComponent *)v35);
          v30 += 2;
          v38 = v10;
        while ( (int *)v17 != v30 );
          v39 = *((_DWORD *)v38 + 1);
          if ( v39 )
            v40 = (unsigned int *)(v39 + 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 == 1 )
              v42 = (unsigned int *)(v39 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v43 = (*v42)--;
              if ( v43 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
          v38 = (char *)v38 + 8;
        while ( v38 != (void *)v17 );
        v7 = v10;
      v3 = v53;
      v5 = v52 + 1;
      v8 = v52 + 1 == v44;
      v9 = v10;
    }
    while ( !v8 );
  }
  v45 = v9;
  if ( v9 != v7 )
    v46 = v9;
      v47 = *((_DWORD *)v46 + 1);
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
      v46 = (char *)v46 + 8;
    while ( v46 != v7 );
  if ( v45 )
    operator delete(v45);
}


void __fastcall ToggleManagerComponent::_defaultToggleGroupState(ToggleManagerComponent *this, VisualTree *a2)
{
  ToggleManagerComponent::_defaultToggleGroupState(this, a2);
}


void __fastcall ToggleManagerComponent::_gatherToggleGroupState(ToggleManagerComponent *this, VisualTree *a2)
{
  VisualTree *v2; // r5@1
  _WORD *v3; // r0@1
  _WORD *v4; // r7@1
  __int64 v5; // kr00_8@1
  int v6; // r6@1
  bool v7; // zf@1
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
  signed int v30; // r4@53
  int *v31; // r7@53
  int v32; // r5@54
  char v33; // r0@54
  unsigned __int16 v34; // r0@56
  int v35; // r6@57
  __int64 v36; // r0@57
  int v37; // r5@58
  int v38; // r0@61
  int *v39; // r4@65
  int v40; // r5@66
  char v41; // r0@66
  unsigned __int16 v42; // r0@68
  int v43; // r6@69
  int v44; // r5@70
  int v45; // r0@72
  int v46; // r0@73
  char v47; // r2@74
  unsigned int v48; // r0@74
  signed int v49; // r2@74
  int v50; // r3@74
  int v51; // r2@75
  UIControl *v52; // r0@78
  int v53; // r5@78
  char *v54; // r0@78
  void *v55; // r4@79
  int v56; // r5@80
  unsigned int *v57; // r1@81
  unsigned int v58; // r0@83
  unsigned int *v59; // r6@87
  unsigned int v60; // r0@89
  void *v61; // r9@100
  void *v62; // r7@101
  int v63; // r4@102
  unsigned int *v64; // r1@103
  unsigned int v65; // r0@105
  unsigned int *v66; // r5@109
  unsigned int v67; // r0@111
  ToggleManagerComponent *v68; // [sp+10h] [bp-90h]@1
  _WORD *v69; // [sp+14h] [bp-8Ch]@11
  _WORD *v70; // [sp+18h] [bp-88h]@1
  VisualTree *v71; // [sp+1Ch] [bp-84h]@1
  void *v72; // [sp+28h] [bp-78h]@13
  const char *v73; // [sp+34h] [bp-6Ch]@3
  void *ptr; // [sp+38h] [bp-68h]@65
  int v75; // [sp+3Ch] [bp-64h]@65
  int v76; // [sp+40h] [bp-60h]@65
  int v77; // [sp+44h] [bp-5Ch]@65
  int v78; // [sp+48h] [bp-58h]@65
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
  v68 = this;
  v71 = a2;
  v5 = *(_QWORD *)((char *)this + 12);
  v3 = (_WORD *)(*(_QWORD *)((char *)this + 12) >> 32);
  v4 = (_WORD *)v5;
  v6 = 0;
  v70 = v3;
  v7 = (_DWORD)v5 == (_DWORD)v3;
  v8 = 0;
  if ( !v7 )
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
      v81 = sub_C4CC98;
      v80 = (void (*)(void))sub_C4CCAA;
      v14 = operator new(4u);
      *v14 = &v79;
      v85 = v14;
      v87 = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
      v86 = (void (*)(void))std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
      VisualTree::getControls((int)&v82, (int)v2, (int)&v85);
      v69 = v4;
      if ( v86 )
        v86();
      v15 = v82;
      v16 = v9;
      v82 = 0;
      v17 = v83;
      v72 = (void *)v15;
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
      v9 = v72;
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
      if ( v72 == (void *)v17 )
        v6 = v17;
      else
        v30 = 0;
        v31 = (int *)v72;
          v32 = *v31;
          v33 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
          __dmb();
          if ( !(v33 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
            v34 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,ToggleComponent>(void)::id[0] = v34;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
          v35 = type_id<UIComponent,ToggleComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v32, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
            v37 = *(_DWORD *)(*(_DWORD *)(v32 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v32, v35));
            v37 = 0;
          LODWORD(v36) = *(_DWORD *)(v37 + 88);
          if ( (signed int)v36 <= -1 )
            v38 = UIComponent::getOwner((UIComponent *)v37);
            LODWORD(v36) = UIControl::findCollectionIndex(v38, (const void **)(v37 + 76));
          v31 += 2;
          if ( v30 <= (signed int)v36 )
            v30 = v36;
        while ( (int *)v17 != v31 );
        v78 = 0;
        v76 = 0;
        v77 = 0;
        ptr = 0;
        v75 = 0;
        LODWORD(v36) = &ptr;
        std::vector<bool,std::allocator<bool>>::_M_fill_insert(v36, 0, v30 + 1, 0);
        v39 = (int *)v72;
          v40 = *v39;
          v41 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
          if ( !(v41 & 1)
            v42 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,ToggleComponent>(void)::id[0] = v42;
          v43 = type_id<UIComponent,ToggleComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v40, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
            v44 = *(_DWORD *)(*(_DWORD *)(v40 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v40, v43));
            v44 = 0;
          v45 = *(_DWORD *)(v44 + 88);
          if ( v45 <= -1 )
            v46 = UIComponent::getOwner((UIComponent *)v44);
            v45 = UIControl::findCollectionIndex(v46, (const void **)(v44 + 76));
          v47 = v45 & 0x1F;
          v48 = (unsigned int)v45 >> 5;
          v49 = 1 << v47;
          v39 += 2;
          v50 = *((_DWORD *)ptr + v48);
          if ( *(_BYTE *)(v44 + 72) & 1 )
            v51 = v49 | v50;
            v51 = v50 & ~v49;
          *((_DWORD *)ptr + v48) = v51;
        while ( (int *)v17 != v39 );
        v52 = (UIControl *)UIComponent::getOwner(v68);
        v53 = UIControl::getPropertyBag(v52);
        Util::toString<short,(void *)0,(void *)0>((void **)&v73, *v69);
        UIPropertyBag::set(v53, *((_DWORD *)v73 - 3), v73, (int)&ptr);
        v54 = (char *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v73 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9(v54);
        v55 = v72;
          v56 = *((_DWORD *)v55 + 1);
          if ( v56 )
            v57 = (unsigned int *)(v56 + 4);
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
              v58 = (*v57)--;
            if ( v58 == 1 )
              v59 = (unsigned int *)(v56 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
          v55 = (char *)v55 + 8;
        while ( v55 != (void *)v17 );
        if ( ptr )
          operator delete(ptr);
        v6 = (int)v72;
      v2 = v71;
      v4 = v69 + 1;
      v8 = v72;
    }
    while ( v69 + 1 != v70 );
  }
  v61 = v8;
  if ( v8 != (void *)v6 )
    v62 = v8;
      v63 = *((_DWORD *)v62 + 1);
      if ( v63 )
        v64 = (unsigned int *)(v63 + 4);
        if ( &pthread_create )
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
        else
          v65 = (*v64)--;
        if ( v65 == 1 )
          v66 = (unsigned int *)(v63 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
      v62 = (char *)v62 + 8;
    while ( v62 != (void *)v6 );
  if ( v61 )
    operator delete(v61);
}


void __fastcall ToggleManagerComponent::_defaultToggleGroupState(ToggleManagerComponent *this, VisualTree *a2)
{
  VisualTree *v2; // r5@1
  int v3; // r9@1
  _WORD *v4; // r0@1
  _WORD *v5; // r6@1
  __int64 v6; // kr00_8@1
  bool v7; // zf@1
  int *v8; // r0@1
  int *v9; // r11@2
  void (*v10)(void); // r7@2
  __int16 v11; // r4@3
  _WORD *v12; // r0@3
  _DWORD *v13; // r0@3
  int v14; // r0@5
  int *v15; // r4@5
  int v16; // r8@5
  int v17; // r5@6
  unsigned int *v18; // r1@7
  unsigned int v19; // r0@9
  unsigned int *v20; // r6@13
  unsigned int v21; // r0@15
  int v22; // r4@23
  int v23; // r7@23
  int v24; // r5@24
  unsigned int *v25; // r1@25
  unsigned int v26; // r0@27
  unsigned int *v27; // r6@31
  unsigned int v28; // r0@33
  int *v29; // r6@44
  int v30; // r5@45
  char v31; // r0@45
  unsigned __int16 v32; // r0@47
  int v33; // r7@48
  ToggleComponent *v34; // r0@49
  int *v35; // r4@51
  int v36; // r5@52
  unsigned int *v37; // r1@53
  unsigned int v38; // r0@55
  unsigned int *v39; // r6@59
  unsigned int v40; // r0@61
  _WORD *v41; // r6@67
  int *v42; // r8@70
  int *v43; // r6@71
  int v44; // r5@72
  unsigned int *v45; // r1@73
  unsigned int v46; // r0@75
  unsigned int *v47; // r7@79
  unsigned int v48; // r0@81
  _WORD *v49; // [sp+Ch] [bp-74h]@1
  VisualTree *v50; // [sp+10h] [bp-70h]@1
  _WORD *v51; // [sp+14h] [bp-6Ch]@3
  int *v52; // [sp+24h] [bp-5Ch]@5
  _WORD *v53; // [sp+30h] [bp-50h]@3
  void (*v54)(void); // [sp+38h] [bp-48h]@3
  signed int (__fastcall *v55)(_WORD **, int); // [sp+3Ch] [bp-44h]@3
  int v56; // [sp+40h] [bp-40h]@3
  int v57; // [sp+44h] [bp-3Ch]@5
  int i; // [sp+48h] [bp-38h]@5
  _DWORD *v59; // [sp+4Ch] [bp-34h]@3
  void (*v60)(void); // [sp+54h] [bp-2Ch]@3
  int (__fastcall *v61)(int *, int); // [sp+58h] [bp-28h]@3

  v2 = a2;
  v50 = a2;
  v3 = 0;
  v6 = *(_QWORD *)((char *)this + 12);
  v4 = (_WORD *)(*(_QWORD *)((char *)this + 12) >> 32);
  v5 = (_WORD *)v6;
  v49 = v4;
  v7 = (_DWORD)v6 == (_DWORD)v4;
  v8 = 0;
  if ( !v7 )
  {
    v3 = 0;
    v9 = 0;
    v10 = (void (*)(void))sub_C4CCF2;
    do
    {
      v11 = *v5;
      v54 = 0;
      v12 = operator new(2u);
      *v12 = v11;
      v53 = v12;
      v54 = v10;
      v55 = sub_C4CCE0;
      v13 = operator new(4u);
      *v13 = &v53;
      v59 = v13;
      v61 = std::_Function_handler<bool ()(UIControl const&),std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_invoke;
      v60 = (void (*)(void))std::_Function_base::_Base_manager<std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> VisualTree::getControlsWith<ToggleComponent>(std::function<bool ()(ToggleComponent const&)>)::{lambda(UIControl const&)#1}>::_M_manager;
      VisualTree::getControls((int)&v56, (int)v2, (int)&v59);
      v51 = v5;
      if ( v60 )
        v60();
      v14 = v56;
      v15 = v9;
      v56 = 0;
      v16 = v57;
      v52 = (int *)v14;
      v57 = 0;
      for ( i = 0; v15 != (int *)v3; v15 += 2 )
      {
        v17 = v15[1];
        if ( v17 )
        {
          v18 = (unsigned int *)(v17 + 4);
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
            v20 = (unsigned int *)(v17 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
        }
      }
      if ( v9 )
        operator delete(v9);
      v22 = v57;
      v23 = v56;
      v3 = (int)v52;
      if ( v56 != v57 )
        do
          v24 = *(_DWORD *)(v23 + 4);
          if ( v24 )
            v25 = (unsigned int *)(v24 + 4);
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
          v23 += 8;
        while ( v23 != v22 );
        v23 = v56;
      if ( v23 )
        operator delete((void *)v23);
      if ( v54 )
        v54();
      v29 = v52;
      if ( v52 == (int *)v16 )
        v8 = v52;
        v41 = v51;
        v3 = v16;
        v10 = (void (*)(void))sub_C4CCF2;
      else
          v30 = *v29;
          v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
          __dmb();
          if ( !(v31 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
            v32 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,ToggleComponent>(void)::id[0] = v32;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
          v33 = type_id<UIComponent,ToggleComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v30, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
            v34 = *(ToggleComponent **)(*(_DWORD *)(v30 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v30, v33));
            v34 = 0;
          ToggleComponent::resetDefaultState(v34);
          v29 += 2;
          v35 = v52;
        while ( (int *)v16 != v29 );
          v36 = v35[1];
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
          v35 += 2;
        while ( v35 != (int *)v16 );
      v2 = v50;
      v5 = v41 + 1;
      v9 = v8;
    }
    while ( v5 != v49 );
  }
  v42 = v8;
  if ( v8 != (int *)v3 )
    v43 = v8;
      v44 = v43[1];
      if ( v44 )
        v45 = (unsigned int *)(v44 + 4);
        if ( &pthread_create )
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        else
          v46 = (*v45)--;
        if ( v46 == 1 )
          v47 = (unsigned int *)(v44 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
      v43 += 2;
    while ( v43 != (int *)v3 );
  if ( v42 )
    operator delete(v42);
}


void __fastcall ToggleManagerComponent::_gatherToggleGroupState(ToggleManagerComponent *this, VisualTree *a2)
{
  ToggleManagerComponent::_gatherToggleGroupState(this, a2);
}


void __fastcall ToggleManagerComponent::~ToggleManagerComponent(ToggleManagerComponent *this)
{
  ToggleManagerComponent::~ToggleManagerComponent(this);
}


int __fastcall ToggleManagerComponent::~ToggleManagerComponent(ToggleManagerComponent *this)
{
  UIComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6F90;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


void __fastcall ToggleManagerComponent::~ToggleManagerComponent(ToggleManagerComponent *this)
{
  UIComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6F90;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  UIComponent::~UIComponent(v1);
  j_j_j__ZdlPv_3((void *)v1);
}
