

int __fastcall DevConsoleCommandOrigin::getDimension(DevConsoleCommandOrigin *this)
{
  DevConsoleCommandOrigin *v1; // r1@1
  int v2; // r0@1
  Entity *v3; // r0@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 && (v3 = (Entity *)Level::getPlayer(v2, (int)v1, *((_QWORD *)v1 + 1), *((_QWORD *)v1 + 1) >> 32)) != 0 )
    result = Entity::getDimension(v3);
  else
    result = 0;
  return result;
}


signed int __fastcall DevConsoleCommandOrigin::canCallHiddenCommands(DevConsoleCommandOrigin *this)
{
  return 1;
}


int __fastcall DevConsoleCommandOrigin::clone(DevConsoleCommandOrigin *this, int a2)
{
  DevConsoleCommandOrigin *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  char *v5; // r6@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  char v9; // r7@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0xB8u);
  v5 = (char *)v4;
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  v8 = *(_DWORD *)(v3 + 16);
  v9 = *(_BYTE *)(v3 + 176);
  *(_DWORD *)v4 = &off_26EAEF8;
  v4 = (char *)v4 + 8;
  *(_DWORD *)v4 = v6;
  *((_DWORD *)v4 + 1) = v7;
  *((_DWORD *)v4 + 2) = v8;
  result = _aeabi_memcpy8(v5 + 24, v3 + 24, 152);
  v5[176] = v9;
  *(_DWORD *)v2 = v5;
  return result;
}


int __fastcall DevConsoleCommandOrigin::DevConsoleCommandOrigin(int a1, int a2, __int64 a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  return DevConsoleCommandOrigin::DevConsoleCommandOrigin(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44);
}


void __fastcall DevConsoleCommandOrigin::getName(DevConsoleCommandOrigin *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_21E94B4((void **)&v5, "commands.origin.devconsole");
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


int __fastcall DevConsoleCommandOrigin::getBlockPosition(DevConsoleCommandOrigin *this, int a2)
{
  DevConsoleCommandOrigin *v2; // r4@1
  int v3; // r0@1
  Entity *v4; // r0@2
  int result; // r0@2

  v2 = this;
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = (Entity *)Level::getPlayer(v3, a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
    result = CommandUtils::getFeetBlockPos(v2, v4);
  }
  else
    *(_DWORD *)v2 = BlockPos::ZERO;
    result = dword_281627C;
    *((_DWORD *)v2 + 1) = unk_2816278;
    *((_DWORD *)v2 + 2) = result;
  return result;
}


void *__fastcall DevConsoleCommandOrigin::getRequestId(DevConsoleCommandOrigin *this)
{
  return &Util::EMPTY_GUID;
}


int __fastcall DevConsoleCommandOrigin::getWorldPosition(DevConsoleCommandOrigin *this, int a2)
{
  DevConsoleCommandOrigin *v2; // r4@1
  int v3; // r0@1
  Entity *v4; // r0@2
  int result; // r0@2

  v2 = this;
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = (Entity *)Level::getPlayer(v3, a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32);
    result = CommandUtils::getFeetPos(v2, v4);
  }
  else
    result = dword_2822498;
    *(_QWORD *)v2 = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)v2 + 2) = result;
  return result;
}


signed int __fastcall DevConsoleCommandOrigin::getEntity(DevConsoleCommandOrigin *this)
{
  DevConsoleCommandOrigin *v1; // r1@1
  int v2; // r0@1
  signed int result; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    result = Level::getPlayer(v2, (int)v1, *((_QWORD *)v1 + 1), *((_QWORD *)v1 + 1) >> 32);
  else
    result = 0;
  return result;
}


void __fastcall DevConsoleCommandOrigin::getName(DevConsoleCommandOrigin *this)
{
  DevConsoleCommandOrigin::getName(this);
}


signed int __fastcall DevConsoleCommandOrigin::getOriginType(DevConsoleCommandOrigin *this)
{
  return 3;
}


int __fastcall DevConsoleCommandOrigin::DevConsoleCommandOrigin(int a1, Entity *a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  char *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EAEF8;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v2 + 16) = Entity::getLevel(v3);
  v4 = Player::getClientId(v3);
  _aeabi_memcpy8(v2 + 24, v4, 152);
  *(_BYTE *)(v2 + 176) = Player::getClientSubId(v3);
  return v2;
}


char *__fastcall DevConsoleCommandOrigin::getSourceId(DevConsoleCommandOrigin *this)
{
  return (char *)this + 24;
}


signed int __fastcall DevConsoleCommandOrigin::getPermissionsLevel(DevConsoleCommandOrigin *this)
{
  return 3;
}


int __fastcall DevConsoleCommandOrigin::DevConsoleCommandOrigin(int a1, int a2, __int64 a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  int v44; // r4@1

  v44 = a1;
  *(_DWORD *)a1 = &off_26EAEF8;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  _aeabi_memcpy8(a1 + 24, &a6, 152);
  *(_BYTE *)(v44 + 176) = a44;
  return v44;
}


__int64 __fastcall DevConsoleCommandOrigin::toCommandOriginData(DevConsoleCommandOrigin *this, int a2)
{
  int v2; // r5@1
  DevConsoleCommandOrigin *v3; // r4@1
  __int64 result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  *(_BYTE *)v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  result = *(_QWORD *)(v2 + 8);
  *((_QWORD *)v3 + 1) = result;
  return result;
}
