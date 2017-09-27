

int __fastcall BytesDataOutput::writeFloat(BytesDataOutput *this, float a2)
{
  float v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return (*(int (**)(void))(*(_DWORD *)this + 40))();
}


int __fastcall BytesDataOutput::writeLongString(int a1, _DWORD *a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  int v4; // r1@1
  int v5; // r2@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(*a2 - 12);
  (*(void (**)(void))(*(_DWORD *)a1 + 32))();
  v5 = *(_DWORD *)(*v3 - 12);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2);
}


int __fastcall BytesDataOutput::writeDouble(BytesDataOutput *this, int a2, double _R2)
{
  __asm
  {
    VMOV            D0, R2, R3
    VSTR            D0, [SP,#0x10+var_10]
  }
  return (*(int (**)(void))(*(_DWORD *)this + 40))();
}


int __fastcall BytesDataOutput::writeInt(BytesDataOutput *this, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return (*(int (**)(void))(*(_DWORD *)this + 40))();
}


int __fastcall BytesDataOutput::writeString(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(*a2 - 12) & 0x7FFF;
  (*(void (**)(void))(*(_DWORD *)a1 + 28))();
  return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 40))(v3, *v2, v4);
}


int __fastcall BytesDataOutput::writeShort(BytesDataOutput *this, __int16 a2)
{
  __int16 v3; // [sp+6h] [bp-Ah]@1

  v3 = a2;
  return (*(int (**)(void))(*(_DWORD *)this + 40))();
}


int __fastcall BytesDataOutput::writeLongLong(BytesDataOutput *this, int a2, __int64 a3)
{
  __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = a3;
  return (*(int (__cdecl **)(BytesDataOutput *, __int64 *))(*(_DWORD *)this + 40))(this, &v4);
}


int __fastcall BytesDataOutput::writeByte(BytesDataOutput *this, char a2)
{
  char v3; // [sp+7h] [bp-9h]@1

  v3 = a2;
  return (*(int (**)(void))(*(_DWORD *)this + 40))();
}
