

void __fastcall PlayerHotbarPacket::~PlayerHotbarPacket(PlayerHotbarPacket *this)
{
  PlayerHotbarPacket *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DA620;
  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall PlayerHotbarPacket::~PlayerHotbarPacket(PlayerHotbarPacket *this)
{
  PlayerHotbarPacket::~PlayerHotbarPacket(this);
}


int __fastcall PlayerHotbarPacket::handle(PlayerHotbarPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayerHotbarPacket *))(*(_DWORD *)a3 + 236))(
           a3,
           a2,
           this);
}


int __fastcall PlayerHotbarPacket::read(PlayerHotbarPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  PlayerHotbarPacket *v3; // r4@1
  void *v5; // [sp+0h] [bp-20h]@1
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int (__fastcall *v7)(int, ReadOnlyBinaryStream *); // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  *((_BYTE *)v3 + 21) = ReadOnlyBinaryStream::getByte(v2);
  v5 = operator new(1u);
  v6 = (void (*)(void))std::_Function_base::_Base_manager<PlayerHotbarPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v7 = std::_Function_handler<unsigned int ()(ReadOnlyBinaryStream &),PlayerHotbarPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<unsigned int>(v2, (int)v3 + 24, (int)&v5);
  if ( v6 )
    v6();
  *((_BYTE *)v3 + 20) = ReadOnlyBinaryStream::getBool(v2);
  return 0;
}


const void **__fastcall PlayerHotbarPacket::write(PlayerHotbarPacket *this, BinaryStream *a2)
{
  PlayerHotbarPacket *v2; // r8@1
  BinaryStream *v3; // r4@1
  unsigned int *v4; // r5@1
  unsigned int *i; // r6@1
  void *v7; // [sp+0h] [bp-28h]@1
  int (__fastcall *v8)(void **, void **, int); // [sp+8h] [bp-20h]@1
  unsigned int (__fastcall *v9)(int, BinaryStream *, unsigned int *); // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_DWORD *)this + 4));
  BinaryStream::writeByte(v3, *((_BYTE *)v2 + 21));
  v7 = operator new(1u);
  v8 = std::_Function_base::_Base_manager<PlayerHotbarPacket::write(BinaryStream &)const::{lambda(BinaryStream &,unsigned int const&)#1}>::_M_manager;
  v9 = std::_Function_handler<void ()(BinaryStream &,unsigned int const&),PlayerHotbarPacket::write(BinaryStream &)const::{lambda(BinaryStream &,unsigned int const&)#1}>::_M_invoke;
  BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 3) >> 32) - *((_QWORD *)v2 + 3)) >> 2);
  v4 = (unsigned int *)(*((_QWORD *)v2 + 3) >> 32);
  for ( i = (unsigned int *)*((_QWORD *)v2 + 3); v4 != i; ++i )
  {
    if ( !v8 )
      sub_119C8E4();
    v9((int)&v7, v3, i);
  }
  if ( v8 )
    ((void (__cdecl *)(void **))v8)(&v7);
  return BinaryStream::writeBool(v3, *((_BYTE *)v2 + 20));
}


int __fastcall PlayerHotbarPacket::PlayerHotbarPacket(int a1, int a2, char a3, unsigned __int64 *a4, char a5)
{
  int v5; // r10@1
  _DWORD *v6; // r7@1
  _DWORD *v7; // r9@1
  char *v8; // r11@2
  char *v9; // r4@2
  int v10; // r2@2
  char *v11; // r6@5
  unsigned int v12; // r1@5
  unsigned int v13; // r0@7
  unsigned int v14; // r5@7
  signed int v15; // r2@14
  int v16; // r4@14

  v5 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26DA620;
  *(_DWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 20) = a5;
  *(_BYTE *)(a1 + 21) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v7 = (_DWORD *)(*a4 >> 32);
  v6 = (_DWORD *)*a4;
  if ( v6 != v7 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v9 == (char *)v10 )
      {
        v11 = 0;
        v12 = (v9 - v8) >> 2;
        if ( !v12 )
          v12 = 1;
        v13 = v12 + ((v9 - v8) >> 2);
        v14 = v12 + ((v9 - v8) >> 2);
        if ( 0 != v13 >> 30 )
          v14 = 0x3FFFFFFF;
        if ( v13 < v12 )
        if ( v14 )
        {
          if ( v14 >= 0x40000000 )
            sub_119C874();
          v11 = (char *)operator new(4 * v14);
          v9 = (char *)(*(_QWORD *)(v5 + 24) >> 32);
          v8 = (char *)*(_QWORD *)(v5 + 24);
        }
        v15 = v9 - v8;
        v16 = (int)&v11[v9 - v8];
        *(_DWORD *)&v11[v15] = *v6;
        if ( 0 != v15 >> 2 )
          _aeabi_memmove4(v11, v8);
        v9 = (char *)(v16 + 4);
        if ( v8 )
          operator delete(v8);
        v10 = (int)&v11[4 * v14];
        v8 = v11;
        *(_DWORD *)(v5 + 24) = v11;
        *(_DWORD *)(v5 + 28) = v9;
        *(_DWORD *)(v5 + 32) = v10;
      }
      else
        *(_DWORD *)v9 = *v6;
        v9 += 4;
      ++v6;
    }
    while ( v7 != v6 );
  }
  return v5;
}


PlayerHotbarPacket *__fastcall PlayerHotbarPacket::~PlayerHotbarPacket(PlayerHotbarPacket *this)
{
  PlayerHotbarPacket *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DA620;
  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
    operator delete(v2);
  return v1;
}


signed int __fastcall PlayerHotbarPacket::getId(PlayerHotbarPacket *this)
{
  return 48;
}
