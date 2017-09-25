

int __fastcall GameArgumentCommandOrigin::getLevel(GameArgumentCommandOrigin *this)
{
  return 0;
}


int __fastcall GameArgumentCommandOrigin::getWorldPosition(int result)
{
  int v1; // r1@1

  v1 = dword_2822498;
  *(_QWORD *)result = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


int __fastcall GameArgumentCommandOrigin::toCommandOriginData(GameArgumentCommandOrigin *this, int a2)
{
  int v2; // r5@1
  GameArgumentCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


void __fastcall GameArgumentCommandOrigin::getName(GameArgumentCommandOrigin *this)
{
  GameArgumentCommandOrigin::getName(this);
}


void __fastcall GameArgumentCommandOrigin::getName(GameArgumentCommandOrigin *this)
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


int __fastcall GameArgumentCommandOrigin::getBlockPosition(int result)
{
  unsigned int v1; // r1@1

  *(_DWORD *)result = BlockPos::ZERO;
  v1 = dword_281627C;
  *(_DWORD *)(result + 4) = unk_2816278;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


int __fastcall GameArgumentCommandOrigin::getDimension(GameArgumentCommandOrigin *this)
{
  return 0;
}


void __fastcall GameArgumentCommandOrigin::~GameArgumentCommandOrigin(GameArgumentCommandOrigin *this)
{
  GameArgumentCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EB108;
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


signed int __fastcall GameArgumentCommandOrigin::getOriginType(GameArgumentCommandOrigin *this)
{
  return 9;
}


void __fastcall GameArgumentCommandOrigin::~GameArgumentCommandOrigin(GameArgumentCommandOrigin *this)
{
  GameArgumentCommandOrigin::~GameArgumentCommandOrigin(this);
}


_QWORD *__fastcall GameArgumentCommandOrigin::GameArgumentCommandOrigin(_QWORD *result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = &unk_28898CC;
  LODWORD(v1) = &off_26EB108;
  *result = v1;
  return result;
}


GameArgumentCommandOrigin *__fastcall GameArgumentCommandOrigin::~GameArgumentCommandOrigin(GameArgumentCommandOrigin *this)
{
  GameArgumentCommandOrigin *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EB108;
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


_QWORD *__fastcall GameArgumentCommandOrigin::clone(GameArgumentCommandOrigin *this)
{
  GameArgumentCommandOrigin *v1; // r4@1
  _QWORD *result; // r0@1
  __int64 v3; // r1@1

  v1 = this;
  result = operator new(8u);
  HIDWORD(v3) = &unk_28898CC;
  LODWORD(v3) = &off_26EB108;
  *result = v3;
  *(_DWORD *)v1 = result;
  return result;
}


void *__fastcall GameArgumentCommandOrigin::getRequestId(GameArgumentCommandOrigin *this)
{
  return &Util::EMPTY_GUID;
}


signed int __fastcall GameArgumentCommandOrigin::canCallHiddenCommands(GameArgumentCommandOrigin *this)
{
  return 1;
}


signed int __fastcall GameArgumentCommandOrigin::getPermissionsLevel(GameArgumentCommandOrigin *this)
{
  return 3;
}


int __fastcall GameArgumentCommandOrigin::getEntity(GameArgumentCommandOrigin *this)
{
  return 0;
}
