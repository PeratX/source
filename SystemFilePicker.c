

void __fastcall SystemFilePicker::_fillFileInfo(int a1, int a2, int *a3)
{
  SystemFilePicker::_fillFileInfo(a1, a2, a3);
}


void __fastcall SystemFilePicker::initFilePick(int a1, int *a2, int a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r1@2
  void *v7; // r0@3
  void *v8; // r0@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int *v11; // r0@9
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@46
  signed int v22; // r1@48
  int v23; // [sp+4h] [bp-5Ch]@9
  int v24; // [sp+Ch] [bp-54h]@9
  int v25; // [sp+10h] [bp-50h]@9
  int v26; // [sp+18h] [bp-48h]@9
  int v27; // [sp+1Ch] [bp-44h]@9
  int v28; // [sp+20h] [bp-40h]@9
  int v29; // [sp+28h] [bp-38h]@3
  int v30; // [sp+38h] [bp-28h]@3
  int v31; // [sp+44h] [bp-1Ch]@2
  int v32; // [sp+48h] [bp-18h]@2

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  if ( *(_DWORD *)(*a2 - 12)
    && (v31 = *a2, v32 = *(_DWORD *)(v5 - 12), Core::FileSystem::fileOrDirectoryExists((__int64 *)&v31) == 1) )
  {
    SystemFilePicker::_fillFileInfo((int)&v29, v6, v3);
    std::function<void ()(bool,FileInfo)>::operator()(v4, 1, (int)&v29);
    v7 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v21 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v29 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_31;
LABEL_30:
      v10 = (*v9)--;
LABEL_31:
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
      return;
  }
  else
    sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
    sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
    v11 = sub_21E8AF4(&v25, &v24);
    v26 = 0;
    v27 = 0;
    sub_21E8AF4(v11 + 4, &v23);
    std::function<void ()(bool,FileInfo)>::operator()(v4, 0, (int)&v25);
    v12 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v28 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v25 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v24 - 4);
      goto LABEL_30;
}


int __fastcall SystemFilePicker::writeBytes(int a1, int *a2, unsigned int a3, unsigned int a4, __int64 a5, unsigned int *a6)
{
  int *v6; // r6@1
  unsigned int v7; // r4@1
  int v8; // r0@1
  unsigned int v9; // r5@1
  char v10; // r0@3
  int v11; // r4@3
  int v13; // [sp+Ch] [bp-34h]@3
  int v14; // [sp+10h] [bp-30h]@3
  char v15; // [sp+14h] [bp-2Ch]@3
  void (*v16)(void); // [sp+1Ch] [bp-24h]@3
  char v17; // [sp+24h] [bp-1Ch]@3
  int v18; // [sp+28h] [bp-18h]@2
  int v19; // [sp+2Ch] [bp-14h]@2

  v6 = a2;
  v7 = a4;
  v8 = *a2;
  v9 = a3;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    v18 = *a2;
    v19 = *(_DWORD *)(v8 - 12);
    if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v18) == 1 )
    {
      v13 = *v6;
      v14 = *(_DWORD *)(v13 - 12);
      File::writeCreateOrAppendFileData((int)&v15, (__int64 *)&v13, v9, v7, a5, a6);
      v10 = v17;
      v17 |= 2u;
      v11 = v10 & 1;
      if ( v16 )
        v16();
    }
    else
      v11 = 0;
  }
  else
    v11 = 0;
  return v11;
}


void __fastcall SystemFilePicker::_fillFileInfo(int a1, int a2, int *a3)
{
  int *v3; // r5@1
  int v4; // r8@1
  void *v5; // r0@1
  void *v6; // r0@2
  int v7; // r0@3
  void *v8; // r0@5
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  int v15; // [sp+4h] [bp-54h]@5
  int v16; // [sp+8h] [bp-50h]@5
  int v17; // [sp+Ch] [bp-4Ch]@5
  char v18; // [sp+10h] [bp-48h]@5
  void (*v19)(void); // [sp+18h] [bp-40h]@6
  int v20; // [sp+24h] [bp-34h]@4
  int v21; // [sp+28h] [bp-30h]@4
  int v22; // [sp+30h] [bp-28h]@1
  int v23; // [sp+38h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  sub_21E8AF4((int *)v4, &v23);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  sub_21E8AF4((int *)(v4 + 16), &v22);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v23 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *v3;
  if ( *(_DWORD *)(*v3 - 12) )
    v20 = *v3;
    v21 = *(_DWORD *)(v7 - 12);
    if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v20) == 1 )
      EntityInteraction::setInteractText((int *)v4, v3);
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      v16 = *v3;
      v17 = *(_DWORD *)(v16 - 12);
      Core::FileSystem::getFileSize((int)&v18, (__int64 *)&v16, v4 + 8);
      CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&v15, v3);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v4 + 16),
        &v15);
      v8 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      if ( v19 )
        v19();
}


SystemFilePicker *__fastcall SystemFilePicker::~SystemFilePicker(SystemFilePicker *this)
{
  SystemFilePicker *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


signed __int64 __fastcall SystemFilePicker::readBytes(int a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int64 a5, int a6)
{
  int *v6; // r6@1
  unsigned int v7; // r4@1
  int v8; // r0@1
  unsigned int v9; // r5@1
  char v10; // r0@3
  signed __int64 v11; // r4@3
  int v13; // [sp+14h] [bp-44h]@3
  int v14; // [sp+18h] [bp-40h]@3
  char v15; // [sp+1Ch] [bp-3Ch]@3
  void (*v16)(void); // [sp+24h] [bp-34h]@5
  char v17; // [sp+2Ch] [bp-2Ch]@3
  __int64 v18; // [sp+30h] [bp-28h]@3
  int v19; // [sp+3Ch] [bp-1Ch]@2
  int v20; // [sp+40h] [bp-18h]@2

  v6 = a2;
  v7 = a4;
  v8 = *a2;
  v9 = a3;
  if ( *(_DWORD *)(*a2 - 12)
    && (v19 = *a2, v20 = *(_DWORD *)(v8 - 12), Core::FileSystem::fileOrDirectoryExists((__int64 *)&v19) == 1) )
  {
    v18 = 0LL;
    v13 = *v6;
    v14 = *(_DWORD *)(v13 - 12);
    Core::FileSystem::readFileData((int)&v15, (__int64 *)&v13, v9, v7, a5, a6, (unsigned __int64 *)&v18);
    v10 = v17;
    v17 |= 2u;
    v11 = v18;
    if ( !(v10 & 1) )
      v11 = -1LL;
    if ( v16 )
      v16();
  }
  else
    v11 = -1LL;
  return v11;
}


void __fastcall SystemFilePicker::~SystemFilePicker(SystemFilePicker *this)
{
  SystemFilePicker *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SystemFilePicker::SystemFilePicker(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26EC354;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall SystemFilePicker::~SystemFilePicker(SystemFilePicker *this)
{
  SystemFilePicker::~SystemFilePicker(this);
}


void __fastcall SystemFilePicker::initFilePick(int a1, int *a2, int a3)
{
  SystemFilePicker::initFilePick(a1, a2, a3);
}
