

int __fastcall UIMockResourceLoader::load(int a1, int *a2, int a3, const void ***a4)
{
  int v4; // r5@1
  int v5; // r4@1
  const void **v6; // r6@1
  int (__fastcall *v7)(int, char **, int); // r7@1
  int *v8; // r0@1
  int v9; // r4@1
  char *v10; // r0@1
  char *v11; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  char *v17; // [sp+4h] [bp-24h]@1
  char *v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+Ch] [bp-1Ch]@1

  v4 = a1;
  v5 = a3;
  v6 = *a4;
  v7 = *(int (__fastcall **)(int, char **, int))(*(_DWORD *)a1 + 8);
  v8 = sub_119C854((int *)&v17, a2);
  sub_119C8A4((const void **)v8, v6);
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  v9 = v7(v4, &v18, v5);
  v10 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return v9;
}


void __fastcall UIMockResourceLoader::loadAllVersionsOf(UIMockResourceLoader *this, const ResourceLocation *a2, int a3)
{
  const ResourceLocation *v3; // r6@1
  UIMockResourceLoader *v4; // r8@1
  int v5; // r5@1
  int *v6; // r7@1
  void *v7; // r0@1
  void *v8; // r0@2
  int *v9; // r5@4
  int *v10; // r5@5
  int *v11; // r7@8
  char *v12; // r6@8
  unsigned int v13; // r4@8
  void *v14; // r0@12
  void *v15; // r0@13
  int v16; // r4@14
  int *v17; // r6@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  int v22; // r1@32
  void *v23; // r0@32
  int *v24; // r0@33
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  unsigned int *v29; // r2@47
  signed int v30; // r1@49
  unsigned int *v31; // r2@51
  signed int v32; // r1@53
  int v33; // [sp+4h] [bp-44h]@1
  int v34; // [sp+Ch] [bp-3Ch]@1
  int v35; // [sp+10h] [bp-38h]@1
  int v36; // [sp+14h] [bp-34h]@12
  int *v37; // [sp+18h] [bp-30h]@1
  int *v38; // [sp+1Ch] [bp-2Ch]@1
  int *v39; // [sp+20h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  sub_119C884((void **)&v34, (const char *)&unk_257BC67);
  sub_119C884((void **)&v33, (const char *)&unk_257BC67);
  v6 = sub_119C854(&v35, &v34) + 1;
  sub_119C854(v6, &v33);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v34 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( (*(int (__fastcall **)(const ResourceLocation *, int, int *))(*(_DWORD *)v3 + 8))(v3, v5, v6) == 1 )
    v9 = v38;
    if ( v38 == v39 )
      std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_emplace_back_aux<ResourcePath const&>(&v37, (int)&v35);
      v10 = v38;
      sub_119C854(v38, &v35);
      sub_119C854(v9 + 1, v6);
      v10 = v9 + 2;
      v38 = v10;
    v11 = v37;
    v12 = 0;
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
    v13 = ((char *)v10 - (char *)v11) >> 3;
    if ( v13 )
      if ( v13 >= 0x20000000 )
        sub_119C874();
      v12 = (char *)operator new((char *)v10 - (char *)v11);
    *(_DWORD *)v4 = v12;
    *((_DWORD *)v4 + 1) = v12;
    *((_DWORD *)v4 + 2) = &v12[8 * v13];
    *((_DWORD *)v4 + 1) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ResourcePath const*,std::vector<ResourcePath,std::allocator<ResourcePath>>>,ResourcePath*>(
                            v11,
                            v10,
                            (int)v12);
  else
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v35 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v17 = v38;
  v16 = (int)v37;
  if ( v37 != v38 )
    do
      v22 = *(_DWORD *)(v16 + 4);
      v23 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
      {
        v18 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      }
      v24 = (int *)(*(_DWORD *)v16 - 12);
      if ( v24 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v16 += 8;
    while ( (int *)v16 != v17 );
    v16 = (int)v37;
  if ( v16 )
    operator delete((void *)v16);
}


signed int __fastcall UIMockResourceLoader::load(int a1, int a2, const void **a3)
{
  char *v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  char v6; // r0@2
  signed int v7; // r5@2
  char v8; // r0@3
  unsigned __int64 v9; // r2@5
  char v10; // r0@5
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  char v14; // [sp+8h] [bp-70h]@5
  void (*v15)(void); // [sp+10h] [bp-68h]@8
  char v16; // [sp+18h] [bp-60h]@5
  char v17; // [sp+1Ch] [bp-5Ch]@3
  void (__cdecl *v18)(char *); // [sp+24h] [bp-54h]@10
  char v19; // [sp+2Ch] [bp-4Ch]@3
  size_t v20; // [sp+30h] [bp-48h]@3
  int v21; // [sp+34h] [bp-44h]@3
  int v22; // [sp+3Ch] [bp-3Ch]@1
  int v23; // [sp+40h] [bp-38h]@1
  int v24; // [sp+44h] [bp-34h]@1
  char v25; // [sp+48h] [bp-30h]@1
  void (__cdecl *v26)(char *); // [sp+50h] [bp-28h]@12
  char v27; // [sp+58h] [bp-20h]@2
  unsigned __int64 *v28; // [sp+5Ch] [bp-1Ch]@1
  int v29; // [sp+60h] [bp-18h]@1

  v3 = (char *)a3;
  v4 = a2;
  sub_119CA68(a3, 0, *((_BYTE **)*a3 - 3), 0);
  v28 = 0;
  v29 = 0;
  ResourceLocation::getFullPath((ResourceLocation *)&v22, v4);
  v23 = v22;
  v24 = *(_DWORD *)(v22 - 12);
  Core::File::open((int)&v25, (int)&v28, (__int64 *)&v23, 33);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = v27;
  v7 = 0;
  v27 |= 2u;
  if ( v6 & 1 )
    v20 = 0;
    v21 = 0;
    Core::FileImpl::getRemainingSize((Core::FileImpl *)&v17, v28);
    v8 = v19;
    v19 |= 2u;
    if ( v8 & 1 )
      sub_119E388(v3, v20, 0);
      LODWORD(v9) = *(_DWORD *)v3;
      Core::FileImpl::readExactly((Core::FileImpl *)&v14, v28, v9, *(_DWORD *)(*(_DWORD *)v3 - 12));
      v10 = v16;
      v16 |= 2u;
      if ( v10 & 1 )
      {
        v7 = 1;
      }
      else
        v7 = 0;
        sub_119CA68((const void **)v3, 0, *(_BYTE **)(*(_DWORD *)v3 - 12), 0);
      if ( v15 )
        v15();
      v7 = 0;
    if ( v18 )
      v18(&v17);
  if ( v26 )
    v26(&v25);
  Core::File::~File((Core::File *)&v28);
  return v7;
}


void __fastcall UIMockResourceLoader::~UIMockResourceLoader(UIMockResourceLoader *this)
{
  UIMockResourceLoader *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2726968;
  v2 = (void (*)(void))*((_DWORD *)this + 3);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall UIMockResourceLoader::UIMockResourceLoader(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r1@1
  void *v5; // [sp+0h] [bp-18h]@1
  int (__fastcall *v6)(void **, void **, int); // [sp+8h] [bp-10h]@1
  int *(__fastcall *v7)(int *); // [sp+Ch] [bp-Ch]@1

  v1 = a1;
  v5 = operator new(1u);
  v6 = sub_1080BB8;
  v7 = sub_1080BA4;
  *(_DWORD *)v1 = &off_2726968;
  *(_DWORD *)(v1 + 12) = 0;
  v2 = operator new(1u);
  LODWORD(v3) = sub_1080BB8;
  *(_DWORD *)(v1 + 4) = v2;
  HIDWORD(v3) = sub_1080BA4;
  *(_QWORD *)(v1 + 12) = v3;
  sub_1080BB8(&v5, &v5, 3);
  *(_DWORD *)v1 = &off_26DF344;
  return v1;
}


void __fastcall UIMockResourceLoader::loadAllVersionsOf(UIMockResourceLoader *this, const ResourceLocation *a2, int a3)
{
  UIMockResourceLoader::loadAllVersionsOf(this, a2, a3);
}


int __fastcall UIMockResourceLoader::loadRawTexture(UIMockResourceLoader *this, const ResourceLocation *a2)
{
  UIMockResourceLoader *v2; // r4@1
  int result; // r0@1

  v2 = this;
  _aeabi_memclr4(this, 56);
  *((_DWORD *)v2 + 3) = &unk_28898CC;
  result = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 1;
  *((_BYTE *)v2 + 32) = 0;
  *((_DWORD *)v2 + 9) = 1;
  *((_DWORD *)v2 + 10) = 1;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 8;
  *((_BYTE *)v2 + 52) = 0;
  return result;
}


int __fastcall UIMockResourceLoader::loadTexture(UIMockResourceLoader *this, const ResourceLocation *a2)
{
  UIMockResourceLoader *v2; // r4@1
  int result; // r0@1

  v2 = this;
  _aeabi_memclr4(this, 56);
  *((_DWORD *)v2 + 3) = &unk_28898CC;
  result = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 1;
  *((_BYTE *)v2 + 32) = 0;
  *((_DWORD *)v2 + 9) = 1;
  *((_DWORD *)v2 + 10) = 1;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 8;
  *((_BYTE *)v2 + 52) = 0;
  return result;
}


void __fastcall UIMockResourceLoader::~UIMockResourceLoader(UIMockResourceLoader *this)
{
  UIMockResourceLoader::~UIMockResourceLoader(this);
}
