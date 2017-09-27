

void __fastcall FilePathManager::getWorldsPath(FilePathManager *this, int a2)
{
  FilePathManager *v2; // r4@1
  const void **v3; // r0@3
  void *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // [sp+0h] [bp-18h]@3

  v2 = this;
  if ( *(_BYTE *)(a2 + 28) )
  {
    sub_21E8AF4((int *)this, (int *)&FilePathManager::REALM_WORLDS_DIR);
  }
  else
    sub_21E8AF4(&v7, (int *)a2);
    sub_21E72F0((const void **)&v7, (const void **)&FilePathManager::HOME_DIR);
    v3 = sub_21E72F0((const void **)&v7, (const void **)&FilePathManager::WORLDS_DIR);
    *(_DWORD *)v2 = *v3;
    *v3 = &unk_28898CC;
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
}


const void **__fastcall FilePathManager::getResourcePacksPath(FilePathManager *this, int a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4((int *)this, (int *)(a2 + 8));
  return sub_21E72F0((const void **)v2, (const void **)&FilePathManager::RESOURCE_PACKS_DIR);
}


void *__fastcall FilePathManager::getUserDataPath(FilePathManager *this, int a2)
{
  void *result; // r0@2
  int *v3; // r0@3

  if ( *(_BYTE *)(a2 + 28) )
  {
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  }
  else
    v3 = sub_21E8AF4((int *)this, (int *)a2);
    result = sub_21E72F0((const void **)v3, (const void **)&FilePathManager::HOME_DIR);
  return result;
}


const void **__fastcall FilePathManager::getHomePath(FilePathManager *this, int *a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4((int *)this, a2);
  return sub_21E72F0((const void **)v2, (const void **)&FilePathManager::HOME_DIR);
}


FilePathManager *__fastcall FilePathManager::~FilePathManager(FilePathManager *this)
{
  FilePathManager *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int *v14; // r0@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v4 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v6 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v8 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 2);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v10 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v12 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (int *)(*(_DWORD *)v1 - 12);
  if ( v14 != &dword_28898C0 )
    v28 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v1;
}


void __fastcall FilePathManager::getLevelArchivePath(FilePathManager *this, int *a2)
{
  FilePathManager *v2; // r4@1
  const void **v3; // r0@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+0h] [bp-18h]@1

  v2 = this;
  sub_21E8AF4(&v7, a2);
  sub_21E72F0((const void **)&v7, (const void **)&FilePathManager::HOME_DIR);
  v3 = sub_21E72F0((const void **)&v7, (const void **)&FilePathManager::ARCHIVE_DIR);
  *(_DWORD *)v2 = *v3;
  *v3 = &unk_28898CC;
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall FilePathManager::getLevelArchivePath(FilePathManager *this, int *a2)
{
  FilePathManager::getLevelArchivePath(this, a2);
}


void __fastcall FilePathManager::getWorldsPath(FilePathManager *this, int a2)
{
  FilePathManager::getWorldsPath(this, a2);
}


int *__fastcall FilePathManager::FilePathManager(int a1, int *a2, char a3)
{
  int *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-18h]@1

  v3 = (int *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  *(_BYTE *)(a1 + 28) = a3;
  sub_21E8AF4(&v8, a2);
  EntityInteraction::setInteractText(v3, &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v3;
}
