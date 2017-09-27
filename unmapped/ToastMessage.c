

int __fastcall ToastMessage::ToastMessage(int a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  int *v6; // r7@1
  int *v7; // r6@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)a1 = a2;
  v7 = (int *)(a1 + 8);
  sub_119C854((int *)(a1 + 4), a3);
  sub_119C854(v7, v6);
  sub_119C854((int *)(v5 + 12), a5);
  return v5;
}
