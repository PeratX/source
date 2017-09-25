

int __fastcall MinecartRideable::MinecartRideable(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Minecart::Minecart(a1, a2, a3);
  *(_DWORD *)result = &off_26F3E44;
  *(_DWORD *)(result + 172) |= 0x100u;
  return result;
}


int __fastcall MinecartRideable::getType(MinecartRideable *this)
{
  return 0;
}


void __fastcall MinecartRideable::~MinecartRideable(MinecartRideable *this)
{
  MinecartRideable::~MinecartRideable(this);
}


void __fastcall MinecartRideable::~MinecartRideable(MinecartRideable *this)
{
  Minecart *v1; // r0@1

  v1 = Minecart::~Minecart(this);
  j_j_j__ZdlPv_6((void *)v1);
}
