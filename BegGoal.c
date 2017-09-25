

signed int __fastcall BegGoal::_playerHoldingInteresting(BegGoal *this, Player *a2)
{
  BegGoal *v2; // r4@1
  ItemInstance *v3; // r0@1
  ItemInstance *v4; // r5@1
  int v5; // r0@1
  bool v6; // zf@1
  _WORD *v7; // r6@6
  signed int v8; // r0@7
  int v9; // t1@7
  signed int result; // r0@9

  v2 = this;
  v3 = (ItemInstance *)j_Player::getSelectedItem(a2);
  v4 = v3;
  v5 = *((_BYTE *)v3 + 15);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)v4 == 0;
  if ( v6 || j_ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
  {
LABEL_9:
    result = 0;
  }
  else
    v7 = (_WORD *)*((_QWORD *)v2 + 7);
    if ( v7 == (_WORD *)(*((_QWORD *)v2 + 7) >> 32) )
    {
      result = 0;
    }
    else
      while ( 1 )
      {
        v8 = j_ItemInstance::getId(v4);
        v9 = *v7;
        ++v7;
        if ( v8 == v9 )
          break;
        if ( v7 == *((_WORD **)v2 + 15) )
          goto LABEL_9;
      }
      result = 1;
  return result;
}


void __fastcall BegGoal::~BegGoal(BegGoal *this)
{
  BegGoal *v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r1@3
  int v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_272523C;
  v2 = (void *)*((_DWORD *)this + 14);
  if ( v2 )
    j_operator delete(v2);
  *((_DWORD *)v1 + 8) = &off_26F4C40;
  v3 = (unsigned int)v1 + 32;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = -1;
  *(_DWORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 20) = 0;
  v4 = *((_DWORD *)v1 + 12);
  if ( v4 )
    j_Level::unregisterTemporaryPointer(v4, v3);
  *((_DWORD *)v1 + 12) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall BegGoal::canUse(BegGoal *this)
{
  _WORD *v1; // r7@0
  BegGoal *v2; // r4@1
  Dimension *v3; // r0@1
  Player *v4; // r0@1
  Player *v5; // r5@1
  ItemInstance *v6; // r0@2
  ItemInstance *v7; // r6@2
  int v8; // r0@2
  bool v9; // zf@2
  bool v10; // zf@6
  signed int result; // r0@10
  signed int v12; // r0@11
  int v13; // t1@11
  int v14; // r0@16
  int v15; // r0@17

  v2 = this;
  v3 = (Dimension *)j_Entity::getDimension(*((Entity **)this + 2));
  v4 = (Player *)j_Dimension::fetchNearestPlayer(
                   v3,
                   (Entity *)*((_QWORD *)v2 + 1),
                   COERCE_FLOAT(*((_QWORD *)v2 + 1) >> 32));
  v5 = v4;
  if ( !v4 )
    goto LABEL_23;
  v6 = (ItemInstance *)j_Player::getSelectedItem(v4);
  v7 = v6;
  v8 = *((_BYTE *)v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9 || j_ItemInstance::isNull(v7) )
  v10 = *((_BYTE *)v7 + 14) == 0;
  if ( *((_BYTE *)v7 + 14) )
  {
    v1 = (_WORD *)*((_QWORD *)v2 + 7);
    v10 = v1 == (_WORD *)(*((_QWORD *)v2 + 7) >> 32);
  }
  if ( v10 )
LABEL_23:
    result = 0;
  else
    while ( 1 )
    {
      v12 = j_ItemInstance::getId(v7);
      v13 = *v1;
      ++v1;
      if ( v12 == v13 )
        break;
      result = 0;
      if ( v1 == *((_WORD **)v2 + 15) )
        return result;
    }
    if ( *((Player **)v2 + 9) != v5 )
      if ( *((_DWORD *)v5 + 773) )
      {
        *((_QWORD *)v2 + 5) = *(_QWORD *)j_Entity::getUniqueID(v5);
        v14 = *((_DWORD *)v5 + 773);
        *((_DWORD *)v2 + 12) = v14;
        j_Level::registerTemporaryPointer(v14, (unsigned int)v2 + 32);
        *((_BYTE *)v2 + 52) = 0;
      }
      else
        *((_DWORD *)v2 + 9) = 0;
        *((_DWORD *)v2 + 10) = -1;
        *((_DWORD *)v2 + 11) = -1;
        v15 = *((_DWORD *)v2 + 12);
        if ( v15 )
          j_Level::unregisterTemporaryPointer(v15, (unsigned int)v2 + 32);
        *((_DWORD *)v2 + 12) = 0;
    result = 1;
  return result;
}


Goal *__fastcall BegGoal::BegGoal(Goal *a1, int a2, __int64 *a3, int a4, __int64 a5)
{
  int v5; // r6@1
  __int64 *v6; // r9@1
  int v7; // r7@1
  Goal *v8; // r5@1
  int v9; // r4@1
  __int64 v10; // r0@1
  __int64 v11; // r6@1
  __int64 v12; // kr00_8@4
  int v13; // r4@4

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v8 = &off_272523C;
  *((_DWORD *)v8 + 2) = v7;
  *((_DWORD *)v8 + 3) = v5;
  *((_DWORD *)v8 + 4) = 0;
  *(_QWORD *)((char *)v8 + 20) = a5;
  *((_DWORD *)v8 + 8) = &off_26F4C40;
  *((_DWORD *)v8 + 9) = 0;
  *((_DWORD *)v8 + 10) = -1;
  v9 = (int)v8 + 40;
  *(_DWORD *)(v9 + 4) = -1;
  *(_DWORD *)(v9 + 8) = 0;
  *(_BYTE *)(v9 + 12) = 0;
  v10 = *v6;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  v11 = (unsigned int)(HIDWORD(v10) - v10);
  *(_DWORD *)(v9 + 24) = 0;
  if ( (HIDWORD(v10) - (signed int)v10) >> 1 )
  {
    if ( (signed int)v11 <= -1 )
      sub_21E57F4();
    HIDWORD(v11) = j_operator new(v11);
  }
  *((_DWORD *)v8 + 14) = HIDWORD(v11);
  *((_DWORD *)v8 + 15) = HIDWORD(v11);
  *((_DWORD *)v8 + 16) = HIDWORD(v11) + 2 * ((signed int)v11 >> 1);
  v12 = *v6;
  v13 = (HIDWORD(v12) - (signed int)v12) >> 1;
  if ( 0 != v13 )
    j___aeabi_memmove_0(SHIDWORD(v11), v12);
  *((_DWORD *)v8 + 15) = HIDWORD(v11) + 2 * v13;
  return v8;
}


int __fastcall BegGoal::stop(BegGoal *this)
{
  BegGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_Entity::setStatusFlag(*((_DWORD *)this + 2), 25, 0);
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = -1;
  *((_DWORD *)v1 + 11) = -1;
  *((_BYTE *)v1 + 52) = 0;
  result = *((_DWORD *)v1 + 12);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 32);
  *((_DWORD *)v1 + 12) = 0;
  return result;
}


int __fastcall BegGoal::tick(BegGoal *this)
{
  BegGoal *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r5@7
  LookControl *v9; // r6@8
  int v10; // r0@8
  __int64 v11; // r2@8
  char v12; // [sp+8h] [bp-20h]@8

  v1 = this;
  result = *((_BYTE *)this + 52);
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 12);
    if ( v3 )
    {
      v4 = *((_DWORD *)v1 + 10);
      v5 = *((_DWORD *)v1 + 11);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)v1 + 9) = v6;
        if ( !v6 )
          *((_DWORD *)v1 + 9) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 12),
                                  v7,
                                  *((_QWORD *)v1 + 5),
                                  *((_QWORD *)v1 + 5) >> 32,
                                  0);
      }
    }
    result = 1;
    *((_BYTE *)v1 + 52) = 1;
  }
  v8 = *((_DWORD *)v1 + 9);
  if ( v8 )
    v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
    j_Entity::getAttachPos((AABB *)&v12, v8, 3, 0);
    v10 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 940))();
    LODWORD(v11) = 1092616192;
    HIDWORD(v11) = v10;
    j_LookControl::setLookAt(v9, (const Vec3 *)&v12, v11);
    result = *((_DWORD *)v1 + 4) - 1;
    *((_DWORD *)v1 + 4) = result;
  return result;
}


unsigned int __fastcall BegGoal::start(BegGoal *this)
{
  BegGoal *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r1@1
  int v4; // r6@1
  unsigned int v5; // r5@3
  unsigned int v6; // r0@3
  int v7; // r1@3

  v1 = this;
  result = j_Entity::setStatusFlag(*((_DWORD *)this + 2), 25, 1);
  v3 = *(_QWORD *)((char *)v1 + 20) >> 32;
  v4 = *(_QWORD *)((char *)v1 + 20);
  if ( v3 > v4 )
  {
    if ( v3 == v4 )
    {
      v7 = 0;
    }
    else
      v5 = v3 - v4;
      v6 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
      v7 = v6 % v5;
      result = v6 / v5;
    v4 += v7;
  }
  *((_DWORD *)v1 + 4) = v4;
  return result;
}


signed int __fastcall BegGoal::canContinueToUse(BegGoal *this)
{
  _WORD *v1; // r6@0
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  const Entity *v8; // r5@7
  ItemInstance *v13; // r0@12
  ItemInstance *v14; // r5@12
  int v15; // r0@12
  bool v17; // zf@16
  signed int result; // r0@20
  signed int v19; // r0@21
  int v20; // t1@21

  _R4 = this;
  if ( !*((_BYTE *)this + 52) )
  {
    v3 = *((_DWORD *)this + 12);
    if ( v3 )
    {
      v4 = *((_DWORD *)_R4 + 10);
      v5 = *((_DWORD *)_R4 + 11);
      if ( (v4 & v5) != -1 )
      {
        v1 = 0;
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)_R4 + 9) = v6;
        if ( !v6 )
          *((_DWORD *)_R4 + 9) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 12),
                                   v7,
                                   *((_QWORD *)_R4 + 5),
                                   *((_QWORD *)_R4 + 5) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 52) = 1;
  }
  v8 = (const Entity *)*((_DWORD *)_R4 + 9);
  if ( !v8 )
    goto LABEL_27;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 316))(*((_DWORD *)_R4 + 9)) != 1 )
  _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 2), v8);
  __asm
    VLDR            S0, [R4,#0xC]
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || *((_DWORD *)_R4 + 4) < 1 )
  v13 = (ItemInstance *)j_Player::getSelectedItem(v8);
  v14 = v13;
  v15 = *((_BYTE *)v13 + 15);
  _ZF = v15 == 0;
  if ( v15 )
    _ZF = *(_DWORD *)v14 == 0;
  if ( _ZF || j_ItemInstance::isNull(v14) )
  v17 = *((_BYTE *)v14 + 14) == 0;
  if ( *((_BYTE *)v14 + 14) )
    v1 = (_WORD *)*((_QWORD *)_R4 + 7);
    v17 = v1 == (_WORD *)(*((_QWORD *)_R4 + 7) >> 32);
  if ( v17 )
LABEL_27:
    result = 0;
  else
    while ( 1 )
      v19 = j_ItemInstance::getId(v14);
      v20 = *v1;
      ++v1;
      if ( v19 == v20 )
        break;
      result = 0;
      if ( v1 == *((_WORD **)_R4 + 15) )
        return result;
    result = 1;
  return result;
}


int __fastcall BegGoal::~BegGoal(BegGoal *this)
{
  BegGoal *v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r1@3
  int v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_272523C;
  v2 = (void *)*((_DWORD *)this + 14);
  if ( v2 )
    j_operator delete(v2);
  *((_DWORD *)v1 + 8) = &off_26F4C40;
  v3 = (unsigned int)v1 + 32;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = -1;
  *(_DWORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 20) = 0;
  v4 = *((_DWORD *)v1 + 12);
  if ( v4 )
    j_Level::unregisterTemporaryPointer(v4, v3);
  *((_DWORD *)v1 + 12) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall BegGoal::~BegGoal(BegGoal *this)
{
  BegGoal::~BegGoal(this);
}
