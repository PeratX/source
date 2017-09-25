

int __fastcall CallbackToken::release(CallbackToken *this)
{
  CallbackToken *v1; // r1@1
  int result; // r0@1
  unsigned int *v3; // r12@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = 0;
  result = *((_DWORD *)this + 1);
  *((_DWORD *)v1 + 1) = 0;
  if ( result )
  {
    v3 = (unsigned int *)(result + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


int __fastcall CallbackToken::cancelCallback(int result)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r5@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  _BYTE *v6; // r1@7
  bool v7; // zf@7
  int v8; // r12@10
  unsigned int *v9; // r2@11
  unsigned int v10; // r0@13
  unsigned int *v11; // r5@24

  v1 = *(_DWORD *)(result + 4);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = (_BYTE *)*v3;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            v6 = *(_BYTE **)result;
            v7 = *(_DWORD *)result == 0;
          }
          if ( !v7 )
            __dmb();
            *v6 = 1;
            *(_DWORD *)result = 0;
            v8 = *(_DWORD *)(result + 4);
            *(_DWORD *)(result + 4) = 0;
            if ( v8 )
            {
              v9 = (unsigned int *)(v8 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v10 = __ldrex(v9);
                while ( __strex(v10 - 1, v9) );
              }
              else
                v10 = (*v9)--;
              if ( v10 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
            }
          if ( &pthread_create )
            do
              result = __ldrex(v3);
            while ( __strex(result - 1, v3) );
          else
            result = (*v3)--;
          if ( result == 1 )
            v11 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v11);
              while ( __strex(result - 1, v11) );
            else
              result = (*v11)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall CallbackToken::CallbackToken(int result, int a2)
{
  int v2; // r1@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r2@4

  *(_DWORD *)result = *(_DWORD *)a2;
  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  return result;
}


int __fastcall CallbackToken::CallbackToken(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


signed int __fastcall CallbackToken::isEmpty(CallbackToken *this)
{
  int v1; // r0@1
  signed int result; // r0@2
  int v3; // r1@3

  v1 = *((_DWORD *)this + 1);
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    result = 0;
    if ( !v3 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


CallbackToken *__fastcall CallbackToken::~CallbackToken(CallbackToken *this)
{
  CallbackToken *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


int __fastcall CallbackToken::CallbackToken(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r0@5
  unsigned int *v8; // r2@6
  unsigned int v9; // r1@8
  int v10; // r0@14
  unsigned int *v11; // r2@15
  unsigned int v12; // r1@17

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      v7 = *(_DWORD *)(v2 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 == 1 )
          (*(void (**)(void))(*(_DWORD *)v7 + 12))();
      }
    }
    else
      ++*v5;
  }
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)v3 = 0;
  v10 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  return v2;
}
