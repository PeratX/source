

void __fastcall VoiceSystem::~VoiceSystem(VoiceSystem *this)
{
  VoiceSystem *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D956C;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_4((void *)v1);
}


VoiceSystem *__fastcall VoiceSystem::~VoiceSystem(VoiceSystem *this)
{
  VoiceSystem *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D956C;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


signed int __fastcall VoiceSystem::getCurrentGrammar(VoiceSystem *this)
{
  return 6;
}


_QWORD *__fastcall VoiceSystem::VoiceSystem(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  VoiceDevice *v2; // r6@1
  int v3; // r0@1

  v1 = a1;
  *a1 = (unsigned int)&off_26D956C;
  v2 = (VoiceDevice *)operator new(0x30u);
  VoiceDevice::VoiceDevice(v2);
  v3 = *((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = v2;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  return v1;
}


int __fastcall VoiceSystem::isActive(VoiceSystem *this)
{
  return 0;
}


int __fastcall VoiceSystem::setVoiceDevice(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v2 + 4) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}
