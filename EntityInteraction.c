

int __fastcall EntityInteraction::interact(int result)
{
  if ( *(_DWORD *)(result + 12) )
    result = (*(int (__fastcall **)(_DWORD))(result + 16))(result + 4);
  return result;
}


int __fastcall EntityInteraction::EntityInteraction(int result, char a2)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 20) = a2;
  return result;
}


int *__fastcall EntityInteraction::setInteractText(int *a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r3@1
  int v5; // r2@2
  int *v6; // r0@2
  void *v7; // r0@4
  int v9; // r0@7
  unsigned int *v10; // r3@9
  signed int v11; // r2@10
  unsigned int *v12; // r3@15
  unsigned int v13; // r2@16
  char v14; // [sp+4h] [bp-14h]@7

  v2 = a1;
  v3 = *a2;
  v4 = *a1;
  if ( *a1 != *a2 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    v6 = (int *)(v3 - 12);
    if ( v5 < 0 )
    {
      v9 = sub_21E8A44((int)v6, (int)&v14, 0);
      v4 = *v2;
      v3 = v9;
    }
    else if ( v6 != &dword_28898C0 )
      if ( &pthread_create )
      {
        v12 = (unsigned int *)(v3 - 4);
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        v4 = *v2;
      }
      else
        *(_DWORD *)(v3 - 4) = v5 + 1;
    v7 = (void *)(v4 - 12);
    if ( (int *)(v4 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v4 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = *(_DWORD *)(v4 - 4);
        *(_DWORD *)(v4 - 4) = v11 - 1;
      if ( v11 <= 0 )
        j_operator delete(v7);
    *v2 = v3;
  }
  return v2;
}


int __fastcall EntityInteraction::capture(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 4;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 4);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 12);
  v10 = v13;
  *(_DWORD *)(v4 + 12) = v8;
  v14 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


signed int __fastcall EntityInteraction::shouldCapture(EntityInteraction *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 20);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}
