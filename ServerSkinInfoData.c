

void __fastcall ServerSkinInfoData::~ServerSkinInfoData(ServerSkinInfoData *this)
{
  ServerSkinInfoData *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26FD54C;
  v2 = (void *)*((_DWORD *)this + 9);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 6);
  if ( v3 )
    operator delete(v3);
  SkinInfoData::~SkinInfoData(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ServerSkinInfoData::updateSkin(int a1, int *a2, unsigned __int64 *a3, unsigned __int64 *a4, const void **a5, int *a6)
{
  unsigned __int64 *v6; // r4@1
  int *v7; // r8@1
  int v8; // r6@1
  int v9; // r0@1
  int v10; // r1@1
  void *v11; // r5@1
  unsigned __int64 *v12; // r10@1
  bool v13; // zf@1
  unsigned int v14; // r7@1
  int v15; // r1@1
  int v16; // r4@3
  signed int v17; // r0@5
  void *v18; // r0@5
  __int64 v19; // r0@6
  __int64 v20; // r0@6
  void *v21; // r5@8
  int v22; // r4@10
  void *ptr; // [sp+8h] [bp-38h]@6
  char *v24; // [sp+Ch] [bp-34h]@6
  char *v25; // [sp+10h] [bp-30h]@6
  void *v26; // [sp+14h] [bp-2Ch]@1
  char *v27; // [sp+18h] [bp-28h]@1
  char *v28; // [sp+1Ch] [bp-24h]@1

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = *a3 >> 32;
  v10 = *a3;
  v11 = 0;
  v12 = a4;
  v14 = v9 - v10;
  v13 = v9 == v10;
  v15 = *a3 >> 32;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( !v13 )
  {
    v11 = operator new(v14);
    v9 = *v6 >> 32;
    v15 = *v6;
  }
  v16 = v9 - v15;
  v26 = v11;
  v27 = (char *)v11;
  v28 = (char *)v11 + v14;
  if ( v9 != v15 )
    _aeabi_memmove(v11, v15);
  v27 = (char *)v11 + v16;
  v17 = SkinInfoData::verifyIsPremiumGeometry(v8, a5);
  (*(void (__fastcall **)(int, void **, signed int))(*(_DWORD *)v8 + 40))(v8, &v26, v17);
  v18 = v26;
  if ( v27 - (_BYTE *)v26 == 0x4000 )
    LODWORD(v19) = v8 + 24;
    HIDWORD(v19) = v27 - (_BYTE *)v26;
    std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v19);
    LODWORD(v20) = *v12 >> 32;
    HIDWORD(v20) = *v12;
    ptr = 0;
    v24 = 0;
    v25 = 0;
    if ( (_DWORD)v20 - HIDWORD(v20) == 0x2000 )
    {
      if ( (_DWORD)v20 == HIDWORD(v20) )
      {
        v21 = 0;
        HIDWORD(v20) = v20;
      }
      else
        v21 = operator new(0x2000u);
        LODWORD(v20) = *v12 >> 32;
        HIDWORD(v20) = *v12;
      v22 = v20 - HIDWORD(v20);
      ptr = v21;
      v24 = (char *)v21;
      v25 = (char *)v21 + 0x2000;
      if ( (_DWORD)v20 != HIDWORD(v20) )
        _aeabi_memmove(v21, HIDWORD(v20));
      v24 = (char *)v21 + v22;
    }
    LODWORD(v20) = v8 + 36;
    std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v20);
    if ( ptr )
      operator delete(ptr);
    SkinInfoData::updateSkin(v8, v7, (int)&v26, (int)v12, (int *)a5, a6);
    v18 = v26;
  if ( v18 )
    operator delete(v18);
}


void __fastcall ServerSkinInfoData::~ServerSkinInfoData(ServerSkinInfoData *this)
{
  ServerSkinInfoData::~ServerSkinInfoData(this);
}


int __fastcall ServerSkinInfoData::getCapeData(ServerSkinInfoData *this)
{
  int v1; // r1@1

  v1 = *(_QWORD *)((char *)this + 36);
  if ( (*(_QWORD *)((char *)this + 36) >> 32) - v1 != 0x2000 )
    v1 = 0;
  return v1;
}


SkinInfoData *__fastcall ServerSkinInfoData::~ServerSkinInfoData(ServerSkinInfoData *this)
{
  ServerSkinInfoData *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26FD54C;
  v2 = (void *)*((_DWORD *)this + 9);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 6);
  if ( v3 )
    operator delete(v3);
  return j_j_j__ZN12SkinInfoDataD2Ev_0(v1);
}


void __fastcall ServerSkinInfoData::updateSkin(int a1, int *a2, unsigned __int64 *a3, unsigned __int64 *a4, const void **a5, int *a6)
{
  ServerSkinInfoData::updateSkin(a1, a2, a3, a4, a5, a6);
}


int __fastcall ServerSkinInfoData::ServerSkinInfoData(int a1)
{
  int result; // r0@1

  result = SkinInfoData::SkinInfoData(a1);
  *(_DWORD *)result = &off_26FD54C;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  return result;
}


int __fastcall ServerSkinInfoData::getCapeTexturePair(ServerSkinInfoData *this)
{
  return 0;
}


int __fastcall ServerSkinInfoData::getData(ServerSkinInfoData *this)
{
  int v1; // r1@1

  v1 = *((_QWORD *)this + 3);
  if ( (*((_QWORD *)this + 3) >> 32) - v1 != 0x4000 )
    v1 = 0;
  return v1;
}


int __fastcall ServerSkinInfoData::hasValidTexture(ServerSkinInfoData *this)
{
  signed int v1; // r2@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = 0;
  v2 = (*((_QWORD *)this + 3) >> 32) - *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 == 0x2000 )
    v1 = 1;
  if ( v2 == 0x4000 )
    v3 = 1;
  return v3 | v1;
}
