

int __fastcall Cow::Cow(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_271BC54;
  *(_DWORD *)(result + 248) = 6;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 3984) = 1072064102;
  *(_DWORD *)(result + 3320) = 1065353216;
  *(_DWORD *)(result + 3324) = 0;
  *(_DWORD *)(result + 3328) = 0;
  *(_DWORD *)(result + 3332) = 1036831949;
  return result;
}


void __fastcall Cow::~Cow(Cow *this)
{
  Cow::~Cow(this);
}


int __fastcall Cow::_playStepSound(Cow *this, const BlockPos *a2, int a3)
{
  Cow *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  j_Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return j_Entity::playSound((int)v3, 2, (int)&v5);
}


void __fastcall Cow::normalTick(Cow *this)
{
  ++*((_DWORD *)this + 1073);
  j_j_j__ZN3Mob10normalTickEv_0(this);
}


signed int __fastcall Cow::useNewAi(Cow *this)
{
  return 1;
}


void __fastcall Cow::normalTick(Cow *this)
{
  Cow::normalTick(this);
}


void __fastcall Cow::~Cow(Cow *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall Cow::getEntityTypeId(Cow *this)
{
  return 4875;
}
