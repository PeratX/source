

void __fastcall NoInvitesOrJoiningScreenController::~NoInvitesOrJoiningScreenController(NoInvitesOrJoiningScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall NoInvitesOrJoiningScreenController::~NoInvitesOrJoiningScreenController(NoInvitesOrJoiningScreenController *this)
{
  NoInvitesOrJoiningScreenController::~NoInvitesOrJoiningScreenController(this);
}


_DWORD *__fastcall NoInvitesOrJoiningScreenController::NoInvitesOrJoiningScreenController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v12 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v13 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  MinecraftScreenController::MinecraftScreenController((int)v2, (MinecraftScreenModel **)&v12);
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *v2 = &off_26E2858;
  return v2;
}


int __fastcall NoInvitesOrJoiningScreenController::onOpen(NoInvitesOrJoiningScreenController *this)
{
  ScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  __int64 v9; // r2@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  void *v12; // r0@23
  int v13; // r1@24
  void *v14; // r0@24
  int result; // r0@25
  unsigned int *v16; // r2@26
  unsigned int v17; // r1@28
  int v18; // r2@34
  signed int v19; // r1@36
  _QWORD *v20; // [sp+4h] [bp-3Ch]@13
  void (*v21)(void); // [sp+Ch] [bp-34h]@7
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+20h] [bp-20h]@1
  char v24; // [sp+24h] [bp-1Ch]@1
  int v25; // [sp+28h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<NoInvitesOrJoiningScreenController>((int)&v24, (int)this);
  sub_1590164((void **)&v23, (const char *)&unk_257BC67);
  sub_1590164((void **)&v22, "trial.noInvitesOrJoining");
  v2 = *(_QWORD *)&v24;
  if ( v25 )
  {
    v3 = (unsigned int *)(v25 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v21 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_11CF144;
  v20 = v5;
  HIDWORD(v8) = sub_11CF008;
  *(_QWORD *)&v21 = v8;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v23, &v22, 2, (int)&v20);
  HIDWORD(v9) = v21;
  if ( v21 )
    v21();
    v10 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        v11 = __ldrex(v10);
        HIDWORD(v9) = __strex(v11 - 1, v10);
      }
      while ( HIDWORD(v9) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v12 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = v22 - 4;
        v19 = __ldrex((unsigned int *)v9);
        HIDWORD(v9) = v19 - 1;
      while ( __strex(v19 - 1, (unsigned int *)v9) );
      v19 = *(_DWORD *)v9;
      HIDWORD(v9) = *(_DWORD *)v9 - 1;
      *(_DWORD *)v9 = HIDWORD(v9);
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
  v13 = v23;
  LODWORD(v9) = &dword_28898C0;
  v14 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    LODWORD(v9) = v23 - 4;
        v13 = __ldrex((unsigned int *)v9);
        HIDWORD(v9) = v13 - 1;
      while ( __strex(v13 - 1, (unsigned int *)v9) );
      v13 = *(_DWORD *)v9;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v14);
  ScreenController::onOpen(v1, v13, v9);
  result = v25;
    v16 = (unsigned int *)(v25 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}
