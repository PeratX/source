

int __fastcall MinecartChest::applyNaturalSlowdown(MinecartChest *this)
{
  int v2; // r0@1
  int result; // r0@2

  _R4 = this;
  v2 = *((_DWORD *)this + 782);
  if ( v2 )
  {
    _R0 = 15 - Container::getRedstoneSignalFromContainer(*(Container **)(v2 + 4));
    __asm
    {
      VLDR            S2, =0.001
      VMOV            S0, R0
    }
    result = 0;
      VCVT.F32.S32    S0, S0
      VLDR            S4, [R4,#0x74]
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.98
      VADD.F32        S0, S0, S2
      VLDR            S2, [R4,#0x6C]
      VMUL.F32        S2, S0, S2
      VMUL.F32        S0, S0, S4
      VSTR            S2, [R4,#0x6C]
    *((_DWORD *)_R4 + 28) = 0;
    __asm { VSTR            S0, [R4,#0x74] }
  }
  else
    result = j_j_j__ZN8Minecart20applyNaturalSlowdownEv(_R4);
  return result;
}


signed int __fastcall MinecartChest::getType(MinecartChest *this)
{
  return 1;
}


void __fastcall MinecartChest::~MinecartChest(MinecartChest *this)
{
  Minecart *v1; // r0@1

  v1 = Minecart::~Minecart(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MinecartChest::getEntityTypeId(MinecartChest *this)
{
  return 524386;
}


int __fastcall MinecartChest::getDefaultDisplayBlock(MinecartChest *this)
{
  return Block::mChest;
}


void __fastcall MinecartChest::~MinecartChest(MinecartChest *this)
{
  MinecartChest::~MinecartChest(this);
}


_DWORD *__fastcall MinecartChest::MinecartChest(int a1, int a2, int *a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Minecart::Minecart(a1, a2, a3);
  *result = &off_26F34E4;
  return result;
}


int __fastcall MinecartChest::destroy(MinecartChest *this, const EntityDamageSource *a2, int a3)
{
  int v3; // r4@1
  const EntityDamageSource *v4; // r5@1
  Minecart *v5; // r6@1
  void (__fastcall *v6)(Minecart *, int *, _DWORD); // r7@2
  int v8; // [sp+0h] [bp-60h]@2
  int v9; // [sp+8h] [bp-58h]@6
  void *v10; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3 == 1 )
  {
    v6 = *(void (__fastcall **)(Minecart *, int *, _DWORD))(*(_DWORD *)this + 452);
    ItemInstance::ItemInstance((ItemInstance *)&v8, Block::mChest, 1);
    v6(v5, &v8, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
  }
  return Minecart::destroy(v5, v4, v3);
}
