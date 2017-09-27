

int __fastcall TouchControl::TouchControl(int result, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r2@1
  int v4; // r2@1

  *(_DWORD *)result = &off_26E8A84;
  *(_DWORD *)(result + 12) = 0;
  v2 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)(result + 4);
  *(_QWORD *)(result + 4) = v2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = v3;
  v4 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  return result;
}


void __fastcall TouchControl::~TouchControl(TouchControl *this)
{
  TouchControl::~TouchControl(this);
}


int __fastcall TouchControl::setWindowSize(int result, __int64 a2)
{
  *(_QWORD *)(result + 20) = a2;
  return result;
}


void __fastcall TouchControl::~TouchControl(TouchControl *this)
{
  TouchControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8A84;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  operator delete((void *)v1);
}
