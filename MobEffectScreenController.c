

int __fastcall MobEffectScreenController::addStaticScreenVars(MobEffectScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  MobEffectScreenController *v3; // r5@1
  int v4; // r6@1
  char v5; // r0@1
  int v7; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$is_left_handed");
  v5 = MinecraftScreenModel::isLeftHanded(*((MinecraftScreenModel **)v3 + 106));
  Json::Value::Value((Json::Value *)&v7, v5);
  Json::Value::operator=(v4, (const Json::Value *)&v7);
  Json::Value::~Value((Json::Value *)&v7);
  return ScreenController::addStaticScreenVars(v3, v2);
}


MobEffectScreenController *__fastcall MobEffectScreenController::~MobEffectScreenController(MobEffectScreenController *this)
{
  MobEffectScreenController *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int v10; // r1@20
  void *v11; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_26E27CC;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 436);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 8);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v9);
      }
      v10 = *(_DWORD *)(v2 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v11);
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 109);
  }
  if ( v2 )
    operator delete((void *)v2);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall MobEffectScreenController::~MobEffectScreenController(MobEffectScreenController *this)
{
  MobEffectScreenController *v1; // r0@1

  v1 = MobEffectScreenController::~MobEffectScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall MobEffectScreenController::MobEffectScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+4h] [bp-34h]@1
  int v13; // [sp+8h] [bp-30h]@1

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
  ClientInstanceScreenController::ClientInstanceScreenController(v2, (int)&v12);
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
  *(_DWORD *)v2 = &off_26E27CC;
  *(_BYTE *)(v2 + 448) = 0;
  *(_DWORD *)(v2 + 432) = 0;
  *(_DWORD *)(v2 + 436) = 0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  MobEffectScreenController::_registerBindings((MobEffectScreenController *)v2);
  MobEffectScreenController::_registerEventHandlers((MobEffectScreenController *)v2);
  return v2;
}


void __fastcall MobEffectScreenController::_registerBindings(MobEffectScreenController *this)
{
  MobEffectScreenController::_registerBindings(this);
}


signed int __fastcall MobEffectScreenController::_isValidCollectionIndex(MobEffectScreenController *this, int a2)
{
  signed int result; // r0@2
  int v3; // r2@3

  if ( a2 >= 0 )
  {
    v3 = -1431655765 * ((signed int)((*(_QWORD *)((char *)this + 436) >> 32) - *(_QWORD *)((char *)this + 436)) >> 2);
    result = 0;
    if ( v3 > a2 )
      result = 1;
  }
  else
  return result;
}


void __fastcall MobEffectScreenController::_registerEventHandlers(MobEffectScreenController *this)
{
  MobEffectScreenController::_registerEventHandlers(this);
}


void __fastcall MobEffectScreenController::~MobEffectScreenController(MobEffectScreenController *this)
{
  MobEffectScreenController::~MobEffectScreenController(this);
}


int __fastcall MobEffectScreenController::tick(MobEffectScreenController *this)
{
  __int64 v1; // kr00_8@1
  MobEffectScreenController *v2; // r11@1
  int v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int v10; // r1@20
  void *v11; // r0@20
  MobEffectScreenController *v12; // r10@22
  signed int v13; // r1@22
  MobEffectInstance *v14; // r5@24
  __int64 v15; // kr08_8@24
  int v16; // r7@24
  _DWORD **v17; // r9@25
  char *v18; // r6@25
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  int v27; // r0@59
  __int64 v28; // r0@61
  int v29; // r1@62
  int *v30; // r11@62
  void *v31; // r0@64
  char *v32; // r0@65
  MobEffectScreenController *v33; // r9@66
  int v34; // r10@66
  void *v35; // r0@66
  void *v36; // r0@67
  unsigned __int64 *v38; // [sp+Ch] [bp-54h]@25
  signed int v39; // [sp+10h] [bp-50h]@24
  int v40; // [sp+20h] [bp-40h]@38
  int v41; // [sp+24h] [bp-3Ch]@34
  int v42; // [sp+28h] [bp-38h]@61
  char *v43; // [sp+2Ch] [bp-34h]@30
  int v44; // [sp+30h] [bp-30h]@61

  v1 = *(_QWORD *)((char *)this + 436);
  v2 = this;
  if ( HIDWORD(v1) != (_DWORD)v1 )
  {
    v3 = v1;
    do
    {
      v8 = *(_DWORD *)(v3 + 8);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v9);
      }
      v10 = *(_DWORD *)(v3 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v11);
      v3 += 12;
    }
    while ( v3 != HIDWORD(v1) );
  }
  *((_DWORD *)v2 + 110) = v1;
  v12 = v2;
  v13 = 0;
  if ( *((_BYTE *)v2 + 448) )
    *((_BYTE *)v2 + 448) = 0;
    v13 = 1;
  v39 = v13;
  v15 = *(_QWORD *)ClientInstanceScreenModel::getAllPlayerEffects(*((ClientInstanceScreenModel **)v2 + 106));
  v14 = (MobEffectInstance *)v15;
  v16 = 0;
  if ( (_DWORD)v15 != HIDWORD(v15) )
    v38 = (unsigned __int64 *)((char *)v2 + 436);
    v16 = 0;
    v17 = MobEffect::mMobEffects;
    v18 = (char *)&unk_28898CC;
      if ( MobEffectInstance::operator!=((int *)v14, &MobEffectInstance::NO_EFFECT) == 1 )
        v27 = MobEffectInstance::getId(v14);
        if ( MobEffect::hasIcon((MobEffect *)v17[v27]) == 1 && MobEffectInstance::getDuration(v14) >= 1 )
          v42 = 0;
          v43 = v18;
          v44 = (int)v18;
          v28 = *((_QWORD *)v12 + 55);
          if ( (_DWORD)v28 == HIDWORD(v28) )
          {
            std::vector<MobEffectPane,std::allocator<MobEffectPane>>::_M_emplace_back_aux<MobEffectPane>(v38, (int)&v42);
            v30 = &dword_28898C0;
            v29 = v44;
          }
          else
            *(_DWORD *)v28 = 0;
            *(_DWORD *)(v28 + 4) = v18;
            HIDWORD(v28) = v18;
            v43 = v18;
            *(_DWORD *)(v28 + 8) = v18;
            v44 = (int)v18;
            *((_DWORD *)v12 + 110) = v28 + 12;
          v31 = (void *)(v29 - 12);
          if ( (int *)(v29 - 12) != v30 )
            v19 = (unsigned int *)(v29 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v31);
          v32 = v43 - 12;
          if ( (int *)(v43 - 12) != v30 )
            v21 = (unsigned int *)(v43 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v32);
          v33 = v12;
          v34 = *((_DWORD *)v12 + 110);
          *(_DWORD *)(v34 - 12) = MobEffectInstance::getId(v14);
          MobEffect::formatDuration((MobEffect *)&v41, v14);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)(v34 - 8),
            &v41);
          v35 = (void *)(v41 - 12);
          if ( (int *)(v41 - 12) != v30 )
            v23 = (unsigned int *)(v41 - 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v35);
          MobEffectInstance::getDisplayName((MobEffectInstance *)&v40, v14);
            (int *)(v34 - 4),
            &v40);
          ++v16;
          v12 = v33;
          v36 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != v30 )
            v25 = (unsigned int *)(v40 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v36);
          v17 = MobEffect::mMobEffects;
          v18 = (char *)&unk_28898CC;
      v14 = (MobEffectInstance *)((char *)v14 + 16);
    while ( v14 != (MobEffectInstance *)HIDWORD(v15) );
  if ( v16 != *((_DWORD *)v12 + 108) )
    *((_BYTE *)v12 + 448) = 1;
    *((_DWORD *)v12 + 108) = v16;
  return MinecraftScreenController::tick(v12) | v39;
}


void __fastcall MobEffectScreenController::_registerEventHandlers(MobEffectScreenController *this)
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
  sub_1590164((void **)&v10, "button.menu_continue");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11CE9C0;
  *v3 = v1;
  HIDWORD(v4) = sub_11CE9AE;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonEventHandler((int)v1, v2, 0, 1, (int)&v8);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
}


void __fastcall MobEffectScreenController::_registerBindings(MobEffectScreenController *this)
{
  MobEffectScreenController *v1; // r4@1
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
  void *v14; // [sp+4h] [bp-A4h]@13
  __int64 v15; // [sp+Ch] [bp-9Ch]@13
  _DWORD *v16; // [sp+14h] [bp-94h]@13
  __int64 v17; // [sp+1Ch] [bp-8Ch]@13
  int v18; // [sp+24h] [bp-84h]@13
  int v19; // [sp+28h] [bp-80h]@13
  void *v20; // [sp+2Ch] [bp-7Ch]@9
  __int64 v21; // [sp+34h] [bp-74h]@9
  _DWORD *v22; // [sp+3Ch] [bp-6Ch]@9
  __int64 v23; // [sp+44h] [bp-64h]@9
  int v24; // [sp+4Ch] [bp-5Ch]@9
  int v25; // [sp+50h] [bp-58h]@9
  void *v26; // [sp+54h] [bp-54h]@5
  __int64 v27; // [sp+5Ch] [bp-4Ch]@5
  _DWORD *v28; // [sp+64h] [bp-44h]@5
  __int64 v29; // [sp+6Ch] [bp-3Ch]@5
  int v30; // [sp+74h] [bp-34h]@5
  int v31; // [sp+78h] [bp-30h]@5
  void *v32; // [sp+7Ch] [bp-2Ch]@1
  __int64 v33; // [sp+84h] [bp-24h]@1
  _DWORD *v34; // [sp+8Ch] [bp-1Ch]@1
  __int64 v35; // [sp+94h] [bp-14h]@1
  int v36; // [sp+9Ch] [bp-Ch]@1

  v1 = this;
  v36 = -918804085;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11CE75A;
  *v2 = v1;
  HIDWORD(v3) = sub_11CE740;
  v34 = v2;
  v35 = v3;
  v32 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v33 = v4;
  ScreenController::bindGridSize((int)v1, &v36, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  StringHash::StringHash<char [23]>(&v31, (int)"mob_effects_collection");
  v30 = 1793199214;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11CE7D8;
  *v5 = v1;
  HIDWORD(v6) = sub_11CE790;
  v28 = v5;
  v29 = v6;
  v26 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v27 = v7;
  ScreenController::bindStringForCollection((int)v1, &v31, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  StringHash::StringHash<char [23]>(&v25, (int)"mob_effects_collection");
  v24 = 1443070714;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11CE858;
  *v8 = v1;
  HIDWORD(v9) = sub_11CE810;
  v22 = v8;
  v23 = v9;
  v20 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v21 = v10;
  ScreenController::bindStringForCollection((int)v1, &v25, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  StringHash::StringHash<char [23]>(&v19, (int)"mob_effects_collection");
  v18 = 1126334437;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11CE978;
  *v11 = v1;
  HIDWORD(v12) = sub_11CE890;
  v16 = v11;
  v17 = v12;
  v14 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v15 = v13;
  ScreenController::bindStringForCollection((int)v1, &v19, &v18, (int)&v16, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
}


signed int __fastcall MobEffectScreenController::_isEffectRenderable(MobEffectScreenController *this, const MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  int v3; // r0@2
  signed int v4; // r5@2
  signed int result; // r0@5

  v2 = a2;
  if ( MobEffectInstance::operator!=((int *)a2, &MobEffectInstance::NO_EFFECT) == 1 )
  {
    v3 = MobEffectInstance::getId(v2);
    v4 = 0;
    if ( MobEffect::hasIcon((MobEffect *)MobEffect::mMobEffects[v3]) == 1 && MobEffectInstance::getDuration(v2) > 0 )
      v4 = 1;
    result = v4;
  }
  else
    result = 0;
  return result;
}
