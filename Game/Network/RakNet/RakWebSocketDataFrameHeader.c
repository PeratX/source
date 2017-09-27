

int __fastcall RakWebSocketDataFrameHeader::getPayloadLength(RakWebSocketDataFrameHeader *this)
{
  return *((_BYTE *)this + 1) & 0x7F;
}


int __fastcall RakWebSocketDataFrameHeader::getRSV1Bit(RakWebSocketDataFrameHeader *this)
{
  return *(_BYTE *)this & 0x40;
}


int __fastcall RakWebSocketDataFrameHeader::getOpCode(RakWebSocketDataFrameHeader *this)
{
  return *(_BYTE *)this & 0xF;
}


_WORD *__fastcall RakWebSocketDataFrameHeader::RakWebSocketDataFrameHeader(_WORD *result)
{
  *result = 0;
  return result;
}


int __fastcall RakWebSocketDataFrameHeader::getMaskBit(RakWebSocketDataFrameHeader *this)
{
  return *((_BYTE *)this + 1) & 0x80;
}


int __fastcall RakWebSocketDataFrameHeader::getRSV3Bit(RakWebSocketDataFrameHeader *this)
{
  return *(_BYTE *)this & 0x10;
}


int __fastcall RakWebSocketDataFrameHeader::RakWebSocketDataFrameHeader(int result, int a2, char a3, char a4, int a5, char a6, int a7, char a8)
{
  if ( a2 )
    LOBYTE(a2) = -128;
  *(_BYTE *)result = ((a2 & 0xBF | ((a3 & 1) << 6)) & 0xDF | 32 * (a4 & 1)) & 0xEF | 16 * (a5 & 1) | a7 & 0xF;
  *(_BYTE *)(result + 1) = a8 & 0x7F | ((a6 & 1) << 7);
  return result;
}


int __fastcall RakWebSocketDataFrameHeader::getRSV2Bit(RakWebSocketDataFrameHeader *this)
{
  return *(_BYTE *)this & 0x20;
}


int __fastcall RakWebSocketDataFrameHeader::getFinBit(RakWebSocketDataFrameHeader *this)
{
  return *(_BYTE *)this & 0x80;
}
