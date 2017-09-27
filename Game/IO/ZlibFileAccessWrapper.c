

int __fastcall ZlibFileAccessWrapper::getZipFunctions(ZlibFileAccessWrapper *this)
{
  return *(_DWORD *)this;
}


int __fastcall ZlibFileAccessWrapper::ZlibFileAccessWrapper(__int64 a1)
{
  int v1; // r4@1
  _DWORD *v2; // r5@2

  v1 = a1;
  LODWORD(a1) = 0;
  *(_QWORD *)v1 = a1;
  if ( HIDWORD(a1) )
  {
    v2 = operator new(0x2Cu);
    _aeabi_memclr4(v2, 44);
    *(_DWORD *)v1 = v2;
    *v2 = sub_15E7008;
    v2[1] = sub_15E7130;
    v2[2] = sub_15E7154;
    *(_DWORD *)(*(_DWORD *)v1 + 12) = sub_15E7178;
    *(_DWORD *)(*(_DWORD *)v1 + 16) = sub_15E7180;
    *(_DWORD *)(*(_DWORD *)v1 + 20) = sub_15E719C;
    *(_DWORD *)(*(_DWORD *)v1 + 24) = sub_15E71A4;
    *(_DWORD *)(*(_DWORD *)v1 + 28) = v1;
  }
  return v1;
}
