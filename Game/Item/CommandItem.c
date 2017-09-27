

int __fastcall CommandItem::CommandItem(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall CommandItem::CommandItem(int result, int a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


_QWORD *__fastcall CommandItem::CommandItem(_QWORD *result, int a2, int a3)
{
  int v3; // r1@1

  v3 = 0;
  *result = *(_QWORD *)(&a3 - 1);
  return result;
}


void *__fastcall CommandItem::getInstance(CommandItem *this, int a2, int a3, unsigned int a4)
{
  ItemInstance *v4; // r4@1
  signed int v5; // r5@1
  __int64 v6; // kr00_8@5
  int v7; // r0@10
  char v8; // r1@10
  void *result; // r0@14

  v4 = this;
  v5 = a3;
  if ( a4 >> 15 )
    a4 = 0;
  if ( a3 <= 1 )
    v5 = 1;
  v6 = *(_QWORD *)a2;
  if ( a3 > 64 )
    v5 = 64;
  if ( (signed int)v6 <= 2 && 0 == HIDWORD(v6) >> 9 && Item::mItems[HIDWORD(v6)] )
  {
    ItemInstance::ItemInstance(this, SHIDWORD(v6), v5, a4);
    v7 = (*(int (__fastcall **)(_DWORD, ItemInstance *))(*(_DWORD *)v6 + 212))(v6, v4);
    v8 = v5;
    if ( v5 <= 1 )
      v8 = 1;
    if ( v5 > v7 )
      v8 = v7;
    result = ItemInstance::set(v4, (unsigned __int8)v8);
  }
  else
    result = (void *)ItemInstance::ItemInstance(this, SHIDWORD(v6), v5, a4);
  return result;
}
