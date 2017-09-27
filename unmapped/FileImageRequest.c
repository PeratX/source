

void __fastcall FileImageRequest::~FileImageRequest(FileImageRequest *this)
{
  FileImageRequest::~FileImageRequest(this);
}


void __fastcall FileImageRequest::~FileImageRequest(FileImageRequest *this)
{
  FileDataRequest *v1; // r0@1

  v1 = FileDataRequest::~FileDataRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


_DWORD *__fastcall FileImageRequest::FileImageRequest(_DWORD *a1, ContentCatalogService *a2, int *a3, int a4)
{
  ContentCatalogService *v4; // r6@1
  _DWORD *v5; // r4@1
  int v6; // r5@1
  int *v7; // r8@1
  int *v8; // r7@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  char v11; // [sp+8h] [bp-28h]@2
  void (*v12)(void); // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@2

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (int *)ContentCatalogService::getCacheLocation(a2);
  v12 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(v6 + 8);
  if ( v9 )
  {
    v9(&v11, v6, 2);
    v13 = *(_DWORD *)(v6 + 12);
    v12 = *(void (**)(void))(v6 + 8);
  }
  FileDataRequest::FileDataRequest((int)v5, (int)v4, v7, v8, (int)&v11);
  if ( v12 )
    v12();
  *v5 = &off_26DD33C;
  return v5;
}
