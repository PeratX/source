

int __fastcall UIControl::removeControlCollectionFlag(int result, int a2)
{
  *(_DWORD *)(result + 160) &= ~a2;
  return result;
}


void __fastcall UIControl::addChild(int a1, int a2, int a3)
{
  UIControl::addChild(a1, a2, a3);
}


void __fastcall UIControl::_propagateLockStateChange(__int64 this)
{
  UIControl::_propagateLockStateChange(this);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ScrollViewComponent::setBoxAndTrackPanel(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


      if ( v6 >= UIControl::getZOrder(*v2) )
{
        v27 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v27 & 0xFFFFFF00);
        sub_12F1C18((int)v4);
      }
      else
      {
        v32 = v5[10];
        v7 = *v4;
        v5[10] = 0;
        *v4 = 0;
        v31 = v7;
        v39 = v5[11];
        v38 = v5[12];
        v37 = v5[13];
        v36 = v5[14];
        v35 = v5[16];
        v34 = v5[17];
        v40 = v4;
        v33 = *((_WORD *)v5 + 30);
        if ( (char *)v4 - (char *)v2 >= 1 )
        {
          v8 = v4 - v2;
          v9 = v4;
          v10 = 954437177 * v8;
          v11 = (int)(v5 + 18);
          do
          {
            v12 = v9;
            v13 = (int)*(v9 - 9);
            v9 -= 9;
            v14 = v11;
            v15 = v9[1];
            *v9 = 0;
            v9[1] = 0;
            *(_DWORD *)(v11 - 36) = v13;
            v11 -= 36;
            v16 = *(_DWORD *)(v11 + 4);
            *(_DWORD *)(v11 + 4) = v15;
            if ( v16 )
            {
              v17 = (unsigned int *)(v16 + 4);
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
            }
            v21 = __OFSUB__(v10--, 1);
            *(_DWORD *)(v14 - 28) = *(v12 - 7);
            *(_DWORD *)(v14 - 24) = *(v12 - 6);
            *(_DWORD *)(v14 - 20) = *(v12 - 5);
            *(_DWORD *)(v14 - 16) = *(v12 - 4);
            *(_WORD *)(v14 - 12) = *((_WORD *)v12 - 6);
            *(_QWORD *)(v14 - 8) = *((_QWORD *)v12 - 1);
          }
          while ( !((unsigned __int8)((v10 < 0) ^ v21) | (v10 == 0)) );
        }
        v2 = v29;
        v4 = v40;
        *v29 = v31;
        v22 = v29[1];
        v29[1] = v32;
        if ( v22 )
          v23 = (unsigned int *)((char *)v22 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          else
            v24 = (*v23)--;
          if ( v24 == 1 )
            v25 = (unsigned int *)((char *)v22 + 8);
            (*(void (__fastcall **)(UIControl *))(*(_DWORD *)v22 + 8))(v22);
            if ( &pthread_create )
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
            else
              v26 = (*v25)--;
            if ( v26 == 1 )
              (*(void (__fastcall **)(UIControl *))(*(_DWORD *)v22 + 12))(v22);
        v29[2] = v39;
        v29[3] = v38;
        v29[4] = v37;
        v29[5] = v36;
        *((_WORD *)v29 + 12) = v33;
        *(_DWORD *)v28 = v35;
        *(_DWORD *)(v28 + 4) = v34;
      result = v4 + 9;
    }
    while ( v4 + 9 != v30 );
  }
  return result;
}


signed int __fastcall UIControl::removeParentByName(unsigned int a1, const void **a2)
{
  int v2; // r7@0
  unsigned int v3; // r5@1
  const void **v4; // r4@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2
  unsigned int v7; // r1@5
  unsigned int *v8; // r0@5
  unsigned int v9; // r2@8
  unsigned int v10; // r3@9
  unsigned int v11; // r1@10
  unsigned int *v12; // r6@18
  unsigned int v13; // r0@20
  int v15; // r9@27
  unsigned int v16; // r0@28
  unsigned int *v17; // r4@28
  unsigned int v18; // r1@31
  unsigned int v19; // r2@32
  signed int v20; // r6@33
  bool v21; // zf@33
  unsigned __int64 *v22; // r10@36
  unsigned __int64 v23; // kr00_8@37
  unsigned int *v24; // r1@38
  unsigned int v25; // r2@40
  signed int v26; // lr@44
  __int64 i; // r6@45
  unsigned int *v28; // r1@49
  unsigned int v29; // r0@51
  unsigned int *v30; // r6@55
  unsigned int v31; // r0@57
  unsigned int v32; // r0@73
  unsigned int *v33; // r4@77
  unsigned int v34; // r0@79
  int v35; // [sp+4h] [bp-2Ch]@36
  int v36; // [sp+8h] [bp-28h]@0

  v3 = a1;
  v4 = a2;
  if ( !a1 )
    return 0;
LABEL_2:
  v5 = *(_DWORD **)(v3 + 12);
  v6 = *(v5 - 3);
  if ( v6 != *((_DWORD *)*v4 - 3) || memcmp(v5, *v4, v6) )
  {
    v2 = *(_DWORD *)(v3 + 88);
    if ( v2 )
    {
      v7 = *(_DWORD *)(v2 + 4);
      v8 = (unsigned int *)(v2 + 4);
      while ( v7 )
      {
        __dmb();
        v9 = __ldrex(v8);
        if ( v9 == v7 )
        {
          v10 = __strex(v7 + 1, v8);
          v7 = v9;
          if ( !v10 )
          {
            __dmb();
            v11 = *v8;
            v3 = *(_DWORD *)(v3 + 84);
            if ( !*v8 )
              v3 = *v8;
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v8);
              while ( __strex(v11 - 1, v8) );
            }
            else
              *v8 = v11 - 1;
            if ( v11 == 1 )
              v12 = (unsigned int *)(v2 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
                (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
            if ( v3 )
              goto LABEL_2;
            return 0;
          }
        }
        else
          __clrex();
      }
    }
  }
  v15 = *(_DWORD *)(v3 + 88);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4);
    v17 = (unsigned int *)(v15 + 4);
    do
      while ( 1 )
        if ( !v16 )
          return 0;
        v18 = __ldrex(v17);
        if ( v18 == v16 )
          break;
        __clrex();
        v16 = v18;
      v19 = __strex(v16 + 1, v17);
      v16 = v18;
    while ( v19 );
    __dmb();
    v20 = 0;
    v21 = *v17 == 0;
    if ( *v17 )
      v2 = *(_DWORD *)(v3 + 84);
      v36 = v2;
      v21 = v2 == 0;
    if ( !v21 )
      v22 = *(unsigned __int64 **)(v2 + 92);
      v35 = v2 + 92;
      if ( v22 == *(unsigned __int64 **)(v2 + 96) )
        v20 = 0;
      else
        while ( 1 )
          v23 = *v22;
          if ( *v22 >> 32 )
            v24 = (unsigned int *)(HIDWORD(v23) + 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 + 1, v24) );
              ++*v24;
          if ( (_DWORD)v23 == v3 )
            UIControl::_onRemoved((UIControl *)v3);
            std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(v35, (int)v22);
            for ( i = *(_QWORD *)(v2 + 108); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
              (*(void (**)(void))(**(_DWORD **)i + 24))();
            v26 = 1;
            v2 = v36;
          else
            v26 = 0;
          if ( HIDWORD(v23) )
            v28 = (unsigned int *)(HIDWORD(v23) + 4);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 == 1 )
              v30 = (unsigned int *)(HIDWORD(v23) + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v23) + 8))(HIDWORD(v23));
                  v31 = __ldrex(v30);
                while ( __strex(v31 - 1, v30) );
                v31 = (*v30)--;
              if ( v31 == 1 )
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v23) + 12))(HIDWORD(v23));
          if ( v26 )
            break;
          ++v22;
          if ( v22 == *(unsigned __int64 **)(v2 + 96) )
            v20 = 0;
            goto LABEL_70;
        v20 = 1;
LABEL_70:
        if ( !v15 )
          return v20;
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v17);
      while ( __strex(v32 - 1, v17) );
    else
      v32 = (*v17)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  else
  return v20;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ScrollViewComponent::setScrollViewPort(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::forEachChildAndTemplate(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  int result; // r0@2
  int *v5; // r4@3
  int *i; // r5@3
  int v7; // r7@4
  void (__fastcall *v8)(char *, int, signed int); // r3@4
  char v9; // r0@9
  int v10; // r1@12
  int v11; // r0@13
  unsigned int v12; // r3@14
  bool v13; // zf@15
  int v14; // r1@18
  int v15; // r6@19
  void (__fastcall *v16)(char *, int, signed int); // r3@20
  int v17; // r6@24
  unsigned int *v18; // r1@25
  unsigned int v19; // r0@27
  unsigned int *v20; // r4@31
  unsigned int v21; // r0@33
  char v22; // r0@38
  int v23; // r1@41
  unsigned int v24; // r3@43
  int v25; // r1@47
  int v26; // r5@48
  void (__fastcall *v27)(int *, int, signed int); // r3@49
  int v28; // r4@53
  unsigned int *v29; // r1@54
  unsigned int *v30; // r5@60
  int v31; // [sp+0h] [bp-60h]@50
  int (*v32)(void); // [sp+8h] [bp-58h]@49
  int v33; // [sp+Ch] [bp-54h]@50
  int v34; // [sp+10h] [bp-50h]@48
  int v35; // [sp+14h] [bp-4Ch]@53
  char v36; // [sp+18h] [bp-48h]@21
  void (*v37)(void); // [sp+20h] [bp-40h]@20
  int v38; // [sp+24h] [bp-3Ch]@21
  int v39; // [sp+28h] [bp-38h]@19
  int v40; // [sp+2Ch] [bp-34h]@24
  char v41; // [sp+30h] [bp-30h]@5
  void (__fastcall *v42)(char *, char *, signed int); // [sp+38h] [bp-28h]@4
  int v43; // [sp+3Ch] [bp-24h]@5

  v2 = a2;
  v3 = a1;
  if ( !*(_DWORD *)(a2 + 8) )
    sub_DA7654();
  result = (*(int (__fastcall **)(int, int))(a2 + 12))(a2, a1);
  if ( result == 1 )
  {
    v5 = (int *)(*(_QWORD *)(v3 + 92) >> 32);
    for ( i = (int *)*(_QWORD *)(v3 + 92); v5 != i; i += 2 )
    {
      v7 = *i;
      v42 = 0;
      v8 = *(void (__fastcall **)(char *, int, signed int))(v2 + 8);
      if ( v8 )
      {
        v8(&v41, v2, 2);
        v43 = *(_DWORD *)(v2 + 12);
        v42 = *(void (__fastcall **)(char *, char *, signed int))(v2 + 8);
      }
      UIControl::forEachChildAndTemplate(v7, (int)&v41);
      if ( v42 )
        v42(&v41, &v41, 3);
    }
    v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
    __dmb();
    if ( !(v9 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
      type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
    v10 = *(_DWORD *)(v3 + 104);
    if ( (1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0])) & v10 )
      v11 = 0;
      if ( type_id<UIComponent,GridComponent>(void)::id[0] )
        v12 = 1;
        do
        {
          v13 = (v12 & v10) == v12;
          v12 *= 2;
          if ( v13 )
            ++v11;
        }
        while ( v12 < 1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0]) );
      v14 = *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * v11);
      if ( v14 )
        GridComponent::getGridItemTemplate((GridComponent *)&v39, v14);
        v15 = v39;
        if ( v39 )
          v37 = 0;
          v16 = *(void (__fastcall **)(char *, int, signed int))(v2 + 8);
          if ( v16 )
          {
            v16(&v36, v2, 2);
            v38 = *(_DWORD *)(v2 + 12);
            v37 = *(void (**)(void))(v2 + 8);
          }
          UIControl::forEachChildAndTemplate(v15, (int)&v36);
          if ( v37 )
            v37();
        v17 = v40;
        if ( v40 )
          v18 = (unsigned int *)(v40 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
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
    v22 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
    if ( !(v22 & 1)
      && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
      type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
    v23 = *(_DWORD *)(v3 + 104);
    result = 1;
    if ( (1 << SLOBYTE(type_id<UIComponent,FactoryComponent>(void)::id[0])) & v23 )
      result = 0;
      if ( type_id<UIComponent,FactoryComponent>(void)::id[0] )
        v24 = 1;
          v13 = (v24 & v23) == v24;
          v24 *= 2;
            ++result;
        while ( v24 < 1 << SLOBYTE(type_id<UIComponent,FactoryComponent>(void)::id[0]) );
      v25 = *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * result);
      if ( v25 )
        result = FactoryComponent::getControlTemplate((FactoryComponent *)&v34, v25);
        v26 = v34;
        if ( v34 )
          v32 = 0;
          v27 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
          if ( v27 )
            v27(&v31, v2, 2);
            v33 = *(_DWORD *)(v2 + 12);
            v32 = *(int (**)(void))(v2 + 8);
          result = UIControl::forEachChildAndTemplate(v26, (int)&v31);
          if ( v32 )
            result = v32();
        v28 = v35;
        if ( v35 )
          v29 = (unsigned int *)(v35 + 4);
              result = __ldrex(v29);
            while ( __strex(result - 1, v29) );
            result = (*v29)--;
          if ( result == 1 )
            v30 = (unsigned int *)(v28 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
                result = __ldrex(v30);
              while ( __strex(result - 1, v30) );
              result = (*v30)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  }
  return result;
}


    if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
    else
      v7 = 0;
    if ( ToggleComponent::isChecked(v7) == 1 )
      i = ToggleComponent::getGroupIndex(v7);
  }
  return i;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
    v5 = *(ToggleComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
    if ( v5 )
      j_j_j__ZN15ToggleComponent17resetDefaultStateEv(v5);
  }
}


char *__fastcall UIControl::setComponent<StackPanelComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
  {
    type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
  }
  v5 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,StackPanelComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::ControlResolutionInfo::ControlResolutionInfo(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


char *__fastcall UIControl::_storeComponentInLookup(UIControl *this, UIComponent *a2)
{
  UIComponent *v2; // r5@1
  UIControl *v3; // r4@1
  char *result; // r0@1
  __int64 v5; // r0@2
  void *v6; // r8@4
  unsigned int v7; // r2@4
  unsigned int v8; // r1@6
  unsigned int v9; // r6@6
  char *v10; // r7@12
  char *v11; // r5@14
  int v12; // r5@16

  v2 = a2;
  v3 = this;
  result = (char *)(*(int (__fastcall **)(UIComponent *))(*(_DWORD *)a2 + 44))(a2);
  if ( result == (char *)1 )
  {
    v5 = *(_QWORD *)((char *)v3 + 124);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      v6 = (void *)*((_DWORD *)v3 + 30);
      v7 = ((signed int)v5 - (signed int)v6) >> 2;
      if ( !v7 )
        v7 = 1;
      HIDWORD(v5) = v7 + (((signed int)v5 - (signed int)v6) >> 2);
      v9 = v7 + (((signed int)v5 - (signed int)v6) >> 2);
      if ( 0 != HIDWORD(v5) >> 30 )
        v9 = 0x3FFFFFFF;
      if ( v8 < v7 )
      if ( v9 )
      {
        if ( v9 >= 0x40000000 )
          sub_DA7414();
        v10 = (char *)operator new(4 * v9);
        LODWORD(v5) = *((_QWORD *)v3 + 15) >> 32;
        v6 = (void *)*((_QWORD *)v3 + 15);
      }
      else
        v10 = 0;
      *(_DWORD *)&v10[v5 - (_DWORD)v6] = v2;
      v11 = &v10[v5 - (_DWORD)v6];
      if ( 0 != ((signed int)v5 - (signed int)v6) >> 2 )
        _aeabi_memmove4(v10, v6);
      v12 = (int)(v11 + 4);
      if ( v6 )
        operator delete(v6);
      result = &v10[4 * v9];
      *((_DWORD *)v3 + 30) = v10;
      *((_DWORD *)v3 + 31) = v12;
      *((_DWORD *)v3 + 32) = result;
    }
    else
      *(_DWORD *)v5 = v2;
      result = (char *)(*((_DWORD *)v3 + 31) + 4);
      *((_DWORD *)v3 + 31) = result;
  }
  return result;
}


char *__fastcall UIControl::setComponent<AnchoredOffsetComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id) )
  {
    type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnchoredOffsetComponent>(void)::id);
  }
  v5 = type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,AnchoredOffsetComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::setLayer(int result, int a2)
{
  *(_DWORD *)(result + 56) = a2;
  return result;
}


int __fastcall UIControl::setRenderOnlyWhenTopmost(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFDFF | (a2 << 9);
  return result;
}


    if ( UIControl::hasRenderableComponent(a2) == 1 )
{
      v6 = operator new(4u);
      LODWORD(v7) = sub_C83552;
      *v6 = v5;
      HIDWORD(v7) = sub_C83542;
      v9 = v6;
      v10 = v7;
      UIControl::foreachRenderableComponents((int)v4, (int)&v9);
      if ( (_DWORD)v10 )
        ((void (*)(void))v10)();
    }
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


_DWORD *__fastcall UIControl::getPathedName(UIControl *this, int a2)
{
  int v2; // r4@1
  int *v3; // r9@1
  int v4; // r5@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  int v9; // r6@9
  int *v10; // r1@12
  int v11; // r7@12
  unsigned int v12; // r1@16
  unsigned int *v13; // r0@16
  unsigned int v14; // r2@19
  unsigned int v15; // r3@20
  signed int v16; // r0@21
  unsigned int *v17; // r1@29
  unsigned int v18; // r0@31
  unsigned int *v19; // r4@35
  unsigned int v20; // r0@37
  __int64 v21; // r6@43
  char *v22; // r0@44
  int v23; // t1@44
  unsigned int *v24; // r1@46
  unsigned int v25; // r0@48
  unsigned int *v26; // r4@52
  unsigned int v27; // r0@54
  int *v28; // r4@59
  int *v29; // r6@59
  unsigned int *v30; // r2@61
  signed int v31; // r1@63
  int *v32; // r0@69
  void **v33; // r0@74
  void *v34; // r0@74
  unsigned int *v36; // r2@76
  signed int v37; // r1@78
  int *v38; // [sp+4h] [bp-F4h]@1
  int *v39; // [sp+8h] [bp-F0h]@1
  int *v40; // [sp+Ch] [bp-ECh]@1
  void **v41; // [sp+10h] [bp-E8h]@1
  int v42; // [sp+14h] [bp-E4h]@75
  void **v43; // [sp+18h] [bp-E0h]@44
  void **v44; // [sp+1Ch] [bp-DCh]@45
  int v45; // [sp+38h] [bp-C0h]@75
  int v46; // [sp+40h] [bp-B8h]@74
  int v47; // [sp+44h] [bp-B4h]@75
  char v48; // [sp+CFh] [bp-29h]@44

  v2 = a2;
  v3 = (int *)this;
  sub_DA7794((int)&v41, 24);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v4 = *(_DWORD *)(v2 + 8);
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v9 = *(_DWORD *)(v2 + 4);
  while ( v9 )
    v10 = (int *)(v9 + 12);
    v11 = v4;
    if ( v39 == v40 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v38,
        v10);
    else
      v39 = sub_DA73B4(v39, v10) + 1;
    v4 = *(_DWORD *)(v9 + 88);
    if ( v4 )
      v12 = *(_DWORD *)(v4 + 4);
      v13 = (unsigned int *)(v4 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v12 )
          {
            v16 = 1;
            v4 = 0;
            goto LABEL_26;
          }
          __dmb();
          v14 = __ldrex(v13);
          if ( v14 == v12 )
            break;
          __clrex();
          v12 = v14;
        }
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
      }
      while ( v15 );
      v16 = 0;
      if ( !*(_DWORD *)(v4 + 4) )
        v16 = 1;
      v16 = 1;
LABEL_26:
    v9 = *(_DWORD *)(v9 + 84);
    if ( v16 )
      v9 = 0;
    if ( v11 )
      v17 = (unsigned int *)(v11 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        else
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v21 = *(_QWORD *)&v38;
  if ( v39 != v38 )
    do
      v48 = 47;
      v22 = sub_DA78D4((char *)&v43, (int)&v48, 1);
      v23 = *(_DWORD *)(HIDWORD(v21) - 4);
      HIDWORD(v21) -= 4;
      sub_DA78D4(v22, v23, *(_DWORD *)(v23 - 12));
    while ( (_DWORD)v21 != HIDWORD(v21) );
  sub_DA77A4(v3, (int)&v44);
  if ( v4 )
    v24 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v26 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  v29 = v39;
  v28 = v38;
  if ( v38 != v39 )
      v32 = (int *)(*v28 - 12);
      if ( v32 != &dword_28898C0 )
        v30 = (unsigned int *)(*v28 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j_j__ZdlPv_9(v32);
      ++v28;
    while ( v28 != v29 );
    v28 = v38;
  if ( v28 )
    operator delete(v28);
  v33 = off_26D3F84;
  v41 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v41) = off_26D3F80[0];
  v43 = v33;
  v44 = &off_27734E8;
  v34 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v46 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  v44 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v45);
  v41 = (void **)off_26D3F68;
  *(void ***)((char *)&v41 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v42 = 0;
  return sub_DA76E4(&v47);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
{
    v7 = *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v6));
    if ( v7 )
    {
      v9 = *(_QWORD *)v4;
      v8 = 0;
      LODWORD(v9) = HIDWORD(v9) - v9;
      v20 = 0LL;
      v21 = 0;
      v10 = -1431655765 * ((signed int)v9 >> 4);
      v11 = HIDWORD(v9);
      if ( (_DWORD)v9 )
      {
        if ( v10 >= 0x5555556 )
          sub_DA7414();
        v8 = (char *)operator new(v9);
        HIDWORD(v9) = *(_QWORD *)v4 >> 32;
        v11 = *(_QWORD *)v4;
      }
      v20 = __PAIR__(
              std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                v11,
                SHIDWORD(v9),
                (int)v8),
              (unsigned int)v8);
      v21 = &v8[48 * v10];
      v22 = *(_BYTE *)(v4 + 12);
      DataBindingComponent::addViewBinding(v7, (int)&v18, (int)&v20, (int *)(v4 + 16));
      v12 = v20;
      if ( (_DWORD)v20 != HIDWORD(v20) )
        do
        {
          std::_Destroy<ExprToken>(v12);
          LODWORD(v12) = v12 + 48;
        }
        while ( HIDWORD(v12) != (_DWORD)v12 );
        LODWORD(v12) = v20;
      if ( (_DWORD)v12 )
        operator delete((void *)v12);
    }
  }
  v13 = v19;
  if ( v19 )
  {
    v14 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
        __dmb();
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
}


void __fastcall UIControl::setEnabled(UIControl *this, int a2, int a3)
{
  UIControl::setEnabled(this, a2, a3);
}


UIControl *__fastcall UIControl::~UIControl(UIControl *this)
{
  UIControl *v1; // r8@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r4@9
  int v6; // r5@9
  void (__fastcall *v7)(int, int, signed int); // r3@10
  int v8; // r4@16
  int v9; // r5@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  void (*v12)(void); // r3@26
  int *v13; // r0@28
  void *v14; // r0@33
  char *v15; // r4@35
  char *v16; // r5@35
  int v17; // r5@42
  int v18; // r7@42
  int v19; // r4@43
  unsigned int *v20; // r1@44
  unsigned int v21; // r0@46
  unsigned int *v22; // r6@50
  unsigned int v23; // r0@52
  int v24; // r0@61
  unsigned int *v25; // r2@62
  unsigned int v26; // r1@64
  int v27; // r0@69
  int v28; // r1@71
  void *v29; // r0@71
  int v30; // r0@72
  unsigned int *v31; // r2@73
  unsigned int v32; // r1@75
  unsigned int *v34; // r2@81
  signed int v35; // r1@83

  v1 = this;
  *(_DWORD *)this = &off_26D7018;
  v2 = *((_DWORD *)this + 42);
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
  v5 = *((_QWORD *)v1 + 18) >> 32;
  v6 = *((_QWORD *)v1 + 18);
  if ( v6 != v5 )
    do
      v7 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
      if ( v7 )
        v7(v6, v6, 3);
      v6 += 16;
    while ( v5 != v6 );
    v6 = *((_DWORD *)v1 + 36);
  if ( v6 )
    operator delete((void *)v6);
  v8 = *(_QWORD *)((char *)v1 + 132) >> 32;
  v9 = *(_QWORD *)((char *)v1 + 132);
  if ( v9 != v8 )
      v12 = *(void (**)(void))(v9 + 16);
      if ( v12 )
        v12();
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      }
      v9 += 24;
    while ( v9 != v8 );
    v9 = *((_DWORD *)v1 + 33);
  if ( v9 )
    operator delete((void *)v9);
  v14 = (void *)*((_DWORD *)v1 + 30);
  if ( v14 )
    operator delete(v14);
  v15 = (char *)(*(_QWORD *)((char *)v1 + 108) >> 32);
  v16 = (char *)*(_QWORD *)((char *)v1 + 108);
  if ( v16 != v15 )
      if ( *(_DWORD *)v16 )
        (*(void (**)(void))(**(_DWORD **)v16 + 4))();
      *(_DWORD *)v16 = 0;
      v16 += 4;
    while ( v15 != v16 );
    v16 = (char *)*((_DWORD *)v1 + 27);
  if ( v16 )
    operator delete(v16);
  v18 = *(_QWORD *)((char *)v1 + 92) >> 32;
  v17 = *(_QWORD *)((char *)v1 + 92);
  if ( v17 != v18 )
      v19 = *(_DWORD *)(v17 + 4);
      if ( v19 )
        v20 = (unsigned int *)(v19 + 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
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
    v17 = *((_DWORD *)v1 + 23);
  if ( v17 )
    operator delete((void *)v17);
  v24 = *((_DWORD *)v1 + 22);
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  v27 = *((_DWORD *)v1 + 20);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  v28 = *((_DWORD *)v1 + 3);
  v29 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v28 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v30 = *((_DWORD *)v1 + 2);
  if ( v30 )
    v31 = (unsigned int *)(v30 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      (*(void (**)(void))(*(_DWORD *)v30 + 12))();
  return v1;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderBoxComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderBoxComponent::setHoverControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::notifyChildAdded(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 108); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 20))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


char *__fastcall UIControl::getChildren(UIControl *this)
{
  return (char *)this + 92;
}


  if ( UIControl::_hasComponent(v21, type_id<UIComponent,SliderManagerComponent>(void)::id[0]) == 1 )
{
    v17 = *(_DWORD *)(*((_DWORD *)v21 + 27) + 4 * UIControl::_getComponentIndex(v21, v16));
    if ( v17 )
    {
      v18 = v6 - ptr;
      v19 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if ( v18 >> 1 )
      {
        if ( v18 <= -1 )
          sub_DA7414();
        v20 = (char *)operator new(v18);
        v19 = (int)&v20[2 * (v18 >> 1)];
        v23 = v20;
        v24 = v20;
        v25 = &v20[2 * (v18 >> 1)];
        _aeabi_memmove(v20, ptr);
      }
      else
        v23 = 0;
        v24 = 0;
        v25 = 0;
      v24 = (char *)v19;
      SliderManagerComponent::setGroupNames(__PAIR__(&v23, v17));
      if ( v23 )
        operator delete(v23);
    }
  }
  if ( ptr )
    operator delete(ptr);
}


int __fastcall UIControl::setZOrder(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


int __fastcall UIControl::setModalAncestor(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 164) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 168);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 168) = v3;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setUncheckedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<TextEditComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
  {
    type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
  }
  v5 = type_id<UIComponent,TextEditComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,TextEditComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


char *__fastcall UIControl::getName(UIControl *this)
{
  return (char *)this + 12;
}


int __fastcall UIControl::getPropertyBag(UIControl *this)
{
  UIControl *v1; // r4@1
  int result; // r0@1
  UIPropertyBag *v3; // r5@2
  int v4; // r0@2
  int v5; // [sp+0h] [bp-20h]@2

  v1 = this;
  result = *((_DWORD *)this + 20);
  if ( !result )
  {
    Json::Value::Value(&v5, 0);
    v3 = (UIPropertyBag *)operator new(0x28u);
    UIPropertyBag::UIPropertyBag(v3, (const Json::Value *)&v5);
    v4 = *((_DWORD *)v1 + 20);
    *((_DWORD *)v1 + 20) = v3;
    if ( v4 )
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
    Json::Value::~Value((Json::Value *)&v5);
    result = *((_DWORD *)v1 + 20);
  }
  return result;
}


    if ( v5 >= UIControl::getZOrder(*(UIControl **)(v4 - 36)) )
{
    v6 = *(_QWORD *)(v4 - 36);
    *(_DWORD *)(v4 - 36) = 0;
    *(_DWORD *)(v4 - 32) = 0;
    *(_DWORD *)v3 = v6;
    v7 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = HIDWORD(v6);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
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
    }
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(v4 - 28);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(v4 - 24);
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v4 - 20);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v4 - 16);
    *(_WORD *)(v3 + 24) = *(_WORD *)(v4 - 12);
    *(_QWORD *)(v3 + 28) = *(_QWORD *)(v4 - 8);
  }
  *(_DWORD *)v3 = v2;
  v12 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = v25;
  if ( v12 )
  {
    v13 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_DWORD *)(v3 + 8) = v22;
  *(_DWORD *)(v3 + 12) = v21;
  *(_DWORD *)(v3 + 16) = v20;
  *(_DWORD *)(v3 + 20) = v19;
  *(_WORD *)(v3 + 24) = v18;
  *(_DWORD *)(v3 + 28) = v24;
  result = v23;
  *(_DWORD *)(v3 + 32) = v23;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ButtonComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ButtonComponent::setHoverStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


unsigned int __fastcall UIControl::getDelayCollectionUpdate(UIControl *this)
{
  return (*((_BYTE *)this + 69) & 0x10u) >> 4;
}


int __fastcall UIControl::setDelayCollectionUpdate(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xEFFF | (a2 << 12);
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setBackgroundHoverControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::setVisibleInTree(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFFFB | 4 * a2;
  return result;
}


char *__fastcall UIControl::_registerPostCreateCallback(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 148);
  if ( v4 == *(_QWORD *)(a1 + 148) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvR9UIControlEESaIS4_EE19_M_emplace_back_auxIJRKS4_EEEvDpOT_(
               (_QWORD *)(a1 + 144),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 148);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 148) = v4 + 16;
  return result;
}


int __fastcall UIControl::findAllCollectionIndices(int result, int a2)
{
  int v2; // r10@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r7@6
  int v7; // r9@7
  char v8; // r0@8
  unsigned __int16 v9; // r0@10
  int v10; // r1@11
  int v11; // r0@12
  unsigned int v12; // r3@13
  bool v13; // zf@14
  GridItemComponent *v14; // r5@17
  char v15; // r0@19
  unsigned __int16 v16; // r0@21
  int v17; // r1@22
  int v18; // r0@23
  unsigned int v19; // r3@24
  CollectionItemComponent *v20; // r8@28
  int v21; // r4@31
  unsigned int v22; // r1@32
  unsigned int *v23; // r0@32
  unsigned int v24; // r2@35
  unsigned int v25; // r3@36
  unsigned int v26; // r1@42
  unsigned int *v27; // r0@42
  unsigned int v28; // r2@45
  unsigned int v29; // r3@46
  unsigned int *v30; // r1@55
  unsigned int *v31; // r7@61
  unsigned int v32; // r1@66
  unsigned int *v33; // r0@66
  unsigned int v34; // r2@69
  unsigned int v35; // r3@70
  char v36; // r0@79
  unsigned __int16 v37; // r0@81
  int v38; // r0@82
  int v39; // r2@83
  unsigned int v40; // r3@84
  GridComponent *v41; // r7@88
  unsigned int *v42; // r1@96
  unsigned int *v43; // r5@102
  unsigned int *v44; // r1@111
  unsigned int *v45; // r5@117
  char v46; // r0@125
  unsigned __int16 v47; // r0@127
  int v48; // r0@128
  int v49; // r2@129
  unsigned int v50; // r3@130
  CollectionComponent *v51; // r5@134
  unsigned int *v52; // r1@149
  unsigned int *v53; // r4@155
  int v54; // [sp+0h] [bp-48h]@7

  v2 = *(_DWORD *)(result + 8);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
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
  v54 = a2;
  __dmb();
  v7 = *(_DWORD *)(result + 4);
  if ( v7 )
      while ( 1 )
      {
        v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
        __dmb();
        if ( !(v8 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
        {
          v9 = typeid_t<UIComponent>::count[0]++;
          type_id<UIComponent,GridItemComponent>(void)::id[0] = v9;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
        }
        v10 = *(_DWORD *)(v7 + 104);
        if ( (1 << SLOBYTE(type_id<UIComponent,GridItemComponent>(void)::id[0])) & v10 )
          v11 = 0;
          if ( type_id<UIComponent,GridItemComponent>(void)::id[0] )
          {
            v12 = 1;
            do
            {
              v13 = (v12 & v10) == v12;
              v12 *= 2;
              if ( v13 )
                ++v11;
            }
            while ( v12 < 1 << SLOBYTE(type_id<UIComponent,GridItemComponent>(void)::id[0]) );
          }
          v14 = *(GridItemComponent **)(*(_DWORD *)(v7 + 108) + 4 * v11);
        else
          v14 = 0;
        v15 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id[0];
        if ( !(v15 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id) )
          v16 = typeid_t<UIComponent>::count[0]++;
          type_id<UIComponent,CollectionItemComponent>(void)::id[0] = v16;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id);
        v17 = *(_DWORD *)(v7 + 104);
        if ( (1 << SLOBYTE(type_id<UIComponent,CollectionItemComponent>(void)::id[0])) & v17 )
          v18 = 0;
          if ( type_id<UIComponent,CollectionItemComponent>(void)::id[0] )
            v19 = 1;
              v13 = (v19 & v17) == v19;
              v19 *= 2;
                ++v18;
            while ( v19 < 1 << SLOBYTE(type_id<UIComponent,CollectionItemComponent>(void)::id[0]) );
          v20 = *(CollectionItemComponent **)(*(_DWORD *)(v7 + 108) + 4 * v18);
          v20 = 0;
        if ( !v14 )
          break;
        v21 = *(_DWORD *)(v7 + 88);
        if ( v21 )
          v22 = *(_DWORD *)(v21 + 4);
          v23 = (unsigned int *)(v21 + 4);
          do
            while ( 1 )
              if ( !v22 )
              {
                result = 1;
                v21 = 0;
                goto LABEL_52;
              }
              __dmb();
              v24 = __ldrex(v23);
              if ( v24 == v22 )
                break;
              __clrex();
              v22 = v24;
            v25 = __strex(v22 + 1, v23);
            v22 = v24;
          while ( v25 );
          __dmb();
          result = 0;
          if ( !*(_DWORD *)(v21 + 4) )
            result = 1;
          result = 1;
LABEL_52:
        v7 = *(_DWORD *)(v7 + 84);
        if ( result )
          v7 = 0;
        if ( v2 )
          v30 = (unsigned int *)(v2 + 4);
          if ( &pthread_create )
            __dmb();
              result = __ldrex(v30);
            while ( __strex(result - 1, v30) );
          else
            result = (*v30)--;
          if ( result == 1 )
            v31 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
              do
                result = __ldrex(v31);
              while ( __strex(result - 1, v31) );
            else
              result = (*v31)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
        if ( !v7 )
          v2 = v21;
          goto LABEL_148;
        v36 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
        if ( !(v36 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
          v37 = typeid_t<UIComponent>::count[0]++;
          type_id<UIComponent,GridComponent>(void)::id[0] = v37;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
        v2 = v21;
        v38 = *(_DWORD *)(v7 + 104);
        if ( (1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0])) & v38 )
          v39 = 0;
          if ( type_id<UIComponent,GridComponent>(void)::id[0] )
            v40 = 1;
              v13 = (v40 & v38) == v40;
              v40 *= 2;
                ++v39;
            while ( v40 < 1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0]) );
          result = *(_DWORD *)(v7 + 108);
          v41 = *(GridComponent **)(result + 4 * v39);
          if ( v41 )
            result = *(_DWORD *)(*(_DWORD *)GridComponent::getCollectionName(*(GridComponent **)(result + 4 * v39)) - 12);
            if ( result )
              GridComponent::getCollectionName(v41);
              GridItemComponent::getCollectionIndex(v14);
              if ( !*(_DWORD *)(v54 + 8) )
                sub_DA7654();
              result = (*(int (**)(void))(v54 + 12))();
              v2 = v21;
              goto LABEL_142;
LABEL_141:
LABEL_142:
          if ( !v7 )
            goto LABEL_148;
      }
      v21 = *(_DWORD *)(v7 + 88);
      if ( !v20 )
          v32 = *(_DWORD *)(v21 + 4);
          v33 = (unsigned int *)(v21 + 4);
              if ( !v32 )
                goto LABEL_108;
              v34 = __ldrex(v33);
              if ( v34 == v32 )
              v32 = v34;
            v35 = __strex(v32 + 1, v33);
            v32 = v34;
          while ( v35 );
LABEL_108:
          v44 = (unsigned int *)(v2 + 4);
              result = __ldrex(v44);
            while ( __strex(result - 1, v44) );
            result = (*v44)--;
            v45 = (unsigned int *)(v2 + 8);
                result = __ldrex(v45);
              while ( __strex(result - 1, v45) );
              result = (*v45)--;
        goto LABEL_141;
      if ( v21 )
        v26 = *(_DWORD *)(v21 + 4);
        v27 = (unsigned int *)(v21 + 4);
        do
          while ( 1 )
            if ( !v26 )
              result = 1;
              v21 = 0;
              goto LABEL_93;
            v28 = __ldrex(v27);
            if ( v28 == v26 )
              break;
            __clrex();
            v26 = v28;
          v29 = __strex(v26 + 1, v27);
          v26 = v28;
        while ( v29 );
        result = 0;
        if ( !*(_DWORD *)(v21 + 4) )
      else
        result = 1;
LABEL_93:
      v7 = *(_DWORD *)(v7 + 84);
      if ( result )
        v7 = 0;
      if ( v2 )
        v42 = (unsigned int *)(v2 + 4);
        if ( &pthread_create )
            result = __ldrex(v42);
          while ( __strex(result - 1, v42) );
          result = (*v42)--;
        if ( result == 1 )
          v43 = (unsigned int *)(v2 + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 8))(v2);
              result = __ldrex(v43);
            while ( __strex(result - 1, v43) );
            result = (*v43)--;
            result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 12))(v2);
      if ( !v7 )
      v46 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
      if ( !(v46 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
        v47 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,CollectionComponent>(void)::id[0] = v47;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
      v2 = v21;
      v48 = *(_DWORD *)(v7 + 104);
      if ( (1 << SLOBYTE(type_id<UIComponent,CollectionComponent>(void)::id[0])) & v48 )
        v49 = 0;
        if ( type_id<UIComponent,CollectionComponent>(void)::id[0] )
          v50 = 1;
            v13 = (v50 & v48) == v50;
            v50 *= 2;
            if ( v13 )
              ++v49;
          while ( v50 < 1 << SLOBYTE(type_id<UIComponent,CollectionComponent>(void)::id[0]) );
        result = *(_DWORD *)(v7 + 108);
        v51 = *(CollectionComponent **)(result + 4 * v49);
        if ( v51 )
          result = *(_DWORD *)(*(_DWORD *)CollectionComponent::getCollectionName(*(CollectionComponent **)(result + 4 * v49))
                             - 12);
          if ( result )
            CollectionComponent::getCollectionName(v51);
            CollectionItemComponent::getCollectionIndex(v20);
            if ( !*(_DWORD *)(v54 + 8) )
              sub_DA7654();
            result = (*(int (**)(void))(v54 + 12))();
            v2 = v21;
            goto LABEL_142;
LABEL_148:
  if ( v2 )
    v52 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v52);
      while ( __strex(result - 1, v52) );
    else
      result = (*v52)--;
    if ( result == 1 )
      v53 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
          result = __ldrex(v53);
        while ( __strex(result - 1, v53) );
        result = (*v53)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( UIControl::getDelayCollectionUpdate(a2) )
{
    result = 0;
  }
  else
  {
    UIControl::getParent((UIControl *)&v26, (int)v2);
    if ( v26 )
    {
      v5 = UIControl::getZOrder(v26);
      v6 = UIControl::isVisibleInTree(v26);
    }
    else
      v5 = 0;
      v6 = 1;
    v7 = UIControl::getLayer(v2);
    UIControl::setZOrder(v2, v7 + v5);
    v8 = UIControl::getVisible(v2);
    UIControl::setVisibleInTree(v2, v6 & v8);
    if ( !UIControl::isVisibleInTree(v2) && UIControl::getHover(v2) == 1 )
      UIControl::setHover(v2, 0);
      ScreenEvent::ScreenEvent((ScreenEvent *)&v22);
      v22 = 2;
      LOBYTE(v24) = 0;
      v23 = UIControl::getPropertyBag(v2);
      ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
      UIControl::broadcastEvent((int)v2, *(_DWORD *)(v3 + 132), (int)&ptr, *(_DWORD *)(v3 + 296), 0, v22, v23, v24, v25);
      *(_QWORD *)&v9 = v21;
      if ( (_DWORD)v21 != HIDWORD(v21) )
      {
        do
        {
          v11 = *(_DWORD *)(v9 + 8);
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
              (*(void (**)(void))(*(_DWORD *)v11 + 12))();
          }
          v9 += 12;
        }
        while ( v9 != v10 );
        v9 = v21;
      }
      if ( v9 )
        operator delete((void *)v9);
      if ( ptr )
        operator delete(ptr);
    if ( UIControl::hasPropertyBag(v2) == 1 )
      v14 = (UIPropertyBag *)UIControl::getPropertyBag(v2);
      UIPropertyBag::clearWeakRegistrations(v14);
    v15 = v27;
    if ( v27 )
      v16 = (unsigned int *)(v27 + 4);
      if ( &pthread_create )
        __dmb();
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    result = 1;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v23 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ScrollViewComponent::setScrollBox(v7, (int)&v23);
  v10 = HIDWORD(v23);
  if ( HIDWORD(v23) )
    v11 = (unsigned int *)(HIDWORD(v23) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id) )
    type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id);
  v14 = type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0]) == 1 )
    v15 = *(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v14));
    v15 = 0;
  UIControl::weakRef((UIControl *)&v21, v3);
  ScrollbarBoxComponent::setScrollView(v15, (int)&v21);
  result = v22;
  if ( v22 )
    v17 = (unsigned int *)(v22 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v19 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
      }
      else
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,FocusComponent>(void)::id[0])
{
  {
    result = FocusComponent::getFocusEnabled(v5);
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall UIControl::popBackChild(UIControl *this)
{
  UIControl *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r2@4
  unsigned int result; // r0@7
  int v6; // r6@7
  unsigned int *v7; // r1@8
  unsigned int *v8; // r7@14
  int v9; // r5@21
  int i; // r6@21
  __int64 v11; // kr08_8@21
  unsigned int *v12; // r1@24
  unsigned int *v13; // r5@30

  v1 = this;
  v2 = *(_QWORD *)(*((_DWORD *)this + 24) - 8);
  if ( HIDWORD(v2) )
  {
    v3 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  UIControl::_onRemoved((UIControl *)v2);
  result = *((_DWORD *)v1 + 24);
  *((_DWORD *)v1 + 24) = result - 8;
  v6 = *(_DWORD *)(result - 4);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v11 = *(_QWORD *)((char *)v1 + 108);
  v9 = *(_QWORD *)((char *)v1 + 108) >> 32;
  for ( i = v11; v9 != i; i += 4 )
    result = (*(int (**)(void))(**(_DWORD **)i + 24))();
    v12 = (unsigned int *)(HIDWORD(v2) + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
      v13 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
        result = (*v13)--;
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return result;
}


_BOOL4 __fastcall UIControl::_hasComponent(UIControl *this, unsigned __int16 a2)
{
  return (*((_DWORD *)this + 26) & (1 << a2)) != 0;
}


unsigned int __fastcall UIControl::getVisible(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 2u) >> 1;
}


char *__fastcall UIControl::getMinSize(UIControl *this)
{
  return (char *)this + 32;
}


      if ( UIControl::_hasComponent(v2, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
{
      else
        v22 = 0;
      _R0 = *(_DWORD *)GridItemComponent::getGridPosition(v22);
      goto LABEL_55;
    case 7:
      v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      __dmb();
      if ( !(v23 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
      v24 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v2, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
        v25 = UIControl::_getComponentIndex(v2, v24);
        v26 = GridItemComponent::getGridPosition(*(GridItemComponent **)(*((_DWORD *)v2 + 27) + 4 * v25));
        v26 = GridItemComponent::getGridPosition(0);
      goto LABEL_54;
    case 8:
      v27 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      if ( !(v27 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
        type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
      v28 = type_id<UIComponent,GridComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v2, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
        v29 = *(GridComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v28));
        v29 = 0;
      _R0 = *(_DWORD *)GridComponent::getGridDimensions(v29);
    case 9:
      v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      if ( !(v30 & 1)
      v31 = type_id<UIComponent,GridComponent>(void)::id[0];
        v32 = *(GridComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v31));
        v32 = 0;
      v26 = GridComponent::getGridDimensions(v32);
LABEL_54:
      _R0 = *((_DWORD *)v26 + 1);
LABEL_55:
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
LABEL_56:
        VSTR            S0, [SP,#0x20+var_1C]
        VLDR            S2, [SP,#0x20+var_1C]
        VLDR            S16, =0.0
LABEL_57:
        VLDR            S4, [SP,#0x20+var_1C]
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
        {
          VLDR            S2, [SP,#0x20+var_1C]
          VLDR            S4, =3.4028e38
          VABS.F32        S2, S2
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !_ZF )
          __asm { VMOVNE.F32      S16, S0 }
      break;
    default:
      __asm { VLDR            S16, =0.0; jumptable 00CC321E default case }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v10, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
{
  else
    v20 = 0;
  v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  __dmb();
  if ( !(v21 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
  {
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  }
  v22 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v17, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
    v23 = *(GridItemComponent **)(*(_DWORD *)(v17 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v17, v22));
    v23 = 0;
  v24 = GridItemComponent::getCollectionIndex(v20);
  v25 = GridItemComponent::getCollectionIndex(v23);
  if ( v9 )
    v26 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  if ( v2 )
    v30 = (unsigned int *)(v2 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  result = 0;
  if ( v24 < v25 )
    result = 1;
  return result;
}


unsigned int __fastcall UIControl::getRenderOnlyWhenTopmost(UIControl *this)
{
  return (*((_BYTE *)this + 69) & 2u) >> 1;
}


char *__fastcall UIControl::setComponent<ToggleComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
  {
    type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ToggleComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ToggleComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::setClipOffset(int result, _QWORD *a2)
{
  *(_QWORD *)(result + 60) = *a2;
  return result;
}


char *__fastcall UIControl::setComponent<ScreenComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id) )
  {
    type_id<UIComponent,ScreenComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScreenComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ScreenComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ScreenComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


unsigned int __fastcall UIControl::getSelected(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 0x20u) >> 5;
}


      if ( UIControl::getClipsChildren(v11) )
{
      UIControl::getParent((UIControl *)&v68, (int)v11);
      v10 = v69;
      v11 = v68;
      v68 = 0;
      v69 = 0;
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
      v17 = v69;
      if ( v69 )
        v18 = (unsigned int *)(v69 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      if ( !v11 )
        v12 = v10;
        v62 = 0;
        goto LABEL_47;
    }
    v62 = 1;
  }
  else
  {
    v12 = v10;
LABEL_47:
  v22 = *(_DWORD *)(v3 + 4);
  if ( v22 )
    v23 = *(_DWORD *)(v22 + 4);
    v24 = (unsigned int *)(v22 + 4);
    while ( v23 )
    {
      __dmb();
      v25 = __ldrex(v24);
      if ( v25 == v23 )
        v26 = __strex(v23 + 1, v24);
        v23 = v25;
        if ( !v26 )
          v27 = *v24;
          v28 = 0;
          if ( !v27 )
            v28 = 1;
          goto LABEL_57;
      else
        __clrex();
  v28 = 1;
  v22 = 0;
LABEL_57:
  v29 = *(_DWORD *)v3;
  v61 = v22;
  if ( v28 )
    v29 = 0;
  UIControl::getParent((UIControl *)&v66, v29);
  v31 = v67;
  v30 = v66;
  v32 = 0;
  v66 = 0;
  v67 = 0;
  while ( v30 )
    v33 = v31;
    if ( UIControl::getClipsChildren(v30) )
      break;
    UIControl::getParent((UIControl *)&v64, (int)v30);
    v31 = v65;
    v30 = v64;
    v64 = 0;
    v65 = 0;
    if ( v33 )
      v34 = (unsigned int *)(v33 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        v36 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
    v38 = v65;
    if ( v65 )
      v39 = (unsigned int *)(v65 + 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        v41 = (unsigned int *)(v38 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  if ( v11 == v30 )
    v32 = 1;
  if ( v31 )
    v43 = (unsigned int *)(v31 + 4);
    if ( &pthread_create )
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    else
      v44 = (*v43)--;
    if ( v44 == 1 )
      v45 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  if ( v61 )
    v47 = (unsigned int *)(v61 + 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 == 1 )
      v49 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  v51 = v62 & v32;
  if ( v12 )
    v52 = (unsigned int *)(v12 + 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 == 1 )
      v54 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  if ( v63 )
    v56 = (unsigned int *)(v63 + 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 == 1 )
      v58 = (unsigned int *)(v63 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
  return v51;
}


int __fastcall UIControl::foreachRenderableComponents(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 120);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_DA7654();
    v5 = *v2;
    ++v2;
  }
  return result;
}


unsigned int __fastcall UIControl::getEnabled(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 8u) >> 3;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,DropdownComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  DropdownComponent::setDropdownAreaControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


void __fastcall UIControl::~UIControl(UIControl *this)
{
  UIControl *v1; // r0@1

  v1 = UIControl::~UIControl(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall UIControl::getHover(UIControl *this)
{
  return *((_WORD *)this + 34) & 1;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setCheckedHoverStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<SoundComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id) )
  {
    type_id<UIComponent,SoundComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SoundComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SoundComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,SoundComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::onAdded(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 108); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 32))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


char *__fastcall UIControl::setComponent<ToggleManagerComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id) )
  {
    type_id<UIComponent,ToggleManagerComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleManagerComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ToggleManagerComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ToggleManagerComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


      if ( UIControl::_hasComponent(v9, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
{
        v21 = UIControl::_getComponentIndex(v9, v20);
        v22 = *((_DWORD *)v9 + 27);
        v23 = *(LayoutComponent **)(v22 + 4 * v21);
        if ( v23 )
        {
          v24 = LayoutComponent::getOffsetDelta(*(LayoutComponent **)(v22 + 4 * v21));
          v62 = *(_DWORD *)v24;
          __asm { VMOV            S0, R1 }
          v63 = *((_DWORD *)v24 + 1);
          __asm
          {
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !_ZF )
            __asm { VSTR            S16, [SP,#0x40+var_30] }
            LayoutComponent::setOffsetDelta(v23, (int)&v62, 0);
          result = 0;
        }
        else
      }
      else
      {
        result = 0;
      break;
    case 5:
      v25 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
      __dmb();
      if ( !(v25 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
        type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
      v26 = type_id<UIComponent,LayoutComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v9, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
        v27 = UIControl::_getComponentIndex(v9, v26);
        v28 = *((_DWORD *)v9 + 27);
        v29 = *(LayoutComponent **)(v28 + 4 * v27);
        if ( v29 )
          v30 = LayoutComponent::getOffsetDelta(*(LayoutComponent **)(v28 + 4 * v27));
          v62 = *(_DWORD *)v30;
          v63 = *((_DWORD *)v30 + 1);
            VMOV            S0, R0
            __asm { VSTR            S16, [SP,#0x40+var_2C] }
            LayoutComponent::setOffsetDelta(v29, (int)&v62, 0);
    case 6:
      v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( !(v31 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
        type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      v32 = type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v9, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
        v33 = UIControl::_getComponentIndex(v9, v32);
        v34 = *((_DWORD *)v9 + 27);
        v35 = *(_DWORD *)(v34 + 4 * v33);
        if ( v35 )
          v36 = GridItemComponent::getGridPosition(*(GridItemComponent **)(v34 + 4 * v33));
          _R1 = *(_DWORD *)v36;
            VMOV            S0, R1
            VCVT.F32.S32    S0, S0
          v62 = *(_DWORD *)v36;
          v63 = *((_DWORD *)v36 + 1);
            __asm
            {
              VCVTR.S32.F32   S0, S16
              VSTR            S0, [SP,#0x40+var_30]
            }
            GridItemComponent::setGridPosition(v35, (int)&v62);
    case 7:
      v38 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( !(v38 & 1)
      v39 = type_id<UIComponent,GridItemComponent>(void)::id[0];
        v40 = UIControl::_getComponentIndex(v9, v39);
        v41 = *((_DWORD *)v9 + 27);
        v42 = *(_DWORD *)(v41 + 4 * v40);
        if ( v42 )
          v43 = GridItemComponent::getGridPosition(*(GridItemComponent **)(v41 + 4 * v40));
          v62 = *(_DWORD *)v43;
          _R0 = *((_DWORD *)v43 + 1);
          v63 = _R0;
              VSTR            S0, [SP,#0x40+var_2C]
            GridItemComponent::setGridPosition(v42, (int)&v62);
    case 8:
      v45 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      if ( !(v45 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
        type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
      v46 = type_id<UIComponent,GridComponent>(void)::id[0];
      if ( UIControl::_hasComponent(v9, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
        v47 = UIControl::_getComponentIndex(v9, v46);
        v48 = *((_DWORD *)v9 + 27);
        v49 = *(GridComponent **)(v48 + 4 * v47);
        if ( v49 )
          v50 = GridComponent::getGridDimensions(*(GridComponent **)(v48 + 4 * v47));
          _R1 = *(_DWORD *)v50;
          v62 = *(_DWORD *)v50;
          v63 = *((_DWORD *)v50 + 1);
            GridComponent::setGridDimensions((int)v49, (int)&v62);
            if ( *(_DWORD *)GridComponent::getGridFillDirection(v49) != 2 )
              goto LABEL_95;
    case 9:
      v52 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      if ( !(v52 & 1)
      v53 = type_id<UIComponent,GridComponent>(void)::id[0];
        v54 = UIControl::_getComponentIndex(v9, v53);
        v55 = *((_DWORD *)v9 + 27);
        v49 = *(GridComponent **)(v55 + 4 * v54);
          v56 = GridComponent::getGridDimensions(*(GridComponent **)(v55 + 4 * v54));
          v62 = *(_DWORD *)v56;
          _R0 = *((_DWORD *)v56 + 1);
          if ( _ZF )
            goto LABEL_98;
            VCVTR.S32.F32   S0, S16
            VSTR            S0, [SP,#0x40+var_2C]
          GridComponent::setGridDimensions((int)v49, (int)&v62);
          if ( *(_DWORD *)GridComponent::getGridFillDirection(v49) == 2 )
LABEL_98:
            result = 0;
          else
LABEL_95:
            GridComponent::refreshGridItems(v49);
            result = 4;
    default:
      result = 0;
  }
  return result;
}


  if ( UIControl::isVisibleInTree(a2) == 1 )
{
    v4 = UIControl::getPropertyBag(v2);
    sub_21E8AF4((int *)&v59, (int *)&Util::EMPTY_STRING);
    v5 = (Json::Value *)(v4 + 8);
    if ( Json::Value::isNull(v5)
      || Json::Value::isObject(v5) != 1
      || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v6) != 1) )
    {
      v7 = v59;
      s1 = v59;
      v59 = &unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&s1, (int)&v61, (int)v6);
      v7 = s1;
    v8 = *(v7 - 3);
    v9 = **(_DWORD ***)(v3 + 24);
    if ( v8 == *(v9 - 3) && !memcmp(v7, v9, v8) )
      if ( Json::Value::isNull(v5) )
      {
        v17 = -1;
      }
      else if ( Json::Value::isObject(v5) == 1 )
        v19 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_index");
        if ( Json::Value::isInt(v19) || Json::Value::isUInt(v19) == 1 )
          v17 = Json::Value::asInt(v19, 0);
        else
          v17 = -1;
      else
      v29 = *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4);
      v30 = (char *)s1 - 12;
      if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)((char *)s1 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
        }
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = (char *)(v59 - 3);
      if ( v59 - 3 != &dword_28898C0 )
        v51 = v59 - 1;
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      if ( v17 == v29 )
        v32 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
        __dmb();
        if ( !(v32 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
          type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
        if ( UIControl::_hasComponent(v2, type_id<UIComponent,CustomRenderComponent>(void)::id[0])
          || !**(_BYTE **)(v3 + 8) )
          v33 = *(_DWORD *)v3;
          v34 = UIControl::getPosition(v2);
          *(_DWORD *)v33 = *(_DWORD *)v34;
          *(_DWORD *)(v33 + 4) = *((_DWORD *)v34 + 1);
          _R0 = UIControl::getSize(v2);
          __asm
          {
            VLDR            S2, [R0]
            VLDR            S0, =0.0625
          }
          v40 = *(_DWORD *)(v3 + 16);
            VMUL.F32        S0, S2, S0
            VSTR            S0, [R0]
          **(_BYTE **)(v3 + 8) = 1;
      if ( v7 - 3 != &dword_28898C0 )
        v21 = v7 - 1;
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v7 - 3);
      v10 = (char *)(v59 - 3);
        v23 = v59 - 1;
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
    sub_21E8AF4((int *)&v57, (int *)&Util::EMPTY_STRING);
      || (v11 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v11) != 1) )
      v12 = v57;
      v58 = v57;
      v57 = &unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v58, (int)&v62, (int)v11);
      v12 = v58;
    v13 = *(v12 - 3);
    v14 = *(_DWORD **)(*(_DWORD *)(v3 + 24) + 8);
    if ( v13 == *(v14 - 3) && !memcmp(v12, v14, v13) )
        v18 = -1;
        v20 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_index");
        if ( Json::Value::isInt(v20) || Json::Value::isUInt(v20) == 1 )
          v18 = Json::Value::asInt(v20, 0);
          v18 = -1;
      v41 = *(_DWORD *)(*(_DWORD *)(v3 + 24) + 12);
      v42 = (char *)v58 - 12;
      if ( (int *)((char *)v58 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)((char *)v58 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v43 = (char *)(v57 - 3);
      if ( v57 - 3 != &dword_28898C0 )
        v55 = v57 - 1;
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      if ( v18 == v41 )
        v44 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
        if ( !(v44 & 1)
          || !**(_BYTE **)(v3 + 12) )
          v45 = *(_DWORD *)(v3 + 4);
          v46 = UIControl::getPosition(v2);
          *(_DWORD *)v45 = *(_DWORD *)v46;
          *(_DWORD *)(v45 + 4) = *((_DWORD *)v46 + 1);
          v48 = *(_DWORD *)(v3 + 20);
          **(_BYTE **)(v3 + 12) = 1;
      if ( v12 - 3 != &dword_28898C0 )
        v25 = v12 - 1;
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v12 - 3);
      v15 = (char *)(v57 - 3);
        v27 = v57 - 1;
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
  }
  return 0;
}


int __fastcall UIControl::applyToChildrenConditional(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)(result + 92);
  for ( i = a2; v3 != v2; v2 += 2 )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_DA7654();
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(i + 12))(i, *v2);
    if ( result == 1 )
      result = UIControl::applyToChildrenConditional(*v2, i);
  }
  return result;
}


int __fastcall UIControl::getEnableScissorTestForClipping(UIControl *this)
{
  return *((_BYTE *)this + 69) & 1;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setUncheckedHoverStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,DropdownComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  DropdownComponent::setDropdownContentControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


UIControl *__fastcall UIControl::_resolveControlNames(UIControl *this, UIControl *a2)
{
  UIControl *v2; // r9@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r0@12
  int v7; // r10@13
  int v8; // r6@15
  unsigned int v9; // r1@19
  unsigned int *v10; // r0@19
  unsigned int v11; // r2@22
  unsigned int v12; // r3@23
  signed int v13; // r0@24
  void *v14; // r0@32
  unsigned int *v15; // r1@35
  unsigned int v16; // r2@37
  int v17; // r11@40
  unsigned int *v18; // r1@41
  unsigned int v19; // r0@43
  unsigned int *v20; // r6@47
  unsigned int v21; // r0@49
  int v22; // r5@54
  unsigned int *v23; // r1@55
  unsigned int v24; // r0@57
  unsigned int *v25; // r6@61
  unsigned int v26; // r0@63
  unsigned int *v27; // r1@69
  unsigned int v28; // r0@71
  unsigned int *v29; // r5@75
  unsigned int v30; // r0@77
  UIControl *result; // r0@83
  __int64 j; // r4@83
  UIControl *v33; // t1@84
  UIControl *v34; // [sp+4h] [bp-44h]@1
  int i; // [sp+8h] [bp-40h]@1
  int v36; // [sp+Ch] [bp-3Ch]@34
  int v37; // [sp+10h] [bp-38h]@34
  int v38; // [sp+14h] [bp-34h]@3
  int v39; // [sp+18h] [bp-30h]@32
  int v40; // [sp+1Ch] [bp-2Ch]@34

  v34 = this;
  v2 = a2;
  v3 = *(_QWORD *)((char *)this + 132);
  for ( i = *(_QWORD *)((char *)this + 132) >> 32; v3 != i; v3 += 24 )
  {
    if ( *(_DWORD *)(*(_DWORD *)v3 - 12) )
    {
      v6 = *(_DWORD *)(v3 + 4);
      if ( v6 == 2 )
      {
        v7 = *((_DWORD *)v34 + 22);
        if ( v7 )
        {
          v9 = *(_DWORD *)(v7 + 4);
          v10 = (unsigned int *)(v7 + 4);
          do
          {
            while ( 1 )
            {
              if ( !v9 )
              {
                v13 = 1;
                v7 = 0;
                goto LABEL_30;
              }
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
          v13 = 0;
          if ( !*(_DWORD *)(v7 + 4) )
            v13 = 1;
        }
        else
          v13 = 1;
LABEL_30:
        v8 = *((_DWORD *)v34 + 21);
        if ( v13 )
          v8 = 0;
      }
      else
        v7 = 0;
        if ( v6 == 1 )
          v8 = (int)v34;
        else if ( v6 )
          v8 = (int)v2;
      sub_DA73B4(&v38, (int *)v3);
      getControlBreadthFirst((int)&v39, v8, (const void **)&v38);
      v14 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
      if ( v39 )
        v36 = v39;
        v37 = v40;
        if ( v40 )
          v15 = (unsigned int *)(v40 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 + 1, v15) );
          else
            ++*v15;
        std::function<void ()(UIControl &,std::shared_ptr<UIControl>)>::operator()(v3 + 8, (int)v34, (int)&v36);
        v17 = v37;
        if ( v37 )
          v18 = (unsigned int *)(v37 + 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            v20 = (unsigned int *)(v17 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            if ( &pthread_create )
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            else
              v21 = (*v20)--;
            if ( v21 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      v22 = v40;
      if ( v40 )
        v23 = (unsigned int *)(v40 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          v25 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
      if ( v7 )
        v27 = (unsigned int *)(v7 + 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          v29 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
  }
  result = v34;
  for ( j = *(_QWORD *)((char *)v34 + 92); HIDWORD(j) != (_DWORD)j; result = UIControl::_resolveControlNames(v33, v2) )
    v33 = *(UIControl **)j;
    LODWORD(j) = j + 8;
  return result;
}


char *__fastcall UIControl::setComponent<InputComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
  {
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  }
  v5 = type_id<UIComponent,InputComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,InputComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderBoxComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderBoxComponent::setLockedControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderBoxComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderBoxComponent::setDefaultControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<FocusComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

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
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,FocusComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


void __fastcall UIControl::clone(UIControl *this, UIControl *a2, int a3)
{
  UIControl *v3; // r10@1
  int v4; // r8@1
  int *v5; // r11@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r4@1
  int v9; // r1@2
  int v10; // r0@4
  int v11; // r9@8
  int v12; // r6@8
  unsigned int v13; // r1@10
  unsigned int *v14; // r0@10
  unsigned int v15; // r2@13
  unsigned int v16; // r3@14
  int v17; // r8@17
  unsigned int *v18; // r7@17
  signed int v19; // r4@19
  unsigned int v20; // r1@22
  unsigned int v21; // r1@26
  unsigned int v22; // r0@32
  unsigned int v23; // r0@39
  int v24; // r0@43
  unsigned int *v25; // r2@44
  unsigned int v26; // r1@46
  unsigned int *v27; // r1@52
  unsigned int v28; // r0@54
  int v29; // r4@59
  int v30; // r1@59
  int v31; // r6@59
  unsigned int v32; // r3@59
  unsigned int v33; // r2@59
  int v34; // r8@62
  int v35; // r5@63
  int v36; // r0@68
  int v37; // r2@68
  unsigned int v38; // r6@69
  int v39; // r1@70
  int v40; // r4@71
  int v41; // r1@71
  int v42; // r0@71
  int v43; // r0@75
  int *v44; // r4@77
  int *i; // r6@77
  int v46; // r5@78
  int *v47; // r1@78 OVERLAPPED
  __int64 *v48; // r0@78
  int *v49; // r2@78
  int v50; // r4@82
  int j; // r6@82
  int v52; // r5@83
  int v53; // r7@83
  void (__fastcall *v54)(int, int, signed int); // r3@84
  UIControl **v55; // r5@89
  UIControl **k; // r7@89
  int v57; // r6@90
  __int64 v58; // r0@90
  int v59; // r6@93
  unsigned int *v60; // r1@94
  unsigned int v61; // r0@96
  unsigned int *v62; // r4@100
  unsigned int v63; // r0@102
  unsigned int v64; // [sp+0h] [bp-38h]@90
  int v65; // [sp+4h] [bp-34h]@91
  int v66; // [sp+8h] [bp-30h]@71
  int v67; // [sp+Ch] [bp-2Ch]@2
  char v68; // [sp+10h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = (int *)this;
  std::__shared_ptr<UIControl,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UIControl>,ControlScreenAction &>(
    (int)this,
    (int)&v68,
    *((_DWORD *)a2 + 39));
  EntityInteraction::setInteractText((int *)(*v5 + 12), (int *)v3 + 3);
  v6 = *v5;
  *(_DWORD *)(v6 + 72) = *((_DWORD *)v3 + 18);
  *(_DWORD *)(v6 + 76) = *((_DWORD *)v3 + 19);
  *(_DWORD *)(v6 + 16) = *((_DWORD *)v3 + 4);
  *(_DWORD *)(v6 + 20) = *((_DWORD *)v3 + 5);
  *(_DWORD *)(v6 + 24) = *((_DWORD *)v3 + 6);
  *(_DWORD *)(v6 + 28) = *((_DWORD *)v3 + 7);
  *(_DWORD *)(v6 + 32) = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v6 + 36) = *((_DWORD *)v3 + 9);
  *(_DWORD *)(v6 + 40) = *((_DWORD *)v3 + 10);
  *(_DWORD *)(v6 + 44) = *((_DWORD *)v3 + 11);
  *(_DWORD *)(v6 + 48) = *((_DWORD *)v3 + 12);
  *(_DWORD *)(v6 + 52) = *((_DWORD *)v3 + 13);
  *(_DWORD *)(v6 + 56) = *((_DWORD *)v3 + 14);
  *(_QWORD *)(v6 + 60) = *(_QWORD *)((char *)v3 + 60);
  *(_WORD *)(*v5 + 68) &= 0xFFFEu;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 2 | *(_WORD *)(*v5 + 68) & 0xFFFD;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 8 | *(_WORD *)(*v5 + 68) & 0xFFF7;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x10 | *(_WORD *)(*v5 + 68) & 0xFFEF;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x20 | *(_WORD *)(*v5 + 68) & 0xFFDF;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x40 | *(_WORD *)(*v5 + 68) & 0xFFBF;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x80 | *(_WORD *)(*v5 + 68) & 0xFF7F;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x100 | *(_WORD *)(*v5 + 68) & 0xFEFF;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x200 | *(_WORD *)(*v5 + 68) & 0xFDFF;
  v7 = *((_DWORD *)v3 + 20);
  v8 = *v5;
  if ( v7 )
  {
    UIPropertyBag::clone((UIPropertyBag *)&v67, v7);
    v9 = v67;
  }
  else
    v9 = 0;
    v67 = 0;
  v67 = 0;
  v10 = *(_DWORD *)(v8 + 80);
  *(_DWORD *)(v8 + 80) = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  if ( v67 )
    (*(void (**)(void))(*(_DWORD *)v67 + 4))();
  v11 = *v5;
  v12 = 0;
  if ( v4 )
    v12 = *(_DWORD *)(v4 + 8);
    if ( !v12 )
      std::__throw_bad_weak_ptr();
    v13 = *(_DWORD *)(v12 + 4);
    v14 = (unsigned int *)(v12 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v13 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v15 = __ldrex(v14);
        if ( v15 == v13 )
          break;
        __clrex();
        v13 = v15;
      }
      v16 = __strex(v13 + 1, v14);
      v13 = v15;
    }
    while ( v16 );
    __dmb();
    v17 = *(_DWORD *)(v4 + 4);
    v18 = (unsigned int *)(v12 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v18);
      while ( __strex(v20 + 1, v18) );
    else
      ++*v18;
        v21 = __ldrex(v14);
      while ( __strex(v21 - 1, v14) );
      v21 = (*v14)--;
    if ( v21 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
        do
          v22 = __ldrex(v18);
        while ( __strex(v22 - 1, v18) );
      else
        v22 = (*v18)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    *(_DWORD *)(v11 + 84) = v17;
        v23 = __ldrex(v18);
      while ( __strex(v23 + 1, v18) );
    v19 = 0;
    *(_DWORD *)(v11 + 84) = 0;
    v19 = 1;
  v24 = *(_DWORD *)(v11 + 88);
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  *(_DWORD *)(v11 + 88) = v12;
  if ( !v19 )
    v27 = (unsigned int *)(v12 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_WORD *)(*v5 + 68) |= 0x2000u;
  *(_WORD *)(*v5 + 68) = *((_WORD *)v3 + 34) & 0x800 | *(_WORD *)(*v5 + 68) & 0xF7FF;
  v29 = *v5;
  *(_DWORD *)(v29 + 104) = *((_DWORD *)v3 + 26);
  v30 = *(_DWORD *)(v29 + 108);
  v31 = *(_DWORD *)(v29 + 112);
  v32 = (v31 - v30) >> 2;
  v33 = (signed int)((*(_QWORD *)((char *)v3 + 108) >> 32) - *(_QWORD *)((char *)v3 + 108)) >> 2;
  if ( v33 <= v32 )
    if ( v33 < v32 )
      v34 = v30 + 4 * v33;
      if ( v31 != v34 )
        v35 = v30 + 4 * v33;
        {
          if ( *(_DWORD *)v35 )
            (*(void (**)(void))(**(_DWORD **)v35 + 4))();
          *(_DWORD *)v35 = 0;
          v35 += 4;
        }
        while ( v31 != v35 );
      *(_DWORD *)(v29 + 112) = v34;
    std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_default_append(
      v29 + 108,
      v33 - v32);
  v37 = *(_QWORD *)((char *)v3 + 108) >> 32;
  v36 = *(_QWORD *)((char *)v3 + 108);
  if ( v37 != v36 )
    v38 = 0;
      v39 = *(_DWORD *)(v36 + 4 * v38);
      if ( v39 )
        v40 = *(_DWORD *)(*v5 + 108);
        (*(void (__fastcall **)(int *))(*(_DWORD *)v39 + 8))(&v66);
        v41 = v66;
        v66 = 0;
        v42 = *(_DWORD *)(v40 + 4 * v38);
        *(_DWORD *)(v40 + 4 * v38) = v41;
        if ( v42 )
          (*(void (**)(void))(*(_DWORD *)v42 + 4))();
        if ( v66 )
          (*(void (**)(void))(*(_DWORD *)v66 + 4))();
        v43 = *v5;
        UIControl::_storeComponentInLookup((UIControl *)v43, *(UIComponent **)(*(_DWORD *)(v43 + 108) + 4 * v38));
        v37 = *(_QWORD *)((char *)v3 + 108) >> 32;
        v36 = *(_QWORD *)((char *)v3 + 108);
      ++v38;
    while ( v38 < (v37 - v36) >> 2 );
  v44 = (int *)(*(_QWORD *)((char *)v3 + 132) >> 32);
  for ( i = (int *)*(_QWORD *)((char *)v3 + 132); v44 != i; i += 6 )
    v46 = *v5;
    *(_QWORD *)&v47 = *(_QWORD *)(*v5 + 136);
    v48 = (__int64 *)(*v5 + 132);
    if ( v47 == v49 )
      std::vector<UIControl::ControlResolutionInfo,std::allocator<UIControl::ControlResolutionInfo>>::_M_emplace_back_aux<UIControl::ControlResolutionInfo const&>(
        v48,
        i);
      __gnu_cxx::new_allocator<UIControl::ControlResolutionInfo>::construct<UIControl::ControlResolutionInfo,UIControl::ControlResolutionInfo const&>(
        (int)v48,
        v47,
      *(_DWORD *)(v46 + 136) += 24;
  v50 = *((_QWORD *)v3 + 18) >> 32;
  for ( j = *((_QWORD *)v3 + 18); v50 != j; j += 16 )
    v52 = *v5;
    v53 = *(_QWORD *)(*v5 + 148);
    if ( v53 == *(_QWORD *)(*v5 + 148) >> 32 )
      std::vector<std::function<void ()(UIControl &)>,std::allocator<std::function<void ()(UIControl &)>>>::_M_emplace_back_aux<std::function<void ()(UIControl &)> const&>(
        (_QWORD *)(v52 + 144),
        j);
      *(_DWORD *)(v53 + 8) = 0;
      v54 = *(void (__fastcall **)(int, int, signed int))(j + 8);
      if ( v54 )
        v54(v53, j, 2);
        *(_DWORD *)(v53 + 12) = *(_DWORD *)(j + 12);
        *(_DWORD *)(v53 + 8) = *(_DWORD *)(j + 8);
        v53 = *(_DWORD *)(v52 + 148);
      *(_DWORD *)(v52 + 148) = v53 + 16;
  v55 = (UIControl **)(*(_QWORD *)((char *)v3 + 92) >> 32);
  for ( k = (UIControl **)*(_QWORD *)((char *)v3 + 92); k != v55; k += 2 )
    v57 = *v5;
    UIControl::clone((UIControl *)&v64, *k, *v5);
    v58 = *(_QWORD *)(v57 + 96);
    if ( (_DWORD)v58 == HIDWORD(v58) )
      std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
        (_QWORD *)(v57 + 92),
        (int)&v64);
      *(_QWORD *)v58 = v64;
      HIDWORD(v58) = v65;
      v65 = 0;
      *(_DWORD *)(v58 + 4) = HIDWORD(v58);
      v64 = 0;
      *(_DWORD *)(v57 + 96) = v58 + 8;
    v59 = v65;
    if ( v65 )
      v60 = (unsigned int *)(v65 + 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 == 1 )
        v62 = (unsigned int *)(v59 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 8))(v59);
        if ( &pthread_create )
          __dmb();
          do
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
        else
          v63 = (*v62)--;
        if ( v63 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 12))(v59);
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1 )
{
  v7 = UIControl::_getComponentIndex((UIControl *)v2, v6);
  v8 = *(DataBindingComponent **)(*(_DWORD *)(v2 + 108) + 4 * v7);
  if ( !v8 )
    return 1;
  if ( ScreenView::_shouldBindChildren((ScreenView *)v7, *((_BYTE *)v3 + 4), (UIControl *)v2, v8) == 1 )
  {
    v9 = *(ScreenController **)(v4 + 124);
    v10 = UIControl::isVisibleInTree((UIControl *)v2);
    DataBindingComponent::bindLowPriorityBinds(v8, v9, v10);
  }
  return 0;
}


char *__fastcall UIControl::setComponent<ButtonComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ButtonComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ButtonComponent>(void)::id) )
  {
    type_id<UIComponent,ButtonComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ButtonComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ButtonComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ButtonComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


unsigned int __fastcall UIControl::getClipsChildren(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 0x40u) >> 6;
}


  if ( UIControl::getEnabled(a2) != 1 || UIControl::areAllAncestorsEnabled(v2) != 1 )
{
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v4 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1
    && (v5 = *(FocusComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v4))) != 0 )
    result = FocusComponent::getFocusEnabled(v5);
  else
LABEL_12:
    result = 0;
  return result;
}


void __fastcall UIControl::~UIControl(UIControl *this)
{
  UIControl::~UIControl(this);
}


char *__fastcall UIControl::setComponent<GridItemComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
  {
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,GridItemComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ButtonComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ButtonComponent::setLockedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<CustomRenderComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
  {
    type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
  }
  v5 = type_id<UIComponent,CustomRenderComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,CustomRenderComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  TextEditComponent::setPlaceHolderControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


unsigned int __fastcall UIControl::getAllowClipping(UIControl *this)
{
  return (unsigned int)*((_BYTE *)this + 68) >> 7;
}


  if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
{
    v9 = *(InputComponent **)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v8));
    if ( v9 )
    {
      if ( InputComponent::getModal(v9) == 1 )
      {
        v10 = *v6;
        if ( !**v6 )
        {
LABEL_12:
          v12 = *(_DWORD *)(v4 + 8);
          if ( !v12 )
            std::__throw_bad_weak_ptr();
          v13 = *(_DWORD *)(v12 + 4);
          v14 = (unsigned int *)(v12 + 4);
          do
          {
            while ( 1 )
            {
              if ( !v13 )
                std::__throw_bad_weak_ptr();
              __dmb();
              v15 = __ldrex(v14);
              if ( v15 == v13 )
                break;
              __clrex();
              v13 = v15;
            }
            v16 = __strex(v13 + 1, v14);
            v13 = v15;
          }
          while ( v16 );
          __dmb();
          *v10 = *(UIControl **)(v4 + 4);
          v17 = v10[1];
          v10[1] = (UIControl *)v12;
          if ( v17 )
            v18 = (unsigned int *)((char *)v17 + 4);
            if ( &pthread_create )
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
            else
              v19 = (*v18)--;
            if ( v19 == 1 )
              v20 = (unsigned int *)((char *)v17 + 8);
              (*(void (__fastcall **)(UIControl *))(*(_DWORD *)v17 + 8))(v17);
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
                (*(void (__fastcall **)(UIControl *))(*(_DWORD *)v17 + 12))(v17);
          return 1;
        }
        v11 = UIControl::getZOrder((UIControl *)v4);
        if ( v11 > UIControl::getZOrder(**v6) )
          v10 = *v6;
          goto LABEL_12;
      }
    }
  }
  return 1;
}


char *__fastcall UIControl::setComponent<ScrollViewComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
  {
    type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ScrollViewComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


unsigned int __fastcall UIControl::markToRemoveDeadDependencies(UIControl *this)
{
  UIControl *v1; // r1@1
  int v2; // r0@1
  int (__cdecl *v3)(int); // r2@1
  unsigned int v4; // r6@2
  unsigned int *v5; // r3@2
  unsigned int v6; // r5@5
  unsigned int v7; // r4@6
  unsigned int result; // r0@7
  int v9; // r4@7
  unsigned int *v10; // r1@8
  unsigned int *v11; // r5@14
  int v12; // [sp+0h] [bp-18h]@7
  int v13; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 39);
  v3 = *(int (__cdecl **)(int))(*(_DWORD *)v2 + 28);
  v13 = *((_DWORD *)v1 + 2);
  if ( !v13 )
    std::__throw_bad_weak_ptr();
  v4 = *(_DWORD *)(v13 + 4);
  v5 = (unsigned int *)(v13 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v4 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
        break;
      __clrex();
      v4 = v6;
    }
    v7 = __strex(v4 + 1, v5);
    v4 = v6;
  }
  while ( v7 );
  __dmb();
  v12 = *((_DWORD *)v1 + 1);
  result = v3(v2);
  v9 = v13;
  if ( v13 )
    v10 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
    else
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


char *__fastcall UIControl::getParentRelativePosition(UIControl *this)
{
  return (char *)this + 16;
}


int __fastcall UIControl::_resolvePostCreate(int result)
{
  int v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  UIControl **v4; // r4@4
  UIControl **i; // r5@4
  __int64 v6; // kr00_8@4
  UIControl *v7; // t1@5

  v1 = result;
  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 144); v3 != v2; v2 += 16 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
      sub_DA7654();
    result = (*(int (__fastcall **)(int, int))(v2 + 12))(v2, v1);
  }
  v6 = *(_QWORD *)(v1 + 92);
  v4 = (UIControl **)(*(_QWORD *)(v1 + 92) >> 32);
  for ( i = (UIControl **)v6; v4 != i; result = UIControl::_resolvePostCreate(v7) )
    v7 = *i;
    i += 2;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setUncheckedLockedHoverStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::getModalAncestorWeak(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 164);
  v2 = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
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


unsigned int __fastcall UIControl::recalculateAllAncestorsEnabled(UIControl *this, int a2)
{
  UIControl *v2; // r4@1
  char *v3; // r6@2
  int v4; // r5@2
  unsigned int v5; // r1@3
  unsigned int *v6; // r0@3
  unsigned int v7; // r2@6
  unsigned int v8; // r3@7
  unsigned int v9; // r1@8
  unsigned int v10; // r7@8
  int v11; // r5@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed __int16 v16; // r1@20
  int v17; // r2@21
  char *v18; // r4@23
  __int16 v19; // t1@23
  unsigned int v20; // r1@25
  __int16 v21; // t1@27
  unsigned int *v22; // r4@32
  unsigned int v23; // r0@34
  unsigned int *v24; // r6@38
  unsigned int v25; // r0@40
  int v26; // r5@47
  unsigned int v27; // r1@48
  unsigned int *v28; // r0@48
  unsigned int v29; // r2@51
  unsigned int v30; // r3@52
  unsigned int v31; // r1@53
  unsigned int *v32; // r4@61
  unsigned int v33; // r0@63

  v2 = this;
  if ( a2 == 1 )
  {
    v3 = (char *)this + 68;
    *((_WORD *)this + 34) |= 0x10u;
    v4 = *((_DWORD *)this + 22);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v6 = (unsigned int *)(v4 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v5 )
          {
            v18 = (char *)v2 + 68;
            return (*v18 & 0x10u) >> 4;
          }
          __dmb();
          v7 = __ldrex(v6);
          if ( v7 == v5 )
            break;
          __clrex();
          v5 = v7;
        }
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
      }
      while ( v8 );
      __dmb();
      v9 = *v6;
      v10 = *((_DWORD *)v2 + 21);
      if ( !*v6 )
        v10 = *v6;
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v6);
        while ( __strex(v9 - 1, v6) );
      else
        *v6 = v9 - 1;
      if ( v9 == 1 )
        v22 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      if ( v10 )
          if ( !(*(_BYTE *)(v10 + 68) & 8) )
            v18 = v3;
            *(_WORD *)v3 &= 0xFFEFu;
          v26 = *(_DWORD *)(v10 + 88);
          if ( !v26 )
          v27 = *(_DWORD *)(v26 + 4);
          v28 = (unsigned int *)(v26 + 4);
            while ( 1 )
            {
              if ( !v27 )
              {
                v18 = v3;
                return (*v18 & 0x10u) >> 4;
              }
              __dmb();
              v29 = __ldrex(v28);
              if ( v29 == v27 )
                break;
              __clrex();
              v27 = v29;
            }
            v30 = __strex(v27 + 1, v28);
            v27 = v29;
          while ( v30 );
          v31 = *v28;
          v10 = *(_DWORD *)(v10 + 84);
          if ( !*v28 )
            v10 = *v28;
          if ( &pthread_create )
            __dmb();
            do
              v31 = __ldrex(v28);
            while ( __strex(v31 - 1, v28) );
          else
            *v28 = v31 - 1;
          if ( v31 == 1 )
            v32 = (unsigned int *)(v26 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            if ( &pthread_create )
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
            else
              v33 = (*v32)--;
            if ( v33 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
          if ( !v10 )
        v18 = v3;
    }
    else
      v18 = (char *)this + 68;
  }
  else
    v11 = *((_DWORD *)this + 22);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 4);
      v13 = (unsigned int *)(v11 + 4);
      while ( v12 )
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          v15 = __strex(v12 + 1, v13);
          v12 = v14;
          if ( !v15 )
            v16 = 16;
            if ( *v13 )
              v17 = *((_DWORD *)v2 + 21);
              if ( v17 )
                v16 = (unsigned __int8)*(_WORD *)(v17 + 68) & (unsigned __int8)(2 * *(_WORD *)(v17 + 68)) & 0x10;
            v19 = *((_WORD *)v2 + 34);
            *(_WORD *)v18 = v16 | v19 & 0xFFEF;
                v20 = __ldrex(v13);
              while ( __strex(v20 - 1, v13) );
              v20 = (*v13)--;
            if ( v20 == 1 )
              v24 = (unsigned int *)(v11 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              if ( &pthread_create )
                __dmb();
                do
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
              else
                v25 = (*v24)--;
              if ( v25 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    v21 = *((_WORD *)v2 + 34);
    v18 = (char *)v2 + 68;
    *(_WORD *)v18 = v21 | 0x10;
  return (*v18 & 0x10u) >> 4;
}


int __fastcall UIControl::_getComponentIndex(UIControl *this, int a2)
{
  int result; // r0@2
  int v3; // r3@3
  unsigned int v4; // r2@3
  bool v5; // zf@4

  if ( a2 )
  {
    v3 = *((_DWORD *)this + 26);
    v4 = 1;
    result = 0;
    do
    {
      v5 = (v3 & v4) == v4;
      v4 *= 2;
      if ( v5 )
        ++result;
    }
    while ( v4 < 1 << a2 );
  }
  else
  return result;
}


UIControl *__fastcall UIControl::setParentRelativePosition(UIControl *result, int _R1)
{
  char *v7; // r1@2

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0,#0x10]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S2, [R1,#4]
      VLDR            S4, [R0,#0x14]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      return result;
    __asm { VMOV            R2, S2 }
    v7 = (char *)result + 20;
  else
    _R2 = *(_DWORD *)(_R1 + 4);
  __asm { VSTR            S0, [R0,#0x10] }
  *(_DWORD *)v7 = _R2;
  return (UIControl *)j_j_j__ZN9UIControl16_setPositionDiryEv(result);
}


int __fastcall UIControl::setPropagateAlpha(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xF7FF | (a2 << 11);
  return result;
}


UIComponent **__fastcall UIControl::_eraseComponentFromLookup(UIControl *this, UIComponent *a2)
{
  UIComponent *v2; // r5@1
  UIControl *v3; // r6@1
  UIComponent **result; // r0@1
  int v5; // r1@2 OVERLAPPED
  UIComponent **v6; // r2@2 OVERLAPPED
  int v7; // r0@2
  int v8; // r3@3
  bool v9; // zf@4
  UIComponent *v10; // r4@7
  bool v11; // zf@7
  int v12; // r0@12
  UIComponent **v13; // r1@25
  bool v14; // zf@25

  v2 = a2;
  v3 = this;
  result = (UIComponent **)(*(int (__fastcall **)(UIComponent *))(*(_DWORD *)a2 + 44))(a2);
  if ( result != (UIComponent **)1 )
    return result;
  *(_QWORD *)&v5 = *((_QWORD *)v3 + 15);
  v7 = ((signed int)v6 - v5) >> 4;
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
    do
    {
      v9 = *(_DWORD *)v5 == (_DWORD)v2;
      result = (UIComponent **)v5;
      if ( *(UIComponent **)v5 != v2 )
      {
        result = (UIComponent **)(v5 + 4);
        v9 = *(_DWORD *)(v5 + 4) == (_DWORD)v2;
      }
      if ( v9 )
        goto LABEL_24;
      result = (UIComponent **)(v5 + 8);
      v10 = *(UIComponent **)(v5 + 8);
      v11 = v10 == v2;
      if ( v10 != v2 )
        result = (UIComponent **)(v5 + 12);
        v11 = *(_DWORD *)(v5 + 12) == (_DWORD)v2;
      if ( v11 )
      --v8;
      v5 += 16;
    }
    while ( v8 > 1 );
  }
  if ( 1 == ((signed int)v6 - v5) >> 2 )
    result = (UIComponent **)v5;
    goto LABEL_20;
  v12 = ((signed int)v6 - v5) >> 2;
  if ( v12 == 2 )
  else
    if ( v12 != 3 )
      result = v6;
      goto LABEL_24;
    if ( *(UIComponent **)v5 == v2 )
    result = (UIComponent **)(v5 + 4);
  if ( *result != v2 )
    ++result;
LABEL_20:
    if ( *result != v2 )
LABEL_24:
  if ( result != v6 )
    v13 = result + 1;
    v14 = result + 1 == v6;
    if ( result + 1 != v6 )
      v14 = v6 == v13;
    if ( !v14 )
      _aeabi_memmove4(result, v13);
      v6 = (UIComponent **)*((_DWORD *)v3 + 31);
    result = v6 - 1;
    *((_DWORD *)v3 + 31) = v6 - 1;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setUncheckedLockedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


signed int __fastcall UIControl::hasControlCollectionFlag(UIControl *this, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 40) & a2;
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v23 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ScrollViewComponent::setScrollTrack(v7, (int)&v23);
  v10 = HIDWORD(v23);
  if ( HIDWORD(v23) )
    v11 = (unsigned int *)(HIDWORD(v23) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id) )
    type_id<UIComponent,ScrollTrackComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id);
  v14 = type_id<UIComponent,ScrollTrackComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,ScrollTrackComponent>(void)::id[0]) == 1 )
    v15 = *(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v4, v14));
    v15 = 0;
  UIControl::weakRef((UIControl *)&v21, v3);
  ScrollTrackComponent::setScrollView(v15, (int)&v21);
  result = v22;
  if ( v22 )
    v17 = (unsigned int *)(v22 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v19 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
      }
      else
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::setAlpha(int result, float a2)
{
  *(float *)(result + 48) = a2;
  return result;
}


int __fastcall UIControl::setPropertyBag(UIControl *this, const UIPropertyBag *a2)
{
  UIControl *v2; // r4@1
  const UIPropertyBag *v3; // r6@1
  int v4; // r0@1
  int v5; // r5@1
  int v6; // r1@3
  int v7; // r0@3
  int v9; // [sp+0h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 20);
  v5 = 0;
  if ( v4 )
    v5 = PropertyBag::getChangeVersion((PropertyBag *)(v4 + 8));
  UIPropertyBag::clone((UIPropertyBag *)&v9, (int)v3);
  v6 = v9;
  v9 = 0;
  v7 = *((_DWORD *)v2 + 20);
  *((_DWORD *)v2 + 20) = v6;
  if ( v7 )
  {
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  return PropertyBag::setChangeVersion((PropertyBag *)(*((_DWORD *)v2 + 20) + 8), v5);
}


int __fastcall UIControl::initializeVisibility(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFFFD | 2 * a2;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setCheckedLockedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<ScrollbarBoxComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id) )
  {
    type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollbarBoxComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ScrollbarBoxComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


_BOOL4 __fastcall UIControl::hasPropertyBag(UIControl *this)
{
  return *((_DWORD *)this + 20) != 0;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setBackgroundControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::addControlCollectionFlag(int result, int a2)
{
  *(_DWORD *)(result + 160) |= a2;
  return result;
}


int __fastcall UIControl::getParent(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 88);
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
  v10 = *(_DWORD *)(a2 + 84);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall UIControl::_setPositionDiry(int result)
{
  __int64 i; // r4@1

  *(_WORD *)(result + 68) |= 0x2000u;
  for ( i = *(_QWORD *)(result + 92); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 8 )
  {
    result = *(_DWORD *)i;
    if ( !(*(_BYTE *)(*(_DWORD *)i + 69) & 0x20) )
      result = UIControl::_setPositionDiry((UIControl *)result);
  }
  return result;
}


char *__fastcall UIControl::setComponent<DebugComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id) )
  {
    type_id<UIComponent,DebugComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DebugComponent>(void)::id);
  }
  v5 = type_id<UIComponent,DebugComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,DebugComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setHoverControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::getDelayCollectionUpdate(a2) )
{
  UIControl::getParent((UIControl *)&v92, (int)v2);
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
  {
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  }
  v7 = type_id<UIComponent,InputComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,InputComponent>(void)::id[0]) == 1
    && (v8 = *(InputComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v7))) != 0 )
    v78 = v8;
    if ( InputComponent::getModal(v8) == 1 )
    {
      v9 = *((_DWORD *)v2 + 2);
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      v10 = *(_DWORD *)(v9 + 4);
      v11 = (unsigned int *)(v9 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v10 )
            std::__throw_bad_weak_ptr();
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
      v18 = (unsigned int *)(v9 + 8);
      v90 = *((_DWORD *)v2 + 1);
      v91 = v9;
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
      else
        ++*v18;
      UIControl::setModalAncestor((int)v2, (int)&v90);
      v20 = v91;
      if ( v91 )
        v21 = (unsigned int *)(v91 + 8);
        if ( &pthread_create )
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (**)(void))(*(_DWORD *)v20 + 12))();
          v23 = __ldrex(v11);
        while ( __strex(v23 - 1, v11) );
        v23 = (*v11)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
            v24 = __ldrex(v18);
          while ( __strex(v24 - 1, v18) );
          v24 = (*v18)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      v14 = 1;
      goto LABEL_56;
    }
    v14 = 1;
  else
    v14 = 0;
    v78 = 0;
  if ( v92 )
    UIControl::getModalAncestorWeak((UIControl *)&v88, v92);
    UIControl::setModalAncestor((int)v2, (int)&v88);
    v15 = v89;
    if ( v89 )
      v16 = (unsigned int *)(v89 + 8);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (**)(void))(*(_DWORD *)v15 + 12))();
LABEL_56:
  v25 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
  if ( !(v25 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
    type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
  v26 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
    v27 = *(DataBindingComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v26));
    v27 = 0;
  v79 = UIControl::isVisibleInTree(v2);
  if ( v27 )
    if ( DataBindingComponent::hasAlwaysBinds(v27) == 1 )
      ScreenView::_addToControlCollection(v4, v2, 1);
    DataBindingComponent::_updateCollectionBindingIndicies(v27);
  v28 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
  if ( !(v28 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
    type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
  v29 = type_id<UIComponent,AnimationComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v29)) )
    if ( v79 == 1 )
      ScreenView::_addToControlCollection(v4, v2, 8);
    else
      sub_1300F78(v4 + 184, v4 + 268, v2, 8);
  v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( !(v30 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  v31 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v31)) )
      ScreenView::_addToControlCollection(v4, v2, 16);
      sub_1300F78(v4 + 196, v4 + 268, v2, 16);
  if ( UIControl::hasRenderableComponent(v2) == 1 )
      ScreenView::_addToControlCollection(v4, v2, 64);
      sub_1300F78(v4 + 232, v4 + 268, v2, 64);
  v32 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
  if ( !(v32 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
    type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
  v33 = type_id<UIComponent,CustomRenderComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,CustomRenderComponent>(void)::id[0]) == 1 )
    if ( *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v33)) )
      v34 = UIControl::getPropertyBag(v2);
      gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v86, (int)"#flying_item_renderer");
      v35 = v87;
      v36 = (Json::Value *)(v34 + 8);
      if ( !Json::Value::isNull(v36) && Json::Value::isObject(v36) == 1 )
        v37 = (Json::Value *)Json::Value::operator[]((int)v36, v35);
        if ( Json::Value::isBool(v37) == 1 && Json::Value::asBool(v37, 0) == 1 )
          if ( v79 == 1 )
            ScreenView::_addToControlCollection(v4, v2, 128);
          else
            sub_1300F78(v4 + 244, v4 + 268, v2, 128);
  v38 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  if ( !(v38 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  v39 = type_id<UIComponent,SliderComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v39)) )
      ScreenView::_addToControlCollection(v4, v2, 1024);
      sub_1300F78(v4 + 256, v4 + 268, v2, 1024);
  v40 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  if ( !(v40 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
    type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
  v41 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
    if ( *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v41)) )
      sub_1300C90(v4 + 160, v2, 32);
      v42 = 1;
      v42 = 0;
    v42 = 0;
  v43 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
  if ( !(v43 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
    type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
  v44 = type_id<UIComponent,TextEditComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
    v45 = *(TextEditComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v44));
    if ( v45 )
      TextEditComponent::registerPropertyChangedNotifications(v45);
      v46 = 1;
      v46 = 0;
    v46 = 0;
  UIControl::getModalAncestor((UIControl *)&v84, (int)v2);
  if ( v84 == *(_DWORD *)v3[1] )
    v53 = v85;
    if ( v85 )
      v54 = (unsigned int *)(v85 + 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 == 1 )
        v58 = v14;
        v59 = (unsigned int *)(v53 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        v14 = v58;
        if ( v60 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
    v47 = v85;
    v48 = *((_BYTE *)v3 + 12);
    v49 = v14;
    v50 = (unsigned __int8)v42 & (v48 != 0);
      v51 = (unsigned int *)(v85 + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        v56 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    v61 = v50 == 0;
    v14 = v49;
    if ( v61 )
      sub_1300F78(v4 + 208, v4 + 268, v2, 4);
      sub_1300F78(v4 + 220, v4 + 268, v2, 256);
      sub_1300F78(v4 + 148, v4 + 268, v2, 2);
      FocusManager::removeControl(*(_DWORD *)(v4 + 348), v2, v4 + 268);
      if ( v42 == 1 )
        ScreenEvent::ScreenEvent((ScreenEvent *)&v82);
        LODWORD(v82) = 2;
        LOBYTE(v83) = 0;
        if ( UIControl::getHover(v2) == 1 )
          UIControl::setHover(v2, 0);
          HIDWORD(v82) = UIControl::getPropertyBag(v2);
          ScreenInputContext::ScreenInputContext((ScreenInputContext *)&ptr);
          UIControl::broadcastEvent(
            (int)v2,
            *(_DWORD *)(v4 + 132),
            (int)&ptr,
            *(_DWORD *)(v4 + 296),
            0,
            v82,
            SHIDWORD(v82),
            v83,
            SHIDWORD(v83));
          v62 = v81;
          if ( (_DWORD)v81 != HIDWORD(v81) )
          {
            do
            {
              v63 = *(_DWORD *)(v62 + 8);
              if ( v63 )
              {
                v64 = (unsigned int *)(v63 + 8);
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
                  (*(void (**)(void))(*(_DWORD *)v63 + 12))();
              }
              LODWORD(v62) = v62 + 12;
            }
            while ( (_DWORD)v62 != HIDWORD(v62) );
            LODWORD(v62) = v81;
          }
          if ( (_DWORD)v62 )
            operator delete((void *)v62);
          if ( ptr )
            operator delete(ptr);
      goto LABEL_192;
  if ( v46 == 1 )
      ScreenView::_addToControlCollection(v4, v2, 4);
  if ( v14 == 1 )
    if ( InputComponent::getAlwaysListensToInput(v78) == 1 )
      v66 = v4 + 220;
      if ( v79 == 1 )
        sub_1300C90(v66, v2, 256);
        sub_1300F78(v66, v4 + 268, v2, 256);
      v67 = v4 + 148;
        sub_1300C90(v67, v2, 2);
        sub_1300F78(v67, v4 + 268, v2, 2);
  v68 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  if ( !(v68 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  v69 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1 )
    v70 = *(FocusComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v69));
    if ( v70 )
      v71 = FocusComponent::getFocusEnabled(v70);
      v72 = *(FocusManager **)(v4 + 348);
      if ( v71 )
        if ( v79 == 1 )
          FocusManager::addControl(v72, v2);
          FocusManager::removeControl((int)v72, v2, v4 + 268);
        FocusManager::removeControl((int)v72, v2, v4 + 268);
LABEL_192:
  v73 = v93;
  if ( v93 )
    v74 = (unsigned int *)(v93 + 4);
    if ( &pthread_create )
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 == 1 )
      v76 = (unsigned int *)(v73 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 8))(v73);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 12))(v73);
  return 1;
}


unsigned int __fastcall UIControl::areAllAncestorsEnabled(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 0x10u) >> 4;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setCheckedLockedHoverStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::getParent(int result, int a2)
{
  int v2; // r12@1
  unsigned int v3; // r2@2
  unsigned int *v4; // lr@2
  unsigned int v5; // r3@5
  unsigned int v6; // r4@6
  signed int v7; // r3@7
  int v8; // r1@12

  v2 = *(_DWORD *)(a2 + 88);
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
          v7 = 1;
          v2 = 0;
          goto LABEL_12;
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
    v7 = 0;
    if ( !*(_DWORD *)(v2 + 4) )
      v7 = 1;
  }
  else
    v7 = 1;
LABEL_12:
  v8 = *(_DWORD *)(a2 + 84);
  if ( v7 )
    v8 = 0;
  *(_DWORD *)result = v8;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v24 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setSliderBoxControl((int)v7, (int)&v24);
  v10 = HIDWORD(v24);
  if ( HIDWORD(v24) )
    v11 = (unsigned int *)(HIDWORD(v24) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v13 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id) )
    type_id<UIComponent,SliderBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id);
  v14 = type_id<UIComponent,SliderBoxComponent>(void)::id[0];
  result = UIControl::_hasComponent((UIControl *)v4, type_id<UIComponent,SliderBoxComponent>(void)::id[0]);
  if ( result == 1 )
    result = UIControl::_getComponentIndex((UIControl *)v4, v14);
    v16 = *(SliderBoxComponent **)(*(_DWORD *)(v4 + 108) + 4 * result);
    if ( v16 )
      v17 = UIComponent::getOwner(v7);
      UIControl::weakRef((UIControl *)&v22, v17);
      SliderBoxComponent::setSliderControl(v16, (int)&v22);
      result = v23;
      if ( v23 )
      {
        v18 = (unsigned int *)(v23 + 8);
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
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      }
    v20 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      else
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1 )
{
  v7 = UIControl::_getComponentIndex((UIControl *)v2, v6);
  v8 = *(DataBindingComponent **)(*(_DWORD *)(v2 + 108) + 4 * v7);
  if ( !v8 )
    return 1;
  if ( ScreenView::_shouldBindChildren((ScreenView *)v7, *((_BYTE *)v3 + 4), (UIControl *)v2, v8) == 1 )
  {
    v9 = *(ScreenController **)(v4 + 124);
    v10 = UIControl::isVisibleInTree((UIControl *)v2);
    DataBindingComponent::bindHighPriorityBinds(v8, v9, v10);
  }
  return 0;
}


            if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
{
              v13 = *(SpriteComponent **)(*(_DWORD *)(v1 + 108) + 4
                                                                * UIControl::_getComponentIndex((UIControl *)v1, v12));
              if ( v13 )
              {
                __asm { VMOV            R1, S16 }
                SpriteComponent::setClipRatio(v13, _R1);
              }
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v7);
            while ( __strex(result - 1, v7) );
          else
            result = (*v7)--;
          if ( result == 1 )
            v15 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v15);
              while ( __strex(result - 1, v15) );
            else
              result = (*v15)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
      {
        __clrex();
        v6 = v8;
    }
  }
  return result;
}


    if ( UIControl::_hasComponent(v6, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
{
    else
      v9 = 0;
    v10 = *(_DWORD **)UIControl::getName(*i);
    v11 = *(v10 - 3);
    if ( v11 != *((_DWORD *)*v2 - 3) || memcmp(v10, *v2, v11) )
    {
      result = *(_DWORD *)FactoryComponent::getFactoryName(v9);
      v12 = *(_DWORD *)(result - 12);
      if ( v12 != *((_DWORD *)*v2 - 3) )
        continue;
      result = memcmp((const void *)result, *v2, v12);
      if ( result )
    }
    FactoryComponent::destroyAll(v9);
    result = (*(int (**)(void))(**(_DWORD **)(v13 + 132) + 20))();
  }
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    result = 0;
  return result;
}


char *__fastcall UIControl::getSize(UIControl *this)
{
  return (char *)this + 24;
}


UIControl *__fastcall UIControl::getPosition(UIControl *this)
{
  UIControl *v1; // r4@1

  v1 = this;
  if ( *((_BYTE *)this + 69) & 0x20 )
    UIControl::_setCachedPosition(this);
  return (UIControl *)((char *)v1 + 72);
}


int __fastcall UIControl::broadcastEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v9; // r4@1
  int v10; // r8@1
  int v11; // r9@1
  int v12; // r11@1
  unsigned __int16 i; // r7@1
  int v14; // r0@2
  bool v15; // zf@2

  v9 = *(_QWORD *)(a1 + 108);
  v10 = a4;
  v11 = a3;
  v12 = a2;
  for ( i = 0; HIDWORD(v9) != (_DWORD)v9; LODWORD(v9) = v9 + 4 )
  {
    v14 = *(_DWORD *)v9;
    v15 = *(_DWORD *)v9 == 0;
    if ( *(_DWORD *)v9 )
      v15 = v14 == a5;
    if ( !v15 )
      i |= (*(int (__cdecl **)(int, int, int, int, int, int, int, int))(*(_DWORD *)v14 + 12))(
             v14,
             v12,
             v11,
             v10,
             a6,
             a7,
             a8,
             a9);
  }
  return i;
}


int __fastcall UIControl::UIControl(int a1, unsigned int a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26D7018;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_DA7364((void **)(a1 + 12), "Undefined");
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_WORD *)(v2 + 68) = *(_WORD *)(v2 + 68) & 0xC000 | 0x229A;
  _aeabi_memclr4(v2 + 72, 84);
  *(_QWORD *)(v2 + 156) = v3;
  result = v2;
  *(_DWORD *)(v2 + 164) = 0;
  *(_DWORD *)(v2 + 168) = 0;
  return result;
}


int __fastcall UIControl::getPropertyBag(UIControl *this)
{
  UIControl *v1; // r4@1
  int result; // r0@1
  UIPropertyBag *v3; // r5@2
  int v4; // r0@2
  int v5; // [sp+0h] [bp-20h]@2

  v1 = this;
  result = *((_DWORD *)this + 20);
  if ( !result )
  {
    Json::Value::Value(&v5, 0);
    v3 = (UIPropertyBag *)operator new(0x28u);
    UIPropertyBag::UIPropertyBag(v3, (const Json::Value *)&v5);
    v4 = *((_DWORD *)v1 + 20);
    *((_DWORD *)v1 + 20) = v3;
    if ( v4 )
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
    Json::Value::~Value((Json::Value *)&v5);
    result = *((_DWORD *)v1 + 20);
  }
  return result;
}


signed int __fastcall UIControl::hasRenderableComponent(UIControl *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 15);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


unsigned int __fastcall UIControl::setVisible(UIControl *this, int a2, int a3, int a4)
{
  UIControl *v4; // r4@1
  int v5; // r6@1
  unsigned int result; // r0@1
  int v7; // r8@1
  void (*v8)(void); // r2@3
  unsigned int v9; // r3@4
  unsigned int *v10; // r1@4
  unsigned int v11; // r7@7
  unsigned int v12; // r5@8
  int v13; // r5@9
  unsigned int *v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int *v16; // r7@16
  unsigned int v17; // r0@18
  char v18; // r0@24
  int v19; // r1@27
  int v20; // r0@28
  unsigned int v21; // r3@29
  bool v22; // zf@30
  int v23; // r1@33
  UIComponent *v24; // r6@33
  LayoutVariable *v25; // r0@34
  LayoutVariable *v26; // r0@38
  int *v27; // r5@44
  int *v28; // r6@44
  int v29; // t1@45
  int v30; // r2@45
  int v31; // r0@48
  int (__cdecl *v32)(int); // r2@48
  unsigned int v33; // r3@49
  unsigned int *v34; // r1@49
  unsigned int v35; // r7@52
  unsigned int v36; // r6@53
  int v37; // r4@54
  unsigned int *v38; // r1@55
  unsigned int *v39; // r5@61
  int v40; // [sp+0h] [bp-28h]@54
  int v41; // [sp+4h] [bp-24h]@48
  int v42; // [sp+8h] [bp-20h]@9
  int v43; // [sp+Ch] [bp-1Ch]@3

  v4 = this;
  v5 = a4;
  result = *((_WORD *)this + 34);
  v7 = a3;
  if ( a2 != ((result >> 1) & 1) )
  {
    *((_WORD *)v4 + 34) = result & 0xFFFD | 2 * a2;
    if ( !(result & 0x400) )
    {
      v8 = *(void (**)(void))(**((_DWORD **)v4 + 39) + 32);
      v43 = *((_DWORD *)v4 + 2);
      if ( !v43 )
        std::__throw_bad_weak_ptr();
      v9 = *(_DWORD *)(v43 + 4);
      v10 = (unsigned int *)(v43 + 4);
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
      v42 = *((_DWORD *)v4 + 1);
      v8();
      v13 = v43;
      if ( v43 )
        v14 = (unsigned int *)(v43 + 4);
        if ( &pthread_create )
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          v16 = (unsigned int *)(v13 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
      if ( v5 == 1 )
        v18 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
        __dmb();
        if ( !(v18 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
        v19 = *((_DWORD *)v4 + 26);
        if ( (1 << SLOBYTE(type_id<UIComponent,LayoutComponent>(void)::id[0])) & v19 )
          v20 = 0;
          if ( type_id<UIComponent,LayoutComponent>(void)::id[0] )
            v21 = 1;
            {
              v22 = (v21 & v19) == v21;
              v21 *= 2;
              if ( v22 )
                ++v20;
            }
            while ( v21 < 1 << SLOBYTE(type_id<UIComponent,LayoutComponent>(void)::id[0]) );
          v23 = *((_DWORD *)v4 + 27);
          v24 = *(UIComponent **)(v23 + 4 * v20);
          if ( v24 )
            v25 = (LayoutVariable *)LayoutComponent::getVariable(*(UIComponent **)(v23 + 4 * v20), 2);
            if ( v25 )
              if ( *((_BYTE *)v4 + 68) & 2 )
                LayoutVariable::clearOverrideValue(v25);
              else
                LayoutVariable::setOverrideValue(v25, 0.0);
            v26 = (LayoutVariable *)LayoutComponent::getVariable(v24, 3);
            if ( v26 )
                LayoutVariable::clearOverrideValue(v26);
                LayoutVariable::setOverrideValue(v26, 0.0);
            LayoutComponent::layout((int)v24, (int)&unk_262C152, 2, 0);
            if ( *((_BYTE *)v4 + 68) & 2 )
              (*(void (**)(void))(**((_DWORD **)v4 + 39) + 24))();
              LayoutComponent::layout((int)v24, (int)&unk_262C154, 2, 0);
      v27 = (int *)(*(_QWORD *)((char *)v4 + 108) >> 32);
      v28 = (int *)*(_QWORD *)((char *)v4 + 108);
      while ( v27 != v28 )
        v29 = *v28;
        ++v28;
        v30 = *((_WORD *)v4 + 34);
        (*(void (**)(void))(*(_DWORD *)v29 + 36))();
      if ( v7 )
        (*(void (**)(void))(**((_DWORD **)v4 + 39) + 20))();
      v31 = *((_DWORD *)v4 + 39);
      v32 = *(int (__cdecl **)(int))(*(_DWORD *)v31 + 44);
      v41 = *((_DWORD *)v4 + 2);
      if ( !v41 )
      v33 = *(_DWORD *)(v41 + 4);
      v34 = (unsigned int *)(v41 + 4);
          if ( !v33 )
          v35 = __ldrex(v34);
          if ( v35 == v33 )
          v33 = v35;
        v36 = __strex(v33 + 1, v34);
        v33 = v35;
      while ( v36 );
      v40 = *((_DWORD *)v4 + 1);
      result = v32(v31);
      v37 = v41;
      if ( v41 )
        v38 = (unsigned int *)(v41 + 4);
            result = __ldrex(v38);
          while ( __strex(result - 1, v38) );
          result = (*v38)--;
        if ( result == 1 )
          v39 = (unsigned int *)(v37 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
              result = __ldrex(v39);
            while ( __strex(result - 1, v39) );
            result = (*v39)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
    }
  }
  return result;
}


int __fastcall UIControl::notifyChildRemoved(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 108); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 24))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


char *__fastcall UIControl::setComponent<SliderManagerComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id) )
  {
    type_id<UIComponent,SliderManagerComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderManagerComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SliderManagerComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,SliderManagerComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


unsigned int __fastcall UIControl::isTemplate(UIControl *this)
{
  return (*((_BYTE *)this + 69) & 4u) >> 2;
}


    if ( UIControl::_hasComponent(v7, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
{
    else
      v10 = 0;
    v11 = *(_DWORD **)UIControl::getName(*i);
    v12 = *(v11 - 3);
    if ( v12 != *((_DWORD *)*v3 - 3) || memcmp(v11, *v3, v12) )
    {
      result = *(_DWORD *)FactoryComponent::getFactoryName(v10);
      v13 = *(_DWORD *)(result - 12);
      if ( v13 != *((_DWORD *)*v3 - 3) )
        continue;
      result = memcmp((const void *)result, *v3, v13);
      if ( result )
    }
    FactoryComponent::destroy((int)v10, v15);
    result = (*(int (**)(void))(**(_DWORD **)(v14 + 132) + 20))();
  }
  return result;
}


int __fastcall UIControl::reset(UIControl *this, int a2)
{
  UIControl *v2; // r4@1
  int result; // r0@1
  UIControl **v4; // r5@2 OVERLAPPED
  UIControl **v5; // r6@2 OVERLAPPED
  UIControl *v6; // t1@3
  int *v7; // r4@4
  int *i; // r5@4
  __int64 v9; // kr00_8@4
  int v10; // t1@5

  v2 = this;
  *((_WORD *)this + 34) = *((_WORD *)this + 34) & 0xDFDE | 0x2000;
  result = 0;
  *((_DWORD *)v2 + 40) = 0;
  if ( a2 == 1 )
  {
    for ( *(_QWORD *)&v4 = *(_QWORD *)((char *)v2 + 92); v5 != v4; result = UIControl::reset(v6, 1) )
    {
      v6 = *v4;
      v4 += 2;
    }
  }
  v9 = *(_QWORD *)((char *)v2 + 108);
  v7 = (int *)(*(_QWORD *)((char *)v2 + 108) >> 32);
  for ( i = (int *)v9; v7 != i; result = (*(int (**)(void))(*(_DWORD *)v10 + 52))() )
    v10 = *i;
    ++i;
  return result;
}


int __fastcall UIControl::getAncestorWhere(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  unsigned int v6; // r2@2
  int result; // r0@2
  unsigned int v8; // r3@5
  unsigned int v9; // r7@6
  int v10; // r6@7
  unsigned int v11; // r2@11
  unsigned int *v12; // r1@11
  unsigned int v13; // r3@14
  unsigned int v14; // r7@15
  signed int v15; // r1@16
  int v16; // r2@21
  int v17; // r7@23
  unsigned int *v18; // r1@24
  unsigned int *v19; // r6@30

  v3 = a1;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a3;
  *(_DWORD *)(v3 + 4) = v4;
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v6 = *(_DWORD *)(v4 + 4);
  result = v4 + 4;
  do
  {
    while ( 1 )
    {
      if ( !v6 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v8 = __ldrex((unsigned int *)result);
      if ( v8 == v6 )
        break;
      __clrex();
      v6 = v8;
    }
    v9 = __strex(v6 + 1, (unsigned int *)result);
    v6 = v8;
  }
  while ( v9 );
  __dmb();
  v10 = *(_DWORD *)(a2 + 4);
  for ( *(_DWORD *)v3 = v10; *(_DWORD *)v3; v10 = *(_DWORD *)v3 )
    if ( !*(_DWORD *)(v5 + 8) )
      sub_DA7654();
    result = (*(int (__fastcall **)(int, int))(v5 + 12))(v5, v10);
    if ( result )
      break;
    result = *(_DWORD *)(v10 + 88);
      v11 = *(_DWORD *)(result + 4);
      v12 = (unsigned int *)(result + 4);
      do
      {
        while ( 1 )
        {
          if ( !v11 )
          {
            v15 = 1;
            result = 0;
            goto LABEL_21;
          }
          __dmb();
          v13 = __ldrex(v12);
          if ( v13 == v11 )
            break;
          __clrex();
          v11 = v13;
        }
        v14 = __strex(v11 + 1, v12);
        v11 = v13;
      }
      while ( v14 );
      v15 = 0;
      if ( !*(_DWORD *)(result + 4) )
        v15 = 1;
    else
      v15 = 1;
LABEL_21:
    v16 = *(_DWORD *)(v10 + 84);
    if ( v15 )
      v16 = 0;
    *(_DWORD *)v3 = v16;
    v17 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = result;
    if ( v17 )
      v18 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      else
        result = (*v18)--;
      if ( result == 1 )
        v19 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
          do
            result = __ldrex(v19);
          while ( __strex(result - 1, v19) );
        else
          result = (*v19)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


char *__fastcall UIControl::setComponent<SpriteComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
  {
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,SpriteComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::clearControlCollectionFlag(int result)
{
  *(_DWORD *)(result + 160) = 0;
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  TextEditComponent::setLabelControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


unsigned int __fastcall UIControl::propagateAlpha(UIControl *this)
{
  return (*((_BYTE *)this + 69) & 8u) >> 3;
}


char *__fastcall UIControl::setComponent<GridComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
  {
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GridComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,GridComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int *__fastcall UIControl::ControlResolutionInfo::ControlResolutionInfo(int *a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int *v6; // r5@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_DA73B4(a1, a2);
  v6[1] = v5;
  v6[4] = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7(v6 + 2, v4, 2);
    v6[5] = *(_DWORD *)(v4 + 12);
    v6[4] = *(_DWORD *)(v4 + 8);
  }
  return v6;
}


char *__fastcall UIControl::setComponent<LayoutComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v5 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,LayoutComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setProgressControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


            if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
{
              v13 = *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v12));
              if ( v13 )
                TextEditComponent::setText(v13, v3);
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          else
            result = (*v6)--;
          if ( result == 1 )
            v14 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v14);
              while ( __strex(result - 1, v14) );
            else
              result = (*v14)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
      {
        __clrex();
        v7 = v8;
    }
  }
  return result;
}


int __fastcall UIControl::notifyLayoutChange(UIControl *this)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  char i; // r4@1
  int v4; // t1@2

  *(_QWORD *)&v1 = *(_QWORD *)((char *)this + 108);
  for ( i = 0; v2 != v1; i |= (*(int (**)(void))(*(_DWORD *)v4 + 48))() )
  {
    v4 = *v1;
    ++v1;
  }
  return i & 1;
}


void __fastcall UIControl::reloadFromControl(UIControl *this, const UIControl *a2)
{
  const UIControl *v2; // r11@1
  UIControl *v3; // r5@1
  __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@1
  int v6; // r1@4
  __int64 v7; // r0@4
  unsigned int v8; // r4@5
  const UIPropertyBag *v9; // r4@8
  UIPropertyBag *v10; // r0@8
  unsigned int v11; // r4@9
  __int64 v12; // r2@9
  char *v13; // r5@10
  _BYTE *v14; // r7@10
  int v15; // r6@11
  signed int v16; // r9@14
  signed int v17; // r10@14
  unsigned int v18; // r0@14
  unsigned int v19; // r1@16
  unsigned int v20; // r8@16
  UIControl **v21; // r0@31
  UIControl **v22; // r9@31
  unsigned int v23; // r10@35
  _DWORD *v24; // r6@35
  int v25; // r8@35
  unsigned int v26; // r11@35
  _DWORD *v27; // r4@35
  size_t v28; // r5@35
  int v29; // r7@36
  _DWORD *v30; // r1@36
  int v31; // r1@40
  const UIControl *v32; // [sp+0h] [bp-38h]@1
  UIControl *v33; // [sp+4h] [bp-34h]@35
  UIControl **v34; // [sp+8h] [bp-30h]@31
  UIControl *v35; // [sp+Ch] [bp-2Ch]@9
  char *v36; // [sp+Ch] [bp-2Ch]@35
  void *ptr; // [sp+10h] [bp-28h]@14
  _BYTE *ptra; // [sp+10h] [bp-28h]@31

  v2 = a2;
  v3 = this;
  v32 = a2;
  v4 = *(_QWORD *)((char *)a2 + 108);
  v5 = *(_QWORD *)((char *)this + 108);
  if ( HIDWORD(v5) - (_DWORD)v5 == HIDWORD(v4) - (_DWORD)v4
    && *((_DWORD *)this + 26) == *((_DWORD *)a2 + 26)
    && HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = *(_DWORD *)v4;
    (*(void (**)(void))(**(_DWORD **)v5 + 56))();
    v7 = *(_QWORD *)((char *)v3 + 108);
    if ( (unsigned int)((HIDWORD(v7) - (signed int)v7) >> 2) >= 2 )
    {
      v8 = 1;
      do
      {
        HIDWORD(v7) = *(_DWORD *)(*((_DWORD *)v2 + 27) + 4 * v8);
        (*(void (**)(void))(**(_DWORD **)(v7 + 4 * v8) + 56))();
        v7 = *(_QWORD *)((char *)v3 + 108);
        ++v8;
      }
      while ( v8 < (HIDWORD(v7) - (signed int)v7) >> 2 );
    }
  }
  if ( *((_DWORD *)v2 + 20) )
    v9 = (const UIPropertyBag *)UIControl::getPropertyBag(v2);
    v10 = (UIPropertyBag *)UIControl::getPropertyBag(v3);
    UIPropertyBag::append(v10, v9);
  v35 = v3;
  v11 = 0;
  v12 = *(_QWORD *)((char *)v2 + 92);
  if ( HIDWORD(v12) == (_DWORD)v12 )
    v13 = 0;
    v14 = 0;
  else
    v15 = 0;
    do
      if ( v13 == (char *)v15 )
        v16 = v13 - v14;
        ptr = v14;
        v14 = 0;
        v17 = v16 >> 2;
        v18 = v16 >> 2;
        if ( !(v16 >> 2) )
          v18 = 1;
        v19 = v18 + (v16 >> 2);
        v20 = v18 + (v16 >> 2);
        if ( 0 != v19 >> 30 )
          v20 = 0x3FFFFFFF;
        if ( v19 < v18 )
        if ( v20 )
        {
          if ( v20 >= 0x40000000 )
            sub_DA7414();
          v14 = operator new(4 * v20);
        }
        *(_DWORD *)&v14[4 * v17] = v11;
        if ( v17 )
          _aeabi_memmove4(v14, ptr);
        v13 = &v14[4 * v17];
        if ( ptr )
          operator delete(ptr);
        v12 = *(_QWORD *)((char *)v2 + 92);
        v15 = (int)&v14[4 * v20];
      else
        *(_DWORD *)v13 = v11;
      ++v11;
      v13 += 4;
    while ( v11 < (HIDWORD(v12) - (signed int)v12) >> 3 );
  ptra = v14;
  v21 = (UIControl **)(*(_QWORD *)((char *)v35 + 92) >> 32);
  v22 = (UIControl **)*(_QWORD *)((char *)v35 + 92);
  v34 = (UIControl **)(*(_QWORD *)((char *)v35 + 92) >> 32);
  while ( v22 != v21 )
    if ( (v13 - v14) >> 2 )
      v36 = v13;
      v23 = (v13 - v14) >> 2;
      v24 = v14;
      v33 = *v22;
      v25 = *((_DWORD *)v2 + 23);
      v26 = 0;
      v27 = (_DWORD *)*((_DWORD *)*v22 + 3);
      v28 = *(v27 - 3);
      while ( 1 )
        v29 = *(_DWORD *)(v25 + 8 * *v24);
        v30 = *(_DWORD **)(v29 + 12);
        if ( v28 == *(v30 - 3) && !memcmp(v27, v30, v28) )
          break;
        ++v26;
        ++v24;
        if ( v26 >= v23 )
          v2 = v32;
          v14 = ptra;
          v13 = v36;
          goto LABEL_32;
      UIControl::reloadFromControl(v33, (const UIControl *)v29);
      v31 = (int)(v24 + 1);
      v2 = v32;
      if ( (char *)(v24 + 1) != v36 && v36 != (char *)v31 )
        _aeabi_memmove4(v24, v31);
      v13 = v36 - 4;
      v14 = ptra;
LABEL_32:
    v22 += 2;
    v21 = v34;
  if ( v14 )
    j_j_j__ZdlPv_3(v14);
}


char *__fastcall UIControl::setComponent<CollectionItemComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id) )
  {
    type_id<UIComponent,CollectionItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id);
  }
  v5 = type_id<UIComponent,CollectionItemComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,CollectionItemComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


void __fastcall UIControl::addChild(int a1, int a2, int a3)
{
  int v3; // r11@1
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r10@1
  int v7; // r6@2
  __int16 v8; // r0@2
  unsigned int v9; // r1@2
  int v10; // r9@2
  unsigned int *v11; // r0@2
  unsigned int v12; // r2@5
  unsigned int v13; // r3@6
  int v14; // r4@7
  unsigned int *v15; // r5@7
  unsigned int v16; // r1@9
  unsigned int v17; // r1@14
  unsigned int v18; // r0@20
  unsigned int v19; // r0@27
  int v20; // r0@30
  unsigned int *v21; // r2@31
  unsigned int v22; // r1@33
  unsigned int v23; // r0@40
  int v24; // r1@45
  int v25; // r7@45
  unsigned int v26; // r2@46
  unsigned int *v27; // r0@46
  unsigned int v28; // r3@49
  unsigned int v29; // r6@50
  signed __int16 v30; // r2@51
  int v31; // r3@52
  unsigned int v32; // r1@56
  __int16 v33; // r1@59
  bool v34; // zf@62
  signed int v35; // r1@62
  signed int v36; // r2@62
  __int64 v37; // r0@67
  unsigned __int64 *v38; // r0@68
  int v39; // r1@69 OVERLAPPED
  int v40; // r2@69
  int v41; // r0@70
  unsigned int *v42; // r0@71
  unsigned int v43; // r1@73
  int v44; // r0@74
  int v45; // r1@75 OVERLAPPED
  int v46; // r2@75 OVERLAPPED
  __int64 v47; // r0@77
  unsigned int *v48; // r4@82
  unsigned int v49; // r0@84

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v7 = *(_DWORD *)a2;
  v8 = *(_WORD *)(*(_DWORD *)a2 + 68);
  v9 = *(_DWORD *)(v5 + 4);
  v10 = v8 & 0x18;
  v11 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v9 )
        break;
      __clrex();
      v9 = v12;
    }
    v13 = __strex(v9 + 1, v11);
    v9 = v12;
  }
  while ( v13 );
  __dmb();
  v14 = *(_DWORD *)(v3 + 4);
  v15 = (unsigned int *)(v5 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
  else
    ++*v15;
      v17 = __ldrex(v11);
    while ( __strex(v17 - 1, v11) );
    v17 = (*v11)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( &pthread_create )
      do
        v18 = __ldrex(v15);
      while ( __strex(v18 - 1, v15) );
    else
      v18 = (*v15)--;
    if ( v18 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  *(_DWORD *)(v7 + 84) = v14;
      v19 = __ldrex(v15);
    while ( __strex(v19 + 1, v15) );
  v20 = *(_DWORD *)(v7 + 88);
  if ( v20 )
    v21 = (unsigned int *)(v20 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  *(_DWORD *)(v7 + 88) = v5;
      v23 = __ldrex(v15);
    while ( __strex(v23 - 1, v15) );
    v23 = (*v15)--;
  if ( v23 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v24 = *(_DWORD *)v6;
  v25 = *(_DWORD *)(*(_DWORD *)v6 + 88);
  if ( v25 )
    v26 = *(_DWORD *)(v25 + 4);
    v27 = (unsigned int *)(v25 + 4);
    while ( v26 )
      v28 = __ldrex(v27);
      if ( v28 == v26 )
      {
        v29 = __strex(v26 + 1, v27);
        v26 = v28;
        if ( !v29 )
        {
          __dmb();
          v30 = 16;
          if ( *v27 )
          {
            v31 = *(_DWORD *)(v24 + 84);
            if ( v31 )
              v30 = (unsigned __int8)*(_WORD *)(v31 + 68) & (unsigned __int8)(2 * *(_WORD *)(v31 + 68)) & 0x10;
          }
          *(_WORD *)(v24 + 68) = v30 | *(_WORD *)(v24 + 68) & 0xFFEF;
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v27);
            while ( __strex(v32 - 1, v27) );
          else
            v32 = (*v27)--;
          if ( v32 == 1 )
            v48 = (unsigned int *)(v25 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
            if ( &pthread_create )
            {
              __dmb();
              do
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
            }
            else
              v49 = (*v48)--;
            if ( v49 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
          goto LABEL_59;
        }
      }
      else
        __clrex();
  *(_WORD *)(v24 + 68) |= 0x10u;
LABEL_59:
  v33 = *(_WORD *)(*(_DWORD *)v6 + 68);
  if ( !(v33 & 8) )
    if ( v10 != 24 )
      goto LABEL_68;
LABEL_67:
    HIDWORD(v37) = 1;
    LODWORD(v37) = *(_DWORD *)v6;
    UIControl::_propagateLockStateChange(v37);
    goto LABEL_68;
  v34 = (v33 & 0x10) == 0;
  v35 = 0;
  v36 = 0;
  if ( v34 )
    v35 = 1;
  if ( v10 != 24 )
    v36 = 1;
  if ( v36 != v35 )
    goto LABEL_67;
LABEL_68:
  v38 = (unsigned __int64 *)(v3 + 92);
  if ( v4 != 1 )
    *(_QWORD *)&v45 = *(_QWORD *)(v3 + 92);
    if ( v45 != v46 || v46 == *(_DWORD *)(v3 + 100) )
      j_j_j__ZNSt6vectorISt10shared_ptrI9UIControlESaIS2_EE13_M_insert_auxIJS2_EEEvN9__gnu_cxx17__normal_iteratorIPS2_S4_EEDpOT_(
        (int)v38,
        v45,
        v6);
      return;
    v47 = *(_DWORD *)v6;
    *(_QWORD *)v46 = v47;
    LODWORD(v47) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = HIDWORD(v47);
    *(_DWORD *)(v46 + 4) = v47;
    v44 = v46 + 8;
    *(_DWORD *)v6 = HIDWORD(v47);
    goto LABEL_88;
  *(_QWORD *)&v39 = *(_QWORD *)(v3 + 96);
  if ( v39 == v40 )
    j_j_j__ZNSt6vectorISt10shared_ptrI9UIControlESaIS2_EE19_M_emplace_back_auxIJRS2_EEEvDpOT_(v38, v6);
    return;
  *(_DWORD *)v39 = *(_DWORD *)v6;
  v41 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v39 + 4) = v41;
  if ( v41 )
    v42 = (unsigned int *)(v41 + 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 + 1, v42) );
      v44 = *(_DWORD *)(v3 + 96) + 8;
      goto LABEL_88;
    ++*v42;
  v44 = v39 + 8;
LABEL_88:
  *(_DWORD *)(v3 + 96) = v44;
}


void __fastcall UIControl::_propagateLockStateChange(__int64 this)
{
  __int64 v1; // r4@1
  int v2; // r0@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r1@9
  char *v8; // r0@9
  int v9; // r4@10
  unsigned int *v10; // r1@11
  unsigned int v11; // r0@13
  unsigned int *v12; // r5@17
  unsigned int v13; // r0@19
  int v14; // r1@25
  char *v15; // r6@26
  int v16; // r8@26
  unsigned int v17; // r11@27
  int v18; // r0@28
  int v19; // r8@28
  unsigned int *v20; // r1@29
  unsigned int v21; // r2@31
  int v22; // r5@34 OVERLAPPED
  int v23; // r6@34 OVERLAPPED
  int v24; // r0@35
  __int16 v25; // r1@35
  char *v26; // r0@39
  int v27; // r1@40
  unsigned int *v28; // r1@41
  unsigned int v29; // r0@43
  int v30; // r1@48
  int v31; // r9@48
  unsigned int v32; // r2@49
  unsigned int *v33; // r0@49
  unsigned int v34; // r3@52
  unsigned int v35; // r4@53
  signed __int16 v36; // r2@54
  int v37; // r3@55
  unsigned int v38; // r1@59
  unsigned int *v39; // r4@64
  unsigned int v40; // r0@66
  unsigned int *v41; // r1@72
  unsigned int v42; // r0@74
  unsigned int *v43; // r4@78
  unsigned int v44; // r0@80
  unsigned int v45; // r1@87
  int v46; // r0@87
  int v47; // r0@90
  __int64 v48; // r4@92
  int v49; // r4@99
  unsigned int *v50; // r1@100
  unsigned int v51; // r0@102
  unsigned int *v52; // r7@106
  unsigned int v53; // r0@108
  int v54; // [sp+18h] [bp-70h]@92
  int v55; // [sp+20h] [bp-68h]@93
  int v56; // [sp+24h] [bp-64h]@93
  __int64 v57; // [sp+28h] [bp-60h]@10
  int v58; // [sp+28h] [bp-60h]@93
  signed int v59; // [sp+2Ch] [bp-5Ch]@90
  int v60; // [sp+30h] [bp-58h]@87
  int v61; // [sp+34h] [bp-54h]@89
  int v62; // [sp+38h] [bp-50h]@93
  int v63; // [sp+3Ch] [bp-4Ch]@93
  int v64; // [sp+50h] [bp-38h]@9
  int v65; // [sp+54h] [bp-34h]@1
  char *v66; // [sp+58h] [bp-30h]@1
  char *v67; // [sp+5Ch] [bp-2Ch]@1
  char *v68; // [sp+60h] [bp-28h]@1

  v1 = this;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v2 = *(_DWORD *)(this + 8);
  v65 = v2;
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
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
  v7 = *(_DWORD *)(v1 + 4);
  v64 = *(_DWORD *)(v1 + 4);
  v8 = v67;
  if ( v67 == v68 )
    std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
      &v66,
      (int)&v64);
    v57 = v1;
    v9 = v65;
    if ( v65 )
      v10 = (unsigned int *)(v65 + 4);
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
  else
    *(_DWORD *)v67 = v7;
    v14 = v65;
    v65 = 0;
    *((_DWORD *)v8 + 1) = v14;
    v64 = 0;
    v67 = v8 + 8;
  v15 = v67;
  v16 = (int)v66;
  if ( v67 != v66 )
    v17 = 0;
    do
      v18 = *(_DWORD *)(v16 + 8 * v17);
      v19 = *(_DWORD *)(v16 + 8 * v17 + 4);
      if ( v19 )
        v20 = (unsigned int *)(v19 + 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 + 1, v20) );
          ++*v20;
      *(_QWORD *)&v22 = *(_QWORD *)(v18 + 92);
      while ( v22 != v23 )
        if ( *(_BYTE *)(*(_DWORD *)v22 + 68) & 8 )
          v26 = v67;
          if ( v67 == v68 )
          {
            std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl> const&>(
              (unsigned __int64 *)&v66,
              v22);
          }
          else
            *(_DWORD *)v67 = *(_DWORD *)v22;
            v27 = *(_DWORD *)(v22 + 4);
            *((_DWORD *)v26 + 1) = v27;
            if ( v27 )
            {
              v28 = (unsigned int *)(v27 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v29 = __ldrex(v28);
                while ( __strex(v29 + 1, v28) );
                v26 = v67;
              }
              else
                ++*v28;
            }
            v67 = v26 + 8;
        v30 = *(_DWORD *)v22;
        v31 = *(_DWORD *)(*(_DWORD *)v22 + 88);
        if ( v31 )
          v32 = *(_DWORD *)(v31 + 4);
          v33 = (unsigned int *)(v31 + 4);
          while ( v32 )
            __dmb();
            v34 = __ldrex(v33);
            if ( v34 == v32 )
              v35 = __strex(v32 + 1, v33);
              v32 = v34;
              if ( !v35 )
                v36 = 16;
                if ( *v33 )
                {
                  v37 = *(_DWORD *)(v30 + 84);
                  if ( v37 )
                    v36 = (unsigned __int8)*(_WORD *)(v37 + 68) & (unsigned __int8)(2 * *(_WORD *)(v37 + 68)) & 0x10;
                }
                *(_WORD *)(v30 + 68) = v36 | *(_WORD *)(v30 + 68) & 0xFFEF;
                if ( &pthread_create )
                  __dmb();
                  do
                    v38 = __ldrex(v33);
                  while ( __strex(v38 - 1, v33) );
                else
                  v38 = (*v33)--;
                if ( v38 == 1 )
                  v39 = (unsigned int *)(v31 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v40 = __ldrex(v39);
                    while ( __strex(v40 - 1, v39) );
                  }
                  else
                    v40 = (*v39)--;
                  if ( v40 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
                goto LABEL_35;
            else
              __clrex();
        *(_WORD *)(v30 + 68) |= 0x10u;
LABEL_35:
        v24 = *(_DWORD *)v22;
        v22 += 8;
        v25 = *(_WORD *)(v24 + 68);
        if ( (v25 & 0x18) != 24 )
          *(_WORD *)(v24 + 68) = v25 & 0xFFDF;
        v41 = (unsigned int *)(v19 + 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          v43 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          if ( &pthread_create )
            do
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v15 = v67;
      v16 = (int)v66;
      ++v17;
    while ( v17 < (v67 - v66) >> 3 );
  if ( HIDWORD(v57) )
    ScreenEvent::ScreenEvent((ScreenEvent *)&v60);
    v60 = 18;
    v45 = *(_WORD *)(v57 + 68);
    LOBYTE(v46) = 1;
    if ( v45 & 8 )
      v46 = ~(v45 >> 4) & 1;
    LOBYTE(v61) = v46;
    if ( (char *)v16 != v15 )
      v59 = 18;
      v47 = v16;
      while ( 1 )
        v54 = v47;
        v48 = *(_QWORD *)(*(_DWORD *)v47 + 108);
        if ( (_DWORD)v48 != HIDWORD(v48) )
          v58 = v61;
          v56 = v62;
          v55 = v63;
            if ( *(_DWORD *)v48 )
              (*(void (__cdecl **)(_DWORD, signed int, int, int, int))(**(_DWORD **)v48 + 16))(
                *(_DWORD *)v48,
                v59,
                v58,
                v56,
                v55);
            LODWORD(v48) = v48 + 4;
          while ( HIDWORD(v48) != (_DWORD)v48 );
        v47 = v54 + 8;
        if ( (char *)(v54 + 8) == v15 )
          break;
        v59 = v60;
  if ( (char *)v16 != v15 )
      v49 = *(_DWORD *)(v16 + 4);
      if ( v49 )
        v50 = (unsigned int *)(v49 + 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          v52 = (unsigned int *)(v49 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
      v16 += 8;
    while ( (char *)v16 != v15 );
    v15 = v66;
  if ( v15 )
    operator delete(v15);
}


unsigned int __fastcall UIControl::weakRef(UIControl *this, int a2)
{
  int v2; // r6@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r5@5
  unsigned int v6; // r4@6
  unsigned int *v7; // r5@7
  unsigned int v8; // r0@9
  unsigned int result; // r0@14

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
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
  v7 = (unsigned int *)(v2 + 8);
  *(_DWORD *)this = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 1) = v2;
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 + 1, v7) );
  else
    ++*v7;
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    else
      result = (*v7)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


      if ( v9 <= UIControl::getZOrder(v4) )
{
        v10 = *((_DWORD *)v4 + 2);
        v36 = v10;
        if ( !v10 )
          std::__throw_bad_weak_ptr();
        v11 = *(_DWORD *)(v10 + 4);
        v12 = (unsigned int *)(v10 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v11 )
              goto LABEL_50;
            __dmb();
            v13 = __ldrex(v12);
            if ( v13 == v11 )
              break;
            __clrex();
            v11 = v13;
          }
          v14 = __strex(v11 + 1, v12);
          v11 = v13;
        }
        while ( v14 );
        __dmb();
        v15 = *((_DWORD *)v4 + 1);
        v35 = *((_DWORD *)v4 + 1);
        v16 = *(_DWORD *)(v5 + 4);
        if ( i != v16 || v16 == *(_DWORD *)(v5 + 8) )
          std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_insert_aux<std::shared_ptr<UIControl>>(
            v5,
            i,
            (int)&v35);
        else
          *(_QWORD *)i = v15;
          v17 = v36;
          v36 = 0;
          *(_DWORD *)(i + 4) = v17;
          v35 = 0;
          *(_DWORD *)(v5 + 4) = i + 8;
        v26 = v36;
        if ( v36 )
          v29 = (unsigned int *)(v36 + 4);
          if ( &pthread_create )
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          else
            v30 = (*v29)--;
          if ( v30 == 1 )
            v31 = (unsigned int *)(v26 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              goto LABEL_47;
            }
LABEL_46:
            v32 = (*v31)--;
LABEL_47:
            if ( v32 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
            goto LABEL_49;
        goto LABEL_49;
      }
      v7 = *(_DWORD *)(v5 + 4);
    }
    v18 = *((_DWORD *)v4 + 2);
    v34 = v18;
    if ( !v18 )
      std::__throw_bad_weak_ptr();
    v19 = *(_DWORD *)(v18 + 4);
    v20 = (unsigned int *)(v18 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v19 )
LABEL_50:
        v21 = __ldrex(v20);
        if ( v21 == v19 )
          break;
        __clrex();
        v19 = v21;
      v22 = __strex(v19 + 1, v20);
      v19 = v21;
    while ( v22 );
    __dmb();
    v23 = *((_DWORD *)v4 + 1);
    v33 = *((_DWORD *)v4 + 1);
    v24 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v24 != HIDWORD(v24) )
      *(_DWORD *)v24 = v23;
      v25 = v34;
      v34 = 0;
      *(_DWORD *)(v24 + 4) = v25;
      v33 = 0;
      *(_DWORD *)(v5 + 4) = v24 + 8;
      goto LABEL_49;
    std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_emplace_back_aux<std::shared_ptr<UIControl>>(
      (_QWORD *)v5,
      (int)&v33);
    v26 = v34;
    if ( v34 )
      v27 = (unsigned int *)(v34 + 4);
      if ( &pthread_create )
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        v31 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          goto LABEL_47;
        goto LABEL_46;
LABEL_49:
    result = j_j_j__ZN9UIControl24addControlCollectionFlagEi_0(v4, v3);
  }
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
{
    v5 = UIControl::_getComponentIndex((UIControl *)v2, v4);
    v6 = *(_DWORD *)(v2 + 108);
    v7 = *(LayoutComponent **)(v6 + 4 * v5);
    if ( v7 )
    {
      LayoutComponent::removeDependencies(*(LayoutComponent **)(v6 + 4 * v5));
      if ( UIControl::getVisible((UIControl *)v2) || LayoutComponent::isActive(v7) != 1 )
      {
        v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
        __dmb();
        if ( !(v8 & 1)
          && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
        {
          type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
          j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
        }
        v9 = type_id<UIComponent,GridItemComponent>(void)::id[0];
        if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1
          && *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v9)) )
          UIControl::getParent((UIControl *)&v20, v2);
          v10 = v20;
          v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
          __dmb();
          if ( !(v11 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
          {
            type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
          }
          v12 = type_id<UIComponent,GridComponent>(void)::id[0];
          if ( UIControl::_hasComponent(v10, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
            v13 = *(GridComponent **)(*((_DWORD *)v10 + 27) + 4 * UIControl::_getComponentIndex(v10, v12));
            if ( v13 )
            {
              if ( GridComponent::isDynamic(v13) == 1 )
              {
                LayoutComponent::setInactive(v7);
                LayoutComponent::setDelayLayout(v7, 1);
                UIControl::setVisible((UIControl *)v2, 0, 0, 0);
                UIControl::setDelayCollectionUpdate((UIControl *)v2, 1);
              }
            }
          v14 = v21;
          if ( v21 )
            v15 = (unsigned int *)(v21 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            else
              v16 = (*v15)--;
            if ( v16 == 1 )
              v17 = (unsigned int *)(v14 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
              if ( &pthread_create )
                __dmb();
                do
                  v18 = __ldrex(v17);
                while ( __strex(v18 - 1, v17) );
              else
                v18 = (*v17)--;
              if ( v18 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      }
      else
        LayoutComponent::setInactive(v7);
    }
  }
  return 1;
}


char *__fastcall UIControl::getChildren(UIControl *this)
{
  return (char *)this + 92;
}


      if ( UIControl::_hasComponent((UIControl *)v8, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
      else
        v12 = 0;
      v13 = ToggleComponent::getGroupIndex(v12);
      v14 = 0;
      v4 += 2;
      v15 = 0;
      if ( v13 > v33 )
        v15 = 1;
      if ( v13 < v7 )
        v14 = 1;
      v16 = v15 & v14;
      if ( v16 )
        v7 = v13;
      if ( v6 >= v13 )
        v6 = v13;
      if ( v13 >= v3 )
        v3 = v13;
      v5 |= v16;
    }
    while ( v32 != v4 );
  }
  else
  {
    v7 = 2147483648;
    v17 = 2147483648;
    v31 = a3;
    do
    {
      v18 = *v4;
      v19 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
      __dmb();
      if ( !(v19 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
      {
        v20 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,ToggleComponent>(void)::id[0] = v20;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
      }
      v21 = type_id<UIComponent,ToggleComponent>(void)::id[0];
      if ( UIControl::_hasComponent((UIControl *)v18, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
        v22 = *(ToggleComponent **)(*(_DWORD *)(v18 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v18, v21));
        v22 = 0;
      v23 = ToggleComponent::getGroupIndex(v22);
      v3 = v23;
      v26 = __OFSUB__(v23, v7);
      v24 = v23 == v7;
      v25 = v23 - v7 < 0;
      v27 = 0;
      if ( !((unsigned __int8)(v25 ^ v26) | v24) )
        v27 = 1;
      v28 = 0;
      if ( v3 < v33 )
        v28 = 1;
      v29 = v27 & v28;
      if ( v29 )
        v7 = v3;
      if ( v6 >= v3 )
        v6 = v3;
      if ( v3 < v17 )
        v3 = v17;
      v5 |= v29;
      v17 = v3;
  a3 = v31;
  if ( !(v5 & 1) )
    goto LABEL_42;
  return v7;
}


char *__fastcall UIControl::setComponent<SliderBoxComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id) )
  {
    type_id<UIComponent,SliderBoxComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderBoxComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SliderBoxComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,SliderBoxComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


      if ( v6 < UIControl::getZOrder(*(UIControl **)(v3 + 36 * (2 * v5 | 1))) )
{
      v7 = v3 + 36 * v4;
      v8 = *(_DWORD *)(v3 + 36 * v4);
      v9 = *(_DWORD *)(v7 + 4);
      *(_DWORD *)(v7 + 4) = 0;
      *(_DWORD *)(v3 + 36 * v4) = 0;
      v10 = v3 + 36 * v5;
      *(_DWORD *)(v3 + 36 * v5) = v8;
      v11 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v10 + 4) = v9;
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 4);
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
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v10 + 12) = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v10 + 20) = *(_DWORD *)(v7 + 20);
      *(_WORD *)(v10 + 24) = *(_WORD *)(v7 + 24);
      *(_QWORD *)(v10 + 28) = *(_QWORD *)(v7 + 28);
    }
    while ( v4 < v55 );
  }
  if ( v50 & 1 || v4 != ((signed int)v50 - 2) / 2 )
  {
    v16 = v4;
  else
    v16 = 2 * v4 | 1;
    v17 = v3 + 36 * v16;
    v18 = *(_DWORD *)(v3 + 36 * v16);
    v19 = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v17 + 4) = 0;
    *(_DWORD *)(v3 + 36 * v16) = 0;
    v20 = v3 + 36 * v4;
    *(_DWORD *)(v3 + 36 * v4) = v18;
    v21 = *(_DWORD *)(v20 + 4);
    *(_DWORD *)(v20 + 4) = v19;
    if ( v21 )
    {
      v22 = (unsigned int *)(v21 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    *(_DWORD *)(v20 + 8) = *(_DWORD *)(v17 + 8);
    *(_DWORD *)(v20 + 12) = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v20 + 16) = *(_DWORD *)(v17 + 16);
    *(_DWORD *)(v20 + 20) = *(_DWORD *)(v17 + 20);
    *(_WORD *)(v20 + 24) = *(_WORD *)(v17 + 24);
    *(_QWORD *)(v20 + 28) = *(_QWORD *)(v17 + 28);
  v26 = HIDWORD(v50);
  v27 = *(_QWORD *)HIDWORD(v50);
  v54 = *(_QWORD *)HIDWORD(v50) >> 32;
  *(_QWORD *)HIDWORD(v50) = 0LL;
  v49 = *(_DWORD *)(HIDWORD(v50) + 8);
  v48 = *(_DWORD *)(HIDWORD(v50) + 12);
  v47 = *(_DWORD *)(HIDWORD(v50) + 16);
  v46 = *(_DWORD *)(HIDWORD(v50) + 20);
  v52 = *(_DWORD *)(HIDWORD(v50) + 28);
  v45 = *(_WORD *)(v26 + 24);
  v51 = *(_DWORD *)(v26 + 32);
  if ( v16 <= v53 )
LABEL_55:
    v30 = v3 + 36 * v16;
    while ( 1 )
      v28 = v16;
      v16 = (v16 - 1) / 2;
      v29 = UIControl::getZOrder(*(UIControl **)(v3 + 36 * v16));
      v30 = v3 + 36 * v28;
      if ( v29 >= UIControl::getZOrder((UIControl *)v27) )
        break;
      v31 = v3 + 36 * v16;
      v32 = *(_DWORD *)(v3 + 36 * v16);
      v33 = *(_DWORD *)(v31 + 4);
      *(_DWORD *)(v31 + 4) = 0;
      *(_DWORD *)(v3 + 36 * v16) = 0;
      *(_DWORD *)v30 = v32;
      v34 = *(_DWORD *)(v30 + 4);
      *(_DWORD *)(v30 + 4) = v33;
      if ( v34 )
        v35 = (unsigned int *)(v34 + 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 == 1 )
          v37 = (unsigned int *)(v34 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
      *(_DWORD *)(v30 + 8) = *(_DWORD *)(v31 + 8);
      *(_DWORD *)(v30 + 12) = *(_DWORD *)(v31 + 12);
      *(_DWORD *)(v30 + 16) = *(_DWORD *)(v31 + 16);
      *(_DWORD *)(v30 + 20) = *(_DWORD *)(v31 + 20);
      *(_WORD *)(v30 + 24) = *(_WORD *)(v31 + 24);
      *(_QWORD *)(v30 + 28) = *(_QWORD *)(v31 + 28);
      if ( v16 <= v53 )
        goto LABEL_55;
  *(_DWORD *)v30 = v27;
  v39 = *(_DWORD *)(v30 + 4);
  *(_DWORD *)(v30 + 4) = v54;
  if ( v39 )
    v40 = (unsigned int *)(v39 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    else
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  *(_DWORD *)(v30 + 8) = v49;
  *(_DWORD *)(v30 + 12) = v48;
  *(_DWORD *)(v30 + 16) = v47;
  *(_DWORD *)(v30 + 20) = v46;
  *(_WORD *)(v30 + 24) = v45;
  *(_DWORD *)(v30 + 28) = v52;
  result = v51;
  *(_DWORD *)(v30 + 32) = v51;
  return result;
}


int __fastcall UIControl::getModalAncestor(int result, int a2)
{
  int v2; // r12@1
  unsigned int v3; // r2@2
  unsigned int *v4; // lr@2
  unsigned int v5; // r3@5
  unsigned int v6; // r4@6
  signed int v7; // r3@7
  int v8; // r1@12

  v2 = *(_DWORD *)(a2 + 168);
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
          v7 = 1;
          v2 = 0;
          goto LABEL_12;
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
    v7 = 0;
    if ( !*(_DWORD *)(v2 + 4) )
      v7 = 1;
  }
  else
    v7 = 1;
LABEL_12:
  v8 = *(_DWORD *)(a2 + 164);
  if ( v7 )
    v8 = 0;
  *(_DWORD *)result = v8;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


char *__fastcall UIControl::getMaxSize(UIControl *this)
{
  return (char *)this + 40;
}


int __fastcall UIControl::getClipOffset(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 60);
  return result;
}


int __fastcall UIControl::setSize(int result, int a2)
{
  *(_DWORD *)(result + 24) = *(_DWORD *)a2;
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 4);
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setDefaultControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::applyToChildren(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 92);
  for ( i = a2; v3 != v2; result = UIControl::applyToChildren(v5, i) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_DA7654();
    (*(void (__fastcall **)(_DWORD, _DWORD))(i + 12))(i, *v2);
    v5 = *v2;
    v2 += 2;
  }
  return result;
}


void __fastcall UIControl::reloadFromControl(UIControl *this, const UIControl *a2)
{
  UIControl::reloadFromControl(this, a2);
}


void __fastcall UIControl::setEnabled(UIControl *this, int a2, int a3)
{
  UIControl *v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r8@1
  __int64 v7; // r2@1
  int v8; // r9@5
  unsigned int v9; // r1@5
  __int64 v10; // kr00_8@7
  int v11; // r2@9

  v3 = this;
  v4 = 1;
  v5 = *((_WORD *)this + 34);
  v6 = a3;
  LODWORD(v7) = 0;
  HIDWORD(v7) = a2 ^ 1;
  if ( v5 & 8 )
    v4 = ~(v5 >> 4) & 1;
  if ( !(v5 & 0x10) )
    LODWORD(v7) = 1;
  v8 = v7 | HIDWORD(v7);
  v9 = v5 & 0xFFFFFFF7 | 8 * a2;
  if ( v7 )
    LOWORD(v9) = v9 & 0xFFDF;
  *((_WORD *)v3 + 34) = v9;
  v10 = *(_QWORD *)((char *)v3 + 108);
  if ( (_DWORD)v10 != HIDWORD(v10) )
  {
    (*(void (**)(void))(**(_DWORD **)v10 + 40))();
    while ( HIDWORD(v10) != (_DWORD)v10 + 4 )
    {
      v11 = *((_WORD *)v3 + 34);
      (*(void (**)(void))(**(_DWORD **)v10 + 40))();
    }
  }
  if ( v4 != v8 )
    j_j_j__ZN9UIControl25_propagateLockStateChangeEb(__PAIR__(v6, (unsigned int)v3));
}


      if ( UIControl::getClipsChildren(v8) )
{
      UIControl::getParent((UIControl *)&v67, (int)v8);
      v9 = v68;
      v8 = v67;
      v67 = 0;
      v68 = 0;
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
      v17 = v68;
      if ( v68 )
        v18 = (unsigned int *)(v68 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    }
    while ( v8 );
    v22 = v72;
    v23 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
    __dmb();
    if ( !(v23 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    {
      type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
    v24 = type_id<UIComponent,GridComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v22, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
      v25 = *(_DWORD *)(*((_DWORD *)v22 + 27) + 4 * UIControl::_getComponentIndex(v22, v24));
    else
      v25 = 0;
    GridComponent::getGridItemTemplate((GridComponent *)&v65, v25);
    v26 = UIControl::getSize(v65);
    _R4 = *((_DWORD *)v26 + 1);
    v60 = *(_DWORD *)v26;
    _R0 = UIControl::getSize(v72);
    __asm { VLDR            S16, [R0] }
    _R0 = UIControl::getSize(v65);
    __asm
      VLDR            S0, [R0]
      VDIV.F32        S0, S16, S0
      VCVTR.S32.F32   S18, S0
    _R0 = UIControl::getSize(v8);
      VMOV            S16, R4
      VLDR            S0, [R0,#4]
      VDIV.F32        S0, S0, S16
      VMOV            R0, S0
    v37 = mce::Math::floor(_R0, v36);
    __asm { VMOV            R5, S18 }
    _R11 = UIControl::getPosition(v72);
    v59 = _R4;
    v40 = v37 - 1;
    if ( ((signed int)v3 % _R5 + HIDWORD(v3)) / _R5 < v37 - 1 )
      v40 = ((signed int)v3 % _R5 + HIDWORD(v3)) / _R5;
    _R1 = (HIDWORD(v3) + (signed int)v3) % _R5;
    _R0 = (signed int)v3 / _R5 + v40;
      VMOV            S0, R1
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    _R0 = v60;
      VLDR            S6, [R11,#4]
      VMOV            S4, R0
      VMUL.F32        S0, S0, S4
      VLDR            S4, [R11]
      VMUL.F32        S2, S2, S16
    v62 = v60;
    v63 = v59;
      VADD.F32        S0, S0, S4
      VADD.F32        S2, S2, S6
      VSTR            S0, [SP,#0x90+var_78]
      VSTR            S2, [SP,#0x90+var_74]
    ScreenView::_adjustScrollToIncludePosition(v61, v8, (int)&v64, (int)&v62);
    v44 = v66;
    if ( v66 )
      v45 = (unsigned int *)(v66 + 4);
      if ( &pthread_create )
        __dmb();
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
    if ( v9 )
      v49 = (unsigned int *)(v9 + 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        v51 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
  v53 = v73;
  if ( v73 )
  {
    v54 = (unsigned int *)(v73 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 == 1 )
      v56 = (unsigned int *)(v53 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
  return 0;
}


int __fastcall UIControl::_setCachedPosition(UIControl *this)
{
  int v6; // r4@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r7@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  unsigned int v12; // r0@17
  unsigned int *v13; // r6@21
  unsigned int v14; // r0@23
  int result; // r0@28

  _R5 = this;
  __asm { VLDR            S16, =0.0 }
  v6 = *((_DWORD *)this + 22);
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
          __asm { VMOV.F32        S18, S16 }
          goto LABEL_28;
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
    __asm { VLDR            S18, =0.0 }
    if ( *v8 )
      __asm { VMOV.F32        S16, S18 }
      _R6 = *((_DWORD *)_R5 + 21);
      if ( _R6 )
        if ( *(_BYTE *)(_R6 + 69) & 0x20 )
          UIControl::_setCachedPosition(*((UIControl **)_R5 + 21));
        __asm
          VLDR            S18, [R6,#0x48]
          VLDR            S16, [R6,#0x4C]
    else
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v8);
      while ( __strex(v12 - 1, v8) );
      v12 = (*v8)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  else
    __asm { VMOV.F32        S18, S16 }
LABEL_28:
  __asm
    VLDR            S0, [R5,#0x10]
    VLDR            S2, [R5,#0x14]
    VADD.F32        S0, S0, S18
    VADD.F32        S2, S2, S16
    VSTR            S0, [R5,#0x48]
    VSTR            S2, [R5,#0x4C]
  result = *((_WORD *)_R5 + 34) & 0xDFFF;
  *((_WORD *)_R5 + 34) = result;
  return result;
}


int __fastcall UIControl::broadcastEvent(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r4@1
  int v7; // r9@1
  int v8; // r10@1
  int v9; // r11@1
  unsigned __int16 i; // r7@1
  int v11; // r0@2
  bool v12; // zf@2

  v6 = *(_QWORD *)(a1 + 108);
  v7 = a4;
  v8 = a3;
  v9 = a2;
  for ( i = 0; HIDWORD(v6) != (_DWORD)v6; LODWORD(v6) = v6 + 4 )
  {
    v11 = *(_DWORD *)v6;
    v12 = *(_DWORD *)v6 == 0;
    if ( *(_DWORD *)v6 )
      v12 = v11 == v9;
    if ( !v12 )
      i |= (*(int (__cdecl **)(int, int, int, int, int))(*(_DWORD *)v11 + 16))(v11, v8, v7, a5, a6);
  }
  return i;
}


void __fastcall UIControl::clone(UIControl *this, UIControl *a2, int a3)
{
  UIControl::clone(this, a2, a3);
}


int __fastcall UIControl::setEnableClippingScissorTest(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFEFF | (a2 << 8);
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,DataBindingComponent>(void)::id[0]) == 1 )
{
    v6 = *(DataBindingComponent **)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v5));
    if ( v6 )
    {
      if ( DataBindingComponent::hasAlwaysBinds(v6) == 1 )
        sub_1300F78(v2 + 136, v2 + 268, (UIControl *)v3, 1);
    }
  }
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
  {
    type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
  v8 = type_id<UIComponent,AnimationComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1 )
    v9 = *(AnimationComponent **)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v8));
    if ( v9 )
      if ( AnimationComponent::isEventListener(v9) == 1 )
        sub_1300F78(v2 + 184, v2 + 268, (UIControl *)v3, 8);
  v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( !(v10 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  v11 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v11)) )
    sub_1300F78(v2 + 196, v2 + 268, (UIControl *)v3, 16);
  if ( UIControl::hasRenderableComponent((UIControl *)v3) == 1 )
    sub_1300F78(v2 + 232, v2 + 268, (UIControl *)v3, 64);
  v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
  if ( !(v12 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
    type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
  v13 = type_id<UIComponent,CustomRenderComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,CustomRenderComponent>(void)::id[0]) == 1 )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v13)) )
      v14 = UIControl::getPropertyBag((UIControl *)v3);
      gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v35, (int)"#flying_item_renderer");
      v15 = (Json::Value *)(v14 + 8);
      v16 = v36;
      if ( !Json::Value::isNull(v15) && Json::Value::isObject(v15) == 1 )
      {
        v17 = (Json::Value *)Json::Value::operator[]((int)v15, v16);
        if ( Json::Value::isBool(v17) == 1 && Json::Value::asBool(v17, 0) == 1 )
          sub_1300F78(v2 + 244, v2 + 268, (UIControl *)v3, 128);
      }
  v18 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id;
  if ( !(v18 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id) )
    type_id<UIComponent,TextEditComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextEditComponent>(void)::id);
  v19 = type_id<UIComponent,TextEditComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,TextEditComponent>(void)::id[0]) == 1 )
    v20 = *(TextEditComponent **)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v19));
    if ( v20 )
      TextEditComponent::registerPropertyChangedNotifications(v20);
      sub_1300F78(v2 + 208, v2 + 268, (UIControl *)v3, 4);
  v21 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id;
  if ( !(v21 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id) )
    type_id<UIComponent,InputComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,InputComponent>(void)::id);
  v22 = type_id<UIComponent,InputComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,InputComponent>(void)::id[0]) == 1 )
    v23 = UIControl::_getComponentIndex((UIControl *)v3, v22);
    v24 = *(_DWORD *)(v3 + 108);
    v25 = *(InputComponent **)(v24 + 4 * v23);
    if ( v25 )
      if ( InputComponent::getAlwaysListensToInput(*(InputComponent **)(v24 + 4 * v23)) == 1 )
        v26 = v2 + 220;
        v27 = v2 + 268;
        v28 = (UIControl *)v3;
        v29 = 256;
      else
        v26 = v2 + 148;
        v29 = 2;
      sub_1300F78(v26, v27, v28, v29);
      if ( InputComponent::getModal(v25) == 1 )
        (*(void (**)(void))(**(_DWORD **)(v2 + 132) + 36))();
  v30 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
  if ( !(v30 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
    type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
  v31 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v31)) )
    sub_1300F78(v2 + 160, v2 + 268, (UIControl *)v3, 32);
  v32 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  if ( !(v32 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  v33 = type_id<UIComponent,SliderComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1
    && *(_DWORD *)(*(_DWORD *)(v3 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v3, v33)) )
    sub_1300F78(v2 + 256, v2 + 268, (UIControl *)v3, 1024);
  return j_j_j__ZN12FocusManager13removeControlER9UIControlRSt3mapIPSt6vectorISt10shared_ptrIS0_ESaIS5_EES7_St4lessIS8_ESaISt4pairIKS8_S7_EEE(
           *(_DWORD *)(v2 + 348),
           (UIControl *)v3,
           v2 + 268);
}


int __fastcall UIControl::setMaxSize(int result, int a2)
{
  *(_DWORD *)(result + 40) = *(_DWORD *)a2;
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 4);
  return result;
}


int __fastcall UIControl::removeChild(UIControl *this, int a2, int a3)
{
  UIControl *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r1@1
  char *v7; // r7@1
  UIControl *v8; // r0@1
  int v9; // r8@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r2@4
  int result; // r0@7
  __int64 i; // r4@8
  unsigned int *v14; // r1@11
  unsigned int *v15; // r4@17

  v3 = this;
  v4 = a2;
  v5 = a3;
  v7 = (char *)this + 92;
  v6 = *((_DWORD *)this + 23);
  v8 = *(UIControl **)(v6 + 8 * v4);
  v9 = *(_DWORD *)(v6 + 8 * v4 + 4);
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  UIControl::_onRemoved(v8);
  result = std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(
             (int)v7,
             *(_DWORD *)v7 + 8 * v4);
  if ( v5 == 1 )
    for ( i = *(_QWORD *)((char *)v3 + 108); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
      result = (*(int (**)(void))(**(_DWORD **)i + 24))();
    v14 = (unsigned int *)(v9 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


  if ( UIControl::getEnabled(a2) != 1 || UIControl::areAllAncestorsEnabled(v2) != 1 )
{
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id;
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id) )
  {
    type_id<UIComponent,FocusComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FocusComponent>(void)::id);
  }
  v4 = type_id<UIComponent,FocusComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v2, type_id<UIComponent,FocusComponent>(void)::id[0]) == 1
    && (v5 = *(FocusComponent **)(*((_DWORD *)v2 + 27) + 4 * UIControl::_getComponentIndex(v2, v4))) != 0 )
    result = FocusComponent::getFocusEnabled(v5);
  else
LABEL_12:
    result = 0;
  return result;
}


  if ( UIControl::_hasComponent(v18, type_id<UIComponent,ToggleManagerComponent>(void)::id[0]) == 1 )
{
    v16 = UIControl::_getComponentIndex(v18, v15);
    HIDWORD(v17) = *((_DWORD *)v18 + 27);
    LODWORD(v17) = *(_DWORD *)(HIDWORD(v17) + 4 * v17);
    if ( (_DWORD)v17 )
      ToggleManagerComponent::setGroupNames(v17);
  }
  if ( ptr )
    operator delete(ptr);
}


signed int __fastcall UIControl::removeChild(int a1, _DWORD *a2)
{
  int v2; // r6@1
  _DWORD *v3; // r8@1
  unsigned __int64 *v4; // r5@1
  int v5; // r9@1
  unsigned __int64 v6; // kr00_8@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r2@5
  signed int v9; // r7@9
  int v10; // r4@10
  int v11; // r7@10
  unsigned int *v12; // r1@15
  unsigned int v13; // r0@17
  unsigned int *v14; // r4@21
  unsigned int v15; // r0@23
  signed int result; // r0@30

  v2 = a1;
  v3 = a2;
  v5 = a1 + 92;
  v4 = *(unsigned __int64 **)(a1 + 92);
  if ( v4 == *(unsigned __int64 **)(a1 + 96) )
  {
LABEL_30:
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v4;
      if ( *v4 >> 32 )
      {
        v7 = (unsigned int *)(HIDWORD(v6) + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 + 1, v7) );
        }
        else
          ++*v7;
      }
      if ( (_DWORD)v6 == *v3 )
        UIControl::_onRemoved((UIControl *)v6);
        std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(v5, (int)v4);
        v10 = *(_QWORD *)(v2 + 108) >> 32;
        v11 = *(_QWORD *)(v2 + 108);
        if ( v11 == v10 )
          v9 = 1;
          {
            (*(void (**)(void))(**(_DWORD **)v11 + 24))();
            v11 += 4;
          }
          while ( v10 != v11 );
      else
        v9 = 0;
      if ( HIDWORD(v6) )
        v12 = (unsigned int *)(HIDWORD(v6) + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(HIDWORD(v6) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
          if ( &pthread_create )
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
      if ( v9 )
        break;
      ++v4;
      if ( v4 == *(unsigned __int64 **)(v2 + 96) )
        goto LABEL_30;
    }
    result = 1;
  return result;
}


  if ( UIControl::_hasComponent(v21, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
{
  else
    v24 = 0;
  FactoryComponent::setFactoryIsChild(v24, v4);
  v25 = v97;
  if ( !v4 )
  {
    sub_DA7364((void **)&v116, "name");
    sub_DA7364((void **)&v115, (const char *)&unk_257BC67);
    UIResolvedDef::getAsString(&v117, v97, (int **)&v116, &v115);
    v26 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
    {
      v88 = (unsigned int *)(v115 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
      }
      else
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    }
    v27 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v116 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    FactoryComponent::setFactoryName((int)v24, &v117);
    v28 = (void *)(v117 - 12);
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v117 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
  }
  sub_DA7364((void **)&v113, "control_name");
  sub_DA7364((void **)&v112, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v114, v97, (int **)&v113, &v112);
  v29 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v112 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
    else
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v113 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  if ( *(_DWORD *)(v114 - 12) )
    v31 = UIControl::getScreenAction(*v3, 1);
    UIControlFactory::createControlTree((int)&v110, v96, (int)&v114, v31, (int)*v3, 1, 0, 1);
    v32 = *v3;
    v33 = *(_QWORD *)((char *)v32 + 92);
    if ( HIDWORD(v33) != (_DWORD)v33 )
      v34 = *(_QWORD *)((char *)v32 + 92);
        v35 = *(_DWORD *)(v34 + 4);
        if ( v35 )
        {
          v36 = (unsigned int *)(v35 + 4);
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
            if ( v39 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
        }
        v34 += 8;
      while ( v34 != HIDWORD(v33) );
    *((_DWORD *)v32 + 24) = v33;
    v108 = v110;
    v109 = v111;
    if ( v111 )
      v40 = (unsigned int *)(v111 + 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 + 1, v40) );
        ++*v40;
    FactoryComponent::setControlTemplate((int)v24, (int)&v108);
    v58 = v109;
    v25 = v97;
    if ( v109 )
      v59 = (unsigned int *)(v109 + 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
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
    v63 = v111;
      v64 = (unsigned int *)(v111 + 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        v66 = (unsigned int *)(v63 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
    sub_DA7364((void **)&v107, "control_ids");
    v42 = UIResolvedDef::getValue(v97, (int **)&v107, 0);
    v43 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v107 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j_j__ZdlPv_9(v43);
    if ( Json::Value::isObject(v42) == 1 )
      Json::Value::begin((Json::Value *)&v106, (int)v42);
      v44 = (Json::ValueIteratorBase *)&v106;
      while ( 1 )
        Json::Value::end((Json::Value *)&v105, (int)v42);
        if ( Json::ValueIteratorBase::isEqual(v44, (const Json::ValueIteratorBase *)&v105) == 1 )
          break;
        v45 = (const char *)Json::ValueIteratorBase::memberName(v44);
        sub_DA7364((void **)&v104, v45);
        v46 = v44;
        v47 = (const char *)Json::ValueIteratorBase::memberName(v44);
        v48 = Json::Value::operator[]((int)v42, v47);
        sub_DA7364((void **)&v102, (const char *)&unk_257BC67);
        Json::Value::asString(&v103, (int)v48, &v102);
        FactoryComponent::addControlIdToTemplateName((int)v24, (int **)&v104, &v103);
        v44 = v46;
        v49 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v103 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j_j__ZdlPv_9(v49);
        v50 = (void *)(v102 - 12);
        if ( (int *)(v102 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v102 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j_j__ZdlPv_9(v50);
        v51 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v104 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j_j__ZdlPv_9(v51);
        Json::ValueIteratorBase::increment(v46);
      v25 = v97;
  sub_DA7364((void **)&v101, "max_children_size");
  v68 = UIResolvedDef::getAsInt(v25, (int **)&v101, 0);
  FactoryComponent::setMaxSize(v24, v68);
  v69 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v101 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9(v69);
  sub_DA7364((void **)&v99, "insert_location");
  sub_DA7364((void **)&v98, "back");
  UIResolvedDef::getAsString(&v100, v25, (int **)&v99, &v98);
  v70 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v98 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9(v70);
  v71 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v99 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9(v71);
  if ( sub_DA7374((const void **)&v100, "front") )
    FactoryComponent::setInsertPosition((int)v24, 1);
    FactoryComponent::setInsertPosition((int)v24, 0);
  v72 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v100 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v114 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9(v73);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  SliderComponent::setProgressHoverControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    result = 0;
  return result;
}


int __fastcall UIControl::getAncestorWhere(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  unsigned int v6; // r2@2
  int result; // r0@2
  unsigned int v8; // r3@5
  unsigned int v9; // r7@6
  int v10; // r6@7
  unsigned int v11; // r2@11
  unsigned int *v12; // r1@11
  unsigned int v13; // r3@14
  unsigned int v14; // r7@15
  signed int v15; // r1@16
  int v16; // r2@21
  int v17; // r7@23
  unsigned int *v18; // r1@24
  unsigned int *v19; // r6@30

  v3 = a1;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a3;
  *(_DWORD *)(v3 + 4) = v4;
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v6 = *(_DWORD *)(v4 + 4);
  result = v4 + 4;
  do
  {
    while ( 1 )
    {
      if ( !v6 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v8 = __ldrex((unsigned int *)result);
      if ( v8 == v6 )
        break;
      __clrex();
      v6 = v8;
    }
    v9 = __strex(v6 + 1, (unsigned int *)result);
    v6 = v8;
  }
  while ( v9 );
  __dmb();
  v10 = *(_DWORD *)(a2 + 4);
  for ( *(_DWORD *)v3 = v10; *(_DWORD *)v3; v10 = *(_DWORD *)v3 )
    if ( !*(_DWORD *)(v5 + 8) )
      sub_DA7654();
    result = (*(int (__fastcall **)(int, int))(v5 + 12))(v5, v10);
    if ( result )
      break;
    result = *(_DWORD *)(v10 + 88);
      v11 = *(_DWORD *)(result + 4);
      v12 = (unsigned int *)(result + 4);
      do
      {
        while ( 1 )
        {
          if ( !v11 )
          {
            v15 = 1;
            result = 0;
            goto LABEL_21;
          }
          __dmb();
          v13 = __ldrex(v12);
          if ( v13 == v11 )
            break;
          __clrex();
          v11 = v13;
        }
        v14 = __strex(v11 + 1, v12);
        v11 = v13;
      }
      while ( v14 );
      v15 = 0;
      if ( !*(_DWORD *)(result + 4) )
        v15 = 1;
    else
      v15 = 1;
LABEL_21:
    v16 = *(_DWORD *)(v10 + 84);
    if ( v15 )
      v16 = 0;
    *(_DWORD *)v3 = v16;
    v17 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = result;
    if ( v17 )
      v18 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      else
        result = (*v18)--;
      if ( result == 1 )
        v19 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
          do
            result = __ldrex(v19);
          while ( __strex(result - 1, v19) );
        else
          result = (*v19)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall UIControl::moveChild(UIControl *this, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r7@1
  UIControl *v6; // r4@1
  int v7; // r1@1
  _DWORD *v8; // r6@1
  int v9; // r8@1
  UIControl *v10; // r0@1
  int v11; // r1@1
  unsigned int *v12; // r1@2
  unsigned int v13; // r0@4
  int result; // r0@7
  int v15; // r5@8
  int i; // r6@8
  __int64 v17; // kr00_8@8

  v4 = a2;
  v5 = a3;
  v6 = this;
  v8 = (_DWORD *)(a2 + 92);
  v7 = *(_DWORD *)(a2 + 92);
  v9 = a4;
  v10 = *(UIControl **)(v7 + 8 * a3);
  *(_DWORD *)v6 = v10;
  v11 = *(_DWORD *)(v7 + 8 * a3 + 4);
  *((_DWORD *)v6 + 1) = v11;
  if ( v11 )
  {
    v12 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      v10 = *(UIControl **)v6;
    }
    else
      ++*v12;
  }
  UIControl::_onRemoved(v10);
  result = std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(
             (int)v8,
             *v8 + 8 * v5);
  if ( v9 == 1 )
    v17 = *(_QWORD *)(v4 + 108);
    v15 = *(_QWORD *)(v4 + 108) >> 32;
    for ( i = v17; v15 != i; i += 4 )
      result = (*(int (**)(void))(**(_DWORD **)i + 24))();
  return result;
}


int __fastcall UIControl::createPropertyBag(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(v2 + 80) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ButtonComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ButtonComponent::setPressedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


char *__fastcall UIControl::setComponent<TextComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
  {
    type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
  }
  v5 = type_id<UIComponent,TextComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,TextComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


char *__fastcall UIControl::setComponent<DropdownComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id) )
  {
    type_id<UIComponent,DropdownComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DropdownComponent>(void)::id);
  }
  v5 = type_id<UIComponent,DropdownComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,DropdownComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::setAllowClipping(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFF7F | (a2 << 7);
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ScrollViewComponent::setScrollContent(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::containsPoint(UIControl *this, int a2)
{
  int result; // r0@5

  _R4 = this;
  _R5 = a2;
  if ( *((_BYTE *)this + 69) & 0x20 )
    UIControl::_setCachedPosition(this);
  __asm
  {
    VLDR            S2, [R4,#0x48]
    VLDR            S0, [R5]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_11;
    VLDR            S4, [R4,#0x18]
    VADD.F32        S2, S4, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VLDR            S2, [R4,#0x4C] }
    result = 0;
    __asm
    {
      VLDR            S0, [R5,#4]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VLDR            S4, [R4,#0x1C]
        VADD.F32        S2, S4, S2
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        result = 1;
  else
LABEL_11:
  return result;
}


unsigned int __fastcall UIControl::_onRemoved(UIControl *this)
{
  UIControl *v1; // r4@1
  int v2; // r0@1
  int (__cdecl *v3)(int); // r2@1
  unsigned int v4; // r3@2
  unsigned int *v5; // r1@2
  unsigned int v6; // r6@5
  unsigned int v7; // r5@6
  unsigned int result; // r0@7
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int *v11; // r6@14
  int *v12; // r4@21
  int *i; // r5@21
  __int64 v14; // kr00_8@21
  int v15; // t1@22
  int v16; // [sp+0h] [bp-18h]@7
  int v17; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 39);
  v3 = *(int (__cdecl **)(int))(*(_DWORD *)v2 + 40);
  v17 = *((_DWORD *)v1 + 2);
  if ( !v17 )
    std::__throw_bad_weak_ptr();
  v4 = *(_DWORD *)(v17 + 4);
  v5 = (unsigned int *)(v17 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v4 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
        break;
      __clrex();
      v4 = v6;
    }
    v7 = __strex(v4 + 1, v5);
    v4 = v6;
  }
  while ( v7 );
  __dmb();
  v16 = *((_DWORD *)v1 + 1);
  result = v3(v2);
  v9 = v17;
  if ( v17 )
    v10 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
    else
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *(_QWORD *)((char *)v1 + 108);
  v12 = (int *)(*(_QWORD *)((char *)v1 + 108) >> 32);
  for ( i = (int *)v14; v12 != i; result = (*(int (__cdecl **)(int))(*(_DWORD *)v15 + 28))(v15) )
    v15 = *i;
    ++i;
  return result;
}


char *__fastcall UIControl::setComponent<DataBindingComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
  {
    type_id<UIComponent,DataBindingComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
  }
  v5 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,DataBindingComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


unsigned int __fastcall UIControl::isVisibleInTree(UIControl *this)
{
  return (*((_BYTE *)this + 68) & 4u) >> 2;
}


int __fastcall UIControl::setClipsChildren(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFFBF | (a2 << 6);
  return result;
}


char *__fastcall UIControl::setComponent<ScrollTrackComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id) )
  {
    type_id<UIComponent,ScrollTrackComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollTrackComponent>(void)::id);
  }
  v5 = type_id<UIComponent,ScrollTrackComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,ScrollTrackComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


      if ( v23 < UIControl::getZOrder(*v20) )
{
LABEL_9:
        v24 = v6;
        v25 = (UIControl **)(v6 + 36);
        goto LABEL_13;
      }
      v26 = UIControl::getZOrder(*v18);
      if ( v26 < UIControl::getZOrder(*v20) )
        goto LABEL_11;
    }
    else
    {
      v21 = UIControl::getZOrder(*v18);
      if ( v21 >= UIControl::getZOrder(*v20) )
      {
        v22 = UIControl::getZOrder(*v9);
        if ( v22 >= UIControl::getZOrder(*v20) )
          goto LABEL_9;
LABEL_11:
        v25 = (UIControl **)(v5 - 36);
    v24 = v6;
    v25 = v18;
LABEL_13:
    std::swap<RenderControlMetadata>(v24, v25);
    v27 = v6 + 36;
    v28 = (_QWORD *)v5;
    for ( i = *v9; ; i = *(UIControl **)v27 )
      while ( 1 )
        v31 = UIControl::getZOrder(i);
        if ( v31 >= UIControl::getZOrder(*(UIControl **)v6) )
          break;
        v30 = *(UIControl **)(v27 + 36);
        v27 += 36;
        i = v30;
      do
        v32 = UIControl::getZOrder(*(UIControl **)v6);
        v33 = (UIControl *)*((_DWORD *)v28 - 9);
        v28 = (_QWORD *)((char *)v28 - 36);
      while ( v32 < UIControl::getZOrder(v33) );
      if ( v27 >= (unsigned int)v28 )
        break;
      std::swap<RenderControlMetadata>(v27, v28);
      v27 += 36;
    v8 = v50;
    v4 = v4 & 0xFFFFFF00 | v49;
    result = sub_12F0EEC(v27, v5, v50, v4);
    _R9 = v27 - v6;
    v5 = v27;
    if ( (signed int)(v27 - v6) <= 576 )
      return result;
  }
  v48 = 954437177 * (_R9 >> 2);
  result = (v48 - 2) / 2;
  v51 = &pthread_create;
  do
  {
    v34 = result;
    v35 = v6 + 36 * result;
    v36 = *(_DWORD *)v35;
    v37 = *(_DWORD *)(v35 + 4);
    *(_DWORD *)(v35 + 4) = 0;
    *(_DWORD *)v35 = 0;
    v38 = *(_QWORD *)(v35 + 28);
    v39 = *(_WORD *)(v35 + 24);
    v40 = *(_QWORD *)(v35 + 8);
    v43 = *(_QWORD *)(v35 + 16);
    v41 = *(_QWORD *)(v35 + 16) >> 32;
    v42 = v43;
    v52 = v36;
    v53 = v37;
    v54 = v40;
    v55 = __PAIR__(v41, (unsigned int)v43);
    v56 = v39;
    v57 = v38;
    sub_12F13F8(v6, result, __PAIR__(&v52, v48));
    v51 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v51 & 0xFFFFFF00 | v49);
    v44 = v53;
    if ( v53 )
      v45 = (unsigned int *)(v53 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      else
        v46 = (*v45)--;
      if ( v46 == 1 )
        v42 = v44 + 8;
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
        if ( &pthread_create )
        {
          __dmb();
          do
            v47 = __ldrex((unsigned int *)v42);
          while ( __strex(v47 - 1, (unsigned int *)v42) );
        }
        else
          v47 = (*(_DWORD *)v42)--;
        if ( v47 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    result = v34 - 1;
  while ( v34 );
  if ( _R9 >= 37 )
    do
      v5 -= 36;
      v42 = v42 & 0xFFFFFF00 | v49;
      sub_12F11B4(v6, v5, v5);
      result = v5 - v6;
    while ( v5 - v6 > 36 );
  return result;
}


int __fastcall UIControl::popFrontChild(UIControl *this)
{
  UIControl *v1; // r5@1
  char *v2; // r6@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@4
  int result; // r0@7
  int v7; // r5@7
  int i; // r6@7
  __int64 v9; // kr08_8@7
  unsigned int *v10; // r1@10
  unsigned int *v11; // r5@16

  v1 = this;
  v2 = (char *)this + 92;
  v3 = *(_QWORD *)*((_DWORD *)this + 23);
  if ( HIDWORD(v3) )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 4);
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
  UIControl::_onRemoved((UIControl *)v3);
  result = std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>>::_M_erase(
             (int)v2,
             *((_DWORD *)v1 + 23));
  v9 = *(_QWORD *)((char *)v1 + 108);
  v7 = *(_QWORD *)((char *)v1 + 108) >> 32;
  for ( i = v9; v7 != i; i += 4 )
    result = (*(int (**)(void))(**(_DWORD **)i + 24))();
    v10 = (unsigned int *)(HIDWORD(v3) + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  return result;
}


char *__fastcall UIControl::setComponent<SliderComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
  {
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  }
  v5 = type_id<UIComponent,SliderComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,SliderComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


    if ( UIControl::_hasComponent(v7, type_id<UIComponent,FactoryComponent>(void)::id[0]) == 1 )
{
    else
      v10 = 0;
    v11 = *(_DWORD **)UIControl::getName(*i);
    v12 = *(v11 - 3);
    if ( v12 != *((_DWORD *)*v3 - 3) || memcmp(v11, *v3, v12) )
    {
      result = *(_DWORD *)FactoryComponent::getFactoryName(v10);
      v13 = *(_DWORD *)(result - 12);
      if ( v13 != *((_DWORD *)*v3 - 3) )
        continue;
      result = memcmp((const void *)result, *v3, v13);
      if ( result )
    }
    FactoryComponent::create((FactoryComponent *)&v19, v10, v18);
    v14 = v20;
    if ( v20 )
      v15 = (unsigned int *)(v20 + 8);
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
    result = (*(int (**)(void))(**(_DWORD **)(v17 + 132) + 20))();
  }
  return result;
}


int __fastcall UIControl::setMinSize(int result, int a2)
{
  *(_DWORD *)(result + 32) = *(_DWORD *)a2;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 4);
  return result;
}


char *__fastcall UIControl::setComponent<GestureComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id) )
  {
    type_id<UIComponent,GestureComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GestureComponent>(void)::id);
  }
  v5 = type_id<UIComponent,GestureComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,GestureComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


int __fastcall UIControl::setHover(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = a2 | *(_WORD *)(result + 68) & 0xFFFE;
  return result;
}


int __fastcall UIControl::getAABB(UIControl *this, int a2)
{
  UIControl *v3; // r4@1
  int v4; // r0@1
  __int64 v9; // kr00_8@3
  int v26; // [sp+0h] [bp-38h]@0

  _R5 = a2;
  v3 = this;
  v4 = *(_BYTE *)(a2 + 69);
  __asm
  {
    VLDR            S16, [R5,#0x18]
    VLDR            S18, [R5,#0x1C]
  }
  if ( !_ZF )
    UIControl::_setCachedPosition((UIControl *)a2);
  v9 = *(_QWORD *)(_R5 + 72);
  _R6 = roundf(v9);
  _R5 = roundf(HIDWORD(v9));
    VMOV            R0, S16
    VMOV            R7, S18
    VMOV            S16, R6
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VCVTR.S32.F32   S16, S16
    VCVTR.S32.F32   S0, S0
    VMOV            S2, R5
    VCVTR.S32.F32   S18, S2
    VMOV            R1, S0
  _R0 = _R0 + _R1;
    VCVT.F32.S32    S20, S0
  _R0 = roundf(_R7);
    VCVT.F32.S32    S0, S16
    VCVT.F32.S32    S2, S18
    VMOV            R3, S20
    VMOV            R2, S2
    VMOV            R0, S0
  _R0 = _R0 + _R7;
    VCVT.F32.S32    S0, S0
    VSTR            S0, [SP,#0x38+var_38]
  return RectangleArea::RectangleArea(*(float *)&v3, _R1, _R2, _R3, v26);
}


char *__fastcall UIControl::_registerControlNameResolver(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int *v5; // r12@1
  __int64 *v6; // r0@1
  int v7; // r1@1 OVERLAPPED
  int v8; // r2@1
  char *result; // r0@2
  int v10; // [sp+4h] [bp-Ch]@1

  v4 = a1;
  v5 = a2;
  v10 = a3;
  v6 = (__int64 *)(a1 + 132);
  *(_QWORD *)&v7 = *(_QWORD *)(v4 + 136);
  if ( v7 == v8 )
  {
    result = std::vector<UIControl::ControlResolutionInfo,std::allocator<UIControl::ControlResolutionInfo>>::_M_emplace_back_aux<std::string const&,ui::NameResolutionScope &,std::function<void ()(UIControl&,std::shared_ptr<UIControl>)> &>(
               v6,
               v5,
               &v10,
               a4);
  }
  else
    __gnu_cxx::new_allocator<UIControl::ControlResolutionInfo>::construct<UIControl::ControlResolutionInfo,std::string const&,ui::NameResolutionScope &,std::function<void ()(UIControl&,std::shared_ptr<UIControl>)> &>(
      (int)v6,
      v7,
      v5,
      &v10,
      a4);
    result = (char *)(*(_DWORD *)(v4 + 136) + 24);
    *(_DWORD *)(v4 + 136) = result;
  return result;
}


          if ( v16 > UIControl::getZOrder(v2) )
{
        }
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v12);
          while ( __strex(v17 - 1, v12) );
        else
          v17 = (*v12)--;
        if ( v17 == 1 )
          v19 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
LABEL_37:
        if ( !v3 )
          return v8;
      }
      else
      {
        v8 = 1;
    }
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v5);
      while ( __strex(v21 - 1, v5) );
    else
      v21 = (*v5)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    return v8;
  }
  return 0;
}


int __fastcall UIControl::getModalAncestor(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 168);
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
  v10 = *(_DWORD *)(a2 + 164);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall UIControl::applyToChildren(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 92);
  for ( i = a2; v3 != v2; result = UIControl::applyToChildren(v5, i) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_DA7654();
    (*(void (__fastcall **)(_DWORD, _DWORD))(i + 12))(i, *v2);
    v5 = *v2;
    v2 += 2;
  }
  return result;
}


int __fastcall UIControl::setSelected(int result, __int16 a2)
{
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFFDF | 32 * a2;
  return result;
}


char *__fastcall UIControl::setComponent<AnimationComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
  {
    type_id<UIComponent,AnimationComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
  }
  v5 = type_id<UIComponent,AnimationComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,AnimationComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


signed int __fastcall UIControl::appendPropertyBag(UIControl *this, const UIPropertyBag *a2)
{
  const UIPropertyBag *v2; // r4@1
  UIPropertyBag *v3; // r0@1

  v2 = a2;
  v3 = (UIPropertyBag *)UIControl::getPropertyBag(this);
  return j_j_j__ZN13UIPropertyBag6appendERKS_(v3, v2);
}


char *__fastcall UIControl::setComponent<FactoryComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id[0];
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id) )
  {
    type_id<UIComponent,FactoryComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,FactoryComponent>(void)::id);
  }
  v5 = type_id<UIComponent,FactoryComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,FactoryComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


char *__fastcall UIControl::setComponent<CollectionComponent>(UIControl *this, UIComponent **a2)
{
  UIControl *v2; // r4@1
  UIComponent **v3; // r6@1
  char v4; // r0@1
  unsigned __int16 v5; // r7@4
  int v6; // r5@4
  UIComponent *v7; // r8@4
  int v8; // r1@5
  UIComponent *v9; // r2@5
  int v10; // r0@5
  int v11; // r0@8
  int v12; // r1@8
  char *v13; // r1@8
  char *v14; // r2@8
  int v16; // [sp+4h] [bp-1Ch]@8

  v2 = this;
  v3 = a2;
  v4 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
  __dmb();
  if ( !(v4 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
  {
    type_id<UIComponent,CollectionComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
  }
  v5 = type_id<UIComponent,CollectionComponent>(void)::id[0];
  v6 = UIControl::_getComponentIndex(v2, type_id<UIComponent,CollectionComponent>(void)::id[0]);
  v7 = *v3;
  if ( UIControl::_hasComponent(v2, v5) )
    UIControl::_eraseComponentFromLookup(v2, *(UIComponent **)(*((_DWORD *)v2 + 27) + 4 * v6));
    v8 = *((_DWORD *)v2 + 27);
    v9 = *v3;
    *v3 = 0;
    v10 = *(_DWORD *)(v8 + 4 * v6);
    *(_DWORD *)(v8 + 4 * v6) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  else
    v11 = (int)*v3;
    v12 = *((_DWORD *)v2 + 27);
    v16 = v11;
    v13 = (char *)(v12 + 4 * v6);
    v14 = (char *)*((_DWORD *)v2 + 28);
    if ( v13 != v14 || v14 == *((char **)v2 + 29) )
    {
      std::vector<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>,std::allocator<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>>::_M_insert_aux<std::unique_ptr<UIComponent,std::default_delete<UIComponent>>>(
        (int)v2 + 108,
        v13,
        &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    }
    else
      v16 = 0;
      *(_DWORD *)v13 = v11;
      *((_DWORD *)v2 + 28) = v13 + 4;
    v16 = 0;
    *((_DWORD *)v2 + 26) |= 1 << v5;
  return j_j_j__ZN9UIControl23_storeComponentInLookupER11UIComponent(v2, v7);
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ToggleComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ToggleComponent::setCheckedStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


  if ( UIControl::_hasComponent((UIControl *)v3, type_id<UIComponent,ButtonComponent>(void)::id[0]) == 1 )
{
  else
    v7 = 0;
  v15 = v4;
  if ( HIDWORD(v4) )
  {
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  ButtonComponent::setDefaultStateControl(v7, (int)&v15);
  result = HIDWORD(v15);
  if ( HIDWORD(v15) )
    v11 = (unsigned int *)(HIDWORD(v15) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    v13 = (unsigned int *)(HIDWORD(v4) + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


int __fastcall UIControl::setIsTemplate(int result, __int16 a2)
{
  __int16 v2; // r4@1
  UIControl **v3; // r5@1 OVERLAPPED
  UIControl **v4; // r6@1 OVERLAPPED
  UIControl *v5; // t1@2

  v2 = a2;
  *(_WORD *)(result + 68) = *(_WORD *)(result + 68) & 0xFBFF | (a2 << 10);
  for ( *(_QWORD *)&v3 = *(_QWORD *)(result + 92); v4 != v3; result = UIControl::setIsTemplate(v5, v2) )
  {
    v5 = *v3;
    v3 += 2;
  }
  return result;
}


int __fastcall UIControl::findCollectionIndex(int a1, const void **a2)
{
  int v2; // r10@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r1@2
  unsigned int v5; // r3@5
  unsigned int v6; // r7@6
  int v7; // r5@7
  int v8; // r9@7
  char v9; // r0@8
  unsigned __int16 v10; // r0@10
  int v11; // r1@11
  int v12; // r0@12
  unsigned int v13; // r3@13
  bool v14; // zf@14
  GridItemComponent *v15; // r5@17
  char v16; // r0@19
  unsigned __int16 v17; // r0@21
  int v18; // r1@22
  int v19; // r0@23
  unsigned int v20; // r3@24
  CollectionItemComponent *v21; // r8@28
  int v22; // r4@31
  unsigned int v23; // r1@32
  unsigned int *v24; // r0@32
  unsigned int v25; // r2@35
  unsigned int v26; // r3@36
  signed int v27; // r0@37
  unsigned int v28; // r1@42
  unsigned int *v29; // r0@42
  unsigned int v30; // r2@45
  unsigned int v31; // r3@46
  signed int v32; // r0@47
  unsigned int *v33; // r1@55
  unsigned int v34; // r0@57
  unsigned int *v35; // r7@61
  unsigned int v36; // r0@63
  unsigned int v37; // r1@66
  unsigned int *v38; // r0@66
  unsigned int v39; // r2@69
  unsigned int v40; // r3@70
  signed int v41; // r0@71
  char v42; // r0@79
  unsigned __int16 v43; // r0@81
  int v44; // r0@82
  int v45; // r2@83
  unsigned int v46; // r3@84
  GridComponent *v47; // r0@88
  _DWORD *v48; // r0@89
  size_t v49; // r2@89
  unsigned int *v50; // r1@96
  unsigned int v51; // r0@98
  unsigned int *v52; // r5@102
  unsigned int v53; // r0@104
  unsigned int *v54; // r1@111
  unsigned int v55; // r0@113
  unsigned int *v56; // r5@117
  unsigned int v57; // r0@119
  char v58; // r0@125
  unsigned __int16 v59; // r0@127
  int v60; // r0@128
  int v61; // r2@129
  unsigned int v62; // r3@130
  CollectionComponent *v63; // r0@134
  _DWORD *v64; // r0@135
  size_t v65; // r2@135
  unsigned int *v66; // r1@146
  unsigned int v67; // r0@148
  unsigned int *v68; // r4@152
  unsigned int v69; // r0@154
  const void **v71; // [sp+4h] [bp-44h]@1

  v2 = *(_DWORD *)(a1 + 8);
  v71 = a2;
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
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
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 4);
  if ( !v8 )
    goto LABEL_145;
  while ( 1 )
      v9 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
      if ( !(v9 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
      {
        v10 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,GridItemComponent>(void)::id[0] = v10;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
      }
      v11 = *(_DWORD *)(v8 + 104);
      if ( (1 << SLOBYTE(type_id<UIComponent,GridItemComponent>(void)::id[0])) & v11 )
        v12 = 0;
        if ( type_id<UIComponent,GridItemComponent>(void)::id[0] )
        {
          v13 = 1;
          do
          {
            v14 = (v13 & v11) == v13;
            v13 *= 2;
            if ( v14 )
              ++v12;
          }
          while ( v13 < 1 << SLOBYTE(type_id<UIComponent,GridItemComponent>(void)::id[0]) );
        }
        v15 = *(GridItemComponent **)(*(_DWORD *)(v8 + 108) + 4 * v12);
      else
        v15 = 0;
      v16 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id[0];
      if ( !(v16 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id) )
        v17 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,CollectionItemComponent>(void)::id[0] = v17;
        j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionItemComponent>(void)::id);
      v18 = *(_DWORD *)(v8 + 104);
      if ( (1 << SLOBYTE(type_id<UIComponent,CollectionItemComponent>(void)::id[0])) & v18 )
        v19 = 0;
        if ( type_id<UIComponent,CollectionItemComponent>(void)::id[0] )
          v20 = 1;
            v14 = (v20 & v18) == v20;
            v20 *= 2;
              ++v19;
          while ( v20 < 1 << SLOBYTE(type_id<UIComponent,CollectionItemComponent>(void)::id[0]) );
        v21 = *(CollectionItemComponent **)(*(_DWORD *)(v8 + 108) + 4 * v19);
        v21 = 0;
      if ( !v15 )
      v22 = *(_DWORD *)(v8 + 88);
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 4);
        v24 = (unsigned int *)(v22 + 4);
        do
          while ( 1 )
            if ( !v23 )
            {
              v27 = 1;
              v22 = 0;
              goto LABEL_52;
            }
            __dmb();
            v25 = __ldrex(v24);
            if ( v25 == v23 )
              break;
            __clrex();
            v23 = v25;
          v26 = __strex(v23 + 1, v24);
          v23 = v25;
        while ( v26 );
        __dmb();
        v27 = 0;
        if ( !*(_DWORD *)(v22 + 4) )
          v27 = 1;
        v27 = 1;
LABEL_52:
      v8 = *(_DWORD *)(v8 + 84);
      if ( v27 )
        v8 = 0;
      if ( v2 )
        v33 = (unsigned int *)(v2 + 4);
        if ( &pthread_create )
          __dmb();
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 == 1 )
          v35 = (unsigned int *)(v2 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          if ( &pthread_create )
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          else
            v36 = (*v35)--;
          if ( v36 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      if ( !v8 )
        goto LABEL_143;
      v42 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
      if ( !(v42 & 1)
        && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
        v43 = typeid_t<UIComponent>::count[0]++;
        type_id<UIComponent,GridComponent>(void)::id[0] = v43;
        j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
      v2 = v22;
      v44 = *(_DWORD *)(v8 + 104);
      if ( (1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0])) & v44 )
        v45 = 0;
        if ( type_id<UIComponent,GridComponent>(void)::id[0] )
          v46 = 1;
            v14 = (v46 & v44) == v46;
            v46 *= 2;
              ++v45;
          while ( v46 < 1 << SLOBYTE(type_id<UIComponent,GridComponent>(void)::id[0]) );
        v47 = *(GridComponent **)(*(_DWORD *)(v8 + 108) + 4 * v45);
        if ( v47 )
          v48 = *(_DWORD **)GridComponent::getCollectionName(v47);
          v49 = *(v48 - 3);
          if ( v49 == *((_DWORD *)*v71 - 3) && !memcmp(v48, *v71, v49) )
            v7 = GridItemComponent::getCollectionIndex(v15);
            goto LABEL_144;
        goto LABEL_141;
    v22 = *(_DWORD *)(v8 + 88);
    if ( !v21 )
        v37 = *(_DWORD *)(v22 + 4);
        v38 = (unsigned int *)(v22 + 4);
            if ( !v37 )
              v41 = 1;
              goto LABEL_108;
            v39 = __ldrex(v38);
            if ( v39 == v37 )
            v37 = v39;
          v40 = __strex(v37 + 1, v38);
          v37 = v39;
        while ( v40 );
        v41 = 0;
          v41 = 1;
        v41 = 1;
LABEL_108:
      if ( v41 )
        v54 = (unsigned int *)(v2 + 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 == 1 )
          v56 = (unsigned int *)(v2 + 8);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 == 1 )
      goto LABEL_141;
    if ( v22 )
      v28 = *(_DWORD *)(v22 + 4);
      v29 = (unsigned int *)(v22 + 4);
      do
        while ( 1 )
          if ( !v28 )
            v32 = 1;
            v22 = 0;
            goto LABEL_93;
          v30 = __ldrex(v29);
          if ( v30 == v28 )
            break;
          __clrex();
          v28 = v30;
        v31 = __strex(v28 + 1, v29);
        v28 = v30;
      while ( v31 );
      v32 = 0;
      if ( !*(_DWORD *)(v22 + 4) )
        v32 = 1;
    else
      v32 = 1;
LABEL_93:
    v8 = *(_DWORD *)(v8 + 84);
    if ( v32 )
      v8 = 0;
    if ( v2 )
      v50 = (unsigned int *)(v2 + 4);
      if ( &pthread_create )
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        v52 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 8))(v2);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 12))(v2);
    if ( !v8 )
      break;
    v58 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id;
    __dmb();
    if ( !(v58 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id) )
      v59 = typeid_t<UIComponent>::count[0]++;
      type_id<UIComponent,CollectionComponent>(void)::id[0] = v59;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CollectionComponent>(void)::id);
    v2 = v22;
    v60 = *(_DWORD *)(v8 + 104);
    if ( (1 << SLOBYTE(type_id<UIComponent,CollectionComponent>(void)::id[0])) & v60 )
      v61 = 0;
      if ( type_id<UIComponent,CollectionComponent>(void)::id[0] )
        v62 = 1;
          v14 = (v62 & v60) == v62;
          v62 *= 2;
          if ( v14 )
            ++v61;
        while ( v62 < 1 << SLOBYTE(type_id<UIComponent,CollectionComponent>(void)::id[0]) );
      v63 = *(CollectionComponent **)(*(_DWORD *)(v8 + 108) + 4 * v61);
      if ( v63 )
        v64 = *(_DWORD **)CollectionComponent::getCollectionName(v63);
        v65 = *(v64 - 3);
        if ( v65 == *((_DWORD *)*v71 - 3) && !memcmp(v64, *v71, v65) )
          v7 = CollectionItemComponent::getCollectionIndex(v21);
          goto LABEL_144;
LABEL_141:
        v7 = 0;
        goto LABEL_145;
LABEL_143:
LABEL_144:
  v2 = v22;
LABEL_145:
  if ( v2 )
    v66 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 == 1 )
      v68 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 8))(v2);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 12))(v2);
  return v7;
}
