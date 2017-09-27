

_DWORD *__fastcall ComparatorCapacitor::ComparatorCapacitor(CapacitorComponent *a1)
{
  _DWORD *result; // r0@1

  result = j_CapacitorComponent::CapacitorComponent(a1);
  *result = &off_2719A60;
  result[13] = -1;
  result[14] = -1;
  result[15] = -1;
  result[21] = 0;
  result[22] = 0;
  result[23] = 0;
  *((_BYTE *)result + 80) = 0;
  result[18] = 0;
  result[19] = 0;
  result[16] = 0;
  result[17] = 0;
  return result;
}


void __fastcall ComparatorCapacitor::~ComparatorCapacitor(ComparatorCapacitor *this)
{
  ComparatorCapacitor::~ComparatorCapacitor(this);
}


signed int __fastcall ComparatorCapacitor::evaluate(ComparatorCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  int v3; // r12@1
  signed int v4; // r2@1
  int v5; // lr@4
  char *v6; // r1@4
  int v7; // r3@4
  bool v8; // nf@4
  unsigned __int8 v9; // vf@4
  int v10; // r3@4
  int v11; // lr@11
  char *v12; // r3@11
  int v13; // r4@11
  int v14; // r4@11
  signed int result; // r0@19

  v3 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 16) = v3;
  v4 = *((_DWORD *)this + 13);
  if ( v4 == -1 )
    v4 = *((_DWORD *)this + 18);
  if ( *((_DWORD *)this + 17) )
  {
    v5 = *((_DWORD *)this + 14);
    v6 = (char *)this + 60;
    v7 = *((_DWORD *)this + 15);
    v9 = __OFSUB__(v5, v7);
    v8 = v5 - v7 < 0;
    v10 = v7 & v5;
    if ( !(v8 ^ v9) )
      v6 = (char *)this + 56;
    if ( v10 == -1 )
      v6 = (char *)this + 76;
    v4 -= *(_DWORD *)v6;
    if ( v4 < 0 )
      v4 = 0;
    *((_DWORD *)this + 9) = v4;
  }
  else
    v11 = *((_DWORD *)this + 14);
    v12 = (char *)this + 60;
    v13 = *((_DWORD *)this + 15);
    v9 = __OFSUB__(v11, v13);
    v8 = v11 - v13 < 0;
    v14 = v13 & v11;
      v12 = (char *)this + 56;
    if ( v14 == -1 )
      v12 = (char *)this + 76;
    if ( *(_DWORD *)v12 > v4 )
    {
      *((_DWORD *)this + 9) = 0;
    }
  if ( v4 > 15 )
    v4 = 15;
  *((_DWORD *)this + 9) = v4;
  result = 0;
  if ( v3 != v4 )
    result = 1;
  return result;
}


int __fastcall ComparatorCapacitor::removeSource(ComparatorCapacitor *this, const BlockPos *a2, const BaseCircuitComponent *a3)
{
  const BlockPos *v3; // r4@1
  ComparatorCapacitor *v4; // r8@1
  unsigned __int8 v5; // r0@1
  int v6; // r1@1
  int v7; // r3@1
  char i; // lr@1
  int v9; // r6@2
  int v10; // r5@4
  bool v11; // zf@4
  signed int v12; // r2@10
  int v13; // r3@11
  int v14; // r2@11
  int v15; // r5@12

  v3 = a2;
  v4 = this;
  v5 = j_BaseCircuitComponent::removeSource(this, a2, a3);
  v7 = *(_QWORD *)((char *)v4 + 84) >> 32;
  v6 = *(_QWORD *)((char *)v4 + 84);
  for ( i = 0; v6 != v7; *((_DWORD *)v4 + 22) = v7 )
  {
    v9 = *((_DWORD *)v3 + 1);
    while ( 1 )
    {
      if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)v3 )
      {
        v10 = *(_DWORD *)(v6 + 12);
        v11 = v10 == v9;
        if ( v10 == v9 )
          v11 = *(_DWORD *)(v6 + 16) == *((_DWORD *)v3 + 2);
        if ( v11 )
          break;
      }
      v6 += 28;
      if ( v7 == v6 )
        return (v5 | (unsigned __int8)i) & 1;
    }
    if ( v6 + 28 != v7 )
      v12 = v7 - (v6 + 28);
      if ( v12 >= 1 )
        v13 = v6;
        v14 = -1227133513 * (v12 >> 2) + 1;
        do
        {
          --v14;
          v15 = *(_DWORD *)(v13 + 32);
          *(_DWORD *)v13 = *(_DWORD *)(v13 + 28);
          *(_DWORD *)(v13 + 4) = v15;
          *(_DWORD *)(v13 + 8) = *(_DWORD *)(v13 + 36);
          *(_DWORD *)(v13 + 12) = *(_DWORD *)(v13 + 40);
          *(_DWORD *)(v13 + 16) = *(_DWORD *)(v13 + 44);
          *(_QWORD *)(v13 + 20) = *(_QWORD *)(v13 + 48);
          v13 += 28;
        }
        while ( v14 > 1 );
        v7 = *((_DWORD *)v4 + 22);
    v7 -= 28;
    i = 1;
  }
  return (v5 | (unsigned __int8)i) & 1;
}


int __fastcall ComparatorCapacitor::isSubtractMode(ComparatorCapacitor *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 17);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall ComparatorCapacitor::allowConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r1@1
  signed int result; // r0@1

  v3 = *(_BYTE *)(a3 + 16);
  v4 = Facing::OPPOSITE_FACING[(*(int (**)(void))(*(_DWORD *)a1 + 12))()];
  result = 0;
  if ( v3 == v4 )
    result = 1;
  return result;
}


int __fastcall ComparatorCapacitor::GetSideStrength(ComparatorCapacitor *this)
{
  char *v1; // r0@1
  int v2; // t1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r1@1

  v2 = *((_DWORD *)this + 14);
  v1 = (char *)this + 56;
  v3 = (int)(v1 + 4);
  v4 = *((_DWORD *)v1 + 1);
  v5 = v2 & v4;
  if ( v2 >= v4 )
    v3 = (int)v1;
  if ( v5 == -1 )
    v3 = (int)(v1 + 20);
  return *(_DWORD *)v3;
}


int __fastcall ComparatorCapacitor::GetRearStrength(ComparatorCapacitor *this)
{
  ComparatorCapacitor *v1; // r1@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 13);
  if ( result == -1 )
    result = *((_DWORD *)v1 + 18);
  return result;
}


ComparatorCapacitor *__fastcall ComparatorCapacitor::~ComparatorCapacitor(ComparatorCapacitor *this)
{
  ComparatorCapacitor *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2719A60;
  v2 = (void *)*((_DWORD *)this + 21);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719990;
  v3 = (void *)*((_DWORD *)v1 + 1);
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


int __fastcall ComparatorCapacitor::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  int v5; // r4@1
  int *v6; // r6@1
  unsigned int v7; // r7@1
  int v8; // r5@1
  int v9; // r7@3
  __int64 v10; // r0@4
  bool v11; // zf@4

  v5 = a3;
  v6 = a4;
  v7 = *(_BYTE *)(a3 + 16);
  v8 = a1;
  if ( v7 >= 2 && v7 != (*(int (**)(void))(*(_DWORD *)a1 + 12))() )
  {
    v9 = *(_BYTE *)(v5 + 16);
    if ( v9 == Facing::OPPOSITE_FACING[(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8)] )
      goto LABEL_14;
    LODWORD(v10) = (*(int (**)(void))(**(_DWORD **)(v5 + 64) + 44))();
    v11 = v10 == 1129534546;
    if ( v10 != 1129534546 )
      v11 = v10 == 1296257618;
    if ( v11 || v10 == 1296253778 )
    {
LABEL_14:
      if ( *(_QWORD *)(v5 + 88) != 1129533506LL
        || j_BaseCircuitComponent::hasDirectPower(*(BaseCircuitComponent **)(v5 + 64)) == 1 )
      {
        j_BaseCircuitComponent::trackPowerSourceDuplicates(v8, v5, *v6, *a5);
      }
    }
  }
  return 0;
}


signed int __fastcall ComparatorCapacitor::clearAnalogStrength(ComparatorCapacitor *this, int a2)
{
  ComparatorCapacitor *v2; // r4@1
  Facing *v3; // r5@1
  signed int result; // r0@7

  v2 = this;
  v3 = (Facing *)a2;
  if ( a2 == (*(int (**)(void))(*(_DWORD *)this + 12))() )
  {
    *((_DWORD *)v2 + 13) = -1;
  }
  else if ( Facing::OPPOSITE_FACING[(*(int (__fastcall **)(ComparatorCapacitor *))(*(_DWORD *)v2 + 12))(v2)] != (unsigned __int8)v3 )
    if ( (Facing *)j_Facing::getClockWise(v3, (signed __int8)v3) == v3 )
      *((_DWORD *)v2 + 15) = -1;
    else
      *((_DWORD *)v2 + 14) = -1;
  result = 1;
  *((_BYTE *)v2 + 80) = 1;
  return result;
}


signed int __fastcall ComparatorCapacitor::consumePowerAnyDirection(ComparatorCapacitor *this)
{
  return 1;
}


int __fastcall ComparatorCapacitor::updateDependencies(ComparatorCapacitor *this, CircuitSceneGraph *a2, const BlockPos *a3)
{
  ComparatorCapacitor *v3; // r4@1
  int result; // r0@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r1@3
  int v8; // r0@3
  signed int v9; // r2@4
  int v10; // r1@5
  int v11; // r0@5
  int v12; // r6@6
  int v13; // r6@8
  int v14; // r0@10
  int v15; // r1@10
  int v16; // r2@10
  __int64 v17; // kr08_8@10
  __int64 v18; // kr10_8@10
  int v19; // r5@11
  int v20; // r12@11
  int v21; // r1@13
  signed int v22; // r2@14
  int v23; // r1@15
  int v24; // r0@15
  int v25; // r6@16
  int v26; // [sp+8h] [bp-40h]@10
  int v27; // [sp+Ch] [bp-3Ch]@10
  int v28; // [sp+10h] [bp-38h]@10
  int v29; // [sp+14h] [bp-34h]@10
  int v30; // [sp+18h] [bp-30h]@10
  char v31; // [sp+1Ch] [bp-2Ch]@10
  char v32; // [sp+1Dh] [bp-2Bh]@10
  int v33; // [sp+20h] [bp-28h]@10

  v3 = this;
  v6 = *(_QWORD *)((char *)this + 4);
  result = *(_QWORD *)((char *)this + 4) >> 32;
  v5 = v6;
  if ( (_DWORD)v6 != result )
  {
    while ( (*(int (**)(void))(**(_DWORD **)v5 + 32))() != 1 )
    {
      v13 = *(_BYTE *)(v5 + 20);
      if ( v13 != Facing::OPPOSITE_FACING[(*(int (__fastcall **)(ComparatorCapacitor *))(*(_DWORD *)v3 + 12))(v3)] )
      {
        v14 = *(_DWORD *)(v5 + 8);
        v15 = *(_DWORD *)(v5 + 12);
        v16 = *(_DWORD *)(v5 + 16);
        v17 = *(_QWORD *)v5;
        v26 = *(_QWORD *)v5;
        v27 = HIDWORD(v17);
        v28 = v14;
        v29 = v15;
        v30 = v16;
        v31 = 6;
        v32 = 0;
        v33 = 0;
        v18 = *((_QWORD *)v3 + 11);
        if ( (_DWORD)v18 == HIDWORD(v18) )
        {
          j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item>(
            (unsigned __int64 *)((char *)v3 + 84),
            (int)&v26);
        }
        else
          v19 = v27;
          v20 = v18 + 8;
          *(_DWORD *)v18 = v26;
          *(_DWORD *)(v18 + 4) = v19;
          *(_DWORD *)v20 = v14;
          *(_DWORD *)(v20 + 4) = v15;
          *(_DWORD *)(v20 + 8) = v16;
          *(_QWORD *)(v18 + 20) = *(_QWORD *)&v31;
          *((_DWORD *)v3 + 22) += 28;
        v21 = *((_DWORD *)v3 + 2);
        v8 = v5 + 28;
        if ( v5 + 28 != v21 )
          v22 = v21 - v8;
          v8 = *((_DWORD *)v3 + 2);
          if ( v22 >= 1 )
          {
            v23 = v5;
            v24 = -1227133513 * (v22 >> 2) + 1;
            do
            {
              --v24;
              v25 = *(_DWORD *)(v23 + 32);
              *(_DWORD *)v23 = *(_DWORD *)(v23 + 28);
              *(_DWORD *)(v23 + 4) = v25;
              *(_DWORD *)(v23 + 8) = *(_DWORD *)(v23 + 36);
              *(_DWORD *)(v23 + 12) = *(_DWORD *)(v23 + 40);
              *(_DWORD *)(v23 + 16) = *(_DWORD *)(v23 + 44);
              *(_QWORD *)(v23 + 20) = *(_QWORD *)(v23 + 48);
              v23 += 28;
            }
            while ( v24 > 1 );
LABEL_17:
            v8 = *((_DWORD *)v3 + 2);
          }
LABEL_18:
        result = v8 - 28;
        *((_DWORD *)v3 + 2) = result;
        goto LABEL_19;
      }
      result = *((_DWORD *)v3 + 2);
      v5 += 28;
LABEL_19:
      if ( v5 == result )
        return result;
    }
    v7 = *((_DWORD *)v3 + 2);
    v8 = v5 + 28;
    if ( v5 + 28 != v7 )
      v9 = v7 - v8;
      v8 = *((_DWORD *)v3 + 2);
      if ( v9 >= 1 )
        v10 = v5;
        v11 = -1227133513 * (v9 >> 2) + 1;
        do
          --v11;
          v12 = *(_DWORD *)(v10 + 32);
          *(_DWORD *)v10 = *(_DWORD *)(v10 + 28);
          *(_DWORD *)(v10 + 4) = v12;
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 36);
          *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 40);
          *(_DWORD *)(v10 + 16) = *(_DWORD *)(v10 + 44);
          *(_QWORD *)(v10 + 20) = *(_QWORD *)(v10 + 48);
          v10 += 28;
        while ( v11 > 1 );
        goto LABEL_17;
    goto LABEL_18;
  }
  return result;
}


int __fastcall ComparatorCapacitor::getPoweroutDirection(ComparatorCapacitor *this)
{
  return Facing::OPPOSITE_FACING[(*(int (**)(void))(*(_DWORD *)this + 12))()];
}


int __fastcall ComparatorCapacitor::cacheValues(ComparatorCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  ComparatorCapacitor *v3; // r4@1
  int result; // r0@1
  int v5; // r0@2
  int i; // r5@2
  int v7; // r0@6
  int v8; // r5@11
  int v9; // r0@12
  int v10; // r1@12
  int v11; // r0@12

  v3 = this;
  result = *((_BYTE *)this + 80);
  if ( result )
  {
    *((_DWORD *)v3 + 18) = 0;
    *((_DWORD *)v3 + 19) = 0;
    v5 = *(_QWORD *)((char *)v3 + 4) >> 32;
    for ( i = *(_QWORD *)((char *)v3 + 4); i != v5; i += 28 )
    {
      if ( *(_BYTE *)(i + 21) )
      {
        v7 = (*(int (**)(void))(**(_DWORD **)i + 8))() - *(_DWORD *)(i + 4);
        if ( v7 < 0 )
          v7 = 0;
        if ( v7 > *((_DWORD *)v3 + 18) )
          *((_DWORD *)v3 + 18) = v7;
      }
      v5 = *((_DWORD *)v3 + 2);
    }
    result = *(_QWORD *)((char *)v3 + 84) >> 32;
    v8 = *(_QWORD *)((char *)v3 + 84);
    while ( v8 != result )
      v9 = (*(int (**)(void))(**(_DWORD **)v8 + 8))();
      v10 = *(_DWORD *)(v8 + 4);
      v8 += 28;
      v11 = v9 - v10;
      if ( v11 < 0 )
        v11 = 0;
      if ( v11 > *((_DWORD *)v3 + 19) )
        *((_DWORD *)v3 + 19) = v11;
      result = *((_DWORD *)v3 + 22);
  }
  return result;
}


signed int __fastcall ComparatorCapacitor::setAnalogStrength(ComparatorCapacitor *this, int a2, int a3)
{
  ComparatorCapacitor *v3; // r4@1
  int v4; // r5@1
  Facing *v5; // r6@1
  signed int v6; // r0@6
  signed int result; // r0@11

  v3 = this;
  v4 = a2;
  v5 = (Facing *)a3;
  if ( a3 == (*(int (**)(void))(*(_DWORD *)this + 12))() )
  {
    if ( v4 < 0 )
      v4 = 0;
    *((_DWORD *)v3 + 13) = v4;
  }
  else if ( Facing::OPPOSITE_FACING[(*(int (__fastcall **)(ComparatorCapacitor *))(*(_DWORD *)v3 + 12))(v3)] != (unsigned __int8)v5 )
    v6 = j_Facing::getClockWise(v5, (signed __int8)v5);
    if ( (Facing *)v6 == v5 )
      *((_DWORD *)v3 + 15) = v4;
    else
      *((_DWORD *)v3 + 14) = v4;
  result = 1;
  *((_BYTE *)v3 + 80) = 1;
  return result;
}


void __fastcall ComparatorCapacitor::~ComparatorCapacitor(ComparatorCapacitor *this)
{
  ComparatorCapacitor *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2719A60;
  v2 = (void *)*((_DWORD *)this + 21);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719990;
  v3 = (void *)*((_DWORD *)v1 + 1);
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall ComparatorCapacitor::canConsumerPower(ComparatorCapacitor *this)
{
  return 1;
}


int __fastcall ComparatorCapacitor::setMode(int result, int a2)
{
  *(_DWORD *)(result + 68) = a2;
  return result;
}


signed __int64 __fastcall ComparatorCapacitor::getInstanceType(ComparatorCapacitor *this)
{
  return 1296253778LL;
}
