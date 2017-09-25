

signed int __fastcall MinecartBlockCommandOrigin::getOriginType(MinecartBlockCommandOrigin *this)
{
  return 2;
}


_DWORD *__fastcall MinecartBlockCommandOrigin::clone(MinecartBlockCommandOrigin *this, int a2)
{
  int v2; // r4@1
  MinecartBlockCommandOrigin *v3; // r5@1
  int v4; // r6@1
  _DWORD *result; // r0@1
  unsigned int v6; // r1@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 4);
  result = operator new(0x20u);
  result[1] = v4;
  result[2] = BlockPos::ZERO;
  v6 = dword_281627C;
  result[3] = unk_2816278;
  result[4] = v6;
  *result = &off_26EAE98;
  *((_QWORD *)result + 3) = *(_QWORD *)(v2 + 24);
  *(_DWORD *)v3 = result;
  return result;
}


int __fastcall MinecartBlockCommandOrigin::MinecartBlockCommandOrigin(int result, int a2, _QWORD *a3)
{
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = BlockPos::ZERO;
  *(_DWORD *)(result + 12) = unk_2816278;
  *(_DWORD *)(result + 16) = dword_281627C;
  *(_DWORD *)result = &off_26EAE98;
  *(_QWORD *)(result + 24) = *a3;
  return result;
}


int __fastcall MinecartBlockCommandOrigin::getBlockEntity(MinecartBlockCommandOrigin *this)
{
  return 0;
}


int __fastcall MinecartBlockCommandOrigin::toCommandOriginData(MinecartBlockCommandOrigin *this, int a2)
{
  int v2; // r5@1
  MinecartBlockCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


char *__fastcall MinecartBlockCommandOrigin::getBaseCommandBlock(MinecartBlockCommandOrigin *this)
{
  MinecartBlockCommandOrigin *v1; // r4@1
  int v2; // r0@1
  Entity *v3; // r0@2
  Entity *v4; // r4@2
  CommandBlockComponent *v5; // r0@5
  char *result; // r0@5

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 24))();
  if ( v2
    && (v3 = (Entity *)Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32, 0), (v4 = v3) != 0)
    && Entity::getCommandBlockComponent(v3)
    && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 488))(v4) == 524388 )
  {
    v5 = (CommandBlockComponent *)Entity::getCommandBlockComponent(v4);
    result = CommandBlockComponent::getBaseCommandBlock(v5);
  }
  else
    result = 0;
  return result;
}


int __fastcall MinecartBlockCommandOrigin::getWorldPosition(MinecartBlockCommandOrigin *this, int a2)
{
  int v2; // r5@1
  MinecartBlockCommandOrigin *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@2
  int v6; // r5@2
  int *v7; // r0@4
  int v8; // r1@6
  int v9; // r2@6
  int result; // r0@6

  v2 = a2;
  v3 = this;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
  if ( v4
    && (v5 = Level::fetchEntity(v4, 0, *(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 24) >> 32, 0), (v6 = v5) != 0)
    && (*(int (**)(void))(*(_DWORD *)v5 + 488))() == 524388 )
  {
    v7 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 52))(v6);
  }
  else
    v7 = &Vec3::ZERO;
  v8 = *v7;
  v9 = v7[1];
  result = v7[2];
  *(_DWORD *)v3 = v8;
  *((_DWORD *)v3 + 1) = v9;
  *((_DWORD *)v3 + 2) = result;
  return result;
}


int __fastcall MinecartBlockCommandOrigin::getBlockPosition(MinecartBlockCommandOrigin *this, int a2)
{
  MinecartBlockCommandOrigin *v2; // r4@1
  char v4; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 20))(&v4);
  return BlockPos::BlockPos((int)v2, (int)&v4);
}
