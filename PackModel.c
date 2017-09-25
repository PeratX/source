

int __fastcall PackModel::PackModel(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  PackReport::PackReport(a1 + 8);
  *(_BYTE *)(v3 + 112) = 0;
  result = v3;
  *(_DWORD *)(v3 + 116) = v4;
  return result;
}


int __fastcall PackModel::PackModel(int a1, Pack *a2, const void **a3)
{
  Pack *v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  unsigned __int64 *v6; // r0@2
  signed int v7; // r6@2
  int result; // r0@4

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( Pack::getSubpackInfoStack(a2) )
  {
    v6 = (unsigned __int64 *)Pack::getSubpackInfoStack(v3);
    v7 = SubpackInfoCollection::getSubpackIndex(v6, v5);
  }
  else
    v7 = -1;
  *(_DWORD *)v4 = v3;
  *(_DWORD *)(v4 + 4) = &unk_28898CC;
  PackReport::PackReport(v4 + 8);
  *(_BYTE *)(v4 + 112) = 0;
  result = v4;
  *(_DWORD *)(v4 + 116) = v7;
  return result;
}


PackModel *__fastcall PackModel::PackModel(PackModel *this)
{
  PackModel *v1; // r5@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = &unk_28898CC;
  PackReport::PackReport((int)this + 8);
  *((_BYTE *)v1 + 112) = 0;
  *((_DWORD *)v1 + 29) = -1;
  return v1;
}
