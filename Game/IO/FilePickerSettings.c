

int __fastcall FilePickerSettings::addFileDescription(int a1, int *a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int *v6; // r6@1
  int *v7; // r0@1
  __int64 v8; // r0@1
  int v9; // r1@2
  void *v10; // r0@4
  char *v11; // r0@5
  int result; // r0@6
  bool v13; // zf@6
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  char *v18; // [sp+4h] [bp-2Ch]@1
  void *v19; // [sp+8h] [bp-28h]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = sub_21E8AF4((int *)&v18, a2);
  sub_21E8AF4(v7 + 1, v6);
  v8 = *(_QWORD *)(v4 + 52);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    std::vector<FilePickerSettings::FileDescription,std::allocator<FilePickerSettings::FileDescription>>::_M_emplace_back_aux<FilePickerSettings::FileDescription>(
      (unsigned __int64 *)(v4 + 48),
      (int)&v18);
    v9 = (int)v19;
  }
  else
    *(_DWORD *)v8 = v18;
    HIDWORD(v8) = &unk_28898CC;
    v18 = (char *)&unk_28898CC;
    *(_DWORD *)(v8 + 4) = v19;
    v19 = &unk_28898CC;
    *(_DWORD *)(v4 + 52) = v8 + 8;
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  result = *(_DWORD *)(v4 + 60);
  v13 = result == -1;
  if ( result != -1 )
    v13 = v5 == 1;
  if ( v13 )
    result = ((signed int)((*(_QWORD *)(v4 + 48) >> 32) - *(_QWORD *)(v4 + 48)) >> 3) - 1;
    *(_DWORD *)(v4 + 60) = result;
  return result;
}


char *__fastcall FilePickerSettings::getDefaultFileName(FilePickerSettings *this)
{
  return (char *)this + 68;
}


int __fastcall FilePickerSettings::setPickerType(int result, int a2)
{
  *(_DWORD *)(result + 64) = a2;
  return result;
}


int __fastcall FilePickerSettings::FilePickerSettings(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (*v4)(void); // r3@1
  void (__fastcall *v5)(int, int, signed int); // r3@3
  void (__fastcall *v6)(int, int, signed int); // r3@5

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = *(void (**)(void))(a2 + 8);
  if ( v4 )
  {
    v4();
    *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
  }
  *(_DWORD *)(v2 + 24) = 0;
  v5 = *(void (__fastcall **)(int, int, signed int))(v3 + 24);
  if ( v5 )
    v5(v2 + 16, v3 + 16, 2);
    *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v2 + 40) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(v3 + 40);
  if ( v6 )
    v6(v2 + 32, v3 + 32, 2);
    *(_DWORD *)(v2 + 44) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v3 + 40);
  std::vector<FilePickerSettings::FileDescription,std::allocator<FilePickerSettings::FileDescription>>::vector(
    v2 + 48,
    (unsigned __int64 *)(v3 + 48));
  *(_QWORD *)(v2 + 60) = *(_QWORD *)(v3 + 60);
  sub_DA73B4((int *)(v2 + 68), (int *)(v3 + 68));
  sub_DA73B4((int *)(v2 + 72), (int *)(v3 + 72));
  return v2;
}


FilePickerSettings *__fastcall FilePickerSettings::~FilePickerSettings(FilePickerSettings *this)
{
  FilePickerSettings *v1; // r11@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r5@3 OVERLAPPED
  int v7; // r6@3 OVERLAPPED
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // r1@21
  void *v13; // r0@21
  int *v14; // r0@22
  void (*v15)(void); // r3@27
  void (*v16)(void); // r3@29
  void (__fastcall *v17)(FilePickerSettings *, FilePickerSettings *, signed int); // r3@31
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40

  v1 = this;
  v2 = *((_DWORD *)this + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v4 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 6);
  if ( v6 != v7 )
    do
      v12 = *(_DWORD *)(v6 + 4);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      }
      v14 = (int *)(*(_DWORD *)v6 - 12);
      if ( v14 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v6 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
      v6 += 8;
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 12);
  if ( v6 )
    operator delete((void *)v6);
  v15 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v15 )
    v15();
  v16 = (void (*)(void))*((_DWORD *)v1 + 6);
  if ( v16 )
    v16();
  v17 = (void (__fastcall *)(FilePickerSettings *, FilePickerSettings *, signed int))*((_DWORD *)v1 + 2);
  if ( v17 )
    v17(v1, v1, 3);
  return v1;
}


int __fastcall FilePickerSettings::FilePickerSettings(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r1@1
  void *v4; // r6@1
  __int64 v5; // r0@1
  __int64 v6; // r2@1

  v1 = a1;
  v2 = operator new(1u);
  LODWORD(v3) = sub_15E77AA;
  *(_DWORD *)v1 = v2;
  HIDWORD(v3) = nullsub_9;
  *(_QWORD *)(v1 + 8) = v3;
  *(_DWORD *)(v1 + 24) = 0;
  v4 = operator new(1u);
  LODWORD(v5) = sub_15E780A;
  *(_DWORD *)(v1 + 16) = v4;
  HIDWORD(v5) = nullsub_10;
  *(_QWORD *)(v1 + 24) = v5;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 32) = operator new(1u);
  HIDWORD(v6) = nullsub_11;
  LODWORD(v6) = sub_15E77DA;
  *(_QWORD *)(v1 + 40) = v6;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = -1;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = &unk_28898CC;
  *(_DWORD *)(v1 + 72) = &unk_28898CC;
  return v1;
}


char *__fastcall FilePickerSettings::getFileDescriptions(FilePickerSettings *this)
{
  return (char *)this + 48;
}
