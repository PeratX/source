

void __fastcall ClientSkinInfoData::updateSkin(int a1, const void **a2, unsigned __int64 *a3, unsigned __int64 *a4, const void **a5, int *a6)
{
  unsigned __int64 *v6; // r5@1
  int v7; // r9@1
  int v8; // r0@1
  int v9; // r1@1
  char *v10; // r4@1
  unsigned __int64 *v11; // r11@1
  bool v12; // zf@1
  unsigned int v13; // r7@1
  int v14; // r1@1
  int v15; // r2@3
  int v16; // r7@3
  signed int v17; // r10@5
  void *v18; // r0@5
  _DWORD *v19; // r0@6
  size_t v20; // r2@6
  signed int v21; // r5@8
  mce::ImageBuffer *v22; // r0@10
  unsigned int v23; // r7@10
  const char *v24; // r4@10
  mce::ImageBuffer *v25; // r0@10
  char *v26; // r0@10
  int v27; // r0@10
  TexturePair **v28; // r5@12
  TexturePair *v29; // r0@13
  TexturePair *v30; // r4@14
  mce::ImageBuffer *v31; // r0@15
  __int64 v32; // kr10_8@15
  unsigned __int64 v33; // kr18_8@15
  signed int v34; // r7@16
  mce::ImageBuffer *v35; // r0@19
  unsigned int v36; // r4@19
  const char *v37; // r8@19
  mce::ImageBuffer *v38; // r0@19
  char *v39; // r0@19
  int v40; // r0@19
  mce::ImageBuffer *v41; // r0@25
  __int64 v42; // kr20_8@25
  unsigned __int64 v43; // kr28_8@25
  const void **v44; // [sp+8h] [bp-38h]@1
  int v45; // [sp+Ch] [bp-34h]@14
  void *ptr; // [sp+10h] [bp-30h]@1
  char *v47; // [sp+14h] [bp-2Ch]@1
  int v48; // [sp+18h] [bp-28h]@1

  v6 = a3;
  v44 = a2;
  v7 = a1;
  v8 = *a3 >> 32;
  v9 = *a3;
  v10 = 0;
  v11 = a4;
  v13 = v8 - v9;
  v12 = v8 == v9;
  v14 = *a3 >> 32;
  ptr = 0;
  v47 = 0;
  v48 = 0;
  if ( !v12 )
  {
    v10 = (char *)operator new(v13);
    v8 = *v6 >> 32;
    v14 = *v6;
  }
  v15 = (int)&v10[v13];
  v16 = v8 - v14;
  ptr = v10;
  v47 = v10;
  v48 = v15;
  if ( v8 != v14 )
    _aeabi_memmove(v10, v14);
  v47 = &v10[v16];
  v17 = SkinInfoData::verifyIsPremiumGeometry(v7, a5);
  (*(void (__fastcall **)(int, void **, signed int))(*(_DWORD *)v7 + 40))(v7, &ptr, v17);
  v18 = ptr;
  if ( v47 - (_BYTE *)ptr == 0x4000 )
    v19 = *(_DWORD **)(v7 + 8);
    v20 = *(v19 - 3);
    if ( v20 == *((_DWORD *)*v44 - 3) )
    {
      if ( !memcmp(v19, *v44, v20) )
      {
        v41 = (mce::ImageBuffer *)mce::TextureContainer::getImage(
                                    (mce::TextureContainer *)(*(_DWORD *)(v7 + 24) + 64),
                                    0);
        v42 = *(_QWORD *)mce::ImageBuffer::getStorageDEPRECATED(v41);
        v43 = *v6;
        if ( HIDWORD(v42) - (_DWORD)v42 == HIDWORD(v43) - (_DWORD)v43 )
          v21 = memcmp((const void *)v42, (const void *)v43, HIDWORD(v42) - v42) != 0;
        else
          v21 = 1;
      }
      else
        v21 = 1;
    }
    else
      v21 = 1;
    v22 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(*(_DWORD *)(v7 + 24) + 64), 0);
    v23 = mce::ImageBuffer::get(v22, 0);
    v24 = (const char *)ptr;
    v25 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(*(_DWORD *)(v7 + 24) + 64), 0);
    v26 = mce::ImageBuffer::getImageDescription(v25);
    v27 = mce::ImageDescription::getSubimageSize((mce::ImageDescription *)v26);
    _aeabi_memcpy(v23, v24, v27);
    if ( v21 == 1 )
      TexturePair::sync(*(TexturePair **)(v7 + 24));
    v28 = (TexturePair **)(v7 + 28);
    if ( (unsigned int)*v11 == *v11 >> 32 )
      std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::reset((int *)(v7 + 28), 0);
      v29 = *v28;
      if ( !*v28 )
        v30 = (TexturePair *)operator new(0x78u);
        TexturePair::TexturePair(v30, 64, 32);
        v45 = 0;
        std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::reset((int *)(v7 + 28), (int)v30);
        std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::~unique_ptr(&v45);
        mce::TextureGroup::addManualTexture(ClientSkinInfoData::mTextures, *v28);
        v29 = *v28;
      v31 = (mce::ImageBuffer *)mce::TextureContainer::getImage((TexturePair *)((char *)v29 + 64), 0);
      v32 = *(_QWORD *)mce::ImageBuffer::getStorageDEPRECATED(v31);
      v33 = *v11;
      if ( HIDWORD(v32) - (_DWORD)v32 == HIDWORD(v33) - (_DWORD)v33 )
        v34 = memcmp((const void *)v32, (const void *)v33, HIDWORD(v32) - v32) != 0;
        v34 = 1;
      v35 = (mce::ImageBuffer *)mce::TextureContainer::getImage((TexturePair *)((char *)*v28 + 64), 0);
      v36 = mce::ImageBuffer::get(v35, 0);
      v37 = *(const char **)v11;
      v38 = (mce::ImageBuffer *)mce::TextureContainer::getImage((TexturePair *)((char *)*v28 + 64), 0);
      v39 = mce::ImageBuffer::getImageDescription(v38);
      v40 = mce::ImageDescription::getSubimageSize((mce::ImageDescription *)v39);
      _aeabi_memcpy(v36, v37, v40);
      if ( v34 == 1 )
        TexturePair::sync(*v28);
    *(_BYTE *)(v7 + 32) = 1;
    *(_BYTE *)(v7 + 4) = v17;
    SkinInfoData::updateSkin(v7, (int *)v44, (int)&ptr, (int)v11, (int *)a5, a6);
    v18 = ptr;
  if ( v18 )
    operator delete(v18);
}


void __fastcall ClientSkinInfoData::~ClientSkinInfoData(ClientSkinInfoData *this)
{
  ClientSkinInfoData::~ClientSkinInfoData(this);
}


unsigned int __fastcall ClientSkinInfoData::getCapeData(ClientSkinInfoData *this)
{
  int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 7);
  if ( v1 )
    result = j_j_j__ZN3mce16TextureContainer12getImageDataEjj((mce::TextureContainer *)(v1 + 64), 0, 0);
  else
    result = 0;
  return result;
}


int __fastcall ClientSkinInfoData::getCapeTexturePair(ClientSkinInfoData *this)
{
  ClientSkinInfoData *v1; // r4@1
  mce::Texture *v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = (mce::Texture *)*((_DWORD *)this + 7);
  if ( v2 )
  {
    if ( !mce::Texture::isCreated(v2) )
      TexturePair::load(*((TexturePair **)v1 + 7));
    result = *((_DWORD *)v1 + 7);
  }
  else
    result = 0;
  return result;
}


int __fastcall ClientSkinInfoData::getTexturePair(ClientSkinInfoData *this)
{
  ClientSkinInfoData *v1; // r4@1

  v1 = this;
  if ( !mce::Texture::isCreated(*((mce::Texture **)this + 6)) )
    TexturePair::load(*((TexturePair **)v1 + 6));
  return *((_DWORD *)v1 + 6);
}


void __fastcall ClientSkinInfoData::~ClientSkinInfoData(ClientSkinInfoData *this)
{
  SkinInfoData *v1; // r0@1

  v1 = ClientSkinInfoData::~ClientSkinInfoData(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ClientSkinInfoData::ClientSkinInfoData(int a1)
{
  int v1; // r4@1
  TexturePair *v2; // r7@1
  int v4; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  SkinInfoData::SkinInfoData(a1);
  *(_DWORD *)v1 = &off_26D9F6C;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 28) = 0;
  *(_BYTE *)(v1 + 32) = 0;
  v2 = (TexturePair *)operator new(0x78u);
  TexturePair::TexturePair(v2, 64, 64);
  v4 = 0;
  std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::reset((int *)(v1 + 24), (int)v2);
  std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::~unique_ptr(&v4);
  mce::TextureGroup::addManualTexture(ClientSkinInfoData::mTextures, *(TexturePair **)(v1 + 24));
  return v1;
}


int __fastcall ClientSkinInfoData::getDataLength(ClientSkinInfoData *this)
{
  mce::ImageBuffer *v1; // r0@1
  char *v2; // r0@1

  v1 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(*((_DWORD *)this + 6) + 64), 0);
  v2 = mce::ImageBuffer::getImageDescription(v1);
  return j_j_j__ZNK3mce16ImageDescription14getStorageSizeEv_0((mce::ImageDescription *)v2);
}


int __fastcall ClientSkinInfoData::getCapeDataLength(ClientSkinInfoData *this)
{
  int v1; // r0@1
  int result; // r0@2
  mce::ImageBuffer *v3; // r0@3
  char *v4; // r0@3

  v1 = *((_DWORD *)this + 7);
  if ( v1 )
  {
    v3 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(v1 + 64), 0);
    v4 = mce::ImageBuffer::getImageDescription(v3);
    result = j_j_j__ZNK3mce16ImageDescription14getStorageSizeEv_0((mce::ImageDescription *)v4);
  }
  else
    result = 0;
  return result;
}


SkinInfoData *__fastcall ClientSkinInfoData::~ClientSkinInfoData(ClientSkinInfoData *this)
{
  ClientSkinInfoData *v1; // r4@1
  char *v2; // r5@1
  TexturePair *v3; // r1@1

  v1 = this;
  *(_DWORD *)this = &off_26D9F6C;
  v2 = (char *)this + 24;
  mce::TextureGroup::removeManualTextureData(ClientSkinInfoData::mTextures, *((TexturePair **)this + 6));
  v3 = (TexturePair *)*((_DWORD *)v1 + 7);
  if ( v3 )
    mce::TextureGroup::removeManualTextureData(ClientSkinInfoData::mTextures, v3);
  std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::~unique_ptr((_DWORD *)v1 + 7);
  std::unique_ptr<TexturePair,std::default_delete<TexturePair>>::~unique_ptr(v2);
  return j_j_j__ZN12SkinInfoDataD2Ev(v1);
}


void __fastcall ClientSkinInfoData::updateSkin(int a1, const void **a2, unsigned __int64 *a3, unsigned __int64 *a4, const void **a5, int *a6)
{
  ClientSkinInfoData::updateSkin(a1, a2, a3, a4, a5, a6);
}
