

int __fastcall ResourceLoadProgressHandler::ResourceLoadProgressHandler(int result)
{
  *(_DWORD *)result = &off_26D7500;
  *(_DWORD *)(result + 4) = 6;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall ResourceLoadProgressHandler::getProgressMessage(ResourceLoadProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  ResourceLoadProgressHandler::getProgressMessage(this, a2, a3);
}


void __fastcall ResourceLoadProgressHandler::getProgressMessage(ResourceLoadProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  int *v3; // r4@1
  void *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  int v9; // [sp+4h] [bp-2Ch]@7
  int v10; // [sp+Ch] [bp-24h]@2

  v3 = (int *)this;
  if ( (*(int (__fastcall **)(MinecraftScreenModel *, int))(*(_DWORD *)a2 + 24))(a2, a3) == 2048 )
  {
    sub_DA7364((void **)&v10, "progressScreen.message.resourceLoading");
    I18n::get(v3, (int **)&v10);
    v4 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
LABEL_18:
        j_j_j_j_j__ZdlPv_9(v4);
        return;
    }
  }
  else
    sub_DA7364((void **)&v9, "progressScreen.message.done");
    I18n::get(v3, (int **)&v9);
    v4 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v9 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        goto LABEL_18;
}


signed int __fastcall ResourceLoadProgressHandler::getLoadingState(ResourceLoadProgressHandler *this, MinecraftScreenModel *a2)
{
  signed int v2; // r0@1
  signed int v3; // r1@1

  v2 = MinecraftScreenModel::isResourceLoadingFinished(a2);
  v3 = 2048;
  if ( v2 )
    v3 = 16;
  return v3;
}
