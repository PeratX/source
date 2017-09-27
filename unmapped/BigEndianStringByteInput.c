

int __fastcall BigEndianStringByteInput::readFloat(BigEndianStringByteInput *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 48))();
  return v2;
}


int __fastcall BigEndianStringByteInput::readShort(BigEndianStringByteInput *this)
{
  __int16 v2; // [sp+6h] [bp-Ah]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 48))();
  return v2;
}


int __fastcall BigEndianStringByteInput::readInt(BigEndianStringByteInput *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 48))();
  return v2;
}


signed int __fastcall BigEndianStringByteInput::readBigEndianBytes(BigEndianStringByteInput *this, void *a2, unsigned int a3)
{
  BigEndianStringByteInput *v3; // r6@1
  char *v4; // r4@1
  unsigned int v5; // r5@1
  signed int result; // r0@2
  unsigned int v7; // r7@3
  char *v8; // r0@5
  unsigned int v9; // r1@6
  char v10; // r2@7
  bool v11; // cf@7
  bool v12; // zf@7

  v3 = this;
  v4 = (char *)a2;
  v5 = a3;
  if ( *((_DWORD *)this + 1) == *(_DWORD *)(**((_DWORD **)this + 3) - 12) )
  {
    result = 0;
  }
  else
    v7 = (*(int (__fastcall **)(BigEndianStringByteInput *))(*(_DWORD *)this + 44))(this);
    if ( v7 > v5 )
      v7 = v5;
    j___aeabi_memcpy((int)v4, **((_DWORD **)v3 + 3) + *((_DWORD *)v3 + 1), v7);
    *((_DWORD *)v3 + 1) += v7;
    v8 = &v4[v5 - 1];
    if ( v8 >= v4 )
    {
      v9 = (unsigned int)(v4 + 1);
      do
      {
        v10 = *(_BYTE *)(v9 - 1);
        *(_BYTE *)(v9 - 1) = *v8;
        *v8-- = v10;
        v11 = v9 >= (unsigned int)v8;
        v12 = v9++ == (_DWORD)v8;
      }
      while ( v12 || !v11 );
    }
    result = 1;
  return result;
}


signed int __fastcall BigEndianStringByteInput::readBytes(BigEndianStringByteInput *this, void *a2, unsigned int a3)
{
  BigEndianStringByteInput *v3; // r4@1
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
    v7 = (*(int (__fastcall **)(BigEndianStringByteInput *))(*(_DWORD *)this + 44))(this);
    if ( v7 > v5 )
      v7 = v5;
    j___aeabi_memcpy((int)v4, **((_DWORD **)v3 + 3) + *((_DWORD *)v3 + 1), v7);
    *((_DWORD *)v3 + 1) += v7;
    result = 1;
  return result;
}


int __fastcall BigEndianStringByteInput::readDouble(BigEndianStringByteInput *this)
{
  int result; // r0@1
  double v7; // [sp+0h] [bp-10h]@1

  v7 = 0.0;
  (*(void (**)(void))(*(_DWORD *)this + 48))();
  __asm
  {
    VLDR            D0, [SP,#0x10+var_10]
    VMOV            R0, R1, D0
  }
  return result;
}


__int64 __fastcall BigEndianStringByteInput::readLongLong(BigEndianStringByteInput *this)
{
  __int64 v2; // [sp+0h] [bp-10h]@1

  v2 = 0LL;
  (*(void (__cdecl **)(BigEndianStringByteInput *, __int64 *))(*(_DWORD *)this + 48))(this, &v2);
  return v2;
}
