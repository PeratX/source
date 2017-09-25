

BlockEntity *__fastcall SignScreenController::onDictationEvent(int a1, int a2)
{
  int v2; // r4@1
  BlockEntity *result; // r0@1

  v2 = a1;
  SignScreenController::parseSignTextContent(a1, a2);
  result = ClientInstanceScreenModel::getBlockEntity(*(_DWORD *)(v2 + 424), (const BlockPos *)(v2 + 436), 4);
  if ( result )
  {
    SignBlockEntity::setMessage((int)result, (int *)(v2 + 452));
    result = j_j_j__ZN25ClientInstanceScreenModel27sendBlockEntityUpdatePacketERK8BlockPos(
               *(ClientInstanceScreenModel **)(v2 + 424),
               (const BlockPos *)(v2 + 436));
  }
  return result;
}


void __fastcall SignScreenController::_registerEventHandlers(SignScreenController *this)
{
  SignScreenController::_registerEventHandlers(this);
}


int __fastcall SignScreenController::tick(SignScreenController *this)
{
  MinecraftScreenController *v1; // r4@1

  v1 = this;
  if ( !ClientInstanceScreenModel::getBlockEntity(
          *((_DWORD *)this + 106),
          (SignScreenController *)((char *)this + 436),
          4)
    || !MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)v1 + 106)) )
  {
    (*(void (__fastcall **)(MinecraftScreenController *))(*(_DWORD *)v1 + 12))(v1);
    MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 106));
  }
  return j_j_j__ZN25MinecraftScreenController4tickEv_0(v1);
}


BlockEntity *__fastcall SignScreenController::setMessageToSign(SignScreenController *this)
{
  SignScreenController *v1; // r4@1
  const BlockPos *v2; // r5@1
  BlockEntity *result; // r0@1

  v1 = this;
  v2 = (SignScreenController *)((char *)this + 436);
  result = ClientInstanceScreenModel::getBlockEntity(
             *((_DWORD *)this + 106),
             (SignScreenController *)((char *)this + 436),
             4);
  if ( result )
  {
    SignBlockEntity::setMessage((int)result, (int *)v1 + 113);
    result = j_j_j__ZN25ClientInstanceScreenModel27sendBlockEntityUpdatePacketERK8BlockPos(
               *((ClientInstanceScreenModel **)v1 + 106),
               v2);
  }
  return result;
}


int __fastcall SignScreenController::SignScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
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
  *(_DWORD *)v4 = &off_26E376C;
  *(_DWORD *)(v4 + 432) = 4;
  *(_DWORD *)(v4 + 436) = *(_DWORD *)v7;
  *(_DWORD *)(v4 + 440) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v4 + 444) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v4 + 448) = v5;
  *(_DWORD *)(v4 + 452) = &unk_28898CC;
  *(_DWORD *)(v4 + 464) = 0;
  *(_DWORD *)(v4 + 480) = 0;
  SignScreenController::_registerEventHandlers((SignScreenController *)v4);
  SignScreenController::_registerBindings((SignScreenController *)v4);
  return v4;
}


int __fastcall SignScreenController::setViewCommand(SignScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  SignScreenController *v4; // r4@1
  int v5; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int result; // r0@6
  void (__fastcall *v12)(__int64 *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  int (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  __int64 v16; // [sp+0h] [bp-30h]@2
  void (__cdecl *v17)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@2
  __int64 v19; // [sp+10h] [bp-20h]@7
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-18h]@6
  int v21; // [sp+1Ch] [bp-14h]@7

  v4 = this;
  v5 = 0;
  v6 = a2;
  v17 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)a2 + 10);
  if ( v7 )
  {
    v7(&v16, (char *)a2 + 32, 2);
    v5 = *((_DWORD *)v6 + 11);
    v18 = *((_DWORD *)v6 + 11);
    v8 = *((_DWORD *)v6 + 10);
    v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 10);
    v3 = HIDWORD(v16);
    v2 = v16;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 456;
  v16 = *((_QWORD *)v4 + 57);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 116);
  v10 = v17;
  *((_DWORD *)v4 + 116) = v8;
  v18 = *((_DWORD *)v4 + 117);
  *((_DWORD *)v4 + 117) = v5;
  if ( v10 )
    v10(&v16, &v16, 3, v10);
  result = 0;
  v20 = 0;
  v12 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v6 + 14);
  if ( v12 )
    v12(&v19, (char *)v6 + 48, 2);
    result = *((_DWORD *)v6 + 15);
    v21 = *((_DWORD *)v6 + 15);
    v13 = *((_DWORD *)v6 + 14);
    v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 14);
    v12 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v19);
    v2 = v19;
    v13 = 0;
  v14 = (int)v4 + 472;
  v19 = *((_QWORD *)v4 + 59);
  *(_DWORD *)v14 = v2;
  *(_DWORD *)(v14 + 4) = v12;
  v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 120);
  v15 = v20;
  *((_DWORD *)v4 + 120) = v13;
  v21 = *((_DWORD *)v4 + 121);
  *((_DWORD *)v4 + 121) = result;
  if ( v15 )
    result = v15(&v19, &v19, 3, v15, v16, HIDWORD(v16), v17, v18);
  return result;
}


int __fastcall SignScreenController::onOpen(SignScreenController *this, int a2, __int64 a3)
{
  SignScreenController *v3; // r4@1
  int result; // r0@1

  v3 = this;
  ScreenController::onOpen(this, a2, a3);
  result = MinecraftScreenModel::isKeyboardActive(*((MinecraftScreenModel **)v3 + 106));
  if ( !result )
  {
    if ( !*((_DWORD *)v3 + 116) )
      sub_21E5F48();
    result = (*((int (__fastcall **)(_DWORD))v3 + 117))((char *)v3 + 456);
  }
  return result;
}


int __fastcall SignScreenController::onTerminate(SignScreenController *this)
{
  SignScreenController *v1; // r4@1

  v1 = this;
  ScreenController::onTerminate(this);
  MinecraftScreenModel::resetInput(*((MinecraftScreenModel **)v1 + 106));
  if ( !*((_DWORD *)v1 + 120) )
    sub_21E5F48();
  return (*((int (__fastcall **)(_DWORD))v1 + 121))((char *)v1 + 472);
}


SignScreenController *__fastcall SignScreenController::~SignScreenController(SignScreenController *this)
{
  SignScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  unsigned int *v7; // r12@7
  signed int v8; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26E376C;
  v2 = (void (*)(void))*((_DWORD *)this + 120);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 116);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 113);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall SignScreenController::~SignScreenController(SignScreenController *this)
{
  SignScreenController::~SignScreenController(this);
}


void __fastcall SignScreenController::_registerBindings(SignScreenController *this)
{
  SignScreenController::_registerBindings(this);
}


void __fastcall SignScreenController::_registerEventHandlers(SignScreenController *this)
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
  sub_21E94B4((void **)&v10, "#sign_text_multi");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_124F7B8;
  *v3 = v1;
  HIDWORD(v4) = sub_124F454;
  v8 = v3;
  v9 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v8);
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


int __fastcall SignScreenController::parseSignTextContent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  float v4; // r6@1
  _DWORD *v5; // r0@1
  int result; // r0@1
  _DWORD *v7; // [sp+Ch] [bp-24h]@1
  int (*v8)(void); // [sp+14h] [bp-1Ch]@1
  signed int (__fastcall *v9)(_DWORD **, const void **, int, _DWORD *); // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  sub_21E7EE0((const void **)(a1 + 452), 0, *(_BYTE **)(*(_DWORD *)(a1 + 452) - 12), 0);
  v4 = *(float *)(v2 + 448);
  v5 = operator new(4u);
  *v5 = v2;
  v7 = v5;
  v8 = (int (*)(void))sub_124F41C;
  v9 = sub_124F384;
  result = Font::processLinesInBox(v4, v3, 1119485952, 4, 0, (int)&v7);
  if ( v8 )
    result = v8();
  return result;
}


void __fastcall SignScreenController::~SignScreenController(SignScreenController *this)
{
  SignScreenController *v1; // r0@1

  v1 = SignScreenController::~SignScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall SignScreenController::_registerBindings(SignScreenController *this)
{
  SignScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // [sp+4h] [bp-2Ch]@1
  __int64 v4; // [sp+Ch] [bp-24h]@1
  void *v5; // [sp+14h] [bp-1Ch]@1
  void (*v6)(void); // [sp+1Ch] [bp-14h]@1
  int (__fastcall *v7)(int); // [sp+20h] [bp-10h]@1
  int v8; // [sp+24h] [bp-Ch]@1

  v1 = this;
  v8 = 1045417974;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_124F808;
  v7 = sub_124F7F0;
  v3 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v4 = v2;
  ScreenController::bindColor((int)v1, &v8, (int)&v5, (int)&v3);
  if ( (_DWORD)v4 )
    ((void (*)(void))v4)();
  if ( v6 )
    v6();
}
