

int __fastcall InitOnce::setInitAction(int a1, int a2)
{
  int v2; // r12@0
  int v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  __int64 *v7; // r6@1
  int v8; // r1@2
  int (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  __int64 v10; // [sp+0h] [bp-20h]@2
  int (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = 0;
  v5 = a2;
  v11 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  v7 = (__int64 *)(v3 + 4);
  if ( v6 )
  {
    v6(&v10);
    result = *(_DWORD *)(v5 + 12);
    v12 = *(_DWORD *)(v5 + 12);
    v8 = *(_DWORD *)(v5 + 8);
    v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
    v6 = (void (__fastcall *)(__int64 *))HIDWORD(v10);
    v2 = v10;
  }
  else
    v8 = 0;
  v10 = *v7;
  *(_DWORD *)v7 = v2;
  *(_DWORD *)(v3 + 8) = v6;
  v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 12);
  v9 = v11;
  *(_DWORD *)(v3 + 12) = v8;
  v12 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = result;
  if ( v9 )
    result = v9(&v10, &v10, 3, v9);
  return result;
}


int __fastcall InitOnce::unInit(int result)
{
  *(_BYTE *)result = 0;
  return result;
}


signed int __fastcall InitOnce::initOnce(InitOnce *this)
{
  InitOnce *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = *(_BYTE *)this;
  if ( !result )
  {
    result = *((_DWORD *)v1 + 3);
    if ( result )
    {
      (*((void (__fastcall **)(_DWORD))v1 + 4))((char *)v1 + 4);
      result = 1;
      *(_BYTE *)v1 = 1;
    }
  }
  return result;
}


int __fastcall InitOnce::InitOnce(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int); // r3@1

  v2 = a1;
  *(_BYTE *)a1 = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = *(void (__fastcall **)(int))(a2 + 8);
  if ( v4 )
  {
    v4(a1 + 4);
    *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 8);
  }
  return v2;
}
