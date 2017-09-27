

int __fastcall HopperComponent::tick(HopperComponent *this)
{
  HopperComponent *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  bool v4; // zf@5
  bool v5; // nf@5
  unsigned __int8 v6; // vf@5
  int v7; // [sp+4h] [bp-14h]@2
  int v8; // [sp+8h] [bp-10h]@3
  int v9; // [sp+Ch] [bp-Ch]@4

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 3));
  result = j_Level::isClientSide(v2);
  if ( !result )
  {
    j_BlockPos::BlockPos((int)&v7, *((_DWORD *)v1 + 3) + 72);
    if ( v7 != *((_DWORD *)v1 + 4) || v8 != *((_DWORD *)v1 + 5) || v9 != *((_DWORD *)v1 + 6) )
    {
      *(_DWORD *)v1 = 0;
    }
    else
      v6 = __OFSUB__(*(_DWORD *)v1, 1);
      result = *(_DWORD *)v1 - 1;
      v4 = *(_DWORD *)v1 == 1;
      v5 = result < 0;
      *(_DWORD *)v1 = result;
      if ( !((unsigned __int8)(v5 ^ v6) | v4) )
        return result;
    *(_DWORD *)v1 = 0;
    result = j_HopperComponent::pullInItems(v1);
  }
  return result;
}


signed int __fastcall HopperComponent::pullInItems(HopperComponent *this)
{
  HopperComponent *v1; // r5@1
  int v2; // r8@1
  int v3; // r0@2
  BlockSource *v7; // r1@2
  Container *v9; // r2@2
  int v11; // r0@4
  int v12; // r1@4
  int v13; // r6@4
  ItemEntity **v14; // r5@4
  unsigned __int64 *v15; // r0@4
  unsigned __int64 *v16; // r7@4
  int v17; // r4@4
  int v18; // r6@4
  signed int v19; // r0@4
  ItemEntity **v20; // r0@6
  int v22; // [sp+Ch] [bp-4Ch]@4
  int v23; // [sp+10h] [bp-48h]@4
  signed int v24; // [sp+14h] [bp-44h]@4
  char v25; // [sp+18h] [bp-40h]@4
  float v26; // [sp+34h] [bp-24h]@2
  int v27; // [sp+38h] [bp-20h]@2

  v1 = this;
  v2 = j_Entity::getContainerComponent(*((Entity **)this + 3));
  if ( v2 )
  {
    v3 = j_Entity::getRegion(*((Entity **)v1 + 3));
    __asm { VMOV.F32        S0, #-0.5 }
    v7 = (BlockSource *)v3;
    _R0 = *((_DWORD *)v1 + 3);
    v9 = *(Container **)(v2 + 4);
    __asm
    {
      VLDR            S2, [R0,#0x48]
      VLDR            S4, [R0,#0x50]
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0x58+var_24]
    }
    v27 = *(_DWORD *)(_R0 + 76);
    __asm { VSTR            S0, [SP,#0x58+var_1C] }
    if ( j_Hopper::_tryMoveItems(v1, v7, v9, (const Vec3 *)&v26, 0LL) )
      return 1;
  }
  v11 = j_Entity::getRegion(*((Entity **)v1 + 3));
  v12 = *((_DWORD *)v1 + 3);
  v13 = v11;
  v14 = 0;
  v22 = 1048576000;
  v23 = 0;
  v24 = 1048576000;
  j_AABB::grow((AABB *)&v25, (const Vec3 *)(v12 + 264), (int)&v22);
  v15 = (unsigned __int64 *)j_BlockSource::fetchEntities(v13, 64, (int)&v25, 0);
  v16 = v15;
  v17 = *v15 >> 32;
  v18 = *v15;
  v19 = v17 - v18;
  if ( 0 != (v17 - v18) >> 2 )
    if ( (unsigned int)(v19 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v20 = (ItemEntity **)j_operator new(v19);
    v17 = *v16 >> 32;
    v18 = *v16;
    v14 = v20;
  if ( v17 != v18 )
    j___aeabi_memmove4_0((int)v14, v18);
  _ZF = v2 == 0;
    _ZF = v17 == v18;
  if ( !_ZF )
    j_ContainerComponent::addItem((ContainerComponent *)v2, *v14);
LABEL_14:
    j_operator delete(v14);
    return 0;
  if ( v14 )
    goto LABEL_14;
  return 0;
}


int __fastcall HopperComponent::HopperComponent(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = j_Hopper::Hopper(a1, 2, 1);
  *(_DWORD *)(result + 12) = v2;
  *(_DWORD *)(result + 16) = BlockPos::ZERO;
  *(_DWORD *)(result + 20) = unk_2816278;
  *(_DWORD *)(result + 24) = dword_281627C;
  return result;
}
