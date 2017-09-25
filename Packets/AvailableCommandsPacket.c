

unsigned int __fastcall AvailableCommandsPacket::write(AvailableCommandsPacket *this, BinaryStream *a2)
{
  AvailableCommandsPacket *v2; // r8@1
  BinaryStream *v3; // r4@1
  char **v4; // r5@1
  char **i; // r6@1
  char **v6; // r5@8
  char **j; // r6@8
  __int64 v8; // r0@15
  unsigned int v9; // r0@15
  void *v10; // r0@16
  int (__fastcall *v11)(void **, void **, int); // r2@16
  int v12; // r1@16
  void *v13; // r3@16
  _DWORD *v14; // r0@20
  char **v15; // r5@20
  char **k; // r6@20
  void *v17; // r0@27
  __int64 v18; // r1@27
  unsigned int result; // r0@27
  __int64 l; // r6@27
  void *v21; // [sp+0h] [bp-98h]@27
  __int64 v22; // [sp+8h] [bp-90h]@27
  _DWORD *v23; // [sp+10h] [bp-88h]@20
  void (*v24)(void); // [sp+18h] [bp-80h]@20
  unsigned int (__fastcall *v25)(int **, int, char **); // [sp+1Ch] [bp-7Ch]@20
  void *v26; // [sp+20h] [bp-78h]@20
  int v27; // [sp+24h] [bp-74h]@20
  int (__fastcall *v28)(void **, void **, int); // [sp+28h] [bp-70h]@15
  void *v29; // [sp+2Ch] [bp-6Ch]@20
  void *v30; // [sp+30h] [bp-68h]@8
  void (*v31)(void); // [sp+38h] [bp-60h]@8
  const void **(__fastcall *v32)(int, int, char **); // [sp+3Ch] [bp-5Ch]@8
  void *v33; // [sp+40h] [bp-58h]@1
  void (*v34)(void); // [sp+48h] [bp-50h]@1
  const void **(__fastcall *v35)(int, int, char **); // [sp+4Ch] [bp-4Ch]@1
  void *v36; // [sp+50h] [bp-48h]@16
  int v37; // [sp+54h] [bp-44h]@16
  void *v38; // [sp+60h] [bp-38h]@18
  int v39; // [sp+64h] [bp-34h]@18
  void *v40; // [sp+70h] [bp-28h]@19
  int v41; // [sp+74h] [bp-24h]@19

  v2 = this;
  v3 = a2;
  v33 = operator new(1u);
  v34 = (void (*)(void))sub_14B7D38;
  v35 = sub_14B7D30;
  BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 2);
  v4 = (char **)(*((_QWORD *)v2 + 2) >> 32);
  for ( i = (char **)*((_QWORD *)v2 + 2); v4 != i; ++i )
  {
    if ( !v34 )
      sub_21E5F48();
    v35((int)&v33, (int)v3, i);
  }
  if ( v34 )
    v34();
  v30 = operator new(1u);
  v31 = (void (*)(void))sub_14B7D38;
  v32 = sub_14B7D30;
  BinaryStream::writeUnsignedVarInt(
    v3,
    (signed int)((*(_QWORD *)((char *)v2 + 28) >> 32) - *(_QWORD *)((char *)v2 + 28)) >> 2);
  v6 = (char **)(*(_QWORD *)((char *)v2 + 28) >> 32);
  for ( j = (char **)*(_QWORD *)((char *)v2 + 28); v6 != j; ++j )
    if ( !v31 )
    v32((int)&v30, (int)v3, j);
  if ( v31 )
    v31();
  v8 = *((_QWORD *)v2 + 2);
  v28 = 0;
  v9 = (HIDWORD(v8) - (signed int)v8) >> 2;
  if ( v9 > 0x100 )
    if ( v9 > 0x10000 )
    {
      v10 = operator new(1u);
      v40 = v10;
      v11 = sub_14B7DE0;
      v12 = v41;
      v13 = sub_14B7DD6;
    }
    else
      v38 = v10;
      v11 = sub_14B7DA8;
      v12 = v39;
      v13 = sub_14B7D9E;
  else
    v10 = operator new(1u);
    v36 = v10;
    v11 = sub_14B7D70;
    v12 = v37;
    v13 = sub_14B7D66;
  v27 = v12;
  v26 = v10;
  v28 = v11;
  v29 = v13;
  v14 = operator new(4u);
  *v14 = &v26;
  v23 = v14;
  v24 = (void (*)(void))sub_14B7E54;
  v25 = sub_14B7E0E;
  BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 5) >> 32) - *((_QWORD *)v2 + 5)) >> 4);
  v15 = (char **)(*((_QWORD *)v2 + 5) >> 32);
  for ( k = (char **)*((_QWORD *)v2 + 5); v15 != k; k += 4 )
    if ( !v24 )
    v25(&v23, (int)v3, k);
  if ( v24 )
    v24();
  v17 = operator new(1u);
  HIDWORD(v18) = sub_14B7E8C;
  v21 = v17;
  LODWORD(v18) = sub_14B7F44;
  v22 = v18;
  result = BinaryStream::writeUnsignedVarInt(
             v3,
             -1227133513 * ((signed int)((*(_QWORD *)((char *)v2 + 52) >> 32) - *(_QWORD *)((char *)v2 + 52)) >> 2));
  for ( l = *(_QWORD *)((char *)v2 + 52); HIDWORD(l) != (_DWORD)l; LODWORD(l) = l + 28 )
    if ( !(_DWORD)v22 )
    result = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v22))(&v21, v3, l);
  if ( (_DWORD)v22 )
    result = ((int (__cdecl *)(void **))v22)(&v21);
  if ( v28 )
    result = ((int (__cdecl *)(void **))v28)(&v26);
  return result;
}


void __fastcall AvailableCommandsPacket::~AvailableCommandsPacket(AvailableCommandsPacket *this)
{
  AvailableCommandsPacket *v1; // r0@1

  v1 = AvailableCommandsPacket::~AvailableCommandsPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


AvailableCommandsPacket::CommandData *__fastcall AvailableCommandsPacket::CommandData::~CommandData(AvailableCommandsPacket::CommandData *this)
{
  AvailableCommandsPacket::CommandData *v1; // r4@1
  void *v2; // r8@1
  void *v3; // r10@1
  void *v4; // r4@3
  void *v5; // r7@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int *v8; // r0@13
  int v9; // r1@22
  void *v10; // r0@22
  int *v11; // r0@23
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  unsigned int *v15; // r2@29
  signed int v16; // r1@31
  AvailableCommandsPacket::CommandData *v17; // [sp+4h] [bp-34h]@2

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 12) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    v17 = this;
    do
    {
      v4 = (void *)(*(_QWORD *)v2 >> 32);
      v5 = (void *)*(_QWORD *)v2;
      if ( v5 != v4 )
      {
        do
        {
          v8 = (int *)(*(_DWORD *)v5 - 12);
          if ( v8 != &dword_28898C0 )
          {
            v6 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
              j_j_j_j__ZdlPv_9(v8);
          }
          v5 = (char *)v5 + 12;
        }
        while ( v5 != v4 );
        v5 = *(void **)v2;
      }
      if ( v5 )
        operator delete(v5);
      v2 = (char *)v2 + 12;
    }
    while ( v2 != v3 );
    v1 = v17;
    v2 = (void *)*((_DWORD *)v17 + 3);
  }
  if ( v2 )
    operator delete(v2);
  v9 = *((_DWORD *)v1 + 1);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (int *)(*(_DWORD *)v1 - 12);
  if ( v11 != &dword_28898C0 )
    v15 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}


char *__fastcall AvailableCommandsPacket::getCommands(AvailableCommandsPacket *this)
{
  return (char *)this + 52;
}


AvailableCommandsPacket *__fastcall AvailableCommandsPacket::~AvailableCommandsPacket(AvailableCommandsPacket *this)
{
  AvailableCommandsPacket *v1; // r10@1
  AvailableCommandsPacket::CommandData *v2; // r0@1
  AvailableCommandsPacket::CommandData *v3; // r5@1
  int v4; // r5@6
  int v5; // r7@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  void *v8; // r0@16
  int *v9; // r0@18
  void *v10; // r5@23
  void *v11; // r7@23
  unsigned int *v12; // r2@25
  signed int v13; // r1@27
  int *v14; // r0@33
  void *v15; // r5@38
  void *v16; // r7@38
  unsigned int *v17; // r2@40
  signed int v18; // r1@42
  int *v19; // r0@48

  v1 = this;
  *(_DWORD *)this = &off_26E9C24;
  v3 = (AvailableCommandsPacket::CommandData *)(*(_QWORD *)((char *)this + 52) >> 32);
  v2 = (AvailableCommandsPacket::CommandData *)*(_QWORD *)((char *)this + 52);
  if ( v2 != v3 )
  {
    do
      v2 = (AvailableCommandsPacket::CommandData *)((char *)AvailableCommandsPacket::CommandData::~CommandData(v2) + 28);
    while ( v3 != v2 );
    v2 = (AvailableCommandsPacket::CommandData *)*((_DWORD *)v1 + 13);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = *((_QWORD *)v1 + 5) >> 32;
  v4 = *((_QWORD *)v1 + 5);
  if ( v4 != v5 )
    {
      v8 = *(void **)(v4 + 4);
      if ( v8 )
        operator delete(v8);
      v9 = (int *)(*(_DWORD *)v4 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v4 += 16;
    }
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 10);
  if ( v4 )
    operator delete((void *)v4);
  v11 = (void *)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v10 = (void *)*(_QWORD *)((char *)v1 + 28);
  if ( v10 != v11 )
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v10 = (char *)v10 + 4;
    while ( v10 != v11 );
    v10 = (void *)*((_DWORD *)v1 + 7);
  if ( v10 )
    operator delete(v10);
  v16 = (void *)(*((_QWORD *)v1 + 2) >> 32);
  v15 = (void *)*((_QWORD *)v1 + 2);
  if ( v15 != v16 )
      v19 = (int *)(*(_DWORD *)v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 = (char *)v15 + 4;
    while ( v15 != v16 );
    v15 = (void *)*((_DWORD *)v1 + 4);
  if ( v15 )
    operator delete(v15);
  return v1;
}


signed int __fastcall AvailableCommandsPacket::getId(AvailableCommandsPacket *this)
{
  return 76;
}


int __fastcall AvailableCommandsPacket::read(AvailableCommandsPacket *this, BinaryStream *a2)
{
  AvailableCommandsPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  __int64 v4; // r0@5
  unsigned int v5; // r0@5
  void *v6; // r0@6
  int (__fastcall *v7)(void **, void **, int); // r2@6
  int v8; // r1@6
  int (__fastcall *v9)(int, ReadOnlyBinaryStream *); // r3@6
  _DWORD *v10; // r0@10
  void *v11; // r0@12
  __int64 v12; // r1@12
  void *v14; // [sp+0h] [bp-90h]@12
  __int64 v15; // [sp+8h] [bp-88h]@12
  _DWORD *v16; // [sp+10h] [bp-80h]@10
  void (*v17)(void); // [sp+18h] [bp-78h]@10
  void (__fastcall *v18)(int, int **, int); // [sp+1Ch] [bp-74h]@10
  void *v19; // [sp+20h] [bp-70h]@10
  int v20; // [sp+24h] [bp-6Ch]@10
  void (*v21)(void); // [sp+28h] [bp-68h]@5
  int (__fastcall *v22)(int, ReadOnlyBinaryStream *); // [sp+2Ch] [bp-64h]@10
  void *v23; // [sp+30h] [bp-60h]@3
  void (*v24)(void); // [sp+38h] [bp-58h]@3
  int (__fastcall *v25)(ReadOnlyBinaryStream *, int, int); // [sp+3Ch] [bp-54h]@3
  void *v26; // [sp+40h] [bp-50h]@1
  void (*v27)(void); // [sp+48h] [bp-48h]@1
  int (__fastcall *v28)(ReadOnlyBinaryStream *, int, int); // [sp+4Ch] [bp-44h]@1
  void *v29; // [sp+50h] [bp-40h]@6
  int v30; // [sp+54h] [bp-3Ch]@6
  void *v31; // [sp+60h] [bp-30h]@8
  int v32; // [sp+64h] [bp-2Ch]@8
  void *v33; // [sp+70h] [bp-20h]@9
  int v34; // [sp+74h] [bp-1Ch]@9

  v2 = this;
  v3 = a2;
  v26 = operator new(1u);
  v27 = (void (*)(void))sub_14B808C;
  v28 = sub_14B8082;
  ReadOnlyBinaryStream::readVectorList<std::string>(v3, (__int64 *)v2 + 2, (int)&v26);
  if ( v27 )
    v27();
  v23 = operator new(1u);
  v24 = (void (*)(void))sub_14B808C;
  v25 = sub_14B8082;
  ReadOnlyBinaryStream::readVectorList<std::string>(v3, (__int64 *)((char *)v2 + 28), (int)&v23);
  if ( v24 )
    v24();
  v4 = *((_QWORD *)v2 + 2);
  v21 = 0;
  v5 = (HIDWORD(v4) - (signed int)v4) >> 2;
  if ( v5 > 0x100 )
  {
    if ( v5 > 0x10000 )
    {
      v6 = operator new(1u);
      v33 = v6;
      v7 = sub_14B8130;
      v8 = v34;
      v9 = sub_14B812A;
    }
    else
      v31 = v6;
      v7 = sub_14B80FC;
      v8 = v32;
      v9 = sub_14B80F2;
  }
  else
    v6 = operator new(1u);
    v29 = v6;
    v7 = sub_14B80C4;
    v8 = v30;
    v9 = sub_14B80BA;
  v20 = v8;
  v19 = v6;
  v21 = (void (*)(void))v7;
  v22 = v9;
  v10 = operator new(4u);
  *v10 = &v19;
  v16 = v10;
  v17 = (void (*)(void))sub_14B8520;
  v18 = sub_14B83EC;
  ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::EnumData>(v3, (__int64 *)v2 + 5, (int)&v16);
  if ( v17 )
    v17();
  v11 = operator new(1u);
  LODWORD(v12) = sub_14B895C;
  v14 = v11;
  HIDWORD(v12) = sub_14B8778;
  v15 = v12;
  ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::CommandData>(
    v3,
    (__int64 *)((char *)v2 + 52),
    (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( v21 )
    v21();
  return 0;
}


char *__fastcall AvailableCommandsPacket::getEnumValues(AvailableCommandsPacket *this)
{
  return (char *)this + 16;
}


int __fastcall AvailableCommandsPacket::handle(AvailableCommandsPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AvailableCommandsPacket *))(*(_DWORD *)a3 + 336))(
           a3,
           a2,
           this);
}


int __fastcall AvailableCommandsPacket::AvailableCommandsPacket(int a1, unsigned __int64 *a2, unsigned __int64 *a3, int a4, int a5)
{
  int v5; // r7@1
  unsigned __int64 *v6; // r6@1
  int v7; // r4@1
  int v8; // r2@1
  int v9; // r2@1
  int v10; // r1@1
  int v11; // r1@1

  v5 = a1;
  v6 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v7 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9C24;
  std::vector<std::string,std::allocator<std::string>>::vector(a1 + 16, a2);
  std::vector<std::string,std::allocator<std::string>>::vector(v5 + 28, v6);
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 40) = *(_DWORD *)v7;
  *(_DWORD *)v7 = 0;
  v8 = *(_DWORD *)(v5 + 44);
  *(_DWORD *)(v5 + 44) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v8;
  v9 = *(_DWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 52) = *(_DWORD *)a5;
  *(_DWORD *)a5 = 0;
  v10 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a5 + 4) = v10;
  v11 = *(_DWORD *)(v5 + 60);
  *(_DWORD *)(v5 + 60) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a5 + 8) = v11;
  return v5;
}


void __fastcall AvailableCommandsPacket::~AvailableCommandsPacket(AvailableCommandsPacket *this)
{
  AvailableCommandsPacket::~AvailableCommandsPacket(this);
}


char *__fastcall AvailableCommandsPacket::getPostfixes(AvailableCommandsPacket *this)
{
  return (char *)this + 28;
}


char *__fastcall AvailableCommandsPacket::getEnums(AvailableCommandsPacket *this)
{
  return (char *)this + 40;
}
