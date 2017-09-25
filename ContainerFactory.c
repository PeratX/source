

int __fastcall ContainerFactory::createController(int a1, ContainerModel **a2)
{
  ContainerModel **v2; // r5@1
  int v3; // r4@1
  int result; // r0@2
  char *v5; // r1@3
  char *v6; // r3@3
  int v7; // [sp+0h] [bp-C0h]@29
  int v8; // [sp+4h] [bp-BCh]@29
  int v9; // [sp+8h] [bp-B8h]@27
  int v10; // [sp+Ch] [bp-B4h]@27
  char v11; // [sp+13h] [bp-ADh]@25
  int v12; // [sp+14h] [bp-ACh]@28
  int v13; // [sp+18h] [bp-A8h]@28
  int v14; // [sp+1Ch] [bp-A4h]@4
  int v15; // [sp+20h] [bp-A0h]@4
  char v16; // [sp+26h] [bp-9Ah]@3
  char v17; // [sp+27h] [bp-99h]@24
  int v18; // [sp+28h] [bp-98h]@23
  int v19; // [sp+2Ch] [bp-94h]@23
  int v20; // [sp+30h] [bp-90h]@22
  int v21; // [sp+34h] [bp-8Ch]@22
  int v22; // [sp+38h] [bp-88h]@21
  int v23; // [sp+3Ch] [bp-84h]@21
  int v24; // [sp+40h] [bp-80h]@20
  int v25; // [sp+44h] [bp-7Ch]@20
  int v26; // [sp+48h] [bp-78h]@19
  int v27; // [sp+4Ch] [bp-74h]@19
  int v28; // [sp+50h] [bp-70h]@18
  int v29; // [sp+54h] [bp-6Ch]@18
  int v30; // [sp+58h] [bp-68h]@2
  int v31; // [sp+5Ch] [bp-64h]@2
  int v32; // [sp+60h] [bp-60h]@16
  int v33; // [sp+64h] [bp-5Ch]@16
  int v34; // [sp+68h] [bp-58h]@15
  int v35; // [sp+6Ch] [bp-54h]@15
  char v36; // [sp+73h] [bp-4Dh]@14
  int v37; // [sp+74h] [bp-4Ch]@13
  int v38; // [sp+78h] [bp-48h]@13
  int v39; // [sp+7Ch] [bp-44h]@12
  int v40; // [sp+80h] [bp-40h]@12
  int v41; // [sp+84h] [bp-3Ch]@11
  int v42; // [sp+88h] [bp-38h]@11
  char v43; // [sp+8Fh] [bp-31h]@9
  int v44; // [sp+90h] [bp-30h]@10
  int v45; // [sp+94h] [bp-2Ch]@10
  int v46; // [sp+98h] [bp-28h]@8
  int v47; // [sp+9Ch] [bp-24h]@8
  int v48; // [sp+A0h] [bp-20h]@7
  int v49; // [sp+A4h] [bp-1Ch]@7
  char v50; // [sp+AAh] [bp-16h]@6
  char v51; // [sp+ABh] [bp-15h]@5
  char v52; // [sp+ACh] [bp-14h]@2

  v2 = a2;
  v3 = a1;
  switch ( ContainerModel::getContainerEnumName(*a2) )
  {
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
      std::__shared_ptr<CreativeContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<CreativeContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v30,
        (int)&v52,
        (int)v2);
      *(_DWORD *)v3 = v30;
      result = v31;
      v31 = 0;
      *(_DWORD *)(v3 + 4) = result;
      v30 = 0;
      return result;
    case 25:
    case 26:
      v5 = &v52;
      v16 = 0;
      v6 = &v16;
      goto LABEL_26;
    case 29:
    case 30:
      std::__shared_ptr<TradeIngredientContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TradeIngredientContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v14,
      *(_DWORD *)v3 = v14;
      result = v15;
      v15 = 0;
      v14 = 0;
    case 0:
      v6 = &v51;
      v51 = 1;
    case 1:
      v50 = 1;
      v6 = &v50;
    case 2:
      std::__shared_ptr<AnvilResultContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AnvilResultContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v48,
      *(_DWORD *)v3 = v48;
      result = v49;
      v49 = 0;
      v48 = 0;
    case 3:
      std::__shared_ptr<ArmorContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ArmorContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v46,
      *(_DWORD *)v3 = v46;
      result = v47;
      v47 = 0;
      v46 = 0;
    case 4:
      v43 = 0;
      v6 = &v43;
    case 5:
      std::__shared_ptr<BeaconPaymentContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BeaconPaymentContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v44,
      *(_DWORD *)v3 = v44;
      result = v45;
      v45 = 0;
      v44 = 0;
    case 6:
      std::__shared_ptr<BrewingStandInputContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BrewingStandInputContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v41,
      *(_DWORD *)v3 = v41;
      result = v42;
      v42 = 0;
      v41 = 0;
    case 7:
      std::__shared_ptr<BrewingStandResultContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BrewingStandResultContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v39,
      *(_DWORD *)v3 = v39;
      result = v40;
      v40 = 0;
      v39 = 0;
    case 8:
      std::__shared_ptr<BrewingStandFuelContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BrewingStandFuelContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v37,
      *(_DWORD *)v3 = v37;
      result = v38;
      v38 = 0;
      v37 = 0;
    case 9:
      v36 = 0;
      v6 = &v36;
    case 10:
      std::__shared_ptr<CraftingInputContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<CraftingInputContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v34,
      *(_DWORD *)v3 = v34;
      result = v35;
      v35 = 0;
      v34 = 0;
    case 11:
      std::__shared_ptr<CraftingOutputContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<CraftingOutputContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v32,
      *(_DWORD *)v3 = v32;
      result = v33;
      v33 = 0;
      v32 = 0;
    default:
      result = 0;
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
    case 18:
      std::__shared_ptr<EnchantingInputContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EnchantingInputContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v28,
      *(_DWORD *)v3 = v28;
      result = v29;
      v29 = 0;
      v28 = 0;
    case 19:
      std::__shared_ptr<EnchantingMaterialContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EnchantingMaterialContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v26,
      *(_DWORD *)v3 = v26;
      result = v27;
      v27 = 0;
      v26 = 0;
    case 20:
      std::__shared_ptr<FurnaceFuelContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FurnaceFuelContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v24,
      *(_DWORD *)v3 = v24;
      result = v25;
      v25 = 0;
      v24 = 0;
    case 21:
      std::__shared_ptr<FurnaceInputContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FurnaceInputContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v22,
      *(_DWORD *)v3 = v22;
      result = v23;
      v23 = 0;
      v22 = 0;
    case 22:
      std::__shared_ptr<FurnaceResultContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FurnaceResultContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v20,
      *(_DWORD *)v3 = v20;
      result = v21;
      v21 = 0;
      v20 = 0;
    case 23:
      std::__shared_ptr<HorseEquipContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HorseEquipContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v18,
      *(_DWORD *)v3 = v18;
      result = v19;
      v19 = 0;
      v18 = 0;
    case 24:
      v17 = 0;
      v6 = &v17;
    case 27:
      v11 = 0;
      v6 = &v11;
LABEL_26:
      result = std::__shared_ptr<ContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ContainerController>,std::shared_ptr<ContainerModel> &,bool>(
                 v3,
                 (int)v5,
                 (int)v2,
                 v6);
      break;
    case 28:
      std::__shared_ptr<ShulkerBoxContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ShulkerBoxContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v9,
      *(_DWORD *)v3 = v9;
      result = v10;
      v10 = 0;
      v9 = 0;
    case 31:
      std::__shared_ptr<TradeResultContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TradeResultContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v12,
      *(_DWORD *)v3 = v12;
      result = v13;
      v13 = 0;
      v12 = 0;
    case 32:
      std::__shared_ptr<OffhandContainerController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<OffhandContainerController>,std::shared_ptr<ContainerModel> &>(
        (int)&v7,
      *(_DWORD *)v3 = v7;
      result = v8;
      *(_DWORD *)(v3 + 4) = v8;
  }
  return result;
}


int __fastcall ContainerFactory::_setPlayerContainerManager(int a1, int a2)
{
  int v2; // r1@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r2@4
  int result; // r0@7
  int v6; // r4@7
  unsigned int *v7; // r1@8
  unsigned int *v8; // r5@14
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v9 = *(_DWORD *)a2;
  v2 = *(_DWORD *)(a2 + 4);
  v10 = v2;
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  result = Player::setContainerManager(a1, (int)&v9);
  v6 = v10;
  if ( v10 )
    v7 = (unsigned int *)(v10 + 4);
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}
