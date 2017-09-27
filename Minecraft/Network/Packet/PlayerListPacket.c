

int __fastcall PlayerListPacket::handle(PlayerListPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayerListPacket *))(*(_DWORD *)a3 + 296))(
           a3,
           a2,
           this);
}


signed int __fastcall PlayerListPacket::read(PlayerListPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r11@1
  PlayerListPacket *v3; // r10@1
  int v4; // r7@1
  int v5; // r6@3
  __int64 v6; // r0@4
  __int64 v7; // r0@10
  int v9; // [sp+8h] [bp-C8h]@4
  signed int v10; // [sp+Ch] [bp-C4h]@4
  int v11; // [sp+10h] [bp-C0h]@4
  int v12; // [sp+14h] [bp-BCh]@4
  int v13; // [sp+18h] [bp-B8h]@4
  int v14; // [sp+1Ch] [bp-B4h]@4
  void *v15; // [sp+20h] [bp-B0h]@4
  void *v16; // [sp+24h] [bp-ACh]@4
  int v17; // [sp+28h] [bp-A8h]@4
  int v18; // [sp+2Ch] [bp-A4h]@4
  int v19; // [sp+30h] [bp-A0h]@4
  int v20; // [sp+34h] [bp-9Ch]@4
  int v21; // [sp+38h] [bp-98h]@4
  int v22; // [sp+3Ch] [bp-94h]@4
  void *v23; // [sp+40h] [bp-90h]@4
  void *v24; // [sp+44h] [bp-8Ch]@4
  void *v25; // [sp+48h] [bp-88h]@4
  int v26; // [sp+50h] [bp-80h]@10
  signed int v27; // [sp+54h] [bp-7Ch]@10
  int v28; // [sp+58h] [bp-78h]@10
  int v29; // [sp+5Ch] [bp-74h]@10
  int v30; // [sp+60h] [bp-70h]@10
  int v31; // [sp+64h] [bp-6Ch]@10
  void *v32; // [sp+68h] [bp-68h]@10
  void *v33; // [sp+6Ch] [bp-64h]@10
  int v34; // [sp+70h] [bp-60h]@10
  int v35; // [sp+74h] [bp-5Ch]@10
  int v36; // [sp+78h] [bp-58h]@10
  int v37; // [sp+7Ch] [bp-54h]@10
  int v38; // [sp+80h] [bp-50h]@10
  int v39; // [sp+84h] [bp-4Ch]@10
  void *v40; // [sp+88h] [bp-48h]@10
  void *v41; // [sp+8Ch] [bp-44h]@10
  void *v42; // [sp+90h] [bp-40h]@10
  char v43; // [sp+98h] [bp-38h]@4
  int v44; // [sp+9Ch] [bp-34h]@4
  int v45; // [sp+A0h] [bp-30h]@4
  int v46; // [sp+A4h] [bp-2Ch]@4

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 28) = ReadOnlyBinaryStream::getByte(a2);
  v4 = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  if ( *((_BYTE *)v3 + 28) )
  {
    if ( *((_BYTE *)v3 + 28) != 1 )
      return 1;
    v5 = 0;
    if ( v4 )
    {
      do
      {
        v9 = -1;
        v10 = -1;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = &unk_28898CC;
        v16 = &unk_28898CC;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = &unk_28898CC;
        v24 = &unk_28898CC;
        v25 = &unk_28898CC;
        ReadOnlyBinaryStream::getType<mce::UUID>((int)&v43, (int)v2);
        v11 = *(_DWORD *)&v43;
        v12 = v44;
        v13 = v45;
        v14 = v46;
        v6 = *(_QWORD *)((char *)v3 + 20);
        if ( (_DWORD)v6 == HIDWORD(v6) )
        {
          std::vector<PlayerListEntry,std::allocator<PlayerListEntry>>::_M_emplace_back_aux<PlayerListEntry&>(
            (unsigned __int64 *)v3 + 2,
            (int)&v9);
        }
        else
          PlayerListEntry::PlayerListEntry(v6, (int)&v9);
          *((_DWORD *)v3 + 5) += 72;
        PlayerListEntry::~PlayerListEntry((PlayerListEntry *)&v9);
        --v4;
      }
      while ( v4 );
      return 0;
    }
  }
  else
        v26 = -1;
        v27 = -1;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = &unk_28898CC;
        v33 = &unk_28898CC;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = &unk_28898CC;
        v41 = &unk_28898CC;
        v42 = &unk_28898CC;
        PlayerListEntry::read((PlayerListEntry *)&v26, v2);
        v7 = *(_QWORD *)((char *)v3 + 20);
        if ( (_DWORD)v7 == HIDWORD(v7) )
            (int)&v26);
          PlayerListEntry::PlayerListEntry(v7, (int)&v26);
        PlayerListEntry::~PlayerListEntry((PlayerListEntry *)&v26);
  return v5;
}


const void **__fastcall PlayerListPacket::write(PlayerListPacket *this, BinaryStream *a2)
{
  PlayerListPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  const void **result; // r0@1
  PlayerListEntry *v5; // r5@3
  PlayerListEntry *j; // r6@3
  __int64 v7; // kr00_8@3
  int v8; // r5@6
  int i; // r6@6
  __int64 v10; // kr08_8@6

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 28));
  BinaryStream::writeUnsignedVarInt(
    v3,
    954437177 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3));
  result = (const void **)*((_BYTE *)v2 + 28);
  if ( result == (const void **)1 )
  {
    v10 = *((_QWORD *)v2 + 2);
    v8 = *((_QWORD *)v2 + 2) >> 32;
    for ( i = v10; v8 != i; i += 72 )
      result = BinaryStream::writeType<mce::UUID>((int)v3, (_QWORD *)(i + 8));
  }
  else if ( !*((_BYTE *)v2 + 28) )
    v7 = *((_QWORD *)v2 + 2);
    v5 = (PlayerListEntry *)(*((_QWORD *)v2 + 2) >> 32);
    for ( j = (PlayerListEntry *)v7; v5 != j; j = (PlayerListEntry *)((char *)j + 72) )
      result = PlayerListEntry::write(j, v3);
  return result;
}


void __fastcall PlayerListPacket::~PlayerListPacket(PlayerListPacket *this)
{
  PlayerListPacket *v1; // r4@1
  PlayerListEntry *v2; // r0@1
  PlayerListEntry *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E988C;
  v3 = (PlayerListEntry *)(*((_QWORD *)this + 2) >> 32);
  v2 = (PlayerListEntry *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
      v2 = (PlayerListEntry *)((char *)PlayerListEntry::~PlayerListEntry(v2) + 72);
    while ( v3 != v2 );
    v2 = (PlayerListEntry *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PlayerListPacket::~PlayerListPacket(PlayerListPacket *this)
{
  PlayerListPacket::~PlayerListPacket(this);
}


PlayerListPacket *__fastcall PlayerListPacket::~PlayerListPacket(PlayerListPacket *this)
{
  PlayerListPacket *v1; // r4@1
  PlayerListEntry *v2; // r0@1
  PlayerListEntry *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E988C;
  v3 = (PlayerListEntry *)(*((_QWORD *)this + 2) >> 32);
  v2 = (PlayerListEntry *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
      v2 = (PlayerListEntry *)((char *)PlayerListEntry::~PlayerListEntry(v2) + 72);
    while ( v3 != v2 );
    v2 = (PlayerListEntry *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


int __fastcall PlayerListPacket::PlayerListPacket(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@1
  signed int v7; // [sp+0h] [bp-58h]@1
  signed int v8; // [sp+4h] [bp-54h]@1
  __int64 v9; // [sp+8h] [bp-50h]@1
  __int64 v10; // [sp+10h] [bp-48h]@1
  void *v11; // [sp+18h] [bp-40h]@1
  void *v12; // [sp+1Ch] [bp-3Ch]@1
  int v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  int v17; // [sp+30h] [bp-28h]@1
  int v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  void *v21; // [sp+40h] [bp-18h]@1

  v2 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E988C;
  *(_DWORD *)(a1 + 16) = 0;
  v3 = a1 + 16;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 12) = 1;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v7 = -1;
  v8 = -1;
  v9 = v4;
  v10 = v5;
  v11 = &unk_28898CC;
  v12 = &unk_28898CC;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v13 = 0;
  v14 = 0;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v21 = &unk_28898CC;
  std::vector<PlayerListEntry,std::allocator<PlayerListEntry>>::_M_emplace_back_aux<PlayerListEntry>(
    (unsigned __int64 *)(a1 + 16),
    (int)&v7);
  PlayerListEntry::~PlayerListEntry((PlayerListEntry *)&v7);
  return v2;
}


signed int __fastcall PlayerListPacket::getId(PlayerListPacket *this)
{
  return 63;
}
