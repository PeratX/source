

_DWORD *__fastcall EnderChestContainer::EnderChestContainer(double a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)FillingContainer::FillingContainer(a1, 0x1Bu, 0);
  *result = &off_2700A7C;
  return result;
}


int __fastcall EnderChestContainer::stopOpen(EnderChestContainer *this, Player *a2)
{
  EnderChestContainer *v2; // r4@1
  Player *v3; // r5@1
  int v4; // r0@1
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 35);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 148))();
  FillingContainer::stopOpen(v2, v3);
  result = 0;
  *((_DWORD *)v2 + 35) = 0;
  return result;
}


void __fastcall EnderChestContainer::~EnderChestContainer(EnderChestContainer *this)
{
  Container *v1; // r0@1

  v1 = FillingContainer::~FillingContainer(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EnderChestContainer::startOpen(EnderChestContainer *this, Player *a2)
{
  FillingContainer *v2; // r5@1
  Player *v3; // r4@1
  int v4; // r0@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 35);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 116))();
  return j_j_j__ZN16FillingContainer9startOpenER6Player(v2, v3);
}


void __fastcall EnderChestContainer::~EnderChestContainer(EnderChestContainer *this)
{
  EnderChestContainer::~EnderChestContainer(this);
}


int __fastcall EnderChestContainer::setActiveChest(int result, ChestBlockEntity *a2)
{
  *(_DWORD *)(result + 140) = a2;
  return result;
}
