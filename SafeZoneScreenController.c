

void __fastcall SafeZoneScreenController::~SafeZoneScreenController(SafeZoneScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall SafeZoneScreenController::_registerEventHandlers(SafeZoneScreenController *this)
{
  SafeZoneScreenController::_registerEventHandlers(this);
}


void __fastcall SafeZoneScreenController::_registerBindings(SafeZoneScreenController *this)
{
  SafeZoneScreenController::_registerBindings(this);
}


signed int __fastcall SafeZoneScreenController::tryExit(SafeZoneScreenController *this)
{
  int v2; // r0@1
  Option *v3; // r0@1
  int v9; // r0@2
  FloatOption *v10; // r5@2
  int v11; // r0@4
  int v12; // r1@4

  _R4 = this;
  v2 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 95));
  v3 = (Option *)Options::get(v2, 40);
  _R0 = Option::getFloat(v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R4,#0x1AC]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    v11 = (int)_R4;
    v12 = 0;
  else
    v9 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)_R4 + 95));
    v10 = (FloatOption *)Options::get(v9, 40);
    if ( !Option::hasOverrideSource(v10) )
      FloatOption::set(v10, *((float *)_R4 + 107));
    v12 = 2;
  MinecraftScreenController::_setExitBehavior(v11, v12);
  return j_j_j__ZN25MinecraftScreenController7tryExitEv(_R4);
}


void __fastcall SafeZoneScreenController::_registerBindings(SafeZoneScreenController *this)
{
  SafeZoneScreenController *v1; // r4@1
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
  char v25; // [sp+6Ch] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [24]>(&v25, (int)"#local_safe_zone_offset");
  v2 = operator new(4u);
  LODWORD(v3) = sub_122E46C;
  *v2 = v1;
  HIDWORD(v3) = sub_122E44E;
  v23 = v2;
  v24 = v3;
  v21 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v22 = v4;
  ScreenController::bindFloat((int)v1, (int *)&v25, (int)&v23, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v20 = 473500566;
  v5 = operator new(4u);
  LODWORD(v6) = sub_122E4AC;
  *v5 = v1;
  HIDWORD(v6) = sub_122E4A2;
  v18 = v5;
  v19 = v6;
  v16 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v17 = v7;
  ScreenController::bindFloat((int)v1, &v20, (int)&v18, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  StringHash::StringHash<char [24]>(&v15, (int)"#safe_zone_slider_label");
  v8 = operator new(4u);
  LODWORD(v9) = sub_122EA24;
  *v8 = v1;
  HIDWORD(v9) = sub_122E4E4;
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


void __fastcall SafeZoneScreenController::_registerEventHandlers(SafeZoneScreenController *this)
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
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  _DWORD *v14; // [sp+4h] [bp-44h]@4
  __int64 v15; // [sp+Ch] [bp-3Ch]@4
  int v16; // [sp+18h] [bp-30h]@4
  _DWORD *v17; // [sp+1Ch] [bp-2Ch]@1
  __int64 v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+30h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v19, "button.confirm_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_122E3A4;
  *v3 = v1;
  HIDWORD(v4) = sub_122E39A;
  v17 = v3;
  v18 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "safe_zone");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_122E418;
  *v7 = v1;
  HIDWORD(v8) = sub_122E3DA;
  v14 = v7;
  v15 = v8;
  ScreenController::registerSliderChangedEventHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall SafeZoneScreenController::~SafeZoneScreenController(SafeZoneScreenController *this)
{
  SafeZoneScreenController::~SafeZoneScreenController(this);
}


int __fastcall SafeZoneScreenController::SafeZoneScreenController(int a1, int a2)
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
  int v11; // r0@21
  Option *v12; // r5@21
  int v21; // [sp+4h] [bp-1Ch]@1
  int v22; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v21 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v22 = v3;
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
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v21);
  v6 = v22;
  if ( v22 )
    v7 = (unsigned int *)(v22 + 4);
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
  *(_DWORD *)v2 = &off_26E3404;
  *(_DWORD *)(v2 + 424) = 0;
  *(_DWORD *)(v2 + 428) = 0;
  v11 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v2 + 380));
  v12 = (Option *)Options::get(v11, 40);
  _R6 = Option::getFloatMin(v12);
  _R7 = Option::getFloatMax(v12);
  _R0 = Option::getFloat(v12);
  __asm
    VMOV            S0, R6
    VMOV            S2, R7
    VMOV            S4, R0
    VCMPE.F32       S2, S0
    VSTR            S4, [R4,#0x1AC]
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm { VMOV.F32        S0, #0.5 }
  else
    __asm
      VSUB.F32        S2, S2, S0
      VSUB.F32        S0, S4, S0
      VDIV.F32        S0, S0, S2
  __asm { VSTR            S0, [R4,#0x1A8] }
  SafeZoneScreenController::_registerEventHandlers((SafeZoneScreenController *)v2);
  SafeZoneScreenController::_registerBindings((SafeZoneScreenController *)v2);
  return v2;
}


int __fastcall SafeZoneScreenController::_initFromCurrentSafeZoneValue(SafeZoneScreenController *this)
{
  SafeZoneScreenController *v1; // r4@1
  int v2; // r0@1
  Option *v3; // r0@1
  Option *v4; // r5@1
  int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 95));
  v3 = (Option *)Options::get(v2, 40);
  v4 = v3;
  _R0 = Option::getFloatMin(v3);
  __asm { VMOV            S16, R0 }
  _R0 = Option::getFloatMax(v4);
  __asm { VMOV            S18, R0 }
  result = Option::getFloat(v4);
  __asm { VCMPE.F32       S18, S16 }
  *((_DWORD *)v1 + 107) = result;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _ZF )
  {
    __asm { VMOV.F32        S0, #0.5 }
  }
  else
    __asm
    {
      VMOV            S0, R0
      VSUB.F32        S2, S18, S16
      VSUB.F32        S0, S0, S16
      VDIV.F32        S0, S0, S2
    }
  __asm { VSTR            S0, [R4,#0x1A8] }
  return result;
}
