

void __fastcall WorldProcessProgressHandler::getTitleText(WorldProcessProgressHandler *this, int a2)
{
  WorldProcessProgressHandler::getTitleText(this, a2);
}


int __fastcall WorldProcessProgressHandler::tick(WorldProcessProgressHandler *this, MinecraftScreenModel *a2)
{
  WorldProcessProgressHandler *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = *((_DWORD *)this + 5);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD))v2 + 6))((char *)v2 + 12);
    *((_DWORD *)v2 + 7) = result;
  }
  return result;
}


int __fastcall WorldProcessProgressHandler::WorldProcessProgressHandler(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 14;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D780C;
  *(_DWORD *)(a1 + 20) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(a1 + 12, a3, 2);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v5 + 8);
  }
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = v4;
  *(_DWORD *)(v3 + 8) = 2;
  return v3;
}


signed int __fastcall WorldProcessProgressHandler::getLoadingState(WorldProcessProgressHandler *this, MinecraftScreenModel *a2)
{
  return 4096;
}


void __fastcall WorldProcessProgressHandler::~WorldProcessProgressHandler(WorldProcessProgressHandler *this)
{
  WorldProcessProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D780C;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall WorldProcessProgressHandler::~WorldProcessProgressHandler(WorldProcessProgressHandler *this)
{
  WorldProcessProgressHandler::~WorldProcessProgressHandler(this);
}


void __fastcall WorldProcessProgressHandler::getProgressMessage(WorldProcessProgressHandler *this, MinecraftScreenModel *a2)
{
  Util *v3; // r4@1
  char *v9; // r0@2
  void *v10; // r0@3
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  char *v14; // r0@8
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+8h] [bp-28h]@8
  char *v20; // [sp+Ch] [bp-24h]@8
  int v21; // [sp+14h] [bp-1Ch]@2
  char *v22; // [sp+18h] [bp-18h]@2

  _R5 = a2;
  v3 = this;
  if ( *((_DWORD *)a2 + 8) == 1 )
  {
    sub_DA7364((void **)&v21, "selectWorld.uploadInProgress.msg");
    I18n::get((int *)&v22, (int **)&v21);
    __asm
    {
      VLDR            S0, [R5,#0x1C]
      VCVTR.S32.F32   S0, S0
      VMOV            R2, S0
    }
    Util::format(v3, v22, _R2);
    v9 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v21 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        goto LABEL_24;
LABEL_23:
      v12 = (*v11)--;
LABEL_24:
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
      return;
  }
  else
    sub_DA7364((void **)&v19, "selectWorld.convertInProgress.msg");
    I18n::get((int *)&v20, (int **)&v19);
    Util::format(v3, v20, _R2);
    v14 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v10 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v19 - 4);
      goto LABEL_23;
}


void __fastcall WorldProcessProgressHandler::getProgressMessage(WorldProcessProgressHandler *this, MinecraftScreenModel *a2)
{
  WorldProcessProgressHandler::getProgressMessage(this, a2);
}


WorldProcessProgressHandler *__fastcall WorldProcessProgressHandler::~WorldProcessProgressHandler(WorldProcessProgressHandler *this)
{
  WorldProcessProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D780C;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
  return v1;
}


void __fastcall WorldProcessProgressHandler::getTitleText(WorldProcessProgressHandler *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@9
  signed int v7; // r1@11
  int v8; // [sp+4h] [bp-2Ch]@7
  int v9; // [sp+Ch] [bp-24h]@2

  v2 = (int *)this;
  if ( *(_DWORD *)(a2 + 32) == 1 )
  {
    sub_DA7364((void **)&v9, "selectWorld.uploadInProgress.title");
    I18n::get(v2, (int **)&v9);
    v3 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v9 - 4);
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
LABEL_18:
        j_j_j_j_j__ZdlPv_9(v3);
        return;
    }
  }
  else
    sub_DA7364((void **)&v8, "selectWorld.convertInProgress.title");
    I18n::get(v2, (int **)&v8);
    v3 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        goto LABEL_18;
}
