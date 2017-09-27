

void __fastcall CellularDataWarningScreenController::~CellularDataWarningScreenController(CellularDataWarningScreenController *this)
{
  CellularDataWarningScreenController::~CellularDataWarningScreenController(this);
}


ScreenController *__fastcall CellularDataWarningScreenController::~CellularDataWarningScreenController(CellularDataWarningScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E10F0;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  return j_j_j__ZN25MinecraftScreenControllerD2Ev(v1);
}


int __fastcall CellularDataWarningScreenController::CellularDataWarningScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  void (__fastcall *v13)(int, int, signed int); // r3@21
  int v15; // [sp+4h] [bp-1Ch]@1
  int v16; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v15 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v16 = v5;
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
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v15);
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
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
  *(_DWORD *)v3 = &off_26E10F0;
  *(_DWORD *)(v3 + 432) = 0;
  v13 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v13 )
    v13(v3 + 424, v4, 2);
    *(_DWORD *)(v3 + 436) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 432) = *(_DWORD *)(v4 + 8);
  return v3;
}


int __fastcall CellularDataWarningScreenController::onOpen(CellularDataWarningScreenController *this)
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
  MinecraftScreenController::_getWeakPtrToThis<CellularDataWarningScreenController>((int)&v24, (int)this);
  sub_119C884((void **)&v23, "options.allowCellularData");
  sub_119C884((void **)&v22, "options.cellularDataWarningLabel");
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
  LODWORD(v8) = sub_1140144;
  v20 = v5;
  HIDWORD(v8) = sub_113FFF0;
  *(_QWORD *)&v21 = v8;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v23, &v22, 1, (int)&v20);
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
      j_j_j_j_j__ZdlPv_9_1(v12);
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
      j_j_j_j_j__ZdlPv_9_1(v14);
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


void __fastcall CellularDataWarningScreenController::~CellularDataWarningScreenController(CellularDataWarningScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E10F0;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
