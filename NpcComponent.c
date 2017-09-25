

int __fastcall NpcComponent::_isClientSide(NpcComponent *this)
{
  Level *v1; // r0@1

  v1 = (Level *)Entity::getLevel(*(Entity **)this);
  return j_j_j__ZNK5Level12isClientSideEv_1(v1);
}


void __fastcall NpcComponent::setInteractiveText(Entity **a1, int *a2, int a3)
{
  NpcComponent::setInteractiveText(a1, a2, a3);
}


char *__fastcall NpcComponent::addAction(char *result, int *a2)
{
  __int64 v2; // r2@1
  int v3; // r12@3

  v2 = *((_QWORD *)result + 1);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI9NpcActionSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               result + 4,
               a2);
  }
  else
    v3 = *a2;
    *a2 = 0;
    *(_DWORD *)v2 = v3;
    *((_DWORD *)result + 2) += 4;
  return result;
}


signed int __fastcall NpcComponent::getInteraction(NpcComponent *this, Player *a2, EntityInteraction *a3)
{
  EntityInteraction *v3; // r4@1
  NpcComponent *v4; // r5@1
  Player *v5; // r6@1
  _DWORD *v6; // r0@2
  __int64 v7; // r1@2
  void *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+8h] [bp-28h]@4
  _DWORD *v13; // [sp+Ch] [bp-24h]@2
  __int64 v14; // [sp+14h] [bp-1Ch]@2

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( EntityInteraction::shouldCapture(a3) == 1 )
  {
    v6 = operator new(8u);
    LODWORD(v7) = sub_16D2490;
    *v6 = v5;
    v6[1] = v4;
    HIDWORD(v7) = &loc_16D2480;
    v13 = v6;
    v14 = v7;
    EntityInteraction::capture((int)v3, (int)&v13);
    if ( (_DWORD)v14 )
      ((void (*)(void))v14)();
  }
  sub_21E94B4((void **)&v12, "action.interact.talk");
  EntityInteraction::setInteractText();
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  return 1;
}


_DWORD *__fastcall NpcComponent::NpcComponent(int a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int, int *); // r6@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-24h]@1

  v2 = (_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  NpcComponent::_defineEntityDataString((_DWORD *)a1, 40);
  NpcComponent::_defineEntityDataString(v2, 42);
  v3 = *v2;
  v4 = *(void (__fastcall **)(int, int *))(*(_DWORD *)*v2 + 200);
  sub_21E94B4((void **)&v9, "NPC");
  v4(v3, &v9);
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
  return v2;
}


signed int __fastcall NpcComponent::getUpdatedActions(int a1, int *a2, unsigned __int64 *a3, _BYTE *a4, char *a5)
{
  unsigned __int64 *v5; // r11@1
  int v6; // r5@1
  _BYTE *v7; // r9@1
  signed int result; // r0@1
  int v9; // r4@1
  char *v10; // r6@1
  char v11; // r1@1
  unsigned int v12; // r8@4
  int v13; // r5@6
  int v14; // r6@6
  __int64 v15; // kr08_8@6
  NpcCommandAction **v16; // r5@8
  int v17; // r7@9
  signed int v18; // r0@11
  unsigned __int64 *v19; // r0@12
  NpcCommandAction::SavedCommand *v20; // r0@12
  NpcCommandAction::SavedCommand *v21; // r5@12
  int *v22; // r0@17
  _BYTE *v23; // r5@17
  int *v24; // r7@17
  int *i; // r9@17
  void *v26; // r0@25
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  int *v29; // r6@34
  int *v30; // r7@34
  unsigned int *v31; // r2@36
  signed int v32; // r1@38
  int *v33; // r0@44
  NpcCommandAction::SavedCommand *v34; // r0@49
  int *v35; // r5@49
  char v36; // r0@56
  int v37; // [sp+10h] [bp-68h]@1
  int v38; // [sp+18h] [bp-60h]@6
  int v39; // [sp+20h] [bp-58h]@20
  int v40; // [sp+24h] [bp-54h]@20
  int *v41; // [sp+28h] [bp-50h]@17
  int *v42; // [sp+2Ch] [bp-4Ch]@17
  void *v43; // [sp+34h] [bp-44h]@17
  int *v44; // [sp+38h] [bp-40h]@17
  int *v45; // [sp+3Ch] [bp-3Ch]@17
  void *ptr; // [sp+40h] [bp-38h]@12
  NpcCommandAction::SavedCommand *v47; // [sp+44h] [bp-34h]@12
  int v48; // [sp+50h] [bp-28h]@21

  v5 = a3;
  v6 = a1;
  v7 = a4;
  v37 = a1;
  *a4 = 0;
  NpcComponent::_loadActions(0, a3, a2);
  result = *v5 >> 32;
  v9 = *v5;
  v10 = a5;
  v11 = 0;
  if ( (*(_QWORD *)(v6 + 4) >> 32) - (unsigned int)*(_QWORD *)(v6 + 4) != result - v9 )
    v11 = 1;
  *a5 = v11;
  if ( result != v9 )
  {
    v12 = 0;
    while ( NpcAction::getType(*(NpcAction **)(v9 + 4 * v12)) != 1 )
    {
LABEL_55:
      if ( *v10 )
        v36 = 1;
      else
        v36 = NpcAction::operator!=(*(_DWORD *)(v9 + 4 * v12), *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v12));
      *v10 = v36;
      ++v12;
      v9 = *v5;
      result = (*v5 >> 32) - v9;
      if ( v12 >= result >> 2 )
        return result;
    }
    v38 = *(_DWORD *)(v9 + 4 * v12);
    v15 = *(_QWORD *)(v6 + 4);
    v13 = *(_QWORD *)(v6 + 4) >> 32;
    v14 = v15;
    if ( (_DWORD)v15 != v13 )
      if ( NpcAction::operator==(*(_DWORD *)v15, v38) )
      {
        v16 = (NpcCommandAction **)v15;
LABEL_12:
        v19 = (unsigned __int64 *)NpcCommandAction::getCommands(*v16);
        std::vector<NpcCommandAction::SavedCommand,std::allocator<NpcCommandAction::SavedCommand>>::vector(
          (int)&ptr,
          v19);
        NpcCommandAction::setCommands(v38, (int)&ptr);
        v21 = v47;
        v20 = (NpcCommandAction::SavedCommand *)ptr;
        if ( ptr != (void *)v47 )
        {
          do
            v20 = (NpcCommandAction::SavedCommand *)((char *)NpcCommandAction::SavedCommand::~SavedCommand(v20) + 12);
          while ( v21 != v20 );
          v20 = (NpcCommandAction::SavedCommand *)ptr;
        }
        v10 = a5;
        if ( v20 )
          operator delete((void *)v20);
        goto LABEL_54;
      }
      v17 = v13 - 4;
      while ( v17 != v14 )
        v16 = (NpcCommandAction **)(v14 + 4);
        v18 = NpcAction::operator==(*(_DWORD *)(v14 + 4), *(_DWORD *)(v9 + 4 * v12));
        v14 += 4;
        if ( v18 )
          goto LABEL_12;
    *v7 = 1;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v22 = (int *)NpcAction::getText(*(NpcAction **)(v9 + 4 * v12));
    Util::split((int)&v41, v22, NpcCommandAction::COMMAND_DELIMITER);
    v23 = v7;
    v24 = v42;
    for ( i = v41; i != v24; ++i )
      Util::stringTrim(&v40, i);
      v39 = 0;
      if ( v44 == v45 )
        j__ZNSt6vectorIN16NpcCommandAction12SavedCommandESaIS1_EE19_M_emplace_back_auxIJRSsDnRKiEEEvDpOT_(
          (unsigned __int64 *)&v43,
          &v40,
          (int)&v39,
          (int *)&CommandVersion::CurrentVersion);
        v48 = 0;
        NpcCommandAction::SavedCommand::SavedCommand(v44, &v40, &v48, 3);
        if ( v48 )
          (*(void (**)(void))(*(_DWORD *)v48 + 4))();
        v44 += 3;
      v26 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v40 - 4);
        if ( &pthread_create )
          __dmb();
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
    NpcCommandAction::setCommands(v38, (int)&v43);
    v7 = v23;
    v29 = v42;
    v30 = v41;
    if ( v41 != v42 )
      do
        v33 = (int *)(*v30 - 12);
        if ( v33 != &dword_28898C0 )
          v31 = (unsigned int *)(*v30 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        ++v30;
      while ( v30 != v29 );
      v30 = v41;
    if ( v30 )
      operator delete(v30);
    v35 = v44;
    v34 = (NpcCommandAction::SavedCommand *)v43;
    v10 = a5;
    if ( v43 != v44 )
        v34 = (NpcCommandAction::SavedCommand *)((char *)NpcCommandAction::SavedCommand::~SavedCommand(v34) + 12);
      while ( (NpcCommandAction::SavedCommand *)v35 != v34 );
      v34 = (NpcCommandAction::SavedCommand *)v43;
    if ( v34 )
      operator delete((void *)v34);
LABEL_54:
    v6 = v37;
    goto LABEL_55;
  }
  return result;
}


void __fastcall NpcComponent::requestClosingCommandActions(NpcComponent *this)
{
  NpcComponent::requestClosingCommandActions(this);
}


void __fastcall NpcComponent::syncActionsWithClient(NpcComponent *this)
{
  NpcComponent *v1; // r4@1
  Level *v2; // r0@1
  int v3; // r6@2
  int v4; // r4@2
  _DWORD *v5; // r0@3
  size_t v6; // r2@3
  unsigned int v7; // r0@5
  unsigned int v8; // r1@5
  char *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  void *s2; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  if ( !Level::isClientSide(v2) )
  {
    v3 = *(_DWORD *)v1;
    NpcComponent::_serializeActions((NpcComponent *)&s2, (int)v1);
    v4 = SynchedEntityData::_get((SynchedEntityData *)(v3 + 176), 42);
    if ( *(_BYTE *)(v4 + 4) == 4 )
    {
      v5 = *(_DWORD **)(v4 + 12);
      v6 = *(v5 - 3);
      if ( v6 != *((_DWORD *)s2 - 3) || memcmp(v5, s2, v6) )
      {
        EntityInteraction::setInteractText((int *)(v4 + 12), (int *)&s2);
        *(_BYTE *)(v4 + 8) = 1;
        v7 = *(_WORD *)(v4 + 6);
        v8 = *(_WORD *)(v3 + 188);
        if ( v8 >= v7 )
          LOWORD(v8) = *(_WORD *)(v4 + 6);
        *(_WORD *)(v3 + 188) = v8;
        if ( *(_WORD *)(v3 + 190) > v7 )
          LOWORD(v7) = *(_WORD *)(v3 + 190);
        *(_WORD *)(v3 + 190) = v7;
      }
    }
    v9 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)((char *)s2 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  }
}


void __fastcall NpcComponent::setActions(Entity **a1, int a2)
{
  NpcComponent::setActions(a1, a2);
}


int __fastcall NpcComponent::compileCommand(CommandRegistry::Parser *a1, Entity **a2, int a3, int *a4, int a5)
{
  CommandRegistry::Parser *v5; // r5@1
  int *v6; // r6@1
  int v7; // r4@1
  ServerLevel *v8; // r0@1
  MinecraftCommands *v9; // r0@1
  const CommandRegistry *v10; // r0@1
  _DWORD *v11; // r0@1
  char v13; // [sp+4h] [bp-6Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (ServerLevel *)Entity::getLevel(*a2);
  v9 = (MinecraftCommands *)ServerLevel::getCommands(v8);
  v10 = (const CommandRegistry *)MinecraftCommands::getRegistry(v9);
  v11 = CommandRegistry::Parser::Parser((CommandRegistry::Parser *)&v13, v10, a5);
  if ( CommandRegistry::Parser::parse((int)v11, v6) == 1 )
    CommandRegistry::Parser::createCommand(v5, (const CommandOrigin *)&v13, v7);
  else
    *(_DWORD *)v5 = 0;
  return CommandRegistry::Parser::~Parser((CommandRegistry::Parser *)&v13);
}


void __fastcall NpcComponent::sendChangedPacket(NpcComponent *this)
{
  NpcComponent::sendChangedPacket(this);
}


int __fastcall NpcComponent::_getCommands(NpcComponent *this)
{
  ServerLevel *v1; // r0@1

  v1 = (ServerLevel *)Entity::getLevel(*(Entity **)this);
  return ServerLevel::getCommands(v1);
}


void __fastcall NpcComponent::requestCommandAction(NpcComponent *this, int a2)
{
  int *v2; // r4@1
  char v3; // r5@1
  Level *v4; // r0@1
  Level *v5; // r0@2
  int v6; // r0@2
  char *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // [sp+0h] [bp-48h]@2
  void **v11; // [sp+8h] [bp-40h]@2
  signed __int64 v12; // [sp+Ch] [bp-3Ch]@2
  char v13; // [sp+14h] [bp-34h]@2
  __int64 v14; // [sp+18h] [bp-30h]@2
  char v15; // [sp+20h] [bp-28h]@2
  char *v16; // [sp+24h] [bp-24h]@2
  char v17; // [sp+28h] [bp-20h]@2

  v2 = (int *)this;
  v3 = a2;
  v4 = (Level *)Entity::getLevel(*(Entity **)this);
  if ( Level::isClientSide(v4) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v10, *v2);
    v12 = 4294967298LL;
    v13 = 0;
    v11 = &off_26E9B34;
    v14 = *(_QWORD *)&v10;
    v15 = 1;
    v16 = (char *)&unk_28898CC;
    v17 = v3;
    v5 = (Level *)Entity::getLevel((Entity *)*v2);
    v6 = Level::getPacketSender(v5);
    (*(void (**)(void))(*(_DWORD *)v6 + 8))();
    v7 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v16 - 4);
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
  }
}


NpcUrlAction *__fastcall NpcComponent::readAdditionalSaveData(NpcComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  NpcComponent *v3; // r8@1
  int v4; // r4@2
  void (__fastcall *v5)(int, const void **); // r6@2
  const void **v6; // r0@2
  int v7; // r6@4
  int *v8; // r9@4
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r2@5
  unsigned int v12; // r0@7
  unsigned int v13; // r1@7
  int v14; // r6@13
  int *v15; // r9@13
  int v16; // r7@13
  _DWORD *v17; // r0@14
  size_t v18; // r2@14
  unsigned int v19; // r0@16
  unsigned int v20; // r1@16
  int *v21; // r0@21
  NpcUrlAction *result; // r0@22
  NpcUrlAction *v23; // r6@23
  void *v24; // r0@23
  void *v25; // r0@24
  int v26; // r6@25
  int *v27; // r0@25
  __int64 v28; // r0@25
  int v29; // r6@28
  int v30; // r4@28
  _DWORD *v31; // r0@29
  size_t v32; // r2@29
  unsigned int v33; // r0@31
  unsigned int v34; // r1@31
  char *v35; // r0@36
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  unsigned int *v38; // r2@44
  signed int v39; // r1@46
  unsigned int *v40; // r2@48
  signed int v41; // r1@50
  void *s2; // [sp+4h] [bp-34h]@28
  int v43; // [sp+Ch] [bp-2Ch]@23
  int v44; // [sp+10h] [bp-28h]@23
  NpcUrlAction *v45; // [sp+14h] [bp-24h]@23

  v2 = a2;
  v3 = this;
  if ( CompoundTag::contains((int)a2, (const void **)&NpcComponent::NAME_TAG) == 1 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(void (__fastcall **)(int, const void **))(**(_DWORD **)v3 + 200);
    v6 = CompoundTag::getString((int)v2, (const void **)&NpcComponent::NAME_TAG);
    v5(v4, v6);
  }
  if ( CompoundTag::contains((int)v2, (const void **)&NpcComponent::INTERACTIVE_TAG) == 1 )
    v7 = *(_DWORD *)v3;
    v8 = (int *)CompoundTag::getString((int)v2, (const void **)&NpcComponent::INTERACTIVE_TAG);
    v9 = SynchedEntityData::_get((SynchedEntityData *)(v7 + 176), 40);
    if ( *(_BYTE *)(v9 + 4) == 4 )
    {
      v10 = *(_DWORD **)(v9 + 12);
      v11 = *(v10 - 3);
      if ( v11 != *(_DWORD *)(*v8 - 12) || memcmp(v10, (const void *)*v8, v11) )
      {
        EntityInteraction::setInteractText((int *)(v9 + 12), v8);
        *(_BYTE *)(v9 + 8) = 1;
        v12 = *(_WORD *)(v9 + 6);
        v13 = *(_WORD *)(v7 + 188);
        if ( v13 >= v12 )
          LOWORD(v13) = *(_WORD *)(v9 + 6);
        *(_WORD *)(v7 + 188) = v13;
        if ( *(_WORD *)(v7 + 190) > v12 )
          LOWORD(v12) = *(_WORD *)(v7 + 190);
        *(_WORD *)(v7 + 190) = v12;
      }
    }
  if ( CompoundTag::contains((int)v2, (const void **)&NpcComponent::ACTIONS_TAG) == 1 )
    v14 = *(_DWORD *)v3;
    v15 = (int *)CompoundTag::getString((int)v2, (const void **)&NpcComponent::ACTIONS_TAG);
    v16 = SynchedEntityData::_get((SynchedEntityData *)(v14 + 176), 42);
    if ( *(_BYTE *)(v16 + 4) == 4 )
      v17 = *(_DWORD **)(v16 + 12);
      v18 = *(v17 - 3);
      if ( v18 != *(_DWORD *)(*v15 - 12) || memcmp(v17, (const void *)*v15, v18) )
        EntityInteraction::setInteractText((int *)(v16 + 12), v15);
        *(_BYTE *)(v16 + 8) = 1;
        v19 = *(_WORD *)(v16 + 6);
        v20 = *(_WORD *)(v14 + 188);
        if ( v20 >= v19 )
          LOWORD(v20) = *(_WORD *)(v16 + 6);
        *(_WORD *)(v14 + 188) = v20;
        if ( *(_WORD *)(v14 + 190) > v19 )
          LOWORD(v19) = *(_WORD *)(v14 + 190);
        *(_WORD *)(v14 + 190) = v19;
    v21 = (int *)SynchedEntityData::getString((SynchedEntityData *)(*(_DWORD *)v3 + 176), 42);
    NpcComponent::_loadActions((int)v21, (NpcComponent *)((char *)v3 + 4), v21);
  result = (NpcUrlAction *)CompoundTag::contains((int)v2, (const void **)&NpcComponent::URL_TAG);
  if ( result == (NpcUrlAction *)1 )
    v23 = (NpcUrlAction *)operator new(0x10u);
    NpcUrlAction::NpcUrlAction(v23);
    v45 = v23;
    sub_21E94B4((void **)&v43, "npcscreen.learnmore");
    I18n::get(&v44, (int **)&v43);
    NpcAction::setButtonName((int)v23, &v44);
    v24 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v43 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (int)v45;
    v27 = (int *)CompoundTag::getString((int)v2, (const void **)&NpcComponent::URL_TAG);
    NpcAction::setText(v26, v27);
    NpcAction::setMode(v26, 0);
    v28 = *((_QWORD *)v3 + 1);
    if ( (_DWORD)v28 == HIDWORD(v28) )
      std::vector<std::unique_ptr<NpcAction,std::default_delete<NpcAction>>,std::allocator<std::unique_ptr<NpcAction,std::default_delete<NpcAction>>>>::_M_emplace_back_aux<std::unique_ptr<NpcUrlAction,std::default_delete<NpcUrlAction>>>(
        (NpcComponent *)((char *)v3 + 4),
        (int *)&v45);
    else
      v45 = 0;
      *(_DWORD *)v28 = v26;
      *((_DWORD *)v3 + 2) = v28 + 4;
    v29 = *(_DWORD *)v3;
    NpcComponent::_serializeActions((NpcComponent *)&s2, (int)v3);
    v30 = SynchedEntityData::_get((SynchedEntityData *)(v29 + 176), 42);
    if ( *(_BYTE *)(v30 + 4) == 4 )
      v31 = *(_DWORD **)(v30 + 12);
      v32 = *(v31 - 3);
      if ( v32 != *((_DWORD *)s2 - 3) || memcmp(v31, s2, v32) )
        EntityInteraction::setInteractText((int *)(v30 + 12), (int *)&s2);
        *(_BYTE *)(v30 + 8) = 1;
        v33 = *(_WORD *)(v30 + 6);
        v34 = *(_WORD *)(v29 + 188);
        if ( v34 >= v33 )
          LOWORD(v34) = *(_WORD *)(v30 + 6);
        *(_WORD *)(v29 + 188) = v34;
        if ( *(_WORD *)(v29 + 190) > v33 )
          LOWORD(v33) = *(_WORD *)(v29 + 190);
        *(_WORD *)(v29 + 190) = v33;
    v35 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)((char *)s2 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    result = v45;
    if ( v45 )
      result = (NpcUrlAction *)(*(int (**)(void))(*(_DWORD *)v45 + 4))();
  return result;
}


Json::Value *__fastcall NpcComponent::_serializeActions(NpcComponent *this, int a2)
{
  int *v2; // r8@1
  int v3; // r5@1
  unsigned int v4; // r6@2
  int v5; // r7@3
  int v7; // [sp+0h] [bp-40h]@3
  char v8; // [sp+10h] [bp-30h]@1

  v2 = (int *)this;
  v3 = a2;
  Json::Value::Value(&v8, 0);
  if ( *(_QWORD *)(v3 + 4) >> 32 != (unsigned int)*(_QWORD *)(v3 + 4) )
  {
    v4 = 0;
    do
    {
      v5 = Json::Value::operator[]((int)&v8, v4);
      (*(void (__fastcall **)(int *))(**(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * v4) + 8))(&v7);
      Json::Value::operator=(v5, (const Json::Value *)&v7);
      Json::Value::~Value((Json::Value *)&v7);
      ++v4;
    }
    while ( v4 < (signed int)((*(_QWORD *)(v3 + 4) >> 32) - *(_QWORD *)(v3 + 4)) >> 2 );
  }
  if ( Json::Value::isNull((Json::Value *)&v8) == 1 )
    sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  else
    Json::Value::toStyledString((Json::Value *)v2, (const Json::Value *)&v8);
  return Json::Value::~Value((Json::Value *)&v8);
}


signed int __fastcall NpcComponent::getActionCount(NpcComponent *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
}


void __fastcall NpcComponent::setName(Entity **a1, int a2, int a3)
{
  Entity **v3; // r5@1
  Level *v4; // r0@2

  v3 = a1;
  if ( a3 || (v4 = (Level *)Entity::getLevel(*a1), !Level::isClientSide(v4)) )
  {
    (*(void (**)(void))(*(_DWORD *)*v3 + 200))();
  }
  else
    j_j_j__ZN12NpcComponent17sendChangedPacketEv((NpcComponent *)v3);
}


int __fastcall NpcComponent::_isServerSide(NpcComponent *this)
{
  Level *v1; // r0@1

  v1 = (Level *)Entity::getLevel(*(Entity **)this);
  return Level::isClientSide(v1) ^ 1;
}


void __fastcall NpcComponent::requestClosingCommandActions(NpcComponent *this)
{
  int *v1; // r4@1
  Level *v2; // r0@1
  Level *v3; // r0@2
  int v4; // r0@2
  char *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+0h] [bp-48h]@2
  int v9; // [sp+4h] [bp-44h]@2
  void **v10; // [sp+8h] [bp-40h]@2
  int v11; // [sp+Ch] [bp-3Ch]@2
  signed int v12; // [sp+10h] [bp-38h]@2
  char v13; // [sp+14h] [bp-34h]@2
  int v14; // [sp+18h] [bp-30h]@2
  int v15; // [sp+1Ch] [bp-2Ch]@2
  char v16; // [sp+20h] [bp-28h]@2
  char *v17; // [sp+24h] [bp-24h]@2

  v1 = (int *)this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  if ( Level::isClientSide(v2) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v8, *v1);
    v11 = 2;
    v12 = 1;
    v13 = 0;
    v10 = &off_26E9B34;
    v14 = v8;
    v15 = v9;
    v16 = 2;
    v17 = (char *)&unk_28898CC;
    v3 = (Level *)Entity::getLevel((Entity *)*v1);
    v4 = Level::getPacketSender(v3);
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
    v5 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  }
}


Json::Value *__fastcall NpcComponent::_loadActions(int a1, _QWORD *a2, int *a3)
{
  _QWORD *v3; // r4@1
  int *v4; // r8@1
  __int64 v5; // kr00_8@1
  int v6; // r6@2
  signed int v7; // r5@6
  unsigned int i; // r7@8
  const Json::Value *v9; // r0@11
  int v10; // r0@11
  int *v11; // r1@12 OVERLAPPED
  int *v12; // r2@12
  int v14; // [sp+4h] [bp-A4h]@11
  char v15; // [sp+8h] [bp-A0h]@6
  char v16; // [sp+78h] [bp-30h]@6

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = v5;
    do
    {
      if ( *(_DWORD *)v6 )
        (*(void (**)(void))(**(_DWORD **)v6 + 4))();
      *(_DWORD *)v6 = 0;
      v6 += 4;
    }
    while ( HIDWORD(v5) != v6 );
  }
  *((_DWORD *)v3 + 1) = v5;
  Json::Value::Value(&v16, 0);
  Json::Reader::Reader((Json::Reader *)&v15);
  v7 = Json::Reader::parse((int)&v15, v4, (int)&v16, 1);
  Json::Reader::~Reader((Json::Reader *)&v15);
  if ( v7 == 1 && Json::Value::isArray((Json::Value *)&v16) == 1 )
    for ( i = 0; i < Json::Value::size((Json::Value *)&v16); ++i )
      v9 = (const Json::Value *)Json::Value::operator[]((int)&v16, i);
      NpcAction::read((NpcAction *)&v14, v9);
      v10 = v14;
      if ( v14 )
      {
        *(_QWORD *)&v11 = *(_QWORD *)((char *)v3 + 4);
        if ( v11 == v12 )
        {
          std::vector<std::unique_ptr<NpcAction,std::default_delete<NpcAction>>,std::allocator<std::unique_ptr<NpcAction,std::default_delete<NpcAction>>>>::_M_emplace_back_aux<std::unique_ptr<NpcAction,std::default_delete<NpcAction>>>(
            v3,
            &v14);
        }
        else
          v14 = 0;
          *v11 = v10;
          *((_DWORD *)v3 + 1) = v11 + 1;
        if ( v14 )
          (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      }
  return Json::Value::~Value((Json::Value *)&v16);
}


void __fastcall NpcComponent::setName(Entity **a1, int a2, int a3)
{
  NpcComponent::setName(a1, a2, a3);
}


void __fastcall NpcComponent::syncActionsWithServer(NpcComponent *this)
{
  int *v1; // r4@1
  Level *v2; // r0@1
  void *v3; // r0@2
  Level *v4; // r0@3
  int v5; // r0@3
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int v11; // [sp+4h] [bp-4Ch]@2
  char v12; // [sp+8h] [bp-48h]@2
  void **v13; // [sp+10h] [bp-40h]@2
  signed int v14; // [sp+14h] [bp-3Ch]@2
  signed int v15; // [sp+18h] [bp-38h]@2
  char v16; // [sp+1Ch] [bp-34h]@2
  __int64 v17; // [sp+20h] [bp-30h]@2
  char v18; // [sp+28h] [bp-28h]@2
  int v19; // [sp+2Ch] [bp-24h]@2

  v1 = (int *)this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  if ( Level::isClientSide(v2) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v12, *v1);
    NpcComponent::_serializeActions((NpcComponent *)&v11, (int)v1);
    v14 = 2;
    v15 = 1;
    v16 = 0;
    v13 = &off_26E9B34;
    v17 = *(_QWORD *)&v12;
    v18 = 0;
    sub_21E8AF4(&v19, &v11);
    v3 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v11 - 4);
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
    v4 = (Level *)Entity::getLevel((Entity *)*v1);
    v5 = Level::getPacketSender(v4);
    (*(void (**)(void))(*(_DWORD *)v5 + 8))();
    v6 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v19 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall NpcComponent::_defineEntityDataString(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  SynchedEntityData *v6; // r5@1
  int v7; // r4@2
  _DWORD *v8; // r0@3
  size_t v9; // r2@3
  unsigned int v10; // r0@5
  unsigned int v11; // r1@5
  char *v12; // r0@10
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  void *s2; // [sp+4h] [bp-2Ch]@2
  int v18; // [sp+Ch] [bp-24h]@15

  v2 = a1;
  v3 = a2;
  v4 = SynchedEntityData::hasData((SynchedEntityData *)(*a1 + 176), a2);
  v5 = *v2;
  v6 = (SynchedEntityData *)(*v2 + 176);
  if ( v4 )
  {
    sub_21E94B4(&s2, (const char *)&unk_257BC67);
    v7 = SynchedEntityData::_get(v6, v3);
    if ( *(_BYTE *)(v7 + 4) == 4 )
    {
      v8 = *(_DWORD **)(v7 + 12);
      v9 = *(v8 - 3);
      if ( v9 != *((_DWORD *)s2 - 3) || memcmp(v8, s2, v9) )
      {
        EntityInteraction::setInteractText((int *)(v7 + 12), (int *)&s2);
        *(_BYTE *)(v7 + 8) = 1;
        v10 = *(_WORD *)(v7 + 6);
        v11 = *(_WORD *)(v5 + 188);
        if ( v11 >= v10 )
          LOWORD(v11) = *(_WORD *)(v7 + 6);
        *(_WORD *)(v5 + 188) = v11;
        if ( *(_WORD *)(v5 + 190) > v10 )
          LOWORD(v10) = *(_WORD *)(v5 + 190);
        *(_WORD *)(v5 + 190) = v10;
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
        goto LABEL_26;
  }
  else
    sub_21E94B4((void **)&v18, (const char *)&unk_257BC67);
    SynchedEntityData::define<std::string>(v6, v3, &v18);
    v12 = (char *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
LABEL_26:
        j_j_j_j__ZdlPv_9(v12);
        return;
}


void __fastcall NpcComponent::_defineEntityDataString(_DWORD *a1, int a2)
{
  NpcComponent::_defineEntityDataString(a1, a2);
}


Json::Value *__fastcall NpcComponent::loadActions(NpcComponent *this)
{
  char *v1; // r4@1
  int *v2; // r0@1

  v1 = (char *)this + 4;
  v2 = (int *)SynchedEntityData::getString((SynchedEntityData *)(*(_DWORD *)this + 176), 42);
  return j_j_j__ZNK12NpcComponent12_loadActionsERSt6vectorISt10unique_ptrI9NpcActionSt14default_deleteIS2_EESaIS5_EERKSs(
           (int)v2,
           v1,
           v2);
}


void __fastcall NpcComponent::setActions(Entity **a1, int a2)
{
  Entity **v2; // r4@1
  int v3; // r6@1
  Level *v4; // r0@1
  Entity *v5; // r8@2
  Entity *v6; // r5@2
  Entity *v7; // r0@2
  Entity *v8; // r0@2
  Entity *v9; // r6@3

  v2 = a1;
  v3 = a2;
  v4 = (Level *)Entity::getLevel(*a1);
  if ( !Level::isClientSide(v4) )
  {
    v5 = v2[1];
    v2[1] = 0;
    v6 = v2[2];
    v2[2] = 0;
    v2[3] = 0;
    v2[1] = *(Entity **)v3;
    *(_DWORD *)v3 = 0;
    v7 = v2[2];
    v2[2] = *(Entity **)(v3 + 4);
    *(_DWORD *)(v3 + 4) = v7;
    v8 = v2[3];
    v2[3] = *(Entity **)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v8;
    if ( v5 != v6 )
    {
      v9 = v5;
      do
      {
        if ( *(_DWORD *)v9 )
          (*(void (**)(void))(**(_DWORD **)v9 + 4))();
        *(_DWORD *)v9 = 0;
        v9 = (Entity *)((char *)v9 + 4);
      }
      while ( v6 != v9 );
    }
    if ( v5 )
      operator delete((void *)v5);
    j_j_j__ZN12NpcComponent21syncActionsWithClientEv((NpcComponent *)v2);
  }
}


void __fastcall NpcComponent::sendChangedPacket(NpcComponent *this)
{
  int *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@2
  Level *v4; // r0@2
  int v5; // r0@2
  __int64 v6; // r4@2
  int v7; // r7@3
  int v8; // [sp+0h] [bp-48h]@2
  int v9; // [sp+4h] [bp-44h]@2
  void **v10; // [sp+8h] [bp-40h]@2
  signed int v11; // [sp+Ch] [bp-3Ch]@2
  signed int v12; // [sp+10h] [bp-38h]@2
  char v13; // [sp+14h] [bp-34h]@2
  int v14; // [sp+18h] [bp-30h]@2
  int v15; // [sp+1Ch] [bp-2Ch]@2
  int v16; // [sp+20h] [bp-28h]@2
  int v17; // [sp+24h] [bp-24h]@2

  v1 = (int *)this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  if ( Level::isClientSide(v2) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v8, *v1);
    v3 = Entity::getEntityData((Entity *)*v1);
    v11 = 2;
    v12 = 1;
    v13 = 0;
    v10 = &off_26E965C;
    v14 = v8;
    v15 = v9;
    SynchedEntityData::packDirty((SynchedEntityData *)&v16, (int)v3);
    v4 = (Level *)Entity::getLevel((Entity *)*v1);
    v5 = Level::getPacketSender(v4);
    (*(void (**)(void))(*(_DWORD *)v5 + 8))();
    v6 = *(_QWORD *)&v16;
    if ( v17 == v16 )
    {
      v17 = v16;
    }
    else
      v7 = v16;
      do
      {
        if ( *(_DWORD *)v7 )
          (*(void (**)(void))(**(_DWORD **)v7 + 4))();
        *(_DWORD *)v7 = 0;
        v7 += 4;
      }
      while ( HIDWORD(v6) != v7 );
      HIDWORD(v6) = v16;
      v17 = v6;
      if ( v16 != (_DWORD)v6 )
        do
        {
          if ( *(_DWORD *)HIDWORD(v6) )
            (*(void (**)(void))(**(_DWORD **)HIDWORD(v6) + 4))();
          *(_DWORD *)HIDWORD(v6) = 0;
          HIDWORD(v6) += 4;
        }
        while ( (_DWORD)v6 != HIDWORD(v6) );
        LODWORD(v6) = v16;
    if ( (_DWORD)v6 )
      operator delete((void *)v6);
  }
}


void __fastcall NpcComponent::addAdditionalSaveData(NpcComponent *this, CompoundTag *a2)
{
  NpcComponent::addAdditionalSaveData(this, a2);
}


void __fastcall NpcComponent::addAdditionalSaveData(NpcComponent *this, CompoundTag *a2)
{
  NpcComponent *v2; // r5@1
  CompoundTag *v3; // r4@1
  int *v4; // r0@1
  int *v5; // r0@1
  int *v6; // r0@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = (int *)(*(int (**)(void))(**(_DWORD **)this + 188))();
  CompoundTag::putString((int)v3, (const void **)&NpcComponent::NAME_TAG, v4);
  v5 = (int *)SynchedEntityData::getString((SynchedEntityData *)(*(_DWORD *)v2 + 176), 40);
  sub_21E8AF4(&v10, v5);
  if ( *(_DWORD *)(v10 - 12) )
    CompoundTag::putString((int)v3, (const void **)&NpcComponent::INTERACTIVE_TAG, &v10);
  v6 = (int *)SynchedEntityData::getString((SynchedEntityData *)(*(_DWORD *)v2 + 176), 42);
  CompoundTag::putString((int)v3, (const void **)&NpcComponent::ACTIONS_TAG, v6);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
}


void __fastcall NpcComponent::setInteractiveText(Entity **a1, int *a2, int a3)
{
  int *v3; // r4@1
  Entity **v4; // r5@1
  Level *v5; // r0@2
  Entity *v6; // r7@3
  int v7; // r6@3
  _DWORD *v8; // r0@4
  size_t v9; // r2@4
  unsigned int v10; // r0@6
  unsigned int v11; // r1@6
  Entity *v12; // r7@12
  int v13; // r5@12
  _DWORD *v14; // r0@13
  size_t v15; // r2@13
  unsigned int v16; // r0@15
  unsigned int v17; // r1@15

  v3 = a2;
  v4 = a1;
  if ( a3 || (v5 = (Level *)Entity::getLevel(*a1), !Level::isClientSide(v5)) )
  {
    v12 = *v4;
    v13 = SynchedEntityData::_get((Entity *)((char *)*v4 + 176), 40);
    if ( *(_BYTE *)(v13 + 4) == 4 )
    {
      v14 = *(_DWORD **)(v13 + 12);
      v15 = *(v14 - 3);
      if ( v15 != *(_DWORD *)(*v3 - 12) || memcmp(v14, (const void *)*v3, v15) )
      {
        EntityInteraction::setInteractText((int *)(v13 + 12), v3);
        *(_BYTE *)(v13 + 8) = 1;
        v16 = *(_WORD *)(v13 + 6);
        v17 = *((_WORD *)v12 + 94);
        if ( v17 >= v16 )
          LOWORD(v17) = *(_WORD *)(v13 + 6);
        *((_WORD *)v12 + 94) = v17;
        if ( *((_WORD *)v12 + 95) > v16 )
          LOWORD(v16) = *((_WORD *)v12 + 95);
        *((_WORD *)v12 + 95) = v16;
      }
    }
  }
  else
    v6 = *v4;
    v7 = SynchedEntityData::_get((Entity *)((char *)*v4 + 176), 40);
    if ( *(_BYTE *)(v7 + 4) == 4 )
      v8 = *(_DWORD **)(v7 + 12);
      v9 = *(v8 - 3);
      if ( v9 != *(_DWORD *)(*v3 - 12) || memcmp(v8, (const void *)*v3, v9) )
        EntityInteraction::setInteractText((int *)(v7 + 12), v3);
        *(_BYTE *)(v7 + 8) = 1;
        v10 = *(_WORD *)(v7 + 6);
        v11 = *((_WORD *)v6 + 94);
        if ( v11 >= v10 )
          LOWORD(v11) = *(_WORD *)(v7 + 6);
        *((_WORD *)v6 + 94) = v11;
        if ( *((_WORD *)v6 + 95) > v10 )
          LOWORD(v10) = *((_WORD *)v6 + 95);
        *((_WORD *)v6 + 95) = v10;
    j_j_j__ZN12NpcComponent17sendChangedPacketEv((NpcComponent *)v4);
}


void __fastcall NpcComponent::syncActionsWithServer(NpcComponent *this)
{
  NpcComponent::syncActionsWithServer(this);
}


int __fastcall NpcComponent::removeActionAt(NpcComponent *this, unsigned int a2)
{
  NpcComponent *v2; // r4@1
  int v3; // r2@1
  int v4; // r5@1
  int v5; // r0@1
  signed int v6; // r1@2
  int v7; // r6@3
  int v8; // r1@4
  int v9; // r0@4
  _DWORD *v10; // r5@8
  int v11; // r0@8
  int result; // r0@10

  v2 = this;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v4 = *(_QWORD *)((char *)this + 4) + 4 * a2;
  v5 = v4 + 4;
  if ( v4 + 4 != v3 )
  {
    v6 = v3 - v5;
    v5 = v3;
    if ( v6 >= 1 )
    {
      v7 = (v6 >> 2) + 1;
      do
      {
        v8 = *(_DWORD *)(v4 + 4);
        *(_DWORD *)(v4 + 4) = 0;
        v9 = *(_DWORD *)v4;
        *(_DWORD *)v4 = v8;
        if ( v9 )
          (*(void (**)(void))(*(_DWORD *)v9 + 4))();
        --v7;
        v4 += 4;
      }
      while ( v7 > 1 );
      v5 = *((_DWORD *)v2 + 2);
    }
  }
  v10 = (_DWORD *)(v5 - 4);
  *((_DWORD *)v2 + 2) = v5 - 4;
  v11 = *(_DWORD *)(v5 - 4);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  result = 0;
  *v10 = 0;
  return result;
}


int __fastcall NpcComponent::executeClosingCommands(NpcComponent *this)
{
  NpcComponent *v1; // r4@1
  Level *v2; // r0@1
  __int64 v3; // r0@1
  unsigned int v4; // r5@3

  v1 = this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  LODWORD(v3) = Level::isClientSide(v2);
  if ( !(_DWORD)v3 )
  {
    v3 = *(_QWORD *)((char *)v1 + 4);
    if ( HIDWORD(v3) != (_DWORD)v3 )
    {
      v4 = 0;
      do
      {
        if ( NpcAction::getMode(*(NpcAction **)(v3 + 4 * v4)) == 1 )
          NpcComponent::executeCommandAction(v1, v4);
        v3 = *(_QWORD *)((char *)v1 + 4);
        ++v4;
      }
      while ( v4 < (HIDWORD(v3) - (signed int)v3) >> 2 );
    }
  }
  return v3;
}


unsigned int __fastcall NpcComponent::_defineEntityDataInt(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  SynchedEntityData *v6; // r5@1
  unsigned int result; // r0@2
  unsigned int v8; // r1@2
  unsigned int v9; // r1@4
  unsigned int v10; // r0@4
  int v11; // r5@11
  _BYTE *v12; // r0@11
  _BYTE *v13; // r1@11
  int v14; // r0@11
  unsigned int v15; // r0@13

  v2 = a1;
  v3 = a2;
  v4 = SynchedEntityData::hasData((SynchedEntityData *)(*a1 + 176), a2);
  v5 = *v2;
  v6 = (SynchedEntityData *)(*v2 + 176);
  if ( v4 )
  {
    result = SynchedEntityData::_get(v6, v3);
    v8 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v8 == 2 && *(_DWORD *)(result + 12) )
    {
      v9 = v8 >> 16;
      *(_DWORD *)(result + 12) = 0;
      *(_BYTE *)(result + 8) = 1;
      v10 = *(_WORD *)(v5 + 188);
      if ( v10 >= v9 )
        LOWORD(v10) = v9;
      *(_WORD *)(v5 + 188) = v10;
      result = *(_WORD *)(v5 + 190);
      if ( result > v9 )
        LOWORD(v9) = *(_WORD *)(v5 + 190);
      *(_WORD *)(v5 + 190) = v9;
    }
  }
  else
    result = SynchedEntityData::_find(v6, v3);
    if ( !result )
      SynchedEntityData::_resizeToContain(v6, v3);
      v11 = *(_DWORD *)v6;
      v12 = operator new(0x10u);
      v13 = v12;
      v12[4] = 2;
      *((_WORD *)v12 + 3) = v3;
      v12[8] = 1;
      *(_DWORD *)v12 = &off_26F08C4;
      *((_DWORD *)v12 + 3) = 0;
      v14 = *(_DWORD *)(v11 + 4 * v3);
      *(_DWORD *)(v11 + 4 * v3) = v13;
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      v15 = *(_WORD *)(v5 + 188);
      if ( v15 >= v3 )
        LOWORD(v15) = v3;
      *(_WORD *)(v5 + 188) = v15;
      if ( result > v3 )
        LOWORD(v3) = *(_WORD *)(v5 + 190);
      *(_WORD *)(v5 + 190) = v3;
  return result;
}


void __fastcall NpcComponent::syncActionsWithClient(NpcComponent *this)
{
  NpcComponent::syncActionsWithClient(this);
}


int __fastcall NpcComponent::getActionAt(NpcComponent *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


void __fastcall NpcComponent::requestCommandAction(NpcComponent *this, int a2)
{
  NpcComponent::requestCommandAction(this, a2);
}


int __fastcall NpcComponent::executeCommandAction(NpcComponent *this, int a2)
{
  NpcComponent *v2; // r4@1
  unsigned int v3; // r5@1
  Level *v4; // r0@1
  __int64 v5; // r0@1
  NpcAction *v6; // r5@3
  int v7; // r5@5 OVERLAPPED
  char *v8; // r6@5 OVERLAPPED
  Command *v9; // r0@6
  int v10; // r1@7
  int v11; // r0@7
  int v13; // [sp+4h] [bp-54h]@7
  char v14; // [sp+8h] [bp-50h]@5
  int v15; // [sp+Ch] [bp-4Ch]@16
  void *ptr; // [sp+10h] [bp-48h]@14
  int v17; // [sp+14h] [bp-44h]@14
  char v18; // [sp+20h] [bp-38h]@5

  v2 = this;
  v3 = a2;
  v4 = (Level *)Entity::getLevel(*(Entity **)this);
  LODWORD(v5) = Level::isClientSide(v4);
  if ( !(_DWORD)v5 )
  {
    v5 = *(_QWORD *)((char *)v2 + 4);
    if ( (HIDWORD(v5) - (signed int)v5) >> 2 > v3 )
    {
      v6 = *(NpcAction **)(v5 + 4 * v3);
      if ( v6 )
      {
        LODWORD(v5) = NpcAction::getType(v6);
        if ( (_DWORD)v5 == 1 )
        {
          v8 = NpcCommandAction::getCommands(v6);
          EntityServerCommandOrigin::EntityServerCommandOrigin((int)&v18, *(Entity **)v2);
          CommandOutput::CommandOutput((int)&v14, 0);
          *(_QWORD *)&v7 = *(_QWORD *)v8;
          if ( (char *)v7 != v8 )
          {
            do
            {
              v9 = *(Command **)(v7 + 4);
              if ( v9 )
                goto LABEL_21;
              NpcComponent::compileCommand(
                (CommandRegistry::Parser *)&v13,
                (Entity **)v2,
                (int)&v18,
                (int *)v7,
                *(_DWORD *)(v7 + 8));
              v10 = v13;
              v13 = 0;
              v11 = *(_DWORD *)(v7 + 4);
              *(_DWORD *)(v7 + 4) = v10;
              if ( v11 )
                (*(void (**)(void))(*(_DWORD *)v11 + 4))();
              if ( v13 )
                (*(void (**)(void))(*(_DWORD *)v13 + 4))();
LABEL_21:
                Command::run(v9, (const CommandOrigin *)&v18, (CommandOutput *)&v14);
              v7 += 12;
            }
            while ( v8 != (char *)v7 );
          }
          std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v17);
          if ( ptr )
            operator delete(ptr);
          LODWORD(v5) = v15;
          if ( v15 )
            LODWORD(v5) = (*(int (**)(void))(*(_DWORD *)v15 + 4))();
        }
      }
    }
  }
  return v5;
}


int *__fastcall NpcComponent::getInteractiveText(NpcComponent *this, int a2)
{
  int *v2; // r4@1
  int *v3; // r0@1

  v2 = (int *)this;
  v3 = (int *)SynchedEntityData::getString((SynchedEntityData *)(*(_DWORD *)a2 + 176), 40);
  return sub_21E8AF4(v2, v3);
}
