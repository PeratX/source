

_DWORD *__fastcall ResourceLoader::getPath(_DWORD *result)
{
  *result = &unk_28898CC;
  return result;
}


signed int __fastcall ResourceLoader::isInStreamableLocation(ResourceLoader *this, const ResourceLocation *a2)
{
  return 1;
}


int __fastcall ResourceLoader::getPathContainingResource(ResourceLoader *this, const ResourceLocation *a2)
{
  if ( !*((_DWORD *)a2 + 3) )
    sub_21E5F48();
  return (*((int (__fastcall **)(_DWORD, _DWORD))a2 + 4))(this, (char *)a2 + 4);
}


void __fastcall ResourceLoader::getPath(ResourceLoader *this, const ResourceLocation *a2, const void **a3)
{
  ResourceLoader *v3; // r4@1
  const void **v4; // r5@1
  const void **v5; // r0@2
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-18h]@2

  v3 = this;
  v4 = a3;
  if ( !*((_DWORD *)a2 + 3) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD))a2 + 4))(&v9, (char *)a2 + 4);
  v5 = sub_21E72F0((const void **)&v9, v4);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall ResourceLoader::~ResourceLoader(ResourceLoader *this)
{
  ResourceLoader *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2726968;
  v2 = (void (*)(void))*((_DWORD *)this + 3);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_7((void *)v1);
}


ResourceLoader *__fastcall ResourceLoader::~ResourceLoader(ResourceLoader *this)
{
  ResourceLoader *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2726968;
  v2 = (void (*)(void))*((_DWORD *)this + 3);
  if ( v2 )
    v2();
  return v1;
}


void __fastcall ResourceLoader::~ResourceLoader(ResourceLoader *this)
{
  ResourceLoader::~ResourceLoader(this);
}


void __fastcall ResourceLoader::getPath(ResourceLoader *this, const ResourceLocation *a2, const void **a3)
{
  ResourceLoader::getPath(this, a2, a3);
}


int __fastcall ResourceLoader::getPathContainingResource(int a1, int a2)
{
  if ( !*(_DWORD *)(a2 + 12) )
    sub_21E5F48();
  return (*(int (__fastcall **)(int, int))(a2 + 16))(a1, a2 + 4);
}
