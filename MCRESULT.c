

unsigned int __fastcall MCRESULT::getFullCode(MCRESULT *this)
{
  int v1; // r1@1

  v1 = *(_WORD *)this;
  _R2 = v1 << 8;
  __asm { UXTB16.W        R2, R2 }
  return (*((_WORD *)this + 1) | _R2 | (v1 << 31)) ^ 0x80000000;
}


signed int __fastcall MCRESULT::isSuccess(MCRESULT *this, int a2)
{
  signed int v2; // r1@1

  v2 = 0;
  if ( (signed int)this > -1 )
    v2 = 1;
  return v2;
}


int __fastcall MCRESULT::isSuccess(MCRESULT *this)
{
  return *(_BYTE *)this;
}


int __fastcall MCRESULT::MCRESULT(int result, unsigned int a2)
{
  *(_BYTE *)result = (a2 >> 31) ^ 1;
  *(_BYTE *)(result + 1) = a2 >> 16;
  *(_WORD *)(result + 2) = a2;
  return result;
}


int __fastcall MCRESULT::MCRESULT(int result, char a2, char a3, __int16 a4)
{
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = a3;
  *(_WORD *)(result + 2) = a4;
  return result;
}
