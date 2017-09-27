

signed int __fastcall ContainerItemStack::isEmpty(ContainerItemStack *this)
{
  ContainerItemStack *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( ItemInstance::isNull(this) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( !*((_BYTE *)v1 + 14) )
      result = 1;
  return result;
}


int __fastcall ContainerItemStack::getCount(ContainerItemStack *this)
{
  ContainerItemStack *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( ItemInstance::isNull(this) )
    result = 0;
  else
    result = *((_BYTE *)v1 + 14);
  return result;
}


signed int __fastcall ContainerItemStack::decreaseCount(ContainerItemStack *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  signed int result; // r0@1
  int v5; // [sp+0h] [bp-58h]@3
  int v6; // [sp+8h] [bp-50h]@7
  void *v7; // [sp+24h] [bp-34h]@5
  void *ptr; // [sp+34h] [bp-24h]@3

  v2 = a2;
  v3 = this;
  result = ItemInstance::isNull(this);
  if ( !result )
  {
    ItemInstance::remove(v3, v2);
    result = ItemInstance::isNull(v3);
    if ( result == 1 )
    {
      ItemInstance::ItemInstance((int)&v5);
      ItemInstance::operator=((int)v3, (int)&v5);
      if ( ptr )
        operator delete(ptr);
      if ( v7 )
        operator delete(v7);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      result = 0;
    }
  }
  return result;
}


int __fastcall ContainerItemStack::ContainerItemStack(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::operator=(v3, v2);
  return v3;
}


int *__fastcall ContainerItemStack::increaseCount(ContainerItemStack *this, int a2)
{
  int v2; // r4@1
  ItemInstance *v3; // r5@1
  int *result; // r0@1

  v2 = a2;
  v3 = this;
  result = (int *)ItemInstance::isNull(this);
  if ( !result )
    result = j_j_j__ZN12ItemInstance3addEi_0(v3, v2);
  return result;
}


int __fastcall ContainerItemStack::ContainerItemStack(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-58h]@1
  int v4; // [sp+8h] [bp-50h]@5
  void *v5; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v1 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance((int)&v3);
  ItemInstance::operator=(v1, (int)&v3);
  if ( ptr )
    operator delete(ptr);
  if ( v5 )
    operator delete(v5);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  return v1;
}
