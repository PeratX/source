

void __fastcall DimensionChangeProgressHandler::~DimensionChangeProgressHandler(DimensionChangeProgressHandler *this)
{
  DimensionChangeProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D7498;
  v2 = (void (*)(void))*((_DWORD *)this + 6);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall DimensionChangeProgressHandler::~DimensionChangeProgressHandler(DimensionChangeProgressHandler *this)
{
  DimensionChangeProgressHandler::~DimensionChangeProgressHandler(this);
}


signed int __fastcall DimensionChangeProgressHandler::getLoadingState(DimensionChangeProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r5@1
  DimensionChangeProgressHandler *v3; // r6@1
  int v4; // r0@1
  signed int v5; // r4@1

  v2 = a2;
  v3 = this;
  v4 = MinecraftScreenModel::getWorldLoadingState(a2);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 == 16 && MinecraftScreenModel::isUPnPCompleted(v2) != 1 )
      return 2;
  }
  else
    v5 = 4;
    if ( *((_BYTE *)v3 + 12) )
      v5 = 2;
  return v5;
}


int __fastcall DimensionChangeProgressHandler::DimensionChangeProgressHandler(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 5;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D7498;
  *(_BYTE *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(a1 + 16, a3, 2);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v5 + 8);
  }
  if ( v4 == 1 )
    *(_DWORD *)(v3 + 8) = 2;
  *(_DWORD *)v3 = &off_26D74CC;
  return v3;
}
