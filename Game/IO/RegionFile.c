

signed int __fastcall RegionFile::open(RegionFile *this)
{
  RegionFile *v1; // r9@1
  int *v2; // r7@1
  signed int v3; // r4@4
  unsigned __int64 v4; // r2@4
  char v5; // r0@4
  char v6; // r0@5
  signed int v7; // r4@8
  unsigned int v8; // r5@11
  signed int v9; // r0@12
  bool v10; // zf@12
  signed int v11; // r8@15
  unsigned __int64 v12; // r2@19
  int v14; // [sp+10h] [bp-A0h]@21
  char v15; // [sp+14h] [bp-9Ch]@19
  void (*v16)(void); // [sp+1Ch] [bp-94h]@19
  unsigned __int64 v17; // [sp+28h] [bp-88h]@19
  int v18; // [sp+30h] [bp-80h]@5
  int v19; // [sp+34h] [bp-7Ch]@5
  char v20; // [sp+38h] [bp-78h]@5
  void (*v21)(void); // [sp+40h] [bp-70h]@6
  char v22; // [sp+48h] [bp-68h]@5
  int v23; // [sp+4Ch] [bp-64h]@16
  int v24; // [sp+50h] [bp-60h]@11
  char v25; // [sp+54h] [bp-5Ch]@9
  void (*v26)(void); // [sp+5Ch] [bp-54h]@9
  __int64 v27; // [sp+68h] [bp-48h]@9
  int v28; // [sp+70h] [bp-40h]@4
  int v29; // [sp+74h] [bp-3Ch]@4
  char v30; // [sp+78h] [bp-38h]@2
  void (*v31)(void); // [sp+80h] [bp-30h]@2
  char v32; // [sp+88h] [bp-28h]@2

  v1 = this;
  v2 = (int *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) )
  {
    j_Core::File::close((Core::File *)&v30, v2);
    v32 |= 2u;
    if ( v31 )
      v31();
  }
  v3 = 4096;
  j___aeabi_memclr4_0((int)v1 + 16, 4096);
  v28 = *((_DWORD *)v1 + 3);
  v29 = *(_DWORD *)(v28 - 12);
  j_Core::File::open((int)&v30, (int)v2, (__int64 *)&v28, 35);
  v5 = v32;
  v32 |= 2u;
  if ( v5 & 1 )
    v27 = 0LL;
    LODWORD(v4) = (char *)v1 + 16;
    j_Core::FileImpl::read(
      (Core::FileImpl *)&v25,
      (void *)*v2,
      v4,
      (unsigned __int64 *)0x1000,
      0,
      (unsigned __int64 *)&v27);
    if ( v26 )
      v26();
    v24 = 0;
    v8 = 0;
    *(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](
                (int)v1 + 8208,
                &v24) = 0;
    do
    {
      v9 = *((_DWORD *)v1 + v8 + 4);
      v10 = v9 == 0;
      if ( v9 )
      {
        v3 = (unsigned __int8)v9;
        v10 = (unsigned __int8)v9 == 0;
      }
      if ( !v10 )
        v11 = 0;
        do
        {
          v23 = (v9 >> 8) + v11++;
          *(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](
                      (int)v1 + 8208,
                      &v23) = 0;
        }
        while ( v11 < v3 );
      ++v8;
    }
    while ( v8 < 0x400 );
  else
    v18 = *((_DWORD *)v1 + 3);
    v19 = *(_DWORD *)(v18 - 12);
    j_Core::File::open((int)&v20, (int)v2, (__int64 *)&v18, 47);
    v6 = v22;
    v22 |= 2u;
    if ( !(v6 & 1) )
      if ( v21 )
        ((void (__cdecl *)(char *))v21)(&v20);
      v7 = 0;
      goto LABEL_25;
    v17 = 0LL;
    HIDWORD(v12) = 4096;
    LODWORD(v12) = (char *)v1 + 16;
    j_Core::FileImpl::read((Core::FileImpl *)&v15, (void *)*v2, v12, (unsigned __int64 *)0x1000, 0, &v17);
    if ( v16 )
      v16();
    v14 = 0;
                &v14) = 0;
    if ( v21 )
      v21();
  v7 = *v2;
  if ( *v2 )
    v7 = 1;
LABEL_25:
  if ( v31 )
    ((void (__cdecl *)(char *))v31)(&v30);
  return v7;
}


void __fastcall RegionFile::~RegionFile(RegionFile *this)
{
  RegionFile::~RegionFile(this);
}


int __fastcall RegionFile::_close(RegionFile *this)
{
  int result; // r0@1
  int *v2; // r1@1
  char v3; // [sp+4h] [bp-1Ch]@2
  int (*v4)(void); // [sp+Ch] [bp-14h]@2
  unsigned __int8 v5; // [sp+14h] [bp-Ch]@2

  v2 = (int *)((char *)this + 4);
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    j_Core::File::close((Core::File *)&v3, v2);
    result = v5 | 2;
    v5 |= 2u;
    if ( v4 )
      result = v4();
  }
  return result;
}


int __fastcall RegionFile::RegionFile(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r1@1
  void *v7; // r0@1
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+0h] [bp-20h]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1
  const char *v14; // [sp+10h] [bp-10h]@1
  int v15; // [sp+14h] [bp-Ch]@1
  int v16; // [sp+20h] [bp+0h]@1
  int v17; // [sp+24h] [bp+4h]@1
  RakNet *v18; // [sp+428h] [bp+408h]@1

  v2 = a1;
  v18 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_2724DEC;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  v3 = a1 + 12;
  *(_DWORD *)(v3 + 8216) = 0;
  *(_DWORD *)(v3 + 8212) = 0;
  *(_DWORD *)(v3 + 8208) = 0;
  *(_DWORD *)(v3 + 8204) = 0;
  *(_DWORD *)(v3 + 8200) = 0;
  v4 = a1 + 8212;
  *(_DWORD *)(v3 + 8208) = v4;
  *(_DWORD *)(v3 + 8212) = v4;
  v5 = *a2;
  v6 = *(_DWORD *)(*a2 - 12);
  v12 = v5;
  v13 = v6;
  v14 = "chunks.dat";
  v15 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v16, (int)&v12, 2);
  sub_21E94B4((void **)&v11, (const char *)&v17);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v3, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v10 = __ldrex(v9);
        __strex(v10 - 1, v9);
      }
      while ( &v16 );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  j___aeabi_memclr4_0(v2 + 16, 0x2000);
  if ( _stack_chk_guard != v18 )
    j___stack_chk_fail_0(_stack_chk_guard - v18);
  return v2;
}


signed int __fastcall RegionFile::readChunk(RegionFile *this, int a2, int a3, RakNet::BitStream **a4)
{
  RegionFile *v4; // r5@1
  RakNet::BitStream **v5; // r8@1
  int v6; // r0@1
  unsigned __int64 v7; // r2@2
  unsigned __int64 *v8; // r7@6
  unsigned __int8 *v9; // r6@7
  unsigned __int64 v10; // r2@7
  RakNet::BitStream *v11; // r5@9
  signed int result; // r0@9
  unsigned int v13; // [sp+10h] [bp-38h]@4
  char v14; // [sp+14h] [bp-34h]@2
  void (*v15)(void); // [sp+1Ch] [bp-2Ch]@2
  char v16; // [sp+24h] [bp-24h]@2
  int v17; // [sp+28h] [bp-20h]@4
  int v18; // [sp+2Ch] [bp-1Ch]@4

  v4 = this;
  v5 = a4;
  v6 = *((_DWORD *)this + a2 + 32 * a3 + 4);
  if ( v6 )
  {
    j_Core::FileImpl::setPosition((Core::FileImpl *)&v14, *((_DWORD *)v4 + 1), 16 * v6 & 0xFFFFF000);
    v16 |= 2u;
    HIDWORD(v7) = v15;
    if ( v15 )
      v15();
    v13 = 0;
    v17 = 0;
    v18 = 0;
    LODWORD(v7) = &v13;
    j_Core::FileImpl::read(
      (Core::FileImpl *)&v14,
      *((void **)v4 + 1),
      v7,
      (unsigned __int64 *)4,
      0,
      (unsigned __int64 *)&v17);
    v8 = (unsigned __int64 *)(v13 - 4);
    v13 = (unsigned int)v8;
    if ( (signed int)v8 <= 0 )
    {
      result = 0;
      *v5 = 0;
    }
    else
      v9 = (unsigned __int8 *)j_operator new[]((unsigned int)v8);
      v17 = 0;
      v18 = 0;
      LODWORD(v10) = v9;
      j_Core::FileImpl::read((Core::FileImpl *)&v14, *((void **)v4 + 1), v10, v8, 0, (unsigned __int64 *)&v17);
      v16 |= 2u;
      if ( v15 )
        v15();
      v11 = (RakNet::BitStream *)j_operator new(0x114u);
      j_RakNet::BitStream::BitStream(v11, v9, v13, 0);
      *v5 = v11;
      result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall RegionFile::_write(RegionFile *this, int a2, RakNet::BitStream *a3)
{
  RegionFile *v3; // r5@1
  RakNet::BitStream *v4; // r4@1
  unsigned __int64 v5; // r2@1
  unsigned int v7; // [sp+8h] [bp-28h]@3
  char v8; // [sp+Ch] [bp-24h]@1
  void (*v9)(void); // [sp+14h] [bp-1Ch]@1
  char v10; // [sp+1Ch] [bp-14h]@1

  v3 = this;
  v4 = a3;
  j_Core::FileImpl::setPosition((Core::FileImpl *)&v8, *((_DWORD *)this + 1), (unsigned int)(a2 << 12));
  v10 |= 2u;
  HIDWORD(v5) = v9;
  if ( v9 )
    v9();
  v7 = ((unsigned int)(*(_DWORD *)v4 + 7) >> 3) + 4;
  LODWORD(v5) = &v7;
  j_Core::FileImpl::write((Core::FileImpl *)&v8, *((const void **)v3 + 1), v5, 4LL);
  j_Core::FileImpl::write(
    (Core::FileImpl *)&v8,
    *((const void **)v3 + 1),
    *((_DWORD *)v4 + 3),
    (unsigned int)(*(_DWORD *)v4 + 7) >> 3);
  return 1;
}


RegionFile *__fastcall RegionFile::~RegionFile(RegionFile *this)
{
  RegionFile *v1; // r5@1
  int *v2; // r4@1
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+0h] [bp-28h]@2
  void (*v9)(void); // [sp+8h] [bp-20h]@2
  char v10; // [sp+10h] [bp-18h]@2

  v1 = this;
  *(_DWORD *)this = &off_2724DEC;
  v2 = (int *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) )
  {
    j_Core::File::close((Core::File *)&v8, v2);
    v10 |= 2u;
    if ( v9 )
      v9();
  }
  j_std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,std::allocator<std::pair<int const,bool>>>::_M_erase(
    (int)v1 + 8208,
    *((_DWORD *)v1 + 2054));
  v3 = *((_DWORD *)v1 + 3);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v3 - 4);
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
  j_Core::File::~File((Core::File *)v2);
  return v1;
}


void __fastcall RegionFile::~RegionFile(RegionFile *this)
{
  RegionFile *v1; // r0@1

  v1 = j_RegionFile::~RegionFile(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall RegionFile::writeChunk(RegionFile *this, int a2, int a3, RakNet::BitStream *a4)
{
  int v4; // r5@1
  RegionFile *v5; // r10@1
  char *v6; // r2@1
  signed int v7; // r1@1
  int v8; // r2@1
  signed int v9; // t1@1
  unsigned int v10; // r8@1
  signed int result; // r0@1
  int v12; // r4@2
  int v13; // r6@2
  int v14; // r11@5
  int v15; // r4@7
  RegionFile *v16; // r6@7
  unsigned int v17; // r8@7
  int v18; // r10@7
  int v19; // r9@9
  int v20; // r2@10
  int v21; // r5@10
  int v22; // r1@10
  int i; // r0@10
  bool v24; // zf@21
  bool v25; // nf@21
  unsigned __int8 v26; // vf@21
  unsigned __int64 v27; // r2@24
  int v28; // r9@24
  int v29; // r8@25
  int v30; // r7@29
  unsigned __int64 v31; // r2@31
  unsigned int v32; // [sp+8h] [bp-60h]@5
  int v33; // [sp+Ch] [bp-5Ch]@5
  RakNet::BitStream *v34; // [sp+10h] [bp-58h]@5
  int *v35; // [sp+14h] [bp-54h]@5
  int v36; // [sp+18h] [bp-50h]@5
  RegionFile *v37; // [sp+1Ch] [bp-4Ch]@7
  int v38; // [sp+20h] [bp-48h]@30
  int v39; // [sp+24h] [bp-44h]@28
  int v40; // [sp+28h] [bp-40h]@20
  int v41; // [sp+2Ch] [bp-3Ch]@6
  char v42; // [sp+30h] [bp-38h]@26
  void (*v43)(void); // [sp+38h] [bp-30h]@26
  char v44; // [sp+40h] [bp-28h]@26

  v4 = a2 + 32 * a3;
  v5 = this;
  v6 = (char *)this + 4 * v4;
  v9 = *((_DWORD *)v6 + 4);
  v8 = (int)(v6 + 16);
  v7 = v9;
  v10 = ((unsigned int)(*(_DWORD *)a4 + 7) >> 3) + 4;
  result = 0;
  if ( !(v10 >> 20) )
  {
    v12 = v7 >> 8;
    v13 = (unsigned __int8)v7;
    if ( v7 >> 8 && (unsigned __int8)v7 == (v10 >> 12) + 1 )
    {
      j_RegionFile::_write(v5, v7 >> 8, a4);
    }
    else
      v36 = (v10 >> 12) + 1;
      v14 = (int)v5 + 8208;
      v32 = *(_DWORD *)a4 + 7;
      v33 = v4;
      v34 = a4;
      v35 = (int *)v8;
      if ( (_BYTE)v7 )
      {
        do
        {
          v41 = v12++;
          --v13;
          *(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](
                      (int)v5 + 8208,
                      &v41) = 1;
        }
        while ( v13 );
      }
      v15 = (int)v5 + 8212;
      v16 = (RegionFile *)((char *)v5 + 8216);
      v37 = v5;
      v17 = v10 >> 12;
      v18 = 0;
LABEL_9:
      v19 = 0;
      while ( 1 )
        v20 = *(_DWORD *)v16;
        v21 = v19 + v18;
        v22 = v15;
        for ( i = v15; v20; v22 = i )
          i = v20;
          while ( *(_DWORD *)(i + 16) < v21 )
          {
            i = *(_DWORD *)(i + 12);
            if ( !i )
            {
              i = v22;
              goto LABEL_16;
            }
          }
          v20 = *(_DWORD *)(i + 8);
LABEL_16:
        if ( i == v15 )
          break;
        if ( v21 < *(_DWORD *)(i + 16) )
          i = v15;
        v40 = v19 + v18;
        if ( !*(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](
                          v14,
                          &v40) )
          v18 = v21 + 1;
          goto LABEL_9;
        v26 = __OFSUB__(v17, v19);
        v24 = v17 == v19;
        v25 = ((v17 - v19++) & 0x80000000) != 0;
        if ( (unsigned __int8)(v25 ^ v26) | v24 )
          goto LABEL_29;
      j_fseek((unsigned __int64 **)v37 + 1, 0, 2);
      v28 = v36 - v19;
      if ( v28 >= 1 )
        v29 = 0;
          LODWORD(v27) = (char *)v37 + 4112;
          j_Core::FileImpl::write((Core::FileImpl *)&v42, *((const void **)v37 + 1), v27, 4096LL);
          v44 |= 2u;
          HIDWORD(v27) = v43;
          if ( v43 )
            ((void (__fastcall *)(char *, char *, signed int))v43)(&v42, &v42, 3);
          v39 = v18 + v29++;
          *(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](v14, &v39) = 1;
        while ( v29 < v28 );
LABEL_29:
      v30 = 0;
      *v35 = v36 | (v18 << 8);
      do
        v38 = v18 + v30++;
        *(_BYTE *)j_std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](v14, &v38) = 0;
      while ( (((v32 >> 3) + 4) >> 12) + 1 != v30 );
      j_RegionFile::_write(v37, v18, v34);
      j_Core::FileImpl::setPosition((Core::FileImpl *)&v42, *((_DWORD *)v37 + 1), (unsigned int)(4 * v33));
      v44 |= 2u;
      HIDWORD(v31) = v43;
      if ( v43 )
        v43();
      LODWORD(v31) = v35;
      j_Core::FileImpl::write((Core::FileImpl *)&v42, *((const void **)v37 + 1), v31, 4LL);
    result = 1;
  }
  return result;
}
