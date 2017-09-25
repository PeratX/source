

signed int __fastcall BaseCircuitComponent::hasSource(BaseCircuitComponent *this, BaseCircuitComponent *a2)
{
  __int64 v2; // r6@1
  BaseCircuitComponent *v3; // r4@1
  BaseCircuitComponent *v4; // r5@3
  signed int result; // r0@8

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = a2;
  if ( HIDWORD(v2) - (signed int)v2 < 1 || (_DWORD)v2 == HIDWORD(v2) )
  {
LABEL_8:
    result = 0;
  }
  else
    while ( 1 )
    {
      v4 = *(BaseCircuitComponent **)v2;
      if ( *(_DWORD *)v2 )
      {
        if ( v4 == v3
          || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 88))(*(_DWORD *)v2) == 1
          && (*(int (__fastcall **)(BaseCircuitComponent *, BaseCircuitComponent *))(*(_DWORD *)v4 + 84))(v4, v3) )
        {
          break;
        }
      }
      LODWORD(v2) = v2 + 28;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


int __fastcall BaseCircuitComponent::isSecondaryPowered(BaseCircuitComponent *this)
{
  return 0;
}


int __fastcall BaseCircuitComponent::canStopPower(BaseCircuitComponent *this)
{
  return 0;
}


int __fastcall BaseCircuitComponent::consumePowerAnyDirection(BaseCircuitComponent *this)
{
  return 0;
}


int __fastcall BaseCircuitComponent::setStrength(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


int __fastcall BaseCircuitComponent::hasChildrenSource(BaseCircuitComponent *this)
{
  return 0;
}


void __fastcall BaseCircuitComponent::~BaseCircuitComponent(BaseCircuitComponent *this)
{
  BaseCircuitComponent::~BaseCircuitComponent(this);
}


int __fastcall BaseCircuitComponent::allowIndirect(BaseCircuitComponent *this)
{
  return 0;
}


signed __int64 __fastcall BaseCircuitComponent::getInstanceType(BaseCircuitComponent *this)
{
  return 1129534275LL;
}


signed __int64 __fastcall BaseCircuitComponent::getBaseType(BaseCircuitComponent *this)
{
  return 1129534275LL;
}


int __fastcall BaseCircuitComponent::canConsumerPower(BaseCircuitComponent *this)
{
  return 0;
}


int __fastcall BaseCircuitComponent::BaseCircuitComponent(int result)
{
  *(_DWORD *)result = &off_2719990;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_BYTE *)(result + 41) = 0;
  *(_BYTE *)(result + 42) = 1;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 40) = 6;
  *(_WORD *)(result + 17) = 1;
  *(_BYTE *)(result + 32) = 1;
  return result;
}


BaseCircuitComponent *__fastcall BaseCircuitComponent::~BaseCircuitComponent(BaseCircuitComponent *this)
{
  BaseCircuitComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


signed int __fastcall BaseCircuitComponent::hasDirectPower(BaseCircuitComponent *this)
{
  int v1; // r0@1
  int v2; // r1@1
  __int64 v3; // kr00_8@1
  signed int result; // r0@2

  v3 = *(_QWORD *)((char *)this + 4);
  v1 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = v3;
  if ( (_DWORD)v3 == v1 )
  {
    result = 0;
  }
  else
    while ( !*(_BYTE *)(v2 + 21) )
    {
      v2 += 28;
      if ( v1 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall BaseCircuitComponent::calculateValue(BaseCircuitComponent *this, CircuitSystem *a2)
{
  BaseCircuitComponent *v2; // r8@1
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r4@1
  int v6; // r5@2
  __int64 v7; // kr08_8@2
  int v8; // r0@2
  int v9; // r2@2
  int v10; // r1@2
  int v11; // r0@11
  signed int v12; // r0@12
  signed int v13; // r2@12
  int result; // r0@16

  v2 = this;
  v4 = *(_QWORD *)((char *)this + 4) >> 32;
  v3 = *(_QWORD *)((char *)this + 4);
  v5 = 0;
  if ( v3 == v4 )
  {
    v10 = 0;
  }
  else
    do
    {
      v6 = (*(int (**)(void))(**(_DWORD **)v3 + 8))();
      v7 = *(_QWORD *)v3;
      v8 = (*(int (**)(void))(*(_DWORD *)*(_QWORD *)v3 + 80))();
      v9 = *(_DWORD *)(v3 + 4);
      v10 = v6 - HIDWORD(v7);
      v3 += 28;
      if ( v8 )
        v10 = 15 - v9;
      if ( v10 < 0 )
        v10 = 0;
      if ( v5 >= v10 )
        v10 = v5;
      v5 = v10;
    }
    while ( v3 != v4 );
  v11 = *((_DWORD *)v2 + 9);
  *((_DWORD *)v2 + 9) = v10;
  if ( v11 == v10 )
    v12 = *((_BYTE *)v2 + 17);
    v13 = 0;
    if ( !v10 )
      v13 = 1;
    if ( *((_BYTE *)v2 + 17) )
      v12 = 1;
    result = v12 & v13;
    result = 1;
  return result;
}


int __fastcall BaseCircuitComponent::isHalfPulse(BaseCircuitComponent *this)
{
  return 0;
}


signed int __fastcall BaseCircuitComponent::trackPowerSourceDuplicates(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // lr@1
  unsigned int v7; // r6@5
  int v8; // r2@7
  int v9; // r2@9
  int v10; // r5@9
  int v11; // r7@10
  int v12; // r1@10
  signed int result; // r0@12
  int v14; // r1@15
  unsigned __int8 v15; // vf@15
  int v16; // r1@15
  int v17; // r0@18
  int v18; // r0@19
  int v19; // [sp+0h] [bp-38h]@7
  int v20; // [sp+4h] [bp-34h]@7
  int v21; // [sp+8h] [bp-30h]@7
  int v22; // [sp+Ch] [bp-2Ch]@7
  int v23; // [sp+10h] [bp-28h]@9
  int v24; // [sp+14h] [bp-24h]@9
  int v25; // [sp+18h] [bp-20h]@7

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 36);
  v6 = *(_DWORD *)(a1 + 8);
  if ( v4 == v6 )
  {
LABEL_7:
    v8 = a3 - 1;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v25 = 0;
    if ( v8 < 0 )
      v8 = 0;
    v20 = v8;
    v21 = v5;
    v9 = *(_DWORD *)(a2 + 40);
    v22 = *(_DWORD *)(a2 + 40);
    v10 = *(_DWORD *)(a2 + 44);
    v23 = *(_DWORD *)(a2 + 44);
    LOBYTE(v24) = *(_BYTE *)(a2 + 16);
    BYTE1(v24) = a4;
    v19 = *(_DWORD *)(a2 + 32);
    if ( v6 == *(_DWORD *)(a1 + 12) )
    {
      j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item const&>(
        (unsigned __int64 *)(a1 + 4),
        (int)&v19);
    }
    else
      v11 = v20;
      *(_DWORD *)v6 = v19;
      *(_DWORD *)(v6 + 4) = v11;
      *(_DWORD *)(v6 + 8) = v5;
      *(_DWORD *)(v6 + 12) = v9;
      *(_DWORD *)(v6 + 16) = v10;
      v12 = v25;
      *(_DWORD *)(v6 + 20) = v24;
      *(_DWORD *)(v6 + 24) = v12;
      *(_DWORD *)(a1 + 8) += 28;
    return 1;
  }
  while ( 1 )
    if ( *(_DWORD *)(v4 + 8) == v5
      && *(_DWORD *)(v4 + 12) == *(_DWORD *)(a2 + 40)
      && *(_DWORD *)(v4 + 16) == *(_DWORD *)(a2 + 44) )
      v7 = *(_WORD *)(v4 + 20);
      if ( (unsigned __int8)v7 == *(_BYTE *)(a2 + 16) )
        break;
    v4 += 28;
    if ( v6 == v4 )
      goto LABEL_7;
  if ( v7 > 0xFF || a4 != 1 )
    v17 = *(_DWORD *)(a2 + 128);
    if ( *(_DWORD *)(v4 + 4) <= v17 )
      return 0;
    v15 = __OFSUB__(v17, 1);
    v18 = v17 - 1;
    if ( (v18 < 0) ^ v15 )
      v18 = 0;
    *(_DWORD *)(v4 + 4) = v18;
  result = 1;
  *(_BYTE *)(v4 + 21) = 1;
  v14 = *(_DWORD *)(a2 + 128);
  v15 = __OFSUB__(v14, 1);
  v16 = v14 - 1;
  if ( (v16 < 0) ^ v15 )
    v16 = 0;
  *(_DWORD *)(v4 + 4) = v16;
  return result;
}


int __fastcall BaseCircuitComponent::evaluate(BaseCircuitComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  return 0;
}


int __fastcall BaseCircuitComponent::removeSource(BaseCircuitComponent *this, const BlockPos *a2, const BaseCircuitComponent *a3)
{
  __int64 v3; // r2@1
  char v4; // lr@1
  int v5; // r5@2
  int v6; // r7@4
  bool v7; // zf@4
  int v8; // r6@9
  signed int v9; // r5@10
  int v10; // r6@11
  int v11; // r3@11
  int v12; // r4@12

  v3 = *(_QWORD *)((char *)this + 4);
  v4 = 0;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    do
    {
      v5 = *((_DWORD *)a2 + 1);
      while ( 1 )
      {
        if ( *(_DWORD *)(v3 + 8) == *(_DWORD *)a2 )
        {
          v6 = *(_DWORD *)(v3 + 12);
          v7 = v6 == v5;
          if ( v6 == v5 )
            v7 = *(_DWORD *)(v3 + 16) == *((_DWORD *)a2 + 2);
          if ( v7 )
            break;
        }
        LODWORD(v3) = v3 + 28;
        if ( HIDWORD(v3) == (_DWORD)v3 )
          return v4 & 1;
      }
      v8 = v3 + 28;
      if ( (_DWORD)v3 + 28 != HIDWORD(v3) )
        v9 = HIDWORD(v3) - v8;
        v8 = HIDWORD(v3);
        if ( v9 >= 1 )
          v10 = v3;
          v11 = -1227133513 * (v9 >> 2) + 1;
          do
          {
            --v11;
            v12 = *(_DWORD *)(v10 + 32);
            *(_DWORD *)v10 = *(_DWORD *)(v10 + 28);
            *(_DWORD *)(v10 + 4) = v12;
            *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 36);
            *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 40);
            *(_DWORD *)(v10 + 16) = *(_DWORD *)(v10 + 44);
            *(_QWORD *)(v10 + 20) = *(_QWORD *)(v10 + 48);
            v10 += 28;
          }
          while ( v11 > 1 );
          v8 = *((_DWORD *)this + 2);
      HIDWORD(v3) = v8 - 28;
      v4 = 1;
      *((_DWORD *)this + 2) = v8 - 28;
    }
    while ( (_DWORD)v3 != v8 - 28 );
  }
  return v4 & 1;
}


signed int __fastcall BaseCircuitComponent::trackPowerSource(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int v7; // lr@1
  int v8; // r2@6
  int v9; // r2@8
  int v10; // r5@8
  int v11; // r7@9
  int v12; // r1@9
  signed int result; // r0@11
  bool v14; // zf@12
  int v15; // r0@15
  unsigned __int8 v16; // vf@16
  int v17; // r0@16
  int v18; // r1@19
  int v19; // r1@19
  int v20; // [sp+0h] [bp-30h]@6
  int v21; // [sp+4h] [bp-2Ch]@6
  int v22; // [sp+8h] [bp-28h]@6
  int v23; // [sp+Ch] [bp-24h]@6
  int v24; // [sp+10h] [bp-20h]@8
  int v25; // [sp+14h] [bp-1Ch]@8
  int v26; // [sp+18h] [bp-18h]@8

  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a2 + 36);
  v7 = *(_DWORD *)(a1 + 8);
  if ( v5 == v7 )
  {
LABEL_6:
    v8 = a3 - 1;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    if ( v8 < 0 )
      v8 = 0;
    v21 = v8;
    v22 = v6;
    v9 = *(_DWORD *)(a2 + 40);
    v23 = *(_DWORD *)(a2 + 40);
    v10 = *(_DWORD *)(a2 + 44);
    v24 = *(_DWORD *)(a2 + 44);
    LOBYTE(v25) = *(_BYTE *)(a2 + 16);
    BYTE1(v25) = a4;
    v20 = *(_DWORD *)(a2 + 32);
    v26 = a5;
    if ( v7 == *(_DWORD *)(a1 + 12) )
    {
      j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item const&>(
        (unsigned __int64 *)(a1 + 4),
        (int)&v20);
    }
    else
      v11 = v21;
      *(_DWORD *)v7 = v20;
      *(_DWORD *)(v7 + 4) = v11;
      *(_DWORD *)(v7 + 8) = v6;
      *(_DWORD *)(v7 + 12) = v9;
      *(_DWORD *)(v7 + 16) = v10;
      v12 = v26;
      *(_DWORD *)(v7 + 20) = v25;
      *(_DWORD *)(v7 + 24) = v12;
      *(_DWORD *)(a1 + 8) += 28;
    return 1;
  }
  while ( *(_DWORD *)(v5 + 8) != v6
       || *(_DWORD *)(v5 + 12) != *(_DWORD *)(a2 + 40)
       || *(_DWORD *)(v5 + 16) != *(_DWORD *)(a2 + 44) )
    v5 += 28;
    if ( v7 == v5 )
      goto LABEL_6;
  v14 = *(_BYTE *)(v5 + 21) == 0;
  if ( !*(_BYTE *)(v5 + 21) )
    v14 = a4 == 1;
  if ( v14 )
    result = 1;
    *(_BYTE *)(v5 + 21) = 1;
    v18 = *(_DWORD *)(a2 + 128);
    v16 = __OFSUB__(v18, 1);
    v19 = v18 - 1;
    if ( (v19 < 0) ^ v16 )
      v19 = 0;
    *(_DWORD *)(v5 + 4) = v19;
  else
    v15 = *(_DWORD *)(a2 + 128);
    if ( *(_DWORD *)(v5 + 4) > v15 )
      v16 = __OFSUB__(v15, 1);
      v17 = v15 - 1;
      if ( (v17 < 0) ^ v16 )
        v17 = 0;
      *(_DWORD *)(v5 + 4) = v17;
      return 1;
    result = 0;
  return result;
}


int __fastcall BaseCircuitComponent::setDirection(int result, signed __int8 a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}


void __fastcall BaseCircuitComponent::~BaseCircuitComponent(BaseCircuitComponent *this)
{
  BaseCircuitComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}
