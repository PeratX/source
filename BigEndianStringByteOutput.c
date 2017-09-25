

int __fastcall BigEndianStringByteOutput::writeFloat(BigEndianStringByteOutput *this, float a2)
{
  BigEndianStringByteOutput *v2; // r5@1
  float v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 24))();
  (*(void (__fastcall **)(BigEndianStringByteOutput *, int))(*(_DWORD *)v2 + 24))(v2, (LODWORD(v3) >> 16) & 0xFF);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v2 + 24))(
    v2,
    (unsigned __int16)(LOWORD(v3) >> 8));
  return (*(int (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, LOBYTE(v3));
}


int __fastcall BigEndianStringByteOutput::writeInt(BigEndianStringByteOutput *this, int a2)
{
  BigEndianStringByteOutput *v2; // r5@1
  unsigned int v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 24))();
  (*(void (__fastcall **)(BigEndianStringByteOutput *, unsigned int))(*(_DWORD *)v2 + 24))(v2, (v3 >> 16) & 0xFF);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, int))(*(_DWORD *)v2 + 24))(v2, (unsigned __int16)v3 >> 8);
  return (*(int (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, (unsigned __int8)v3);
}


int __fastcall BigEndianStringByteOutput::writeDouble(BigEndianStringByteOutput *this, int a2, double a3)
{
  BigEndianStringByteOutput *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1

  v3 = this;
  v5 = HIDWORD(a3);
  v4 = LODWORD(a3);
  (*(void (**)(void))(*(_DWORD *)this + 24))();
  (*(void (__fastcall **)(BigEndianStringByteOutput *, unsigned int))(*(_DWORD *)v3 + 24))(v3, (v5 >> 16) & 0xFF);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, int))(*(_DWORD *)v3 + 24))(v3, (unsigned __int16)v5 >> 8);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v3 + 24))(v3, (unsigned __int8)v5);
  (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)v3 + 24))(v3, v4 >> 24);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 24))(v3, (v4 >> 16) & 0xFF);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 24))(v3, (unsigned __int16)v4 >> 8);
  return (*(int (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v3 + 24))(v3, (unsigned __int8)v4);
}


int __fastcall BigEndianStringByteOutput::writeShort(BigEndianStringByteOutput *this, __int16 a2)
{
  BigEndianStringByteOutput *v2; // r5@1
  unsigned __int8 v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 24))();
  return (*(int (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, v3);
}


int __fastcall BigEndianStringByteOutput::writeLongLong(BigEndianStringByteOutput *this, int a2, __int64 a3)
{
  BigEndianStringByteOutput *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1

  v3 = this;
  v5 = HIDWORD(a3);
  v4 = a3;
  (*(void (**)(void))(*(_DWORD *)this + 24))();
  (*(void (__fastcall **)(BigEndianStringByteOutput *, unsigned int))(*(_DWORD *)v3 + 24))(v3, (v5 >> 16) & 0xFF);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, int))(*(_DWORD *)v3 + 24))(v3, (unsigned __int16)v5 >> 8);
  (*(void (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v3 + 24))(v3, (unsigned __int8)v5);
  (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)v3 + 24))(v3, v4 >> 24);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 24))(v3, (v4 >> 16) & 0xFF);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 24))(v3, (unsigned __int16)v4 >> 8);
  return (*(int (__fastcall **)(BigEndianStringByteOutput *, _DWORD))(*(_DWORD *)v3 + 24))(v3, (unsigned __int8)v4);
}
