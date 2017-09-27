

int *__fastcall DownloadStateObject::DownloadStateObject(int *a1, int *a2, unsigned __int64 *a3, int a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r6@1
  int *v6; // r5@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_119C854(a1, a2);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector((int)(v6 + 1), v5);
  v6[4] = v4;
  return v6;
}
