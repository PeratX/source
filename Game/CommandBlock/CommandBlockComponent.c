

char *__fastcall CommandBlockComponent::getBaseCommandBlock(CommandBlockComponent *this)
{
  return (char *)this + 4;
}


unsigned int __fastcall CommandBlockComponent::readAdditionalSaveData(CommandBlockComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  CommandBlockComponent *v3; // r8@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int v7; // r6@4
  void *v8; // r0@4
  void *v9; // r0@6
  int v10; // r4@7
  int v11; // r0@7
  unsigned int v12; // r1@7
  unsigned int v13; // r1@9
  unsigned int v14; // r0@9
  int v15; // r4@14
  int *v16; // r0@14
  int v17; // r5@14
  _DWORD *v18; // r0@15
  size_t v19; // r2@15
  unsigned int v20; // r0@17
  unsigned int v21; // r1@17
  char *v22; // r0@22
  int v23; // r4@23
  int v24; // r5@23
  _DWORD *v25; // r0@24
  size_t v26; // r2@24
  unsigned int v27; // r0@26
  unsigned int v28; // r1@26
  char *v29; // r0@31
  int v30; // r5@32
  int v31; // r4@32
  unsigned int result; // r0@32
  unsigned int v33; // r1@32
  unsigned int v34; // r1@34
  unsigned int v35; // r0@34
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  unsigned int *v38; // r2@44
  signed int v39; // r1@46
  unsigned int *v40; // r2@48
  signed int v41; // r1@50
  unsigned int *v42; // r2@52
  signed int v43; // r1@54
  unsigned int *v44; // r2@60
  signed int v45; // r1@62
  unsigned int *v46; // r2@68
  signed int v47; // r1@70
  void *v48; // [sp+4h] [bp-44h]@23
  void *s2; // [sp+8h] [bp-40h]@14
  int v50; // [sp+10h] [bp-38h]@6
  int v51; // [sp+18h] [bp-30h]@4
  int v52; // [sp+20h] [bp-28h]@3
  int v53; // [sp+28h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v53, "Ticking");
  v4 = CompoundTag::contains((int)v2, (const void **)&v53, 1);
  v5 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    }
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v52, "Ticking");
    *((_BYTE *)v3 + 52) = CompoundTag::getBoolean((int)v2, (const void **)&v52);
    v6 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v52 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v51, "CurrentTickCount");
  v7 = CompoundTag::contains((int)v2, (const void **)&v51, 3);
  v8 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v51 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v50, "CurrentTickCount");
    *((_DWORD *)v3 + 11) = CompoundTag::getInt((int)v2, (const void **)&v50);
    v9 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v50 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  BaseCommandBlock::load((CommandBlockComponent *)((char *)v3 + 4), v2);
  v10 = *(_DWORD *)v3;
  v11 = SynchedEntityData::_get((SynchedEntityData *)(*(_DWORD *)v3 + 176), 70);
  v12 = *(_DWORD *)(v11 + 4);
  if ( !(_BYTE)v12 && *(_BYTE *)(v11 + 9) != 1 )
    v13 = v12 >> 16;
    *(_WORD *)(v11 + 8) = 257;
    v14 = *(_WORD *)(v10 + 188);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *(_WORD *)(v10 + 188) = v14;
    if ( *(_WORD *)(v10 + 190) > v13 )
      LOWORD(v13) = *(_WORD *)(v10 + 190);
    *(_WORD *)(v10 + 190) = v13;
  v15 = *(_DWORD *)v3;
  v16 = (int *)BaseCommandBlock::getCommand((CommandBlockComponent *)((char *)v3 + 4));
  sub_21E8AF4((int *)&s2, v16);
  v17 = SynchedEntityData::_get((SynchedEntityData *)(v15 + 176), 71);
  if ( *(_BYTE *)(v17 + 4) == 4 )
    v18 = *(_DWORD **)(v17 + 12);
    v19 = *(v18 - 3);
    if ( v19 != *((_DWORD *)s2 - 3) || memcmp(v18, s2, v19) )
      EntityInteraction::setInteractText((int *)(v17 + 12), (int *)&s2);
      *(_BYTE *)(v17 + 8) = 1;
      v20 = *(_WORD *)(v17 + 6);
      v21 = *(_WORD *)(v15 + 188);
      if ( v21 >= v20 )
        LOWORD(v21) = *(_WORD *)(v17 + 6);
      *(_WORD *)(v15 + 188) = v21;
      if ( *(_WORD *)(v15 + 190) > v20 )
        LOWORD(v20) = *(_WORD *)(v15 + 190);
      *(_WORD *)(v15 + 190) = v20;
  v22 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)((char *)s2 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *(_DWORD *)v3;
  BaseCommandBlock::getLastOutput((BaseCommandBlock *)&v48, (int)v3 + 4);
  v24 = SynchedEntityData::_get((SynchedEntityData *)(v23 + 176), 72);
  if ( *(_BYTE *)(v24 + 4) == 4 )
    v25 = *(_DWORD **)(v24 + 12);
    v26 = *(v25 - 3);
    if ( v26 != *((_DWORD *)v48 - 3) || memcmp(v25, v48, v26) )
      EntityInteraction::setInteractText((int *)(v24 + 12), (int *)&v48);
      *(_BYTE *)(v24 + 8) = 1;
      v27 = *(_WORD *)(v24 + 6);
      v28 = *(_WORD *)(v23 + 188);
      if ( v28 >= v27 )
        LOWORD(v28) = *(_WORD *)(v24 + 6);
      *(_WORD *)(v23 + 188) = v28;
      if ( *(_WORD *)(v23 + 190) > v27 )
        LOWORD(v27) = *(_WORD *)(v23 + 190);
      *(_WORD *)(v23 + 190) = v27;
  v29 = (char *)v48 - 12;
  if ( (int *)((char *)v48 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)((char *)v48 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = *(_DWORD *)v3;
  v31 = BaseCommandBlock::getTrackOutput((CommandBlockComponent *)((char *)v3 + 4));
  result = SynchedEntityData::_get((SynchedEntityData *)(v30 + 176), 73);
  v33 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v33 && *(_BYTE *)(result + 9) != v31 )
    *(_BYTE *)(result + 9) = v31;
    *(_BYTE *)(result + 8) = 1;
    v34 = v33 >> 16;
    v35 = *(_WORD *)(v30 + 188);
    if ( v35 >= v34 )
      LOWORD(v35) = v34;
    *(_WORD *)(v30 + 188) = v35;
    result = *(_WORD *)(v30 + 190);
    if ( result > v34 )
      LOWORD(v34) = *(_WORD *)(v30 + 190);
    *(_WORD *)(v30 + 190) = v34;
  return result;
}


void __fastcall CommandBlockComponent::tick(CommandBlockComponent *this)
{
  CommandBlockComponent::tick(this);
}


int __fastcall CommandBlockComponent::setName(int a1, int *a2)
{
  int v2; // r5@1

  v2 = a1;
  BaseCommandBlock::setName(a1 + 4, a2);
  return (*(int (**)(void))(**(_DWORD **)v2 + 200))();
}


int __fastcall CommandBlockComponent::setShouldTick(int result, int a2)
{
  *(_BYTE *)(result + 52) = a2;
  if ( !a2 )
    *(_DWORD *)(result + 44) = 0;
  return result;
}


int __fastcall CommandBlockComponent::_resetCurrentTick(int result)
{
  *(_DWORD *)(result + 44) = *(_DWORD *)(result + 48) - 1;
  return result;
}


void __fastcall CommandBlockComponent::setLastOutput(int a1, int *a2)
{
  CommandBlockComponent::setLastOutput(a1, a2);
}


char *__fastcall CommandBlockComponent::getBaseCommandBlock(CommandBlockComponent *this)
{
  return (char *)this + 4;
}


signed int __fastcall CommandBlockComponent::addAdditionalSaveData(CommandBlockComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  CommandBlockComponent *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v12, "Ticking");
  CompoundTag::putBoolean((int)v2, (const void **)&v12, *((_BYTE *)v3 + 52));
  v4 = (void *)(v12 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "CurrentTickCount");
  CompoundTag::putInt((int)v2, (const void **)&v11, *((_DWORD *)v3 + 11));
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return BaseCommandBlock::save((CommandBlockComponent *)((char *)v3 + 4), v2);
}


int __fastcall CommandBlockComponent::initFromDefinition(CommandBlockComponent *this)
{
  CommandBlockComponent *v1; // r4@1
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3
  int v8; // r7@8
  int v9; // r5@8
  _DWORD *v10; // r0@9
  size_t v11; // r2@9
  unsigned int v12; // r0@11
  unsigned int v13; // r1@11
  char *v14; // r0@16
  int v15; // r7@17
  int v16; // r5@17
  _DWORD *v17; // r0@18
  size_t v18; // r2@18
  unsigned int v19; // r0@20
  unsigned int v20; // r1@20
  char *v21; // r0@25
  int v22; // r5@26
  int v23; // r0@26
  unsigned int v24; // r1@26
  unsigned int v25; // r1@28
  unsigned int v26; // r0@28
  signed int v27; // r0@33
  int result; // r0@35
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  void *v33; // [sp+4h] [bp-34h]@17
  void *s2; // [sp+Ch] [bp-2Ch]@8

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 300);
  v4 = SynchedEntityData::_get((SynchedEntityData *)(*(_DWORD *)this + 176), 70);
  v5 = *(_DWORD *)(v4 + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(v4 + 9) != 1 )
  {
    v6 = v5 >> 16;
    *(_WORD *)(v4 + 8) = 257;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    if ( *(_WORD *)(v2 + 190) > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  v8 = *(_DWORD *)v1;
  sub_21E94B4(&s2, (const char *)&unk_257BC67);
  v9 = SynchedEntityData::_get((SynchedEntityData *)(v8 + 176), 71);
  if ( *(_BYTE *)(v9 + 4) == 4 )
    v10 = *(_DWORD **)(v9 + 12);
    v11 = *(v10 - 3);
    if ( v11 != *((_DWORD *)s2 - 3) || memcmp(v10, s2, v11) )
    {
      EntityInteraction::setInteractText((int *)(v9 + 12), (int *)&s2);
      *(_BYTE *)(v9 + 8) = 1;
      v12 = *(_WORD *)(v9 + 6);
      v13 = *(_WORD *)(v8 + 188);
      if ( v13 >= v12 )
        LOWORD(v13) = *(_WORD *)(v9 + 6);
      *(_WORD *)(v8 + 188) = v13;
      if ( *(_WORD *)(v8 + 190) > v12 )
        LOWORD(v12) = *(_WORD *)(v8 + 190);
      *(_WORD *)(v8 + 190) = v12;
    }
  v14 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)v1;
  sub_21E94B4(&v33, (const char *)&unk_257BC67);
  v16 = SynchedEntityData::_get((SynchedEntityData *)(v15 + 176), 72);
  if ( *(_BYTE *)(v16 + 4) == 4 )
    v17 = *(_DWORD **)(v16 + 12);
    v18 = *(v17 - 3);
    if ( v18 != *((_DWORD *)v33 - 3) || memcmp(v17, v33, v18) )
      EntityInteraction::setInteractText((int *)(v16 + 12), (int *)&v33);
      *(_BYTE *)(v16 + 8) = 1;
      v19 = *(_WORD *)(v16 + 6);
      v20 = *(_WORD *)(v15 + 188);
      if ( v20 >= v19 )
        LOWORD(v20) = *(_WORD *)(v16 + 6);
      *(_WORD *)(v15 + 188) = v20;
      if ( *(_WORD *)(v15 + 190) > v19 )
        LOWORD(v19) = *(_WORD *)(v15 + 190);
      *(_WORD *)(v15 + 190) = v19;
  v21 = (char *)v33 - 12;
  if ( (int *)((char *)v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)((char *)v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *(_DWORD *)v1;
  v23 = SynchedEntityData::_get((SynchedEntityData *)(*(_DWORD *)v1 + 176), 73);
  v24 = *(_DWORD *)(v23 + 4);
  if ( !(_BYTE)v24 && *(_BYTE *)(v23 + 9) != 1 )
    v25 = v24 >> 16;
    *(_WORD *)(v23 + 8) = 257;
    v26 = *(_WORD *)(v22 + 188);
    if ( v26 >= v25 )
      LOWORD(v26) = v25;
    *(_WORD *)(v22 + 188) = v26;
    if ( *(_WORD *)(v22 + 190) > v25 )
      LOWORD(v25) = *(_WORD *)(v22 + 190);
    *(_WORD *)(v22 + 190) = v25;
  *((_DWORD *)v1 + 11) = *(_DWORD *)(v3 + 4);
  v27 = *(_DWORD *)(v3 + 8);
  if ( v27 < 1 )
    v27 = 1;
  *((_DWORD *)v1 + 12) = v27;
  result = *(_BYTE *)(v3 + 12);
  *((_BYTE *)v1 + 52) = result;
  return result;
}


int __fastcall CommandBlockComponent::onCommandBlockUpdate(Entity **a1, int *a2, int a3, int *a4)
{
  Entity **v4; // r5@1
  int *v5; // r9@1
  int v6; // r8@1
  int *v7; // r4@1
  BlockSource *v8; // r6@1
  char *v9; // r0@1
  Entity *v10; // r7@1
  int v11; // r6@1
  _DWORD *v12; // r0@2
  size_t v13; // r2@2
  unsigned int v14; // r0@4
  unsigned int v15; // r1@4
  char *v16; // r0@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  void *s2; // [sp+4h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (BlockSource *)Entity::getRegion(*a1);
  v9 = Entity::getUniqueID(*v4);
  BaseCommandBlock::setCommand((int)(v4 + 1), v8, v9, v7);
  v10 = *v4;
  sub_21E8AF4((int *)&s2, v7);
  v11 = SynchedEntityData::_get((Entity *)((char *)v10 + 176), 71);
  if ( *(_BYTE *)(v11 + 4) == 4 )
  {
    v12 = *(_DWORD **)(v11 + 12);
    v13 = *(v12 - 3);
    if ( v13 != *((_DWORD *)s2 - 3) || memcmp(v12, s2, v13) )
    {
      EntityInteraction::setInteractText((int *)(v11 + 12), (int *)&s2);
      *(_BYTE *)(v11 + 8) = 1;
      v14 = *(_WORD *)(v11 + 6);
      v15 = *((_WORD *)v10 + 94);
      if ( v15 >= v14 )
        LOWORD(v15) = *(_WORD *)(v11 + 6);
      *((_WORD *)v10 + 94) = v15;
      if ( *((_WORD *)v10 + 95) > v14 )
        LOWORD(v14) = *((_WORD *)v10 + 95);
      *((_WORD *)v10 + 95) = v14;
    }
  }
  v16 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  CommandBlockComponent::setTrackOutput((CommandBlockComponent *)v4, v6);
  BaseCommandBlock::setName((int)(v4 + 1), v5);
  return (*(int (**)(void))(*(_DWORD *)*v4 + 200))();
}


_DWORD *__fastcall CommandBlockComponent::CommandBlockComponent(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1

  v2 = a1;
  *a1 = a2;
  BaseCommandBlock::BaseCommandBlock((int)(a1 + 1));
  *(_QWORD *)(v2 + 11) = 0x100000000LL;
  *((_BYTE *)v2 + 52) = 0;
  return v2;
}


void __fastcall CommandBlockComponent::setTrackOutput(CommandBlockComponent *this, int a2)
{
  CommandBlockComponent::setTrackOutput(this, a2);
}


void __fastcall CommandBlockComponent::tick(CommandBlockComponent *this)
{
  CommandBlockComponent *v1; // r4@1
  Level *v2; // r0@2
  int v3; // r0@4
  BlockSource *v4; // r6@6
  char *v5; // r0@6
  Entity *v6; // r6@7
  int v7; // r4@7
  _DWORD *v8; // r0@8
  size_t v9; // r2@8
  unsigned int v10; // r0@10
  unsigned int v11; // r1@10
  char *v12; // r0@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  void *s2; // [sp+4h] [bp-1Ch]@7

  v1 = this;
  if ( *((_BYTE *)this + 52) )
  {
    v2 = (Level *)Entity::getLevel(*(Entity **)this);
    if ( !Level::isClientSide(v2) && (*(int (**)(void))(**(_DWORD **)v1 + 488))() == 524388 )
    {
      v3 = *((_DWORD *)v1 + 11);
      if ( v3 )
      {
        *((_DWORD *)v1 + 11) = v3 - 1;
      }
      else
        v4 = (BlockSource *)Entity::getRegion(*(Entity **)v1);
        v5 = Entity::getUniqueID(*(Entity **)v1);
        BaseCommandBlock::performCommand((int)v1 + 4, v4, v5);
        *((_DWORD *)v1 + 11) = *((_DWORD *)v1 + 12) - 1;
        if ( BaseCommandBlock::getTrackOutput((CommandBlockComponent *)((char *)v1 + 4)) == 1 )
        {
          v6 = *(Entity **)v1;
          BaseCommandBlock::getLastOutput((BaseCommandBlock *)&s2, (int)v1 + 4);
          v7 = SynchedEntityData::_get((Entity *)((char *)v6 + 176), 72);
          if ( *(_BYTE *)(v7 + 4) == 4 )
          {
            v8 = *(_DWORD **)(v7 + 12);
            v9 = *(v8 - 3);
            if ( v9 != *((_DWORD *)s2 - 3) || memcmp(v8, s2, v9) )
            {
              EntityInteraction::setInteractText((int *)(v7 + 12), (int *)&s2);
              *(_BYTE *)(v7 + 8) = 1;
              v10 = *(_WORD *)(v7 + 6);
              v11 = *((_WORD *)v6 + 94);
              if ( v11 >= v10 )
                LOWORD(v11) = *(_WORD *)(v7 + 6);
              *((_WORD *)v6 + 94) = v11;
              if ( *((_WORD *)v6 + 95) > v10 )
                LOWORD(v10) = *((_WORD *)v6 + 95);
              *((_WORD *)v6 + 95) = v10;
            }
          }
          v12 = (char *)s2 - 12;
          if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)((char *)s2 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
            else
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
        }
    }
  }
}


void __fastcall CommandBlockComponent::setTrackOutput(CommandBlockComponent *this, int a2)
{
  CommandBlockComponent *v2; // r5@1
  char *v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r0@1
  unsigned int v7; // r1@1
  unsigned int v8; // r1@3
  unsigned int v9; // r0@3
  int v10; // r6@8
  int v11; // r4@8
  _DWORD *v12; // r0@9
  size_t v13; // r2@9
  unsigned int v14; // r0@11
  unsigned int v15; // r1@11
  char *v16; // r0@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  void *s2; // [sp+0h] [bp-20h]@8

  v2 = this;
  v3 = (char *)this + 4;
  v4 = a2;
  BaseCommandBlock::setTrackOutput((CommandBlockComponent *)((char *)this + 4), a2);
  v5 = *(_DWORD *)v2;
  v6 = SynchedEntityData::_get((SynchedEntityData *)(*(_DWORD *)v2 + 176), 73);
  v7 = *(_DWORD *)(v6 + 4);
  if ( !(_BYTE)v7 && *(_BYTE *)(v6 + 9) != v4 )
  {
    *(_BYTE *)(v6 + 9) = v4;
    *(_BYTE *)(v6 + 8) = 1;
    v8 = v7 >> 16;
    v9 = *(_WORD *)(v5 + 188);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *(_WORD *)(v5 + 188) = v9;
    if ( *(_WORD *)(v5 + 190) > v8 )
      LOWORD(v8) = *(_WORD *)(v5 + 190);
    *(_WORD *)(v5 + 190) = v8;
  }
  v10 = *(_DWORD *)v2;
  BaseCommandBlock::getLastOutput((BaseCommandBlock *)&s2, (int)v3);
  v11 = SynchedEntityData::_get((SynchedEntityData *)(v10 + 176), 72);
  if ( *(_BYTE *)(v11 + 4) == 4 )
    v12 = *(_DWORD **)(v11 + 12);
    v13 = *(v12 - 3);
    if ( v13 != *((_DWORD *)s2 - 3) || memcmp(v12, s2, v13) )
    {
      EntityInteraction::setInteractText((int *)(v11 + 12), (int *)&s2);
      *(_BYTE *)(v11 + 8) = 1;
      v14 = *(_WORD *)(v11 + 6);
      v15 = *(_WORD *)(v10 + 188);
      if ( v15 >= v14 )
        LOWORD(v15) = *(_WORD *)(v11 + 6);
      *(_WORD *)(v10 + 188) = v15;
      if ( *(_WORD *)(v10 + 190) > v14 )
        LOWORD(v14) = *(_WORD *)(v10 + 190);
      *(_WORD *)(v10 + 190) = v14;
    }
  v16 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall CommandBlockComponent::setLastOutput(int a1, int *a2)
{
  int *v2; // r11@1
  int *v3; // r9@1
  __int64 v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  int v8; // r6@16
  int v9; // r4@16
  _DWORD *v10; // r0@17
  size_t v11; // r2@17
  unsigned int v12; // r0@19
  unsigned int v13; // r1@19
  char *v14; // r0@24
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  void *s2; // [sp+0h] [bp-38h]@16
  __int64 v18; // [sp+4h] [bp-34h]@1
  int v19; // [sp+Ch] [bp-2Ch]@1

  v2 = (int *)a1;
  v3 = a2;
  v18 = 0LL;
  v19 = 0;
  BaseCommandBlock::setLastOutput((int *)(a1 + 4), a2, (unsigned __int64 *)&v18);
  v4 = v18;
  if ( (_DWORD)v18 != HIDWORD(v18) )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v4 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      LODWORD(v4) = v4 + 4;
    }
    while ( (_DWORD)v4 != HIDWORD(v4) );
    LODWORD(v4) = v18;
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  v8 = *v2;
  sub_21E8AF4((int *)&s2, v3);
  v9 = SynchedEntityData::_get((SynchedEntityData *)(v8 + 176), 72);
  if ( *(_BYTE *)(v9 + 4) == 4 )
    v10 = *(_DWORD **)(v9 + 12);
    v11 = *(v10 - 3);
    if ( v11 != *((_DWORD *)s2 - 3) || memcmp(v10, s2, v11) )
      EntityInteraction::setInteractText((int *)(v9 + 12), (int *)&s2);
      *(_BYTE *)(v9 + 8) = 1;
      v12 = *(_WORD *)(v9 + 6);
      v13 = *(_WORD *)(v8 + 188);
      if ( v13 >= v12 )
        LOWORD(v13) = *(_WORD *)(v9 + 6);
      *(_WORD *)(v8 + 188) = v13;
      if ( *(_WORD *)(v8 + 190) > v12 )
        LOWORD(v12) = *(_WORD *)(v8 + 190);
      *(_WORD *)(v8 + 190) = v12;
  v14 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}
