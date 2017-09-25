

signed int __fastcall ResourcePackClientResponsePacket::getId(ResourcePackClientResponsePacket *this)
{
  return 8;
}


void __fastcall ResourcePackClientResponsePacket::~ResourcePackClientResponsePacket(ResourcePackClientResponsePacket *this)
{
  ResourcePackClientResponsePacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D676C;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)this + 16,
    *((_DWORD *)this + 6));
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall ResourcePackClientResponsePacket::write(ResourcePackClientResponsePacket *this, BinaryStream *a2)
{
  ResourcePackClientResponsePacket *v2; // r6@1
  BinaryStream *v3; // r4@1
  int result; // r0@1
  int v5; // r5@2
  int v6; // r6@2

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 40));
  BinaryStream::writeUnsignedShort(v3, *((_WORD *)v2 + 18));
  result = *((_DWORD *)v2 + 9);
  if ( result )
  {
    v5 = *((_DWORD *)v2 + 7);
    v6 = (int)v2 + 20;
    while ( v5 != v6 )
    {
      BinaryStream::writeString((int)v3, (char **)(v5 + 16));
      result = sub_DA7FEC(v5);
      v5 = result;
    }
  }
  return result;
}


int __fastcall ResourcePackClientResponsePacket::handle(ResourcePackClientResponsePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ResourcePackClientResponsePacket *))(*(_DWORD *)a3 + 68))(
           a3,
           a2,
           this);
}


ResourcePackClientResponsePacket *__fastcall ResourcePackClientResponsePacket::~ResourcePackClientResponsePacket(ResourcePackClientResponsePacket *this)
{
  ResourcePackClientResponsePacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D676C;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)this + 16,
    *((_DWORD *)this + 6));
  return v1;
}


int __fastcall ResourcePackClientResponsePacket::read(ResourcePackClientResponsePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r11@1
  ResourcePackClientResponsePacket *v3; // r6@1
  int v4; // r10@1
  int v5; // r6@1
  int v6; // r5@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  void *v9; // r0@11
  int v11; // [sp+0h] [bp-38h]@3
  char v12; // [sp+4h] [bp-34h]@11

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 40) = ReadOnlyBinaryStream::getByte(a2);
  v4 = (int)v3 + 16;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v3 + 16,
    *((_DWORD *)v3 + 6));
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = (char *)v3 + 20;
  *((_QWORD *)v3 + 4) = (unsigned int)v3 + 20;
  v5 = ReadOnlyBinaryStream::getUnsignedShort(v2);
  if ( v5 )
  {
    v6 = 0;
    do
    {
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v11, (int)v2);
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_emplace_unique<std::string>(
        (int)&v12,
        v4,
        (const void **)&v11);
      v9 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v9);
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  return 0;
}


void __fastcall ResourcePackClientResponsePacket::~ResourcePackClientResponsePacket(ResourcePackClientResponsePacket *this)
{
  ResourcePackClientResponsePacket::~ResourcePackClientResponsePacket(this);
}
