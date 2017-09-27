

int __fastcall Resource::loadTexture(Resource *this, const ResourceLocation *a2)
{
  Resource *v2; // r4@1
  const ResourceLocation *v3; // r12@1
  int v4; // r2@1
  int v5; // r1@2
  int *v6; // r3@2
  int *v7; // r0@3
  void *v8; // r0@12
  int result; // r0@13
  unsigned int *v10; // r12@15
  signed int v11; // r1@17
  int v12; // [sp+0h] [bp-10h]@12

  v2 = this;
  v3 = a2;
  v4 = dword_287E71C;
  if ( dword_287E71C )
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = &dword_287E718;
    do
    {
      v7 = (int *)v4;
      while ( v7[4] < v5 )
      {
        v7 = (int *)v7[3];
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = v7[2];
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = &dword_287E718;
LABEL_10:
  if ( v7 != &dword_287E718 && *((_DWORD *)v3 + 1) >= v7[4] )
    result = (*(int (__fastcall **)(Resource *))(*(_DWORD *)v7[5] + 20))(v2);
    j_ResourceLocation::getFullPath((ResourceLocation *)&v12, (int)v3);
    v8 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    j___aeabi_memclr4_0((int)v2, 56);
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


int __fastcall Resource::load(int a1)
{
  int v1; // lr@1
  int v2; // r1@1
  int v3; // r3@2
  int *v4; // r2@2
  int *v5; // r0@3
  int result; // r0@12

  v1 = a1;
  v2 = dword_287E71C;
  if ( dword_287E71C )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = &dword_287E718;
    do
    {
      v5 = (int *)v2;
      while ( v5[4] < v3 )
      {
        v5 = (int *)v5[3];
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = v5[2];
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = &dword_287E718;
LABEL_10:
  if ( v5 != &dword_287E718 && *(_DWORD *)(v1 + 4) >= v5[4] )
    result = (*(int (**)(void))(*(_DWORD *)v5[5] + 8))();
    result = 0;
  return result;
}


__int64 __fastcall Resource::clearLoaders(Resource *this)
{
  __int64 result; // r0@1

  j_std::_Rb_tree<ResourceFileSystem,std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>,std::_Select1st<std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>>,std::less<ResourceFileSystem>,std::allocator<std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>>>::_M_erase(
    (int)&unk_287E714,
    dword_287E71C);
  result = (unsigned int)&dword_287E718;
  dword_287E71C = 0;
  unk_287E720 = &dword_287E718;
  unk_287E724 = (unsigned int)&dword_287E718;
  return result;
}


int __fastcall Resource::getPathContainingResource(int result, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r12@1
  int v3; // r2@1
  int v4; // r3@2
  int *v5; // lr@2
  int *v6; // r1@3

  v2 = a2;
  v3 = dword_287E71C;
  if ( dword_287E71C )
  {
    v4 = *((_DWORD *)a2 + 1);
    v5 = &dword_287E718;
    do
    {
      v6 = (int *)v3;
      while ( v6[4] < v4 )
      {
        v6 = (int *)v6[3];
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v3 = v6[2];
      v5 = v6;
    }
    while ( v3 );
  }
  else
    v6 = &dword_287E718;
LABEL_10:
  if ( v6 != &dword_287E718 && *((_DWORD *)v2 + 1) >= v6[4] )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6[5] + 44))(result);
    *(_DWORD *)result = &unk_28898CC;
  return result;
}


int __fastcall Resource::registerLoader(int a1, int *a2)
{
  char v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+Ch] [bp-Ch]@1

  v4 = a1;
  return j_std::_Rb_tree<ResourceFileSystem,std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>,std::_Select1st<std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>>,std::less<ResourceFileSystem>,std::allocator<std::pair<ResourceFileSystem const,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>>>::_M_emplace_unique<ResourceFileSystem&,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>>(
           (int)&v3,
           (int)&unk_287E714,
           &v4,
           a2);
}


int __fastcall Resource::getPath(int result, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r12@1
  int v3; // r2@1
  int v4; // r3@2
  int *v5; // lr@2
  int *v6; // r1@3

  v2 = a2;
  v3 = dword_287E71C;
  if ( dword_287E71C )
  {
    v4 = *((_DWORD *)a2 + 1);
    v5 = &dword_287E718;
    do
    {
      v6 = (int *)v3;
      while ( v6[4] < v4 )
      {
        v6 = (int *)v6[3];
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v3 = v6[2];
      v5 = v6;
    }
    while ( v3 );
  }
  else
    v6 = &dword_287E718;
LABEL_10:
  if ( v6 != &dword_287E718 && *((_DWORD *)v2 + 1) >= v6[4] )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6[5] + 36))(result);
    *(_DWORD *)result = &unk_28898CC;
  return result;
}


int __fastcall Resource::loadRawTexture(Resource *this, const ResourceLocation *a2)
{
  Resource *v2; // r4@1
  const ResourceLocation *v3; // r12@1
  int v4; // r2@1
  int v5; // r1@2
  int *v6; // r3@2
  int *v7; // r0@3
  void *v8; // r0@12
  int result; // r0@13
  unsigned int *v10; // r12@15
  signed int v11; // r1@17
  int v12; // [sp+0h] [bp-10h]@12

  v2 = this;
  v3 = a2;
  v4 = dword_287E71C;
  if ( dword_287E71C )
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = &dword_287E718;
    do
    {
      v7 = (int *)v4;
      while ( v7[4] < v5 )
      {
        v7 = (int *)v7[3];
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = v7[2];
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = &dword_287E718;
LABEL_10:
  if ( v7 != &dword_287E718 && *((_DWORD *)v3 + 1) >= v7[4] )
    result = (*(int (__fastcall **)(Resource *))(*(_DWORD *)v7[5] + 24))(v2);
    j_ResourceLocation::getFullPath((ResourceLocation *)&v12, (int)v3);
    v8 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    j___aeabi_memclr4_0((int)v2, 56);
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
