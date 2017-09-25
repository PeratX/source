

void __fastcall PurchaseReceiptPacket::~PurchaseReceiptPacket(PurchaseReceiptPacket *this)
{
  PurchaseReceiptPacket::~PurchaseReceiptPacket(this);
}


int __fastcall PurchaseReceiptPacket::read(PurchaseReceiptPacket *this, BinaryStream *a2)
{
  PurchaseReceiptPacket *v2; // r9@1
  BinaryStream *v3; // r10@1
  unsigned __int64 *v4; // r8@1
  _DWORD *v5; // lr@1
  _DWORD *v6; // r11@1
  char *v7; // r1@2
  _DWORD *v8; // r4@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r7@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r5@9
  char *v13; // r7@9
  int *v14; // r0@10
  unsigned int v15; // r7@12
  unsigned int v16; // r4@13
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  __int64 v19; // r0@22
  int v20; // r1@23
  void *v21; // r0@25
  void *v23; // [sp+4h] [bp-34h]@22
  char v24; // [sp+8h] [bp-30h]@2

  v2 = this;
  v3 = a2;
  v4 = (unsigned __int64 *)((char *)this + 16);
  v5 = (_DWORD *)*((_DWORD *)this + 4);
  v6 = (_DWORD *)*((_DWORD *)this + 5);
  if ( v6 != v5 )
  {
    v7 = &v24;
    v8 = (_DWORD *)*((_DWORD *)this + 4);
    v9 = &pthread_create;
    do
    {
      v14 = (int *)(*v8 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v8 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j_j__ZdlPv_9(v14);
          v7 = v13;
          v9 = v12;
      }
      ++v8;
    }
    while ( v8 != v6 );
  }
  *((_DWORD *)v2 + 5) = v5;
  v15 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  std::vector<std::string,std::allocator<std::string>>::reserve((int)v4, v15);
  if ( v15 )
    v16 = 0;
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v23, (int)v3);
      v19 = *(_QWORD *)((char *)v2 + 20);
      if ( (_DWORD)v19 == HIDWORD(v19) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(v4, &v23);
        v20 = (int)v23;
      else
        *(_DWORD *)v19 = v23;
        HIDWORD(v19) = &unk_28898CC;
        v23 = &unk_28898CC;
        *((_DWORD *)v2 + 5) = v19 + 4;
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      ++v16;
    while ( v16 < v15 );
  return 0;
}


PurchaseReceiptPacket *__fastcall PurchaseReceiptPacket::~PurchaseReceiptPacket(PurchaseReceiptPacket *this)
{
  PurchaseReceiptPacket *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D8100;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
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
          j_j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


unsigned int __fastcall PurchaseReceiptPacket::write(PurchaseReceiptPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  unsigned int result; // r0@1
  char **v4; // r5@1 OVERLAPPED
  PurchaseReceiptPacket *v5; // r6@1 OVERLAPPED

  v5 = this;
  v2 = a2;
  result = BinaryStream::writeUnsignedVarInt(
             a2,
             (signed int)((*((_QWORD *)this + 2) >> 32) - *((_QWORD *)this + 2)) >> 2);
  for ( *(_QWORD *)&v4 = *((_QWORD *)v5 + 2); (char **)v5 != v4; ++v4 )
    result = (unsigned int)BinaryStream::writeString((int)v2, v4);
  return result;
}


void __fastcall PurchaseReceiptPacket::~PurchaseReceiptPacket(PurchaseReceiptPacket *this)
{
  PurchaseReceiptPacket *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D8100;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
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
          j_j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  operator delete((void *)v1);
}


signed int __fastcall PurchaseReceiptPacket::getId(PurchaseReceiptPacket *this)
{
  return 92;
}


int __fastcall PurchaseReceiptPacket::handle(PurchaseReceiptPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PurchaseReceiptPacket *))(*(_DWORD *)a3 + 408))(
           a3,
           a2,
           this);
}
