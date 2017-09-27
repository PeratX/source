

RandomizableBlockEntityContainer *__fastcall JukeboxBlockEntity::~JukeboxBlockEntity(JukeboxBlockEntity *this)
{
  JukeboxBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_2709EDC;
  *((_DWORD *)this + 28) = &off_2709F78;
  v2 = (void *)*((_DWORD *)this + 69);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 65);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 58);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 58) = 0;
  return j_j_j__ZN32RandomizableBlockEntityContainerD2Ev(v1);
}


CompoundTag *__fastcall JukeboxBlockEntity::getUpdatePacket(JukeboxBlockEntity *this, BlockSource *a2)
{
  JukeboxBlockEntity *v2; // r4@1
  BlockSource *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  _DWORD *v6; // r6@3
  int v7; // r3@3
  int v8; // r1@3
  int v9; // r2@3
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int v15; // [sp+8h] [bp-58h]@2
  int v16; // [sp+10h] [bp-50h]@1
  char v17; // [sp+14h] [bp-4Ch]@1
  char v18; // [sp+34h] [bp-2Ch]@3

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v17);
  sub_21E94B4((void **)&v16, "FinishedRecording");
  CompoundTag::putBoolean((int)&v17, (const void **)&v16, *((_BYTE *)v3 + 300));
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v15, "TicksPlaying");
  CompoundTag::putInt64(
    (int)&v17,
    (const void **)&v15,
    *((_DWORD *)v3 + 76),
    (unsigned __int64)*((_DWORD *)v3 + 76) >> 32);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  (*(void (__fastcall **)(BlockSource *, char *))(*(_DWORD *)v3 + 12))(v3, &v17);
  v6 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v18, (int)&v17);
  v6[1] = 2;
  v6[2] = 1;
  v7 = (int)(v6 + 4);
  *((_BYTE *)v6 + 12) = 0;
  *v6 = &off_26E97EC;
  v8 = *((_DWORD *)v3 + 9);
  v9 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v7 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  CompoundTag::CompoundTag((int)(v6 + 7), (int)&v18);
  CompoundTag::~CompoundTag((CompoundTag *)&v18);
  *(_DWORD *)v2 = v6;
  return CompoundTag::~CompoundTag((CompoundTag *)&v17);
}


int __fastcall JukeboxBlockEntity::setItem(JukeboxBlockEntity *this, int a2, const ItemInstance *a3)
{
  int v3; // r8@1
  JukeboxBlockEntity *v4; // r5@1
  int v5; // r4@1
  unsigned __int8 v6; // r0@2
  int result; // r0@7
  int v8; // [sp+0h] [bp-60h]@1
  int v9; // [sp+8h] [bp-58h]@7
  unsigned __int8 v10; // [sp+Eh] [bp-52h]@1
  void *v11; // [sp+24h] [bp-3Ch]@5
  void *ptr; // [sp+34h] [bp-2Ch]@3

  v3 = a2;
  v4 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v8, (int)a3);
  v5 = v10;
  if ( v5 > (*(int (__fastcall **)(JukeboxBlockEntity *))(*(_DWORD *)v4 + 128))(v4) )
  {
    v6 = (*(int (__fastcall **)(JukeboxBlockEntity *))(*(_DWORD *)v4 + 128))(v4);
    ItemInstance::set((ItemInstance *)&v8, v6);
  }
  (*(void (__fastcall **)(char *, int, char *, int *))(*((_DWORD *)v4 + 28) + 112))(
    (char *)v4 + 112,
    v3,
    (char *)v4 + 224,
    &v8);
  ItemInstance::operator=((int)v4 + 224, (int)&v8);
  *((_BYTE *)v4 + 300) = 0;
  ItemInstance::set((JukeboxBlockEntity *)((char *)v4 + 224), 1);
  *((_DWORD *)v4 + 76) = 0;
  BlockEntity::setChanged(v4);
  (*(void (__fastcall **)(char *, int))(*((_DWORD *)v4 + 28) + 84))((char *)v4 + 112, v3);
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


signed int __fastcall JukeboxBlockEntity::getContainerSize(JukeboxBlockEntity *this)
{
  return 1;
}


void __fastcall JukeboxBlockEntity::onUpdatePacket(JukeboxBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  JukeboxBlockEntity::onUpdatePacket(this, a2, a3);
}


void __fastcall JukeboxBlockEntity::~JukeboxBlockEntity(JukeboxBlockEntity *this)
{
  JukeboxBlockEntity::~JukeboxBlockEntity(this);
}


int *__fastcall JukeboxBlockEntity::load(JukeboxBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  JukeboxBlockEntity *v3; // r4@1
  const CompoundTag *v4; // r6@1
  void *v5; // r0@1
  int *result; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  *((_DWORD *)v3 + 76) = 0;
  *((_BYTE *)v3 + 300) = 1;
  sub_21E94B4((void **)&v9, "RecordItem");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  if ( v4 && !CompoundTag::isEmpty(v4) )
    result = (int *)ItemInstance::load((JukeboxBlockEntity *)((char *)v3 + 224), v4);
  else
    result = ItemInstance::setNull((JukeboxBlockEntity *)((char *)v3 + 224));
  return result;
}


int __fastcall JukeboxBlockEntity::onChanged(JukeboxBlockEntity *this, BlockSource *a2)
{
  JukeboxBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  const Item *v4; // r1@1
  int v5; // r5@2
  int v6; // r6@2
  Level *v7; // r0@2
  int result; // r0@2
  Dimension *v9; // r0@3
  CircuitSystem *v10; // r0@3
  int v11; // r2@3
  const BlockPos *v12; // r1@3
  RecordItem *v13; // r7@4
  int v14; // r6@7
  char v15; // r7@7
  Level *v20; // r0@7
  Dimension *v21; // r0@8
  Level *v22; // r0@10
  Dimension *v23; // r0@12
  CircuitSystem *v24; // r0@12
  char v25; // [sp+14h] [bp-4Ch]@2
  char v26; // [sp+15h] [bp-4Bh]@2
  char v27; // [sp+18h] [bp-48h]@2
  char v28; // [sp+19h] [bp-47h]@2
  char v29; // [sp+1Ch] [bp-44h]@2
  char v30; // [sp+28h] [bp-38h]@7
  char v31; // [sp+29h] [bp-37h]@7
  char v32; // [sp+2Ch] [bp-34h]@7
  char v33; // [sp+2Dh] [bp-33h]@7
  float v34; // [sp+30h] [bp-30h]@7
  float v37; // [sp+3Ch] [bp-24h]@7

  v2 = this;
  v3 = a2;
  if ( ItemInstance::isNull((JukeboxBlockEntity *)((char *)this + 224)) )
  {
    v5 = (int)v2 + 32;
    v6 = BlockSource::getLevel(v3);
    Vec3::Vec3((int)&v29, v5);
    Level::playSynchronizedSound(v6, (int)v3, 102, (int)&v29, -1, 1, 0, 0);
    v27 = *(_BYTE *)(Block::mJukebox + 4);
    v28 = 0;
    v25 = *(_BYTE *)(Block::mJukebox + 4);
    v26 = 0;
    BlockSource::fireBlockChanged((int)v3, v5, (int)&v27, (int)&v25);
    v7 = (Level *)BlockSource::getLevel(v3);
    result = Level::isClientSide(v7);
    if ( result )
      return result;
    v9 = (Dimension *)BlockSource::getDimension(v3);
    v10 = (CircuitSystem *)Dimension::getCircuitSystem(v9);
    v11 = 0;
    v12 = (const BlockPos *)v5;
    return CircuitSystem::setStrength(v10, v12, v11);
  }
  v13 = (RecordItem *)*((_DWORD *)v2 + 56);
  if ( v13 && !*((_BYTE *)v2 + 300) && RecordItem::isMusicDisc(*((RecordItem **)v2 + 56), v4) == 1 )
    v14 = BlockSource::getLevel(v3);
    v15 = RecordItem::getSound(v13);
    Vec3::Vec3((int)&v34, (int)v2 + 32);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x60+var_30]
      VLDR            S4, [SP,#0x60+var_2C]
      VLDR            S6, [SP,#0x60+var_28]
      VADD.F32        S2, S2, S0
      VADD.F32        S4, S4, S0
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x60+var_24]
      VSTR            S4, [SP,#0x60+var_20]
      VSTR            S0, [SP,#0x60+var_1C]
    }
    Level::playSynchronizedSound(v14, (int)v3, v15, (int)&v37, -1, 1, 0, 0);
    v32 = *(_BYTE *)(Block::mJukebox + 4);
    v33 = 0;
    v30 = *(_BYTE *)(Block::mJukebox + 4);
    v31 = 0;
    BlockSource::fireBlockChanged((int)v3, (int)v2 + 32, (int)&v32, (int)&v30);
    v20 = (Level *)BlockSource::getLevel(v3);
    result = Level::isClientSide(v20);
    v21 = (Dimension *)BlockSource::getDimension(v3);
    v10 = (CircuitSystem *)Dimension::getCircuitSystem(v21);
    v11 = 15;
    v12 = (JukeboxBlockEntity *)((char *)v2 + 32);
  v22 = (Level *)BlockSource::getLevel(v3);
  result = Level::isClientSide(v22);
  if ( !result )
    v23 = (Dimension *)BlockSource::getDimension(v3);
    v24 = (CircuitSystem *)Dimension::getCircuitSystem(v23);
    result = j_j_j__ZN13CircuitSystem11setStrengthERK8BlockPosi_0(v24, (JukeboxBlockEntity *)((char *)v2 + 32), 0);
  return result;
}


int __fastcall JukeboxBlockEntity::tick(JukeboxBlockEntity *this, BlockSource *a2)
{
  JukeboxBlockEntity *v2; // r5@1
  RecordItem **v3; // r7@1
  BlockSource *v4; // r4@1
  Level *v5; // r6@2
  signed int v6; // r0@2
  RecordItem *v7; // r7@3
  char *v14; // r0@9
  Level *v16; // r0@11
  Dimension *v17; // r0@12
  CircuitSystem *v18; // r0@12
  float v20; // [sp+18h] [bp-38h]@9
  float v23; // [sp+24h] [bp-2Ch]@9

  v2 = this;
  v3 = (RecordItem **)((char *)this + 224);
  v4 = a2;
  if ( !ItemInstance::isNull((JukeboxBlockEntity *)((char *)this + 224)) )
  {
    ++*((_DWORD *)v2 + 76);
    v5 = (Level *)BlockSource::getLevel(v4);
    v6 = *((_DWORD *)v2 + 74);
    *((_DWORD *)v2 + 74) = v6 + 1;
    if ( v6 >= 19 )
    {
      v7 = *v3;
      if ( v7 )
      {
        if ( RecordItem::isMusicDisc(v7, (const Item *)(v6 + 1)) == 1 )
        {
          *((_DWORD *)v2 + 74) = 0;
          if ( !*((_BYTE *)v2 + 300) )
          {
            _R0 = *((_DWORD *)v2 + 76);
            __asm
            {
              VLDR            S2, =0.05
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VMUL.F32        S16, S0, S2
            }
            _R0 = RecordItem::getDuration(v7);
              VCMPE.F32       S16, S0
              VMRS            APSR_nzcv, FPSCR
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              Vec3::Vec3((int)&v20, (int)v2 + 32);
              __asm
              {
                VMOV.F32        S0, #0.5
                VLDR            S2, [SP,#0x50+var_38]
                VLDR            S4, [SP,#0x50+var_34]
                VLDR            S8, =1.2
                VLDR            S6, [SP,#0x50+var_30]
                VADD.F32        S4, S4, S8
                VADD.F32        S2, S2, S0
                VADD.F32        S0, S6, S0
                VSTR            S2, [SP,#0x50+var_2C]
                VSTR            S4, [SP,#0x50+var_28]
                VSTR            S0, [SP,#0x50+var_24]
              }
              v14 = Level::getRandom(v5);
              _R0 = Random::_genRandInt32((Random *)v14) & 3;
                VLDR            S2, =0.041667
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
                VMUL.F32        S0, S0, S2
                VSTR            S0, [SP,#0x50+var_44]
              Level::addParticle((int)v5, 36, (int)&v23);
            else if ( !*((_BYTE *)v2 + 300) )
              *((_BYTE *)v2 + 300) = 1;
              BlockEntity::setChanged(v2);
          }
        }
      }
    }
  }
  if ( *((_BYTE *)v2 + 300) )
    v16 = (Level *)BlockSource::getLevel(v4);
    if ( !Level::isClientSide(v16) )
      v17 = (Dimension *)BlockSource::getDimension(v4);
      v18 = (CircuitSystem *)Dimension::getCircuitSystem(v17);
      CircuitSystem::setStrength(v18, (JukeboxBlockEntity *)((char *)v2 + 32), 0);
  return BlockEntity::tick(v2, v4);
}


signed int __fastcall JukeboxBlockEntity::getMaxStackSize(JukeboxBlockEntity *this)
{
  return 1;
}


signed int __fastcall JukeboxBlockEntity::save(JukeboxBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  JukeboxBlockEntity *v3; // r5@1
  ItemInstance *v4; // r5@2
  int v5; // t1@2
  int v6; // r0@3
  void *v7; // r0@7
  signed int result; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+0h] [bp-28h]@3
  int v12; // [sp+4h] [bp-24h]@3
  int v13; // [sp+Ch] [bp-1Ch]@3

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    v5 = *((_DWORD *)v3 + 56);
    v4 = (JukeboxBlockEntity *)((char *)v3 + 224);
    if ( v5 )
    {
      sub_21E94B4((void **)&v13, "RecordItem");
      ItemInstance::save((ItemInstance *)&v11, v4);
      v6 = v11;
      v11 = 0;
      v12 = v6;
      CompoundTag::put((int)v2, (const void **)&v13, &v12);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      v12 = 0;
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
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
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall JukeboxBlockEntity::~JukeboxBlockEntity(JukeboxBlockEntity *this)
{
  JukeboxBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_2709EDC;
  *((_DWORD *)this + 28) = &off_2709F78;
  v2 = (void *)*((_DWORD *)this + 69);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 65);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 58);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 58) = 0;
  RandomizableBlockEntityContainer::~RandomizableBlockEntityContainer(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall JukeboxBlockEntity::onUpdatePacket(JukeboxBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  JukeboxBlockEntity *v3; // r4@1
  const CompoundTag *v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+Ch] [bp-24h]@1

  v3 = this;
  v4 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 8))();
  sub_21E94B4((void **)&v12, "TicksPlaying");
  *((_DWORD *)v3 + 76) = CompoundTag::getInt64((int)v4, (const void **)&v12);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
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
  sub_21E94B4((void **)&v11, "FinishedRecording");
  *((_BYTE *)v3 + 300) = CompoundTag::getBoolean((int)v4, (const void **)&v11);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


char *__fastcall JukeboxBlockEntity::getRecord(JukeboxBlockEntity *this)
{
  return (char *)this + 224;
}


char *__fastcall JukeboxBlockEntity::getItem(JukeboxBlockEntity *this, int a2)
{
  return (char *)this + 224;
}


int __fastcall JukeboxBlockEntity::setRecord(JukeboxBlockEntity *this, const ItemInstance *a2)
{
  JukeboxBlockEntity *v2; // r4@1
  ItemInstance *v3; // r5@1

  v2 = this;
  v3 = (JukeboxBlockEntity *)((char *)this + 224);
  ItemInstance::operator=((int)this + 224, (int)a2);
  *((_BYTE *)v2 + 300) = 0;
  ItemInstance::set(v3, 1);
  *((_DWORD *)v2 + 76) = 0;
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
}


int __fastcall JukeboxBlockEntity::JukeboxBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Jukebox");
  RandomizableBlockEntityContainer::RandomizableBlockEntityContainer(v3, 33, (int)&v8, v2);
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
  *(_DWORD *)v3 = &off_2709EDC;
  *(_DWORD *)(v3 + 112) = &off_2709F78;
  ItemInstance::ItemInstance(v3 + 224);
  *(_DWORD *)(v3 + 304) = 0;
  *(_DWORD *)(v3 + 296) = 0;
  *(_BYTE *)(v3 + 300) = 0;
  return v3;
}
