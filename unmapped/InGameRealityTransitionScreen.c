

void __fastcall InGameRealityTransitionScreen::~InGameRealityTransitionScreen(InGameRealityTransitionScreen *this)
{
  void *v1; // r0@1

  v1 = (void *)InGameRealityModeScreen::~InGameRealityModeScreen(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall InGameRealityTransitionScreen::_checkForTransitionToggle(InGameRealityTransitionScreen *this)
{
  return 0;
}


void __fastcall InGameRealityTransitionScreen::~InGameRealityTransitionScreen(InGameRealityTransitionScreen *this)
{
  InGameRealityTransitionScreen::~InGameRealityTransitionScreen(this);
}


BaseScreen *__fastcall InGameRealityTransitionScreen::InGameRealityTransitionScreen(BaseScreen *a1, MinecraftGame *a2, int a3)
{
  BaseScreen *result; // r0@1

  result = InGameRealityModeScreen::InGameRealityModeScreen(a1, a2, a3);
  *(_DWORD *)result = &off_26E4CDC;
  return result;
}


void __fastcall InGameRealityTransitionScreen::_updateTransition(InGameRealityTransitionScreen *this)
{
  InGameRealityTransitionScreen::_updateTransition(this);
}


int __fastcall InGameRealityTransitionScreen::_shouldPushHUD(InGameRealityTransitionScreen *this)
{
  return 0;
}


int __fastcall InGameRealityTransitionScreen::_init(InGameRealityTransitionScreen *this, int a2, int a3)
{
  InGameRealityTransitionScreen *v3; // r4@1
  int result; // r0@1
  Options *v5; // r0@2
  int v6; // r1@2
  ClientInstance *v7; // r0@2
  int v12; // [sp+0h] [bp-10h]@4
  float v13; // [sp+4h] [bp-Ch]@3

  v3 = this;
  InGameRealityModeScreen::_init(this, a2, a3);
  result = ClientInstance::getRealityModeToggleTriggered(*((ClientInstance **)v3 + 82));
  if ( result == 1 )
  {
    v5 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 82));
    v6 = Options::getVRLivingRoomMode(v5);
    v7 = (ClientInstance *)*((_DWORD *)v3 + 82);
    if ( v6 == 1 )
    {
      v13 = 1.0;
      ClientInstance::setRealityModeFrameFactor(v7, &v13);
      __asm
      {
        VMOV.F32        S0, #1.0
        VLDR            S2, =0.0
      }
    }
    else
      v12 = 0;
      ClientInstance::setRealityModeFrameFactor(v7, (const float *)&v12);
        VMOV.F32        S2, #1.0
        VLDR            S0, =0.0
    __asm
      VSTR            S0, [R4,#0x1B4]
      VSTR            S2, [R4,#0x158]
      VSTR            S0, [R4,#0x15C]
      VSTR            S0, [R4,#0x160]
    result = ClientInstance::setRealityModeToggleTriggered(*((ClientInstance **)v3 + 82), 0);
  }
  return result;
}


void __fastcall InGameRealityTransitionScreen::tick(InGameRealityTransitionScreen *this, int a2, int a3)
{
  InGameRealityTransitionScreen *v3; // r4@1

  v3 = this;
  InGameRealityModeScreen::tick(this, a2, a3);
  j_j_j__ZN29InGameRealityTransitionScreen17_updateTransitionEv(v3);
}


void __fastcall InGameRealityTransitionScreen::tick(InGameRealityTransitionScreen *this, int a2, int a3)
{
  InGameRealityTransitionScreen::tick(this, a2, a3);
}


void __fastcall InGameRealityTransitionScreen::_updateTransition(InGameRealityTransitionScreen *this)
{
  signed int v3; // r0@5
  Options *v7; // r0@16
  Options *v8; // r0@17
  ClientInstance *v9; // r0@20
  Options *v10; // r0@20
  int v11; // r5@20
  int v12; // r0@20
  int v13; // r5@20
  unsigned int *v14; // r1@21
  unsigned int v15; // r0@23
  ClientInstance *v16; // r0@26
  Options *v17; // r0@26
  int v18; // r5@26
  int v19; // r0@26
  int v20; // r5@26
  unsigned int *v21; // r1@27
  unsigned int v22; // r0@29
  unsigned int *v23; // r6@33
  unsigned int v24; // r0@35
  unsigned int *v25; // r6@39
  unsigned int v26; // r0@41
  int v27; // r1@46
  ClientInstance *v28; // r0@46
  int v29; // r5@47
  int v30; // r6@47
  int v31; // r5@47
  unsigned int *v32; // r1@48
  unsigned int v33; // r0@50
  int v34; // r0@52
  int v35; // r5@53
  int v36; // r0@53
  int v37; // r4@53
  unsigned int *v38; // r1@54
  unsigned int v39; // r0@56
  unsigned int *v40; // r6@60
  unsigned int v41; // r0@62
  int v42; // r1@67
  ClientInstance *v43; // r0@67
  int v44; // r0@69
  int v45; // r5@70
  int v46; // r0@70
  unsigned int *v47; // r1@71
  unsigned int v48; // r0@73
  unsigned int *v49; // r5@77
  unsigned int v50; // r0@79
  int v51; // r4@86
  int v52; // [sp+0h] [bp-68h]@70
  int v53; // [sp+4h] [bp-64h]@70
  char v54; // [sp+8h] [bp-60h]@20
  int v55; // [sp+Ch] [bp-5Ch]@20
  float v56; // [sp+10h] [bp-58h]@20
  char v57; // [sp+14h] [bp-54h]@53
  int v58; // [sp+18h] [bp-50h]@53
  void *v59; // [sp+1Ch] [bp-4Ch]@86
  void (*v60)(void); // [sp+24h] [bp-44h]@86
  int (*v61)(); // [sp+28h] [bp-40h]@86
  char v62; // [sp+2Ch] [bp-3Ch]@47
  void (*v63)(void); // [sp+34h] [bp-34h]@84
  char v64; // [sp+3Ch] [bp-2Ch]@47
  int v65; // [sp+40h] [bp-28h]@47
  int v66; // [sp+44h] [bp-24h]@47
  char v67; // [sp+48h] [bp-20h]@26
  int v68; // [sp+4Ch] [bp-1Ch]@26
  float v69; // [sp+50h] [bp-18h]@26

  _R4 = this;
  *((_DWORD *)this + 88) = *((_DWORD *)this + 87);
  if ( ClientInstance::getRealityModeToggleTriggered(*((ClientInstance **)this + 82)) == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0x15C]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_100;
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, S2
    if ( !(_NF ^ _VF) )
LABEL_100:
      __asm
      {
        VLDR            S0, =0.99
        VLDR            S2, [R4,#0x158]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v3 = 1065353216;
      else
        v3 = 0;
      *((_DWORD *)_R4 + 86) = v3;
    ClientInstance::setRealityModeToggleTriggered(*((ClientInstance **)_R4 + 82), 0);
  }
  __asm
    VLDR            S0, [R4,#0x158]
    VLDR            S2, [R4,#0x15C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
        VLDR            S4, =0.025
        VADD.F32        S2, S2, S4
        VSTR            S2, [R4,#0x15C]
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VSTR            S0, [R4,#0x15C] }
    else
        VLDR            S4, =-0.025
      if ( _NF ^ _VF )
        __asm { VSTRLT          S0, [R4,#0x15C] }
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
  if ( Options::getVRLivingRoomMode(v7) )
    v8 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
    if ( Options::getVRLivingRoomMode(v8) == 1 )
        VLDR            S0, =0.001
        VLDR            S2, [R4,#0x15C]
        v9 = (ClientInstance *)*((_DWORD *)_R4 + 82);
        v56 = 0.0;
        ClientInstance::setRealityModeFrameFactor(v9, &v56);
        v10 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
        Options::setVRLivingRoomMode(v10, 0);
        v11 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 82));
        v12 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 82));
        SceneFactory::createGameplayScreen((SceneFactory *)&v54, v12);
        SceneStack::pushScreen(v11, (int)&v54, 1);
        v13 = v55;
        if ( v55 )
        {
          v14 = (unsigned int *)(v55 + 4);
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
            v25 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
            {
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
            }
            else
              v26 = (*v25)--;
            if ( v26 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        }
        v42 = ClientInstance::getLivingRoomForCredits(*((ClientInstance **)_R4 + 82));
        v43 = (ClientInstance *)*((_DWORD *)_R4 + 82);
        if ( v42 == 1 )
          ClientInstance::setRealityModeToggleTriggered(v43, 1);
          return;
        v44 = ClientInstance::getHoloInput(v43);
        if ( (*(int (**)(void))(*(_DWORD *)v44 + 60))() == 1 )
          v45 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 82));
          v46 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 82));
          SceneFactory::createPauseScreen((SceneFactory *)&v52, v46);
          SceneStack::pushScreen(v45, (int)&v52, 0);
          v37 = v53;
          if ( v53 )
            v47 = (unsigned int *)(v53 + 4);
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
              v48 = (*v47)--;
            if ( v48 == 1 )
              v49 = (unsigned int *)(v37 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                goto LABEL_96;
              }
LABEL_95:
              v50 = (*v49)--;
LABEL_96:
              if ( v50 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
              return;
  else
      VLDR            S0, =0.999
      VLDR            S2, [R4,#0x15C]
      VCMPE.F32       S2, S0
    if ( _NF ^ _VF )
      return;
    v16 = (ClientInstance *)*((_DWORD *)_R4 + 82);
    v69 = 1.0;
    ClientInstance::setRealityModeFrameFactor(v16, &v69);
    v17 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
    Options::setVRLivingRoomMode(v17, 1);
    v18 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 82));
    v19 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 82));
    SceneFactory::createGameplayScreen((SceneFactory *)&v67, v19);
    SceneStack::pushScreen(v18, (int)&v67, 1);
    v20 = v68;
    if ( v68 )
      v21 = (unsigned int *)(v68 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
        if ( &pthread_create )
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        else
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v27 = ClientInstance::getLivingRoomForCredits(*((ClientInstance **)_R4 + 82));
    v28 = (ClientInstance *)*((_DWORD *)_R4 + 82);
    if ( v27 == 1 )
      v66 = 6;
      ClientInstance::setClientPlayMode((int)v28, &v66);
      v29 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 82));
      v30 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 82));
      ClientInstance::getCreditsCallback((ClientInstance *)&v62, *((_DWORD *)_R4 + 82));
      SceneFactory::createCreditsScreen((unsigned __int64 *)&v64, v30, (int)&v62);
      SceneStack::pushScreen(v29, (int)&v64, 0);
      v31 = v65;
      if ( v65 )
        v32 = (unsigned int *)(v65 + 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          v40 = (unsigned int *)(v31 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
      if ( v63 )
        v63();
      ClientInstance::setLivingRoomForCredits(*((ClientInstance **)_R4 + 82), 0);
      v51 = *((_DWORD *)_R4 + 82);
      v59 = operator new(1u);
      v60 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN14ClientInstance18setCreditsCallbackESt8functionIFvvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKS7_St18_Manager_operation;
      v61 = ZNSt17_Function_handlerIFvvEZN14ClientInstance18setCreditsCallbackESt8functionIS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      ClientInstance::setCreditsCallback(v51, (int)&v59);
      if ( v60 )
        v60();
      v34 = ClientInstance::getHoloInput(v28);
      if ( (*(int (**)(void))(*(_DWORD *)v34 + 60))() == 1 )
        v35 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 82));
        v36 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 82));
        SceneFactory::createPauseScreen((SceneFactory *)&v57, v36);
        SceneStack::pushScreen(v35, (int)&v57, 0);
        v37 = v58;
        if ( v58 )
          v38 = (unsigned int *)(v58 + 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            v49 = (unsigned int *)(v37 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
              goto LABEL_96;
            goto LABEL_95;
}
