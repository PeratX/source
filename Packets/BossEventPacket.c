

void __fastcall BossEventPacket::handle(BossEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  const NetworkIdentifier *v3; // r8@1
  NetEventCallback *v4; // r5@1
  BossEventPacket *v5; // r6@1
  void (__fastcall *v6)(NetEventCallback *, const NetworkIdentifier *, void ***); // r9@1
  __int64 v7; // r2@1
  char *v8; // r0@1
  __int64 v9; // r2@1
  int v10; // r4@1
  int v11; // r4@1
  int v12; // r7@1
  int v13; // r1@1
  int v14; // r2@1
  int v15; // r3@1
  void *v16; // r0@1
  unsigned int *v17; // r2@3
  signed int v18; // r1@5
  void **v19; // [sp+0h] [bp-68h]@1
  __int64 v20; // [sp+4h] [bp-64h]@1
  char v21; // [sp+Ch] [bp-5Ch]@1
  __int64 v22; // [sp+10h] [bp-58h]@1
  int v23; // [sp+18h] [bp-50h]@1
  int v24; // [sp+1Ch] [bp-4Ch]@1
  int v25; // [sp+20h] [bp-48h]@1
  int v26; // [sp+24h] [bp-44h]@1
  int v27; // [sp+28h] [bp-40h]@1
  int v28; // [sp+2Ch] [bp-3Ch]@1
  int v29; // [sp+30h] [bp-38h]@1
  int v30; // [sp+34h] [bp-34h]@1
  int v31; // [sp+38h] [bp-30h]@1
  __int16 v32; // [sp+3Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = *(void (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, void ***))(*(_DWORD *)a3 + 324);
  v7 = *(_QWORD *)((char *)this + 4);
  v21 = *((_BYTE *)this + 12);
  v20 = v7;
  v19 = &off_26E6444;
  v8 = (char *)this + 16;
  v9 = *(_QWORD *)v8;
  v10 = *((_DWORD *)v8 + 2);
  v8 += 12;
  v22 = v9;
  v23 = v10;
  HIDWORD(v9) = *((_DWORD *)v8 + 1);
  v11 = *((_DWORD *)v8 + 2);
  v12 = *((_DWORD *)v8 + 3);
  v24 = *(_DWORD *)v8;
  v25 = HIDWORD(v9);
  v26 = v11;
  v27 = v12;
  sub_21E8AF4(&v28, (int *)v5 + 11);
  v13 = *((_DWORD *)v5 + 12);
  v14 = *((_DWORD *)v5 + 13);
  v15 = *((_DWORD *)v5 + 14);
  v32 = *((_WORD *)v5 + 30);
  v29 = v13;
  v30 = v14;
  v31 = v15;
  v6(v4, v3, &v19);
  v16 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  }
}


void __fastcall BossEventPacket::handle(BossEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  BossEventPacket::handle(this, a2, a3);
}


void __fastcall BossEventPacket::~BossEventPacket(BossEventPacket *this)
{
  BossEventPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E6444;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


void __fastcall BossEventPacket::~BossEventPacket(BossEventPacket *this)
{
  BossEventPacket::~BossEventPacket(this);
}


signed int __fastcall BossEventPacket::getId(BossEventPacket *this)
{
  return 74;
}


unsigned int __fastcall BossEventPacket::write(BossEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  BossEventPacket *v3; // r5@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 3);
  BinaryStream::writeUnsignedVarInt(v2, *((_DWORD *)v3 + 10));
  result = *((_DWORD *)v3 + 10);
  if ( result <= 7 )
    JUMPOUT(__CS__, (char *)sub_1337FC2 + 4 * result);
  return result;
}


BossEventPacket *__fastcall BossEventPacket::~BossEventPacket(BossEventPacket *this)
{
  BossEventPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E6444;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


signed int __fastcall BossEventPacket::read(BossEventPacket *this, BinaryStream *a2)
{
  BossEventPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  signed int result; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  void *v10; // r0@8
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  int v13; // [sp+0h] [bp-20h]@3
  int v14; // [sp+4h] [bp-1Ch]@8
  char v15; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v15, (int)a2);
  *((_QWORD *)v2 + 3) = *(_QWORD *)&v15;
  v4 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v5 = v4;
  *((_DWORD *)v2 + 10) = v4;
  result = 0;
  switch ( v5 )
  {
    case 1:
    case 3:
      ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v15, (int)v3);
      *((_QWORD *)v2 + 4) = *(_QWORD *)&v15;
      goto LABEL_13;
    case 5:
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v13, (int)v3);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v2 + 11,
        &v13);
      v7 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v13 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
    case 0:
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v14, (int)v3);
        &v14);
      v10 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v14 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      *((_DWORD *)v2 + 12) = ReadOnlyBinaryStream::getFloat(v3);
      goto LABEL_10;
    case 6:
LABEL_10:
      *((_BYTE *)v2 + 60) = ReadOnlyBinaryStream::getUnsignedShort(v3);
      goto LABEL_11;
    case 7:
LABEL_11:
      *((_DWORD *)v2 + 13) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
      *((_DWORD *)v2 + 14) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
    case 4:
LABEL_13:
      result = 0;
      break;
    case 2:
      return result;
    default:
      result = 1;
  }
  return result;
}
