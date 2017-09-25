

void __fastcall ImportExportProgressHandler::~ImportExportProgressHandler(ImportExportProgressHandler *this)
{
  ImportExportProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D7534;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


void __fastcall ImportExportProgressHandler::~ImportExportProgressHandler(ImportExportProgressHandler *this)
{
  ImportExportProgressHandler::~ImportExportProgressHandler(this);
}


int __fastcall ImportExportProgressHandler::getLoadingProgress(ImportExportProgressHandler *this, MinecraftScreenModel *a2)
{
  LevelArchiver *v2; // r0@1

  v2 = (LevelArchiver *)MinecraftScreenModel::getLevelArchiver(a2);
  return j_j_j__ZNK13LevelArchiver22getOperationPercentageEv(v2);
}


ImportExportProgressHandler *__fastcall ImportExportProgressHandler::~ImportExportProgressHandler(ImportExportProgressHandler *this)
{
  ImportExportProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D7534;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


signed int __fastcall ImportExportProgressHandler::getLoadingState(ImportExportProgressHandler *this, MinecraftScreenModel *a2)
{
  return 64;
}


int __fastcall ImportExportProgressHandler::ImportExportProgressHandler(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)(a1 + 4) = 10;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D7534;
  sub_DA73B4((int *)(a1 + 12), a2);
  *(_DWORD *)(v2 + 8) = 2;
  return v2;
}
