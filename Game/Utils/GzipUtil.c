

int __fastcall GzipUtil::compressNBT(int *a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  unsigned __int64 v4; // r2@2
  char v5; // r0@2
  __int64 v6; // r1@4
  void (*v7)(void); // r5@4
  void (*v8)(void); // r3@4
  void *v9; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  char v13; // [sp+8h] [bp-60h]@4
  int v14; // [sp+Ch] [bp-5Ch]@4
  void (*v15)(void); // [sp+10h] [bp-58h]@4
  int v16; // [sp+14h] [bp-54h]@4
  char v17; // [sp+18h] [bp-50h]@4
  int v18; // [sp+20h] [bp-48h]@2
  int v19; // [sp+24h] [bp-44h]@2
  char v20; // [sp+28h] [bp-40h]@2
  void (*v21)(void); // [sp+30h] [bp-38h]@4
  int v22; // [sp+34h] [bp-34h]@4
  char v23; // [sp+38h] [bp-30h]@2
  void *v24; // [sp+3Ch] [bp-2Ch]@2
  int v25; // [sp+40h] [bp-28h]@2
  unsigned __int64 v26; // [sp+44h] [bp-24h]@1
  void (*v27)(void); // [sp+50h] [bp-18h]@4
  int v28; // [sp+54h] [bp-14h]@4

  v2 = a1;
  LODWORD(v26) = &unk_28898CC;
  v3 = 0;
  if ( j_GzipUtil::compress(a2, (char *)&v26) == 1 )
  {
    v24 = 0;
    v25 = 0;
    v18 = *v2;
    v19 = *(_DWORD *)(v18 - 12);
    j_Core::File::open((int)&v20, (int)&v24, (__int64 *)&v18, 46);
    v5 = v23;
    v23 |= 2u;
    if ( v5 & 1 )
    {
      LODWORD(v4) = v26;
      j_Core::FileImpl::write((Core::FileImpl *)&v13, v24, v4, *(_DWORD *)(v26 - 12));
      v23 = v23 & 0xFC | v17 & 3;
      LODWORD(v6) = *(_DWORD *)&v13;
      HIDWORD(v6) = v14;
      v7 = v15;
      v15 = 0;
      *(unsigned __int64 *)((char *)&v26 + 4) = *(_QWORD *)&v20;
      *(_QWORD *)&v20 = v6;
      v8 = v21;
      v21 = v7;
      v27 = v8;
      v28 = v22;
      v22 = v16;
      if ( v8 )
      {
        v8();
        v17 |= 3u;
        if ( v15 )
          v15();
      }
      else
      v3 = v23 & 1;
      v23 |= 2u;
    }
    else
      v3 = 0;
    if ( v21 )
      ((void (__cdecl *)(char *))v21)(&v20);
    j_Core::File::~File((Core::File *)&v24);
  }
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v3;
}


signed int __fastcall GzipUtil::compress(int *a1, char *a2)
{
  int *v2; // r7@1
  char *v3; // r4@1
  signed int v9; // r6@2
  unsigned int v11; // r5@2
  unsigned int v12; // r0@3
  int v13; // r1@5
  int v15; // [sp+14h] [bp-4Ch]@2
  int v16; // [sp+18h] [bp-48h]@2
  unsigned int v17; // [sp+20h] [bp-40h]@5
  unsigned int v18; // [sp+24h] [bp-3Ch]@5
  unsigned int v19; // [sp+28h] [bp-38h]@2
  int v20; // [sp+34h] [bp-2Ch]@2
  int v21; // [sp+38h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  _R0 = *(_DWORD *)(*a1 - 12);
  if ( _R0 )
  {
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =0.1
    }
    v9 = 0;
      VCVT.F32.U32    S0, S0
      VMUL.F32        S0, S0, S2
      VCVTR.U32.F32   S0, S0
      VMOV            R0, S0
    v11 = _R0 & 0xFFFFFFFC;
    sub_21E849C(a2, _R0 & 0xFFFFFFFC, 0);
    v15 = *v2;
    v16 = *(_DWORD *)(v15 - 12);
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( !j_j_deflateInit2_((int)&v15, 0xFFFFFFFF, 8, 31, 8, 0, "1.2.8", 56) )
      do
      {
        v12 = v19;
        if ( v19 >= v11 )
        {
          v11 += 4;
          sub_21E849C(v3, v11, 0);
          v12 = v19;
        }
        v17 = *(_DWORD *)v3 + v12;
        v18 = v11 - v12;
      }
      while ( !j_j_deflate((int)&v15, 4u) );
      v9 = 0;
      if ( !j_j_deflateEnd((int)&v15, v13) )
        v9 = 1;
  }
  else
    EntityInteraction::setInteractText((int *)a2, v2);
    v9 = 1;
  return v9;
}


signed int __fastcall GzipUtil::decompressNBTFromAssets(int a1, char *a2)
{
  char *v2; // r4@1
  void *v3; // r0@2
  int v4; // r1@4
  signed int v5; // r4@5
  void *v6; // r0@7
  char *v7; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  int v13; // [sp+0h] [bp-28h]@4
  char *v14; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v14 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v14, 0x200u);
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v3 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v3 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v3 + 376))(&v13);
  v4 = v13;
  if ( *(_DWORD *)(v13 - 12) )
  {
    v5 = j_GzipUtil::decompress(&v13, v2);
    v4 = v13;
  }
    v5 = 0;
  v6 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
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
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v5;
}


signed int __fastcall GzipUtil::decompress(int *a1, char *a2)
{
  int *v2; // r7@1
  char *v3; // r4@1
  unsigned int v4; // r5@1
  signed int v5; // r6@2
  size_t v6; // r1@3
  unsigned int v7; // r7@3
  signed int v8; // r0@6
  int v9; // r1@7
  int v10; // r2@7
  void (__fastcall *v11)(_DWORD, int); // r3@7
  int v13; // [sp+4h] [bp-4Ch]@2
  int v14; // [sp+8h] [bp-48h]@2
  size_t v15; // [sp+10h] [bp-40h]@6
  unsigned int v16; // [sp+14h] [bp-3Ch]@6
  size_t v17; // [sp+18h] [bp-38h]@2
  int v18; // [sp+24h] [bp-2Ch]@2
  int v19; // [sp+28h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( v4 )
  {
    v5 = 0;
    sub_21E849C(a2, v4, 0);
    v13 = *v2;
    v14 = *(_DWORD *)(v13 - 12);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( !j_j_inflateInit2_((int)&v13, 31, "1.2.8", 56) )
    {
      v6 = v17;
      v7 = v4 >> 1;
      do
      {
        if ( v6 >= v4 )
        {
          v4 += v7;
          sub_21E849C(v3, v4, 0);
          v6 = v17;
        }
        v15 = *(_DWORD *)v3 + v6;
        v16 = v4 - v6;
        v8 = j_j_inflate((int)&v13, 2);
        v6 = v17;
      }
      while ( !v8 );
      v5 = 0;
      sub_21E849C(v3, v17, 0);
      if ( !j_j_inflateEnd((int)&v13, v9, v10, v11) )
        v5 = 1;
    }
  }
  else
    EntityInteraction::setInteractText((int *)a2, a1);
    v5 = 1;
  return v5;
}
