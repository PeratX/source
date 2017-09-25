

int __fastcall DefaultMobSpawner::DefaultMobSpawner(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = BaseMobSpawner::BaseMobSpawner(a1, 1);
  *(_DWORD *)result = &off_270A070;
  *(_DWORD *)(result + 76) = v2;
  return result;
}


void __fastcall DefaultMobSpawner::~DefaultMobSpawner(DefaultMobSpawner *this)
{
  DefaultMobSpawner::~DefaultMobSpawner(this);
}


void __fastcall DefaultMobSpawner::~DefaultMobSpawner(DefaultMobSpawner *this)
{
  BaseMobSpawner *v1; // r0@1

  v1 = BaseMobSpawner::~BaseMobSpawner(this);
  j_j_j__ZdlPv_6((void *)v1);
}
