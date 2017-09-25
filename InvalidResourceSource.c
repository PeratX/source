

InvalidResourceSource *__fastcall InvalidResourceSource::~InvalidResourceSource(InvalidResourceSource *this)
{
  InvalidResourceSource *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r0@16
  void *v8; // r0@18

  v1 = this;
  *(_DWORD *)this = &off_26E5058;
  v3 = (void *)(*((_QWORD *)this + 5) >> 32);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 8;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 10);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (void *)*((_DWORD *)v1 + 7);
  if ( v7 )
    operator delete(v7);
  *(_DWORD *)v1 = &off_26E5018;
  v8 = (void *)*((_DWORD *)v1 + 1);
  if ( v8 )
    operator delete(v8);
  return v1;
}


void __fastcall InvalidResourceSource::load(InvalidResourceSource *this)
{
  InvalidResourceSource::load(this);
}


void __fastcall InvalidResourceSource::load(InvalidResourceSource *this)
{
  InvalidResourceSource *v1; // r5@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r4@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r4@15
  int v8; // r6@15
  unsigned int *v9; // r2@17
  signed int v10; // r1@19
  int *v11; // r0@25
  void *v12; // [sp+4h] [bp-34h]@1
  void *v13; // [sp+8h] [bp-30h]@1
  int v14; // [sp+Ch] [bp-2Ch]@1

  v1 = this;
  ResourcePackRepository::getInvalidPacks(
    (ResourcePackRepository *)&v12,
    *((const InvalidPacksFilterGroup **)this + 6),
    (InvalidResourceSource *)((char *)this + 28));
  v2 = *((_QWORD *)v1 + 5);
  *((_DWORD *)v1 + 10) = v12;
  v12 = 0;
  *((_DWORD *)v1 + 11) = v13;
  v13 = 0;
  *((_DWORD *)v1 + 12) = v14;
  v14 = 0;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v3 += 2;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  v8 = (int)v13;
  v7 = v12;
  if ( v12 != v13 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 8;
    while ( v7 != (void *)v8 );
    v7 = v12;
  if ( v7 )
    operator delete(v7);
}


signed int __fastcall InvalidResourceSource::invalidPacksChanged(InvalidResourceSource *this)
{
  InvalidResourceSource *v1; // r5@1
  void *v2; // r4@1
  void *v3; // r7@1
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r5@3
  size_t v7; // r2@4
  signed int v8; // r9@8
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  int *v11; // r0@20
  void *v13; // [sp+0h] [bp-30h]@1
  void *v14; // [sp+4h] [bp-2Ch]@1

  v1 = this;
  ResourcePackRepository::getInvalidPacks(
    (ResourcePackRepository *)&v13,
    *((const InvalidPacksFilterGroup **)this + 6),
    (InvalidResourceSource *)((char *)this + 28));
  v3 = v14;
  v2 = v13;
  v5 = *((_QWORD *)v1 + 5) >> 32;
  v4 = *((_QWORD *)v1 + 5);
  if ( v5 - v4 == (_BYTE *)v14 - (_BYTE *)v13 )
  {
    if ( v4 == v5 )
    {
LABEL_8:
      v8 = 0;
    }
    else
      v6 = (int)v13;
      while ( 1 )
      {
        v7 = *(_DWORD *)(*(_DWORD *)v4 - 12);
        if ( v7 != *(_DWORD *)(*(_DWORD *)v6 - 12) )
        {
          v8 = 1;
          goto LABEL_10;
        }
        if ( memcmp(*(const void **)v4, *(const void **)v6, v7) )
        if ( *(_DWORD *)(v4 + 4) != *(_DWORD *)(v6 + 4) )
          break;
        v4 += 8;
        v6 += 8;
        if ( v4 == v5 )
          goto LABEL_8;
      }
      v8 = 1;
  }
  else
    v8 = 1;
LABEL_10:
  if ( v2 != v3 )
    do
      v11 = (int *)(*(_DWORD *)v2 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v2 = (char *)v2 + 8;
    while ( v2 != v3 );
    v2 = v13;
  if ( v2 )
    operator delete(v2);
  return v8;
}


void __fastcall InvalidResourceSource::~InvalidResourceSource(InvalidResourceSource *this)
{
  InvalidResourceSource::~InvalidResourceSource(this);
}


int __fastcall InvalidResourceSource::InvalidResourceSource(int a1, int a2, __int64 *a3)
{
  int v3; // r4@1
  __int64 *v4; // r6@1
  char *v5; // r5@1
  __int64 v6; // r0@1
  int v7; // r7@1
  __int64 v8; // kr00_8@3

  v3 = a1;
  v4 = a3;
  v5 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = &off_26E5058;
  *(_DWORD *)(a1 + 24) = a2;
  v6 = *a3;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  v7 = HIDWORD(v6) - v6;
  *(_DWORD *)(v3 + 36) = 0;
  if ( HIDWORD(v6) != (_DWORD)v6 )
    v5 = (char *)operator new(HIDWORD(v6) - v6);
  *(_DWORD *)(v3 + 28) = v5;
  *(_DWORD *)(v3 + 32) = v5;
  *(_DWORD *)(v3 + 36) = &v5[v7];
  v8 = *v4;
  if ( HIDWORD(v8) != (_DWORD)v8 )
    _aeabi_memmove(v5, v8);
  *(_DWORD *)(v3 + 32) = &v5[HIDWORD(v8) - v8];
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  return v3;
}


RakNet *__fastcall InvalidResourceSource::generateItems(InvalidResourceSource *this, int a2)
{
  InvalidResourceSource *v2; // r10@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // r11@20
  void *v11; // r0@20
  int v12; // r7@21
  void *v13; // r0@21
  int v14; // r7@22
  __int64 v15; // r0@22
  __int64 v16; // r0@22
  RakNet *result; // r0@30
  int v18; // [sp+Ch] [bp-47Ch]@2
  int v19; // [sp+18h] [bp-470h]@7
  int v20; // [sp+1Ch] [bp-46Ch]@21
  int v21; // [sp+20h] [bp-468h]@21
  char v22; // [sp+24h] [bp-464h]@21
  void (*v23)(void); // [sp+2Ch] [bp-45Ch]@25
  int v24; // [sp+38h] [bp-450h]@20
  int v25; // [sp+3Ch] [bp-44Ch]@20
  int v26; // [sp+40h] [bp-448h]@3
  int v27; // [sp+44h] [bp-444h]@20
  int v28; // [sp+48h] [bp-440h]@19
  int v29; // [sp+4Ch] [bp-43Ch]@19
  char v30; // [sp+58h] [bp-430h]@20
  int v31; // [sp+5Ch] [bp-42Ch]@20
  RakNet *v32; // [sp+460h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v32 = _stack_chk_guard;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)(a2 + 40) >> 32;
  v5 = *(_QWORD *)(a2 + 40);
  if ( v5 != v4 )
  {
    v18 = a2 + 28;
    do
    {
      v28 = *(_DWORD *)v5;
      v29 = *(_DWORD *)(v28 - 12);
      if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v28) )
      {
        v10 = operator new(0x50u);
        InvalidResourceItem::InvalidResourceItem((int)v10, v3);
        v27 = (int)v10;
        v24 = *(_DWORD *)v5;
        v25 = *(_DWORD *)(v24 - 12);
        Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v30, (__int64 *)&v24);
        sub_21E94B4((void **)&v26, (const char *)&v31);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)v10 + 4,
          &v26);
        v11 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
        {
          v6 = (unsigned int *)(v26 - 4);
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
        v12 = v27;
        *(_DWORD *)(v27 + 32) = 0;
        *(_DWORD *)(v12 + 36) = 0;
        *(_DWORD *)(v12 + 48) = 2;
        *(_DWORD *)(v12 + 52) = 0;
        *(_DWORD *)(v12 + 24) = 0;
        v12 += 24;
        *(_DWORD *)(v12 + 4) = 0;
        ResourceLocation::getFullPath((ResourceLocation *)&v19, v5);
        v20 = v19;
        v21 = *(_DWORD *)(v19 - 12);
        Core::FileSystem::getFileOrDirectorySize((int)&v22, (__int64 *)&v20, v12);
        v13 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v19 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v14 = v27;
        EntityInteraction::setInteractText((int *)(v27 + 60), (int *)v5);
        *(_DWORD *)(v14 + 64) = *(_DWORD *)(v5 + 4);
        HIDWORD(v15) = v18;
        LODWORD(v15) = v14 + 68;
        std::vector<PackType,std::allocator<PackType>>::operator=(v15);
        v16 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          std::vector<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>,std::allocator<std::unique_ptr<ContentItem,std::default_delete<ContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<InvalidResourceItem,std::default_delete<InvalidResourceItem>>>(
            v2,
            &v27);
        else
          v27 = 0;
          *(_DWORD *)v16 = v14;
          *((_DWORD *)v2 + 1) = v16 + 4;
        if ( v23 )
          v23();
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      }
      v5 += 8;
    }
    while ( v5 != v4 );
  }
  result = (RakNet *)(_stack_chk_guard - v32);
  if ( _stack_chk_guard != v32 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall InvalidResourceSource::deleteContent(int a1, unsigned __int64 *a2)
{
  InvalidResourceSource::deleteContent(a1, a2);
}


void __fastcall InvalidResourceSource::~InvalidResourceSource(InvalidResourceSource *this)
{
  InvalidResourceSource *v1; // r0@1

  v1 = InvalidResourceSource::~InvalidResourceSource(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall InvalidResourceSource::deleteContent(int a1, unsigned __int64 *a2)
{
  _DWORD *i; // r4@1
  _DWORD *v3; // r8@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@16
  int v7; // [sp+4h] [bp-6Ch]@14
  int v8; // [sp+8h] [bp-68h]@14
  char v9; // [sp+Ch] [bp-64h]@14
  void (__fastcall *v10)(char *, char *, signed int); // [sp+14h] [bp-5Ch]@14
  int v11; // [sp+20h] [bp-50h]@12
  int v12; // [sp+24h] [bp-4Ch]@12
  char v13; // [sp+28h] [bp-48h]@12
  void (__fastcall *v14)(char *, char *, signed int); // [sp+30h] [bp-40h]@12
  int v15; // [sp+3Ch] [bp-34h]@11
  int v16; // [sp+40h] [bp-30h]@11
  int v17; // [sp+44h] [bp-2Ch]@3

  v3 = (_DWORD *)(*a2 >> 32);
  for ( i = (_DWORD *)*a2; i != v3; ++i )
  {
    ResourceLocation::getFullPath((ResourceLocation *)&v17, *i + 60);
    v15 = v17;
    v16 = *(_DWORD *)(v17 - 12);
    if ( Core::FileSystem::directoryExists((__int64 *)&v15) == 1 )
    {
      v11 = v17;
      v12 = *(_DWORD *)(v17 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v13, (__int64 *)&v11);
      if ( v14 )
        v14(&v13, &v13, 3);
    }
    else
      v7 = v17;
      v8 = *(_DWORD *)(v17 - 12);
      Core::FileSystem::deleteFile((int)&v9, (__int64 *)&v7);
      if ( v10 )
        v10(&v9, &v9, 3);
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v4 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
  }
}
