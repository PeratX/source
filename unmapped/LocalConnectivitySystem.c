

int __fastcall LocalConnectivitySystem::removeHost(int result, LocalConnector *a2)
{
  if ( *(LocalConnector **)result == a2 )
    *(_DWORD *)result = 0;
  return result;
}


int __fastcall LocalConnectivitySystem::addHost(int result, LocalConnector *a2)
{
  *(_DWORD *)result = a2;
  return result;
}


int __fastcall LocalConnectivitySystem::getHost(LocalConnectivitySystem *this)
{
  return *(_DWORD *)this;
}
