

void __fastcall OculusSyncService::~OculusSyncService(OculusSyncService *this)
{
  ServiceClient *v1; // r0@1

  v1 = ServiceClient::~ServiceClient(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall OculusSyncService::~OculusSyncService(OculusSyncService *this)
{
  OculusSyncService::~OculusSyncService(this);
}


int __fastcall OculusSyncService::postEntitlement(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int *v8; // r5@8
  int v9; // r4@15
  unsigned int *v10; // r1@16
  unsigned int *v11; // r5@22
  int v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+14h] [bp-1Ch]@1
  int v15; // [sp+18h] [bp-18h]@1
  char v16; // [sp+1Ch] [bp-14h]@1

  v4 = a1;
  std::__shared_ptr<OculusPostEntitlement,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<OculusPostEntitlement>,OculusSyncService &,OculusPostData const&,mce::UUID const&,std::function<void ()(bool)> &>(
    (int)&v12,
    (int)&v16,
    a1,
    a2,
    a3,
    a4);
  v14 = v12;
  v15 = v13;
  v12 = 0;
  v13 = 0;
  result = ServiceClient::_submitRequest(v4, (int)&v14);
  v6 = v15;
  if ( v15 )
  {
    v7 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    }
    else
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  v9 = v13;
  if ( v13 )
    v10 = (unsigned int *)(v13 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
        result = (*v11)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


_DWORD *__fastcall OculusSyncService::OculusSyncService(int a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)ServiceClient::ServiceClient(a1, 0, 0);
  *result = &off_26E8438;
  return result;
}


int __fastcall OculusSyncService::getServiceTicket(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int *v8; // r5@8
  int v9; // r4@15
  unsigned int *v10; // r1@16
  unsigned int *v11; // r5@22
  int v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+14h] [bp-1Ch]@1
  int v15; // [sp+18h] [bp-18h]@1
  char v16; // [sp+1Ch] [bp-14h]@1

  v4 = a1;
  std::__shared_ptr<OculusGetServiceTicket,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<OculusGetServiceTicket>,OculusSyncService &,std::string const&,mce::UUID const&,std::function<void ()(mce)> &>(
    (int)&v12,
    (int)&v16,
    a1,
    a2,
    a3,
    a4);
  v14 = v12;
  v15 = v13;
  v12 = 0;
  v13 = 0;
  result = ServiceClient::_submitRequest(v4, (int)&v14);
  v6 = v15;
  if ( v15 )
  {
    v7 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    }
    else
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  v9 = v13;
  if ( v13 )
    v10 = (unsigned int *)(v13 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
        result = (*v11)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}
