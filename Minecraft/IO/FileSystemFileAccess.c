

int __fastcall FileSystemFileAccess::FileSystemFileWriteAccess::fwrite(FileSystemFileAccess::FileSystemFileWriteAccess *this, const void *a2, unsigned __int64 a3, unsigned int a4, void *a5)
{
  int v5; // r4@1
  int v6; // r5@1
  char v8; // [sp+Ch] [bp-24h]@1
  void (*v9)(void); // [sp+14h] [bp-1Ch]@1
  unsigned __int8 v10; // [sp+1Ch] [bp-14h]@1

  v5 = HIDWORD(a3);
  Core::FileImpl::write(
    (Core::FileImpl *)&v8,
    *(const void **)a4,
    __PAIR__((unsigned int)a2, HIDWORD(a3)),
    HIDWORD(a3) * (unsigned __int64)(unsigned int)a3);
  v6 = v10;
  v10 |= 2u;
  if ( v9 )
    v9();
  return v5 & (v6 << 31 >> 31);
}


__int64 __fastcall FileSystemFileAccess::ftell(FileSystemFileAccess *this, void *a2)
{
  int v2; // r4@1
  char v4; // [sp+4h] [bp-24h]@1
  void (*v5)(void); // [sp+Ch] [bp-1Ch]@1
  char v6; // [sp+14h] [bp-14h]@1
  int v7; // [sp+18h] [bp-10h]@1
  int v8; // [sp+1Ch] [bp-Ch]@1

  v7 = 0;
  v8 = 0;
  Core::FileImpl::getPosition((Core::FileImpl *)&v4, *(unsigned __int64 **)a2);
  v2 = v7;
  v6 |= 2u;
  if ( v5 )
    v5();
  return v2;
}


_DWORD *__fastcall FileSystemFileAccess::fopen(int a1, __int64 *a2, const char **a3)
{
  char v3; // r0@1
  _DWORD *v4; // r4@2
  char v6; // [sp+4h] [bp-34h]@1
  __int64 v7; // [sp+8h] [bp-30h]@1
  char v8; // [sp+14h] [bp-24h]@1
  void (__cdecl *v9)(char *); // [sp+1Ch] [bp-1Ch]@4
  char v10; // [sp+24h] [bp-14h]@1
  int v11; // [sp+28h] [bp-10h]@1
  int v12; // [sp+2Ch] [bp-Ch]@1

  v11 = 0;
  v12 = 0;
  v7 = *a2;
  Core::FileOpenMode::FileOpenMode((Core::FileOpenMode *)&v6, *a3);
  Core::File::open((int)&v8, (int)&v11, &v7, v6);
  v3 = v10;
  v10 |= 2u;
  if ( v3 & 1 )
  {
    v4 = operator new(8u);
    *v4 = v11;
    v11 = 0;
    v4[1] = v12;
    v12 = 0;
  }
  else
    v4 = 0;
  if ( v9 )
    v9(&v8);
  Core::File::~File((Core::File *)&v11);
  return v4;
}


int __fastcall FileSystemFileAccess::FileSystemFileAccess(int result, int a2)
{
  *(_DWORD *)result = &off_26EBAE8;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = &off_26EBB68;
  *(_DWORD *)(result + 12) = &off_26EBB7C;
  return result;
}


char *__fastcall FileSystemFileAccess::getWriteInterface(FileSystemFileAccess *this)
{
  int v1; // r1@1
  char *result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = (char *)this + 12;
  if ( v1 == 1 )
    result = 0;
  return result;
}


int __fastcall FileSystemFileAccess::fclose(FileSystemFileAccess *this, void *a2)
{
  Core::File *v2; // r4@1
  char v3; // r5@1
  char v5; // [sp+4h] [bp-24h]@1
  void (*v6)(void); // [sp+Ch] [bp-1Ch]@1
  char v7; // [sp+14h] [bp-14h]@1

  v2 = (Core::File *)a2;
  Core::File::close((Core::File *)&v5, (int *)a2);
  v3 = v7;
  v7 |= 2u;
  if ( v6 )
    v6();
  Core::File::~File(v2);
  operator delete((void *)v2);
  return (v3 & 1) - 1;
}


int __fastcall FileSystemFileAccess::FileSystemFileReadAccess::fread(FileSystemFileAccess::FileSystemFileReadAccess *this, void *a2, unsigned __int64 a3, unsigned int a4, void *a5)
{
  int v5; // r4@1
  unsigned int v6; // r5@1
  unsigned __int64 *v7; // r0@1
  char v8; // r0@1
  char v10; // [sp+Ch] [bp-34h]@1
  void (*v11)(void); // [sp+14h] [bp-2Ch]@4
  char v12; // [sp+1Ch] [bp-24h]@1
  unsigned __int64 v13[4]; // [sp+20h] [bp-20h]@1

  v5 = 0;
  v6 = a3;
  v13[0] = 0LL;
  LODWORD(a3) = a2;
  v7 = (unsigned __int64 *)(HIDWORD(a3) * v6);
  HIDWORD(a3) = v13;
  Core::FileImpl::read((Core::FileImpl *)&v10, *(void **)a4, a3, v7, 0, v13);
  v8 = v12;
  v12 |= 2u;
  if ( v8 & 1 )
  {
    v5 = 0;
    if ( !(v13[0] % v6) )
      v5 = v13[0] / v6;
  }
  if ( v11 )
    v11();
  return v5;
}


char *__fastcall FileSystemFileAccess::getReadInterface(FileSystemFileAccess *this)
{
  return (char *)this + 8;
}
