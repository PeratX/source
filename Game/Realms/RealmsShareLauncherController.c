

int __fastcall RealmsShareLauncherController::RealmsShareLauncherController(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v14 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v15 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v14);
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E302C;
  *(_DWORD *)(v3 + 424) = &unk_28898CC;
  *(_BYTE *)(v3 + 428) = 0;
  EntityInteraction::setInteractText((int *)(v3 + 424), v4);
  return v3;
}


void __fastcall RealmsShareLauncherController::~RealmsShareLauncherController(RealmsShareLauncherController *this)
{
  RealmsShareLauncherController::~RealmsShareLauncherController(this);
}


int *__fastcall RealmsShareLauncherController::onOpen(RealmsShareLauncherController *this, unsigned int *a2, __int64 a3)
{
  RealmsShareLauncherController *v3; // r4@1
  int v4; // r0@3
  unsigned int *v5; // r0@4
  unsigned int v6; // r1@6
  _DWORD *v7; // r0@8
  __int64 v8; // r1@8
  unsigned int *v9; // r0@11
  int v10; // r5@12
  unsigned int v11; // r0@15
  unsigned int *v12; // r6@19
  unsigned int v13; // r0@21
  unsigned int *v15; // [sp+0h] [bp-30h]@11
  int v16; // [sp+4h] [bp-2Ch]@3
  int v17; // [sp+8h] [bp-28h]@3
  _DWORD *v18; // [sp+Ch] [bp-24h]@8
  __int64 v19; // [sp+14h] [bp-1Ch]@8

  v3 = this;
  if ( !*((_BYTE *)this + 428) )
  {
    *((_BYTE *)this + 428) = 1;
    if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)this + 95)) )
    {
      v16 = *((_DWORD *)v3 + 95);
      v4 = *((_DWORD *)v3 + 96);
      v17 = v4;
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 + 1, v5) );
        }
        else
          ++*v5;
      }
      sub_21E8AF4((int *)&v15, (int *)v3 + 106);
      RealmsShareLauncherController::findAndJoinRealm((int)v3, (MinecraftScreenModel **)&v16, (int *)&v15);
      a2 = v15;
      LODWORD(a3) = &dword_28898C0;
      v9 = v15 - 3;
      if ( (int *)(v15 - 3) != &dword_28898C0 )
        LODWORD(a3) = v15 - 1;
          {
            a2 = (unsigned int *)__ldrex((unsigned int *)a3);
            HIDWORD(a3) = (char *)a2 - 1;
          }
          while ( __strex((unsigned int)a2 - 1, (unsigned int *)a3) );
          a2 = *(unsigned int **)a3;
          HIDWORD(a3) = *(_DWORD *)a3 - 1;
          *(_DWORD *)a3 = HIDWORD(a3);
        if ( (signed int)a2 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = v17;
      if ( v17 )
        a2 = (unsigned int *)(v17 + 4);
            v11 = __ldrex(a2);
            LODWORD(a3) = v11 - 1;
            HIDWORD(a3) = __strex(v11 - 1, a2);
          while ( HIDWORD(a3) );
          v11 = *a2;
          LODWORD(a3) = *a2 - 1;
          *a2 = a3;
        if ( v11 == 1 )
          v12 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
            __dmb();
            do
            {
              v13 = __ldrex(v12);
              a2 = (unsigned int *)(v13 - 1);
              LODWORD(a3) = __strex(v13 - 1, v12);
            }
            while ( (_DWORD)a3 );
          else
            v13 = *v12;
            a2 = (unsigned int *)(*v12 - 1);
            *v12 = (unsigned int)a2;
          if ( v13 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    }
    else
      v7 = operator new(4u);
      LODWORD(v8) = sub_120A2FC;
      *v7 = v3;
      HIDWORD(v8) = sub_120A034;
      v18 = v7;
      v19 = v8;
      MinecraftScreenController::_attemptSignIn((int)v3, (int)&v18);
      HIDWORD(a3) = v19;
      if ( (_DWORD)v19 )
        ((void (*)(void))v19)();
  }
  return ScreenController::onOpen(v3, (int)a2, a3);
}


MinecraftScreenController *__fastcall RealmsShareLauncherController::~RealmsShareLauncherController(RealmsShareLauncherController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E302C;
  v2 = *((_DWORD *)this + 106);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall RealmsShareLauncherController::findAndJoinRealm(int a1, MinecraftScreenModel **a2, int *a3)
{
  MinecraftScreenModel **v3; // r7@1
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // r4@2
  int v7; // r0@2
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  int v10; // r4@7
  void *v11; // r0@7
  void *v12; // r0@8
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r0@15
  unsigned int v16; // r1@17
  _DWORD *v17; // r0@20
  int v18; // r1@20
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int v21; // r0@25
  unsigned int *v22; // r5@29
  unsigned int v23; // r0@31
  char *v24; // r0@36
  void *v25; // r0@37
  int v26; // r4@38
  unsigned int *v27; // r1@39
  unsigned int v28; // r0@41
  unsigned int *v29; // r5@45
  unsigned int v30; // r0@47
  unsigned int *v31; // r2@54
  signed int v32; // r1@56
  unsigned int *v33; // r2@58
  signed int v34; // r1@60
  unsigned int *v35; // r2@62
  signed int v36; // r1@64
  int v37; // [sp+4h] [bp-5Ch]@14
  char *v38; // [sp+8h] [bp-58h]@14
  MinecraftScreenModel *v39; // [sp+Ch] [bp-54h]@14
  int v40; // [sp+10h] [bp-50h]@14
  _DWORD *v41; // [sp+14h] [bp-4Ch]@20
  void (*v42)(void); // [sp+1Ch] [bp-44h]@20
  Realms::World *(__fastcall *v43)(int *, int, int); // [sp+20h] [bp-40h]@20
  int v44; // [sp+24h] [bp-3Ch]@14
  int v45; // [sp+28h] [bp-38h]@2
  int v46; // [sp+2Ch] [bp-34h]@2
  MinecraftScreenModel *v47; // [sp+30h] [bp-30h]@2
  int v48; // [sp+34h] [bp-2Ch]@2
  int v49; // [sp+3Ch] [bp-24h]@7
  int v50; // [sp+44h] [bp-1Ch]@7

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( MinecraftScreenModel::isValidMultiplayerSkin(*a2) )
  {
    v45 = v4;
    sub_21E8AF4(&v46, v5);
    v6 = (int)*v3;
    v47 = *v3;
    v7 = (int)v3[1];
    v48 = v7;
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        v6 = (int)*v3;
      }
      else
        ++*v8;
    }
    sub_21E8AF4(&v44, v5);
    v37 = v45;
    sub_21E8AF4((int *)&v38, &v46);
    v39 = v47;
    v40 = v48;
    if ( v48 )
      v15 = (unsigned int *)(v48 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    v42 = 0;
    v17 = operator new(0x10u);
    *v17 = v37;
    v17[1] = v38;
    v38 = (char *)&unk_28898CC;
    v17[2] = v39;
    v18 = v40;
    v40 = 0;
    v17[3] = v18;
    v39 = 0;
    v41 = v17;
    v42 = (void (*)(void))sub_120AF48;
    v43 = sub_120A374;
    MinecraftScreenModel::getWorldfromLink(v6, (const void **)&v44, (int)&v41);
    if ( v42 )
      v42();
    v19 = v40;
    if ( v40 )
      v20 = (unsigned int *)(v40 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    v24 = v38 - 12;
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v38 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v44 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = v48;
      v27 = (unsigned int *)(v48 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v12 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      return;
    v13 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_71;
LABEL_70:
    v14 = (*v13)--;
LABEL_71:
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
    return;
  }
  v10 = (int)*v3;
  sub_21E94B4((void **)&v50, "disconnectionScreen.lockedSkin.title");
  sub_21E94B4((void **)&v49, "disconnectionScreen.lockedSkin");
  MinecraftScreenModel::navigateToDisconnectScreen(v10, &v50, &v49);
  v11 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v49 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v50 - 4);
    goto LABEL_70;
}


void __fastcall RealmsShareLauncherController::findAndJoinRealm(int a1, MinecraftScreenModel **a2, int *a3)
{
  RealmsShareLauncherController::findAndJoinRealm(a1, a2, a3);
}


void __fastcall RealmsShareLauncherController::~RealmsShareLauncherController(RealmsShareLauncherController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E302C;
  v2 = *((_DWORD *)this + 106);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}
