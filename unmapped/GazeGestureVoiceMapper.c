

void __fastcall GazeGestureVoiceMapper::setMapping(GazeGestureVoiceMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  GazeGestureVoiceMapper *v6; // r4@1
  unsigned __int64 *v7; // r5@1
  void *v8; // r0@2
  void *v9; // r0@3
  void *v10; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int v17; // [sp+8h] [bp-28h]@4
  int v18; // [sp+10h] [bp-20h]@3
  int v19; // [sp+18h] [bp-18h]@2

  v6 = this;
  v7 = (unsigned __int64 *)a4;
  if ( *((_DWORD *)this + 12) == a6 )
  {
    sub_21E94B4((void **)&v19, "button.pointer_pressed");
    *((_WORD *)v6 + 20) = NameRegistry::getNameId(v7, (int **)&v19);
    v8 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    sub_21E94B4((void **)&v18, "button.menu_select");
    *((_WORD *)v6 + 21) = NameRegistry::getNameId(v7, (int **)&v18);
    v9 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v18 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v17, "button.dictationEvent");
    *((_WORD *)v6 + 22) = NameRegistry::getNameId(v7, (int **)&v17);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  }
}


int __fastcall GazeGestureVoiceMapper::GazeGestureVoiceMapper(InputDeviceMapper *a1)
{
  int result; // r0@1

  result = InputDeviceMapper::InputDeviceMapper(a1);
  *(_DWORD *)result = &off_26E8898;
  *(_WORD *)(result + 40) = -1;
  *(_WORD *)(result + 42) = -1;
  *(_WORD *)(result + 44) = -1;
  *(_DWORD *)(result + 48) = 0;
  return result;
}


void __fastcall GazeGestureVoiceMapper::setMapping(GazeGestureVoiceMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  GazeGestureVoiceMapper::setMapping(this, a2, a3, a4, a5, a6);
}


int __fastcall GazeGestureVoiceMapper::tick(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r9@1
  GGVDeviceManager *v4; // r0@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v14; // r0@3
  GGDevice *v15; // r0@8
  __int64 v16; // kr08_8@8
  int v21; // r1@9
  int v22; // r0@17
  __int16 v23; // r1@18
  int v24; // r5@22
  unsigned int *v25; // r1@23
  unsigned int v26; // r0@25
  unsigned int *v27; // r4@29
  unsigned int v28; // r0@31
  int v30; // [sp+0h] [bp-40h]@0
  int v31; // [sp+10h] [bp-30h]@6
  GGDevice *v32; // [sp+14h] [bp-2Ch]@1
  int v33; // [sp+18h] [bp-28h]@22

  v2 = a1;
  v3 = a2;
  v4 = (GGVDeviceManager *)GGVDeviceManager::getGGDevice((GGVDeviceManager *)&v32, 0);
  v5 = GGVDeviceManager::getVoiceDevice(v4);
  v6 = *((_QWORD *)v32 + 2);
  _R1 = v6 - *((_DWORD *)v32 + 2);
  _R2 = -1717986919;
  __asm { SMMUL.W         R1, R1, R2 }
  if ( -858993459 * ((signed int)(*((_QWORD *)v32 + 3) - (*((_QWORD *)v32 + 3) >> 32)) >> 2)
     + 25 * ((*((_DWORD *)v32 + 9) - HIDWORD(v6)) >> 2)
     - 25 == ((signed int)_R1 >> 3) + (_R1 >> 31) )
  {
    if ( v5 )
      v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      v14 = 0;
  }
  else
    v14 = 1;
  v31 = v14;
  while ( 1 )
    v15 = v32;
    v16 = *((_QWORD *)v32 + 2);
    _R1 = v16 - *((_DWORD *)v32 + 2);
    _R5 = -1717986919;
    __asm { SMMUL.W         R1, R1, R5 }
    if ( -858993459 * ((signed int)(*((_QWORD *)v32 + 3) - (*((_QWORD *)v32 + 3) >> 32)) >> 2)
       + 25 * ((*((_DWORD *)v32 + 9) - HIDWORD(v16)) >> 2)
       - 25 == ((signed int)_R1 >> 3) + (_R1 >> 31) )
      break;
    _R0 = GGDevice::getNextGGEvent(v32);
    v21 = *(_DWORD *)_R0;
    if ( *(_DWORD *)_R0 < 0xCu )
    {
      __asm
      {
        VLDR            S0, [R0,#0x10]
        VSTR            S0, [SP,#0x40+var_40]
      }
      InputEventQueue::enqueueVector(
        *(float *)&v3,
        v21,
        *(_QWORD *)(_R0 + 8),
        *(_QWORD *)(_R0 + 8) >> 32,
        v30,
        0,
        *(_DWORD *)(v2 + 48));
    }
    else if ( v21 == 15 )
      InputEventQueue::enqueueButton(v3, *(_WORD *)(v2 + 40), 1, 0, 0, *(_DWORD *)(v2 + 48), 0);
      InputEventQueue::enqueueButton(v3, *(_WORD *)(v2 + 42), 1, 0, 0, *(_DWORD *)(v2 + 48), 0);
    else if ( v21 == 16 )
      InputEventQueue::enqueueButton(v3, *(_WORD *)(v2 + 40), 0, 0, 0, *(_DWORD *)(v2 + 48), 0);
      InputEventQueue::enqueueButton(v3, *(_WORD *)(v2 + 42), 0, 0, 0, *(_DWORD *)(v2 + 48), 0);
  if ( v5 )
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 8))(v5) == 1 )
      do
        v22 = *(_WORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        if ( v22 == 0xFFFF )
          v23 = *(_WORD *)(v2 + 44);
        else
          v23 = v22;
        InputEventQueue::enqueueButtonPressAndRelease(v3, v23, 0, *(_DWORD *)(v2 + 48));
      while ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5) );
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 28))(v5);
  GGDevice::clearEvents(v15);
  v24 = v33;
  if ( v33 )
    v25 = (unsigned int *)(v33 + 4);
    if ( &pthread_create )
      __dmb();
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  return v31;
}


void __fastcall GazeGestureVoiceMapper::~GazeGestureVoiceMapper(GazeGestureVoiceMapper *this)
{
  GazeGestureVoiceMapper::~GazeGestureVoiceMapper(this);
}


int __fastcall GazeGestureVoiceMapper::changeControllerId(int result, int a2, int a3)
{
  *(_DWORD *)(result + 48) = a3;
  return result;
}


int __fastcall GazeGestureVoiceMapper::getInputMode(GazeGestureVoiceMapper *this)
{
  return 0;
}


void __fastcall GazeGestureVoiceMapper::~GazeGestureVoiceMapper(GazeGestureVoiceMapper *this)
{
  InputDeviceMapper *v1; // r0@1

  v1 = InputDeviceMapper::~InputDeviceMapper(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall GazeGestureVoiceMapper::clearInputDeviceQueue(GazeGestureVoiceMapper *this)
{
  int result; // r0@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int *v4; // r5@8
  GGDevice *v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1

  GGVDeviceManager::getGGDevice((GGVDeviceManager *)&v5, 0);
  result = GGDevice::clearEvents(v5);
  v2 = v6;
  if ( v6 )
  {
    v3 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v3);
      while ( __strex(result - 1, v3) );
    }
    else
      result = (*v3)--;
    if ( result == 1 )
      v4 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return result;
}
