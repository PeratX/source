

int __fastcall BlockState::initState(int result, unsigned int *a2, unsigned int a3)
{
  if ( !*(_BYTE *)(result + 8) )
  {
    *(_DWORD *)(result + 4) = a3;
    *(_DWORD *)result = *a2 + a3 - 1;
    *(_BYTE *)(result + 8) = 1;
    result = *a2 + a3;
    *a2 = result;
  }
  return result;
}


_BOOL4 __fastcall BlockState::getBool(BlockState *this, const unsigned __int8 *a2)
{
  return ((1 << *(_DWORD *)this) & *a2) != 0;
}


int __fastcall BlockState::BlockState(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
