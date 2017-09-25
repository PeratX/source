

Crypto::Hash::Hash *__fastcall CryptoUtils::getFileChecksum(Crypto::Hash::Hash *a1, int *a2)
{
  int *v2; // r5@1
  Crypto::Hash::Hash *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  j_Crypto::Hash::Hash::Hash((int)&v5, 2);
  sub_19A7178(v2, (int)&v5);
  j_Crypto::Hash::Hash::final(v3, (int)&v5);
  return j_Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v5);
}


Crypto::Hash::Hash *__fastcall CryptoUtils::getDirectroyChecksum(Crypto::Hash::Hash *a1, int *a2)
{
  int *v2; // r6@1
  Crypto::Hash::Hash *v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *v6; // [sp+8h] [bp-48h]@1
  void (*v7)(void); // [sp+10h] [bp-40h]@1
  char *(__fastcall *v8)(int, Crypto::Hash::Hash ***, __int64 *); // [sp+14h] [bp-3Ch]@1
  int v9; // [sp+18h] [bp-38h]@1
  int v10; // [sp+1Ch] [bp-34h]@1
  char v11; // [sp+20h] [bp-30h]@1
  void (*v12)(void); // [sp+28h] [bp-28h]@1
  char v13; // [sp+34h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  j_Crypto::Hash::Hash::Hash((int)&v13, 2);
  v9 = *v2;
  v10 = *(_DWORD *)(v9 - 12);
  v4 = j_operator new(4u);
  *v4 = &v13;
  v6 = v4;
  v7 = (void (*)(void))sub_19A74EC;
  v8 = sub_19A7344;
  j_Core::FileSystem::iterateOverDirectory((int)&v11, (__int64 *)&v9, 642LL, (int)&v6);
  if ( v12 )
    v12();
  if ( v7 )
    v7();
  j_Crypto::Hash::Hash::final(v3, (int)&v13);
  return j_Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v13);
}
