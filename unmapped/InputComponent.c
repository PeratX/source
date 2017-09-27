

void __fastcall InputComponent::~InputComponent(InputComponent *this)
{
  InputComponent::~InputComponent(this);
}


int __fastcall InputComponent::isWithinClipRegion(UIComponent *a1, int a2)
{
  int v2; // r8@1
  int v3; // r0@1
  UIControl *v4; // r0@1
  __int64 v5; // r0@3
  int v6; // r5@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r6@10
  unsigned int v10; // r0@12
  int v11; // r6@17
  unsigned int *v12; // r1@18
  unsigned int v13; // r0@20
  unsigned int *v14; // r5@24
  unsigned int v15; // r0@26
  int v16; // r4@32
  int v17; // r5@34
  unsigned int *v18; // r1@35
  unsigned int v19; // r0@37
  unsigned int *v20; // r6@41
  unsigned int v21; // r0@43
  char v23; // [sp+4h] [bp-2Ch]@3
  int v24; // [sp+8h] [bp-28h]@3
  UIControl *v25; // [sp+Ch] [bp-24h]@1
  int v26; // [sp+10h] [bp-20h]@3

  v2 = a2;
  v3 = UIComponent::getOwner(a1);
  UIControl::getParent((UIControl *)&v25, v3);
  v4 = v25;
  if ( v25 )
  {
    while ( UIControl::getClipsChildren(v4) != 1 )
    {
      UIControl::getParent((UIControl *)&v23, (int)v25);
      v5 = *(_QWORD *)&v23;
      *(_DWORD *)&v23 = 0;
      v24 = 0;
      v25 = (UIControl *)v5;
      v6 = v26;
      v26 = HIDWORD(v5);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 4);
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
          v9 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v11 = v24;
      if ( v24 )
        v12 = (unsigned int *)(v24 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v4 = v25;
      if ( !v25 )
        goto LABEL_32;
    }
    v16 = UIControl::containsPoint(v25, v2);
  }
  else
LABEL_32:
    v16 = 1;
  v17 = v26;
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
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
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return v16;
}


signed int __fastcall InputComponent::_sendScreenEvent(UIComponent *a1, int a2, int a3, char a4, __int64 *a5, int a6, int a7)
{
  UIComponent *v7; // r9@1
  char v8; // r5@1
  int v9; // r7@1
  int v10; // r4@1
  int v11; // r0@1
  UIControl *v12; // r0@1
  int v13; // r0@1
  char v14; // r0@1
  int v15; // r1@1 OVERLAPPED
  int v16; // r5@1
  int v17; // r2@1
  int v18; // r2@2
  __int64 v19; // kr00_8@2
  int v20; // r1@2
  int v21; // r2@2
  int v22; // r3@2
  int v23; // r7@2
  signed int result; // r0@4
  __int64 v25; // [sp+28h] [bp-40h]@1
  __int64 v26; // [sp+30h] [bp-38h]@1
  __int64 v27; // [sp+38h] [bp-30h]@1
  int v28; // [sp+40h] [bp-28h]@2
  char v29; // [sp+44h] [bp-24h]@1

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v25);
  LODWORD(v25) = 1;
  v11 = *(_DWORD *)v9;
  WORD3(v25) = *(_DWORD *)v9;
  WORD2(v25) = HIWORD(v11);
  LOBYTE(v26) = *(_BYTE *)(v9 + 9);
  BYTE1(v26) = v8;
  BYTE3(v26) = *(_BYTE *)(v9 + 11);
  BYTE2(v26) = *(_BYTE *)(v9 + 12);
  v12 = (UIControl *)UIComponent::getOwner(v7);
  HIDWORD(v26) = UIControl::getPropertyBag(v12);
  v27 = *a5;
  v29 = *(_BYTE *)(v9 + 8);
  v13 = UIComponent::getOwner(v7);
  v14 = UIControl::broadcastEvent(v13, a6, v10, a7, (int)v7, v25, SHIDWORD(v25), v26, SHIDWORD(v26));
  *(_QWORD *)&v15 = *(_QWORD *)(v10 + 4);
  v16 = v14 & 1;
  if ( v15 == v17 )
  {
    std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v25, v10));
  }
  else
    v18 = HIDWORD(v25);
    v19 = v26;
    *(_DWORD *)v15 = v25;
    *(_DWORD *)(v15 + 4) = v18;
    *(_QWORD *)(v15 + 8) = v19;
    v20 = v15 + 16;
    v21 = HIDWORD(v27);
    v22 = v28;
    v23 = *(_DWORD *)&v29;
    *(_DWORD *)v20 = v27;
    *(_DWORD *)(v20 + 4) = v21;
    *(_DWORD *)(v20 + 8) = v22;
    *(_DWORD *)(v20 + 12) = v23;
    *(_DWORD *)(v10 + 4) += 32;
  result = 0;
  if ( !v16 )
    result = 1;
  return result;
}


int __fastcall InputComponent::addRemappingMapping(int result, char a2)
{
  *(_BYTE *)(result + 35) = 1;
  *(_BYTE *)(result + 32) = a2;
  return result;
}


int __fastcall InputComponent::setHoverEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}


int __fastcall InputComponent::setAlwaysListensToInput(int result, bool a2)
{
  *(_BYTE *)(result + 36) = a2;
  return result;
}


int __fastcall InputComponent::_isWithinInputScope(UIComponent *this, int a2, int a3, int a4)
{
  UIComponent *v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int result; // r0@2
  UIControl *v8; // r0@3
  UIControl *v9; // r0@6

  v4 = this;
  v5 = a4;
  v6 = a3;
  if ( *(_BYTE *)(a2 + 13) )
  {
    result = InputComponent::_getContentPanelHover(this, a3);
  }
  else
    v8 = (UIControl *)UIComponent::getOwner(this);
    if ( UIControl::getHover(v8) )
    {
      result = 1;
    }
    else
      if ( !*((_BYTE *)v4 + 36) )
        return 0;
      v9 = (UIControl *)UIComponent::getOwner(v4);
      result = UIControl::containsPoint(v9, v6);
  if ( !v5 && result == 1 )
    result = InputComponent::isWithinClipRegion(v4, v6);
  return result;
}


signed int __fastcall InputComponent::_shouldHandleMapping(UIComponent *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r3@2
  int v9; // r4@4
  UIControl *v10; // r0@7
  int v11; // r0@7

  if ( *(_DWORD *)(a2 + 16) != 1 || (v8 = 0, (unsigned int)(a7 - 3) <= 1) && a8 != 2 )
  {
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 == 1 )
    {
      if ( a3 != 1 )
        return 0;
    }
    else
      if ( v9 != 2 )
      {
        if ( v9 != 3 )
          return 1;
        v10 = (UIControl *)UIComponent::getOwner(a1);
        v11 = UIControl::getHover(v10);
        goto LABEL_12;
      }
      if ( a3 )
    v11 = InputComponent::_shouldHandlePressedMapping(a1, a2, 0, a5, a6, a7);
LABEL_12:
    v8 = v11;
  }
  return v8;
}


int __fastcall InputComponent::handleScrollDirection(UIComponent *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  UIComponent *v7; // r5@1
  int v8; // r4@1
  int v9; // r7@1
  int v10; // r8@1
  int v11; // r6@2
  UIControl *v12; // r10@2
  int v13; // r11@2
  int v14; // r7@5
  int i; // r6@10
  int v17; // r11@10
  __int64 v18; // r0@11
  int v19; // r3@12
  int v20; // r5@12
  int v21; // r7@12
  int v22; // r0@12
  int v23; // r3@12
  int v24; // r5@12
  int v25; // r7@12
  int v26; // [sp+28h] [bp-70h]@5
  int v27; // [sp+2Ch] [bp-6Ch]@10
  int v28; // [sp+30h] [bp-68h]@11
  __int16 v29; // [sp+34h] [bp-64h]@11
  int v30; // [sp+38h] [bp-60h]@12
  char v31; // [sp+39h] [bp-5Fh]@11
  int v32; // [sp+3Ch] [bp-5Ch]@11
  int v33; // [sp+40h] [bp-58h]@11
  int v34; // [sp+44h] [bp-54h]@11
  int v35; // [sp+48h] [bp-50h]@12
  char v36; // [sp+4Ch] [bp-4Ch]@11
  int v37; // [sp+54h] [bp-44h]@10
  int v38; // [sp+58h] [bp-40h]@10
  int v39; // [sp+5Ch] [bp-3Ch]@10
  int v40; // [sp+60h] [bp-38h]@10

  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( !*((_BYTE *)this + 40) )
    return 0;
  v11 = a7;
  v12 = (UIControl *)UIComponent::getOwner(this);
  v13 = UIControl::getHover(v12);
  if ( a7 || UIControl::getVisible(v12) != 1 || UIComponent::isLocked(v7) == 1 )
  {
    v26 = v9;
    v14 = 0;
    if ( !v13 )
      return v14 | v11;
LABEL_9:
    if ( !*((_BYTE *)v7 + 39) )
    {
      UIControl::setHover(v12, v14);
      ScreenEvent::ScreenEvent((ScreenEvent *)&v37);
      v27 = v14;
      v37 = 2;
      LOBYTE(v39) = v14;
      v38 = UIControl::getPropertyBag(v12);
      UIControl::broadcastEvent((int)v12, v10, v8, v26, (int)v7, v37, v38, v39, v40);
      v17 = *(_QWORD *)((char *)v7 + 20) >> 32;
      for ( i = *(_QWORD *)((char *)v7 + 20); i != v17; i += 4 )
      {
        ScreenEvent::ScreenEvent((ScreenEvent *)&v28);
        v28 = 1;
        v29 = *(_WORD *)i;
        v31 = v27;
        v32 = UIControl::getPropertyBag(v12);
        v33 = *(_DWORD *)a5;
        v34 = *(_DWORD *)(a5 + 4);
        v36 = *(_BYTE *)(i + 2);
        v18 = *(_QWORD *)(v8 + 4);
        if ( (_DWORD)v18 == HIDWORD(v18) )
        {
          std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v28, v8));
        }
        else
          v19 = *(_DWORD *)&v29;
          v20 = v30;
          v21 = v32;
          *(_DWORD *)v18 = v28;
          *(_DWORD *)(v18 + 4) = v19;
          *(_DWORD *)(v18 + 8) = v20;
          *(_DWORD *)(v18 + 12) = v21;
          v22 = v18 + 16;
          v23 = v34;
          v24 = v35;
          v25 = *(_DWORD *)&v36;
          *(_DWORD *)v22 = v33;
          *(_DWORD *)(v22 + 4) = v23;
          *(_DWORD *)(v22 + 8) = v24;
          *(_DWORD *)(v22 + 12) = v25;
          *(_DWORD *)(v8 + 4) += 32;
      }
      v11 = a7;
      v14 = v27;
    }
    return v14 | v11;
  }
  v26 = v9;
  v14 = UIControl::containsPoint(v12, a5);
  if ( (v13 ^ v14) == 1 )
    goto LABEL_9;
  return v14 | v11;
}


int __fastcall InputComponent::_shouldHandlePressedMapping(UIComponent *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  UIComponent *v7; // r6@1
  int v8; // r5@1
  int v9; // r0@2
  UIControl *v10; // r0@3
  UIControl *v11; // r0@6
  int result; // r0@11

  v6 = a2;
  v7 = this;
  v8 = a4;
  if ( *(_BYTE *)(a2 + 13) )
  {
    v9 = InputComponent::_getContentPanelHover(this, a5);
  }
  else
    v10 = (UIControl *)UIComponent::getOwner(this);
    if ( UIControl::getHover(v10) )
    {
      v9 = 1;
    }
    else
      if ( !*((_BYTE *)v7 + 36) )
        goto LABEL_12;
      v11 = (UIControl *)UIComponent::getOwner(v7);
      v9 = UIControl::containsPoint(v11, a5);
  if ( (unsigned int)(a6 - 3) >= 2 && v9 == 1 )
    v9 = InputComponent::isWithinClipRegion(v7, a5);
  if ( v9 )
    return 1;
LABEL_12:
  result = 0;
  if ( !v8 && *(_BYTE *)(v6 + 10) )
    result = *(_BYTE *)(v6 + 9);
    if ( result != 1 )
      result = 0;
  return result;
}


int __fastcall InputComponent::handleControllerDirection(int a1, int a2, int a3, int a4, int a5, __int64 *a6, int a7)
{
  int v7; // r6@1
  int v8; // r10@1
  int v9; // r9@1
  bool v10; // zf@1
  int v11; // r11@4
  bool v12; // zf@4
  __int64 v13; // kr00_8@7
  int v14; // r0@7
  __int64 v15; // r0@7
  int v16; // r2@8
  __int64 v17; // kr08_8@8
  int v18; // r0@8
  int v19; // r2@8
  int v20; // r3@8
  int v21; // r6@8
  int v23; // [sp+24h] [bp-4Ch]@4
  __int64 v24; // [sp+28h] [bp-48h]@7
  __int64 v25; // [sp+30h] [bp-40h]@7
  int v26; // [sp+38h] [bp-38h]@8
  int v27; // [sp+3Ch] [bp-34h]@8
  int v28; // [sp+40h] [bp-30h]@8
  int v29; // [sp+44h] [bp-2Ch]@8

  v7 = a1;
  v8 = a4;
  v9 = a2;
  v10 = a7 == 1;
  if ( a7 == 1 )
    v10 = *(_BYTE *)(a1 + 34) == 0;
  if ( v10 )
  {
    v11 = 1;
  }
  else
    v23 = a3;
    v11 = InputComponent::_shouldHandleControllerDirection((UIComponent *)a1, a2, (int)a6);
    v12 = v11 == 0;
    if ( !v11 )
      v12 = *(_BYTE *)(v7 + 34) == 0;
    if ( v12 )
    {
      v11 = 0;
    }
    else
      v13 = *a6;
      ScreenEvent::ScreenEvent((ScreenEvent *)&v24);
      LODWORD(v24) = 14;
      HIDWORD(v24) = a5;
      v25 = v13;
      v14 = UIComponent::getOwner((UIComponent *)v7);
      UIControl::broadcastEvent(v14, v9, v8, v23, v7, v24, SHIDWORD(v24), v25, SHIDWORD(v25));
      v15 = *(_QWORD *)(v8 + 4);
      if ( (_DWORD)v15 == HIDWORD(v15) )
      {
        std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v24, v8));
      }
      else
        v16 = HIDWORD(v24);
        v17 = v25;
        *(_DWORD *)v15 = v24;
        *(_DWORD *)(v15 + 4) = v16;
        *(_QWORD *)(v15 + 8) = v17;
        v18 = v15 + 16;
        v19 = v27;
        v20 = v28;
        v21 = v29;
        *(_DWORD *)v18 = v26;
        *(_DWORD *)(v18 + 4) = v19;
        *(_DWORD *)(v18 + 8) = v20;
        *(_DWORD *)(v18 + 12) = v21;
        *(_DWORD *)(v8 + 4) += 32;
  return v11;
}


int __fastcall InputComponent::setIgnoreHoverChange(int result, bool a2)
{
  *(_BYTE *)(result + 39) = a2;
  return result;
}


void __fastcall InputComponent::~InputComponent(InputComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)InputComponent::~InputComponent(this);
  j_j_j__ZdlPv_3(v1);
}


int __fastcall InputComponent::setPreviousFocusControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 44) = *(_DWORD *)a2;
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
  result = *(_DWORD *)(v2 + 48);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 48) = v3;
  return result;
}


int __fastcall InputComponent::handlePointerLocation(UIComponent *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  UIComponent *v7; // r10@1
  int v8; // r5@1
  int v9; // r9@1
  int v10; // r8@2
  UIControl *v11; // r0@2
  UIControl *v12; // r11@2
  char v13; // r0@7
  int v15; // r9@12 OVERLAPPED
  int v16; // r10@12 OVERLAPPED
  __int64 v17; // r0@13
  int v18; // r3@14
  int v19; // r6@14
  int v20; // r7@14
  int v21; // r0@14
  int v22; // r3@14
  int v23; // r6@14
  int v24; // r7@14
  bool v25; // zf@18
  int v26; // r9@21
  int v27; // r7@21
  int v28; // r8@21
  __int64 v29; // kr10_8@21
  int v30; // ST10_4@21
  signed int v31; // r2@22
  unsigned __int64 v32; // [sp+24h] [bp-7Ch]@12
  int v33; // [sp+2Ch] [bp-74h]@2
  int v34; // [sp+30h] [bp-70h]@12
  int v35; // [sp+30h] [bp-70h]@18
  int v36; // [sp+34h] [bp-6Ch]@6
  int v37; // [sp+38h] [bp-68h]@13
  __int16 v38; // [sp+3Ch] [bp-64h]@13
  int v39; // [sp+40h] [bp-60h]@14
  char v40; // [sp+41h] [bp-5Fh]@13
  int v41; // [sp+44h] [bp-5Ch]@13
  int v42; // [sp+48h] [bp-58h]@13
  int v43; // [sp+4Ch] [bp-54h]@13
  int v44; // [sp+50h] [bp-50h]@14
  char v45; // [sp+54h] [bp-4Ch]@13
  int v46; // [sp+5Ch] [bp-44h]@12
  __int64 v47; // [sp+60h] [bp-40h]@12
  int v48; // [sp+68h] [bp-38h]@12
  int v49; // [sp+6Ch] [bp-34h]@21

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( !*((_BYTE *)this + 40) )
    return 0;
  v33 = a2;
  v10 = a7;
  v11 = (UIControl *)UIComponent::getOwner(this);
  v12 = v11;
  if ( a7 || UIControl::getVisible(v11) != 1 || UIComponent::isLocked(v7) || !UIControl::containsPoint(v12, a5) )
  {
    v25 = UIControl::getHover(v12) == 0;
    v13 = 0;
    v36 = 0;
    if ( v25 )
      goto LABEL_18;
LABEL_9:
    if ( *((_BYTE *)v7 + 39) )
    {
      v13 = 0;
    }
    else
      UIControl::setHover(v12, v36);
      ScreenEvent::ScreenEvent((ScreenEvent *)&v46);
      v46 = 2;
      BYTE4(v47) = v36;
      LODWORD(v47) = UIControl::getPropertyBag(v12);
      v34 = v9;
      v32 = __PAIR__(
              (unsigned int)v7,
              UIControl::broadcastEvent((int)v12, v33, v8, v9, (int)v7, v46, v47, SHIDWORD(v47), v48));
      for ( *(_QWORD *)&v15 = *(_QWORD *)((char *)v7 + 20); v15 != v16; v15 += 4 )
      {
        ScreenEvent::ScreenEvent((ScreenEvent *)&v37);
        v37 = 1;
        v38 = *(_WORD *)v15;
        v40 = v36;
        v41 = UIControl::getPropertyBag(v12);
        v42 = *(_DWORD *)a5;
        v43 = *(_DWORD *)(a5 + 4);
        v45 = *(_BYTE *)(v15 + 2);
        v17 = *(_QWORD *)(v8 + 4);
        if ( (_DWORD)v17 == HIDWORD(v17) )
        {
          std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v37, v8));
        }
        else
          v18 = *(_DWORD *)&v38;
          v19 = v39;
          v20 = v41;
          *(_DWORD *)v17 = v37;
          *(_DWORD *)(v17 + 4) = v18;
          *(_DWORD *)(v17 + 8) = v19;
          *(_DWORD *)(v17 + 12) = v20;
          v21 = v17 + 16;
          v22 = v43;
          v23 = v44;
          v24 = *(_DWORD *)&v45;
          *(_DWORD *)v21 = v42;
          *(_DWORD *)(v21 + 4) = v22;
          *(_DWORD *)(v21 + 8) = v23;
          *(_DWORD *)(v21 + 12) = v24;
          *(_DWORD *)(v8 + 4) += 32;
      }
      v10 = a7;
      v9 = v34;
      v7 = (UIComponent *)HIDWORD(v32);
      v13 = v32;
    goto LABEL_18;
  }
  v36 = InputComponent::isWithinClipRegion(v7, a5);
  if ( (UIControl::getHover(v12) ^ v36) == 1 )
    goto LABEL_9;
  v13 = 0;
LABEL_18:
  v25 = v10 == 1;
  v35 = v9;
  if ( v10 == 1 )
    v25 = *((_BYTE *)v7 + 33) == 0;
  if ( !v25 )
    v26 = v10;
    v27 = *(_QWORD *)a6 >> 32;
    v28 = *(_QWORD *)a6;
    v29 = *(_QWORD *)a5;
    ScreenEvent::ScreenEvent((ScreenEvent *)&v46);
    v46 = 3;
    v47 = v29;
    v48 = v28;
    v49 = v27;
    v30 = v28;
    v10 = v26;
    v13 = UIControl::broadcastEvent((int)v12, v33, v8, v35, (int)v7, 3, v29, SHIDWORD(v29), v30);
  v31 = 0;
  if ( !(v13 & 1) )
    v31 = 1;
  return (v36 | v10) & v31;
}


int __fastcall InputComponent::handleFocusLocation(UIComponent *this, int a2, int a3, int a4, int a5, int a6)
{
  UIComponent *v6; // r9@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@2
  UIControl *v10; // r0@2
  UIControl *v11; // r11@2
  __int64 i; // r8@10
  __int64 v13; // r0@11
  int v14; // r3@12
  int v15; // r5@12
  int v16; // r7@12
  int v17; // r0@12
  int v18; // r3@12
  int v19; // r5@12
  int v20; // r7@12
  bool v21; // zf@16
  __int64 v22; // kr08_8@19
  __int64 v23; // r0@19
  __int64 v24; // r2@20
  int v25; // r7@20
  int v26; // r0@20
  __int64 v27; // r2@20
  int v28; // r7@20
  unsigned __int64 v30; // [sp+28h] [bp-78h]@10
  int v31; // [sp+30h] [bp-70h]@2
  int v32; // [sp+34h] [bp-6Ch]@6
  int v33; // [sp+38h] [bp-68h]@11
  __int16 v34; // [sp+3Ch] [bp-64h]@11
  int v35; // [sp+40h] [bp-60h]@12
  char v36; // [sp+41h] [bp-5Fh]@11
  int v37; // [sp+44h] [bp-5Ch]@11
  __int64 v38; // [sp+48h] [bp-58h]@11
  int v39; // [sp+50h] [bp-50h]@12
  char v40; // [sp+54h] [bp-4Ch]@11
  int v41; // [sp+58h] [bp-48h]@10
  __int64 v42; // [sp+5Ch] [bp-44h]@10
  int v43; // [sp+64h] [bp-3Ch]@10
  int v44; // [sp+68h] [bp-38h]@20
  __int64 v45; // [sp+6Ch] [bp-34h]@20
  int v46; // [sp+74h] [bp-2Ch]@20

  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( !*((_BYTE *)this + 40) )
    return 0;
  v31 = a2;
  v9 = a6;
  v10 = (UIControl *)UIComponent::getOwner(this);
  v11 = v10;
  if ( a6 || UIControl::getVisible(v10) != 1 || UIComponent::isLocked(v6) || !UIControl::containsPoint(v11, a5) )
  {
    v32 = 0;
    if ( UIControl::getHover(v11) )
      goto LABEL_9;
  }
  else
    v32 = InputComponent::isWithinClipRegion(v6, a5);
    if ( (UIControl::getHover(v11) ^ v32) == 1 )
    {
LABEL_9:
      if ( !*((_BYTE *)v6 + 39) )
      {
        UIControl::setHover(v11, v32);
        ScreenEvent::ScreenEvent((ScreenEvent *)&v41);
        v41 = 2;
        BYTE4(v42) = v32;
        LODWORD(v42) = UIControl::getPropertyBag(v11);
        v30 = __PAIR__(v8, (unsigned int)v6);
        UIControl::broadcastEvent((int)v11, v31, v7, v8, (int)v6, v41, v42, SHIDWORD(v42), v43);
        for ( i = *(_QWORD *)((char *)v6 + 20); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 4 )
        {
          ScreenEvent::ScreenEvent((ScreenEvent *)&v33);
          v33 = 1;
          v34 = *(_WORD *)i;
          v36 = v32;
          v37 = UIControl::getPropertyBag(v11);
          v38 = *(_QWORD *)a5;
          v40 = *(_BYTE *)(i + 2);
          v13 = *(_QWORD *)(v7 + 4);
          if ( (_DWORD)v13 == HIDWORD(v13) )
          {
            std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v33, v7));
          }
          else
            v14 = *(_DWORD *)&v34;
            v15 = v35;
            v16 = v37;
            *(_DWORD *)v13 = v33;
            *(_DWORD *)(v13 + 4) = v14;
            *(_DWORD *)(v13 + 8) = v15;
            *(_DWORD *)(v13 + 12) = v16;
            v17 = v13 + 16;
            v18 = HIDWORD(v38);
            v19 = v39;
            v20 = *(_DWORD *)&v40;
            *(_DWORD *)v17 = v38;
            *(_DWORD *)(v17 + 4) = v18;
            *(_DWORD *)(v17 + 8) = v19;
            *(_DWORD *)(v17 + 12) = v20;
            *(_DWORD *)(v7 + 4) += 32;
        }
        v8 = HIDWORD(v30);
        v6 = (UIComponent *)v30;
        v9 = a6;
      }
      goto LABEL_16;
    }
LABEL_16:
  v21 = v9 == 1;
  if ( v9 == 1 )
    v21 = *((_BYTE *)v6 + 33) == 0;
  if ( !v21 )
    v22 = *(_QWORD *)a5;
    ScreenEvent::ScreenEvent((ScreenEvent *)&v41);
    v41 = 5;
    v42 = v22;
    UIControl::broadcastEvent((int)v11, v31, v7, v8, (int)v6, 5, v22, SHIDWORD(v22), v43);
    v23 = *(_QWORD *)(v7 + 4);
    if ( (_DWORD)v23 == HIDWORD(v23) )
      std::vector<ScreenEvent,std::allocator<ScreenEvent>>::_M_emplace_back_aux<ScreenEvent const&>(__PAIR__(&v41, v7));
    else
      v24 = v42;
      v25 = v43;
      *(_DWORD *)v23 = v41;
      *(_QWORD *)(v23 + 4) = v24;
      *(_DWORD *)(v23 + 12) = v25;
      v26 = v23 + 16;
      v27 = v45;
      v28 = v46;
      *(_DWORD *)v26 = v44;
      *(_QWORD *)(v26 + 4) = v27;
      *(_DWORD *)(v26 + 12) = v28;
      *(_DWORD *)(v7 + 4) += 32;
    v9 = a6;
  return v32 | v9;
}


UIComponent *__fastcall InputComponent::InputComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6B40;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_BYTE *)v2 + 40) = 1;
  *((_BYTE *)v2 + 41) = 1;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 16) = 0;
  *((_DWORD *)v2 + 17) = 1065353216;
  LODWORD(v3) = (char *)v2 + 68;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = sub_DA7744(v3);
  *((_DWORD *)v2 + 14) = v4;
  if ( v4 == 1 )
  {
    *((_DWORD *)v2 + 19) = 0;
    v6 = (char *)v2 + 76;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  *((_DWORD *)v2 + 13) = v6;
  return v2;
}


char *__fastcall InputComponent::addHoverButtonMapping(int a1, int a2, int a3)
{
  int v3; // r4@1
  char *result; // r0@2
  void *v12; // r5@3
  unsigned int v13; // r2@3
  unsigned int v14; // r1@5
  unsigned int v15; // r7@5
  char *v16; // r6@11
  signed int v17; // r2@13
  int v19; // r8@13
  int v20; // r8@15

  v3 = a1;
  _R9 = a2;
  _R0 = *(_QWORD *)(a1 + 24);
  _R8 = a3;
  if ( (_DWORD)_R0 == HIDWORD(_R0) )
  {
    v12 = *(void **)(v3 + 20);
    v13 = ((signed int)_R0 - (signed int)v12) >> 2;
    if ( !v13 )
      v13 = 1;
    HIDWORD(_R0) = v13 + (((signed int)_R0 - (signed int)v12) >> 2);
    v15 = v13 + (((signed int)_R0 - (signed int)v12) >> 2);
    if ( 0 != HIDWORD(_R0) >> 30 )
      v15 = 0x3FFFFFFF;
    if ( v14 < v13 )
    if ( v15 )
    {
      if ( v15 >= 0x40000000 )
        sub_DA7414();
      v16 = (char *)operator new(4 * v15);
      LODWORD(_R0) = *(_QWORD *)(v3 + 20) >> 32;
      v12 = (void *)*(_QWORD *)(v3 + 20);
    }
    else
      v16 = 0;
    v17 = _R0 - (_DWORD)v12;
    __asm { PKHBT.W         R0, R9, R8,LSL#16 }
    v19 = (int)&v16[v17];
    *(_DWORD *)&v16[v17] = _R0;
    if ( 0 != v17 >> 2 )
      _aeabi_memmove(v16, v12);
    v20 = v19 + 4;
    if ( v12 )
      operator delete(v12);
    result = &v16[4 * v15];
    *(_DWORD *)(v3 + 20) = v16;
    *(_DWORD *)(v3 + 24) = v20;
    *(_DWORD *)(v3 + 28) = result;
  }
  else
    __asm { PKHBT.W         R1, R9, R8,LSL#16 }
    *(_DWORD *)_R0 = HIDWORD(_R0);
    result = (char *)(*(_DWORD *)(v3 + 24) + 4);
    *(_DWORD *)(v3 + 24) = result;
  return result;
}


signed int __fastcall InputComponent::_shouldDetectDoubleClickFor(InputComponent *this, int a2)
{
  int v2; // r0@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  int v5; // r3@3
  bool v6; // zf@3
  signed int result; // r0@6

  v4 = *((_QWORD *)this + 1);
  v2 = *((_QWORD *)this + 1) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 == v2 )
  {
LABEL_8:
    result = 0;
  }
  else
    a2 = (unsigned __int16)a2;
    while ( 1 )
    {
      v5 = *(_WORD *)v3;
      v6 = v5 == a2;
      if ( v5 == a2 )
        v6 = *(_DWORD *)(v3 + 4) == 1;
      if ( v6 )
        break;
      v3 += 20;
      if ( v2 == v3 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


int __fastcall InputComponent::getPreviousFocusControl(int result, int a2)
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

  v2 = *(_DWORD *)(a2 + 48);
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
  v10 = *(_DWORD *)(a2 + 44);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall InputComponent::canHandleDeselect(InputComponent *this, __int16 a2)
{
  _WORD *v2; // r2@1
  _WORD *v3; // r12@1
  int v4; // r3@2
  _WORD *v5; // r1@3
  int v6; // t1@3
  char v7; // r0@5
  int result; // r0@6

  v3 = (_WORD *)(*((_QWORD *)this + 1) >> 32);
  v2 = (_WORD *)*((_QWORD *)this + 1);
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    v4 = (unsigned __int16)a2;
    while ( 1 )
    {
      v5 = v2;
      v6 = *v2;
      v2 += 10;
      if ( v6 == v4 )
        break;
      if ( v3 == v2 )
      {
        v7 = 0;
        goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_8:
    result = (unsigned __int8)v7 & (*((_BYTE *)v5 + 12) != 0);
  return result;
}


int __fastcall InputComponent::setRemembersModalFocus(int result, bool a2)
{
  *(_BYTE *)(result + 41) = a2;
  return result;
}


int __fastcall InputComponent::setInlineModal(int result, int a2)
{
  if ( a2 != *(_BYTE *)(result + 38) )
    *(_BYTE *)(result + 38) = a2;
  return result;
}


int __fastcall InputComponent::_passesInputModeCondition(int a1, int a2, int a3, int a4)
{
  int result; // r0@2
  signed int v5; // r1@3
  unsigned int v6; // r2@3
  signed int v7; // r0@5

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v5 = 0;
    v6 = a3 - 3;
    if ( a4 != 2 )
      v5 = 1;
    v7 = 0;
    if ( v6 < 2 )
      v7 = 1;
    result = v7 & v5;
  }
  else
    result = 1;
  return result;
}


unsigned int __fastcall InputComponent::setModal(InputComponent *this, int a2)
{
  InputComponent *v2; // r4@1
  unsigned int result; // r0@1
  UIControl *v4; // r0@2
  UIControl *v5; // r0@3
  int v6; // r0@3

  v2 = this;
  result = *((_BYTE *)this + 37);
  if ( a2 != result )
  {
    *((_BYTE *)v2 + 37) = a2;
    v4 = (UIControl *)UIComponent::getOwner(v2);
    result = UIControl::isTemplate(v4);
    if ( !result )
    {
      v5 = (UIControl *)UIComponent::getOwner(v2);
      v6 = UIControl::getScreenAction(v5, 0);
      result = (*(int (**)(void))(*(_DWORD *)v6 + 36))();
    }
  }
  return result;
}


signed int __fastcall InputComponent::_detectDoubleClick(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r4@1
  unsigned int v5; // r6@1
  __int64 v6; // r0@1
  int v7; // r7@2
  void *v9; // r0@7
  int v10; // r7@7
  _DWORD *v11; // r0@7
  _DWORD *v12; // r11@8
  unsigned __int16 v13; // r2@8
  _DWORD *v14; // r10@10
  bool v15; // zf@13
  __int64 v16; // kr00_8@18
  int v17; // r8@18
  int *v18; // r0@18
  unsigned __int16 v20; // r2@19
  bool v21; // zf@24
  _WORD *v22; // r0@28
  int v23; // r0@30
  signed int v28; // r1@34
  signed int result; // r0@43
  int v30; // [sp+4h] [bp-34h]@7
  void *ptr; // [sp+8h] [bp-30h]@7
  int v32; // [sp+Ch] [bp-2Ch]@7
  int v33; // [sp+10h] [bp-28h]@7

  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    goto LABEL_44;
  while ( 1 )
  {
    v7 = *(_WORD *)v6;
    _ZF = v7 == v5;
    if ( v7 == v5 )
      _ZF = *(_DWORD *)(v6 + 4) == 1;
    if ( _ZF )
      break;
    LODWORD(v6) = v6 + 20;
    if ( HIDWORD(v6) == (_DWORD)v6 )
      goto LABEL_44;
  }
  v30 = a4;
  v32 = a3;
  v9 = operator new(0x18u);
  ptr = v9;
  *(_DWORD *)v9 = 0;
  *((_WORD *)v9 + 2) = v5;
  *((_DWORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 5) = 0;
  v33 = v4 + 52;
  v10 = v5 % *(_DWORD *)(v4 + 56);
  v11 = *(_DWORD **)(*(_DWORD *)(v4 + 52) + 4 * v10);
  if ( !v11 )
    goto LABEL_17;
  v12 = (_DWORD *)*v11;
  v13 = *(_WORD *)(*v11 + 4);
  while ( v13 != v5 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v11 = v12;
      v13 = *((_WORD *)v14 + 2);
      v12 = (_DWORD *)*v12;
      if ( (unsigned int)*((_WORD *)v14 + 2) % *(_DWORD *)(v4 + 56) == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v15 = *v11 == 0;
  if ( v15 )
LABEL_17:
    std::_Hashtable<short,std::pair<short const,InputComponent::PressStats>,std::allocator<std::pair<short const,InputComponent::PressStats>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v33,
      v10,
      v5,
      (int)ptr);
  else
    operator delete(ptr);
  v16 = *(_QWORD *)(v4 + 52);
  v17 = v5 % (unsigned int)(*(_QWORD *)(v4 + 52) >> 32);
  v18 = *(int **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_28;
  _R4 = *v18;
  v20 = *(_WORD *)(*v18 + 4);
  while ( v20 != v5 )
    if ( *(_DWORD *)_R4 )
      v18 = (int *)_R4;
      v20 = *(_WORD *)(v16 + 4);
      _R4 = *(_DWORD *)_R4;
      if ( (unsigned int)*(_WORD *)(v16 + 4) % HIDWORD(v16) == v17 )
  v21 = v18 == 0;
  if ( v18 )
    _R4 = *v18;
    v21 = *v18 == 0;
  if ( v21 )
LABEL_28:
    v22 = operator new(0x18u);
    *(_DWORD *)v22 = 0;
    v22[2] = v5;
    *((_DWORD *)v22 + 2) = 0;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 4) = 0;
    *((_DWORD *)v22 + 5) = 0;
    _R4 = std::_Hashtable<short,std::pair<short const,InputComponent::PressStats>,std::allocator<std::pair<short const,InputComponent::PressStats>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            v33,
            v17,
            v5,
            (int)v22);
  if ( v32 == 1 )
    v23 = getTimeMs();
    if ( *(_DWORD *)(_R4 + 8) )
      _R2 = v30;
      if ( v23 - *(_DWORD *)(_R4 + 12) > 249 )
        goto LABEL_47;
      __asm
      {
        VLDR            S0, [R4,#0x10]
        VLDR            S4, [R2]
        VLDR            S2, [R4,#0x14]
        VLDR            S6, [R2,#4]
        VSUB.F32        S0, S4, S0
        VSUB.F32        S2, S6, S2
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VMOV.F32        S2, #10.0
        VSQRT.F32       S0, S0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v28 = 2;
      else
LABEL_47:
        v28 = 1;
      *(_DWORD *)(_R4 + 8) = v28;
    else
      v28 = 1;
      *(_DWORD *)(_R4 + 8) = 1;
    *(_DWORD *)(_R4 + 12) = v23;
    *(_DWORD *)(_R4 + 16) = *(_DWORD *)_R2;
    *(_DWORD *)(_R4 + 20) = *(_DWORD *)(_R2 + 4);
    v28 = *(_DWORD *)(_R4 + 8);
  if ( v28 != 2 )
LABEL_44:
    result = 0;
    if ( !v32 )
      *(_DWORD *)(_R4 + 8) = 0;
      *(_DWORD *)(_R4 + 12) = 0;
    result = 1;
  return result;
}


char *__fastcall InputComponent::addButtonMapping(int a1, __int16 a2, __int16 a3, int a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11)
{
  int v11; // r10@1
  int v12; // r8@1
  __int16 v13; // r7@1
  __int16 v14; // r6@1
  __int64 v15; // r0@1
  char *result; // r0@2
  bool v17; // zf@3
  signed int v18; // r0@3
  signed int v19; // r0@3
  unsigned int v20; // r2@3
  unsigned int v21; // r1@5
  unsigned int v22; // r0@5
  bool v23; // cf@7
  char *v24; // r9@10
  _BYTE *v25; // r0@10
  _BYTE *v26; // r12@10
  int v27; // r2@10
  char *v28; // r2@10
  _DWORD *v29; // r7@11
  char *v30; // lr@11
  int v31; // r3@11
  int v32; // r4@11
  int v33; // r5@11
  int v34; // r6@11
  int v35; // r6@13
  int v36; // [sp+0h] [bp-28h]@10

  v11 = a1;
  v12 = a4;
  v13 = a3;
  v14 = a2;
  v15 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v15 == HIDWORD(v15) )
  {
    v18 = v15 - *(_DWORD *)(v11 + 8);
    v17 = v18 == 0;
    v19 = v18 >> 2;
    v20 = -858993459 * v19;
    if ( v17 )
      v20 = 1;
    v22 = v20 + -858993459 * v19;
    v21 = v22;
    if ( v22 > 0xCCCCCCC )
      v22 = 214748364;
    v23 = v21 >= v20;
    LOWORD(v21) = -13107;
    if ( !v23 )
    HIWORD(v21) = 3276;
    if ( v22 >= v21 )
      sub_DA7414();
    v36 = 5 * v22;
    v24 = (char *)operator new(20 * v22);
    v26 = (_BYTE *)(*(_QWORD *)(v11 + 8) >> 32);
    v25 = (_BYTE *)*(_QWORD *)(v11 + 8);
    *(_WORD *)&v24[v26 - v25] = v14;
    v27 = (int)&v24[v26 - v25];
    *(_WORD *)(v27 + 2) = v13;
    *(_DWORD *)(v27 + 4) = v12;
    *(_BYTE *)(v27 + 8) = a5;
    *(_BYTE *)(v27 + 9) = 0;
    *(_BYTE *)(v27 + 10) = a6;
    *(_BYTE *)(v27 + 11) = a7;
    *(_BYTE *)(v27 + 12) = a8;
    *(_BYTE *)(v27 + 13) = a9;
    *(_BYTE *)(v27 + 14) = a10;
    *(_DWORD *)(v27 + 16) = a11;
    v28 = v24;
    if ( v26 != v25 )
    {
      do
      {
        v29 = v25;
        v30 = v28;
        v25 += 20;
        v28 += 20;
        v31 = v29[1];
        v32 = v29[2];
        v33 = v29[3];
        v34 = v29[4];
        *(_DWORD *)v30 = *v29;
        *((_DWORD *)v30 + 1) = v31;
        *((_DWORD *)v30 + 2) = v32;
        *((_DWORD *)v30 + 3) = v33;
        *((_DWORD *)v30 + 4) = v34;
      }
      while ( v26 != v25 );
      v25 = *(_BYTE **)(v11 + 8);
    }
    v35 = (int)(v28 + 20);
    if ( v25 )
      operator delete(v25);
    result = &v24[4 * v36];
    *(_DWORD *)(v11 + 8) = v24;
    *(_DWORD *)(v11 + 12) = v35;
    *(_DWORD *)(v11 + 16) = result;
  }
  else
    *(_WORD *)v15 = v14;
    *(_WORD *)(v15 + 2) = a3;
    *(_DWORD *)(v15 + 4) = a4;
    *(_BYTE *)(v15 + 8) = a5;
    *(_BYTE *)(v15 + 9) = 0;
    *(_BYTE *)(v15 + 10) = a6;
    *(_BYTE *)(v15 + 11) = a7;
    *(_BYTE *)(v15 + 12) = a8;
    *(_BYTE *)(v15 + 13) = a9;
    *(_BYTE *)(v15 + 14) = a10;
    *(_DWORD *)(v15 + 16) = a11;
    result = (char *)(*(_DWORD *)(v11 + 12) + 20);
    *(_DWORD *)(v11 + 12) = result;
  return result;
}


int __fastcall InputComponent::~InputComponent(InputComponent *this)
{
  InputComponent *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  int v5; // r0@6
  unsigned int *v6; // r2@7
  unsigned int v7; // r1@9
  void *v8; // r0@14
  void *v9; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_26D6B40;
  v2 = (void *)*((_DWORD *)this + 15);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 52), 4 * (*(_QWORD *)((char *)v1 + 52) >> 32));
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 16) = 0;
  v4 = (char *)*((_DWORD *)v1 + 13);
  if ( v4 && (char *)v1 + 76 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 12);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v8 = (void *)*((_DWORD *)v1 + 5);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 2);
  if ( v9 )
    operator delete(v9);
  return j_j_j__ZN11UIComponentD2Ev(v1);
}


int __fastcall InputComponent::handleButtonEvent(UIComponent *a1, int a2, int a3, int a4, unsigned int a5, int a6, __int64 *a7, int a8, int a9)
{
  int v9; // r11@1
  int v10; // r4@1
  int v11; // r7@1
  UIComponent *v12; // r5@1
  char v13; // r10@1
  char v14; // r0@2
  signed int v15; // r0@3
  int v16; // r4@3
  signed int v17; // r8@3
  int v18; // r9@3
  __int16 v19; // r5@6
  int v20; // r0@8
  signed int v21; // r1@8
  int v22; // r2@10
  UIControl *v23; // r0@18
  int v24; // r0@18
  int v25; // r0@27
  signed int v26; // r1@27
  int v27; // r2@29
  UIControl *v28; // r0@39
  int v29; // r0@44
  signed int v30; // r1@44
  int v31; // r2@46
  UIControl *v32; // r0@54
  int v33; // r0@54
  int v34; // r0@63
  unsigned int *v35; // r2@64
  unsigned int v36; // r1@66
  char v37; // r0@71
  int v38; // r1@71
  int v40; // [sp+Ch] [bp-54h]@6
  int v41; // [sp+10h] [bp-50h]@1
  int v42; // [sp+18h] [bp-48h]@3
  UIComponent *v43; // [sp+1Ch] [bp-44h]@3
  char v44; // [sp+20h] [bp-40h]@63
  int v45; // [sp+24h] [bp-3Ch]@63
  __int16 v46; // [sp+28h] [bp-38h]@2
  __int16 v47; // [sp+2Ah] [bp-36h]@2
  int v48; // [sp+2Ch] [bp-34h]@2
  char v49; // [sp+30h] [bp-30h]@2
  char v50; // [sp+31h] [bp-2Fh]@2
  int v51; // [sp+32h] [bp-2Eh]@2
  char v52; // [sp+36h] [bp-2Ah]@2
  int v53; // [sp+38h] [bp-28h]@2

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  v41 = UIComponent::getOwner(a1);
  v13 = 0;
  if ( *((_BYTE *)v12 + 35) )
  {
    v14 = *((_BYTE *)v12 + 32);
    v46 = a5;
    v47 = a5;
    v48 = 2;
    v49 = v14;
    v50 = 2;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    InputComponent::_sendScreenEvent(v12, v9, (int)&v46, a6, a7, v11, v10);
    v13 = 1;
  }
  v42 = v10;
  v15 = InputComponent::_detectDoubleClick((int)v12, a5, a6, (int)a7);
  v16 = *((_DWORD *)v12 + 2);
  v17 = v15;
  v18 = *((_DWORD *)v12 + 3);
  v43 = v12;
  if ( v16 != v18 )
    if ( (unsigned int)(a8 - 3) <= 1 && a9 != 2 )
    {
      v19 = a5;
      v40 = v9;
      while ( 1 )
      {
        if ( *(_WORD *)v16 != (unsigned __int16)a5 )
          goto LABEL_23;
        v20 = *(_DWORD *)(v16 + 4);
        v21 = v17;
        if ( v17 != 1 )
          v21 = 0;
        v22 = *(_DWORD *)(v16 + 4);
        if ( v20 != 1 )
          v22 = 0;
        if ( v21 != v22 )
        if ( v20 == 1 )
        {
          if ( v17 == 1 )
            goto LABEL_20;
        }
        else
          if ( v20 == 3 )
          {
            v23 = (UIControl *)UIComponent::getOwner(v43);
            v24 = UIControl::getHover(v23);
            goto LABEL_21;
          }
          if ( v20 != 2 )
            goto LABEL_61;
          if ( !v17 )
LABEL_20:
            v24 = InputComponent::_shouldHandlePressedMapping(v43, v16, 0, a6, (int)a7, a8);
LABEL_21:
            if ( v24 )
              goto LABEL_61;
            goto LABEL_22;
LABEL_22:
        v13 = 0;
        *(_BYTE *)(v16 + 9) = 2;
LABEL_23:
        v16 += 20;
        if ( v18 == v16 )
          return v13 & 1;
      }
    }
    v19 = a5;
    v40 = v9;
    if ( v15 )
        if ( *(_WORD *)v16 == (unsigned __int16)a5 )
          v25 = *(_DWORD *)(v16 + 4);
          v26 = v17;
          if ( v17 != 1 )
            v26 = 0;
          v27 = *(_DWORD *)(v16 + 4);
          if ( v25 != 1 )
            v27 = 0;
          if ( v26 == v27 )
            if ( *(_DWORD *)(v16 + 16) != 1 )
            {
              if ( v25 == 3 )
              {
                v28 = (UIControl *)UIComponent::getOwner(v43);
                if ( UIControl::getHover(v28) == 1 )
                  goto LABEL_61;
              }
              else if ( v25 != 2
                     && (v25 != 1
                      || v17 == 1 && InputComponent::_shouldHandlePressedMapping(v43, v16, 0, a6, (int)a7, a8)) )
                goto LABEL_61;
            }
            v13 = 0;
            *(_BYTE *)(v16 + 9) = 2;
    do
      if ( *(_WORD *)v16 != (unsigned __int16)a5 )
        goto LABEL_59;
      v29 = *(_DWORD *)(v16 + 4);
      v30 = v17;
      if ( v17 != 1 )
        v30 = 0;
      v31 = *(_DWORD *)(v16 + 4);
      if ( v29 != 1 )
        v31 = 0;
      if ( v30 != v31 )
      if ( *(_DWORD *)(v16 + 16) != 1 )
        if ( v29 != 1 )
          if ( v29 == 3 )
            v32 = (UIControl *)UIComponent::getOwner(v43);
            v33 = UIControl::getHover(v32);
          else
            if ( v29 != 2 )
LABEL_56:
            v33 = InputComponent::_shouldHandlePressedMapping(v43, v16, 0, a6, (int)a7, a8);
          if ( v33 )
LABEL_61:
            if ( a6 == 1 )
              if ( *(_BYTE *)(v16 + 10) )
                UIControl::weakRef((UIControl *)&v44, v41);
                ScreenInputContext::requestButtonUpRightOfFirstRefusal(v40, v19, (int)&v44);
                v34 = v45;
                if ( v45 )
                {
                  v35 = (unsigned int *)(v45 + 8);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v36 = __ldrex(v35);
                    while ( __strex(v36 - 1, v35) );
                  }
                  else
                    v36 = (*v35)--;
                  if ( v36 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v34 + 12))();
                }
            v37 = InputComponent::_sendScreenEvent(v43, v40, v16, a6, a7, v11, v42);
            v38 = *(_BYTE *)(v16 + 14);
            *(_BYTE *)(v16 + 9) = a6;
            v13 = v37 & (v38 != 0);
            return v13 & 1;
          goto LABEL_58;
        if ( v17 == 1 )
          goto LABEL_56;
LABEL_58:
      v13 = 0;
      *(_BYTE *)(v16 + 9) = 2;
LABEL_59:
      v16 += 20;
    while ( v18 != v16 );
  return v13 & 1;
}


int __fastcall InputComponent::onVisibilityChanged(int result, bool a2)
{
  UIControl *v2; // r0@2
  int v3; // r0@2

  if ( *(_BYTE *)(result + 37) )
  {
    v2 = (UIControl *)UIComponent::getOwner((UIComponent *)result);
    v3 = UIControl::getScreenAction(v2, 0);
    result = (*(int (**)(void))(*(_DWORD *)v3 + 36))();
  }
  return result;
}


int __fastcall InputComponent::setAlwaysHandlePointer(int result, bool a2)
{
  *(_BYTE *)(result + 33) = a2;
  return result;
}


int __fastcall InputComponent::handleInputModeChange(UIComponent *a1, int a2, int a3, int a4, int a5)
{
  UIComponent *v5; // r11@1
  int v6; // r9@1
  int v7; // r8@1
  int v8; // r10@1
  int v9; // r0@1
  int v11; // [sp+24h] [bp-44h]@1
  int v12; // [sp+28h] [bp-40h]@1
  int v13; // [sp+2Ch] [bp-3Ch]@1
  int v14; // [sp+30h] [bp-38h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v11);
  v11 = 7;
  v12 = a5;
  v9 = UIComponent::getOwner(v5);
  return UIControl::broadcastEvent(v9, v8, v6, v7, (int)v5, v11, v12, v13, v14);
}


unsigned int __fastcall InputComponent::clone(InputComponent *this, UIControl *a2, UIControl *a3)
{
  InputComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  __int64 v7; // r0@1
  unsigned int v8; // r0@1
  unsigned int v9; // r0@1
  unsigned int v10; // r0@1
  unsigned int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x50u);
  InputComponent::InputComponent((UIComponent *)v6, v4);
  std::vector<InputComponent::ScreenButtonMapping,std::allocator<InputComponent::ScreenButtonMapping>>::operator=(
    (unsigned __int64 *)v6 + 1,
    (unsigned __int64 *)v5 + 1);
  LODWORD(v7) = (char *)v6 + 20;
  HIDWORD(v7) = (char *)v5 + 20;
  std::vector<InputComponent::ScreenHoverButtonMapping,std::allocator<InputComponent::ScreenHoverButtonMapping>>::operator=(v7);
  v8 = *((_DWORD *)v5 + 8);
  *((_BYTE *)v6 + 32) = v8;
  *((_BYTE *)v6 + 33) = BYTE1(v8);
  *((_BYTE *)v6 + 34) = v8 >> 16;
  *((_BYTE *)v6 + 35) = BYTE3(v8);
  v9 = *((_DWORD *)v5 + 9);
  *((_BYTE *)v6 + 36) = v9;
  *((_BYTE *)v6 + 37) = BYTE1(v9);
  *((_BYTE *)v6 + 38) = v9 >> 16;
  std::_Hashtable<short,std::pair<short const,InputComponent::PressStats>,std::allocator<std::pair<short const,InputComponent::PressStats>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::operator=(
    (unsigned __int64 *)((char *)v6 + 52),
    (int)v5 + 52);
  *((_BYTE *)v6 + 39) = *((_BYTE *)v5 + 39);
  v10 = *((_WORD *)v5 + 20);
  *((_BYTE *)v6 + 40) = v10;
  *(_DWORD *)v3 = v6;
  result = v10 >> 8;
  *((_BYTE *)v6 + 41) = result;
  return result;
}


int __fastcall InputComponent::handleHoloInputModeChange(UIComponent *a1, int a2, int a3, int a4, int a5)
{
  UIComponent *v5; // r11@1
  int v6; // r9@1
  int v7; // r8@1
  int v8; // r10@1
  int v9; // r0@1
  int v11; // [sp+24h] [bp-44h]@1
  int v12; // [sp+28h] [bp-40h]@1
  int v13; // [sp+2Ch] [bp-3Ch]@1
  int v14; // [sp+30h] [bp-38h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  ScreenEvent::ScreenEvent((ScreenEvent *)&v11);
  v11 = 8;
  v12 = a5;
  v9 = UIComponent::getOwner(v5);
  return UIControl::broadcastEvent(v9, v8, v6, v7, (int)v5, v11, v12, v13, v14);
}


int __fastcall InputComponent::_getContentPanelHover(UIComponent *a1, int a2)
{
  int v2; // r8@1
  UIComponent *v3; // r6@1
  int v4; // r0@1
  __int64 v5; // kr00_8@1
  int v6; // r7@1
  char v7; // r0@2
  int v8; // r7@5
  int v9; // r0@6
  UIControl *v10; // r0@8
  UIControl *v11; // r0@9
  unsigned int *v12; // r1@13
  unsigned int v13; // r0@15
  unsigned int *v14; // r5@19
  unsigned int v15; // r0@21
  int v17; // [sp+0h] [bp-20h]@1
  int v18; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = UIComponent::getOwner(a1);
  UIControl::getParent((UIControl *)&v17, v4);
  v5 = *(_QWORD *)&v17;
  v6 = 0;
  v17 = 0;
  v18 = 0;
  if ( (_DWORD)v5 )
  {
    v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id;
    __dmb();
    if ( !(v7 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id) )
    {
      type_id<UIComponent,ScrollViewComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ScrollViewComponent>(void)::id);
    }
    v8 = type_id<UIComponent,ScrollViewComponent>(void)::id[0];
    if ( UIControl::_hasComponent((UIControl *)v5, type_id<UIComponent,ScrollViewComponent>(void)::id[0]) == 1
      && (v9 = *(_DWORD *)(*(_DWORD *)(v5 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v5, v8))) != 0
      && !ScrollViewComponent::isPointInViewPort(v9, v2) )
      v6 = 0;
    else
      v10 = (UIControl *)UIComponent::getOwner(v3);
      if ( UIControl::getVisible(v10) == 1 )
      {
        v11 = (UIControl *)UIComponent::getOwner(v3);
        v6 = UIControl::containsPoint(v11, v2) ^ 1;
      }
      else
        v6 = 1;
  }
  if ( HIDWORD(v5) )
    v12 = (unsigned int *)(HIDWORD(v5) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(HIDWORD(v5) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 8))(HIDWORD(v5));
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  return v6;
}


int __fastcall InputComponent::_shouldHandleControllerDirection(UIComponent *a1, int a2, int a3)
{
  UIComponent *v4; // r5@1
  UIControl *v5; // r0@2
  int v6; // r6@3
  char v7; // r0@3
  int v8; // r7@6
  SliderComponent *v9; // r0@7
  int v10; // r0@8
  signed int v15; // r1@8
  signed int v16; // r0@10
  int v17; // r5@15
  char v18; // r0@15
  int v19; // r6@18
  ToggleComponent *v20; // r0@19
  unsigned int v21; // r1@20
  int result; // r0@20
  signed int v23; // r1@21
  signed int v24; // r2@33
  signed int v25; // r0@33

  _R4 = a3;
  v4 = a1;
  if ( UIComponent::isLocked(a1) )
    return 0;
  v5 = (UIControl *)UIComponent::getOwner(v4);
  if ( UIControl::getHover(v5) != 1 )
  v6 = UIComponent::getOwner(v4);
  v7 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id) )
  {
    type_id<UIComponent,SliderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SliderComponent>(void)::id);
  }
  v8 = type_id<UIComponent,SliderComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v6, type_id<UIComponent,SliderComponent>(void)::id[0]) == 1 )
    v9 = *(SliderComponent **)(*(_DWORD *)(v6 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v6, v8));
    if ( v9 )
    {
      v10 = SliderComponent::getSliderDirection(v9);
      __asm { VLDR            S0, [R4] }
      v15 = 0;
      __asm
      {
        VLDR            S2, [R4,#4]
        VABS.F32        S0, S0
        VABS.F32        S2, S2
      }
      if ( _ZF )
        __asm
        {
          VCMPE.F32       S2, S0
          VLDR            S4, =1.1921e-7
          VMRS            APSR_nzcv, FPSCR
        }
        v16 = 0;
        __asm { VCMPE.F32       S2, S4 }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v16 = 1;
        __asm { VMRS            APSR_nzcv, FPSCR }
          v15 = 1;
      else
        if ( v10 )
LABEL_33:
          __asm
          {
            VCMPE.F32       S0, S2
            VLDR            S4, =1.1921e-7
            VMRS            APSR_nzcv, FPSCR
          }
          v24 = 0;
          __asm { VCMPE.F32       S0, S4 }
          v25 = 0;
          if ( _ZF )
            v24 = 1;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v25 = 1;
          return v25 & v24 | v15;
          VCMPE.F32       S0, S2
        v15 = 0;
        __asm { VCMPE.F32       S0, S4 }
      v15 &= v16;
      goto LABEL_33;
    }
  v17 = UIComponent::getOwner(v4);
  v18 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id;
  if ( !(v18 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id) )
    type_id<UIComponent,ToggleComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,ToggleComponent>(void)::id);
  v19 = type_id<UIComponent,ToggleComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v17, type_id<UIComponent,ToggleComponent>(void)::id[0]) != 1 )
  v20 = *(ToggleComponent **)(*(_DWORD *)(v17 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v17, v19));
  if ( !v20 )
  v21 = ToggleComponent::getEnableDirectionalToggling(v20);
  result = 0;
  if ( v21 == 1 )
    __asm { VLDR            S0, [R4] }
    v23 = 0;
    __asm
      VLDR            S2, [R4,#4]
      VABS.F32        S0, S0
      VLDR            S4, =1.1921e-7
      VABS.F32        S2, S2
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v23 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
      result = 1;
    result &= v23;
  return result;
}


int __fastcall InputComponent::setAlwaysHandleControllerDirection(int result, bool a2)
{
  *(_BYTE *)(result + 34) = a2;
  return result;
}
