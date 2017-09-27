

signed int __fastcall GameControllerMapper::getInputMode(GameControllerMapper *this)
{
  return 3;
}


void __fastcall GameControllerMapper::~GameControllerMapper(GameControllerMapper *this)
{
  GameControllerMapper::~GameControllerMapper(this);
}


unsigned int *__fastcall GameControllerMapper::handleStickEvent(int a1, int a2, unsigned int *a3, unsigned int a4)
{
  int v4; // r10@1
  int v5; // r8@1
  __int64 v6; // kr00_8@1
  unsigned int *result; // r0@1
  unsigned int *v8; // r6@2
  int v9; // r7@2
  __int64 v11; // kr08_8@10
  unsigned int v12; // r11@10
  int **v13; // r0@10
  int *v14; // r4@11
  int v16; // r6@13
  bool v17; // zf@16
  int v22; // r0@21
  int v23; // r1@21
  char v24; // r1@24
  char v27; // r0@29
  __int64 v30; // kr18_8@35
  unsigned int v31; // r5@35
  unsigned int *v32; // r6@36
  int v33; // r7@36
  bool v34; // zf@41
  int v35; // r6@45
  char v36; // r2@46
  int v37; // r4@46
  int v38; // r3@46
  signed int v39; // r1@46
  int v40; // r0@46
  int v41; // r3@54
  char v42; // r3@58
  int v43; // [sp+Ch] [bp-54h]@10
  __int64 v44; // [sp+10h] [bp-50h]@1
  char v45; // [sp+18h] [bp-48h]@26
  int v46; // [sp+24h] [bp-3Ch]@24

  v44 = *(_QWORD *)&a2;
  v4 = a1;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 60);
  result = *(unsigned int **)(v6 + 4 * (a4 % HIDWORD(v6)));
  if ( result )
  {
    v8 = (unsigned int *)*result;
    v9 = *(_DWORD *)(*result + 4);
    while ( v9 != a4 )
    {
      if ( *v8 )
      {
        v9 = *(_DWORD *)(v6 + 4);
        result = v8;
        v8 = (unsigned int *)*v8;
        if ( *(_DWORD *)(v6 + 4) % HIDWORD(v6) == a4 % HIDWORD(v6) )
          continue;
      }
      return result;
    }
    _ZF = result == 0;
    if ( result )
      result = (unsigned int *)*result;
      _ZF = result == 0;
    if ( !_ZF )
      v43 = (int)result;
      v11 = *((_QWORD *)result + 8);
      v12 = *a3;
      v13 = *(int ***)(v11 + 4 * (*a3 % HIDWORD(v11)));
      if ( v13 )
        v14 = *v13;
        _R7 = (int *)(*v13)[1];
        while ( (int *)v12 != _R7 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            _R7 = *(int **)(v16 + 4);
            v13 = (int **)v11;
            v14 = *(int **)v11;
            if ( *(_DWORD *)(v16 + 4) % HIDWORD(v11) == *a3 % HIDWORD(v11) )
              continue;
          }
          goto LABEL_35;
        }
        v17 = v13 == 0;
        if ( v13 )
          _R7 = *v13;
          v17 = *v13 == 0;
        if ( !v17 )
          do
            if ( _R7[1] != v12 )
              break;
            __asm
            {
              VLDR            S0, [R7,#0xC]
              VLDR            S2, [R7,#0x10]
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S0, S0
            }
            _R0 = HIDWORD(v44);
              VLDR            S4, [R0,#8]
              VLDR            S6, [R0,#0xC]
              VMUL.F32        S16, S2, S6
              VMUL.F32        S18, S0, S4
            if ( *((_BYTE *)_R7 + 20) )
              v22 = *(_QWORD *)(v4 + 48) >> 32;
              v23 = *(_QWORD *)(v4 + 48);
              if ( v23 == v22 )
              {
LABEL_24:
                v46 = v5;
                __asm
                {
                  VSTR            S18, [SP,#0x60+var_44]
                  VSTR            S16, [SP,#0x60+var_40]
                }
                v24 = 0;
                if ( *(_DWORD *)(HIDWORD(v44) + 4) != 2 )
                  v24 = 1;
                v45 = v24;
                if ( v22 == *(_DWORD *)(v4 + 56) )
                  std::vector<GameControllerMapper::GamepadStickTurnData,std::allocator<GameControllerMapper::GamepadStickTurnData>>::_M_emplace_back_aux<GameControllerMapper::GamepadStickTurnData const&>(
                    (unsigned __int64 *)(v4 + 48),
                    (int)&v45);
                else
                  *(_BYTE *)v22 = v24;
                  *(_DWORD *)(v22 + 12) = v5;
                  __asm
                  {
                    VSTR            S18, [R0,#4]
                    VSTR            S16, [R0,#8]
                  }
                  *(_DWORD *)(v4 + 52) = v22 + 16;
              }
              else
                while ( *(_DWORD *)(v23 + 12) != v5 )
                  v23 += 16;
                  if ( v22 == v23 )
                    goto LABEL_24;
                  VSTR            S18, [R1,#4]
                  VSTR            S16, [R1,#8]
                v27 = 0;
                  v27 = 1;
                *(_BYTE *)v23 = v27;
              __asm
                VMOV            R2, S18
                VMOV            R3, S16
              InputEventQueue::enqueueDirection(v44, 3, _R2, _R3, 1, v5, 0);
            else
              InputEventQueue::enqueueDirection(v44, _R7[2], _R2, _R3, 1, v5, 0);
            _R7 = (int *)*_R7;
            v12 = *(_DWORD *)HIDWORD(v44);
          while ( _R7 );
LABEL_35:
      v30 = *(_QWORD *)(v43 + 92);
      v31 = v12 % (unsigned int)(*(_QWORD *)(v43 + 92) >> 32);
      result = *(unsigned int **)(v30 + 4 * v31);
      if ( result )
        v32 = (unsigned int *)*result;
        v33 = *(_DWORD *)(*result + 4);
        while ( v12 != v33 )
          if ( *v32 )
            v33 = *(_DWORD *)(v30 + 4);
            result = v32;
            v32 = (unsigned int *)*v32;
            if ( *(_DWORD *)(v30 + 4) % HIDWORD(v30) == v31 )
          return result;
        v34 = result == 0;
        if ( result )
          v31 = *result;
          v34 = *result == 0;
        if ( !v34 )
          result = *(unsigned int **)(v31 + 4);
          if ( result == (unsigned int *)v12 )
            v35 = v43 + 124;
            do
              v36 = 0;
              v37 = *(_DWORD *)(v43 + 128);
              v38 = v43 + 124;
              v39 = *(_WORD *)(v31 + 8);
              v40 = v43 + 124;
              if ( *(_DWORD *)(HIDWORD(v44) + 4) == 2 )
                v36 = 1;
              for ( ; v37; v38 = v40 )
                v40 = v37;
                while ( *(_WORD *)(v40 + 16) < v39 )
                  v40 = *(_DWORD *)(v40 + 12);
                  if ( !v40 )
                    v40 = v38;
                    goto LABEL_54;
                v37 = *(_DWORD *)(v40 + 8);
LABEL_54:
              v41 = v43 + 124;
              if ( v40 != v35 )
                if ( v39 < *(_WORD *)(v40 + 16) )
                  v40 = v43 + 124;
                v41 = v40;
              _ZF = v41 == v35;
              v42 = 0;
              if ( !_ZF )
                v42 = 1;
              result = (unsigned int *)InputEventQueue::enqueueButton(v44, v39, v36, v42, 1, v5, 0);
              v31 = *(_DWORD *)v31;
              if ( !v31 )
                break;
              result = (unsigned int *)*(_DWORD *)HIDWORD(v44);
            while ( *(_DWORD *)(v31 + 4) == *(_DWORD *)HIDWORD(v44) );
  }
  return result;
}


RakNet *__fastcall GameControllerMapper::handleConnectionStateChangedEvent(GameControllerMapper *this, InputEventQueue *a2, int a3, int a4)
{
  char v4; // r4@1
  InputEventQueue *v5; // r8@1
  int v6; // r1@2
  int v7; // r6@2
  int v8; // r2@2
  int v9; // r5@3
  int v10; // r2@10
  int v11; // r5@23
  int v12; // r2@25
  int v13; // r7@27
  int i; // r0@31
  int v16; // [sp+4h] [bp-1Ch]@1

  v4 = a3;
  v5 = a2;
  v16 = a4;
  if ( a3 )
    return InputEventQueue::enqueueConnectionStateChange(v5, v16, v4);
  v6 = *((_QWORD *)this + 6) >> 32;
  v7 = *((_QWORD *)this + 6);
  v8 = (v6 - v7) >> 6;
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
    while ( *(_DWORD *)(v7 + 12) != a4 )
    {
      if ( *(_DWORD *)(v7 + 28) == a4 )
      {
        v7 += 16;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v7 + 44) == a4 )
        v7 += 32;
      if ( *(_DWORD *)(v7 + 60) == a4 )
        v7 += 48;
      --v9;
      v7 += 64;
      if ( v9 <= 1 )
        goto LABEL_9;
    }
    goto LABEL_23;
  }
LABEL_9:
  if ( 1 == (v6 - v7) >> 4 )
    goto LABEL_16;
  v10 = (v6 - v7) >> 4;
  if ( v10 == 2 )
    goto LABEL_14;
  if ( v10 != 3 )
    v7 = *((_QWORD *)this + 6) >> 32;
  if ( *(_DWORD *)(v7 + 12) != a4 )
    v7 += 16;
LABEL_14:
    if ( *(_DWORD *)(v7 + 12) != a4 )
      v7 += 16;
LABEL_16:
      if ( *(_DWORD *)(v7 + 12) != a4 )
        v7 = *((_QWORD *)this + 6) >> 32;
      goto LABEL_23;
LABEL_23:
  v11 = *((_QWORD *)this + 6) >> 32;
  if ( v7 != v6 )
    v11 = v7;
LABEL_25:
    v12 = v7 + 16;
    while ( 1 )
      v7 = v12;
      if ( v6 == v12 )
        break;
      v13 = *(_DWORD *)(v12 + 12);
      v12 += 16;
      if ( v13 != a4 )
        *(_BYTE *)v11 = *(_BYTE *)v7;
        *(_DWORD *)(v11 + 4) = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(v11 + 8) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v11 + 12) = v13;
        v11 += 16;
        a4 = v16;
        goto LABEL_25;
  if ( v11 != v6 )
    *((_DWORD *)this + 13) = v11;
  for ( i = *(_DWORD *)(std::__detail::_Map_base<int,std::pair<int const,GameControllerMapper::GameControllerMappingData>,std::allocator<std::pair<int const,GameControllerMapper::GameControllerMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                          (unsigned __int64 *)((char *)this + 60),
                          (unsigned int *)&v16)
                      + 36); i; i = *(_DWORD *)i )
    *(_BYTE *)(i + 10) = 0;
  return InputEventQueue::enqueueConnectionStateChange(v5, v16, v4);
}


RakNet *__fastcall GameControllerMapper::handleTriggerEvent(int a1, int a2, int *a3, unsigned int a4)
{
  int v4; // r4@1
  unsigned int v6; // r11@1
  int v7; // r9@1
  RakNet *result; // r0@1
  __int64 v12; // kr00_8@8
  unsigned int v13; // r4@8
  RakNet *v14; // r7@9
  int v15; // r6@9
  __int64 v17; // kr08_8@17
  RakNet *v19; // r8@18
  int v20; // r6@18
  bool v21; // zf@23
  int v22; // r6@27
  signed int v23; // r7@28
  int v24; // r2@28
  int v25; // r3@28
  int v26; // r1@28
  unsigned int v27; // r3@36
  int v28; // r2@36
  char v29; // r3@41
  unsigned int v30; // [sp+Ch] [bp-2Ch]@17
  int v31; // [sp+10h] [bp-28h]@17

  v4 = a1;
  _R10 = a3;
  v6 = a4;
  v7 = a2;
  result = (RakNet *)(*(int (**)(void))(*(_DWORD *)a1 + 40))();
  if ( result == (RakNet *)3 )
  {
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R10,#4]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      result = InputEventQueue::enqueueRawInput(v7, *_R10, 8, 1, v6, 1);
  }
  else if ( result == (RakNet *)2 )
      result = InputEventQueue::enqueueRawInput(v7, *_R10, 6, 1, v6, 1);
  else
    v12 = *(_QWORD *)(v4 + 60);
    v13 = v6 % (unsigned int)(*(_QWORD *)(v4 + 60) >> 32);
    result = *(RakNet **)(v12 + 4 * v13);
    if ( result )
      v14 = *(RakNet **)result;
      v15 = *(_DWORD *)(*(_DWORD *)result + 4);
      while ( v15 != v6 )
      {
        if ( *(_DWORD *)v14 )
        {
          v15 = *(_DWORD *)(v12 + 4);
          result = v14;
          v14 = *(RakNet **)v14;
          if ( *(_DWORD *)(v12 + 4) % HIDWORD(v12) == v13 )
            continue;
        }
        return result;
      }
      _ZF = result == 0;
      if ( result )
        result = *(RakNet **)result;
        _ZF = result == 0;
      if ( !_ZF )
        v30 = (unsigned int)result;
        v17 = *(_QWORD *)((char *)result + 36);
        v31 = *_R10;
        _R4 = (unsigned int)*_R10 % HIDWORD(v17);
        result = *(RakNet **)(v17 + 4 * _R4);
        if ( result )
          v19 = *(RakNet **)result;
          v20 = *(_DWORD *)(*(_DWORD *)result + 4);
          while ( v31 != v20 )
          {
            if ( *(_DWORD *)v19 )
            {
              v20 = *(_DWORD *)(v17 + 4);
              result = v19;
              v19 = *(RakNet **)v19;
              if ( *(_DWORD *)(v17 + 4) % HIDWORD(v17) == _R4 )
                continue;
            }
            return result;
          }
          v21 = result == 0;
          if ( result )
            _R4 = *(_DWORD *)result;
            v21 = *(_DWORD *)result == 0;
          if ( !v21 )
            result = *(RakNet **)(_R4 + 4);
            if ( result == (RakNet *)v31 )
              v22 = v30 + 124;
              do
              {
                __asm { VLDR            S0, [R4,#0xC] }
                v23 = 0;
                __asm { VLDR            S2, [R10,#4] }
                v24 = v30 + 124;
                __asm { VCMPE.F32       S2, S0 }
                result = *(RakNet **)(_R4 + 8);
                __asm { VMRS            APSR_nzcv, FPSCR }
                v25 = *(_DWORD *)(v30 + 128);
                v26 = v30 + 124;
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  v23 = 1;
                for ( ; v25; v24 = v26 )
                {
                  v26 = v25;
                  while ( *(_WORD *)(v26 + 16) < (signed __int16)result )
                  {
                    v26 = *(_DWORD *)(v26 + 12);
                    if ( !v26 )
                    {
                      v26 = v24;
                      goto LABEL_36;
                    }
                  }
                  v25 = *(_DWORD *)(v26 + 8);
                }
LABEL_36:
                v27 = (unsigned int)result >> 16;
                v28 = v30 + 124;
                if ( v26 != v22 )
                  if ( (signed __int16)result < (signed int)*(_WORD *)(v26 + 16) )
                    v26 = v30 + 124;
                  v28 = v26;
                if ( v23 != (unsigned __int8)v27 )
                  v29 = 0;
                  if ( v28 != v22 )
                    v29 = 1;
                  result = (RakNet *)InputEventQueue::enqueueButton(v7, (__int16)result, v23, v29, 1, v6, 0);
                  *(_BYTE *)(_R4 + 10) = v23;
                _R4 = *(_DWORD *)_R4;
                if ( !_R4 )
                  break;
                result = (RakNet *)*_R10;
              }
              while ( *(_DWORD *)(_R4 + 4) == *_R10 );
  return result;
}


GameControllerMapper::GameControllerMappingData *__fastcall GameControllerMapper::GameControllerMappingData::GameControllerMappingData(GameControllerMapper::GameControllerMappingData *this)
{
  GameControllerMapper::GameControllerMappingData *v1; // r4@1
  char *v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  double v6; // r0@4
  unsigned int v7; // r0@4
  int v8; // r6@6
  void *v9; // r5@6
  double v10; // r0@7
  unsigned int v11; // r0@7
  int v12; // r6@9
  void *v13; // r5@9
  double v14; // r0@10
  unsigned int v15; // r0@10
  int v16; // r6@12
  void *v17; // r5@12
  GameControllerMapper::GameControllerMappingData *result; // r0@13

  v1 = this;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 1065353216;
  v2 = (char *)this + 16;
  *((_DWORD *)this + 5) = 0;
  v3 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, (unsigned int)this + 16)));
  *((_DWORD *)v2 - 3) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 6) = 0;
    v5 = (char *)v1 + 24;
  }
  else
    if ( v3 >= 0x40000000 )
      goto LABEL_18;
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)v1 = v5;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  HIDWORD(v6) = 10;
  *((_DWORD *)v1 + 11) = 1065353216;
  LODWORD(v6) = (char *)v1 + 44;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = sub_21E6254(v6);
  *((_DWORD *)v1 + 8) = v7;
  if ( v7 == 1 )
    *((_DWORD *)v1 + 13) = 0;
    v9 = (char *)v1 + 52;
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *((_DWORD *)v1 + 7) = v9;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  HIDWORD(v10) = 10;
  *((_DWORD *)v1 + 18) = 1065353216;
  LODWORD(v10) = (char *)v1 + 72;
  *(_DWORD *)(LODWORD(v10) + 4) = 0;
  v11 = sub_21E6254(v10);
  *((_DWORD *)v1 + 15) = v11;
  if ( v11 == 1 )
    *((_DWORD *)v1 + 20) = 0;
    v13 = (char *)v1 + 80;
    if ( v11 >= 0x40000000 )
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  *((_DWORD *)v1 + 14) = v13;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  HIDWORD(v14) = 10;
  *((_DWORD *)v1 + 25) = 1065353216;
  LODWORD(v14) = (char *)v1 + 100;
  *(_DWORD *)(LODWORD(v14) + 4) = 0;
  v15 = sub_21E6254(v14);
  *((_DWORD *)v1 + 22) = v15;
  if ( v15 == 1 )
    *((_DWORD *)v1 + 27) = 0;
    v17 = (char *)v1 + 108;
    goto LABEL_13;
  if ( v15 >= 0x40000000 )
LABEL_18:
    sub_21E57F4();
  v16 = 4 * v15;
  v17 = operator new(4 * v15);
  _aeabi_memclr4(v17, v16);
LABEL_13:
  *((_DWORD *)v1 + 21) = v17;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  *((_DWORD *)v1 + 29) = 0;
  result = v1;
  *((_DWORD *)v1 + 31) = (char *)v1 + 116;
  *((_DWORD *)v1 + 32) = (char *)v1 + 116;
  return result;
}


RakNet *__fastcall GameControllerMapper::handleButtonEvent(int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v5; // r4@1
  int v6; // r10@1
  unsigned int v7; // r11@1
  int v8; // r9@1
  int v9; // r0@1
  int v10; // r1@3
  int v11; // r3@3
  char v12; // r2@3
  int v13; // r0@5
  RakNet *result; // r0@9
  __int64 v15; // kr10_8@10
  unsigned int v16; // r4@10
  RakNet *v17; // r7@11
  int v18; // r6@11
  bool v19; // zf@16
  __int64 v20; // kr18_8@19
  int v21; // r4@19
  RakNet *v22; // r8@20
  RakNet *v23; // r6@20
  bool v24; // zf@25
  int v25; // r6@31
  int v26; // r3@32
  int v27; // r2@32
  signed int v28; // r1@32
  int v29; // r5@32
  int i; // r0@34
  int v31; // r3@40
  char v32; // r3@44
  int v33; // [sp+0h] [bp-38h]@3
  char v34; // [sp+4h] [bp-34h]@3
  RakNet *v35; // [sp+Ch] [bp-2Ch]@19
  RakNet *v36; // [sp+10h] [bp-28h]@19

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (*(int (**)(void))(*(_DWORD *)a1 + 40))();
  if ( v9 == 3 )
  {
    v11 = *(_QWORD *)v6 >> 32;
    v10 = *(_QWORD *)v6;
    v12 = 7;
    v33 = v7;
    v34 = *(_BYTE *)(v6 + 8);
    if ( v11 != 1 )
      LOBYTE(v11) = 0;
    v13 = v8;
    return InputEventQueue::enqueueRawInput(v13, v10, v12, v11, v33, v34);
  }
  if ( v9 == 2 )
    v12 = 5;
  v15 = *(_QWORD *)(v5 + 60);
  v16 = v7 % (unsigned int)(*(_QWORD *)(v5 + 60) >> 32);
  result = *(RakNet **)(v15 + 4 * v16);
  if ( result )
    v17 = *(RakNet **)result;
    v18 = *(_DWORD *)(*(_DWORD *)result + 4);
    while ( v18 != v7 )
    {
      if ( *(_DWORD *)v17 )
      {
        v18 = *(_DWORD *)(v15 + 4);
        result = v17;
        v17 = *(RakNet **)v17;
        if ( *(_DWORD *)(v15 + 4) % HIDWORD(v15) == v16 )
          continue;
      }
      return result;
    }
    v19 = result == 0;
    if ( result )
      result = *(RakNet **)result;
      v19 = result == 0;
    if ( !v19 )
      v35 = result;
      v20 = *((_QWORD *)result + 1);
      v36 = *(RakNet **)v6;
      v21 = *(_DWORD *)v6 % HIDWORD(v20);
      result = *(RakNet **)(v20 + 4 * v21);
      if ( result )
        v22 = *(RakNet **)result;
        v23 = *(RakNet **)(*(_DWORD *)result + 4);
        while ( v36 != v23 )
        {
          if ( *(_DWORD *)v22 )
          {
            v23 = *(RakNet **)(v20 + 4);
            result = v22;
            v22 = *(RakNet **)v22;
            if ( *(_DWORD *)(v20 + 4) % HIDWORD(v20) == v21 )
              continue;
          }
          return result;
        }
        v24 = result == 0;
        if ( result )
          v21 = *(_DWORD *)result;
          v24 = *(_DWORD *)result == 0;
        if ( !v24 )
          if ( a5 != -1 )
            v7 = a5;
          result = *(RakNet **)(v21 + 4);
          if ( result == v36 )
            v25 = (int)v35 + 124;
            do
            {
              v26 = (int)v35 + 124;
              v27 = *(_DWORD *)(v6 + 4);
              v28 = *(_WORD *)(v21 + 8);
              v29 = *((_DWORD *)v35 + 32);
              if ( v27 != 1 )
                LOBYTE(v27) = 0;
              for ( i = (int)v35 + 124; v29; v26 = i )
              {
                i = v29;
                while ( *(_WORD *)(i + 16) < v28 )
                {
                  i = *(_DWORD *)(i + 12);
                  if ( !i )
                  {
                    i = v26;
                    goto LABEL_40;
                  }
                }
                v29 = *(_DWORD *)(i + 8);
              }
LABEL_40:
              v31 = (int)v35 + 124;
              if ( i != v25 )
                if ( v28 < *(_WORD *)(i + 16) )
                  i = (int)v35 + 124;
                v31 = i;
              v19 = v31 == v25;
              v32 = 0;
              if ( !v19 )
                v32 = 1;
              result = (RakNet *)InputEventQueue::enqueueButton(v8, v28, v27, v32, 1, v7, 0);
              v21 = *(_DWORD *)v21;
              if ( !v21 )
                break;
              result = *(RakNet **)v6;
            }
            while ( *(_DWORD *)(v21 + 4) == *(_DWORD *)v6 );
  return result;
}


GameControllerMapper::GameControllerMappingData *__fastcall GameControllerMapper::GameControllerMappingData::~GameControllerMappingData(GameControllerMapper::GameControllerMappingData *this)
{
  GameControllerMapper::GameControllerMappingData *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  char *v7; // r0@8
  void *v8; // r0@11
  void *v9; // r5@12
  char *v10; // r0@13
  void *v11; // r0@16
  void *v12; // r5@17
  char *v13; // r0@18

  v1 = this;
  std::_Rb_tree<short,short,std::_Identity<short>,std::less<short>,std::allocator<short>>::_M_erase(
    (int)this + 112,
    *((_DWORD *)this + 30));
  v2 = (void *)*((_DWORD *)v1 + 23);
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
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 84), 4 * (*(_QWORD *)((char *)v1 + 84) >> 32));
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  v4 = (char *)*((_DWORD *)v1 + 21);
  if ( v4 && (char *)v1 + 108 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 16);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*((_QWORD *)v1 + 7), 4 * (*((_QWORD *)v1 + 7) >> 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  v7 = (char *)*((_DWORD *)v1 + 14);
  if ( v7 && (char *)v1 + 80 != v7 )
    operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 9);
  if ( v8 )
      v9 = *(void **)v8;
      operator delete(v8);
      v8 = v9;
    while ( v9 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v10 = (char *)*((_DWORD *)v1 + 7);
  if ( v10 && (char *)v1 + 52 != v10 )
    operator delete(v10);
  v11 = (void *)*((_DWORD *)v1 + 2);
  if ( v11 )
      v12 = *(void **)v11;
      operator delete(v11);
      v11 = v12;
    while ( v12 );
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v13 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v13 )
    operator delete(v13);
  return v1;
}


int __fastcall GameControllerMapper::getDeltaTime(GameControllerMapper *this)
{
  __int64 v2; // r0@1
  int v3; // r1@1
  int result; // r0@6

  _R4 = this;
  v2 = *((_QWORD *)this + 5);
  v3 = HIDWORD(v2) & 0x7FFFFFFF;
  _ZF = (_DWORD)v2 == 0;
  if ( !(_DWORD)v2 )
    _ZF = v3 == 0;
  if ( _ZF )
  {
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VSTR            D0, [R4,#0x28]
    }
  }
  _R0 = getTimeS();
  __asm
    VLDR            D0, [R4,#0x28]
    VMOV            D1, R0, R1
    VSUB.F64        D0, D1, D0
    VCVT.F32.F64    S0, D0
    VMOV            R0, S0
    VSTR            D1, [R4,#0x28]
  return result;
}


InputDeviceMapper *__fastcall GameControllerMapper::~GameControllerMapper(GameControllerMapper *this)
{
  GameControllerMapper *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3
  void *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E88EC;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      GameControllerMapper::GameControllerMappingData::~GameControllerMappingData((GameControllerMapper::GameControllerMappingData *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v4 = (char *)*((_DWORD *)v1 + 15);
  if ( v4 && (char *)v1 + 84 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 12);
  if ( v5 )
    operator delete(v5);
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}


void __fastcall GameControllerMapper::setMapping(GameControllerMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  GameControllerMapper::setMapping(this, a2, a3, a4, a5, a6);
}


int __fastcall GameControllerMapper::tick(int a1, InputEventQueue *a2, int a3)
{
  GameController *v3; // r5@0
  InputEventQueue *v5; // r11@1
  int v6; // r4@1
  int v7; // r3@1
  int v8; // r8@1
  char v9; // r6@1
  int v10; // r7@2
  unsigned int v11; // r0@3
  unsigned int *v12; // r9@3
  unsigned int v13; // r1@6
  unsigned int v14; // r2@7
  int v16; // r0@15
  char v17; // r1@15
  int v18; // r3@20
  char v19; // r0@24
  signed int v20; // r1@26
  int v21; // r3@35
  unsigned int v22; // r0@46
  int v23; // r9@50
  unsigned int v24; // r0@52
  __int64 v25; // r0@59
  int v26; // r1@59
  bool v27; // zf@59
  __int64 v33; // kr08_8@64
  int *v34; // r5@65
  char v36; // t1@66
  __int64 v37; // r0@66
  __int64 v40; // r4@75
  int v41; // r0@76
  unsigned int *v42; // r2@77
  unsigned int v43; // r1@79
  int v45; // [sp+Ch] [bp-6Ch]@1
  bool v46; // [sp+14h] [bp-64h]@12
  int v47; // [sp+1Ch] [bp-5Ch]@13
  unsigned int v48[4]; // [sp+20h] [bp-58h]@18
  int v49; // [sp+30h] [bp-48h]@18
  int v50; // [sp+34h] [bp-44h]@1
  int v51; // [sp+38h] [bp-40h]@1

  _R10 = a1;
  v5 = a2;
  v6 = a3;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a1 + 48))(&v50, a1);
  v7 = v51;
  v8 = v50;
  v9 = 0;
  v45 = v51;
  while ( v8 != v7 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 4);
      v12 = (unsigned int *)(v10 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v11 )
            goto LABEL_58;
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
      _ZF = *v12 == 0;
      if ( *v12 )
        v3 = *(GameController **)v8;
        _ZF = *(_DWORD *)v8 == 0;
      if ( !_ZF )
        if ( GameController::next(v3) == 1 )
          v46 = 0;
          while ( 2 )
          {
            GameController::getNextEvent((GameController *)&v47, (int)v3);
            switch ( v47 )
            {
              case 0:
                if ( *(_BYTE *)(v6 + 25) )
                {
                  v16 = *(_DWORD *)(v6 + 24);
                  v17 = 0;
                  if ( !(_BYTE)v16 )
                    v17 = 1;
                  if ( ((unsigned __int8)v17 | v46) & 1 )
                  {
                    GameControllerMapper::handleButtonEvent(_R10, (int)v5, (int)v48, *(_DWORD *)(v6 + 28), v49);
                    v46 = 0;
                    goto def_1428FC4;
                  }
                  if ( !(v16 & 0xFF00) && v16 & 0xFF0000 )
LABEL_35:
                    v21 = *(_DWORD *)(v6 + 28);
LABEL_37:
                    GameControllerMapper::handleButtonEvent(_R10, (int)v5, (int)v48, v21, 0xFFFFFFFF);
                }
                else if ( *(_BYTE *)(v6 + 26) )
                  goto LABEL_35;
                v21 = v49;
                goto LABEL_37;
              case 1:
                if ( __PAIR__(*(_BYTE *)(v6 + 26), *(_BYTE *)(v6 + 25)) )
                  v18 = *(_DWORD *)(v6 + 28);
                else
                  v18 = v49;
                GameControllerMapper::handleStickEvent(_R10, (int)v5, v48, v18);
                goto def_1428FC4;
              case 2:
                GameControllerMapper::handleTriggerEvent(_R10, (int)v5, (int *)v48, v49);
              case 3:
                InputEventQueue::enqueueJoinGame(v5, v49, v48[0]);
                v19 = 0;
                goto LABEL_40;
              case 4:
                  InputEventQueue::enqueueChangeUser(v5, v49, v48[0]);
                  v20 = LOBYTE(v48[0]);
                  v19 = 0;
                  if ( v46 )
                    v20 = 1;
                  v46 = v20 != 0;
              case 5:
                GameControllerMapper::handleConnectionStateChangedEvent(
                  (GameControllerMapper *)_R10,
                  v5,
                  LOBYTE(v48[0]),
                  v49);
              default:
def_1428FC4:
                if ( v49 == *(_DWORD *)(v6 + 28) )
                  v19 = 1;
LABEL_40:
                v9 |= v19;
                if ( GameController::next(v3) )
                  continue;
                v7 = v45;
                if ( !v10 )
                  goto LABEL_58;
                goto LABEL_44;
            }
          }
        v7 = v45;
LABEL_44:
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v12);
        while ( __strex(v22 - 1, v12) );
      else
        v22 = (*v12)--;
      if ( v22 == 1 )
        v23 = v7;
        v3 = (GameController *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
          do
            v24 = __ldrex((unsigned int *)v3);
          while ( __strex(v24 - 1, (unsigned int *)v3) );
        else
          v24 = (*(_DWORD *)v3)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
        v7 = v23;
    }
LABEL_58:
    v8 += 8;
  }
  v25 = *(_QWORD *)(_R10 + 40);
  v26 = HIDWORD(v25) & 0x7FFFFFFF;
  v27 = (_DWORD)v25 == 0;
  if ( !(_DWORD)v25 )
    v27 = v26 == 0;
  if ( v27 )
    _R0 = getTimeS();
    __asm
      VMOV            D0, R0, R1
      VSTR            D0, [R10,#0x28]
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VLDR            D1, [R10,#0x28]
    VSTR            D0, [R10,#0x28]
  v33 = *(_QWORD *)(_R10 + 48);
  if ( (_DWORD)v33 != HIDWORD(v33) )
    __asm { VSUB.F64        D0, D0, D1 }
    v34 = (int *)(v33 + 12);
      VCVT.F32.F64    S0, D0
      VLDR            S2, =0.45
      VLDR            S18, =0.0
      VMUL.F32        S16, S0, S2
    do
      v36 = *((_BYTE *)v34 - 12);
      _R7 = (int)(v34 - 3);
      __asm
        VLDR            S2, [R7,#4]
        VLDR            S0, [R7,#8]
      v37 = 0LL;
      if ( _ZF )
        __asm
          VMOVEQ.F32      S0, S18
          VMOVEQ.F32      S2, S18
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, #0.0
        LODWORD(v37) = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        HIDWORD(v37) = 1;
      if ( v37 )
          VMOV            R2, S2
          VMOV            R3, S0
        InputEventQueue::enqueueDirection((int)v5, 1, _R2, _R3, 1, *v34, 0);
      v34 += 4;
    while ( _R7 + 16 != HIDWORD(v33) );
  v40 = *(_QWORD *)&v50;
  if ( v50 != v51 )
      v41 = *(_DWORD *)(v40 + 4);
      if ( v41 )
        v42 = (unsigned int *)(v41 + 8);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          (*(void (**)(void))(*(_DWORD *)v41 + 12))();
      LODWORD(v40) = v40 + 8;
    while ( (_DWORD)v40 != HIDWORD(v40) );
    LODWORD(v40) = v50;
  if ( (_DWORD)v40 )
    operator delete((void *)v40);
  return v9 & 1;
}


unsigned int __fastcall GameControllerMapper::changeControllerId(GameControllerMapper *this, int a2, int a3)
{
  GameControllerMapper *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r7@1
  int v8; // r5@1
  unsigned int v9; // r1@1
  unsigned int result; // r0@1
  unsigned int v11; // r1@1
  unsigned int v12; // t0@1
  unsigned int v13; // r6@1
  void **v14; // r11@1
  void **v15; // r10@2
  void **v16; // r8@2
  int v17; // r5@2
  void *v18; // r9@4
  unsigned int v19; // r0@5
  int v20; // r1@5
  void *v21; // r4@8
  GameControllerMapper *v22; // r5@9
  int v23; // r1@10
  int v24; // r9@13
  int v25; // r1@14
  int v26; // r1@15
  char *v27; // [sp+0h] [bp-C0h]@1
  int v28; // [sp+4h] [bp-BCh]@1
  GameControllerMapper *v29; // [sp+8h] [bp-B8h]@1
  int v30; // [sp+Ch] [bp-B4h]@1
  unsigned int v31; // [sp+10h] [bp-B0h]@1
  char v32; // [sp+14h] [bp-ACh]@1

  v3 = this;
  v4 = (unsigned __int64 *)((char *)this + 60);
  v31 = a2;
  v29 = this;
  v30 = a3;
  v27 = (char *)this + 60;
  v5 = std::__detail::_Map_base<int,std::pair<int const,GameControllerMapper::GameControllerMappingData>,std::allocator<std::pair<int const,GameControllerMapper::GameControllerMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)((char *)this + 60),
         (unsigned int *)&v30);
  v6 = std::__detail::_Map_base<int,std::pair<int const,GameControllerMapper::GameControllerMappingData>,std::allocator<std::pair<int const,GameControllerMapper::GameControllerMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         v4,
         &v31);
  GameControllerMapper::GameControllerMappingData::GameControllerMappingData((int)&v32, v5);
  GameControllerMapper::GameControllerMappingData::operator=(v5, v6);
  GameControllerMapper::GameControllerMappingData::operator=(v6, (int)&v32);
  GameControllerMapper::GameControllerMappingData::~GameControllerMappingData((GameControllerMapper::GameControllerMappingData *)&v32);
  v7 = *((_DWORD *)v3 + 16);
  v8 = *((_DWORD *)v3 + 15);
  v9 = *((_DWORD *)v3 + 16);
  v28 = *((_DWORD *)v3 + 15);
  v12 = v31 / v9;
  v11 = v31 % v9;
  result = v12;
  v13 = v11;
  v14 = *(void ***)(v8 + 4 * v11);
  if ( v14 )
  {
    v15 = (void **)*v14;
    v16 = *(void ***)(v8 + 4 * v11);
    v17 = *((_DWORD *)*v14 + 1);
    while ( v31 != v17 )
    {
      v18 = *v15;
      if ( *v15 )
      {
        v17 = *((_DWORD *)v18 + 1);
        v19 = *((_DWORD *)v18 + 1);
        v20 = v19 % v7;
        result = v19 / v7;
        v16 = v15;
        v15 = (void **)*v15;
        if ( v20 == v13 )
          continue;
      }
      return result;
    }
    if ( v16 )
      v21 = *v16;
      if ( v14 != v16 )
        v22 = v29;
        if ( *(_DWORD *)v21 )
        {
          v23 = *(_DWORD *)(*(_DWORD *)v21 + 4) % v7;
          if ( v23 != v13 )
            *(_DWORD *)(v28 + 4 * v23) = v16;
        }
        goto LABEL_20;
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v25 = *(_DWORD *)(v24 + 4) % v7;
        if ( v25 == v13 )
LABEL_20:
          *v16 = *(void **)v21;
          GameControllerMapper::GameControllerMappingData::~GameControllerMappingData((GameControllerMapper::GameControllerMappingData *)((char *)v21 + 8));
          operator delete(v21);
          result = *((_DWORD *)v22 + 18) - 1;
          *((_DWORD *)v22 + 18) = result;
          return result;
        *(_DWORD *)(v28 + 4 * v25) = v14;
        v26 = *(_DWORD *)v27;
        v14 = *(void ***)(*(_DWORD *)v27 + 4 * v13);
      else
        v26 = v28;
      if ( (void **)((char *)v22 + 68) == v14 )
        *v14 = (void *)v24;
      *(_DWORD *)(v26 + 4 * v13) = 0;
      goto LABEL_20;
  }
  return result;
}


int __fastcall GameControllerMapper::tickTurn(GameControllerMapper *this, InputEventQueue *a2)
{
  InputEventQueue *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r1@1
  int result; // r0@6
  int v13; // r5@6
  __int64 v14; // kr00_8@6
  int *v15; // r6@7
  char v17; // t1@8
  __int64 v18; // r0@8

  _R5 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 5);
  v5 = HIDWORD(v4) & 0x7FFFFFFF;
  _ZF = (_DWORD)v4 == 0;
  if ( !(_DWORD)v4 )
    _ZF = v5 == 0;
  if ( _ZF )
  {
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VSTR            D0, [R5,#0x28]
    }
  }
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VLDR            D1, [R5,#0x28]
    VSTR            D0, [R5,#0x28]
  v14 = *((_QWORD *)_R5 + 6);
  v13 = *((_QWORD *)_R5 + 6) >> 32;
  result = v14;
  if ( (_DWORD)v14 != v13 )
    __asm { VSUB.F64        D0, D0, D1 }
    v15 = (int *)(v14 + 12);
      VCVT.F32.F64    S0, D0
      VLDR            S2, =0.45
      VLDR            S18, =0.0
      VMUL.F32        S16, S0, S2
    do
      v17 = *((_BYTE *)v15 - 12);
      _R7 = (int)(v15 - 3);
      __asm
      {
        VLDR            S2, [R7,#4]
        VLDR            S0, [R7,#8]
      }
      v18 = 0LL;
      if ( _ZF )
        __asm
        {
          VMOVEQ.F32      S0, S18
          VMOVEQ.F32      S2, S18
        }
        VMUL.F32        S0, S16, S0
        VMUL.F32        S2, S16, S2
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, #0.0
      if ( !_ZF )
        LODWORD(v18) = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        HIDWORD(v18) = 1;
      if ( v18 )
          VMOV            R2, S2
          VMOV            R3, S0
        InputEventQueue::enqueueDirection((int)v3, 1, _R2, _R3, 1, *v15, 0);
      v15 += 4;
      result = _R7 + 16;
    while ( _R7 + 16 != v13 );
  return result;
}


InputDeviceMapper *__fastcall GameControllerMapper::GameControllerMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  InputDeviceMapper *result; // r0@4

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  HIDWORD(v2) = 10;
  *(_DWORD *)v1 = &off_26E88EC;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 19) = 1065353216;
  LODWORD(v2) = (char *)v1 + 76;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 16) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 21) = 0;
    v5 = (char *)v1 + 84;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  result = v1;
  *((_DWORD *)v1 + 15) = v5;
  return result;
}


void __fastcall GameControllerMapper::setMapping(GameControllerMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  unsigned __int64 *v6; // r10@1
  unsigned __int64 *v7; // r4@1
  unsigned __int64 *v8; // r7@1
  unsigned int v9; // r0@1
  unsigned int v10; // r5@1
  void *v11; // r0@1
  int v12; // r6@1
  void *v13; // r5@2
  void *v14; // r0@3
  void *v15; // r4@4
  void *v16; // r0@5
  void *v17; // r5@6
  void *v18; // r0@7
  void *v19; // r4@8
  int v20; // r4@9
  int v21; // r6@9
  int v22; // r7@10
  int v23; // r5@11
  _DWORD *v24; // r0@11
  unsigned int v25; // r2@11
  void *v26; // r0@12
  void *v27; // r8@12
  int v28; // r9@12
  int v29; // r0@12
  int *v30; // r0@13
  int v31; // r1@13
  int v32; // r0@16
  int v33; // r0@22
  int v36; // r0@22
  int v37; // r0@29
  int v38; // r9@29
  _DWORD *v39; // r0@30
  int v40; // r3@30
  unsigned int v43; // r2@30
  int v45; // r4@32
  unsigned int v46; // r7@32
  _DWORD *v47; // r0@32
  int v48; // r11@33
  _DWORD *v49; // r8@33
  int v50; // r4@33
  _DWORD *v51; // r10@35
  int i; // r5@46
  int v55; // r10@46
  __int64 v56; // kr20_8@47
  int v57; // r6@47
  unsigned int v58; // r4@47
  _DWORD *v59; // r0@47
  int v60; // r3@47
  unsigned int v61; // r2@47
  signed int v62; // r0@47
  signed int v63; // r0@49
  char v64; // r0@51
  int v65; // r6@54
  int v66; // r11@54
  int v67; // r9@55
  int v68; // r5@56
  _DWORD *v69; // r0@56
  unsigned int v70; // r2@56
  void *v71; // r0@57
  void *v72; // r4@57
  int v73; // r7@57
  int v74; // r0@57
  int *v75; // r0@58
  int v76; // r1@58
  int v77; // r0@61
  int v78; // r0@67
  int v79; // r0@67
  void *v80; // r0@74
  void *v81; // r4@75
  unsigned __int64 *v82; // [sp+0h] [bp-60h]@9
  int v83; // [sp+4h] [bp-5Ch]@29
  int v84; // [sp+8h] [bp-58h]@1
  NameRegistry *v85; // [sp+10h] [bp-50h]@1
  unsigned __int64 *v86; // [sp+10h] [bp-50h]@46
  int v87; // [sp+14h] [bp-4Ch]@9
  void *v88; // [sp+18h] [bp-48h]@1
  unsigned int v89; // [sp+1Ch] [bp-44h]@1
  void *ptr; // [sp+20h] [bp-40h]@1
  int v91; // [sp+24h] [bp-3Ch]@1
  __int64 v92; // [sp+28h] [bp-38h]@1
  int v93; // [sp+30h] [bp-30h]@77
  int v94; // [sp+34h] [bp-2Ch]@1

  v6 = (unsigned __int64 *)a4;
  v85 = a4;
  v94 = a6;
  v7 = (unsigned __int64 *)((char *)this + 60);
  v8 = (unsigned __int64 *)(*(int (**)(void))(*(_DWORD *)this + 52))();
  v9 = std::__detail::_Map_base<int,std::pair<int const,GameControllerMapper::GameControllerMappingData>,std::allocator<std::pair<int const,GameControllerMapper::GameControllerMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         v7,
         (unsigned int *)&v94);
  v10 = v9;
  v88 = 0;
  v89 = *(_DWORD *)(v9 + 32);
  ptr = 0;
  v91 = *(_DWORD *)(v9 + 40);
  v92 = *(_QWORD *)(v9 + 44);
  v84 = v9 + 28;
  std::_Hashtable<int,std::pair<int const,GameControllerMapper::TriggerState>,std::allocator<std::pair<int const,GameControllerMapper::TriggerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_assign<std::_Hashtable<int,std::pair<int const,GameControllerMapper::TriggerState>,std::allocator<std::pair<int const,GameControllerMapper::TriggerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::(std::_Hashtable<int,std::pair<int const,GameControllerMapper::TriggerState>,std::allocator<std::pair<int const,GameControllerMapper::TriggerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,GameControllerMapper::TriggerState>,false> const*)#1}>(
    (unsigned int *)&v88,
    v9 + 28);
  v11 = *(void **)(v10 + 8);
  v12 = v10;
  if ( v11 )
  {
    do
    {
      v13 = *(void **)v11;
      operator delete(v11);
      v11 = v13;
    }
    while ( v13 );
  }
  _aeabi_memclr4(*(_QWORD *)v12, 4 * (*(_QWORD *)v12 >> 32));
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 12) = 0;
  v14 = *(void **)(v12 + 36);
  if ( v14 )
      v15 = *(void **)v14;
      operator delete(v14);
      v14 = v15;
    while ( v15 );
  _aeabi_memclr4(*(_QWORD *)(v12 + 28), 4 * (*(_QWORD *)(v12 + 28) >> 32));
  *(_DWORD *)(v12 + 36) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  v16 = *(void **)(v12 + 64);
  if ( v16 )
      v17 = *(void **)v16;
      operator delete(v16);
      v16 = v17;
    while ( v17 );
  _aeabi_memclr4(*(_QWORD *)(v12 + 56), 4 * (*(_QWORD *)(v12 + 56) >> 32));
  *(_DWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 68) = 0;
  v18 = *(void **)(v12 + 92);
  if ( v18 )
      v19 = *(void **)v18;
      operator delete(v18);
      v18 = v19;
    while ( v19 );
  v87 = v12;
  _aeabi_memclr4(*(_QWORD *)(v12 + 84), 4 * (*(_QWORD *)(v12 + 84) >> 32));
  *(_DWORD *)(v12 + 92) = 0;
  *(_DWORD *)(v12 + 96) = 0;
  v82 = v8;
  v21 = *v8 >> 32;
  v20 = *v8;
  if ( v20 != v21 )
    v22 = v87 + 116;
    while ( 1 )
      v23 = NameRegistry::getNameId(v6, (int **)v20);
      v24 = operator new(0xCu);
      *v24 = 0;
      v25 = *(_DWORD *)(v20 + 4);
      v24[1] = v25;
      *((_WORD *)v24 + 4) = v23;
      std::_Hashtable<int,std::pair<int const,short>,std::allocator<std::pair<int const,short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
        v87,
        0,
        v25,
        (int)v24);
      if ( *(_BYTE *)(v20 + 8) )
        break;
LABEL_28:
      v20 += 12;
      if ( v20 == v21 )
        goto LABEL_29;
    v26 = operator new(0x14u);
    v27 = v26;
    *((_WORD *)v26 + 8) = v23;
    v28 = v87 + 116;
    v29 = *(_DWORD *)(v87 + 120);
    if ( !v29 )
      goto LABEL_81;
      v28 = v29;
      v30 = (int *)(v29 + 12);
      v31 = *(_WORD *)(v28 + 16);
      if ( v23 < v31 )
        v30 = (int *)(v28 + 8);
      v29 = *v30;
    while ( v29 );
    v32 = v28;
    if ( v23 < v31 )
LABEL_81:
      if ( v28 == *(_DWORD *)(v87 + 124) )
        goto LABEL_20;
      v32 = sub_21D4858(v28);
    if ( *(_WORD *)(v32 + 16) >= v23 )
LABEL_25:
      operator delete(v27);
      goto LABEL_28;
LABEL_20:
    if ( v28 )
      if ( v22 == v28 )
      {
        v36 = 1;
      }
      else
        v33 = *(_WORD *)(v28 + 16);
        _VF = __OFSUB__(v23, v33);
        _NF = v23 - v33 < 0;
        v36 = 0;
        if ( _NF ^ _VF )
          v36 = 1;
      sub_21D4928(v36, (int)v27, v28, v22);
      ++*(_DWORD *)(v87 + 132);
    goto LABEL_25;
LABEL_29:
  v37 = v82[3] >> 32;
  v38 = v82[3];
  v83 = v82[3] >> 32;
  while ( v38 != v37 )
    _R8 = NameRegistry::getNameId(v6, (int **)v38);
    v45 = *(_QWORD *)(v38 + 4) >> 32;
    v46 = (unsigned int)*(_QWORD *)(v38 + 4) % v89;
    v47 = (_DWORD *)*((_DWORD *)v88 + v46);
    if ( v47 )
      v48 = _R8;
      v49 = (_DWORD *)*v47;
      v50 = *(_DWORD *)(*v47 + 4);
      while ( (unsigned int)*(_QWORD *)(v38 + 4) != v50 )
        v51 = (_DWORD *)*v49;
        if ( *v49 )
        {
          v50 = v51[1];
          v47 = v49;
          v49 = (_DWORD *)*v49;
          if ( v51[1] % v89 == v46 )
            continue;
        }
        _R5 = 0;
        v6 = (unsigned __int64 *)v85;
        _R8 = v48;
        goto LABEL_45;
      _ZF = v47 == 0;
      _R8 = v48;
      if ( v47 )
        v47 = (_DWORD *)*v47;
        _ZF = v47 == 0;
      if ( _ZF )
        _R5 = *((_BYTE *)v47 + 10);
      v6 = (unsigned __int64 *)v85;
LABEL_45:
      v45 = *(_QWORD *)(v38 + 4) >> 32;
    else
      _R5 = 0;
    v39 = operator new(0x10u);
    v40 = (int)v39;
    *v39 = 0;
    __asm { PKHBT.W         R0, R8, R5,LSL#16 }
    v43 = *(_DWORD *)(v38 + 4);
    *(_DWORD *)(v40 + 4) = v43;
    *(_DWORD *)(v40 + 12) = v45;
    *(_DWORD *)(v40 + 8) = _R0;
    std::_Hashtable<int,std::pair<int const,GameControllerMapper::TriggerState>,std::allocator<std::pair<int const,GameControllerMapper::TriggerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
      v84,
      0,
      v43,
      v40);
    v38 += 12;
    v37 = v83;
  v86 = v6;
  v55 = *(unsigned __int64 *)((char *)v82 + 12) >> 32;
  for ( i = *(unsigned __int64 *)((char *)v82 + 12); i != v55; i += 12 )
    v56 = *(_QWORD *)i;
    v57 = *((_DWORD *)v82 + 12);
    v58 = *(_WORD *)(i + 8);
    v59 = operator new(0x18u);
    v60 = (int)v59;
    *v59 = 0;
    v61 = *(_DWORD *)(i + 4);
    v62 = 1;
    *(_DWORD *)(v60 + 4) = v61;
    *(_DWORD *)(v60 + 8) = v56;
    if ( (_BYTE)v58 )
      v62 = -1;
    *(_DWORD *)(v60 + 12) = v62;
    v63 = 1;
    if ( v58 > 0xFF )
      v63 = -1;
    *(_DWORD *)(v60 + 16) = v63;
    v64 = 0;
    if ( HIDWORD(v56) == v57 )
      v64 = 1;
    *(_BYTE *)(v60 + 20) = v64;
    std::_Hashtable<int,std::pair<int const,GameControllerMapper::DirectionAttributes>,std::allocator<std::pair<int const,GameControllerMapper::DirectionAttributes>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
      v87 + 56,
      v61,
      v60);
  v66 = *(unsigned __int64 *)((char *)v82 + 36) >> 32;
  v65 = *(unsigned __int64 *)((char *)v82 + 36);
  if ( v65 != v66 )
    v67 = v87 + 116;
      v68 = NameRegistry::getNameId(v86, (int **)(v65 + 8));
      v69 = operator new(0xCu);
      *v69 = 0;
      v70 = *(_DWORD *)(v65 + 4);
      v69[1] = v70;
      *((_WORD *)v69 + 4) = v68;
        v87 + 84,
        v70,
        (int)v69);
      if ( *(_BYTE *)(v65 + 12) )
LABEL_73:
      v65 += 16;
      if ( v65 == v66 )
        goto LABEL_74;
    v71 = operator new(0x14u);
    v72 = v71;
    v73 = v87 + 116;
    *((_WORD *)v71 + 8) = v68;
    v74 = *(_DWORD *)(v87 + 120);
    if ( !v74 )
      goto LABEL_82;
      v73 = v74;
      v75 = (int *)(v74 + 12);
      v76 = *(_WORD *)(v73 + 16);
      if ( v68 < v76 )
        v75 = (int *)(v73 + 8);
      v74 = *v75;
    while ( v74 );
    v77 = v73;
    if ( v68 < v76 )
LABEL_82:
      if ( v73 == *(_DWORD *)(v87 + 124) )
        goto LABEL_65;
      v77 = sub_21D4858(v73);
    if ( *(_WORD *)(v77 + 16) >= v68 )
LABEL_70:
      operator delete(v72);
      goto LABEL_73;
LABEL_65:
    if ( v73 )
      if ( v67 == v73 )
        v79 = 1;
        v78 = *(_WORD *)(v73 + 16);
        _VF = __OFSUB__(v68, v78);
        _NF = v68 - v78 < 0;
        v79 = 0;
          v79 = 1;
      sub_21D4928(v79, (int)v72, v73, v67);
    goto LABEL_70;
LABEL_74:
  v80 = ptr;
  if ( ptr )
      v81 = *(void **)v80;
      operator delete(v80);
      v80 = v81;
    while ( v81 );
  _aeabi_memclr4(v88, 4 * v89);
  v91 = 0;
  if ( v88 && &v93 != v88 )
    operator delete(v88);
}


int __fastcall GameControllerMapper::GameControllerMappingData::GameControllerMappingData(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  unsigned int v6; // r1@1
  int v7; // r0@1
  _DWORD *v8; // r2@1
  int v9; // r6@5
  unsigned int v10; // r1@5
  int v11; // r0@5
  _DWORD *v12; // r2@5
  int v13; // r6@9
  unsigned int v14; // r1@9
  int v15; // r0@9
  _DWORD *v16; // r2@9
  int v17; // r6@13
  unsigned int v18; // r1@13
  int v19; // r0@13
  _DWORD *v20; // r2@13
  int v21; // r1@17
  int v22; // r2@17

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = a2 + 24;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v6;
  v7 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v2 + 16);
  v8 = *(_DWORD **)v2;
  if ( v5 == *(_DWORD *)v2 )
  {
    v4 = v3 + 24;
    *(_DWORD *)v3 = v3 + 24;
    *(_DWORD *)(v3 + 24) = *v8;
  }
  if ( v7 )
    *(_DWORD *)(v4 + 4 * (*(_DWORD *)(v7 + 4) % v6)) = v3 + 8;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)v2 = v5;
  *(_DWORD *)(v2 + 4) = 1;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v9 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v3 + 28) = v9;
  v10 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v3 + 32) = v10;
  v11 = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v3 + 36) = v11;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v2 + 40);
  *(_QWORD *)(v3 + 44) = *(_QWORD *)(v2 + 44);
  v12 = *(_DWORD **)(v2 + 28);
  if ( (_DWORD *)(v2 + 52) == v12 )
    v9 = v3 + 52;
    *(_DWORD *)(v3 + 28) = v3 + 52;
    *(_DWORD *)(v3 + 52) = *v12;
  if ( v11 )
    *(_DWORD *)(v9 + 4 * (*(_DWORD *)(v11 + 4) % v10)) = v3 + 36;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 28) = v2 + 52;
  *(_DWORD *)(v2 + 32) = 1;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  v13 = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(v3 + 56) = v13;
  v14 = *(_DWORD *)(v2 + 60);
  *(_DWORD *)(v3 + 60) = v14;
  v15 = *(_DWORD *)(v2 + 64);
  *(_DWORD *)(v3 + 64) = v15;
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(v2 + 68);
  *(_QWORD *)(v3 + 72) = *(_QWORD *)(v2 + 72);
  v16 = *(_DWORD **)(v2 + 56);
  if ( (_DWORD *)(v2 + 80) == v16 )
    v13 = v3 + 80;
    *(_DWORD *)(v3 + 56) = v3 + 80;
    *(_DWORD *)(v3 + 80) = *v16;
  if ( v15 )
    *(_DWORD *)(v13 + 4 * (*(_DWORD *)(v15 + 4) % v14)) = v3 + 64;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 56) = v2 + 80;
  *(_DWORD *)(v2 + 60) = 1;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  v17 = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(v3 + 84) = v17;
  v18 = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v3 + 88) = v18;
  v19 = *(_DWORD *)(v2 + 92);
  *(_DWORD *)(v3 + 92) = v19;
  *(_DWORD *)(v3 + 96) = *(_DWORD *)(v2 + 96);
  *(_QWORD *)(v3 + 100) = *(_QWORD *)(v2 + 100);
  v20 = *(_DWORD **)(v2 + 84);
  if ( (_DWORD *)(v2 + 108) == v20 )
    v17 = v3 + 108;
    *(_DWORD *)(v3 + 84) = v3 + 108;
    *(_DWORD *)(v3 + 108) = *v20;
  if ( v19 )
    *(_DWORD *)(v17 + 4 * (*(_DWORD *)(v19 + 4) % v18)) = v3 + 92;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 84) = v2 + 108;
  *(_DWORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  v21 = v3 + 116;
  *(_DWORD *)(v21 + 4) = 0;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 0;
  *(_DWORD *)(v21 + 16) = 0;
  *(_DWORD *)(v21 + 8) = v21;
  *(_DWORD *)(v21 + 12) = v21;
  v22 = *(_DWORD *)(v2 + 120);
  if ( v22 )
    *(_DWORD *)(v3 + 120) = v22;
    *(_DWORD *)(v3 + 124) = *(_DWORD *)(v2 + 124);
    *(_DWORD *)(v3 + 128) = *(_DWORD *)(v2 + 128);
    *(_DWORD *)(v22 + 4) = v21;
    *(_DWORD *)(v2 + 120) = 0;
    *(_DWORD *)(v2 + 124) = v2 + 116;
    *(_DWORD *)(v2 + 128) = v2 + 116;
    *(_DWORD *)(v3 + 132) = *(_DWORD *)(v2 + 132);
    *(_DWORD *)(v2 + 132) = 0;
  return v3;
}


void __fastcall GameControllerMapper::~GameControllerMapper(GameControllerMapper *this)
{
  GameControllerMapper *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3
  void *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E88EC;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      GameControllerMapper::GameControllerMappingData::~GameControllerMappingData((GameControllerMapper::GameControllerMappingData *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v4 = (char *)*((_DWORD *)v1 + 15);
  if ( v4 && (char *)v1 + 84 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 12);
  if ( v5 )
    operator delete(v5);
  InputDeviceMapper::~InputDeviceMapper(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
