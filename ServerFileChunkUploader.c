

_DWORD *__fastcall ServerFileChunkUploader::confirmChunkReceived(int a1, int a2, const UploadChunkInfo *a3)
{
  int v3; // r5@1
  const UploadChunkInfo *v4; // r4@1
  _DWORD *result; // r0@1
  const void *v6; // r1@2
  size_t v7; // r2@2

  v3 = a1;
  v4 = a3;
  result = *(_DWORD **)(*(_DWORD *)(a1 + 24) - 12);
  if ( result )
  {
    result = *(_DWORD **)(a2 + 16);
    v6 = *(const void **)(v3 + 28);
    v7 = *(result - 3);
    if ( v7 == *((_DWORD *)v6 - 3) )
    {
      result = (_DWORD *)memcmp(result, v6, v7);
      if ( !result )
        result = (_DWORD *)j_j_j__ZN18UploadChunkManager20confirmChunkReceivedERK15UploadChunkInfo(
                             (UploadChunkManager *)(v3 + 32),
                             v4);
    }
  }
  return result;
}


void __fastcall ServerFileChunkUploader::getServerMissingChunks(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r10@1
  _DWORD *v5; // r0@2
  _DWORD *v6; // r1@2
  size_t v7; // r2@2
  void (__fastcall *v8)(int, void **); // r2@5
  void *v9; // r0@5
  char *v10; // r0@9
  char *v11; // r6@9
  int v12; // r12@9 OVERLAPPED
  signed int v13; // r0@9
  unsigned int v14; // r8@9
  int v15; // r9@10
  int v16; // r11@10 OVERLAPPED
  void *v17; // r0@12
  int v18; // lr@13
  int v19; // r3@14
  int v20; // r2@15
  int v21; // r0@15
  int v22; // r1@15
  int v23; // r4@15
  int v24; // r5@15
  int v25; // r6@15
  int v26; // r7@15
  void (__fastcall *v27)(int, void **); // r2@17
  void *v28; // [sp+4h] [bp-3Ch]@17
  int v29; // [sp+8h] [bp-38h]@17
  unsigned int v30; // [sp+Ch] [bp-34h]@17
  void *ptr; // [sp+10h] [bp-30h]@5
  int v32; // [sp+14h] [bp-2Ch]@5
  int v33; // [sp+18h] [bp-28h]@5

  v3 = a1;
  v4 = a3;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) - 12)
    && (v5 = *(_DWORD **)(a2 + 16), v6 = *(_DWORD **)(v3 + 28), v7 = *(v5 - 3), v7 == *(v6 - 3))
    && !memcmp(v5, v6, v7) )
  {
    v10 = UploadChunkManager::getMissingChunks((UploadChunkManager *)(v3 + 32));
    v11 = v10;
    v12 = *(_QWORD *)v10 >> 32;
    v13 = v12 - *(_QWORD *)v10;
    v14 = -1431655765 * (v13 >> 3);
    if ( v13 )
    {
      if ( v14 >= 0xAAAAAAB )
        sub_21E57F4();
      v17 = operator new(v13);
      *(_QWORD *)(&v12 - 1) = *(_QWORD *)v11;
      v15 = (int)v17;
    }
    else
      v15 = 0;
      v16 = v12;
    v18 = v15;
    if ( v16 != v12 )
      v18 = v15;
      v19 = v16;
      do
      {
        v16 += 24;
        v20 = v18;
        v18 += 24;
        v21 = *(_DWORD *)v19;
        v22 = *(_DWORD *)(v19 + 4);
        v23 = *(_DWORD *)(v19 + 8);
        v24 = *(_DWORD *)(v19 + 12);
        v25 = *(_DWORD *)(v19 + 16);
        v26 = *(_DWORD *)(v19 + 20);
        v19 = v16;
        *(_DWORD *)v20 = v21;
        *(_DWORD *)(v20 + 4) = v22;
        *(_DWORD *)(v20 + 8) = v23;
        *(_DWORD *)(v20 + 12) = v24;
        *(_DWORD *)(v20 + 16) = v25;
        *(_DWORD *)(v20 + 20) = v26;
      }
      while ( v12 != v16 );
    if ( !*(_DWORD *)(v4 + 8) )
      sub_21E5F48();
    v27 = *(void (__fastcall **)(int, void **))(v4 + 12);
    v28 = (void *)v15;
    v29 = v18;
    v30 = v15 + 24 * v14;
    v27(v4, &v28);
    v9 = v28;
  }
  else
    v8 = *(void (__fastcall **)(int, void **))(v4 + 12);
    ptr = 0;
    v32 = 0;
    v33 = 0;
    v8(v4, &ptr);
    v9 = ptr;
  if ( v9 )
    operator delete(v9);
}


void __fastcall ServerFileChunkUploader::~ServerFileChunkUploader(ServerFileChunkUploader *this)
{
  ServerFileChunkUploader *v1; // r0@1

  v1 = ServerFileChunkUploader::~ServerFileChunkUploader(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ServerFileChunkUploader *__fastcall ServerFileChunkUploader::~ServerFileChunkUploader(ServerFileChunkUploader *this)
{
  ServerFileChunkUploader *v1; // r5@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r0@5
  unsigned int *v8; // r2@6
  unsigned int v9; // r1@8
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26EC194;
  v2 = (void *)*((_DWORD *)this + 12);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 7);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 6);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v5 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  IFileChunkUploader::~IFileChunkUploader(v1);
  return v1;
}


void __fastcall ServerFileChunkUploader::uploadChunk(int a1, int a2, int a3, __int64 *a4, int a5)
{
  ServerFileChunkUploader::uploadChunk(a1, a2, a3, a4, a5);
}


_DWORD *__fastcall ServerFileChunkUploader::ServerFileChunkUploader(_DWORD *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  _DWORD *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  IFileChunkUploader::IFileChunkUploader(a1);
  v5[1] = 0;
  v5[2] = 0;
  *v5 = &off_26EC194;
  v5[3] = v4;
  v5[4] = v3;
  v5[6] = &unk_28898CC;
  v5[7] = &unk_28898CC;
  UploadChunkManager::UploadChunkManager((UploadChunkManager *)(v5 + 8));
  return v5;
}


void __fastcall ServerFileChunkUploader::~ServerFileChunkUploader(ServerFileChunkUploader *this)
{
  ServerFileChunkUploader::~ServerFileChunkUploader(this);
}


void __fastcall ServerFileChunkUploader::initFileUploader(int a1, int *a2, int a3, unsigned int a4, int a5)
{
  int v5; // r5@1
  unsigned int v6; // r9@1
  int v7; // r6@1
  int *v8; // r7@1
  int v9; // r1@4
  __int64 v10; // kr00_8@4
  __int64 v11; // kr08_8@4
  __int64 v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  void **v19; // [sp+8h] [bp-58h]@4
  signed int v20; // [sp+Ch] [bp-54h]@4
  int v21; // [sp+10h] [bp-50h]@4
  char v22; // [sp+14h] [bp-4Ch]@4
  int v23; // [sp+18h] [bp-48h]@4
  unsigned int v24; // [sp+1Ch] [bp-44h]@4
  int v25; // [sp+20h] [bp-40h]@4
  __int64 v26; // [sp+28h] [bp-38h]@4
  int v27; // [sp+30h] [bp-30h]@4

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (int *)(a1 + 24);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) - 12) )
  {
    if ( !*(_DWORD *)(a5 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, _DWORD))(a5 + 12))(a5, 0);
  }
  else
    EntityInteraction::setInteractText(v8, a2);
    EntityInteraction::setInteractText((int *)(v5 + 28), (int *)(v7 + 16));
    UploadChunkManager::reset((UploadChunkManager *)(v5 + 32), v9, *(_QWORD *)(v7 + 8), v6);
    v10 = *(_QWORD *)UploadChunkManager::getMissingChunks((UploadChunkManager *)(v5 + 32));
    v11 = *(_QWORD *)(v7 + 8);
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26E641C;
    sub_21E8AF4(&v23, v8);
    v24 = v6;
    v25 = -1431655765 * ((HIDWORD(v10) - (signed int)v10) >> 3);
    v26 = v11;
    sub_21E8AF4(&v27, (int *)(v5 + 28));
    v12 = *(_QWORD *)(v5 + 12);
    v21 = 0;
    (*(void (**)(void))(*(_DWORD *)v12 + 16))();
    *(_BYTE *)(v5 + 20) = 1;
    (*(void (__fastcall **)(int, signed int))(a5 + 12))(a5, 1);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v23 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
}


signed int __fastcall ServerFileChunkUploader::_validateFile(int a1, int a2)
{
  int v2; // r2@1
  _DWORD *v3; // r0@2
  signed int v4; // r4@2
  _DWORD *v5; // r1@2
  size_t v6; // r2@2
  signed int result; // r0@5

  v2 = a1;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) - 12) )
  {
    v3 = *(_DWORD **)(a2 + 16);
    v4 = 0;
    v5 = *(_DWORD **)(v2 + 28);
    v6 = *(v3 - 3);
    if ( v6 == *(v5 - 3) && !memcmp(v3, v5, v6) )
      v4 = 1;
    result = v4;
  }
  else
    result = 0;
  return result;
}


void __fastcall ServerFileChunkUploader::uploadChunk(int a1, int a2, int a3, __int64 *a4, int a5)
{
  int v5; // r5@1
  __int64 *v6; // r6@1
  int v7; // r7@1
  _DWORD *v8; // r0@2
  _DWORD *v9; // r1@2
  size_t v10; // r2@2
  int v11; // r3@3
  __int64 v12; // r0@6
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  void **v16; // [sp+10h] [bp-48h]@6
  int v17; // [sp+18h] [bp-40h]@6
  int v18; // [sp+20h] [bp-38h]@9
  void *ptr; // [sp+30h] [bp-28h]@7

  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) - 12)
    && (v8 = *(_DWORD **)(a2 + 16), v9 = *(_DWORD **)(v5 + 28), v10 = *(v8 - 3), v10 == *(v9 - 3))
    && !memcmp(v8, v9, v10) )
  {
    ResourcePackChunkDataPacket::ResourcePackChunkDataPacket(
      (int)&v16,
      (int *)(v5 + 24),
      *(_DWORD *)v7,
      v11,
      *(_QWORD *)(v7 + 8),
      *(_QWORD *)(v7 + 8) >> 32,
      v6);
    v12 = *(_QWORD *)(v5 + 12);
    v17 = 0;
    (*(void (**)(void))(*(_DWORD *)v12 + 16))();
    if ( !*(_DWORD *)(a5 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, signed int))(a5 + 12))(a5, 1);
    v16 = &off_26E99F4;
    if ( ptr )
      operator delete(ptr);
    v13 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
  }
  else
    (*(void (__fastcall **)(int, _DWORD))(a5 + 12))(a5, 0);
}


_DWORD *__fastcall ServerFileChunkUploader::getChunkInfo(UploadChunkInfo *this, int a2, int a3, int a4)
{
  int v4; // r6@1
  UploadChunkManager *v5; // r4@1
  int v6; // r5@1
  _DWORD *v7; // r0@2
  _DWORD *v8; // r1@2
  size_t v9; // r2@2
  _DWORD *result; // r0@4

  v4 = a2;
  v5 = this;
  v6 = a4;
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 24) - 12)
    && (v7 = *(_DWORD **)(a3 + 16), v8 = *(_DWORD **)(a2 + 28), v9 = *(v7 - 3), v9 == *(v8 - 3))
    && !memcmp(v7, v8, v9) )
  {
    result = (_DWORD *)UploadChunkManager::getChunkInfo(v5, v4 + 32, v6);
  }
  else
    result = UploadChunkInfo::UploadChunkInfo(v5, -1, 0xFFFFFFFFFFFFFFFFLL, 0LL);
  return result;
}


void __fastcall ServerFileChunkUploader::initFileUploader(int a1, int *a2, int a3, unsigned int a4, int a5)
{
  ServerFileChunkUploader::initFileUploader(a1, a2, a3, a4, a5);
}


void __fastcall ServerFileChunkUploader::getServerMissingChunks(int a1, int a2, int a3)
{
  ServerFileChunkUploader::getServerMissingChunks(a1, a2, a3);
}
