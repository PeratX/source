

signed __int64 __fastcall PoweredBlockComponent::getInstanceType(PoweredBlockComponent *this)
{
  return 1129533506LL;
}


void __fastcall PoweredBlockComponent::~PoweredBlockComponent(PoweredBlockComponent *this)
{
  PoweredBlockComponent::~PoweredBlockComponent(this);
}


int __fastcall PoweredBlockComponent::PoweredBlockComponent(BaseCircuitComponent *a1)
{
  int result; // r0@1

  result = j_BaseCircuitComponent::BaseCircuitComponent(a1);
  *(_DWORD *)result = &off_2719B9C;
  *(_BYTE *)(result + 43) = 0;
  *(_BYTE *)(result + 44) = 1;
  *(_BYTE *)(result + 17) = 0;
  return result;
}


signed __int64 __fastcall PoweredBlockComponent::getBaseType(PoweredBlockComponent *this)
{
  return 1129533506LL;
}


int __fastcall PoweredBlockComponent::evaluate(PoweredBlockComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  return 0;
}


signed int __fastcall PoweredBlockComponent::canConsumerPower(PoweredBlockComponent *this)
{
  return 1;
}


int __fastcall PoweredBlockComponent::allowConnection(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8@1
  int result; // r0@2
  int v5; // r0@3

  v3 = *(_QWORD *)(a3 + 24);
  if ( v3 == 1129534546 )
  {
    result = *(_BYTE *)(a1 + 43) != 0;
  }
  else
    v5 = v3 ^ 0x43535042 | HIDWORD(v3);
    result = v5 != 0;
  return result;
}


signed int __fastcall PoweredBlockComponent::addSource(int a1, int a2, int a3, int *a4, char *a5)
{
  int v5; // r5@1
  int *v6; // r6@1
  int v7; // r4@1
  signed int result; // r0@2
  __int64 v9; // r0@3
  unsigned int v10; // r2@3
  signed int v11; // r7@3
  int v12; // r3@3
  char v13; // r0@18
  int v14; // r0@19
  char v15; // r7@19
  int v16; // r9@20
  int v17; // r7@23
  unsigned __int8 v18; // r0@23
  char v19; // r1@23
  __int64 v20; // r0@26

  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !*(_BYTE *)(a1 + 44) )
    return 0;
  result = 0;
  if ( *(_BYTE *)(v5 + 41) )
    return result;
  HIDWORD(v9) = *(_QWORD *)(a3 + 88) >> 32;
  v10 = *(_QWORD *)(a3 + 88);
  v11 = 0;
  v12 = (unsigned __int8)*a5;
  *(_BYTE *)(v5 + 43) = 0;
  if ( v10 > 0x43535041 )
    v11 = 1;
  if ( SHIDWORD(v9) > 0 )
    result = 1;
  if ( !HIDWORD(v9) )
    result = v11;
  if ( result )
  {
    if ( v10 ^ 0x43535452 | HIDWORD(v9) )
    {
      if ( v10 ^ 0x43535043 | HIDWORD(v9) )
      {
        LOWORD(v9) = 20546;
        goto LABEL_15;
      }
      v14 = *(_DWORD *)(v7 + 64);
      v15 = 0;
      if ( *(_BYTE *)(v14 + 48) )
        v16 = *(_BYTE *)(v7 + 16);
        if ( v16 == (*(int (**)(void))(*(_DWORD *)v14 + 12))() )
          v15 = 1;
      *a5 = v15;
      *(_BYTE *)(v5 + 43) = v15;
    }
    else
      if ( v12 )
        v13 = 1;
      else if ( *(_BYTE *)(v7 + 80) != *(_BYTE *)(v7 + 16) || *(_DWORD *)(v7 + 72) != *(_DWORD *)(v7 + 8) )
        v13 = 0;
        if ( !*(_BYTE *)(v7 + 16) )
          v13 = 1;
      else
      *a5 = v13;
    return j_BaseCircuitComponent::trackPowerSource(v5, v7, *v6, (unsigned __int8)*a5, 0);
  }
  if ( v10 ^ 0x43534341 | HIDWORD(v9) )
    LOWORD(v9) = 17219;
LABEL_15:
    WORD1(v9) = 17235;
    if ( v9 == v10 )
      result = 0;
      *a5 = 0;
      return result;
  v17 = *(_BYTE *)(v7 + 16);
  v18 = (*(int (**)(void))(**(_DWORD **)(v7 + 64) + 96))();
  v19 = 0;
  if ( v17 == v18 )
    v19 = 1;
  *a5 = v19;
  *(_BYTE *)(v5 + 43) = v19;
  if ( v17 != v18 )
    LODWORD(v20) = (*(int (**)(void))(**(_DWORD **)(v7 + 64) + 44))();
    if ( v20 == 1296258115 )
      return 0;
  return j_BaseCircuitComponent::trackPowerSource(v5, v7, *v6, (unsigned __int8)*a5, 0);
}


int __fastcall PoweredBlockComponent::getStrength(PoweredBlockComponent *this, int a2, int a3, int a4)
{
  PoweredBlockComponent *v4; // r9@1
  int v5; // r1@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r6@2
  int v9; // r5@2
  unsigned int v10; // r2@3
  int v11; // r0@4
  int v12; // r3@4
  int result; // r0@4

  v4 = this;
  v5 = *(_QWORD *)((char *)this + 4) >> 32;
  v6 = *(_QWORD *)((char *)this + 4);
  v7 = 0;
  if ( v5 - v6 <= 0 )
  {
    result = 0;
  }
  else
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = -1227133513 * ((v5 - v6) >> 2);
      if ( v10 <= v9 )
        sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v9, v10, a4);
      v11 = (*(int (**)(void))(**(_DWORD **)(v6 + v8) + 8))();
      v12 = v6 + v8;
      v5 = *(_QWORD *)((char *)v4 + 4) >> 32;
      v8 += 28;
      ++v9;
      v6 = *(_QWORD *)((char *)v4 + 4);
      result = v11 - *(_DWORD *)(v12 + 4);
      if ( result < 0 )
        result = 0;
      a4 = -1227133513 * ((signed int)(v5 - *(_QWORD *)((char *)v4 + 4)) >> 2);
      if ( v7 >= result )
        result = v7;
      v7 = result;
    }
    while ( v9 < a4 );
  return result;
}


signed int __fastcall PoweredBlockComponent::hasChildrenSource(PoweredBlockComponent *this)
{
  return 1;
}


void __fastcall PoweredBlockComponent::~PoweredBlockComponent(PoweredBlockComponent *this)
{
  PoweredBlockComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}
