

int __fastcall RedstoneScreenController::RedstoneScreenController(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r4@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  __int64 v13; // r0@21
  int v14; // r5@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  unsigned int *v17; // r6@28
  unsigned int v18; // r0@30
  int v19; // r5@35
  unsigned int *v20; // r1@36
  unsigned int v21; // r0@38
  unsigned int *v22; // r6@42
  unsigned int v23; // r0@44
  char v25; // [sp+8h] [bp-28h]@21
  int v26; // [sp+Ch] [bp-24h]@21
  int v27; // [sp+10h] [bp-20h]@1
  int v28; // [sp+14h] [bp-1Ch]@1
  __int64 v29; // [sp+18h] [bp-18h]@1

  v29 = a3;
  v4 = a1;
  v27 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v28 = v5;
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
  BlockContainerScreenController::BlockContainerScreenController(a1, (int)&v27, v29, HIDWORD(v29), a4);
  v8 = v28;
  if ( v28 )
    v9 = (unsigned int *)(v28 + 4);
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
  *(_DWORD *)v4 = &off_26E31D0;
  ContainerScreenController::createContainerManagerController<HopperContainerManagerModel,LevelContainerManagerController,EntityUniqueID const&>(
    (int)&v25,
    v4,
    &v29);
  v13 = *(_QWORD *)&v25;
  *(_DWORD *)&v25 = 0;
  v26 = 0;
  *(_DWORD *)(v4 + 628) = v13;
  v14 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v13);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return v4;
}


void __fastcall RedstoneScreenController::~RedstoneScreenController(RedstoneScreenController *this)
{
  ContainerScreenController *v1; // r0@1

  v1 = BlockContainerScreenController::~BlockContainerScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RedstoneScreenController::RedstoneScreenController(int a1, int a2, const BlockPos *a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r6@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  __int64 v15; // r0@24
  int v16; // r5@24
  unsigned int *v17; // r1@25
  unsigned int v18; // r0@27
  __int64 v19; // r0@29
  int v20; // r5@29
  unsigned int *v21; // r1@30
  unsigned int v22; // r0@32
  __int64 v23; // r0@34
  int v24; // r5@34
  unsigned int *v25; // r1@35
  unsigned int v26; // r0@37
  unsigned int *v27; // r6@41
  unsigned int v28; // r0@43
  unsigned int *v29; // r6@47
  unsigned int v30; // r0@49
  unsigned int *v31; // r6@53
  unsigned int v32; // r0@55
  int v33; // r5@60
  unsigned int *v34; // r1@61
  unsigned int v35; // r0@63
  unsigned int *v36; // r6@67
  unsigned int v37; // r0@69
  unsigned int *v38; // r1@75
  unsigned int v39; // r0@77
  unsigned int *v40; // r1@89
  unsigned int v41; // r0@91
  char v43; // [sp+4h] [bp-34h]@24
  int v44; // [sp+8h] [bp-30h]@24
  char v45; // [sp+Ch] [bp-2Ch]@34
  int v46; // [sp+10h] [bp-28h]@34
  char v47; // [sp+14h] [bp-24h]@29
  int v48; // [sp+18h] [bp-20h]@29
  int v49; // [sp+1Ch] [bp-1Ch]@1
  int v50; // [sp+20h] [bp-18h]@1

  v5 = a1;
  v49 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v50 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  BlockContainerScreenController::BlockContainerScreenController(v5, (int)&v49, a3, a5);
  v10 = v50;
  if ( v50 )
    v11 = (unsigned int *)(v50 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v5 = &off_26E31D0;
  if ( !v6 )
    ContainerScreenController::createContainerManagerController<HopperContainerManagerModel,LevelContainerManagerController,BlockPos &>(
      (int)&v45,
      v5,
      v5 + 488);
    v23 = *(_QWORD *)&v45;
    *(_DWORD *)&v45 = 0;
    v46 = 0;
    *(_DWORD *)(v5 + 628) = v23;
    v24 = *(_DWORD *)(v5 + 632);
    *(_DWORD *)(v5 + 632) = HIDWORD(v23);
    if ( v24 )
      v25 = (unsigned int *)(v24 + 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        v29 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
    v33 = v46;
    if ( !v46 )
      return v5;
    v38 = (unsigned int *)(v46 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 != 1 )
    v36 = (unsigned int *)(v33 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
    if ( !&pthread_create )
      goto LABEL_99;
    __dmb();
    do
      v37 = __ldrex(v36);
    while ( __strex(v37 - 1, v36) );
LABEL_100:
    if ( v37 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
    return v5;
  if ( v6 == 1 )
    ContainerScreenController::createContainerManagerController<DropperContainerManagerModel,LevelContainerManagerController,BlockPos &>(
      (int)&v47,
    v19 = *(_QWORD *)&v47;
    *(_DWORD *)&v47 = 0;
    v48 = 0;
    *(_DWORD *)(v5 + 628) = v19;
    v20 = *(_DWORD *)(v5 + 632);
    *(_DWORD *)(v5 + 632) = HIDWORD(v19);
    if ( v20 )
      v21 = (unsigned int *)(v20 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v27 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v33 = v48;
    if ( !v48 )
    v34 = (unsigned int *)(v48 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 != 1 )
    goto LABEL_100;
  if ( v6 == 2 )
    ContainerScreenController::createContainerManagerController<DispenserContainerManagerModel,LevelContainerManagerController,BlockPos &>(
      (int)&v43,
    v15 = *(_QWORD *)&v43;
    *(_DWORD *)&v43 = 0;
    v44 = 0;
    *(_DWORD *)(v5 + 628) = v15;
    v16 = *(_DWORD *)(v5 + 632);
    *(_DWORD *)(v5 + 632) = HIDWORD(v15);
    if ( v16 )
      v17 = (unsigned int *)(v16 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v31 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v33 = v44;
    if ( v44 )
      v40 = (unsigned int *)(v44 + 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        v36 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v33 + 8))(v33);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          goto LABEL_100;
LABEL_99:
        v37 = (*v36)--;
        goto LABEL_100;
  return v5;
}


void __fastcall RedstoneScreenController::~RedstoneScreenController(RedstoneScreenController *this)
{
  RedstoneScreenController::~RedstoneScreenController(this);
}
