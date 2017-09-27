

int __fastcall RakDataOutput::writeBytes(RakDataOutput *this, const void *a2, unsigned int a3)
{
  return j_j_j__ZN6RakNet9BitStream9WriteBitsEPKhjb_0(
           *((RakNet::BitStream **)this + 1),
           (const unsigned __int8 *)a2,
           8 * a3,
           1);
}
