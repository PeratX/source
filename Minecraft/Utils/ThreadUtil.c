

int __fastcall ThreadUtil::setThreadPriority(pthread_t target_thread, int *a2)
{
  pthread_t v2; // r4@1
  int *v3; // r5@1
  int result; // r0@1
  int v5; // r0@3
  int policy; // [sp+0h] [bp-18h]@2
  struct sched_param param; // [sp+4h] [bp-14h]@2

  v2 = target_thread;
  v3 = a2;
  result = ThreadUtil::sNumAvailableCores;
  if ( ThreadUtil::sNumAvailableCores >= 2u )
  {
    j_pthread_getschedparam(v2, &policy, &param);
    result = *v3;
    switch ( *v3 )
    {
      case 0:
        v5 = ThreadUtil::sNormalPriority + 2;
        goto LABEL_7;
      case 1:
        v5 = ThreadUtil::sNormalPriority + 1;
      default:
        v5 = ThreadUtil::sNormalPriority;
      case 3:
        v5 = ThreadUtil::sNormalPriority - 1;
LABEL_7:
        param.__sched_priority = v5;
        result = j_pthread_setschedparam(v2, policy, &param);
        break;
      case 4:
        return result;
    }
  }
  return result;
}


int __fastcall ThreadUtil::setCurrentThreadPriority(int *a1)
{
  int *v1; // r5@1
  pthread_t v2; // r4@1
  int result; // r0@1
  int v4; // r0@3
  int policy; // [sp+0h] [bp-18h]@2
  struct sched_param param; // [sp+4h] [bp-14h]@2

  v1 = a1;
  v2 = j_pthread_self();
  result = ThreadUtil::sNumAvailableCores;
  if ( ThreadUtil::sNumAvailableCores >= 2u )
  {
    j_pthread_getschedparam(v2, &policy, &param);
    result = *v1;
    switch ( *v1 )
    {
      case 0:
        v4 = ThreadUtil::sNormalPriority + 2;
        goto LABEL_7;
      case 1:
        v4 = ThreadUtil::sNormalPriority + 1;
      default:
        v4 = ThreadUtil::sNormalPriority;
      case 3:
        v4 = ThreadUtil::sNormalPriority - 1;
LABEL_7:
        param.__sched_priority = v4;
        result = j_pthread_setschedparam(v2, policy, &param);
        break;
      case 4:
        return result;
    }
  }
  return result;
}


pthread_t *__fastcall ThreadUtil::setThreadPriority(pthread_t *result, pthread_t **a2)
{
  pthread_t **v2; // r5@1
  pthread_t v3; // r4@2
  int v4; // r0@3
  int policy; // [sp+0h] [bp-18h]@2
  struct sched_param param; // [sp+4h] [bp-14h]@2

  v2 = a2;
  if ( ThreadUtil::sNumAvailableCores >= 2u )
  {
    v3 = *result;
    j_pthread_getschedparam(*result, &policy, &param);
    result = *v2;
    switch ( *v2 )
    {
      case 0u:
        v4 = ThreadUtil::sNormalPriority + 2;
        goto LABEL_7;
      case 1u:
        v4 = ThreadUtil::sNormalPriority + 1;
      default:
        v4 = ThreadUtil::sNormalPriority;
      case 3u:
        v4 = ThreadUtil::sNormalPriority - 1;
LABEL_7:
        param.__sched_priority = v4;
        result = (pthread_t *)j_pthread_setschedparam(v3, policy, &param);
        break;
      case 4u:
        return result;
    }
  }
  return result;
}


int __fastcall ThreadUtil::setAvailableCores(ThreadUtil *this, const unsigned int *a2)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  ThreadUtil::sNumAvailableCores = result;
  return result;
}


int __fastcall ThreadUtil::setNormalPriority(int result, int a2)
{
  ThreadUtil::sNormalPriority = result;
  return result;
}
