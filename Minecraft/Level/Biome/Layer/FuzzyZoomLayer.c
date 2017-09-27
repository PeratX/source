

void __fastcall FuzzyZoomLayer::~FuzzyZoomLayer(FuzzyZoomLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall FuzzyZoomLayer::~FuzzyZoomLayer(FuzzyZoomLayer *this)
{
  FuzzyZoomLayer::~FuzzyZoomLayer(this);
}


int __fastcall FuzzyZoomLayer::_modeOrRandom(FuzzyZoomLayer *this, int a2, int a3, int a4, int a5)
{
  int v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@1
  int v8; // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@1

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = a5;
  return j_Layer::_random(this, &v6, 4);
}


int __fastcall FuzzyZoomLayer::zoom(__int64 a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r11@1
  int v5; // r9@8
  int v6; // r10@9
  unsigned int *v7; // r7@16
  int v8; // r5@23
  unsigned int *v9; // r7@30
  int v11; // [sp+0h] [bp-38h]@1
  int v12; // [sp+4h] [bp-34h]@9
  char v13; // [sp+8h] [bp-30h]@9
  int v14; // [sp+Ch] [bp-2Ch]@9
  char v15; // [sp+10h] [bp-28h]@9

  v3 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = a3;
  LODWORD(a1) = *(_DWORD *)(a2 + 4);
  v11 = HIDWORD(a1);
  *(_DWORD *)(v3 + 4) = a1;
  if ( (_DWORD)a1 )
  {
    LODWORD(a1) = a1 + 4;
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(a1) = __ldrex((unsigned int *)a1);
      while ( __strex(HIDWORD(a1) + 1, (unsigned int *)a1) );
    }
    else
      ++*(_DWORD *)a1;
  }
  if ( a3 )
    v5 = 0;
    do
      v12 = v11 + v5;
      j_std::__shared_ptr<FuzzyZoomLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FuzzyZoomLayer>,unsigned int,std::shared_ptr<Layer> &>(
        (int)&v13,
        (int)&v15,
        (unsigned int *)&v12,
        v3);
      a1 = *(_QWORD *)&v13;
      *(_DWORD *)&v13 = 0;
      v14 = 0;
      *(_DWORD *)v3 = a1;
      v6 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(v3 + 4) = HIDWORD(a1);
      if ( v6 )
      {
        HIDWORD(a1) = v6 + 4;
        if ( &pthread_create )
        {
          __dmb();
          do
            LODWORD(a1) = __ldrex((unsigned int *)HIDWORD(a1));
          while ( __strex(a1 - 1, (unsigned int *)HIDWORD(a1)) );
        }
        else
          LODWORD(a1) = (*(_DWORD *)HIDWORD(a1))--;
        if ( (_DWORD)a1 == 1 )
          v7 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              LODWORD(a1) = __ldrex(v7);
            while ( __strex(a1 - 1, v7) );
          }
          else
            LODWORD(a1) = (*v7)--;
          if ( (_DWORD)a1 == 1 )
            LODWORD(a1) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v8 = v14;
      if ( v14 )
        HIDWORD(a1) = v14 + 4;
          v9 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
              LODWORD(a1) = __ldrex(v9);
            while ( __strex(a1 - 1, v9) );
            LODWORD(a1) = (*v9)--;
            LODWORD(a1) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      ++v5;
    while ( v5 != v4 );
  return a1;
}


_DWORD *__fastcall FuzzyZoomLayer::FuzzyZoomLayer(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r2@4
  int v7; // r5@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r6@14
  unsigned int v11; // r0@16
  int v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v13 = *(_DWORD *)a3;
  v4 = *(_DWORD *)(a3 + 4);
  v14 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  j_ZoomLayer::ZoomLayer((int)v3, a2, (int)&v13);
  v7 = v14;
  if ( v14 )
    v8 = (unsigned int *)(v14 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *v3 = &off_2725870;
  return v3;
}
