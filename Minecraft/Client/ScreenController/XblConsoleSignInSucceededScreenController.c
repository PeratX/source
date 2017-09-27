

void __fastcall XblConsoleSignInSucceededScreenController::_registerBindings(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController::_registerBindings(this);
}


void __fastcall XblConsoleSignInSucceededScreenController::_registerEventHandlers(XblConsoleSignInSucceededScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "button.play");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12A363E;
  *v3 = v1;
  HIDWORD(v4) = sub_12A3618;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall XblConsoleSignInSucceededScreenController::_registerEventHandlers(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController::_registerEventHandlers(this);
}


void __fastcall XblConsoleSignInSucceededScreenController::~XblConsoleSignInSucceededScreenController(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController::~XblConsoleSignInSucceededScreenController(this);
}


void __fastcall XblConsoleSignInSucceededScreenController::_registerBindings(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  void *v20; // [sp+0h] [bp-E0h]@21
  __int64 v21; // [sp+8h] [bp-D8h]@21
  _DWORD *v22; // [sp+10h] [bp-D0h]@21
  __int64 v23; // [sp+18h] [bp-C8h]@21
  int v24; // [sp+20h] [bp-C0h]@21
  void *v25; // [sp+24h] [bp-BCh]@17
  __int64 v26; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v27; // [sp+34h] [bp-ACh]@17
  __int64 v28; // [sp+3Ch] [bp-A4h]@17
  int v29; // [sp+44h] [bp-9Ch]@17
  void *v30; // [sp+48h] [bp-98h]@13
  __int64 v31; // [sp+50h] [bp-90h]@13
  _DWORD *v32; // [sp+58h] [bp-88h]@13
  __int64 v33; // [sp+60h] [bp-80h]@13
  int v34; // [sp+68h] [bp-78h]@13
  void *v35; // [sp+6Ch] [bp-74h]@9
  __int64 v36; // [sp+74h] [bp-6Ch]@9
  _DWORD *v37; // [sp+7Ch] [bp-64h]@9
  __int64 v38; // [sp+84h] [bp-5Ch]@9
  int v39; // [sp+8Ch] [bp-54h]@9
  void *v40; // [sp+90h] [bp-50h]@5
  __int64 v41; // [sp+98h] [bp-48h]@5
  _DWORD *v42; // [sp+A0h] [bp-40h]@5
  __int64 v43; // [sp+A8h] [bp-38h]@5
  int v44; // [sp+B0h] [bp-30h]@5
  void *v45; // [sp+B4h] [bp-2Ch]@1
  __int64 v46; // [sp+BCh] [bp-24h]@1
  _DWORD *v47; // [sp+C4h] [bp-1Ch]@1
  __int64 v48; // [sp+CCh] [bp-14h]@1
  int v49; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v49 = 1884807043;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12A3684;
  *v2 = v1;
  HIDWORD(v3) = sub_12A3674;
  v47 = v2;
  v48 = v3;
  v45 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v4;
  ScreenController::bindBool((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = 1079499362;
  v5 = operator new(4u);
  LODWORD(v6) = sub_12A383C;
  *v5 = v1;
  HIDWORD(v6) = sub_12A36BC;
  v42 = v5;
  v43 = v6;
  v40 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v41 = v7;
  ScreenController::bindString((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v39 = -343735763;
  v8 = operator new(4u);
  LODWORD(v9) = sub_12A3892;
  *v8 = v1;
  HIDWORD(v9) = sub_12A3872;
  v37 = v8;
  v38 = v9;
  v35 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v10;
  ScreenController::bindString((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  StringHash::StringHash<char [23]>(&v34, (int)"#texture_location_type");
  v11 = operator new(4u);
  LODWORD(v12) = sub_12A3902;
  *v11 = v1;
  HIDWORD(v12) = sub_12A38C8;
  v32 = v11;
  v33 = v12;
  v30 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v31 = v13;
  ScreenController::bindString((int)v1, &v34, (int)&v32, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v29 = 486579846;
  v14 = operator new(4u);
  LODWORD(v15) = sub_12A3948;
  *v14 = v1;
  HIDWORD(v15) = sub_12A3938;
  v27 = v14;
  v28 = v15;
  v25 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v26 = v16;
  ScreenController::bindString((int)v1, &v29, (int)&v27, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  v24 = 499656167;
  v17 = operator new(4u);
  LODWORD(v18) = sub_12A399C;
  *v17 = v1;
  HIDWORD(v18) = sub_12A397E;
  v22 = v17;
  v23 = v18;
  v20 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v21 = v19;
  ScreenController::bindString((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
}


int __fastcall XblConsoleSignInSucceededScreenController::XblConsoleSignInSucceededScreenController(int a1, int a2, _DWORD *a3, int a4, char a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  _DWORD *v8; // r8@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r7@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  void (__fastcall *v16)(int, int, signed int); // r3@21
  int v18; // [sp+8h] [bp-28h]@1
  int v19; // [sp+Ch] [bp-24h]@1

  v5 = a1;
  v18 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v19 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  MinecraftScreenController::MinecraftScreenController(v5, (MinecraftScreenModel **)&v18);
  v11 = v19;
  if ( v19 )
    v12 = (unsigned int *)(v19 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E430C;
  sub_21E94B4((void **)(v5 + 424), "textures/ui/gamerpic");
  *(_DWORD *)(v5 + 428) = &unk_28898CC;
  *(_BYTE *)(v5 + 432) = 0;
  *(_BYTE *)(v5 + 433) = a5;
  *(_DWORD *)(v5 + 436) = *v8;
  *(_DWORD *)(v5 + 448) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v16 )
    v16(v5 + 440, v6, 2);
    *(_DWORD *)(v5 + 452) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v5 + 448) = *(_DWORD *)(v6 + 8);
  XblConsoleSignInSucceededScreenController::_registerEventHandlers((XblConsoleSignInSucceededScreenController *)v5);
  XblConsoleSignInSucceededScreenController::_registerBindings((XblConsoleSignInSucceededScreenController *)v5);
  return v5;
}


XblConsoleSignInSucceededScreenController *__fastcall XblConsoleSignInSucceededScreenController::~XblConsoleSignInSucceededScreenController(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E430C;
  v2 = (void (*)(void))*((_DWORD *)this + 112);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 107);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 106);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall XblConsoleSignInSucceededScreenController::onOpen(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  void *v12; // r0@23
  int result; // r0@24
  unsigned int *v14; // r2@25
  unsigned int v15; // r1@27
  unsigned int *v16; // r2@33
  signed int v17; // r1@35
  _QWORD *v18; // [sp+0h] [bp-30h]@13
  void (*v19)(void); // [sp+8h] [bp-28h]@7
  int v20; // [sp+10h] [bp-20h]@1
  char v21; // [sp+14h] [bp-1Ch]@1
  int v22; // [sp+18h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<XblConsoleSignInSucceededScreenController>((int)&v21, (int)this);
  v2 = *((_DWORD *)v1 + 95);
  MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v20, *((_DWORD *)v1 + 95));
  v3 = *(_QWORD *)&v21;
  if ( v22 )
  {
    v4 = (unsigned int *)(v22 + 8);
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
  v19 = 0;
  v6 = operator new(8u);
  *v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_12A3574;
  v18 = v6;
  HIDWORD(v9) = sub_12A33D8;
  *(_QWORD *)&v19 = v9;
  MinecraftScreenModel::getProfile(v2, (_BYTE **)&v20, (int)&v18);
  if ( v19 )
    v19();
    v10 = (unsigned int *)(HIDWORD(v3) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  result = v22;
    v14 = (unsigned int *)(v22 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall XblConsoleSignInSucceededScreenController::tick(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 432) )
  {
    *((_BYTE *)v1 + 432) = 0;
    result |= 1u;
  }
  return result;
}


void __fastcall XblConsoleSignInSucceededScreenController::~XblConsoleSignInSucceededScreenController(XblConsoleSignInSucceededScreenController *this)
{
  XblConsoleSignInSucceededScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E430C;
  v2 = (void (*)(void))*((_DWORD *)this + 112);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 107);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 106);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}
