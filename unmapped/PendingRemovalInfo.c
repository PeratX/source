

int __fastcall PendingRemovalInfo::PendingRemovalInfo(int result, int *a2, int a3)
{
  int v3; // r12@1

  v3 = *a2;
  *a2 = 0;
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = a3;
  return result;
}


PendingRemovalInfo *__fastcall PendingRemovalInfo::~PendingRemovalInfo(PendingRemovalInfo *this)
{
  PendingRemovalInfo *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 32))();
  *(_DWORD *)v1 = 0;
  return v1;
}
