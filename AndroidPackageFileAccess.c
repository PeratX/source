

unsigned int __fastcall AndroidPackageFileAccess::fseek(AndroidPackageFileAccess *this, void *a2, __int64 a3, int a4)
{
  unsigned int result; // r0@1

  result = AAsset_seek64(a2) & (unsigned int)a2;
  if ( result != -1 )
    result = 0;
  return result;
}


char *__fastcall AndroidPackageFileAccess::getReadInterface(AndroidPackageFileAccess *this)
{
  return (char *)this + 4;
}


signed __int64 __fastcall AndroidPackageFileAccess::ftell(AndroidPackageFileAccess *this, void *a2)
{
  void *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r1@1
  unsigned int v5; // r6@1
  __int64 v6; // r0@1

  v2 = a2;
  v3 = AAsset_getLength64(a2);
  v5 = v4;
  LODWORD(v6) = AAsset_getRemainingLength64(v2);
  return __PAIR__(v5, v3) - v6;
}


int __fastcall AndroidPackageFileAccess::fopen(int a1, int *a2)
{
  int v2; // r1@1

  v2 = *a2;
  return j_j_AAssetManager_open_0();
}


int __fastcall AndroidPackageFileAccess::AndroidPackageFileReadAccess::fread(AndroidPackageFileAccess::AndroidPackageFileReadAccess *this, void *a2, unsigned int a3, unsigned int a4, void *a5)
{
  return j_j_AAsset_read();
}


int __fastcall AndroidPackageFileAccess::fclose(AndroidPackageFileAccess *this, void *a2)
{
  AAsset_close(a2);
  return 0;
}


int __fastcall AndroidPackageFileAccess::getWriteInterface(AndroidPackageFileAccess *this)
{
  return 0;
}
