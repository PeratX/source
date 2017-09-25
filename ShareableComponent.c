

int __fastcall ShareableComponent::hasSurplus(ShareableComponent *this, const ItemInstance *a2, ItemInstance *a3, int a4)
{
  const ItemInstance *v4; // r11@1
  Entity **v5; // r9@1
  signed int v6; // r10@2
  Entity *v7; // r0@4
  ItemInstance *v8; // r4@4
  int v9; // r6@6
  int i; // r7@6
  __int64 v11; // kr08_8@9
  signed int v12; // r4@10
  signed int v13; // r0@10
  bool v14; // zf@10
  int v15; // r4@18
  int v16; // r7@18
  int v17; // r4@19
  ContainerComponent *v18; // r0@22
  int v19; // r6@22
  Recipes *v20; // r0@30
  int v21; // r0@30
  Recipe *v22; // r4@30
  int v23; // r0@32
  int v24; // r0@37
  ItemInstance *v26; // [sp+4h] [bp-74h]@6
  char v27; // [sp+8h] [bp-70h]@24
  int v28; // [sp+10h] [bp-68h]@28
  void *v29; // [sp+2Ch] [bp-4Ch]@26
  void *ptr; // [sp+3Ch] [bp-3Ch]@24

  v4 = a2;
  v5 = (Entity **)this;
  if ( a4 == 1 )
    v6 = *((_BYTE *)a2 + 14);
  else
    v6 = 0;
  v7 = *(Entity **)this;
  v8 = a3;
  if ( *(_DWORD *)(*((_DWORD *)*v5 + 12) + 404) )
  {
    if ( !j_Entity::getContainerComponent(v7) )
      return 0;
    v26 = v8;
    v9 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v5 + 12) + 404) + 4) >> 32;
    for ( i = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v5 + 12) + 404) + 4); ; i += 24 )
    {
      if ( i == v9 )
      {
        v15 = -1;
        v16 = -1;
LABEL_21:
        if ( v6 < 1 )
          return 0;
        v18 = (ContainerComponent *)j_Entity::getContainerComponent(*v5);
        v19 = j_ContainerComponent::countItemsOfType(v18, v4);
        if ( v19 <= v6 )
        if ( v15 < 0 )
        {
          j_ItemInstance::operator=((int)v26, (int)v4);
          v24 = j_ItemInstance::getMaxStackSize(v4);
          if ( v24 > v19 >> 1 )
            v24 = v19 >> 1;
          j_ItemInstance::set(v26, (unsigned __int8)v24);
        }
        else
          j_ItemInstance::ItemInstance((ItemInstance *)&v27, v15, 1, v16);
          j_ItemInstance::operator=((int)v26, (int)&v27);
          if ( ptr )
            j_operator delete(ptr);
          if ( v29 )
            j_operator delete(v29);
          if ( v28 )
            (*(void (**)(void))(*(_DWORD *)v28 + 4))();
          v28 = 0;
          v20 = j_Recipes::getInstance(0);
          v21 = j_Recipes::getRecipeFor(v20, v26);
          v22 = (Recipe *)v21;
          if ( v21 )
          {
            if ( !(*(int (**)(void))(*(_DWORD *)v21 + 44))() )
            {
              v23 = j_Recipe::countQuantityOfIngredient(v22, v4);
              if ( v23 > 0 )
              {
                v17 = (v19 >> 1) / v23;
                j_ItemInstance::set(v26, (unsigned __int8)v17);
                return v17;
              }
            }
          }
        return v19 - v6;
      }
      v11 = *(_QWORD *)i;
      if ( j_ItemInstance::isStackedByData(v4) )
        v12 = j_ItemInstance::isDamageableItem(v4);
        v13 = j_ItemInstance::getId(v4);
        v14 = v12 == 0;
        if ( !v12 )
          v14 = v13 == (_DWORD)v11;
        if ( v14 )
          if ( j_ItemInstance::getAuxValue(v4) == HIDWORD(v11) )
            goto LABEL_18;
          continue;
      else
      if ( v13 == (_DWORD)v11 )
LABEL_18:
        v15 = *(_QWORD *)(i + 12) >> 32;
        v6 = *(_QWORD *)(i + 12);
        v16 = *(_DWORD *)(i + 20);
        goto LABEL_21;
    }
  }
  return 0;
}


int __fastcall ShareableComponent::hasSurplus(ShareableComponent *this, const ItemInstance *a2, int a3)
{
  ShareableComponent *v3; // r6@1
  int v4; // r4@1
  const ItemInstance *v5; // r5@1
  int v6; // r4@1
  int v8; // [sp+0h] [bp-60h]@1
  int v9; // [sp+8h] [bp-58h]@5
  void *v10; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  j_ItemInstance::ItemInstance((int)&v8);
  v6 = j_ShareableComponent::hasSurplus(v3, v5, (ItemInstance *)&v8, v4);
  if ( ptr )
    j_operator delete(ptr);
  if ( v10 )
    j_operator delete(v10);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  return v6;
}


signed int __fastcall ShareableComponent::willPickup(ShareableComponent *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r0@1
  __int64 *i; // r6@2
  __int64 *v5; // r8@2
  __int64 v6; // kr08_8@5
  signed int v7; // r5@6
  signed int v8; // r0@8
  bool v9; // zf@8

  v2 = a2;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 404);
  if ( v3 )
  {
    v5 = (__int64 *)(*(_QWORD *)(v3 + 4) >> 32);
    for ( i = (__int64 *)*(_QWORD *)(v3 + 4); i != v5; i += 3 )
    {
      v6 = *i;
      if ( j_ItemInstance::isStackedByData(v2) == 1 )
        v7 = j_ItemInstance::isDamageableItem(v2);
      else
        v7 = 1;
      v8 = j_ItemInstance::getId(v2);
      v9 = v7 == 0;
      if ( !v7 )
        v9 = v8 == (_DWORD)v6;
      if ( v9 )
      {
        if ( j_ItemInstance::getAuxValue(v2) == HIDWORD(v6) )
          return 1;
      }
      else if ( v8 == (_DWORD)v6 )
        return 1;
    }
  }
  return 0;
}


int __fastcall ShareableComponent::wantsMore(ShareableComponent *this, const ItemInstance *a2)
{
  Entity **v2; // r8@1
  ItemInstance *v3; // r11@1
  int v4; // r0@1
  signed int v5; // r7@3
  int v6; // r5@3
  int v7; // r9@3
  __int64 v8; // kr08_8@4
  signed int v9; // r6@5
  signed int v10; // r0@7
  signed int v11; // r1@7
  bool v12; // zf@9
  int v13; // r0@13
  int v14; // r6@19
  ContainerComponent *v15; // r0@20
  int v16; // r0@20

  v2 = (Entity **)this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)(v4 + 48) + 404) )
  {
    if ( j_Entity::getContainerComponent((Entity *)v4) )
    {
      v5 = 0;
      v7 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v2 + 12) + 404) + 4) >> 32;
      v6 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v2 + 12) + 404) + 4);
      if ( v6 == v7 )
      {
        v14 = 0;
      }
      else
        do
        {
          v8 = *(_QWORD *)v6;
          if ( j_ItemInstance::isStackedByData(v3) == 1 )
            v9 = j_ItemInstance::isDamageableItem(v3);
          else
            v9 = 1;
          v10 = j_ItemInstance::getId(v3);
          v11 = 0;
          if ( v10 == (_DWORD)v8 )
            v11 = 1;
          v12 = v9 == 0;
          if ( !v9 )
            v12 = v10 == (_DWORD)v8;
          if ( v12 )
          {
            v13 = j_ItemInstance::getAuxValue(v3);
            v11 = 0;
            if ( v13 == HIDWORD(v8) )
              v11 = 1;
          }
          if ( v11 )
            v5 = *(_DWORD *)(v6 + 8);
            break;
          v6 += 24;
        }
        while ( v6 != v7 );
        if ( v5 >= 1 )
          v15 = (ContainerComponent *)j_Entity::getContainerComponent(*v2);
          v16 = v5 - j_ContainerComponent::countItemsOfType(v15, v3);
          if ( v16 > 0 )
            v14 = v16;
    }
    else
      v14 = 0;
  }
  else
    v14 = 0;
  return v14;
}


_DWORD *__fastcall ShareableComponent::ShareableComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
