

int __fastcall RopeParams::leadInit(int result)
{
  *(_DWORD *)result = 1056964608;
  *(_DWORD *)(result + 4) = 1041865114;
  *(_DWORD *)(result + 8) = -1105618534;
  *(_DWORD *)(result + 12) = 1065353216;
  *(_DWORD *)(result + 20) = 1063675494;
  *(_DWORD *)(result + 24) = 1063675494;
  *(_DWORD *)(result + 28) = 985963430;
  *(_DWORD *)(result + 56) = 5;
  *(_DWORD *)(result + 64) = 10;
  *(_DWORD *)(result + 16) = 1082130432;
  *(_DWORD *)(result + 60) = 15;
  return result;
}


int __fastcall RopeParams::RopeParams(int result, int a2, int a3, int a4)
{
  __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@1

  v4 = *(_QWORD *)a2;
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 32) = v4;
  v5 = *(_QWORD *)a3;
  *(_DWORD *)(result + 52) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(result + 44) = v5;
  *(_DWORD *)(result + 68) = a4;
  return result;
}


int __fastcall RopeParams::RopeParams(int result)
{
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}
