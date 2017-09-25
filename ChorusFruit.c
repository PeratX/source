

void __fastcall ChorusFruit::~ChorusFruit(ChorusFruit *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall ChorusFruit::getCooldownTime(ChorusFruit *this)
{
  return 20;
}


int __fastcall ChorusFruit::getCooldownType(ChorusFruit *this)
{
  return 0;
}


void __fastcall ChorusFruit::~ChorusFruit(ChorusFruit *this)
{
  ChorusFruit::~ChorusFruit(this);
}


int __fastcall ChorusFruit::ChorusFruit(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_2720994;
  *(_BYTE *)(result + 45) = 1;
  *(_DWORD *)(result + 36) = 32;
  return result;
}


ItemInstance *__fastcall ChorusFruit::use(ChorusFruit *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r5@1
  Player *v4; // r4@1
  int v5; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = j_ItemInstance::getMaxUseDuration(a2);
  j_Player::startUsingItem(v4, v3, v5);
  return v3;
}


int __fastcall ChorusFruit::useTimeDepleted(ChorusFruit *this, ItemInstance *a2, Level *a3, Player *a4)
{
  Player *v4; // r4@1
  ItemInstance *v5; // r5@1

  v4 = a4;
  v5 = a2;
  j_Player::eat(a4, 4, 0.3);
  (*(void (__fastcall **)(Player *, ItemInstance *))(*(_DWORD *)v4 + 612))(v4, v5);
  return (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 1528))(v4);
}
