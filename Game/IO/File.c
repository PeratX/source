

int __fastcall File::cleanPath(int a1, __int64 *a2)
{
  int result; // r0@1
  __int64 v3; // [sp+0h] [bp-28h]@1
  char v4; // [sp+Ch] [bp-1Ch]@1
  int (*v5)(void); // [sp+14h] [bp-14h]@1
  unsigned __int8 v6; // [sp+1Ch] [bp-Ch]@1

  *(_DWORD *)a1 = 1023;
  *(_DWORD *)(a1 + 1028) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  v3 = *a2;
  Core::FileSystem::cleanPath_deprecated((int)&v4, a1, &v3);
  result = v6 | 2;
  v6 |= 2u;
  if ( v5 )
    result = v5();
  return result;
}


int *__fastcall File::writeCreateOrAppendFileData(int a1, __int64 *a2, unsigned int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  int v6; // r4@1
  unsigned int v7; // r6@1
  unsigned int v8; // r5@1
  char v9; // r0@1
  __int64 v10; // r1@2
  char v11; // r0@3
  char v12; // r1@3
  __int64 v13; // r2@4
  __int64 v14; // kr00_8@4
  signed int v15; // r2@5
  signed int v16; // r0@5
  __int64 v17; // r1@12
  char v18; // r0@14
  __int64 v19; // r1@15
  char v20; // r0@16
  __int64 v21; // r1@17
  void (*v22)(void); // r3@18
  __int64 v24; // [sp+8h] [bp-98h]@16
  void (*v25)(void); // [sp+10h] [bp-90h]@17
  int v26; // [sp+14h] [bp-8Ch]@17
  char v27; // [sp+18h] [bp-88h]@16
  __int64 v28; // [sp+20h] [bp-80h]@14
  void (*v29)(void); // [sp+28h] [bp-78h]@15
  int v30; // [sp+2Ch] [bp-74h]@15
  char v31; // [sp+30h] [bp-70h]@14
  char v32; // [sp+38h] [bp-68h]@3
  int v33; // [sp+3Ch] [bp-64h]@4
  void (__cdecl *v34)(char *); // [sp+40h] [bp-60h]@4
  int v35; // [sp+44h] [bp-5Ch]@4
  char v36; // [sp+48h] [bp-58h]@3
  unsigned int v37; // [sp+50h] [bp-50h]@3
  unsigned int v38; // [sp+54h] [bp-4Ch]@3
  __int64 v39; // [sp+58h] [bp-48h]@1
  __int64 v40; // [sp+60h] [bp-40h]@1
  void (__cdecl *v41)(__int64 *); // [sp+68h] [bp-38h]@2
  int v42; // [sp+6Ch] [bp-34h]@2
  char v43; // [sp+70h] [bp-30h]@1
  unsigned __int64 *v44; // [sp+78h] [bp-28h]@1
  int v45; // [sp+7Ch] [bp-24h]@1
  _DWORD *v46; // [sp+80h] [bp-20h]@12
  __int64 v47; // [sp+88h] [bp-18h]@12

  v6 = a1;
  v44 = 0;
  v45 = 0;
  v7 = a3;
  v8 = a4;
  v39 = *a2;
  Core::File::open((int)&v40, (int)&v44, &v39, 54);
  v9 = v43;
  if ( v43 & 1 )
  {
    v43 |= 2u;
    v37 = 0;
    v38 = 0;
    Core::FileImpl::getSize((Core::FileImpl *)&v32, v44);
    v11 = v36;
    v12 = v36 | 2;
    v36 |= 2u;
    if ( v11 & 1 )
    {
      v15 = 0;
      v16 = 0;
      if ( v37 >= v7 )
        v16 = 1;
      if ( v38 >= v8 )
        v15 = 1;
      if ( v38 == v8 )
        v15 = v16;
      if ( v15 )
      {
        Core::FileImpl::setPosition((Core::FileImpl *)&v28, (int)v44, __PAIR__(v8, v7));
        v18 = v31;
        if ( v31 & 1 )
        {
          v31 |= 2u;
          Core::FileImpl::write((Core::FileImpl *)&v24, v44, __PAIR__(HIDWORD(a5), a6), a5);
          v20 = v27;
          if ( v27 & 1 )
          {
            v27 |= 2u;
            v22 = v25;
            *(_DWORD *)(v6 + 8) = 0;
            *(_BYTE *)(v6 + 16) = *(_BYTE *)(v6 + 16) & 0xFC | 1;
            if ( v22 )
              v22();
          }
          else
            v21 = v24;
            v24 = *(_QWORD *)v6;
            *(_QWORD *)v6 = v21;
            LODWORD(v21) = v25;
            v25 = 0;
            *(_DWORD *)(v6 + 8) = v21;
            LODWORD(v21) = *(_DWORD *)(v6 + 12);
            *(_DWORD *)(v6 + 12) = v26;
            v26 = v21;
            LOBYTE(v21) = *(_BYTE *)(v6 + 16);
            v27 = v20 | 3;
            *(_BYTE *)(v6 + 16) = v21 & 0xFC | v20 & 3;
          if ( v29 )
            v29();
        }
        else
          v19 = v28;
          v28 = *(_QWORD *)v6;
          *(_QWORD *)v6 = v19;
          LODWORD(v19) = v29;
          v29 = 0;
          *(_DWORD *)(v6 + 8) = v19;
          LODWORD(v19) = *(_DWORD *)(v6 + 12);
          *(_DWORD *)(v6 + 12) = v30;
          v30 = v19;
          LOBYTE(v19) = *(_BYTE *)(v6 + 16);
          v31 = v18 | 3;
          *(_BYTE *)(v6 + 16) = v19 & 0xFC | v18 & 3;
      }
      else
        v46 = operator new(4u);
        LODWORD(v17) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
        HIDWORD(v17) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
        *v46 = "offset > fileSize";
        v47 = v17;
        Core::Result::makeFailure(v6, (int)&v46);
        if ( (_DWORD)v47 )
          ((void (__cdecl *)(_DWORD **))v47)(&v46);
    }
    else
      v13 = *(_QWORD *)&v32;
      v14 = *(_QWORD *)v6;
      *(_DWORD *)&v32 = *(_QWORD *)v6;
      v33 = HIDWORD(v14);
      *(_QWORD *)v6 = v13;
      LODWORD(v13) = v34;
      v34 = 0;
      *(_DWORD *)(v6 + 8) = v13;
      LODWORD(v13) = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(v6 + 12) = v35;
      v35 = v13;
      LOBYTE(v13) = *(_BYTE *)(v6 + 16);
      v36 = v11 | 3;
      *(_BYTE *)(v6 + 16) = v12 & 3 | v13 & 0xFC;
    if ( v34 )
      v34(&v32);
    if ( v41 )
      v41(&v40);
  }
  else
    v10 = v40;
    v40 = *(_QWORD *)v6;
    *(_QWORD *)v6 = v10;
    LODWORD(v10) = v41;
    v41 = 0;
    *(_DWORD *)(v6 + 8) = v10;
    LODWORD(v10) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = v42;
    v42 = v10;
    LOBYTE(v10) = *(_BYTE *)(v6 + 16);
    v43 = v9 | 3;
    *(_BYTE *)(v6 + 16) = v10 & 0xFC | v9 & 3;
  return Core::File::~File((Core::File *)&v44);
}


int *__fastcall File::writeCreateOrAppendFileData(int a1, __int64 *a2, unsigned int a3, unsigned int a4, __int64 a5, unsigned int *a6)
{
  __int64 v7; // [sp+10h] [bp-18h]@1

  v7 = *a2;
  return File::writeCreateOrAppendFileData(a1, &v7, a3, a4, a5, *a6);
}


int __fastcall File::cleanPathSeparators(int a1, __int64 *a2)
{
  int result; // r0@1
  __int64 v3; // [sp+0h] [bp-28h]@1
  char v4; // [sp+Ch] [bp-1Ch]@1
  int (*v5)(void); // [sp+14h] [bp-14h]@1
  unsigned __int8 v6; // [sp+1Ch] [bp-Ch]@1

  *(_DWORD *)a1 = 1023;
  *(_DWORD *)(a1 + 1028) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  v3 = *a2;
  Core::FileSystem::cleanPathSeparators_deprecated((int)&v4, a1, (int)&v3);
  result = v6 | 2;
  v6 |= 2u;
  if ( v5 )
    result = v5();
  return result;
}


struct tm *__fastcall File::getLastModifiedDateAsLocalTime(File *this, __int32 a2)
{
  time_t timer; // [sp+4h] [bp-Ch]@1

  timer = (time_t)this;
  return localtime(&timer);
}
