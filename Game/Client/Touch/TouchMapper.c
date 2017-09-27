

InputDeviceMapper *__fastcall TouchMapper::~TouchMapper(TouchMapper *this)
{
  TouchMapper *v1; // r4@1
  void *v2; // r0@1
  TouchControlSet *v3; // r0@3
  TouchControlSet *v4; // r0@4

  v1 = this;
  *(_DWORD *)this = &off_26E89E4;
  v2 = (void *)*((_DWORD *)this + 15);
  if ( v2 )
    operator delete(v2);
  v3 = (TouchControlSet *)*((_DWORD *)v1 + 10);
  if ( v3 )
  {
    v4 = TouchControlSet::~TouchControlSet(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 10) = 0;
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}


InputDeviceMapper *__fastcall TouchMapper::TouchMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  TouchControlSet *v2; // r0@1

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  *(_DWORD *)v1 = &off_26E89E4;
  v2 = (TouchControlSet *)operator new(0x24u);
  *((_DWORD *)v1 + 10) = TouchControlSet::TouchControlSet(v2);
  *((_DWORD *)v1 + 11) = 0x7FFFFFFF;
  *((_DWORD *)v1 + 12) = 0x7FFFFFFF;
  *((_BYTE *)v1 + 52) = 0;
  *((_DWORD *)v1 + 14) = 1;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  return v1;
}


signed int __fastcall TouchMapper::tick(int a1, InputEventQueue *a2)
{
  int v2; // r11@1
  InputEventQueue *v3; // r5@1
  unsigned __int64 *v4; // r0@1
  const int **v5; // r1@1
  Multitouch *v6; // r0@1
  Multitouch *v7; // r5@2
  Multitouch *v8; // r7@3
  signed int v9; // r0@3
  MouseDevice *v10; // r6@7
  int v13; // r0@7
  int v14; // r1@7
  int v15; // r2@7
  int v16; // r3@8
  int v18; // r2@9
  Multitouch *v19; // r4@12
  bool v20; // zf@12
  int v21; // r2@17
  int v22; // r8@27
  unsigned int v23; // r9@27
  int v24; // r1@29
  int v25; // r1@30
  float v26; // r4@32
  int v27; // r0@32
  signed int v32; // r4@34
  signed int v33; // r0@36
  MouseDevice *v34; // r6@39
  char v35; // r0@39
  int v37; // [sp+0h] [bp-40h]@0
  InputEventQueue *v38; // [sp+Ch] [bp-34h]@2
  Multitouch *v39; // [sp+14h] [bp-2Ch]@1
  int v40; // [sp+18h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = TouchControlSet::getTouchIdsWithFlags(*(unsigned __int64 **)(a1 + 40), a1 + 60);
  Multitouch::commit((Multitouch *)v4);
  TouchControlSet::clearPointers(*(TouchControlSet **)(v2 + 40));
  v6 = (Multitouch *)Multitouch::getActivePointerIdsThisUpdate((Multitouch *)&v40, v5);
  v39 = v6;
  if ( (signed int)v6 >= 1 )
  {
    v38 = v3;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(Multitouch **)(v40 + 4 * (_DWORD)v7);
      v9 = *(_DWORD *)(v40 + 4 * (_DWORD)v7);
      if ( (signed int)v8 > 11 )
        v9 = 11;
      if ( (signed int)v8 < 0 )
        v9 = *(_DWORD *)(v40 + 4 * (_DWORD)v7);
      v10 = (MouseDevice *)((char *)&Multitouch::_pointers + 40 * v9);
      _R10 = MouseDevice::getX((MouseDevice *)((char *)&Multitouch::_pointers + 40 * v9));
      _R6 = MouseDevice::getY(v10);
      v13 = *(_QWORD *)(v2 + 60) >> 32;
      v14 = *(_QWORD *)(v2 + 60);
      v15 = (v13 - v14) >> 5;
      if ( v15 >= 1 )
      {
        v16 = v15 + 1;
        do
        {
          _ZF = *(_DWORD *)v14 == (_DWORD)v8;
          v18 = v14;
          if ( *(Multitouch **)v14 != v8 )
          {
            v18 = v14 + 8;
            _ZF = *(_DWORD *)(v14 + 8) == (_DWORD)v8;
          }
          if ( _ZF )
            goto LABEL_26;
          v18 = v14 + 16;
          v19 = *(Multitouch **)(v14 + 16);
          v20 = v19 == v8;
          if ( v19 != v8 )
            v18 = v14 + 24;
            v20 = *(_DWORD *)(v14 + 24) == (_DWORD)v8;
          if ( v20 )
          --v16;
          v14 += 32;
        }
        while ( v16 > 1 );
      }
      if ( 1 == (v13 - v14) >> 3 )
        v18 = v14;
        goto LABEL_25;
      v21 = (v13 - v14) >> 3;
      if ( v21 == 2 )
      else
        if ( v21 != 3 )
          goto LABEL_28;
        if ( *(Multitouch **)v14 == v8 )
          goto LABEL_26;
        v18 = v14 + 8;
      v14 = *(_DWORD *)v18;
      if ( *(Multitouch **)v18 != v8 )
        v18 += 8;
LABEL_25:
        v14 = *(_DWORD *)v18;
        if ( *(Multitouch **)v18 != v8 )
LABEL_26:
      if ( v18 != v13 )
        v22 = *(_DWORD *)(v18 + 4) & 1;
        v23 = (*(_DWORD *)(v18 + 4) & 2u) >> 1;
        goto LABEL_29;
LABEL_28:
      v22 = 0;
      LOBYTE(v23) = 0;
LABEL_29:
      if ( !Multitouch::isEdgeTouch(v8, v14)
        && (Multitouch::isPointerDown(v8, v24) || Multitouch::isPressed(v8, v25) == 1) )
        v26 = *(float *)(v2 + 40);
        v27 = Multitouch::isPressed(v8, v25);
        __asm
          VMOV            S0, R10
          VCVT.F32.S32    S0, S0
          VMOV            R3, S0
          VMOV            S0, R6
          VSTR            S0, [SP,#0x40+var_40]
        TouchControlSet::addPointer(v26, (int)v8, v27 ^ 1, _R3, v37, v22, v23);
      v7 = (Multitouch *)((char *)v7 + 1);
      v6 = v39;
      if ( v7 == v39 )
        v32 = 1;
        v3 = v38;
        goto LABEL_36;
    }
  }
  v32 = 0;
LABEL_36:
  v33 = Multitouch::getFirstActivePointerIdEx(v6);
  if ( v33 <= -1 )
    v35 = 0;
  else
    if ( v33 > 11 )
      v33 = 11;
    v34 = (MouseDevice *)((char *)&Multitouch::_pointers + 40 * v33);
    *(_DWORD *)(v2 + 44) = MouseDevice::getX((MouseDevice *)((char *)&Multitouch::_pointers + 40 * v33));
    *(_DWORD *)(v2 + 48) = MouseDevice::getY(v34);
    v35 = 1;
  *(_BYTE *)(v2 + 52) = v35;
  TouchControlSet::tick(*(TouchControlSet **)(v2 + 40), v3, *(_DWORD *)(v2 + 56));
  return v32;
}


void __fastcall TouchMapper::~TouchMapper(TouchMapper *this)
{
  TouchMapper *v1; // r4@1
  void *v2; // r0@1
  TouchControlSet *v3; // r0@3
  TouchControlSet *v4; // r0@4

  v1 = this;
  *(_DWORD *)this = &off_26E89E4;
  v2 = (void *)*((_DWORD *)this + 15);
  if ( v2 )
    operator delete(v2);
  v3 = (TouchControlSet *)*((_DWORD *)v1 + 10);
  if ( v3 )
  {
    v4 = TouchControlSet::~TouchControlSet(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 10) = 0;
  InputDeviceMapper::~InputDeviceMapper(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall TouchMapper::setWindowSize(TouchMapper *this, int a2, __int64 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  TouchMapper *v5; // r6@1
  __int64 v6; // r2@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  InputDeviceMapper::setWindowSize(this, a2, a3);
  LODWORD(v6) = v3;
  return j_j_j__ZN15TouchControlSet13setWindowSizeEii(*((TouchControlSet **)v5 + 10), v4, v6);
}


int __fastcall TouchMapper::setMapping(TouchMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  TouchMapper *v6; // r6@1
  const BindingFactory *v7; // r5@1
  int result; // r0@1
  unsigned __int64 *v9; // r11@1
  signed int v10; // r2@2
  int v11; // r4@4
  int i; // r7@4
  const TouchTextButtonBinding *v13; // r4@6
  const TouchTextButtonBinding *j; // r7@6
  int **v15; // r8@8
  int **k; // r10@8
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  int v19; // r7@18
  void *v20; // r0@18
  bool v21; // zf@20
  bool v22; // zf@23
  int v23; // [sp+Ch] [bp-2Ch]@10

  v6 = this;
  v7 = a3;
  result = a6;
  v9 = (unsigned __int64 *)a4;
  if ( *((_DWORD *)v6 + 18) == a6 )
  {
    v10 = 1;
    if ( *((_BYTE *)a5 + 108) )
      v10 = -1;
    *((_DWORD *)v6 + 14) = v10;
    TouchControlSet::clearControls(*((TouchControlSet **)v6 + 10), a2);
    v11 = *((_QWORD *)a5 + 8) >> 32;
    for ( i = *((_QWORD *)a5 + 8); v11 != i; i += 76 )
      TouchControlSet::addGlyphButton(*((_DWORD *)v6 + 10), (int)v7, v9, i);
    v13 = (const TouchTextButtonBinding *)(*(_QWORD *)((char *)a5 + 52) >> 32);
    for ( j = (const TouchTextButtonBinding *)*(_QWORD *)((char *)a5 + 52);
          v13 != j;
          j = (const TouchTextButtonBinding *)((char *)j + 72) )
    {
      TouchControlSet::addTextButton(*((TouchControlSet **)v6 + 10), v7, (NameRegistry *)v9, j);
    }
    v15 = (int **)(*((_QWORD *)a5 + 12) >> 32);
    for ( k = (int **)*((_QWORD *)a5 + 12); k != v15; ++k )
      v19 = *((_DWORD *)v6 + 10);
      sub_21E94B4((void **)&v23, "binding.area.gui_passthrough");
      TouchControlSet::addGuiPassthrough(v19, (int)v7, v9, (int)&v23, k);
      v20 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
    result = *(_DWORD *)(*((_DWORD *)a5 + 19) - 12);
    v21 = result == 0;
    if ( result )
      result = *(_DWORD *)(*((_DWORD *)a5 + 20) - 12);
      v21 = result == 0;
    if ( !v21 )
      result = *(_DWORD *)(*((_DWORD *)a5 + 21) - 12);
      v22 = result == 0;
      if ( result )
        result = *(_DWORD *)(*((_DWORD *)a5 + 22) - 12);
        v22 = result == 0;
      if ( !v22 )
        result = TouchControlSet::addTurnInteract(
                   *((TouchControlSet **)v6 + 10),
                   v7,
                   (NameRegistry *)v9,
                   (const InputMapping *)((char *)a5 + 76));
  }
  return result;
}


int __fastcall TouchMapper::changeControllerId(int result, int a2, int a3)
{
  *(_DWORD *)(result + 72) = a3;
  return result;
}


_DWORD *__fastcall TouchMapper::clearInputDeviceQueue(TouchMapper *this)
{
  Multitouch *v1; // r0@1

  v1 = (Multitouch *)Multitouch::reset(this);
  return j_j_j__ZN10Multitouch15resetThisUpdateEv(v1);
}


void __fastcall TouchMapper::~TouchMapper(TouchMapper *this)
{
  TouchMapper::~TouchMapper(this);
}


signed int __fastcall TouchMapper::getInputMode(TouchMapper *this)
{
  return 2;
}
