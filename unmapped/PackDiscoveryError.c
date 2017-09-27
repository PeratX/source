

_DWORD *__fastcall PackDiscoveryError::PackDiscoveryError(_DWORD *a1, int a2, unsigned __int64 *a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1

  v3 = a1;
  v4 = a2;
  *a1 = &off_26D9084;
  std::vector<std::string,std::allocator<std::string>>::vector((int)(a1 + 1), a3);
  v3[4] = v4;
  v3[5] = 2;
  *v3 = &off_26EABBC;
  return v3;
}


int *__fastcall PackDiscoveryError::getLocErrorMessageMap(PackDiscoveryError *this)
{
  return &dword_27ECA4C;
}


void __fastcall PackDiscoveryError::~PackDiscoveryError(PackDiscoveryError *this)
{
  PackDiscoveryError *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D9084;
  v3 = (void *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  operator delete((void *)v1);
}


int __fastcall PackDiscoveryError::PackDiscoveryError(int a1)
{
  int v1; // r4@1
  int v2; // r6@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26D9084;
  *(_DWORD *)(a1 + 4) = 0;
  v2 = a1 + 4;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(a1 + 8) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                          0,
                          0);
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 2;
  *(_DWORD *)v1 = &off_26EABBC;
  return v1;
}


int *__fastcall PackDiscoveryError::getEventErrorMessageMap(PackDiscoveryError *this)
{
  return &dword_27ECA30;
}


void __fastcall PackDiscoveryError::~PackDiscoveryError(PackDiscoveryError *this)
{
  PackDiscoveryError::~PackDiscoveryError(this);
}
