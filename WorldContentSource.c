

int __fastcall WorldContentSource::generateItems(WorldContentSource *this, int a2)
{
  WorldContentSource *v2; // r8@1
  int v3; // r6@1
  int result; // r0@1
  int v5; // r7@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // r5@19
  bool v11; // zf@19
  void *v12; // r0@19
  void *v13; // r0@21
  __int64 v14; // r0@22
  void *v15; // r0@26
  int i; // [sp+10h] [bp-1B0h]@1
  void *v17; // [sp+1Ch] [bp-1A4h]@22
  int v18; // [sp+20h] [bp-1A0h]@3
  int v19; // [sp+24h] [bp-19Ch]@7
  char v20; // [sp+28h] [bp-198h]@19

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = *(_QWORD *)(a2 + 28) >> 32;
  v5 = *(_QWORD *)(a2 + 28);
  for ( i = result; v5 != i; result = i )
  {
    v10 = operator new(0x50u);
    WorldContentItem::WorldContentItem((int)v10, v3);
    EntityInteraction::setInteractText((int *)v10 + 4, (int *)(v5 + 4));
    *((_QWORD *)v10 + 3) = *(_QWORD *)(v5 + 32);
    *((_DWORD *)v10 + 8) = 1;
    *((_DWORD *)v10 + 9) = 0;
    (*(void (__fastcall **)(char *))(**(_DWORD **)(v3 + 24) + 20))(&v20);
    sub_21E8AF4(&v19, (int *)v5);
    EntityInteraction::setInteractText((int *)v10 + 15, &v19);
    *((_DWORD *)v10 + 18) = LevelData::getLastPlayed((LevelData *)&v20);
    v11 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) == 0;
    v12 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( !v11 )
      v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    (*(void (__fastcall **)(int *))(**(_DWORD **)v12 + 388))(&v18);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v10 + 17,
      &v18);
    v13 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v18 - 4);
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
        j_j_j_j__ZdlPv_9(v13);
    }
    *((_DWORD *)v10 + 19) = LevelData::getGameType((LevelData *)&v20);
    EntityInteraction::setInteractText((int *)v10 + 16, (int *)(v5 + 52));
    v17 = v10;
    v14 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v14 == HIDWORD(v14) )
      std::vector<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>,std::allocator<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>(
        v2,
        (int *)&v17);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    else
      v17 = 0;
      *(_DWORD *)v14 = v10;
      *((_DWORD *)v2 + 1) = v14 + 4;
    v15 = (void *)(v19 - 12);
    v17 = 0;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v19 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    LevelData::~LevelData((LevelData *)&v20);
    v5 += 64;
  }
  return result;
}


int __fastcall WorldContentSource::load(WorldContentSource *this)
{
  WorldContentSource *v1; // r5@1
  LevelSummary *v2; // r6@1
  LevelSummary *v3; // r7@1
  LevelSummary *v4; // r0@2

  v1 = this;
  v2 = (LevelSummary *)*((_DWORD *)this + 7);
  v3 = (LevelSummary *)*((_DWORD *)this + 8);
  if ( v3 != v2 )
  {
    v4 = (LevelSummary *)*((_DWORD *)this + 7);
    do
      v4 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v4) + 64);
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 8) = v2;
  return (*(int (**)(void))(**((_DWORD **)v1 + 6) + 12))();
}


WorldContentSource *__fastcall WorldContentSource::~WorldContentSource(WorldContentSource *this)
{
  WorldContentSource *v1; // r4@1
  LevelSummary *v2; // r0@1
  LevelSummary *v3; // r5@1
  void *v4; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E5078;
  v3 = (LevelSummary *)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (LevelSummary *)*(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
      v2 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v2) + 64);
    while ( v3 != v2 );
    v2 = (LevelSummary *)*((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_DWORD *)v1 = &off_26E5018;
  v4 = (void *)*((_DWORD *)v1 + 1);
  if ( v4 )
    operator delete(v4);
  return v1;
}


int __fastcall WorldContentSource::deleteContent(int result, _QWORD *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@2

  *(_QWORD *)&v2 = *a2;
  for ( i = result; v3 != v2; result = (*(int (**)(void))(**(_DWORD **)(i + 24) + 40))() )
  {
    v5 = *v2;
    ++v2;
  }
  return result;
}


int __fastcall WorldContentSource::WorldContentSource(int result, int a2)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 4LL;
  *(_DWORD *)result = &off_26E5078;
  *(_DWORD *)(result + 24) = a2;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


void __fastcall WorldContentSource::~WorldContentSource(WorldContentSource *this)
{
  WorldContentSource *v1; // r4@1
  LevelSummary *v2; // r0@1
  LevelSummary *v3; // r5@1
  void *v4; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E5078;
  v3 = (LevelSummary *)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (LevelSummary *)*(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
      v2 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v2) + 64);
    while ( v3 != v2 );
    v2 = (LevelSummary *)*((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_DWORD *)v1 = &off_26E5018;
  v4 = (void *)*((_DWORD *)v1 + 1);
  if ( v4 )
    operator delete(v4);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall WorldContentSource::~WorldContentSource(WorldContentSource *this)
{
  WorldContentSource::~WorldContentSource(this);
}
