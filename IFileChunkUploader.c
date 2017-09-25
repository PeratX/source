

_DWORD *__fastcall IFileChunkUploader::IFileChunkUploader(_DWORD *result)
{
  *result = &off_26EBBA8;
  return result;
}


int __fastcall IFileChunkUploader::getChunkInfo(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


void __fastcall IFileChunkUploader::getServerMissingChunks(int a1, int a2, int a3)
{
  IFileChunkUploader::getServerMissingChunks(a1, a2, a3);
}


int __fastcall IFileChunkUploader::uploadStream(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( !*(_DWORD *)(a7 + 8) )
    sub_21E5F48();
  return (*(int (**)(void))(a7 + 12))();
}


int __fastcall IFileChunkUploader::uploadChunk(int a1, int a2, int a3, int a4, int a5)
{
  if ( !*(_DWORD *)(a5 + 8) )
    sub_21E5F48();
  return (*(int (**)(void))(a5 + 12))();
}


void __fastcall IFileChunkUploader::getServerMissingChunks(int a1, int a2, int a3)
{
  void (__fastcall *v3)(int, void **); // r3@2
  void *ptr; // [sp+4h] [bp-14h]@2
  int v5; // [sp+8h] [bp-10h]@2
  int v6; // [sp+Ch] [bp-Ch]@2

  if ( !*(_DWORD *)(a3 + 8) )
    sub_21E5F48();
  v3 = *(void (__fastcall **)(int, void **))(a3 + 12);
  ptr = 0;
  v5 = 0;
  v6 = 0;
  v3(a3, &ptr);
  if ( ptr )
    operator delete(ptr);
}
