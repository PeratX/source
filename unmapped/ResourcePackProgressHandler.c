

void __fastcall ResourcePackProgressHandler::onExit(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  ResourcePackProgressHandler::onExit(this, a2);
}


__int64 __fastcall ResourcePackProgressHandler::onStart(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  ResourcePackProgressHandler *v2; // r4@1
  __int64 result; // r0@1
  int v4; // [sp+0h] [bp-10h]@1

  v2 = this;
  *((_DWORD *)this + 2) = 0;
  sub_DA7B9C(&v4);
  result = *(_QWORD *)&v4;
  *((_QWORD *)v2 + 5) = *(_QWORD *)&v4;
  return result;
}


void *__fastcall ResourcePackProgressHandler::getProgressMessage(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  void *result; // r0@2

  if ( *((_DWORD *)a2 + 2) )
    result = sub_DA73B4((int *)this, (int *)a2 + 6);
  else
    result = sub_DA7364((void **)this, (const char *)&unk_257BC67);
  return result;
}


int __fastcall ResourcePackProgressHandler::getLoadingState(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  int v2; // r1@1

  v2 = *((_DWORD *)this + 7);
  if ( !*((_BYTE *)this + 48) )
    v2 |= 0x40000000u;
  return v2;
}


void __fastcall ResourcePackProgressHandler::getTitleText(ResourcePackProgressHandler *this, int a2)
{
  ResourcePackProgressHandler::getTitleText(this, a2);
}


int __fastcall ResourcePackProgressHandler::ResourcePackProgressHandler(int result, char a2)
{
  *(_DWORD *)(result + 4) = 3;
  *(_DWORD *)result = &off_26D766C;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = &unk_28898CC;
  *(_DWORD *)(result + 28) = 256;
  *(_BYTE *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_BYTE *)(result + 48) = a2;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall ResourcePackProgressHandler::getTitleText(ResourcePackProgressHandler *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@3
  void *v4; // r4@4
  void *v5; // r6@4
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int *v8; // r0@16
  unsigned int *v9; // r2@21
  signed int v10; // r1@23
  int v11; // [sp+8h] [bp-38h]@3
  void *v12; // [sp+Ch] [bp-34h]@3
  void *v13; // [sp+10h] [bp-30h]@3
  int v14; // [sp+14h] [bp-2Ch]@3

  v2 = (int *)this;
  if ( *(_BYTE *)(a2 + 12) || !*(_DWORD *)(a2 + 8) )
  {
    sub_DA7364((void **)this, "progressScreen.title.applyingPacks");
  }
  else
    v12 = 0;
    v13 = 0;
    v14 = 0;
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v12,
      (int *)(a2 + 16));
    sub_DA7364((void **)&v11, "progressScreen.title.downloading");
    I18n::get(v2, &v11, (unsigned __int64 *)&v12);
    v3 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9(v3);
    }
    v5 = v13;
    v4 = v12;
    if ( v12 != v13 )
      do
        v8 = (int *)(*(_DWORD *)v4 - 12);
        if ( v8 != &dword_28898C0 )
        {
          v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
            j_j_j_j_j__ZdlPv_9(v8);
        }
        v4 = (char *)v4 + 4;
      while ( v4 != v5 );
      v4 = v12;
    if ( v4 )
      operator delete(v4);
}


ResourcePackProgressHandler *__fastcall ResourcePackProgressHandler::~ResourcePackProgressHandler(ResourcePackProgressHandler *this)
{
  ResourcePackProgressHandler *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D766C;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall ResourcePackProgressHandler::~ResourcePackProgressHandler(ResourcePackProgressHandler *this)
{
  ResourcePackProgressHandler *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D766C;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


void __fastcall ResourcePackProgressHandler::onExit(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1
  ResourcePackProgressHandler *v3; // r5@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  MinecraftScreenModel::leaveScreen(a2);
  if ( *((_BYTE *)v3 + 32) )
  {
    sub_DA7364((void **)&v11, "disconnectionScreen.cantConnect");
    sub_DA7364((void **)&v10, (const char *)&unk_257BC67);
    MinecraftScreenModel::navigateToDisconnectScreen((int)v2, &v11, &v10);
    v4 = (void *)(v10 - 12);
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
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v11 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall ResourcePackProgressHandler::~ResourcePackProgressHandler(ResourcePackProgressHandler *this)
{
  ResourcePackProgressHandler::~ResourcePackProgressHandler(this);
}


int __fastcall ResourcePackProgressHandler::tick(ResourcePackProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r5@1
  ResourcePackProgressHandler *v3; // r4@1
  int v4; // r0@1
  char v5; // r1@1
  void *v6; // r0@5
  __int64 v12; // r0@10
  signed int v13; // r3@12
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  int v17; // [sp+0h] [bp-28h]@19
  __int64 v18; // [sp+8h] [bp-20h]@10
  int v19; // [sp+10h] [bp-18h]@5

  v2 = a2;
  v3 = this;
  v4 = MinecraftScreenModel::getResourcePackDownloadingState(a2);
  v5 = 0;
  *((_DWORD *)v3 + 7) = v4;
  if ( v4 == 16 )
    v5 = 1;
  *((_BYTE *)v3 + 12) = v5;
  if ( !*((_DWORD *)v3 + 2) )
  {
    if ( v4 != 512 )
      goto LABEL_9;
LABEL_8:
    *((_DWORD *)v3 + 2) = 2;
LABEL_19:
    sub_DA7B9C(&v17);
    LODWORD(v12) = v17;
    *((_QWORD *)v3 + 5) = *(_QWORD *)&v17;
    return v12;
  }
    goto LABEL_8;
  MinecraftScreenModel::getResourcePackProgress((MinecraftScreenModel *)&v19, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 4,
    &v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  _R0 = MinecraftScreenModel::getResourcePackDownloadingProgress((int)v2, (int *)v3 + 6);
  __asm
    VLDR            S0, =100.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x14]
  v4 = *((_DWORD *)v3 + 7);
LABEL_9:
  if ( v4 != 256 )
    goto LABEL_19;
  sub_DA7B9C(&v18);
  v12 = v18 - *((_QWORD *)v3 + 5);
  _CF = (unsigned int)v12 >= 0x2A05F201;
  LODWORD(v12) = 0;
  if ( !_CF )
    LODWORD(v12) = 1;
  v13 = 0;
  if ( SHIDWORD(v12) < 1 )
    v13 = 1;
  if ( HIDWORD(v12) == 1 )
    v13 = v12;
  if ( !v13 )
    *((_BYTE *)v3 + 12) = 1;
    *((_BYTE *)v3 + 32) = 1;
  return v12;
}
