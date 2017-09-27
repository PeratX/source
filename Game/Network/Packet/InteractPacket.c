

signed int __fastcall InteractPacket::getId(InteractPacket *this)
{
  return 33;
}


int __fastcall InteractPacket::read(InteractPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  InteractPacket *v3; // r4@1
  int v4; // r0@2
  int v6; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v6, (int)v2);
  *((_QWORD *)v3 + 2) = *(_QWORD *)&v6;
  if ( *((_BYTE *)v3 + 13) == 4 )
  {
    *((_DWORD *)v3 + 6) = ReadOnlyBinaryStream::getFloat(v2);
    *((_DWORD *)v3 + 7) = ReadOnlyBinaryStream::getFloat(v2);
    v4 = ReadOnlyBinaryStream::getFloat(v2);
  }
  else
    *((_QWORD *)v3 + 3) = *(_QWORD *)&Vec3::ZERO;
    v4 = dword_2822498;
  *((_DWORD *)v3 + 8) = v4;
  return 0;
}


const void **__fastcall InteractPacket::write(InteractPacket *this, BinaryStream *a2)
{
  InteractPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  const void **result; // r0@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeType<EntityRuntimeID>((int)v3, (unsigned __int64 *)v2 + 2);
  result = (const void **)*((_BYTE *)v2 + 13);
  if ( result == (const void **)4 )
  {
    BinaryStream::writeFloat(v3, *((float *)v2 + 6));
    BinaryStream::writeFloat(v3, *((float *)v2 + 7));
    result = j_j_j__ZN12BinaryStream10writeFloatEf_0(v3, *((float *)v2 + 8));
  }
  return result;
}


int __fastcall InteractPacket::handle(InteractPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, InteractPacket *))(*(_DWORD *)a3 + 204))(
           a3,
           a2,
           this);
}
