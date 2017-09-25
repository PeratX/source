

signed int *__fastcall InventoryTransactionItemGroup::InventoryTransactionItemGroup(signed int *a1, ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r5@1
  signed int *v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r2@1
  int *v8; // r0@2
  int v9; // r1@2
  signed int v10; // r0@2
  int v12; // [sp+4h] [bp-14h]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  *a1 = ItemInstance::getId(a2);
  v6 = ItemInstance::getAuxValue(v3);
  v7 = (int)(v4 + 1);
  *(_DWORD *)v7 = v6;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = v5;
  *((_BYTE *)v4 + 16) = 0;
  if ( *(_DWORD *)ItemInstance::getUserData(v3) )
  {
    v8 = (int *)ItemInstance::getUserData(v3);
    CompoundTag::clone((CompoundTag *)&v12, *v8);
    v9 = v12;
    v12 = 0;
    v10 = v4[2];
    v4[2] = v9;
    if ( v10 )
    {
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    }
  }
  return v4;
}
