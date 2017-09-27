

signed int __fastcall StringByteInput::readBytes(StringByteInput *this, void *a2, unsigned int a3)
{
  StringByteInput *v3; // r4@1
  void *v4; // r5@1
  unsigned int v5; // r6@1
  signed int result; // r0@2
  unsigned int v7; // r7@3

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( *((_DWORD *)this + 1) == *(_DWORD *)(**((_DWORD **)this + 3) - 12) )
  {
    result = 0;
  }
  else
    v7 = (*(int (__fastcall **)(StringByteInput *))(*(_DWORD *)this + 44))(this);
    if ( v7 > v5 )
      v7 = v5;
    _aeabi_memcpy(v4, (const char *)(**((_DWORD **)v3 + 3) + *((_DWORD *)v3 + 1)), v7);
    *((_DWORD *)v3 + 1) += v7;
    result = 1;
  return result;
}
