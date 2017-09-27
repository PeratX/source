

int __fastcall RakWebSocketDataFrame::_isUnsupported(RakWebSocketDataFrame *this, unsigned __int8 a2)
{
  bool v2; // cf@1
  bool v3; // zf@1
  unsigned __int8 v4; // r0@1
  signed int v5; // r2@1
  signed int v6; // r1@1

  v2 = (unsigned int)this >= 0xA;
  v3 = this == (RakWebSocketDataFrame *)10;
  v4 = (_BYTE)this - 3;
  v5 = 0;
  v6 = 0;
  if ( !v3 && v2 )
    v5 = 1;
  if ( v4 < 5u )
    v6 = 1;
  return v5 | v6;
}


int __fastcall RakWebSocketDataFrame::writeFrameToStream(int a1, const unsigned __int8 *a2, unsigned int a3, int a4, int a5, int a6)
{
  __int16 v6; // r6@1
  const unsigned __int8 *v7; // r8@1
  int v8; // r4@1
  char v9; // r0@1
  int v10; // r5@5
  char v11; // r0@5
  int v12; // r5@12
  int v13; // r0@12
  int v14; // r1@12
  unsigned int v15; // r1@13
  int v16; // r2@13
  char v18[4]; // [sp+14h] [bp-8h]@10
  char v19[2]; // [sp+1Ah] [bp-2h]@9
  char v20; // [sp+1Ch] [bp+0h]@7
  int v21; // [sp+20h] [bp+4h]@1
  char v22[4]; // [sp+24h] [bp+8h]@1
  int v23; // [sp+28h] [bp+Ch]@12

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 126;
  v21 = a6;
  *(_DWORD *)v22 = a3;
  if ( a3 >> 16 )
    v9 = 127;
  if ( a3 <= 0x7D )
    v9 = a3;
  v10 = (unsigned __int8)v9;
  v11 = a6;
  if ( a6 )
    v11 = 1;
  RakWebSocketDataFrameHeader::RakWebSocketDataFrameHeader((int)&v20, a5, 0, 0, 0, v11, a4, v10);
  RakNet::BitStream::WriteAlignedBytes((RakNet::BitStream *)v8, (const unsigned __int8 *)&v20, 2u);
  if ( v10 == 127 )
  {
    *(_DWORD *)v18 = 0;
    RakNet::BitStream::WriteAlignedVar32((RakNet::BitStream *)v8, v18);
    RakNet::BitStream::WriteAlignedVar32((RakNet::BitStream *)v8, v22);
  }
  else if ( v10 == 126 )
    *(_WORD *)v19 = v6;
    RakNet::BitStream::WriteAlignedVar16((RakNet::BitStream *)v8, v19);
    RakNet::BitStream::WriteAlignedVar32((RakNet::BitStream *)v8, (const char *)&v21);
    v12 = *(_DWORD *)v8;
    RakNet::BitStream::WriteAlignedBytes((RakNet::BitStream *)v8, v7, *(unsigned int *)v22);
    v13 = *(_DWORD *)v22;
    v14 = *(_DWORD *)(v8 + 12);
    v23 = v21;
    if ( *(_DWORD *)v22 )
    {
      v15 = v14 + ((unsigned int)(v12 + 7) >> 3);
      v16 = 0;
      do
      {
        *(_BYTE *)(v15 + v16) ^= *(_BYTE *)(~v16 & 3 | (unsigned int)&v23);
        ++v16;
      }
      while ( v13 != v16 );
    }
  else
  return RakWebSocketDataFrameHeader::~RakWebSocketDataFrameHeader((RakWebSocketDataFrameHeader *)&v20);
}


signed int __fastcall RakWebSocketDataFrame::_isControl(RakWebSocketDataFrame *this, unsigned __int8 a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = (unsigned __int8)this & 0xF8;
  result = 0;
  if ( v2 == 8 )
    result = 1;
  return result;
}


char *__fastcall RakWebSocketDataFrame::getPayload(RakWebSocketDataFrame *this)
{
  return (char *)this + 4;
}


int __fastcall RakWebSocketDataFrame::~RakWebSocketDataFrame(RakWebSocketDataFrame *this)
{
  RakWebSocketDataFrame *v1; // r4@1

  v1 = this;
  RakNet::BitStream::~BitStream((RakWebSocketDataFrame *)((char *)this + 4));
  return j_j_j__ZN27RakWebSocketDataFrameHeaderD2Ev(v1);
}


signed int __fastcall RakWebSocketDataFrame::_isNonControl(RakWebSocketDataFrame *this, unsigned __int8 a2)
{
  unsigned int v2; // r1@1
  signed int result; // r0@1

  v2 = (unsigned __int8)((_BYTE)this - 1);
  result = 0;
  if ( v2 < 7 )
    result = 1;
  return result;
}


_WORD *__fastcall RakWebSocketDataFrame::RakWebSocketDataFrame(_WORD *a1)
{
  _WORD *v1; // r4@1

  v1 = a1;
  RakWebSocketDataFrameHeader::RakWebSocketDataFrameHeader(a1);
  RakNet::BitStream::BitStream((RakNet::BitStream *)(v1 + 2));
  *((_DWORD *)v1 + 70) = 0;
  *((_DWORD *)v1 + 71) = 0;
  v1[146] = 0;
  *((_BYTE *)v1 + 294) = 0;
  *((_BYTE *)v1 + 295) = 4;
  *((_BYTE *)v1 + 296) = 2;
  *((_DWORD *)v1 + 75) = 0;
  return v1;
}


signed int __fastcall RakWebSocketDataFrame::getMessageType(RakWebSocketDataFrame *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = RakWebSocketDataFrameHeader::getOpCode(this);
  v2 = v1;
  if ( v1 != 2 )
    v2 = 0;
  if ( v1 == 1 )
    v2 = 1;
  return v2;
}


int __fastcall RakWebSocketDataFrame::_maskUnmaskData(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r12@0
  unsigned __int8 *v5; // r2@2

  if ( a2 )
  {
    v5 = 0;
    do
    {
      v5[result] ^= *(_BYTE *)(~(unsigned int)v5 & 3 | v4);
      ++v5;
    }
    while ( a2 != v5 );
  }
  return result;
}


signed int __fastcall RakWebSocketDataFrame::_isContinuation(RakWebSocketDataFrame *this, unsigned __int8 a2)
{
  signed int v2; // r1@1

  v2 = 0;
  if ( !this )
    v2 = 1;
  return v2;
}
