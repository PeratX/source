

int __fastcall RopePointsRef::RopePointsRef(int a1, int a2, pthread_mutex_t *a3)
{
  int v3; // r4@1
  int v4; // r0@2

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  if ( &pthread_create )
  {
    v4 = j_pthread_mutex_lock(a3);
    if ( v4 )
      sub_21E5E14(v4);
  }
  return v3;
}


RopePointsRef *__fastcall RopePointsRef::~RopePointsRef(RopePointsRef *this)
{
  RopePointsRef *v1; // r4@1

  v1 = this;
  if ( &pthread_create )
    j_pthread_mutex_unlock(*((pthread_mutex_t **)this + 1));
  return v1;
}
