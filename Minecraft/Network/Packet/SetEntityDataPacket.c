

SetEntityDataPacket *__fastcall SetEntityDataPacket::~SetEntityDataPacket(SetEntityDataPacket *this)
{
  SetEntityDataPacket *v1; // r8@1
  char *v2; // r4@1
  char *v3; // r6@1
  char *v4; // r5@2
  char *v5; // r6@6

  v1 = this;
  *(_DWORD *)this = &off_26E965C;
  v3 = (char *)(*((_QWORD *)this + 3) >> 32);
  v2 = (char *)*((_QWORD *)this + 3);
  if ( v3 == v2 )
  {
    *((_DWORD *)this + 7) = v2;
  }
  else
    v4 = (char *)*((_QWORD *)this + 3);
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( v3 != v4 );
    v5 = (char *)*((_DWORD *)v1 + 6);
    *((_DWORD *)v1 + 7) = v2;
    if ( v5 != v2 )
      do
      {
        if ( *(_DWORD *)v5 )
          (*(void (**)(void))(**(_DWORD **)v5 + 4))();
        *(_DWORD *)v5 = 0;
        v5 += 4;
      }
      while ( v2 != v5 );
      v2 = (char *)*((_DWORD *)v1 + 6);
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall SetEntityDataPacket::handle(SetEntityDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetEntityDataPacket *))(*(_DWORD *)a3 + 184))(
           a3,
           a2,
           this);
}


int __fastcall SetEntityDataPacket::read(SetEntityDataPacket *this, BinaryStream *a2)
{
  SetEntityDataPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::readType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    v3,
    (int)v2 + 24);
  return 0;
}


signed int __fastcall SetEntityDataPacket::getId(SetEntityDataPacket *this)
{
  return 39;
}


void __fastcall SetEntityDataPacket::~SetEntityDataPacket(SetEntityDataPacket *this)
{
  SetEntityDataPacket::~SetEntityDataPacket(this);
}


const void **__fastcall SetEntityDataPacket::write(SetEntityDataPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  SetEntityDataPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  return j_j_j__ZN12BinaryStream9writeTypeISt6vectorISt10unique_ptrI8DataItemSt14default_deleteIS3_EESaIS6_EEEEvRKT_(
           (int)v2,
           (_QWORD *)v3 + 3);
}


void __fastcall SetEntityDataPacket::~SetEntityDataPacket(SetEntityDataPacket *this)
{
  SetEntityDataPacket *v1; // r8@1
  char *v2; // r4@1
  char *v3; // r6@1
  char *v4; // r5@2
  char *v5; // r6@6

  v1 = this;
  *(_DWORD *)this = &off_26E965C;
  v3 = (char *)(*((_QWORD *)this + 3) >> 32);
  v2 = (char *)*((_QWORD *)this + 3);
  if ( v3 == v2 )
  {
    *((_DWORD *)this + 7) = v2;
  }
  else
    v4 = (char *)*((_QWORD *)this + 3);
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( v3 != v4 );
    v5 = (char *)*((_DWORD *)v1 + 6);
    *((_DWORD *)v1 + 7) = v2;
    if ( v5 != v2 )
      do
      {
        if ( *(_DWORD *)v5 )
          (*(void (**)(void))(**(_DWORD **)v5 + 4))();
        *(_DWORD *)v5 = 0;
        v5 += 4;
      }
      while ( v2 != v5 );
      v2 = (char *)*((_DWORD *)v1 + 6);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}
