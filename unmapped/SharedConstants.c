

signed int __fastcall SharedConstants::getVersionCode(SharedConstants *this)
{
  return 10200081;
}


unsigned int __fastcall SharedConstants::isVersion(SharedConstants *this, int a2, int a3, int a4, int a5)
{
  bool v5; // zf@1
  signed int v6; // r2@1
  signed int v7; // r1@3
  signed int v8; // r12@3
  unsigned int v9; // r0@7

  v5 = a3 == 0;
  v6 = 0;
  if ( v5 )
    v6 = 1;
  v5 = a2 == 2;
  v7 = 0;
  v8 = 0;
    v7 = 1;
  if ( this != (SharedConstants *)1 )
    this = 0;
  v9 = (unsigned int)this & v7;
  if ( a4 == 81 )
    v8 = 1;
  return v9 & v6 & v8;
}


int __fastcall SharedConstants::getVersionCode(SharedConstants *this, int a2, int a3, int a4, int a5)
{
  return 10000000 * (_DWORD)this + 100000 * a2 + 1000 * a3 + a4;
}
