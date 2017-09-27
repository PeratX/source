

void __fastcall LevelStorage::saveData(int a1, int a2, int a3)
{
  LevelStorage::saveData(a1, a2, a3);
}


signed int __fastcall LevelStorage::clonePlayerData(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@2
  char *v7; // r0@3
  signed int result; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  void **v13; // [sp+8h] [bp-28h]@2
  int *v14; // [sp+Ch] [bp-24h]@2
  char *v15; // [sp+10h] [bp-20h]@2
  int v16; // [sp+14h] [bp-1Ch]@1
  int v17; // [sp+18h] [bp-18h]@2

  v3 = a1;
  v4 = a3;
  (*(void (__fastcall **)(int *, int, int))(*(_DWORD *)v3 + 64))(&v16, v3, a2);
  v5 = v16;
  if ( v16 )
  {
    v15 = (char *)&unk_28898CC;
    v13 = &off_26E91F0;
    v14 = (int *)&v15;
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v16 + 44))(&v17, v16);
    j_Tag::writeNamedTag((int)&v17, v5, (int)&v13);
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    (*(void (__fastcall **)(int, int, char **))(*(_DWORD *)v3 + 116))(v3, v4, &v15);
    v7 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v15 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    if ( v16 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
    result = 1;
  }
  else
    result = 0;
  return result;
}


RakNet *__fastcall LevelStorage::deserializeKey(NbtIo *a1, int a2, int a3, int a4)
{
  NbtIo *v4; // r4@1
  int v5; // r5@1
  unsigned int v6; // r0@1
  int v7; // r2@1
  int v8; // r0@2
  unsigned __int8 *v9; // r0@4
  RakNet *result; // r0@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  void **v13; // [sp+4h] [bp-13Ch]@2
  int v14; // [sp+8h] [bp-138h]@2
  unsigned __int8 *v15; // [sp+10h] [bp-130h]@1
  char v16; // [sp+18h] [bp-128h]@2
  RakNet *v17; // [sp+12Ch] [bp-14h]@1

  v4 = a1;
  v5 = a4;
  v17 = _stack_chk_guard;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a4 + 44))(a4);
  sub_21E6E1C(&v15, v6, 0);
  v7 = *((_DWORD *)v15 - 3);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 40))(v5) == 1 )
  {
    v8 = j_RakNet::BitStream::BitStream((RakNet::BitStream *)&v16, v15, *((_DWORD *)v15 - 3), 0);
    v13 = &off_271973C;
    v14 = v8;
    j_NbtIo::read(v4, (IDataInput *)&v13);
    j_RakNet::BitStream::~BitStream((RakNet::BitStream *)&v16);
  }
  else
    *(_DWORD *)v4 = 0;
  v9 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    j___stack_chk_fail((int)result);
  return result;
}


_DWORD *__fastcall LevelStorage::loadServerPlayerData(LevelStorage *this, const Player *a2, int a3)
{
  LevelStorage *v3; // r5@1
  int v4; // r7@1
  const Player *v5; // r6@1
  _DWORD *result; // r0@2
  int v7; // r3@3
  int v8; // r2@3
  void (__fastcall *v9)(int *, const Player *, int, int *); // r4@3
  void *v10; // r0@3
  void **v11; // r0@4
  void *v12; // r0@4
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int v17; // [sp+4h] [bp-E4h]@3
  int v18; // [sp+8h] [bp-E0h]@3
  void **v19; // [sp+Ch] [bp-DCh]@3
  int v20; // [sp+10h] [bp-D8h]@5
  void **v21; // [sp+14h] [bp-D4h]@3
  void **v22; // [sp+18h] [bp-D0h]@3
  int v23; // [sp+34h] [bp-B4h]@5
  int v24; // [sp+3Ch] [bp-ACh]@4
  int v25; // [sp+40h] [bp-A8h]@5
  _DWORD *v26; // [sp+C8h] [bp-20h]@2

  v3 = this;
  v4 = a3;
  *(_DWORD *)this = 0;
  v5 = a2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 1412))(a3) != 1
    || ((*(void (__fastcall **)(_DWORD **, const Player *))(*(_DWORD *)v5 + 68))(&v26, v5),
        result = v26,
        *(_DWORD *)v3 = v26,
        v26 = 0,
        !result) )
  {
    sub_21D103C((int)&v19, 24);
    v7 = *(_DWORD *)(v4 + 4556);
    v8 = *(_DWORD *)(v4 + 4552);
    sub_21CC888((char *)&v21);
    v9 = *(void (__fastcall **)(int *, const Player *, int, int *))(*(_DWORD *)v5 + 64);
    sub_21CFED8(&v17, (int)&v22);
    v9(&v18, v5, v4 + 4544, &v17);
    *(_DWORD *)v3 = v18;
    v18 = 0;
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = off_26D3F84;
    v19 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v19) = off_26D3F80[0];
    v21 = v11;
    v22 = &off_27734E8;
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v24 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v22 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v23);
    v19 = (void **)off_26D3F68;
    *(void ***)((char *)&v19 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v20 = 0;
    result = sub_21B6560(&v25);
  }
  return result;
}


void __fastcall LevelStorage::savePlayerData(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void **v12; // [sp+4h] [bp-24h]@1
  int *v13; // [sp+8h] [bp-20h]@1
  char *v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v14 = (char *)&unk_28898CC;
  v12 = &off_26E91F0;
  v13 = (int *)&v14;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a3 + 44))(&v15, a3);
  j_Tag::writeNamedTag((int)&v15, v5, (int)&v12);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  (*(void (__fastcall **)(int, int, char **))(*(_DWORD *)v3 + 32))(v3, v4, &v14);
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v14 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall LevelStorage::saveData(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void **v12; // [sp+4h] [bp-24h]@1
  int *v13; // [sp+8h] [bp-20h]@1
  char *v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v14 = (char *)&unk_28898CC;
  v12 = &off_26E91F0;
  v13 = (int *)&v14;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a3 + 44))(&v15, a3);
  j_Tag::writeNamedTag((int)&v15, v5, (int)&v12);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  (*(void (__fastcall **)(int, int, char **))(*(_DWORD *)v3 + 36))(v3, v4, &v14);
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v14 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall LevelStorage::savePlayerData(int a1, int a2, int a3)
{
  LevelStorage::savePlayerData(a1, a2, a3);
}
