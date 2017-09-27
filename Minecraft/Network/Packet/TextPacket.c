

const void **__fastcall TextPacket::write(TextPacket *this, BinaryStream *a2)
{
  TextPacket *v2; // r8@1
  BinaryStream *v3; // r4@1
  unsigned int v4; // r0@1
  signed int v5; // r0@2
  char **v6; // r5@6
  char **i; // r6@6
  void *v9; // [sp+0h] [bp-28h]@6
  int (__fastcall *v10)(void **, void **, int); // [sp+8h] [bp-20h]@6
  const void **(__fastcall *v11)(int, int, char **); // [sp+Ch] [bp-1Ch]@6

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeBool(v3, *((_BYTE *)v2 + 36));
  v4 = *((_BYTE *)v2 + 13);
  if ( v4 <= 8 )
  {
    v5 = 1 << v4;
    if ( v5 & 0x61 )
    {
LABEL_5:
      BinaryStream::writeString((int)v3, (char **)v2 + 5);
      return BinaryStream::writeString((int)v3, (char **)v2 + 10);
    }
    if ( v5 & 0x182 )
      BinaryStream::writeString((int)v3, (char **)v2 + 4);
      goto LABEL_5;
    BinaryStream::writeString((int)v3, (char **)v2 + 5);
    v9 = operator new(1u);
    v10 = std::_Function_base::_Base_manager<TextPacket::write(BinaryStream &)const::{lambda(BinaryStream &,std::string const&)#1}>::_M_manager;
    v11 = std::_Function_handler<void ()(BinaryStream &,std::string const&),TextPacket::write(BinaryStream &)const::{lambda(BinaryStream &,std::string const&)#1}>::_M_invoke;
    BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 3) >> 32) - *((_QWORD *)v2 + 3)) >> 2);
    v6 = (char **)(*((_QWORD *)v2 + 3) >> 32);
    for ( i = (char **)*((_QWORD *)v2 + 3); v6 != i; ++i )
      if ( !v10 )
        sub_DA7654();
      v11((int)&v9, (int)v3, i);
    if ( v10 )
      ((void (__cdecl *)(void **))v10)(&v9);
  }
  return BinaryStream::writeString((int)v3, (char **)v2 + 10);
}


TextPacket *__fastcall TextPacket::~TextPacket(TextPacket *this)
{
  TextPacket *v1; // r10@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@13
  void *v8; // r0@13
  void *v9; // r5@14
  void *v10; // r7@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  int *v13; // r0@24
  int v14; // r1@29
  void *v15; // r0@29
  int v16; // r1@30
  void *v17; // r0@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  unsigned int *v23; // r2@40
  signed int v24; // r1@42

  v1 = this;
  *(_DWORD *)this = &off_26D8088;
  v2 = *((_QWORD *)this + 3);
  if ( HIDWORD(v2) != (_DWORD)v2 )
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
          j_j_j_j_j__ZdlPv_9(v6);
      }
      ++v3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 7) = v2;
  v7 = *((_DWORD *)v1 + 10);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v10 = (void *)(*((_QWORD *)v1 + 3) >> 32);
  v9 = (void *)*((_QWORD *)v1 + 3);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 6);
  if ( v9 )
    operator delete(v9);
  v14 = *((_DWORD *)v1 + 5);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v14 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 4);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v16 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  return v1;
}


int __fastcall TextPacket::read(TextPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  TextPacket *v3; // r4@1
  unsigned int v4; // r0@1
  signed int v5; // r0@2
  void *v6; // r0@4
  void *v7; // r0@5
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  void *v10; // r0@11
  void *v12; // r0@13
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@28
  signed int v16; // r1@30
  unsigned int *v17; // r2@39
  signed int v18; // r1@41
  int v19; // [sp+0h] [bp-38h]@11
  void *v20; // [sp+4h] [bp-34h]@14
  void (*v21)(void); // [sp+Ch] [bp-2Ch]@14
  int (__fastcall *v22)(ReadOnlyBinaryStream *, int, int); // [sp+10h] [bp-28h]@14
  int v23; // [sp+14h] [bp-24h]@13
  int v24; // [sp+18h] [bp-20h]@5
  int v25; // [sp+1Ch] [bp-1Ch]@4
  int v26; // [sp+20h] [bp-18h]@10

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  *((_BYTE *)v3 + 36) = ReadOnlyBinaryStream::getBool(v2);
  v4 = *((_BYTE *)v3 + 13);
  if ( v4 > 8 )
    goto LABEL_11;
  v5 = 1 << v4;
  if ( v5 & 0x71 )
  {
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v26, (int)v2);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 5,
      &v26);
    v7 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) == &dword_28898C0 )
      goto LABEL_11;
    v8 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
LABEL_33:
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    }
LABEL_32:
    v9 = (*v8)--;
    goto LABEL_33;
  }
  if ( v5 & 0x18A )
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v25, (int)v2);
      (int *)v3 + 4,
      &v25);
    v6 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v6);
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v24, (int)v2);
      &v24);
    v7 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v24 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_33;
      goto LABEL_32;
  else
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v23, (int)v2);
      &v23);
    v12 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v23 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    v20 = operator new(1u);
    v21 = (void (*)(void))std::_Function_base::_Base_manager<TextPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
    v22 = std::_Function_handler<std::string ()(ReadOnlyBinaryStream &),TextPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
    ReadOnlyBinaryStream::readVectorList<std::string>(v2, (__int64 *)v3 + 3, (int)&v20);
    if ( v21 )
      v21();
LABEL_11:
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 10,
    &v19);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return 0;
}


void __fastcall TextPacket::createJukeboxPopup(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  void *v6; // r4@2
  void *v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int v16; // [sp+14h] [bp-3Ch]@1
  void *v17; // [sp+18h] [bp-38h]@1
  void *v18; // [sp+1Ch] [bp-34h]@1
  int v19; // [sp+20h] [bp-30h]@1
  int v20; // [sp+28h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = (int *)sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  TextPacket::TextPacket(v3, 4, &v20, v2, (unsigned __int64 *)&v17, 1, v4);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v7 = v18;
  v6 = v17;
  if ( v17 != v18 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = v17;
  if ( v6 )
    operator delete(v6);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


int __fastcall TextPacket::TextPacket(int a1, char a2, int *a3, int *a4, unsigned __int64 *a5, char a6, int *a7)
{
  int v7; // r4@1
  int *v8; // r7@1

  v7 = a1;
  v8 = a4;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26D8088;
  *(_BYTE *)(a1 + 13) = a2;
  sub_DA73B4((int *)(a1 + 16), a3);
  sub_DA73B4((int *)(v7 + 20), v8);
  std::vector<std::string,std::allocator<std::string>>::vector(v7 + 24, a5);
  *(_BYTE *)(v7 + 36) = a6;
  sub_DA73B4((int *)(v7 + 40), a7);
  return v7;
}


void __fastcall TextPacket::createTranslated(int a1, int *a2, unsigned __int64 *a3)
{
  TextPacket::createTranslated(a1, a2, a3);
}


void __fastcall TextPacket::createTranslated(int a1, int *a2, unsigned __int64 *a3)
{
  int *v3; // r4@1
  unsigned __int64 *v4; // r6@1
  int v5; // r5@1
  int *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+14h] [bp-2Ch]@1
  int v14; // [sp+1Ch] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v6 = (int *)sub_21E94B4((void **)&v13, (const char *)&unk_257BC67);
  TextPacket::TextPacket(v5, 2, &v14, v3, v4, 1, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall TextPacket::createRaw(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  void *v6; // r4@2
  void *v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int v16; // [sp+14h] [bp-3Ch]@1
  void *v17; // [sp+18h] [bp-38h]@1
  void *v18; // [sp+1Ch] [bp-34h]@1
  int v19; // [sp+20h] [bp-30h]@1
  int v20; // [sp+28h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_DA7364((void **)&v20, (const char *)&unk_257BC67);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = (int *)sub_DA7364((void **)&v16, (const char *)&unk_257BC67);
  TextPacket::TextPacket(v3, 0, &v20, v2, (unsigned __int64 *)&v17, 0, v4);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v7 = v18;
  v6 = v17;
  if ( v17 != v18 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = v17;
  if ( v6 )
    operator delete(v6);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
}


void __fastcall TextPacket::createSystemMessage(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  void *v6; // r4@2
  void *v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int v16; // [sp+14h] [bp-3Ch]@1
  void *v17; // [sp+18h] [bp-38h]@1
  void *v18; // [sp+1Ch] [bp-34h]@1
  int v19; // [sp+20h] [bp-30h]@1
  int v20; // [sp+28h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = (int *)sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  TextPacket::TextPacket(v3, 6, &v20, v2, (unsigned __int64 *)&v17, 0, v4);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v7 = v18;
  v6 = v17;
  if ( v17 != v18 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = v17;
  if ( v6 )
    operator delete(v6);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


signed int __fastcall TextPacket::getId(TextPacket *this)
{
  return 9;
}


void __fastcall TextPacket::createRaw(int a1, int *a2)
{
  TextPacket::createRaw(a1, a2);
}


int __fastcall TextPacket::handle(TextPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, TextPacket *))(*(_DWORD *)a3 + 80))(
           a3,
           a2,
           this);
}


void __fastcall TextPacket::~TextPacket(TextPacket *this)
{
  TextPacket *v1; // r0@1

  v1 = TextPacket::~TextPacket(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall TextPacket::createSystemMessage(int a1, int *a2)
{
  TextPacket::createSystemMessage(a1, a2);
}


void __fastcall TextPacket::~TextPacket(TextPacket *this)
{
  TextPacket::~TextPacket(this);
}


void __fastcall TextPacket::createJukeboxPopup(int a1, int *a2)
{
  TextPacket::createJukeboxPopup(a1, a2);
}
