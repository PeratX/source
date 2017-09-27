

int __fastcall Semaphore::notify(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  unsigned int *v3; // r0@3
  unsigned int v4; // r1@4
  unsigned int *v5; // r0@7
  unsigned int v6; // r1@8

  v1 = mutex;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock(mutex);
    if ( v2 )
      sub_21E5E14(v2);
    v3 = (unsigned int *)&v1->__owner;
    __dmb();
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
    if ( &pthread_create )
      pthread_mutex_unlock(v1);
  }
  else
    v5 = (unsigned int *)&mutex->__owner;
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
  return sub_21E03C8((pthread_cond_t *)&v1->__count);
}


int __fastcall Semaphore::Semaphore(int a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  sub_21E03A4((_DWORD *)(a1 + 4));
  result = v1;
  *(_DWORD *)(v1 + 8) = 0;
  return result;
}


pthread_mutex_t *__fastcall Semaphore::wait(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  unsigned int *v3; // r6@3
  unsigned int v4; // r0@4
  unsigned int v5; // r0@7
  pthread_mutex_t *result; // r0@8
  bool v7; // zf@8
  pthread_mutex_t *mutexa; // [sp+0h] [bp-18h]@1
  unsigned __int8 v9; // [sp+4h] [bp-14h]@1

  v1 = mutex;
  mutexa = mutex;
  v9 = 0;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock(mutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v3 = (unsigned int *)&v1->__owner;
  v9 = 1;
  while ( 1 )
    v4 = *v3;
    __dmb();
    if ( v4 )
      break;
    sub_21E03B8((pthread_cond_t *)&v1->__count, &mutexa);
  __dmb();
  do
    v5 = __ldrex(v3);
  while ( __strex(v5 - 1, v3) );
  result = (pthread_mutex_t *)v9;
  v7 = v9 == 0;
  if ( v9 )
    result = mutexa;
    v7 = mutexa == 0;
  if ( !v7 )
    if ( &pthread_create )
      pthread_mutex_unlock(result);
    result = 0;
    v9 = 0;
  return result;
}
