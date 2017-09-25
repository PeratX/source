

int __fastcall SharedLock::SharedLock(int a1, pthread_mutex_t *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 1;
  j_std::shared_timed_mutex::lock_shared(a2);
  return v2;
}
