

int __fastcall BinaryHeap::pop(BinaryHeap *this)
{
  BinaryHeap *v1; // lr@1
  signed int v2; // r3@1
  int *v3; // r1@1
  int v4; // r2@1
  int result; // r0@1
  int *v6; // r1@2
  int v7; // r3@2
  int v13; // r5@3

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v3 = *(int **)this;
  v4 = v2 - 1;
  result = **(_DWORD **)this;
  *((_DWORD *)v1 + 3) = v2 - 1;
  *v3 = v3[v2 - 1];
  *(_DWORD *)(*(_DWORD *)v1 + 4 * (v2 - 1)) = 0;
  if ( v2 >= 2 )
  {
    v6 = *(int **)v1;
    v7 = 0;
    _R12 = **(_DWORD **)v1;
    if ( v4 >= 2 )
    {
      __asm
      {
        VLDR            S0, [R12,#0x18]
        VLDR            S2, =3.4028e38
      }
      v13 = 1;
      do
        _R7 = v6[v13];
        __asm { VLDR            S4, [R7,#0x18] }
        if ( _NF ^ _VF )
        {
          _R4 = v6[v13 + 1];
          __asm { VLDR            S6, [R4,#0x18] }
        }
        else
          _R4 = 0;
          __asm { VMOV.F32        S6, S2 }
        __asm
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
          __asm
          {
            VCMPE.F32       S4, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
            break;
          v6[v7] = _R7;
          *(_DWORD *)(_R7 + 12) = v7;
          v7 = v13;
          if ( !_R4 )
            VCMPE.F32       S6, S0
          v6[v7] = _R4;
          *(_DWORD *)(_R4 + 12) = v7;
          v7 = v13 + 1;
        v6 = *(int **)v1;
        v13 = 2 * v7 | 1;
      while ( v13 < v4 );
    }
    v6[v7] = _R12;
    *(_DWORD *)(_R12 + 12) = v7;
  }
  *(_DWORD *)(result + 12) = -1;
  return result;
}


Node *__fastcall BinaryHeap::insert(BinaryHeap *this, Node *a2)
{
  BinaryHeap *v2; // r5@1
  Node *v3; // r8@1
  char *v4; // r0@1
  int v5; // r2@1
  int v6; // r1@1
  int v7; // r4@3
  int v8; // r7@4
  char *v9; // r6@4
  int v10; // r2@4
  int v11; // r3@7
  int v12; // r2@12
  char *v13; // r1@12
  int v19; // r3@14

  v2 = this;
  v3 = a2;
  v5 = *(_QWORD *)this >> 32;
  v4 = (char *)*(_QWORD *)this;
  v6 = *((_DWORD *)v2 + 3);
  if ( v6 == (v5 - (signed int)v4) >> 2 )
  {
    if ( 2 * v6 )
    {
      v7 = 2 * v6;
      if ( (unsigned int)(2 * v6) >= 0x40000000 )
        sub_21E57F4();
      v8 = 8 * v6;
      v9 = (char *)j_operator new(8 * v6);
      j___aeabi_memclr4((int)v9, v8);
      v4 = *(char **)v2;
      v10 = (int)&v9[4 * v7];
      v6 = *((_DWORD *)v2 + 3);
    }
    else
      v10 = 0;
      v9 = 0;
    if ( v6 > 0 )
      v11 = 0;
      do
      {
        *(_DWORD *)&v9[4 * v11] = *(_DWORD *)&v4[4 * v11];
        ++v11;
        v4 = *(char **)v2;
      }
      while ( v11 < v6 );
    *(_DWORD *)v2 = v9;
    *((_DWORD *)v2 + 1) = v10;
    *((_DWORD *)v2 + 2) = v10;
    if ( v4 )
      j_operator delete(v4);
      v4 = v9;
  }
  v12 = *((_DWORD *)v2 + 3);
  *(_DWORD *)&v4[4 * v12] = v3;
  *((_DWORD *)v3 + 3) = v12;
  *((_DWORD *)v2 + 3) = v12 + 1;
  v13 = *(char **)v2;
  _R0 = *(_DWORD *)(*(_DWORD *)v2 + 4 * v12);
  if ( v12 < 1 )
    v19 = v12;
  else
    __asm { VLDR            S0, [R0,#0x18] }
    while ( 1 )
      v19 = (v12 - 1) >> 1;
      _R7 = *(_DWORD *)&v13[4 * v19];
      __asm
        VLDR            S2, [R7,#0x18]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        break;
      *(_DWORD *)&v13[4 * v12] = _R7;
      *(_DWORD *)(_R7 + 12) = v12;
      v12 = (v12 - 1) >> 1;
      v13 = *(char **)v2;
      if ( v19 <= 0 )
        goto LABEL_19;
LABEL_19:
  *(_DWORD *)&v13[4 * v19] = _R0;
  *(_DWORD *)(_R0 + 12) = v19;
  return v3;
}


int __fastcall BinaryHeap::downHeap(int result, int a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r4@1

  v2 = *(_DWORD *)result;
  v3 = *(_DWORD *)(result + 12);
  v4 = 2 * a2 | 1;
  _R12 = *(_DWORD *)(*(_DWORD *)result + 4 * a2);
  if ( v4 < v3 )
  {
    __asm
    {
      VLDR            S0, [R12,#0x18]
      VLDR            S2, =3.4028e38
    }
    do
      _R6 = *(_DWORD *)(v2 + 4 * v4);
      __asm { VLDR            S4, [R6,#0x18] }
      if ( _NF ^ _VF )
      {
        _R7 = *(_DWORD *)(v2 + 4 * (v4 + 1));
        __asm { VLDR            S6, [R7,#0x18] }
      }
      else
        _R7 = 0;
        __asm { VMOV.F32        S6, S2 }
      __asm
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
        __asm
        {
          VCMPE.F32       S4, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          break;
        *(_DWORD *)(v2 + 4 * a2) = _R6;
        *(_DWORD *)(_R6 + 12) = a2;
        a2 = v4;
        if ( !_R7 )
          VCMPE.F32       S6, S0
        *(_DWORD *)(v2 + 4 * a2) = _R7;
        *(_DWORD *)(_R7 + 12) = a2;
        a2 = v4 + 1;
      v2 = *(_DWORD *)result;
      v4 = 2 * a2 | 1;
    while ( v4 < v3 );
  }
  *(_DWORD *)(v2 + 4 * a2) = _R12;
  *(_DWORD *)(_R12 + 12) = a2;
  return result;
}


int __fastcall BinaryHeap::clear(int result)
{
  *(_DWORD *)(result + 12) = 0;
  return result;
}


BinaryHeap *__fastcall BinaryHeap::~BinaryHeap(BinaryHeap *this)
{
  BinaryHeap *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = *(void **)this;
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


signed int __fastcall BinaryHeap::remove(BinaryHeap *this, Node *_R1)
{
  int v2; // lr@1
  int v3; // r4@1
  int v4; // r2@2
  int v10; // r3@5
  int v12; // r5@9
  signed int result; // r0@27

  v2 = *((_DWORD *)this + 3) - 1;
  *((_DWORD *)this + 3) = v2;
  v3 = *((_DWORD *)_R1 + 3);
  *(_DWORD *)(*(_DWORD *)this + 4 * v3) = *(_DWORD *)(*(_DWORD *)this + 4 * v2);
  *(_DWORD *)(*(_DWORD *)this + 4 * v2) = 0;
  if ( v2 > v3 )
  {
    v4 = *(_DWORD *)this;
    __asm { VLDR            S2, [R1,#0x18] }
    _R12 = *(_DWORD *)(*(_DWORD *)this + 4 * v3);
    __asm
    {
      VLDR            S0, [R12,#0x18]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      if ( v3 < 1 )
      {
        v10 = v3;
      }
      else
        while ( 1 )
        {
          v10 = (v3 - 1) >> 1;
          _R7 = *(_DWORD *)(v4 + 4 * v10);
          __asm
          {
            VLDR            S2, [R7,#0x18]
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
            break;
          *(_DWORD *)(v4 + 4 * v3) = _R7;
          *(_DWORD *)(_R7 + 12) = v3;
          v3 = (v3 - 1) >> 1;
          v4 = *(_DWORD *)this;
          if ( v10 <= 0 )
            goto LABEL_26;
        }
LABEL_26:
      *(_DWORD *)(v4 + 4 * v10) = _R12;
      *(_DWORD *)(_R12 + 12) = v10;
    else
      v12 = 2 * v3 | 1;
      if ( v12 < v2 )
        __asm { VLDR            S2, =3.4028e38 }
        do
          _R7 = *(_DWORD *)(v4 + 4 * v12);
          __asm { VLDR            S4, [R7,#0x18] }
          if ( _NF ^ _VF )
            _R3 = *(_DWORD *)(v4 + 4 * (v12 + 1));
            __asm { VLDR            S6, [R3,#0x18] }
          else
            _R3 = 0;
            __asm { VMOV.F32        S6, S2 }
            VCMPE.F32       S4, S6
            __asm
            {
              VCMPE.F32       S4, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !(_NF ^ _VF) )
              break;
            *(_DWORD *)(v4 + 4 * v3) = _R7;
            *(_DWORD *)(_R7 + 12) = v3;
            v3 = v12;
            if ( !_R3 )
              VCMPE.F32       S6, S0
            *(_DWORD *)(v4 + 4 * v3) = _R3;
            *(_DWORD *)(_R3 + 12) = v3;
            v3 = v12 + 1;
          v12 = 2 * v3 | 1;
        while ( v12 < v2 );
      *(_DWORD *)(v4 + 4 * v3) = _R12;
      *(_DWORD *)(_R12 + 12) = v3;
  }
  result = -1;
  *((_DWORD *)_R1 + 3) = -1;
  return result;
}


int __fastcall BinaryHeap::upHeap(int result, int a2)
{
  int v2; // lr@1
  int v8; // r4@2
  int v10; // r2@3

  v2 = *(_DWORD *)result;
  _R12 = *(_DWORD *)(*(_DWORD *)result + 4 * a2);
  if ( a2 < 1 )
  {
    v10 = a2;
  }
  else
    __asm { VLDR            S0, [R12,#0x18] }
    v8 = (a2 - 1) >> 1;
    _R3 = *(_DWORD *)(v2 + 4 * v8);
    __asm
    {
      VLDR            S2, [R3,#0x18]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      do
      {
        *(_DWORD *)(v2 + 4 * a2) = _R3;
        v10 = v8;
        *(_DWORD *)(_R3 + 12) = a2;
        v2 = *(_DWORD *)result;
        if ( v8 < 1 )
          break;
        v8 = (v8 - 1) >> 1;
        a2 = v10;
        _R3 = *(_DWORD *)(v2 + 4 * v8);
        __asm
        {
          VLDR            S2, [R3,#0x18]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
      }
      while ( _NF ^ _VF );
    else
      v10 = a2;
  *(_DWORD *)(v2 + 4 * v10) = _R12;
  *(_DWORD *)(_R12 + 12) = v10;
  return result;
}


int __fastcall BinaryHeap::_init(BinaryHeap *this)
{
  BinaryHeap *v1; // r4@1
  char *v2; // r5@1
  void *v3; // r0@1
  bool v4; // zf@1
  int result; // r0@3

  v1 = this;
  v2 = (char *)j_operator new(0x1000u);
  j___aeabi_memclr4((int)v2, 4096);
  v3 = *(void **)v1;
  v4 = *(_DWORD *)v1 == 0;
  *(_DWORD *)v1 = v2;
  *((_DWORD *)v1 + 1) = v2 + 4096;
  *((_DWORD *)v1 + 2) = v2 + 4096;
  if ( !v4 )
    j_operator delete(v3);
  result = 0;
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


int __fastcall BinaryHeap::changeCost(int result, Node *_R1, float _R2)
{
  int v7; // r1@1
  int v8; // r3@1
  int v10; // r2@3
  int v12; // r2@7
  int v13; // r4@7

  __asm
  {
    VLDR            S2, [R1,#0x18]
    VMOV            S4, R2
  }
  *((float *)_R1 + 6) = _R2;
  v7 = *((_DWORD *)_R1 + 3);
  __asm { VCMPE.F32       S2, S4 }
  v8 = *(_DWORD *)result;
  __asm { VMRS            APSR_nzcv, FPSCR }
  _R12 = *(_DWORD *)(*(_DWORD *)result + 4 * v7);
  __asm { VLDR            S0, [R12,#0x18] }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = *(_DWORD *)(result + 12);
    v13 = 2 * v7 | 1;
    if ( v13 < v12 )
    {
      __asm { VLDR            S2, =3.4028e38 }
      do
      {
        _R6 = *(_DWORD *)(v8 + 4 * v13);
        __asm { VLDR            S4, [R6,#0x18] }
        if ( _NF ^ _VF )
        {
          _R7 = *(_DWORD *)(v8 + 4 * (v13 + 1));
          __asm { VLDR            S6, [R7,#0x18] }
        }
        else
          _R7 = 0;
          __asm { VMOV.F32        S6, S2 }
        __asm
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
          __asm
          {
            VCMPE.F32       S4, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
            break;
          *(_DWORD *)(v8 + 4 * v7) = _R6;
          *(_DWORD *)(_R6 + 12) = v7;
          v7 = v13;
          if ( !_R7 )
            VCMPE.F32       S6, S0
          *(_DWORD *)(v8 + 4 * v7) = _R7;
          *(_DWORD *)(_R7 + 12) = v7;
          v7 = v13 + 1;
        v8 = *(_DWORD *)result;
        v13 = 2 * v7 | 1;
      }
      while ( v13 < v12 );
    }
    *(_DWORD *)(v8 + 4 * v7) = _R12;
    *(_DWORD *)(_R12 + 12) = v7;
  else
    if ( v7 < 1 )
      v10 = v7;
    else
      while ( 1 )
        v10 = (v7 - 1) >> 1;
        _R7 = *(_DWORD *)(v8 + 4 * v10);
          VLDR            S2, [R7,#0x18]
          VCMPE.F32       S0, S2
        if ( !(_NF ^ _VF) )
          break;
        *(_DWORD *)(v8 + 4 * v7) = _R7;
        *(_DWORD *)(_R7 + 12) = v7;
        v7 = (v7 - 1) >> 1;
        if ( v10 <= 0 )
          goto LABEL_24;
LABEL_24:
    *(_DWORD *)(v8 + 4 * v10) = _R12;
    *(_DWORD *)(_R12 + 12) = v10;
  return result;
}


int __fastcall BinaryHeap::BinaryHeap(int a1)
{
  int v1; // r4@1
  char *v2; // r5@1
  void *v3; // r0@1
  bool v4; // zf@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v2 = (char *)j_operator new(0x1000u);
  j___aeabi_memclr4((int)v2, 4096);
  v3 = *(void **)v1;
  v4 = *(_DWORD *)v1 == 0;
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 4) = v2 + 4096;
  *(_DWORD *)(v1 + 8) = v2 + 4096;
  if ( !v4 )
    j_operator delete(v3);
  *(_DWORD *)(v1 + 12) = 0;
  return v1;
}


signed int __fastcall BinaryHeap::isEmpty(BinaryHeap *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall BinaryHeap::peek(BinaryHeap *this)
{
  return **(_DWORD **)this;
}
