

int __fastcall ChalkboardBlockEntity::setOnGround(int result, bool a2)
{
  *(_BYTE *)(result + 125) = a2;
  return result;
}


void __fastcall ChalkboardBlockEntity::~ChalkboardBlockEntity(ChalkboardBlockEntity *this)
{
  ChalkboardBlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2709358;
  v2 = *((_DWORD *)this + 27);
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
  v4 = *((_DWORD *)v1 + 26);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  BlockEntity::~BlockEntity(v1);
  operator delete((void *)v1);
}


int __fastcall ChalkboardBlockEntity::getShadowRadius(ChalkboardBlockEntity *this, BlockSource *a2)
{
  Block *v2; // r0@1
  int result; // r0@3

  v2 = (Block *)BlockSource::getBlock(a2, (ChalkboardBlockEntity *)((char *)this + 32));
  Block::isType(v2, (const Block *)Block::mSign);
  __asm
  {
    VLDR            S2, =0.2
    VLDR            S0, =0.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall ChalkboardBlockEntity::playerMayEdit(ChalkboardBlockEntity *this, Player *a2)
{
  Entity *v2; // r4@1
  ChalkboardBlockEntity *v3; // r5@1
  __int64 v4; // r5@3
  __int64 v5; // r0@3
  bool v6; // zf@3
  signed int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 648))(a2) || !*((_BYTE *)v3 + 126) )
  {
    result = 1;
  }
  else
    v4 = *((_QWORD *)v3 + 16);
    v5 = *(_QWORD *)Entity::getUniqueID(v2);
    HIDWORD(v5) ^= HIDWORD(v4);
    v6 = v5 == (unsigned int)v4;
    result = 0;
    if ( v6 )
      result = 1;
  return result;
}


char *__fastcall ChalkboardBlockEntity::getUnfilteredText(ChalkboardBlockEntity *this)
{
  return (char *)this + 104;
}


int __fastcall ChalkboardBlockEntity::ChalkboardBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Chalkboard");
  BlockEntity::BlockEntity(v3, 20, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
  *(_DWORD *)v3 = &off_2709358;
  *(_DWORD *)(v3 + 104) = &unk_28898CC;
  *(_DWORD *)(v3 + 108) = &unk_28898CC;
  *(_DWORD *)(v3 + 112) = BlockPos::MIN;
  *(_DWORD *)(v3 + 116) = dword_2816254;
  *(_DWORD *)(v3 + 120) = dword_2816258;
  *(_BYTE *)(v3 + 124) = 0;
  *(_BYTE *)(v3 + 125) = 0;
  *(_BYTE *)(v3 + 126) = 1;
  *(_DWORD *)(v3 + 128) = -1;
  *(_DWORD *)(v3 + 132) = -1;
  *(_DWORD *)(v3 + 84) = 9;
  return v3;
}


CompoundTag *__fastcall ChalkboardBlockEntity::getUpdatePacket(ChalkboardBlockEntity *this, BlockSource *a2)
{
  ChalkboardBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@2
  int v5; // r3@2
  int v6; // r1@2
  int v7; // r2@2
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@2

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  if ( (*(int (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9) == 1 )
  {
    v4 = operator new(0x38u);
    CompoundTag::CompoundTag((int)&v10, (int)&v9);
    v4[1] = 2;
    v4[2] = 1;
    v5 = (int)(v4 + 4);
    *((_BYTE *)v4 + 12) = 0;
    *v4 = &off_26E97EC;
    v6 = *((_DWORD *)v3 + 9);
    v7 = *((_DWORD *)v3 + 10);
    *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
    CompoundTag::~CompoundTag((CompoundTag *)&v10);
    *(_DWORD *)v2 = v4;
  }
  else
    *(_DWORD *)v2 = 0;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


void __fastcall ChalkboardBlockEntity::calculateAllBlocks(int a1, int a2, int a3, unsigned int a4)
{
  ChalkboardBlockEntity::calculateAllBlocks(a1, a2, a3, a4);
}


signed int __fastcall ChalkboardBlockEntity::playerMayToggleLock(ChalkboardBlockEntity *this, Player *a2)
{
  Entity *v2; // r4@1
  ChalkboardBlockEntity *v3; // r5@1
  signed int result; // r0@2
  __int64 v5; // r5@3
  __int64 v6; // r0@3
  bool v7; // zf@3

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 648))(a2) )
  {
    result = 1;
  }
  else
    v5 = *((_QWORD *)v3 + 16);
    v6 = *(_QWORD *)Entity::getUniqueID(v2);
    HIDWORD(v6) ^= HIDWORD(v5);
    v7 = v6 == (unsigned int)v5;
    result = 0;
    if ( v7 )
      result = 1;
  return result;
}


int __fastcall ChalkboardBlockEntity::setBasePos(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 112) = *(_DWORD *)a2;
  *(_DWORD *)(result + 116) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 120) = *((_DWORD *)a2 + 2);
  return result;
}


signed int __fastcall ChalkboardBlockEntity::getWidth(ChalkboardBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 124);
  result = 16;
  if ( v1 == 2 )
    result = 48;
  if ( v1 == 1 )
    result = 32;
  return result;
}


signed int __fastcall ChalkboardBlockEntity::_isOwner(ChalkboardBlockEntity *this, Player *a2)
{
  __int64 v2; // r4@1
  __int64 v3; // r0@1
  bool v4; // zf@1
  signed int result; // r0@1

  v2 = *((_QWORD *)this + 16);
  v3 = *(_QWORD *)Entity::getUniqueID(a2);
  HIDWORD(v3) ^= HIDWORD(v2);
  v4 = v3 == (unsigned int)v2;
  result = 0;
  if ( v4 )
    result = 1;
  return result;
}


BlockEntity *__fastcall ChalkboardBlockEntity::getBaseChalkboard(ChalkboardBlockEntity *this, BlockSource *a2)
{
  BlockEntity *v2; // r0@1
  BlockEntity *v3; // r4@1
  BlockEntity *result; // r0@2

  v2 = (BlockEntity *)BlockSource::getBlockEntity(a2, (ChalkboardBlockEntity *)((char *)this + 112));
  v3 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v2) != 20 )
      v3 = 0;
    result = v3;
  }
  else
    result = 0;
  return result;
}


    if ( ChalkboardBlockEntity::getLocked(v3) == 1 )
{
    else
      result = sub_119C884(v2, "chalkboardScreen.unlocked");
  }
  else
  {
    result = sub_119C854((int *)v2, (int *)&Util::EMPTY_STRING);
  return result;
}


signed int __fastcall ChalkboardBlockEntity::getHeight(ChalkboardBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 124);
  result = 16;
  if ( v1 == 2 )
    result = 32;
  if ( v1 == 1 )
    result = 16;
  return result;
}


int *__fastcall ChalkboardBlockEntity::getText(ChalkboardBlockEntity *this, const UIProfanityContext *a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)((char *)this + 108);
  if ( !*(_DWORD *)(*((_DWORD *)this + 27) - 12) )
  {
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v7);
    v3 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
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
  }
  return v2;
}


char *__fastcall ChalkboardBlockEntity::setText(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 104), a2);
  return sub_21E7EE0((const void **)(v2 + 108), 0, *(_BYTE **)(*(_DWORD *)(v2 + 108) - 12), 0);
}


signed int __fastcall ChalkboardBlockEntity::playerMayDestroy(ChalkboardBlockEntity *this, Player *a2)
{
  Entity *v2; // r4@1
  ChalkboardBlockEntity *v3; // r5@1
  signed int result; // r0@2
  __int64 v5; // r5@3
  __int64 v6; // r0@3
  bool v7; // zf@3

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 648))(a2) )
  {
    result = 1;
  }
  else
    v5 = *((_QWORD *)v3 + 16);
    v6 = *(_QWORD *)Entity::getUniqueID(v2);
    HIDWORD(v6) ^= HIDWORD(v5);
    v7 = v6 == (unsigned int)v5;
    result = 0;
    if ( v7 )
      result = 1;
  return result;
}


int __fastcall ChalkboardBlockEntity::createChalkboard(Entity *a1, BlockSource *a2, __int64 a3, unsigned int a4, char a5, int *a6, int a7)
{
  BlockSource *v7; // r6@1
  const BlockPos *v8; // r10@1
  BlockPos *v9; // r11@1
  const BlockPos *v10; // r4@3
  int v11; // r4@8
  int v12; // r7@13
  int (__fastcall *v13)(int, int, char *, char *); // r5@14
  BlockPos *v14; // r8@18
  Level *v15; // r0@19
  void *v16; // r11@20
  int v17; // r0@24
  int v18; // r4@30
  BlockPos *v19; // r8@31
  void *v20; // r11@32
  int v21; // r0@34
  const BlockPos *v22; // r4@40
  BlockPos *v24; // [sp+Ch] [bp-54h]@18
  __int64 v25; // [sp+10h] [bp-50h]@1
  Entity *v26; // [sp+18h] [bp-48h]@1
  void *v27; // [sp+1Ch] [bp-44h]@22
  char v28; // [sp+20h] [bp-40h]@22
  char v29; // [sp+21h] [bp-3Fh]@22
  char v30; // [sp+24h] [bp-3Ch]@19
  char v31; // [sp+28h] [bp-38h]@14
  char v32; // [sp+2Ch] [bp-34h]@11
  char v33; // [sp+2Dh] [bp-33h]@11
  BlockPos *v34; // [sp+30h] [bp-30h]@1
  const BlockPos *v35; // [sp+34h] [bp-2Ch]@1

  v7 = a2;
  v25 = a3;
  v26 = a1;
  ChalkboardBlockEntity::calculateAllBlocks((int)&v34, a3, SHIDWORD(a3), a4);
  v8 = v35;
  v9 = v34;
  if ( v34 != v35 )
  {
    if ( v26 )
    {
      v10 = v34;
      while ( (*(int (**)(void))(*Block::mChalkboard + 224))()
           && BlockSource::checkBlockPermissions(v7, v26, v10, 6, (const ItemInstance *)&ItemInstance::EMPTY_ITEM, 1) == 1 )
      {
        v10 = (const BlockPos *)((char *)v10 + 12);
        if ( v8 == v10 )
          goto LABEL_11;
      }
    }
    else
      v11 = (int)v34;
      while ( (*(int (**)(void))(*Block::mChalkboard + 224))() == 1 )
        v11 += 12;
        if ( v8 == (const BlockPos *)v11 )
    goto LABEL_30;
  }
LABEL_11:
  v32 = *((_BYTE *)Block::mChalkboard + 4);
  v33 = a4;
  if ( v9 != v8 )
    if ( a7 )
      v12 = (int)v9;
      while ( 1 )
        v13 = *(int (__fastcall **)(int, int, char *, char *))(*(_DWORD *)a7 + 8);
        BlockSource::getBlockAndData((BlockSource *)&v31, v7, v12);
        if ( v13(a7, v12, &v31, &v32) )
          break;
        v12 += 12;
        if ( v8 == (const BlockPos *)v12 )
        {
          if ( v9 == v8 )
            goto LABEL_42;
          goto LABEL_17;
        }
LABEL_30:
      v18 = 0;
      goto LABEL_43;
LABEL_17:
      v14 = v9;
      v24 = v9;
      do
        BlockSource::getBlockAndData((BlockSource *)&v30, v7, (int)v14);
        v15 = (Level *)Entity::getLevel(v26);
        if ( Level::isClientSide(v15) )
          v16 = 0;
        else
          v16 = operator new(0x88u);
          ChalkboardBlockEntity::ChalkboardBlockEntity((int)v16, (int)v14);
          *((_DWORD *)v16 + 28) = *(_DWORD *)v25;
          *((_DWORD *)v16 + 29) = *(_DWORD *)(v25 + 4);
          *((_DWORD *)v16 + 30) = *(_DWORD *)(v25 + 8);
          *((_BYTE *)v16 + 125) = a5;
          *((_BYTE *)v16 + 124) = BYTE4(v25);
          EntityInteraction::setInteractText((int *)v16 + 26, a6);
          sub_21E7EE0((const void **)v16 + 27, 0, *(_BYTE **)(*((_DWORD *)v16 + 27) - 12), 0);
          BlockEntity::setChanged((BlockEntity *)v16);
          *((_QWORD *)v16 + 16) = *(_QWORD *)Entity::getUniqueID(v26);
        v28 = v32;
        v29 = v33;
        v27 = v16;
        BlockSource::setBlockAndData((int)v7, v14, (int)&v28, 2, 0, (int)&v27);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        v27 = 0;
        v17 = BlockSource::getBlockEntity(v7, v14);
        if ( v17 )
          *(_BYTE *)(v17 + 124) = BYTE4(v25);
        if ( a7 )
          (*(void (__fastcall **)(int, BlockPos *, char *, char *))(*(_DWORD *)a7 + 12))(a7, v14, &v30, &v32);
        v14 = (BlockPos *)((char *)v14 + 12);
      while ( v8 != v14 );
      v19 = v9;
        BlockSource::getBlockAndData((BlockSource *)&v30, v7, (int)v19);
        v20 = operator new(0x88u);
        ChalkboardBlockEntity::ChalkboardBlockEntity((int)v20, (int)v19);
        *((_DWORD *)v20 + 28) = *(_DWORD *)v25;
        *((_DWORD *)v20 + 29) = *(_DWORD *)(v25 + 4);
        *((_DWORD *)v20 + 30) = *(_DWORD *)(v25 + 8);
        *((_BYTE *)v20 + 125) = a5;
        *((_BYTE *)v20 + 124) = BYTE4(v25);
        EntityInteraction::setInteractText((int *)v20 + 26, a6);
        sub_21E7EE0((const void **)v20 + 27, 0, *(_BYTE **)(*((_DWORD *)v20 + 27) - 12), 0);
        BlockEntity::setChanged((BlockEntity *)v20);
        v27 = v20;
        BlockSource::setBlockAndData((int)v7, v19, (int)&v28, 2, 0, (int)&v27);
        v21 = BlockSource::getBlockEntity(v7, v19);
        if ( v21 )
          *(_BYTE *)(v21 + 124) = BYTE4(v25);
          (*(void (__fastcall **)(int, BlockPos *, char *, char *))(*(_DWORD *)a7 + 12))(a7, v19, &v30, &v32);
        v19 = (BlockPos *)((char *)v19 + 12);
      while ( v8 != v19 );
    v9 = v24;
    if ( v24 != v8 )
      v22 = v24;
        BlockSource::updateNeighborsAt(v7, v22);
        v22 = (const BlockPos *)((char *)v22 + 12);
      while ( v8 != v22 );
LABEL_42:
  v18 = BlockSource::getBlockEntity(v7, (const BlockPos *)v25);
LABEL_43:
  if ( v9 )
    operator delete((void *)v9);
  return v18;
}


int __fastcall ChalkboardBlockEntity::load(ChalkboardBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ChalkboardBlockEntity *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r1@2
  int v6; // r2@2
  bool v7; // zf@2
  int *v8; // r0@6
  char v9; // r0@7

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  *((_DWORD *)v3 + 28) = CompoundTag::getInt((int)v2, (const void **)&unk_280E798);
  *((_DWORD *)v3 + 29) = CompoundTag::getInt((int)v2, (const void **)&unk_280E79C);
  LODWORD(v4) = CompoundTag::getInt((int)v2, (const void **)&unk_280E7A0);
  *((_DWORD *)v3 + 30) = v4;
  if ( *((_DWORD *)v3 + 8) == *((_DWORD *)v3 + 28) )
  {
    v5 = *((_DWORD *)v3 + 9);
    v6 = *((_DWORD *)v3 + 29);
    v7 = v5 == v6;
    if ( v5 == v6 )
      v7 = *((_DWORD *)v3 + 10) == (_DWORD)v4;
    if ( v7 )
    {
      v8 = (int *)CompoundTag::getString((int)v2, (const void **)&unk_280E794);
      EntityInteraction::setInteractText((int *)v3 + 26, v8);
      sub_21E7EE0((const void **)v3 + 27, 0, *(_BYTE **)(*((_DWORD *)v3 + 27) - 12), 0);
      *((_BYTE *)v3 + 124) = CompoundTag::getInt((int)v2, (const void **)&unk_280E7A4);
      *((_BYTE *)v3 + 125) = CompoundTag::getBoolean((int)v2, (const void **)&unk_280E7A8);
      if ( CompoundTag::contains((int)v2, (const void **)&unk_280E7AC) == 1 )
        v9 = CompoundTag::getBoolean((int)v2, (const void **)&unk_280E7AC);
      else
        v9 = 1;
      *((_BYTE *)v3 + 126) = v9;
      if ( CompoundTag::contains((int)v2, (const void **)&unk_280E7B0) == 1 )
        v4 = CompoundTag::getInt64((int)v2, (const void **)&unk_280E7B0);
        v4 = -1LL;
      *((_QWORD *)v3 + 16) = v4;
    }
  }
  return v4;
}


ChalkboardBlockEntity *__fastcall ChalkboardBlockEntity::~ChalkboardBlockEntity(ChalkboardBlockEntity *this)
{
  ChalkboardBlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2709358;
  v2 = *((_DWORD *)this + 27);
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
  v4 = *((_DWORD *)v1 + 26);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  BlockEntity::~BlockEntity(v1);
  return v1;
}


void __fastcall ChalkboardBlockEntity::~ChalkboardBlockEntity(ChalkboardBlockEntity *this)
{
  ChalkboardBlockEntity::~ChalkboardBlockEntity(this);
}


int __fastcall ChalkboardBlockEntity::setLocked(int result, bool a2)
{
  *(_BYTE *)(result + 126) = a2;
  return result;
}


int __fastcall ChalkboardBlockEntity::setOwnerId(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 128) = a3;
  return result;
}


int __fastcall ChalkboardBlockEntity::convertFromEntity(ChalkboardBlockEntity *this, BlockSource *a2, const CompoundTag *a3)
{
  BlockSource *v3; // r8@1
  BlockSource *v4; // r5@1
  int v5; // r6@1
  ListTag *v6; // r6@2
  void *v7; // r0@2
  int v8; // r7@3
  _BOOL4 v9; // r6@3
  int *v10; // r0@3
  int v11; // r5@3
  unsigned __int8 v12; // r0@3
  int v14; // r7@9
  int *v18; // r0@11
  __int64 v19; // r2@11
  void *v20; // r0@11
  void *v21; // r0@12
  unsigned int *v23; // r2@14
  signed int v24; // r1@16
  unsigned int *v25; // r2@18
  signed int v26; // r1@20
  unsigned int *v27; // r2@22
  signed int v28; // r1@24
  int v29; // [sp+14h] [bp-44h]@11
  char v30; // [sp+18h] [bp-40h]@11
  int v31; // [sp+24h] [bp-34h]@3
  int v32; // [sp+2Ch] [bp-2Ch]@2
  int v33; // [sp+30h] [bp-28h]@2
  int v34; // [sp+34h] [bp-24h]@2
  int v35; // [sp+38h] [bp-20h]@2

  v3 = this;
  v4 = a2;
  v5 = 0;
  if ( Block::mChalkboard )
  {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    sub_21E94B4((void **)&v32, "Pos");
    v6 = (ListTag *)CompoundTag::getList((int)v4, (const void **)&v32);
    v7 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v33 = ListTag::getFloat(v6, 0);
    v34 = ListTag::getFloat(v6, 1);
    v35 = ListTag::getFloat(v6, 2);
    v8 = CompoundTag::getInt((int)v4, (const void **)&unk_280E7B4);
    v9 = CompoundTag::getBoolean((int)v4, (const void **)&unk_280E7B8);
    v10 = (int *)CompoundTag::getString((int)v4, (const void **)&unk_280E7BC);
    sub_21E8AF4(&v31, v10);
    v11 = CompoundTag::getInt((int)v4, (const void **)&unk_280E7C0);
    v12 = v8 - 1;
    _ZF = ((v8 + 255) & 0xFF) == 0;
    if ( !((v8 + 255) & 0xFF) )
      _ZF = !v9 == 1;
    if ( _ZF && v11 >= 4 )
      v11 = (v11 + 1) / 4
          - (((v11 + 1) / 4
            + ((unsigned int)((signed int)(v11 + 1 + ((unsigned int)((v11 + 1) >> 31) >> 30)) >> 31) >> 30)) & 0xFFFFFFFC);
    v14 = v12;
    if ( v12 == 2 )
      __asm
        VMOVEQ.F32      S0, #-1.0
        VLDREQ          S2, [SP,#0x58+var_24]
        VADDEQ.F32      S0, S2, S0
        VSTREQ          S0, [SP,#0x58+var_24]
    BlockPos::BlockPos((int)&v30, (int)&v33);
    v18 = sub_21E8AF4(&v29, &v31);
    LODWORD(v19) = &v30;
    HIDWORD(v19) = v14;
    v5 = ChalkboardBlockEntity::createChalkboard(0, v3, v19, v11, v9, v18, 0);
    v20 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  }
  return v5;
}


signed int __fastcall ChalkboardBlockEntity::_isBaseEntity(ChalkboardBlockEntity *this)
{
  ChalkboardBlockEntity *v1; // r1@1
  signed int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 28) == *((_DWORD *)this + 8) )
  {
    result = 0;
    if ( *((_DWORD *)v1 + 29) == *((_DWORD *)v1 + 9) && *((_DWORD *)v1 + 30) == *((_DWORD *)v1 + 10) )
      result = 1;
  }
  else
  return result;
}


void __fastcall ChalkboardBlockEntity::calculateAllBlocks(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7@1
  unsigned int v5; // r4@1
  int v6; // r8@1
  int v7; // r10@1
  unsigned __int64 *v8; // r0@3
  unsigned __int64 *v9; // r3@3
  unsigned __int64 v10; // r1@3
  int v11; // r0@3
  unsigned __int64 *v12; // r0@4
  unsigned __int64 *v13; // r0@5
  int v14; // r11@7
  int v15; // r9@7
  unsigned int v16; // r0@10
  int v17; // r4@12
  unsigned __int64 *v18; // ST00_4@12
  __int64 v19; // r0@12
  unsigned __int64 *v20; // r7@15
  int v21; // r4@17 OVERLAPPED
  int v22; // r3@17 OVERLAPPED
  int v23; // r2@17
  unsigned __int64 *ptr; // [sp+0h] [bp-38h]@14
  unsigned __int64 *v25; // [sp+4h] [bp-34h]@6
  int v26; // [sp+8h] [bp-30h]@17
  int v27; // [sp+Ch] [bp-2Ch]@17
  int v28; // [sp+10h] [bp-28h]@17

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  if ( a3 == 1 )
  {
    v12 = (unsigned __int64 *)operator new(0x10u);
    v9 = v12;
    *(_DWORD *)v12 = 0;
    *((_DWORD *)v12 + 1) = 0;
    *((_DWORD *)v12 + 2) = 1;
    *((_DWORD *)v12 + 3) = 0;
    v11 = (int)(v12 + 2);
  }
  else if ( a3 == 2 )
    v8 = (unsigned __int64 *)operator new(0x30u);
    v9 = v8;
    LODWORD(v10) = -1;
    HIDWORD(v10) = 1;
    *((_DWORD *)v8 + 1) = 0;
    *(_DWORD *)v8 = -1;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 4) = 1;
    v8[3] = v10;
    *((_DWORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 9) = 1;
    v11 = (int)(v8 + 6);
    *((_DWORD *)v9 + 10) = 1;
    *((_DWORD *)v9 + 11) = 1;
  else
    v13 = (unsigned __int64 *)operator new(8u);
    v9 = v13;
    *(_DWORD *)v13 = 0;
    *((_DWORD *)v13 + 1) = 0;
    v11 = (int)(v13 + 1);
  v25 = (unsigned __int64 *)v11;
  if ( v4 )
    v14 = 0;
    v15 = 0;
    if ( v5 <= 3 )
    {
      v15 = dword_2610A6C[v5];
      v14 = dword_2610A5C[v5];
    }
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  v16 = (v11 - (signed int)v9) >> 3;
  if ( v16 >= 0x15555556 )
    sub_21E5A04("vector::reserve");
  if ( v16 )
    v17 = 3 * v16;
    v18 = v9;
    LODWORD(v19) = operator new(12 * v16);
    *(_DWORD *)v7 = v19;
    *(_DWORD *)(v7 + 4) = v19;
    HIDWORD(v19) = v19 + 4 * v17;
    v9 = v18;
    *(_DWORD *)(v7 + 8) = HIDWORD(v19);
    v19 = 0LL;
  ptr = v9;
  if ( v9 != v25 )
    v20 = v9;
    while ( 1 )
      v21 = (*v20 >> 32) + (*(_QWORD *)v6 >> 32);
      v22 = *(_QWORD *)v6 + *v20 * v15;
      v23 = *(_DWORD *)(v6 + 8) + *v20 * v14;
      v26 = *(_QWORD *)v6 + *v20 * v15;
      v27 = v21;
      v28 = v23;
      if ( (_DWORD)v19 == HIDWORD(v19) )
      {
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>((unsigned __int64 *)v7, (int)&v26);
      }
      else
        *(_QWORD *)v19 = *(_QWORD *)&v22;
        *(_DWORD *)(v19 + 8) = v23;
        *(_DWORD *)(v7 + 4) = v19 + 12;
      ++v20;
      if ( v20 == v25 )
        break;
      v19 = *(_QWORD *)(v7 + 4);
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ChalkboardBlockEntity::setChalkboardSize(int result, char a2)
{
  *(_BYTE *)(result + 124) = a2;
  return result;
}


signed int __fastcall ChalkboardBlockEntity::save(ChalkboardBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ChalkboardBlockEntity *v3; // r5@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    CompoundTag::putInt((int)v2, (const void **)&unk_280E798, *((_DWORD *)v3 + 28));
    CompoundTag::putInt((int)v2, (const void **)&unk_280E79C, *((_DWORD *)v3 + 29));
    CompoundTag::putInt((int)v2, (const void **)&unk_280E7A0, *((_DWORD *)v3 + 30));
    if ( *((_DWORD *)v3 + 8) == *((_DWORD *)v3 + 28)
      && *((_DWORD *)v3 + 9) == *((_DWORD *)v3 + 29)
      && *((_DWORD *)v3 + 10) == *((_DWORD *)v3 + 30) )
    {
      CompoundTag::putString((int)v2, (const void **)&unk_280E794, (int *)v3 + 26);
      CompoundTag::putInt((int)v2, (const void **)&unk_280E7A4, *((_BYTE *)v3 + 124));
      CompoundTag::putBoolean((int)v2, (const void **)&unk_280E7A8, *((_BYTE *)v3 + 125));
      CompoundTag::putBoolean((int)v2, (const void **)&unk_280E7AC, *((_BYTE *)v3 + 126));
      CompoundTag::putInt64((int)v2, (const void **)&unk_280E7B0, *((_QWORD *)v3 + 16), *((_QWORD *)v3 + 16) >> 32);
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ChalkboardBlockEntity::isBaseChalkboard(ChalkboardBlockEntity *this)
{
  ChalkboardBlockEntity *v1; // r1@1
  signed int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 8) == *((_DWORD *)this + 28) )
  {
    result = 0;
    if ( *((_DWORD *)v1 + 9) == *((_DWORD *)v1 + 29) && *((_DWORD *)v1 + 10) == *((_DWORD *)v1 + 30) )
      result = 1;
  }
  else
  return result;
}


int __fastcall ChalkboardBlockEntity::getOwnerId(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 128);
  return result;
}
