

int __fastcall LocalNetworkPeer::getNetworkStatus(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 100000000;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall LocalNetworkPeer::setOtherPeer(int result, LocalNetworkPeer *a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


void __fastcall LocalNetworkPeer::~LocalNetworkPeer(LocalNetworkPeer *this)
{
  LocalNetworkPeer *v1; // r10@1
  int v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13

  v1 = this;
  *(_DWORD *)this = &off_2719E90;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    *((_DWORD *)v1 + 1) = 0;
  }
  v4 = (void *)(*((_QWORD *)v1 + 1) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 1);
  if ( v3 != v4 )
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 2);
  if ( v3 )
    j_operator delete(v3);
  j_operator delete((void *)v1);
}


LocalNetworkPeer *__fastcall LocalNetworkPeer::~LocalNetworkPeer(LocalNetworkPeer *this)
{
  LocalNetworkPeer *v1; // r10@1
  int v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13

  v1 = this;
  *(_DWORD *)this = &off_2719E90;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    *((_DWORD *)v1 + 1) = 0;
  }
  v4 = (void *)(*((_QWORD *)v1 + 1) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 1);
  if ( v3 != v4 )
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 2);
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


void __fastcall LocalNetworkPeer::sendPacket(int a1, void **a2)
{
  LocalNetworkPeer::sendPacket(a1, a2);
}


void __fastcall LocalNetworkPeer::sendPacket(int a1, void **a2)
{
  int v2; // r0@1
  void *v3; // r2@2
  __int64 v4; // kr00_8@2
  char *v5; // r1@3
  char *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  char *v9; // [sp+4h] [bp-1Ch]@2

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = *a2;
    v9 = (char *)*a2;
    *a2 = &unk_28898CC;
    v4 = *(_QWORD *)(v2 + 12);
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)(v2 + 8),
        &v9);
      v5 = v9;
    }
    else
      *(_DWORD *)v4 = v3;
      v5 = (char *)&unk_28898CC;
      v9 = (char *)&unk_28898CC;
      *(_DWORD *)(v2 + 12) = v4 + 4;
    v6 = v5 - 12;
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v5 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
}


signed int __fastcall LocalNetworkPeer::receivePacket(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r0@2
  int v5; // r2@2
  int v6; // r1@2
  signed int v7; // r3@3
  int v8; // r6@4
  int v9; // r5@5
  int v10; // r1@7
  void *v11; // r0@7
  signed int result; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = 1;
  }
  else
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a2, (int *)v3);
    v5 = *(_QWORD *)(v2 + 8) >> 32;
    v4 = *(_QWORD *)(v2 + 8);
    v6 = v4 + 4;
    if ( v4 + 4 != v5 )
    {
      v7 = v5 - v6;
      v6 = *(_QWORD *)(v2 + 8) >> 32;
      if ( v7 >= 1 )
      {
        v8 = (v7 >> 2) + 1;
        do
        {
          v9 = v4 + 4;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v4,
            (int *)(v4 + 4));
          --v8;
          v4 = v9;
        }
        while ( v8 > 1 );
        v6 = *(_DWORD *)(v2 + 12);
      }
    }
    *(_DWORD *)(v2 + 12) = v6 - 4;
    v10 = *(_DWORD *)(v6 - 4);
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
        __dmb();
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    result = 0;
  return result;
}


void __fastcall LocalNetworkPeer::addIncomingData(int a1, _DWORD *a2)
{
  __int64 v2; // r2@1

  v2 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJSsEEEvDpOT__3((unsigned __int64 *)(a1 + 8), a2);
  }
  else
    *(_DWORD *)v2 = *a2;
    *a2 = &unk_28898CC;
    *(_DWORD *)(a1 + 12) = v2 + 4;
}


void __fastcall LocalNetworkPeer::~LocalNetworkPeer(LocalNetworkPeer *this)
{
  LocalNetworkPeer::~LocalNetworkPeer(this);
}
