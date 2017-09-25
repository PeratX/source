

char *__fastcall ClientboundMapItemDataPacket::getMapIds(ClientboundMapItemDataPacket *this)
{
  return (char *)this + 16;
}


signed int __fastcall ClientboundMapItemDataPacket::getId(ClientboundMapItemDataPacket *this)
{
  return 67;
}


void __fastcall ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket(ClientboundMapItemDataPacket *this)
{
  ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket(this);
}


int __fastcall ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(int a1)
{
  int v1; // r7@1
  int v2; // r5@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9C74;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v2 = a1 + 32;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_default_append(a1 + 16, 1u);
  return v1;
}


_BOOL4 __fastcall ClientboundMapItemDataPacket::isTextureUpdate(ClientboundMapItemDataPacket *this)
{
  return *((_DWORD *)this + 17) != 0;
}


int __fastcall ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(int a1, int a2, int a3, int a4, char a5, unsigned __int64 *a6, int a7, int a8, int a9, int a10, signed int a11, int a12, char a13)
{
  return ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13);
}


int __fastcall ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(int a1, int a2, int a3, int a4, char a5, unsigned __int64 *a6, int a7, int a8, int a9, int a10, signed int a11, int a12, char a13)
{
  int v13; // r8@1
  int v14; // r10@1
  int v15; // r5@1
  char *v16; // r0@1
  int v17; // r10@1
  int v18; // r5@1
  int v19; // r11@1
  unsigned int v20; // r7@1
  char *v21; // r4@2
  int v22; // r0@2
  char *v23; // r9@3
  _QWORD *v24; // r5@4
  unsigned __int64 *v25; // r11@4
  unsigned __int64 *v26; // r6@5
  signed int v27; // r0@7
  _QWORD *v28; // r1@8
  __int64 v29; // r2@9
  signed int v30; // r4@10
  unsigned __int64 v31; // kr08_8@12
  _QWORD *v32; // r2@16
  _QWORD *v33; // r1@16
  __int64 v34; // r0@19
  int v35; // r1@20
  unsigned int *v36; // r1@21
  unsigned int v37; // r0@23
  int v38; // r1@29
  __int64 v39; // kr10_8@30
  unsigned int v40; // r1@30
  unsigned int v41; // r2@30
  bool v42; // nf@34
  unsigned __int8 v43; // vf@34
  int v44; // r2@37
  int v45; // r7@37
  int v46; // r5@38
  _DWORD *v47; // r3@38
  int *v48; // r0@38
  int v49; // r4@39
  void **v51; // [sp+10h] [bp-28h]@1

  v13 = a1;
  v14 = a4;
  *(_DWORD *)(a1 + 4) = 2;
  v15 = a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9C74;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v16 = (char *)operator new(8u);
  *(_DWORD *)(v13 + 16) = v16;
  *(_DWORD *)(v13 + 24) = v16 + 8;
  *(_DWORD *)v16 = v15;
  *((_DWORD *)v16 + 1) = v14;
  *(_DWORD *)(v13 + 20) = v16 + 8;
  *(_BYTE *)(v13 + 28) = a5;
  *(_DWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 52) = 0;
  *(_DWORD *)(v13 + 36) = 0;
  *(_DWORD *)(v13 + 40) = 0;
  *(_DWORD *)(v13 + 44) = 0;
  v51 = (void **)(v13 + 44);
  *(_DWORD *)(v13 + 32) = 0;
  *(_DWORD *)(v13 + 56) = a9;
  *(_DWORD *)(v13 + 60) = a10;
  *(_BYTE *)(v13 + 64) = a13;
  *(_DWORD *)(v13 + 68) = a11;
  *(_DWORD *)(v13 + 72) = a12;
  *(_DWORD *)(v13 + 76) = 4;
  *(_DWORD *)(v13 + 80) = 0;
  v17 = v13 + 80;
  *(_DWORD *)(v17 + 4) = 0;
  *(_DWORD *)(v17 + 8) = 0;
  std::vector<std::shared_ptr<MapDecoration>,std::allocator<std::shared_ptr<MapDecoration>>>::reserve(
    v13 + 32,
    -858993459 * ((signed int)((*a6 >> 32) - *a6) >> 3));
  v19 = *a6 >> 32;
  v18 = *a6;
  v20 = -858993459 * ((v19 - v18) >> 3);
  if ( v20 >= 0x20000000 )
    sub_21E5A04("vector::reserve");
  v21 = *(char **)(v13 + 44);
  v22 = *(_DWORD *)(v13 + 52);
  if ( (v22 - (signed int)v21) >> 3 >= v20 )
  {
    v26 = (unsigned __int64 *)(v13 + 44);
  }
  else
    v23 = *(char **)(v13 + 48);
    if ( v19 == v18 )
    {
      v24 = 0;
      v25 = a6;
    }
    else
      v24 = operator new(1717986920 * ((v19 - v18) >> 3));
    v27 = v23 - v21;
    if ( v23 != v21 )
      v28 = v24;
      do
      {
        v29 = *(_QWORD *)v21;
        v21 += 8;
        *v28 = v29;
        ++v28;
      }
      while ( v23 != v21 );
    v30 = v27 >> 3;
    if ( *v51 )
      operator delete(*v51);
    v22 = (int)&v24[v20];
    *(_DWORD *)(v13 + 44) = v24;
    *(_DWORD *)(v13 + 48) = &v24[v30];
    *(_DWORD *)(v13 + 52) = v22;
    v31 = *v25;
    v19 = *v25 >> 32;
    v18 = v31;
  if ( v18 != v19 )
    while ( 1 )
      v32 = *(_QWORD **)(v13 + 48);
      v33 = (_QWORD *)(v18 + 8);
      if ( v32 == (_QWORD *)v22 )
        std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID const&>(v26, v33);
      else
        *v32 = *v33;
        *(_DWORD *)(v13 + 48) = v32 + 1;
      v34 = *(_QWORD *)(v13 + 36);
      if ( (_DWORD)v34 == HIDWORD(v34) )
        std::vector<std::shared_ptr<MapDecoration>,std::allocator<std::shared_ptr<MapDecoration>>>::_M_emplace_back_aux<std::shared_ptr<MapDecoration> const&>(
          (unsigned __int64 *)(v13 + 32),
          v18 + 32);
        *(_DWORD *)v34 = *(_DWORD *)(v18 + 32);
        HIDWORD(v34) = *(_DWORD *)(v18 + 36);
        *(_DWORD *)(v34 + 4) = HIDWORD(v34);
        if ( HIDWORD(v34) )
        {
          v36 = (unsigned int *)(v35 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 + 1, v36) );
            LODWORD(v34) = *(_DWORD *)(v13 + 36);
          }
          else
            ++*v36;
        }
        *(_DWORD *)(v13 + 36) = v34 + 8;
      v18 += 40;
      if ( v18 == v19 )
        break;
      v22 = *(_DWORD *)(v13 + 52);
  v38 = *(_DWORD *)(v13 + 68);
  if ( v38 > 0 )
    *(_DWORD *)(v13 + 76) |= 2u;
    v39 = *(_QWORD *)(v13 + 80);
    v40 = v38 * *(_DWORD *)(v13 + 72);
    v41 = (HIDWORD(v39) - (signed int)v39) >> 2;
    if ( v40 <= v41 )
      if ( v40 < v41 )
        *(_DWORD *)(v13 + 84) = v39 + 4 * v40;
      std::vector<unsigned int,std::allocator<unsigned int>>::_M_default_append(v13 + 80, v40 - v41);
    v43 = __OFSUB__(a11, 1);
    v42 = a11 - 1 < 0;
    if ( a11 >= 1 )
      v43 = __OFSUB__(a12, 1);
      v42 = a12 - 1 < 0;
    if ( !(v42 ^ v43) )
      v44 = 0;
      v45 = a7 + 4 * (a9 + (a10 << 7));
        v46 = a12;
        v47 = (_DWORD *)(*(_DWORD *)v17 + 4 * v44);
        v48 = (int *)v45;
        do
          v49 = *v48;
          v48 += 128;
          *v47 = v49;
          v47 += a11;
          --v46;
        while ( v46 );
        ++v44;
        v45 += 4;
      while ( v44 != a11 );
  return v13;
}


ClientboundMapItemDataPacket *__fastcall ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket(ClientboundMapItemDataPacket *this)
{
  ClientboundMapItemDataPacket *v1; // r8@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r5@5
  int v5; // r7@5
  int v6; // r4@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r6@13
  unsigned int v10; // r0@15
  void *v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_26E9C74;
  v2 = (void *)*((_DWORD *)this + 20);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 11);
  if ( v3 )
    operator delete(v3);
  v5 = *((_QWORD *)v1 + 4) >> 32;
  v4 = *((_QWORD *)v1 + 4);
  if ( v4 != v5 )
  {
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 == 1 )
          v9 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v4 += 8;
    }
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 8);
  }
  if ( v4 )
    operator delete((void *)v4);
  v11 = (void *)*((_DWORD *)v1 + 4);
  if ( v11 )
    operator delete(v11);
  return v1;
}


int __fastcall ClientboundMapItemDataPacket::applyToMap(ClientboundMapItemDataPacket *this, MapItemSavedData *a2)
{
  ClientboundMapItemDataPacket *v2; // r9@1
  MapItemSavedData *v3; // r8@1
  int v4; // r0@1
  __int64 v5; // r2@4
  char *v6; // r0@4
  unsigned int v7; // r4@4
  int v8; // r12@8
  char *v9; // r5@8
  int v10; // r4@9
  unsigned int *v11; // r4@10
  unsigned int v12; // r1@12
  char *v13; // r0@17
  __int64 v14; // r2@17
  unsigned int v15; // r4@17
  int v16; // r1@21
  char *v17; // r6@21
  __int64 v18; // kr00_8@22
  int v19; // r4@26
  int v20; // r6@26
  int v21; // r5@27
  unsigned int *v22; // r1@28
  unsigned int v23; // r0@30
  unsigned int *v24; // r7@34
  unsigned int v25; // r0@36
  int result; // r0@45
  void *ptr; // [sp+10h] [bp-38h]@17
  char *v28; // [sp+14h] [bp-34h]@17
  char *v29; // [sp+18h] [bp-30h]@17
  char *v30; // [sp+1Ch] [bp-2Ch]@4
  char *v31; // [sp+20h] [bp-28h]@4
  char *v32; // [sp+24h] [bp-24h]@4

  v2 = this;
  v3 = a2;
  MapItemSavedData::setDimensionId((int)a2, *((_BYTE *)this + 64));
  v4 = *((_DWORD *)v2 + 19);
  if ( v4 & 6 )
  {
    MapItemSavedData::setScale(v3, *((_BYTE *)v2 + 28));
    v4 = *((_DWORD *)v2 + 19);
  }
  if ( v4 & 4 )
    v5 = *((_QWORD *)v2 + 4);
    v6 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v7 = (HIDWORD(v5) - (signed int)v5) >> 3;
    if ( v7 )
    {
      if ( v7 >= 0x20000000 )
        sub_21E57F4();
      v6 = (char *)operator new(HIDWORD(v5) - v5);
      v5 = *((_QWORD *)v2 + 4);
    }
    v30 = v6;
    v31 = v6;
    v32 = &v6[8 * v7];
    if ( (_DWORD)v5 != HIDWORD(v5) )
      v8 = -(signed int)v5;
      v9 = v6;
      do
      {
        *(_DWORD *)v9 = *(_DWORD *)v5;
        v10 = *(_DWORD *)(v5 + 4);
        *((_DWORD *)v9 + 1) = v10;
        if ( v10 )
        {
          v11 = (unsigned int *)(v10 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 + 1, v11) );
          }
          else
            ++*v11;
        }
        LODWORD(v5) = v5 + 8;
        v9 += 8;
      }
      while ( (_DWORD)v5 != HIDWORD(v5) );
      v6 += ((HIDWORD(v5) - 8 + v8) & 0xFFFFFFF8) + 8;
    v13 = 0;
    v14 = *(_QWORD *)((char *)v2 + 44);
    ptr = 0;
    v28 = 0;
    v29 = 0;
    v15 = (HIDWORD(v14) - (signed int)v14) >> 3;
    if ( v15 )
      if ( v15 >= 0x20000000 )
      v13 = (char *)operator new(HIDWORD(v14) - v14);
      v14 = *(_QWORD *)((char *)v2 + 44);
    ptr = v13;
    v28 = v13;
    v29 = &v13[8 * v15];
    if ( (_DWORD)v14 != HIDWORD(v14) )
      v16 = -(signed int)v14;
      v17 = v13;
        v18 = *(_QWORD *)v14;
        LODWORD(v14) = v14 + 8;
        *(_QWORD *)v17 = v18;
        v17 += 8;
      while ( HIDWORD(v14) != (_DWORD)v14 );
      v13 += ((v16 + HIDWORD(v14) - 8) & 0xFFFFFFF8) + 8;
    MapItemSavedData::replaceDecorations((int)v3, (__int64 *)&v30, &ptr);
    if ( ptr )
      operator delete(ptr);
    v19 = (int)v31;
    v20 = (int)v30;
    if ( v30 != v31 )
        v21 = *(_DWORD *)(v20 + 4);
        if ( v21 )
          v22 = (unsigned int *)(v21 + 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(v21 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            if ( &pthread_create )
            {
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            }
            else
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        v20 += 8;
      while ( v20 != v19 );
      v20 = (int)v30;
    if ( v20 )
      operator delete((void *)v20);
  result = *((_BYTE *)v2 + 76);
  if ( result & 2 )
    result = MapItemSavedData::replacePixels(
               (int)v3,
               *((_QWORD *)v2 + 10),
               *((_QWORD *)v2 + 10) >> 32,
               *((_QWORD *)v2 + 7),
               *((_QWORD *)v2 + 7) >> 32,
               *(_QWORD *)((char *)v2 + 68),
               *(_QWORD *)((char *)v2 + 68) >> 32);
  return result;
}


_BOOL4 __fastcall ClientboundMapItemDataPacket::isOfType(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 76) & a2) != 0;
}


int __fastcall ClientboundMapItemDataPacket::handle(ClientboundMapItemDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ClientboundMapItemDataPacket *))(*(_DWORD *)a3 + 308))(
           a3,
           a2,
           this);
}


int __fastcall ClientboundMapItemDataPacket::getMapId(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)*(_DWORD *)(a2 + 16);
  return result;
}


unsigned int __fastcall ClientboundMapItemDataPacket::write(ClientboundMapItemDataPacket *this, BinaryStream *a2)
{
  ClientboundMapItemDataPacket *v2; // r8@1
  BinaryStream *v3; // r4@1
  __int64 *v4; // r5@2
  __int64 *i; // r6@2
  int v6; // r0@9
  __int64 *v7; // r5@12
  __int64 *j; // r6@12
  MapDecoration **v9; // r5@19
  MapDecoration **k; // r6@19
  unsigned int result; // r0@26
  __int64 l; // r6@27
  void *v13; // [sp+0h] [bp-58h]@27
  int (__fastcall *v14)(void **, void **, int); // [sp+8h] [bp-50h]@27
  unsigned int (__fastcall *v15)(int, BinaryStream *, unsigned int *); // [sp+Ch] [bp-4Ch]@27
  void *v16; // [sp+10h] [bp-48h]@19
  void (*v17)(void); // [sp+18h] [bp-40h]@19
  unsigned int (__fastcall *v18)(int, int, MapDecoration **); // [sp+1Ch] [bp-3Ch]@19
  void *v19; // [sp+20h] [bp-38h]@12
  void (*v20)(void); // [sp+28h] [bp-30h]@12
  const void **(__fastcall *v21)(int, int, __int64 *); // [sp+2Ch] [bp-2Ch]@12
  void *v22; // [sp+30h] [bp-28h]@2
  void (*v23)(void); // [sp+38h] [bp-20h]@2
  const void **(__fastcall *v24)(int, int, __int64 *); // [sp+3Ch] [bp-1Ch]@2

  v2 = this;
  v3 = a2;
  BinaryStream::writeType<EntityUniqueID>((int)a2, *((__int64 **)this + 4));
  BinaryStream::writeUnsignedVarInt(v3, *((_DWORD *)v2 + 19));
  BinaryStream::writeUnsignedChar(v3, *((_BYTE *)v2 + 64));
  if ( *((_BYTE *)v2 + 76) & 8 )
  {
    v22 = operator new(1u);
    v23 = (void (*)(void))sub_14BB934;
    v24 = sub_14BB92C;
    BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3);
    v4 = (__int64 *)(*((_QWORD *)v2 + 2) >> 32);
    for ( i = (__int64 *)*((_QWORD *)v2 + 2); v4 != i; ++i )
    {
      if ( !v23 )
        sub_21E5F48();
      v24((int)&v22, (int)v3, i);
    }
    if ( v23 )
      v23();
  }
  v6 = *((_DWORD *)v2 + 19);
  if ( v6 & 6 )
    BinaryStream::writeByte(v3, *((_BYTE *)v2 + 28));
    v6 = *((_DWORD *)v2 + 19);
  if ( v6 & 4 )
    v19 = operator new(1u);
    v20 = (void (*)(void))sub_14BB97C;
    v21 = sub_14BB962;
    BinaryStream::writeUnsignedVarInt(
      v3,
      (signed int)((*(_QWORD *)((char *)v2 + 44) >> 32) - *(_QWORD *)((char *)v2 + 44)) >> 3);
    v7 = (__int64 *)(*(_QWORD *)((char *)v2 + 44) >> 32);
    for ( j = (__int64 *)*(_QWORD *)((char *)v2 + 44); v7 != j; ++j )
      if ( !v20 )
      v21((int)&v19, (int)v3, j);
    if ( v20 )
      v20();
    v16 = operator new(1u);
    v17 = (void (*)(void))sub_14BB9B4;
    v18 = sub_14BB9AA;
    BinaryStream::writeUnsignedVarInt(v3, (signed int)((*((_QWORD *)v2 + 4) >> 32) - *((_QWORD *)v2 + 4)) >> 3);
    v9 = (MapDecoration **)(*((_QWORD *)v2 + 4) >> 32);
    for ( k = (MapDecoration **)*((_QWORD *)v2 + 4); v9 != k; k += 2 )
      if ( !v17 )
      v18((int)&v16, (int)v3, k);
    if ( v17 )
      v17();
  result = *((_BYTE *)v2 + 76);
  if ( result & 2 )
    BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 17));
    BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 18));
    BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 14));
    BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 15));
    v13 = operator new(1u);
    v14 = sub_14BB9EC;
    v15 = sub_14BB9E2;
    result = BinaryStream::writeUnsignedVarInt(
               v3,
               (signed int)((*((_QWORD *)v2 + 10) >> 32) - *((_QWORD *)v2 + 10)) >> 2);
    for ( l = *((_QWORD *)v2 + 10); HIDWORD(l) != (_DWORD)l; LODWORD(l) = l + 4 )
      if ( !v14 )
      result = v15((int)&v13, v3, (unsigned int *)l);
    if ( v14 )
      result = ((int (__cdecl *)(void **))v14)(&v13);
  return result;
}


int __fastcall ClientboundMapItemDataPacket::read(ClientboundMapItemDataPacket *this, BinaryStream *a2)
{
  ClientboundMapItemDataPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  _QWORD *v4; // r7@1
  int v5; // r0@4
  unsigned int v6; // r6@12
  int v7; // r7@13
  void **v8; // r8@13
  int v9; // r9@14
  char *v10; // r10@15
  signed int v11; // r9@17
  void *v13; // [sp+0h] [bp-58h]@9
  void (*v14)(void); // [sp+8h] [bp-50h]@9
  void (__fastcall *v15)(int, int, int); // [sp+Ch] [bp-4Ch]@9
  void *v16; // [sp+10h] [bp-48h]@7
  void (*v17)(void); // [sp+18h] [bp-40h]@7
  unsigned int (__fastcall *v18)(int, int, int); // [sp+1Ch] [bp-3Ch]@7
  void *v19; // [sp+20h] [bp-38h]@2
  void (*v20)(void); // [sp+28h] [bp-30h]@2
  unsigned int (__fastcall *v21)(int, int, int); // [sp+2Ch] [bp-2Ch]@2
  char v22; // [sp+30h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (_QWORD *)*((_DWORD *)this + 4);
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v22, (int)a2);
  *v4 = *(_QWORD *)&v22;
  *((_DWORD *)v2 + 19) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  *((_BYTE *)v2 + 64) = ReadOnlyBinaryStream::getUnsignedChar(v3);
  if ( *((_BYTE *)v2 + 76) & 8 )
  {
    v19 = operator new(1u);
    v20 = (void (*)(void))sub_14BB438;
    v21 = sub_14BB42E;
    ReadOnlyBinaryStream::readVectorList<EntityUniqueID>(v3, (int)v2 + 16, (int)&v19);
    if ( v20 )
      v20();
  }
  v5 = *((_DWORD *)v2 + 19);
  if ( v5 & 6 )
    *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getByte(v3);
    v5 = *((_DWORD *)v2 + 19);
  if ( v5 & 4 )
    v16 = operator new(1u);
    v17 = (void (*)(void))sub_14BB470;
    v18 = sub_14BB466;
    ReadOnlyBinaryStream::readVectorList<EntityUniqueID>(v3, (int)v2 + 44, (int)&v16);
    if ( v17 )
      v17();
    v13 = operator new(1u);
    v14 = (void (*)(void))sub_14BB6A0;
    v15 = sub_14BB5E0;
    ReadOnlyBinaryStream::readVectorList<std::shared_ptr<MapDecoration>>(v3, (int)v2 + 32, (int)&v13);
    if ( v14 )
      v14();
  if ( *((_BYTE *)v2 + 76) & 2 )
    *((_DWORD *)v2 + 17) = ReadOnlyBinaryStream::getVarInt(v3);
    *((_DWORD *)v2 + 18) = ReadOnlyBinaryStream::getVarInt(v3);
    *((_DWORD *)v2 + 14) = ReadOnlyBinaryStream::getVarInt(v3);
    *((_DWORD *)v2 + 15) = ReadOnlyBinaryStream::getVarInt(v3);
    v6 = (*(_QWORD *)((char *)v2 + 68) >> 32) * *(_QWORD *)((char *)v2 + 68);
    if ( v6 >= 0x40000000 )
      sub_21E5A04("vector::reserve");
    v7 = *((_DWORD *)v2 + 20);
    v8 = (void **)((char *)v2 + 80);
    if ( (*((_DWORD *)v2 + 22) - v7) >> 2 < v6 )
    {
      v9 = *((_DWORD *)v2 + 21);
      if ( v6 )
        v10 = (char *)operator new(4 * v6);
      else
        v10 = 0;
      v11 = v9 - v7;
      if ( v11 )
        _aeabi_memmove4(v10, v7);
      if ( *v8 )
        operator delete(*v8);
      *((_DWORD *)v2 + 20) = v10;
      *((_DWORD *)v2 + 21) = &v10[4 * (v11 >> 2)];
      *((_DWORD *)v2 + 22) = &v10[4 * v6];
    }
    ReadOnlyBinaryStream::readVectorList(v3, (int)v2 + 80);
  return 0;
}


int __fastcall ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(int a1, MapItemSavedData *a2, int a3)
{
  int v3; // r5@1
  MapItemSavedData *v4; // r4@1
  int v5; // r11@1
  unsigned __int64 *v6; // r9@1
  int v7; // r8@1
  __int64 v8; // r0@1
  MapItemSavedData *v9; // r6@4
  int v10; // r1@7
  __int64 v11; // r0@7
  __int64 v13; // [sp+0h] [bp-40h]@5
  __int64 v14; // [sp+8h] [bp-38h]@7
  char v15; // [sp+10h] [bp-30h]@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9C74;
  v5 = a3;
  *(_DWORD *)(a1 + 16) = 0;
  v6 = (unsigned __int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v7 = a1 + 32;
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 44) = 8LL;
  *(_DWORD *)(v7 + 52) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  MapItemSavedData::getMapId((MapItemSavedData *)&v15, a2);
  v8 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID>(v6, &v15);
  }
  else
    *(_QWORD *)v8 = *(_QWORD *)&v15;
    *(_DWORD *)(v3 + 20) = v8 + 8;
  v9 = v4;
  while ( MapItemSavedData::hasParentMap(v9) == 1 )
    MapItemSavedData::getParentMapId((MapItemSavedData *)&v14, (int)v9);
    v9 = Level::getMapSavedData(v5, v10, v14);
    MapItemSavedData::getMapId((MapItemSavedData *)&v13, v9);
    v11 = *(_QWORD *)(v3 + 20);
    if ( (_DWORD)v11 == HIDWORD(v11) )
    {
      std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID>(v6, &v13);
    }
    else
      *(_QWORD *)v11 = v13;
      *(_DWORD *)(v3 + 20) = v11 + 8;
  *(_BYTE *)(v3 + 64) = *((_DWORD *)v4 + 8);
  return v3;
}


void __fastcall ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket(ClientboundMapItemDataPacket *this)
{
  ClientboundMapItemDataPacket *v1; // r0@1

  v1 = ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}
