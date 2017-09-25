

void __fastcall MouseMapper::~MouseMapper(MouseMapper *this)
{
  MouseMapper::~MouseMapper(this);
}


int __fastcall MouseMapper::_getMouseScrollMagnitude(MouseMapper *this, int _R1)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R1
    VLDR            S2, =0.0039216
    VCVT.F32.U32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
  }
  if ( _ZF )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void *__fastcall MouseMapper::clearInputDeviceQueue(MouseMapper *this)
{
  Mouse *v1; // r0@1

  v1 = (Mouse *)Mouse::reset(this);
  return j_j_j__ZN5Mouse6reset2Ev(v1);
}


int __fastcall MouseMapper::setMapping(MouseMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  MouseMapper *v6; // r4@1
  int result; // r0@1
  unsigned __int64 *v8; // r8@1
  void *v9; // r0@2
  void *v10; // r5@3
  int i; // r5@4
  int v12; // r11@4
  __int16 v13; // r7@5
  unsigned int v14; // r6@5
  _DWORD *v15; // r0@5
  int **j; // r6@6
  int **v17; // r11@6
  __int16 v18; // r9@7
  __int64 v19; // r0@7
  void *v20; // r5@9
  char *v21; // r7@9
  unsigned int v22; // r2@9
  unsigned int v23; // r1@11
  int v24; // r10@11
  char *v25; // r9@18
  int v26; // r9@20
  int **k; // r6@24
  int **v28; // r11@24
  __int16 v29; // r9@25
  __int64 v30; // r0@25
  void *v31; // r5@27
  char *v32; // r7@27
  unsigned int v33; // r2@27
  unsigned int v34; // r1@29
  int v35; // r10@29
  char *v36; // r9@36
  int v37; // r9@38
  signed int v38; // r1@42

  v6 = this;
  result = a6;
  v8 = (unsigned __int64 *)a4;
  if ( *((_DWORD *)v6 + 24) == a6 )
  {
    v9 = (void *)*((_DWORD *)v6 + 13);
    if ( v9 )
    {
      do
      {
        v10 = *(void **)v9;
        operator delete(v9);
        v9 = v10;
      }
      while ( v10 );
    }
    _aeabi_memclr4(*(_QWORD *)((char *)v6 + 44), 4 * (*(_QWORD *)((char *)v6 + 44) >> 32));
    *((_DWORD *)v6 + 13) = 0;
    *((_DWORD *)v6 + 14) = 0;
    v12 = *(_QWORD *)((char *)a5 + 12) >> 32;
    for ( i = *(_QWORD *)((char *)a5 + 12); i != v12; i += 8 )
      v13 = NameRegistry::getNameId(v8, (int **)i);
      v14 = *(_DWORD *)(i + 4);
      v15 = operator new(0xCu);
      *v15 = 0;
      v15[1] = v14;
      *((_WORD *)v15 + 4) = v13;
      std::_Hashtable<int,std::pair<int const,short>,std::allocator<std::pair<int const,short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
        (int)v6 + 44,
        0,
        v14,
        (int)v15);
    *((_DWORD *)v6 + 19) = *((_DWORD *)v6 + 18);
    v17 = (int **)(*((_QWORD *)a5 + 3) >> 32);
    for ( j = (int **)*((_QWORD *)a5 + 3); v17 != j; ++j )
      v18 = NameRegistry::getNameId(v8, j);
      v19 = *(_QWORD *)((char *)v6 + 76);
      if ( (_DWORD)v19 == HIDWORD(v19) )
        v20 = (void *)*((_DWORD *)v6 + 18);
        v21 = 0;
        v22 = ((signed int)v19 - (signed int)v20) >> 1;
        if ( !v22 )
          v22 = 1;
        HIDWORD(v19) = v22 + (((signed int)v19 - (signed int)v20) >> 1);
        v24 = v22 + (((signed int)v19 - (signed int)v20) >> 1);
        if ( SHIDWORD(v19) < 0 )
          v24 = 0x7FFFFFFF;
        if ( v23 < v22 )
        if ( v24 )
        {
          if ( v24 <= -1 )
LABEL_46:
            sub_21E57F4();
          v21 = (char *)operator new(2 * v24);
          LODWORD(v19) = *((_QWORD *)v6 + 9) >> 32;
          v20 = (void *)*((_QWORD *)v6 + 9);
        }
        *(_WORD *)&v21[v19 - (_DWORD)v20] = v18;
        v25 = &v21[v19 - (_DWORD)v20];
        if ( ((signed int)v19 - (signed int)v20) >> 1 )
          _aeabi_memmove(v21, v20);
        v26 = (int)(v25 + 2);
        if ( v20 )
          operator delete(v20);
        *((_DWORD *)v6 + 18) = v21;
        *((_DWORD *)v6 + 19) = v26;
        *((_DWORD *)v6 + 20) = &v21[2 * v24];
      else
        *(_WORD *)v19 = v18;
        *((_DWORD *)v6 + 19) = v19 + 2;
    *((_DWORD *)v6 + 22) = *((_DWORD *)v6 + 21);
    v28 = (int **)(*(_QWORD *)((char *)a5 + 36) >> 32);
    for ( k = (int **)*(_QWORD *)((char *)a5 + 36); v28 != k; ++k )
      v29 = NameRegistry::getNameId(v8, k);
      v30 = *((_QWORD *)v6 + 11);
      if ( (_DWORD)v30 == HIDWORD(v30) )
        v31 = (void *)*((_DWORD *)v6 + 21);
        v32 = 0;
        v33 = ((signed int)v30 - (signed int)v31) >> 1;
        if ( !v33 )
          v33 = 1;
        HIDWORD(v30) = v33 + (((signed int)v30 - (signed int)v31) >> 1);
        v35 = v33 + (((signed int)v30 - (signed int)v31) >> 1);
        if ( SHIDWORD(v30) < 0 )
          v35 = 0x7FFFFFFF;
        if ( v34 < v33 )
        if ( v35 )
          if ( v35 <= -1 )
            goto LABEL_46;
          v32 = (char *)operator new(2 * v35);
          LODWORD(v30) = *(_QWORD *)((char *)v6 + 84) >> 32;
          v31 = (void *)*(_QWORD *)((char *)v6 + 84);
        *(_WORD *)&v32[v30 - (_DWORD)v31] = v29;
        v36 = &v32[v30 - (_DWORD)v31];
        if ( ((signed int)v30 - (signed int)v31) >> 1 )
          _aeabi_memmove(v32, v31);
        v37 = (int)(v36 + 2);
        if ( v31 )
          operator delete(v31);
        *((_DWORD *)v6 + 21) = v32;
        *((_DWORD *)v6 + 22) = v37;
        *((_DWORD *)v6 + 23) = &v32[2 * v35];
        *(_WORD *)v30 = v29;
        *((_DWORD *)v6 + 22) = v30 + 2;
    v38 = -1;
    result = *((_BYTE *)a5 + 48);
    if ( *((_BYTE *)a5 + 48) )
      v38 = 1;
    *((_DWORD *)v6 + 10) = v38;
  }
  return result;
}


void __fastcall MouseMapper::~MouseMapper(MouseMapper *this)
{
  MouseMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r5@6
  char *v6; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_26E89AC;
  v2 = (void *)*((_DWORD *)this + 21);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 18);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 13);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v6 = (char *)*((_DWORD *)v1 + 11);
  if ( v6 && (char *)v1 + 68 != v6 )
    operator delete(v6);
  InputDeviceMapper::~InputDeviceMapper(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


InputDeviceMapper *__fastcall MouseMapper::MouseMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  HIDWORD(v2) = 10;
  *(_DWORD *)v1 = &off_26E89AC;
  *((_DWORD *)v1 + 10) = -1;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 1065353216;
  LODWORD(v2) = (char *)v1 + 60;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 12) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 17) = 0;
    v5 = (char *)v1 + 68;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *((_DWORD *)v1 + 11) = v5;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  return v1;
}


signed int __fastcall MouseMapper::getInputMode(MouseMapper *this)
{
  return 1;
}


int __fastcall MouseMapper::changeControllerId(int result, int a2, int a3)
{
  *(_DWORD *)(result + 96) = a3;
  return result;
}


signed int __fastcall MouseMapper::tick(Mouse *a1, int a2)
{
  int v2; // r5@1
  signed int v4; // r4@1
  Mouse *v5; // r0@1
  unsigned int v10; // r6@4
  Mouse *v11; // r0@6
  char v12; // r2@7
  unsigned int v13; // r4@10
  int v14; // r0@12
  int v15; // r6@12
  int v16; // r0@13
  unsigned int v17; // r1@13
  int v18; // r7@18
  __int64 v20; // r4@20
  int v21; // r6@20
  __int16 v22; // t1@21
  __int64 v23; // kr00_8@24
  Mouse *v24; // r10@25
  int v25; // r8@25
  Mouse *v26; // r9@27
  signed int v27; // r0@30
  int v34; // [sp+10h] [bp-40h]@24
  int v35; // [sp+14h] [bp-3Ch]@2

  v2 = a2;
  _R11 = a1;
  v4 = 0;
  v5 = (Mouse *)Mouse::next(a1);
  if ( v5 == (Mouse *)1 )
  {
    __asm
    {
      VLDR            S16, =0.0039216
      VLDR            S18, =0.0
    }
    v35 = v2;
    do
      v14 = Mouse::getEvent(v5);
      v15 = v14;
      v11 = (Mouse *)*(_WORD *)(v14 + 8);
      if ( (unsigned int)v11 - 1 >= 3 )
      {
        if ( (_BYTE)v11 )
        {
          v18 = v15;
          if ( (unsigned __int8)v11 == 4 )
          {
            _R0 = (unsigned int)v11 >> 8;
            if ( _R0 )
            {
              v20 = *((_QWORD *)_R11 + 9);
              v21 = v35;
              if ( (_DWORD)v20 != HIDWORD(v20) )
              {
                do
                {
                  v22 = *(_WORD *)v20;
                  LODWORD(v20) = v20 + 2;
                  InputEventQueue::enqueueButtonPressAndRelease(v35, v22, 2, *((_DWORD *)_R11 + 24));
                }
                while ( HIDWORD(v20) != (_DWORD)v20 );
                _R0 = *(_BYTE *)(v18 + 9);
              }
            }
            else
              _R0 = 0;
            __asm { VMOV            S0, R0 }
            v35 = v21;
            __asm
              VCVT.F32.U32    S0, S0
              VMUL.F32        S0, S0, S16
            if ( _ZF )
              __asm { VMOVEQ.F32      S0, S18 }
            __asm { VMOV            R3, S0 }
            v11 = (Mouse *)InputEventQueue::enqueueDirection(v21, 2, 0, _R3, 2, *((_DWORD *)_R11 + 24), 0);
          }
        }
        else
          v27 = *(_DWORD *)(v15 + 4);
          if ( (_WORD)v27 || (unsigned int)v27 >= 0x10000 )
            _R1 = (signed __int16)v27;
              VLDR            S0, [R11,#4]
              VMOV            S2, R1
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S0, S0
            _R0 = (v27 >> 16) * *((_DWORD *)_R11 + 10);
              VDIV.F32        S2, S2, S0
              VMOV            S4, R0
              VMOV            R2, S2
              VCVT.F32.S32    S4, S4
              VDIV.F32        S0, S4, S0
              VMOV            R3, S0
            v11 = (Mouse *)InputEventQueue::enqueueDirection(v35, 1, _R2, _R3, 2, *((_DWORD *)_R11 + 24), 0);
          else
            v11 = (Mouse *)InputEventQueue::enqueuePointerLocation(
                             v35,
                             1,
                             *(_DWORD *)v15,
                             *(_DWORD *)v15 >> 16,
                             2,
                             *(_BYTE *)(v15 + 16),
                             *((_DWORD *)_R11 + 24));
      }
      else
        v16 = (*(int (__fastcall **)(Mouse *, _DWORD))(*(_DWORD *)_R11 + 40))(_R11, *((_DWORD *)_R11 + 24));
        v17 = *(_WORD *)(v15 + 8);
        v13 = v17 >> 8;
        if ( v16 == 1 )
          if ( v13 != 1 )
            LOBYTE(v13) = 0;
          v11 = InputEventQueue::enqueueRawInput(v35, (unsigned __int8)v17, 1, v13, *((_DWORD *)_R11 + 24), 1);
          v34 = v15;
          v23 = *(_QWORD *)((char *)_R11 + 44);
          v10 = (unsigned __int8)v17 % (unsigned int)(*(_QWORD *)((char *)_R11 + 44) >> 32);
          v11 = *(Mouse **)(v23 + 4 * v10);
          if ( v11 )
            v24 = *(Mouse **)v11;
            v25 = *(_DWORD *)(*(_DWORD *)v11 + 4);
            while ( (unsigned __int8)v17 != v25 )
              v26 = *(Mouse **)v24;
              if ( *(_DWORD *)v24 )
                v25 = *((_DWORD *)v26 + 1);
                v11 = v24;
                v24 = *(Mouse **)v24;
                if ( *((_DWORD *)v26 + 1) % HIDWORD(v23) == v10 )
                  continue;
              goto LABEL_38;
            _ZF = v11 == 0;
            if ( v11 )
              v10 = *(_DWORD *)v11;
              _ZF = *(_DWORD *)v11 == 0;
            if ( !_ZF )
              v11 = *(Mouse **)(v10 + 4);
              if ( v11 == (Mouse *)(unsigned __int8)v17 )
                  v12 = v13;
                  if ( (unsigned __int8)v13 != 1 )
                    v12 = 0;
                  v11 = (Mouse *)InputEventQueue::enqueueButton(
                                   v35,
                                   *(_WORD *)(v10 + 8),
                                   v12,
                                   0,
                                   2,
                                   *((_DWORD *)_R11 + 24),
                                   0);
                  v10 = *(_DWORD *)v10;
                  if ( !v10 )
                    break;
                  v11 = (Mouse *)*(_WORD *)(v34 + 8);
                  v13 = (unsigned int)v11 >> 8;
                  v11 = (Mouse *)(unsigned __int8)v11;
                while ( *(_DWORD *)(v10 + 4) == (unsigned __int8)v11 );
LABEL_38:
      v5 = (Mouse *)Mouse::next(v11);
    while ( v5 );
    v4 = 1;
  }
  return v4;
}


void __fastcall MouseMapper::MouseMapper(MouseMapper *this)
{
  MouseMapper::MouseMapper(this);
}


int __fastcall MouseMapper::getCursorPos(MouseMapper *this, float *a2, float *a3)
{
  int result; // r0@1

  _R0 = (Mouse *)Mouse::getX(this);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R5]
  }
  result = Mouse::getY(_R0);
    VSTR            S0, [R4]
  return result;
}


InputDeviceMapper *__fastcall MouseMapper::~MouseMapper(MouseMapper *this)
{
  MouseMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r5@6
  char *v6; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_26E89AC;
  v2 = (void *)*((_DWORD *)this + 21);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 18);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 13);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v6 = (char *)*((_DWORD *)v1 + 11);
  if ( v6 && (char *)v1 + 68 != v6 )
    operator delete(v6);
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}
