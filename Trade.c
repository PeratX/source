

Trade *__fastcall Trade::~Trade(Trade *this)
{
  Trade *v1; // r8@1
  int v2; // r5@1
  int v3; // r9@1
  __int64 v4; // r6@2
  int v5; // r5@13
  int v6; // r9@13
  __int64 v7; // r6@14

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 20) >> 32;
  v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 16);
      if ( (_DWORD)v4 != HIDWORD(v4) )
      {
        do
        {
          if ( *(_DWORD *)v4 )
            (*(void (**)(void))(**(_DWORD **)v4 + 4))();
          *(_DWORD *)v4 = 0;
          LODWORD(v4) = v4 + 4;
        }
        while ( HIDWORD(v4) != (_DWORD)v4 );
        LODWORD(v4) = *(_DWORD *)(v2 + 16);
      }
      if ( (_DWORD)v4 )
        operator delete((void *)v4);
      v2 += 28;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete((void *)v2);
  v6 = *((_QWORD *)v1 + 1) >> 32;
  v5 = *((_QWORD *)v1 + 1);
  if ( v5 != v6 )
      v7 = *(_QWORD *)(v5 + 16);
      if ( (_DWORD)v7 != HIDWORD(v7) )
          if ( *(_DWORD *)v7 )
            (*(void (**)(void))(**(_DWORD **)v7 + 4))();
          *(_DWORD *)v7 = 0;
          LODWORD(v7) = v7 + 4;
        while ( HIDWORD(v7) != (_DWORD)v7 );
        LODWORD(v7) = *(_DWORD *)(v5 + 16);
      if ( (_DWORD)v7 )
        operator delete((void *)v7);
      v5 += 28;
    while ( v5 != v6 );
    v5 = *((_DWORD *)v1 + 2);
  if ( v5 )
    operator delete((void *)v5);
  return v1;
}
