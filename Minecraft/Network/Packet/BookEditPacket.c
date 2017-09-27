

int *__fastcall BookEditPacket::setToReplacePage(BookEditPacket *this, int a2, int a3, const PageContent *a4)
{
  BookEditPacket *v4; // r5@1
  const PageContent *v5; // r4@1
  char *v6; // r3@1

  v4 = this;
  v5 = a4;
  v6 = (char *)this + 16;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 1) = a2;
  *((_DWORD *)v6 + 2) = a3;
  EntityInteraction::setInteractText((int *)this + 8, (int *)v5);
  return EntityInteraction::setInteractText((int *)v4 + 9, (int *)v5 + 1);
}


void __fastcall BookEditPacket::_readPage(BookEditPacket *this, BinaryStream *a2)
{
  BookEditPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+0h] [bp-28h]@2
  int v11; // [sp+4h] [bp-24h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v11, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 8,
    &v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v10, (int)v3);
    (int *)v2 + 9,
    &v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


int *__fastcall BookEditPacket::getPage(BookEditPacket *this, int a2)
{
  int v2; // r4@1
  BookEditPacket *v3; // r5@1
  int v4; // r1@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E8AF4(&v9, (int *)(a2 + 32));
  sub_21E8AF4((int *)v3, &v9);
  v4 = v9;
  *((_DWORD *)v3 + 1) = &unk_28898CC;
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return EntityInteraction::setInteractText((int *)v3 + 1, (int *)(v2 + 36));
}


signed int __fastcall BookEditPacket::read(BookEditPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  BookEditPacket *v3; // r4@1
  void *v4; // r0@3
  void *v5; // r0@4
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  signed int result; // r0@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+0h] [bp-28h]@4
  int v12; // [sp+4h] [bp-24h]@3

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getByte(a2);
  *((_DWORD *)v3 + 5) = ReadOnlyBinaryStream::getByte(v2);
  switch ( *((_DWORD *)v3 + 4) )
  {
    case 0:
    case 1:
      *((_DWORD *)v3 + 6) = ReadOnlyBinaryStream::getByte(v2);
      BookEditPacket::_readPage(v3, v2);
      goto LABEL_11;
    case 4:
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v12, (int)v2);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3 + 8,
        &v12);
      v4 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v12 - 4);
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
          j_j_j_j__ZdlPv_9(v4);
      }
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v11, (int)v2);
        (int *)v3 + 9,
        &v11);
      v5 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v11 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
    case 2:
    case 3:
      *((_DWORD *)v3 + 7) = ReadOnlyBinaryStream::getByte(v2);
LABEL_11:
      result = 0;
      break;
    default:
      result = 1;
  }
  return result;
}


void __fastcall BookEditPacket::~BookEditPacket(BookEditPacket *this)
{
  BookEditPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E9C4C;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


int *__fastcall BookEditPacket::_storePage(BookEditPacket *this, const PageContent *a2)
{
  BookEditPacket *v2; // r5@1
  const PageContent *v3; // r4@1

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 8, (int *)a2);
  return EntityInteraction::setInteractText((int *)v2 + 9, (int *)v3 + 1);
}


unsigned int __fastcall BookEditPacket::write(BookEditPacket *this, BinaryStream *a2)
{
  BookEditPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  unsigned int result; // r0@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 16));
  BinaryStream::writeByte(v3, *((_BYTE *)v2 + 20));
  result = *((_DWORD *)v2 + 4);
  if ( result <= 4 )
    JUMPOUT(__CS__, (char *)&sub_14B9648 + 4 * result);
  return result;
}


int __fastcall BookEditPacket::handle(BookEditPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, BookEditPacket *))(*(_DWORD *)a3 + 460))(
           a3,
           a2,
           this);
}


void __fastcall BookEditPacket::~BookEditPacket(BookEditPacket *this)
{
  BookEditPacket::~BookEditPacket(this);
}


BookEditPacket *__fastcall BookEditPacket::~BookEditPacket(BookEditPacket *this)
{
  BookEditPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E9C4C;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


int __fastcall BookEditPacket::setToDeletePage(int result, int a2, int a3)
{
  *(_DWORD *)(result + 16) = 2;
  *(_DWORD *)(result + 20) = a2;
  *(_DWORD *)(result + 24) = a3;
  return result;
}


signed int __fastcall BookEditPacket::getId(BookEditPacket *this)
{
  return 97;
}


int __fastcall BookEditPacket::BookEditPacket(int result)
{
  __int64 v1; // r1@1

  *(_DWORD *)(result + 4) = 2;
  *(_DWORD *)(result + 8) = 1;
  HIDWORD(v1) = &unk_28898CC;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)result = &off_26E9C4C;
  LODWORD(v1) = -1;
  *(_DWORD *)(result + 20) = -1;
  *(_DWORD *)(result + 24) = -1;
  *(_QWORD *)(result + 28) = v1;
  *(_DWORD *)(result + 36) = &unk_28898CC;
  return result;
}


const void **__fastcall BookEditPacket::_writePage(BookEditPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  BookEditPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeString((int)a2, (char **)this + 8);
  return j_j_j__ZN12BinaryStream11writeStringERKSs_1((int)v2, (char **)v3 + 9);
}


void __fastcall BookEditPacket::_readPage(BookEditPacket *this, BinaryStream *a2)
{
  BookEditPacket::_readPage(this, a2);
}


int __fastcall BookEditPacket::setToSwapPages(int result, int a2, __int64 a3)
{
  *(_DWORD *)(result + 16) = 3;
  *(_DWORD *)(result + 20) = a2;
  *(_QWORD *)(result + 24) = a3;
  return result;
}


int *__fastcall BookEditPacket::setToAddPage(BookEditPacket *this, int a2, int a3, const PageContent *a4)
{
  BookEditPacket *v4; // r5@1
  const PageContent *v5; // r4@1
  char *v6; // r3@1

  v4 = this;
  v5 = a4;
  v6 = (char *)this + 16;
  *(_DWORD *)v6 = 1;
  *((_DWORD *)v6 + 1) = a2;
  *((_DWORD *)v6 + 2) = a3;
  EntityInteraction::setInteractText((int *)this + 8, (int *)v5);
  return EntityInteraction::setInteractText((int *)v4 + 9, (int *)v5 + 1);
}


int *__fastcall BookEditPacket::setToFinalize(__int64 a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1

  v3 = a1;
  LODWORD(a1) = 4;
  *(_QWORD *)(v3 + 16) = a1;
  v4 = a3;
  EntityInteraction::setInteractText((int *)(v3 + 32), a2);
  return EntityInteraction::setInteractText((int *)(v3 + 36), v4);
}
