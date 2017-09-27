

int __fastcall SpawnExperienceOrbPacket::read(SpawnExperienceOrbPacket *this, BinaryStream *a2)
{
  SpawnExperienceOrbPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)a2);
  *((_DWORD *)v2 + 4) = v5;
  *((_DWORD *)v2 + 5) = v6;
  *((_DWORD *)v2 + 6) = v7;
  *((_DWORD *)v2 + 7) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


unsigned int __fastcall SpawnExperienceOrbPacket::write(SpawnExperienceOrbPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  SpawnExperienceOrbPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<Vec3>((int)a2, (int *)this + 4);
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v2, *((_DWORD *)v3 + 7));
}


int __fastcall SpawnExperienceOrbPacket::handle(SpawnExperienceOrbPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SpawnExperienceOrbPacket *))(*(_DWORD *)a3 + 304))(
           a3,
           a2,
           this);
}


signed int __fastcall SpawnExperienceOrbPacket::getId(SpawnExperienceOrbPacket *this)
{
  return 66;
}
