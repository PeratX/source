

void __fastcall ExplodePacket::~ExplodePacket(ExplodePacket *this)
{
  ExplodePacket::~ExplodePacket(this);
}


void __fastcall ExplodePacket::~ExplodePacket(ExplodePacket *this)
{
  ExplodePacket *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E9544;
  v2 = (void *)*((_DWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall ExplodePacket::read(ExplodePacket *this, BinaryStream *a2)
{
  ExplodePacket *v2; // r5@1
  BinaryStream *v3; // r8@1
  int v9; // r1@1
  __int64 v10; // r6@1
  int v11; // r4@1
  _DWORD *v12; // r0@1
  _DWORD *v14; // [sp+4h] [bp-34h]@1
  void (*v15)(void); // [sp+Ch] [bp-2Ch]@1
  int (__fastcall *v16)(int, int *, int); // [sp+10h] [bp-28h]@1
  int v17; // [sp+14h] [bp-24h]@1
  int v18; // [sp+18h] [bp-20h]@1
  int v19; // [sp+1Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v17, (int)a2);
  __asm
  {
    VLDR            D0, =32.0
    VMOV            R2, R3, D0
  }
  *((_DWORD *)v2 + 4) = v17;
  v2 = (ExplodePacket *)((char *)v2 + 16);
  *((_DWORD *)v2 + 1) = v18;
  *((_DWORD *)v2 + 2) = v19;
  *((_DWORD *)v2 + 3) = ReadOnlyBinaryStream::getFixedFloat(v3, v9, _R2);
  BlockPos::BlockPos((int)&v17, (int)v2);
  v10 = *(_QWORD *)&v17;
  v11 = v19;
  v12 = operator new(0xCu);
  *(_QWORD *)v12 = v10;
  v12[2] = v11;
  v14 = v12;
  v15 = (void (*)(void))std::_Function_base::_Base_manager<ExplodePacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v16 = std::_Function_handler<BlockPos ()(ReadOnlyBinaryStream &),ExplodePacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<BlockPos>(v3, (int)v2 + 16, (int)&v14);
  if ( v15 )
    v15();
  return 0;
}


ExplodePacket *__fastcall ExplodePacket::~ExplodePacket(ExplodePacket *this)
{
  ExplodePacket *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E9544;
  v2 = (void *)*((_DWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall ExplodePacket::handle(ExplodePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ExplodePacket *))(*(_DWORD *)a3 + 140))(
           a3,
           a2,
           this);
}


unsigned int __fastcall ExplodePacket::write(ExplodePacket *this, BinaryStream *a2)
{
  ExplodePacket *v2; // r5@1
  char *v3; // r6@1
  BinaryStream *v4; // r4@1
  int v10; // r6@1
  int v11; // r7@1
  int v12; // r8@1
  _DWORD *v13; // r0@1
  unsigned int result; // r0@1
  __int64 i; // r6@1
  _DWORD *v16; // [sp+4h] [bp-34h]@1
  int (*v17)(void); // [sp+Ch] [bp-2Ch]@1
  unsigned int (__fastcall *v18)(int *, int, int); // [sp+10h] [bp-28h]@1
  char v19; // [sp+14h] [bp-24h]@1
  int v20; // [sp+18h] [bp-20h]@1
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v2 = this;
  v3 = (char *)this + 16;
  v4 = a2;
  BinaryStream::writeType<Vec3>((int)a2, (int *)this + 4);
  __asm
  {
    VLDR            D0, =32.0
    VMOV            R2, R3, D0
  }
  BinaryStream::writeFixedFloat(v4, *((float *)v2 + 7), _R2);
  BlockPos::BlockPos((int)&v19, (int)v3);
  v10 = *(_DWORD *)&v19;
  v11 = v20;
  v12 = v21;
  v13 = operator new(0xCu);
  *v13 = v10;
  v13[1] = v11;
  v13[2] = v12;
  v16 = v13;
  v17 = (int (*)(void))std::_Function_base::_Base_manager<ExplodePacket::write(BinaryStream &)const::{lambda(BinaryStream &,BlockPos const&)#1}>::_M_manager;
  v18 = std::_Function_handler<void ()(BinaryStream &,BlockPos const&),ExplodePacket::write(BinaryStream &)const::{lambda(BinaryStream &,BlockPos const&)#1}>::_M_invoke;
  result = BinaryStream::writeUnsignedVarInt(
             v4,
             -1431655765 * ((signed int)((*((_QWORD *)v2 + 4) >> 32) - *((_QWORD *)v2 + 4)) >> 2));
  for ( i = *((_QWORD *)v2 + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 12 )
    if ( !v17 )
      sub_21E5F48();
    result = v18((int *)&v16, (int)v4, i);
  if ( v17 )
    result = v17();
  return result;
}


signed int __fastcall ExplodePacket::getId(ExplodePacket *this)
{
  return 23;
}
