

char *__fastcall PlayerAchievementData::getAchievementData(PlayerAchievementData *this)
{
  return (char *)this + 20;
}


PlayerAchievementData *__fastcall PlayerAchievementData::~PlayerAchievementData(PlayerAchievementData *this)
{
  PlayerAchievementData *v1; // r4@1
  AchievementData *v2; // r0@1
  AchievementData *v3; // r5@1

  v1 = this;
  v3 = (AchievementData *)(*(_QWORD *)((char *)this + 20) >> 32);
  v2 = (AchievementData *)*(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
      v2 = (AchievementData *)((char *)AchievementData::~AchievementData(v2) + 48);
    while ( v3 != v2 );
    v2 = (AchievementData *)*((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


int __fastcall PlayerAchievementData::setMaxAchievements(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall PlayerAchievementData::getAchievementsUnlocked(PlayerAchievementData *this)
{
  return *(_DWORD *)this;
}


char *__fastcall PlayerAchievementData::getAchievementData(PlayerAchievementData *this, int a2)
{
  return (char *)this + 20;
}


int __fastcall PlayerAchievementData::setMaxGamerScore(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


AchievementData *__fastcall PlayerAchievementData::clear(PlayerAchievementData *this)
{
  PlayerAchievementData *v1; // r4@1
  AchievementData *result; // r0@1
  AchievementData *v3; // r5@1 OVERLAPPED
  AchievementData *v4; // r6@1 OVERLAPPED

  v1 = this;
  result = 0;
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *(_QWORD *)&v3 = *(_QWORD *)((char *)v1 + 20);
  if ( v4 != v3 )
  {
    result = v3;
    do
      result = (AchievementData *)((char *)AchievementData::~AchievementData(result) + 48);
    while ( v4 != result );
  }
  *((_DWORD *)v1 + 6) = v3;
  return result;
}


int __fastcall PlayerAchievementData::setTimePlayed(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall PlayerAchievementData::setCurrGamerScore(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


int __fastcall PlayerAchievementData::PlayerAchievementData(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall PlayerAchievementData::PlayerAchievementData(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = 0;
  v3 = a1 + 20;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  std::vector<AchievementData,std::allocator<AchievementData>>::operator=(a1 + 20, (unsigned __int64 *)(a2 + 20));
  return v2;
}


char *__fastcall PlayerAchievementData::addAchievementData(PlayerAchievementData *this, AchievementData *a2)
{
  PlayerAchievementData *v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = this;
  v3 = *((_QWORD *)this + 3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorI15AchievementDataSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (unsigned __int64 *)((char *)this + 20),
               (int *)a2);
  }
  else
    AchievementData::AchievementData((int *)v3, (int *)a2);
    result = (char *)(*((_DWORD *)v2 + 6) + 48);
    *((_DWORD *)v2 + 6) = result;
  return result;
}


int __fastcall PlayerAchievementData::setAchievementsUnlocked(int result, int a2)
{
  *(_DWORD *)result = a2;
  return result;
}
