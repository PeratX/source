

int __fastcall AnimatePacket::read(AnimatePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  AnimatePacket *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 6) = ReadOnlyBinaryStream::getVarInt(a2);
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)v2);
  *((_QWORD *)v3 + 2) = *(_QWORD *)&v5;
  if ( *((_BYTE *)v3 + 24) & 0x80 )
    *((_DWORD *)v3 + 7) = ReadOnlyBinaryStream::getFloat(v2);
  return 0;
}


const void **__fastcall AnimatePacket::write(AnimatePacket *this, BinaryStream *a2)
{
  AnimatePacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  const void **result; // r0@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeVarInt(a2, *((_DWORD *)this + 6));
  BinaryStream::writeType<EntityRuntimeID>((int)v3, (unsigned __int64 *)v2 + 2);
  result = (const void **)*((_BYTE *)v2 + 24);
  if ( (unsigned __int8)result & 0x80 )
    result = j_j_j__ZN12BinaryStream10writeFloatEf_0(v3, *((float *)v2 + 7));
  return result;
}


signed int __fastcall AnimatePacket::getId(AnimatePacket *this)
{
  return 44;
}


int __fastcall AnimatePacket::handle(AnimatePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AnimatePacket *))(*(_DWORD *)a3 + 260))(
           a3,
           a2,
           this);
}
