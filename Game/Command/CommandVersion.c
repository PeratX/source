

signed int __fastcall CommandVersion::overlaps(CommandVersion *this, const CommandVersion *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  signed int result; // r0@3

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)this > *(_DWORD *)a2 || *((_DWORD *)this + 1) < v3 )
  {
    result = 0;
    if ( v3 <= v2 && *((_DWORD *)a2 + 1) >= v2 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall CommandVersion::isCompatible(CommandVersion *this, int a2)
{
  CommandVersion *v2; // r2@1
  signed int result; // r0@1

  v2 = this;
  result = 0;
  if ( *(_DWORD *)v2 <= a2 && *((_DWORD *)v2 + 1) >= a2 )
    result = 1;
  return result;
}


_QWORD *__fastcall CommandVersion::CommandVersion(_QWORD *result, __int64 a2)
{
  *result = a2;
  return result;
}
