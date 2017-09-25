

int __fastcall ClientAutomationCommandOrigin::ClientAutomationCommandOrigin(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = &off_26EAF50;
  sub_21E8AF4((int *)(a1 + 4), a2);
  return v2;
}


int __fastcall ClientAutomationCommandOrigin::getDimension(ClientAutomationCommandOrigin *this)
{
  return 0;
}


void __fastcall ClientAutomationCommandOrigin::~ClientAutomationCommandOrigin(ClientAutomationCommandOrigin *this)
{
  ClientAutomationCommandOrigin::~ClientAutomationCommandOrigin(this);
}


signed int __fastcall ClientAutomationCommandOrigin::getPermissionsLevel(ClientAutomationCommandOrigin *this)
{
  return 3;
}


int *__fastcall ClientAutomationCommandOrigin::toCommandOriginData(ClientAutomationCommandOrigin *this, int a2)
{
  int v2; // r5@1
  ClientAutomationCommandOrigin *v3; // r4@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  *(_BYTE *)v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  return EntityInteraction::setInteractText((int *)v3 + 1, (int *)(v2 + 4));
}


int __fastcall ClientAutomationCommandOrigin::getLevel(ClientAutomationCommandOrigin *this)
{
  return 0;
}


signed int __fastcall ClientAutomationCommandOrigin::canCallHiddenCommands(ClientAutomationCommandOrigin *this)
{
  return 1;
}


void __fastcall ClientAutomationCommandOrigin::getName(ClientAutomationCommandOrigin *this)
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


ClientAutomationCommandOrigin *__fastcall ClientAutomationCommandOrigin::~ClientAutomationCommandOrigin(ClientAutomationCommandOrigin *this)
{
  ClientAutomationCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAF50;
  v2 = *((_DWORD *)this + 1);
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


signed int __fastcall ClientAutomationCommandOrigin::getOriginType(ClientAutomationCommandOrigin *this)
{
  return 5;
}


int __fastcall ClientAutomationCommandOrigin::getEntity(ClientAutomationCommandOrigin *this)
{
  return 0;
}


char *__fastcall ClientAutomationCommandOrigin::getRequestId(ClientAutomationCommandOrigin *this)
{
  return (char *)this + 4;
}


int __fastcall ClientAutomationCommandOrigin::getBlockPosition(int result)
{
  unsigned int v1; // r1@1

  *(_DWORD *)result = BlockPos::ZERO;
  v1 = dword_281627C;
  *(_DWORD *)(result + 4) = unk_2816278;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


int __fastcall ClientAutomationCommandOrigin::getWorldPosition(int result)
{
  int v1; // r1@1

  v1 = dword_2822498;
  *(_QWORD *)result = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


void __fastcall ClientAutomationCommandOrigin::getName(ClientAutomationCommandOrigin *this)
{
  ClientAutomationCommandOrigin::getName(this);
}


int *__fastcall ClientAutomationCommandOrigin::clone(ClientAutomationCommandOrigin *this, int a2)
{
  ClientAutomationCommandOrigin *v2; // r4@1
  int v3; // r6@1
  void *v4; // r0@1
  void *v5; // r5@1
  int *result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(8u);
  v5 = v4;
  *(_DWORD *)v4 = &off_26EAF50;
  result = sub_21E8AF4((int *)v4 + 1, (int *)(v3 + 4));
  *(_DWORD *)v2 = v5;
  return result;
}


void __fastcall ClientAutomationCommandOrigin::~ClientAutomationCommandOrigin(ClientAutomationCommandOrigin *this)
{
  ClientAutomationCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAF50;
  v2 = *((_DWORD *)this + 1);
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
