

_DWORD *__fastcall BlockCommandOrigin::clone(BlockCommandOrigin *this, int a2)
{
  int v2; // r4@1
  BlockCommandOrigin *v3; // r5@1
  int v4; // r6@1
  _DWORD *result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 4);
  result = operator new(0x14u);
  *result = &off_26EAE38;
  result[1] = v4;
  result[2] = *(_DWORD *)(v2 + 8);
  result[3] = *(_DWORD *)(v2 + 12);
  result[4] = *(_DWORD *)(v2 + 16);
  *(_DWORD *)v3 = result;
  return result;
}


int __fastcall BlockCommandOrigin::toCommandOriginData(BlockCommandOrigin *this, int a2)
{
  int v2; // r5@1
  BlockCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


char *__fastcall BlockCommandOrigin::getBaseCommandBlock(BlockCommandOrigin *this)
{
  CommandBlockEntity *v1; // r0@1
  char *result; // r0@2

  v1 = (CommandBlockEntity *)(*(int (**)(void))(*(_DWORD *)this + 80))();
  if ( v1 )
    result = CommandBlockEntity::getBaseCommandBlock(v1);
  else
    result = 0;
  return result;
}


void __fastcall BlockCommandOrigin::getWorldPosition(BlockCommandOrigin *this, int a2)
{
  float v6; // [sp+4h] [bp-14h]@1

  Vec3::Vec3((int)&v6, a2 + 8);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x18+var_14]
    VLDR            S4, [SP,#0x18+var_10]
    VLDR            S6, [SP,#0x18+var_C]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  }
}


signed int __fastcall BlockCommandOrigin::getBlockEntity(BlockCommandOrigin *this)
{
  int v1; // r0@1
  signed int v2; // r4@1
  signed int result; // r0@2

  v1 = BlockSource::getBlockEntity(*((BlockSource **)this + 1), (BlockCommandOrigin *)((char *)this + 8));
  v2 = v1;
  if ( v1 )
  {
    result = BlockEntity::isType(v1, 26);
    if ( result )
      result = v2;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockCommandOrigin::getBlockPosition(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 16);
  return result;
}


signed int __fastcall BlockCommandOrigin::getOriginType(BlockCommandOrigin *this)
{
  return 1;
}


void __fastcall BlockCommandOrigin::getName(BlockCommandOrigin *this, int a2)
{
  BlockCommandOrigin::getName(this, a2);
}


signed int __fastcall BlockCommandOrigin::getPermissionsLevel(BlockCommandOrigin *this)
{
  return 1;
}


void *__fastcall BlockCommandOrigin::getRequestId(BlockCommandOrigin *this)
{
  return &Util::EMPTY_GUID;
}


void __fastcall BlockCommandOrigin::getName(BlockCommandOrigin *this, int a2)
{
  int *v2; // r4@1
  BaseCommandBlock *v3; // r0@1
  int *v4; // r1@2
  void *v5; // r0@4
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // [sp+4h] [bp-2Ch]@4
  int v11; // [sp+Ch] [bp-24h]@9

  v2 = (int *)this;
  v3 = (BaseCommandBlock *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 84))(a2);
  if ( v3 )
  {
    v4 = (int *)BaseCommandBlock::getName(v3);
    if ( *(_DWORD *)(*v4 - 12) )
    {
      sub_21E8AF4(v2, v4);
      return;
    }
    sub_21E94B4((void **)&v11, "commandBlock.shortName");
    I18n::get(v2, (int **)&v11);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v11 - 4);
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
        goto LABEL_20;
  }
  else
    sub_21E94B4((void **)&v10, "commandBlock.genericName");
    I18n::get(v2, (int **)&v10);
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v10 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
LABEL_20:
        j_j_j_j__ZdlPv_9(v5);
        return;
}


void __fastcall BlockCommandOrigin::getWorldPosition(BlockCommandOrigin *this, int a2)
{
  BlockCommandOrigin::getWorldPosition(this, a2);
}


int __fastcall BlockCommandOrigin::getEntity(BlockCommandOrigin *this)
{
  return 0;
}


int __fastcall BlockCommandOrigin::BlockCommandOrigin(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_26EAE38;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)a3;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a3 + 8);
  return result;
}
