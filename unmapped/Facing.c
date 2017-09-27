

Facing *__fastcall Facing::getOpposite(Facing *this, signed __int8 a2)
{
  Facing *v2; // r1@1
  Facing *result; // r0@1

  v2 = this;
  result = (Facing *)1;
  switch ( v2 )
  {
    case 1u:
      result = 0;
      break;
    case 0u:
      return result;
    case 2u:
      result = (Facing *)3;
    case 3u:
      result = (Facing *)2;
    case 4u:
      result = (Facing *)5;
    case 5u:
      result = (Facing *)4;
    default:
      result = v2;
  }
  return result;
}


signed int __fastcall Facing::getCounterClockWise(Facing *this, signed __int8 a2)
{
  char *v2; // r0@1
  signed int result; // r0@2

  v2 = (char *)this - 2;
  if ( (unsigned int)v2 <= 3 )
    result = (char)(0x2030504u >> 8 * (_BYTE)v2);
  else
    result = 2;
  return result;
}


signed int __fastcall Facing::getClockWise(Facing *this, signed __int8 a2)
{
  char *v2; // r0@1
  signed int result; // r0@2

  v2 = (char *)this - 2;
  if ( (unsigned int)v2 <= 3 )
    result = (char)(0x3020405u >> 8 * (_BYTE)v2);
  else
    result = 2;
  return result;
}
