

RakStringCleanup *__fastcall RakStringCleanup::~RakStringCleanup(RakStringCleanup *this)
{
  RakStringCleanup *v1; // r8@1
  unsigned int v2; // r6@2
  _DWORD *v3; // r1@3
  RakNet::SimpleMutex *v4; // r0@3
  RakNet::SimpleMutex *v5; // r0@4

  v1 = this;
  if ( dword_283C398 )
  {
    v2 = 0;
    do
    {
      v3 = RakNet::RakString::freeList;
      v4 = (RakNet::SimpleMutex *)**((_DWORD **)RakNet::RakString::freeList + v2);
      if ( v4 )
      {
        v5 = j_RakNet::SimpleMutex::~SimpleMutex(v4);
        j_operator delete((void *)v5);
        v3 = RakNet::RakString::freeList;
      }
      rakFree_Ex(
        v3[v2++],
        "F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\dependencies\\Raknet\\Raknet.Shared\\..\\..\\..\\..\\..\\src-d"
        "eps\\raknet\\RakString.cpp",
        1212);
    }
    while ( v2 < dword_283C398 );
  }
  if ( unk_283C39C )
    if ( RakNet::RakString::freeList )
      j_operator delete[](RakNet::RakString::freeList);
    RakNet::RakString::freeList = 0;
    dword_283C398 = 0;
    unk_283C39C = 0;
  return v1;
}
