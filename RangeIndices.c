

unsigned int __fastcall RangeIndices::getPolyCount(RangeIndices *this)
{
  _R0 = *((_DWORD *)this + 1);
  _R1 = 1431655766;
  __asm { SMMUL.W         R0, R0, R1 }
  return _R0 + (_R0 >> 31);
}
