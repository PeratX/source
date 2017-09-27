

int __fastcall WorldTemplatePackManifest::WorldTemplatePackManifest(int a1, int a2)
{
  int result; // r0@1

  result = PackManifest::PackManifest(a1, a2);
  *(_DWORD *)result = &off_26EAB7C;
  *(_DWORD *)(result + 176) = -1;
  return result;
}


int __fastcall WorldTemplatePackManifest::WorldTemplatePackManifest(int a1)
{
  int result; // r0@1

  result = PackManifest::PackManifest(a1, 1);
  *(_DWORD *)result = &off_26EAB7C;
  *(_DWORD *)(result + 176) = -1;
  return result;
}


WorldTemplatePackManifest *__fastcall WorldTemplatePackManifest::~WorldTemplatePackManifest(WorldTemplatePackManifest *this)
{
  WorldTemplatePackManifest *v1; // r11@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r5@2 OVERLAPPED
  int v5; // r6@2 OVERLAPPED
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // r1@20
  void *v11; // r0@20
  int *v12; // r0@21
  ResourceInformation *v13; // r0@26
  ResourceInformation *v14; // r5@26
  int v15; // r1@31
  void *v16; // r0@31
  int v17; // r1@32
  void *v18; // r0@32
  int v19; // r1@33
  void *v20; // r0@33
  int v21; // r1@34
  void *v22; // r0@34
  int v23; // r1@35
  void *v24; // r0@35
  int v25; // r1@36
  void *v26; // r0@36
  int v27; // r1@37
  void *v28; // r0@37
  unsigned int *v30; // r2@39
  signed int v31; // r1@41
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@51
  signed int v37; // r1@53
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  unsigned int *v40; // r2@59
  signed int v41; // r1@61
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  unsigned int *v44; // r2@67
  signed int v45; // r1@69

  v1 = this;
  *(_DWORD *)this = &off_26EAB68;
  v2 = *((_DWORD *)this + 40);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  ResourceMetadata::~ResourceMetadata((WorldTemplatePackManifest *)((char *)v1 + 116));
  *(_QWORD *)&v4 = *((_QWORD *)v1 + 13);
  if ( v4 != v5 )
    do
      v10 = *(_DWORD *)(v4 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = (int *)(*(_DWORD *)v4 - 12);
      if ( v12 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v4 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v4 += 8;
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 26);
  if ( v4 )
    operator delete((void *)v4);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)((char *)v1 + 92));
  v14 = (ResourceInformation *)(*((_QWORD *)v1 + 10) >> 32);
  v13 = (ResourceInformation *)*((_QWORD *)v1 + 10);
  if ( v13 != v14 )
      v13 = (ResourceInformation *)((char *)ResourceInformation::~ResourceInformation(v13) + 56);
    while ( v14 != v13 );
    v13 = (ResourceInformation *)*((_DWORD *)v1 + 20);
  if ( v13 )
    operator delete((void *)v13);
  v15 = *((_DWORD *)v1 + 18);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v15 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *((_DWORD *)v1 + 17);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v17 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = *((_DWORD *)v1 + 16);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v19 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = *((_DWORD *)v1 + 12);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v21 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *((_DWORD *)v1 + 11);
  v24 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v23 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = *((_DWORD *)v1 + 10);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v25 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = *((_DWORD *)v1 + 1);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v27 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  return v1;
}


int __fastcall WorldTemplatePackManifest::clone(WorldTemplatePackManifest *this, int a2)
{
  WorldTemplatePackManifest *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r6@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0xB8u);
  PackManifest::PackManifest((int)v4, v3);
  *v4 = &off_26EAB7C;
  result = *(_DWORD *)(v3 + 176);
  v4[44] = result;
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall WorldTemplatePackManifest::~WorldTemplatePackManifest(WorldTemplatePackManifest *this)
{
  WorldTemplatePackManifest::~WorldTemplatePackManifest(this);
}


int __fastcall WorldTemplatePackManifest::setGameType(int result, int a2)
{
  *(_DWORD *)(result + 176) = a2;
  return result;
}


void __fastcall WorldTemplatePackManifest::~WorldTemplatePackManifest(WorldTemplatePackManifest *this)
{
  WorldTemplatePackManifest *v1; // r0@1

  v1 = WorldTemplatePackManifest::~WorldTemplatePackManifest(this);
  j_j_j__ZdlPv_5((void *)v1);
}
