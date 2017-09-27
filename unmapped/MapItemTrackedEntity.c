

MapItemTrackedEntity *__fastcall MapItemTrackedEntity::nextUpdatePacket(MapItemTrackedEntity *this, const MapItemSavedData *a2, _QWORD *a3)
{
  const MapItemSavedData *v3; // r6@1
  MapItemTrackedEntity *v4; // r7@1
  _QWORD *v5; // r5@1
  MapItemTrackedEntity *v6; // ST28_4@2
  char v7; // ST2C_1@2
  int v8; // r4@2
  int v9; // r7@2
  int v10; // r10@2
  int v11; // r11@2
  int v12; // r8@2
  void *v13; // r9@2
  MapItemTrackedEntity *result; // r0@2
  char v22; // r8@5
  int v23; // r4@5
  void *v24; // r6@5
  int v25[2]; // [sp+30h] [bp-48h]@5
  int v26[2]; // [sp+38h] [bp-40h]@5
  int v27; // [sp+40h] [bp-38h]@2
  int v28; // [sp+44h] [bp-34h]@2
  int v29; // [sp+48h] [bp-30h]@2
  int v30; // [sp+4Ch] [bp-2Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( *((_BYTE *)a2 + 36) )
  {
    *((_BYTE *)a2 + 36) = 0;
    v6 = this;
    j_MapItemSavedData::getMapId((MapItemSavedData *)&v29, a3);
    v7 = *((_BYTE *)v5 + 36);
    j_MapItemSavedData::getPixels((MapItemSavedData *)&v27, (int)v5);
    v8 = *((_DWORD *)v3 + 10);
    v9 = *((_DWORD *)v3 + 11);
    v10 = *((_DWORD *)v3 + 12);
    v11 = *((_DWORD *)v3 + 13);
    v12 = *((_DWORD *)v5 + 8);
    v13 = j_operator new(0x5Cu);
    ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(
      (int)v13,
      v28,
      v29,
      v30,
      v7,
      (_QWORD *)((char *)v5 + 68),
      v27,
      v8,
      v9,
      v10 + 1 - v8,
      v11 + 1 - v9,
      v12);
    result = v6;
    *(_DWORD *)v6 = v13;
  }
  else
    _R0 = *((_DWORD *)a2 + 14);
    _R1 = 1717986919;
    *((_DWORD *)v3 + 14) = _R0 + 1;
    __asm { SMMUL.W         R1, R0, R1 }
    if ( _R0 == 5 * (((signed int)_R1 >> 1) + (_R1 >> 31)) )
    {
      j_MapItemSavedData::getMapId((MapItemSavedData *)v26, a3);
      v22 = *((_BYTE *)v5 + 36);
      j_MapItemSavedData::getPixels((MapItemSavedData *)v25, (int)v5);
      v23 = *((_DWORD *)v5 + 8);
      v24 = j_operator new(0x5Cu);
      result = (MapItemTrackedEntity *)ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(
                                         (int)v24,
                                         v25[1],
                                         v26[0],
                                         v26[1],
                                         v22,
                                         (_QWORD *)((char *)v5 + 68),
                                         v25[0],
                                         0,
                                         v23);
      *(_DWORD *)v4 = v24;
    }
    else
      result = 0;
      *(_DWORD *)v4 = 0;
  return result;
}


int __fastcall MapItemTrackedEntity::getDecorationRotation(MapItemTrackedEntity *this, BlockSource *a2)
{
  BlockSource *v3; // r5@1
  int v4; // r0@1
  int v9; // r0@3
  int v10; // r0@3
  int v12; // r0@5
  unsigned int v13; // r0@7
  int result; // r0@15

  _R4 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  __asm { VLDR            S16, [R4,#0x3C] }
  if ( v4 == 1 )
  {
    v12 = j_BlockSource::getBlockEntity(a2, (MapItemTrackedEntity *)((char *)_R4 + 16));
    if ( v12 && j_BlockEntity::isType(v12, 17) == 1 )
    {
      v13 = j_BlockSource::getData(v3, (MapItemTrackedEntity *)((char *)_R4 + 16));
      if ( v13 == 1 )
      {
        __asm { VLDR            S16, =90.0 }
      }
      else if ( v13 == 3 )
        __asm { VLDR            S16, =180.0 }
      else
        _R1 = dword_1967D4C;
        if ( v13 == 2 )
          _R1 = &dword_1967D4C[1];
        __asm { VLDR            S16, [R1] }
      __asm { VSTR            S16, [R4,#0x3C] }
    }
  }
  else if ( !v4 )
    v9 = j_BlockSource::getLevel(a2);
    v10 = j_Level::fetchEntity(v9, 0, *((_QWORD *)_R4 + 1), *((_QWORD *)_R4 + 1) >> 32, 0);
    if ( v10 )
      _R0 = (*(int (**)(void))(*(_DWORD *)v10 + 636))();
      __asm { VMOV            S16, R0 }
      *((_DWORD *)_R4 + 15) = _R0;
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall MapItemTrackedEntity::UniqueId::load(MapItemTrackedEntity::UniqueId *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  MapItemTrackedEntity::UniqueId *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  unsigned int *v14; // r2@29
  signed int v15; // r1@31
  int v16; // [sp+8h] [bp-38h]@11
  int v17; // [sp+10h] [bp-30h]@6
  int v18; // [sp+18h] [bp-28h]@5
  int v19; // [sp+20h] [bp-20h]@4
  int v20; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v20, "type");
  *(_DWORD *)v3 = j_CompoundTag::getInt((int)v2, (const void **)&v20);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  if ( !*(_DWORD *)v3 )
    sub_21E94B4((void **)&v16, "entityId");
    *((_QWORD *)v3 + 1) = j_CompoundTag::getInt64((int)v2, (const void **)&v16);
    v7 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v16 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_34;
    goto LABEL_33;
  if ( *(_DWORD *)v3 == 1 )
    sub_21E94B4((void **)&v19, "blockX");
    *((_DWORD *)v3 + 4) = j_CompoundTag::getInt((int)v2, (const void **)&v19);
    v5 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v19 - 4);
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
    sub_21E94B4((void **)&v18, "blockY");
    *((_DWORD *)v3 + 5) = j_CompoundTag::getInt((int)v2, (const void **)&v18);
    v6 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v18 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v17, "blockZ");
    *((_DWORD *)v3 + 6) = j_CompoundTag::getInt((int)v2, (const void **)&v17);
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v17 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_34;
LABEL_33:
      v9 = (*v8)--;
LABEL_34:
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


int __fastcall MapItemTrackedEntity::setPixelDirty(int result, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3@2
  unsigned int v4; // r3@4

  if ( *(_BYTE *)(result + 36) )
  {
    v3 = *(_DWORD *)(result + 40);
    if ( v3 >= a2 )
      v3 = a2;
    *(_DWORD *)(result + 40) = v3;
    v4 = *(_DWORD *)(result + 44);
    if ( v4 >= a3 )
      v4 = a3;
    *(_DWORD *)(result + 44) = v4;
    if ( *(_DWORD *)(result + 48) > a2 )
      a2 = *(_DWORD *)(result + 48);
    *(_DWORD *)(result + 48) = a2;
    if ( *(_DWORD *)(result + 52) > a3 )
      a3 = *(_DWORD *)(result + 52);
    *(_DWORD *)(result + 52) = a3;
  }
  else
    *(_BYTE *)(result + 36) = 1;
    *(_QWORD *)(result + 40) = *(_QWORD *)&a2;
  return result;
}


void __fastcall MapItemTrackedEntity::UniqueId::save(MapItemTrackedEntity::UniqueId *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  MapItemTrackedEntity::UniqueId *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  unsigned int *v14; // r2@29
  signed int v15; // r1@31
  int v16; // [sp+8h] [bp-38h]@11
  int v17; // [sp+10h] [bp-30h]@6
  int v18; // [sp+18h] [bp-28h]@5
  int v19; // [sp+20h] [bp-20h]@4
  int v20; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v20, "type");
  j_CompoundTag::putInt((int)v2, (const void **)&v20, *(_DWORD *)v3);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  if ( !*(_DWORD *)v3 )
    sub_21E94B4((void **)&v16, "entityId");
    j_CompoundTag::putInt64((int)v2, (const void **)&v16, *((_QWORD *)v3 + 1), *((_QWORD *)v3 + 1) >> 32);
    v7 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v16 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_34;
    goto LABEL_33;
  if ( *(_DWORD *)v3 == 1 )
    sub_21E94B4((void **)&v19, "blockX");
    j_CompoundTag::putInt((int)v2, (const void **)&v19, *((_DWORD *)v3 + 4));
    v5 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v19 - 4);
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
    sub_21E94B4((void **)&v18, "blockY");
    j_CompoundTag::putInt((int)v2, (const void **)&v18, *((_DWORD *)v3 + 5));
    v6 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v18 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v17, "blockZ");
    j_CompoundTag::putInt((int)v2, (const void **)&v17, *((_DWORD *)v3 + 6));
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v17 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_34;
LABEL_33:
      v9 = (*v8)--;
LABEL_34:
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


int __fastcall MapItemTrackedEntity::getEntity(MapItemTrackedEntity *this, BlockSource *a2)
{
  MapItemTrackedEntity *v2; // r4@1
  int result; // r0@2
  int v4; // r0@3

  v2 = this;
  if ( *(_DWORD *)this )
  {
    result = 0;
  }
  else
    v4 = j_BlockSource::getLevel(a2);
    result = j_Level::fetchEntity(v4, 0, *((_QWORD *)v2 + 1), *((_QWORD *)v2 + 1) >> 32, 0);
  return result;
}


void __fastcall MapItemTrackedEntity::UniqueId::load(MapItemTrackedEntity::UniqueId *this, const CompoundTag *a2)
{
  MapItemTrackedEntity::UniqueId::load(this, a2);
}


void __fastcall MapItemTrackedEntity::UniqueId::save(MapItemTrackedEntity::UniqueId *this, CompoundTag *a2)
{
  MapItemTrackedEntity::UniqueId::save(this, a2);
}


int __fastcall MapItemTrackedEntity::MapItemTrackedEntity(int a1, int a2, BlockSource *a3)
{
  BlockSource *v3; // r5@1
  int v4; // r2@1
  int v5; // r4@1
  int v6; // r0@1
  Dimension *v7; // r0@4
  ChunkSource *v8; // r6@4
  void *v9; // r5@4
  int result; // r0@4

  v3 = a3;
  v4 = *(_DWORD *)a2;
  v5 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 8) = -1;
  v6 = a1 + 8;
  *(_DWORD *)(v6 + 4) = -1;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  if ( v4 )
  {
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 24);
  }
  else
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 36) = 1;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = 127;
  *(_DWORD *)(v5 + 52) = 127;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 68) = j_BlockSource::getDimensionId(v3);
  v7 = (Dimension *)j_BlockSource::getDimension(v3);
  v8 = (ChunkSource *)j_Dimension::getChunkSource(v7);
  v9 = j_operator new(0xA0u);
  j_ChunkViewSource::ChunkViewSource((int)v9, v8, 1);
  result = v5;
  *(_DWORD *)(v5 + 72) = v9;
  return result;
}


int __fastcall MapItemTrackedEntity::getBlockEntity(MapItemTrackedEntity *this, BlockSource *a2)
{
  MapItemTrackedEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int result; // r0@3

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)this != 1 || j_BlockSource::getDimensionId(a2) != *((_DWORD *)this + 17) )
    result = 0;
  else
    result = j_j_j__ZN11BlockSource14getBlockEntityERK8BlockPos_1(v3, (MapItemTrackedEntity *)((char *)v2 + 16));
  return result;
}
