

int __fastcall RepeaterCapacitor::extendPulse(int result)
{
  signed int v1; // r12@1
  int v2; // r1@2
  bool v3; // zf@3
  int v4; // lr@6
  signed int v5; // r3@10
  signed int v6; // r1@10
  int v7; // r2@11
  signed int v8; // r4@14
  signed int v9; // r2@18
  int v10; // r3@19

  v1 = *(_DWORD *)(result + 72);
  if ( v1 >= 1 )
  {
    v2 = *(_DWORD *)(result + 56);
    if ( v2 == 1 )
    {
      v4 = *(_DWORD *)(result + 52);
      if ( v4 == 3 )
      {
        *(_DWORD *)(result + 56) = 3;
        return result;
      }
    }
    else
      v3 = v2 == 0;
      if ( !v2 )
        v3 = *(_DWORD *)(result + 52) == 2;
      if ( v3 )
        *(_DWORD *)(result + 56) = 2;
    if ( (v4 | 1) == 1 )
      v5 = 0;
      v6 = 13;
      do
        v3 = *(_DWORD *)(result + 4 * v6) == v4;
        v7 = v6++ - 13;
        if ( v3 )
          ++v5;
      while ( v7 < v1 );
      v8 = 2;
      if ( v5 <= v1 )
        v8 = 3;
      if ( v4 )
      v9 = 13;
        *(_DWORD *)(result + 4 * v9) = v8;
        v10 = v9++ - 13;
      while ( v10 < *(_DWORD *)(result + 72) );
  }
  return result;
}


signed int __fastcall RepeaterCapacitor::consumePowerAnyDirection(RepeaterCapacitor *this)
{
  return 1;
}


void __fastcall RepeaterCapacitor::~RepeaterCapacitor(RepeaterCapacitor *this)
{
  RepeaterCapacitor::~RepeaterCapacitor(this);
}


int __fastcall RepeaterCapacitor::delayPulse(int result, int a2)
{
  signed int v2; // r2@1
  signed int v3; // r3@2
  int v4; // r12@3
  int v5; // r2@5

  v2 = *(_DWORD *)(result + 72);
  if ( v2 <= 0 )
    goto LABEL_9;
  v3 = 0;
  do
  {
    v4 = result + 4 * v3++;
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(v4 + 56);
    v2 = *(_DWORD *)(result + 72);
  }
  while ( v3 < v2 );
  if ( v2 < 4 )
LABEL_9:
    v5 = v2 + 13;
    do
      *(_DWORD *)(result + 4 * v5++) = a2;
    while ( v5 != 17 );
  return result;
}


signed int __fastcall RepeaterCapacitor::evaluate(RepeaterCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  int v3; // lr@1
  int v4; // r1@1
  signed int v5; // r2@2
  int v6; // r3@2
  signed int v7; // r1@3
  char *v8; // r2@4
  int v9; // r1@6
  unsigned int v10; // r12@9
  signed int v11; // r4@9
  signed int v12; // r3@9
  signed int v13; // r1@9
  signed int v14; // r1@16
  signed int v15; // r2@16
  int v16; // r3@18
  int v17; // r1@20
  int v18; // r12@22
  signed int v19; // r3@29
  signed int v20; // r4@29
  int v21; // r5@30
  signed int v22; // r1@35
  signed int v23; // r2@39
  int v24; // r3@40
  int v25; // r2@41
  signed int result; // r0@46

  v3 = *((_DWORD *)this + 19);
  v4 = *((_DWORD *)this + 19);
  if ( v3 & 0xFF0000 )
    goto LABEL_46;
  v5 = *((_DWORD *)this + 18);
  v6 = *((_BYTE *)this + 77);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (char *)this + 4 * v7++;
      *((_DWORD *)v8 + 13) = *((_DWORD *)v8 + 14);
      v5 = *((_DWORD *)this + 18);
    }
    while ( v7 < v5 );
    if ( v5 > 3 )
      goto LABEL_50;
  }
  v9 = v5 + 13;
  do
    *((_DWORD *)this + v9++) = v6;
  while ( v9 != 17 );
LABEL_50:
    v10 = *((_WORD *)this + 42);
    v11 = 0;
    v12 = *((_DWORD *)this + 20);
    v13 = *((_WORD *)this + 42);
    if ( v12 == 2 )
      v11 = 1;
    if ( *((_WORD *)this + 42) )
      v13 = 1;
    if ( !(v11 & v13) && v12 > v5 )
      if ( (*((_DWORD *)this + 13) | 1) == 1 )
      {
        *((_BYTE *)this + 85) = BYTE1(v10) ^ 1;
        v14 = 2;
        v15 = 13;
        if ( v10 >> 8 )
          v14 = 3;
        do
        {
          *((_DWORD *)this + v15) = v14;
          v16 = v15++ - 13;
        }
        while ( v16 < *((_DWORD *)this + 18) );
      }
      goto LABEL_41;
    v17 = *((_DWORD *)this + 14);
    if ( v17 )
      if ( v17 == 1 )
        v18 = *((_DWORD *)this + 13);
        if ( v18 == 3 )
          *((_DWORD *)this + 14) = 3;
          goto LABEL_41;
      else
    else
      v18 = *((_DWORD *)this + 13);
      if ( v18 == 2 )
        *((_DWORD *)this + 14) = 2;
        goto LABEL_41;
    if ( (v18 | 1) == 1 )
      if ( v5 < 1 )
        v19 = 1;
        v20 = 0;
          v21 = *((_DWORD *)this + v20++ + 14);
          if ( v21 == v18 )
            ++v19;
        while ( v20 < v5 );
      v22 = 2;
      if ( v19 <= v5 )
        v22 = 3;
      if ( v18 )
      v23 = 13;
      do
        *((_DWORD *)this + v23) = v22;
        v24 = v23++ - 13;
      while ( v24 < *((_DWORD *)this + 18) );
LABEL_41:
  v25 = *((_DWORD *)this + 13);
  LOBYTE(v4) = 0;
  if ( v25 == 3 )
    LOBYTE(v4) = 1;
  if ( v25 == 1 )
    v4 = *((_DWORD *)this + 13);
  *((_BYTE *)this + 76) = v4;
LABEL_46:
  result = 0;
  if ( v3 != (unsigned __int8)v4 )
    result = 1;
  return result;
}


int __fastcall RepeaterCapacitor::updateDependencies(RepeaterCapacitor *this, CircuitSceneGraph *a2, const BlockPos *a3)
{
  RepeaterCapacitor *v3; // r4@1
  int result; // r0@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r0@4
  int v8; // r1@4
  int v9; // r2@4
  __int64 v10; // kr08_8@4
  __int64 v11; // kr10_8@4
  int v12; // r12@5
  int v13; // r1@7
  int v14; // r0@7
  signed int v15; // r2@8
  int v16; // r1@9
  int v17; // r0@9
  int v18; // r6@10
  int v19; // [sp+0h] [bp-40h]@4
  int v20; // [sp+4h] [bp-3Ch]@4
  int v21; // [sp+8h] [bp-38h]@4
  int v22; // [sp+Ch] [bp-34h]@4
  int v23; // [sp+10h] [bp-30h]@4
  char v24; // [sp+14h] [bp-2Ch]@4
  char v25; // [sp+15h] [bp-2Bh]@4
  int v26; // [sp+18h] [bp-28h]@4

  v3 = this;
  v6 = *(_QWORD *)((char *)this + 4);
  result = *(_QWORD *)((char *)this + 4) >> 32;
  v5 = v6;
  while ( v5 != result )
  {
    if ( *(_DWORD *)(v5 + 24) == 1 )
    {
      v5 += 28;
    }
    else
      v7 = *(_DWORD *)(v5 + 8);
      v8 = *(_DWORD *)(v5 + 12);
      v9 = *(_DWORD *)(v5 + 16);
      v10 = *(_QWORD *)v5;
      v19 = *(_QWORD *)v5;
      v20 = HIDWORD(v10);
      v21 = v7;
      v22 = v8;
      v23 = v9;
      v24 = 6;
      v25 = 0;
      v26 = 0;
      v11 = *(_QWORD *)((char *)v3 + 92);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      {
        j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item>(
          (unsigned __int64 *)v3 + 11,
          (int)&v19);
      }
      else
        v12 = v11 + 8;
        *(_QWORD *)v11 = *(_QWORD *)&v19;
        *(_DWORD *)v12 = v7;
        *(_DWORD *)(v12 + 4) = v8;
        *(_DWORD *)(v12 + 8) = v9;
        *(_QWORD *)(v11 + 20) = *(_QWORD *)&v24;
        *((_DWORD *)v3 + 23) += 28;
      v13 = *((_DWORD *)v3 + 2);
      v14 = v5 + 28;
      if ( v5 + 28 != v13 )
        v15 = v13 - v14;
        v14 = *((_DWORD *)v3 + 2);
        if ( v15 >= 1 )
        {
          v16 = v5;
          v17 = -1227133513 * (v15 >> 2) + 1;
          do
          {
            --v17;
            v18 = *(_DWORD *)(v16 + 32);
            *(_DWORD *)v16 = *(_DWORD *)(v16 + 28);
            *(_DWORD *)(v16 + 4) = v18;
            *(_DWORD *)(v16 + 8) = *(_DWORD *)(v16 + 36);
            *(_DWORD *)(v16 + 12) = *(_DWORD *)(v16 + 40);
            *(_DWORD *)(v16 + 16) = *(_DWORD *)(v16 + 44);
            *(_QWORD *)(v16 + 20) = *(_QWORD *)(v16 + 48);
            v16 += 28;
          }
          while ( v17 > 1 );
          v14 = *((_DWORD *)v3 + 2);
        }
      result = v14 - 28;
      *((_DWORD *)v3 + 2) = result;
  }
  return result;
}


int __fastcall RepeaterCapacitor::checkLock(RepeaterCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  RepeaterCapacitor *v3; // r4@1
  int result; // r0@1
  int i; // r5@1
  __int64 v6; // kr00_8@1

  v3 = this;
  *((_BYTE *)this + 78) = 0;
  v6 = *((_QWORD *)this + 11);
  result = *((_QWORD *)this + 11) >> 32;
  for ( i = v6; i != result; i += 28 )
  {
    if ( (*(int (**)(void))(**(_DWORD **)i + 8))() > *(_DWORD *)(i + 4) )
    {
      *((_BYTE *)v3 + 78) = 1;
      result = *((_DWORD *)v3 + 13);
      *((_DWORD *)v3 + 14) = result;
      *((_DWORD *)v3 + 15) = result;
      *((_DWORD *)v3 + 16) = result;
      return result;
    }
    result = *((_DWORD *)v3 + 23);
  }
  return result;
}


signed int __fastcall RepeaterCapacitor::canConsumerPower(RepeaterCapacitor *this)
{
  return 1;
}


_DWORD *__fastcall RepeaterCapacitor::RepeaterCapacitor(CapacitorComponent *a1)
{
  _DWORD *result; // r0@1

  result = j_CapacitorComponent::CapacitorComponent(a1);
  *result = &off_2719D44;
  result[18] = 0;
  *((_BYTE *)result + 76) = 0;
  *((_BYTE *)result + 77) = 0;
  *((_BYTE *)result + 78) = 1;
  result[20] = 0;
  *((_BYTE *)result + 84) = 0;
  *((_BYTE *)result + 85) = 0;
  result[22] = 0;
  result[23] = 0;
  result[24] = 0;
  result[13] = 2;
  result[14] = 2;
  result[15] = 2;
  result[16] = 2;
  return result;
}


RepeaterCapacitor *__fastcall RepeaterCapacitor::~RepeaterCapacitor(RepeaterCapacitor *this)
{
  RepeaterCapacitor *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2719D44;
  v2 = (void *)*((_DWORD *)this + 22);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719990;
  v3 = (void *)*((_DWORD *)v1 + 1);
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


int __fastcall RepeaterCapacitor::setStrength(int result, int a2)
{
  char v2; // r2@1
  signed int v3; // r2@3
  signed int v4; // r2@4
  signed int v5; // r1@7
  int v6; // r3@8
  signed int v7; // r2@8

  v2 = a2;
  if ( a2 )
    v2 = 1;
  *(_BYTE *)(result + 76) = v2;
  v3 = *(_DWORD *)(result + 72);
  if ( v3 >= -1 )
  {
    v4 = 2;
    if ( a2 )
      v4 = 3;
    *(_DWORD *)(result + 52) = v4;
    v3 = *(_DWORD *)(result + 72);
    if ( v3 > -1 )
    {
      v5 = 14;
      do
      {
        v6 = v5 - 14;
        v7 = 2;
        if ( *(_BYTE *)(result + 76) )
          v7 = 3;
        *(_DWORD *)(result + 4 * v5++) = v7;
        v3 = *(_DWORD *)(result + 72);
      }
      while ( v6 < v3 );
    }
  }
  if ( v3 + 1 <= 4 )
    result = j___aeabi_memclr4_0(result + 4 * v3 + 56, 16 - 4 * v3);
  return result;
}


int __fastcall RepeaterCapacitor::setDelay(int result, int a2)
{
  int v2; // r2@1

  v2 = a2;
  if ( a2 <= 0 )
    v2 = 0;
  if ( a2 > 3 )
    v2 = 3;
  *(_DWORD *)(result + 72) = v2;
  return result;
}


signed int __fastcall RepeaterCapacitor::allowConnection(int a1, int a2, int a3)
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


signed __int64 __fastcall RepeaterCapacitor::getInstanceType(RepeaterCapacitor *this)
{
  return 1296257618LL;
}


void __fastcall RepeaterCapacitor::~RepeaterCapacitor(RepeaterCapacitor *this)
{
  RepeaterCapacitor *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2719D44;
  v2 = (void *)*((_DWORD *)this + 22);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719990;
  v3 = (void *)*((_DWORD *)v1 + 1);
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RepeaterCapacitor::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int *v7; // r8@1
  int v8; // r10@1
  int v9; // r6@1
  int v10; // r9@1
  int v11; // r11@1
  BaseCircuitComponent **v12; // r7@1
  signed int v13; // r0@2
  bool v14; // zf@2
  int v15; // r6@8
  __int64 v16; // r0@8
  bool v17; // zf@8
  int v18; // r0@12

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = *(_BYTE *)(a3 + 16);
  v9 = (*(int (**)(void))(*(_DWORD *)a1 + 12))();
  v10 = *(_BYTE *)(v6 + 16);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v12 = (BaseCircuitComponent **)(v6 + 64);
  if ( *(_QWORD *)(v6 + 88) != 1129533506LL )
  {
    if ( v8 == v9 )
      return 0;
    goto LABEL_8;
  }
  v13 = j_BaseCircuitComponent::hasDirectPower(*v12);
  v14 = v8 == v9;
  if ( v8 != v9 )
    v14 = *a5 == 0;
  if ( !v14 && !(v13 ^ 1) )
LABEL_8:
    v15 = Facing::OPPOSITE_FACING[v11];
    LODWORD(v16) = (*(int (**)(void))(*(_DWORD *)*v12 + 44))();
    v17 = v10 == v15;
    if ( v10 != v15 )
      v17 = v16 == 1296257618;
    if ( v17 || v16 == 1296253778 )
    {
      v18 = 0;
      if ( v10 == v15 )
        v18 = 1;
      j_BaseCircuitComponent::trackPowerSource(v5, v6, *v7, *a5, v18);
    }
  return 0;
}


int __fastcall RepeaterCapacitor::getStrength(RepeaterCapacitor *this)
{
  void *v1; // r1@1

  v1 = &Redstone::SIGNAL_MIN;
  if ( *((_BYTE *)this + 76) )
    v1 = &Redstone::SIGNAL_MAX;
  return *(_DWORD *)v1;
}


int __fastcall RepeaterCapacitor::removeSource(RepeaterCapacitor *this, const BlockPos *a2, const BaseCircuitComponent *a3)
{
  const BlockPos *v3; // r4@1
  RepeaterCapacitor *v4; // r8@1
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
  v7 = *((_QWORD *)v4 + 11) >> 32;
  v6 = *((_QWORD *)v4 + 11);
  for ( i = 0; v6 != v7; *((_DWORD *)v4 + 23) = v7 )
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
        v7 = *((_DWORD *)v4 + 23);
    v7 -= 28;
    i = 1;
  }
  return (v5 | (unsigned __int8)i) & 1;
}


int __fastcall RepeaterCapacitor::getPoweroutDirection(RepeaterCapacitor *this)
{
  return Facing::OPPOSITE_FACING[(*(int (**)(void))(*(_DWORD *)this + 12))()];
}


int __fastcall RepeaterCapacitor::cacheValues(RepeaterCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  RepeaterCapacitor *v3; // r4@1
  int v4; // r0@1
  int i; // r5@1
  __int64 v6; // kr00_8@1
  int result; // r0@6
  int v8; // r0@7
  int v9; // r1@9

  v3 = this;
  *((_BYTE *)this + 77) = 0;
  v6 = *(_QWORD *)((char *)this + 4);
  v4 = *(_QWORD *)((char *)this + 4) >> 32;
  for ( i = v6; i != v4; i += 28 )
  {
    if ( (*(int (**)(void))(**(_DWORD **)i + 8))() > *(_DWORD *)(i + 4) )
    {
      *((_BYTE *)v3 + 77) = 1;
      break;
    }
    v4 = *((_DWORD *)v3 + 2);
  }
  result = *((_BYTE *)v3 + 78);
  if ( !*((_BYTE *)v3 + 78) )
    v8 = *((_BYTE *)v3 + 84);
    if ( v8 == *((_BYTE *)v3 + 77) )
      result = 0;
      *((_DWORD *)v3 + 20) = 0;
    else
      v9 = *((_DWORD *)v3 + 20);
      result = v8 ^ 1;
      *((_DWORD *)v3 + 20) = v9 + 1;
      if ( v9 )
      {
        *((_BYTE *)v3 + 84) = result;
      }
      else
        *((_BYTE *)v3 + 85) = result;
  return result;
}


int __fastcall RepeaterCapacitor::alternatePulse(int result)
{
  int v1; // r2@3
  signed int v2; // r12@3
  signed int v3; // r2@5
  int v4; // r3@6

  if ( *(_DWORD *)(result + 72) >= 1 && (*(_DWORD *)(result + 52) | 1) == 1 )
  {
    v1 = *(_BYTE *)(result + 85);
    v2 = 2;
    *(_BYTE *)(result + 85) = v1 ^ 1;
    if ( v1 )
      v2 = 3;
    v3 = 13;
    do
    {
      *(_DWORD *)(result + 4 * v3) = v2;
      v4 = v3++ - 13;
    }
    while ( v4 < *(_DWORD *)(result + 72) );
  }
  return result;
}
