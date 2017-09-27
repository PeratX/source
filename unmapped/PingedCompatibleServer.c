

int __fastcall PingedCompatibleServer::PingedCompatibleServer(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)(a1 + 28));
  *(_DWORD *)(v1 + 164) = -1082130432;
  RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)(v1 + 168));
  return v1;
}


int *__fastcall PingedCompatibleServer::PingedCompatibleServer(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  *((_QWORD *)v3 + 1) = *((_QWORD *)v2 + 1);
  sub_119C854(v3 + 4, v2 + 4);
  _aeabi_memcpy4(v3 + 5, v2 + 5, 164);
  return v3;
}
