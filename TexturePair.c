

void __fastcall TexturePair::_loadTexData(TexturePair *this)
{
  TexturePair::_loadTexData(this);
}


void __fastcall TexturePair::setTextureData(int a1, unsigned __int64 *a2)
{
  TexturePair::setTextureData(a1, a2);
}


void __fastcall TexturePair::sync(TexturePair *this)
{
  TexturePair *v1; // r4@1

  v1 = this;
  if ( mce::Texture::isCreated(this) == 1 )
    j_j_j__ZN11TexturePair12_loadTexDataEv(v1);
}


mce::Texture *__fastcall TexturePair::TexturePair(mce::Texture *a1, int a2)
{
  int v2; // r8@1
  mce::Texture *v3; // r4@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r5@1
  int v11; // r6@1

  v2 = a2;
  v3 = a1;
  mce::Texture::Texture(a1);
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  *((_DWORD *)v3 + 19) = &unk_28898CC;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 1;
  *((_BYTE *)v3 + 96) = 0;
  *((_DWORD *)v3 + 25) = 1;
  *((_DWORD *)v3 + 26) = 1;
  *(_QWORD *)((char *)v3 + 108) = 0x800000000LL;
  *((_BYTE *)v3 + 116) = 0;
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=((int)v3 + 64, (unsigned __int64 *)(v2 + 64));
  EntityInteraction::setInteractText((int *)v3 + 19, (int *)(v2 + 76));
  v4 = *(_DWORD *)(v2 + 84);
  v5 = *(_DWORD *)(v2 + 88);
  v6 = *(_DWORD *)(v2 + 92);
  *((_DWORD *)v3 + 20) = *(_DWORD *)(v2 + 80);
  *((_DWORD *)v3 + 21) = v4;
  *((_DWORD *)v3 + 22) = v5;
  *((_DWORD *)v3 + 23) = v6;
  v7 = (int)v3 + 96;
  v8 = *(_DWORD *)(v2 + 100);
  v9 = *(_DWORD *)(v2 + 104);
  v10 = *(_DWORD *)(v2 + 108);
  v11 = *(_DWORD *)(v2 + 112);
  *(_DWORD *)v7 = *(_DWORD *)(v2 + 96);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  *((_BYTE *)v3 + 116) = *(_BYTE *)(v2 + 116);
  mce::Texture::operator=((int)v3, v2);
  return v3;
}


mce::Texture *__fastcall TexturePair::TexturePair(mce::Texture *a1, const mce::TextureDescription *a2)
{
  const mce::TextureDescription *v2; // r5@1
  mce::Texture *v3; // r4@1

  v2 = a2;
  v3 = a1;
  mce::Texture::Texture(a1);
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  *(_QWORD *)((char *)v3 + 76) = (unsigned int)&unk_28898CC;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 1;
  *((_BYTE *)v3 + 96) = 0;
  *((_DWORD *)v3 + 25) = 1;
  *((_DWORD *)v3 + 26) = 1;
  *(_QWORD *)((char *)v3 + 108) = 0x800000000LL;
  *((_BYTE *)v3 + 116) = 0;
  mce::TextureContainer::allocateStorage((mce::Texture *)((char *)v3 + 64), v2);
  return v3;
}


int __fastcall TexturePair::clear(TexturePair *this)
{
  TexturePair *v1; // r4@1

  v1 = this;
  mce::Texture::deleteTexture(this);
  return j_j_j__ZN3mce16TextureContainer5clearEv((TexturePair *)((char *)v1 + 64));
}


mce::Texture *__fastcall TexturePair::TexturePair(mce::Texture *a1, int a2)
{
  int v2; // r5@1
  mce::Texture *v3; // r4@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r6@1

  v2 = a2;
  v3 = a1;
  mce::Texture::Texture(a1);
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  *((_DWORD *)v3 + 19) = &unk_28898CC;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 1;
  *((_BYTE *)v3 + 96) = 0;
  *((_DWORD *)v3 + 25) = 1;
  *((_DWORD *)v3 + 26) = 1;
  *(_QWORD *)((char *)v3 + 108) = 0x800000000LL;
  *((_BYTE *)v3 + 116) = 0;
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=((int)v3 + 64, (unsigned __int64 *)v2);
  EntityInteraction::setInteractText((int *)v3 + 19, (int *)(v2 + 12));
  v5 = *(_DWORD *)(v2 + 20);
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(_DWORD *)(v2 + 28);
  v4 = v2 + 32;
  *((_DWORD *)v3 + 20) = *(_DWORD *)(v2 + 16);
  *((_DWORD *)v3 + 21) = v5;
  *((_DWORD *)v3 + 22) = v6;
  *((_DWORD *)v3 + 23) = v7;
  v8 = (int)v3 + 96;
  v9 = *(_DWORD *)(v2 + 32);
  v10 = *(_DWORD *)(v2 + 36);
  v11 = *(_DWORD *)(v2 + 40);
  v12 = *(_DWORD *)(v2 + 44);
  v13 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)v8 = v9;
  *(_DWORD *)(v8 + 4) = v10;
  *(_DWORD *)(v8 + 8) = v11;
  *(_DWORD *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  *(_BYTE *)(v8 + 20) = *(_BYTE *)(v4 + 20);
  return v3;
}


void __fastcall TexturePair::setTextureData(TexturePair *this, const mce::TextureContainer *a2)
{
  TexturePair::setTextureData(this, a2);
}


void __fastcall TexturePair::sync(TexturePair *this)
{
  TexturePair::sync(this);
}


void __fastcall TexturePair::setTextureData(TexturePair *this, const mce::TextureContainer *a2)
{
  TexturePair *v2; // r7@1
  const mce::TextureContainer *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r1@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r6@1

  v2 = this;
  v3 = a2;
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=((int)this + 64, (unsigned __int64 *)a2);
  EntityInteraction::setInteractText((int *)v2 + 19, (int *)v3 + 3);
  v4 = (int)v3 + 16;
  v5 = (int)v2 + 80;
  v6 = *((_DWORD *)v3 + 4);
  v7 = *((_DWORD *)v3 + 5);
  v8 = *((_DWORD *)v3 + 6);
  v9 = *((_DWORD *)v3 + 7);
  v4 += 16;
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  v10 = (int)v2 + 96;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v4 + 12);
  v14 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)v10 = *(_DWORD *)v4;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  *((_BYTE *)v2 + 116) = *(_BYTE *)(v4 + 20);
  if ( mce::Texture::isCreated(v2) == 1 )
    j_j_j__ZN11TexturePair12_loadTexDataEv(v2);
}


void __fastcall TexturePair::setTextureData(int a1, unsigned __int64 *a2)
{
  int v2; // r7@1
  unsigned __int64 *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r1@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r6@1

  v2 = a1;
  v3 = a2;
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=(a1 + 64, a2);
  EntityInteraction::setInteractText((int *)(v2 + 76), (int *)v3 + 3);
  v4 = (int)(v3 + 2);
  v5 = v2 + 80;
  v6 = *((_DWORD *)v3 + 4);
  v7 = *((_DWORD *)v3 + 5);
  v8 = *((_DWORD *)v3 + 6);
  v9 = *((_DWORD *)v3 + 7);
  v4 += 16;
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  v10 = v2 + 96;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v4 + 12);
  v14 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)v10 = *(_DWORD *)v4;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  *(_BYTE *)(v2 + 116) = *(_BYTE *)(v4 + 20);
  if ( mce::Texture::isCreated((mce::Texture *)v2) == 1 )
    j_j_j__ZN11TexturePair12_loadTexDataEv((TexturePair *)v2);
}


mce::Texture *__fastcall TexturePair::TexturePair(mce::Texture *a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r7@1
  mce::Texture *v5; // r4@1
  signed int v6; // r2@1 OVERLAPPED
  __int64 v7; // r0@1 OVERLAPPED
  char v9; // [sp+Ch] [bp-54h]@1
  char v10; // [sp+20h] [bp-40h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  mce::Texture::Texture(a1);
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 17) = 0;
  *((_DWORD *)v5 + 18) = 0;
  v6 = 8;
  v7 = (unsigned int)&unk_28898CC;
  *(_QWORD *)((char *)v5 + 76) = (unsigned int)&unk_28898CC;
  *((_DWORD *)v5 + 21) = 0;
  *((_DWORD *)v5 + 22) = 0;
  *((_DWORD *)v5 + 23) = 1;
  *((_BYTE *)v5 + 96) = 0;
  *((_DWORD *)v5 + 25) = 1;
  *((_DWORD *)v5 + 26) = 1;
  *(_QWORD *)((char *)v5 + 108) = *(_QWORD *)(&v6 - 1);
  *((_BYTE *)v5 + 116) = 0;
  mce::ImageDescription::ImageDescription((int)&v9, v4, v3, 28, 1, 0);
  mce::TextureDescription::TextureDescription((int)&v10, (int)&v9, 8);
  mce::TextureContainer::allocateStorage((mce::Texture *)((char *)v5 + 64), (const mce::TextureDescription *)&v10);
  return v5;
}


mce::Texture *__fastcall TexturePair::TexturePair(mce::Texture *a1, int a2)
{
  int v2; // r5@1
  mce::Texture *v3; // r4@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r6@1

  v2 = a2;
  v3 = a1;
  mce::Texture::Texture(a1);
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  *((_DWORD *)v3 + 19) = &unk_28898CC;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 1;
  *((_BYTE *)v3 + 96) = 0;
  *((_DWORD *)v3 + 25) = 1;
  *((_DWORD *)v3 + 26) = 1;
  *(_QWORD *)((char *)v3 + 108) = 0x800000000LL;
  *((_BYTE *)v3 + 116) = 0;
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=((int)v3 + 64, (unsigned __int64 *)v2);
  EntityInteraction::setInteractText((int *)v3 + 19, (int *)(v2 + 12));
  v5 = *(_DWORD *)(v2 + 20);
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(_DWORD *)(v2 + 28);
  v4 = v2 + 32;
  *((_DWORD *)v3 + 20) = *(_DWORD *)(v2 + 16);
  *((_DWORD *)v3 + 21) = v5;
  *((_DWORD *)v3 + 22) = v6;
  *((_DWORD *)v3 + 23) = v7;
  v8 = (int)v3 + 96;
  v9 = *(_DWORD *)(v2 + 32);
  v10 = *(_DWORD *)(v2 + 36);
  v11 = *(_DWORD *)(v2 + 40);
  v12 = *(_DWORD *)(v2 + 44);
  v13 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)v8 = v9;
  *(_DWORD *)(v8 + 4) = v10;
  *(_DWORD *)(v8 + 8) = v11;
  *(_DWORD *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  *(_BYTE *)(v8 + 20) = *(_BYTE *)(v4 + 20);
  return v3;
}


void __fastcall TexturePair::_loadTexData(TexturePair *this)
{
  mce::Texture *v1; // r10@1
  mce::TextureContainer *v2; // r11@1
  mce::RenderContext *v3; // r8@1
  char *v4; // r0@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r6@1
  int v12; // r7@1
  __int64 v13; // r6@2
  unsigned int v14; // r4@2
  unsigned int v15; // r0@2
  int i; // r1@2
  char v17; // r3@3
  char *v18; // r7@7
  unsigned int v19; // r5@14
  unsigned int v20; // r4@16
  const void *v21; // r6@17
  int v22; // ST04_4@17
  int v23; // ST08_4@17
  const void *v24; // r0@20
  void *v25; // r0@23
  __int64 v26; // r4@24
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  mce::TextureContainer *v29; // [sp+14h] [bp-8Ch]@4
  int v30; // [sp+18h] [bp-88h]@1
  int v31; // [sp+1Ch] [bp-84h]@1
  int v32; // [sp+20h] [bp-80h]@1
  int v33; // [sp+24h] [bp-7Ch]@1
  int v34; // [sp+28h] [bp-78h]@1
  int v35; // [sp+2Ch] [bp-74h]@1
  int v36; // [sp+30h] [bp-70h]@1
  int v37; // [sp+34h] [bp-6Ch]@1
  int v38; // [sp+38h] [bp-68h]@1
  int v39; // [sp+3Ch] [bp-64h]@1
  int v40; // [sp+44h] [bp-5Ch]@1
  int v41; // [sp+48h] [bp-58h]@1
  int v42; // [sp+4Ch] [bp-54h]@1
  __int64 v43; // [sp+50h] [bp-50h]@1
  int v44; // [sp+58h] [bp-48h]@1
  int v45; // [sp+5Ch] [bp-44h]@1
  int v46; // [sp+60h] [bp-40h]@1
  char v47; // [sp+64h] [bp-3Ch]@1
  signed int v48; // [sp+68h] [bp-38h]@1
  signed int v49; // [sp+6Ch] [bp-34h]@1
  int v50; // [sp+70h] [bp-30h]@1
  int v51; // [sp+74h] [bp-2Ch]@1
  char v52; // [sp+78h] [bp-28h]@1

  v1 = this;
  v2 = (TexturePair *)((char *)this + 64);
  v3 = (mce::RenderContext *)mce::RenderContextImmediate::get(this);
  v4 = mce::TextureContainer::getTextureDescription(v2);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = (unsigned int)&unk_28898CC;
  v44 = 0;
  v45 = 0;
  v46 = 1;
  v47 = 0;
  v48 = 1;
  v49 = 1;
  v50 = 0;
  v51 = 8;
  v52 = 0;
  v5 = *((_DWORD *)v4 + 1);
  v6 = *((_DWORD *)v4 + 2);
  v7 = *((_DWORD *)v4 + 3);
  v8 = *((_DWORD *)v4 + 4);
  v30 = *(_DWORD *)v4;
  v31 = v5;
  v32 = v6;
  v33 = v7;
  v34 = v8;
  v9 = *((_DWORD *)v4 + 6);
  v10 = *((_DWORD *)v4 + 7);
  v11 = *((_DWORD *)v4 + 8);
  v12 = *((_DWORD *)v4 + 9);
  v35 = *((_DWORD *)v4 + 5);
  v36 = v9;
  v37 = v10;
  v38 = v11;
  v39 = v12;
  if ( *((_DWORD *)v4 + 2) == 116 )
  {
    v32 = 28;
    mce::TextureContainer::allocateStorage((mce::TextureContainer *)&v40, (const mce::TextureDescription *)&v30);
    v13 = *(_QWORD *)&v30;
    v14 = mce::TextureContainer::getImageData(v2, 0, 0);
    v15 = mce::TextureContainer::getImageData((mce::TextureContainer *)&v40, 0, 0);
    for ( i = HIDWORD(v13) * v13; i; v15 += 4 )
    {
      --i;
      *(_BYTE *)v15 = *(_BYTE *)v14;
      *(_BYTE *)(v15 + 1) = *(_BYTE *)(v14 + 1);
      v17 = *(_BYTE *)(v14 + 2);
      v14 += 3;
      *(_BYTE *)(v15 + 2) = v17;
      *(_BYTE *)(v15 + 3) = -1;
    }
  }
  v29 = v2;
  if ( mce::TextureContainer::isValid((mce::TextureContainer *)&v40) )
    v2 = (mce::TextureContainer *)&v40;
  if ( mce::TextureContainer::isValid(v2) == 1 )
    v18 = mce::TextureContainer::getTextureDescription(v2);
    if ( *(_DWORD *)mce::Texture::getDescription(v1) != *(_DWORD *)v18
      || *(_DWORD *)(mce::Texture::getDescription(v1) + 4) != *((_DWORD *)v18 + 1) )
      mce::Texture::deleteTexture(v1);
    if ( !mce::Texture::isCreated(v1) )
      mce::Texture::createTexture(v1, v3, (const mce::TextureDescription *)v18);
    if ( v18[32] & 0x40 )
      v24 = (const void *)mce::TextureContainer::getImageData(v2, 0, 0);
      mce::Texture::subBuffer(v1, v3, v24);
    else if ( *((_DWORD *)v18 + 5) )
      v19 = 0;
      do
      {
        if ( mce::ImageDescription::getArraySize((mce::ImageDescription *)v18) )
        {
          v20 = 0;
          do
          {
            v21 = (const void *)mce::TextureContainer::getImageData(v2, v19, v20);
            v22 = mce::TextureDescription::getMipWidth((mce::TextureDescription *)v18, v19);
            v23 = mce::TextureDescription::getMipHeight((mce::TextureDescription *)v18, v19);
            mce::Texture::subBuffer(v1, v3, v21, 0, 0, v22, v23, v19, v20++);
          }
          while ( v20 < mce::ImageDescription::getArraySize((mce::ImageDescription *)v18) );
        }
        ++v19;
      }
      while ( v19 < *((_DWORD *)v18 + 5) );
  if ( *(_DWORD *)(*(_DWORD *)mce::TextureContainer::getRawImage(v29) - 12) )
    mce::TextureContainer::clearImageBuffers(v29);
  v25 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *(_QWORD *)&v40;
  if ( v40 != v41 )
    do
      if ( *(_DWORD *)v26 )
        operator delete(*(void **)v26);
      LODWORD(v26) = v26 + 40;
    while ( HIDWORD(v26) != (_DWORD)v26 );
    LODWORD(v26) = v40;
  if ( (_DWORD)v26 )
    operator delete((void *)v26);
}
