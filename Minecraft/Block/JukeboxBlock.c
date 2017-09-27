

void __fastcall JukeboxBlock::~JukeboxBlock(JukeboxBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall JukeboxBlock::_installCircuit(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2
  int v9; // r4@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ProducerComponent>(v8, v4, (int)v3, 6);
    v9 = result;
    if ( result )
    {
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      result = ProducerComponent::allowAttachments((ProducerComponent *)v9, 1);
      *(_BYTE *)(v9 + 41) = 1;
    }
  }
  return result;
}


int __fastcall JukeboxBlock::onLoaded(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2
  unsigned int v9; // r4@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ProducerComponent>(v8, v4, (int)v3, 6);
    v9 = result;
    if ( result )
    {
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      result = ProducerComponent::allowAttachments((ProducerComponent *)v9, 1);
      *(_BYTE *)(v9 + 41) = 1;
    }
  }
  return result;
}


int __fastcall JukeboxBlock::JukeboxBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270D654;
  *(_DWORD *)(v3 + 32) = 33;
  return v3;
}


BlockEntity *__fastcall JukeboxBlock::_setRecord(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3, const ItemInstance *a4)
{
  BlockSource *v4; // r6@1
  const ItemInstance *v5; // r4@1
  const BlockPos *v6; // r5@1
  Level *v7; // r0@1
  BlockEntity *result; // r0@1
  JukeboxBlockEntity *v9; // r5@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = (BlockEntity *)Level::isClientSide(v7);
  if ( !result )
  {
    result = (BlockEntity *)BlockSource::getBlockEntity(v4, v6);
    v9 = result;
    if ( result )
    {
      result = *(BlockEntity **)BlockEntity::getType(result);
      if ( result == (BlockEntity *)33 )
        result = (BlockEntity *)j_j_j__ZN18JukeboxBlockEntity9setRecordERK12ItemInstance(v9, v5);
    }
  }
  return result;
}


signed int __fastcall JukeboxBlock::shouldConnectToRedstone(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


signed int __fastcall JukeboxBlock::use(JukeboxBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r8@1
  JukeboxBlock *v5; // r9@1
  const BlockPos *v6; // r5@1
  RecordItem *v7; // r6@1
  void *v8; // r0@1
  BlockSource *v9; // r0@1
  BlockSource *v10; // r7@1
  BlockEntity *v11; // r0@1
  JukeboxBlockEntity *v12; // r4@1
  bool v13; // zf@7
  RecordItem *v14; // r5@10
  char *v15; // r0@10
  const Item *v16; // r1@10
  const ItemInstance *v17; // r2@12
  const Item *v18; // r1@15
  Dimension *v19; // r0@16
  CircuitSystem *v20; // r0@16
  bool v21; // zf@17
  Dimension *v22; // r0@21
  CircuitSystem *v23; // r0@21
  Level *v24; // r0@21
  BlockEntity *v25; // r0@22
  JukeboxBlockEntity *v26; // r4@22
  const void **v27; // r0@26
  char *v28; // r0@26
  char *v29; // r0@27
  Level *v30; // r0@28
  int v31; // r0@28
  int v32; // r5@28
  void (__fastcall *v33)(int, char *, char *, int); // r6@28
  char *v34; // r0@28
  int v35; // r0@28
  void *v36; // r0@28
  char *v37; // r4@29
  int v38; // r6@29
  unsigned int *v39; // r2@31
  signed int v40; // r1@33
  int *v41; // r0@39
  char *v42; // r0@44
  void *v43; // r0@45
  void *v44; // r0@46
  unsigned int *v46; // r2@54
  signed int v47; // r1@56
  unsigned int *v48; // r2@58
  signed int v49; // r1@60
  unsigned int *v50; // r2@62
  signed int v51; // r1@64
  unsigned int *v52; // r2@66
  signed int v53; // r1@68
  unsigned int *v54; // r2@70
  signed int v55; // r1@72
  unsigned int *v56; // r2@74
  signed int v57; // r1@76
  char *v58; // [sp+4h] [bp-C4h]@28
  char *v59; // [sp+8h] [bp-C0h]@28
  char *v60; // [sp+Ch] [bp-BCh]@28
  char *v61; // [sp+10h] [bp-B8h]@28
  int v62; // [sp+18h] [bp-B0h]@28
  int v63; // [sp+1Ch] [bp-ACh]@28
  char v64; // [sp+20h] [bp-A8h]@28
  char *v65; // [sp+4Ch] [bp-7Ch]@26
  char *v66; // [sp+50h] [bp-78h]@26
  int v67; // [sp+54h] [bp-74h]@26
  RecordItem *v68; // [sp+58h] [bp-70h]@1
  int v69; // [sp+60h] [bp-68h]@51
  char v70; // [sp+67h] [bp-61h]@8
  void *v71; // [sp+7Ch] [bp-4Ch]@49
  void *ptr; // [sp+8Ch] [bp-3Ch]@47

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (RecordItem *)Entity::getLevel(a2);
  v8 = Player::getSelectedItem(v4);
  ItemInstance::ItemInstance((ItemInstance *)&v68, (int)v8);
  v9 = (BlockSource *)Entity::getRegion(v4);
  v10 = v9;
  v11 = (BlockEntity *)BlockSource::getBlockEntity(v9, v6);
  v12 = v11;
  if ( v11 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v11) != 33 )
      v12 = 0;
  }
  else
    v12 = 0;
  if ( Level::isClientSide(v7) == 1 )
    v13 = v12 == 0;
    if ( v12 )
      v13 = v70 == 0;
    if ( !v13 )
    {
      v14 = v68;
      v15 = JukeboxBlockEntity::getRecord(v12);
      if ( v14 )
      {
        if ( !*(_DWORD *)v15 && RecordItem::isMusicDisc(v14, v16) == 1 )
        {
          MinecraftEventing::fireEventJukeboxUsed(v4, (Player *)&v68, v17);
          MinecraftEventing::fireEventItemUsed((int)v4, (ItemInstance *)&v68, 6);
        }
      }
    }
  else if ( v12 )
    if ( *(_DWORD *)JukeboxBlockEntity::getRecord(v12) )
      v19 = (Dimension *)BlockSource::getDimension(v10);
      v20 = (CircuitSystem *)Dimension::getCircuitSystem(v19);
      CircuitSystem::setStrength(v20, v6, 0);
      JukeboxBlock::_dropRecording(v5, v10, v6);
    else
      v21 = v70 == 0;
      if ( v70 )
        v7 = v68;
        v21 = v68 == 0;
      if ( !v21 && RecordItem::isMusicDisc(v7, v18) == 1 )
        v22 = (Dimension *)BlockSource::getDimension(v10);
        v23 = (CircuitSystem *)Dimension::getCircuitSystem(v22);
        CircuitSystem::setStrength(v23, v6, 15);
        v24 = (Level *)BlockSource::getLevel(v10);
        if ( !Level::isClientSide(v24) )
          v25 = (BlockEntity *)BlockSource::getBlockEntity(v10, v6);
          v26 = v25;
          if ( v25 )
          {
            if ( *(_DWORD *)BlockEntity::getType(v25) == 33 )
              JukeboxBlockEntity::setRecord(v26, (const ItemInstance *)&v68);
          }
        (*(void (__fastcall **)(Player *, RecordItem **))(*(_DWORD *)v4 + 612))(v4, &v68);
        Player::setSelectedItem(v4, (const ItemInstance *)&v68);
        if ( !(*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 1408))(v4) )
          (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v4 + 1064))(v4, 1);
          v65 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v65, *(_DWORD *)(*((_DWORD *)v7 + 6) - 12) + 5);
          sub_21E7408((const void **)&v65, "item.", 5u);
          sub_21E72F0((const void **)&v65, (const void **)v7 + 6);
          v27 = sub_21E7408((const void **)&v65, ".desc", 5u);
          v66 = (char *)*v27;
          *v27 = &unk_28898CC;
          I18n::get(&v67, (int **)&v66);
          v28 = v66 - 12;
          if ( (int *)(v66 - 12) != &dword_28898C0 )
            v46 = (unsigned int *)(v66 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
            }
            else
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          v29 = v65 - 12;
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v48 = (unsigned int *)(v65 - 4);
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          v30 = (Level *)Entity::getLevel(v4);
          v31 = Level::getPacketSender(v30);
          v32 = v31;
          v33 = *(void (__fastcall **)(int, char *, char *, int))(*(_DWORD *)v31 + 16);
          sub_21E94B4((void **)&v62, "record.nowPlaying");
          v58 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v58, *(_DWORD *)(v67 - 12) + 1);
          sub_21E7408((const void **)&v58, "%", 1u);
          sub_21E72F0((const void **)&v58, (const void **)&v67);
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v34 = (char *)operator new(4u);
          v59 = v34;
          v61 = v34 + 4;
          v60 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                          (int)&v58,
                          (int)&v59,
                          (int)v34);
          I18n::get(&v63, &v62, (unsigned __int64 *)&v59);
          TextPacket::createJukeboxPopup((int)&v64, &v63);
          v35 = Player::getClientSubId(v4);
          v33(v32, (char *)v4 + 4392, &v64, v35);
          TextPacket::~TextPacket((TextPacket *)&v64);
          v36 = (void *)(v63 - 12);
          if ( (int *)(v63 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v63 - 4);
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j__ZdlPv_9(v36);
          v38 = (int)v60;
          v37 = v59;
          if ( v59 != v60 )
            do
              v41 = (int *)(*(_DWORD *)v37 - 12);
              if ( v41 != &dword_28898C0 )
              {
                v39 = (unsigned int *)(*(_DWORD *)v37 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                }
                else
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j__ZdlPv_9(v41);
              }
              v37 += 4;
            while ( v37 != (char *)v38 );
            v37 = v59;
          if ( v37 )
            operator delete(v37);
          v42 = v58 - 12;
          if ( (int *)(v58 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v58 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          v43 = (void *)(v62 - 12);
          if ( (int *)(v62 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v62 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          v44 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v67 - 4);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
  if ( ptr )
    operator delete(ptr);
  if ( v71 )
    operator delete(v71);
  if ( v69 )
    (*(void (**)(void))(*(_DWORD *)v69 + 4))();
  return 1;
}


int __fastcall JukeboxBlock::onPlace(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2
  unsigned int v9; // r4@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ProducerComponent>(v8, v4, (int)v3, 6);
    v9 = result;
    if ( result )
    {
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      result = ProducerComponent::allowAttachments((ProducerComponent *)v9, 1);
      *(_BYTE *)(v9 + 41) = 1;
    }
  }
  return result;
}


BlockEntity *__fastcall JukeboxBlock::_dropRecording(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  Block *v4; // r8@1
  const BlockPos *v5; // r7@1
  Level *v6; // r0@1
  Level *v7; // r6@1
  BlockEntity *result; // r0@1
  JukeboxBlockEntity *v9; // r5@2
  char *v10; // r0@4
  int v11; // r3@5
  int v12; // r6@5
  int v13; // r7@5
  char v14; // [sp+10h] [bp-128h]@5
  int v15; // [sp+18h] [bp-120h]@9
  void *v16; // [sp+34h] [bp-104h]@7
  void *ptr; // [sp+44h] [bp-F4h]@5
  int v18; // [sp+5Ch] [bp-DCh]@5
  signed int v19; // [sp+60h] [bp-D8h]@5
  int v20; // [sp+64h] [bp-D4h]@5
  char v21; // [sp+68h] [bp-D0h]@5
  int v22; // [sp+6Ch] [bp-CCh]@5
  int v23; // [sp+70h] [bp-C8h]@5
  int v24; // [sp+74h] [bp-C4h]@5
  int v25; // [sp+78h] [bp-C0h]@5
  int v26; // [sp+7Ch] [bp-BCh]@5
  char v27; // [sp+80h] [bp-B8h]@5
  int v28; // [sp+88h] [bp-B0h]@15
  void *v29; // [sp+A4h] [bp-94h]@13
  void *v30; // [sp+B4h] [bp-84h]@11
  char v31; // [sp+CCh] [bp-6Ch]@5
  int v32; // [sp+D8h] [bp-60h]@4
  BlockEntity *v33; // [sp+E0h] [bp-58h]@21
  void *v34; // [sp+FCh] [bp-3Ch]@19
  void *v35; // [sp+10Ch] [bp-2Ch]@17

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  v7 = v6;
  result = (BlockEntity *)Level::isClientSide(v6);
  if ( !result )
  {
    result = (BlockEntity *)BlockSource::getBlockEntity(v3, v5);
    v9 = result;
    if ( result )
    {
      result = *(BlockEntity **)BlockEntity::getType(result);
      if ( result == (BlockEntity *)33 )
      {
        v10 = JukeboxBlockEntity::getRecord(v9);
        ItemInstance::ItemInstance((ItemInstance *)&v32, (int)v10);
        if ( v32 )
        {
          Vec3::Vec3((int)&v31, (int)v5);
          Level::broadcastSoundEvent(v7, (int)v3, 102, (int)&v31, -1, 1, 0, 0);
          ItemInstance::ItemInstance((ItemInstance *)&v27, (int)&v32);
          v18 = 0;
          v19 = 1056964608;
          v20 = 0;
          BlockPos::BlockPos((int)&v21, (int)&v18);
          v11 = *(_DWORD *)v5;
          v12 = *((_DWORD *)v5 + 1);
          v13 = *((_DWORD *)v5 + 2);
          v24 = *(_DWORD *)&v21 + v11;
          v25 = v22 + v12;
          v26 = v23 + v13;
          Block::popResource(v4, v3, (const BlockPos *)&v24, (const ItemInstance *)&v27);
          ItemInstance::ItemInstance((int)&v14);
          JukeboxBlockEntity::setRecord(v9, (const ItemInstance *)&v14);
          if ( ptr )
            operator delete(ptr);
          if ( v16 )
            operator delete(v16);
          if ( v15 )
            (*(void (**)(void))(*(_DWORD *)v15 + 4))();
          v15 = 0;
          if ( v30 )
            operator delete(v30);
          if ( v29 )
            operator delete(v29);
          if ( v28 )
            (*(void (**)(void))(*(_DWORD *)v28 + 4))();
        }
        if ( v35 )
          operator delete(v35);
        if ( v34 )
          operator delete(v34);
        result = v33;
        if ( v33 )
          result = (BlockEntity *)(*(int (**)(void))(*(_DWORD *)v33 + 4))();
      }
    }
  }
  return result;
}


signed int __fastcall JukeboxBlock::hasComparatorSignal(JukeboxBlock *this)
{
  return 1;
}


void __fastcall JukeboxBlock::~JukeboxBlock(JukeboxBlock *this)
{
  JukeboxBlock::~JukeboxBlock(this);
}


JukeboxBlockEntity *__fastcall JukeboxBlock::getComparatorSignal(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  BlockEntity *v5; // r0@1
  JukeboxBlockEntity *v6; // r4@1
  char *v7; // r0@3
  signed int v8; // r5@4
  int v10; // [sp+0h] [bp-58h]@3
  int v11; // [sp+8h] [bp-50h]@11
  void *v12; // [sp+24h] [bp-34h]@9
  void *ptr; // [sp+34h] [bp-24h]@7

  v5 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v6 = v5;
  if ( v5 && *(_DWORD *)BlockEntity::getType(v5) == 33 )
  {
    v7 = JukeboxBlockEntity::getRecord(v6);
    ItemInstance::ItemInstance((ItemInstance *)&v10, (int)v7);
    if ( v10 )
    {
      v8 = 1;
      v6 = (JukeboxBlockEntity *)(*(_WORD *)(v10 + 18) + 1 - *(_WORD *)(Item::mRecord13 + 18));
    }
    else
      v8 = 0;
    if ( ptr )
      operator delete(ptr);
    if ( v12 )
      operator delete(v12);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    if ( !v8 )
      v6 = 0;
  }
  else
    v6 = 0;
  return v6;
}


int __fastcall JukeboxBlock::onRemove(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  JukeboxBlock::_dropRecording(this, a2, a3);
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos(v5, v4, v3);
}


BlockEntity *__fastcall JukeboxBlock::_getJukeboxBlockEntity(JukeboxBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockEntity *v3; // r0@1
  BlockEntity *v4; // r4@1
  BlockEntity *result; // r0@2

  v3 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v3) != 33 )
      v4 = 0;
    result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall JukeboxBlock::isSignalSource(JukeboxBlock *this)
{
  return 1;
}
