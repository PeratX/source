

signed int __fastcall MinecartCommandBlockManager::setTrackOutput(MinecartCommandBlockManager *this, int a2)
{
  signed int result; // r0@2

  if ( a2 == *((_BYTE *)this + 44) )
  {
    result = 0;
  }
  else
    *((_BYTE *)this + 44) = a2;
    result = 1;
  return result;
}


const void **__fastcall MinecartCommandBlockManager::getLastPerformedCommandBlockRedstoneModeString(MinecartCommandBlockManager *this, int a2)
{
  void **v2; // r5@1
  const void **result; // r0@2

  v2 = (void **)this;
  *(_DWORD *)this = &unk_28898CC;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 76))(a2) == 1 )
    result = sub_119CAD8(v2, "commandBlockScreen.redstone.needs_redstone", (_BYTE *)0x2A);
  else
    result = sub_119CAD8(v2, "commandBlockScreen.redstone.always_on", (_BYTE *)0x25);
  return result;
}


const void **__fastcall MinecartCommandBlockManager::getLastPerformedCommandBlockTypeModeString(MinecartCommandBlockManager *this, int a2)
{
  void **v2; // r4@1
  const void **result; // r0@1

  v2 = (void **)this;
  *(_DWORD *)this = &unk_28898CC;
  result = (const void **)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 80))(a2);
  if ( result )
  {
    if ( result == (const void **)1 )
    {
      result = sub_119CAD8(v2, "commandBlockScreen.blockType.repeat", (_BYTE *)0x23);
    }
    else if ( result == (const void **)2 )
      result = sub_119CAD8(v2, "commandBlockScreen.blockType.chain", (_BYTE *)0x22);
  }
  else
    result = sub_119CAD8(v2, "commandBlockScreen.blockType.impulse", (_BYTE *)0x24);
  return result;
}


void __fastcall MinecartCommandBlockManager::saveAndExit(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager::saveAndExit(this);
}


char *__fastcall MinecartCommandBlockManager::getCommand(MinecartCommandBlockManager *this)
{
  return (char *)this + 32;
}


signed int __fastcall MinecartCommandBlockManager::getCommandBlockTypeMode(MinecartCommandBlockManager *this)
{
  return 1;
}


void __fastcall MinecartCommandBlockManager::_saveToBaseCommandBlock(MinecartCommandBlockManager *this, BaseCommandBlock *a2)
{
  MinecartCommandBlockManager *v2; // r4@1
  BaseCommandBlock *v3; // r5@1
  int v4; // r0@1
  int v5; // r0@1
  Entity *v6; // r6@1
  BlockSource *v7; // r8@3
  char *v8; // r7@3
  int *v9; // r0@3
  CommandBlockComponent *v10; // r5@3
  _BYTE *v11; // r0@4
  int v12; // r5@6
  void (__fastcall *v13)(int, int *, char **, _DWORD); // r6@6
  int *v14; // r0@6
  char *v15; // r4@6
  int v16; // r6@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  int *v19; // r0@16
  void *v20; // r0@21
  void *v21; // r0@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  int v26; // [sp+4h] [bp-3Ch]@6
  char *v27; // [sp+8h] [bp-38h]@6
  char *v28; // [sp+Ch] [bp-34h]@6
  char *v29; // [sp+10h] [bp-30h]@6
  int v30; // [sp+18h] [bp-28h]@6

  v2 = this;
  v3 = a2;
  v4 = Entity::getLevel(*((Entity **)this + 1));
  v5 = Level::fetchEntity(v4, 0, *((_QWORD *)v2 + 3), *((_QWORD *)v2 + 3) >> 32, 0);
  v6 = (Entity *)v5;
  if ( v5 )
  {
    if ( (*(int (**)(void))(*(_DWORD *)v5 + 488))() == 524388 )
    {
      v7 = (BlockSource *)Entity::getRegion(v6);
      v8 = Entity::getUniqueID(v6);
      v9 = (int *)(*(int (__fastcall **)(MinecartCommandBlockManager *))(*(_DWORD *)v2 + 44))(v2);
      BaseCommandBlock::setCommand((int)v3, v7, v8, v9);
      v10 = (CommandBlockComponent *)Entity::getCommandBlockComponent(v6);
      if ( v10 )
      {
        v11 = (_BYTE *)(*(int (__fastcall **)(MinecartCommandBlockManager *))(*(_DWORD *)v2 + 52))(v2);
        CommandBlockComponent::setTrackOutput(v10, *v11);
        CommandBlockComponent::setName((int)v10, (int *)v2 + 10);
      }
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 44))(v2) - 12) )
    v12 = *((_DWORD *)v2 + 1);
    v13 = *(void (__fastcall **)(int, int *, char **, _DWORD))(*(_DWORD *)v12 + 1376);
    sub_119C884((void **)&v30, "advMode.setCommand.success");
    v14 = (int *)(*(int (__fastcall **)(MinecartCommandBlockManager *))(*(_DWORD *)v2 + 44))(v2);
    sub_119C854(&v26, v14);
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v27 = (char *)operator new(4u);
    v29 = v27 + 4;
    v28 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v26,
                    (int)&v27,
                    (int)v27);
    v13(v12, &v30, &v27, 0);
    v16 = (int)v28;
    v15 = v27;
    if ( v27 != v28 )
      do
        v19 = (int *)(*(_DWORD *)v15 - 12);
        if ( v19 != &dword_28898C0 )
        {
          v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v19);
        }
        v15 += 4;
      while ( v15 != (char *)v16 );
      v15 = v27;
    if ( v15 )
      operator delete(v15);
    v20 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v30 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
}


char *__fastcall MinecartCommandBlockManager::getBaseCommandBlock(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  Entity *v4; // r4@1
  CommandBlockComponent *v5; // r0@4
  char *result; // r0@4

  v1 = this;
  v2 = Entity::getLevel(*((Entity **)this + 1));
  v3 = Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32, 0);
  v4 = (Entity *)v3;
  if ( v3 && (*(int (**)(void))(*(_DWORD *)v3 + 488))() == 524388 && Entity::getCommandBlockComponent(v4) )
  {
    v5 = (CommandBlockComponent *)Entity::getCommandBlockComponent(v4);
    result = CommandBlockComponent::getBaseCommandBlock(v5);
  }
  else
    result = 0;
  return result;
}


int __fastcall MinecartCommandBlockManager::getLastPerformedConditionalMode(MinecartCommandBlockManager *this)
{
  return 0;
}


void __fastcall MinecartCommandBlockManager::~MinecartCommandBlockManager(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager::~MinecartCommandBlockManager(this);
}


signed int __fastcall MinecartCommandBlockManager::getLastPerformedCBMode(MinecartCommandBlockManager *this)
{
  return 1;
}


int __fastcall MinecartCommandBlockManager::setRedstone(MinecartCommandBlockManager *this, bool a2)
{
  return 0;
}


void __fastcall MinecartCommandBlockManager::~MinecartCommandBlockManager(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r0@1

  v1 = MinecartCommandBlockManager::~MinecartCommandBlockManager(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseCommandBlock *__fastcall MinecartCommandBlockManager::init(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r4@1
  BaseCommandBlock *result; // r0@1

  v1 = this;
  result = (BaseCommandBlock *)(*(int (**)(void))(*(_DWORD *)this + 88))();
  if ( result )
    result = j_j_j__ZN27MinecartCommandBlockManager25_loadFromBaseCommandBlockEv(v1);
  return result;
}


const void **__fastcall MinecartCommandBlockManager::getLastPerformedCommandBlockConditionalModeString(MinecartCommandBlockManager *this, int a2)
{
  void **v2; // r5@1
  const void **result; // r0@2

  v2 = (void **)this;
  *(_DWORD *)this = &unk_28898CC;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 72))(a2) == 1 )
    result = sub_119CAD8(v2, "commandBlockScreen.condition.conditional", (_BYTE *)0x28);
  else
    result = sub_119CAD8(v2, "commandBlockScreen.condition.unconditional", (_BYTE *)0x2A);
  return result;
}


signed int __fastcall MinecartCommandBlockManager::isMinecartCommandBlock(MinecartCommandBlockManager *this)
{
  return 1;
}


char *__fastcall MinecartCommandBlockManager::getOutput(MinecartCommandBlockManager *this)
{
  return (char *)this + 36;
}


MinecartCommandBlockManager *__fastcall MinecartCommandBlockManager::~MinecartCommandBlockManager(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r5@1
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
  *(_DWORD *)this = &off_26E14AC;
  v2 = *((_DWORD *)this + 10);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 9);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 8);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v1;
}


const void **__fastcall MinecartCommandBlockManager::getTrackOutputText(MinecartCommandBlockManager *this, int a2)
{
  void **v2; // r5@1
  const void **result; // r0@2

  v2 = (void **)this;
  *(_DWORD *)this = &unk_28898CC;
  if ( *(_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 52))(a2) )
    result = sub_119CAD8(v2, "commandBlockScreen.displayOutputMode", (_BYTE *)0x24);
  else
    result = sub_119CAD8(v2, "commandBlockScreen.hideOutputMode", (_BYTE *)0x21);
  return result;
}


signed int __fastcall MinecartCommandBlockManager::setCommand(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  _DWORD *v4; // r0@1
  size_t v5; // r2@1
  signed int result; // r0@3

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD **)(*(int (**)(void))(*(_DWORD *)a1 + 44))();
  v5 = *(v4 - 3);
  if ( v5 == *(_DWORD *)(*v3 - 12) && !memcmp(v4, (const void *)*v3, v5) )
  {
    result = 0;
  }
  else
    EntityInteraction::setInteractText((int *)(v2 + 32), v3);
    result = 1;
  return result;
}


char *__fastcall MinecartCommandBlockManager::getHoverName(MinecartCommandBlockManager *this)
{
  return (char *)this + 40;
}


int __fastcall MinecartCommandBlockManager::_getMinecartCommandBlock(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r2@1
  int v4; // r4@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r5@1
  int result; // r0@4

  v1 = this;
  v2 = Entity::getLevel(*((Entity **)this + 1));
  v3 = *((_QWORD *)v1 + 3);
  v4 = 0;
  v6 = Level::fetchEntity(v2, v5, v3, HIDWORD(v3), 0);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(int (**)(void))(*(_DWORD *)v6 + 488))() == 524388 )
      v4 = v7;
    result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall MinecartCommandBlockManager::setHoverName(int a1, const void **a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  const void *v5; // r1@1
  int *v6; // r5@1
  const void *v7; // t1@1
  size_t v8; // r2@1
  signed int result; // r0@3

  v2 = (int *)a2;
  v3 = a1;
  v4 = *a2;
  v7 = *(const void **)(v3 + 40);
  v6 = (int *)(v3 + 40);
  v5 = v7;
  v8 = *(v4 - 3);
  if ( v8 == *((_DWORD *)v7 - 3) && !memcmp(v4, v5, v8) )
  {
    result = 0;
  }
  else
    EntityInteraction::setInteractText(v6, v2);
    result = 1;
  return result;
}


BaseCommandBlock *__fastcall MinecartCommandBlockManager::_loadFromBaseCommandBlock(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r4@1
  BaseCommandBlock *result; // r0@1
  BaseCommandBlock *v3; // r5@1
  void (__fastcall *v4)(MinecartCommandBlockManager *, char *); // r6@2
  char *v5; // r0@2
  void (__fastcall *v6)(MinecartCommandBlockManager *, int *); // r7@2
  void *v7; // r0@2
  void (__fastcall *v8)(MinecartCommandBlockManager *, int); // r6@3
  int v9; // r0@3
  int v10; // r0@3
  BaseCommandBlock *v11; // r5@3
  int (__fastcall *v12)(MinecartCommandBlockManager *, int); // r6@5
  int v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  int v16; // [sp+8h] [bp-20h]@2

  v1 = this;
  result = (BaseCommandBlock *)(*(int (**)(void))(*(_DWORD *)this + 88))();
  v3 = result;
  if ( result )
  {
    v4 = *(void (__fastcall **)(MinecartCommandBlockManager *, char *))(*(_DWORD *)v1 + 12);
    v5 = BaseCommandBlock::getCommand(result);
    v4(v1, v5);
    v6 = *(void (__fastcall **)(MinecartCommandBlockManager *, int *))(*(_DWORD *)v1 + 20);
    BaseCommandBlock::getLastOutput((BaseCommandBlock *)&v16, (int)v3);
    v6(v1, &v16);
    v7 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    v8 = *(void (__fastcall **)(MinecartCommandBlockManager *, int))(*(_DWORD *)v1 + 24);
    v9 = BaseCommandBlock::getTrackOutput(v3);
    v8(v1, v9);
    v10 = Entity::getLevel(*((Entity **)v1 + 1));
    result = (BaseCommandBlock *)Level::fetchEntity(v10, 0, *((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32, 0);
    v11 = result;
    if ( result )
      result = (BaseCommandBlock *)(*(int (**)(void))(*(_DWORD *)result + 488))();
      if ( result == (BaseCommandBlock *)524388 )
        v12 = *(int (__fastcall **)(MinecartCommandBlockManager *, int))(*(_DWORD *)v1 + 16);
        v13 = (*(int (__fastcall **)(BaseCommandBlock *))(*(_DWORD *)v11 + 188))(v11);
        result = (BaseCommandBlock *)v12(v1, v13);
  }
  return result;
}


char *__fastcall MinecartCommandBlockManager::getTrackOutput(MinecartCommandBlockManager *this)
{
  return (char *)this + 44;
}


signed int __fastcall MinecartCommandBlockManager::getLastPerformedRedstoneMode(MinecartCommandBlockManager *this)
{
  return 1;
}


void __fastcall MinecartCommandBlockManager::saveAndExit(MinecartCommandBlockManager *this)
{
  MinecartCommandBlockManager *v1; // r4@1
  BaseCommandBlock *v2; // r1@1

  v1 = this;
  v2 = (BaseCommandBlock *)(*(int (**)(void))(*(_DWORD *)this + 88))();
  if ( v2 )
    j_j_j__ZN27MinecartCommandBlockManager23_saveToBaseCommandBlockER16BaseCommandBlock(v1, v2);
}


int __fastcall MinecartCommandBlockManager::setConditional(MinecartCommandBlockManager *this, bool a2)
{
  return 0;
}


int __fastcall MinecartCommandBlockManager::MinecartCommandBlockManager(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r0@1
  Entity *v9; // r5@1
  CommandBlockComponent *v10; // r0@4

  v5 = a1;
  LODWORD(a1) = &off_26E14AC;
  *(_QWORD *)v5 = a1;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)a2;
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v5 + 24) = a4;
  v6 = v5 + 24;
  *(_DWORD *)(v6 + 4) = a5;
  *(_DWORD *)(v6 + 8) = &unk_28898CC;
  *(_DWORD *)(v6 + 12) = &unk_28898CC;
  *(_DWORD *)(v6 + 16) = &unk_28898CC;
  *(_BYTE *)(v6 + 20) = 1;
  v7 = Entity::getLevel((Entity *)HIDWORD(a1));
  v8 = Level::fetchEntity(v7, 0, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, 0);
  v9 = (Entity *)v8;
  if ( v8 && (*(int (**)(void))(*(_DWORD *)v8 + 488))() == 524388 && Entity::getCommandBlockComponent(v9) )
  {
    v10 = (CommandBlockComponent *)Entity::getCommandBlockComponent(v9);
    CommandBlockComponent::getBaseCommandBlock(v10);
    MinecartCommandBlockManager::_loadFromBaseCommandBlock((MinecartCommandBlockManager *)v5);
  }
  return v5;
}


int __fastcall MinecartCommandBlockManager::isConditionalMode(MinecartCommandBlockManager *this)
{
  return 0;
}


void __fastcall MinecartCommandBlockManager::_saveToBaseCommandBlock(MinecartCommandBlockManager *this, BaseCommandBlock *a2)
{
  MinecartCommandBlockManager::_saveToBaseCommandBlock(this, a2);
}


signed int __fastcall MinecartCommandBlockManager::setLastOutput(int a1, const void **a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  const void *v5; // r1@1
  int *v6; // r5@1
  const void *v7; // t1@1
  size_t v8; // r2@1
  signed int result; // r0@3

  v2 = (int *)a2;
  v3 = a1;
  v4 = *a2;
  v7 = *(const void **)(v3 + 36);
  v6 = (int *)(v3 + 36);
  v5 = v7;
  v8 = *(v4 - 3);
  if ( v8 == *((_DWORD *)v7 - 3) && !memcmp(v4, v5, v8) )
  {
    result = 0;
  }
  else
    EntityInteraction::setInteractText(v6, v2);
    result = 1;
  return result;
}


signed int __fastcall MinecartCommandBlockManager::isRedstoneMode(MinecartCommandBlockManager *this)
{
  return 1;
}
