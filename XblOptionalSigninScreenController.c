

const void **__fastcall XblOptionalSigninScreenController::getAdditionalScreenInfo(XblOptionalSigninScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E6FCC((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 424) - 12) + 3);
  sub_21E7408(v2, " - ", 3u);
  return sub_21E72F0(v2, (const void **)(v3 + 424));
}


void __fastcall XblOptionalSigninScreenController::~XblOptionalSigninScreenController(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController *v1; // r0@1

  v1 = XblOptionalSigninScreenController::~XblOptionalSigninScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall XblOptionalSigninScreenController::_registerEventHandlers(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController *v1; // r4@1
  void (__fastcall *v2)(char *, char *, signed int); // r3@1
  int v3; // r8@3
  void (__fastcall *v4)(int *, char *, signed int); // r6@3
  void *v5; // r0@5
  int v6; // r1@5
  void *v7; // r0@9
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+4h] [bp-54h]@4
  void (__fastcall *v11)(int *, int *, signed int); // [sp+Ch] [bp-4Ch]@3
  int v12; // [sp+10h] [bp-48h]@4
  void *v13; // [sp+14h] [bp-44h]@5
  void (*v14)(void); // [sp+1Ch] [bp-3Ch]@5
  signed int (__fastcall *v15)(int **); // [sp+20h] [bp-38h]@5
  int v16; // [sp+28h] [bp-30h]@3
  char v17; // [sp+2Ch] [bp-2Ch]@2
  void (__fastcall *v18)(int *, char *, signed int); // [sp+34h] [bp-24h]@1
  int v19; // [sp+38h] [bp-20h]@2

  v1 = this;
  v18 = 0;
  v2 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)this + 112);
  if ( v2 )
  {
    v2(&v17, (char *)this + 440, 2);
    v19 = *((_DWORD *)v1 + 113);
    v18 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v1 + 112);
  }
  sub_21E94B4((void **)&v16, "button.xbl_signin");
  v3 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v4 = 0;
  v11 = 0;
  if ( v18 )
    v18(&v10, &v17, 2);
    v4 = v18;
    v12 = v19;
    v11 = (void (__fastcall *)(int *, int *, signed int))v18;
  v14 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v1;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v10;
  v6 = v12;
  *((_DWORD *)v5 + 3) = v4;
  *((_DWORD *)v5 + 4) = v6;
  v13 = v5;
  v14 = (void (*)(void))sub_12ABD94;
  v15 = sub_12ABB28;
  ScreenController::registerButtonClickHandler((int)v1, v3, (int)&v13);
  if ( v14 )
    v14();
  if ( v11 )
    v11(&v10, &v10, 3);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
    ((void (*)(void))v18)();
}


int __fastcall XblOptionalSigninScreenController::XblOptionalSigninScreenController(int a1, int a2, int *a3, int *a4, int *a5, int *a6, int a7)
{
  int v7; // r4@1
  int *v8; // r8@1
  int v9; // r0@1
  int *v10; // r7@1
  unsigned int *v11; // r0@2
  unsigned int v12; // r1@4
  int v13; // r5@7
  unsigned int *v14; // r1@8
  unsigned int v15; // r0@10
  unsigned int *v16; // r6@14
  unsigned int v17; // r0@16
  void (__fastcall *v18)(int, int, signed int); // r3@21
  int v20; // [sp+4h] [bp-3Ch]@1
  int v21; // [sp+8h] [bp-38h]@1

  v7 = a1;
  v20 = *(_DWORD *)a2;
  v8 = a4;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = a3;
  v21 = v9;
  if ( v9 )
  {
    v11 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  }
  MinecraftScreenController::MinecraftScreenController(v7, (MinecraftScreenModel **)&v20);
  v13 = v21;
  if ( v21 )
    v14 = (unsigned int *)(v21 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  *(_DWORD *)v7 = &off_26E453C;
  sub_21E8AF4((int *)(v7 + 424), v10);
  sub_21E8AF4((int *)(v7 + 428), v8);
  sub_21E8AF4((int *)(v7 + 432), a5);
  sub_21E8AF4((int *)(v7 + 436), a6);
  *(_DWORD *)(v7 + 448) = 0;
  v18 = *(void (__fastcall **)(int, int, signed int))(a7 + 8);
  if ( v18 )
    v18(v7 + 440, a7, 2);
    *(_DWORD *)(v7 + 452) = *(_DWORD *)(a7 + 12);
    *(_DWORD *)(v7 + 448) = *(_DWORD *)(a7 + 8);
  XblOptionalSigninScreenController::_registerEventHandlers((XblOptionalSigninScreenController *)v7);
  XblOptionalSigninScreenController::_registerBindings((XblOptionalSigninScreenController *)v7);
  return v7;
}


XblOptionalSigninScreenController *__fastcall XblOptionalSigninScreenController::~XblOptionalSigninScreenController(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController *v1; // r5@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22

  v1 = this;
  *(_DWORD *)this = &off_26E453C;
  v2 = (void (*)(void))*((_DWORD *)this + 112);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 109);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 108);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 107);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 106);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall XblOptionalSigninScreenController::_registerEventHandlers(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController::_registerEventHandlers(this);
}


void __fastcall XblOptionalSigninScreenController::_registerBindings(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  void *v11; // [sp+4h] [bp-74h]@9
  __int64 v12; // [sp+Ch] [bp-6Ch]@9
  _DWORD *v13; // [sp+14h] [bp-64h]@9
  __int64 v14; // [sp+1Ch] [bp-5Ch]@9
  int v15; // [sp+24h] [bp-54h]@9
  void *v16; // [sp+28h] [bp-50h]@5
  __int64 v17; // [sp+30h] [bp-48h]@5
  _DWORD *v18; // [sp+38h] [bp-40h]@5
  __int64 v19; // [sp+40h] [bp-38h]@5
  int v20; // [sp+48h] [bp-30h]@5
  void *v21; // [sp+4Ch] [bp-2Ch]@1
  __int64 v22; // [sp+54h] [bp-24h]@1
  _DWORD *v23; // [sp+5Ch] [bp-1Ch]@1
  __int64 v24; // [sp+64h] [bp-14h]@1
  int v25; // [sp+6Ch] [bp-Ch]@1

  v1 = this;
  v25 = -1190795852;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12AC396;
  *v2 = v1;
  HIDWORD(v3) = sub_12AC386;
  v23 = v2;
  v24 = v3;
  v21 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v22 = v4;
  ScreenController::bindString((int)v1, &v25, (int)&v23, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v20 = -883927847;
  v5 = operator new(4u);
  LODWORD(v6) = sub_12AC62C;
  *v5 = v1;
  HIDWORD(v6) = sub_12AC3CC;
  v18 = v5;
  v19 = v6;
  v16 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v17 = v7;
  ScreenController::bindString((int)v1, &v20, (int)&v18, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  v15 = 1126334437;
  v8 = operator new(4u);
  LODWORD(v9) = sub_12AC672;
  *v8 = v1;
  HIDWORD(v9) = sub_12AC662;
  v13 = v8;
  v14 = v9;
  v11 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v12 = v10;
  ScreenController::bindString((int)v1, &v15, (int)&v13, (int)&v11);
  if ( (_DWORD)v12 )
    ((void (*)(void))v12)();
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
}


void __fastcall XblOptionalSigninScreenController::_registerBindings(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController::_registerBindings(this);
}


void __fastcall XblOptionalSigninScreenController::~XblOptionalSigninScreenController(XblOptionalSigninScreenController *this)
{
  XblOptionalSigninScreenController::~XblOptionalSigninScreenController(this);
}
