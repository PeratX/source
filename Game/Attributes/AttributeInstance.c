

int __fastcall AttributeInstance::getModifier(AttributeInstance *this, const mce::UUID *a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  _QWORD *v5; // r6@1
  AttributeInstance *v6; // r8@1
  _QWORD *v7; // r9@2
  char *v8; // r0@3
  int result; // r0@6
  int v10; // r3@7
  int v11; // r1@7
  int v12; // r2@7
  int v13; // r1@7
  int v14; // r3@7
  int v15; // r6@7
  int v16; // r7@7

  v4 = *(_QWORD *)((char *)a2 + 12) >> 32;
  v3 = *(_QWORD *)((char *)a2 + 12);
  v5 = (_QWORD *)a3;
  v6 = this;
  if ( v3 == v4 )
  {
LABEL_6:
    result = AttributeModifier::AttributeModifier((int)v6);
  }
  else
    v7 = (_QWORD *)(a3 + 8);
    while ( 1 )
    {
      v8 = AttributeModifier::getId((AttributeModifier *)v3);
      if ( *(_QWORD *)v8 == *v5 && *((_QWORD *)v8 + 1) == *v7 )
        break;
      v3 += 48;
      if ( v4 == v3 )
        goto LABEL_6;
    }
    v10 = (int)v6 + 4;
    *(_DWORD *)v6 = &off_26EC478;
    v11 = *(_DWORD *)(v3 + 8);
    v12 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)v10 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v10 + 4) = v11;
    *(_DWORD *)(v10 + 8) = v12;
    sub_21E8AF4((int *)v6 + 4, (int *)(v3 + 16));
    v13 = (int)v6 + 24;
    v14 = *(_DWORD *)(v3 + 28);
    v15 = *(_DWORD *)(v3 + 32);
    v16 = *(_DWORD *)(v3 + 36);
    *(_DWORD *)v13 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v13 + 4) = v14;
    *(_DWORD *)(v13 + 8) = v15;
    *(_DWORD *)(v13 + 12) = v16;
    result = *(_BYTE *)(v3 + 40);
    *((_BYTE *)v6 + 40) = result;
  return result;
}


void __fastcall AttributeInstance::removeModifier(AttributeInstance *this, const AttributeModifier *a2)
{
  AttributeInstance::removeModifier(this, a2);
}


void __fastcall AttributeInstance::removeModifiers(AttributeInstance *this)
{
  int v2; // r2@1
  int v3; // r3@1
  __int64 v4; // kr00_8@1
  const AttributeModifier *v5; // r4@2
  const AttributeModifier *v6; // r6@2
  void (__fastcall *v12)(const AttributeModifier *, int, int); // r9@7
  _DWORD **v14; // r0@8
  const AttributeModifier *v15; // r4@8
  int v16; // r5@9
  _DWORD **v17; // r0@14
  int v18; // r4@15
  char v19; // [sp+10h] [bp-50h]@7
  void *ptr; // [sp+20h] [bp-40h]@2
  const AttributeModifier *v21; // [sp+24h] [bp-3Ch]@2
  int v22; // [sp+2Ch] [bp-34h]@1
  int v23; // [sp+30h] [bp-30h]@1

  _R5 = this;
  AttributeInstance::getModifiers((AttributeInstance *)&v22, (int)this);
  v4 = *(_QWORD *)&v22;
  if ( v23 != v22 )
  {
    std::vector<AttributeModifier,std::allocator<AttributeModifier>>::vector((int)&ptr, (unsigned __int64 *)&v22);
    v5 = v21;
    v6 = (const AttributeModifier *)ptr;
    if ( ptr != (void *)v21 )
    {
      do
      {
        AttributeInstance::removeModifier(_R5, v6);
        v6 = (const AttributeModifier *)((char *)v6 + 48);
      }
      while ( v5 != v6 );
    }
    __asm { VLDR            S16, [R5,#0x4C] }
    _R8 = AttributeInstance::_calculateValue(_R5);
    __asm
      VMOV            S0, R8
      VCMPE.F32       S16, S0
      VSTR            S0, [R5,#0x4C]
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      v6 = (const AttributeModifier *)*((_DWORD *)_R5 + 12);
      _ZF = v6 == 0;
      v12 = *(void (__fastcall **)(const AttributeModifier *, int, int))(*(_DWORD *)v6 + 16);
      AttributeBuffInfo::AttributeBuffInfo((int)&v19, 10);
      __asm { VMOV            R1, S16 }
      v12(v6, _R1, _R8);
    BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)_R5 + 1), _R5);
    v15 = v21;
    v14 = (_DWORD **)ptr;
        v16 = (int)(v14 + 12);
        ((void (__cdecl *)(_DWORD **, _DWORD, int, int))**v14)(v14, **v14, v2, v3);
        v14 = (_DWORD **)v16;
      while ( v15 != (const AttributeModifier *)v16 );
      v14 = (_DWORD **)ptr;
    if ( v14 )
      operator delete(v14);
  }
  if ( (_DWORD)v4 != HIDWORD(v4) )
    v17 = (_DWORD **)v4;
    do
      v18 = (int)(v17 + 12);
      ((void (__cdecl *)(_DWORD **, _DWORD, int, int))**v17)(v17, **v17, v2, v3);
      v17 = (_DWORD **)v18;
    while ( HIDWORD(v4) != v18 );
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
}


void __fastcall AttributeInstance::removeModifier(AttributeInstance *a1, const AttributeModifier **a2)
{
  AttributeInstance::removeModifier(a1, a2);
}


char *__fastcall AttributeInstance::getModifiers(AttributeInstance *this, int a2, int a3)
{
  AttributeInstance *v3; // r11@1
  char *result; // r0@1
  char *v5; // r9@1
  int i; // r6@1
  int v7; // r10@1
  __int64 v8; // kr08_8@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@4
  int v12; // r1@4
  int v13; // r3@4
  int v14; // r4@4
  int v15; // r7@4

  v3 = this;
  result = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  v5 = (char *)a3;
  *((_DWORD *)v3 + 2) = 0;
  v7 = *(_QWORD *)(a2 + 12) >> 32;
  for ( i = *(_QWORD *)(a2 + 12); v7 != i; i += 48 )
  {
    result = (char *)AttributeModifier::getOperation((AttributeModifier *)i);
    if ( result == v5 )
    {
      v8 = *(_QWORD *)((char *)v3 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        result = std::vector<AttributeModifier,std::allocator<AttributeModifier>>::_M_emplace_back_aux<AttributeModifier const&>(
                   (unsigned __int64 *)v3,
                   i);
      }
      else
        *(_DWORD *)v8 = &off_26EC478;
        v9 = *(_DWORD *)(i + 8);
        v10 = *(_DWORD *)(i + 12);
        v11 = v8 + 4;
        *(_DWORD *)v11 = *(_DWORD *)(i + 4);
        *(_DWORD *)(v11 + 4) = v9;
        *(_DWORD *)(v11 + 8) = v10;
        sub_21E8AF4((int *)(v8 + 16), (int *)(i + 16));
        v12 = v8 + 24;
        v13 = *(_DWORD *)(i + 28);
        v14 = *(_DWORD *)(i + 32);
        v15 = *(_DWORD *)(i + 36);
        *(_DWORD *)v12 = *(_DWORD *)(i + 24);
        *(_DWORD *)(v12 + 4) = v13;
        *(_DWORD *)(v12 + 8) = v14;
        *(_DWORD *)(v12 + 12) = v15;
        *(_BYTE *)(v8 + 40) = *(_BYTE *)(i + 40);
        result = (char *)(v8 + 48);
        *((_DWORD *)v3 + 1) = v8 + 48;
    }
  }
  return result;
}


int __fastcall AttributeInstance::removeBuffs(int result)
{
  int v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r7@3

  v1 = result;
  *(_QWORD *)&v2 = *(_QWORD *)(result + 24);
  if ( v3 != v2 )
  {
    result = v2;
    do
    {
      v4 = result + 72;
      (**(void (***)(void))result)();
      result = v4;
    }
    while ( v3 != v4 );
  }
  *(_DWORD *)(v1 + 28) = v2;
  return result;
}


signed int __fastcall AttributeInstance::hasModifier(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@2
  signed int result; // r0@5

  v3 = *(_QWORD *)(a1 + 12) >> 32;
  v2 = *(_QWORD *)(a1 + 12);
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    v4 = *a2;
    while ( AttributeModifier::operator==(v2, v4) != 1 )
    {
      v2 += 48;
      if ( v3 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


void __fastcall AttributeInstance::removeModifier(AttributeInstance *this, const AttributeModifier *a2)
{
  const AttributeModifier *v3; // r9@1
  int v4; // r6@1
  int v5; // r0@3
  int v6; // r1@3
  signed int v7; // r2@4
  int v8; // r5@5
  int v9; // r0@5
  int v10; // r7@6
  void (__fastcall *v16)(int, int, int); // r8@14
  char v18; // [sp+10h] [bp-38h]@14

  _R4 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 12);
  if ( v4 != *(_QWORD *)((char *)this + 12) >> 32 )
  {
    do
    {
      if ( AttributeModifier::operator==(v4, (int)v3) == 1 )
      {
        v5 = *((_DWORD *)_R4 + 4);
        v6 = v4 + 48;
        if ( v4 + 48 != v5 )
        {
          v7 = v5 - v6;
          v6 = *((_DWORD *)_R4 + 4);
          if ( v7 >= 1 )
          {
            v8 = -1431655765 * (v7 >> 4) + 1;
            v9 = v4;
            do
            {
              v10 = v9 + 48;
              AttributeModifier::operator=(v9, v9 + 48);
              --v8;
              v9 = v10;
            }
            while ( v8 > 1 );
            v6 = *((_DWORD *)_R4 + 4);
          }
        }
        *((_DWORD *)_R4 + 4) = v6 - 48;
        (**(void (***)(void))(v6 - 48))();
      }
      else
        v4 += 48;
    }
    while ( v4 != *((_DWORD *)_R4 + 4) );
  }
  __asm { VLDR            S16, [R4,#0x4C] }
  _R5 = AttributeInstance::_calculateValue(_R4);
  __asm { VMOV            S0, R5 }
  *((_DWORD *)_R4 + 19) = _R5;
  __asm
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    v4 = *((_DWORD *)_R4 + 12);
    _ZF = v4 == 0;
    v16 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 16);
    AttributeBuffInfo::AttributeBuffInfo((int)&v18, 10);
    __asm { VMOV            R1, S16 }
    v16(v4, _R1, _R5);
  BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)_R4 + 1), _R4);
}


void __fastcall AttributeInstance::addBuff(AttributeInstance *a1, const AttributeBuff **a2)
{
  j_j_j__ZN17AttributeInstance7addBuffERK13AttributeBuff_0(a1, *a2);
}


void __fastcall AttributeInstance::recalculateModifiers(AttributeInstance *this)
{
  AttributeInstance *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 19) = AttributeInstance::_calculateValue(this);
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)v1 + 1), v1);
}


unsigned int *__fastcall AttributeInstance::setDelegate(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 52);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 52);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 52) = v5;
  }
  return result;
}


void __fastcall AttributeInstance::resetToDefaultValue(AttributeInstance *this)
{
  *((_DWORD *)this + 19) = *((_DWORD *)this + 16);
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


void __fastcall AttributeInstance::resetToMaxValue(AttributeInstance *this)
{
  *((_DWORD *)this + 19) = *((_DWORD *)this + 18);
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


int __fastcall AttributeInstance::removeBuff(int a1, int *a2)
{
  int v2; // r7@1
  int v3; // r4@1
  int result; // r0@1
  int v5; // r6@2
  int v6; // r5@3
  signed int v7; // r0@4
  int v8; // r1@5
  int v9; // r7@7
  char v10; // r0@8
  int v11; // r1@8
  int v12; // r2@8
  int v13; // r3@8
  int v14; // r0@8

  v2 = *a2;
  v3 = a1;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)*a2 + 8))(*a2);
  if ( !result )
  {
    v5 = *(_DWORD *)(v3 + 24);
    while ( 1 )
    {
      result = *(_DWORD *)(v3 + 28);
      v6 = v5;
      if ( v5 == result )
        break;
      v7 = AttributeBuff::operator==(v5, v2);
      v5 += 72;
      if ( v7 == 1 )
      {
        v8 = *(_DWORD *)(v3 + 28);
        if ( v5 == v8 )
        {
          v8 = v6 + 72;
        }
        else if ( v8 - v5 >= 1 )
          v9 = 954437177 * ((v8 - v5) >> 3) + 1;
          do
          {
            AttributeBuff::operator=(v6, v5);
            v10 = *(_BYTE *)(v5 + 68);
            v11 = *(_DWORD *)(v5 + 56);
            v12 = *(_DWORD *)(v5 + 60);
            v13 = *(_DWORD *)(v5 + 64);
            --v9;
            v5 += 72;
            *(_BYTE *)(v6 + 68) = v10;
            v14 = v6 + 56;
            v6 += 72;
            *(_DWORD *)v14 = v11;
            *(_DWORD *)(v14 + 4) = v12;
            *(_DWORD *)(v14 + 8) = v13;
          }
          while ( v9 > 1 );
          v8 = *(_DWORD *)(v3 + 28);
        *(_DWORD *)(v3 + 28) = v8 - 72;
        return (**(int (***)(void))(v8 - 72))();
      }
    }
  }
  return result;
}


int __fastcall AttributeInstance::_sanitizeValue(AttributeInstance *this, float a2)
{
  __int64 v8; // kr00_8@1
  AttributeModifier *v9; // r7@2
  void (***v12)(void); // r0@8
  int v13; // r7@9
  int result; // r0@16
  AttributeModifier *v15; // [sp+4h] [bp-34h]@1
  AttributeModifier *v16; // [sp+8h] [bp-30h]@1

  _R5 = this;
  _R8 = a2;
  __asm { VLDR            S16, [R5,#0x48] }
  AttributeInstance::getModifiers((AttributeInstance *)&v15, (int)this, 3);
  v8 = *(_QWORD *)&v15;
  if ( v15 != v16 )
  {
    v9 = v15;
    do
    {
      _R0 = AttributeModifier::getAmount(v9);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R0 = AttributeModifier::getAmount(v9);
        __asm { VMOV            S16, R0 }
      v9 = (AttributeModifier *)((char *)v9 + 48);
    }
    while ( (AttributeModifier *)HIDWORD(v8) != v9 );
    if ( (_DWORD)v8 != HIDWORD(v8) )
      v12 = (void (***)(void))v8;
      do
        v13 = (int)(v12 + 12);
        (**v12)();
        v12 = (void (***)(void))v13;
      while ( HIDWORD(v8) != v13 );
  }
  __asm { VMOV            S18, R8 }
  if ( !_ZF )
    operator delete((void *)v8);
  __asm
    VLDR            S0, [R5,#0x44]
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S16, S18
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S18 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S0, S16 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall AttributeInstance::notify(AttributeInstance *this, int a2, __int64 a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 12);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall AttributeInstance::setRange(AttributeInstance *this, float a2, float a3, float a4)
{
  float v4; // r4@1
  AttributeInstance *v5; // r5@1
  char *v6; // r2@1

  v4 = a3;
  v5 = this;
  v6 = (char *)this + 56;
  *(float *)v6 = a2;
  *((float *)v6 + 1) = a4;
  *((float *)v6 + 2) = v4;
  *((float *)this + 17) = a2;
  *((float *)this + 18) = a4;
  *((_DWORD *)this + 19) = AttributeInstance::_sanitizeValue(this, *((float *)this + 19));
  BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)v5 + 1), v5);
  *((float *)v5 + 19) = v4;
}


int __fastcall AttributeInstance::_calculateValue(AttributeInstance *this)
{
  AttributeInstance *v1; // r8@1
  __int64 v2; // kr00_8@1
  AttributeModifier *v3; // r6@2
  void (***v10)(void); // r0@6
  int v11; // r5@7
  __int64 v12; // kr08_8@10
  AttributeModifier *v13; // r6@11
  int v16; // r0@12
  void (***v18)(void); // r0@15
  int v19; // r6@16
  __int64 v20; // kr10_8@19
  AttributeModifier *v21; // r6@20
  int v23; // r0@21
  void (***v25)(void); // r0@24
  int v26; // r5@25
  AttributeModifier *v28; // [sp+4h] [bp-64h]@19
  AttributeModifier *v29; // [sp+8h] [bp-60h]@19
  AttributeModifier *v30; // [sp+10h] [bp-58h]@10
  AttributeModifier *v31; // [sp+14h] [bp-54h]@10
  int v32; // [sp+1Ch] [bp-4Ch]@10
  int v33; // [sp+20h] [bp-48h]@10
  float v34; // [sp+24h] [bp-44h]@10
  AttributeModifier *v35; // [sp+28h] [bp-40h]@1
  AttributeModifier *v36; // [sp+2Ch] [bp-3Ch]@1
  int v37; // [sp+34h] [bp-34h]@1
  int v38; // [sp+38h] [bp-30h]@1
  float v39; // [sp+3Ch] [bp-2Ch]@1

  v1 = this;
  v37 = *((_DWORD *)this + 14);
  v38 = *((_DWORD *)this + 15);
  v39 = *((float *)this + 16);
  AttributeInstance::getModifiers((AttributeInstance *)&v35, (int)this, 0);
  v2 = *(_QWORD *)&v35;
  if ( v35 != v36 )
  {
    v3 = v35;
    do
    {
      _R7 = AttributeModifier::getAmount(v3);
      _R0 = &v37 + AttributeModifier::getOperand(v3);
      __asm { VMOV            S0, R7 }
      v3 = (AttributeModifier *)((char *)v3 + 48);
      __asm
      {
        VLDR            S2, [R0]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R0]
      }
    }
    while ( !_ZF );
    if ( (_DWORD)v2 != HIDWORD(v2) )
      v10 = (void (***)(void))v2;
      do
        v11 = (int)(v10 + 12);
        (**v10)();
        v10 = (void (***)(void))v11;
      while ( HIDWORD(v2) != v11 );
  }
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  v32 = v37;
  v33 = v38;
  v34 = v39;
  AttributeInstance::getModifiers((AttributeInstance *)&v30, (int)v1, 1);
  v12 = *(_QWORD *)&v30;
  if ( v30 != v31 )
    v13 = v30;
      _R0 = &v37 + AttributeModifier::getOperand(v13);
      __asm { VLDR            S16, [R0] }
      _R7 = AttributeModifier::getAmount(v13);
      v16 = AttributeModifier::getOperand(v13);
      _R0 = &v32 + v16;
      v13 = (AttributeModifier *)((char *)v13 + 48);
        VMUL.F32        S0, S0, S16
    if ( (_DWORD)v12 != HIDWORD(v12) )
      v18 = (void (***)(void))v12;
        v19 = (int)(v18 + 12);
        (**v18)();
        v18 = (void (***)(void))v19;
      while ( HIDWORD(v12) != v19 );
  if ( (_DWORD)v12 )
    operator delete((void *)v12);
  AttributeInstance::getModifiers((AttributeInstance *)&v28, (int)v1, 2);
  v20 = *(_QWORD *)&v28;
  if ( v28 != v29 )
    __asm { VMOV.F32        S16, #1.0 }
    v21 = v28;
      _R7 = AttributeModifier::getAmount(v21);
      v23 = AttributeModifier::getOperand(v21);
      _R0 = &v32 + v23;
      v21 = (AttributeModifier *)((char *)v21 + 48);
        VADD.F32        S0, S0, S16
        VMUL.F32        S0, S2, S0
    if ( (_DWORD)v20 != HIDWORD(v20) )
      v25 = (void (***)(void))v20;
        v26 = (int)(v25 + 12);
        (**v25)();
        v25 = (void (***)(void))v26;
      while ( HIDWORD(v20) != v26 );
  if ( (_DWORD)v20 )
    operator delete((void *)v20);
  *((_DWORD *)v1 + 17) = v32;
  *((_DWORD *)v1 + 18) = v33;
  return AttributeInstance::_sanitizeValue(v1, v34);
}


int __fastcall AttributeInstance::removeBuff(AttributeInstance *this, const AttributeBuff *a2)
{
  const AttributeBuff *v2; // r7@1
  AttributeInstance *v3; // r4@1
  int result; // r0@1
  int v5; // r6@2
  int v6; // r5@3
  signed int v7; // r0@4
  int v8; // r1@5
  int v9; // r7@7
  char v10; // r0@8
  int v11; // r1@8
  int v12; // r2@8
  int v13; // r3@8
  int v14; // r0@8

  v2 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(const AttributeBuff *))(*(_DWORD *)a2 + 8))(a2);
  if ( !result )
  {
    v5 = *((_DWORD *)v3 + 6);
    while ( 1 )
    {
      result = *((_DWORD *)v3 + 7);
      v6 = v5;
      if ( v5 == result )
        break;
      v7 = AttributeBuff::operator==(v5, (int)v2);
      v5 += 72;
      if ( v7 == 1 )
      {
        v8 = *((_DWORD *)v3 + 7);
        if ( v5 == v8 )
        {
          v8 = v6 + 72;
        }
        else if ( v8 - v5 >= 1 )
          v9 = 954437177 * ((v8 - v5) >> 3) + 1;
          do
          {
            AttributeBuff::operator=(v6, v5);
            v10 = *(_BYTE *)(v5 + 68);
            v11 = *(_DWORD *)(v5 + 56);
            v12 = *(_DWORD *)(v5 + 60);
            v13 = *(_DWORD *)(v5 + 64);
            --v9;
            v5 += 72;
            *(_BYTE *)(v6 + 68) = v10;
            v14 = v6 + 56;
            v6 += 72;
            *(_DWORD *)v14 = v11;
            *(_DWORD *)(v14 + 4) = v12;
            *(_DWORD *)(v14 + 8) = v13;
          }
          while ( v9 > 1 );
          v8 = *((_DWORD *)v3 + 7);
        *((_DWORD *)v3 + 7) = v8 - 72;
        return (**(int (***)(void))(v8 - 72))();
      }
    }
  }
  return result;
}


void __fastcall AttributeInstance::setMaxValue(AttributeInstance *this, float _R1)
{
  __asm { VMOV            S4, R1 }
  *((float *)this + 18) = _R1;
  *((float *)this + 15) = _R1;
  _R1 = this;
  __asm
  {
    VLDR            S0, [R2,#0x44]
    VLDR            S2, [R2,#0x4C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R2,#0x4C] }
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


char *__fastcall AttributeInstance::getModifiers(int a1, int a2, const void **a3)
{
  int v3; // r9@1
  char *result; // r0@1
  const void **v5; // r10@1
  int i; // r6@1
  int v7; // r11@1
  size_t v8; // r2@2
  __int64 v9; // kr08_8@4
  int v10; // r1@5
  int v11; // r2@5
  int v12; // r3@5
  int v13; // r1@5
  int v14; // r3@5
  int v15; // r5@5
  int v16; // r7@5

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(v3 + 8) = 0;
  v7 = *(_QWORD *)(a2 + 12) >> 32;
  for ( i = *(_QWORD *)(a2 + 12); v7 != i; i += 48 )
  {
    result = *(char **)AttributeModifier::getName((AttributeModifier *)i);
    v8 = *((_DWORD *)result - 3);
    if ( v8 == *((_DWORD *)*v5 - 3) )
    {
      result = (char *)memcmp(result, *v5, v8);
      if ( !result )
      {
        v9 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v9 == HIDWORD(v9) )
        {
          result = std::vector<AttributeModifier,std::allocator<AttributeModifier>>::_M_emplace_back_aux<AttributeModifier const&>(
                     (unsigned __int64 *)v3,
                     i);
        }
        else
          *(_DWORD *)v9 = &off_26EC478;
          v10 = *(_DWORD *)(i + 8);
          v11 = *(_DWORD *)(i + 12);
          v12 = v9 + 4;
          *(_DWORD *)v12 = *(_DWORD *)(i + 4);
          *(_DWORD *)(v12 + 4) = v10;
          *(_DWORD *)(v12 + 8) = v11;
          sub_21E8AF4((int *)(v9 + 16), (int *)(i + 16));
          v13 = v9 + 24;
          v14 = *(_DWORD *)(i + 28);
          v15 = *(_DWORD *)(i + 32);
          v16 = *(_DWORD *)(i + 36);
          *(_DWORD *)v13 = *(_DWORD *)(i + 24);
          *(_DWORD *)(v13 + 4) = v14;
          *(_DWORD *)(v13 + 8) = v15;
          *(_DWORD *)(v13 + 12) = v16;
          *(_BYTE *)(v9 + 40) = *(_BYTE *)(i + 40);
          result = (char *)(v9 + 48);
          *(_DWORD *)(v3 + 4) = v9 + 48;
      }
    }
  }
  return result;
}


void __fastcall AttributeInstance::addBuff(AttributeInstance *this, const AttributeBuff *a2)
{
  AttributeInstance::addBuff(this, a2);
}


unsigned __int64 *__fastcall AttributeInstance::addModifiers(AttributeInstance *this, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r9@1
  AttributeInstance *v3; // r8@1
  unsigned __int64 *result; // r0@1
  unsigned __int64 *i; // r7@1
  unsigned __int64 v6; // kr08_8@2
  unsigned int *v7; // r0@3
  unsigned int v8; // r2@5
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r4@15
  unsigned int v12; // r0@17

  v2 = a2;
  v3 = this;
  result = (unsigned __int64 *)(*a2 >> 32);
  for ( i = (unsigned __int64 *)*a2; i != result; result = (unsigned __int64 *)*((_DWORD *)v2 + 1) )
  {
    v6 = *i;
    if ( *i >> 32 )
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
    AttributeInstance::addModifier(v3, (const AttributeModifier *)v6);
    if ( HIDWORD(v6) )
      v9 = (unsigned int *)(HIDWORD(v6) + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(HIDWORD(v6) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
    ++i;
  }
  return result;
}


void __fastcall AttributeInstance::removeModifier(AttributeInstance *a1, const AttributeModifier **a2)
{
  j_j_j__ZN17AttributeInstance14removeModifierERK17AttributeModifier(a1, *a2);
}


int __fastcall AttributeInstance::_calculateValue(AttributeInstance *this, const AttributeBuff *a2)
{
  AttributeInstance *v2; // r4@1
  AttributeBuff *v3; // r5@1
  int v4; // r0@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 12);
  if ( v4 )
    _R0 = (*(int (**)(void))(*(_DWORD *)v4 + 20))();
  else
    _R0 = AttributeBuff::getAmount(a2);
  __asm { VMOV            S16, R0 }
  _R0 = (int)v2 + 4 * AttributeBuff::getOperand(v3);
  __asm
  {
    VLDR            S0, [R0,#0x44]
    VADD.F32        S0, S0, S16
    VSTR            S0, [R0,#0x44]
  }
  return j_j_j__ZN17AttributeInstance14_sanitizeValueEf(v2, *((float *)v2 + 19));
}


int __fastcall AttributeInstance::AttributeInstance(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r0@7
  int v8; // r1@7
  int v9; // r2@7
  int v10; // r3@7
  int v11; // r4@7
  int v12; // r5@7
  int v13; // r6@7
  int v14; // r7@7
  int result; // r0@7

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EC464;
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4);
  std::vector<AttributeModifier,std::allocator<AttributeModifier>>::vector(a1 + 12, (unsigned __int64 *)(a2 + 12));
  std::vector<TemporalAttributeBuff,std::allocator<TemporalAttributeBuff>>::vector(
    v2 + 24,
    (unsigned __int64 *)(v3 + 24));
  std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>>::vector(
    v2 + 36,
    (unsigned __int64 *)(v3 + 36));
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v4 = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(v2 + 52) = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v7 = v3 + 56;
  v8 = v2 + 56;
  v9 = *(_DWORD *)(v3 + 56);
  v10 = *(_DWORD *)(v3 + 60);
  v11 = *(_DWORD *)(v3 + 64);
  v12 = *(_DWORD *)(v3 + 68);
  v13 = *(_DWORD *)(v3 + 72);
  v14 = *(_DWORD *)(v7 + 20);
  result = v2;
  *(_DWORD *)v8 = v9;
  *(_DWORD *)(v8 + 4) = v10;
  *(_DWORD *)(v8 + 8) = v11;
  *(_DWORD *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  *(_DWORD *)(v8 + 20) = v14;
  return result;
}


void __fastcall AttributeInstance::~AttributeInstance(AttributeInstance *this)
{
  AttributeInstance::~AttributeInstance(this);
}


void __fastcall AttributeInstance::setDefaultValueOnly(AttributeInstance *this, float _R1)
{
  AttributeInstance::setDefaultValueOnly(this, _R1);
}


signed int __fastcall AttributeInstance::hasTemporalBuffs(AttributeInstance *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 3);
  result = 0;
  if ( HIDWORD(v1) != (_DWORD)v1 )
    result = 1;
  return result;
}


int *__fastcall AttributeInstance::getHandle(AttributeInstance *this, int a2)
{
  int *v2; // r5@1
  int *v3; // r0@1

  v2 = (int *)this;
  *(_DWORD *)this = &unk_28898CC;
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  v3 = (int *)Attribute::getName(*(Attribute **)(a2 + 8));
  return EntityInteraction::setInteractText(v2, v3);
}


void __fastcall AttributeInstance::registerListener(AttributeInstance *this, const AttributeInstance *a2)
{
  AttributeInstance *v2; // r4@1
  int *v3; // r0@1
  __int64 v4; // r0@1
  char *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  char *v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1

  v2 = this;
  v8 = (char *)&unk_28898CC;
  v9 = *((_DWORD *)a2 + 1);
  v3 = (int *)Attribute::getName(*((Attribute **)a2 + 2));
  EntityInteraction::setInteractText((int *)&v8, v3);
  v4 = *((_QWORD *)v2 + 5);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>>::_M_emplace_back_aux<AttributeInstanceHandle>(
      (unsigned __int64 *)((char *)v2 + 36),
      (int)&v8);
  }
  else
    *(_DWORD *)v4 = v8;
    v8 = (char *)&unk_28898CC;
    *(_DWORD *)(v4 + 4) = v9;
    *((_DWORD *)v2 + 10) = v4 + 8;
  v5 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


void __fastcall AttributeInstance::getModifiers(AttributeInstance *this, int a2)
{
  AttributeInstance::getModifiers(this, a2);
}


void __fastcall AttributeInstance::tick(AttributeInstance *this, int a2, signed int a3, int a4)
{
  AttributeInstance::tick(this, a2, a3, a4);
}


_DWORD *__fastcall AttributeInstance::AttributeInstance(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  *a1 = &off_26EC464;
  _aeabi_memclr4(a1 + 1, 76);
  return v1;
}


signed int __fastcall AttributeInstance::removeModifier(AttributeInstance *this, const mce::UUID *a2)
{
  const mce::UUID *v3; // r6@1
  AttributeModifier *v4; // r5@1
  char *v5; // r7@2
  char *v6; // r0@3
  __int64 v7; // r0@4
  signed int result; // r0@6
  AttributeModifier *v9; // r0@7
  int v10; // r1@7
  signed int v11; // r2@8
  int v12; // r7@9
  void (__fastcall *v18)(const mce::UUID *, int, int); // r4@15
  char v20; // [sp+10h] [bp-30h]@15

  _R8 = this;
  v3 = a2;
  v4 = (AttributeModifier *)*(_QWORD *)((char *)this + 12);
  if ( v4 == (AttributeModifier *)(*(_QWORD *)((char *)this + 12) >> 32) )
  {
LABEL_6:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      v6 = AttributeModifier::getId(v4);
      if ( *(_QWORD *)v6 == *(_QWORD *)v3 )
      {
        v7 = *((_QWORD *)v6 + 1);
        HIDWORD(v7) ^= *(_QWORD *)v5 >> 32;
        if ( v7 == (unsigned int)*(_QWORD *)v5 )
          break;
      }
      v4 = (AttributeModifier *)((char *)v4 + 48);
      if ( v4 == *((AttributeModifier **)_R8 + 4) )
        goto LABEL_6;
    }
    v9 = (AttributeModifier *)*((_DWORD *)_R8 + 4);
    v10 = (int)v4 + 48;
    if ( (AttributeModifier *)((char *)v4 + 48) != v9 )
      v11 = (signed int)v9 - v10;
      v10 = *((_DWORD *)_R8 + 4);
      if ( v11 >= 1 )
        v12 = -1431655765 * (v11 >> 4) + 1;
        do
        {
          v3 = (AttributeModifier *)((char *)v4 + 48);
          AttributeModifier::operator=((int)v4, (int)v4 + 48);
          --v12;
          v4 = (AttributeModifier *)((char *)v4 + 48);
        }
        while ( v12 > 1 );
        v10 = *((_DWORD *)_R8 + 4);
    *((_DWORD *)_R8 + 4) = v10 - 48;
    (**(void (***)(void))(v10 - 48))();
    __asm { VLDR            S16, [R8,#0x4C] }
    _R5 = AttributeInstance::_calculateValue(_R8);
    __asm { VMOV            S0, R5 }
    *((_DWORD *)_R8 + 19) = _R5;
    __asm
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      v3 = (const mce::UUID *)*((_DWORD *)_R8 + 12);
      _ZF = v3 == 0;
      v18 = *(void (__fastcall **)(const mce::UUID *, int, int))(*(_DWORD *)v3 + 16);
      AttributeBuffInfo::AttributeBuffInfo((int)&v20, 10);
      __asm { VMOV            R1, S16 }
      v18(v3, _R1, _R5);
    BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)_R8 + 1), _R8);
    result = 1;
  return result;
}


void __fastcall AttributeInstance::getModifiers(AttributeInstance *this, int a2)
{
  AttributeInstance *v2; // r4@1
  int v3; // r8@1
  __int64 v4; // kr00_8@1
  void (***v5)(void); // r0@2
  int v6; // r6@3
  __int64 v7; // kr08_8@6
  void (***v8)(void); // r0@7
  int v9; // r6@8
  __int64 v10; // kr10_8@11
  void (***v11)(void); // r0@12
  int v12; // r6@13
  __int64 v13; // kr18_8@16
  void (***v14)(void); // r0@17
  int v15; // r4@18
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  AttributeInstance::getModifiers((AttributeInstance *)&v16, a2, 0);
  v4 = *(_QWORD *)&v16;
  std::vector<AttributeModifier,std::allocator<AttributeModifier>>::_M_range_insert<__gnu_cxx::__normal_iterator<AttributeModifier*,std::vector<AttributeModifier,std::allocator<AttributeModifier>>>>(
    (int)v2,
    0,
    v16,
    v17);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = (void (***)(void))v4;
    do
    {
      v6 = (int)(v5 + 12);
      (**v5)();
      v5 = (void (***)(void))v6;
    }
    while ( HIDWORD(v4) != v6 );
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  AttributeInstance::getModifiers((AttributeInstance *)&v16, v3, 1);
  v7 = *(_QWORD *)&v16;
    *((_DWORD *)v2 + 1),
  if ( (_DWORD)v7 != HIDWORD(v7) )
    v8 = (void (***)(void))v7;
      v9 = (int)(v8 + 12);
      (**v8)();
      v8 = (void (***)(void))v9;
    while ( HIDWORD(v7) != v9 );
  if ( (_DWORD)v7 )
    operator delete((void *)v7);
  AttributeInstance::getModifiers((AttributeInstance *)&v16, v3, 2);
  v10 = *(_QWORD *)&v16;
  if ( (_DWORD)v10 != HIDWORD(v10) )
    v11 = (void (***)(void))v10;
      v12 = (int)(v11 + 12);
      (**v11)();
      v11 = (void (***)(void))v12;
    while ( HIDWORD(v10) != v12 );
  if ( (_DWORD)v10 )
    operator delete((void *)v10);
  AttributeInstance::getModifiers((AttributeInstance *)&v16, v3, 3);
  v13 = *(_QWORD *)&v16;
  if ( (_DWORD)v13 != HIDWORD(v13) )
    v14 = (void (***)(void))v13;
      v15 = (int)(v14 + 12);
      (**v14)();
      v14 = (void (***)(void))v15;
    while ( HIDWORD(v13) != v15 );
  if ( (_DWORD)v13 )
    operator delete((void *)v13);
}


void __fastcall AttributeInstance::setDefaultValueOnly(AttributeInstance *this, float _R1)
{
  _R2 = this;
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R2,#0x40]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VSTR            S0, [R2,#0x40] }
    j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


void __fastcall AttributeInstance::tick(AttributeInstance *this, int a2, signed int a3, int a4)
{
  int v5; // r0@1
  TemporalAttributeBuff *v6; // r5@1
  __int64 v7; // kr00_8@1
  int v12; // r3@4
  int v13; // r0@5
  int v14; // r11@5
  TemporalAttributeBuff *v16; // r0@8
  int v17; // r1@8
  int v18; // r6@10
  int v19; // r4@10
  int v20; // r1@11
  int v21; // r0@11
  int v23; // r7@15
  int v24; // r6@15
  int (__fastcall *v25)(int, int, int); // r8@16
  int v26; // r0@16
  __int64 v28; // kr08_8@18
  int v29; // r0@22
  char v30; // [sp+10h] [bp-50h]@16

  _R10 = this;
  v7 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 3) >> 32;
  v6 = (TemporalAttributeBuff *)v7;
  __asm { VLDR            S16, [R10,#0x4C] }
  _ZF = v5 == (_DWORD)v7;
  if ( v5 != (_DWORD)v7 )
    _ZF = (_DWORD)v7 == v5;
  if ( !_ZF )
  {
    do
    {
      TemporalAttributeBuff::tick(v6);
      if ( (*(int (__fastcall **)(TemporalAttributeBuff *))(*(_DWORD *)v6 + 20))(v6) == 1 )
      {
        v13 = *((_DWORD *)_R10 + 12);
        v14 = *((_DWORD *)_R10 + 7);
        __asm { VLDR            S18, [R10,#0x4C] }
        if ( v13 )
          _R0 = (*(int (__cdecl **)(int, TemporalAttributeBuff *, _DWORD, int))(*(_DWORD *)v13 + 20))(
                  v13,
                  v6,
                  *(_DWORD *)(*(_DWORD *)v13 + 20),
                  v12);
        else
          _R0 = AttributeBuff::getAmount(v6);
        __asm { VMOV            S20, R0 }
        _R0 = (int)_R10 + 4 * AttributeBuff::getOperand(v6);
        __asm
        {
          VLDR            S0, [R0,#0x44]
          VADD.F32        S0, S0, S20
          VSTR            S0, [R0,#0x44]
        }
        v23 = AttributeInstance::_sanitizeValue(_R10, *((float *)_R10 + 19));
        *((_DWORD *)_R10 + 19) = v23;
        v24 = *((_DWORD *)_R10 + 12);
        if ( v24 )
          v25 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v24 + 16);
          v26 = AttributeBuff::getType(v6);
          AttributeBuffInfo::AttributeBuffInfo((int)&v30, v26);
          __asm { VMOV            R1, S18 }
          if ( !v25(v24, _R1, v23) )
            __asm { VSTREQ          S18, [R10,#0x4C] }
        v28 = *((_QWORD *)_R10 + 3);
        if ( HIDWORD(v28) == (_DWORD)v28 || v14 != HIDWORD(v28) )
          break;
      }
      else if ( (*(int (__fastcall **)(TemporalAttributeBuff *))(*(_DWORD *)v6 + 24))(v6) == 1 )
        v16 = (TemporalAttributeBuff *)*((_DWORD *)_R10 + 7);
        v17 = (int)v6 + 72;
        if ( (TemporalAttributeBuff *)((char *)v6 + 72) != v16 )
          a3 = (signed int)v16 - v17;
          v17 = *((_DWORD *)_R10 + 7);
          if ( a3 >= 1 )
          {
            v18 = (int)v6;
            v19 = 954437177 * (a3 >> 3) + 1;
            do
            {
              AttributeBuff::operator=(v18, v18 + 72);
              --v19;
              v20 = *(_DWORD *)(v18 + 128);
              a3 = *(_DWORD *)(v18 + 132);
              a4 = *(_DWORD *)(v18 + 136);
              *(_BYTE *)(v18 + 68) = *(_BYTE *)(v18 + 140);
              v21 = v18 + 56;
              v18 += 72;
              *(_DWORD *)v21 = v20;
              *(_DWORD *)(v21 + 4) = a3;
              *(_DWORD *)(v21 + 8) = a4;
            }
            while ( v19 > 1 );
            v17 = *((_DWORD *)_R10 + 7);
          }
        *((_DWORD *)_R10 + 7) = v17 - 72;
        (**(void (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD))(v17 - 72))(v17 - 72, **(_DWORD **)(v17 - 72), a3, a4);
        continue;
      v6 = (TemporalAttributeBuff *)((char *)v6 + 72);
    }
    while ( v6 != *((TemporalAttributeBuff **)_R10 + 7) );
  }
  v29 = *((_DWORD *)_R10 + 12);
  if ( v29 )
    (*(void (__cdecl **)(int, _DWORD, signed int, int))(*(_DWORD *)v29 + 8))(
      v29,
      *(_DWORD *)(*(_DWORD *)v29 + 8),
      a3,
      a4);
  __asm
    VLDR            S0, [R10,#0x4C]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
    BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)_R10 + 1), _R10);
}


char *__fastcall AttributeInstance::serializationSetValue(AttributeInstance *this, float _R1, int a3, float _R3)
{
  char *result; // r0@1

  __asm { VMOV            S0, R3 }
  result = (char *)this + 4 * a3;
  __asm
  {
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VSTR            S2, [R0,#0x44] }
  return result;
}


void __fastcall AttributeInstance::~AttributeInstance(AttributeInstance *this)
{
  AttributeInstance *v1; // r0@1

  v1 = AttributeInstance::~AttributeInstance(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall AttributeInstance::addModifier(AttributeInstance *this, const AttributeModifier *a2)
{
  AttributeInstance::addModifier(this, a2);
}


void __fastcall AttributeInstance::setDefaultValue(AttributeInstance *this, float _R1, int a3)
{
  AttributeInstance *v3; // r3@1

  v3 = this;
  _R0 = (char *)this + 4 * a3;
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x38]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm
    {
      VSTR            S0, [R1]
      VSTR            S0, [R0,#0x44]
    }
    j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)v3 + 1), v3);
}


void __fastcall AttributeInstance::setRange(AttributeInstance *this, float a2, float a3, float a4)
{
  AttributeInstance::setRange(this, a2, a3, a4);
}


void __fastcall AttributeInstance::setMaxValue(AttributeInstance *this, float _R1)
{
  AttributeInstance::setMaxValue(this, _R1);
}


void __fastcall AttributeInstance::_setDirty(AttributeInstance *this)
{
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


void __fastcall AttributeInstance::recalculateModifiers(AttributeInstance *this)
{
  AttributeInstance::recalculateModifiers(this);
}


AttributeInstance *__fastcall AttributeInstance::~AttributeInstance(AttributeInstance *this)
{
  AttributeInstance *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void *v7; // r5@15
  void *v8; // r7@15
  unsigned int *v9; // r2@17
  signed int v10; // r1@19
  int *v11; // r0@25
  char *v12; // r0@30
  char *v13; // r5@30
  int v14; // r4@31
  char *v15; // r0@35
  char *v16; // r5@35
  int v17; // r4@36

  v1 = this;
  *(_DWORD *)this = &off_26EC464;
  v2 = *((_DWORD *)this + 13);
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
  v8 = (void *)(*(_QWORD *)((char *)v1 + 36) >> 32);
  v7 = (void *)*(_QWORD *)((char *)v1 + 36);
  if ( v7 != v8 )
    do
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 8;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 9);
  if ( v7 )
    operator delete(v7);
  v13 = (char *)(*((_QWORD *)v1 + 3) >> 32);
  v12 = (char *)*((_QWORD *)v1 + 3);
  if ( v12 != v13 )
      v14 = (int)(v12 + 72);
      (**(void (***)(void))v12)();
      v12 = (char *)v14;
    while ( v13 != (char *)v14 );
    v12 = (char *)*((_DWORD *)v1 + 6);
  if ( v12 )
    operator delete(v12);
  v16 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v15 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v15 != v16 )
      v17 = (int)(v15 + 48);
      (**(void (***)(void))v15)();
      v15 = (char *)v17;
    while ( v16 != (char *)v17 );
    v15 = (char *)*((_DWORD *)v1 + 3);
  if ( v15 )
    operator delete(v15);
  return v1;
}


void __fastcall AttributeInstance::resetToDefaultValue(AttributeInstance *this)
{
  AttributeInstance::resetToDefaultValue(this);
}


void __fastcall AttributeInstance::serializationSetRange(AttributeInstance *this, float a2, float a3, float a4)
{
  AttributeInstance *v4; // r4@1

  v4 = this;
  *((float *)this + 14) = a2;
  *((float *)this + 15) = a4;
  *((float *)this + 16) = a3;
  *((float *)this + 17) = a2;
  *((float *)this + 18) = a4;
  *((_DWORD *)this + 19) = AttributeInstance::_sanitizeValue(this, *((float *)this + 19));
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)v4 + 1), v4);
}


void __fastcall AttributeInstance::resetToMinValue(AttributeInstance *this)
{
  AttributeInstance::resetToMinValue(this);
}


void __fastcall AttributeInstance::addModifier(AttributeInstance *this, const AttributeModifier *a2)
{
  const AttributeModifier *v2; // r5@1
  AttributeInstance *v3; // r4@1
  __int64 v4; // r6@2
  int v5; // r3@7
  int v6; // r1@7
  int v7; // r2@7
  int v8; // r1@7
  int v9; // r3@7
  int v10; // r6@7
  int v11; // r7@7

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(const AttributeModifier *))(*(_DWORD *)a2 + 8))(a2) )
    goto LABEL_10;
  v4 = *(_QWORD *)((char *)v3 + 12);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
LABEL_6:
    if ( (_DWORD)v4 == *((_DWORD *)v3 + 5) )
    {
      std::vector<AttributeModifier,std::allocator<AttributeModifier>>::_M_emplace_back_aux<AttributeModifier const&>(
        (unsigned __int64 *)((char *)v3 + 12),
        (int)v2);
    }
    else
      v5 = v4 + 4;
      *(_DWORD *)v4 = &off_26EC478;
      v6 = *((_DWORD *)v2 + 2);
      v7 = *((_DWORD *)v2 + 3);
      *(_DWORD *)v5 = *((_DWORD *)v2 + 1);
      *(_DWORD *)(v5 + 4) = v6;
      *(_DWORD *)(v5 + 8) = v7;
      sub_21E8AF4((int *)(v4 + 16), (int *)v2 + 4);
      v8 = v4 + 24;
      v9 = *((_DWORD *)v2 + 7);
      v10 = *((_DWORD *)v2 + 8);
      v11 = *((_DWORD *)v2 + 9);
      *(_DWORD *)v8 = *((_DWORD *)v2 + 6);
      *(_DWORD *)(v8 + 4) = v9;
      *(_DWORD *)(v8 + 8) = v10;
      *(_DWORD *)(v8 + 12) = v11;
      *(_BYTE *)(v8 + 16) = *((_BYTE *)v2 + 40);
      *((_DWORD *)v3 + 4) += 48;
LABEL_10:
    *((_DWORD *)v3 + 19) = AttributeInstance::_calculateValue(v3);
    j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)v3 + 1), v3);
    return;
  }
  while ( !AttributeModifier::operator==(v4, (int)v2) )
    LODWORD(v4) = v4 + 48;
    if ( HIDWORD(v4) == (_DWORD)v4 )
      LODWORD(v4) = *((_DWORD *)v3 + 4);
      goto LABEL_6;
}


void __fastcall AttributeInstance::resetToMaxValue(AttributeInstance *this)
{
  AttributeInstance::resetToMaxValue(this);
}


void __fastcall AttributeInstance::addModifier(AttributeInstance *a1, const AttributeModifier **a2)
{
  AttributeInstance::addModifier(a1, a2);
}


void __fastcall AttributeInstance::addModifier(AttributeInstance *a1, const AttributeModifier **a2)
{
  j_j_j__ZN17AttributeInstance11addModifierERK17AttributeModifier(a1, *a2);
}


void __fastcall AttributeInstance::setDefaultValue(AttributeInstance *this, float _R1, int a3)
{
  AttributeInstance::setDefaultValue(this, _R1, a3);
}


void __fastcall AttributeInstance::resetToMinValue(AttributeInstance *this)
{
  *((_DWORD *)this + 19) = *((_DWORD *)this + 17);
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


void __fastcall AttributeInstance::registerListener(AttributeInstance *this, const AttributeInstance *a2)
{
  AttributeInstance::registerListener(this, a2);
}


void __fastcall AttributeInstance::addBuff(AttributeInstance *this, const AttributeBuff *a2)
{
  const AttributeBuff *v2; // r5@1
  int v4; // r0@2
  __int64 v10; // r0@4
  int v11; // r2@5
  int v12; // r3@5
  int v13; // r4@5
  int v14; // r6@5
  int v15; // r7@5
  int v16; // r1@5
  unsigned int *v17; // r1@6
  unsigned int v18; // r2@8
  int v21; // r7@11
  int (__fastcall *v22)(int, int, int); // r8@12
  int v24; // r1@19
  unsigned int *v25; // r1@20
  unsigned int v26; // r2@22
  int v27; // r2@25
  int v28; // r3@25
  int v29; // r7@25
  int v30; // r12@25
  int v31; // r2@25
  int v32; // r3@25
  int v33; // r7@25
  int v34; // r0@25
  char v35; // [sp+10h] [bp-40h]@12

  v2 = a2;
  _R9 = this;
  if ( (*(int (__fastcall **)(const AttributeBuff *))(*(_DWORD *)a2 + 8))(a2) == 1 )
  {
    v4 = *((_DWORD *)_R9 + 12);
    __asm { VLDR            S16, [R9,#0x4C] }
    if ( v4 )
      _R0 = (*(int (**)(void))(*(_DWORD *)v4 + 20))();
    else
      _R0 = AttributeBuff::getAmount(v2);
    __asm { VMOV            S18, R0 }
    _R0 = (int)_R9 + 4 * AttributeBuff::getOperand(v2);
    __asm
    {
      VLDR            S0, [R0,#0x44]
      VADD.F32        S0, S0, S18
      VSTR            S0, [R0,#0x44]
    }
    _R6 = AttributeInstance::_sanitizeValue(_R9, *((float *)_R9 + 19));
    *((_DWORD *)_R9 + 19) = _R6;
    __asm { VMOV            S0, R6 }
    v21 = *((_DWORD *)_R9 + 12);
    if ( v21 )
      v22 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v21 + 16);
      AttributeBuff::getInfo((AttributeBuff *)&v35, (int)v2);
      __asm { VMOV            R1, S16 }
      if ( v22(v21, _R1, _R6) == 1 )
      {
        __asm { VLDREQ          S0, [R9,#0x4C] }
      }
      else
        __asm
        {
          VSTRNE          S16, [R9,#0x4C]
          VMOVNE.F32      S0, S16
        }
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      BaseAttributeMap::onAttributeModified(*((BaseAttributeMap **)_R9 + 1), _R9);
  }
  else
    v10 = *(_QWORD *)((char *)_R9 + 28);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      j_j_j__ZNSt6vectorI21TemporalAttributeBuffSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
        (unsigned __int64 *)_R9 + 3,
        (int)v2);
      v11 = v10 + 4;
      *(_DWORD *)v10 = &off_26EC408;
      v12 = *((_DWORD *)v2 + 2);
      v13 = *((_DWORD *)v2 + 3);
      v14 = *((_DWORD *)v2 + 4);
      v15 = *((_DWORD *)v2 + 5);
      *(_DWORD *)v11 = *((_DWORD *)v2 + 1);
      *(_DWORD *)(v11 + 4) = v12;
      *(_DWORD *)(v11 + 8) = v13;
      *(_DWORD *)(v11 + 12) = v14;
      *(_DWORD *)(v11 + 16) = v15;
      *(_DWORD *)(v10 + 24) = *((_DWORD *)v2 + 6);
      HIDWORD(v10) = *((_DWORD *)v2 + 7);
      *(_DWORD *)(v10 + 28) = HIDWORD(v10);
      if ( HIDWORD(v10) )
        v17 = (unsigned int *)(v16 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 + 1, v17) );
        else
          ++*v17;
      *(_DWORD *)(v10 + 32) = *((_DWORD *)v2 + 8);
      HIDWORD(v10) = *((_DWORD *)v2 + 9);
      *(_DWORD *)(v10 + 36) = HIDWORD(v10);
        v25 = (unsigned int *)(v24 + 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 + 1, v25) );
          ++*v25;
      v27 = *((_DWORD *)v2 + 10);
      v28 = *((_DWORD *)v2 + 11);
      v29 = *((_DWORD *)v2 + 12);
      v30 = v10 + 40;
      *(_DWORD *)(v10 + 52) = *((_DWORD *)v2 + 13);
      *(_DWORD *)v30 = v27;
      *(_DWORD *)(v30 + 4) = v28;
      *(_DWORD *)(v30 + 8) = v29;
      *(_DWORD *)v10 = &off_26EC440;
      v31 = *((_DWORD *)v2 + 14);
      v32 = *((_DWORD *)v2 + 15);
      v33 = *((_DWORD *)v2 + 16);
      *(_BYTE *)(v10 + 68) = *((_BYTE *)v2 + 68);
      v34 = v10 + 56;
      *(_DWORD *)v34 = v31;
      *(_DWORD *)(v34 + 4) = v32;
      *(_DWORD *)(v34 + 8) = v33;
      *((_DWORD *)_R9 + 7) += 72;
}


char *__fastcall AttributeInstance::getBuffs(AttributeInstance *this)
{
  return (char *)this + 24;
}


char *__fastcall AttributeInstance::getListeners(AttributeInstance *this)
{
  return (char *)this + 36;
}


int __fastcall AttributeInstance::AttributeInstance(int a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26EC464;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  _aeabi_memclr4(a1 + 12, 48);
  *(_QWORD *)(v3 + 60) = 2139095039LL;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 2139095039;
  result = v3;
  *(_DWORD *)(v3 + 76) = 0;
  return result;
}


signed int __fastcall AttributeInstance::hasModifier(AttributeInstance *this, const AttributeModifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const AttributeModifier *v4; // r4@1
  signed int result; // r0@4

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  v4 = a2;
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    while ( AttributeModifier::operator==(v2, (int)v4) != 1 )
    {
      v2 += 48;
      if ( v3 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


void __fastcall AttributeInstance::removeModifiers(int a1, const void **a2)
{
  int v3; // r2@1
  int v4; // r3@1
  __int64 v5; // kr00_8@1
  const AttributeModifier *v6; // r4@2
  const AttributeModifier *v7; // r6@2
  void (__fastcall *v13)(const AttributeModifier *, int, int); // r9@7
  _DWORD **v15; // r0@8
  const AttributeModifier *v16; // r4@8
  int v17; // r5@9
  _DWORD **v18; // r0@14
  int v19; // r4@15
  char v20; // [sp+10h] [bp-50h]@7
  void *ptr; // [sp+20h] [bp-40h]@2
  const AttributeModifier *v22; // [sp+24h] [bp-3Ch]@2
  int v23; // [sp+2Ch] [bp-34h]@1
  int v24; // [sp+30h] [bp-30h]@1

  _R5 = a1;
  AttributeInstance::getModifiers((int)&v23, a1, a2);
  v5 = *(_QWORD *)&v23;
  if ( v24 != v23 )
  {
    std::vector<AttributeModifier,std::allocator<AttributeModifier>>::vector((int)&ptr, (unsigned __int64 *)&v23);
    v6 = v22;
    v7 = (const AttributeModifier *)ptr;
    if ( ptr != (void *)v22 )
    {
      do
      {
        AttributeInstance::removeModifier((AttributeInstance *)_R5, v7);
        v7 = (const AttributeModifier *)((char *)v7 + 48);
      }
      while ( v6 != v7 );
    }
    __asm { VLDR            S16, [R5,#0x4C] }
    _R8 = AttributeInstance::_calculateValue((AttributeInstance *)_R5);
    __asm
      VMOV            S0, R8
      VCMPE.F32       S16, S0
      VSTR            S0, [R5,#0x4C]
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      v7 = *(const AttributeModifier **)(_R5 + 48);
      _ZF = v7 == 0;
      v13 = *(void (__fastcall **)(const AttributeModifier *, int, int))(*(_DWORD *)v7 + 16);
      AttributeBuffInfo::AttributeBuffInfo((int)&v20, 10);
      __asm { VMOV            R1, S16 }
      v13(v7, _R1, _R8);
    BaseAttributeMap::onAttributeModified(*(BaseAttributeMap **)(_R5 + 4), (const AttributeInstance *)_R5);
    v16 = v22;
    v15 = (_DWORD **)ptr;
        v17 = (int)(v15 + 12);
        ((void (__cdecl *)(_DWORD **, _DWORD, int, int))**v15)(v15, **v15, v3, v4);
        v15 = (_DWORD **)v17;
      while ( v16 != (const AttributeModifier *)v17 );
      v15 = (_DWORD **)ptr;
    if ( v15 )
      operator delete(v15);
  }
  if ( (_DWORD)v5 != HIDWORD(v5) )
    v18 = (_DWORD **)v5;
    do
      v19 = (int)(v18 + 12);
      ((void (__cdecl *)(_DWORD **, _DWORD, int, int))**v18)(v18, **v18, v3, v4);
      v18 = (_DWORD **)v19;
    while ( HIDWORD(v5) != v19 );
  if ( (_DWORD)v5 )
    operator delete((void *)v5);
}


void __fastcall AttributeInstance::setMinValue(AttributeInstance *this, float _R1)
{
  __asm { VMOV            S0, R1 }
  *((float *)this + 17) = _R1;
  *((float *)this + 14) = _R1;
  _R1 = this;
  __asm
  {
    VLDR            S4, [R2,#0x4C]
    VLDR            S2, [R2,#0x48]
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VSTR            S0, [R2,#0x4C] }
  j_j_j__ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance(*((BaseAttributeMap **)this + 1), this);
}


void __fastcall AttributeInstance::serializationSetRange(AttributeInstance *this, float a2, float a3, float a4)
{
  AttributeInstance::serializationSetRange(this, a2, a3, a4);
}
