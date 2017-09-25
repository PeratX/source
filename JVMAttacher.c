

int __fastcall JVMAttacher::forceDetach(JVMAttacher *this)
{
  JVMAttacher *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int result; // r0@5
  bool v5; // zf@5

  v1 = this;
  v2 = *((_BYTE *)this + 9);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = *((_DWORD *)v1 + 1);
    v3 = v2 == 0;
  }
  if ( !v3 )
    (*(void (**)(void))(*(_DWORD *)v2 + 80))();
  result = *((_DWORD *)v1 + 2);
  v5 = (unsigned __int8)result == 0;
  if ( (_BYTE)result )
    result &= 0xFF0000u;
    v5 = result == 0;
  if ( !v5 )
    (*(void (**)(void))(**(_DWORD **)v1 + 20))();
    result = 0;
    *((_BYTE *)v1 + 8) = 0;
  return result;
}


JVMAttacher *__fastcall JVMAttacher::~JVMAttacher(JVMAttacher *this)
{
  JVMAttacher *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r0@5
  bool v5; // zf@5

  v1 = this;
  v2 = *((_BYTE *)this + 9);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = *((_DWORD *)v1 + 1);
    v3 = v2 == 0;
  }
  if ( !v3 )
    (*(void (**)(void))(*(_DWORD *)v2 + 80))();
  v4 = *((_DWORD *)v1 + 2);
  v5 = (unsigned __int8)v4 == 0;
  if ( (_BYTE)v4 )
    v5 = (v4 & 0xFF0000) == 0;
  if ( !v5 )
    (*(void (**)(void))(**(_DWORD **)v1 + 20))();
    *((_BYTE *)v1 + 8) = 0;
  return v1;
}


_DWORD *__fastcall JVMAttacher::JVMAttacher(int a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  char v4; // r7@1
  int v5; // r0@2
  bool v6; // zf@6
  char v7; // r0@6
  int v8; // r0@9
  char v9; // r1@9
  signed __int64 v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = (_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  v4 = 0;
  *(_BYTE *)(v3 + 6) = 0;
  *(_WORD *)(v3 + 4) = 0;
  if ( (*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)a2 + 24))(a2, a1 + 4, 65540) )
  {
    v11 = 65540LL;
    v12 = 0;
    v5 = (*(int (__cdecl **)(_DWORD, int, signed __int64 *))(*(_DWORD *)*v2 + 16))(*v2, v3, &v11);
    if ( !v5 )
      v4 = 1;
    *((_BYTE *)v2 + 8) = v4;
    if ( v5 )
    {
      *(_DWORD *)v3 = 0;
    }
    else
      v8 = (*(int (__cdecl **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v2[1] + 76))(
             v2[1],
             128,
             *(_DWORD *)(*(_DWORD *)v2[1] + 76));
      v9 = 0;
      if ( !v8 )
        v9 = 1;
      *((_BYTE *)v2 + 9) = v9;
      *((_BYTE *)v2 + 10) = !ON_MAIN_THREAD();
  }
  else
    *((_BYTE *)v2 + 8) = 1;
    v6 = (*(int (**)(void))(*(_DWORD *)v2[1] + 76))() == 0;
    v7 = 0;
    if ( v6 )
      v7 = 1;
    *((_BYTE *)v2 + 9) = v7;
    *((_BYTE *)v2 + 10) = 0;
  return v2;
}
