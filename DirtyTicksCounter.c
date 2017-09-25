

int __fastcall DirtyTicksCounter::touch(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)result;
  if ( *(_DWORD *)result <= -1 )
  {
    v1 = 0;
    *(_DWORD *)result = 0;
  }
  *(_DWORD *)(result + 4) = v1;
  return result;
}


_QWORD *__fastcall DirtyTicksCounter::DirtyTicksCounter(_QWORD *result)
{
  *result = 0x80000000LL;
  return result;
}


int __fastcall DirtyTicksCounter::getTotalDirtyTicks(DirtyTicksCounter *this)
{
  return *(_DWORD *)this;
}


int __fastcall DirtyTicksCounter::max(int result)
{
  *(_DWORD *)result = 0x7FFFFFFF;
  *(_DWORD *)(result + 4) = 0x7FFFFFFF;
  return result;
}


int __fastcall DirtyTicksCounter::reset(int result)
{
  *(_QWORD *)result = 0x80000000LL;
  return result;
}
