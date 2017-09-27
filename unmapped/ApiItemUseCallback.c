

signed int __fastcall ApiItemUseCallback::onSpawningEntity(ApiItemUseCallback *this, const Entity *a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 80))(
         *(_QWORD *)((char *)this + 4),
         *(_QWORD *)((char *)this + 4) >> 32,
         a2,
         *((_DWORD *)this + 3)) | 2;
  result = 0;
  if ( v2 == 3 )
    result = 1;
  return result;
}


void __fastcall ApiItemUseCallback::~ApiItemUseCallback(ApiItemUseCallback *this)
{
  void *v1; // r0@1

  v1 = (void *)ItemUseCallback::~ItemUseCallback(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall ApiItemUseCallback::onRemovingEntity(ApiItemUseCallback *this, const Entity *a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 88))(
         *(_QWORD *)((char *)this + 4),
         *(_QWORD *)((char *)this + 4) >> 32,
         a2,
         *((_DWORD *)this + 3)) | 2;
  result = 0;
  if ( v2 == 3 )
    result = 1;
  return result;
}


signed int __fastcall ApiItemUseCallback::onModifyingEntity(ApiItemUseCallback *this, const Entity *a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 96))(
         *(_QWORD *)((char *)this + 4),
         *(_QWORD *)((char *)this + 4) >> 32,
         a2,
         *((_DWORD *)this + 3)) | 2;
  result = 0;
  if ( v2 == 3 )
    result = 1;
  return result;
}


signed int __fastcall ApiItemUseCallback::onPlacingBlock(ApiItemUseCallback *this, const BlockPos *a2, const FullBlock *a3, const FullBlock *a4)
{
  int v4; // r1@3
  signed int result; // r0@3

  if ( !*((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 16) = *(_BYTE *)a4;
    *((_BYTE *)this + 17) = *((_BYTE *)a4 + 1);
    *((_DWORD *)this + 5) = *(_DWORD *)a2;
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
    *((_BYTE *)this + 32) = 1;
  }
  v4 = (*(int (__fastcall **)(_DWORD, _DWORD, const BlockPos *, const FullBlock *))(*(_DWORD *)*(_QWORD *)((char *)this + 4)
                                                                                  + 40))(
         *(_QWORD *)((char *)this + 4),
         *(_QWORD *)((char *)this + 4) >> 32,
         a2,
         a3) | 2;
  result = 0;
  if ( v4 == 3 )
    result = 1;
  return result;
}


void __fastcall ApiItemUseCallback::~ApiItemUseCallback(ApiItemUseCallback *this)
{
  ApiItemUseCallback::~ApiItemUseCallback(this);
}


int __fastcall ApiItemUseCallback::onEntitySpawned(ApiItemUseCallback *this, const Entity *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 84))(
           *(_QWORD *)((char *)this + 4),
           *(_QWORD *)((char *)this + 4) >> 32,
           a2,
           *((_DWORD *)this + 3));
}


signed int __fastcall ApiItemUseCallback::onModifyingBlock(ApiItemUseCallback *this, const BlockPos *a2, const FullBlock *a3, const FullBlock *a4)
{
  int v4; // ST04_4@1
  int v5; // r1@1
  signed int result; // r0@1

  v4 = *((_DWORD *)this + 3);
  v5 = (*(int (__fastcall **)(_DWORD, _DWORD, const BlockPos *, const FullBlock *))(*(_DWORD *)*(_QWORD *)((char *)this + 4)
                                                                                  + 48))(
         *(_QWORD *)((char *)this + 4),
         *(_QWORD *)((char *)this + 4) >> 32,
         a2,
         a3) | 2;
  result = 0;
  if ( v5 == 3 )
    result = 1;
  return result;
}


int __fastcall ApiItemUseCallback::onBlockPlaced(ApiItemUseCallback *this, const BlockPos *a2, const FullBlock *a3, const FullBlock *a4)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, const BlockPos *, const FullBlock *))(*(_DWORD *)*(_QWORD *)((char *)this + 4)
                                                                                    + 44))(
           *(_QWORD *)((char *)this + 4),
           *(_QWORD *)((char *)this + 4) >> 32,
           a2,
           a3);
}


int __fastcall ApiItemUseCallback::onEntityRemoved(ApiItemUseCallback *this, const Entity *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 84))(
           *(_QWORD *)((char *)this + 4),
           *(_QWORD *)((char *)this + 4) >> 32,
           a2,
           *((_DWORD *)this + 3));
}


int __fastcall ApiItemUseCallback::onEntityModified(ApiItemUseCallback *this, const Entity *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, const Entity *, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 4) + 100))(
           *(_QWORD *)((char *)this + 4),
           *(_QWORD *)((char *)this + 4) >> 32,
           a2,
           *((_DWORD *)this + 3));
}


int __fastcall ApiItemUseCallback::onBlockModified(ApiItemUseCallback *this, const BlockPos *a2, const FullBlock *a3, const FullBlock *a4)
{
  int v4; // ST04_4@1

  v4 = *((_DWORD *)this + 3);
  return (*(int (__fastcall **)(_DWORD, _DWORD, const BlockPos *, const FullBlock *))(*(_DWORD *)*(_QWORD *)((char *)this + 4)
                                                                                    + 52))(
           *(_QWORD *)((char *)this + 4),
           *(_QWORD *)((char *)this + 4) >> 32,
           a2,
           a3);
}
