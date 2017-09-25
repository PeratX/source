

__int64 __fastcall AutomationPlayerCommandOrigin::toCommandOriginData(AutomationPlayerCommandOrigin *this, int a2)
{
  int v2; // r5@1
  AutomationPlayerCommandOrigin *v3; // r4@1
  __int64 result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  *(_BYTE *)v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  EntityInteraction::setInteractText((int *)v3 + 1, (int *)(v2 + 24));
  result = *(_QWORD *)(v2 + 8);
  *((_QWORD *)v3 + 1) = result;
  return result;
}


int __fastcall AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin(int a1, int *a2, Entity *a3)
{
  int v3; // r4@1
  Entity *v4; // r5@1
  int *v5; // r7@1
  char v6; // r0@1
  int v7; // r12@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r1@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = &off_26EADE0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)Entity::getUniqueID(a3);
  *(_DWORD *)(v3 + 16) = Entity::getLevel(v4);
  *(_BYTE *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_26EAFA8;
  sub_21E8AF4((int *)(v3 + 24), v5);
  v6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 604))(v4);
  v7 = v3 + 32;
  *(_BYTE *)(v3 + 28) = v6;
  v8 = unk_27ED314;
  v9 = *(_DWORD *)&word_27ED318;
  v10 = dword_27ED31C;
  *(_DWORD *)v7 = unk_27ED310;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v3 + 44) = v10;
  _aeabi_memclr8(v3 + 48, 128);
  *(_DWORD *)(v3 + 176) = 3;
  return v3;
}


AutomationPlayerCommandOrigin *__fastcall AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin *this)
{
  AutomationPlayerCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAFA8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
  return v1;
}


int __fastcall AutomationPlayerCommandOrigin::clone(AutomationPlayerCommandOrigin *this, int a2)
{
  int v2; // r5@1
  AutomationPlayerCommandOrigin *v3; // r4@1
  Entity *v4; // r6@1
  void *v5; // r7@2
  int result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = (Entity *)Level::getPlayer(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
  if ( v4 )
  {
    v5 = operator new(0xC0u);
    result = AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin((int)v5, (int *)(v2 + 24), v4);
    *(_DWORD *)v3 = v5;
  }
  else
    result = 0;
    *(_DWORD *)v3 = 0;
  return result;
}


void __fastcall AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin *this)
{
  AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin(this);
}


void __fastcall AutomationPlayerCommandOrigin::getName(AutomationPlayerCommandOrigin *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_21E94B4((void **)&v5, "commands.origin.external");
  I18n::get(v1, (int **)&v5);
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
}


signed int __fastcall AutomationPlayerCommandOrigin::canCallHiddenCommands(AutomationPlayerCommandOrigin *this)
{
  return 1;
}


signed int __fastcall AutomationPlayerCommandOrigin::hasTellPerms(AutomationPlayerCommandOrigin *this)
{
  return 1;
}


char *__fastcall AutomationPlayerCommandOrigin::getRequestId(AutomationPlayerCommandOrigin *this)
{
  return (char *)this + 24;
}


signed int __fastcall AutomationPlayerCommandOrigin::hasChatPerms(AutomationPlayerCommandOrigin *this)
{
  return 1;
}


signed int __fastcall AutomationPlayerCommandOrigin::getOriginType(AutomationPlayerCommandOrigin *this)
{
  return 4;
}


void __fastcall AutomationPlayerCommandOrigin::getName(AutomationPlayerCommandOrigin *this)
{
  AutomationPlayerCommandOrigin::getName(this);
}


void __fastcall AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin *this)
{
  AutomationPlayerCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAFA8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}
