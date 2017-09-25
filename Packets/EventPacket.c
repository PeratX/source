

int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3, const EventPacket::EventDetails *a4)
{
  int v4; // r4@1
  int v5; // r6@1
  const EventPacket::EventDetails *v6; // r7@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r0@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r5@1

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  v7 = v4 + 24;
  v8 = *(_DWORD *)v5;
  v9 = *(_DWORD *)(v5 + 4);
  v10 = *(_DWORD *)(v5 + 8);
  v11 = *(_DWORD *)(v5 + 12);
  v5 += 16;
  *(_DWORD *)v7 = v8;
  *(_DWORD *)(v7 + 4) = v9;
  *(_DWORD *)(v7 + 8) = v10;
  *(_DWORD *)(v7 + 12) = v11;
  v12 = v4 + 40;
  v13 = *(_DWORD *)(v5 + 4);
  v14 = *(_DWORD *)(v5 + 8);
  v15 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)v12 = *(_DWORD *)v5;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  EventPacket::EventDetails::EventDetails((EventPacket::EventDetails *)(v4 + 56), v6);
  return v4;
}


EventPacket::EventDetails *__fastcall EventPacket::EventDetails::EventDetails(EventPacket::EventDetails *this, const EventPacket::EventDetails *a2)
{
  const EventPacket::EventDetails *v2; // r4@1
  EventPacket::EventDetails *v3; // r5@1

  v2 = a2;
  v3 = this;
  sub_21E8AF4((int *)this, (int *)a2);
  sub_21E8AF4((int *)v3 + 1, (int *)v2 + 1);
  sub_21E8AF4((int *)v3 + 2, (int *)v2 + 2);
  return v3;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  int result; // r0@1

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = &unk_28898CC;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  *(_DWORD *)(v4 + 24) = 3;
  result = v4;
  *(_BYTE *)(v4 + 28) = 1;
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 36) = v6;
  return result;
}


int __fastcall EventPacket::EventPacket(int result)
{
  *(_DWORD *)(result + 4) = 2;
  *(_DWORD *)(result + 8) = 1;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)result = &off_26E9D30;
  *(_DWORD *)(result + 16) = -1;
  *(_DWORD *)(result + 20) = -1;
  *(_BYTE *)(result + 28) = 1;
  *(_DWORD *)(result + 56) = &unk_28898CC;
  *(_DWORD *)(result + 60) = &unk_28898CC;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  return result;
}


int __fastcall EventPacket::getPlayerUniqueId(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 16);
  return result;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, Entity *a3, int a4)
{
  int v4; // r4@1
  Entity *v5; // r5@1
  int v6; // r6@1
  int v7; // r0@1

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = &unk_28898CC;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  *(_DWORD *)(v4 + 24) = 1;
  *(_BYTE *)(v4 + 28) = 1;
  v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 488))(v5);
  *(_DWORD *)(v4 + 32) = EntityClassTree::getEntityTypeIdLegacy(v7);
  *(_DWORD *)(v4 + 36) = v6;
  *(_DWORD *)(v4 + 40) = Entity::getVariant(v5);
  *(_BYTE *)(v4 + 44) = Entity::getColor(v5);
  return v4;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *this, int a3, int a4, int a5)
{
  int v5; // r4@1
  Entity *v6; // r6@1
  Entity *v7; // r5@1
  int result; // r0@1

  v5 = a1;
  v6 = (Entity *)a3;
  *(_DWORD *)(a1 + 4) = 2;
  v7 = (Entity *)a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(this);
  *(_DWORD *)(v5 + 56) = &unk_28898CC;
  *(_DWORD *)(v5 + 60) = &unk_28898CC;
  *(_DWORD *)(v5 + 64) = &unk_28898CC;
  *(_DWORD *)(v5 + 24) = 4;
  *(_BYTE *)(v5 + 28) = 1;
  *(_QWORD *)(v5 + 32) = *(_QWORD *)Entity::getUniqueID(v6);
  *(_QWORD *)(v5 + 40) = *(_QWORD *)Entity::getUniqueID(v7);
  result = v5;
  *(_DWORD *)(v5 + 48) = a5;
  return result;
}


signed int __fastcall EventPacket::getId(EventPacket *this)
{
  return 65;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3, char a4)
{
  int v4; // r6@1
  int v5; // r4@1
  char v6; // r5@1
  signed __int64 v7; // r0@2
  int result; // r0@4

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  if ( a2 )
    v7 = *(_QWORD *)Entity::getUniqueID(a2);
  else
    v7 = -1LL;
  *(_QWORD *)(v4 + 16) = v7;
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = &unk_28898CC;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  result = v4;
  *(_DWORD *)(v4 + 24) = 0;
  *(_BYTE *)(v4 + 28) = v6;
  *(_DWORD *)(v4 + 32) = v5;
  return result;
}


int __fastcall EventPacket::read(EventPacket *this, BinaryStream *a2)
{
  EventPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  __int64 v4; // r0@4
  __int64 v5; // r0@4
  __int64 v6; // r0@7
  void *v7; // r0@10
  void *v8; // r0@11
  void *v9; // r0@12
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  int v17; // [sp+4h] [bp-24h]@12
  int v18; // [sp+8h] [bp-20h]@11
  int v19; // [sp+Ch] [bp-1Ch]@10
  char v20; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v20, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v20;
  *((_DWORD *)v2 + 6) = ReadOnlyBinaryStream::getVarInt(v3);
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getByte(v3);
  switch ( *((_DWORD *)v2 + 6) )
  {
    case 0:
    case 2:
      *((_DWORD *)v2 + 8) = ReadOnlyBinaryStream::getVarInt(v3);
      return 0;
    case 3:
    case 6:
      goto LABEL_13;
    case 4:
      LODWORD(v4) = ReadOnlyBinaryStream::getVarInt64(v3);
      *((_QWORD *)v2 + 4) = v4;
      LODWORD(v5) = ReadOnlyBinaryStream::getVarInt64(v3);
      *((_QWORD *)v2 + 5) = v5;
      goto LABEL_9;
    case 1:
      *((_DWORD *)v2 + 9) = ReadOnlyBinaryStream::getVarInt(v3);
      *((_DWORD *)v2 + 10) = ReadOnlyBinaryStream::getVarInt(v3);
      *((_BYTE *)v2 + 44) = ReadOnlyBinaryStream::getUnsignedChar(v3);
    case 5:
      *((_DWORD *)v2 + 9) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
      *((_WORD *)v2 + 16) = ReadOnlyBinaryStream::getVarInt(v3);
      *((_WORD *)v2 + 20) = ReadOnlyBinaryStream::getVarInt(v3);
    case 7:
      LODWORD(v6) = ReadOnlyBinaryStream::getVarInt64(v3);
      *((_QWORD *)v2 + 5) = v6;
    case 0xA:
      *((_DWORD *)v2 + 11) = ReadOnlyBinaryStream::getVarInt(v3);
LABEL_9:
      *((_DWORD *)v2 + 12) = ReadOnlyBinaryStream::getVarInt(v3);
      break;
    case 8:
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, (int)v3);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v2 + 14,
        &v19);
      v7 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v18, (int)v3);
        (int *)v2 + 15,
        &v18);
      v8 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v18 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v17, (int)v3);
        (int *)v2 + 16,
        &v17);
      v9 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v17 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
LABEL_13:
    default:
  }
  return 0;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  int result; // r0@1

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_BYTE *)(v4 + 28) = 1;
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = &unk_28898CC;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  *(_DWORD *)(v4 + 24) = 6;
  result = v4;
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 36) = v6;
  return result;
}


void __fastcall EventPacket::~EventPacket(EventPacket *this)
{
  EventPacket::~EventPacket(this);
}


int __fastcall EventPacket::EventPacket(int a1, Entity *this, int a3, int a4, int a5, int a6)
{
  int v6; // r6@1
  int v7; // r4@1
  int *v8; // r7@1
  int v9; // r0@1

  v6 = a1;
  v7 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v8 = (int *)a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(this);
  *(_BYTE *)(v6 + 28) = 1;
  sub_21E8AF4((int *)(v6 + 56), v8);
  sub_21E8AF4((int *)(v6 + 60), (int *)a5);
  *(_DWORD *)(v6 + 64) = &unk_28898CC;
  v9 = v6 + 64;
  *(_DWORD *)(v9 - 40) = 8;
  *(_DWORD *)(v9 - 32) = v7;
  *(_DWORD *)(v9 - 28) = -1;
  EntityInteraction::setInteractText((int *)(v6 + 64), (int *)a6);
  return v6;
}


int __fastcall EventPacket::EventDetails::EventDetails(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


int __fastcall EventPacket::handle(EventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, EventPacket *))(*(_DWORD *)a3 + 300))(
           a3,
           a2,
           this);
}


int __fastcall EventPacket::EventPacket(int a1, Entity *this, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@1
  int *v8; // r6@1

  v6 = a1;
  v7 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v8 = (int *)a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(this);
  *(_BYTE *)(v6 + 28) = 1;
  sub_21E8AF4((int *)(v6 + 56), v8);
  sub_21E8AF4((int *)(v6 + 60), (int *)a5);
  *(_DWORD *)(v6 + 64) = &unk_28898CC;
  *(_DWORD *)(v6 + 24) = 8;
  *(_DWORD *)(v6 + 32) = v7;
  *(_DWORD *)(v6 + 36) = a6;
  return v6;
}


_BOOL4 __fastcall EventPacket::usePlayerID(EventPacket *this)
{
  return *((_BYTE *)this + 28) != 0;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  __int64 v5; // kr00_8@1
  int v6; // r2@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r3@1
  int v10; // r5@1
  int v11; // r2@1
  int v12; // r1@1
  int v13; // r3@1
  int v14; // r5@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  v5 = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v3 + 20) = HIDWORD(v5);
  v6 = v3 + 24;
  *(_DWORD *)(v3 + 16) = v5;
  v7 = *(_DWORD *)v4;
  v8 = *(_DWORD *)(v4 + 4);
  v9 = *(_DWORD *)(v4 + 8);
  v10 = *(_DWORD *)(v4 + 12);
  v4 += 16;
  *(_DWORD *)v6 = v7;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 8) = v9;
  *(_DWORD *)(v6 + 12) = v10;
  v11 = v3 + 40;
  v12 = *(_DWORD *)(v4 + 4);
  v13 = *(_DWORD *)(v4 + 8);
  v14 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)v11 = *(_DWORD *)v4;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  *(_DWORD *)(v3 + 56) = &unk_28898CC;
  *(_DWORD *)(v3 + 60) = &unk_28898CC;
  *(_DWORD *)(v3 + 64) = &unk_28898CC;
  return v3;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v3 + 56) = &unk_28898CC;
  *(_DWORD *)(v3 + 60) = &unk_28898CC;
  *(_DWORD *)(v3 + 64) = &unk_28898CC;
  result = v3;
  *(_DWORD *)(v3 + 24) = 2;
  *(_BYTE *)(v3 + 28) = 1;
  *(_DWORD *)(v3 + 32) = v4;
  return result;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *a2, int a3, Entity *a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Entity *v6; // r5@1
  int v7; // r0@1

  v4 = a1;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v6 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_BYTE *)(v4 + 28) = 1;
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = &unk_28898CC;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  *(_DWORD *)(v4 + 24) = 7;
  *(_DWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)Entity::getUniqueID(v6);
  v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
  *(_DWORD *)(v4 + 48) = EntityClassTree::getEntityTypeIdLegacy(v7);
  return v4;
}


unsigned int __fastcall EventPacket::write(EventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  EventPacket *v3; // r5@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 2);
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 6));
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 28));
  result = *((_DWORD *)v3 + 6);
  if ( result <= 0xA )
    JUMPOUT(__CS__, (char *)sub_14BF276 + 4 * result);
  return result;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *this, int a3, int a4, int a5)
{
  int v5; // r6@1
  __int16 v6; // r5@1
  int v7; // r4@1
  int result; // r0@1

  v5 = a1;
  v6 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v7 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(this);
  *(_BYTE *)(v5 + 28) = 1;
  *(_DWORD *)(v5 + 56) = &unk_28898CC;
  *(_DWORD *)(v5 + 60) = &unk_28898CC;
  *(_DWORD *)(v5 + 64) = &unk_28898CC;
  *(_DWORD *)(v5 + 24) = 5;
  result = v5;
  *(_WORD *)(v5 + 32) = v6;
  *(_DWORD *)(v5 + 36) = v7;
  *(_WORD *)(v5 + 40) = a5;
  return result;
}


int *__fastcall EventPacket::EventDetails::EventDetails(int *a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r5@1

  v3 = a3;
  v4 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v4 + 1, v3);
  v4[2] = (int)&unk_28898CC;
  return v4;
}


char *__fastcall EventPacket::getEventDetails(EventPacket *this)
{
  return (char *)this + 56;
}


EventPacket *__fastcall EventPacket::~EventPacket(EventPacket *this)
{
  EventPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E9D30;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 15);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 14);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


char *__fastcall EventPacket::getEventData(EventPacket *this)
{
  return (char *)this + 24;
}


int __fastcall EventPacket::EventPacket(int a1, Entity *this, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r5@1
  int v10; // r0@1

  v7 = a1;
  v8 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v9 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D30;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(this);
  *(_BYTE *)(v7 + 28) = 1;
  *(_DWORD *)(v7 + 56) = &unk_28898CC;
  *(_DWORD *)(v7 + 60) = &unk_28898CC;
  *(_DWORD *)(v7 + 64) = &unk_28898CC;
  *(_DWORD *)(v7 + 24) = 10;
  v10 = v7 + 40;
  *(_DWORD *)(v7 + 32) = v8;
  *(_DWORD *)(v7 + 36) = v9;
  *(_DWORD *)v10 = a5;
  *(_DWORD *)(v10 + 4) = a6;
  *(_DWORD *)(v10 + 8) = a7;
  return v7;
}


void __fastcall EventPacket::~EventPacket(EventPacket *this)
{
  EventPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E9D30;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 15);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 14);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  operator delete((void *)v1);
}
