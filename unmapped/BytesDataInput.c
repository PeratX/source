

int __fastcall BytesDataInput::readDouble(BytesDataInput *this)
{
  int result; // r0@1
  double v7; // [sp+0h] [bp-10h]@1

  v7 = 0.0;
  (*(void (**)(void))(*(_DWORD *)this + 40))();
  __asm
  {
    VLDR            D0, [SP,#0x10+var_10]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall BytesDataInput::readFloat(BytesDataInput *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 40))();
  return v2;
}


int __fastcall BytesDataInput::readInt(BytesDataInput *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 40))();
  return v2;
}


__int64 __fastcall BytesDataInput::readLongLong(BytesDataInput *this)
{
  __int64 v2; // [sp+0h] [bp-10h]@1

  v2 = 0LL;
  (*(void (__cdecl **)(BytesDataInput *, __int64 *))(*(_DWORD *)this + 40))(this, &v2);
  return v2;
}


void **__fastcall BytesDataInput::readString(BytesDataInput *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  signed int v4; // r6@1
  void *v5; // r7@4
  void **result; // r0@4

  v2 = a2;
  v3 = (void **)this;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v4 <= 0 )
  {
    result = sub_21E94B4(v3, (const char *)&unk_257BC67);
  }
  else
    if ( (unsigned __int16)v4 == 0x7FFF )
      v4 = 32766;
    v5 = sub_21E757C(v4, 0);
    result = (void **)(*(int (__fastcall **)(int, void *, signed int))(*(_DWORD *)v2 + 40))(v2, v5, v4);
    *v3 = v5;
  return result;
}


int __fastcall BytesDataInput::readShort(BytesDataInput *this)
{
  __int16 v2; // [sp+6h] [bp-Ah]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 40))();
  return v2;
}


void **__fastcall BytesDataInput::readLongString(BytesDataInput *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  signed int v4; // r0@1
  signed int v5; // r7@1
  void *v6; // r6@2
  void **result; // r0@2

  v2 = a2;
  v3 = (void **)this;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
  v5 = v4;
  if ( v4 <= 0 )
  {
    result = sub_21E94B4(v3, (const char *)&unk_257BC67);
  }
  else
    v6 = sub_21E757C(v4, 0);
    result = (void **)(*(int (__fastcall **)(int, void *, signed int))(*(_DWORD *)v2 + 40))(v2, v6, v5);
    *v3 = v6;
  return result;
}


int __fastcall BytesDataInput::readByte(BytesDataInput *this)
{
  unsigned __int8 v2; // [sp+7h] [bp-9h]@1

  v2 = 0;
  (*(void (**)(void))(*(_DWORD *)this + 40))();
  return v2;
}
