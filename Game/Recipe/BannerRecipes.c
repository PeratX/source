

BannerPattern *__fastcall BannerRecipes::addRecipes(BannerRecipes *this, Recipes *a2)
{
  ItemInstance *v2; // r5@1
  void **v3; // r8@1
  void **v4; // r7@1
  ItemInstance *v5; // r4@1
  const char *v6; // r9@1
  int *v7; // r6@1
  int v8; // r10@1
  unsigned int *v9; // r2@2
  signed int v10; // r1@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int *v15; // r7@26
  const char *v16; // r5@26
  int v17; // r6@26
  int v18; // r9@26
  void *v19; // r0@27
  void *v20; // r0@29
  int v21; // r0@31
  void *v22; // r0@43
  void *v23; // r0@44
  void *v24; // r0@45
  BannerPattern *v25; // r0@50
  BannerRecipes *v27; // [sp+14h] [bp-70h]@1
  char v28; // [sp+28h] [bp-5Ch]@1
  int v29; // [sp+30h] [bp-54h]@41
  void *v30; // [sp+4Ch] [bp-38h]@39
  void *ptr; // [sp+5Ch] [bp-28h]@37
  int v32; // [sp+74h] [bp-10h]@1
  int v33; // [sp+78h] [bp-Ch]@26
  int v34; // [sp+84h] [bp+0h]@1
  int v35; // [sp+8Ch] [bp+8h]@1
  int v36; // [sp+94h] [bp+10h]@10
  char v37; // [sp+98h] [bp+14h]@1
  BannerPattern *v38; // [sp+A0h] [bp+1Ch]@50
  void *v39; // [sp+BCh] [bp+38h]@48
  void *v40; // [sp+CCh] [bp+48h]@46

  v27 = this;
  v2 = (ItemInstance *)&v37;
  v3 = (void **)&v35;
  v4 = (void **)&v34;
  v5 = (ItemInstance *)&v28;
  v6 = "###";
  v7 = &v32;
  v8 = 0;
  do
  {
    ItemInstance::ItemInstance(v2, Item::mBanner, 1, 15 - v8);
    sub_21E94B4((void **)&v36, v6);
    sub_21E94B4(v3, v6);
    sub_21E94B4(v4, " | ");
    ItemInstance::ItemInstance(v5, Block::mWool, 1, v8);
    definition<ItemInstance,Item *>((int)v7, 35, (int)v5, 124, Item::mStick);
    Recipes::addShapedRecipe((int)v27, (int)v2, &v36, (int *)v3, (int *)v4);
    v15 = v7;
    v16 = v6;
    v17 = v33;
    v18 = v32;
    if ( v32 != v33 )
    {
      do
      {
        v19 = *(void **)(v18 + 60);
        if ( v19 )
          operator delete(v19);
        v20 = *(void **)(v18 + 44);
        if ( v20 )
          operator delete(v20);
        v21 = *(_DWORD *)(v18 + 16);
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        *(_DWORD *)(v18 + 16) = 0;
        v18 += 88;
      }
      while ( v17 != v18 );
      v18 = v32;
    }
    v7 = v15;
    if ( v18 )
      operator delete((void *)v18);
    if ( ptr )
      operator delete(ptr);
    v6 = v16;
    v3 = (void **)&v35;
    if ( v30 )
      operator delete(v30);
    v4 = (void **)&v34;
    v5 = (ItemInstance *)&v28;
    if ( v29 )
      (*(void (**)(void))(*(_DWORD *)v29 + 4))();
    v22 = (void *)(v34 - 12);
    v29 = 0;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v35 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v36 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    if ( v40 )
      operator delete(v40);
    v2 = (ItemInstance *)&v37;
    if ( v39 )
      operator delete(v39);
    v25 = v38;
    if ( v38 )
      v25 = (BannerPattern *)(*(int (**)(void))(*(_DWORD *)v38 + 4))();
    ++v8;
    v38 = 0;
  }
  while ( v8 != 16 );
  return BannerPattern::initPatterns(v25);
}
