

signed int __fastcall DedicatedServerCommandOrigin::getOriginType(DedicatedServerCommandOrigin *this)
{
  return 6;
}


DedicatedServerCommandOrigin *__fastcall DedicatedServerCommandOrigin::~DedicatedServerCommandOrigin(DedicatedServerCommandOrigin *this)
{
  DedicatedServerCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAD88;
  v2 = *((_DWORD *)this + 2);
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


int __fastcall DedicatedServerCommandOrigin::DedicatedServerCommandOrigin(int a1, int *a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26EAD88;
  *(_DWORD *)(a1 + 4) = a3;
  sub_21E8AF4((int *)(a1 + 8), a2);
  return v3;
}


int __fastcall DedicatedServerCommandOrigin::toCommandOriginData(DedicatedServerCommandOrigin *this, int a2)
{
  int v2; // r5@1
  DedicatedServerCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


int *__fastcall DedicatedServerCommandOrigin::clone(DedicatedServerCommandOrigin *this, int a2)
{
  int v2; // r6@1
  DedicatedServerCommandOrigin *v3; // r4@1
  int v4; // r7@1
  void *v5; // r0@1
  void *v6; // r5@1
  int *result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = operator new(0xCu);
  v6 = v5;
  *(_DWORD *)v5 = &off_26EAD88;
  *((_DWORD *)v5 + 1) = v4;
  result = sub_21E8AF4((int *)v5 + 2, (int *)(v2 + 8));
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall DedicatedServerCommandOrigin::~DedicatedServerCommandOrigin(DedicatedServerCommandOrigin *this)
{
  DedicatedServerCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EAD88;
  v2 = *((_DWORD *)this + 2);
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


int __fastcall DedicatedServerCommandOrigin::getWorldPosition(int result)
{
  int v1; // r1@1

  v1 = dword_2822498;
  *(_QWORD *)result = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


int __fastcall DedicatedServerCommandOrigin::getEntity(DedicatedServerCommandOrigin *this)
{
  return 0;
}


char *__fastcall DedicatedServerCommandOrigin::getRequestId(DedicatedServerCommandOrigin *this)
{
  return (char *)this + 8;
}


signed int __fastcall DedicatedServerCommandOrigin::canCallHiddenCommands(DedicatedServerCommandOrigin *this)
{
  return 1;
}


signed int __fastcall DedicatedServerCommandOrigin::getPermissionsLevel(DedicatedServerCommandOrigin *this)
{
  return 4;
}


void __fastcall DedicatedServerCommandOrigin::getName(DedicatedServerCommandOrigin *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_21E94B4((void **)&v5, "commands.origin.server");
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


int __fastcall DedicatedServerCommandOrigin::getBlockPosition(int result)
{
  unsigned int v1; // r1@1

  *(_DWORD *)result = BlockPos::ZERO;
  v1 = dword_281627C;
  *(_DWORD *)(result + 4) = unk_2816278;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


void __fastcall DedicatedServerCommandOrigin::getName(DedicatedServerCommandOrigin *this)
{
  DedicatedServerCommandOrigin::getName(this);
}


int __fastcall DedicatedServerCommandOrigin::getDimension(DedicatedServerCommandOrigin *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = Minecraft::getLevel(*((Minecraft **)this + 1));
  if ( v1 )
    result = j_j_j__ZNK5Level12getDimensionE11DimensionId_1(v1, 0);
  else
    result = 0;
  return result;
}


void __fastcall DedicatedServerCommandOrigin::~DedicatedServerCommandOrigin(DedicatedServerCommandOrigin *this)
{
  DedicatedServerCommandOrigin::~DedicatedServerCommandOrigin(this);
}
