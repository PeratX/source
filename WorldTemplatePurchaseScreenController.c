

void __fastcall WorldTemplatePurchaseScreenController::_registerEventHandlers(WorldTemplatePurchaseScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  unsigned int *v34; // r2@36
  signed int v35; // r1@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  _DWORD *v38; // [sp+4h] [bp-A4h]@16
  __int64 v39; // [sp+Ch] [bp-9Ch]@16
  int v40; // [sp+18h] [bp-90h]@16
  _DWORD *v41; // [sp+1Ch] [bp-8Ch]@13
  __int64 v42; // [sp+24h] [bp-84h]@13
  int v43; // [sp+30h] [bp-78h]@13
  _DWORD *v44; // [sp+34h] [bp-74h]@10
  __int64 v45; // [sp+3Ch] [bp-6Ch]@10
  int v46; // [sp+48h] [bp-60h]@10
  _DWORD *v47; // [sp+4Ch] [bp-5Ch]@7
  __int64 v48; // [sp+54h] [bp-54h]@7
  int v49; // [sp+60h] [bp-48h]@7
  _DWORD *v50; // [sp+64h] [bp-44h]@4
  __int64 v51; // [sp+6Ch] [bp-3Ch]@4
  int v52; // [sp+78h] [bp-30h]@4
  _DWORD *v53; // [sp+7Ch] [bp-2Ch]@1
  __int64 v54; // [sp+84h] [bp-24h]@1
  int v55; // [sp+90h] [bp-18h]@1

  v1 = this;
  sub_DA7364((void **)&v55, "button.pan_left");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v55);
  v3 = operator new(4u);
  LODWORD(v4) = sub_CBD42E;
  *v3 = v1;
  HIDWORD(v4) = sub_CBD420;
  v53 = v3;
  v54 = v4;
  ScreenController::registerButtonEventHandler((int)v1, v2, 1, 0, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v5 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  sub_DA7364((void **)&v52, "button.pan_left");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v52);
  v7 = operator new(4u);
  LODWORD(v8) = sub_CBD472;
  *v7 = v1;
  HIDWORD(v8) = sub_CBD464;
  v50 = v7;
  v51 = v8;
  ScreenController::registerButtonEventHandler((int)v1, v6, 0, 1, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v9 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v52 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  sub_DA7364((void **)&v49, "button.pan_right");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v49);
  v11 = operator new(4u);
  LODWORD(v12) = sub_CBD4B6;
  *v11 = v1;
  HIDWORD(v12) = sub_CBD4A8;
  v47 = v11;
  v48 = v12;
  ScreenController::registerButtonEventHandler((int)v1, v10, 1, 0, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v13 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v49 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v46, "button.pan_right");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v15 = operator new(4u);
  LODWORD(v16) = sub_CBD4FA;
  *v15 = v1;
  HIDWORD(v16) = sub_CBD4EC;
  v44 = v15;
  v45 = v16;
  ScreenController::registerButtonEventHandler((int)v1, v14, 0, 1, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v17 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v43, "button.scroll_map");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v43);
  v19 = operator new(4u);
  LODWORD(v20) = sub_CBD53E;
  *v19 = v1;
  HIDWORD(v20) = sub_CBD530;
  v41 = v19;
  v42 = v20;
  ScreenController::registerButtonEventHandler((int)v1, v18, 1, 0, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  sub_DA7364((void **)&v40, "button.scroll_map");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v23 = operator new(4u);
  LODWORD(v24) = sub_CBD582;
  *v23 = v1;
  HIDWORD(v24) = sub_CBD574;
  v38 = v23;
  v39 = v24;
  ScreenController::registerButtonEventHandler((int)v1, v22, 0, 1, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v25 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
}


void __fastcall WorldTemplatePurchaseScreenController::_registerEventHandlers(WorldTemplatePurchaseScreenController *this)
{
  WorldTemplatePurchaseScreenController::_registerEventHandlers(this);
}


int __fastcall WorldTemplatePurchaseScreenController::WorldTemplatePurchaseScreenController(int a1, int a2, _DWORD *a3)
{
  int v3; // r4@1
  _DWORD *v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r5@21
  unsigned __int64 *v14; // r0@21
  WorldTemplateInfo *v15; // r0@21
  int v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v17 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v18 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v17);
  v8 = v18;
  if ( v18 )
    v9 = (unsigned int *)(v18 + 4);
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
  *(_DWORD *)v3 = &off_26D7DB4;
  *(_BYTE *)(v3 + 433) = 0;
  *(_DWORD *)(v3 + 436) = 0;
  *(_DWORD *)(v3 + 440) = 0;
  *(_DWORD *)(v3 + 444) = 1101004800;
  *(_DWORD *)(v3 + 448) = *v4;
  WorldTemplatePurchaseScreenController::_registerEventHandlers((WorldTemplatePurchaseScreenController *)v3);
  WorldTemplatePurchaseScreenController::_registerBindings((WorldTemplatePurchaseScreenController *)v3);
  v13 = *(_DWORD *)(v3 + 424);
  v14 = (unsigned __int64 *)StoreCatalogItemModel::getPackIdentities((StoreCatalogItemModel *)(v3 + 448));
  v15 = MainMenuScreenModel::findWorldTemplateByPackId(v13, v14);
  if ( v15 )
    LOBYTE(v15) = 1;
  *(_BYTE *)(v3 + 432) = (_BYTE)v15;
  return v3;
}


int __fastcall WorldTemplatePurchaseScreenController::tick(WorldTemplatePurchaseScreenController *this)
{
  int result; // r0@1
  int v3; // r1@1

  _R4 = this;
  result = MinecraftScreenController::tick(this);
  v3 = *((_DWORD *)_R4 + 109);
  if ( v3 == 2 )
  {
    result |= 1u;
    *((_DWORD *)_R4 + 110) = *((_DWORD *)_R4 + 111);
  }
  else if ( v3 == 1 )
    __asm { VLDR            S0, [R4,#0x1BC] }
    __asm
    {
      VNEG.F32        S0, S0
      VSTR            S0, [R4,#0x1B8]
    }
  else
    *((_DWORD *)_R4 + 110) = 0;
  return result;
}


void __fastcall WorldTemplatePurchaseScreenController::~WorldTemplatePurchaseScreenController(WorldTemplatePurchaseScreenController *this)
{
  WorldTemplatePurchaseScreenController::~WorldTemplatePurchaseScreenController(this);
}


void __fastcall WorldTemplatePurchaseScreenController::~WorldTemplatePurchaseScreenController(WorldTemplatePurchaseScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MainMenuScreenController::~MainMenuScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


signed int __fastcall WorldTemplatePurchaseScreenController::_registerBindings(WorldTemplatePurchaseScreenController *this)
{
  WorldTemplatePurchaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  signed int result; // r0@9
  _DWORD *v11; // [sp+4h] [bp-64h]@9
  __int64 v12; // [sp+Ch] [bp-5Ch]@9
  int v13; // [sp+14h] [bp-54h]@9
  void *v14; // [sp+18h] [bp-50h]@5
  __int64 v15; // [sp+20h] [bp-48h]@5
  _DWORD *v16; // [sp+28h] [bp-40h]@5
  __int64 v17; // [sp+30h] [bp-38h]@5
  int v18; // [sp+38h] [bp-30h]@5
  void *v19; // [sp+3Ch] [bp-2Ch]@1
  __int64 v20; // [sp+44h] [bp-24h]@1
  _DWORD *v21; // [sp+4Ch] [bp-1Ch]@1
  __int64 v22; // [sp+54h] [bp-14h]@1
  int v23; // [sp+5Ch] [bp-Ch]@1

  v1 = this;
  v23 = -996779771;
  v2 = operator new(4u);
  LODWORD(v3) = sub_CBD5D4;
  *v2 = v1;
  HIDWORD(v3) = sub_CBD5B8;
  v21 = v2;
  v22 = v3;
  v19 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v20 = v4;
  ScreenController::bindString((int)v1, &v23, (int)&v21, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  StringHash::StringHash<char [30]>(&v18, (int)"#panorama_texture_file_system");
  v5 = operator new(4u);
  LODWORD(v6) = sub_CBD636;
  *v5 = v1;
  HIDWORD(v6) = sub_CBD60A;
  v16 = v5;
  v17 = v6;
  v14 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v15 = v7;
  ScreenController::bindString((int)v1, &v18, (int)&v16, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  v13 = -626790949;
  v8 = operator new(4u);
  LODWORD(v9) = sub_CBD6AC;
  *v8 = v1;
  HIDWORD(v9) = sub_CBD66C;
  v11 = v8;
  v12 = v9;
  result = ScreenController::bindForGlobal((int)v1, &v13, (int)&v11);
  if ( (_DWORD)v12 )
    result = ((int (*)(void))v12)();
  return result;
}


int __fastcall WorldTemplatePurchaseScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = ScreenController::handleGameEventNotification(a1);
  if ( v2 == 14 )
    result |= 1u;
  return result;
}
