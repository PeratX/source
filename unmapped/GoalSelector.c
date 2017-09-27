

int __fastcall GoalSelector::InternalGoal::InternalGoal(int result, int a2, int *a3)
{
  int v3; // r3@1

  v3 = *a3;
  *a3 = 0;
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = a2;
  *(_WORD *)(result + 8) = 0;
  return result;
}


int __fastcall GoalSelector::GoalSelector(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


signed int __fastcall GoalSelector::_canCoExist(GoalSelector *this, GoalSelector::InternalGoal *a2, GoalSelector::InternalGoal *a3)
{
  Goal **v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  signed int v6; // r1@1

  v3 = (Goal **)a3;
  v4 = Goal::getRequiredControlFlags(*(Goal **)a2);
  v5 = Goal::getRequiredControlFlags(*v3);
  v6 = 0;
  if ( !(v5 & v4) )
    v6 = 1;
  return v6;
}


int __fastcall GoalSelector::clearGoals(int result)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  int *v3; // r5@2

  v1 = result;
  v2 = *(_QWORD *)result;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (int *)v2;
    do
    {
      result = *v3;
      if ( *v3 )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      *v3 = 0;
      v3 += 3;
    }
    while ( (int *)HIDWORD(v2) != v3 );
  }
  *(_DWORD *)(v1 + 4) = v2;
  return result;
}


int __fastcall GoalSelector::addGoal(int result, int a2, int *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r3@2
  int v5; // [sp+4h] [bp-Ch]@1

  v5 = a2;
  v3 = *(_QWORD *)(result + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = (int)std::vector<GoalSelector::InternalGoal,std::allocator<GoalSelector::InternalGoal>>::_M_emplace_back_aux<int &,std::unique_ptr<Goal,std::default_delete<Goal>>>(
                    (unsigned __int64 *)result,
                    &v5,
                    a3);
  }
  else
    v4 = *a3;
    *a3 = 0;
    *(_DWORD *)v3 = v4;
    *(_DWORD *)(v3 + 4) = a2;
    *(_WORD *)(v3 + 8) = 0;
    *(_DWORD *)(result + 4) += 12;
  return result;
}


int __fastcall GoalSelector::stopGoals(int result)
{
  __int64 i; // r4@1

  for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 12 )
  {
    result = *(_BYTE *)(i + 8);
    if ( *(_BYTE *)(i + 8) )
    {
      result = (*(int (**)(void))(**(_DWORD **)i + 24))();
      *(_BYTE *)(i + 8) = 0;
    }
  }
  return result;
}


int __fastcall GoalSelector::removeGoal(int result, Goal *a2)
{
  Goal **v2; // r5@0
  int v3; // r4@1
  bool v4; // zf@1
  __int64 v5; // kr00_8@2
  unsigned int v6; // r7@4
  Goal **v7; // r3@4
  int v8; // r5@8
  int v9; // r1@8
  signed int v10; // r3@9
  int v11; // r6@10
  int v12; // r1@11
  int v13; // r0@11
  __int16 v14; // r0@13
  _DWORD *v15; // r5@15
  int v16; // r0@15

  v3 = result;
  v4 = a2 == 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)result;
    result = *(_QWORD *)result >> 32;
    v2 = (Goal **)v5;
    v4 = result == (_DWORD)v5;
  }
  if ( !v4 )
    v6 = 0;
    v7 = v2;
    while ( *v7 != a2 )
    {
      ++v6;
      v7 += 3;
      if ( v6 >= -1431655765 * ((result - (signed int)v2) >> 2) )
        return result;
    }
    v8 = (int)&v2[3 * v6];
    v9 = v8 + 12;
    if ( v8 + 12 != result )
      v10 = result - v9;
      v9 = result;
      if ( v10 >= 1 )
      {
        v11 = -1431655765 * (v10 >> 2) + 1;
        do
        {
          v12 = *(_DWORD *)(v8 + 12);
          *(_DWORD *)(v8 + 12) = 0;
          v13 = *(_DWORD *)v8;
          *(_DWORD *)v8 = v12;
          if ( v13 )
            (*(void (**)(void))(*(_DWORD *)v13 + 4))();
          --v11;
          *(_DWORD *)(v8 + 4) = *(_DWORD *)(v8 + 16);
          v14 = *(_WORD *)(v8 + 20);
          *(_BYTE *)(v8 + 8) = v14;
          *(_BYTE *)(v8 + 9) = HIBYTE(v14);
          v8 += 12;
        }
        while ( v11 > 1 );
        v9 = *(_DWORD *)(v3 + 4);
      }
    v15 = (_DWORD *)(v9 - 12);
    *(_DWORD *)(v3 + 4) = v9 - 12;
    v16 = *(_DWORD *)(v9 - 12);
    if ( v16 )
      (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    result = 0;
    *v15 = 0;
  return result;
}


__int64 *__fastcall GoalSelector::buildDebugInfo(__int64 *result, const void **a2)
{
  __int64 v2; // r6@1
  const void **v3; // r4@1
  signed int v4; // r5@2

  v2 = *result;
  v3 = a2;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v4 = 0;
    do
    {
      result = (__int64 *)*(_BYTE *)(v2 + 8);
      if ( *(_BYTE *)(v2 + 8) )
      {
        if ( v4 >= 1 )
          sub_21E7408(v3, ", ", 2u);
        result = (__int64 *)(*(int (**)(void))(**(_DWORD **)v2 + 32))();
        ++v4;
      }
      LODWORD(v2) = v2 + 12;
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
  }
  return result;
}


int __fastcall GoalSelector::InternalGoal::setUsed(int result, bool a2)
{
  *(_BYTE *)(result + 8) = a2;
  return result;
}


int __fastcall GoalSelector::InternalGoal::setToStart(int result, bool a2)
{
  *(_BYTE *)(result + 9) = a2;
  return result;
}


signed int __fastcall GoalSelector::_canUseInSystem(GoalSelector *this, GoalSelector::InternalGoal *a2)
{
  __int64 v2; // r6@1
  GoalSelector::InternalGoal *v3; // r4@1
  bool v4; // zf@2
  int v5; // r5@8

  v2 = *(_QWORD *)this;
  v3 = a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return 1;
  while ( 1 )
  {
    v4 = v3 == (GoalSelector::InternalGoal *)v2;
    if ( v3 != (GoalSelector::InternalGoal *)v2 )
      v4 = *(_BYTE *)(v2 + 8) == 0;
    if ( v4 )
      goto LABEL_9;
    if ( *((_DWORD *)v3 + 1) >= *(_DWORD *)(v2 + 4) )
      break;
    if ( (*(int (**)(void))(**(_DWORD **)v2 + 16))() != 1 )
      return 0;
LABEL_9:
    LODWORD(v2) = v2 + 12;
    if ( HIDWORD(v2) == (_DWORD)v2 )
      return 1;
  }
  v5 = Goal::getRequiredControlFlags(*(Goal **)v3);
  if ( !(Goal::getRequiredControlFlags(*(Goal **)v2) & v5) )
    goto LABEL_9;
  return 0;
}


__int64 *__fastcall GoalSelector::onPlayerDimensionChanged(__int64 *result)
{
  __int64 i; // r6@1
  int v2; // t1@2

  for ( i = *result; HIDWORD(i) != (_DWORD)i; result = (__int64 *)(*(int (**)(void))(*(_DWORD *)v2 + 40))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 12;
  }
  return result;
}


GoalSelector::InternalGoal *__fastcall GoalSelector::InternalGoal::~InternalGoal(GoalSelector::InternalGoal *this)
{
  GoalSelector::InternalGoal *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *(_DWORD *)v1 = 0;
  return v1;
}


int __fastcall GoalSelector::tick(int result)
{
  unsigned __int64 *v1; // r11@1
  int v2; // r6@1
  int v3; // r10@1
  int v4; // r4@3
  int i; // r7@3
  bool v6; // zf@4
  int v7; // r5@10
  int v8; // r4@14
  int j; // r7@14
  bool v10; // zf@15
  int v11; // r5@21
  unsigned __int64 k; // r4@26

  v1 = (unsigned __int64 *)result;
  v3 = *(_QWORD *)result >> 32;
  v2 = *(_QWORD *)result;
  if ( v2 == v3 )
    return result;
  do
  {
    if ( !*(_BYTE *)(v2 + 8) )
      goto LABEL_14;
    v4 = *v1 >> 32;
    for ( i = *v1; v4 != i; i += 12 )
    {
      v6 = v2 == i;
      if ( v2 != i )
        v6 = *(_BYTE *)(i + 8) == 0;
      if ( !v6 )
      {
        if ( *(_DWORD *)(v2 + 4) >= *(_DWORD *)(i + 4) )
        {
          v7 = Goal::getRequiredControlFlags(*(Goal **)v2);
          if ( Goal::getRequiredControlFlags(*(Goal **)i) & v7 )
            goto LABEL_13;
        }
        else if ( (*(int (**)(void))(**(_DWORD **)i + 16))() != 1 )
          goto LABEL_13;
      }
    }
    result = (*(int (**)(void))(**(_DWORD **)v2 + 12))();
    if ( !result )
LABEL_13:
      (*(void (**)(void))(**(_DWORD **)v2 + 24))();
      *(_BYTE *)(v2 + 8) = 0;
LABEL_14:
      v8 = *v1 >> 32;
      for ( j = *v1; v8 != j; j += 12 )
        v10 = v2 == j;
        if ( v2 != j )
          v10 = *(_BYTE *)(j + 8) == 0;
        if ( !v10 )
          if ( *(_DWORD *)(v2 + 4) >= *(_DWORD *)(j + 4) )
          {
            v11 = Goal::getRequiredControlFlags(*(Goal **)v2);
            result = Goal::getRequiredControlFlags(*(Goal **)j);
            if ( result & v11 )
              goto LABEL_25;
          }
          else
            result = (*(int (**)(void))(**(_DWORD **)j + 16))();
            if ( result != 1 )
      result = (*(int (**)(void))(**(_DWORD **)v2 + 8))();
      if ( result == 1 )
        *(_WORD *)(v2 + 8) = 257;
LABEL_25:
    v2 += 12;
  }
  while ( v2 != v3 );
  for ( k = *v1; HIDWORD(k) != (_DWORD)k; LODWORD(k) = k + 12 )
    if ( *(_BYTE *)(k + 9) )
      (*(void (**)(void))(**(_DWORD **)k + 20))();
      *(_BYTE *)(k + 9) = 0;
    result = *(_BYTE *)(k + 8);
    if ( *(_BYTE *)(k + 8) )
      result = (*(int (**)(void))(**(_DWORD **)k + 28))();
  return result;
}


int __fastcall GoalSelector::InternalGoal::InternalGoal(int result, int a2)
{
  int v2; // r2@1
  __int16 v3; // r1@1

  v2 = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  v3 = *(_WORD *)(a2 + 8);
  *(_BYTE *)(result + 8) = v3;
  *(_BYTE *)(result + 9) = HIBYTE(v3);
  return result;
}


int __fastcall GoalSelector::InternalGoal::setPriority(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}
