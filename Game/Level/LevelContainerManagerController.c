

int __fastcall LevelContainerManagerController::isContainerValid(LevelContainerManagerController *this, float a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (LevelContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = (*(int (**)(void))(*(_DWORD *)this + 48))();
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall LevelContainerManagerController::~LevelContainerManagerController(LevelContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECED0;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  ContainerManagerController::~ContainerManagerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall LevelContainerManagerController::LevelContainerManagerController(unsigned int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r6@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@8
  unsigned int *v8; // r0@8
  unsigned int v9; // r2@11
  unsigned int v10; // r3@12
  unsigned int v11; // r1@13
  signed int v12; // r0@13
  int v13; // r1@17
  unsigned int *v14; // r1@20
  unsigned int v15; // r0@22
  unsigned int *v16; // r7@26
  unsigned int v17; // r0@28
  int v18; // r0@33
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  int v21; // r0@41
  unsigned int *v22; // r0@42
  unsigned int v23; // r1@44
  int v25; // [sp+4h] [bp-1Ch]@19
  int v26; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v26 = v4;
  if ( !v4 )
    goto LABEL_16;
  v5 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
  {
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 )
      goto LABEL_16;
  }
  else
    ++*v5;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = (unsigned int *)(v4 + 4);
  while ( v7 )
    v9 = __ldrex(v8);
    if ( v9 == v7 )
    {
      v10 = __strex(v7 + 1, v8);
      v7 = v9;
      if ( !v10 )
      {
        __dmb();
        v11 = *v8;
        v12 = 0;
        if ( !v11 )
          v12 = 1;
        goto LABEL_17;
      }
    }
    else
      __clrex();
LABEL_16:
  v12 = 1;
  v4 = 0;
LABEL_17:
  v13 = *(_DWORD *)v2;
  if ( v12 )
    v13 = 0;
  v25 = v13;
  if ( v4 )
    v14 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  ContainerManagerController::ContainerManagerController(COERCE_DOUBLE(__PAIR__(&v25, v3)));
  v18 = v26;
  if ( v26 )
    v19 = (unsigned int *)(v26 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v3 = &off_26ECED0;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  return v3;
}


void __fastcall LevelContainerManagerController::~LevelContainerManagerController(LevelContainerManagerController *this)
{
  LevelContainerManagerController::~LevelContainerManagerController(this);
}


ContainerManagerController *__fastcall LevelContainerManagerController::~LevelContainerManagerController(LevelContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECED0;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return j_j_j__ZN26ContainerManagerControllerD2Ev(v1);
}
