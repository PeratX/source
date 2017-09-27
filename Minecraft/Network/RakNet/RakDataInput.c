

signed int __fastcall RakDataInput::readBytes(RakDataInput *this, void *a2, unsigned int a3)
{
  RakDataInput *v3; // r6@1
  unsigned __int8 *v4; // r4@1
  unsigned int v5; // r5@1
  signed int result; // r0@2

  v3 = this;
  v4 = (unsigned __int8 *)a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 44))() >= a3 )
  {
    j_RakNet::BitStream::ReadBits(*((RakNet::BitStream **)v3 + 1), v4, 8 * v5, 1);
    result = 1;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall RakDataInput::numBytesLeft(RakDataInput *this)
{
  return (unsigned int)(**((_DWORD **)this + 1) - *(_DWORD *)(*((_DWORD *)this + 1) + 8)) >> 3;
}
