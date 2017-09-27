

void __fastcall ConsumerComponent::~ConsumerComponent(ConsumerComponent *this)
{
  ConsumerComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall ConsumerComponent::ConsumerComponent(BaseCircuitComponent *a1)
{
  int result; // r0@1

  result = j_BaseCircuitComponent::BaseCircuitComponent(a1);
  *(_DWORD *)result = &off_2719ACC;
  *(_DWORD *)(result + 43) = 0;
  return result;
}


signed int __fastcall ConsumerComponent::allowConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  __int64 v4; // kr00_8@1
  unsigned __int8 v5; // r0@3
  int v6; // r1@3
  signed int result; // r0@5
  unsigned int v8; // r1@7

  v3 = a3;
  v4 = *(_QWORD *)(a3 + 24);
  if ( v4 != 1129534546 )
  {
    if ( v4 == 1129530177 )
    {
      v5 = (*(int (**)(void))(**(_DWORD **)a3 + 96))();
      v6 = *(_BYTE *)(v3 + 16);
      if ( v5 == 6 )
      {
        if ( v6 != 1 )
          return 0;
      }
      else if ( v6 != v5 )
        return 0;
    }
    goto LABEL_13;
  }
  v8 = *(_WORD *)(a1 + 44);
  if ( !(_BYTE)v8 )
LABEL_13:
    result = *(_BYTE *)(v3 + 132);
    if ( *(_BYTE *)(v3 + 132) )
      result = 1;
    return result;
  result = 0;
  if ( v8 > 0xFF )
    result = 1;
  return result;
}


signed int __fastcall ConsumerComponent::canConsumerPower(ConsumerComponent *this)
{
  return 1;
}


signed int __fastcall ConsumerComponent::evaluate(ConsumerComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  ConsumerComponent *v3; // r4@1
  int v4; // r5@1
  int v5; // r8@1
  int i; // r6@1
  int v7; // r7@2
  int v8; // r0@8
  int v9; // r0@12
  signed int result; // r0@13

  v3 = this;
  *((_BYTE *)this + 43) = 0;
  v5 = *(_QWORD *)((char *)this + 4) >> 32;
  v4 = *(_QWORD *)((char *)this + 4);
  for ( i = 0; v5 != v4; v4 += 28 )
  {
    v7 = (*(int (**)(void))(**(_DWORD **)v4 + 8))() - (*(_QWORD *)v4 >> 32);
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*(_QWORD *)v4 + 80))(*(_QWORD *)v4) == 1 && !*((_BYTE *)v3 + 46) )
      v7 = 15 - *(_DWORD *)(v4 + 4);
    if ( v7 < 0 )
      v7 = 0;
    if ( i < v7 )
    {
      v8 = *(_DWORD *)(v4 + 24);
      i = v7;
      if ( v8 != 1 )
        LOBYTE(v8) = 0;
      *((_BYTE *)v3 + 43) = v8;
    }
  }
  v9 = *((_DWORD *)v3 + 9);
  *((_DWORD *)v3 + 9) = i;
  if ( v9 == i )
    result = *((_BYTE *)v3 + 17);
    if ( *((_BYTE *)v3 + 17) )
      result = 1;
  else
    result = 1;
  return result;
}


signed __int64 __fastcall ConsumerComponent::getBaseType(ConsumerComponent *this)
{
  return 1129530179LL;
}


void __fastcall ConsumerComponent::~ConsumerComponent(ConsumerComponent *this)
{
  ConsumerComponent::~ConsumerComponent(this);
}


int __fastcall ConsumerComponent::addSource(int a1, int a2, int a3, int *a4, char *a5)
{
  int v5; // r4@1
  int v6; // r5@1
  signed int v7; // r2@1
  __int64 v8; // kr00_8@1
  int *v9; // r10@1
  __int64 v10; // r0@1
  signed int v11; // r3@2
  int v12; // r0@10
  int v13; // r9@12
  int v14; // r8@13
  int v15; // r0@19
  char v16; // r8@19
  int v17; // r9@20
  int v18; // r8@24
  char v19; // r1@26
  int v21; // r1@31
  signed int v22; // r0@33
  signed int v23; // r1@33

  v5 = a3;
  v6 = a1;
  v7 = 0;
  v8 = *(_QWORD *)(v5 + 88);
  v9 = a4;
  LODWORD(v10) = (unsigned __int8)*a5;
  *a5 = 0;
  *(_BYTE *)(v6 + 45) = 0;
  if ( *(_BYTE *)(v6 + 44) )
  {
    HIDWORD(v10) = 1129533506;
    v11 = 0;
    if ( (unsigned int)v8 > 0x43535042 )
      v11 = 1;
    if ( SHIDWORD(v8) > 0 )
      v7 = 1;
    if ( !HIDWORD(v8) )
      v7 = v11;
    if ( v7 )
    {
      if ( v8 != 1129534546 )
      {
        if ( v8 == 1129533507 )
        {
          v15 = *(_DWORD *)(v5 + 64);
          v16 = 0;
          if ( *(_BYTE *)(v15 + 48) )
          {
            v17 = *(_BYTE *)(v5 + 16);
            if ( v17 == (*(int (**)(void))(*(_DWORD *)v15 + 12))() )
              v16 = 1;
          }
          *a5 = v16;
          *(_BYTE *)(v6 + 45) = v16;
        }
      }
      else
        *a5 = 1;
      goto LABEL_31;
    }
    if ( v8 == 1129530177 )
      v12 = *(_BYTE *)(v5 + 16);
      if ( v12 != 1 )
        LOBYTE(v12) = 0;
      *a5 = v12;
      v13 = (*(int (**)(void))(**(_DWORD **)(v5 + 64) + 12))();
      if ( v13 == 6 )
        v14 = *(_BYTE *)(v5 + 16);
        v18 = *(_DWORD *)(v5 + 64);
        if ( (unsigned __int8)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v18 + 96))(*(_DWORD *)(v5 + 64)) != 6 )
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 96))(v18);
        v19 = 0;
        if ( v14 == v13 )
          v19 = 1;
        *a5 = v19;
        *(_BYTE *)(v6 + 45) = v19;
      if ( v14 == (*(int (**)(void))(**(_DWORD **)(v5 + 64) + 12))() )
        return 0;
  }
  else
  HIDWORD(v10) = HIDWORD(v10) ^ v8 | HIDWORD(v8);
  if ( !v10 )
    return 0;
LABEL_31:
  v21 = 0;
  if ( v8 == 1129530179 )
    v21 = 1;
  v22 = j_BaseCircuitComponent::trackPowerSource(v6, v5, *v9, (unsigned __int8)*a5, v21);
  v23 = (unsigned __int8)*a5;
  if ( *a5 )
    v23 = 1;
  return v22 & v23;
}


signed __int64 __fastcall ConsumerComponent::getInstanceType(ConsumerComponent *this)
{
  return 1129530179LL;
}
