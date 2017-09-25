

void __fastcall CatalogPackManifest::~CatalogPackManifest(CatalogPackManifest *this)
{
  CatalogPackManifest::~CatalogPackManifest(this);
}


int __fastcall CatalogPackManifest::CatalogPackManifest(int a1)
{
  int result; // r0@1

  result = PackManifest::PackManifest(a1, 2);
  *(_DWORD *)result = &off_26EAB90;
  *(_DWORD *)(result + 176) = &unk_28898CC;
  return result;
}


int __fastcall CatalogPackManifest::setMinimumPerformanceRequirements(int result, int a2)
{
  *(_DWORD *)(result + 180) = a2;
  return result;
}


int __fastcall CatalogPackManifest::clone(CatalogPackManifest *this, int a2)
{
  CatalogPackManifest *v2; // r5@1
  int v3; // r6@1
  void *v4; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0xB8u);
  PackManifest::PackManifest((int)v4, v3);
  *(_DWORD *)v4 = &off_26EAB90;
  sub_21E8AF4((int *)v4 + 44, (int *)(v3 + 176));
  result = *(_DWORD *)(v3 + 180);
  *((_DWORD *)v4 + 45) = result;
  *(_DWORD *)v2 = v4;
  return result;
}


WorldTemplatePackManifest *__fastcall CatalogPackManifest::~CatalogPackManifest(CatalogPackManifest *this)
{
  WorldTemplatePackManifest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAB90;
  v2 = *((_DWORD *)this + 44);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  WorldTemplatePackManifest::~WorldTemplatePackManifest(v1);
  return v1;
}


void __fastcall CatalogPackManifest::~CatalogPackManifest(CatalogPackManifest *this)
{
  WorldTemplatePackManifest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAB90;
  v2 = *((_DWORD *)this + 44);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  WorldTemplatePackManifest::~WorldTemplatePackManifest(v1);
  operator delete((void *)v1);
}
