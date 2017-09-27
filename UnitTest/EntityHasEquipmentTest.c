

int __fastcall EntityHasEquipmentTest::evaluate(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  ItemInstance **v4; // r0@4
  int v5; // r7@4
  int v6; // r4@5
  ItemInstance **v7; // r8@7
  int v8; // r6@10
  char v9; // r6@16
  ItemInstance **v10; // r5@17
  int v11; // r0@19
  int v12; // r1@19
  bool v13; // zf@19
  signed int v14; // r0@19
  signed int v15; // r1@21
  int v16; // r0@23
  ItemInstance **v18; // [sp+4h] [bp-3Ch]@9
  int v19; // [sp+8h] [bp-38h]@9
  int v20; // [sp+Ch] [bp-34h]@9
  ItemInstance **v21; // [sp+10h] [bp-30h]@8
  int v22; // [sp+14h] [bp-2Ch]@8
  int v23; // [sp+18h] [bp-28h]@8
  ItemInstance **v24; // [sp+1Ch] [bp-24h]@4
  int v25; // [sp+20h] [bp-20h]@4
  int v26; // [sp+24h] [bp-1Ch]@4

  v2 = *(_DWORD *)(a2 + 4);
  v3 = a1;
  if ( v2 )
  {
    if ( j_Entity::hasCategory(*(_DWORD *)(a2 + 4), 2) == 1 )
    {
      switch ( *(_DWORD *)(v3 + 8) )
      {
        case 0:
          (*(void (__fastcall **)(ItemInstance ***, int))(*(_DWORD *)v2 + 1056))(&v24, v2);
          v4 = v24;
          v24 = 0;
          v5 = v25;
          v25 = 0;
          v26 = 0;
          goto LABEL_15;
        case 1:
          (*(void (__fastcall **)(ItemInstance ***, int))(*(_DWORD *)v2 + 1052))(&v21, v2);
          v4 = v21;
          v21 = 0;
          v5 = v22;
          v22 = 0;
          v23 = 0;
        case 2:
          (*(void (__fastcall **)(ItemInstance ***, int))(*(_DWORD *)v2 + 1044))(&v18, v2);
          v4 = v18;
          v18 = 0;
          v5 = v19;
          v19 = 0;
          v20 = 0;
        case 3:
          v8 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 1028))(v2, 0);
          v4 = (ItemInstance **)j_operator new(4u);
          goto LABEL_14;
        case 4:
          v8 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v2 + 1028))(v2, 1);
        case 5:
          v8 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v2 + 1028))(v2, 2);
        case 6:
          v8 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v2 + 1028))(v2, 3);
LABEL_14:
          *v4 = (ItemInstance *)v8;
          v5 = (int)(v4 + 1);
LABEL_15:
          v7 = v4;
          break;
        default:
          v7 = 0;
          v5 = 0;
      }
      v9 = 0;
      if ( v7 != (ItemInstance **)v5 )
        v10 = v7;
        do
        {
          if ( j_ItemInstance::getId(*v10) == *(_DWORD *)(v3 + 12) )
          {
            v11 = j_ItemInstance::getAuxValue(*v10);
            v12 = *(_DWORD *)(v3 + 16);
            v13 = v11 == (signed __int16)v12;
            v14 = 0;
            if ( v13 )
              v14 = 1;
            v13 = v12 == -1;
            v15 = 0;
              v15 = 1;
            v16 = v14 | v15;
            v9 |= v16;
            if ( v16 )
              break;
          }
          ++v10;
        }
        while ( (ItemInstance **)v5 != v10 );
      v6 = j_FilterTest::_testValuesWithOperator((FilterTest *)v3, v9 & 1, 1);
      if ( v7 )
        j_operator delete(v7);
    }
    else
      v6 = 0;
  }
  else
    v6 = 0;
  return v6;
}


signed int __fastcall EntityHasEquipmentTest::setup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  signed int result; // r0@2

  v3 = a3;
  v4 = a1;
  j_FilterTest::setup(a1, a2, a3);
  if ( j_JsonUtil::parseItem((_DWORD *)(v4 + 12), (int *)(v4 + 16), (int *)(v3 + 28), -1) == 1 )
  {
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 12);
    result = 1;
  }
  else
    result = 0;
  return result;
}
