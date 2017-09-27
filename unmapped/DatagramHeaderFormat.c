

RakNet::BitStream *__fastcall DatagramHeaderFormat::Serialize(DatagramHeaderFormat *this, RakNet::BitStream *a2)
{
  RakNet::BitStream *v2; // r4@1
  DatagramHeaderFormat *v3; // r5@1
  unsigned int v4; // r6@1
  RakNet::BitStream *result; // r0@8
  const unsigned __int8 *v6; // r5@9
  unsigned int v7; // r3@9
  int v8; // r0@20
  RakNet::BitStream *v9; // r0@20
  unsigned int v10; // r0@21
  int v11; // r1@21
  char v12; // r2@21
  unsigned __int8 v13; // [sp+4h] [bp-14h]@11

  v2 = a2;
  v3 = this;
  j_RakNet::BitStream::Write1(a2);
  v4 = *((_WORD *)v3 + 4);
  if ( (_BYTE)v4 )
  {
    j_RakNet::BitStream::Write1(v2);
    if ( *((_BYTE *)v3 + 11) )
      j_RakNet::BitStream::Write1(v2);
    else
      j_RakNet::BitStream::Write0(v2);
    *(_DWORD *)v2 += ~(*(_DWORD *)v2 + 7) & 7;
    result = (RakNet::BitStream *)*((_BYTE *)v3 + 11);
    {
      v6 = (const unsigned __int8 *)v3 + 4;
      if ( j_RakNet::BitStream::IsNetworkOrderInternal(result) )
      {
        result = (RakNet::BitStream *)j_j_j__ZN6RakNet9BitStream9WriteBitsEPKhjb_1(v2, v6, 0x20u, 1);
      }
      else
        j_RakNet::BitStream::ReverseBytes((RakNet::BitStream *)v6, &v13, (unsigned __int8 *)4, v7);
        result = (RakNet::BitStream *)j_RakNet::BitStream::WriteBits(v2, &v13, 0x20u, 1);
    }
  }
  else
    j_RakNet::BitStream::Write0(v2);
    if ( v4 >= 0x100 )
      result = (RakNet::BitStream *)j_j_j__ZN6RakNet9BitStream6Write1Ev_0(v2);
      if ( *((_BYTE *)v3 + 10) )
        j_RakNet::BitStream::Write1(v2);
        j_RakNet::BitStream::Write0(v2);
      if ( *((_BYTE *)v3 + 12) )
      if ( *((_BYTE *)v3 + 13) )
      v8 = *(_DWORD *)v2 + (~(*(_DWORD *)v2 + 7) & 7);
      *(_DWORD *)v2 = v8 + (~(v8 + 7) & 7);
      v9 = (RakNet::BitStream *)j_RakNet::BitStream::AddBitsAndReallocate(v2, 0x18u);
      if ( j_RakNet::BitStream::IsNetworkOrderInternal(v9) )
        *(_BYTE *)(*((_DWORD *)v2 + 3) + (*(_DWORD *)v2 >> 3)) = *((_BYTE *)v3 + 3);
        *(_BYTE *)(*((_DWORD *)v2 + 3) + (*(_DWORD *)v2 >> 3) + 1) = *((_BYTE *)v3 + 2);
        v10 = *(_DWORD *)v2;
        v11 = *((_DWORD *)v2 + 3);
        v12 = *((_BYTE *)v3 + 1);
        *(_BYTE *)(*((_DWORD *)v2 + 3) + (*(_DWORD *)v2 >> 3)) = *(_BYTE *)v3;
        *(_BYTE *)(*((_DWORD *)v2 + 3) + (*(_DWORD *)v2 >> 3) + 1) = *((_BYTE *)v3 + 1);
        v12 = *((_BYTE *)v3 + 2);
      *(_BYTE *)(v11 + (v10 >> 3) + 2) = v12;
      result = (RakNet::BitStream *)(*(_DWORD *)v2 + 24);
      *(_DWORD *)v2 = result;
  return result;
}


RakNet::BitStream *__fastcall DatagramHeaderFormat::Deserialize(DatagramHeaderFormat *this, RakNet::BitStream *a2)
{
  RakNet::BitStream *v2; // r4@1
  DatagramHeaderFormat *v3; // r6@1
  unsigned int v4; // r2@1
  RakNet::BitStream *result; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r2@3
  int v8; // r2@6
  unsigned int v9; // r3@7
  int v10; // r2@12
  int v11; // r2@14
  int v12; // r3@15
  unsigned int v13; // r0@16
  unsigned int v14; // r3@20
  unsigned int v15; // r3@22
  unsigned int v16; // r2@25
  unsigned int v17; // r1@27
  unsigned int v18; // r1@30
  unsigned int v19; // r2@32
  int v20; // r2@35
  unsigned int v21; // r1@37
  int v22; // r1@40
  int v23; // r0@41
  char v24; // r1@41
  unsigned __int8 v25; // [sp+4h] [bp-14h]@20

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 2);
  result = *(RakNet::BitStream **)a2;
  v6 = v4 + 1;
  if ( v4 + 1 <= (unsigned int)result )
  {
    v7 = (0x80u >> (v4 & 7)) & *(_BYTE *)(*((_DWORD *)v2 + 3) + (v4 >> 3));
    if ( v7 )
      LOBYTE(v7) = 1;
    *((_BYTE *)v3 + 14) = v7;
    *((_DWORD *)v2 + 2) = v6;
  }
  else
    v6 = v4;
  v8 = v6 + 1;
  if ( v6 + 1 <= (unsigned int)result )
    v9 = *(_BYTE *)(*((_DWORD *)v2 + 3) + (v6 >> 3)) & (0x80u >> (v6 & 7));
    ++v6;
    if ( v9 )
      LOBYTE(v9) = 1;
    *((_BYTE *)v3 + 8) = v9;
    *((_DWORD *)v2 + 2) = v8;
    v9 = *((_DWORD *)v3 + 2);
  if ( (_BYTE)v9 )
    *(_WORD *)((char *)v3 + 9) = 0;
    v10 = v6 + 1;
    if ( v6 + 1 <= (unsigned int)result )
    {
      v13 = *(_BYTE *)(*((_DWORD *)v2 + 3) + (v6 >> 3)) & (0x80u >> (v6 & 7));
      ++v6;
      result = (RakNet::BitStream *)(v13 != 0);
      *((_BYTE *)v3 + 11) = (_BYTE)result;
      *((_DWORD *)v2 + 2) = v10;
    }
    else
      result = (RakNet::BitStream *)*((_BYTE *)v3 + 11);
    *((_DWORD *)v2 + 2) = v6 + (~(v6 + 7) & 7);
    if ( result )
      if ( j_RakNet::BitStream::IsNetworkOrderInternal(result) )
      {
        result = (RakNet::BitStream *)j_j_j__ZN6RakNet9BitStream8ReadBitsEPhjb_1(
                                        v2,
                                        (unsigned __int8 *)v3 + 4,
                                        0x20u,
                                        1);
      }
      else
        result = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits(v2, &v25, 0x20u, 1);
        if ( result == (RakNet::BitStream *)1 )
          result = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                          (RakNet::BitStream *)&v25,
                                          (unsigned __int8 *)v3 + 4,
                                          (unsigned __int8 *)4,
                                          v14);
    v11 = v6 + 1;
      v15 = *(_BYTE *)(*((_DWORD *)v2 + 3) + (v6 >> 3)) & (0x80u >> (v6 & 7));
      v12 = v15 != 0;
      *((_BYTE *)v3 + 9) = v12;
      *((_DWORD *)v2 + 2) = v11;
      v12 = *((_BYTE *)v3 + 9);
    if ( v12 )
      result = 0;
      *((_BYTE *)v3 + 10) = 0;
      v16 = v6 + 1;
      if ( v6 + 1 <= (unsigned int)result )
        v17 = (0x80u >> (v6 & 7)) & *(_BYTE *)(*((_DWORD *)v2 + 3) + (v6 >> 3));
        if ( v17 )
          LOBYTE(v17) = 1;
        *((_BYTE *)v3 + 10) = v17;
        *((_DWORD *)v2 + 2) = v16;
        v16 = v6;
      v18 = v16 + 1;
      if ( v16 + 1 <= (unsigned int)result )
        v19 = (0x80u >> (v16 & 7)) & *(_BYTE *)(*((_DWORD *)v2 + 3) + (v16 >> 3));
        if ( v19 )
          LOBYTE(v19) = 1;
        *((_BYTE *)v3 + 12) = v19;
        *((_DWORD *)v2 + 2) = v18;
        v18 = v16;
      v20 = v18 + 1;
      if ( v18 + 1 <= (unsigned int)result )
        v21 = (0x80u >> (v18 & 7)) & *(_BYTE *)(*((_DWORD *)v2 + 3) + (v18 >> 3));
        if ( v21 )
          LOBYTE(v21) = 1;
        *((_BYTE *)v3 + 13) = v21;
        *((_DWORD *)v2 + 2) = v20;
        v20 = v18;
      v22 = (~(v20 + 7) & 7) + v20 + (~((~(v20 + 7) & 7) + v20 + 7) & 7);
      *((_DWORD *)v2 + 2) = v22;
      if ( v22 + 24 <= (unsigned int)result )
        v23 = j_RakNet::BitStream::IsNetworkOrderInternal(result);
        v24 = *(_BYTE *)((*((_QWORD *)v2 + 1) >> 32) + ((unsigned int)*((_QWORD *)v2 + 1) >> 3));
        if ( v23 )
        {
          *((_BYTE *)v3 + 3) = v24;
          *((_BYTE *)v3 + 2) = *(_BYTE *)((*((_QWORD *)v2 + 1) >> 32) + ((unsigned int)*((_QWORD *)v2 + 1) >> 3) + 1);
          *((_BYTE *)v3 + 1) = *(_BYTE *)((*((_QWORD *)v2 + 1) >> 32) + ((unsigned int)*((_QWORD *)v2 + 1) >> 3) + 2);
          *(_BYTE *)v3 = 0;
        }
        else
          *(_BYTE *)v3 = v24;
          *((_BYTE *)v3 + 1) = *(_BYTE *)((*((_QWORD *)v2 + 1) >> 32) + ((unsigned int)*((_QWORD *)v2 + 1) >> 3) + 1);
          *((_BYTE *)v3 + 2) = *(_BYTE *)((*((_QWORD *)v2 + 1) >> 32) + ((unsigned int)*((_QWORD *)v2 + 1) >> 3) + 2);
          *((_BYTE *)v3 + 3) = 0;
        result = (RakNet::BitStream *)(*((_DWORD *)v2 + 2) + 24);
        *((_DWORD *)v2 + 2) = result;
  return result;
}
