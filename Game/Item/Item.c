

int __fastcall Item::getLevelDataForAuxValue(Item *this, int a2)
{
  return 0;
}


void __fastcall Item::hurtEnemy(Item *this, ItemInstance *a2, Mob *a3, Mob *a4)
{
  Item::hurtEnemy(this, a2, a3, a4);
}


Item *__fastcall Item::~Item(Item *this)
{
  Item *v1; // r4@1
  int v2; // r0@1
  void *v3; // r0@3
  int v4; // r5@5
  void *v5; // r0@6
  int v6; // r1@8
  void *v7; // r0@8
  int v8; // r1@9
  void *v9; // r0@9
  int v10; // r1@11
  void *v11; // r0@11
  int v12; // r1@12
  void *v13; // r0@12
  int v14; // r1@13
  void *v15; // r0@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r12@27
  signed int v24; // r1@29
  unsigned int *v25; // r12@31
  signed int v26; // r1@33

  v1 = this;
  *(_DWORD *)this = &off_2701A94;
  v2 = *((_DWORD *)this + 27);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 27) = 0;
  v3 = (void *)*((_DWORD *)v1 + 26);
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)v1 + 26) = 0;
  v4 = *((_DWORD *)v1 + 25);
  if ( v4 )
  {
    v5 = *(void **)(v4 + 24);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v4 + 20);
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = *(_DWORD *)(v4 + 16);
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v8 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 25) = 0;
  v10 = *((_DWORD *)v1 + 6);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 5);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v12 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 2);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v14 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  return v1;
}


int __fastcall Item::initCreativeCategories(Item *this)
{
  (*(void (**)(void))(*(_DWORD *)Item::mApple + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mApple_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mApple_enchanted + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMushroomStew + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBread + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPorkChop_raw + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPorkChop_cooked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_raw_cod + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_raw_salmon + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_raw_clownfish + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_raw_pufferfish + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_cooked_cod + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFish_cooked_salmon + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCookie + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMelonSlice + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBeef_raw + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBeef_cooked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChicken_raw + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChicken_cooked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMutton_raw + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMutton_cooked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRotten_flesh + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSpider_eye + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPotato + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPotatoBaked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPoisonous_potato + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCarrot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGoldenCarrot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPumpkinPie + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBeetroot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBeetrootSoup + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRabbitRaw + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRabbitCooked + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRabbitStew + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSeeds_wheat + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSeeds_pumpkin + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSeeds_melon + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mNether_wart + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSeeds_beetroot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShovel_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPickAxe_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHatchet_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFlintAndSteel + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBow + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mArrow + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCoal + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDiamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mIronIngot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGoldIngot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSword_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSword_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShovel_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPickAxe_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHatchet_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSword_stone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShovel_stone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPickAxe_stone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHatchet_stone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSword_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShovel_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPickAxe_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHatchet_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mStick + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBowl + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSword_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShovel_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPickAxe_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHatchet_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mString + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFeather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSulphur + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHoe_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHoe_stone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHoe_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHoe_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHoe_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mWheat + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHelmet_leather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestplate_leather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeggings_leather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoots_leather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHelmet_chain + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestplate_chain + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeggings_chain + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoots_chain + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHelmet_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestplate_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeggings_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoots_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHelmet_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestplate_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeggings_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoots_diamond + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHelmet_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestplate_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeggings_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoots_gold + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFlint + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPainting + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSign + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_wood + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBucket + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMinecart + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSaddle + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_iron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRedStone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSnowBall + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBoat + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeather + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBrick + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mClay + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mReeds + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPaper + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBook + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSlimeBall + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChestMinecart + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEgg + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCompass + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFishingRod + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mClock + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mYellowDust + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDye_powder + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBone + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSugar + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCake + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBed + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRepeater + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFilledMap + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShears + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEnderpearl + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBlazeRod + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGhast_tear + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGold_nugget + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mIron_nugget + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPotion + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGlass_bottle + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFermented_spider_eye + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBlazePowder + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMagma_cream + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBrewing_stand + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCauldron + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEnderEye + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSpeckled_melon + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mMobPlacer + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mExperiencePotionItem + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFireCharge + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mWritable_book + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEmerald + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mItemFrame + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFlowerPot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEmptyMap + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSkull + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mCarrotOnAStick + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFireworksItem + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mFireworkCharge + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mNetherStar + 56))();
  (*(void (**)(void))(*(_DWORD *)Item::mEnchanted_book + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mComparator + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mNetherbrick + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mNetherQuartz + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mTNTMinecart + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHopperMinecart + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mHopper + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRabbitFoot + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRabbitHide + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mArmorStand + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLeatherHorseArmor + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mIronHorseArmor + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mGoldHorseArmor + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDiamondHorseArmor + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecord13 + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordCat + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordBlocks + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordChirp + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordFar + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordMall + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordMellohi + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordStal + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordStrad + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordWard + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecord11 + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mRecordWait + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLead + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mNameTag + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mBanner + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mEndCrystal + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_spruce + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_birch + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_jungle + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_acacia + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDoor_darkoak + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChorusFruit + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mChorusFruitPopped + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mDragon_breath + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mSplash_potion + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mLingering_potion + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPrismarineShard + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mPrismarineCrystals + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mElytra + 20))();
  (*(void (**)(void))(*(_DWORD *)Item::mShulkerShell + 20))();
  return (*(int (**)(void))(*(_DWORD *)Item::mTotem + 20))();
}


int __fastcall Item::setUseAnimation(int result, char a2)
{
  *(_BYTE *)(result + 45) = a2;
  return result;
}


char *__fastcall Item::beginCreativeGroup(int *a1)
{
  int *v1; // r4@1
  int v2; // r1@1
  void *v3; // r5@3
  int v4; // r6@3
  void *v5; // r0@4
  void *v6; // r0@6
  int v7; // r0@8
  char *result; // r0@15
  void *v9; // [sp+0h] [bp-20h]@1
  void *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1

  v1 = a1;
  LOBYTE(Item::mInCreativeGroup) = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v2 = dword_2806D30;
  if ( dword_2806D30 == *(_DWORD *)algn_2806D34 )
  {
    std::vector<std::vector<ItemInstance,std::allocator<ItemInstance>>,std::allocator<std::vector<ItemInstance,std::allocator<ItemInstance>>>>::_M_emplace_back_aux<std::vector<ItemInstance,std::allocator<ItemInstance>>>(
      (unsigned __int64 *)&Item::mCreativeGroups,
      (int)&v9);
    v3 = v10;
    v4 = (int)v9;
    if ( v9 != v10 )
    {
      do
      {
        v5 = *(void **)(v4 + 52);
        if ( v5 )
          operator delete(v5);
        v6 = *(void **)(v4 + 36);
        if ( v6 )
          operator delete(v6);
        v7 = *(_DWORD *)(v4 + 8);
        if ( v7 )
          (*(void (**)(void))(*(_DWORD *)v7 + 4))();
        *(_DWORD *)(v4 + 8) = 0;
        v4 += 72;
      }
      while ( v3 != (void *)v4 );
      v3 = v9;
    }
    if ( v3 )
      operator delete(v3);
  }
  else
    *(_DWORD *)dword_2806D30 = 0;
    *(_DWORD *)(v2 + 4) = 0;
    v9 = 0;
    v10 = 0;
    *(_DWORD *)(v2 + 8) = 0;
    v11 = 0;
    dword_2806D30 += 12;
  if ( dword_2806D3C == unk_2806D40 )
    result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__4(
               (unsigned __int64 *)&Item::mCreativeGroupNames,
               v1);
    sub_21E8AF4((int *)dword_2806D3C, v1);
    result = (char *)&Item::mEmptyMap;
    dword_2806D3C += 4;
  return result;
}


int *__fastcall Item::useTimeDepleted(Item *this, ItemInstance *a2, Level *a3, Player *a4)
{
  int *result; // r0@1
  ItemInstance *v5; // r5@1
  int v6; // [sp+0h] [bp-58h]@3
  int v7; // [sp+8h] [bp-50h]@7
  void *v8; // [sp+24h] [bp-34h]@5
  void *ptr; // [sp+34h] [bp-24h]@3

  result = (int *)*((_DWORD *)this + 25);
  v5 = a2;
  if ( result )
  {
    result = FoodItemComponent::useTimeDepleted((FoodItemComponent *)result, a2, a4, a3);
    if ( result )
    {
      ItemInstance::ItemInstance((ItemInstance *)&v6, (int)result);
      ItemInstance::operator=((int)v5, (int)&v6);
      if ( ptr )
        operator delete(ptr);
      if ( v8 )
        operator delete(v8);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      result = 0;
    }
  }
  return result;
}


int __fastcall Item::canDestroySpecial(Item *this, const Block *a2)
{
  return 0;
}


int __fastcall Item::setMaxUseDuration(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


void __fastcall Item::~Item(Item *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Item::destroySpeedBonus(Item *this, const ItemInstance *a2)
{
  const ItemInstance *v5; // r4@1
  const ItemInstance *v7; // r2@4
  int result; // r0@9

  __asm { VMOV.F32        S16, #1.0 }
  v5 = a2;
  _ZF = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    _ZF = *(_DWORD *)a2 == 0;
  if ( !_ZF && !ItemInstance::isNull(a2) && *((_BYTE *)v5 + 14) )
  {
    _R0 = EnchantUtils::getEnchantLevel((EnchantUtils *)0xF, (int)v5, v7);
    if ( _R0 < 1 )
    {
      __asm { VLDR            S16, =0.0 }
    }
    else
      __asm
      {
        VMOV            S0, R0
        VMOV.F32        S2, #1.0
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S0
        VADD.F32        S16, S0, S2
      }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


signed int __fastcall Item::_calculatePlacePos(Item *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  return 1;
}


int *__fastcall Item::lookupByName(unsigned int *a1, int a2)
{
  int v2; // r7@1
  int v3; // r1@1
  int *v4; // r5@4
  unsigned int v5; // r9@6
  unsigned int v6; // r10@6
  int v7; // r11@6
  int v8; // r6@7
  _DWORD *v9; // r8@7
  int v10; // r7@7
  const void *v11; // r1@9
  size_t v12; // r2@9
  int v13; // r0@10
  int v14; // r4@11
  unsigned int v15; // r3@14
  unsigned int v16; // r2@14
  void *v17; // r0@15
  void *v18; // r0@16
  unsigned int v19; // r9@17
  unsigned int v20; // r10@17
  int v21; // r11@17
  int v22; // r6@18
  _DWORD *v23; // r8@18
  int v24; // r7@18
  const void *v25; // r1@20
  size_t v26; // r2@20
  int v27; // r0@21
  int v28; // r4@22
  unsigned int v29; // r9@25
  unsigned int v30; // r10@25
  int v31; // r11@25
  int v32; // r6@26
  _DWORD *v33; // r8@26
  int v34; // r7@26
  const void *v35; // r1@28
  size_t v36; // r2@28
  int v37; // r0@29
  int v38; // r4@30
  signed int v39; // r4@32
  char *v40; // r0@33
  unsigned int v41; // r10@37
  unsigned int v42; // r11@37
  int v43; // r7@37
  int v44; // r6@37
  int v45; // r8@38
  _DWORD *v46; // r9@38
  int v47; // r4@38
  _DWORD *v48; // r1@40
  size_t v49; // r2@40
  int v50; // r5@42
  signed int v51; // r4@44
  char *v52; // r0@46
  char *v53; // r0@49
  bool v55; // zf@51
  unsigned int *v56; // r2@55
  signed int v57; // r1@57
  bool v58; // zf@62
  bool v59; // zf@66
  unsigned int *v60; // r2@70
  signed int v61; // r1@72
  unsigned int *v62; // r2@74
  signed int v63; // r1@76
  unsigned int *v64; // r2@78
  signed int v65; // r1@80
  unsigned int *v66; // r2@87
  signed int v67; // r1@89
  int *v68; // [sp+4h] [bp-44h]@38
  void *v69; // [sp+8h] [bp-40h]@37
  void *v70; // [sp+Ch] [bp-3Ch]@25
  int v71; // [sp+14h] [bp-34h]@14
  int v72; // [sp+18h] [bp-30h]@15
  void *s1; // [sp+1Ch] [bp-2Ch]@3

  v2 = a2;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( v3 )
  {
    if ( v2 == 1 )
      Util::toLower(&s1, v3, *a1);
    else
      sub_21E8AF4((int *)&s1, (int *)a1);
    v5 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v6 = unk_2806DC4;
    v7 = v5 % unk_2806DC4;
    v4 = *(int **)(Item::mItemLookupMap + 4 * (v5 % unk_2806DC4));
    if ( !v4 )
      goto LABEL_13;
    v8 = *v4;
    v9 = s1;
    v10 = *(_DWORD *)(*v4 + 12);
    while ( 1 )
    {
      if ( v10 == v5 )
      {
        v11 = *(const void **)(v8 + 4);
        v12 = *(v9 - 3);
        if ( v12 == *((_DWORD *)v11 - 3) )
        {
          v13 = memcmp(v9, v11, v12);
          if ( !v13 )
            break;
        }
      }
      v14 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v10 = *(_DWORD *)(v14 + 12);
        v4 = (int *)v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v14 + 12) % v6 == v7 )
          continue;
    }
    v55 = v4 == 0;
    if ( v4 )
      v13 = *v4;
      v55 = *v4 == 0;
    if ( v55 )
LABEL_13:
      if ( sub_21E76A0((int *)&s1, "minecraft:", 0, 0xAu) )
        goto LABEL_24;
      sub_21E94B4((void **)&v71, "minecraft:");
      v15 = *((_DWORD *)s1 - 3);
      v16 = *(_DWORD *)(v71 - 12);
      if ( v15 < v16 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v16, v15);
      sub_21E9040((void **)&v72, (int *)&s1, v16, 0xFFFFFFFF);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&s1,
        &v72);
      v17 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v72 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
        else
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v71 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v20 = unk_2806DC4;
      v21 = v19 % unk_2806DC4;
      v4 = *(int **)(Item::mItemLookupMap + 4 * (v19 % unk_2806DC4));
      if ( !v4 )
      v22 = *v4;
      v23 = s1;
      v24 = *(_DWORD *)(*v4 + 12);
      while ( 1 )
        if ( v24 == v19 )
          v25 = *(const void **)(v22 + 4);
          v26 = *(v23 - 3);
          if ( v26 == *((_DWORD *)v25 - 3) )
          {
            v27 = memcmp(v23, v25, v26);
            if ( !v27 )
              break;
          }
        v28 = *(_DWORD *)v22;
        if ( *(_DWORD *)v22 )
          v24 = *(_DWORD *)(v28 + 12);
          v4 = (int *)v22;
          v22 = *(_DWORD *)v22;
          if ( *(_DWORD *)(v28 + 12) % v20 == v21 )
            continue;
      v58 = v4 == 0;
      if ( v4 )
        v27 = *v4;
        v58 = *v4 == 0;
      if ( v58 )
LABEL_24:
        if ( sub_21E76A0((int *)&s1, "item.", 0, 5u) != -1 )
          goto LABEL_110;
        v70 = &unk_28898CC;
        sub_21E6FCC((const void **)&v70, *((_DWORD *)s1 - 3) + 5);
        sub_21E7408((const void **)&v70, "item.", 5u);
        sub_21E72F0((const void **)&v70, (const void **)&s1);
        v29 = sub_21B417C((int *)v70, *((_DWORD *)v70 - 3), -955291385);
        v30 = unk_2806DC4;
        v31 = v29 % unk_2806DC4;
        v4 = *(int **)(Item::mItemLookupMap + 4 * (v29 % unk_2806DC4));
        if ( !v4 )
          goto LABEL_32;
        v32 = *v4;
        v33 = v70;
        v34 = *(_DWORD *)(*v4 + 12);
        while ( 1 )
          if ( v34 == v29 )
            v35 = *(const void **)(v32 + 4);
            v36 = *(v33 - 3);
            if ( v36 == *((_DWORD *)v35 - 3) )
            {
              v37 = memcmp(v33, v35, v36);
              if ( !v37 )
                break;
            }
          v38 = *(_DWORD *)v32;
          if ( *(_DWORD *)v32 )
            v34 = *(_DWORD *)(v38 + 12);
            v4 = (int *)v32;
            v32 = *(_DWORD *)v32;
            if ( *(_DWORD *)(v38 + 12) % v30 == v31 )
              continue;
        v59 = v4 == 0;
        if ( v4 )
          v37 = *v4;
          v59 = *v4 == 0;
        if ( v59 )
LABEL_32:
          v39 = 1;
          v4 = *(int **)(v37 + 8);
          v39 = 0;
        v40 = (char *)v70 - 12;
        if ( (int *)((char *)v70 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)((char *)v70 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
          else
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        if ( v39 == 1 )
LABEL_110:
          if ( sub_21E76A0((int *)&s1, "tile.", 0, 5u) == -1 )
            v69 = &unk_28898CC;
            sub_21E6FCC((const void **)&v69, *((_DWORD *)s1 - 3) + 5);
            sub_21E7408((const void **)&v69, "tile.", 5u);
            sub_21E72F0((const void **)&v69, (const void **)&s1);
            v41 = sub_21B417C((int *)v69, *((_DWORD *)v69 - 3), -955291385);
            v42 = unk_2806DC4;
            v43 = v41 % unk_2806DC4;
            v44 = *(_DWORD *)(Item::mItemLookupMap + 4 * (v41 % unk_2806DC4));
            if ( v44 )
              v45 = *(_DWORD *)v44;
              v46 = v69;
              v68 = v4;
              v47 = *(_DWORD *)(*(_DWORD *)v44 + 12);
              while ( 1 )
              {
                if ( v47 == v41 )
                {
                  v48 = *(_DWORD **)(v45 + 4);
                  v49 = *(v46 - 3);
                  if ( v49 == *(v48 - 3) && !memcmp(v46, v48, v49) )
                    break;
                }
                v50 = *(_DWORD *)v45;
                if ( *(_DWORD *)v45 )
                  v47 = *(_DWORD *)(v50 + 12);
                  v44 = v45;
                  v45 = *(_DWORD *)v45;
                  if ( *(_DWORD *)(v50 + 12) % v42 == v43 )
                    continue;
                goto LABEL_44;
              }
              if ( !v44 )
LABEL_44:
                v51 = 1;
                v4 = v68;
                goto LABEL_46;
              v4 = v68;
              if ( *(_DWORD *)v44 )
                v4 = *(int **)(*(_DWORD *)v44 + 8);
                v51 = 0;
              else
            else
              v51 = 1;
LABEL_46:
            v52 = (char *)v69 - 12;
            if ( (int *)((char *)v69 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)((char *)v69 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
            if ( v51 == 1 )
              v4 = 0;
            v4 = 0;
      else
        v4 = *(int **)(v27 + 8);
      v4 = *(int **)(v13 + 8);
    v53 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)((char *)s1 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v53);
  }
  else
    v4 = 0;
  return v4;
}


void __fastcall Item::appendFormattedHovertext(int a1, ItemInstance *this, int a3, int a4, int a5, int a6, int a7, void *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, char a18)
{
  ItemInstance *v18; // r5@1
  int v19; // r7@1
  const void **v20; // r11@1
  signed int v21; // r6@1
  int *v22; // r1@1
  const Item *v23; // r1@3
  const void **v24; // r0@9
  char *v25; // r0@9
  void *v26; // r0@10
  char *v27; // r7@12
  size_t v28; // r2@12
  const void **v29; // r0@14
  const void **v30; // r0@14
  char *v31; // r0@14
  char *v32; // r0@15
  void *v33; // r0@16
  const void **v34; // r4@26
  const void **i; // r6@26
  unsigned int *v36; // r2@28
  signed int v37; // r1@30
  void *v38; // r0@36
  const void **v39; // r4@38
  const void **v40; // r6@38
  unsigned int *v41; // r2@40
  signed int v42; // r1@42
  int *v43; // r0@48
  char *v44; // r0@53
  unsigned int *v45; // r2@55
  signed int v46; // r1@57
  unsigned int *v47; // r2@59
  signed int v48; // r1@61
  unsigned int *v49; // r2@63
  signed int v50; // r1@65
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  unsigned int *v53; // r2@79
  signed int v54; // r1@81
  unsigned int *v55; // r2@83
  signed int v56; // r1@85
  unsigned int *v57; // r2@87
  signed int v58; // r1@89
  int v59; // [sp+4h] [bp-7Ch]@28
  char v60; // [sp+8h] [bp-78h]@20
  void *v61; // [sp+Ch] [bp-74h]@24
  void *v62; // [sp+18h] [bp-68h]@22
  void *ptr; // [sp+24h] [bp-5Ch]@20
  const void **v64; // [sp+30h] [bp-50h]@20
  const void **v65; // [sp+34h] [bp-4Ch]@26
  int v66; // [sp+3Ch] [bp-44h]@14
  char *v67; // [sp+40h] [bp-40h]@14
  char *v68; // [sp+44h] [bp-3Ch]@14
  void *s1; // [sp+48h] [bp-38h]@12
  int v70; // [sp+4Ch] [bp-34h]@9
  char *v71; // [sp+50h] [bp-30h]@9
  _BYTE **v72; // [sp+54h] [bp-2Ch]@1

  v18 = this;
  v19 = a1;
  v20 = (const void **)a4;
  v21 = ItemInstance::isEnchanted(this);
  v72 = (_BYTE **)&unk_28898CC;
  v22 = *(int **)(v19 + 56);
  if ( v22 )
    EntityInteraction::setInteractText((int *)&v72, v22);
  if ( ItemInstance::isEnchantingBook(v18) == 1 )
  {
    EntityInteraction::setInteractText((int *)&v72, (int *)&unk_2806E40);
  }
  else if ( v21 || ItemInstance::isMusicDiscItem(v18, v23) == 1 )
    EntityInteraction::setInteractText((int *)&v72, (int *)&unk_2806E34);
  else
    EntityInteraction::setInteractText((int *)&v72, (int *)&unk_2806E44);
  ItemInstance::getHoverName((ItemInstance *)&v70, (int)v18);
  v24 = sub_21E82D8((const void **)&v70, 0, (unsigned int)v72, *(v72 - 3));
  v71 = (char *)*v24;
  *v24 = &unk_28898CC;
  sub_21E72F0(v20, (const void **)&v71);
  v25 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    }
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v70 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  if ( a5 == 1 )
    ItemInstance::getCategoryName((ItemInstance *)&s1, (int *)v18);
    v27 = (char *)s1;
    v28 = *((_DWORD *)s1 - 3);
    if ( v28 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(s1, Util::EMPTY_STRING, v28) )
      sub_21E8AF4(&v66, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v66, (const void **)&dword_2806E2C);
      v29 = sub_21E72F0((const void **)&v66, (const void **)&s1);
      v67 = (char *)*v29;
      *v29 = &unk_28898CC;
      v30 = sub_21E72F0((const void **)&v67, (const void **)&unk_2806E54);
      v68 = (char *)*v30;
      *v30 = &unk_28898CC;
      sub_21E72F0(v20, (const void **)&v68);
      v31 = v68 - 12;
      if ( (int *)(v68 - 12) != &dword_28898C0 )
      {
        v53 = (unsigned int *)(v68 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
        }
        else
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      }
      v32 = v67 - 12;
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v67 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v33 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v66 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v27 = (char *)s1;
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
      else
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v27 - 12);
  if ( v21 == 1 )
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v60, (int)v18);
    ItemEnchants::getEnchantNames((ItemEnchants *)&v64, (int)&v60);
    if ( ptr )
      operator delete(ptr);
    if ( v62 )
      operator delete(v62);
    if ( v61 )
      operator delete(v61);
    sub_21E72F0(v20, (const void **)&unk_2806E24);
    v34 = v65;
    for ( i = v64; i != v34; ++i )
      sub_21E8AF4(&v59, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v59, i);
      sub_21E72F0(v20, (const void **)&v59);
      v38 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v59 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
    sub_21E72F0(v20, (const void **)&unk_2806E54);
    v40 = v65;
    v39 = v64;
    if ( v64 != v65 )
        v43 = (int *)((char *)*v39 - 12);
        if ( v43 != &dword_28898C0 )
          v41 = (unsigned int *)((char *)*v39 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
          }
          else
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        ++v39;
      while ( v39 != v40 );
      v39 = v64;
    if ( v39 )
      operator delete(v39);
  v44 = (char *)(v72 - 3);
  if ( (int *)(v72 - 3) != &dword_28898C0 )
    v49 = (unsigned int *)(v72 - 1);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
}


void __fastcall Item::hurtEnemy(Item *this, ItemInstance *a2, Mob *a3, Mob *a4)
{
  j_j_j__ZN12ItemInstance12hurtAndBreakEiP6Entity_0(a2, 2, a4);
}


void __fastcall Item::buildDescriptionName(Item *this, const ItemInstance *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 192))(&v6);
  I18n::get(v2, (int **)&v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


_DWORD *__fastcall Item::endCreativeGroup(Item *this)
{
  _DWORD *result; // r0@1

  result = &Item::mInCreativeGroup;
  LOBYTE(Item::mInCreativeGroup) = 0;
  return result;
}


signed int __fastcall Item::getDestroySpeed(Item *this, const ItemInstance *a2, const Block *a3)
{
  return 1065353216;
}


int __fastcall Item::isDye(Item *this)
{
  return 0;
}


signed int __fastcall Item::getEnchantValue(Item *this)
{
  int v1; // r2@1
  signed int result; // r0@1

  v1 = *((_WORD *)this + 9);
  result = 0;
  if ( v1 == *(_WORD *)(Item::mBook + 18) )
    result = 1;
  return result;
}


int __fastcall Item::getColor(int result, const ItemInstance *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1

  v2 = *(_QWORD *)&qword_283E614;
  v3 = unk_283E61C;
  *(_DWORD *)result = Color::WHITE;
  *(_QWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 12) = v3;
  return result;
}


int __fastcall Item::setMaxStackSize(int result, unsigned __int8 a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


void __fastcall Item::buildEffectDescriptionName(Item *this, const ItemInstance *a2, ItemInstance *a3)
{
  const void **v3; // r10@1
  ItemInstance *v4; // r5@1
  const void **v5; // r4@8
  const void **v6; // r5@8
  char v7; // r0@9
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  void *v10; // r0@20
  const void **v11; // r4@22
  const void **v12; // r6@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  int *v15; // r0@32
  int v16; // [sp+0h] [bp-60h]@10
  char v17; // [sp+4h] [bp-5Ch]@2
  void *v18; // [sp+8h] [bp-58h]@6
  void *v19; // [sp+14h] [bp-4Ch]@4
  void *ptr; // [sp+20h] [bp-40h]@2
  const void **v21; // [sp+2Ch] [bp-34h]@2
  const void **v22; // [sp+30h] [bp-30h]@8

  v3 = (const void **)this;
  v4 = a3;
  *(_DWORD *)this = &unk_28898CC;
  if ( ItemInstance::isEnchanted(a3) == 1 )
  {
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v17, (int)v4);
    ItemEnchants::getEnchantNames((ItemEnchants *)&v21, (int)&v17);
    if ( ptr )
      operator delete(ptr);
    if ( v19 )
      operator delete(v19);
    if ( v18 )
      operator delete(v18);
    v5 = v22;
    v6 = v21;
    if ( v21 != v22 )
    {
      v7 = 1;
      do
      {
        if ( !(v7 & 1) )
          sub_21E7408(v3, "\n", 1u);
        sub_21E8AF4(&v16, (int *)&unk_2806E24);
        sub_21E72F0((const void **)&v16, v6);
        sub_21E72F0(v3, (const void **)&v16);
        v10 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
        ++v6;
        v7 = 0;
      }
      while ( v6 != v5 );
    }
    sub_21E72F0(v3, (const void **)&unk_2806E54);
    v12 = v22;
    v11 = v21;
        v15 = (int *)((char *)*v11 - 12);
        if ( v15 != &dword_28898C0 )
          v13 = (unsigned int *)((char *)*v11 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        ++v11;
      while ( v11 != v12 );
      v11 = v21;
    if ( v11 )
      operator delete(v11);
  }
}


int __fastcall Item::setAllowOffhand(int result, bool a2)
{
  *(_BYTE *)(result + 42) = a2;
  return result;
}


int __fastcall Item::getIconYOffset(Item *this)
{
  return 0;
}


int __fastcall Item::uniqueAuxValues(Item *this)
{
  return 0;
}


int __fastcall Item::isComplex(Item *this)
{
  return 0;
}


ItemInstance *__fastcall Item::use(Item *this, ItemInstance *a2, Player *a3)
{
  Item *v3; // r6@1
  Player *v4; // r5@1
  FoodItemComponent *v5; // r0@1
  ItemInstance *v6; // r4@1
  CameraItemComponent *v7; // r0@3
  int v8; // r2@5
  BoostableComponent *v9; // r0@7

  v3 = this;
  v4 = a3;
  v5 = (FoodItemComponent *)*((_DWORD *)this + 25);
  v6 = a2;
  if ( v5 )
    FoodItemComponent::use(v5, a2, a3);
  v7 = (CameraItemComponent *)*((_DWORD *)v3 + 27);
  if ( v7 )
    CameraItemComponent::use(v7, v6, v4);
  if ( Entity::isRiding(v4) == 1 && Entity::getBoostableComponent(*((Entity **)v4 + 128)) )
  {
    v9 = (BoostableComponent *)Entity::getBoostableComponent(*((Entity **)v4 + 128));
    BoostableComponent::onItemInteract(v9, v6, v4);
  }
  ItemInstance::startCoolDown(v6, v4, v8);
  return v6;
}


void __fastcall Item::buildDescriptionName(Item *this, const ItemInstance *a2)
{
  Item::buildDescriptionName(this, a2);
}


int __fastcall Item::writeUserData(Item *this, const ItemInstance *a2, IDataOutput *a3)
{
  ItemInstance *v3; // r5@1
  IDataOutput *v4; // r4@1
  int v5; // r6@2
  void *v6; // r0@3
  int v7; // r2@4
  char *v8; // r0@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  void **v14; // [sp+4h] [bp-24h]@2
  int *v15; // [sp+8h] [bp-20h]@2
  _WORD *v16; // [sp+Ch] [bp-1Ch]@2
  int v17; // [sp+10h] [bp-18h]@3

  v3 = a2;
  v4 = a3;
  if ( *(_DWORD *)ItemInstance::getUserData(a2) )
  {
    v16 = &unk_28898CC;
    v14 = &off_26E91F0;
    v15 = (int *)&v16;
    v5 = *(_DWORD *)ItemInstance::getUserData(v3);
    if ( v5 )
    {
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v5 + 44))(&v17, v5);
      Tag::writeNamedTag((int)&v17, v5, (int)&v14);
      v6 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
    }
    (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v4 + 28))(v4, *(v16 - 6));
    v7 = *((_DWORD *)v16 - 3);
    (*(void (__fastcall **)(IDataOutput *))(*(_DWORD *)v4 + 40))(v4);
    v8 = (char *)(v16 - 6);
    if ( (int *)(v16 - 6) != &dword_28898C0 )
      v9 = (unsigned int *)(v16 - 2);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  else
    (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v4 + 28))(v4, 0);
  return ItemInstance::serializeComponents(v3, v4);
}


int __fastcall Item::getIcon(Item *this, int a2, int a3, bool a4)
{
  int v4; // r2@1
  int result; // r0@2
  int v6; // r0@3
  int v7; // r2@5

  v4 = *((_DWORD *)this + 16);
  if ( v4 )
  {
    v6 = a2;
    if ( a2 <= 0 )
      v6 = 0;
    v7 = *(_DWORD *)(v4 + 8);
    if ( a2 > 15 )
      v6 = 15;
    result = *(_DWORD *)(v7 + 12 * v6);
  }
  else
    result = *((_DWORD *)this + 15);
  return result;
}


int __fastcall Item::getCooldownTime(Item *this)
{
  return 0;
}


signed int __fastcall Item::_textMatch(const void **a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void *v4; // r2@1
  const void **v5; // r4@1
  size_t v6; // r3@1
  char *v7; // r6@2
  _DWORD *v8; // r1@2
  signed int v9; // r4@2
  size_t v10; // r2@2
  char *v11; // r5@2
  unsigned int *v12; // r1@6
  signed int v13; // r0@8
  _DWORD *v14; // r1@10
  void *s1; // [sp+0h] [bp-18h]@2

  v3 = a3;
  v4 = *a1;
  v5 = a2;
  v6 = *((_DWORD *)*a1 - 3);
  if ( v3 == 1 )
  {
    Util::toLower(&s1, v6, (unsigned int)v4);
    v7 = (char *)s1;
    v8 = *v5;
    v9 = 0;
    v11 = (char *)s1 - 12;
    v10 = *((_DWORD *)s1 - 3);
    if ( v10 == *(v8 - 3) && !memcmp(s1, v8, v10) )
      v9 = 1;
    if ( (int *)v11 != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
  }
  else
    v14 = *a2;
    if ( v6 == *(v14 - 3) && !memcmp(v4, v14, v6) )
  return v9;
}


signed int __fastcall Item::isGlint(Item *this, const ItemInstance *a2)
{
  Item *v2; // r4@1
  signed int result; // r0@2

  v2 = this;
  if ( ItemInstance::isEnchanted(a2) )
  {
    result = 1;
  }
  else
    result = *((_BYTE *)v2 + 32);
    if ( *((_BYTE *)v2 + 32) )
      result = 1;
  return result;
}


int __fastcall Item::isTintable(Item *this)
{
  return 0;
}


int __fastcall Item::setRequiresWorldBuilder(int result, bool a2)
{
  *(_BYTE *)(result + 35) = a2 | *(_BYTE *)(result + 35) & 0xFE;
  return result;
}


int __fastcall Item::isEmissive(Item *this, int a2)
{
  return 0;
}


Json::Value *__fastcall Item::initClientData(Item *this)
{
  int v1; // r4@1
  void (__fastcall *v2)(int, int *, signed int); // r5@1
  void *v3; // r0@1
  int v4; // r4@2
  void (__fastcall *v5)(int, int *, signed int); // r5@2
  void *v6; // r0@2
  int v7; // r4@3
  void (__fastcall *v8)(int, int *, signed int); // r5@3
  void *v9; // r0@3
  int v10; // r4@4
  void (__fastcall *v11)(int, int *, _DWORD); // r5@4
  void *v12; // r0@4
  int v13; // r4@5
  void (__fastcall *v14)(int, int *, _DWORD); // r5@5
  void *v15; // r0@5
  int v16; // r4@6
  void (__fastcall *v17)(int, int *, _DWORD); // r5@6
  void *v18; // r0@6
  int v19; // r4@7
  void (__fastcall *v20)(int, int *, _DWORD); // r5@7
  void *v21; // r0@7
  int v22; // r4@8
  void (__fastcall *v23)(int, int *, _DWORD); // r5@8
  void *v24; // r0@8
  int v25; // r4@9
  void (__fastcall *v26)(int, int *, _DWORD); // r5@9
  void *v27; // r0@9
  int v28; // r4@10
  void (__fastcall *v29)(int, int *, _DWORD); // r5@10
  void *v30; // r0@10
  int v31; // r4@11
  void (__fastcall *v32)(int, int *, signed int); // r5@11
  void *v33; // r0@11
  int v34; // r4@12
  void (__fastcall *v35)(int, int *, _DWORD); // r5@12
  void *v36; // r0@12
  int v37; // r4@13
  void (__fastcall *v38)(int, int *, _DWORD); // r5@13
  void *v39; // r0@13
  int v40; // r4@14
  void (__fastcall *v41)(int, int *, _DWORD); // r5@14
  void *v42; // r0@14
  int v43; // r4@15
  void (__fastcall *v44)(int, int *, _DWORD); // r5@15
  void *v45; // r0@15
  int v46; // r4@16
  void (__fastcall *v47)(int, int *, signed int); // r5@16
  void *v48; // r0@16
  int v49; // r4@17
  void (__fastcall *v50)(int, int *, signed int); // r5@17
  void *v51; // r0@17
  int v52; // r4@18
  void (__fastcall *v53)(int, int *, signed int); // r5@18
  void *v54; // r0@18
  int v55; // r4@19
  void (__fastcall *v56)(int, int *, signed int); // r5@19
  void *v57; // r0@19
  int v58; // r4@20
  void (__fastcall *v59)(int, int *, signed int); // r5@20
  void *v60; // r0@20
  int v61; // r4@21
  void (__fastcall *v62)(int, int *, signed int); // r5@21
  void *v63; // r0@21
  int v64; // r4@22
  void (__fastcall *v65)(int, int *, signed int); // r5@22
  void *v66; // r0@22
  int v67; // r4@23
  void (__fastcall *v68)(int, int *, signed int); // r5@23
  void *v69; // r0@23
  int v70; // r4@24
  void (__fastcall *v71)(int, int *, _DWORD); // r5@24
  void *v72; // r0@24
  int v73; // r4@25
  void (__fastcall *v74)(int, int *, _DWORD); // r5@25
  void *v75; // r0@25
  int v76; // r4@26
  void (__fastcall *v77)(int, int *, signed int); // r5@26
  void *v78; // r0@26
  int v79; // r4@27
  void (__fastcall *v80)(int, int *, signed int); // r5@27
  void *v81; // r0@27
  int v82; // r4@28
  void (__fastcall *v83)(int, int *, signed int); // r5@28
  void *v84; // r0@28
  int v85; // r4@29
  void (__fastcall *v86)(int, int *, signed int); // r5@29
  void *v87; // r0@29
  int v88; // r4@30
  void (__fastcall *v89)(int, int *, _DWORD); // r5@30
  void *v90; // r0@30
  int v91; // r4@31
  void (__fastcall *v92)(int, int *, _DWORD); // r5@31
  void *v93; // r0@31
  int v94; // r4@32
  void (__fastcall *v95)(int, int *, _DWORD); // r5@32
  void *v96; // r0@32
  int v97; // r4@33
  void (__fastcall *v98)(int, int *, _DWORD); // r5@33
  void *v99; // r0@33
  int v100; // r4@34
  void (__fastcall *v101)(int, int *, signed int); // r5@34
  void *v102; // r0@34
  int v103; // r4@35
  void (__fastcall *v104)(int, int *, signed int); // r5@35
  void *v105; // r0@35
  int v106; // r4@36
  void (__fastcall *v107)(int, int *, signed int); // r5@36
  void *v108; // r0@36
  int v109; // r4@37
  void (__fastcall *v110)(int, int *, signed int); // r5@37
  void *v111; // r0@37
  int v112; // r4@38
  void (__fastcall *v113)(int, int *, _DWORD); // r5@38
  void *v114; // r0@38
  int v115; // r4@39
  void (__fastcall *v116)(int, int *, _DWORD); // r5@39
  void *v117; // r0@39
  int v118; // r4@40
  void (__fastcall *v119)(int, int *, _DWORD); // r5@40
  void *v120; // r0@40
  int v121; // r4@41
  void (__fastcall *v122)(int, int *, _DWORD); // r5@41
  void *v123; // r0@41
  int v124; // r4@42
  void (__fastcall *v125)(int, int *, _DWORD); // r5@42
  void *v126; // r0@42
  int v127; // r4@43
  void (__fastcall *v128)(int, int *, signed int); // r5@43
  void *v129; // r0@43
  int v130; // r4@44
  void (__fastcall *v131)(int, int *, signed int); // r5@44
  void *v132; // r0@44
  int v133; // r4@45
  void (__fastcall *v134)(int, int *, signed int); // r5@45
  void *v135; // r0@45
  int v136; // r4@46
  void (__fastcall *v137)(int, int *, signed int); // r5@46
  void *v138; // r0@46
  int v139; // r4@47
  void (__fastcall *v140)(int, int *, signed int); // r5@47
  void *v141; // r0@47
  int v142; // r4@48
  void (__fastcall *v143)(int, int *, signed int); // r5@48
  void *v144; // r0@48
  int v145; // r4@49
  void (__fastcall *v146)(int, int *, signed int); // r5@49
  void *v147; // r0@49
  int v148; // r4@50
  void (__fastcall *v149)(int, int *, signed int); // r5@50
  void *v150; // r0@50
  int v151; // r4@51
  void (__fastcall *v152)(int, int *, signed int); // r5@51
  void *v153; // r0@51
  int v154; // r4@52
  void (__fastcall *v155)(int, int *, signed int); // r5@52
  void *v156; // r0@52
  int v157; // r4@53
  void (__fastcall *v158)(int, int *, signed int); // r5@53
  void *v159; // r0@53
  int v160; // r4@54
  void (__fastcall *v161)(int, int *, signed int); // r5@54
  void *v162; // r0@54
  int v163; // r4@55
  void (__fastcall *v164)(int, int *, signed int); // r5@55
  void *v165; // r0@55
  int v166; // r4@56
  void (__fastcall *v167)(int, int *, signed int); // r5@56
  void *v168; // r0@56
  int v169; // r4@57
  void (__fastcall *v170)(int, int *, signed int); // r5@57
  void *v171; // r0@57
  int v172; // r4@58
  void (__fastcall *v173)(int, int *, signed int); // r5@58
  void *v174; // r0@58
  int v175; // r4@59
  void (__fastcall *v176)(int, int *, _DWORD); // r5@59
  void *v177; // r0@59
  int v178; // r4@60
  void (__fastcall *v179)(int, int *, _DWORD); // r5@60
  void *v180; // r0@60
  int v181; // r4@61
  void (__fastcall *v182)(int, int *, _DWORD); // r5@61
  void *v183; // r0@61
  int v184; // r4@62
  void (__fastcall *v185)(int, int *, _DWORD); // r5@62
  void *v186; // r0@62
  int v187; // r4@63
  void (__fastcall *v188)(int, int *, _DWORD); // r5@63
  void *v189; // r0@63
  int v190; // r4@64
  void (__fastcall *v191)(int, int *, _DWORD); // r5@64
  void *v192; // r0@64
  int v193; // r4@65
  void (__fastcall *v194)(int, int *, _DWORD); // r5@65
  void *v195; // r0@65
  int v196; // r4@66
  void (__fastcall *v197)(int, int *, _DWORD); // r5@66
  void *v198; // r0@66
  int v199; // r4@67
  void (__fastcall *v200)(int, int *, _DWORD); // r5@67
  void *v201; // r0@67
  int v202; // r4@68
  void (__fastcall *v203)(int, int *, _DWORD); // r5@68
  void *v204; // r0@68
  int v205; // r4@69
  void (__fastcall *v206)(int, int *, _DWORD); // r5@69
  void *v207; // r0@69
  int v208; // r4@70
  void (__fastcall *v209)(int, int *, _DWORD); // r5@70
  void *v210; // r0@70
  int v211; // r4@71
  void (__fastcall *v212)(int, int *, _DWORD); // r5@71
  void *v213; // r0@71
  int v214; // r4@72
  void (__fastcall *v215)(int, int *, _DWORD); // r5@72
  void *v216; // r0@72
  int v217; // r4@73
  void (__fastcall *v218)(int, int *, _DWORD); // r5@73
  void *v219; // r0@73
  int v220; // r4@74
  void (__fastcall *v221)(int, int *, _DWORD); // r5@74
  void *v222; // r0@74
  int v223; // r4@75
  void (__fastcall *v224)(int, int *, _DWORD); // r5@75
  void *v225; // r0@75
  int v226; // r4@76
  void (__fastcall *v227)(int, int *, _DWORD); // r5@76
  void *v228; // r0@76
  int v229; // r4@77
  void (__fastcall *v230)(int, int *, _DWORD); // r5@77
  void *v231; // r0@77
  int v232; // r4@78
  void (__fastcall *v233)(int, int *, _DWORD); // r5@78
  void *v234; // r0@78
  int v235; // r4@79
  void (__fastcall *v236)(int, int *, _DWORD); // r5@79
  void *v237; // r0@79
  int v238; // r4@80
  void (__fastcall *v239)(int, int *, _DWORD); // r5@80
  void *v240; // r0@80
  int v241; // r4@81
  void (__fastcall *v242)(int, int *, _DWORD); // r5@81
  void *v243; // r0@81
  int v244; // r4@82
  void (__fastcall *v245)(int, int *, _DWORD); // r5@82
  void *v246; // r0@82
  int v247; // r4@83
  void (__fastcall *v248)(int, int *, _DWORD); // r5@83
  void *v249; // r0@83
  int v250; // r4@84
  void (__fastcall *v251)(int, int *, _DWORD); // r5@84
  void *v252; // r0@84
  int v253; // r4@85
  void (__fastcall *v254)(int, int *, _DWORD); // r5@85
  void *v255; // r0@85
  int v256; // r4@86
  void (__fastcall *v257)(int, int *, _DWORD); // r5@86
  void *v258; // r0@86
  int v259; // r4@87
  int (__fastcall *v260)(int, int *, _DWORD); // r5@87
  int v261; // r0@87
  void *v262; // r0@87
  int v263; // r4@88
  void (__fastcall *v264)(int, int *, _DWORD); // r5@88
  void *v265; // r0@88
  int v266; // r4@89
  void (__fastcall *v267)(int, int *, _DWORD); // r5@89
  void *v268; // r0@89
  int v269; // r4@90
  void (__fastcall *v270)(int, int *, _DWORD); // r5@90
  void *v271; // r0@90
  int v272; // r4@91
  void (__fastcall *v273)(int, int *, _DWORD); // r5@91
  void *v274; // r0@91
  int v275; // r4@92
  void (__fastcall *v276)(int, int *, _DWORD); // r5@92
  void *v277; // r0@92
  int v278; // r4@93
  void (__fastcall *v279)(int, int *, _DWORD); // r5@93
  void *v280; // r0@93
  int v281; // r4@94
  void (__fastcall *v282)(int, int *, _DWORD); // r5@94
  void *v283; // r0@94
  int v284; // r4@95
  void (__fastcall *v285)(int, int *, _DWORD); // r5@95
  void *v286; // r0@95
  int v287; // r4@96
  void (__fastcall *v288)(int, int *, _DWORD); // r5@96
  void *v289; // r0@96
  int v290; // r4@97
  void (__fastcall *v291)(int, int *, _DWORD); // r5@97
  void *v292; // r0@97
  int v293; // r4@98
  void (__fastcall *v294)(int, int *, _DWORD); // r5@98
  void *v295; // r0@98
  int v296; // r4@99
  void (__fastcall *v297)(int, int *, _DWORD); // r5@99
  void *v298; // r0@99
  int v299; // r4@100
  void (__fastcall *v300)(int, int *, _DWORD); // r5@100
  void *v301; // r0@100
  int v302; // r4@101
  void (__fastcall *v303)(int, int *, _DWORD); // r5@101
  void *v304; // r0@101
  int v305; // r4@102
  void (__fastcall *v306)(int, int *, _DWORD); // r5@102
  void *v307; // r0@102
  int v308; // r4@103
  void (__fastcall *v309)(int, int *, _DWORD); // r5@103
  void *v310; // r0@103
  int v311; // r4@104
  void (__fastcall *v312)(int, int *, _DWORD); // r5@104
  void *v313; // r0@104
  int v314; // r4@105
  void (__fastcall *v315)(int, int *, _DWORD); // r5@105
  void *v316; // r0@105
  int v317; // r4@106
  void (__fastcall *v318)(int, int *, _DWORD); // r5@106
  void *v319; // r0@106
  int v320; // r4@107
  void (__fastcall *v321)(int, int *, _DWORD); // r5@107
  void *v322; // r0@107
  int v323; // r4@108
  void (__fastcall *v324)(int, int *, _DWORD); // r5@108
  void *v325; // r0@108
  int v326; // r4@109
  void (__fastcall *v327)(int, int *, _DWORD); // r5@109
  void *v328; // r0@109
  int v329; // r4@110
  void (__fastcall *v330)(int, int *, _DWORD); // r5@110
  void *v331; // r0@110
  int v332; // r4@111
  void (__fastcall *v333)(int, int *, _DWORD); // r5@111
  void *v334; // r0@111
  int v335; // r4@112
  void (__fastcall *v336)(int, int *, _DWORD); // r5@112
  void *v337; // r0@112
  int v338; // r4@113
  void (__fastcall *v339)(int, int *, _DWORD); // r5@113
  void *v340; // r0@113
  int v341; // r4@114
  void (__fastcall *v342)(int, int *, _DWORD); // r5@114
  void *v343; // r0@114
  int v344; // r4@115
  void (__fastcall *v345)(int, int *, _DWORD); // r5@115
  void *v346; // r0@115
  int v347; // r4@116
  void (__fastcall *v348)(int, int *, _DWORD); // r5@116
  void *v349; // r0@116
  int v350; // r4@117
  int (__fastcall *v351)(int, int *, _DWORD); // r5@117
  int v352; // r0@117
  int v353; // r0@117
  int v354; // r0@117
  void *v355; // r0@117
  int v356; // r4@118
  void (__fastcall *v357)(int, int *, _DWORD); // r5@118
  void *v358; // r0@118
  int v359; // r4@119
  void (__fastcall *v360)(int, int *, _DWORD); // r5@119
  void *v361; // r0@119
  int v362; // r4@120
  void (__fastcall *v363)(int, int *, _DWORD); // r5@120
  void *v364; // r0@120
  int v365; // r4@121
  void (__fastcall *v366)(int, int *, _DWORD); // r5@121
  void *v367; // r0@121
  int v368; // r4@122
  void (__fastcall *v369)(int, int *, _DWORD); // r5@122
  void *v370; // r0@122
  int v371; // r4@123
  void (__fastcall *v372)(int, int *, _DWORD); // r5@123
  void *v373; // r0@123
  int v374; // r4@124
  void (__fastcall *v375)(int, int *, _DWORD); // r5@124
  void *v376; // r0@124
  int v377; // r4@125
  void (__fastcall *v378)(int, int *, _DWORD); // r5@125
  void *v379; // r0@125
  int v380; // r4@126
  void (__fastcall *v381)(int, int *, _DWORD); // r5@126
  void *v382; // r0@126
  int v383; // r4@127
  void (__fastcall *v384)(int, int *, _DWORD); // r5@127
  void *v385; // r0@127
  int v386; // r4@128
  void (__fastcall *v387)(int, int *, _DWORD); // r5@128
  void *v388; // r0@128
  int v389; // r4@129
  void (__fastcall *v390)(int, int *, _DWORD); // r5@129
  void *v391; // r0@129
  int v392; // r4@130
  void (__fastcall *v393)(int, int *, _DWORD); // r5@130
  void *v394; // r0@130
  int v395; // r4@131
  void (__fastcall *v396)(int, int *, _DWORD); // r5@131
  void *v397; // r0@131
  int v398; // r4@132
  void (__fastcall *v399)(int, int *, _DWORD); // r5@132
  void *v400; // r0@132
  int v401; // r4@133
  void (__fastcall *v402)(int, int *, _DWORD); // r5@133
  void *v403; // r0@133
  int v404; // r4@134
  void (__fastcall *v405)(int, int *, _DWORD); // r5@134
  void *v406; // r0@134
  int v407; // r4@135
  void (__fastcall *v408)(int, int *, _DWORD); // r5@135
  void *v409; // r0@135
  int v410; // r4@136
  void (__fastcall *v411)(int, int *, _DWORD); // r5@136
  void *v412; // r0@136
  int v413; // r4@137
  void (__fastcall *v414)(int, int *, _DWORD); // r5@137
  void *v415; // r0@137
  int v416; // r4@138
  void (__fastcall *v417)(int, int *, _DWORD); // r5@138
  void *v418; // r0@138
  int v419; // r4@139
  void (__fastcall *v420)(int, int *, _DWORD); // r5@139
  void *v421; // r0@139
  int v422; // r4@140
  void (__fastcall *v423)(int, int *, _DWORD); // r5@140
  void *v424; // r0@140
  int v425; // r4@141
  void (__fastcall *v426)(int, int *, _DWORD); // r5@141
  void *v427; // r0@141
  int v428; // r4@142
  void (__fastcall *v429)(int, int *, _DWORD); // r5@142
  void *v430; // r0@142
  int v431; // r4@143
  void (__fastcall *v432)(int, int *, _DWORD); // r5@143
  void *v433; // r0@143
  int v434; // r4@144
  void (__fastcall *v435)(int, int *, _DWORD); // r5@144
  void *v436; // r0@144
  int v437; // r4@145
  void (__fastcall *v438)(int, int *, _DWORD); // r5@145
  void *v439; // r0@145
  int v440; // r4@146
  void (__fastcall *v441)(int, int *, _DWORD); // r5@146
  void *v442; // r0@146
  int v443; // r4@147
  void (__fastcall *v444)(int, int *, _DWORD); // r5@147
  void *v445; // r0@147
  int v446; // r4@148
  void (__fastcall *v447)(int, int *, _DWORD); // r5@148
  void *v448; // r0@148
  int v449; // r4@149
  void (__fastcall *v450)(int, int *, _DWORD); // r5@149
  void *v451; // r0@149
  int v452; // r4@150
  void (__fastcall *v453)(int, int *, _DWORD); // r5@150
  void *v454; // r0@150
  int v455; // r4@151
  void (__fastcall *v456)(int, int *, _DWORD); // r5@151
  void *v457; // r0@151
  int v458; // r4@152
  void (__fastcall *v459)(int, int *, _DWORD); // r5@152
  void *v460; // r0@152
  int v461; // r4@153
  void (__fastcall *v462)(int, int *, _DWORD); // r5@153
  void *v463; // r0@153
  int v464; // r4@154
  void (__fastcall *v465)(int, int *, _DWORD); // r5@154
  void *v466; // r0@154
  int v467; // r4@155
  void (__fastcall *v468)(int, int *, _DWORD); // r5@155
  void *v469; // r0@155
  int v470; // r4@156
  void (__fastcall *v471)(int, int *, _DWORD); // r5@156
  void *v472; // r0@156
  int v473; // r4@157
  void (__fastcall *v474)(int, int *, _DWORD); // r5@157
  void *v475; // r0@157
  int v476; // r4@158
  void (__fastcall *v477)(int, int *, _DWORD); // r5@158
  void *v478; // r0@158
  int v479; // r4@159
  void (__fastcall *v480)(int, int *, _DWORD); // r5@159
  void *v481; // r0@159
  int v482; // r4@160
  void (__fastcall *v483)(int, int *, _DWORD); // r5@160
  void *v484; // r0@160
  int v485; // r4@161
  void (__fastcall *v486)(int, int *, _DWORD); // r5@161
  void *v487; // r0@161
  int v488; // r4@162
  void (__fastcall *v489)(int, int *, _DWORD); // r5@162
  void *v490; // r0@162
  int v491; // r4@163
  void (__fastcall *v492)(int, int *, _DWORD); // r5@163
  void *v493; // r0@163
  void *v494; // r0@164
  int v495; // r4@165
  char *v496; // r0@165
  char *v497; // r0@166
  const Json::Value *v498; // r0@169
  void *v499; // r0@169
  int v500; // r4@171
  char *v501; // r0@171
  char *v502; // r0@172
  const Json::Value *v503; // r0@175
  signed int v504; // r4@175
  int v505; // r7@176
  const Json::Value *v506; // r0@177
  char *v507; // r0@184
  unsigned int *v509; // r2@186
  signed int v510; // r1@188
  unsigned int *v511; // r2@190
  signed int v512; // r1@192
  unsigned int *v513; // r2@194
  signed int v514; // r1@196
  unsigned int *v515; // r2@198
  signed int v516; // r1@200
  unsigned int *v517; // r2@202
  signed int v518; // r1@204
  unsigned int *v519; // r2@206
  signed int v520; // r1@208
  unsigned int *v521; // r2@210
  signed int v522; // r1@212
  unsigned int *v523; // r2@214
  signed int v524; // r1@216
  unsigned int *v525; // r2@218
  signed int v526; // r1@220
  unsigned int *v527; // r2@222
  signed int v528; // r1@224
  unsigned int *v529; // r2@226
  signed int v530; // r1@228
  unsigned int *v531; // r2@230
  signed int v532; // r1@232
  unsigned int *v533; // r2@234
  signed int v534; // r1@236
  unsigned int *v535; // r2@238
  signed int v536; // r1@240
  unsigned int *v537; // r2@242
  signed int v538; // r1@244
  unsigned int *v539; // r2@246
  signed int v540; // r1@248
  unsigned int *v541; // r2@250
  signed int v542; // r1@252
  unsigned int *v543; // r2@254
  signed int v544; // r1@256
  unsigned int *v545; // r2@258
  signed int v546; // r1@260
  unsigned int *v547; // r2@262
  signed int v548; // r1@264
  unsigned int *v549; // r2@266
  signed int v550; // r1@268
  unsigned int *v551; // r2@270
  signed int v552; // r1@272
  unsigned int *v553; // r2@274
  signed int v554; // r1@276
  unsigned int *v555; // r2@278
  signed int v556; // r1@280
  unsigned int *v557; // r2@282
  signed int v558; // r1@284
  unsigned int *v559; // r2@286
  signed int v560; // r1@288
  unsigned int *v561; // r2@290
  signed int v562; // r1@292
  unsigned int *v563; // r2@294
  signed int v564; // r1@296
  unsigned int *v565; // r2@298
  signed int v566; // r1@300
  unsigned int *v567; // r2@302
  signed int v568; // r1@304
  unsigned int *v569; // r2@306
  signed int v570; // r1@308
  unsigned int *v571; // r2@310
  signed int v572; // r1@312
  unsigned int *v573; // r2@314
  signed int v574; // r1@316
  unsigned int *v575; // r2@318
  signed int v576; // r1@320
  unsigned int *v577; // r2@322
  signed int v578; // r1@324
  unsigned int *v579; // r2@326
  signed int v580; // r1@328
  unsigned int *v581; // r2@330
  signed int v582; // r1@332
  unsigned int *v583; // r2@334
  signed int v584; // r1@336
  unsigned int *v585; // r2@338
  signed int v586; // r1@340
  unsigned int *v587; // r2@342
  signed int v588; // r1@344
  unsigned int *v589; // r2@346
  signed int v590; // r1@348
  unsigned int *v591; // r2@350
  signed int v592; // r1@352
  unsigned int *v593; // r2@354
  signed int v594; // r1@356
  unsigned int *v595; // r2@358
  signed int v596; // r1@360
  unsigned int *v597; // r2@362
  signed int v598; // r1@364
  unsigned int *v599; // r2@366
  signed int v600; // r1@368
  unsigned int *v601; // r2@370
  signed int v602; // r1@372
  unsigned int *v603; // r2@374
  signed int v604; // r1@376
  unsigned int *v605; // r2@378
  signed int v606; // r1@380
  unsigned int *v607; // r2@382
  signed int v608; // r1@384
  unsigned int *v609; // r2@386
  signed int v610; // r1@388
  unsigned int *v611; // r2@390
  signed int v612; // r1@392
  unsigned int *v613; // r2@394
  signed int v614; // r1@396
  unsigned int *v615; // r2@398
  signed int v616; // r1@400
  unsigned int *v617; // r2@402
  signed int v618; // r1@404
  unsigned int *v619; // r2@406
  signed int v620; // r1@408
  unsigned int *v621; // r2@410
  signed int v622; // r1@412
  unsigned int *v623; // r2@414
  signed int v624; // r1@416
  unsigned int *v625; // r2@418
  signed int v626; // r1@420
  unsigned int *v627; // r2@422
  signed int v628; // r1@424
  unsigned int *v629; // r2@426
  signed int v630; // r1@428
  unsigned int *v631; // r2@430
  signed int v632; // r1@432
  unsigned int *v633; // r2@434
  signed int v634; // r1@436
  unsigned int *v635; // r2@438
  signed int v636; // r1@440
  unsigned int *v637; // r2@442
  signed int v638; // r1@444
  unsigned int *v639; // r2@446
  signed int v640; // r1@448
  unsigned int *v641; // r2@450
  signed int v642; // r1@452
  unsigned int *v643; // r2@454
  signed int v644; // r1@456
  unsigned int *v645; // r2@458
  signed int v646; // r1@460
  unsigned int *v647; // r2@462
  signed int v648; // r1@464
  unsigned int *v649; // r2@466
  signed int v650; // r1@468
  unsigned int *v651; // r2@470
  signed int v652; // r1@472
  unsigned int *v653; // r2@474
  signed int v654; // r1@476
  unsigned int *v655; // r2@478
  signed int v656; // r1@480
  unsigned int *v657; // r2@482
  signed int v658; // r1@484
  unsigned int *v659; // r2@486
  signed int v660; // r1@488
  unsigned int *v661; // r2@490
  signed int v662; // r1@492
  unsigned int *v663; // r2@494
  signed int v664; // r1@496
  unsigned int *v665; // r2@498
  signed int v666; // r1@500
  unsigned int *v667; // r2@502
  signed int v668; // r1@504
  unsigned int *v669; // r2@506
  signed int v670; // r1@508
  unsigned int *v671; // r2@510
  signed int v672; // r1@512
  unsigned int *v673; // r2@514
  signed int v674; // r1@516
  unsigned int *v675; // r2@518
  signed int v676; // r1@520
  unsigned int *v677; // r2@522
  signed int v678; // r1@524
  unsigned int *v679; // r2@526
  signed int v680; // r1@528
  unsigned int *v681; // r2@530
  signed int v682; // r1@532
  unsigned int *v683; // r2@534
  signed int v684; // r1@536
  unsigned int *v685; // r2@538
  signed int v686; // r1@540
  unsigned int *v687; // r2@542
  signed int v688; // r1@544
  unsigned int *v689; // r2@546
  signed int v690; // r1@548
  unsigned int *v691; // r2@550
  signed int v692; // r1@552
  unsigned int *v693; // r2@554
  signed int v694; // r1@556
  unsigned int *v695; // r2@558
  signed int v696; // r1@560
  unsigned int *v697; // r2@562
  signed int v698; // r1@564
  unsigned int *v699; // r2@566
  signed int v700; // r1@568
  unsigned int *v701; // r2@570
  signed int v702; // r1@572
  unsigned int *v703; // r2@574
  signed int v704; // r1@576
  unsigned int *v705; // r2@578
  signed int v706; // r1@580
  unsigned int *v707; // r2@582
  signed int v708; // r1@584
  unsigned int *v709; // r2@586
  signed int v710; // r1@588
  unsigned int *v711; // r2@590
  signed int v712; // r1@592
  unsigned int *v713; // r2@594
  signed int v714; // r1@596
  unsigned int *v715; // r2@598
  signed int v716; // r1@600
  unsigned int *v717; // r2@602
  signed int v718; // r1@604
  unsigned int *v719; // r2@606
  signed int v720; // r1@608
  unsigned int *v721; // r2@610
  signed int v722; // r1@612
  unsigned int *v723; // r2@614
  signed int v724; // r1@616
  unsigned int *v725; // r2@618
  signed int v726; // r1@620
  unsigned int *v727; // r2@622
  signed int v728; // r1@624
  unsigned int *v729; // r2@626
  signed int v730; // r1@628
  unsigned int *v731; // r2@630
  signed int v732; // r1@632
  unsigned int *v733; // r2@634
  signed int v734; // r1@636
  unsigned int *v735; // r2@638
  signed int v736; // r1@640
  unsigned int *v737; // r2@642
  signed int v738; // r1@644
  unsigned int *v739; // r2@646
  signed int v740; // r1@648
  unsigned int *v741; // r2@650
  signed int v742; // r1@652
  unsigned int *v743; // r2@654
  signed int v744; // r1@656
  unsigned int *v745; // r2@658
  signed int v746; // r1@660
  unsigned int *v747; // r2@662
  signed int v748; // r1@664
  unsigned int *v749; // r2@666
  signed int v750; // r1@668
  unsigned int *v751; // r2@670
  signed int v752; // r1@672
  unsigned int *v753; // r2@674
  signed int v754; // r1@676
  unsigned int *v755; // r2@678
  signed int v756; // r1@680
  unsigned int *v757; // r2@682
  signed int v758; // r1@684
  unsigned int *v759; // r2@686
  signed int v760; // r1@688
  unsigned int *v761; // r2@690
  signed int v762; // r1@692
  unsigned int *v763; // r2@694
  signed int v764; // r1@696
  unsigned int *v765; // r2@698
  signed int v766; // r1@700
  unsigned int *v767; // r2@702
  signed int v768; // r1@704
  unsigned int *v769; // r2@706
  signed int v770; // r1@708
  unsigned int *v771; // r2@710
  signed int v772; // r1@712
  unsigned int *v773; // r2@714
  signed int v774; // r1@716
  unsigned int *v775; // r2@718
  signed int v776; // r1@720
  unsigned int *v777; // r2@722
  signed int v778; // r1@724
  unsigned int *v779; // r2@726
  signed int v780; // r1@728
  unsigned int *v781; // r2@730
  signed int v782; // r1@732
  unsigned int *v783; // r2@734
  signed int v784; // r1@736
  unsigned int *v785; // r2@738
  signed int v786; // r1@740
  unsigned int *v787; // r2@742
  signed int v788; // r1@744
  unsigned int *v789; // r2@746
  signed int v790; // r1@748
  unsigned int *v791; // r2@750
  signed int v792; // r1@752
  unsigned int *v793; // r2@754
  signed int v794; // r1@756
  unsigned int *v795; // r2@758
  signed int v796; // r1@760
  unsigned int *v797; // r2@762
  signed int v798; // r1@764
  unsigned int *v799; // r2@766
  signed int v800; // r1@768
  unsigned int *v801; // r2@770
  signed int v802; // r1@772
  unsigned int *v803; // r2@774
  signed int v804; // r1@776
  unsigned int *v805; // r2@778
  signed int v806; // r1@780
  unsigned int *v807; // r2@782
  signed int v808; // r1@784
  unsigned int *v809; // r2@786
  signed int v810; // r1@788
  unsigned int *v811; // r2@790
  signed int v812; // r1@792
  unsigned int *v813; // r2@794
  signed int v814; // r1@796
  unsigned int *v815; // r2@798
  signed int v816; // r1@800
  unsigned int *v817; // r2@802
  signed int v818; // r1@804
  unsigned int *v819; // r2@806
  signed int v820; // r1@808
  unsigned int *v821; // r2@810
  signed int v822; // r1@812
  unsigned int *v823; // r2@814
  signed int v824; // r1@816
  unsigned int *v825; // r2@818
  signed int v826; // r1@820
  unsigned int *v827; // r2@822
  signed int v828; // r1@824
  unsigned int *v829; // r2@826
  signed int v830; // r1@828
  unsigned int *v831; // r2@830
  signed int v832; // r1@832
  unsigned int *v833; // r2@834
  signed int v834; // r1@836
  unsigned int *v835; // r2@838
  signed int v836; // r1@840
  unsigned int *v837; // r2@842
  signed int v838; // r1@844
  unsigned int *v839; // r2@846
  signed int v840; // r1@848
  unsigned int *v841; // r2@850
  signed int v842; // r1@852
  unsigned int *v843; // r2@1522
  signed int v844; // r1@1524
  unsigned int *v845; // r2@1530
  signed int v846; // r1@1532
  unsigned int *v847; // r2@1534
  signed int v848; // r1@1536
  char v849; // [sp+4h] [bp-644h]@179
  char v850; // [sp+8h] [bp-640h]@177
  char v851; // [sp+18h] [bp-630h]@175
  char *v852; // [sp+2Ch] [bp-61Ch]@171
  char *v853; // [sp+30h] [bp-618h]@171
  int v854; // [sp+34h] [bp-614h]@171
  char v855; // [sp+38h] [bp-610h]@171
  int v856; // [sp+50h] [bp-5F8h]@169
  char v857; // [sp+54h] [bp-5F4h]@169
  char v858; // [sp+58h] [bp-5F0h]@169
  char *v859; // [sp+6Ch] [bp-5DCh]@165
  char *v860; // [sp+70h] [bp-5D8h]@165
  int v861; // [sp+74h] [bp-5D4h]@165
  int v862; // [sp+7Ch] [bp-5CCh]@164
  char v863; // [sp+80h] [bp-5C8h]@164
  char *v864; // [sp+84h] [bp-5C4h]@164
  char v865; // [sp+88h] [bp-5C0h]@164
  char v866; // [sp+F8h] [bp-550h]@164
  int v867; // [sp+10Ch] [bp-53Ch]@163
  int v868; // [sp+114h] [bp-534h]@162
  int v869; // [sp+11Ch] [bp-52Ch]@161
  int v870; // [sp+124h] [bp-524h]@160
  int v871; // [sp+12Ch] [bp-51Ch]@159
  int v872; // [sp+134h] [bp-514h]@158
  int v873; // [sp+13Ch] [bp-50Ch]@157
  int v874; // [sp+144h] [bp-504h]@156
  int v875; // [sp+14Ch] [bp-4FCh]@155
  int v876; // [sp+154h] [bp-4F4h]@154
  int v877; // [sp+15Ch] [bp-4ECh]@153
  int v878; // [sp+164h] [bp-4E4h]@152
  int v879; // [sp+16Ch] [bp-4DCh]@151
  int v880; // [sp+174h] [bp-4D4h]@150
  int v881; // [sp+17Ch] [bp-4CCh]@149
  int v882; // [sp+184h] [bp-4C4h]@148
  int v883; // [sp+18Ch] [bp-4BCh]@147
  int v884; // [sp+194h] [bp-4B4h]@146
  int v885; // [sp+19Ch] [bp-4ACh]@145
  int v886; // [sp+1A4h] [bp-4A4h]@144
  int v887; // [sp+1ACh] [bp-49Ch]@143
  int v888; // [sp+1B4h] [bp-494h]@142
  int v889; // [sp+1BCh] [bp-48Ch]@141
  int v890; // [sp+1C4h] [bp-484h]@140
  int v891; // [sp+1CCh] [bp-47Ch]@139
  int v892; // [sp+1D4h] [bp-474h]@138
  int v893; // [sp+1DCh] [bp-46Ch]@137
  int v894; // [sp+1E4h] [bp-464h]@136
  int v895; // [sp+1ECh] [bp-45Ch]@135
  int v896; // [sp+1F4h] [bp-454h]@134
  int v897; // [sp+1FCh] [bp-44Ch]@133
  int v898; // [sp+204h] [bp-444h]@132
  int v899; // [sp+20Ch] [bp-43Ch]@131
  int v900; // [sp+214h] [bp-434h]@130
  int v901; // [sp+21Ch] [bp-42Ch]@129
  int v902; // [sp+224h] [bp-424h]@128
  int v903; // [sp+22Ch] [bp-41Ch]@127
  int v904; // [sp+234h] [bp-414h]@126
  int v905; // [sp+23Ch] [bp-40Ch]@125
  int v906; // [sp+244h] [bp-404h]@124
  int v907; // [sp+24Ch] [bp-3FCh]@123
  int v908; // [sp+254h] [bp-3F4h]@122
  int v909; // [sp+25Ch] [bp-3ECh]@121
  int v910; // [sp+264h] [bp-3E4h]@120
  int v911; // [sp+26Ch] [bp-3DCh]@119
  int v912; // [sp+274h] [bp-3D4h]@118
  int v913; // [sp+27Ch] [bp-3CCh]@117
  int v914; // [sp+284h] [bp-3C4h]@116
  int v915; // [sp+28Ch] [bp-3BCh]@115
  int v916; // [sp+294h] [bp-3B4h]@114
  int v917; // [sp+29Ch] [bp-3ACh]@113
  int v918; // [sp+2A4h] [bp-3A4h]@112
  int v919; // [sp+2ACh] [bp-39Ch]@111
  int v920; // [sp+2B4h] [bp-394h]@110
  int v921; // [sp+2BCh] [bp-38Ch]@109
  int v922; // [sp+2C4h] [bp-384h]@108
  int v923; // [sp+2CCh] [bp-37Ch]@107
  int v924; // [sp+2D4h] [bp-374h]@106
  int v925; // [sp+2DCh] [bp-36Ch]@105
  int v926; // [sp+2E4h] [bp-364h]@104
  int v927; // [sp+2ECh] [bp-35Ch]@103
  int v928; // [sp+2F4h] [bp-354h]@102
  int v929; // [sp+2FCh] [bp-34Ch]@101
  int v930; // [sp+304h] [bp-344h]@100
  int v931; // [sp+30Ch] [bp-33Ch]@99
  int v932; // [sp+314h] [bp-334h]@98
  int v933; // [sp+31Ch] [bp-32Ch]@97
  int v934; // [sp+324h] [bp-324h]@96
  int v935; // [sp+32Ch] [bp-31Ch]@95
  int v936; // [sp+334h] [bp-314h]@94
  int v937; // [sp+33Ch] [bp-30Ch]@93
  int v938; // [sp+344h] [bp-304h]@92
  int v939; // [sp+34Ch] [bp-2FCh]@91
  int v940; // [sp+354h] [bp-2F4h]@90
  int v941; // [sp+35Ch] [bp-2ECh]@89
  int v942; // [sp+364h] [bp-2E4h]@88
  int v943; // [sp+36Ch] [bp-2DCh]@87
  int v944; // [sp+374h] [bp-2D4h]@86
  int v945; // [sp+37Ch] [bp-2CCh]@85
  int v946; // [sp+384h] [bp-2C4h]@84
  int v947; // [sp+38Ch] [bp-2BCh]@83
  int v948; // [sp+394h] [bp-2B4h]@82
  int v949; // [sp+39Ch] [bp-2ACh]@81
  int v950; // [sp+3A4h] [bp-2A4h]@80
  int v951; // [sp+3ACh] [bp-29Ch]@79
  int v952; // [sp+3B4h] [bp-294h]@78
  int v953; // [sp+3BCh] [bp-28Ch]@77
  int v954; // [sp+3C4h] [bp-284h]@76
  int v955; // [sp+3CCh] [bp-27Ch]@75
  int v956; // [sp+3D4h] [bp-274h]@74
  int v957; // [sp+3DCh] [bp-26Ch]@73
  int v958; // [sp+3E4h] [bp-264h]@72
  int v959; // [sp+3ECh] [bp-25Ch]@71
  int v960; // [sp+3F4h] [bp-254h]@70
  int v961; // [sp+3FCh] [bp-24Ch]@69
  int v962; // [sp+404h] [bp-244h]@68
  int v963; // [sp+40Ch] [bp-23Ch]@67
  int v964; // [sp+414h] [bp-234h]@66
  int v965; // [sp+41Ch] [bp-22Ch]@65
  int v966; // [sp+424h] [bp-224h]@64
  int v967; // [sp+42Ch] [bp-21Ch]@63
  int v968; // [sp+434h] [bp-214h]@62
  int v969; // [sp+43Ch] [bp-20Ch]@61
  int v970; // [sp+444h] [bp-204h]@60
  int v971; // [sp+44Ch] [bp-1FCh]@59
  int v972; // [sp+454h] [bp-1F4h]@58
  int v973; // [sp+45Ch] [bp-1ECh]@57
  int v974; // [sp+464h] [bp-1E4h]@56
  int v975; // [sp+46Ch] [bp-1DCh]@55
  int v976; // [sp+474h] [bp-1D4h]@54
  int v977; // [sp+47Ch] [bp-1CCh]@53
  int v978; // [sp+484h] [bp-1C4h]@52
  int v979; // [sp+48Ch] [bp-1BCh]@51
  int v980; // [sp+494h] [bp-1B4h]@50
  int v981; // [sp+49Ch] [bp-1ACh]@49
  int v982; // [sp+4A4h] [bp-1A4h]@48
  int v983; // [sp+4ACh] [bp-19Ch]@47
  int v984; // [sp+4B4h] [bp-194h]@46
  int v985; // [sp+4BCh] [bp-18Ch]@45
  int v986; // [sp+4C4h] [bp-184h]@44
  int v987; // [sp+4CCh] [bp-17Ch]@43
  int v988; // [sp+4D4h] [bp-174h]@42
  int v989; // [sp+4DCh] [bp-16Ch]@41
  int v990; // [sp+4E4h] [bp-164h]@40
  int v991; // [sp+4ECh] [bp-15Ch]@39
  int v992; // [sp+4F4h] [bp-154h]@38
  int v993; // [sp+4FCh] [bp-14Ch]@37
  int v994; // [sp+504h] [bp-144h]@36
  int v995; // [sp+50Ch] [bp-13Ch]@35
  int v996; // [sp+514h] [bp-134h]@34
  int v997; // [sp+51Ch] [bp-12Ch]@33
  int v998; // [sp+524h] [bp-124h]@32
  int v999; // [sp+52Ch] [bp-11Ch]@31
  int v1000; // [sp+534h] [bp-114h]@30
  int v1001; // [sp+53Ch] [bp-10Ch]@29
  int v1002; // [sp+544h] [bp-104h]@28
  int v1003; // [sp+54Ch] [bp-FCh]@27
  int v1004; // [sp+554h] [bp-F4h]@26
  int v1005; // [sp+55Ch] [bp-ECh]@25
  int v1006; // [sp+564h] [bp-E4h]@24
  int v1007; // [sp+56Ch] [bp-DCh]@23
  int v1008; // [sp+574h] [bp-D4h]@22
  int v1009; // [sp+57Ch] [bp-CCh]@21
  int v1010; // [sp+584h] [bp-C4h]@20
  int v1011; // [sp+58Ch] [bp-BCh]@19
  int v1012; // [sp+594h] [bp-B4h]@18
  int v1013; // [sp+59Ch] [bp-ACh]@17
  int v1014; // [sp+5A4h] [bp-A4h]@16
  int v1015; // [sp+5ACh] [bp-9Ch]@15
  int v1016; // [sp+5B4h] [bp-94h]@14
  int v1017; // [sp+5BCh] [bp-8Ch]@13
  int v1018; // [sp+5C4h] [bp-84h]@12
  int v1019; // [sp+5CCh] [bp-7Ch]@11
  int v1020; // [sp+5D4h] [bp-74h]@10
  int v1021; // [sp+5DCh] [bp-6Ch]@9
  int v1022; // [sp+5E4h] [bp-64h]@8
  int v1023; // [sp+5ECh] [bp-5Ch]@7
  int v1024; // [sp+5F4h] [bp-54h]@6
  int v1025; // [sp+5FCh] [bp-4Ch]@5
  int v1026; // [sp+604h] [bp-44h]@4
  int v1027; // [sp+60Ch] [bp-3Ch]@3
  int v1028; // [sp+614h] [bp-34h]@2
  int v1029; // [sp+61Ch] [bp-2Ch]@1

  v1 = Item::mShovel_iron;
  v2 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mShovel_iron + 8);
  sub_21E94B4((void **)&v1029, "shovel");
  v2(v1, &v1029, 2);
  v3 = (void *)(v1029 - 12);
  if ( (int *)(v1029 - 12) != &dword_28898C0 )
  {
    v509 = (unsigned int *)(v1029 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v510 = __ldrex(v509);
      while ( __strex(v510 - 1, v509) );
    }
    else
      v510 = (*v509)--;
    if ( v510 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = Item::mPickAxe_iron;
  v5 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mPickAxe_iron + 8);
  sub_21E94B4((void **)&v1028, "pickaxe");
  v5(v4, &v1028, 2);
  v6 = (void *)(v1028 - 12);
  if ( (int *)(v1028 - 12) != &dword_28898C0 )
    v511 = (unsigned int *)(v1028 - 4);
        v512 = __ldrex(v511);
      while ( __strex(v512 - 1, v511) );
      v512 = (*v511)--;
    if ( v512 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = Item::mHatchet_iron;
  v8 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHatchet_iron + 8);
  sub_21E94B4((void **)&v1027, "axe");
  v8(v7, &v1027, 2);
  v9 = (void *)(v1027 - 12);
  if ( (int *)(v1027 - 12) != &dword_28898C0 )
    v513 = (unsigned int *)(v1027 - 4);
        v514 = __ldrex(v513);
      while ( __strex(v514 - 1, v513) );
      v514 = (*v513)--;
    if ( v514 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = Item::mFlintAndSteel;
  v11 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFlintAndSteel + 8);
  sub_21E94B4((void **)&v1026, "flint_and_steel");
  v11(v10, &v1026, 0);
  v12 = (void *)(v1026 - 12);
  if ( (int *)(v1026 - 12) != &dword_28898C0 )
    v515 = (unsigned int *)(v1026 - 4);
        v516 = __ldrex(v515);
      while ( __strex(v516 - 1, v515) );
      v516 = (*v515)--;
    if ( v516 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = Item::mBow;
  v14 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBow + 8);
  sub_21E94B4((void **)&v1025, "bow_standby");
  v14(v13, &v1025, 0);
  v15 = (void *)(v1025 - 12);
  if ( (int *)(v1025 - 12) != &dword_28898C0 )
    v517 = (unsigned int *)(v1025 - 4);
        v518 = __ldrex(v517);
      while ( __strex(v518 - 1, v517) );
      v518 = (*v517)--;
    if ( v518 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = Item::mArrow;
  v17 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mArrow + 8);
  sub_21E94B4((void **)&v1024, "arrow");
  v17(v16, &v1024, 0);
  v18 = (void *)(v1024 - 12);
  if ( (int *)(v1024 - 12) != &dword_28898C0 )
    v519 = (unsigned int *)(v1024 - 4);
        v520 = __ldrex(v519);
      while ( __strex(v520 - 1, v519) );
      v520 = (*v519)--;
    if ( v520 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = Item::mCoal;
  v20 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCoal + 8);
  sub_21E94B4((void **)&v1023, "coal");
  v20(v19, &v1023, 0);
  v21 = (void *)(v1023 - 12);
  if ( (int *)(v1023 - 12) != &dword_28898C0 )
    v521 = (unsigned int *)(v1023 - 4);
        v522 = __ldrex(v521);
      while ( __strex(v522 - 1, v521) );
      v522 = (*v521)--;
    if ( v522 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = Item::mDiamond;
  v23 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDiamond + 8);
  sub_21E94B4((void **)&v1022, "diamond");
  v23(v22, &v1022, 0);
  v24 = (void *)(v1022 - 12);
  if ( (int *)(v1022 - 12) != &dword_28898C0 )
    v523 = (unsigned int *)(v1022 - 4);
        v524 = __ldrex(v523);
      while ( __strex(v524 - 1, v523) );
      v524 = (*v523)--;
    if ( v524 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = Item::mIronIngot;
  v26 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mIronIngot + 8);
  sub_21E94B4((void **)&v1021, "iron_ingot");
  v26(v25, &v1021, 0);
  v27 = (void *)(v1021 - 12);
  if ( (int *)(v1021 - 12) != &dword_28898C0 )
    v525 = (unsigned int *)(v1021 - 4);
        v526 = __ldrex(v525);
      while ( __strex(v526 - 1, v525) );
      v526 = (*v525)--;
    if ( v526 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = Item::mGoldIngot;
  v29 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mGoldIngot + 8);
  sub_21E94B4((void **)&v1020, "gold_ingot");
  v29(v28, &v1020, 0);
  v30 = (void *)(v1020 - 12);
  if ( (int *)(v1020 - 12) != &dword_28898C0 )
    v527 = (unsigned int *)(v1020 - 4);
        v528 = __ldrex(v527);
      while ( __strex(v528 - 1, v527) );
      v528 = (*v527)--;
    if ( v528 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = Item::mSword_iron;
  v32 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mSword_iron + 8);
  sub_21E94B4((void **)&v1019, "sword");
  v32(v31, &v1019, 2);
  v33 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v529 = (unsigned int *)(v1019 - 4);
        v530 = __ldrex(v529);
      while ( __strex(v530 - 1, v529) );
      v530 = (*v529)--;
    if ( v530 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = Item::mSword_wood;
  v35 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSword_wood + 8);
  sub_21E94B4((void **)&v1018, "sword");
  v35(v34, &v1018, 0);
  v36 = (void *)(v1018 - 12);
  if ( (int *)(v1018 - 12) != &dword_28898C0 )
    v531 = (unsigned int *)(v1018 - 4);
        v532 = __ldrex(v531);
      while ( __strex(v532 - 1, v531) );
      v532 = (*v531)--;
    if ( v532 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = Item::mShovel_wood;
  v38 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mShovel_wood + 8);
  sub_21E94B4((void **)&v1017, "shovel");
  v38(v37, &v1017, 0);
  v39 = (void *)(v1017 - 12);
  if ( (int *)(v1017 - 12) != &dword_28898C0 )
    v533 = (unsigned int *)(v1017 - 4);
        v534 = __ldrex(v533);
      while ( __strex(v534 - 1, v533) );
      v534 = (*v533)--;
    if ( v534 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = Item::mPickAxe_wood;
  v41 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPickAxe_wood + 8);
  sub_21E94B4((void **)&v1016, "pickaxe");
  v41(v40, &v1016, 0);
  v42 = (void *)(v1016 - 12);
  if ( (int *)(v1016 - 12) != &dword_28898C0 )
    v535 = (unsigned int *)(v1016 - 4);
        v536 = __ldrex(v535);
      while ( __strex(v536 - 1, v535) );
      v536 = (*v535)--;
    if ( v536 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = Item::mHatchet_wood;
  v44 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mHatchet_wood + 8);
  sub_21E94B4((void **)&v1015, "axe");
  v44(v43, &v1015, 0);
  v45 = (void *)(v1015 - 12);
  if ( (int *)(v1015 - 12) != &dword_28898C0 )
    v537 = (unsigned int *)(v1015 - 4);
        v538 = __ldrex(v537);
      while ( __strex(v538 - 1, v537) );
      v538 = (*v537)--;
    if ( v538 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = Item::mSword_stone;
  v47 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mSword_stone + 8);
  sub_21E94B4((void **)&v1014, "sword");
  v47(v46, &v1014, 1);
  v48 = (void *)(v1014 - 12);
  if ( (int *)(v1014 - 12) != &dword_28898C0 )
    v539 = (unsigned int *)(v1014 - 4);
        v540 = __ldrex(v539);
      while ( __strex(v540 - 1, v539) );
      v540 = (*v539)--;
    if ( v540 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = Item::mShovel_stone;
  v50 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mShovel_stone + 8);
  sub_21E94B4((void **)&v1013, "shovel");
  v50(v49, &v1013, 1);
  v51 = (void *)(v1013 - 12);
  if ( (int *)(v1013 - 12) != &dword_28898C0 )
    v541 = (unsigned int *)(v1013 - 4);
        v542 = __ldrex(v541);
      while ( __strex(v542 - 1, v541) );
      v542 = (*v541)--;
    if ( v542 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = Item::mPickAxe_stone;
  v53 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mPickAxe_stone + 8);
  sub_21E94B4((void **)&v1012, "pickaxe");
  v53(v52, &v1012, 1);
  v54 = (void *)(v1012 - 12);
  if ( (int *)(v1012 - 12) != &dword_28898C0 )
    v543 = (unsigned int *)(v1012 - 4);
        v544 = __ldrex(v543);
      while ( __strex(v544 - 1, v543) );
      v544 = (*v543)--;
    if ( v544 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = Item::mHatchet_stone;
  v56 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHatchet_stone + 8);
  sub_21E94B4((void **)&v1011, "axe");
  v56(v55, &v1011, 1);
  v57 = (void *)(v1011 - 12);
  if ( (int *)(v1011 - 12) != &dword_28898C0 )
    v545 = (unsigned int *)(v1011 - 4);
        v546 = __ldrex(v545);
      while ( __strex(v546 - 1, v545) );
      v546 = (*v545)--;
    if ( v546 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = Item::mSword_diamond;
  v59 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mSword_diamond + 8);
  sub_21E94B4((void **)&v1010, "sword");
  v59(v58, &v1010, 4);
  v60 = (void *)(v1010 - 12);
  if ( (int *)(v1010 - 12) != &dword_28898C0 )
    v547 = (unsigned int *)(v1010 - 4);
        v548 = __ldrex(v547);
      while ( __strex(v548 - 1, v547) );
      v548 = (*v547)--;
    if ( v548 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = Item::mShovel_diamond;
  v62 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mShovel_diamond + 8);
  sub_21E94B4((void **)&v1009, "shovel");
  v62(v61, &v1009, 4);
  v63 = (void *)(v1009 - 12);
  if ( (int *)(v1009 - 12) != &dword_28898C0 )
    v549 = (unsigned int *)(v1009 - 4);
        v550 = __ldrex(v549);
      while ( __strex(v550 - 1, v549) );
      v550 = (*v549)--;
    if ( v550 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = Item::mPickAxe_diamond;
  v65 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mPickAxe_diamond + 8);
  sub_21E94B4((void **)&v1008, "pickaxe");
  v65(v64, &v1008, 4);
  v66 = (void *)(v1008 - 12);
  if ( (int *)(v1008 - 12) != &dword_28898C0 )
    v551 = (unsigned int *)(v1008 - 4);
        v552 = __ldrex(v551);
      while ( __strex(v552 - 1, v551) );
      v552 = (*v551)--;
    if ( v552 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = Item::mHatchet_diamond;
  v68 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHatchet_diamond + 8);
  sub_21E94B4((void **)&v1007, "axe");
  v68(v67, &v1007, 4);
  v69 = (void *)(v1007 - 12);
  if ( (int *)(v1007 - 12) != &dword_28898C0 )
    v553 = (unsigned int *)(v1007 - 4);
        v554 = __ldrex(v553);
      while ( __strex(v554 - 1, v553) );
      v554 = (*v553)--;
    if ( v554 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = Item::mStick;
  v71 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mStick + 8);
  sub_21E94B4((void **)&v1006, "stick");
  v71(v70, &v1006, 0);
  v72 = (void *)(v1006 - 12);
  if ( (int *)(v1006 - 12) != &dword_28898C0 )
    v555 = (unsigned int *)(v1006 - 4);
        v556 = __ldrex(v555);
      while ( __strex(v556 - 1, v555) );
      v556 = (*v555)--;
    if ( v556 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = Item::mBowl;
  v74 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBowl + 8);
  sub_21E94B4((void **)&v1005, "bowl");
  v74(v73, &v1005, 0);
  v75 = (void *)(v1005 - 12);
  if ( (int *)(v1005 - 12) != &dword_28898C0 )
    v557 = (unsigned int *)(v1005 - 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = Item::mSword_gold;
  v77 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mSword_gold + 8);
  sub_21E94B4((void **)&v1004, "sword");
  v77(v76, &v1004, 3);
  v78 = (void *)(v1004 - 12);
  if ( (int *)(v1004 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v1004 - 4);
        v560 = __ldrex(v559);
      while ( __strex(v560 - 1, v559) );
      v560 = (*v559)--;
    if ( v560 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = Item::mShovel_gold;
  v80 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mShovel_gold + 8);
  sub_21E94B4((void **)&v1003, "shovel");
  v80(v79, &v1003, 3);
  v81 = (void *)(v1003 - 12);
  if ( (int *)(v1003 - 12) != &dword_28898C0 )
    v561 = (unsigned int *)(v1003 - 4);
        v562 = __ldrex(v561);
      while ( __strex(v562 - 1, v561) );
      v562 = (*v561)--;
    if ( v562 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = Item::mPickAxe_gold;
  v83 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mPickAxe_gold + 8);
  sub_21E94B4((void **)&v1002, "pickaxe");
  v83(v82, &v1002, 3);
  v84 = (void *)(v1002 - 12);
  if ( (int *)(v1002 - 12) != &dword_28898C0 )
    v563 = (unsigned int *)(v1002 - 4);
        v564 = __ldrex(v563);
      while ( __strex(v564 - 1, v563) );
      v564 = (*v563)--;
    if ( v564 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = Item::mHatchet_gold;
  v86 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHatchet_gold + 8);
  sub_21E94B4((void **)&v1001, "axe");
  v86(v85, &v1001, 3);
  v87 = (void *)(v1001 - 12);
  if ( (int *)(v1001 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v1001 - 4);
        v566 = __ldrex(v565);
      while ( __strex(v566 - 1, v565) );
      v566 = (*v565)--;
    if ( v566 <= 0 )
      j_j_j_j__ZdlPv_9(v87);
  v88 = Item::mString;
  v89 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mString + 8);
  sub_21E94B4((void **)&v1000, "string");
  v89(v88, &v1000, 0);
  v90 = (void *)(v1000 - 12);
  if ( (int *)(v1000 - 12) != &dword_28898C0 )
    v567 = (unsigned int *)(v1000 - 4);
        v568 = __ldrex(v567);
      while ( __strex(v568 - 1, v567) );
      v568 = (*v567)--;
    if ( v568 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = Item::mFeather;
  v92 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFeather + 8);
  sub_21E94B4((void **)&v999, "feather");
  v92(v91, &v999, 0);
  v93 = (void *)(v999 - 12);
  if ( (int *)(v999 - 12) != &dword_28898C0 )
    v569 = (unsigned int *)(v999 - 4);
        v570 = __ldrex(v569);
      while ( __strex(v570 - 1, v569) );
      v570 = (*v569)--;
    if ( v570 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
  v94 = Item::mSulphur;
  v95 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSulphur + 8);
  sub_21E94B4((void **)&v998, "gunpowder");
  v95(v94, &v998, 0);
  v96 = (void *)(v998 - 12);
  if ( (int *)(v998 - 12) != &dword_28898C0 )
    v571 = (unsigned int *)(v998 - 4);
        v572 = __ldrex(v571);
      while ( __strex(v572 - 1, v571) );
      v572 = (*v571)--;
    if ( v572 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  v97 = Item::mHoe_wood;
  v98 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mHoe_wood + 8);
  sub_21E94B4((void **)&v997, "hoe");
  v98(v97, &v997, 0);
  v99 = (void *)(v997 - 12);
  if ( (int *)(v997 - 12) != &dword_28898C0 )
    v573 = (unsigned int *)(v997 - 4);
        v574 = __ldrex(v573);
      while ( __strex(v574 - 1, v573) );
      v574 = (*v573)--;
    if ( v574 <= 0 )
      j_j_j_j__ZdlPv_9(v99);
  v100 = Item::mHoe_stone;
  v101 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHoe_stone + 8);
  sub_21E94B4((void **)&v996, "hoe");
  v101(v100, &v996, 1);
  v102 = (void *)(v996 - 12);
  if ( (int *)(v996 - 12) != &dword_28898C0 )
    v575 = (unsigned int *)(v996 - 4);
        v576 = __ldrex(v575);
      while ( __strex(v576 - 1, v575) );
      v576 = (*v575)--;
    if ( v576 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  v103 = Item::mHoe_iron;
  v104 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHoe_iron + 8);
  sub_21E94B4((void **)&v995, "hoe");
  v104(v103, &v995, 2);
  v105 = (void *)(v995 - 12);
  if ( (int *)(v995 - 12) != &dword_28898C0 )
    v577 = (unsigned int *)(v995 - 4);
        v578 = __ldrex(v577);
      while ( __strex(v578 - 1, v577) );
      v578 = (*v577)--;
    if ( v578 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  v106 = Item::mHoe_diamond;
  v107 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHoe_diamond + 8);
  sub_21E94B4((void **)&v994, "hoe");
  v107(v106, &v994, 4);
  v108 = (void *)(v994 - 12);
  if ( (int *)(v994 - 12) != &dword_28898C0 )
    v579 = (unsigned int *)(v994 - 4);
        v580 = __ldrex(v579);
      while ( __strex(v580 - 1, v579) );
      v580 = (*v579)--;
    if ( v580 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  v109 = Item::mHoe_gold;
  v110 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHoe_gold + 8);
  sub_21E94B4((void **)&v993, "hoe");
  v110(v109, &v993, 3);
  v111 = (void *)(v993 - 12);
  if ( (int *)(v993 - 12) != &dword_28898C0 )
    v581 = (unsigned int *)(v993 - 4);
        v582 = __ldrex(v581);
      while ( __strex(v582 - 1, v581) );
      v582 = (*v581)--;
    if ( v582 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  v112 = Item::mWheat;
  v113 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mWheat + 8);
  sub_21E94B4((void **)&v992, "wheat");
  v113(v112, &v992, 0);
  v114 = (void *)(v992 - 12);
  if ( (int *)(v992 - 12) != &dword_28898C0 )
    v583 = (unsigned int *)(v992 - 4);
        v584 = __ldrex(v583);
      while ( __strex(v584 - 1, v583) );
      v584 = (*v583)--;
    if ( v584 <= 0 )
      j_j_j_j__ZdlPv_9(v114);
  v115 = Item::mHelmet_leather;
  v116 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mHelmet_leather + 8);
  sub_21E94B4((void **)&v991, "helmet");
  v116(v115, &v991, 0);
  v117 = (void *)(v991 - 12);
  if ( (int *)(v991 - 12) != &dword_28898C0 )
    v585 = (unsigned int *)(v991 - 4);
        v586 = __ldrex(v585);
      while ( __strex(v586 - 1, v585) );
      v586 = (*v585)--;
    if ( v586 <= 0 )
      j_j_j_j__ZdlPv_9(v117);
  v118 = Item::mChestplate_leather;
  v119 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mChestplate_leather + 8);
  sub_21E94B4((void **)&v990, "chestplate");
  v119(v118, &v990, 0);
  v120 = (void *)(v990 - 12);
  if ( (int *)(v990 - 12) != &dword_28898C0 )
    v587 = (unsigned int *)(v990 - 4);
        v588 = __ldrex(v587);
      while ( __strex(v588 - 1, v587) );
      v588 = (*v587)--;
    if ( v588 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  v121 = Item::mLeggings_leather;
  v122 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mLeggings_leather + 8);
  sub_21E94B4((void **)&v989, "leggings");
  v122(v121, &v989, 0);
  v123 = (void *)(v989 - 12);
  if ( (int *)(v989 - 12) != &dword_28898C0 )
    v589 = (unsigned int *)(v989 - 4);
        v590 = __ldrex(v589);
      while ( __strex(v590 - 1, v589) );
      v590 = (*v589)--;
    if ( v590 <= 0 )
      j_j_j_j__ZdlPv_9(v123);
  v124 = Item::mBoots_leather;
  v125 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBoots_leather + 8);
  sub_21E94B4((void **)&v988, "boots");
  v125(v124, &v988, 0);
  v126 = (void *)(v988 - 12);
  if ( (int *)(v988 - 12) != &dword_28898C0 )
    v591 = (unsigned int *)(v988 - 4);
        v592 = __ldrex(v591);
      while ( __strex(v592 - 1, v591) );
      v592 = (*v591)--;
    if ( v592 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  v127 = Item::mHelmet_chain;
  v128 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHelmet_chain + 8);
  sub_21E94B4((void **)&v987, "helmet");
  v128(v127, &v987, 1);
  v129 = (void *)(v987 - 12);
  if ( (int *)(v987 - 12) != &dword_28898C0 )
    v593 = (unsigned int *)(v987 - 4);
        v594 = __ldrex(v593);
      while ( __strex(v594 - 1, v593) );
      v594 = (*v593)--;
    if ( v594 <= 0 )
      j_j_j_j__ZdlPv_9(v129);
  v130 = Item::mChestplate_chain;
  v131 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mChestplate_chain + 8);
  sub_21E94B4((void **)&v986, "chestplate");
  v131(v130, &v986, 1);
  v132 = (void *)(v986 - 12);
  if ( (int *)(v986 - 12) != &dword_28898C0 )
    v595 = (unsigned int *)(v986 - 4);
        v596 = __ldrex(v595);
      while ( __strex(v596 - 1, v595) );
      v596 = (*v595)--;
    if ( v596 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  v133 = Item::mLeggings_chain;
  v134 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mLeggings_chain + 8);
  sub_21E94B4((void **)&v985, "leggings");
  v134(v133, &v985, 1);
  v135 = (void *)(v985 - 12);
  if ( (int *)(v985 - 12) != &dword_28898C0 )
    v597 = (unsigned int *)(v985 - 4);
        v598 = __ldrex(v597);
      while ( __strex(v598 - 1, v597) );
      v598 = (*v597)--;
    if ( v598 <= 0 )
      j_j_j_j__ZdlPv_9(v135);
  v136 = Item::mBoots_chain;
  v137 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mBoots_chain + 8);
  sub_21E94B4((void **)&v984, "boots");
  v137(v136, &v984, 1);
  v138 = (void *)(v984 - 12);
  if ( (int *)(v984 - 12) != &dword_28898C0 )
    v599 = (unsigned int *)(v984 - 4);
        v600 = __ldrex(v599);
      while ( __strex(v600 - 1, v599) );
      v600 = (*v599)--;
    if ( v600 <= 0 )
      j_j_j_j__ZdlPv_9(v138);
  v139 = Item::mHelmet_iron;
  v140 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHelmet_iron + 8);
  sub_21E94B4((void **)&v983, "helmet");
  v140(v139, &v983, 2);
  v141 = (void *)(v983 - 12);
  if ( (int *)(v983 - 12) != &dword_28898C0 )
    v601 = (unsigned int *)(v983 - 4);
        v602 = __ldrex(v601);
      while ( __strex(v602 - 1, v601) );
      v602 = (*v601)--;
    if ( v602 <= 0 )
      j_j_j_j__ZdlPv_9(v141);
  v142 = Item::mChestplate_iron;
  v143 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mChestplate_iron + 8);
  sub_21E94B4((void **)&v982, "chestplate");
  v143(v142, &v982, 2);
  v144 = (void *)(v982 - 12);
  if ( (int *)(v982 - 12) != &dword_28898C0 )
    v603 = (unsigned int *)(v982 - 4);
        v604 = __ldrex(v603);
      while ( __strex(v604 - 1, v603) );
      v604 = (*v603)--;
    if ( v604 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  v145 = Item::mLeggings_iron;
  v146 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mLeggings_iron + 8);
  sub_21E94B4((void **)&v981, "leggings");
  v146(v145, &v981, 2);
  v147 = (void *)(v981 - 12);
  if ( (int *)(v981 - 12) != &dword_28898C0 )
    v605 = (unsigned int *)(v981 - 4);
        v606 = __ldrex(v605);
      while ( __strex(v606 - 1, v605) );
      v606 = (*v605)--;
    if ( v606 <= 0 )
      j_j_j_j__ZdlPv_9(v147);
  v148 = Item::mBoots_iron;
  v149 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mBoots_iron + 8);
  sub_21E94B4((void **)&v980, "boots");
  v149(v148, &v980, 2);
  v150 = (void *)(v980 - 12);
  if ( (int *)(v980 - 12) != &dword_28898C0 )
    v607 = (unsigned int *)(v980 - 4);
        v608 = __ldrex(v607);
      while ( __strex(v608 - 1, v607) );
      v608 = (*v607)--;
    if ( v608 <= 0 )
      j_j_j_j__ZdlPv_9(v150);
  v151 = Item::mHelmet_diamond;
  v152 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHelmet_diamond + 8);
  sub_21E94B4((void **)&v979, "helmet");
  v152(v151, &v979, 4);
  v153 = (void *)(v979 - 12);
  if ( (int *)(v979 - 12) != &dword_28898C0 )
    v609 = (unsigned int *)(v979 - 4);
        v610 = __ldrex(v609);
      while ( __strex(v610 - 1, v609) );
      v610 = (*v609)--;
    if ( v610 <= 0 )
      j_j_j_j__ZdlPv_9(v153);
  v154 = Item::mChestplate_diamond;
  v155 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mChestplate_diamond + 8);
  sub_21E94B4((void **)&v978, "chestplate");
  v155(v154, &v978, 4);
  v156 = (void *)(v978 - 12);
  if ( (int *)(v978 - 12) != &dword_28898C0 )
    v611 = (unsigned int *)(v978 - 4);
        v612 = __ldrex(v611);
      while ( __strex(v612 - 1, v611) );
      v612 = (*v611)--;
    if ( v612 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  v157 = Item::mLeggings_diamond;
  v158 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mLeggings_diamond + 8);
  sub_21E94B4((void **)&v977, "leggings");
  v158(v157, &v977, 4);
  v159 = (void *)(v977 - 12);
  if ( (int *)(v977 - 12) != &dword_28898C0 )
    v613 = (unsigned int *)(v977 - 4);
        v614 = __ldrex(v613);
      while ( __strex(v614 - 1, v613) );
      v614 = (*v613)--;
    if ( v614 <= 0 )
      j_j_j_j__ZdlPv_9(v159);
  v160 = Item::mBoots_diamond;
  v161 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mBoots_diamond + 8);
  sub_21E94B4((void **)&v976, "boots");
  v161(v160, &v976, 4);
  v162 = (void *)(v976 - 12);
  if ( (int *)(v976 - 12) != &dword_28898C0 )
    v615 = (unsigned int *)(v976 - 4);
        v616 = __ldrex(v615);
      while ( __strex(v616 - 1, v615) );
      v616 = (*v615)--;
    if ( v616 <= 0 )
      j_j_j_j__ZdlPv_9(v162);
  v163 = Item::mHelmet_gold;
  v164 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mHelmet_gold + 8);
  sub_21E94B4((void **)&v975, "helmet");
  v164(v163, &v975, 3);
  v165 = (void *)(v975 - 12);
  if ( (int *)(v975 - 12) != &dword_28898C0 )
    v617 = (unsigned int *)(v975 - 4);
        v618 = __ldrex(v617);
      while ( __strex(v618 - 1, v617) );
      v618 = (*v617)--;
    if ( v618 <= 0 )
      j_j_j_j__ZdlPv_9(v165);
  v166 = Item::mChestplate_gold;
  v167 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mChestplate_gold + 8);
  sub_21E94B4((void **)&v974, "chestplate");
  v167(v166, &v974, 3);
  v168 = (void *)(v974 - 12);
  if ( (int *)(v974 - 12) != &dword_28898C0 )
    v619 = (unsigned int *)(v974 - 4);
        v620 = __ldrex(v619);
      while ( __strex(v620 - 1, v619) );
      v620 = (*v619)--;
    if ( v620 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
  v169 = Item::mLeggings_gold;
  v170 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mLeggings_gold + 8);
  sub_21E94B4((void **)&v973, "leggings");
  v170(v169, &v973, 3);
  v171 = (void *)(v973 - 12);
  if ( (int *)(v973 - 12) != &dword_28898C0 )
    v621 = (unsigned int *)(v973 - 4);
        v622 = __ldrex(v621);
      while ( __strex(v622 - 1, v621) );
      v622 = (*v621)--;
    if ( v622 <= 0 )
      j_j_j_j__ZdlPv_9(v171);
  v172 = Item::mBoots_gold;
  v173 = *(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)Item::mBoots_gold + 8);
  sub_21E94B4((void **)&v972, "boots");
  v173(v172, &v972, 3);
  v174 = (void *)(v972 - 12);
  if ( (int *)(v972 - 12) != &dword_28898C0 )
    v623 = (unsigned int *)(v972 - 4);
        v624 = __ldrex(v623);
      while ( __strex(v624 - 1, v623) );
      v624 = (*v623)--;
    if ( v624 <= 0 )
      j_j_j_j__ZdlPv_9(v174);
  v175 = Item::mFlint;
  v176 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFlint + 8);
  sub_21E94B4((void **)&v971, "flint");
  v176(v175, &v971, 0);
  v177 = (void *)(v971 - 12);
  if ( (int *)(v971 - 12) != &dword_28898C0 )
    v625 = (unsigned int *)(v971 - 4);
        v626 = __ldrex(v625);
      while ( __strex(v626 - 1, v625) );
      v626 = (*v625)--;
    if ( v626 <= 0 )
      j_j_j_j__ZdlPv_9(v177);
  v178 = Item::mPainting;
  v179 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPainting + 8);
  sub_21E94B4((void **)&v970, "painting");
  v179(v178, &v970, 0);
  v180 = (void *)(v970 - 12);
  if ( (int *)(v970 - 12) != &dword_28898C0 )
    v627 = (unsigned int *)(v970 - 4);
        v628 = __ldrex(v627);
      while ( __strex(v628 - 1, v627) );
      v628 = (*v627)--;
    if ( v628 <= 0 )
      j_j_j_j__ZdlPv_9(v180);
  v181 = Item::mSign;
  v182 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSign + 8);
  sub_21E94B4((void **)&v969, "sign");
  v182(v181, &v969, 0);
  v183 = (void *)(v969 - 12);
  if ( (int *)(v969 - 12) != &dword_28898C0 )
    v629 = (unsigned int *)(v969 - 4);
        v630 = __ldrex(v629);
      while ( __strex(v630 - 1, v629) );
      v630 = (*v629)--;
    if ( v630 <= 0 )
      j_j_j_j__ZdlPv_9(v183);
  v184 = Item::mDoor_wood;
  v185 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_wood + 8);
  sub_21E94B4((void **)&v968, "wooden_door");
  v185(v184, &v968, 0);
  v186 = (void *)(v968 - 12);
  if ( (int *)(v968 - 12) != &dword_28898C0 )
    v631 = (unsigned int *)(v968 - 4);
        v632 = __ldrex(v631);
      while ( __strex(v632 - 1, v631) );
      v632 = (*v631)--;
    if ( v632 <= 0 )
      j_j_j_j__ZdlPv_9(v186);
  v187 = Item::mBucket;
  v188 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBucket + 8);
  sub_21E94B4((void **)&v967, "bucket");
  v188(v187, &v967, 0);
  v189 = (void *)(v967 - 12);
  if ( (int *)(v967 - 12) != &dword_28898C0 )
    v633 = (unsigned int *)(v967 - 4);
        v634 = __ldrex(v633);
      while ( __strex(v634 - 1, v633) );
      v634 = (*v633)--;
    if ( v634 <= 0 )
      j_j_j_j__ZdlPv_9(v189);
  v190 = Item::mMinecart;
  v191 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mMinecart + 8);
  sub_21E94B4((void **)&v966, "minecart_normal");
  v191(v190, &v966, 0);
  v192 = (void *)(v966 - 12);
  if ( (int *)(v966 - 12) != &dword_28898C0 )
    v635 = (unsigned int *)(v966 - 4);
        v636 = __ldrex(v635);
      while ( __strex(v636 - 1, v635) );
      v636 = (*v635)--;
    if ( v636 <= 0 )
      j_j_j_j__ZdlPv_9(v192);
  v193 = Item::mSaddle;
  v194 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSaddle + 8);
  sub_21E94B4((void **)&v965, "saddle");
  v194(v193, &v965, 0);
  v195 = (void *)(v965 - 12);
  if ( (int *)(v965 - 12) != &dword_28898C0 )
    v637 = (unsigned int *)(v965 - 4);
        v638 = __ldrex(v637);
      while ( __strex(v638 - 1, v637) );
      v638 = (*v637)--;
    if ( v638 <= 0 )
      j_j_j_j__ZdlPv_9(v195);
  v196 = Item::mDoor_iron;
  v197 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_iron + 8);
  sub_21E94B4((void **)&v964, "iron_door");
  v197(v196, &v964, 0);
  v198 = (void *)(v964 - 12);
  if ( (int *)(v964 - 12) != &dword_28898C0 )
    v639 = (unsigned int *)(v964 - 4);
        v640 = __ldrex(v639);
      while ( __strex(v640 - 1, v639) );
      v640 = (*v639)--;
    if ( v640 <= 0 )
      j_j_j_j__ZdlPv_9(v198);
  v199 = Item::mRedStone;
  v200 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRedStone + 8);
  sub_21E94B4((void **)&v963, "redstone_dust");
  v200(v199, &v963, 0);
  v201 = (void *)(v963 - 12);
  if ( (int *)(v963 - 12) != &dword_28898C0 )
    v641 = (unsigned int *)(v963 - 4);
        v642 = __ldrex(v641);
      while ( __strex(v642 - 1, v641) );
      v642 = (*v641)--;
    if ( v642 <= 0 )
      j_j_j_j__ZdlPv_9(v201);
  v202 = Item::mSnowBall;
  v203 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSnowBall + 8);
  sub_21E94B4((void **)&v962, "snowball");
  v203(v202, &v962, 0);
  v204 = (void *)(v962 - 12);
  if ( (int *)(v962 - 12) != &dword_28898C0 )
    v643 = (unsigned int *)(v962 - 4);
        v644 = __ldrex(v643);
      while ( __strex(v644 - 1, v643) );
      v644 = (*v643)--;
    if ( v644 <= 0 )
      j_j_j_j__ZdlPv_9(v204);
  v205 = Item::mBoat;
  v206 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBoat + 8);
  sub_21E94B4((void **)&v961, "boat");
  v206(v205, &v961, 0);
  v207 = (void *)(v961 - 12);
  if ( (int *)(v961 - 12) != &dword_28898C0 )
    v645 = (unsigned int *)(v961 - 4);
        v646 = __ldrex(v645);
      while ( __strex(v646 - 1, v645) );
      v646 = (*v645)--;
    if ( v646 <= 0 )
      j_j_j_j__ZdlPv_9(v207);
  v208 = Item::mLeather;
  v209 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mLeather + 8);
  sub_21E94B4((void **)&v960, "leather");
  v209(v208, &v960, 0);
  v210 = (void *)(v960 - 12);
  if ( (int *)(v960 - 12) != &dword_28898C0 )
    v647 = (unsigned int *)(v960 - 4);
        v648 = __ldrex(v647);
      while ( __strex(v648 - 1, v647) );
      v648 = (*v647)--;
    if ( v648 <= 0 )
      j_j_j_j__ZdlPv_9(v210);
  v211 = Item::mBrick;
  v212 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBrick + 8);
  sub_21E94B4((void **)&v959, "brick");
  v212(v211, &v959, 0);
  v213 = (void *)(v959 - 12);
  if ( (int *)(v959 - 12) != &dword_28898C0 )
    v649 = (unsigned int *)(v959 - 4);
        v650 = __ldrex(v649);
      while ( __strex(v650 - 1, v649) );
      v650 = (*v649)--;
    if ( v650 <= 0 )
      j_j_j_j__ZdlPv_9(v213);
  v214 = Item::mClay;
  v215 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mClay + 8);
  sub_21E94B4((void **)&v958, "clay_ball");
  v215(v214, &v958, 0);
  v216 = (void *)(v958 - 12);
  if ( (int *)(v958 - 12) != &dword_28898C0 )
    v651 = (unsigned int *)(v958 - 4);
        v652 = __ldrex(v651);
      while ( __strex(v652 - 1, v651) );
      v652 = (*v651)--;
    if ( v652 <= 0 )
      j_j_j_j__ZdlPv_9(v216);
  v217 = Item::mReeds;
  v218 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mReeds + 8);
  sub_21E94B4((void **)&v957, "reeds");
  v218(v217, &v957, 0);
  v219 = (void *)(v957 - 12);
  if ( (int *)(v957 - 12) != &dword_28898C0 )
    v653 = (unsigned int *)(v957 - 4);
        v654 = __ldrex(v653);
      while ( __strex(v654 - 1, v653) );
      v654 = (*v653)--;
    if ( v654 <= 0 )
      j_j_j_j__ZdlPv_9(v219);
  v220 = Item::mPaper;
  v221 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPaper + 8);
  sub_21E94B4((void **)&v956, "paper");
  v221(v220, &v956, 0);
  v222 = (void *)(v956 - 12);
  if ( (int *)(v956 - 12) != &dword_28898C0 )
    v655 = (unsigned int *)(v956 - 4);
        v656 = __ldrex(v655);
      while ( __strex(v656 - 1, v655) );
      v656 = (*v655)--;
    if ( v656 <= 0 )
      j_j_j_j__ZdlPv_9(v222);
  v223 = Item::mBook;
  v224 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBook + 8);
  sub_21E94B4((void **)&v955, "book_normal");
  v224(v223, &v955, 0);
  v225 = (void *)(v955 - 12);
  if ( (int *)(v955 - 12) != &dword_28898C0 )
    v657 = (unsigned int *)(v955 - 4);
        v658 = __ldrex(v657);
      while ( __strex(v658 - 1, v657) );
      v658 = (*v657)--;
    if ( v658 <= 0 )
      j_j_j_j__ZdlPv_9(v225);
  v226 = Item::mSlimeBall;
  v227 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSlimeBall + 8);
  sub_21E94B4((void **)&v954, "slimeball");
  v227(v226, &v954, 0);
  v228 = (void *)(v954 - 12);
  if ( (int *)(v954 - 12) != &dword_28898C0 )
    v659 = (unsigned int *)(v954 - 4);
        v660 = __ldrex(v659);
      while ( __strex(v660 - 1, v659) );
      v660 = (*v659)--;
    if ( v660 <= 0 )
      j_j_j_j__ZdlPv_9(v228);
  v229 = Item::mChestMinecart;
  v230 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mChestMinecart + 8);
  sub_21E94B4((void **)&v953, "minecart_chest");
  v230(v229, &v953, 0);
  v231 = (void *)(v953 - 12);
  if ( (int *)(v953 - 12) != &dword_28898C0 )
    v661 = (unsigned int *)(v953 - 4);
        v662 = __ldrex(v661);
      while ( __strex(v662 - 1, v661) );
      v662 = (*v661)--;
    if ( v662 <= 0 )
      j_j_j_j__ZdlPv_9(v231);
  v232 = Item::mEgg;
  v233 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEgg + 8);
  sub_21E94B4((void **)&v952, "egg");
  v233(v232, &v952, 0);
  v234 = (void *)(v952 - 12);
  if ( (int *)(v952 - 12) != &dword_28898C0 )
    v663 = (unsigned int *)(v952 - 4);
        v664 = __ldrex(v663);
      while ( __strex(v664 - 1, v663) );
      v664 = (*v663)--;
    if ( v664 <= 0 )
      j_j_j_j__ZdlPv_9(v234);
  v235 = Item::mCompass;
  v236 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCompass + 8);
  sub_21E94B4((void **)&v951, "compass_item");
  v236(v235, &v951, 0);
  v237 = (void *)(v951 - 12);
  if ( (int *)(v951 - 12) != &dword_28898C0 )
    v665 = (unsigned int *)(v951 - 4);
        v666 = __ldrex(v665);
      while ( __strex(v666 - 1, v665) );
      v666 = (*v665)--;
    if ( v666 <= 0 )
      j_j_j_j__ZdlPv_9(v237);
  v238 = Item::mFishingRod;
  v239 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFishingRod + 8);
  sub_21E94B4((void **)&v950, "fishing_rod");
  v239(v238, &v950, 0);
  v240 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v667 = (unsigned int *)(v950 - 4);
        v668 = __ldrex(v667);
      while ( __strex(v668 - 1, v667) );
      v668 = (*v667)--;
    if ( v668 <= 0 )
      j_j_j_j__ZdlPv_9(v240);
  v241 = Item::mClock;
  v242 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mClock + 8);
  sub_21E94B4((void **)&v949, "clock_item");
  v242(v241, &v949, 0);
  v243 = (void *)(v949 - 12);
  if ( (int *)(v949 - 12) != &dword_28898C0 )
    v669 = (unsigned int *)(v949 - 4);
        v670 = __ldrex(v669);
      while ( __strex(v670 - 1, v669) );
      v670 = (*v669)--;
    if ( v670 <= 0 )
      j_j_j_j__ZdlPv_9(v243);
  v244 = Item::mYellowDust;
  v245 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mYellowDust + 8);
  sub_21E94B4((void **)&v948, "glowstone_dust");
  v245(v244, &v948, 0);
  v246 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v671 = (unsigned int *)(v948 - 4);
        v672 = __ldrex(v671);
      while ( __strex(v672 - 1, v671) );
      v672 = (*v671)--;
    if ( v672 <= 0 )
      j_j_j_j__ZdlPv_9(v246);
  v247 = Item::mDye_powder;
  v248 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDye_powder + 8);
  sub_21E94B4((void **)&v947, "dye_powder");
  v248(v247, &v947, 0);
  v249 = (void *)(v947 - 12);
  if ( (int *)(v947 - 12) != &dword_28898C0 )
    v673 = (unsigned int *)(v947 - 4);
        v674 = __ldrex(v673);
      while ( __strex(v674 - 1, v673) );
      v674 = (*v673)--;
    if ( v674 <= 0 )
      j_j_j_j__ZdlPv_9(v249);
  v250 = Item::mBone;
  v251 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBone + 8);
  sub_21E94B4((void **)&v946, "bone");
  v251(v250, &v946, 0);
  v252 = (void *)(v946 - 12);
  if ( (int *)(v946 - 12) != &dword_28898C0 )
    v675 = (unsigned int *)(v946 - 4);
        v676 = __ldrex(v675);
      while ( __strex(v676 - 1, v675) );
      v676 = (*v675)--;
    if ( v676 <= 0 )
      j_j_j_j__ZdlPv_9(v252);
  v253 = Item::mSugar;
  v254 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSugar + 8);
  sub_21E94B4((void **)&v945, "sugar");
  v254(v253, &v945, 0);
  v255 = (void *)(v945 - 12);
  if ( (int *)(v945 - 12) != &dword_28898C0 )
    v677 = (unsigned int *)(v945 - 4);
        v678 = __ldrex(v677);
      while ( __strex(v678 - 1, v677) );
      v678 = (*v677)--;
    if ( v678 <= 0 )
      j_j_j_j__ZdlPv_9(v255);
  v256 = Item::mCake;
  v257 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCake + 8);
  sub_21E94B4((void **)&v944, "cake");
  v257(v256, &v944, 0);
  v258 = (void *)(v944 - 12);
  if ( (int *)(v944 - 12) != &dword_28898C0 )
    v679 = (unsigned int *)(v944 - 4);
        v680 = __ldrex(v679);
      while ( __strex(v680 - 1, v679) );
      v680 = (*v679)--;
    if ( v680 <= 0 )
      j_j_j_j__ZdlPv_9(v258);
  v259 = Item::mBed;
  v260 = *(int (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBed + 8);
  sub_21E94B4((void **)&v943, "bed");
  v261 = v260(v259, &v943, 0);
  (*(void (**)(void))(*(_DWORD *)v261 + 16))();
  v262 = (void *)(v943 - 12);
  if ( (int *)(v943 - 12) != &dword_28898C0 )
    v681 = (unsigned int *)(v943 - 4);
        v682 = __ldrex(v681);
      while ( __strex(v682 - 1, v681) );
      v682 = (*v681)--;
    if ( v682 <= 0 )
      j_j_j_j__ZdlPv_9(v262);
  v263 = Item::mRepeater;
  v264 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRepeater + 8);
  sub_21E94B4((void **)&v942, "repeater");
  v264(v263, &v942, 0);
  v265 = (void *)(v942 - 12);
  if ( (int *)(v942 - 12) != &dword_28898C0 )
    v683 = (unsigned int *)(v942 - 4);
        v684 = __ldrex(v683);
      while ( __strex(v684 - 1, v683) );
      v684 = (*v683)--;
    if ( v684 <= 0 )
      j_j_j_j__ZdlPv_9(v265);
  v266 = Item::mFilledMap;
  v267 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFilledMap + 8);
  sub_21E94B4((void **)&v941, "map_filled");
  v267(v266, &v941, 0);
  v268 = (void *)(v941 - 12);
  if ( (int *)(v941 - 12) != &dword_28898C0 )
    v685 = (unsigned int *)(v941 - 4);
        v686 = __ldrex(v685);
      while ( __strex(v686 - 1, v685) );
      v686 = (*v685)--;
    if ( v686 <= 0 )
      j_j_j_j__ZdlPv_9(v268);
  v269 = Item::mShears;
  v270 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mShears + 8);
  sub_21E94B4((void **)&v940, "shears");
  v270(v269, &v940, 0);
  v271 = (void *)(v940 - 12);
  if ( (int *)(v940 - 12) != &dword_28898C0 )
    v687 = (unsigned int *)(v940 - 4);
        v688 = __ldrex(v687);
      while ( __strex(v688 - 1, v687) );
      v688 = (*v687)--;
    if ( v688 <= 0 )
      j_j_j_j__ZdlPv_9(v271);
  v272 = Item::mEnderpearl;
  v273 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEnderpearl + 8);
  sub_21E94B4((void **)&v939, "ender_pearl");
  v273(v272, &v939, 0);
  v274 = (void *)(v939 - 12);
  if ( (int *)(v939 - 12) != &dword_28898C0 )
    v689 = (unsigned int *)(v939 - 4);
        v690 = __ldrex(v689);
      while ( __strex(v690 - 1, v689) );
      v690 = (*v689)--;
    if ( v690 <= 0 )
      j_j_j_j__ZdlPv_9(v274);
  v275 = Item::mBlazeRod;
  v276 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBlazeRod + 8);
  sub_21E94B4((void **)&v938, "blaze_rod");
  v276(v275, &v938, 0);
  v277 = (void *)(v938 - 12);
  if ( (int *)(v938 - 12) != &dword_28898C0 )
    v691 = (unsigned int *)(v938 - 4);
        v692 = __ldrex(v691);
      while ( __strex(v692 - 1, v691) );
      v692 = (*v691)--;
    if ( v692 <= 0 )
      j_j_j_j__ZdlPv_9(v277);
  v278 = Item::mGhast_tear;
  v279 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mGhast_tear + 8);
  sub_21E94B4((void **)&v937, "ghast_tear");
  v279(v278, &v937, 0);
  v280 = (void *)(v937 - 12);
  if ( (int *)(v937 - 12) != &dword_28898C0 )
    v693 = (unsigned int *)(v937 - 4);
        v694 = __ldrex(v693);
      while ( __strex(v694 - 1, v693) );
      v694 = (*v693)--;
    if ( v694 <= 0 )
      j_j_j_j__ZdlPv_9(v280);
  v281 = Item::mGold_nugget;
  v282 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mGold_nugget + 8);
  sub_21E94B4((void **)&v936, "gold_nugget");
  v282(v281, &v936, 0);
  v283 = (void *)(v936 - 12);
  if ( (int *)(v936 - 12) != &dword_28898C0 )
    v695 = (unsigned int *)(v936 - 4);
        v696 = __ldrex(v695);
      while ( __strex(v696 - 1, v695) );
      v696 = (*v695)--;
    if ( v696 <= 0 )
      j_j_j_j__ZdlPv_9(v283);
  v284 = Item::mIron_nugget;
  v285 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mIron_nugget + 8);
  sub_21E94B4((void **)&v935, "iron_nugget");
  v285(v284, &v935, 0);
  v286 = (void *)(v935 - 12);
  if ( (int *)(v935 - 12) != &dword_28898C0 )
    v697 = (unsigned int *)(v935 - 4);
        v698 = __ldrex(v697);
      while ( __strex(v698 - 1, v697) );
      v698 = (*v697)--;
    if ( v698 <= 0 )
      j_j_j_j__ZdlPv_9(v286);
  v287 = Item::mPotion;
  v288 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPotion + 8);
  sub_21E94B4((void **)&v934, "potion_overlay");
  v288(v287, &v934, 0);
  v289 = (void *)(v934 - 12);
  if ( (int *)(v934 - 12) != &dword_28898C0 )
    v699 = (unsigned int *)(v934 - 4);
        v700 = __ldrex(v699);
      while ( __strex(v700 - 1, v699) );
      v700 = (*v699)--;
    if ( v700 <= 0 )
      j_j_j_j__ZdlPv_9(v289);
  v290 = Item::mGlass_bottle;
  v291 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mGlass_bottle + 8);
  sub_21E94B4((void **)&v933, "potion_bottle_empty");
  v291(v290, &v933, 0);
  v292 = (void *)(v933 - 12);
  if ( (int *)(v933 - 12) != &dword_28898C0 )
    v701 = (unsigned int *)(v933 - 4);
        v702 = __ldrex(v701);
      while ( __strex(v702 - 1, v701) );
      v702 = (*v701)--;
    if ( v702 <= 0 )
      j_j_j_j__ZdlPv_9(v292);
  v293 = Item::mFermented_spider_eye;
  v294 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFermented_spider_eye + 8);
  sub_21E94B4((void **)&v932, "spider_eye_fermented");
  v294(v293, &v932, 0);
  v295 = (void *)(v932 - 12);
  if ( (int *)(v932 - 12) != &dword_28898C0 )
    v703 = (unsigned int *)(v932 - 4);
        v704 = __ldrex(v703);
      while ( __strex(v704 - 1, v703) );
      v704 = (*v703)--;
    if ( v704 <= 0 )
      j_j_j_j__ZdlPv_9(v295);
  v296 = Item::mBlazePowder;
  v297 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBlazePowder + 8);
  sub_21E94B4((void **)&v931, "blaze_powder");
  v297(v296, &v931, 0);
  v298 = (void *)(v931 - 12);
  if ( (int *)(v931 - 12) != &dword_28898C0 )
    v705 = (unsigned int *)(v931 - 4);
        v706 = __ldrex(v705);
      while ( __strex(v706 - 1, v705) );
      v706 = (*v705)--;
    if ( v706 <= 0 )
      j_j_j_j__ZdlPv_9(v298);
  v299 = Item::mMagma_cream;
  v300 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mMagma_cream + 8);
  sub_21E94B4((void **)&v930, "magma_cream");
  v300(v299, &v930, 0);
  v301 = (void *)(v930 - 12);
  if ( (int *)(v930 - 12) != &dword_28898C0 )
    v707 = (unsigned int *)(v930 - 4);
        v708 = __ldrex(v707);
      while ( __strex(v708 - 1, v707) );
      v708 = (*v707)--;
    if ( v708 <= 0 )
      j_j_j_j__ZdlPv_9(v301);
  v302 = Item::mBrewing_stand;
  v303 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBrewing_stand + 8);
  sub_21E94B4((void **)&v929, "brewing_stand");
  v303(v302, &v929, 0);
  v304 = (void *)(v929 - 12);
  if ( (int *)(v929 - 12) != &dword_28898C0 )
    v709 = (unsigned int *)(v929 - 4);
        v710 = __ldrex(v709);
      while ( __strex(v710 - 1, v709) );
      v710 = (*v709)--;
    if ( v710 <= 0 )
      j_j_j_j__ZdlPv_9(v304);
  v305 = Item::mCauldron;
  v306 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCauldron + 8);
  sub_21E94B4((void **)&v928, "cauldron");
  v306(v305, &v928, 0);
  v307 = (void *)(v928 - 12);
  if ( (int *)(v928 - 12) != &dword_28898C0 )
    v711 = (unsigned int *)(v928 - 4);
        v712 = __ldrex(v711);
      while ( __strex(v712 - 1, v711) );
      v712 = (*v711)--;
    if ( v712 <= 0 )
      j_j_j_j__ZdlPv_9(v307);
  v308 = Item::mEnderEye;
  v309 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEnderEye + 8);
  sub_21E94B4((void **)&v927, "ender_eye");
  v309(v308, &v927, 0);
  v310 = (void *)(v927 - 12);
  if ( (int *)(v927 - 12) != &dword_28898C0 )
    v713 = (unsigned int *)(v927 - 4);
        v714 = __ldrex(v713);
      while ( __strex(v714 - 1, v713) );
      v714 = (*v713)--;
    if ( v714 <= 0 )
      j_j_j_j__ZdlPv_9(v310);
  v311 = Item::mSpeckled_melon;
  v312 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSpeckled_melon + 8);
  sub_21E94B4((void **)&v926, "melon_speckled");
  v312(v311, &v926, 0);
  v313 = (void *)(v926 - 12);
  if ( (int *)(v926 - 12) != &dword_28898C0 )
    v715 = (unsigned int *)(v926 - 4);
        v716 = __ldrex(v715);
      while ( __strex(v716 - 1, v715) );
      v716 = (*v715)--;
    if ( v716 <= 0 )
      j_j_j_j__ZdlPv_9(v313);
  v314 = Item::mMobPlacer;
  v315 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mMobPlacer + 8);
  sub_21E94B4((void **)&v925, "spawn_egg");
  v315(v314, &v925, 0);
  v316 = (void *)(v925 - 12);
  if ( (int *)(v925 - 12) != &dword_28898C0 )
    v717 = (unsigned int *)(v925 - 4);
        v718 = __ldrex(v717);
      while ( __strex(v718 - 1, v717) );
      v718 = (*v717)--;
    if ( v718 <= 0 )
      j_j_j_j__ZdlPv_9(v316);
  v317 = Item::mExperiencePotionItem;
  v318 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mExperiencePotionItem + 8);
  sub_21E94B4((void **)&v924, "experience_bottle");
  v318(v317, &v924, 0);
  v319 = (void *)(v924 - 12);
  if ( (int *)(v924 - 12) != &dword_28898C0 )
    v719 = (unsigned int *)(v924 - 4);
        v720 = __ldrex(v719);
      while ( __strex(v720 - 1, v719) );
      v720 = (*v719)--;
    if ( v720 <= 0 )
      j_j_j_j__ZdlPv_9(v319);
  v320 = Item::mFireCharge;
  v321 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFireCharge + 8);
  sub_21E94B4((void **)&v923, "fireball");
  v321(v320, &v923, 0);
  v322 = (void *)(v923 - 12);
  if ( (int *)(v923 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v923 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j__ZdlPv_9(v322);
  v323 = Item::mWritable_book;
  v324 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mWritable_book + 8);
  sub_21E94B4((void **)&v922, "book_writable");
  v324(v323, &v922, 0);
  v325 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v922 - 4);
        v724 = __ldrex(v723);
      while ( __strex(v724 - 1, v723) );
      v724 = (*v723)--;
    if ( v724 <= 0 )
      j_j_j_j__ZdlPv_9(v325);
  v326 = Item::mWritten_book;
  v327 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mWritten_book + 8);
  sub_21E94B4((void **)&v921, "book_written");
  v327(v326, &v921, 0);
  v328 = (void *)(v921 - 12);
  if ( (int *)(v921 - 12) != &dword_28898C0 )
    v725 = (unsigned int *)(v921 - 4);
        v726 = __ldrex(v725);
      while ( __strex(v726 - 1, v725) );
      v726 = (*v725)--;
    if ( v726 <= 0 )
      j_j_j_j__ZdlPv_9(v328);
  v329 = Item::mEmerald;
  v330 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEmerald + 8);
  sub_21E94B4((void **)&v920, "emerald");
  v330(v329, &v920, 0);
  v331 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v727 = (unsigned int *)(v920 - 4);
        v728 = __ldrex(v727);
      while ( __strex(v728 - 1, v727) );
      v728 = (*v727)--;
    if ( v728 <= 0 )
      j_j_j_j__ZdlPv_9(v331);
  v332 = Item::mItemFrame;
  v333 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mItemFrame + 8);
  sub_21E94B4((void **)&v919, "item_frame");
  v333(v332, &v919, 0);
  v334 = (void *)(v919 - 12);
  if ( (int *)(v919 - 12) != &dword_28898C0 )
    v729 = (unsigned int *)(v919 - 4);
        v730 = __ldrex(v729);
      while ( __strex(v730 - 1, v729) );
      v730 = (*v729)--;
    if ( v730 <= 0 )
      j_j_j_j__ZdlPv_9(v334);
  v335 = Item::mFlowerPot;
  v336 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFlowerPot + 8);
  sub_21E94B4((void **)&v918, "flower_pot");
  v336(v335, &v918, 0);
  v337 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v731 = (unsigned int *)(v918 - 4);
        v732 = __ldrex(v731);
      while ( __strex(v732 - 1, v731) );
      v732 = (*v731)--;
    if ( v732 <= 0 )
      j_j_j_j__ZdlPv_9(v337);
  v338 = Item::mEmptyMap;
  v339 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEmptyMap + 8);
  sub_21E94B4((void **)&v917, "map_empty");
  v339(v338, &v917, 0);
  v340 = (void *)(v917 - 12);
  if ( (int *)(v917 - 12) != &dword_28898C0 )
    v733 = (unsigned int *)(v917 - 4);
        v734 = __ldrex(v733);
      while ( __strex(v734 - 1, v733) );
      v734 = (*v733)--;
    if ( v734 <= 0 )
      j_j_j_j__ZdlPv_9(v340);
  v341 = Item::mCarrotOnAStick;
  v342 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCarrotOnAStick + 8);
  sub_21E94B4((void **)&v916, "carrot_on_a_stick");
  v342(v341, &v916, 0);
  v343 = (void *)(v916 - 12);
  if ( (int *)(v916 - 12) != &dword_28898C0 )
    v735 = (unsigned int *)(v916 - 4);
        v736 = __ldrex(v735);
      while ( __strex(v736 - 1, v735) );
      v736 = (*v735)--;
    if ( v736 <= 0 )
      j_j_j_j__ZdlPv_9(v343);
  v344 = Item::mFireworksItem;
  v345 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFireworksItem + 8);
  sub_21E94B4((void **)&v915, "fireworks");
  v345(v344, &v915, 0);
  v346 = (void *)(v915 - 12);
  if ( (int *)(v915 - 12) != &dword_28898C0 )
    v737 = (unsigned int *)(v915 - 4);
        v738 = __ldrex(v737);
      while ( __strex(v738 - 1, v737) );
      v738 = (*v737)--;
    if ( v738 <= 0 )
      j_j_j_j__ZdlPv_9(v346);
  v347 = Item::mFireworkCharge;
  v348 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mFireworkCharge + 8);
  sub_21E94B4((void **)&v914, "fireworks_charge");
  v348(v347, &v914, 0);
  v349 = (void *)(v914 - 12);
  if ( (int *)(v914 - 12) != &dword_28898C0 )
    v739 = (unsigned int *)(v914 - 4);
        v740 = __ldrex(v739);
      while ( __strex(v740 - 1, v739) );
      v740 = (*v739)--;
    if ( v740 <= 0 )
      j_j_j_j__ZdlPv_9(v349);
  v350 = Item::mNetherStar;
  v351 = *(int (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mNetherStar + 8);
  sub_21E94B4((void **)&v913, "nether_star");
  v352 = v351(v350, &v913, 0);
  v353 = (*(int (**)(void))(*(_DWORD *)v352 + 48))();
  v354 = (*(int (**)(void))(*(_DWORD *)v353 + 52))();
  (*(void (**)(void))(*(_DWORD *)v354 + 56))();
  v355 = (void *)(v913 - 12);
  if ( (int *)(v913 - 12) != &dword_28898C0 )
    v741 = (unsigned int *)(v913 - 4);
        v742 = __ldrex(v741);
      while ( __strex(v742 - 1, v741) );
      v742 = (*v741)--;
    if ( v742 <= 0 )
      j_j_j_j__ZdlPv_9(v355);
  v356 = Item::mEnchanted_book;
  v357 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEnchanted_book + 8);
  sub_21E94B4((void **)&v912, "book_enchanted");
  v357(v356, &v912, 0);
  v358 = (void *)(v912 - 12);
  if ( (int *)(v912 - 12) != &dword_28898C0 )
    v743 = (unsigned int *)(v912 - 4);
        v744 = __ldrex(v743);
      while ( __strex(v744 - 1, v743) );
      v744 = (*v743)--;
    if ( v744 <= 0 )
      j_j_j_j__ZdlPv_9(v358);
  v359 = Item::mComparator;
  v360 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mComparator + 8);
  sub_21E94B4((void **)&v911, "comparator");
  v360(v359, &v911, 0);
  v361 = (void *)(v911 - 12);
  if ( (int *)(v911 - 12) != &dword_28898C0 )
    v745 = (unsigned int *)(v911 - 4);
        v746 = __ldrex(v745);
      while ( __strex(v746 - 1, v745) );
      v746 = (*v745)--;
    if ( v746 <= 0 )
      j_j_j_j__ZdlPv_9(v361);
  v362 = Item::mNetherbrick;
  v363 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mNetherbrick + 8);
  sub_21E94B4((void **)&v910, "netherbrick");
  v363(v362, &v910, 0);
  v364 = (void *)(v910 - 12);
  if ( (int *)(v910 - 12) != &dword_28898C0 )
    v747 = (unsigned int *)(v910 - 4);
        v748 = __ldrex(v747);
      while ( __strex(v748 - 1, v747) );
      v748 = (*v747)--;
    if ( v748 <= 0 )
      j_j_j_j__ZdlPv_9(v364);
  v365 = Item::mNetherQuartz;
  v366 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mNetherQuartz + 8);
  sub_21E94B4((void **)&v909, "quartz");
  v366(v365, &v909, 0);
  v367 = (void *)(v909 - 12);
  if ( (int *)(v909 - 12) != &dword_28898C0 )
    v749 = (unsigned int *)(v909 - 4);
        v750 = __ldrex(v749);
      while ( __strex(v750 - 1, v749) );
      v750 = (*v749)--;
    if ( v750 <= 0 )
      j_j_j_j__ZdlPv_9(v367);
  v368 = Item::mTNTMinecart;
  v369 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mTNTMinecart + 8);
  sub_21E94B4((void **)&v908, "minecart_tnt");
  v369(v368, &v908, 0);
  v370 = (void *)(v908 - 12);
  if ( (int *)(v908 - 12) != &dword_28898C0 )
    v751 = (unsigned int *)(v908 - 4);
        v752 = __ldrex(v751);
      while ( __strex(v752 - 1, v751) );
      v752 = (*v751)--;
    if ( v752 <= 0 )
      j_j_j_j__ZdlPv_9(v370);
  v371 = Item::mHopperMinecart;
  v372 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mHopperMinecart + 8);
  sub_21E94B4((void **)&v907, "minecart_hopper");
  v372(v371, &v907, 0);
  v373 = (void *)(v907 - 12);
  if ( (int *)(v907 - 12) != &dword_28898C0 )
    v753 = (unsigned int *)(v907 - 4);
        v754 = __ldrex(v753);
      while ( __strex(v754 - 1, v753) );
      v754 = (*v753)--;
    if ( v754 <= 0 )
      j_j_j_j__ZdlPv_9(v373);
  v374 = Item::mHopper;
  v375 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mHopper + 8);
  sub_21E94B4((void **)&v906, "hopper");
  v375(v374, &v906, 0);
  v376 = (void *)(v906 - 12);
  if ( (int *)(v906 - 12) != &dword_28898C0 )
    v755 = (unsigned int *)(v906 - 4);
        v756 = __ldrex(v755);
      while ( __strex(v756 - 1, v755) );
      v756 = (*v755)--;
    if ( v756 <= 0 )
      j_j_j_j__ZdlPv_9(v376);
  v377 = Item::mRabbitFoot;
  v378 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRabbitFoot + 8);
  sub_21E94B4((void **)&v905, "rabbit_foot");
  v378(v377, &v905, 0);
  v379 = (void *)(v905 - 12);
  if ( (int *)(v905 - 12) != &dword_28898C0 )
    v757 = (unsigned int *)(v905 - 4);
        v758 = __ldrex(v757);
      while ( __strex(v758 - 1, v757) );
      v758 = (*v757)--;
    if ( v758 <= 0 )
      j_j_j_j__ZdlPv_9(v379);
  v380 = Item::mRabbitHide;
  v381 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRabbitHide + 8);
  sub_21E94B4((void **)&v904, "rabbit_hide");
  v381(v380, &v904, 0);
  v382 = (void *)(v904 - 12);
  if ( (int *)(v904 - 12) != &dword_28898C0 )
    v759 = (unsigned int *)(v904 - 4);
        v760 = __ldrex(v759);
      while ( __strex(v760 - 1, v759) );
      v760 = (*v759)--;
    if ( v760 <= 0 )
      j_j_j_j__ZdlPv_9(v382);
  v383 = Item::mArmorStand;
  v384 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mArmorStand + 8);
  sub_21E94B4((void **)&v903, "armor_stand");
  v384(v383, &v903, 0);
  v385 = (void *)(v903 - 12);
  if ( (int *)(v903 - 12) != &dword_28898C0 )
    v761 = (unsigned int *)(v903 - 4);
        v762 = __ldrex(v761);
      while ( __strex(v762 - 1, v761) );
      v762 = (*v761)--;
    if ( v762 <= 0 )
      j_j_j_j__ZdlPv_9(v385);
  v386 = Item::mLeatherHorseArmor;
  v387 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mLeatherHorseArmor + 8);
  sub_21E94B4((void **)&v902, "leather_horse_armor");
  v387(v386, &v902, 0);
  v388 = (void *)(v902 - 12);
  if ( (int *)(v902 - 12) != &dword_28898C0 )
    v763 = (unsigned int *)(v902 - 4);
        v764 = __ldrex(v763);
      while ( __strex(v764 - 1, v763) );
      v764 = (*v763)--;
    if ( v764 <= 0 )
      j_j_j_j__ZdlPv_9(v388);
  v389 = Item::mIronHorseArmor;
  v390 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mIronHorseArmor + 8);
  sub_21E94B4((void **)&v901, "iron_horse_armor");
  v390(v389, &v901, 0);
  v391 = (void *)(v901 - 12);
  if ( (int *)(v901 - 12) != &dword_28898C0 )
    v765 = (unsigned int *)(v901 - 4);
        v766 = __ldrex(v765);
      while ( __strex(v766 - 1, v765) );
      v766 = (*v765)--;
    if ( v766 <= 0 )
      j_j_j_j__ZdlPv_9(v391);
  v392 = Item::mGoldHorseArmor;
  v393 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mGoldHorseArmor + 8);
  sub_21E94B4((void **)&v900, "gold_horse_armor");
  v393(v392, &v900, 0);
  v394 = (void *)(v900 - 12);
  if ( (int *)(v900 - 12) != &dword_28898C0 )
    v767 = (unsigned int *)(v900 - 4);
        v768 = __ldrex(v767);
      while ( __strex(v768 - 1, v767) );
      v768 = (*v767)--;
    if ( v768 <= 0 )
      j_j_j_j__ZdlPv_9(v394);
  v395 = Item::mDiamondHorseArmor;
  v396 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDiamondHorseArmor + 8);
  sub_21E94B4((void **)&v899, "diamond_horse_armor");
  v396(v395, &v899, 0);
  v397 = (void *)(v899 - 12);
  if ( (int *)(v899 - 12) != &dword_28898C0 )
    v769 = (unsigned int *)(v899 - 4);
        v770 = __ldrex(v769);
      while ( __strex(v770 - 1, v769) );
      v770 = (*v769)--;
    if ( v770 <= 0 )
      j_j_j_j__ZdlPv_9(v397);
  v398 = Item::mRecord13;
  v399 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecord13 + 8);
  sub_21E94B4((void **)&v898, "record_13");
  v399(v398, &v898, 0);
  v400 = (void *)(v898 - 12);
  if ( (int *)(v898 - 12) != &dword_28898C0 )
    v771 = (unsigned int *)(v898 - 4);
        v772 = __ldrex(v771);
      while ( __strex(v772 - 1, v771) );
      v772 = (*v771)--;
    if ( v772 <= 0 )
      j_j_j_j__ZdlPv_9(v400);
  v401 = Item::mRecordCat;
  v402 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordCat + 8);
  sub_21E94B4((void **)&v897, "record_cat");
  v402(v401, &v897, 0);
  v403 = (void *)(v897 - 12);
  if ( (int *)(v897 - 12) != &dword_28898C0 )
    v773 = (unsigned int *)(v897 - 4);
        v774 = __ldrex(v773);
      while ( __strex(v774 - 1, v773) );
      v774 = (*v773)--;
    if ( v774 <= 0 )
      j_j_j_j__ZdlPv_9(v403);
  v404 = Item::mRecordBlocks;
  v405 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordBlocks + 8);
  sub_21E94B4((void **)&v896, "record_blocks");
  v405(v404, &v896, 0);
  v406 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v775 = (unsigned int *)(v896 - 4);
        v776 = __ldrex(v775);
      while ( __strex(v776 - 1, v775) );
      v776 = (*v775)--;
    if ( v776 <= 0 )
      j_j_j_j__ZdlPv_9(v406);
  v407 = Item::mRecordChirp;
  v408 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordChirp + 8);
  sub_21E94B4((void **)&v895, "record_chirp");
  v408(v407, &v895, 0);
  v409 = (void *)(v895 - 12);
  if ( (int *)(v895 - 12) != &dword_28898C0 )
    v777 = (unsigned int *)(v895 - 4);
        v778 = __ldrex(v777);
      while ( __strex(v778 - 1, v777) );
      v778 = (*v777)--;
    if ( v778 <= 0 )
      j_j_j_j__ZdlPv_9(v409);
  v410 = Item::mRecordFar;
  v411 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordFar + 8);
  sub_21E94B4((void **)&v894, "record_far");
  v411(v410, &v894, 0);
  v412 = (void *)(v894 - 12);
  if ( (int *)(v894 - 12) != &dword_28898C0 )
    v779 = (unsigned int *)(v894 - 4);
        v780 = __ldrex(v779);
      while ( __strex(v780 - 1, v779) );
      v780 = (*v779)--;
    if ( v780 <= 0 )
      j_j_j_j__ZdlPv_9(v412);
  v413 = Item::mRecordMall;
  v414 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordMall + 8);
  sub_21E94B4((void **)&v893, "record_mall");
  v414(v413, &v893, 0);
  v415 = (void *)(v893 - 12);
  if ( (int *)(v893 - 12) != &dword_28898C0 )
    v781 = (unsigned int *)(v893 - 4);
        v782 = __ldrex(v781);
      while ( __strex(v782 - 1, v781) );
      v782 = (*v781)--;
    if ( v782 <= 0 )
      j_j_j_j__ZdlPv_9(v415);
  v416 = Item::mRecordMellohi;
  v417 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordMellohi + 8);
  sub_21E94B4((void **)&v892, "record_mellohi");
  v417(v416, &v892, 0);
  v418 = (void *)(v892 - 12);
  if ( (int *)(v892 - 12) != &dword_28898C0 )
    v783 = (unsigned int *)(v892 - 4);
        v784 = __ldrex(v783);
      while ( __strex(v784 - 1, v783) );
      v784 = (*v783)--;
    if ( v784 <= 0 )
      j_j_j_j__ZdlPv_9(v418);
  v419 = Item::mRecordStal;
  v420 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordStal + 8);
  sub_21E94B4((void **)&v891, "record_stal");
  v420(v419, &v891, 0);
  v421 = (void *)(v891 - 12);
  if ( (int *)(v891 - 12) != &dword_28898C0 )
    v785 = (unsigned int *)(v891 - 4);
        v786 = __ldrex(v785);
      while ( __strex(v786 - 1, v785) );
      v786 = (*v785)--;
    if ( v786 <= 0 )
      j_j_j_j__ZdlPv_9(v421);
  v422 = Item::mRecordStrad;
  v423 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordStrad + 8);
  sub_21E94B4((void **)&v890, "record_strad");
  v423(v422, &v890, 0);
  v424 = (void *)(v890 - 12);
  if ( (int *)(v890 - 12) != &dword_28898C0 )
    v787 = (unsigned int *)(v890 - 4);
        v788 = __ldrex(v787);
      while ( __strex(v788 - 1, v787) );
      v788 = (*v787)--;
    if ( v788 <= 0 )
      j_j_j_j__ZdlPv_9(v424);
  v425 = Item::mRecordWard;
  v426 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordWard + 8);
  sub_21E94B4((void **)&v889, "record_ward");
  v426(v425, &v889, 0);
  v427 = (void *)(v889 - 12);
  if ( (int *)(v889 - 12) != &dword_28898C0 )
    v789 = (unsigned int *)(v889 - 4);
        v790 = __ldrex(v789);
      while ( __strex(v790 - 1, v789) );
      v790 = (*v789)--;
    if ( v790 <= 0 )
      j_j_j_j__ZdlPv_9(v427);
  v428 = Item::mRecord11;
  v429 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecord11 + 8);
  sub_21E94B4((void **)&v888, "record_11");
  v429(v428, &v888, 0);
  v430 = (void *)(v888 - 12);
  if ( (int *)(v888 - 12) != &dword_28898C0 )
    v791 = (unsigned int *)(v888 - 4);
        v792 = __ldrex(v791);
      while ( __strex(v792 - 1, v791) );
      v792 = (*v791)--;
    if ( v792 <= 0 )
      j_j_j_j__ZdlPv_9(v430);
  v431 = Item::mRecordWait;
  v432 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mRecordWait + 8);
  sub_21E94B4((void **)&v887, "record_wait");
  v432(v431, &v887, 0);
  v433 = (void *)(v887 - 12);
  if ( (int *)(v887 - 12) != &dword_28898C0 )
    v793 = (unsigned int *)(v887 - 4);
        v794 = __ldrex(v793);
      while ( __strex(v794 - 1, v793) );
      v794 = (*v793)--;
    if ( v794 <= 0 )
      j_j_j_j__ZdlPv_9(v433);
  v434 = Item::mLead;
  v435 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mLead + 8);
  sub_21E94B4((void **)&v886, "lead");
  v435(v434, &v886, 0);
  v436 = (void *)(v886 - 12);
  if ( (int *)(v886 - 12) != &dword_28898C0 )
    v795 = (unsigned int *)(v886 - 4);
        v796 = __ldrex(v795);
      while ( __strex(v796 - 1, v795) );
      v796 = (*v795)--;
    if ( v796 <= 0 )
      j_j_j_j__ZdlPv_9(v436);
  v437 = Item::mNameTag;
  v438 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mNameTag + 8);
  sub_21E94B4((void **)&v885, "name_tag");
  v438(v437, &v885, 0);
  v439 = (void *)(v885 - 12);
  if ( (int *)(v885 - 12) != &dword_28898C0 )
    v797 = (unsigned int *)(v885 - 4);
        v798 = __ldrex(v797);
      while ( __strex(v798 - 1, v797) );
      v798 = (*v797)--;
    if ( v798 <= 0 )
      j_j_j_j__ZdlPv_9(v439);
  v440 = Item::mBanner;
  v441 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mBanner + 8);
  sub_21E94B4((void **)&v884, "sign");
  v441(v440, &v884, 0);
  v442 = (void *)(v884 - 12);
  if ( (int *)(v884 - 12) != &dword_28898C0 )
    v799 = (unsigned int *)(v884 - 4);
        v800 = __ldrex(v799);
      while ( __strex(v800 - 1, v799) );
      v800 = (*v799)--;
    if ( v800 <= 0 )
      j_j_j_j__ZdlPv_9(v442);
  v443 = Item::mEndCrystal;
  v444 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mEndCrystal + 8);
  sub_21E94B4((void **)&v883, "end_crystal");
  v444(v443, &v883, 0);
  v445 = (void *)(v883 - 12);
  if ( (int *)(v883 - 12) != &dword_28898C0 )
    v801 = (unsigned int *)(v883 - 4);
        v802 = __ldrex(v801);
      while ( __strex(v802 - 1, v801) );
      v802 = (*v801)--;
    if ( v802 <= 0 )
      j_j_j_j__ZdlPv_9(v445);
  v446 = Item::mDoor_spruce;
  v447 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_spruce + 8);
  sub_21E94B4((void **)&v882, "spruce_door");
  v447(v446, &v882, 0);
  v448 = (void *)(v882 - 12);
  if ( (int *)(v882 - 12) != &dword_28898C0 )
    v803 = (unsigned int *)(v882 - 4);
        v804 = __ldrex(v803);
      while ( __strex(v804 - 1, v803) );
      v804 = (*v803)--;
    if ( v804 <= 0 )
      j_j_j_j__ZdlPv_9(v448);
  v449 = Item::mDoor_birch;
  v450 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_birch + 8);
  sub_21E94B4((void **)&v881, "birch_door");
  v450(v449, &v881, 0);
  v451 = (void *)(v881 - 12);
  if ( (int *)(v881 - 12) != &dword_28898C0 )
    v805 = (unsigned int *)(v881 - 4);
        v806 = __ldrex(v805);
      while ( __strex(v806 - 1, v805) );
      v806 = (*v805)--;
    if ( v806 <= 0 )
      j_j_j_j__ZdlPv_9(v451);
  v452 = Item::mDoor_jungle;
  v453 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_jungle + 8);
  sub_21E94B4((void **)&v880, "jungle_door");
  v453(v452, &v880, 0);
  v454 = (void *)(v880 - 12);
  if ( (int *)(v880 - 12) != &dword_28898C0 )
    v807 = (unsigned int *)(v880 - 4);
        v808 = __ldrex(v807);
      while ( __strex(v808 - 1, v807) );
      v808 = (*v807)--;
    if ( v808 <= 0 )
      j_j_j_j__ZdlPv_9(v454);
  v455 = Item::mDoor_acacia;
  v456 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_acacia + 8);
  sub_21E94B4((void **)&v879, "acacia_door");
  v456(v455, &v879, 0);
  v457 = (void *)(v879 - 12);
  if ( (int *)(v879 - 12) != &dword_28898C0 )
    v809 = (unsigned int *)(v879 - 4);
        v810 = __ldrex(v809);
      while ( __strex(v810 - 1, v809) );
      v810 = (*v809)--;
    if ( v810 <= 0 )
      j_j_j_j__ZdlPv_9(v457);
  v458 = Item::mDoor_darkoak;
  v459 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDoor_darkoak + 8);
  sub_21E94B4((void **)&v878, "dark_oak_door");
  v459(v458, &v878, 0);
  v460 = (void *)(v878 - 12);
  if ( (int *)(v878 - 12) != &dword_28898C0 )
    v811 = (unsigned int *)(v878 - 4);
        v812 = __ldrex(v811);
      while ( __strex(v812 - 1, v811) );
      v812 = (*v811)--;
    if ( v812 <= 0 )
      j_j_j_j__ZdlPv_9(v460);
  v461 = Item::mChorusFruit;
  v462 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mChorusFruit + 8);
  sub_21E94B4((void **)&v877, "chorus_fruit");
  v462(v461, &v877, 0);
  v463 = (void *)(v877 - 12);
  if ( (int *)(v877 - 12) != &dword_28898C0 )
    v813 = (unsigned int *)(v877 - 4);
        v814 = __ldrex(v813);
      while ( __strex(v814 - 1, v813) );
      v814 = (*v813)--;
    if ( v814 <= 0 )
      j_j_j_j__ZdlPv_9(v463);
  v464 = Item::mChorusFruitPopped;
  v465 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mChorusFruitPopped + 8);
  sub_21E94B4((void **)&v876, "chorus_fruit_popped");
  v465(v464, &v876, 0);
  v466 = (void *)(v876 - 12);
  if ( (int *)(v876 - 12) != &dword_28898C0 )
    v815 = (unsigned int *)(v876 - 4);
        v816 = __ldrex(v815);
      while ( __strex(v816 - 1, v815) );
      v816 = (*v815)--;
    if ( v816 <= 0 )
      j_j_j_j__ZdlPv_9(v466);
  v467 = Item::mDragon_breath;
  v468 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mDragon_breath + 8);
  sub_21E94B4((void **)&v875, "dragon_breath");
  v468(v467, &v875, 0);
  v469 = (void *)(v875 - 12);
  if ( (int *)(v875 - 12) != &dword_28898C0 )
    v817 = (unsigned int *)(v875 - 4);
        v818 = __ldrex(v817);
      while ( __strex(v818 - 1, v817) );
      v818 = (*v817)--;
    if ( v818 <= 0 )
      j_j_j_j__ZdlPv_9(v469);
  v470 = Item::mSplash_potion;
  v471 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mSplash_potion + 8);
  sub_21E94B4((void **)&v874, "potion_bottle_splash");
  v471(v470, &v874, 0);
  v472 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v819 = (unsigned int *)(v874 - 4);
        v820 = __ldrex(v819);
      while ( __strex(v820 - 1, v819) );
      v820 = (*v819)--;
    if ( v820 <= 0 )
      j_j_j_j__ZdlPv_9(v472);
  v473 = Item::mLingering_potion;
  v474 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mLingering_potion + 8);
  sub_21E94B4((void **)&v873, "potion_bottle_lingering");
  v474(v473, &v873, 0);
  v475 = (void *)(v873 - 12);
  if ( (int *)(v873 - 12) != &dword_28898C0 )
    v821 = (unsigned int *)(v873 - 4);
        v822 = __ldrex(v821);
      while ( __strex(v822 - 1, v821) );
      v822 = (*v821)--;
    if ( v822 <= 0 )
      j_j_j_j__ZdlPv_9(v475);
  v476 = Item::mPrismarineShard;
  v477 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPrismarineShard + 8);
  sub_21E94B4((void **)&v872, "prismarine_shard");
  v477(v476, &v872, 0);
  v478 = (void *)(v872 - 12);
  if ( (int *)(v872 - 12) != &dword_28898C0 )
    v823 = (unsigned int *)(v872 - 4);
        v824 = __ldrex(v823);
      while ( __strex(v824 - 1, v823) );
      v824 = (*v823)--;
    if ( v824 <= 0 )
      j_j_j_j__ZdlPv_9(v478);
  v479 = Item::mPrismarineCrystals;
  v480 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mPrismarineCrystals + 8);
  sub_21E94B4((void **)&v871, "prismarine_crystals");
  v480(v479, &v871, 0);
  v481 = (void *)(v871 - 12);
  if ( (int *)(v871 - 12) != &dword_28898C0 )
    v825 = (unsigned int *)(v871 - 4);
        v826 = __ldrex(v825);
      while ( __strex(v826 - 1, v825) );
      v826 = (*v825)--;
    if ( v826 <= 0 )
      j_j_j_j__ZdlPv_9(v481);
  v482 = Item::mCommandBlockMinecart;
  v483 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mCommandBlockMinecart + 8);
  sub_21E94B4((void **)&v870, "minecart_command_block");
  v483(v482, &v870, 0);
  v484 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v827 = (unsigned int *)(v870 - 4);
        v828 = __ldrex(v827);
      while ( __strex(v828 - 1, v827) );
      v828 = (*v827)--;
    if ( v828 <= 0 )
      j_j_j_j__ZdlPv_9(v484);
  v485 = Item::mElytra;
  v486 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mElytra + 8);
  sub_21E94B4((void **)&v869, "elytra");
  v486(v485, &v869, 0);
  v487 = (void *)(v869 - 12);
  if ( (int *)(v869 - 12) != &dword_28898C0 )
    v829 = (unsigned int *)(v869 - 4);
        v830 = __ldrex(v829);
      while ( __strex(v830 - 1, v829) );
      v830 = (*v829)--;
    if ( v830 <= 0 )
      j_j_j_j__ZdlPv_9(v487);
  v488 = Item::mShulkerShell;
  v489 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mShulkerShell + 8);
  sub_21E94B4((void **)&v868, "shulker_shell");
  v489(v488, &v868, 0);
  v490 = (void *)(v868 - 12);
  if ( (int *)(v868 - 12) != &dword_28898C0 )
    v831 = (unsigned int *)(v868 - 4);
        v832 = __ldrex(v831);
      while ( __strex(v832 - 1, v831) );
      v832 = (*v831)--;
    if ( v832 <= 0 )
      j_j_j_j__ZdlPv_9(v490);
  v491 = Item::mTotem;
  v492 = *(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)Item::mTotem + 8);
  sub_21E94B4((void **)&v867, "totem");
  v492(v491, &v867, 0);
  v493 = (void *)(v867 - 12);
  if ( (int *)(v867 - 12) != &dword_28898C0 )
    v833 = (unsigned int *)(v867 - 4);
        v834 = __ldrex(v833);
      while ( __strex(v834 - 1, v833) );
      v834 = (*v833)--;
    if ( v834 <= 0 )
      j_j_j_j__ZdlPv_9(v493);
  Json::Value::Value(&v866, 0);
  Json::Reader::Reader((Json::Reader *)&v865);
  v864 = (char *)&unk_28898CC;
  sub_21E94B4((void **)&v862, "items_client.json");
  JsonUtil::ScopeMarker::ScopeMarker(&v863, &v862);
  v494 = (void *)(v862 - 12);
  if ( (int *)(v862 - 12) != &dword_28898C0 )
    v835 = (unsigned int *)(v862 - 4);
        v836 = __ldrex(v835);
      while ( __strex(v836 - 1, v835) );
      v836 = (*v835)--;
    if ( v836 <= 0 )
      j_j_j_j__ZdlPv_9(v494);
  sub_21E94B4((void **)&v859, "items_client.json");
  v860 = v859;
  v859 = (char *)&unk_28898CC;
  v861 = 0;
  v495 = Resource::load((int)&v860);
  v496 = v860 - 12;
  if ( (int *)(v860 - 12) != &dword_28898C0 )
    v837 = (unsigned int *)(v860 - 4);
        v838 = __ldrex(v837);
      while ( __strex(v838 - 1, v837) );
      v838 = (*v837)--;
    if ( v838 <= 0 )
      j_j_j_j__ZdlPv_9(v496);
  v497 = v859 - 12;
  if ( (int *)(v859 - 12) != &dword_28898C0 )
    v839 = (unsigned int *)(v859 - 4);
        v840 = __ldrex(v839);
      while ( __strex(v840 - 1, v839) );
      v840 = (*v839)--;
    if ( v840 <= 0 )
      j_j_j_j__ZdlPv_9(v497);
  if ( v495 == 1 && Json::Reader::parse((int)&v865, (int *)&v864, (int)&v866, 1) == 1 )
    v498 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v866, "items");
    Json::Value::Value((Json::Value *)&v858, v498);
    sub_21E94B4((void **)&v856, "items");
    JsonUtil::ScopeMarker::ScopeMarker(&v857, &v856);
    v499 = (void *)(v856 - 12);
    if ( (int *)(v856 - 12) != &dword_28898C0 )
      v843 = (unsigned int *)(v856 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v844 = __ldrex(v843);
        while ( __strex(v844 - 1, v843) );
      }
      else
        v844 = (*v843)--;
      if ( v844 <= 0 )
        j_j_j_j__ZdlPv_9(v499);
    if ( !Json::Value::isNull((Json::Value *)&v858) )
      Json::Value::Value(&v855, 0);
      sub_21E94B4((void **)&v852, "items_offsets_client.json");
      v853 = v852;
      v852 = (char *)&unk_28898CC;
      v854 = 0;
      v500 = Resource::load((int)&v853);
      v501 = v853 - 12;
      if ( (int *)(v853 - 12) != &dword_28898C0 )
        v845 = (unsigned int *)(v853 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v846 = __ldrex(v845);
          while ( __strex(v846 - 1, v845) );
        }
        else
          v846 = (*v845)--;
        if ( v846 <= 0 )
          j_j_j_j__ZdlPv_9(v501);
      v502 = v852 - 12;
      if ( (int *)(v852 - 12) != &dword_28898C0 )
        v847 = (unsigned int *)(v852 - 4);
            v848 = __ldrex(v847);
          while ( __strex(v848 - 1, v847) );
          v848 = (*v847)--;
        if ( v848 <= 0 )
          j_j_j_j__ZdlPv_9(v502);
      if ( v500 == 1 )
        Json::Reader::parse((int)&v865, (int *)&v864, (int)&v855, 1);
      v503 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v855, "render_offsets");
      Json::Value::Value((Json::Value *)&v851, v503);
      v504 = 0;
        v505 = Item::mItems[v504];
        if ( v505 )
          v506 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v858, (const char **)(v505 + 24));
          Json::Value::Value((Json::Value *)&v850, v506);
          if ( !Json::Value::isNull((Json::Value *)&v850) && Json::Value::isObject((Json::Value *)&v850) == 1 )
          {
            JsonUtil::ScopeMarker::ScopeMarker(&v849, (int *)(v505 + 24));
            Item::initClient((Item *)v505, (Json::Value *)&v850, (Json::Value *)&v851);
            JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v849);
          }
          Json::Value::~Value((Json::Value *)&v850);
        ++v504;
      while ( v504 < 512 );
      Json::Value::~Value((Json::Value *)&v851);
      Json::Value::~Value((Json::Value *)&v855);
    JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v857);
    Json::Value::~Value((Json::Value *)&v858);
  JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v863);
  v507 = v864 - 12;
  if ( (int *)(v864 - 12) != &dword_28898C0 )
    v841 = (unsigned int *)(v864 - 4);
        v842 = __ldrex(v841);
      while ( __strex(v842 - 1, v841) );
      v842 = (*v841)--;
    if ( v842 <= 0 )
      j_j_j_j__ZdlPv_9(v507);
  Json::Reader::~Reader((Json::Reader *)&v865);
  return Json::Value::~Value((Json::Value *)&v866);
}


CameraItemComponent *__fastcall Item::releaseUsing(Item *this, ItemInstance *a2, Player *a3, int a4)
{
  CameraItemComponent *result; // r0@1

  result = (CameraItemComponent *)*((_DWORD *)this + 27);
  if ( result )
    result = (CameraItemComponent *)j_j_j__ZN19CameraItemComponent12releaseUsingER12ItemInstanceR6Playeri(
                                      result,
                                      a2,
                                      a3,
                                      a4);
  else
    JUMPOUT(0, Item::getDestroySpeed);
  return result;
}


int __fastcall Item::registerItems(Item *this)
{
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  int v17; // r0@1
  int v18; // r0@1
  int v19; // r0@1
  int v20; // r0@1
  int v21; // r0@1
  int v23; // [sp+8h] [bp-478h]@1
  int v24; // [sp+Ch] [bp-474h]@1
  int v25; // [sp+10h] [bp-470h]@1
  int v26; // [sp+14h] [bp-46Ch]@1
  int v27; // [sp+18h] [bp-468h]@1
  int v28; // [sp+1Ch] [bp-464h]@1
  int v29; // [sp+20h] [bp-460h]@1
  int v30; // [sp+24h] [bp-45Ch]@1
  int v31; // [sp+28h] [bp-458h]@1
  int v32; // [sp+2Ch] [bp-454h]@1
  int v33; // [sp+30h] [bp-450h]@1
  int v34; // [sp+34h] [bp-44Ch]@1
  int v35; // [sp+38h] [bp-448h]@1
  int v36; // [sp+3Ch] [bp-444h]@1
  int v37; // [sp+40h] [bp-440h]@1
  int v38; // [sp+44h] [bp-43Ch]@1
  int v39; // [sp+48h] [bp-438h]@1
  int v40; // [sp+4Ch] [bp-434h]@1
  int v41; // [sp+50h] [bp-430h]@1
  int v42; // [sp+54h] [bp-42Ch]@1
  int v43; // [sp+58h] [bp-428h]@1
  int v44; // [sp+5Ch] [bp-424h]@1
  int v45; // [sp+60h] [bp-420h]@1
  int v46; // [sp+64h] [bp-41Ch]@1
  int v47; // [sp+68h] [bp-418h]@1
  int v48; // [sp+6Ch] [bp-414h]@1
  int v49; // [sp+70h] [bp-410h]@1
  int v50; // [sp+74h] [bp-40Ch]@1
  int v51; // [sp+78h] [bp-408h]@1
  int v52; // [sp+7Ch] [bp-404h]@1
  int v53; // [sp+80h] [bp-400h]@1
  int v54; // [sp+84h] [bp-3FCh]@1
  char v55; // [sp+8Bh] [bp-3F5h]@1
  int v56; // [sp+8Ch] [bp-3F4h]@1
  char v57; // [sp+93h] [bp-3EDh]@1
  int v58; // [sp+94h] [bp-3ECh]@1
  char v59; // [sp+9Bh] [bp-3E5h]@1
  int v60; // [sp+9Ch] [bp-3E4h]@1
  char v61; // [sp+A3h] [bp-3DDh]@1
  int v62; // [sp+A4h] [bp-3DCh]@1
  char v63; // [sp+ABh] [bp-3D5h]@1
  int v64; // [sp+ACh] [bp-3D4h]@1
  char v65; // [sp+B3h] [bp-3CDh]@1
  int v66; // [sp+B4h] [bp-3CCh]@1
  char v67; // [sp+BBh] [bp-3C5h]@1
  int v68; // [sp+BCh] [bp-3C4h]@1
  char v69; // [sp+C3h] [bp-3BDh]@1
  int v70; // [sp+C4h] [bp-3BCh]@1
  char v71; // [sp+CBh] [bp-3B5h]@1
  int v72; // [sp+CCh] [bp-3B4h]@1
  char v73; // [sp+D3h] [bp-3ADh]@1
  int v74; // [sp+D4h] [bp-3ACh]@1
  char v75; // [sp+DBh] [bp-3A5h]@1
  int v76; // [sp+DCh] [bp-3A4h]@1
  char v77; // [sp+E3h] [bp-39Dh]@1
  int v78; // [sp+E4h] [bp-39Ch]@1
  int v79; // [sp+E8h] [bp-398h]@1
  int v80; // [sp+ECh] [bp-394h]@1
  int v81; // [sp+F0h] [bp-390h]@1
  int v82; // [sp+F4h] [bp-38Ch]@1
  int v83; // [sp+F8h] [bp-388h]@1
  int v84; // [sp+FCh] [bp-384h]@1
  int v85; // [sp+100h] [bp-380h]@1
  int v86; // [sp+104h] [bp-37Ch]@1
  int v87; // [sp+108h] [bp-378h]@1
  int v88; // [sp+10Ch] [bp-374h]@1
  int v89; // [sp+110h] [bp-370h]@1
  int v90; // [sp+114h] [bp-36Ch]@1
  int v91; // [sp+118h] [bp-368h]@1
  int v92; // [sp+11Ch] [bp-364h]@1
  char v93; // [sp+123h] [bp-35Dh]@1
  int v94; // [sp+124h] [bp-35Ch]@1
  int v95; // [sp+128h] [bp-358h]@1
  int v96; // [sp+12Ch] [bp-354h]@1
  int v97; // [sp+130h] [bp-350h]@1
  int v98; // [sp+134h] [bp-34Ch]@1
  int v99; // [sp+138h] [bp-348h]@1
  int v100; // [sp+13Ch] [bp-344h]@1
  int v101; // [sp+140h] [bp-340h]@1
  int v102; // [sp+144h] [bp-33Ch]@1
  int v103; // [sp+148h] [bp-338h]@1
  int v104; // [sp+14Ch] [bp-334h]@1
  int v105; // [sp+150h] [bp-330h]@1
  int v106; // [sp+154h] [bp-32Ch]@1
  int v107; // [sp+158h] [bp-328h]@1
  int v108; // [sp+15Ch] [bp-324h]@1
  int v109; // [sp+160h] [bp-320h]@1
  int v110; // [sp+164h] [bp-31Ch]@1
  int v111; // [sp+168h] [bp-318h]@1
  int v112; // [sp+16Ch] [bp-314h]@1
  int v113; // [sp+170h] [bp-310h]@1
  int v114; // [sp+174h] [bp-30Ch]@1
  int v115; // [sp+178h] [bp-308h]@1
  int v116; // [sp+17Ch] [bp-304h]@1
  int v117; // [sp+180h] [bp-300h]@1
  int v118; // [sp+184h] [bp-2FCh]@1
  int v119; // [sp+188h] [bp-2F8h]@1
  int v120; // [sp+18Ch] [bp-2F4h]@1
  int v121; // [sp+190h] [bp-2F0h]@1
  int v122; // [sp+194h] [bp-2ECh]@1
  int v123; // [sp+198h] [bp-2E8h]@1
  int v124; // [sp+19Ch] [bp-2E4h]@1
  int v125; // [sp+1A0h] [bp-2E0h]@1
  int v126; // [sp+1A4h] [bp-2DCh]@1
  int v127; // [sp+1A8h] [bp-2D8h]@1
  int v128; // [sp+1ACh] [bp-2D4h]@1
  int v129; // [sp+1B0h] [bp-2D0h]@1
  int v130; // [sp+1B4h] [bp-2CCh]@1
  int v131; // [sp+1B8h] [bp-2C8h]@1
  int v132; // [sp+1BCh] [bp-2C4h]@1
  int v133; // [sp+1C0h] [bp-2C0h]@1
  int v134; // [sp+1C4h] [bp-2BCh]@1
  int v135; // [sp+1C8h] [bp-2B8h]@1
  int v136; // [sp+1CCh] [bp-2B4h]@1
  int v137; // [sp+1D0h] [bp-2B0h]@1
  int v138; // [sp+1D4h] [bp-2ACh]@1
  int v139; // [sp+1D8h] [bp-2A8h]@1
  int v140; // [sp+1DCh] [bp-2A4h]@1
  int v141; // [sp+1E0h] [bp-2A0h]@1
  int v142; // [sp+1E4h] [bp-29Ch]@1
  int v143; // [sp+1E8h] [bp-298h]@1
  int v144; // [sp+1ECh] [bp-294h]@1
  int v145; // [sp+1F0h] [bp-290h]@1
  int v146; // [sp+1F4h] [bp-28Ch]@1
  int v147; // [sp+1F8h] [bp-288h]@1
  int v148; // [sp+1FCh] [bp-284h]@1
  int v149; // [sp+200h] [bp-280h]@1
  int v150; // [sp+204h] [bp-27Ch]@1
  int v151; // [sp+208h] [bp-278h]@1
  int v152; // [sp+20Ch] [bp-274h]@1
  int v153; // [sp+210h] [bp-270h]@1
  int v154; // [sp+214h] [bp-26Ch]@1
  int v155; // [sp+218h] [bp-268h]@1
  int v156; // [sp+21Ch] [bp-264h]@1
  int v157; // [sp+220h] [bp-260h]@1
  int v158; // [sp+224h] [bp-25Ch]@1
  int v159; // [sp+228h] [bp-258h]@1
  int v160; // [sp+22Ch] [bp-254h]@1
  int v161; // [sp+230h] [bp-250h]@1
  int v162; // [sp+234h] [bp-24Ch]@1
  int v163; // [sp+238h] [bp-248h]@1
  int v164; // [sp+23Ch] [bp-244h]@1
  int v165; // [sp+240h] [bp-240h]@1
  int v166; // [sp+244h] [bp-23Ch]@1
  int v167; // [sp+248h] [bp-238h]@1
  int v168; // [sp+24Ch] [bp-234h]@1
  int v169; // [sp+250h] [bp-230h]@1
  int v170; // [sp+254h] [bp-22Ch]@1
  int v171; // [sp+258h] [bp-228h]@1
  int v172; // [sp+25Ch] [bp-224h]@1
  int v173; // [sp+260h] [bp-220h]@1
  int v174; // [sp+264h] [bp-21Ch]@1
  int v175; // [sp+268h] [bp-218h]@1
  int v176; // [sp+26Ch] [bp-214h]@1
  int v177; // [sp+270h] [bp-210h]@1
  int v178; // [sp+274h] [bp-20Ch]@1
  int v179; // [sp+278h] [bp-208h]@1
  int v180; // [sp+27Ch] [bp-204h]@1
  int v181; // [sp+280h] [bp-200h]@1
  int v182; // [sp+284h] [bp-1FCh]@1
  int v183; // [sp+288h] [bp-1F8h]@1
  int v184; // [sp+28Ch] [bp-1F4h]@1
  int v185; // [sp+290h] [bp-1F0h]@1
  int v186; // [sp+294h] [bp-1ECh]@1
  int v187; // [sp+298h] [bp-1E8h]@1
  int v188; // [sp+29Ch] [bp-1E4h]@1
  int v189; // [sp+2A0h] [bp-1E0h]@1
  int v190; // [sp+2A4h] [bp-1DCh]@1
  int v191; // [sp+2A8h] [bp-1D8h]@1
  int v192; // [sp+2ACh] [bp-1D4h]@1
  int v193; // [sp+2B0h] [bp-1D0h]@1
  int v194; // [sp+2B4h] [bp-1CCh]@1
  int v195; // [sp+2B8h] [bp-1C8h]@1
  int v196; // [sp+2BCh] [bp-1C4h]@1
  int v197; // [sp+2C0h] [bp-1C0h]@1
  int v198; // [sp+2C4h] [bp-1BCh]@1
  int v199; // [sp+2C8h] [bp-1B8h]@1
  int v200; // [sp+2CCh] [bp-1B4h]@1
  int v201; // [sp+2D0h] [bp-1B0h]@1
  int v202; // [sp+2D4h] [bp-1ACh]@1
  int v203; // [sp+2D8h] [bp-1A8h]@1
  int v204; // [sp+2DCh] [bp-1A4h]@1
  int v205; // [sp+2E0h] [bp-1A0h]@1
  int v206; // [sp+2E4h] [bp-19Ch]@1
  int v207; // [sp+2E8h] [bp-198h]@1
  int v208; // [sp+2ECh] [bp-194h]@1
  int v209; // [sp+2F0h] [bp-190h]@1
  int v210; // [sp+2F4h] [bp-18Ch]@1
  int v211; // [sp+2F8h] [bp-188h]@1
  int v212; // [sp+2FCh] [bp-184h]@1
  int v213; // [sp+300h] [bp-180h]@1
  int v214; // [sp+304h] [bp-17Ch]@1
  int v215; // [sp+308h] [bp-178h]@1
  int v216; // [sp+30Ch] [bp-174h]@1
  int v217; // [sp+310h] [bp-170h]@1
  int v218; // [sp+314h] [bp-16Ch]@1
  int v219; // [sp+318h] [bp-168h]@1
  int v220; // [sp+31Ch] [bp-164h]@1
  int v221; // [sp+320h] [bp-160h]@1
  int v222; // [sp+324h] [bp-15Ch]@1
  int v223; // [sp+328h] [bp-158h]@1
  int v224; // [sp+32Ch] [bp-154h]@1
  int v225; // [sp+330h] [bp-150h]@1
  int v226; // [sp+334h] [bp-14Ch]@1
  int v227; // [sp+338h] [bp-148h]@1
  int v228; // [sp+33Ch] [bp-144h]@1
  int v229; // [sp+340h] [bp-140h]@1
  int v230; // [sp+344h] [bp-13Ch]@1
  int v231; // [sp+348h] [bp-138h]@1
  int v232; // [sp+34Ch] [bp-134h]@1
  int v233; // [sp+350h] [bp-130h]@1
  int v234; // [sp+354h] [bp-12Ch]@1
  int v235; // [sp+358h] [bp-128h]@1
  int v236; // [sp+35Ch] [bp-124h]@1
  int v237; // [sp+360h] [bp-120h]@1
  int v238; // [sp+364h] [bp-11Ch]@1
  int v239; // [sp+368h] [bp-118h]@1
  int v240; // [sp+36Ch] [bp-114h]@1
  int v241; // [sp+370h] [bp-110h]@1
  int v242; // [sp+374h] [bp-10Ch]@1
  int v243; // [sp+378h] [bp-108h]@1
  int v244; // [sp+37Ch] [bp-104h]@1
  int v245; // [sp+380h] [bp-100h]@1
  int v246; // [sp+384h] [bp-FCh]@1
  int v247; // [sp+388h] [bp-F8h]@1
  int v248; // [sp+38Ch] [bp-F4h]@1
  int v249; // [sp+390h] [bp-F0h]@1
  int v250; // [sp+394h] [bp-ECh]@1
  int v251; // [sp+398h] [bp-E8h]@1
  int v252; // [sp+39Ch] [bp-E4h]@1
  int v253; // [sp+3A0h] [bp-E0h]@1
  int v254; // [sp+3A4h] [bp-DCh]@1
  int v255; // [sp+3A8h] [bp-D8h]@1
  int v256; // [sp+3ACh] [bp-D4h]@1
  int v257; // [sp+3B0h] [bp-D0h]@1
  int v258; // [sp+3B4h] [bp-CCh]@1
  int v259; // [sp+3B8h] [bp-C8h]@1
  int v260; // [sp+3BCh] [bp-C4h]@1
  int v261; // [sp+3C0h] [bp-C0h]@1
  int v262; // [sp+3C4h] [bp-BCh]@1
  int v263; // [sp+3C8h] [bp-B8h]@1
  int v264; // [sp+3CCh] [bp-B4h]@1
  int v265; // [sp+3D0h] [bp-B0h]@1
  int v266; // [sp+3D4h] [bp-ACh]@1
  int v267; // [sp+3D8h] [bp-A8h]@1
  int v268; // [sp+3DCh] [bp-A4h]@1
  int v269; // [sp+3E0h] [bp-A0h]@1
  int v270; // [sp+3E4h] [bp-9Ch]@1
  int v271; // [sp+3E8h] [bp-98h]@1
  int v272; // [sp+3ECh] [bp-94h]@1
  int v273; // [sp+3F0h] [bp-90h]@1
  int v274; // [sp+3F4h] [bp-8Ch]@1
  int v275; // [sp+3F8h] [bp-88h]@1
  int v276; // [sp+3FCh] [bp-84h]@1
  int v277; // [sp+400h] [bp-80h]@1
  int v278; // [sp+404h] [bp-7Ch]@1
  int v279; // [sp+408h] [bp-78h]@1
  int v280; // [sp+40Ch] [bp-74h]@1
  int v281; // [sp+410h] [bp-70h]@1
  int v282; // [sp+414h] [bp-6Ch]@1
  int v283; // [sp+418h] [bp-68h]@1
  int v284; // [sp+41Ch] [bp-64h]@1
  int v285; // [sp+420h] [bp-60h]@1
  int v286; // [sp+424h] [bp-5Ch]@1
  int v287; // [sp+428h] [bp-58h]@1
  int v288; // [sp+42Ch] [bp-54h]@1
  int v289; // [sp+430h] [bp-50h]@1
  int v290; // [sp+434h] [bp-4Ch]@1
  int v291; // [sp+438h] [bp-48h]@1
  int v292; // [sp+43Ch] [bp-44h]@1
  int v293; // [sp+440h] [bp-40h]@1
  int v294; // [sp+444h] [bp-3Ch]@1
  int v295; // [sp+448h] [bp-38h]@1
  int v296; // [sp+44Ch] [bp-34h]@1
  int v297; // [sp+450h] [bp-30h]@1
  int v298; // [sp+454h] [bp-2Ch]@1
  int v299; // [sp+458h] [bp-28h]@1

  v299 = 4;
  Item::mApple = registerItem<Item,char const(&)[6],int>("apple", (__int16 *)&v299);
  v298 = 66;
  Item::mApple_gold = registerItem<Item,char const(&)[13],int>("golden_apple", (__int16 *)&v298);
  v297 = 210;
  Item::mApple_enchanted = registerItem<Item,char const(&)[15],int>("appleEnchanted", (__int16 *)&v297);
  v296 = 26;
  Item::mMushroomStew = registerItem<Item,char const(&)[14],int>("mushroom_stew", (__int16 *)&v296);
  v295 = 41;
  Item::mBread = registerItem<Item,char const(&)[6],int>("bread", (__int16 *)&v295);
  v294 = 63;
  Item::mPorkChop_raw = registerItem<Item,char const(&)[9],int>("porkchop", (__int16 *)&v294);
  v293 = 64;
  Item::mPorkChop_cooked = registerItem<Item,char const(&)[16],int>("cooked_porkchop", (__int16 *)&v293);
  v292 = 93;
  Item::mFish_raw_cod = registerItem<Item,char const(&)[5],int>("fish", (__int16 *)&v292);
  v291 = 204;
  Item::mFish_raw_salmon = registerItem<Item,char const(&)[7],int>("salmon", (__int16 *)&v291);
  v290 = 205;
  Item::mFish_raw_clownfish = registerItem<Item,char const(&)[10],int>("clownfish", (__int16 *)&v290);
  v289 = 206;
  Item::mFish_raw_pufferfish = registerItem<Item,char const(&)[11],int>("pufferfish", (__int16 *)&v289);
  v288 = 94;
  Item::mFish_cooked_cod = registerItem<Item,char const(&)[12],int>("cooked_fish", (__int16 *)&v288);
  v287 = 207;
  Item::mFish_cooked_salmon = registerItem<Item,char const(&)[14],int>("cooked_salmon", (__int16 *)&v287);
  v286 = 101;
  Item::mCookie = registerItem<Item,char const(&)[7],int>("cookie", (__int16 *)&v286);
  v285 = 104;
  Item::mMelonSlice = registerItem<Item,char const(&)[6],int>("melon", (__int16 *)&v285);
  v284 = 107;
  Item::mBeef_raw = registerItem<Item,char const(&)[5],int>("beef", (__int16 *)&v284);
  v283 = 108;
  Item::mBeef_cooked = registerItem<Item,char const(&)[12],int>("cooked_beef", (__int16 *)&v283);
  v282 = 109;
  Item::mChicken_raw = registerItem<Item,char const(&)[8],int>("chicken", (__int16 *)&v282);
  v281 = 110;
  Item::mChicken_cooked = registerItem<Item,char const(&)[15],int>("cooked_chicken", (__int16 *)&v281);
  v280 = 111;
  Item::mRotten_flesh = registerItem<Item,char const(&)[13],int>("rotten_flesh", (__int16 *)&v280);
  v279 = 119;
  Item::mSpider_eye = registerItem<Item,char const(&)[11],int>("spider_eye", (__int16 *)&v279);
  v278 = 135;
  Item::mCarrot = registerItem<Item,char const(&)[7],int>("carrot", (__int16 *)&v278);
  v277 = 136;
  Item::mPotato = registerItem<Item,char const(&)[7],int>("potato", (__int16 *)&v277);
  v276 = 137;
  Item::mPotatoBaked = registerItem<Item,char const(&)[13],int>("baked_potato", (__int16 *)&v276);
  v275 = 138;
  Item::mPoisonous_potato = registerItem<Item,char const(&)[17],int>("poisonous_potato", (__int16 *)&v275);
  v274 = 140;
  Item::mGoldenCarrot = registerItem<Item,char const(&)[14],int>("golden_carrot", (__int16 *)&v274);
  v273 = 144;
  Item::mPumpkinPie = registerItem<Item,char const(&)[12],int>("pumpkin_pie", (__int16 *)&v273);
  v272 = 201;
  Item::mBeetroot = registerItem<Item,char const(&)[9],int>("beetroot", (__int16 *)&v272);
  v271 = 203;
  Item::mBeetrootSoup = registerItem<Item,char const(&)[14],int>("beetroot_soup", (__int16 *)&v271);
  v270 = 155;
  Item::mRabbitRaw = registerItem<Item,char const(&)[7],int>("rabbit", (__int16 *)&v270);
  v269 = 156;
  Item::mRabbitCooked = registerItem<Item,char const(&)[14],int>("cooked_rabbit", (__int16 *)&v269);
  v268 = 157;
  Item::mRabbitStew = registerItem<Item,char const(&)[12],int>("rabbit_stew", (__int16 *)&v268);
  v267 = 39;
  Item::mSeeds_wheat = registerItem<Item,char const(&)[12],int>("wheat_seeds", (__int16 *)&v267);
  v266 = 105;
  Item::mSeeds_pumpkin = registerItem<Item,char const(&)[14],int>("pumpkin_seeds", (__int16 *)&v266);
  v265 = 106;
  Item::mSeeds_melon = registerItem<Item,char const(&)[12],int>("melon_seeds", (__int16 *)&v265);
  v264 = 116;
  Item::mNether_wart = registerItem<Item,char const(&)[12],int>("nether_wart", (__int16 *)&v264);
  v263 = 202;
  Item::mSeeds_beetroot = registerItem<Item,char const(&)[15],int>("beetroot_seeds", (__int16 *)&v263);
  v262 = 0;
  Item::mShovel_iron = registerItem<ShovelItem,char const(&)[12],int,Item::Tier const&>(
                         "iron_shovel",
                         &v262,
                         (int)&Item::Tier::IRON);
  v261 = 1;
  Item::mPickAxe_iron = registerItem<PickaxeItem,char const(&)[13],int,Item::Tier const&>(
                          "iron_pickaxe",
                          &v261,
                          (int)&Item::Tier::IRON);
  v260 = 2;
  Item::mHatchet_iron = registerItem<HatchetItem,char const(&)[9],int,Item::Tier const&>(
                          "iron_axe",
                          &v260,
  v259 = 3;
  Item::mFlintAndSteel = registerItem<FlintAndSteelItem,char const(&)[16],int>("flint_and_steel", &v259);
  v258 = 5;
  Item::mBow = registerItem<BowItem,char const(&)[4],int>("bow", &v258);
  v257 = 6;
  v1 = registerItem<ArrowItem,char const(&)[6],int>("arrow", &v257);
  *(_BYTE *)(v1 + 42) = 1;
  Item::mArrow = v1;
  v256 = 7;
  Item::mCoal = registerItem<CoalItem,char const(&)[5],int>("coal", &v256);
  v255 = 8;
  Item::mDiamond = registerItem<Item,char const(&)[8],int>("diamond", (__int16 *)&v255);
  v254 = 9;
  Item::mIronIngot = registerItem<Item,char const(&)[11],int>("iron_ingot", (__int16 *)&v254);
  v253 = 10;
  Item::mGoldIngot = registerItem<Item,char const(&)[11],int>("gold_ingot", (__int16 *)&v253);
  v252 = 11;
  Item::mSword_iron = registerItem<WeaponItem,char const(&)[11],int,Item::Tier const&>(
                        "iron_sword",
                        (__int16 *)&v252,
                        (int)&Item::Tier::IRON);
  v251 = 12;
  Item::mSword_wood = registerItem<WeaponItem,char const(&)[13],int,Item::Tier const&>(
                        "wooden_sword",
                        (__int16 *)&v251,
                        (int)&Item::Tier::WOOD);
  v250 = 13;
  Item::mShovel_wood = registerItem<ShovelItem,char const(&)[14],int,Item::Tier const&>(
                         "wooden_shovel",
                         &v250,
                         (int)&Item::Tier::WOOD);
  v249 = 14;
  Item::mPickAxe_wood = registerItem<PickaxeItem,char const(&)[15],int,Item::Tier const&>(
                          "wooden_pickaxe",
                          &v249,
                          (int)&Item::Tier::WOOD);
  v248 = 15;
  Item::mHatchet_wood = registerItem<HatchetItem,char const(&)[11],int,Item::Tier const&>(
                          "wooden_axe",
                          &v248,
  v247 = 16;
  Item::mSword_stone = registerItem<WeaponItem,char const(&)[12],int,Item::Tier const&>(
                         "stone_sword",
                         (__int16 *)&v247,
                         (int)&Item::Tier::STONE);
  v246 = 17;
  Item::mShovel_stone = registerItem<ShovelItem,char const(&)[13],int,Item::Tier const&>(
                          "stone_shovel",
                          &v246,
                          (int)&Item::Tier::STONE);
  v245 = 18;
  Item::mPickAxe_stone = registerItem<PickaxeItem,char const(&)[14],int,Item::Tier const&>(
                           "stone_pickaxe",
                           &v245,
                           (int)&Item::Tier::STONE);
  v244 = 19;
  Item::mHatchet_stone = registerItem<HatchetItem,char const(&)[10],int,Item::Tier const&>(
                           "stone_axe",
                           &v244,
  v243 = 20;
  Item::mSword_diamond = registerItem<WeaponItem,char const(&)[14],int,Item::Tier const&>(
                           "diamond_sword",
                           (__int16 *)&v243,
                           (int)&Item::Tier::DIAMOND);
  v242 = 21;
  Item::mShovel_diamond = registerItem<ShovelItem,char const(&)[15],int,Item::Tier const&>(
                            "diamond_shovel",
                            &v242,
                            (int)&Item::Tier::DIAMOND);
  v241 = 22;
  Item::mPickAxe_diamond = registerItem<PickaxeItem,char const(&)[16],int,Item::Tier const&>(
                             "diamond_pickaxe",
                             &v241,
                             (int)&Item::Tier::DIAMOND);
  v240 = 23;
  Item::mHatchet_diamond = registerItem<HatchetItem,char const(&)[12],int,Item::Tier const&>(
                             "diamond_axe",
                             &v240,
  v239 = 24;
  v2 = registerItem<Item,char const(&)[6],int>("stick", (__int16 *)&v239);
  Item::mStick = (*(int (**)(void))(*(_DWORD *)v2 + 32))();
  v238 = 25;
  Item::mBowl = registerItem<Item,char const(&)[5],int>("bowl", (__int16 *)&v238);
  v237 = 27;
  Item::mSword_gold = registerItem<WeaponItem,char const(&)[13],int,Item::Tier const&>(
                        "golden_sword",
                        (__int16 *)&v237,
                        (int)&Item::Tier::GOLD);
  v236 = 28;
  Item::mShovel_gold = registerItem<ShovelItem,char const(&)[14],int,Item::Tier const&>(
                         "golden_shovel",
                         &v236,
                         (int)&Item::Tier::GOLD);
  v235 = 29;
  Item::mPickAxe_gold = registerItem<PickaxeItem,char const(&)[15],int,Item::Tier const&>(
                          "golden_pickaxe",
                          &v235,
                          (int)&Item::Tier::GOLD);
  v234 = 30;
  Item::mHatchet_gold = registerItem<HatchetItem,char const(&)[11],int,Item::Tier const&>(
                          "golden_axe",
                          &v234,
  v233 = 31;
  Item::mString = registerItem<BlockPlanterItem,char const(&)[7],int,Block const*&>("string", &v233, &Block::mTripwire);
  v232 = 32;
  Item::mFeather = registerItem<Item,char const(&)[8],int>("feather", (__int16 *)&v232);
  v231 = 33;
  Item::mSulphur = registerItem<Item,char const(&)[10],int>("gunpowder", (__int16 *)&v231);
  v230 = 34;
  Item::mHoe_wood = registerItem<HoeItem,char const(&)[11],int,Item::Tier const&>(
                      "wooden_hoe",
                      &v230,
                      (int)&Item::Tier::WOOD);
  v229 = 35;
  Item::mHoe_stone = registerItem<HoeItem,char const(&)[10],int,Item::Tier const&>(
                       "stone_hoe",
                       &v229,
                       (int)&Item::Tier::STONE);
  v228 = 36;
  Item::mHoe_iron = registerItem<HoeItem,char const(&)[9],int,Item::Tier const&>(
                      "iron_hoe",
                      &v228,
                      (int)&Item::Tier::IRON);
  v227 = 37;
  Item::mHoe_diamond = registerItem<HoeItem,char const(&)[12],int,Item::Tier const&>(
                         "diamond_hoe",
                         &v227,
                         (int)&Item::Tier::DIAMOND);
  v226 = 38;
  Item::mHoe_gold = registerItem<HoeItem,char const(&)[11],int,Item::Tier const&>(
                      "golden_hoe",
                      &v226,
                      (int)&Item::Tier::GOLD);
  v225 = 40;
  Item::mWheat = registerItem<Item,char const(&)[6],int>("wheat", (__int16 *)&v225);
  v224 = 42;
  v222 = 0;
  v223 = 0;
  Item::mHelmet_leather = registerItem<ArmorItem,char const(&)[15],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                            "leather_helmet",
                            &v224,
                            &ArmorItem::LEATHER,
                            &v223,
                            &v222);
  v220 = 0;
  v221 = 43;
  v219 = 1;
  Item::mChestplate_leather = registerItem<ArmorItem,char const(&)[19],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                                "leather_chestplate",
                                &v221,
                                &ArmorItem::LEATHER,
                                &v220,
                                &v219);
  v217 = 0;
  v218 = 44;
  v216 = 2;
  Item::mLeggings_leather = registerItem<ArmorItem,char const(&)[17],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                              "leather_leggings",
                              &v218,
                              &ArmorItem::LEATHER,
                              &v217,
                              &v216);
  v214 = 0;
  v215 = 45;
  v213 = 3;
  Item::mBoots_leather = registerItem<ArmorItem,char const(&)[14],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                           "leather_boots",
                           &v215,
                           &ArmorItem::LEATHER,
                           &v214,
                           &v213);
  v212 = 46;
  v210 = 0;
  v211 = 1;
  Item::mHelmet_chain = registerItem<ArmorItem,char const(&)[17],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                          "chainmail_helmet",
                          &v212,
                          &ArmorItem::CHAIN,
                          &v211,
                          &v210);
  v209 = 47;
  v207 = 1;
  v208 = 1;
  Item::mChestplate_chain = registerItem<ArmorItem,char const(&)[21],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                              "chainmail_chestplate",
                              &v209,
                              &ArmorItem::CHAIN,
                              &v208,
                              &v207);
  v205 = 1;
  v206 = 48;
  v204 = 2;
  Item::mLeggings_chain = registerItem<ArmorItem,char const(&)[19],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                            "chainmail_leggings",
                            &v206,
                            &ArmorItem::CHAIN,
                            &v205,
                            &v204);
  v202 = 1;
  v203 = 49;
  v201 = 3;
  Item::mBoots_chain = registerItem<ArmorItem,char const(&)[16],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                         "chainmail_boots",
                         &v203,
                         &ArmorItem::CHAIN,
                         &v202,
                         &v201);
  v200 = 50;
  v198 = 0;
  v199 = 2;
  Item::mHelmet_iron = registerItem<ArmorItem,char const(&)[12],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                         "iron_helmet",
                         &v200,
                         &ArmorItem::IRON,
                         &v199,
                         &v198);
  v197 = 51;
  v195 = 1;
  v196 = 2;
  Item::mChestplate_iron = registerItem<ArmorItem,char const(&)[16],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                             "iron_chestplate",
                             &v197,
                             &ArmorItem::IRON,
                             &v196,
                             &v195);
  v194 = 52;
  v192 = 2;
  v193 = 2;
  Item::mLeggings_iron = registerItem<ArmorItem,char const(&)[14],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                           "iron_leggings",
                           &v194,
                           &ArmorItem::IRON,
                           &v193,
                           &v192);
  v191 = 53;
  v189 = 3;
  v190 = 2;
  Item::mBoots_iron = registerItem<ArmorItem,char const(&)[11],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                        "iron_boots",
                        &v191,
                        &ArmorItem::IRON,
                        &v190,
                        &v189);
  v188 = 54;
  v186 = 0;
  v187 = 3;
  Item::mHelmet_diamond = registerItem<ArmorItem,char const(&)[15],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                            "diamond_helmet",
                            &v188,
                            &ArmorItem::DIAMOND,
                            &v187,
                            &v186);
  v185 = 55;
  v183 = 1;
  v184 = 3;
  Item::mChestplate_diamond = registerItem<ArmorItem,char const(&)[19],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                                "diamond_chestplate",
                                &v185,
                                &ArmorItem::DIAMOND,
                                &v184,
                                &v183);
  v182 = 56;
  v180 = 2;
  v181 = 3;
  Item::mLeggings_diamond = registerItem<ArmorItem,char const(&)[17],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                              "diamond_leggings",
                              &v182,
                              &ArmorItem::DIAMOND,
                              &v181,
                              &v180);
  v179 = 57;
  v177 = 3;
  v178 = 3;
  Item::mBoots_diamond = registerItem<ArmorItem,char const(&)[14],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                           "diamond_boots",
                           &v179,
                           &ArmorItem::DIAMOND,
                           &v178,
                           &v177);
  v176 = 58;
  v174 = 0;
  v175 = 4;
  Item::mHelmet_gold = registerItem<ArmorItem,char const(&)[14],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                         "golden_helmet",
                         &v176,
                         &ArmorItem::GOLD,
                         &v175,
                         &v174);
  v172 = 4;
  v173 = 59;
  v171 = 1;
  Item::mChestplate_gold = registerItem<ArmorItem,char const(&)[18],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                             "golden_chestplate",
                             &v173,
                             &ArmorItem::GOLD,
                             &v172,
                             &v171);
  v169 = 4;
  v170 = 60;
  v168 = 2;
  Item::mLeggings_gold = registerItem<ArmorItem,char const(&)[16],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                           "golden_leggings",
                           &v170,
                           &ArmorItem::GOLD,
                           &v169,
                           &v168);
  v167 = 61;
  v165 = 3;
  v166 = 4;
  Item::mBoots_gold = registerItem<ArmorItem,char const(&)[13],int,ArmorItem::ArmorMaterial const&,int,ArmorSlot>(
                        "golden_boots",
                        &v167,
                        &ArmorItem::GOLD,
                        &v166,
                        &v165);
  v164 = 62;
  Item::mFlint = registerItem<Item,char const(&)[6],int>("flint", (__int16 *)&v164);
  v163 = 65;
  v162 = 83;
  Item::mPainting = registerItem<HangingEntityItem,char const(&)[9],int,EntityType>("painting", &v163, &v162);
  v161 = 67;
  Item::mSign = registerItem<SignItem,char const(&)[5],int>("sign", (__int16 *)&v161);
  v160 = 68;
  v3 = Material::getMaterial(2);
  v159 = 0;
  Item::mDoor_wood = registerItem<DoorItem,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                       "wooden_door",
                       &v160,
                       v3,
                       &v159);
  v158 = 69;
  Item::mBucket = registerItem<BucketItem,char const(&)[7],int>("bucket", &v158);
  v157 = 72;
  v156 = 0;
  Item::mMinecart = registerItem<MinecartItem,char const(&)[9],int,MinecartType>("minecart", &v157, &v156);
  v155 = 73;
  v4 = registerItem<Item,char const(&)[7],int>("saddle", (__int16 *)&v155);
  Item::mSaddle = (*(int (**)(void))(*(_DWORD *)v4 + 16))();
  v154 = 74;
  v5 = Material::getMaterial(4);
  v153 = 6;
  Item::mDoor_iron = registerItem<DoorItem,char const(&)[10],int,Material const&,DoorBlock::DoorType>(
                       "iron_door",
                       &v154,
                       v5,
                       &v153);
  v152 = 75;
  Item::mRedStone = registerItem<RedStoneDustItem,char const(&)[9],int>("redstone", (__int16 *)&v152);
  v151 = 76;
  Item::mSnowBall = registerItem<SnowballItem,char const(&)[9],int>("snowball", (__int16 *)&v151);
  v150 = 77;
  Item::mBoat = registerItem<BoatItem,char const(&)[5],int>("boat", &v150);
  v149 = 78;
  Item::mLeather = registerItem<Item,char const(&)[8],int>("leather", (__int16 *)&v149);
  v148 = 80;
  Item::mBrick = registerItem<Item,char const(&)[6],int>("brick", (__int16 *)&v148);
  v147 = 81;
  Item::mClay = registerItem<Item,char const(&)[10],int>("clay_ball", (__int16 *)&v147);
  v146 = 82;
  Item::mReeds = registerItem<BlockPlanterItem,char const(&)[6],int,Block const*&>("reeds", &v146, &Block::mReeds);
  v145 = 83;
  Item::mPaper = registerItem<Item,char const(&)[6],int>("paper", (__int16 *)&v145);
  v144 = 84;
  Item::mBook = registerItem<Item,char const(&)[5],int>("book", (__int16 *)&v144);
  v143 = 85;
  Item::mSlimeBall = registerItem<Item,char const(&)[11],int>("slime_ball", (__int16 *)&v143);
  v142 = 86;
  v141 = 1;
  Item::mChestMinecart = registerItem<MinecartItem,char const(&)[15],int,MinecartType>("chest_minecart", &v142, &v141);
  v140 = 88;
  Item::mEgg = registerItem<EggItem,char const(&)[4],int>("egg", (__int16 *)&v140);
  v139 = 89;
  Item::mCompass = registerItem<CompassItem,char const(&)[8],int>("compass", &v139);
  v138 = 90;
  Item::mFishingRod = registerItem<FishingRodItem,char const(&)[12],int>("fishing_rod", &v138);
  v137 = 91;
  Item::mClock = registerItem<ClockItem,char const(&)[6],int>("clock", &v137);
  v136 = 92;
  Item::mYellowDust = registerItem<Item,char const(&)[15],int>("glowstone_dust", (__int16 *)&v136);
  v135 = 95;
  Item::mDye_powder = registerItem<DyePowderItem,char const(&)[4],int>("dye", &v135);
  v134 = 96;
  v6 = registerItem<Item,char const(&)[5],int>("bone", (__int16 *)&v134);
  Item::mBone = (*(int (**)(void))(*(_DWORD *)v6 + 32))();
  v133 = 97;
  Item::mSugar = registerItem<Item,char const(&)[6],int>("sugar", (__int16 *)&v133);
  v132 = 98;
  Item::mCake = registerItem<BlockPlanterItem,char const(&)[5],int,Block const*&>("cake", &v132, &Block::mCake);
  v131 = 99;
  v7 = registerItem<BedItem,char const(&)[4],int>("bed", (__int16 *)&v131);
  Item::mBed = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
  v130 = 100;
  Item::mRepeater = registerItem<BlockPlanterItem,char const(&)[9],int,Block const*&>(
                      "repeater",
                      &v130,
                      &Block::mUnpoweredRepeater);
  v8 = j__Z12registerItemI7MapItemJEERT_DpOT0_();
  *(_BYTE *)(v8 + 42) = 1;
  Item::mFilledMap = v8;
  v129 = 103;
  Item::mShears = registerItem<ShearsItem,char const(&)[7],int>("shears", (__int16 *)&v129);
  v128 = 112;
  Item::mEnderpearl = registerItem<EnderpearlItem,char const(&)[12],int>("ender_pearl", &v128);
  v127 = 113;
  v9 = registerItem<Item,char const(&)[10],int>("blaze_rod", (__int16 *)&v127);
  Item::mBlazeRod = (*(int (**)(void))(*(_DWORD *)v9 + 32))();
  v126 = 114;
  Item::mGhast_tear = registerItem<Item,char const(&)[11],int>("ghast_tear", (__int16 *)&v126);
  v125 = 115;
  Item::mGold_nugget = registerItem<Item,char const(&)[12],int>("gold_nugget", (__int16 *)&v125);
  v124 = 117;
  Item::mPotion = registerItem<PotionItem,char const(&)[7],int>("potion", &v124);
  v123 = 118;
  Item::mGlass_bottle = registerItem<BottleItem,char const(&)[13],int>("glass_bottle", &v123);
  v122 = 120;
  Item::mFermented_spider_eye = registerItem<Item,char const(&)[21],int>("fermented_spider_eye", (__int16 *)&v122);
  v121 = 121;
  Item::mBlazePowder = registerItem<Item,char const(&)[13],int>("blaze_powder", (__int16 *)&v121);
  v120 = 122;
  Item::mMagma_cream = registerItem<Item,char const(&)[12],int>("magma_cream", (__int16 *)&v120);
  v119 = 123;
  Item::mBrewing_stand = registerItem<BlockPlanterItem,char const(&)[14],int,Block const*&>(
                           "brewing_stand",
                           &v119,
                           &Block::mBrewingStand);
  v118 = 124;
  Item::mCauldron = registerItem<BlockPlanterItem,char const(&)[9],int,Block const*&>(
                      "cauldron",
                      &v118,
                      &Block::mCauldron);
  v117 = 125;
  Item::mEnderEye = registerItem<EnderEyeItem,char const(&)[10],int>("ender_eye", &v117);
  v116 = 126;
  Item::mSpeckled_melon = registerItem<Item,char const(&)[15],int>("speckled_melon", (__int16 *)&v116);
  v115 = 127;
  Item::mMobPlacer = registerItem<MonsterPlacerItem,char const(&)[10],int>("spawn_egg", &v115);
  v114 = 128;
  Item::mExperiencePotionItem = registerItem<ExperiencePotionItem,char const(&)[18],int>("experience_bottle", &v114);
  v113 = 129;
  Item::mFireCharge = registerItem<FireChargeItem,char const(&)[9],int>("fireball", &v113);
  v112 = 130;
  Item::mWritable_book = registerItem<WritableBookItem,char const(&)[14],int>("writable_book", &v112);
  v111 = 131;
  Item::mWritten_book = registerItem<WrittenBookItem,char const(&)[13],int>("written_book", &v111);
  v110 = 132;
  Item::mEmerald = registerItem<Item,char const(&)[8],int>("emerald", (__int16 *)&v110);
  v109 = 133;
  Item::mItemFrame = registerItem<BlockPlanterItem,char const(&)[6],int,Block const*&>(
                       "frame",
                       &v109,
                       &Block::mItemFrame);
  v108 = 134;
  Item::mFlowerPot = registerItem<BlockPlanterItem,char const(&)[11],int,Block const*&>(
                       "flower_pot",
                       &v108,
                       &Block::mFlowerPot);
  Item::mEmptyMap = j__Z12registerItemI12EmptyMapItemJEERT_DpOT0_();
  v107 = 141;
  Item::mSkull = registerItem<SkullItem,char const(&)[6],int>("skull", &v107);
  v106 = 142;
  Item::mCarrotOnAStick = registerItem<CarrotOnAStickItem,char const(&)[15],int>("carrotOnAStick", &v106);
  v105 = 143;
  Item::mNetherStar = registerItem<Item,char const(&)[11],int>("netherStar", (__int16 *)&v105);
  v104 = 145;
  Item::mFireworksItem = registerItem<FireworksItem,char const(&)[10],int>("fireworks", &v104);
  v103 = 146;
  Item::mFireworkCharge = registerItem<FireworkChargeItem,char const(&)[16],int>("fireworksCharge", &v103);
  v102 = 147;
  Item::mEnchanted_book = registerItem<EnchantedBookItem,char const(&)[15],int>("enchanted_book", &v102);
  v101 = 148;
  Item::mComparator = registerItem<BlockPlanterItem,char const(&)[11],int,Block const*&>(
                        "comparator",
                        &v101,
                        &Block::mUnpoweredComparator);
  v100 = 149;
  Item::mNetherbrick = registerItem<Item,char const(&)[12],int>("netherbrick", (__int16 *)&v100);
  v99 = 150;
  Item::mNetherQuartz = registerItem<Item,char const(&)[7],int>("quartz", (__int16 *)&v99);
  v98 = 151;
  v97 = 3;
  Item::mTNTMinecart = registerItem<MinecartItem,char const(&)[13],int,MinecartType>("tnt_minecart", &v98, &v97);
  v96 = 152;
  v95 = 5;
  Item::mHopperMinecart = registerItem<MinecartItem,char const(&)[16],int,MinecartType>("hopper_minecart", &v96, &v95);
  v94 = 154;
  v93 = 1;
  Item::mHopper = registerItem<BlockPlanterItem,char const(&)[7],int,Block const*&,bool>(
                    "hopper",
                    &v94,
                    &Block::mHopper,
                    &v93);
  v92 = 158;
  Item::mRabbitFoot = registerItem<Item,char const(&)[12],int>("rabbit_foot", (__int16 *)&v92);
  v91 = 159;
  Item::mRabbitHide = registerItem<Item,char const(&)[12],int>("rabbit_hide", (__int16 *)&v91);
  v89 = 0;
  v90 = 160;
  v88 = 1;
  v10 = registerItem<HorseArmorItem,char const(&)[18],int,int,HorseArmorItem::HorseArmorTier>(
          "horsearmorleather",
          &v90,
          &v89,
          &v88);
  Item::mLeatherHorseArmor = (*(int (**)(void))(*(_DWORD *)v10 + 16))();
  v87 = 161;
  v86 = 1;
  v85 = 2;
  v11 = registerItem<HorseArmorItem,char const(&)[15],int,int,HorseArmorItem::HorseArmorTier>(
          "horsearmoriron",
          &v87,
          &v86,
          &v85);
  Item::mIronHorseArmor = (*(int (**)(void))(*(_DWORD *)v11 + 16))();
  v84 = 162;
  v83 = 2;
  v82 = 3;
  v12 = registerItem<HorseArmorItem,char const(&)[15],int,int,HorseArmorItem::HorseArmorTier>(
          "horsearmorgold",
          &v84,
          &v83,
          &v82);
  Item::mGoldHorseArmor = (*(int (**)(void))(*(_DWORD *)v12 + 16))();
  v81 = 163;
  v80 = 3;
  v79 = 4;
  v13 = registerItem<HorseArmorItem,char const(&)[18],int,int,HorseArmorItem::HorseArmorTier>(
          "horsearmordiamond",
          &v81,
          &v80,
          &v79);
  Item::mDiamondHorseArmor = (*(int (**)(void))(*(_DWORD *)v13 + 16))();
  v78 = 244;
  v77 = 90;
  Item::mRecord13 = registerItem<RecordItem,char const(&)[10],int,LevelSoundEvent>("record_13", &v78, &v77);
  v76 = 245;
  v75 = 91;
  Item::mRecordCat = registerItem<RecordItem,char const(&)[11],int,LevelSoundEvent>("record_cat", &v76, &v75);
  v74 = 246;
  v73 = 92;
  Item::mRecordBlocks = registerItem<RecordItem,char const(&)[14],int,LevelSoundEvent>("record_blocks", &v74, &v73);
  v72 = 247;
  v71 = 93;
  Item::mRecordChirp = registerItem<RecordItem,char const(&)[13],int,LevelSoundEvent>("record_chirp", &v72, &v71);
  v70 = 248;
  v69 = 94;
  Item::mRecordFar = registerItem<RecordItem,char const(&)[11],int,LevelSoundEvent>("record_far", &v70, &v69);
  v68 = 249;
  v67 = 95;
  Item::mRecordMall = registerItem<RecordItem,char const(&)[12],int,LevelSoundEvent>("record_mall", &v68, &v67);
  v66 = 250;
  v65 = 96;
  Item::mRecordMellohi = registerItem<RecordItem,char const(&)[15],int,LevelSoundEvent>("record_mellohi", &v66, &v65);
  v64 = 251;
  v63 = 97;
  Item::mRecordStal = registerItem<RecordItem,char const(&)[12],int,LevelSoundEvent>("record_stal", &v64, &v63);
  v62 = 252;
  v61 = 98;
  Item::mRecordStrad = registerItem<RecordItem,char const(&)[13],int,LevelSoundEvent>("record_strad", &v62, &v61);
  v60 = 253;
  v59 = 99;
  Item::mRecordWard = registerItem<RecordItem,char const(&)[12],int,LevelSoundEvent>("record_ward", &v60, &v59);
  v58 = 254;
  v57 = 100;
  Item::mRecord11 = registerItem<RecordItem,char const(&)[10],int,LevelSoundEvent>("record_11", &v58, &v57);
  v56 = 255;
  v55 = 101;
  Item::mRecordWait = registerItem<RecordItem,char const(&)[12],int,LevelSoundEvent>("record_wait", &v56, &v55);
  v54 = 164;
  Item::mLead = registerItem<LeadItem,char const(&)[5],int>("lead", &v54);
  v53 = 165;
  Item::mNameTag = registerItem<Item,char const(&)[8],int>("nameTag", (__int16 *)&v53);
  v52 = 166;
  Item::mPrismarineCrystals = registerItem<Item,char const(&)[20],int>("prismarine_crystals", (__int16 *)&v52);
  v51 = 167;
  Item::mMutton_raw = registerItem<Item,char const(&)[10],int>("muttonRaw", (__int16 *)&v51);
  v50 = 168;
  Item::mMutton_cooked = registerItem<Item,char const(&)[13],int>("muttonCooked", (__int16 *)&v50);
  v49 = 169;
  Item::mArmorStand = registerItem<ArmorStandItem,char const(&)[12],int>("armor_stand", (__int16 *)&v49);
  v48 = 170;
  Item::mEndCrystal = registerItem<EndCrystalItem,char const(&)[12],int>("end_crystal", &v48);
  v47 = 171;
  v14 = Material::getMaterial(2);
  v46 = 1;
  Item::mDoor_spruce = registerItem<DoorItem,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                         "spruce_door",
                         &v47,
                         v14,
                         &v46);
  v45 = 172;
  v15 = Material::getMaterial(2);
  v44 = 2;
  Item::mDoor_birch = registerItem<DoorItem,char const(&)[11],int,Material const&,DoorBlock::DoorType>(
                        "birch_door",
                        &v45,
                        v15,
                        &v44);
  v43 = 173;
  v16 = Material::getMaterial(2);
  v42 = 3;
  Item::mDoor_jungle = registerItem<DoorItem,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                         "jungle_door",
                         &v43,
                         v16,
                         &v42);
  v41 = 174;
  v17 = Material::getMaterial(2);
  v40 = 4;
  Item::mDoor_acacia = registerItem<DoorItem,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                         "acacia_door",
                         &v41,
                         v17,
                         &v40);
  v39 = 175;
  v18 = Material::getMaterial(2);
  v38 = 5;
  Item::mDoor_darkoak = registerItem<DoorItem,char const(&)[14],int,Material const&,DoorBlock::DoorType>(
                          "dark_oak_door",
                          &v39,
                          v18,
                          &v38);
  v37 = 176;
  Item::mChorusFruit = registerItem<ChorusFruit,char const(&)[13],int>("chorus_fruit", &v37);
  v36 = 177;
  Item::mChorusFruitPopped = registerItem<Item,char const(&)[20],int>("chorus_fruit_popped", (__int16 *)&v36);
  v35 = 181;
  Item::mDragon_breath = registerItem<Item,char const(&)[14],int>("dragon_breath", (__int16 *)&v35);
  v34 = 182;
  Item::mSplash_potion = registerItem<SplashPotionItem,char const(&)[14],int>("splash_potion", &v34);
  v33 = 185;
  Item::mLingering_potion = registerItem<LingeringPotionItem,char const(&)[17],int>("lingering_potion", &v33);
  v32 = 187;
  v31 = 6;
  v19 = registerItem<MinecartItem,char const(&)[23],int,MinecartType>("command_block_minecart", &v32, &v31);
  Item::mCommandBlockMinecart = (*(int (**)(void))(*(_DWORD *)v19 + 20))();
  v29 = 5;
  v30 = 188;
  v28 = 1;
  Item::mElytra = registerItem<ArmorItem,char const(&)[7],int,ArmorItem::ArmorMaterial const&,ArmorItem::Tier,ArmorSlot>(
                    "elytra",
                    &v30,
                    &ArmorItem::ELYTRA,
                    &v29,
                    &v28);
  v27 = 153;
  Item::mPrismarineShard = registerItem<Item,char const(&)[17],int>("prismarine_shard", (__int16 *)&v27);
  v26 = 189;
  Item::mShulkerShell = registerItem<Item,char const(&)[14],int>("shulker_shell", (__int16 *)&v26);
  v25 = 190;
  Item::mBanner = registerItem<BannerItem,char const(&)[7],int>("banner", &v25);
  v24 = 194;
  v20 = registerItem<Item,char const(&)[6],int>("totem", (__int16 *)&v24);
  v21 = (*(int (**)(void))(*(_DWORD *)v20 + 16))();
  *(_BYTE *)(v21 + 42) = 1;
  Item::mTotem = v21;
  v23 = 196;
  Item::mIron_nugget = registerItem<Item,char const(&)[12],int>("iron_nugget", (__int16 *)&v23);
  Item::initCreativeItems((Item *)Item::mIron_nugget);
  return j_j_j__ZN19DocumentationSystem21registerDocumentationERKSsPFvRS_E_0();
}


void *__fastcall Item::buildDocumentation(Item *this, DocumentationSystem *a2)
{
  char *v2; // r4@1
  _DWORD *v3; // r9@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  char *v16; // r8@51
  void *v17; // r0@51
  char *v18; // r0@52
  void *v19; // r0@53
  void *v20; // r0@54
  void *v21; // r0@55
  char *v22; // r0@56
  void *result; // r0@58
  const char *v24; // [sp+1Ch] [bp-4Ch]@6
  int v25; // [sp+20h] [bp-48h]@2
  int v26; // [sp+28h] [bp-40h]@10
  int v27; // [sp+30h] [bp-38h]@14
  const char *v28; // [sp+38h] [bp-30h]@22
  int v29; // [sp+3Ch] [bp-2Ch]@18

  v2 = DocumentationSystem::getPage((int)this, (const void **)&DocumentationSystem::NODE_ITEMS);
  v2[4] = 1;
  sub_21E8190((void **)v2 + 6, "ID", (_BYTE *)2);
  sub_21E8190((void **)v2 + 7, "Name", (_BYTE *)4);
  sub_21E8190((void **)v2 + 8, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)v2 + 9, "Aux Values", (_BYTE *)0xA);
  v3 = Item::mItems;
  do
  {
    if ( *v3 )
    {
      Util::toString<short,(void *)0,(void *)0>((void **)&v28, *(_WORD *)(*v3 + 18));
      sub_21E94B4((void **)&v29, v28);
      sub_21E94B4((void **)&v27, *(const char **)(*v3 + 24));
      sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
      (*(void (__fastcall **)(const char **))(*(_DWORD *)*v3 + 260))(&v24);
      sub_21E94B4((void **)&v25, v24);
      v16 = DocumentationSystem::Node::addNode((int)v2, &v29, (const void **)&v27, &v26, &v25);
      v17 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      v18 = (char *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v24 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v26 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v27 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v29 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (char *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v28 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v16[6] = 0;
    }
    ++v3;
    result = &Item::mPortfolioBook;
  }
  while ( (_UNKNOWN *)v3 != &Item::mPortfolioBook );
  return result;
}


signed int __fastcall Item::initServer(Item *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  Item *v3; // r4@1
  int v4; // r6@2
  int v5; // r7@2
  void *v6; // r0@2
  void *v7; // r0@3
  _BYTE *v8; // r2@4
  Json::Value *v9; // r0@6
  Json::Value *v10; // r0@6
  Json::Value *v11; // r0@6
  Json::Value *v12; // r0@6
  Json::Value *v13; // r0@6
  Json::Value *v14; // r0@6
  int v15; // r0@6
  int v16; // r6@6
  void *v17; // r0@7
  int v18; // r1@9
  void *v19; // r0@9
  int v20; // r1@10
  void *v21; // r0@10
  void *v22; // r0@12
  int v23; // r1@13
  void *v24; // r0@13
  void *v25; // r0@15
  Json::Value *v26; // r6@16
  CameraItemComponent *v27; // r5@17
  int v28; // r0@20
  void *v29; // r0@22
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  unsigned int *v33; // r2@28
  signed int v34; // r1@30
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  unsigned int *v39; // r2@40
  signed int v40; // r1@42
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  unsigned int *v43; // r2@48
  signed int v44; // r1@50
  int v45; // [sp+8h] [bp-40h]@16
  int v46; // [sp+10h] [bp-38h]@13
  int v47; // [sp+14h] [bp-34h]@13
  int v48; // [sp+1Ch] [bp-2Ch]@6
  int v49; // [sp+20h] [bp-28h]@6
  int v50; // [sp+28h] [bp-20h]@2
  int v51; // [sp+2Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( Json::Value::isObject(a2) != 1 )
    return 1;
  v4 = Json::Value::operator[](v2, "block");
  sub_21E94B4((void **)&v50, (const char *)&unk_257BC67);
  Json::Value::asString(&v51, v4, &v50);
  v5 = Block::lookupByName((unsigned int *)&v51, 1);
  v6 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (_BYTE *)(v5 + 4);
  if ( !v5 )
    v8 = &BlockID::AIR;
  *((_BYTE *)v3 + 44) = *v8;
  v9 = (Json::Value *)Json::Value::operator[](v2, "max_damage");
  *((_WORD *)v3 + 15) = Json::Value::asInt(v9, 0);
  v10 = (Json::Value *)Json::Value::operator[](v2, "hand_equipped");
  *((_BYTE *)v3 + 33) = Json::Value::asBool(v10, 0);
  v11 = (Json::Value *)Json::Value::operator[](v2, "stacked_by_data");
  *((_BYTE *)v3 + 34) = Json::Value::asBool(v11, 0);
  v12 = (Json::Value *)Json::Value::operator[](v2, "foil");
  *((_BYTE *)v3 + 32) = Json::Value::asBool(v12, 0);
  v13 = (Json::Value *)Json::Value::operator[](v2, "use_duration");
  *((_DWORD *)v3 + 9) = Json::Value::asInt(v13, 0);
  v14 = (Json::Value *)Json::Value::operator[](v2, "max_stack_size");
  *((_BYTE *)v3 + 4) = Json::Value::asInt(v14, 64);
  sub_21E94B4((void **)&v48, "food");
  registerComponent<FoodItemComponent>(&v49, (int)v3, v2, (const char **)&v48);
  v15 = v49;
  v49 = 0;
  v16 = *((_DWORD *)v3 + 25);
  *((_DWORD *)v3 + 25) = v15;
  if ( v16 )
    v17 = *(void **)(v16 + 24);
    if ( v17 )
      operator delete(v17);
    v18 = *(_DWORD *)(v16 + 20);
    v19 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = *(_DWORD *)(v16 + 16);
    v21 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v20 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    operator delete((void *)v16);
  std::unique_ptr<FoodItemComponent,std::default_delete<FoodItemComponent>>::~unique_ptr(&v49);
  v22 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v48 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v46, "seed");
  registerComponent<SeedItemComponent>((SeedItemComponent **)&v47, v3, v2, (const char **)&v46);
  v23 = v47;
  v47 = 0;
  v24 = (void *)*((_DWORD *)v3 + 26);
  *((_DWORD *)v3 + 26) = v23;
  if ( v24 )
    operator delete(v24);
  v25 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v46 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v45, "camera");
  v26 = (Json::Value *)Json::Value::operator[](v2, (const char **)&v45);
  if ( Json::Value::isNull(v26) )
    goto LABEL_19;
  v27 = (CameraItemComponent *)operator new(0x24u);
  CameraItemComponent::CameraItemComponent(v27, v3);
  if ( !CameraItemComponent::init(v27, v26) )
    (*(void (__fastcall **)(CameraItemComponent *))(*(_DWORD *)v27 + 4))(v27);
LABEL_19:
    v27 = 0;
  v28 = *((_DWORD *)v3 + 27);
  *((_DWORD *)v3 + 27) = v27;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v29 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v45 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  return 1;
}


signed int __fastcall Item::findCreativeItem(Item *this, const ItemInstance *a2)
{
  Item *v2; // r4@1
  ItemInstance *v3; // r5@1 OVERLAPPED
  ItemInstance *v4; // r6@1 OVERLAPPED
  signed int result; // r0@4

  v2 = this;
  *(_QWORD *)&v3 = *(_QWORD *)&Item::mCreativeList;
  if ( Item::mCreativeList == dword_2806D24 )
  {
    result = 0;
  }
  else
    while ( ItemInstance::matchesItem(v3, v2) != 1 )
    {
      v3 = (ItemInstance *)((char *)v3 + 72);
      if ( v4 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall Item::isDestructive(Item *this, int a2)
{
  return 0;
}


int __fastcall Item::setHandEquipped(int result)
{
  *(_BYTE *)(result + 33) = 1;
  return result;
}


int __fastcall Item::setCategory(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}


void __fastcall Item::appendFormattedHovertext(int a1, ItemInstance *this, int a3, int a4, int a5, int a6, int a7, void *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, char a18)
{
  Item::appendFormattedHovertext(a1, this, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}


int __fastcall Item::canUseSeed(int a1, Entity *a2, const BlockPos *a3, signed __int8 a4)
{
  SeedItemComponent *v4; // r0@1
  int result; // r0@2

  v4 = *(SeedItemComponent **)(a1 + 104);
  if ( v4 )
    result = j_j_j__ZNK17SeedItemComponent8canUseOnER6EntityRK8BlockPosa(v4, a2, a3, a4);
  else
    result = 0;
  return result;
}


int __fastcall Item::setIsMirroredArt(int result, bool a2)
{
  *(_BYTE *)(result + 28) = a2;
  return result;
}


signed int __fastcall Item::initClient(Item *this, Json::Value *a2, Json::Value *a3)
{
  Item *v3; // r10@1
  Json::Value *v4; // r11@1
  Json::Value *v5; // r7@1
  int v6; // r4@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r6@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  int v11; // r8@8
  int v12; // r5@10
  void *v13; // r0@10
  int v14; // r5@11
  int v15; // r9@11
  void *v16; // r0@11
  void *v17; // r0@12
  int v18; // r5@15
  void *v19; // r0@15
  int v20; // r5@18
  void *v21; // r0@18
  int v22; // r5@21
  void *v23; // r0@21
  int v24; // r5@24
  void *v25; // r0@24
  int v26; // r5@27
  void *v27; // r0@27
  const Json::Value *v28; // r0@30
  const void **v29; // r0@31
  char *v30; // r0@31
  char *v31; // r0@32
  unsigned int *v32; // r2@33
  signed int v33; // r1@35
  const Json::Value *v34; // r0@37
  const Json::Value *v35; // r0@40
  const Json::Value *v36; // r0@43
  signed int v37; // r0@43
  int *v38; // r1@43
  void *v39; // r0@48
  void *v40; // r0@49
  void *v41; // r0@50
  void *v42; // r0@51
  void *v43; // r0@52
  void *v44; // r0@53
  unsigned int v45; // r0@57
  unsigned int *v46; // r5@61
  unsigned int v47; // r0@63
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  unsigned int *v51; // r2@73
  signed int v52; // r1@75
  unsigned int *v53; // r2@77
  signed int v54; // r1@79
  unsigned int *v55; // r2@81
  signed int v56; // r1@83
  unsigned int *v57; // r2@85
  signed int v58; // r1@87
  unsigned int *v59; // r2@89
  signed int v60; // r1@91
  unsigned int *v61; // r2@93
  signed int v62; // r1@95
  unsigned int *v63; // r2@97
  signed int v64; // r1@99
  unsigned int *v65; // r2@101
  signed int v66; // r1@103
  unsigned int *v67; // r2@105
  signed int v68; // r1@107
  unsigned int *v69; // r2@109
  signed int v70; // r1@111
  unsigned int *v71; // r2@113
  signed int v72; // r1@115
  unsigned int *v73; // r2@117
  signed int v74; // r1@119
  unsigned int *v75; // r2@121
  signed int v76; // r1@123
  unsigned int *v77; // r2@181
  signed int v78; // r1@183
  int v79; // [sp+0h] [bp-C8h]@43
  char v80; // [sp+10h] [bp-B8h]@40
  char v81; // [sp+20h] [bp-A8h]@37
  char *v82; // [sp+30h] [bp-98h]@31
  char *v83; // [sp+34h] [bp-94h]@31
  char v84; // [sp+38h] [bp-90h]@30
  int v85; // [sp+50h] [bp-78h]@27
  int v86; // [sp+54h] [bp-74h]@27
  int v87; // [sp+5Ch] [bp-6Ch]@24
  int v88; // [sp+60h] [bp-68h]@24
  int v89; // [sp+68h] [bp-60h]@21
  int v90; // [sp+6Ch] [bp-5Ch]@21
  int v91; // [sp+74h] [bp-54h]@18
  int v92; // [sp+78h] [bp-50h]@18
  int v93; // [sp+80h] [bp-48h]@15
  int v94; // [sp+84h] [bp-44h]@15
  int v95; // [sp+8Ch] [bp-3Ch]@11
  int v96; // [sp+90h] [bp-38h]@11
  int v97; // [sp+98h] [bp-30h]@10
  int v98; // [sp+9Ch] [bp-2Ch]@10

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = dword_2806D1C;
  if ( dword_2806D1C )
  {
    v7 = *(_DWORD *)(dword_2806D1C + 4);
    v8 = (unsigned int *)(dword_2806D1C + 4);
    while ( v7 )
    {
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
      {
        v10 = __strex(v7 + 1, v8);
        v7 = v9;
        if ( !v10 )
        {
          __dmb();
          if ( !*v8 )
            goto LABEL_194;
          v11 = Item::mItemTextureAtlas;
          if ( !Item::mItemTextureAtlas || Json::Value::isObject(v5) != 1 )
          v12 = Json::Value::operator[](v5, "icon");
          sub_21E94B4((void **)&v97, (const char *)&unk_257BC67);
          Json::Value::asString(&v98, v12, &v97);
          v13 = (void *)(v97 - 12);
          if ( (int *)(v97 - 12) != &dword_28898C0 )
          {
            v49 = (unsigned int *)(v97 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
            }
            else
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          }
          v14 = Json::Value::operator[](v5, "icon_varient");
          sub_21E94B4((void **)&v95, (const char *)&unk_257BC67);
          Json::Value::asString(&v96, v14, &v95);
          v15 = itemVarientFromString((unsigned int *)&v96);
          v16 = (void *)(v96 - 12);
          if ( (int *)(v96 - 12) != &dword_28898C0 )
            v51 = (unsigned int *)(v96 - 4);
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
              v52 = (*v51)--;
            if ( v52 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          v17 = (void *)(v95 - 12);
          if ( (int *)(v95 - 12) != &dword_28898C0 )
            v53 = (unsigned int *)(v95 - 4);
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          if ( *(_DWORD *)(v98 - 12) )
            *((_DWORD *)v3 + 15) = *(_DWORD *)(*(_DWORD *)(TextureAtlas::getTextureItem(v11, (int **)&v98) + 8)
                                             + 12 * v15);
          v18 = Json::Value::operator[](v5, "icon_atlas");
          sub_21E94B4((void **)&v93, (const char *)&unk_257BC67);
          Json::Value::asString(&v94, v18, &v93);
          v19 = (void *)(v93 - 12);
          if ( (int *)(v93 - 12) != &dword_28898C0 )
            v55 = (unsigned int *)(v93 - 4);
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
              v56 = (*v55)--;
            if ( v56 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          if ( *(_DWORD *)(v94 - 12) )
            *((_DWORD *)v3 + 16) = TextureAtlas::getTextureItem(v11, (int **)&v94);
          v20 = Json::Value::operator[](v5, "category");
          sub_21E94B4((void **)&v91, (const char *)&unk_257BC67);
          Json::Value::asString(&v92, v20, &v91);
          v21 = (void *)(v91 - 12);
          if ( (int *)(v91 - 12) != &dword_28898C0 )
            v57 = (unsigned int *)(v91 - 4);
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
              v58 = (*v57)--;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          if ( *(_DWORD *)(v92 - 12) )
            *((_DWORD *)v3 + 12) = CreativeItemCategoryFromString((unsigned int *)&v92);
          v22 = Json::Value::operator[](v5, "use_animation");
          sub_21E94B4((void **)&v89, (const char *)&unk_257BC67);
          Json::Value::asString(&v90, v22, &v89);
          v23 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != &dword_28898C0 )
            v59 = (unsigned int *)(v89 - 4);
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
              v60 = (*v59)--;
            if ( v60 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          if ( *(_DWORD *)(v90 - 12) )
            *((_BYTE *)v3 + 45) = UseAnimationFromString((unsigned int *)&v90);
          v24 = Json::Value::operator[](v5, "hover_text_color");
          sub_21E94B4((void **)&v87, (const char *)&unk_257BC67);
          Json::Value::asString(&v88, v24, &v87);
          v25 = (void *)(v87 - 12);
          if ( (int *)(v87 - 12) != &dword_28898C0 )
            v61 = (unsigned int *)(v87 - 4);
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          if ( *(_DWORD *)(v88 - 12) )
            *((_DWORD *)v3 + 14) = ColorFormat::FromString((unsigned int *)&v88);
          v26 = Json::Value::operator[](v5, "render_offsets");
          sub_21E94B4((void **)&v85, (const char *)&unk_257BC67);
          Json::Value::asString(&v86, v26, &v85);
          v27 = (void *)(v85 - 12);
          if ( (int *)(v85 - 12) != &dword_28898C0 )
            v63 = (unsigned int *)(v85 - 4);
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
              v64 = (*v63)--;
            if ( v64 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          *((_BYTE *)v3 + 68) = 0;
          if ( !Json::Value::isNull(v4) && *(_DWORD *)(v86 - 12) )
            v28 = (const Json::Value *)Json::Value::operator[](v4, (const char **)&v86);
            Json::Value::Value((Json::Value *)&v84, v28);
            if ( Json::Value::isNull((Json::Value *)&v84) == 1 )
              v82 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v82, *(_DWORD *)(v86 - 12) + 29);
              sub_21E7408((const void **)&v82, "Item referenced render_offset", 0x1Du);
              sub_21E72F0((const void **)&v82, (const void **)&v86);
              v29 = sub_21E7408((const void **)&v82, " that doesn't exist in items_offset_client.json", 0x2Fu);
              v83 = (char *)*v29;
              *v29 = &unk_28898CC;
              JsonUtil::errorMessage((int *)&v83);
              v30 = v83 - 12;
              if ( (int *)(v83 - 12) != &dword_28898C0 )
              {
                v77 = (unsigned int *)(v83 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v78 = __ldrex(v77);
                  while ( __strex(v78 - 1, v77) );
                }
                else
                  v78 = (*v77)--;
                if ( v78 <= 0 )
                  j_j_j_j__ZdlPv_9(v30);
              }
              v31 = v82 - 12;
              if ( (int *)(v82 - 12) != &dword_28898C0 )
                v32 = (unsigned int *)(v82 - 4);
                    v33 = __ldrex(v32);
                  while ( __strex(v33 - 1, v32) );
                  v33 = (*v32)--;
                if ( v33 <= 0 )
                  j_j_j_j__ZdlPv_9(v31);
              *((_BYTE *)v3 + 68) = 1;
              v34 = (const Json::Value *)Json::Value::operator[](
                                           (Json::Value *)&v84,
                                           "VR_hand_controller_position_adjust");
              Json::Value::Value((Json::Value *)&v81, v34);
              if ( Json::Value::isNull((Json::Value *)&v81) )
                *((_DWORD *)v3 + 18) = 0;
                *((_DWORD *)v3 + 19) = 0;
                *((_DWORD *)v3 + 20) = 0;
              else
                JsonUtil::parseValue<Vec3>((Json::Value *)&v81, (int)v3 + 72);
              v35 = (const Json::Value *)Json::Value::operator[](
                                           "VR_hand_controller_rotation_adjust");
              Json::Value::Value((Json::Value *)&v80, v35);
              if ( Json::Value::isNull((Json::Value *)&v80) )
                *((_DWORD *)v3 + 21) = 0;
                *((_DWORD *)v3 + 22) = 0;
                *((_DWORD *)v3 + 23) = 0;
                JsonUtil::parseValue<Vec3>((Json::Value *)&v80, (int)v3 + 84);
              v36 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v84, "VR_hand_controller_scale");
              Json::Value::Value((Json::Value *)&v79, v36);
              v37 = Json::Value::isNull((Json::Value *)&v79);
              v38 = (int *)((char *)v3 + 96);
              if ( v37 )
                *v38 = 1065353216;
                JsonUtil::parseValue<float>((Json::Value *)&v79, v38);
              Json::Value::~Value((Json::Value *)&v79);
              Json::Value::~Value((Json::Value *)&v80);
              Json::Value::~Value((Json::Value *)&v81);
            Json::Value::~Value((Json::Value *)&v84);
          v39 = (void *)(v86 - 12);
          if ( (int *)(v86 - 12) != &dword_28898C0 )
            v65 = (unsigned int *)(v86 - 4);
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          v40 = (void *)(v88 - 12);
          if ( (int *)(v88 - 12) != &dword_28898C0 )
            v67 = (unsigned int *)(v88 - 4);
                v68 = __ldrex(v67);
              while ( __strex(v68 - 1, v67) );
              v68 = (*v67)--;
            if ( v68 <= 0 )
              j_j_j_j__ZdlPv_9(v40);
          v41 = (void *)(v90 - 12);
          if ( (int *)(v90 - 12) != &dword_28898C0 )
            v69 = (unsigned int *)(v90 - 4);
                v70 = __ldrex(v69);
              while ( __strex(v70 - 1, v69) );
              v70 = (*v69)--;
            if ( v70 <= 0 )
              j_j_j_j__ZdlPv_9(v41);
          v42 = (void *)(v92 - 12);
          if ( (int *)(v92 - 12) != &dword_28898C0 )
            v71 = (unsigned int *)(v92 - 4);
                v72 = __ldrex(v71);
              while ( __strex(v72 - 1, v71) );
              v72 = (*v71)--;
            if ( v72 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          v43 = (void *)(v94 - 12);
          if ( (int *)(v94 - 12) != &dword_28898C0 )
            v73 = (unsigned int *)(v94 - 4);
                v74 = __ldrex(v73);
              while ( __strex(v74 - 1, v73) );
              v74 = (*v73)--;
            if ( v74 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          v44 = (void *)(v98 - 12);
          if ( (int *)(v98 - 12) != &dword_28898C0 )
            v75 = (unsigned int *)(v98 - 4);
                v76 = __ldrex(v75);
              while ( __strex(v76 - 1, v75) );
              v76 = (*v75)--;
            if ( v76 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          if ( v6 )
LABEL_194:
                v45 = __ldrex(v8);
              while ( __strex(v45 - 1, v8) );
              v45 = (*v8)--;
            if ( v45 == 1 )
              v46 = (unsigned int *)(v6 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
              if ( &pthread_create )
                __dmb();
                do
                  v47 = __ldrex(v46);
                while ( __strex(v47 - 1, v46) );
                v47 = (*v46)--;
              if ( v47 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
          return 1;
        }
      }
      else
        __clrex();
    }
  }
  return 1;
}


int *__fastcall Item::readUserData(Item *this, ItemInstance *a2, IDataInput *a3)
{
  IDataInput *v3; // r4@1
  ItemInstance *v4; // r5@1
  unsigned __int16 v5; // r0@1
  int v6; // r7@1
  char *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  __int64 v11; // [sp+4h] [bp-34h]@2
  void **v12; // [sp+Ch] [bp-2Ch]@2
  int v13; // [sp+10h] [bp-28h]@2
  int v14; // [sp+14h] [bp-24h]@2
  int *v15; // [sp+18h] [bp-20h]@2
  _DWORD *v16; // [sp+1Ch] [bp-1Ch]@2

  v3 = a3;
  v4 = a2;
  v5 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a3 + 28))(a3);
  v6 = v5;
  if ( v5 )
  {
    v16 = &unk_28898CC;
    sub_21E849C((char *)&v16, v5, 0);
    (*(void (__fastcall **)(IDataInput *, _DWORD *, int))(*(_DWORD *)v3 + 40))(v3, v16, v6);
    v12 = &off_26E91B8;
    v13 = 0;
    v14 = *(v16 - 3);
    v15 = (int *)&v16;
    NbtIo::read((NbtIo *)((char *)&v11 + 4), (IDataInput *)&v12);
    if ( HIDWORD(v11) )
    {
      v11 = HIDWORD(v11);
      ItemInstance::setUserData((int)v4, (int *)&v11);
      if ( (_DWORD)v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      LODWORD(v11) = 0;
    }
    v7 = (char *)(v16 - 3);
    if ( v16 - 3 != &dword_28898C0 )
      v9 = v16 - 1;
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
  return ItemInstance::deserializeComponents(v4, v3);
}


int __fastcall Item::setIcon(int result, const TextureUVCoordinateSet *a2)
{
  *(_DWORD *)(result + 60) = a2;
  return result;
}


int __fastcall Item::getInteractText(Item *this, const Player *a2, Entity *a3)
{
  Entity *v3; // r5@1
  int *v4; // r4@1
  int result; // r0@1
  Entity *v6; // r0@2

  v3 = a3;
  v4 = (int *)this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  result = Entity::isRiding(v3);
  if ( result == 1 )
  {
    v6 = (Entity *)Entity::getRide(v3);
    result = Entity::getBoostableComponent(v6);
    if ( result )
      result = BoostableComponent::itemUseText(result, (int)v3, v4);
  }
  return result;
}


int __fastcall Item::addCreativeItem(Item *this, Item *a2, __int16 a3)
{
  int v3; // r4@5
  ItemInstance *v4; // r2@5
  int v5; // r4@5
  ItemInstance *v6; // t1@5
  int result; // r0@12
  int v8; // [sp+0h] [bp-50h]@1
  int v9; // [sp+8h] [bp-48h]@12
  void *v10; // [sp+24h] [bp-2Ch]@10
  void *ptr; // [sp+34h] [bp-1Ch]@8

  ItemInstance::ItemInstance((ItemInstance *)&v8, *((_WORD *)this + 9), 1, (int)a2);
  if ( dword_2806D24 == unk_2806D28 )
  {
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&Item::mCreativeList,
      (int)&v8);
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v8);
    dword_2806D24 += 72;
  if ( (_BYTE)Item::mInCreativeGroup )
    v3 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
    v6 = *(ItemInstance **)(v3 + 4);
    v5 = v3 + 4;
    v4 = v6;
    if ( v6 == *(ItemInstance **)(v5 + 4) )
    {
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)(Item::mCreativeGroups
                           + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
        (int)&v8);
    }
    else
      ItemInstance::ItemInstance(v4, (int)&v8);
      *(_DWORD *)v5 += 72;
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


int __fastcall Item::mineBlock(int a1, int a2, Entity *a3, int a4, int a5, int a6, Entity *a7)
{
  ItemInstance *v7; // r4@1
  int v8; // r0@1

  v7 = (ItemInstance *)a2;
  v8 = Block::mBlocks[*(_BYTE *)a3];
  if ( v8 && (*(int (**)(void))(*(_DWORD *)v8 + 96))() == 1 )
    ItemInstance::hurtAndBreak(v7, 2, a7);
  return 1;
}


int __fastcall Item::_useOn(int a1, ItemInstance *a2, Entity *a3, BlockPos *a4, signed __int8 a5, float a6, float a7, float a8, ItemUseCallback *a9)
{
  int v9; // r7@1
  FoodItemComponent *v10; // r0@1
  BlockPos *v11; // r8@1
  Entity *v12; // r5@1
  ItemInstance *v17; // r6@1
  int v18; // r4@2
  SeedItemComponent *v19; // r0@4
  CameraItemComponent *v20; // r0@6
  int result; // r0@7
  float v22; // [sp+Ch] [bp-5Ch]@7
  float v23; // [sp+18h] [bp-50h]@5
  float v24; // [sp+24h] [bp-44h]@2

  v9 = a1;
  v10 = *(FoodItemComponent **)(a1 + 100);
  v11 = a4;
  v12 = a3;
  __asm { VLDR            S16, [SP,#0x68+arg_C] }
  v17 = a2;
  __asm
  {
    VLDR            S18, [SP,#0x68+arg_8]
    VLDR            S20, [SP,#0x68+arg_4]
  }
  if ( _ZF )
    v18 = 0;
  else
    __asm
    {
      VSTR            S20, [SP,#0x68+var_44]
      VSTR            S18, [SP,#0x68+var_40]
      VSTR            S16, [SP,#0x68+var_3C]
    }
    v18 = FoodItemComponent::useOn(v10, a2, a3, a4, a5, (const Vec3 *)&v24, a9);
  v19 = *(SeedItemComponent **)(v9 + 104);
  if ( v19 )
      VSTR            S20, [SP,#0x68+var_50]
      VSTR            S18, [SP,#0x68+var_4C]
      VSTR            S16, [SP,#0x68+var_48]
    v18 |= SeedItemComponent::useOn(v19, v17, v12, v11, a5, (const Vec3 *)&v23, a9);
  v20 = *(CameraItemComponent **)(v9 + 108);
  if ( v20 )
      VSTR            S20, [SP,#0x68+var_5C]
      VSTR            S18, [SP,#0x68+var_58]
      VSTR            S16, [SP,#0x68+var_54]
    result = CameraItemComponent::useOn(v20, v17, v12, v11, a5, (const Vec3 *)&v22, a9) | v18;
    result = v18;
  return result;
}


int __fastcall Item::teardownItems(Item *this)
{
  int v1; // r6@1
  unsigned int *v2; // r2@3
  signed int v3; // r1@5
  int v4; // r5@11
  int v5; // r0@11
  int v6; // r1@13
  void *v7; // r0@13
  int result; // r0@15

  _aeabi_memclr8(Item::mItems, 2048);
  v1 = dword_2806DC8;
  while ( v1 )
  {
    v4 = v1;
    v5 = *(_DWORD *)(v1 + 8);
    v1 = *(_DWORD *)v1;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    *(_DWORD *)(v4 + 8) = 0;
    v6 = *(_DWORD *)(v4 + 4);
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v2 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v3 = __ldrex(v2);
        while ( __strex(v3 - 1, v2) );
      }
      else
        v3 = (*v2)--;
      if ( v3 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    operator delete((void *)v4);
  }
  _aeabi_memclr4(Item::mItemLookupMap, 4 * unk_2806DC4);
  result = 0;
  dword_2806DC8 = 0;
  *(_DWORD *)algn_2806DCC = 0;
  return result;
}


int __fastcall Item::Item(int a1, const void **a2, __int16 a3)
{
  int v3; // r5@1
  const void **v4; // r6@1
  __int16 v5; // r7@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_2701A94;
  *(_BYTE *)(a1 + 4) = 64;
  sub_21E94B4((void **)(a1 + 8), "atlas.items");
  *(_DWORD *)(v3 + 12) = 1;
  *(_BYTE *)(v3 + 16) = 0;
  *(_WORD *)(v3 + 18) = v5 + 256;
  sub_21E8AF4((int *)(v3 + 20), (int *)&Item::ICON_DESCRIPTION_PREFIX);
  sub_21E72F0((const void **)(v3 + 20), v4);
  sub_21E8AF4((int *)(v3 + 24), (int *)v4);
  *(_BYTE *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 34) = 0;
  *(_DWORD *)(v3 + 30) = 0;
  *(_BYTE *)(v3 + 35) &= 0xFEu;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 257;
  *(_BYTE *)(v3 + 44) = BlockID::AIR;
  *(_BYTE *)(v3 + 45) = 0;
  *(_DWORD *)(v3 + 48) = 4;
  *(_BYTE *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 96) = 1065353216;
  *(_DWORD *)(v3 + 100) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  return v3;
}


ItemInstance *__fastcall Item::Tier::getTierItem(Item::Tier *this, _DWORD *_R1)
{
  int **v6; // r1@4
  ItemInstance *result; // r0@3

  switch ( *_R1 )
  {
    case 0:
      __asm
      {
        VMOV.F32        S0, #2.0; jumptable 017F1650 case 0
        VLDR            S2, [R1,#8]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        v6 = Block::mWoodPlanks;
        goto LABEL_7;
      result = ItemInstance::ItemInstance(this, Item::mGoldIngot);
      break;
    case 1:
      v6 = &Block::mStone;
LABEL_7:
      result = ItemInstance::ItemInstance(this, **v6);
    case 2:
      result = ItemInstance::ItemInstance(this, Item::mIronIngot);
    case 3:
      result = ItemInstance::ItemInstance(this, Item::mDiamond);
    default:
      result = (ItemInstance *)ItemInstance::ItemInstance((int)this);
  }
  return result;
}


int __fastcall Item::addCreativeItem(Item *this, const Block *a2, __int16 a3)
{
  int v3; // r4@5
  ItemInstance *v4; // r2@5
  int v5; // r4@5
  ItemInstance *v6; // t1@5
  int result; // r0@12
  int v8; // [sp+0h] [bp-50h]@1
  int v9; // [sp+8h] [bp-48h]@12
  void *v10; // [sp+24h] [bp-2Ch]@10
  void *ptr; // [sp+34h] [bp-1Ch]@8

  ItemInstance::ItemInstance((ItemInstance *)&v8, *((_BYTE *)this + 4), 1, (int)a2);
  if ( dword_2806D24 == unk_2806D28 )
  {
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&Item::mCreativeList,
      (int)&v8);
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v8);
    dword_2806D24 += 72;
  if ( (_BYTE)Item::mInCreativeGroup )
    v3 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
    v6 = *(ItemInstance **)(v3 + 4);
    v5 = v3 + 4;
    v4 = v6;
    if ( v6 == *(ItemInstance **)(v5 + 4) )
    {
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)(Item::mCreativeGroups
                           + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
        (int)&v8);
    }
    else
      ItemInstance::ItemInstance(v4, (int)&v8);
      *(_DWORD *)v5 += 72;
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


int __fastcall Item::getAnimationFrameFor(Item *this, Mob *a2, bool a3)
{
  return 0;
}


int __fastcall Item::isArmor(Item *this)
{
  return 0;
}


signed int __fastcall Item::getEnchantSlot(Item *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_WORD *)this + 9);
  if ( v1 == *(_WORD *)(Item::mBook + 18) )
  {
    result = 0x7FFF;
  }
  else
    result = 0;
    if ( v1 == *(_WORD *)(Item::mEnchanted_book + 18) )
      result = 0x7FFF;
  return result;
}


int __fastcall Item::addCreativeItem(Item *this, int a2, __int16 a3)
{
  int v3; // r4@5
  ItemInstance *v4; // r2@5
  int v5; // r4@5
  ItemInstance *v6; // t1@5
  int result; // r0@12
  int v8; // [sp+0h] [bp-50h]@1
  int v9; // [sp+8h] [bp-48h]@12
  void *v10; // [sp+24h] [bp-2Ch]@10
  void *ptr; // [sp+34h] [bp-1Ch]@8

  ItemInstance::ItemInstance((ItemInstance *)&v8, (int)this, 1, a2);
  if ( dword_2806D24 == unk_2806D28 )
  {
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&Item::mCreativeList,
      (int)&v8);
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v8);
    dword_2806D24 += 72;
  if ( (_BYTE)Item::mInCreativeGroup )
    v3 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
    v6 = *(ItemInstance **)(v3 + 4);
    v5 = v3 + 4;
    v4 = v6;
    if ( v6 == *(ItemInstance **)(v5 + 4) )
    {
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)(Item::mCreativeGroups
                           + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
        (int)&v8);
    }
    else
      ItemInstance::ItemInstance(v4, (int)&v8);
      *(_DWORD *)v5 += 72;
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


const void **__fastcall Item::buildDescriptionId(Item *this, const ItemInstance *a2)
{
  const void **v2; // r5@1

  v2 = (const void **)this;
  sub_21E8AF4((int *)this, (int *)a2 + 5);
  return sub_21E7408(v2, ".name", 5u);
}


signed int __fastcall Item::getCooldownType(Item *this)
{
  return -1;
}


signed int __fastcall Item::_checkUseOnPermissions(Item *this, Entity *a2, ItemInstance *a3, const signed __int8 *a4, const BlockPos *a5)
{
  Entity *v5; // r6@1
  const signed __int8 *v6; // r4@1
  ItemInstance *v7; // r5@1
  BlockSource *v8; // r0@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  return BlockSource::checkBlockPermissions(v8, v5, a5, *v6, v7, 0);
}


void __fastcall Item::buildCategoryDescriptionName(Item *this, const ItemInstance *a2)
{
  Item::buildCategoryDescriptionName(this, a2);
}


signed int __fastcall Item::canBeDepleted(Item *this)
{
  Item *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( (signed int)*((_WORD *)v1 + 15) >= 1 && !*((_BYTE *)v1 + 34) )
    result = 1;
  return result;
}


int *__fastcall Item::getTextureItem(int **a1)
{
  int **v1; // r1@1
  int v2; // r4@1
  unsigned int v3; // r0@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int *v7; // r5@9
  char v8; // r0@11
  unsigned int *v9; // r1@15
  unsigned int v10; // r0@17
  unsigned int *v11; // r6@21
  unsigned int v12; // r0@23

  v1 = a1;
  v2 = dword_2806D1C;
  if ( dword_2806D1C )
  {
    v3 = *(_DWORD *)(dword_2806D1C + 4);
    v4 = (unsigned int *)(dword_2806D1C + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          if ( *v4 && Item::mItemTextureAtlas )
          {
            v7 = (int *)TextureAtlas::getTextureItem(Item::mItemTextureAtlas, v1);
            goto LABEL_15;
          }
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v2 = 0;
LABEL_11:
  v8 = byte_2806E5C;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2806E5C) )
    dword_2806E60 = (int)&unk_28898CC;
    *(_DWORD *)algn_2806E64 = 0;
    *(_DWORD *)&algn_2806E64[4] = 0;
    *(_DWORD *)&algn_2806E64[8] = 0;
    *(_DWORD *)&algn_2806E64[12] = 0;
    _cxa_atexit(TextureAtlasItem::~TextureAtlasItem);
    j___cxa_guard_release((unsigned int *)&byte_2806E5C);
  v7 = &dword_2806E60;
  if ( v2 )
LABEL_15:
    v9 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v7;
}


int __fastcall Item::setIsGlint(int result, bool a2)
{
  *(_BYTE *)(result + 32) = a2;
  return result;
}


Json::Value *__fastcall Item::initServerData(Item *this, ResourcePackManager *a2)
{
  Item *v2; // r4@1
  int (__fastcall *v3)(Item *, char **, char **); // r5@1
  int v4; // r4@1
  char *v5; // r0@1
  char *v6; // r0@2
  const Json::Value *v7; // r0@5
  signed int v8; // r7@6
  int v9; // r6@7
  const Json::Value *v10; // r0@8
  char *v11; // r0@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  int v19; // [sp+0h] [bp-D8h]@8
  char v20; // [sp+10h] [bp-C8h]@5
  char *v21; // [sp+28h] [bp-B0h]@1
  char *v22; // [sp+2Ch] [bp-ACh]@1
  int v23; // [sp+30h] [bp-A8h]@1
  char *v24; // [sp+34h] [bp-A4h]@1
  char v25; // [sp+38h] [bp-A0h]@1
  char v26; // [sp+A8h] [bp-30h]@1

  v2 = this;
  Json::Value::Value(&v26, 0);
  Json::Reader::Reader((Json::Reader *)&v25);
  v24 = (char *)&unk_28898CC;
  v3 = *(int (__fastcall **)(Item *, char **, char **))(*(_DWORD *)v2 + 8);
  sub_21E94B4((void **)&v21, "items.json");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 6;
  v4 = v3(v2, &v22, &v24);
  v5 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( v4 == 1 && Json::Reader::parse((int)&v25, (int *)&v24, (int)&v26, 1) == 1 )
    v7 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v26, "items");
    Json::Value::Value((Json::Value *)&v20, v7);
    if ( !Json::Value::isNull((Json::Value *)&v20) )
      v8 = 0;
      {
        v9 = Item::mItems[v8];
        if ( v9 )
        {
          v10 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v20, (const char **)(v9 + 24));
          Json::Value::Value((Json::Value *)&v19, v10);
          if ( !Json::Value::isNull((Json::Value *)&v19) && Json::Value::isObject((Json::Value *)&v19) == 1 )
            Item::initServer((Item *)v9, (Json::Value *)&v19);
          Json::Value::~Value((Json::Value *)&v19);
        }
        ++v8;
      }
      while ( v8 < 512 );
    Json::Value::~Value((Json::Value *)&v20);
  v11 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  Json::Reader::~Reader((Json::Reader *)&v25);
  return Json::Value::~Value((Json::Value *)&v26);
}


int __fastcall Item::setExplodable(int result, bool a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}


signed int __fastcall Item::canDestroyInCreative(Item *this)
{
  return 1;
}


signed int __fastcall Item::updateCustomBlockEntityTag(Item *this, BlockSource *a2, ItemInstance *a3, BlockPos *a4)
{
  BlockSource *v4; // r9@1
  BlockPos *v5; // r7@1
  ItemInstance *v6; // r10@1
  BlockEntity *v7; // r11@1
  int *v8; // r8@3
  int v9; // r5@3
  void *v10; // r0@3
  int v11; // r5@4
  void *v12; // r0@4
  int v13; // r5@5
  void *v14; // r0@5
  int v15; // r5@6
  signed int v16; // r5@6
  void *v17; // r0@6
  int v18; // r5@8
  int v19; // r5@8
  void *v20; // r0@8
  int i; // r7@9
  int v22; // r6@10
  int v23; // r5@15
  void *v24; // r0@15
  void *v25; // r0@16
  signed int result; // r0@19
  unsigned int *v27; // r2@21
  signed int v28; // r1@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@53
  signed int v36; // r1@55
  unsigned int *v37; // r2@61
  signed int v38; // r1@63
  unsigned int *v39; // r2@65
  signed int v40; // r1@67
  int v41; // [sp+4h] [bp-64h]@15
  int v42; // [sp+Ch] [bp-5Ch]@15
  int v43; // [sp+10h] [bp-58h]@10
  int v44; // [sp+18h] [bp-50h]@8
  int v45; // [sp+20h] [bp-48h]@6
  int v46; // [sp+28h] [bp-40h]@5
  int v47; // [sp+30h] [bp-38h]@4
  int v48; // [sp+38h] [bp-30h]@3
  int v49; // [sp+3Ch] [bp-2Ch]@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (BlockEntity *)BlockSource::getBlockEntity(a2, a4);
  if ( v7 && ItemInstance::hasUserData(v6) == 1 )
  {
    v8 = (int *)ItemInstance::getUserData(v6);
    CompoundTag::clone((CompoundTag *)&v49, *v8);
    v9 = v49;
    sub_21E94B4((void **)&v48, "x");
    CompoundTag::putInt(v9, (const void **)&v48, *(_DWORD *)v5);
    v10 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v48 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = v49;
    sub_21E94B4((void **)&v47, "y");
    CompoundTag::putInt(v11, (const void **)&v47, *((_DWORD *)v5 + 1));
    v12 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v47 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = v49;
    sub_21E94B4((void **)&v46, (const char *)&aRtuz[3]);
    CompoundTag::putInt(v13, (const void **)&v46, *((_DWORD *)v5 + 2));
    v14 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v46 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = *v8;
    sub_21E94B4((void **)&v45, "BlockEntityTag");
    v16 = CompoundTag::contains(v15, (const void **)&v45, 10);
    v17 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v45 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    if ( v16 == 1 )
      v18 = *v8;
      sub_21E94B4((void **)&v44, "BlockEntityTag");
      v19 = CompoundTag::getCompound(v18, (const void **)&v44);
      v20 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v44 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      for ( i = *(_DWORD *)(v19 + 16); i != v19 + 8; i = sub_21D4820(i) )
        v22 = v49;
        (*(void (__fastcall **)(int *))(**(_DWORD **)(i + 20) + 48))(&v43);
        CompoundTag::put(v22, (const void **)(i + 16), &v43);
        if ( v43 )
          (*(void (**)(void))(*(_DWORD *)v43 + 4))();
        v43 = 0;
    if ( (*(int (__fastcall **)(BlockEntity *))(*(_DWORD *)v7 + 48))(v7) == 1
      && ItemInstance::hasCustomHoverName(v6) == 1 )
      v23 = v49;
      sub_21E94B4((void **)&v42, "CustomName");
      ItemInstance::getCustomName((ItemInstance *)&v41, (int)v6);
      CompoundTag::putString(v23, (const void **)&v42, &v41);
      v24 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v41 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v42 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
    (*(void (__fastcall **)(BlockEntity *, int))(*(_DWORD *)v7 + 8))(v7, v49);
    (*(void (__fastcall **)(BlockEntity *, int, BlockSource *))(*(_DWORD *)v7 + 24))(v7, v49, v4);
    (*(void (__fastcall **)(BlockEntity *, BlockSource *))(*(_DWORD *)v7 + 28))(v7, v4);
    BlockEntity::setChanged(v7);
    if ( v49 )
      (*(void (**)(void))(*(_DWORD *)v49 + 4))();
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Item::getAttackDamage(Item *this)
{
  return 0;
}


int __fastcall Item::useOn(Item *this, ItemInstance *a2, Entity *a3, float a4, float a5, float a6, signed __int8 a7, float a8, float a9, float a10, ItemUseCallback *a11)
{
  Item *v11; // r6@1
  int v12; // r7@1
  Entity *v13; // r4@1
  ItemInstance *v14; // r10@1
  int (__fastcall *v15)(Item *, Entity *, ItemInstance *, char *); // r5@5
  int (__fastcall *v20)(Item *, ItemInstance *, Entity *, int *); // r7@6
  int result; // r0@6
  int v22; // [sp+18h] [bp-48h]@6
  unsigned __int64 v23; // [sp+1Ch] [bp-44h]@6
  int v24; // [sp+24h] [bp-3Ch]@5
  float v25; // [sp+28h] [bp-38h]@5
  float v26; // [sp+2Ch] [bp-34h]@5
  int v27; // [sp+30h] [bp-30h]@3
  unsigned __int64 v28; // [sp+34h] [bp-2Ch]@3
  char v29; // [sp+3Fh] [bp-21h]@1

  v11 = this;
  v29 = a7;
  v12 = LODWORD(a4);
  v13 = a3;
  v14 = a2;
  if ( *((_BYTE *)this + 35) & 1 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 648))(a3) != 1
    || (v27 = v12,
        v28 = __PAIR__(LODWORD(a6), LODWORD(a5)),
        (*(int (__fastcall **)(Item *, ItemInstance *, Entity *, char *))(*(_DWORD *)v11 + 268))(v11, v14, v13, &v29) != 1)
    || !*((_BYTE *)v11 + 43)
    && (v15 = *(int (__fastcall **)(Item *, Entity *, ItemInstance *, char *))(*(_DWORD *)v11 + 264),
        v24 = v12,
        v25 = a5,
        v26 = a6,
        v15(v11, v13, v14, &v29) != 1) )
  {
    result = 0;
  }
  else
    __asm { VLDR            S0, [SP,#0x60+arg_14] }
    v20 = *(int (__fastcall **)(Item *, ItemInstance *, Entity *, int *))(*(_DWORD *)v11 + 272);
    v22 = v27;
    v23 = v28;
    __asm
    {
      VLDR            S2, [SP,#0x60+arg_10]
      VLDR            S4, [SP,#0x60+arg_C]
      VSTR            S2, [SP,#0x60+var_58]
      VSTR            S0, [SP,#0x60+var_54]
      VSTR            S4, [SP,#0x60+var_5C]
    }
    result = v20(v11, v14, v13, &v22);
  return result;
}


void __fastcall Item::buildCategoryDescriptionName(Item *this, const ItemInstance *a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  char *v4; // r0@3
  const void **v5; // r0@4
  char *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int v17; // [sp+4h] [bp-24h]@4
  char *v18; // [sp+8h] [bp-20h]@4
  char *v19; // [sp+Ch] [bp-1Ch]@3
  int v20; // [sp+10h] [bp-18h]@3

  v2 = (const void **)this;
  StringFromCreativeItemCategory((int *)this, *((_DWORD *)a2 + 12));
  v3 = *((_DWORD *)*v2 - 3);
  if ( v3 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(*v2, Util::EMPTY_STRING, *((_DWORD *)*v2 - 3)) )
  {
    v19 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v19, v3 + 19);
    sub_21E7408((const void **)&v19, "craftingScreen.tab.", 0x13u);
    sub_21E72F0((const void **)&v19, v2);
    I18n::get(&v20, (int **)&v19);
    v4 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    sub_21E8AF4(&v17, &dword_2806E2C);
    sub_21E72F0((const void **)&v17, (const void **)&v20);
    v5 = sub_21E72F0((const void **)&v17, (const void **)&unk_2806E54);
    v18 = (char *)*v5;
    *v5 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2,
      (int *)&v18);
    v6 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v18 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v17 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
}


signed int __fastcall Item::isValidAuxValue(Item *this, int a2)
{
  return 1;
}


int __fastcall Item::requiresInteract(Item *this)
{
  return 0;
}


signed int __fastcall Item::getBlockShape(Item *this)
{
  return -1;
}


int __fastcall Item::setMaxDamage(int result, int a2)
{
  *(_WORD *)(result + 30) = a2;
  return result;
}


int __fastcall Item::addBlockItems(Item *this)
{
  int v1; // r0@1
  signed int v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  int v17; // r0@1
  int v18; // r0@1
  int v19; // r0@1
  int v20; // r0@1
  int v21; // r0@1
  int v22; // r0@1
  int v23; // r0@1
  int v24; // r0@1
  int v25; // r0@1
  int v26; // r0@1
  int v27; // r0@1
  int v28; // r0@1
  int v29; // r0@1
  int v30; // r0@1
  int v31; // r0@1
  int v32; // r0@1
  int v33; // r0@1
  int v34; // r0@1
  int v35; // r0@1
  int v36; // r0@1
  int v37; // r0@1
  int v38; // r0@1
  int v39; // r0@1
  int v40; // r0@1
  int v41; // r0@1
  int v42; // r0@1
  int v43; // r0@1
  int v44; // r0@1
  int v45; // r0@1
  int v46; // r0@1
  int v47; // r0@1
  int v48; // r0@1
  int result; // r0@2
  char *v50; // r0@3
  int v51; // r11@5
  char *v52; // r0@5
  int *v53; // r0@5
  int *v54; // r7@5
  int (__fastcall *v55)(int *, _BOOL4); // r6@5
  _BOOL4 v56; // r0@5
  int v57; // [sp+4h] [bp-DCh]@5
  unsigned int v58; // [sp+8h] [bp-D8h]@1
  unsigned int v59; // [sp+Ch] [bp-D4h]@1
  unsigned int v60; // [sp+10h] [bp-D0h]@1
  unsigned int v61; // [sp+14h] [bp-CCh]@1
  unsigned int v62; // [sp+18h] [bp-C8h]@1
  unsigned int v63; // [sp+1Ch] [bp-C4h]@1
  unsigned int v64; // [sp+20h] [bp-C0h]@1
  unsigned int v65; // [sp+24h] [bp-BCh]@1
  unsigned int v66; // [sp+28h] [bp-B8h]@1
  unsigned int v67; // [sp+2Ch] [bp-B4h]@1
  unsigned int v68; // [sp+30h] [bp-B0h]@1
  unsigned int v69; // [sp+34h] [bp-ACh]@1
  unsigned int v70; // [sp+38h] [bp-A8h]@1
  unsigned int v71; // [sp+3Ch] [bp-A4h]@1
  unsigned int v72; // [sp+40h] [bp-A0h]@1
  unsigned int v73; // [sp+44h] [bp-9Ch]@1
  unsigned int v74; // [sp+48h] [bp-98h]@1
  unsigned int v75; // [sp+4Ch] [bp-94h]@1
  unsigned int v76; // [sp+50h] [bp-90h]@1
  unsigned int v77; // [sp+54h] [bp-8Ch]@1
  unsigned int v78; // [sp+58h] [bp-88h]@1
  unsigned int v79; // [sp+5Ch] [bp-84h]@1
  unsigned int v80; // [sp+60h] [bp-80h]@1
  unsigned int v81; // [sp+64h] [bp-7Ch]@1
  unsigned int v82; // [sp+68h] [bp-78h]@1
  unsigned int v83; // [sp+6Ch] [bp-74h]@1
  unsigned int v84; // [sp+70h] [bp-70h]@1
  unsigned int v85; // [sp+74h] [bp-6Ch]@1
  unsigned int v86; // [sp+78h] [bp-68h]@1
  unsigned int v87; // [sp+7Ch] [bp-64h]@1
  unsigned int v88; // [sp+80h] [bp-60h]@1
  unsigned int v89; // [sp+84h] [bp-5Ch]@1
  unsigned int v90; // [sp+88h] [bp-58h]@1
  unsigned int v91; // [sp+8Ch] [bp-54h]@1
  unsigned int v92; // [sp+90h] [bp-50h]@1
  unsigned int v93; // [sp+94h] [bp-4Ch]@1
  unsigned int v94; // [sp+98h] [bp-48h]@1
  unsigned int v95; // [sp+9Ch] [bp-44h]@1
  unsigned int v96; // [sp+A0h] [bp-40h]@1
  unsigned int v97; // [sp+A4h] [bp-3Ch]@1
  unsigned int v98; // [sp+A8h] [bp-38h]@1
  unsigned int v99; // [sp+ACh] [bp-34h]@1
  unsigned int v100; // [sp+B0h] [bp-30h]@1
  unsigned int v101; // [sp+B4h] [bp-2Ch]@1
  unsigned int v102; // [sp+B8h] [bp-28h]@1

  v102 = *(_BYTE *)(Block::mStone + 4) | 0xFFFFFF00;
  v1 = registerItem<AuxDataBlockItem,char const(&)[6],int,Block const*&>("stone", &v102, &Block::mStone);
  v2 = 1;
  (*(void (**)(void))(*(_DWORD *)v1 + 20))();
  v101 = *(_BYTE *)(Block::mDirt + 4) | 0xFFFFFF00;
  v3 = registerItem<AuxDataBlockItem,char const(&)[5],int,Block const*&>("dirt", &v101, &Block::mDirt);
  (*(void (**)(void))(*(_DWORD *)v3 + 20))();
  v100 = *(_BYTE *)(Block::mSand + 4) | 0xFFFFFF00;
  v4 = registerItem<AuxDataBlockItem,char const(&)[5],int,Block const*&>("sand", &v100, &Block::mSand);
  (*(void (**)(void))(*(_DWORD *)v4 + 20))();
  v99 = *(_BYTE *)(Block::mStainedClay + 4) | 0xFFFFFF00;
  v5 = registerItem<AuxDataBlockItem,char const(&)[22],int,Block const*&>(
         "stained_hardened_clay",
         &v99,
         &Block::mStainedClay);
  (*(void (**)(void))(*(_DWORD *)v5 + 20))();
  v98 = *(_BYTE *)(Block::mWool + 4) | 0xFFFFFF00;
  v6 = registerItem<ClothBlockItem,char const(&)[5],int,Block const*&>("wool", &v98);
  (*(void (**)(void))(*(_DWORD *)v6 + 20))();
  v97 = *(_BYTE *)(Block::mWoolCarpet + 4) | 0xFFFFFF00;
  v7 = registerItem<ClothBlockItem,char const(&)[7],int,Block const*&>("carpet", &v97);
  (*(void (**)(void))(*(_DWORD *)v7 + 20))();
  v96 = *(_BYTE *)(Block::mLog + 4) | 0xFFFFFF00;
  v8 = registerItem<AuxDataBlockItem,char const(&)[4],int,Block const*&>("log", &v96, &Block::mLog);
  (*(void (**)(void))(*(_DWORD *)v8 + 20))();
  v95 = *(_BYTE *)(Block::mFence + 4) | 0xFFFFFF00;
  v9 = registerItem<AuxDataBlockItem,char const(&)[6],int,Block const*&>("fence", &v95, &Block::mFence);
  (*(void (**)(void))(*(_DWORD *)v9 + 20))();
  v94 = *(_BYTE *)(Block::mStoneBrick + 4) | 0xFFFFFF00;
  v10 = registerItem<AuxDataBlockItem,char const(&)[11],int,Block const*&>("stonebrick", &v94, &Block::mStoneBrick);
  (*(void (**)(void))(*(_DWORD *)v10 + 20))();
  v93 = *(_BYTE *)(Block::mStoneSlab + 4) | 0xFFFFFF00;
  v11 = registerItem<StoneSlabBlockItem,char const(&)[18],int>("double_stone_slab", &v93);
  (*(void (**)(void))(*(_DWORD *)v11 + 20))();
  v92 = *(_BYTE *)(Block::mStoneSlab2 + 4) | 0xFFFFFF00;
  v12 = registerItem<StoneSlabBlockItem,char const(&)[19],int>("double_stone_slab2", &v92);
  (*(void (**)(void))(*(_DWORD *)v12 + 20))();
  v91 = *(_BYTE *)(Block::mSapling + 4) | 0xFFFFFF00;
  v13 = registerItem<SaplingBlockItem,char const(&)[8],int>("sapling", &v91);
  (*(void (**)(void))(*(_DWORD *)v13 + 20))();
  v90 = *(_BYTE *)(Block::mLeaves + 4) | 0xFFFFFF00;
  v14 = registerItem<LeafBlockItem,char const(&)[7],int,Block const*&>("leaves", &v90, &Block::mLeaves);
  (*(void (**)(void))(*(_DWORD *)v14 + 20))();
  v89 = *(_BYTE *)(Block::mLeaves2 + 4) | 0xFFFFFF00;
  v15 = registerItem<LeafBlockItem,char const(&)[8],int,Block const*&>("leaves2", &v89, &Block::mLeaves2);
  (*(void (**)(void))(*(_DWORD *)v15 + 20))();
  v88 = *(_BYTE *)(Block::mSandStone + 4) | 0xFFFFFF00;
  v16 = registerItem<AuxDataBlockItem,char const(&)[10],int,Block const*&>("sandstone", &v88, &Block::mSandStone);
  (*(void (**)(void))(*(_DWORD *)v16 + 20))();
  v87 = *(_BYTE *)(Block::mRedSandstone + 4) | 0xFFFFFF00;
  v17 = registerItem<AuxDataBlockItem,char const(&)[14],int,Block const*&>("red_sandstone", &v87, &Block::mRedSandstone);
  (*(void (**)(void))(*(_DWORD *)v17 + 20))();
  v86 = *(_BYTE *)(Block::mWoodenSlab + 4) | 0xFFFFFF00;
  v18 = registerItem<WoodSlabBlock::Item,char const(&)[12],int>("wooden_slab", &v86);
  (*(void (**)(void))(*(_DWORD *)v18 + 20))();
  v85 = *(_BYTE *)(Block::mYellowFlower + 4) | 0xFFFFFF00;
  v19 = registerItem<AuxDataBlockItem,char const(&)[14],int,Block const*&>("yellow_flower", &v85, &Block::mYellowFlower);
  (*(void (**)(void))(*(_DWORD *)v19 + 20))();
  v84 = *(_BYTE *)(Block::mRedFlower + 4) | 0xFFFFFF00;
  v20 = registerItem<AuxDataBlockItem,char const(&)[11],int,Block const*&>("red_flower", &v84, &Block::mRedFlower);
  (*(void (**)(void))(*(_DWORD *)v20 + 20))();
  v83 = *(_BYTE *)(Block::mDoublePlant + 4) | 0xFFFFFF00;
  v21 = registerItem<AuxDataBlockItem,char const(&)[13],int,Block const*&>("double_plant", &v83, &Block::mDoublePlant);
  (*(void (**)(void))(*(_DWORD *)v21 + 20))();
  v82 = *(_BYTE *)(Block::mWaterlily + 4) | 0xFFFFFF00;
  v22 = registerItem<WaterLilyBlockItem,char const(&)[10],int>("waterlily", &v82);
  (*(void (**)(void))(*(_DWORD *)v22 + 20))();
  v81 = *(_BYTE *)(Block::mSponge + 4) | 0xFFFFFF00;
  v23 = registerItem<AuxDataBlockItem,char const(&)[7],int,Block const*&>("sponge", &v81, &Block::mSponge);
  (*(void (**)(void))(*(_DWORD *)v23 + 20))();
  v80 = *(_BYTE *)(Block::mTopSnow + 4) | 0xFFFFFF00;
  v24 = registerItem<TopSnowBlockItem,char const(&)[11],int>("snow_layer", &v80);
  (*(void (**)(void))(*(_DWORD *)v24 + 20))();
  v79 = *(_BYTE *)(Block::mWoodPlanks + 4) | 0xFFFFFF00;
  v25 = registerItem<AuxDataBlockItem,char const(&)[7],int,Block const*&>("planks", &v79, &Block::mWoodPlanks);
  (*(void (**)(void))(*(_DWORD *)v25 + 20))();
  v78 = *(_BYTE *)(Block::mQuartzBlock + 4) | 0xFFFFFF00;
  v26 = registerItem<AuxDataBlockItem,char const(&)[13],int,Block const*&>("quartz_block", &v78, &Block::mQuartzBlock);
  (*(void (**)(void))(*(_DWORD *)v26 + 20))();
  v77 = *(_BYTE *)(Block::mPurpurBlock + 4) | 0xFFFFFF00;
  v27 = registerItem<AuxDataBlockItem,char const(&)[13],int,Block const*&>("purpur_block", &v77, &Block::mPurpurBlock);
  (*(void (**)(void))(*(_DWORD *)v27 + 20))();
  v76 = *(_BYTE *)(Block::mCobblestoneWall + 4) | 0xFFFFFF00;
  v28 = registerItem<AuxDataBlockItem,char const(&)[17],int,Block const*&>(
          "cobblestone_wall",
          &v76,
          &Block::mCobblestoneWall);
  (*(void (**)(void))(*(_DWORD *)v28 + 20))();
  v75 = *(_BYTE *)(Block::mTallgrass + 4) | 0xFFFFFF00;
  v29 = registerItem<AuxDataBlockItem,char const(&)[10],int,Block const*&>("tallgrass", &v75, &Block::mTallgrass);
  (*(void (**)(void))(*(_DWORD *)v29 + 20))();
  v74 = *(_BYTE *)(Block::mBrownMushroomBlock + 4) | 0xFFFFFF00;
  v30 = registerItem<AuxDataBlockItem,char const(&)[21],int,Block const*&>(
          "brown_mushroom_block",
          &v74,
          &Block::mBrownMushroomBlock);
  (*(void (**)(void))(*(_DWORD *)v30 + 20))();
  v73 = *(_BYTE *)(Block::mRedMushroomBlock + 4) | 0xFFFFFF00;
  v31 = registerItem<AuxDataBlockItem,char const(&)[19],int,Block const*&>(
          "red_mushroom_block",
          &v73,
          &Block::mRedMushroomBlock);
  (*(void (**)(void))(*(_DWORD *)v31 + 20))();
  v72 = *(_BYTE *)(Block::mLog2 + 4) | 0xFFFFFF00;
  v32 = registerItem<AuxDataBlockItem,char const(&)[5],int,Block const*&>("log2", &v72, &Block::mLog2);
  (*(void (**)(void))(*(_DWORD *)v32 + 20))();
  v71 = *(_BYTE *)(Block::mEndPortalFrame + 4) | 0xFFFFFF00;
  v33 = registerItem<AuxDataBlockItem,char const(&)[17],int,Block const*&>(
          "end_portal_frame",
          &v71,
          &Block::mEndPortalFrame);
  (*(void (**)(void))(*(_DWORD *)v33 + 20))();
  v70 = *(_BYTE *)(Block::mAnvil + 4) | 0xFFFFFF00;
  v34 = registerItem<AuxDataBlockItem,char const(&)[6],int,Block const*&>("anvil", &v70, &Block::mAnvil);
  (*(void (**)(void))(*(_DWORD *)v34 + 20))();
  v69 = *(_BYTE *)(Block::mMonsterStoneEgg + 4) | 0xFFFFFF00;
  v35 = registerItem<AuxDataBlockItem,char const(&)[12],int,Block const*&>(
          "monster_egg",
          &v69,
          &Block::mMonsterStoneEgg);
  (*(void (**)(void))(*(_DWORD *)v35 + 20))();
  v68 = *(_BYTE *)(Block::mBrewingStand + 4) | 0xFFFFFF00;
  v36 = registerItem<BlockItem,char const(&)[18],int>("brewingStandBlock", &v68);
  (*(void (**)(void))(*(_DWORD *)v36 + 20))();
  v67 = *(_BYTE *)(Block::mBeacon + 4) | 0xFFFFFF00;
  v37 = registerItem<BlockItem,char const(&)[7],int>("beacon", &v67);
  (*(void (**)(void))(*(_DWORD *)v37 + 20))();
  v66 = *(_BYTE *)(Block::mPrismarine + 4) | 0xFFFFFF00;
  v38 = registerItem<AuxDataBlockItem,char const(&)[11],int,Block const*&>("prismarine", &v66, &Block::mPrismarine);
  (*(void (**)(void))(*(_DWORD *)v38 + 20))();
  v65 = *(_BYTE *)(Block::mSeaLantern + 4) | 0xFFFFFF00;
  v39 = registerItem<BlockItem,char const(&)[11],int>("seaLantern", &v65);
  (*(void (**)(void))(*(_DWORD *)v39 + 20))();
  v64 = *(_BYTE *)(Block::mConcrete + 4) | 0xFFFFFF00;
  v40 = registerItem<AuxDataBlockItem,char const(&)[9],int,Block const*&>("concrete", &v64, &Block::mConcrete);
  (*(void (**)(void))(*(_DWORD *)v40 + 20))();
  v63 = *(_BYTE *)(Block::mConcretePowder + 4) | 0xFFFFFF00;
  v41 = registerItem<AuxDataBlockItem,char const(&)[16],int,Block const*&>(
          "concrete_powder",
          &v63,
          &Block::mConcretePowder);
  (*(void (**)(void))(*(_DWORD *)v41 + 20))();
  v62 = *(_BYTE *)(Block::mMagmaBlock + 4) | 0xFFFFFF00;
  v42 = registerItem<BlockItem,char const(&)[6],int>("magma", &v62);
  (*(void (**)(void))(*(_DWORD *)v42 + 20))();
  v61 = *(_BYTE *)(Block::mStainedGlass + 4) | 0xFFFFFF00;
  v43 = registerItem<AuxDataBlockItem,char const(&)[14],int,Block const*&>("stained_glass", &v61, &Block::mStainedGlass);
  (*(void (**)(void))(*(_DWORD *)v43 + 20))();
  v60 = *(_BYTE *)(Block::mStainedGlassPane + 4) | 0xFFFFFF00;
  v44 = registerItem<AuxDataBlockItem,char const(&)[19],int,Block const*&>(
          "stained_glass_pane",
          &v60,
          &Block::mStainedGlassPane);
  (*(void (**)(void))(*(_DWORD *)v44 + 20))();
  v59 = *(_BYTE *)(Block::mUndyedShulkerBox + 4) | 0xFFFFFF00;
  v45 = registerItem<ShulkerBoxBlockItem,char const(&)[19],int,Block const*&>(
          "undyed_shulker_box",
          &v59,
          &Block::mUndyedShulkerBox);
  v46 = (*(int (**)(void))(*(_DWORD *)v45 + 20))();
  (*(void (**)(void))(*(_DWORD *)v46 + 16))();
  v58 = *(_BYTE *)(Block::mShulkerBox + 4) | 0xFFFFFF00;
  v47 = registerItem<ShulkerBoxBlockItem,char const(&)[12],int,Block const*&>("shulker_box", &v58, &Block::mShulkerBox);
  v48 = (*(int (**)(void))(*(_DWORD *)v47 + 20))();
  (*(void (**)(void))(*(_DWORD *)v48 + 16))();
  do
  {
    result = Block::mBlocks[v2];
    if ( result )
    {
      v50 = Block::getDescriptionId((Block *)result);
      result = sub_21E7D6C((const void **)v50, (const char *)&unk_257BC67);
      if ( result )
      {
        result = Item::mItems[v2];
        if ( !result )
        {
          v51 = Block::getCreativeCategory((Block *)Block::mBlocks[v2]);
          v52 = Block::getDescriptionId((Block *)Block::mBlocks[v2]);
          v57 = v2 - 256;
          v53 = (int *)registerItem<BlockItem,std::string const&,int>((const void **)v52, &v57);
          v54 = v53;
          v55 = *(int (__fastcall **)(int *, _BOOL4))(*v53 + 44);
          v56 = Block::hasProperty(Block::mBlocks[v2], *v53, 0x10000000LL);
          result = v55(v54, v56);
          *(_DWORD *)(result + 48) = v51;
        }
      }
    }
    ++v2;
  }
  while ( v2 != 256 );
  return result;
}


void __fastcall Item::~Item(Item *this)
{
  Item::~Item(this);
}


int __fastcall Item::setStackedByData(int result, bool a2)
{
  *(_BYTE *)(result + 34) = a2;
  return result;
}


_DWORD *__fastcall Item::initCreativeItems(Item *this)
{
  __int64 v1; // r4@1
  int v2; // r7@2
  void *v3; // r0@3
  void *v4; // r0@5
  int v5; // r0@7
  unsigned int *v6; // r2@10
  void *v7; // r0@10
  __int16 v8; // r2@11
  __int16 v9; // r2@11
  __int16 v10; // r2@11
  __int16 v11; // r2@11
  __int16 v12; // r2@11
  __int16 v13; // r2@11
  __int16 v14; // r2@11
  unsigned int *v15; // r2@11
  void *v16; // r0@11
  __int16 v17; // r2@12
  __int16 v18; // r2@12
  __int16 v19; // r2@12
  __int16 v20; // r2@12
  __int16 v21; // r2@12
  __int16 v22; // r2@12
  unsigned int *v23; // r2@12
  void *v24; // r0@12
  __int16 v25; // r2@13
  __int16 v26; // r2@13
  __int16 v27; // r2@13
  __int16 v28; // r2@13
  __int16 v29; // r2@13
  unsigned int *v30; // r2@13
  void *v31; // r0@13
  __int16 v32; // r2@14
  __int16 v33; // r2@14
  __int16 v34; // r2@14
  __int16 v35; // r2@14
  __int16 v36; // r2@14
  __int16 v37; // r2@14
  __int16 v38; // r2@14
  __int16 v39; // r2@14
  __int16 v40; // r2@14
  __int16 v41; // r2@14
  __int16 v42; // r2@14
  __int16 v43; // r2@14
  __int16 v44; // r2@14
  unsigned int *v45; // r2@14
  void *v46; // r0@14
  __int16 v47; // r2@15
  __int16 v48; // r2@15
  __int16 v49; // r2@15
  __int16 v50; // r2@15
  __int16 v51; // r2@15
  __int16 v52; // r2@15
  __int16 v53; // r2@15
  __int16 v54; // r2@15
  __int16 v55; // r2@15
  unsigned int *v56; // r2@15
  void *v57; // r0@15
  __int16 v58; // r2@16
  __int16 v59; // r2@16
  __int16 v60; // r2@16
  __int16 v61; // r2@16
  __int16 v62; // r2@16
  __int16 v63; // r2@16
  __int16 v64; // r2@16
  __int16 v65; // r2@16
  __int16 v66; // r2@16
  __int16 v67; // r2@16
  __int16 v68; // r2@16
  __int16 v69; // r2@16
  __int16 v70; // r2@16
  __int16 v71; // r2@16
  __int16 v72; // r2@16
  __int16 v73; // r2@16
  unsigned int *v74; // r2@16
  void *v75; // r0@16
  __int16 v76; // r2@17
  __int16 v77; // r2@17
  __int16 v78; // r2@17
  __int16 v79; // r2@17
  __int16 v80; // r2@17
  __int16 v81; // r2@17
  __int16 v82; // r2@17
  __int16 v83; // r2@17
  __int16 v84; // r2@17
  __int16 v85; // r2@17
  __int16 v86; // r2@17
  __int16 v87; // r2@17
  __int16 v88; // r2@17
  __int16 v89; // r2@17
  __int16 v90; // r2@17
  __int16 v91; // r2@17
  __int16 v92; // r2@17
  unsigned int *v93; // r2@17
  void *v94; // r0@17
  __int16 v95; // r2@18
  __int16 v96; // r2@18
  __int16 v97; // r2@18
  __int16 v98; // r2@18
  __int16 v99; // r2@18
  __int16 v100; // r2@18
  __int16 v101; // r2@18
  __int16 v102; // r2@18
  __int16 v103; // r2@18
  __int16 v104; // r2@18
  __int16 v105; // r2@18
  __int16 v106; // r2@18
  __int16 v107; // r2@18
  __int16 v108; // r2@18
  __int16 v109; // r2@18
  unsigned int *v110; // r2@18
  void *v111; // r0@18
  __int16 v112; // r2@19
  __int16 v113; // r2@19
  __int16 v114; // r2@19
  __int16 v115; // r2@19
  __int16 v116; // r2@19
  __int16 v117; // r2@19
  __int16 v118; // r2@19
  __int16 v119; // r2@19
  __int16 v120; // r2@19
  __int16 v121; // r2@19
  unsigned int *v122; // r2@19
  void *v123; // r0@19
  __int16 v124; // r2@20
  __int16 v125; // r2@20
  __int16 v126; // r2@20
  __int16 v127; // r2@20
  __int16 v128; // r2@20
  __int16 v129; // r2@20
  __int16 v130; // r2@20
  __int16 v131; // r2@20
  __int16 v132; // r2@20
  __int16 v133; // r2@20
  __int16 v134; // r2@20
  __int16 v135; // r2@20
  __int16 v136; // r2@20
  __int16 v137; // r2@20
  __int16 v138; // r2@20
  __int16 v139; // r2@20
  __int16 v140; // r2@20
  __int16 v141; // r2@20
  __int16 v142; // r2@20
  __int16 v143; // r2@20
  __int16 v144; // r2@20
  unsigned int *v145; // r2@20
  void *v146; // r0@20
  __int16 v147; // r2@21
  __int16 v148; // r2@21
  __int16 v149; // r2@21
  __int16 v150; // r2@21
  __int16 v151; // r2@21
  __int16 v152; // r2@21
  __int16 v153; // r2@21
  __int16 v154; // r2@21
  __int16 v155; // r2@21
  __int16 v156; // r2@21
  __int16 v157; // r2@21
  __int16 v158; // r2@21
  __int16 v159; // r2@21
  __int16 v160; // r2@21
  __int16 v161; // r2@21
  unsigned int *v162; // r2@21
  void *v163; // r0@21
  __int16 v164; // r2@22
  __int16 v165; // r2@22
  __int16 v166; // r2@22
  __int16 v167; // r2@22
  __int16 v168; // r2@22
  __int16 v169; // r2@22
  __int16 v170; // r2@22
  __int16 v171; // r2@22
  __int16 v172; // r2@22
  __int16 v173; // r2@22
  __int16 v174; // r2@22
  __int16 v175; // r2@22
  __int16 v176; // r2@22
  __int16 v177; // r2@22
  __int16 v178; // r2@22
  unsigned int *v179; // r2@22
  void *v180; // r0@22
  __int16 v181; // r2@23
  __int16 v182; // r2@23
  __int16 v183; // r2@23
  __int16 v184; // r2@23
  __int16 v185; // r2@23
  __int16 v186; // r2@23
  __int16 v187; // r2@23
  __int16 v188; // r2@23
  __int16 v189; // r2@23
  __int16 v190; // r2@23
  __int16 v191; // r2@23
  __int16 v192; // r2@23
  __int16 v193; // r2@23
  __int16 v194; // r2@23
  __int16 v195; // r2@23
  unsigned int *v196; // r2@23
  void *v197; // r0@23
  __int16 v198; // r2@24
  __int16 v199; // r2@24
  __int16 v200; // r2@24
  __int16 v201; // r2@24
  __int16 v202; // r2@24
  __int16 v203; // r2@24
  __int16 v204; // r2@24
  __int16 v205; // r2@24
  __int16 v206; // r2@24
  __int16 v207; // r2@24
  __int16 v208; // r2@24
  __int16 v209; // r2@24
  __int16 v210; // r2@24
  __int16 v211; // r2@24
  __int16 v212; // r2@24
  __int16 v213; // r2@24
  unsigned int *v214; // r2@24
  void *v215; // r0@24
  __int16 v216; // r2@25
  __int16 v217; // r2@25
  __int16 v218; // r2@25
  __int16 v219; // r2@25
  __int16 v220; // r2@25
  __int16 v221; // r2@25
  __int16 v222; // r2@25
  __int16 v223; // r2@25
  __int16 v224; // r2@25
  __int16 v225; // r2@25
  __int16 v226; // r2@25
  __int16 v227; // r2@25
  __int16 v228; // r2@25
  __int16 v229; // r2@25
  __int16 v230; // r2@25
  __int16 v231; // r2@25
  unsigned int *v232; // r2@25
  void *v233; // r0@25
  __int16 v234; // r2@26
  __int16 v235; // r2@26
  __int16 v236; // r2@26
  __int16 v237; // r2@26
  __int16 v238; // r2@26
  __int16 v239; // r2@26
  __int16 v240; // r2@26
  __int16 v241; // r2@26
  __int16 v242; // r2@26
  __int16 v243; // r2@26
  __int16 v244; // r2@26
  __int16 v245; // r2@26
  __int16 v246; // r2@26
  __int16 v247; // r2@26
  __int16 v248; // r2@26
  __int16 v249; // r2@26
  __int16 v250; // r2@26
  __int16 v251; // r2@26
  __int16 v252; // r2@26
  __int16 v253; // r2@26
  __int16 v254; // r2@26
  __int16 v255; // r2@26
  __int16 v256; // r2@26
  unsigned int *v257; // r2@26
  void *v258; // r0@26
  __int16 v259; // r2@27
  __int16 v260; // r2@27
  __int16 v261; // r2@27
  __int16 v262; // r2@27
  __int16 v263; // r2@27
  __int16 v264; // r2@27
  __int16 v265; // r2@27
  __int16 v266; // r2@27
  unsigned int *v267; // r2@27
  void *v268; // r0@27
  __int16 v269; // r2@28
  __int16 v270; // r2@28
  __int16 v271; // r2@28
  __int16 v272; // r2@28
  __int16 v273; // r2@28
  __int16 v274; // r2@28
  __int16 v275; // r2@28
  __int16 v276; // r2@28
  unsigned int *v277; // r2@28
  void *v278; // r0@28
  __int16 v279; // r2@29
  __int16 v280; // r2@29
  __int16 v281; // r2@29
  __int16 v282; // r2@29
  __int16 v283; // r2@29
  unsigned int *v284; // r2@29
  void *v285; // r0@29
  __int16 v286; // r2@30
  __int16 v287; // r2@30
  __int16 v288; // r2@30
  __int16 v289; // r2@30
  __int16 v290; // r2@30
  unsigned int *v291; // r2@30
  void *v292; // r0@30
  __int16 v293; // r2@31
  __int16 v294; // r2@31
  __int16 v295; // r2@31
  __int16 v296; // r2@31
  __int16 v297; // r2@31
  unsigned int *v298; // r2@31
  void *v299; // r0@31
  __int16 v300; // r2@32
  __int16 v301; // r2@32
  __int16 v302; // r2@32
  unsigned int *v303; // r2@32
  void *v304; // r0@32
  __int16 v305; // r2@33
  __int16 v306; // r2@33
  __int16 v307; // r2@33
  __int16 v308; // r2@33
  __int16 v309; // r2@33
  __int16 v310; // r2@33
  __int16 v311; // r2@33
  __int16 v312; // r2@33
  __int16 v313; // r2@33
  __int16 v314; // r2@33
  __int16 v315; // r2@33
  __int16 v316; // r2@33
  __int16 v317; // r2@33
  unsigned int *v318; // r2@33
  void *v319; // r0@33
  __int16 v320; // r2@34
  __int16 v321; // r2@34
  __int16 v322; // r2@34
  unsigned int *v323; // r2@34
  void *v324; // r0@34
  __int16 v325; // r2@35
  __int16 v326; // r2@35
  __int16 v327; // r2@35
  __int16 v328; // r2@35
  __int16 v329; // r2@35
  __int16 v330; // r2@35
  __int16 v331; // r2@35
  __int16 v332; // r2@35
  __int16 v333; // r2@35
  __int16 v334; // r2@35
  __int16 v335; // r2@35
  __int16 v336; // r2@35
  __int16 v337; // r2@35
  unsigned int *v338; // r2@35
  void *v339; // r0@35
  __int16 v340; // r2@36
  __int16 v341; // r2@36
  __int16 v342; // r2@36
  __int16 v343; // r2@36
  __int16 v344; // r2@36
  __int16 v345; // r2@36
  __int16 v346; // r2@36
  __int16 v347; // r2@36
  __int16 v348; // r2@36
  __int16 v349; // r2@36
  __int16 v350; // r2@36
  __int16 v351; // r2@36
  __int16 v352; // r2@36
  __int16 v353; // r2@36
  __int16 v354; // r2@36
  __int16 v355; // r2@36
  __int16 v356; // r2@36
  __int16 v357; // r2@36
  __int16 v358; // r2@36
  __int16 v359; // r2@36
  __int16 v360; // r2@36
  __int16 v361; // r2@36
  unsigned int *v362; // r2@36
  void *v363; // r0@36
  __int16 v364; // r2@37
  __int16 v365; // r2@37
  __int16 v366; // r2@37
  __int16 v367; // r2@37
  __int16 v368; // r2@37
  __int16 v369; // r2@37
  __int16 v370; // r2@37
  __int16 v371; // r2@37
  unsigned int *v372; // r2@37
  void *v373; // r0@37
  __int16 v374; // r2@38
  __int16 v375; // r2@38
  __int16 v376; // r2@38
  __int16 v377; // r2@38
  __int16 v378; // r2@38
  __int16 v379; // r2@38
  unsigned int *v380; // r2@38
  void *v381; // r0@38
  __int16 v382; // r2@39
  __int16 v383; // r2@39
  __int16 v384; // r2@39
  __int16 v385; // r2@39
  __int16 v386; // r2@39
  __int16 v387; // r2@39
  __int16 v388; // r2@39
  unsigned int *v389; // r2@39
  void *v390; // r0@39
  __int16 v391; // r2@40
  __int16 v392; // r2@40
  __int16 v393; // r2@40
  __int16 v394; // r2@40
  __int16 v395; // r2@40
  __int16 v396; // r2@40
  __int16 v397; // r2@40
  __int16 v398; // r2@40
  __int16 v399; // r2@40
  unsigned int *v400; // r2@40
  void *v401; // r0@40
  __int16 v402; // r2@41
  __int16 v403; // r2@41
  __int16 v404; // r2@41
  __int16 v405; // r2@41
  __int16 v406; // r2@41
  __int16 v407; // r2@41
  void *v408; // r0@41
  Item *v409; // r4@42
  __int16 v410; // r0@42
  __int16 v411; // r2@42
  Item *v412; // r4@42
  __int16 v413; // r0@42
  __int16 v414; // r2@42
  Item *v415; // r4@42
  __int16 v416; // r0@42
  __int16 v417; // r2@42
  Item *v418; // r4@42
  __int16 v419; // r0@42
  __int16 v420; // r2@42
  Item *v421; // r4@42
  __int16 v422; // r0@42
  __int16 v423; // r2@42
  Item *v424; // r4@42
  __int16 v425; // r0@42
  __int16 v426; // r2@42
  Item *v427; // r4@42
  __int16 v428; // r0@42
  __int16 v429; // r2@42
  Item *v430; // r4@42
  __int16 v431; // r0@42
  __int16 v432; // r2@42
  Item *v433; // r4@42
  __int16 v434; // r0@42
  __int16 v435; // r2@42
  Item *v436; // r4@42
  __int16 v437; // r0@42
  __int16 v438; // r2@42
  Item *v439; // r4@42
  __int16 v440; // r0@42
  __int16 v441; // r2@42
  Item *v442; // r4@42
  __int16 v443; // r0@42
  __int16 v444; // r2@42
  Item *v445; // r4@42
  __int16 v446; // r0@42
  __int16 v447; // r2@42
  Item *v448; // r4@42
  __int16 v449; // r0@42
  __int16 v450; // r2@42
  Item *v451; // r4@42
  __int16 v452; // r0@42
  __int16 v453; // r2@42
  Item *v454; // r4@42
  __int16 v455; // r0@42
  __int16 v456; // r2@42
  Item *v457; // r4@42
  __int16 v458; // r0@42
  __int16 v459; // r2@42
  Item *v460; // r4@42
  __int16 v461; // r0@42
  __int16 v462; // r2@42
  Item *v463; // r4@42
  __int16 v464; // r0@42
  __int16 v465; // r2@42
  Item *v466; // r4@42
  __int16 v467; // r0@42
  __int16 v468; // r2@42
  Item *v469; // r4@42
  __int16 v470; // r0@42
  __int16 v471; // r2@42
  Item *v472; // r4@42
  __int16 v473; // r0@42
  __int16 v474; // r2@42
  Item *v475; // r4@42
  __int16 v476; // r0@42
  __int16 v477; // r2@42
  Item *v478; // r4@42
  __int16 v479; // r0@42
  __int16 v480; // r2@42
  Item *v481; // r4@42
  __int16 v482; // r0@42
  __int16 v483; // r2@42
  Item *v484; // r4@42
  __int16 v485; // r0@42
  __int16 v486; // r2@42
  Item *v487; // r4@42
  __int16 v488; // r0@42
  __int16 v489; // r2@42
  Item *v490; // r4@42
  __int16 v491; // r0@42
  __int16 v492; // r2@42
  Item *v493; // r4@42
  __int16 v494; // r0@42
  __int16 v495; // r2@42
  Item *v496; // r4@42
  __int16 v497; // r0@42
  __int16 v498; // r2@42
  Item *v499; // r4@42
  __int16 v500; // r0@42
  __int16 v501; // r2@42
  Item *v502; // r4@42
  __int16 v503; // r0@42
  __int16 v504; // r2@42
  Item *v505; // r4@42
  __int16 v506; // r0@42
  __int16 v507; // r2@42
  Item *v508; // r4@42
  __int16 v509; // r0@42
  __int16 v510; // r2@42
  Item *v511; // r4@42
  __int16 v512; // r0@42
  __int16 v513; // r2@42
  Item *v514; // r4@42
  __int16 v515; // r0@42
  __int16 v516; // r2@42
  Item *v517; // r4@42
  __int16 v518; // r0@42
  __int16 v519; // r2@42
  Item *v520; // r4@42
  __int16 v521; // r0@42
  __int16 v522; // r2@42
  Item *v523; // r4@42
  __int16 v524; // r0@42
  __int16 v525; // r2@42
  Item *v526; // r4@42
  __int16 v527; // r0@42
  __int16 v528; // r2@42
  Item *v529; // r4@42
  __int16 v530; // r0@42
  __int16 v531; // r2@42
  Item *v532; // r4@42
  __int16 v533; // r0@42
  __int16 v534; // r2@42
  Item *v535; // r4@42
  __int16 v536; // r0@42
  __int16 v537; // r2@42
  __int16 v538; // r2@42
  __int16 v539; // r2@42
  __int16 v540; // r2@42
  __int16 v541; // r2@42
  __int16 v542; // r2@42
  __int16 v543; // r2@42
  __int16 v544; // r2@42
  __int16 v545; // r2@42
  __int16 v546; // r2@42
  __int16 v547; // r2@42
  __int16 v548; // r2@42
  __int16 v549; // r2@42
  __int16 v550; // r2@42
  __int16 v551; // r2@42
  __int16 v552; // r2@42
  unsigned int *v553; // r2@42
  void *v554; // r0@42
  __int16 v555; // r2@43
  __int16 v556; // r2@43
  __int16 v557; // r2@43
  __int16 v558; // r2@43
  unsigned int *v559; // r2@43
  void *v560; // r0@43
  __int16 v561; // r2@44
  __int16 v562; // r2@44
  __int16 v563; // r2@44
  __int16 v564; // r2@44
  unsigned int *v565; // r2@44
  void *v566; // r0@44
  __int16 v567; // r2@45
  __int16 v568; // r2@45
  __int16 v569; // r2@45
  __int16 v570; // r2@45
  unsigned int *v571; // r2@45
  void *v572; // r0@45
  __int16 v573; // r2@46
  __int16 v574; // r2@46
  __int16 v575; // r2@46
  __int16 v576; // r2@46
  __int16 v577; // r2@46
  unsigned int *v578; // r2@46
  void *v579; // r0@46
  __int16 v580; // r2@47
  __int16 v581; // r2@47
  __int16 v582; // r2@47
  __int16 v583; // r2@47
  unsigned int *v584; // r2@47
  void *v585; // r0@47
  __int16 v586; // r2@48
  __int16 v587; // r2@48
  __int16 v588; // r2@48
  __int16 v589; // r2@48
  unsigned int *v590; // r2@48
  void *v591; // r0@48
  __int16 v592; // r2@49
  __int16 v593; // r2@49
  __int16 v594; // r2@49
  __int16 v595; // r2@49
  unsigned int *v596; // r2@49
  void *v597; // r0@49
  __int16 v598; // r2@50
  __int16 v599; // r2@50
  __int16 v600; // r2@50
  __int16 v601; // r2@50
  unsigned int *v602; // r2@50
  void *v603; // r0@50
  __int16 v604; // r2@51
  __int16 v605; // r2@51
  __int16 v606; // r2@51
  __int16 v607; // r2@51
  unsigned int *v608; // r2@51
  void *v609; // r0@51
  __int16 v610; // r2@52
  __int16 v611; // r2@52
  __int16 v612; // r2@52
  __int16 v613; // r2@52
  __int16 v614; // r2@52
  unsigned int *v615; // r2@52
  void *v616; // r0@52
  Potion *v617; // r0@53
  __int16 v618; // r2@53
  int v619; // r5@54
  Potion *v620; // r0@55
  __int16 v621; // r2@56
  __int16 v622; // r2@56
  __int16 v623; // r2@56
  __int16 v624; // r2@56
  __int16 v625; // r2@56
  __int16 v626; // r2@56
  __int16 v627; // r2@56
  void *v628; // r0@56
  int i; // r4@57
  int v630; // r5@59 OVERLAPPED
  int v631; // r6@59 OVERLAPPED
  unsigned int *v632; // r1@60
  unsigned int v633; // r0@62
  unsigned int *v634; // r7@66
  unsigned int v635; // r0@68
  Item *v636; // r7@74
  __int16 v637; // r0@74
  __int16 v638; // r2@74
  int v639; // r7@74
  unsigned int *v640; // r1@75
  unsigned int v641; // r0@77
  unsigned int *v642; // r5@81
  unsigned int v643; // r0@83
  void *v644; // r0@88
  int j; // r4@89
  int v646; // r5@91 OVERLAPPED
  int v647; // r6@91 OVERLAPPED
  unsigned int *v648; // r1@92
  unsigned int v649; // r0@94
  unsigned int *v650; // r7@98
  unsigned int v651; // r0@100
  Item *v652; // r7@106
  __int16 v653; // r0@106
  __int16 v654; // r2@106
  int v655; // r7@106
  unsigned int *v656; // r1@107
  unsigned int v657; // r0@109
  unsigned int *v658; // r5@113
  unsigned int v659; // r0@115
  void *v660; // r0@120
  int k; // r4@121
  int v662; // r2@123
  int v663; // r5@123 OVERLAPPED
  int v664; // r6@123 OVERLAPPED
  unsigned int *v665; // r1@124
  unsigned int v666; // r0@126
  unsigned int *v667; // r7@130
  unsigned int v668; // r0@132
  Item *v669; // r7@138
  __int16 v670; // r0@138
  __int16 v671; // r2@138
  int v672; // r7@138
  unsigned int *v673; // r1@139
  unsigned int v674; // r0@141
  unsigned int *v675; // r5@145
  unsigned int v676; // r0@147
  signed int v677; // r1@154
  signed int v678; // r1@158
  signed int v679; // r1@162
  signed int v680; // r1@166
  signed int v681; // r1@170
  signed int v682; // r1@174
  signed int v683; // r1@178
  signed int v684; // r1@182
  signed int v685; // r1@186
  signed int v686; // r1@190
  signed int v687; // r1@194
  signed int v688; // r1@198
  signed int v689; // r1@202
  signed int v690; // r1@206
  signed int v691; // r1@210
  signed int v692; // r1@214
  signed int v693; // r1@218
  signed int v694; // r1@222
  signed int v695; // r1@226
  signed int v696; // r1@230
  signed int v697; // r1@234
  signed int v698; // r1@238
  signed int v699; // r1@242
  signed int v700; // r1@246
  signed int v701; // r1@250
  signed int v702; // r1@254
  signed int v703; // r1@258
  signed int v704; // r1@262
  signed int v705; // r1@266
  signed int v706; // r1@270
  signed int v707; // r1@274
  unsigned int *v708; // r2@276
  signed int v709; // r1@278
  signed int v710; // r1@282
  signed int v711; // r1@286
  signed int v712; // r1@290
  signed int v713; // r1@294
  signed int v714; // r1@298
  signed int v715; // r1@302
  signed int v716; // r1@306
  signed int v717; // r1@310
  signed int v718; // r1@314
  signed int v719; // r1@318
  signed int v720; // r1@322
  unsigned int *v721; // r2@324
  signed int v722; // r1@326
  unsigned int *v723; // r2@328
  void *v724; // r0@328
  __int16 v725; // r2@329
  __int16 v726; // r2@329
  __int16 v727; // r2@329
  __int16 v728; // r2@329
  __int16 v729; // r2@329
  __int16 v730; // r2@329
  __int16 v731; // r2@329
  __int16 v732; // r2@329
  __int16 v733; // r2@329
  __int16 v734; // r2@329
  __int16 v735; // r2@329
  __int16 v736; // r2@329
  __int16 v737; // r2@329
  __int16 v738; // r2@329
  __int16 v739; // r2@329
  __int16 v740; // r2@329
  __int16 v741; // r2@329
  __int16 v742; // r2@329
  __int16 v743; // r2@329
  __int16 v744; // r2@329
  __int16 v745; // r2@329
  __int16 v746; // r2@329
  __int16 v747; // r2@329
  __int16 v748; // r2@329
  __int16 v749; // r2@329
  __int16 v750; // r2@329
  __int16 v751; // r2@329
  __int16 v752; // r2@329
  __int16 v753; // r2@329
  __int16 v754; // r2@329
  __int16 v755; // r2@329
  unsigned int *v756; // r2@329
  void *v757; // r0@329
  __int16 v758; // r2@330
  __int16 v759; // r2@330
  __int16 v760; // r2@330
  unsigned int *v761; // r2@330
  void *v762; // r0@330
  __int16 v763; // r2@331
  __int16 v764; // r2@331
  unsigned int *v765; // r2@331
  void *v766; // r0@331
  __int16 v767; // r2@332
  __int16 v768; // r2@332
  __int16 v769; // r2@332
  __int16 v770; // r2@332
  __int16 v771; // r2@332
  __int16 v772; // r2@332
  __int16 v773; // r2@332
  __int16 v774; // r2@332
  __int16 v775; // r2@332
  __int16 v776; // r2@332
  __int16 v777; // r2@332
  __int16 v778; // r2@332
  __int16 v779; // r2@332
  __int16 v780; // r2@332
  __int16 v781; // r2@332
  __int16 v782; // r2@332
  __int16 v783; // r2@332
  __int16 v784; // r2@332
  __int16 v785; // r2@332
  __int16 v786; // r2@332
  unsigned int *v787; // r2@332
  void *v788; // r0@332
  __int16 v789; // r2@333
  __int16 v790; // r2@333
  __int16 v791; // r2@333
  __int16 v792; // r2@333
  __int16 v793; // r2@333
  __int16 v794; // r2@333
  __int16 v795; // r2@333
  __int16 v796; // r2@333
  __int16 v797; // r2@333
  __int16 v798; // r2@333
  __int16 v799; // r2@333
  unsigned int *v800; // r2@333
  void *v801; // r0@333
  __int16 v802; // r2@334
  __int16 v803; // r2@334
  __int16 v804; // r2@334
  __int16 v805; // r2@334
  __int16 v806; // r2@334
  __int16 v807; // r2@334
  __int16 v808; // r2@334
  __int16 v809; // r2@334
  __int16 v810; // r2@334
  __int16 v811; // r2@334
  __int16 v812; // r2@334
  __int16 v813; // r2@334
  __int16 v814; // r2@334
  __int16 v815; // r2@334
  __int16 v816; // r2@334
  __int16 v817; // r2@334
  __int16 v818; // r2@334
  __int16 v819; // r2@334
  __int16 v820; // r2@334
  __int16 v821; // r2@334
  __int16 v822; // r2@334
  __int16 v823; // r2@334
  __int16 v824; // r2@334
  __int16 v825; // r2@334
  __int16 v826; // r2@334
  __int16 v827; // r2@334
  __int16 v828; // r2@334
  __int16 v829; // r2@334
  __int16 v830; // r2@334
  __int16 v831; // r2@334
  __int16 v832; // r2@334
  __int16 v833; // r2@334
  __int16 v834; // r2@334
  __int16 v835; // r2@334
  __int16 v836; // r2@334
  __int16 v837; // r2@334
  __int16 v838; // r2@334
  __int16 v839; // r2@334
  __int16 v840; // r2@334
  __int16 v841; // r2@334
  __int16 v842; // r2@334
  void *v843; // r0@334
  int v844; // r6@335
  int v845; // r7@336
  __int64 v846; // r2@336
  int v847; // r8@341
  ItemInstance *v848; // r1@341
  int v849; // r8@341
  ItemInstance *v850; // t1@341
  int v851; // r0@350
  bool v852; // nf@350
  unsigned __int8 v853; // vf@350
  unsigned int *v854; // r2@352
  void *v855; // r0@352
  __int16 v856; // r2@353
  __int16 v857; // r2@353
  __int16 v858; // r2@353
  __int16 v859; // r2@353
  __int16 v860; // r2@353
  unsigned int *v861; // r2@353
  void *v862; // r0@353
  __int16 v863; // r2@354
  __int16 v864; // r2@354
  __int16 v865; // r2@354
  unsigned int *v866; // r2@354
  void *v867; // r0@354
  __int16 v868; // r2@355
  __int16 v869; // r2@355
  __int16 v870; // r2@355
  __int16 v871; // r2@355
  __int16 v872; // r2@355
  __int16 v873; // r2@355
  __int16 v874; // r2@355
  __int16 v875; // r2@355
  __int16 v876; // r2@355
  __int16 v877; // r2@355
  __int16 v878; // r2@355
  __int16 v879; // r2@355
  __int16 v880; // r2@355
  __int16 v881; // r2@355
  __int16 v882; // r2@355
  unsigned int *v883; // r2@355
  void *v884; // r0@355
  __int16 v885; // r2@356
  __int16 v886; // r2@356
  __int16 v887; // r2@356
  __int16 v888; // r2@356
  __int16 v889; // r2@356
  __int16 v890; // r2@356
  __int16 v891; // r2@356
  __int16 v892; // r2@356
  __int16 v893; // r2@356
  __int16 v894; // r2@356
  __int16 v895; // r2@356
  __int16 v896; // r2@356
  __int16 v897; // r2@356
  __int16 v898; // r2@356
  __int16 v899; // r2@356
  __int16 v900; // r2@356
  __int16 v901; // r2@356
  __int16 v902; // r2@356
  __int16 v903; // r2@356
  __int16 v904; // r2@356
  unsigned int *v905; // r2@356
  void *v906; // r0@356
  __int16 v907; // r2@357
  __int16 v908; // r2@357
  __int16 v909; // r2@357
  __int16 v910; // r2@357
  __int16 v911; // r2@357
  __int16 v912; // r2@357
  __int16 v913; // r2@357
  __int16 v914; // r2@357
  __int16 v915; // r2@357
  __int16 v916; // r2@357
  __int16 v917; // r2@357
  __int16 v918; // r2@357
  __int16 v919; // r2@357
  __int16 v920; // r2@357
  __int16 v921; // r2@357
  void *v922; // r0@357
  ItemInstance *v923; // r0@358
  int v924; // r0@358
  __int64 v925; // r4@358
  void *v926; // r0@359
  void *v927; // r0@361
  int v928; // r0@363
  unsigned int *v929; // r2@547
  signed int v930; // r1@549
  int v931; // r4@553
  ItemInstance *v932; // r2@553
  int v933; // r4@553
  ItemInstance *v934; // t1@553
  int *v935; // r10@566
  int v936; // r4@567
  void *v937; // r5@567
  void *v938; // r0@567
  char v939; // r2@567
  ItemInstance *v940; // r1@567
  int v941; // r0@574
  int v942; // r4@578
  ItemInstance *v943; // r1@578
  int v944; // r4@578
  ItemInstance *v945; // t1@578
  int v946; // r4@593
  int v947; // r7@593
  void *v948; // r0@594
  void *v949; // r0@596
  int v950; // r0@598
  void *v951; // r0@607
  int v952; // r8@608
  void *v953; // r5@609
  int v954; // r1@609
  void *v955; // r0@609
  char v956; // r2@609
  ItemInstance *v957; // r0@609
  int v958; // r6@617
  ItemInstance *v959; // r1@617
  int v960; // r6@617
  ItemInstance *v961; // t1@617
  _DWORD *result; // r0@629
  unsigned int *v963; // r2@630
  signed int v964; // r1@632
  signed int v965; // r1@640
  signed int v966; // r1@644
  signed int v967; // r1@648
  signed int v968; // r1@652
  signed int v969; // r1@656
  signed int v970; // r1@660
  unsigned int *v971; // r2@662
  signed int v972; // r1@664
  signed int v973; // r1@668
  signed int v974; // r1@672
  signed int v975; // r1@676
  signed int v976; // r1@680
  signed int v977; // r1@684
  unsigned int *v978; // r2@686
  signed int v979; // r1@688
  unsigned int *v980; // r2@742
  signed int v981; // r1@744
  void *v982; // [sp+8h] [bp-3F0h]@609
  int v983; // [sp+Ch] [bp-3ECh]@609
  int v984; // [sp+10h] [bp-3E8h]@609
  void *v985; // [sp+14h] [bp-3E4h]@609
  char *v986; // [sp+18h] [bp-3E0h]@609
  char *v987; // [sp+1Ch] [bp-3DCh]@609
  char v988; // [sp+20h] [bp-3D8h]@609
  int v989; // [sp+28h] [bp-3D0h]@624
  void *v990; // [sp+44h] [bp-3B4h]@622
  void *v991; // [sp+54h] [bp-3A4h]@620
  int v992; // [sp+6Ch] [bp-38Ch]@607
  void *v993; // [sp+70h] [bp-388h]@567
  int v994; // [sp+74h] [bp-384h]@567
  int v995; // [sp+78h] [bp-380h]@567
  void *v996; // [sp+7Ch] [bp-37Ch]@567
  char *v997; // [sp+80h] [bp-378h]@567
  char *v998; // [sp+84h] [bp-374h]@567
  char v999; // [sp+88h] [bp-370h]@567
  int v1000; // [sp+90h] [bp-368h]@585
  void *v1001; // [sp+ACh] [bp-34Ch]@583
  void *v1002; // [sp+BCh] [bp-33Ch]@581
  char v1003; // [sp+D0h] [bp-328h]@567
  int v1004; // [sp+D8h] [bp-320h]@591
  void *v1005; // [sp+F4h] [bp-304h]@589
  void *v1006; // [sp+104h] [bp-2F4h]@587
  int v1007; // [sp+118h] [bp-2E0h]@567
  __int64 v1008; // [sp+11Ch] [bp-2DCh]@567
  __int64 v1009; // [sp+124h] [bp-2D4h]@358
  int v1010; // [sp+12Ch] [bp-2CCh]@358
  char v1011; // [sp+130h] [bp-2C8h]@358
  int v1012; // [sp+138h] [bp-2C0h]@564
  void *v1013; // [sp+154h] [bp-2A4h]@562
  void *v1014; // [sp+164h] [bp-294h]@560
  int v1015; // [sp+17Ch] [bp-27Ch]@357
  int v1016; // [sp+184h] [bp-274h]@356
  int v1017; // [sp+18Ch] [bp-26Ch]@355
  int v1018; // [sp+194h] [bp-264h]@354
  int v1019; // [sp+19Ch] [bp-25Ch]@353
  int v1020; // [sp+1A4h] [bp-254h]@352
  char v1021; // [sp+1A8h] [bp-250h]@337
  char v1022; // [sp+1B0h] [bp-248h]@337
  int v1023; // [sp+1B8h] [bp-240h]@348
  void *v1024; // [sp+1D4h] [bp-224h]@346
  void *ptr; // [sp+1E4h] [bp-214h]@344
  int v1026; // [sp+1FCh] [bp-1FCh]@334
  int v1027; // [sp+204h] [bp-1F4h]@333
  int v1028; // [sp+20Ch] [bp-1ECh]@332
  int v1029; // [sp+214h] [bp-1E4h]@331
  int v1030; // [sp+21Ch] [bp-1DCh]@330
  int v1031; // [sp+224h] [bp-1D4h]@329
  int v1032; // [sp+22Ch] [bp-1CCh]@328
  Potion *v1033; // [sp+230h] [bp-1C8h]@138
  int v1034; // [sp+234h] [bp-1C4h]@138
  char v1035; // [sp+238h] [bp-1C0h]@123
  int v1036; // [sp+23Ch] [bp-1BCh]@123
  int v1037; // [sp+244h] [bp-1B4h]@120
  Potion *v1038; // [sp+248h] [bp-1B0h]@106
  int v1039; // [sp+24Ch] [bp-1ACh]@106
  char v1040; // [sp+250h] [bp-1A8h]@91
  int v1041; // [sp+254h] [bp-1A4h]@91
  int v1042; // [sp+25Ch] [bp-19Ch]@88
  Potion *v1043; // [sp+260h] [bp-198h]@74
  int v1044; // [sp+264h] [bp-194h]@74
  char v1045; // [sp+268h] [bp-190h]@59
  int v1046; // [sp+26Ch] [bp-18Ch]@59
  int v1047; // [sp+274h] [bp-184h]@56
  int v1048; // [sp+27Ch] [bp-17Ch]@52
  int v1049; // [sp+284h] [bp-174h]@51
  int v1050; // [sp+28Ch] [bp-16Ch]@50
  int v1051; // [sp+294h] [bp-164h]@49
  int v1052; // [sp+29Ch] [bp-15Ch]@48
  int v1053; // [sp+2A4h] [bp-154h]@47
  int v1054; // [sp+2ACh] [bp-14Ch]@46
  int v1055; // [sp+2B4h] [bp-144h]@45
  int v1056; // [sp+2BCh] [bp-13Ch]@44
  int v1057; // [sp+2C4h] [bp-134h]@43
  int v1058; // [sp+2CCh] [bp-12Ch]@42
  int v1059; // [sp+2D4h] [bp-124h]@41
  int v1060; // [sp+2DCh] [bp-11Ch]@40
  int v1061; // [sp+2E4h] [bp-114h]@39
  int v1062; // [sp+2ECh] [bp-10Ch]@38
  int v1063; // [sp+2F4h] [bp-104h]@37
  int v1064; // [sp+2FCh] [bp-FCh]@36
  int v1065; // [sp+304h] [bp-F4h]@35
  int v1066; // [sp+30Ch] [bp-ECh]@34
  int v1067; // [sp+314h] [bp-E4h]@33
  int v1068; // [sp+31Ch] [bp-DCh]@32
  int v1069; // [sp+324h] [bp-D4h]@31
  int v1070; // [sp+32Ch] [bp-CCh]@30
  int v1071; // [sp+334h] [bp-C4h]@29
  int v1072; // [sp+33Ch] [bp-BCh]@28
  int v1073; // [sp+344h] [bp-B4h]@27
  int v1074; // [sp+34Ch] [bp-ACh]@26
  int v1075; // [sp+354h] [bp-A4h]@25
  int v1076; // [sp+35Ch] [bp-9Ch]@24
  int v1077; // [sp+364h] [bp-94h]@23
  int v1078; // [sp+36Ch] [bp-8Ch]@22
  int v1079; // [sp+374h] [bp-84h]@21
  int v1080; // [sp+37Ch] [bp-7Ch]@20
  int v1081; // [sp+384h] [bp-74h]@19
  int v1082; // [sp+38Ch] [bp-6Ch]@18
  int v1083; // [sp+394h] [bp-64h]@17
  int v1084; // [sp+39Ch] [bp-5Ch]@16
  int v1085; // [sp+3A4h] [bp-54h]@15
  int v1086; // [sp+3ACh] [bp-4Ch]@14
  int v1087; // [sp+3B4h] [bp-44h]@13
  int v1088; // [sp+3BCh] [bp-3Ch]@12
  int v1089; // [sp+3C4h] [bp-34h]@11
  int v1090; // [sp+3CCh] [bp-2Ch]@10

  v1 = *(_QWORD *)&Item::mCreativeList;
  if ( dword_2806D24 != Item::mCreativeList )
  {
    v2 = Item::mCreativeList;
    do
    {
      v3 = *(void **)(v2 + 52);
      if ( v3 )
        operator delete(v3);
      v4 = *(void **)(v2 + 36);
      if ( v4 )
        operator delete(v4);
      v5 = *(_DWORD *)(v2 + 8);
      if ( v5 )
        (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( HIDWORD(v1) != v2 );
  }
  dword_2806D24 = v1;
  sub_21E94B4((void **)&v1090, "itemGroup.name.planks");
  Item::beginCreativeGroup(&v1090);
  v6 = (unsigned int *)&dword_28898C0;
  v7 = (void *)(v1090 - 12);
  if ( (int *)(v1090 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v1090 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v677 = __ldrex(v6);
      while ( __strex(v677 - 1, v6) );
    else
      v677 = (*v6)--;
    if ( v677 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, 0, (__int16)v6);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, (const Block *)1, v8);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, (const Block *)2, v9);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, (const Block *)3, v10);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, (const Block *)4, v11);
  Item::addCreativeItem((Item *)Block::mWoodPlanks, (const Block *)5, v12);
  LOBYTE(Item::mInCreativeGroup) = 0;
  Item::addCreativeItem((Item *)Block::mCobblestoneWall, 0, v13);
  Item::addCreativeItem((Item *)Block::mCobblestoneWall, (const Block *)1, v14);
  sub_21E94B4((void **)&v1089, "itemGroup.name.fence");
  Item::beginCreativeGroup(&v1089);
  v15 = (unsigned int *)&dword_28898C0;
  v16 = (void *)(v1089 - 12);
  if ( (int *)(v1089 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v1089 - 4);
        v678 = __ldrex(v15);
      while ( __strex(v678 - 1, v15) );
      v678 = (*v15)--;
    if ( v678 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  Item::addCreativeItem((Item *)Block::mFence, 0, (__int16)v15);
  Item::addCreativeItem((Item *)Block::mFence, (const Block *)1, v17);
  Item::addCreativeItem((Item *)Block::mFence, (const Block *)2, v18);
  Item::addCreativeItem((Item *)Block::mFence, (const Block *)3, v19);
  Item::addCreativeItem((Item *)Block::mFence, (const Block *)4, v20);
  Item::addCreativeItem((Item *)Block::mFence, (const Block *)5, v21);
  Item::addCreativeItem((Item *)Block::mNetherFence, 0, v22);
  sub_21E94B4((void **)&v1088, "itemGroup.name.fenceGate");
  Item::beginCreativeGroup(&v1088);
  v23 = (unsigned int *)&dword_28898C0;
  v24 = (void *)(v1088 - 12);
  if ( (int *)(v1088 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v1088 - 4);
        v679 = __ldrex(v23);
      while ( __strex(v679 - 1, v23) );
      v679 = (*v23)--;
    if ( v679 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  Item::addCreativeItem((Item *)Block::mFenceGateOak, 0, (__int16)v23);
  Item::addCreativeItem((Item *)Block::mSpuceFenceGate, 0, v25);
  Item::addCreativeItem((Item *)Block::mBirchFenceGate, 0, v26);
  Item::addCreativeItem((Item *)Block::mJungleFenceGate, 0, v27);
  Item::addCreativeItem((Item *)Block::mAcaciaFenceGate, 0, v28);
  Item::addCreativeItem((Item *)Block::mDarkOakFenceGate, 0, v29);
  sub_21E94B4((void **)&v1087, "itemGroup.name.stairs");
  Item::beginCreativeGroup(&v1087);
  v30 = (unsigned int *)&dword_28898C0;
  v31 = (void *)(v1087 - 12);
  if ( (int *)(v1087 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v1087 - 4);
        v680 = __ldrex(v30);
      while ( __strex(v680 - 1, v30) );
      v680 = (*v30)--;
    if ( v680 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  Item::addCreativeItem((Item *)Block::mStoneStairs, 0, (__int16)v30);
  Item::addCreativeItem((Item *)Block::mOakStairs, 0, v32);
  Item::addCreativeItem((Item *)Block::mSpruceStairs, 0, v33);
  Item::addCreativeItem((Item *)Block::mBirchStairs, 0, v34);
  Item::addCreativeItem((Item *)Block::mJungleStairs, 0, v35);
  Item::addCreativeItem((Item *)Block::mAcaciaStairs, 0, v36);
  Item::addCreativeItem((Item *)Block::mDarkOakStairs, 0, v37);
  Item::addCreativeItem((Item *)Block::mBrickStairs, 0, v38);
  Item::addCreativeItem((Item *)Block::mStoneBrickStairs, 0, v39);
  Item::addCreativeItem((Item *)Block::mNetherBrickStairs, 0, v40);
  Item::addCreativeItem((Item *)Block::mSandstoneStairs, 0, v41);
  Item::addCreativeItem((Item *)Block::mRedSandstoneStairs, 0, v42);
  Item::addCreativeItem((Item *)Block::mQuartzStairs, 0, v43);
  Item::addCreativeItem((Item *)Block::mPurpurStairs, 0, v44);
  sub_21E94B4((void **)&v1086, "itemGroup.name.door");
  Item::beginCreativeGroup(&v1086);
  v45 = (unsigned int *)&dword_28898C0;
  v46 = (void *)(v1086 - 12);
  if ( (int *)(v1086 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v1086 - 4);
        v681 = __ldrex(v45);
      while ( __strex(v681 - 1, v45) );
      v681 = (*v45)--;
    if ( v681 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  Item::addCreativeItem((Item *)Item::mDoor_wood, 0, (__int16)v45);
  Item::addCreativeItem((Item *)Item::mDoor_spruce, 0, v47);
  Item::addCreativeItem((Item *)Item::mDoor_birch, 0, v48);
  Item::addCreativeItem((Item *)Item::mDoor_jungle, 0, v49);
  Item::addCreativeItem((Item *)Item::mDoor_acacia, 0, v50);
  Item::addCreativeItem((Item *)Item::mDoor_darkoak, 0, v51);
  Item::addCreativeItem((Item *)Item::mDoor_iron, 0, v52);
  Item::addCreativeItem((Item *)Block::mTrapdoor, 0, v53);
  Item::addCreativeItem((Item *)Block::mIronTrapdoor, 0, v54);
  Item::addCreativeItem((Item *)Block::mIronFence, 0, v55);
  sub_21E94B4((void **)&v1085, "itemGroup.name.glass");
  Item::beginCreativeGroup(&v1085);
  v56 = (unsigned int *)&dword_28898C0;
  v57 = (void *)(v1085 - 12);
  if ( (int *)(v1085 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v1085 - 4);
        v682 = __ldrex(v56);
      while ( __strex(v682 - 1, v56) );
      v682 = (*v56)--;
    if ( v682 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  Item::addCreativeItem((Item *)Block::mGlass, 0, (__int16)v56);
  Item::addCreativeItem((Item *)Block::mStainedGlass, 0, v58);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)8, v59);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)7, v60);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xF, v61);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xC, v62);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xE, v63);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)1, v64);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)4, v65);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)5, v66);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xD, v67);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)9, v68);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)3, v69);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xB, v70);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)0xA, v71);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)2, v72);
  Item::addCreativeItem((Item *)Block::mStainedGlass, (const Block *)6, v73);
  sub_21E94B4((void **)&v1084, "itemGroup.name.glassPane");
  Item::beginCreativeGroup(&v1084);
  v74 = (unsigned int *)&dword_28898C0;
  v75 = (void *)(v1084 - 12);
  if ( (int *)(v1084 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v1084 - 4);
        v683 = __ldrex(v74);
      while ( __strex(v683 - 1, v74) );
      v683 = (*v74)--;
    if ( v683 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  Item::addCreativeItem((Item *)Block::mGlassPane, 0, (__int16)v74);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, 0, v76);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)8, v77);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)7, v78);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xF, v79);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xC, v80);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xE, v81);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)1, v82);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)4, v83);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)5, v84);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xD, v85);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)9, v86);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)3, v87);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xB, v88);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)0xA, v89);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)2, v90);
  Item::addCreativeItem((Item *)Block::mStainedGlassPane, (const Block *)6, v91);
  Item::addCreativeItem((Item *)Block::mLadder, 0, v92);
  sub_21E94B4((void **)&v1083, "itemGroup.name.slab");
  Item::beginCreativeGroup(&v1083);
  v93 = (unsigned int *)&dword_28898C0;
  v94 = (void *)(v1083 - 12);
  if ( (int *)(v1083 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v1083 - 4);
        v684 = __ldrex(v93);
      while ( __strex(v684 - 1, v93) );
      v684 = (*v93)--;
    if ( v684 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  Item::addCreativeItem((Item *)Block::mStoneSlab, 0, (__int16)v93);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)3, v95);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, 0, v96);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, (const Block *)1, v97);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, (const Block *)2, v98);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, (const Block *)3, v99);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, (const Block *)4, v100);
  Item::addCreativeItem((Item *)Block::mWoodenSlab, (const Block *)5, v101);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)4, v102);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)5, v103);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)7, v104);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)1, v105);
  Item::addCreativeItem((Item *)Block::mStoneSlab2, 0, v106);
  Item::addCreativeItem((Item *)Block::mStoneSlab, (const Block *)6, v107);
  Item::addCreativeItem((Item *)Block::mStoneSlab2, (const Block *)1, v108);
  Item::addCreativeItem((Item *)Block::mBrick, 0, v109);
  sub_21E94B4((void **)&v1082, "itemGroup.name.stoneBrick");
  Item::beginCreativeGroup(&v1082);
  v110 = (unsigned int *)&dword_28898C0;
  v111 = (void *)(v1082 - 12);
  if ( (int *)(v1082 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v1082 - 4);
        v685 = __ldrex(v110);
      while ( __strex(v685 - 1, v110) );
      v685 = (*v110)--;
    if ( v685 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  Item::addCreativeItem((Item *)Block::mStoneBrick, 0, (__int16)v110);
  Item::addCreativeItem((Item *)Block::mStoneBrick, (const Block *)1, v112);
  Item::addCreativeItem((Item *)Block::mStoneBrick, (const Block *)2, v113);
  Item::addCreativeItem((Item *)Block::mStoneBrick, (const Block *)3, v114);
  Item::addCreativeItem((Item *)Block::mEndBrick, 0, v115);
  Item::addCreativeItem((Item *)Block::mPrismarine, (const Block *)2, v116);
  Item::addCreativeItem((Item *)Block::mNetherBrick, 0, v117);
  Item::addCreativeItem((Item *)Block::mRedNetherBrick, 0, v118);
  Item::addCreativeItem((Item *)Block::mCobblestone, 0, v119);
  Item::addCreativeItem((Item *)Block::mMossyCobblestone, 0, v120);
  Item::addCreativeItem((Item *)Item::mNetherQuartz, 0, v121);
  sub_21E94B4((void **)&v1081, "itemGroup.name.sandstone");
  Item::beginCreativeGroup(&v1081);
  v122 = (unsigned int *)&dword_28898C0;
  v123 = (void *)(v1081 - 12);
  if ( (int *)(v1081 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v1081 - 4);
        v686 = __ldrex(v122);
      while ( __strex(v686 - 1, v122) );
      v686 = (*v122)--;
    if ( v686 <= 0 )
      j_j_j_j__ZdlPv_9(v123);
  Item::addCreativeItem((Item *)Block::mSandStone, 0, (__int16)v122);
  Item::addCreativeItem((Item *)Block::mSandStone, (const Block *)1, v124);
  Item::addCreativeItem((Item *)Block::mSandStone, (const Block *)2, v125);
  Item::addCreativeItem((Item *)Block::mRedSandstone, 0, v126);
  Item::addCreativeItem((Item *)Block::mRedSandstone, (const Block *)1, v127);
  Item::addCreativeItem((Item *)Block::mRedSandstone, (const Block *)2, v128);
  Item::addCreativeItem((Item *)Block::mCoalBlock, 0, v129);
  Item::addCreativeItem((Item *)Block::mRedstoneBlock, 0, v130);
  Item::addCreativeItem((Item *)Block::mGoldBlock, 0, v131);
  Item::addCreativeItem((Item *)Block::mIronBlock, 0, v132);
  Item::addCreativeItem((Item *)Block::mEmeraldBlock, 0, v133);
  Item::addCreativeItem((Item *)Block::mDiamondBlock, 0, v134);
  Item::addCreativeItem((Item *)Block::mLapisBlock, 0, v135);
  Item::addCreativeItem((Item *)Block::mQuartzBlock, 0, v136);
  Item::addCreativeItem((Item *)Block::mQuartzBlock, (const Block *)2, v137);
  Item::addCreativeItem((Item *)Block::mQuartzBlock, (const Block *)1, v138);
  Item::addCreativeItem((Item *)Block::mPrismarine, 0, v139);
  Item::addCreativeItem((Item *)Block::mPrismarine, (const Block *)1, v140);
  Item::addCreativeItem((Item *)Block::mSlimeBlock, 0, v141);
  Item::addCreativeItem((Item *)Block::mHayBlock, 0, v142);
  Item::addCreativeItem((Item *)Block::mBoneBlock, 0, v143);
  Item::addCreativeItem((Item *)Block::mNetherWartBlock, 0, v144);
  sub_21E94B4((void **)&v1080, "itemGroup.name.wool");
  Item::beginCreativeGroup(&v1080);
  v145 = (unsigned int *)&dword_28898C0;
  v146 = (void *)(v1080 - 12);
  if ( (int *)(v1080 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v1080 - 4);
        v687 = __ldrex(v145);
      while ( __strex(v687 - 1, v145) );
      v687 = (*v145)--;
    if ( v687 <= 0 )
      j_j_j_j__ZdlPv_9(v146);
  Item::addCreativeItem((Item *)Block::mWool, 0, (__int16)v145);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)8, v147);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)7, v148);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xF, v149);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xC, v150);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xE, v151);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)1, v152);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)4, v153);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)5, v154);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xD, v155);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)9, v156);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)3, v157);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xB, v158);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)0xA, v159);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)2, v160);
  Item::addCreativeItem((Item *)Block::mWool, (const Block *)6, v161);
  sub_21E94B4((void **)&v1079, "itemGroup.name.woolCarpet");
  Item::beginCreativeGroup(&v1079);
  v162 = (unsigned int *)&dword_28898C0;
  v163 = (void *)(v1079 - 12);
  if ( (int *)(v1079 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v1079 - 4);
        v688 = __ldrex(v162);
      while ( __strex(v688 - 1, v162) );
      v688 = (*v162)--;
    if ( v688 <= 0 )
      j_j_j_j__ZdlPv_9(v163);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, 0, (__int16)v162);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)8, v164);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)7, v165);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xF, v166);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xC, v167);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xE, v168);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)1, v169);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)4, v170);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)5, v171);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xD, v172);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)9, v173);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)3, v174);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xB, v175);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)0xA, v176);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)2, v177);
  Item::addCreativeItem((Item *)Block::mWoolCarpet, (const Block *)6, v178);
  sub_21E94B4((void **)&v1078, "itemGroup.name.concretePowder");
  Item::beginCreativeGroup(&v1078);
  v179 = (unsigned int *)&dword_28898C0;
  v180 = (void *)(v1078 - 12);
  if ( (int *)(v1078 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v1078 - 4);
        v689 = __ldrex(v179);
      while ( __strex(v689 - 1, v179) );
      v689 = (*v179)--;
    if ( v689 <= 0 )
      j_j_j_j__ZdlPv_9(v180);
  Item::addCreativeItem((Item *)Block::mConcretePowder, 0, (__int16)v179);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)8, v181);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)7, v182);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xF, v183);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xC, v184);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xE, v185);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)1, v186);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)4, v187);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)5, v188);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xD, v189);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)9, v190);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)3, v191);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xB, v192);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)0xA, v193);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)2, v194);
  Item::addCreativeItem((Item *)Block::mConcretePowder, (const Block *)6, v195);
  sub_21E94B4((void **)&v1077, "itemGroup.name.concrete");
  Item::beginCreativeGroup(&v1077);
  v196 = (unsigned int *)&dword_28898C0;
  v197 = (void *)(v1077 - 12);
  if ( (int *)(v1077 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v1077 - 4);
        v690 = __ldrex(v196);
      while ( __strex(v690 - 1, v196) );
      v690 = (*v196)--;
    if ( v690 <= 0 )
      j_j_j_j__ZdlPv_9(v197);
  Item::addCreativeItem((Item *)Block::mConcrete, 0, (__int16)v196);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)8, v198);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)7, v199);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xF, v200);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xC, v201);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xE, v202);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)1, v203);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)4, v204);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)5, v205);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xD, v206);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)9, v207);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)3, v208);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xB, v209);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)0xA, v210);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)2, v211);
  Item::addCreativeItem((Item *)Block::mConcrete, (const Block *)6, v212);
  Item::addCreativeItem((Item *)Block::mClay, 0, v213);
  sub_21E94B4((void **)&v1076, "itemGroup.name.stainedClay");
  Item::beginCreativeGroup(&v1076);
  v214 = (unsigned int *)&dword_28898C0;
  v215 = (void *)(v1076 - 12);
  if ( (int *)(v1076 - 12) != &dword_28898C0 )
    v214 = (unsigned int *)(v1076 - 4);
        v691 = __ldrex(v214);
      while ( __strex(v691 - 1, v214) );
      v691 = (*v214)--;
    if ( v691 <= 0 )
      j_j_j_j__ZdlPv_9(v215);
  Item::addCreativeItem((Item *)Block::mHardenedClay, 0, (__int16)v214);
  Item::addCreativeItem((Item *)Block::mStainedClay, 0, v216);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)8, v217);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)7, v218);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xF, v219);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xC, v220);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xE, v221);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)1, v222);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)4, v223);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)5, v224);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xD, v225);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)9, v226);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)3, v227);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xB, v228);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)0xA, v229);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)2, v230);
  Item::addCreativeItem((Item *)Block::mStainedClay, (const Block *)6, v231);
  sub_21E94B4((void **)&v1075, "itemGroup.name.glazedTerracotta");
  Item::beginCreativeGroup(&v1075);
  v232 = (unsigned int *)&dword_28898C0;
  v233 = (void *)(v1075 - 12);
  if ( (int *)(v1075 - 12) != &dword_28898C0 )
    v232 = (unsigned int *)(v1075 - 4);
        v692 = __ldrex(v232);
      while ( __strex(v692 - 1, v232) );
      v692 = (*v232)--;
    if ( v692 <= 0 )
      j_j_j_j__ZdlPv_9(v233);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaWhite, 0, (__int16)v232);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaSilver, 0, v234);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaGray, 0, v235);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaBlack, 0, v236);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaBrown, 0, v237);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaRed, 0, v238);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaOrange, 0, v239);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaYellow, 0, v240);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaLime, 0, v241);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaGreen, 0, v242);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaCyan, 0, v243);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaLightBlue, 0, v244);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaBlue, 0, v245);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaPurple, 0, v246);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaMagenta, 0, v247);
  Item::addCreativeItem((Item *)Block::mGlazedTerracottaPink, 0, v248);
  Item::addCreativeItem((Item *)Block::mPurpurBlock, 0, v249);
  Item::addCreativeItem((Item *)Block::mPurpurBlock, (const Block *)2, v250);
  Item::addCreativeItem((Item *)Block::mDirt, 0, v251);
  Item::addCreativeItem((Item *)Block::mDirt, (const Block *)1, v252);
  Item::addCreativeItem((Item *)Block::mGrass, 0, v253);
  Item::addCreativeItem((Item *)Block::mPodzol, 0, v254);
  Item::addCreativeItem((Item *)Block::mMycelium, 0, v255);
  Item::addCreativeItem((Item *)Block::mStone, 0, v256);
  sub_21E94B4((void **)&v1074, "itemGroup.name.ore");
  Item::beginCreativeGroup(&v1074);
  v257 = (unsigned int *)&dword_28898C0;
  v258 = (void *)(v1074 - 12);
  if ( (int *)(v1074 - 12) != &dword_28898C0 )
    v257 = (unsigned int *)(v1074 - 4);
        v693 = __ldrex(v257);
      while ( __strex(v693 - 1, v257) );
      v693 = (*v257)--;
    if ( v693 <= 0 )
      j_j_j_j__ZdlPv_9(v258);
  Item::addCreativeItem((Item *)Block::mIronOre, 0, (__int16)v257);
  Item::addCreativeItem((Item *)Block::mGoldOre, 0, v259);
  Item::addCreativeItem((Item *)Block::mDiamondOre, 0, v260);
  Item::addCreativeItem((Item *)Block::mLapisOre, 0, v261);
  Item::addCreativeItem((Item *)Block::mRedStoneOre, 0, v262);
  Item::addCreativeItem((Item *)Block::mCoalOre, 0, v263);
  Item::addCreativeItem((Item *)Block::mEmeraldOre, 0, v264);
  Item::addCreativeItem((Item *)Block::mQuartzOre, 0, v265);
  Item::addCreativeItem((Item *)Block::mGravel, 0, v266);
  sub_21E94B4((void **)&v1073, "itemGroup.name.stone");
  Item::beginCreativeGroup(&v1073);
  v267 = (unsigned int *)&dword_28898C0;
  v268 = (void *)(v1073 - 12);
  if ( (int *)(v1073 - 12) != &dword_28898C0 )
    v267 = (unsigned int *)(v1073 - 4);
        v694 = __ldrex(v267);
      while ( __strex(v694 - 1, v267) );
      v694 = (*v267)--;
    if ( v694 <= 0 )
      j_j_j_j__ZdlPv_9(v268);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)1, (__int16)v267);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)3, v269);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)5, v270);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)2, v271);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)4, v272);
  Item::addCreativeItem((Item *)Block::mStone, (const Block *)6, v273);
  Item::addCreativeItem((Item *)Block::mSand, 0, v274);
  Item::addCreativeItem((Item *)Block::mSand, (const Block *)1, v275);
  Item::addCreativeItem((Item *)Block::mCactus, 0, v276);
  sub_21E94B4((void **)&v1072, "itemGroup.name.log");
  Item::beginCreativeGroup(&v1072);
  v277 = (unsigned int *)&dword_28898C0;
  v278 = (void *)(v1072 - 12);
  if ( (int *)(v1072 - 12) != &dword_28898C0 )
    v277 = (unsigned int *)(v1072 - 4);
        v695 = __ldrex(v277);
      while ( __strex(v695 - 1, v277) );
      v695 = (*v277)--;
    if ( v695 <= 0 )
      j_j_j_j__ZdlPv_9(v278);
  Item::addCreativeItem((Item *)Block::mLog, 0, (__int16)v277);
  Item::addCreativeItem((Item *)Block::mLog, (const Block *)1, v279);
  Item::addCreativeItem((Item *)Block::mLog, (const Block *)2, v280);
  Item::addCreativeItem((Item *)Block::mLog, (const Block *)3, v281);
  Item::addCreativeItem((Item *)Block::mLog2, 0, v282);
  Item::addCreativeItem((Item *)Block::mLog2, (const Block *)1, v283);
  sub_21E94B4((void **)&v1071, "itemGroup.name.leaves");
  Item::beginCreativeGroup(&v1071);
  v284 = (unsigned int *)&dword_28898C0;
  v285 = (void *)(v1071 - 12);
  if ( (int *)(v1071 - 12) != &dword_28898C0 )
    v284 = (unsigned int *)(v1071 - 4);
        v696 = __ldrex(v284);
      while ( __strex(v696 - 1, v284) );
      v696 = (*v284)--;
    if ( v696 <= 0 )
      j_j_j_j__ZdlPv_9(v285);
  Item::addCreativeItem((Item *)Block::mLeaves, 0, (__int16)v284);
  Item::addCreativeItem((Item *)Block::mLeaves, (const Block *)1, v286);
  Item::addCreativeItem((Item *)Block::mLeaves, (const Block *)2, v287);
  Item::addCreativeItem((Item *)Block::mLeaves, (const Block *)3, v288);
  Item::addCreativeItem((Item *)Block::mLeaves2, 0, v289);
  Item::addCreativeItem((Item *)Block::mLeaves2, (const Block *)1, v290);
  sub_21E94B4((void **)&v1070, "itemGroup.name.sapling");
  Item::beginCreativeGroup(&v1070);
  v291 = (unsigned int *)&dword_28898C0;
  v292 = (void *)(v1070 - 12);
  if ( (int *)(v1070 - 12) != &dword_28898C0 )
    v291 = (unsigned int *)(v1070 - 4);
        v697 = __ldrex(v291);
      while ( __strex(v697 - 1, v291) );
      v697 = (*v291)--;
    if ( v697 <= 0 )
      j_j_j_j__ZdlPv_9(v292);
  Item::addCreativeItem((Item *)Block::mSapling, 0, (__int16)v291);
  Item::addCreativeItem((Item *)Block::mSapling, (const Block *)1, v293);
  Item::addCreativeItem((Item *)Block::mSapling, (const Block *)2, v294);
  Item::addCreativeItem((Item *)Block::mSapling, (const Block *)3, v295);
  Item::addCreativeItem((Item *)Block::mSapling, (const Block *)4, v296);
  Item::addCreativeItem((Item *)Block::mSapling, (const Block *)5, v297);
  sub_21E94B4((void **)&v1069, "itemGroup.name.seed");
  Item::beginCreativeGroup(&v1069);
  v298 = (unsigned int *)&dword_28898C0;
  v299 = (void *)(v1069 - 12);
  if ( (int *)(v1069 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v1069 - 4);
        v698 = __ldrex(v298);
      while ( __strex(v698 - 1, v298) );
      v698 = (*v298)--;
    if ( v698 <= 0 )
      j_j_j_j__ZdlPv_9(v299);
  Item::addCreativeItem((Item *)Item::mSeeds_wheat, 0, (__int16)v298);
  Item::addCreativeItem((Item *)Item::mSeeds_pumpkin, 0, v300);
  Item::addCreativeItem((Item *)Item::mSeeds_melon, 0, v301);
  Item::addCreativeItem((Item *)Item::mSeeds_beetroot, 0, v302);
  sub_21E94B4((void **)&v1068, "itemGroup.name.crop");
  Item::beginCreativeGroup(&v1068);
  v303 = (unsigned int *)&dword_28898C0;
  v304 = (void *)(v1068 - 12);
  if ( (int *)(v1068 - 12) != &dword_28898C0 )
    v303 = (unsigned int *)(v1068 - 4);
        v699 = __ldrex(v303);
      while ( __strex(v699 - 1, v303) );
      v699 = (*v303)--;
    if ( v699 <= 0 )
      j_j_j_j__ZdlPv_9(v304);
  Item::addCreativeItem((Item *)Item::mWheat, 0, (__int16)v303);
  Item::addCreativeItem((Item *)Item::mBeetroot, 0, v305);
  Item::addCreativeItem((Item *)Item::mPotato, 0, v306);
  Item::addCreativeItem((Item *)Item::mPoisonous_potato, 0, v307);
  Item::addCreativeItem((Item *)Item::mCarrot, 0, v308);
  Item::addCreativeItem((Item *)Item::mGoldenCarrot, 0, v309);
  Item::addCreativeItem((Item *)Item::mApple, 0, v310);
  Item::addCreativeItem((Item *)Item::mApple_gold, 0, v311);
  Item::addCreativeItem((Item *)Item::mApple_enchanted, 0, v312);
  Item::addCreativeItem((Item *)Block::mMelon, 0, v313);
  Item::addCreativeItem((Item *)Item::mMelonSlice, 0, v314);
  Item::addCreativeItem((Item *)Item::mSpeckled_melon, 0, v315);
  Item::addCreativeItem((Item *)Block::mPumpkin, 0, v316);
  Item::addCreativeItem((Item *)Block::mLitPumpkin, 0, v317);
  sub_21E94B4((void **)&v1067, "itemGroup.name.grass");
  Item::beginCreativeGroup(&v1067);
  v318 = (unsigned int *)&dword_28898C0;
  v319 = (void *)(v1067 - 12);
  if ( (int *)(v1067 - 12) != &dword_28898C0 )
    v318 = (unsigned int *)(v1067 - 4);
        v700 = __ldrex(v318);
      while ( __strex(v700 - 1, v318) );
      v700 = (*v318)--;
    if ( v700 <= 0 )
      j_j_j_j__ZdlPv_9(v319);
  Item::addCreativeItem((Item *)Block::mTallgrass, (const Block *)2, (__int16)v318);
  Item::addCreativeItem((Item *)Block::mDoublePlant, (const Block *)3, v320);
  Item::addCreativeItem((Item *)Block::mTallgrass, (const Block *)1, v321);
  Item::addCreativeItem((Item *)Block::mDoublePlant, (const Block *)2, v322);
  sub_21E94B4((void **)&v1066, "itemGroup.name.flower");
  Item::beginCreativeGroup(&v1066);
  v323 = (unsigned int *)&dword_28898C0;
  v324 = (void *)(v1066 - 12);
  if ( (int *)(v1066 - 12) != &dword_28898C0 )
    v323 = (unsigned int *)(v1066 - 4);
        v701 = __ldrex(v323);
      while ( __strex(v701 - 1, v323) );
      v701 = (*v323)--;
    if ( v701 <= 0 )
      j_j_j_j__ZdlPv_9(v324);
  Item::addCreativeItem((Item *)Block::mYellowFlower, 0, (__int16)v323);
  Item::addCreativeItem((Item *)Block::mRedFlower, 0, v325);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)1, v326);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)2, v327);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)3, v328);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)4, v329);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)5, v330);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)6, v331);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)7, v332);
  Item::addCreativeItem((Item *)Block::mRedFlower, (const Block *)8, v333);
  Item::addCreativeItem((Item *)Block::mDoublePlant, 0, v334);
  Item::addCreativeItem((Item *)Block::mDoublePlant, (const Block *)1, v335);
  Item::addCreativeItem((Item *)Block::mDoublePlant, (const Block *)4, v336);
  Item::addCreativeItem((Item *)Block::mDoublePlant, (const Block *)5, v337);
  sub_21E94B4((void **)&v1065, "itemGroup.name.dye");
  Item::beginCreativeGroup(&v1065);
  v338 = (unsigned int *)&dword_28898C0;
  v339 = (void *)(v1065 - 12);
  if ( (int *)(v1065 - 12) != &dword_28898C0 )
    v338 = (unsigned int *)(v1065 - 4);
        v702 = __ldrex(v338);
      while ( __strex(v702 - 1, v338) );
      v702 = (*v338)--;
    if ( v702 <= 0 )
      j_j_j_j__ZdlPv_9(v339);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)7, (__int16)v338);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)8, v340);
  Item::addCreativeItem((Item *)Item::mDye_powder, 0, v341);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)1, v342);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xE, v343);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xB, v344);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xA, v345);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)2, v346);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)6, v347);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xC, v348);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)4, v349);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)5, v350);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xD, v351);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)9, v352);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)0xF, v353);
  Item::addCreativeItem((Item *)Item::mDye_powder, (Item *)3, v354);
  Item::addCreativeItem((Item *)Block::mVine, 0, v355);
  Item::addCreativeItem((Item *)Block::mWaterlily, 0, v356);
  Item::addCreativeItem((Item *)Block::mDeadBush, 0, v357);
  Item::addCreativeItem((Item *)Block::mSnow, 0, v358);
  Item::addCreativeItem((Item *)Block::mIce, 0, v359);
  Item::addCreativeItem((Item *)Block::mPackedIce, 0, v360);
  Item::addCreativeItem((Item *)Block::mTopSnow, 0, v361);
  sub_21E94B4((void **)&v1064, "itemGroup.name.rawFood");
  Item::beginCreativeGroup(&v1064);
  v362 = (unsigned int *)&dword_28898C0;
  v363 = (void *)(v1064 - 12);
  if ( (int *)(v1064 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v1064 - 4);
        v703 = __ldrex(v362);
      while ( __strex(v703 - 1, v362) );
      v703 = (*v362)--;
    if ( v703 <= 0 )
      j_j_j_j__ZdlPv_9(v363);
  Item::addCreativeItem((Item *)Item::mChicken_raw, 0, (__int16)v362);
  Item::addCreativeItem((Item *)Item::mPorkChop_raw, 0, v364);
  Item::addCreativeItem((Item *)Item::mBeef_raw, 0, v365);
  Item::addCreativeItem((Item *)Item::mMutton_raw, 0, v366);
  Item::addCreativeItem((Item *)Item::mRabbitRaw, 0, v367);
  Item::addCreativeItem((Item *)Item::mFish_raw_cod, 0, v368);
  Item::addCreativeItem((Item *)Item::mFish_raw_salmon, 0, v369);
  Item::addCreativeItem((Item *)Item::mFish_raw_clownfish, 0, v370);
  Item::addCreativeItem((Item *)Item::mFish_raw_pufferfish, 0, v371);
  sub_21E94B4((void **)&v1063, "itemGroup.name.cookedFood");
  Item::beginCreativeGroup(&v1063);
  v372 = (unsigned int *)&dword_28898C0;
  v373 = (void *)(v1063 - 12);
  if ( (int *)(v1063 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v1063 - 4);
        v704 = __ldrex(v372);
      while ( __strex(v704 - 1, v372) );
      v704 = (*v372)--;
    if ( v704 <= 0 )
      j_j_j_j__ZdlPv_9(v373);
  Item::addCreativeItem((Item *)Item::mChicken_cooked, 0, (__int16)v372);
  Item::addCreativeItem((Item *)Item::mPorkChop_cooked, 0, v374);
  Item::addCreativeItem((Item *)Item::mBeef_cooked, 0, v375);
  Item::addCreativeItem((Item *)Item::mMutton_cooked, 0, v376);
  Item::addCreativeItem((Item *)Item::mRabbitCooked, 0, v377);
  Item::addCreativeItem((Item *)Item::mFish_cooked_cod, 0, v378);
  Item::addCreativeItem((Item *)Item::mFish_cooked_salmon, 0, v379);
  sub_21E94B4((void **)&v1062, "itemGroup.name.miscFood");
  Item::beginCreativeGroup(&v1062);
  v380 = (unsigned int *)&dword_28898C0;
  v381 = (void *)(v1062 - 12);
  if ( (int *)(v1062 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v1062 - 4);
        v705 = __ldrex(v380);
      while ( __strex(v705 - 1, v380) );
      v705 = (*v380)--;
    if ( v705 <= 0 )
      j_j_j_j__ZdlPv_9(v381);
  Item::addCreativeItem((Item *)Item::mBread, 0, (__int16)v380);
  Item::addCreativeItem((Item *)Item::mMushroomStew, 0, v382);
  Item::addCreativeItem((Item *)Item::mBeetrootSoup, 0, v383);
  Item::addCreativeItem((Item *)Item::mRabbitStew, 0, v384);
  Item::addCreativeItem((Item *)Item::mPotatoBaked, 0, v385);
  Item::addCreativeItem((Item *)Item::mCookie, 0, v386);
  Item::addCreativeItem((Item *)Item::mPumpkinPie, 0, v387);
  Item::addCreativeItem((Item *)Item::mCake, 0, v388);
  sub_21E94B4((void **)&v1061, "itemGroup.name.mushroom");
  Item::beginCreativeGroup(&v1061);
  v389 = (unsigned int *)&dword_28898C0;
  v390 = (void *)(v1061 - 12);
  if ( (int *)(v1061 - 12) != &dword_28898C0 )
    v389 = (unsigned int *)(v1061 - 4);
        v706 = __ldrex(v389);
      while ( __strex(v706 - 1, v389) );
      v706 = (*v389)--;
    if ( v706 <= 0 )
      j_j_j_j__ZdlPv_9(v390);
  Item::addCreativeItem((Item *)Block::mBrownMushroom, 0, (__int16)v389);
  Item::addCreativeItem((Item *)Block::mRedMushroom, 0, v391);
  Item::addCreativeItem((Item *)Block::mBrownMushroomBlock, (const Block *)0xE, v392);
  Item::addCreativeItem((Item *)Block::mRedMushroomBlock, (const Block *)0xE, v393);
  Item::addCreativeItem((Item *)Block::mBrownMushroomBlock, (const Block *)0xF, v394);
  Item::addCreativeItem((Item *)Block::mBrownMushroomBlock, 0, v395);
  Item::addCreativeItem((Item *)Item::mEgg, 0, v396);
  Item::addCreativeItem((Item *)Item::mReeds, 0, v397);
  Item::addCreativeItem((Item *)Item::mSugar, 0, v398);
  Item::addCreativeItem((Item *)Block::mMobSpawner, 0, v399);
  sub_21E94B4((void **)&v1060, "itemGroup.name.monsterStoneEgg");
  Item::beginCreativeGroup(&v1060);
  v400 = (unsigned int *)&dword_28898C0;
  v401 = (void *)(v1060 - 12);
  if ( (int *)(v1060 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v1060 - 4);
        v707 = __ldrex(v400);
      while ( __strex(v707 - 1, v400) );
      v707 = (*v400)--;
    if ( v707 <= 0 )
      j_j_j_j__ZdlPv_9(v401);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, 0, (__int16)v400);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, (const Block *)1, v402);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, (const Block *)2, v403);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, (const Block *)3, v404);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, (const Block *)4, v405);
  Item::addCreativeItem((Item *)Block::mMonsterStoneEgg, (const Block *)5, v406);
  Item::addCreativeItem((Item *)Block::mDragonEgg, 0, v407);
  sub_21E94B4((void **)&v1059, "itemGroup.name.mobEgg");
  Item::beginCreativeGroup(&v1059);
  v408 = (void *)(v1059 - 12);
  if ( (int *)(v1059 - 12) != &dword_28898C0 )
    v708 = (unsigned int *)(v1059 - 4);
        v709 = __ldrex(v708);
      while ( __strex(v709 - 1, v708) );
      v709 = (*v708)--;
    if ( v709 <= 0 )
      j_j_j_j__ZdlPv_9(v408);
  v409 = (Item *)Item::mMobPlacer;
  v410 = EntityClassTree::getEntityTypeIdLegacy(4874);
  Item::addCreativeItem(v409, (Item *)v410, v411);
  v412 = (Item *)Item::mMobPlacer;
  v413 = EntityClassTree::getEntityTypeIdLegacy(4875);
  Item::addCreativeItem(v412, (Item *)v413, v414);
  v415 = (Item *)Item::mMobPlacer;
  v416 = EntityClassTree::getEntityTypeIdLegacy(4876);
  Item::addCreativeItem(v415, (Item *)v416, v417);
  v418 = (Item *)Item::mMobPlacer;
  v419 = EntityClassTree::getEntityTypeIdLegacy(4877);
  Item::addCreativeItem(v418, (Item *)v419, v420);
  v421 = (Item *)Item::mMobPlacer;
  v422 = EntityClassTree::getEntityTypeIdLegacy(21262);
  Item::addCreativeItem(v421, (Item *)v422, v423);
  v424 = (Item *)Item::mMobPlacer;
  v425 = EntityClassTree::getEntityTypeIdLegacy(4892);
  Item::addCreativeItem(v424, (Item *)v425, v426);
  v427 = (Item *)Item::mMobPlacer;
  v428 = EntityClassTree::getEntityTypeIdLegacy(21270);
  Item::addCreativeItem(v427, (Item *)v428, v429);
  v430 = (Item *)Item::mMobPlacer;
  v431 = EntityClassTree::getEntityTypeIdLegacy(4880);
  Item::addCreativeItem(v430, (Item *)v431, v432);
  v433 = (Item *)Item::mMobPlacer;
  v434 = EntityClassTree::getEntityTypeIdLegacy(33043);
  Item::addCreativeItem(v433, (Item *)v434, v435);
  v436 = (Item *)Item::mMobPlacer;
  v437 = EntityClassTree::getEntityTypeIdLegacy(21278);
  Item::addCreativeItem(v436, (Item *)v437, v438);
  v439 = (Item *)Item::mMobPlacer;
  v440 = EntityClassTree::getEntityTypeIdLegacy(4882);
  Item::addCreativeItem(v439, (Item *)v440, v441);
  v442 = (Item *)Item::mMobPlacer;
  v443 = EntityClassTree::getEntityTypeIdLegacy(4893);
  Item::addCreativeItem(v442, (Item *)v443, v444);
  v445 = (Item *)Item::mMobPlacer;
  v446 = EntityClassTree::getEntityTypeIdLegacy(2118423);
  Item::addCreativeItem(v445, (Item *)v446, v447);
  v448 = (Item *)Item::mMobPlacer;
  v449 = EntityClassTree::getEntityTypeIdLegacy(2118424);
  Item::addCreativeItem(v448, (Item *)v449, v450);
  v451 = (Item *)Item::mMobPlacer;
  v452 = EntityClassTree::getEntityTypeIdLegacy(2118425);
  Item::addCreativeItem(v451, (Item *)v452, v453);
  v454 = (Item *)Item::mMobPlacer;
  v455 = EntityClassTree::getEntityTypeIdLegacy(2186010);
  Item::addCreativeItem(v454, (Item *)v455, v456);
  v457 = (Item *)Item::mMobPlacer;
  v458 = EntityClassTree::getEntityTypeIdLegacy(2186011);
  Item::addCreativeItem(v457, (Item *)v458, v459);
  v460 = (Item *)Item::mMobPlacer;
  v461 = EntityClassTree::getEntityTypeIdLegacy(2849);
  Item::addCreativeItem(v460, (Item *)v461, v462);
  v463 = (Item *)Item::mMobPlacer;
  v464 = EntityClassTree::getEntityTypeIdLegacy(2854);
  Item::addCreativeItem(v463, (Item *)v464, v465);
  v466 = (Item *)Item::mMobPlacer;
  v467 = EntityClassTree::getEntityTypeIdLegacy(264999);
  Item::addCreativeItem(v466, (Item *)v467, v468);
  v469 = (Item *)Item::mMobPlacer;
  v470 = EntityClassTree::getEntityTypeIdLegacy(1116962);
  Item::addCreativeItem(v469, (Item *)v470, v471);
  v472 = (Item *)Item::mMobPlacer;
  v473 = EntityClassTree::getEntityTypeIdLegacy(1116976);
  Item::addCreativeItem(v472, (Item *)v473, v474);
  v475 = (Item *)Item::mMobPlacer;
  v476 = EntityClassTree::getEntityTypeIdLegacy(1116974);
  Item::addCreativeItem(v475, (Item *)v476, v477);
  v478 = (Item *)Item::mMobPlacer;
  v479 = EntityClassTree::getEntityTypeIdLegacy(2853);
  Item::addCreativeItem(v478, (Item *)v479, v480);
  v481 = (Item *)Item::mMobPlacer;
  v482 = EntityClassTree::getEntityTypeIdLegacy(264995);
  Item::addCreativeItem(v481, (Item *)v482, v483);
  v484 = (Item *)Item::mMobPlacer;
  v485 = EntityClassTree::getEntityTypeIdLegacy(199456);
  Item::addCreativeItem(v484, (Item *)v485, v486);
  v487 = (Item *)Item::mMobPlacer;
  v488 = EntityClassTree::getEntityTypeIdLegacy(68388);
  Item::addCreativeItem(v487, (Item *)v488, v489);
  v490 = (Item *)Item::mMobPlacer;
  v491 = EntityClassTree::getEntityTypeIdLegacy(199471);
  Item::addCreativeItem(v490, (Item *)v491, v492);
  v493 = (Item *)Item::mMobPlacer;
  v494 = EntityClassTree::getEntityTypeIdLegacy(8977);
  Item::addCreativeItem(v493, (Item *)v494, v495);
  v496 = (Item *)Item::mMobPlacer;
  v497 = EntityClassTree::getEntityTypeIdLegacy(265000);
  Item::addCreativeItem(v496, (Item *)v497, v498);
  v499 = (Item *)Item::mMobPlacer;
  v500 = EntityClassTree::getEntityTypeIdLegacy(2861);
  Item::addCreativeItem(v499, (Item *)v500, v501);
  v502 = (Item *)Item::mMobPlacer;
  v503 = EntityClassTree::getEntityTypeIdLegacy(2865);
  Item::addCreativeItem(v502, (Item *)v503, v504);
  v505 = (Item *)Item::mMobPlacer;
  v506 = EntityClassTree::getEntityTypeIdLegacy(2866);
  Item::addCreativeItem(v505, (Item *)v506, v507);
  v508 = (Item *)Item::mMobPlacer;
  v509 = EntityClassTree::getEntityTypeIdLegacy(265015);
  Item::addCreativeItem(v508, (Item *)v509, v510);
  v511 = (Item *)Item::mMobPlacer;
  v512 = EntityClassTree::getEntityTypeIdLegacy(2858);
  Item::addCreativeItem(v511, (Item *)v512, v513);
  v514 = (Item *)Item::mMobPlacer;
  v515 = EntityClassTree::getEntityTypeIdLegacy(2857);
  Item::addCreativeItem(v514, (Item *)v515, v516);
  v517 = (Item *)Item::mMobPlacer;
  v518 = EntityClassTree::getEntityTypeIdLegacy(2859);
  Item::addCreativeItem(v517, (Item *)v518, v519);
  v520 = (Item *)Item::mMobPlacer;
  v521 = EntityClassTree::getEntityTypeIdLegacy(2870);
  Item::addCreativeItem(v520, (Item *)v521, v522);
  v523 = (Item *)Item::mMobPlacer;
  v524 = EntityClassTree::getEntityTypeIdLegacy(2873);
  Item::addCreativeItem(v523, (Item *)v524, v525);
  v526 = (Item *)Item::mMobPlacer;
  v527 = EntityClassTree::getEntityTypeIdLegacy(2920);
  Item::addCreativeItem(v526, (Item *)v527, v528);
  v529 = (Item *)Item::mMobPlacer;
  v530 = EntityClassTree::getEntityTypeIdLegacy(2921);
  Item::addCreativeItem(v529, (Item *)v530, v531);
  v532 = (Item *)Item::mMobPlacer;
  v533 = EntityClassTree::getEntityTypeIdLegacy(783);
  Item::addCreativeItem(v532, (Item *)v533, v534);
  v535 = (Item *)Item::mMobPlacer;
  v536 = EntityClassTree::getEntityTypeIdLegacy(199468);
  Item::addCreativeItem(v535, (Item *)v536, v537);
  Item::addCreativeItem((Item *)Block::mObsidian, 0, 0);
  Item::addCreativeItem((Item *)Block::mBedrock, 0, v538);
  Item::addCreativeItem((Item *)Block::mSoulSand, 0, v539);
  Item::addCreativeItem((Item *)Block::mNetherrack, 0, v540);
  Item::addCreativeItem((Item *)Block::mMagmaBlock, 0, v541);
  Item::addCreativeItem((Item *)Item::mNether_wart, 0, v542);
  Item::addCreativeItem((Item *)Block::mEndStone, 0, v543);
  Item::addCreativeItem((Item *)Block::mChorusFlowerBlock, 0, v544);
  Item::addCreativeItem((Item *)Block::mChorusPlantBlock, 0, v545);
  Item::addCreativeItem((Item *)Item::mChorusFruit, 0, v546);
  Item::addCreativeItem((Item *)Item::mChorusFruitPopped, 0, v547);
  Item::addCreativeItem((Item *)Block::mSponge, 0, v548);
  Item::addCreativeItem((Item *)Block::mSponge, (const Block *)1, v549);
  Item::addCreativeItem((Item *)Item::mRotten_flesh, 0, v550);
  Item::addCreativeItem((Item *)Item::mBone, 0, v551);
  Item::addCreativeItem((Item *)Block::mWeb, 0, v552);
  sub_21E94B4((void **)&v1058, "itemGroup.name.helmet");
  Item::beginCreativeGroup(&v1058);
  v553 = (unsigned int *)&dword_28898C0;
  v554 = (void *)(v1058 - 12);
  if ( (int *)(v1058 - 12) != &dword_28898C0 )
    v553 = (unsigned int *)(v1058 - 4);
        v710 = __ldrex(v553);
      while ( __strex(v710 - 1, v553) );
      v710 = (*v553)--;
    if ( v710 <= 0 )
      j_j_j_j__ZdlPv_9(v554);
  Item::addCreativeItem((Item *)Item::mHelmet_leather, 0, (__int16)v553);
  Item::addCreativeItem((Item *)Item::mHelmet_chain, 0, v555);
  Item::addCreativeItem((Item *)Item::mHelmet_iron, 0, v556);
  Item::addCreativeItem((Item *)Item::mHelmet_gold, 0, v557);
  Item::addCreativeItem((Item *)Item::mHelmet_diamond, 0, v558);
  sub_21E94B4((void **)&v1057, "itemGroup.name.chestplate");
  Item::beginCreativeGroup(&v1057);
  v559 = (unsigned int *)&dword_28898C0;
  v560 = (void *)(v1057 - 12);
  if ( (int *)(v1057 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v1057 - 4);
        v711 = __ldrex(v559);
      while ( __strex(v711 - 1, v559) );
      v711 = (*v559)--;
    if ( v711 <= 0 )
      j_j_j_j__ZdlPv_9(v560);
  Item::addCreativeItem((Item *)Item::mChestplate_leather, 0, (__int16)v559);
  Item::addCreativeItem((Item *)Item::mChestplate_chain, 0, v561);
  Item::addCreativeItem((Item *)Item::mChestplate_iron, 0, v562);
  Item::addCreativeItem((Item *)Item::mChestplate_gold, 0, v563);
  Item::addCreativeItem((Item *)Item::mChestplate_diamond, 0, v564);
  sub_21E94B4((void **)&v1056, "itemGroup.name.leggings");
  Item::beginCreativeGroup(&v1056);
  v565 = (unsigned int *)&dword_28898C0;
  v566 = (void *)(v1056 - 12);
  if ( (int *)(v1056 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v1056 - 4);
        v712 = __ldrex(v565);
      while ( __strex(v712 - 1, v565) );
      v712 = (*v565)--;
    if ( v712 <= 0 )
      j_j_j_j__ZdlPv_9(v566);
  Item::addCreativeItem((Item *)Item::mLeggings_leather, 0, (__int16)v565);
  Item::addCreativeItem((Item *)Item::mLeggings_chain, 0, v567);
  Item::addCreativeItem((Item *)Item::mLeggings_iron, 0, v568);
  Item::addCreativeItem((Item *)Item::mLeggings_gold, 0, v569);
  Item::addCreativeItem((Item *)Item::mLeggings_diamond, 0, v570);
  sub_21E94B4((void **)&v1055, "itemGroup.name.boots");
  Item::beginCreativeGroup(&v1055);
  v571 = (unsigned int *)&dword_28898C0;
  v572 = (void *)(v1055 - 12);
  if ( (int *)(v1055 - 12) != &dword_28898C0 )
    v571 = (unsigned int *)(v1055 - 4);
        v713 = __ldrex(v571);
      while ( __strex(v713 - 1, v571) );
      v713 = (*v571)--;
    if ( v713 <= 0 )
      j_j_j_j__ZdlPv_9(v572);
  Item::addCreativeItem((Item *)Item::mBoots_leather, 0, (__int16)v571);
  Item::addCreativeItem((Item *)Item::mBoots_chain, 0, v573);
  Item::addCreativeItem((Item *)Item::mBoots_iron, 0, v574);
  Item::addCreativeItem((Item *)Item::mBoots_gold, 0, v575);
  Item::addCreativeItem((Item *)Item::mBoots_diamond, 0, v576);
  Item::addCreativeItem((Item *)Item::mSaddle, 0, v577);
  sub_21E94B4((void **)&v1054, "itemGroup.name.horseArmor");
  Item::beginCreativeGroup(&v1054);
  v578 = (unsigned int *)&dword_28898C0;
  v579 = (void *)(v1054 - 12);
  if ( (int *)(v1054 - 12) != &dword_28898C0 )
    v578 = (unsigned int *)(v1054 - 4);
        v714 = __ldrex(v578);
      while ( __strex(v714 - 1, v578) );
      v714 = (*v578)--;
    if ( v714 <= 0 )
      j_j_j_j__ZdlPv_9(v579);
  Item::addCreativeItem((Item *)Item::mLeatherHorseArmor, 0, (__int16)v578);
  Item::addCreativeItem((Item *)Item::mIronHorseArmor, 0, v580);
  Item::addCreativeItem((Item *)Item::mGoldHorseArmor, 0, v581);
  Item::addCreativeItem((Item *)Item::mDiamondHorseArmor, 0, v582);
  Item::addCreativeItem((Item *)Item::mElytra, 0, v583);
  sub_21E94B4((void **)&v1053, "itemGroup.name.sword");
  Item::beginCreativeGroup(&v1053);
  v584 = (unsigned int *)&dword_28898C0;
  v585 = (void *)(v1053 - 12);
  if ( (int *)(v1053 - 12) != &dword_28898C0 )
    v584 = (unsigned int *)(v1053 - 4);
        v715 = __ldrex(v584);
      while ( __strex(v715 - 1, v584) );
      v715 = (*v584)--;
    if ( v715 <= 0 )
      j_j_j_j__ZdlPv_9(v585);
  Item::addCreativeItem((Item *)Item::mSword_wood, 0, (__int16)v584);
  Item::addCreativeItem((Item *)Item::mSword_stone, 0, v586);
  Item::addCreativeItem((Item *)Item::mSword_iron, 0, v587);
  Item::addCreativeItem((Item *)Item::mSword_gold, 0, v588);
  Item::addCreativeItem((Item *)Item::mSword_diamond, 0, v589);
  sub_21E94B4((void **)&v1052, "itemGroup.name.axe");
  Item::beginCreativeGroup(&v1052);
  v590 = (unsigned int *)&dword_28898C0;
  v591 = (void *)(v1052 - 12);
  if ( (int *)(v1052 - 12) != &dword_28898C0 )
    v590 = (unsigned int *)(v1052 - 4);
        v716 = __ldrex(v590);
      while ( __strex(v716 - 1, v590) );
      v716 = (*v590)--;
    if ( v716 <= 0 )
      j_j_j_j__ZdlPv_9(v591);
  Item::addCreativeItem((Item *)Item::mHatchet_wood, 0, (__int16)v590);
  Item::addCreativeItem((Item *)Item::mHatchet_stone, 0, v592);
  Item::addCreativeItem((Item *)Item::mHatchet_iron, 0, v593);
  Item::addCreativeItem((Item *)Item::mHatchet_gold, 0, v594);
  Item::addCreativeItem((Item *)Item::mHatchet_diamond, 0, v595);
  sub_21E94B4((void **)&v1051, "itemGroup.name.pickaxe");
  Item::beginCreativeGroup(&v1051);
  v596 = (unsigned int *)&dword_28898C0;
  v597 = (void *)(v1051 - 12);
  if ( (int *)(v1051 - 12) != &dword_28898C0 )
    v596 = (unsigned int *)(v1051 - 4);
        v717 = __ldrex(v596);
      while ( __strex(v717 - 1, v596) );
      v717 = (*v596)--;
    if ( v717 <= 0 )
      j_j_j_j__ZdlPv_9(v597);
  Item::addCreativeItem((Item *)Item::mPickAxe_wood, 0, (__int16)v596);
  Item::addCreativeItem((Item *)Item::mPickAxe_stone, 0, v598);
  Item::addCreativeItem((Item *)Item::mPickAxe_iron, 0, v599);
  Item::addCreativeItem((Item *)Item::mPickAxe_gold, 0, v600);
  Item::addCreativeItem((Item *)Item::mPickAxe_diamond, 0, v601);
  sub_21E94B4((void **)&v1050, "itemGroup.name.shovel");
  Item::beginCreativeGroup(&v1050);
  v602 = (unsigned int *)&dword_28898C0;
  v603 = (void *)(v1050 - 12);
  if ( (int *)(v1050 - 12) != &dword_28898C0 )
    v602 = (unsigned int *)(v1050 - 4);
        v718 = __ldrex(v602);
      while ( __strex(v718 - 1, v602) );
      v718 = (*v602)--;
    if ( v718 <= 0 )
      j_j_j_j__ZdlPv_9(v603);
  Item::addCreativeItem((Item *)Item::mShovel_wood, 0, (__int16)v602);
  Item::addCreativeItem((Item *)Item::mShovel_stone, 0, v604);
  Item::addCreativeItem((Item *)Item::mShovel_iron, 0, v605);
  Item::addCreativeItem((Item *)Item::mShovel_gold, 0, v606);
  Item::addCreativeItem((Item *)Item::mShovel_diamond, 0, v607);
  sub_21E94B4((void **)&v1049, "itemGroup.name.hoe");
  Item::beginCreativeGroup(&v1049);
  v608 = (unsigned int *)&dword_28898C0;
  v609 = (void *)(v1049 - 12);
  if ( (int *)(v1049 - 12) != &dword_28898C0 )
    v608 = (unsigned int *)(v1049 - 4);
        v719 = __ldrex(v608);
      while ( __strex(v719 - 1, v608) );
      v719 = (*v608)--;
    if ( v719 <= 0 )
      j_j_j_j__ZdlPv_9(v609);
  Item::addCreativeItem((Item *)Item::mHoe_wood, 0, (__int16)v608);
  Item::addCreativeItem((Item *)Item::mHoe_stone, 0, v610);
  Item::addCreativeItem((Item *)Item::mHoe_iron, 0, v611);
  Item::addCreativeItem((Item *)Item::mHoe_gold, 0, v612);
  Item::addCreativeItem((Item *)Item::mHoe_diamond, 0, v613);
  Item::addCreativeItem((Item *)Item::mBow, 0, v614);
  sub_21E94B4((void **)&v1048, "itemGroup.name.arrow");
  Item::beginCreativeGroup(&v1048);
  v615 = (unsigned int *)&dword_28898C0;
  v616 = (void *)(v1048 - 12);
  if ( (int *)(v1048 - 12) != &dword_28898C0 )
    v615 = (unsigned int *)(v1048 - 4);
        v720 = __ldrex(v615);
      while ( __strex(v720 - 1, v615) );
      v720 = (*v615)--;
    if ( v720 <= 0 )
      j_j_j_j__ZdlPv_9(v616);
  v617 = (Potion *)Item::addCreativeItem((Item *)Item::mArrow, 0, (__int16)v615);
  if ( Potion::getPotionCount(v617) > 5 )
    v619 = 5;
      v620 = (Potion *)Item::addCreativeItem((Item *)Item::mArrow, (Item *)(signed __int16)++v619, v618);
    while ( v619 < Potion::getPotionCount(v620) );
  Item::addCreativeItem((Item *)Item::mFishingRod, 0, v618);
  Item::addCreativeItem((Item *)Item::mCarrotOnAStick, 0, v621);
  Item::addCreativeItem((Item *)Item::mSnowBall, 0, v622);
  Item::addCreativeItem((Item *)Item::mShears, 0, v623);
  Item::addCreativeItem((Item *)Item::mFlintAndSteel, 0, v624);
  Item::addCreativeItem((Item *)Item::mTotem, 0, v625);
  Item::addCreativeItem((Item *)Item::mGlass_bottle, 0, v626);
  Item::addCreativeItem((Item *)Item::mExperiencePotionItem, 0, v627);
  sub_21E94B4((void **)&v1047, "itemGroup.name.potion");
  Item::beginCreativeGroup(&v1047);
  v628 = (void *)(v1047 - 12);
  if ( (int *)(v1047 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v1047 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j__ZdlPv_9(v628);
  for ( i = 0; ; ++i )
    Potion::getPotion((Potion *)&v1045, i);
    *(_QWORD *)&v630 = *(_QWORD *)&v1045;
    if ( v1046 )
      v632 = (unsigned int *)(v1046 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v633 = __ldrex(v632);
        while ( __strex(v633 - 1, v632) );
      }
      else
        v633 = (*v632)--;
      if ( v633 == 1 )
        v634 = (unsigned int *)(v631 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v631 + 8))(v631);
        if ( &pthread_create )
        {
          __dmb();
          do
            v635 = __ldrex(v634);
          while ( __strex(v635 - 1, v634) );
        }
        else
          v635 = (*v634)--;
        if ( v635 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v631 + 12))(v631);
    if ( !v630 )
      break;
    v636 = (Item *)Item::mPotion;
    Potion::getPotion((Potion *)&v1043, i);
    v637 = Potion::getPotionId(v1043);
    Item::addCreativeItem(v636, (Item *)v637, v638);
    v639 = v1044;
    if ( v1044 )
      v640 = (unsigned int *)(v1044 + 4);
          v641 = __ldrex(v640);
        while ( __strex(v641 - 1, v640) );
        v641 = (*v640)--;
      if ( v641 == 1 )
        v642 = (unsigned int *)(v639 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v639 + 8))(v639);
            v643 = __ldrex(v642);
          while ( __strex(v643 - 1, v642) );
          v643 = (*v642)--;
        if ( v643 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v639 + 12))(v639);
  sub_21E94B4((void **)&v1042, "itemGroup.name.splashPotion");
  Item::beginCreativeGroup(&v1042);
  v644 = (void *)(v1042 - 12);
  if ( (int *)(v1042 - 12) != &dword_28898C0 )
    v929 = (unsigned int *)(v1042 - 4);
        v930 = __ldrex(v929);
      while ( __strex(v930 - 1, v929) );
      v930 = (*v929)--;
    if ( v930 <= 0 )
      j_j_j_j__ZdlPv_9(v644);
  for ( j = 0; ; ++j )
    Potion::getPotion((Potion *)&v1040, j);
    *(_QWORD *)&v646 = *(_QWORD *)&v1040;
    if ( v1041 )
      v648 = (unsigned int *)(v1041 + 4);
          v649 = __ldrex(v648);
        while ( __strex(v649 - 1, v648) );
        v649 = (*v648)--;
      if ( v649 == 1 )
        v650 = (unsigned int *)(v647 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v647 + 8))(v647);
            v651 = __ldrex(v650);
          while ( __strex(v651 - 1, v650) );
          v651 = (*v650)--;
        if ( v651 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v647 + 12))(v647);
    if ( !v646 )
    v652 = (Item *)Item::mSplash_potion;
    Potion::getPotion((Potion *)&v1038, j);
    v653 = Potion::getPotionId(v1038);
    Item::addCreativeItem(v652, (Item *)v653, v654);
    v655 = v1039;
    if ( v1039 )
      v656 = (unsigned int *)(v1039 + 4);
          v657 = __ldrex(v656);
        while ( __strex(v657 - 1, v656) );
        v657 = (*v656)--;
      if ( v657 == 1 )
        v658 = (unsigned int *)(v655 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v655 + 8))(v655);
            v659 = __ldrex(v658);
          while ( __strex(v659 - 1, v658) );
          v659 = (*v658)--;
        if ( v659 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v655 + 12))(v655);
  sub_21E94B4((void **)&v1037, "itemGroup.name.lingeringPotion");
  Item::beginCreativeGroup(&v1037);
  v660 = (void *)(v1037 - 12);
  if ( (int *)(v1037 - 12) != &dword_28898C0 )
    v963 = (unsigned int *)(v1037 - 4);
        v964 = __ldrex(v963);
      while ( __strex(v964 - 1, v963) );
      v964 = (*v963)--;
    if ( v964 <= 0 )
      j_j_j_j__ZdlPv_9(v660);
  for ( k = 0; ; ++k )
    Potion::getPotion((Potion *)&v1035, k);
    *(_QWORD *)&v663 = *(_QWORD *)&v1035;
    if ( v1036 )
      v665 = (unsigned int *)(v1036 + 4);
          v666 = __ldrex(v665);
          LOWORD(v662) = v666 - 1;
        while ( __strex(v666 - 1, v665) );
        v666 = *v665;
        v662 = *v665 - 1;
        *v665 = v662;
      if ( v666 == 1 )
        v667 = (unsigned int *)(v664 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v664 + 8))(v664);
          {
            v668 = __ldrex(v667);
            v662 = __strex(v668 - 1, v667);
          }
          while ( v662 );
          v668 = (*v667)--;
        if ( v668 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v664 + 12))(v664);
    if ( !v663 )
    v669 = (Item *)Item::mLingering_potion;
    Potion::getPotion((Potion *)&v1033, k);
    v670 = Potion::getPotionId(v1033);
    Item::addCreativeItem(v669, (Item *)v670, v671);
    v672 = v1034;
    if ( v1034 )
      v673 = (unsigned int *)(v1034 + 4);
          v674 = __ldrex(v673);
        while ( __strex(v674 - 1, v673) );
        v674 = (*v673)--;
      if ( v674 == 1 )
        v675 = (unsigned int *)(v672 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v672 + 8))(v672);
            v676 = __ldrex(v675);
          while ( __strex(v676 - 1, v675) );
          v676 = (*v675)--;
        if ( v676 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v672 + 12))(v672);
  Item::addCreativeItem((Item *)Item::mStick, 0, v662);
  sub_21E94B4((void **)&v1032, "itemGroup.name.bed");
  Item::beginCreativeGroup(&v1032);
  v723 = (unsigned int *)&dword_28898C0;
  v724 = (void *)(v1032 - 12);
  if ( (int *)(v1032 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v1032 - 4);
        v965 = __ldrex(v723);
      while ( __strex(v965 - 1, v723) );
      v965 = (*v723)--;
    if ( v965 <= 0 )
      j_j_j_j__ZdlPv_9(v724);
  Item::addCreativeItem((Item *)Item::mBed, 0, (__int16)v723);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)8, v725);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)7, v726);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xF, v727);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xC, v728);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xE, v729);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)1, v730);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)4, v731);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)5, v732);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xD, v733);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)9, v734);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)3, v735);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xB, v736);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)0xA, v737);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)2, v738);
  Item::addCreativeItem((Item *)Item::mBed, (Item *)6, v739);
  Item::addCreativeItem((Item *)Block::mTorch, 0, v740);
  Item::addCreativeItem((Item *)Block::mLitRedStoneTorch, 0, v741);
  Item::addCreativeItem((Item *)Block::mUnlitRedStoneLamp, 0, v742);
  Item::addCreativeItem((Item *)Block::mSeaLantern, 0, v743);
  Item::addCreativeItem((Item *)Block::mGlowStone, 0, v744);
  Item::addCreativeItem((Item *)Item::mYellowDust, 0, v745);
  Item::addCreativeItem((Item *)Item::mSign, 0, v746);
  Item::addCreativeItem((Item *)Item::mPainting, 0, v747);
  Item::addCreativeItem((Item *)Item::mItemFrame, 0, v748);
  Item::addCreativeItem((Item *)Item::mFlowerPot, 0, v749);
  Item::addCreativeItem((Item *)Item::mBowl, 0, v750);
  Item::addCreativeItem((Item *)Item::mArmorStand, 0, v751);
  Item::addCreativeItem((Item *)Block::mWorkBench, 0, v752);
  Item::addCreativeItem((Item *)Block::mFurnace, 0, v753);
  Item::addCreativeItem((Item *)Item::mBrewing_stand, 0, v754);
  Item::addCreativeItem((Item *)Item::mCauldron, 0, v755);
  sub_21E94B4((void **)&v1031, "itemGroup.name.anvil");
  Item::beginCreativeGroup(&v1031);
  v756 = (unsigned int *)&dword_28898C0;
  v757 = (void *)(v1031 - 12);
  if ( (int *)(v1031 - 12) != &dword_28898C0 )
    v756 = (unsigned int *)(v1031 - 4);
        v966 = __ldrex(v756);
      while ( __strex(v966 - 1, v756) );
      v966 = (*v756)--;
    if ( v966 <= 0 )
      j_j_j_j__ZdlPv_9(v757);
  Item::addCreativeItem((Item *)Block::mAnvil, 0, (__int16)v756);
  Item::addCreativeItem((Item *)Block::mAnvil, (const Block *)1, v758);
  Item::addCreativeItem((Item *)Block::mAnvil, (const Block *)2, v759);
  Item::addCreativeItem((Item *)Block::mStonecutterBench, 0, v760);
  sub_21E94B4((void **)&v1030, "itemGroup.name.chest");
  Item::beginCreativeGroup(&v1030);
  v761 = (unsigned int *)&dword_28898C0;
  v762 = (void *)(v1030 - 12);
  if ( (int *)(v1030 - 12) != &dword_28898C0 )
    v761 = (unsigned int *)(v1030 - 4);
        v967 = __ldrex(v761);
      while ( __strex(v967 - 1, v761) );
      v967 = (*v761)--;
    if ( v967 <= 0 )
      j_j_j_j__ZdlPv_9(v762);
  Item::addCreativeItem((Item *)Block::mChest, 0, (__int16)v761);
  Item::addCreativeItem((Item *)Block::mTrappedChest, 0, v763);
  Item::addCreativeItem((Item *)Block::mEnderChest, 0, v764);
  sub_21E94B4((void **)&v1029, "itemGroup.name.shulkerBox");
  Item::beginCreativeGroup(&v1029);
  v765 = (unsigned int *)&dword_28898C0;
  v766 = (void *)(v1029 - 12);
  if ( (int *)(v1029 - 12) != &dword_28898C0 )
    v765 = (unsigned int *)(v1029 - 4);
        v968 = __ldrex(v765);
      while ( __strex(v968 - 1, v765) );
      v968 = (*v765)--;
    if ( v968 <= 0 )
      j_j_j_j__ZdlPv_9(v766);
  Item::addCreativeItem((Item *)Block::mUndyedShulkerBox, (const Block *)0x10, (__int16)v765);
  Item::addCreativeItem((Item *)Block::mShulkerBox, 0, v767);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)8, v768);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)7, v769);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xF, v770);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xC, v771);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xE, v772);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)1, v773);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)4, v774);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)5, v775);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xD, v776);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)9, v777);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)3, v778);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xB, v779);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)0xA, v780);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)2, v781);
  Item::addCreativeItem((Item *)Block::mShulkerBox, (const Block *)6, v782);
  Item::addCreativeItem((Item *)Block::mBookshelf, 0, v783);
  Item::addCreativeItem((Item *)Block::mEnchantingTable, 0, v784);
  Item::addCreativeItem((Item *)Block::mNote, 0, v785);
  Item::addCreativeItem((Item *)Block::mJukebox, 0, v786);
  sub_21E94B4((void **)&v1028, "itemGroup.name.record");
  Item::beginCreativeGroup(&v1028);
  v787 = (unsigned int *)&dword_28898C0;
  v788 = (void *)(v1028 - 12);
  if ( (int *)(v1028 - 12) != &dword_28898C0 )
    v787 = (unsigned int *)(v1028 - 4);
        v969 = __ldrex(v787);
      while ( __strex(v969 - 1, v787) );
      v969 = (*v787)--;
    if ( v969 <= 0 )
      j_j_j_j__ZdlPv_9(v788);
  Item::addCreativeItem((Item *)Item::mRecord13, 0, (__int16)v787);
  Item::addCreativeItem((Item *)Item::mRecordCat, 0, v789);
  Item::addCreativeItem((Item *)Item::mRecordBlocks, 0, v790);
  Item::addCreativeItem((Item *)Item::mRecordChirp, 0, v791);
  Item::addCreativeItem((Item *)Item::mRecordFar, 0, v792);
  Item::addCreativeItem((Item *)Item::mRecordMall, 0, v793);
  Item::addCreativeItem((Item *)Item::mRecordMellohi, 0, v794);
  Item::addCreativeItem((Item *)Item::mRecordStal, 0, v795);
  Item::addCreativeItem((Item *)Item::mRecordStrad, 0, v796);
  Item::addCreativeItem((Item *)Item::mRecordWard, 0, v797);
  Item::addCreativeItem((Item *)Item::mRecord11, 0, v798);
  Item::addCreativeItem((Item *)Item::mRecordWait, 0, v799);
  sub_21E94B4((void **)&v1027, "itemGroup.name.skull");
  Item::beginCreativeGroup(&v1027);
  v800 = (unsigned int *)&dword_28898C0;
  v801 = (void *)(v1027 - 12);
  if ( (int *)(v1027 - 12) != &dword_28898C0 )
    v800 = (unsigned int *)(v1027 - 4);
        v970 = __ldrex(v800);
      while ( __strex(v970 - 1, v800) );
      v970 = (*v800)--;
    if ( v970 <= 0 )
      j_j_j_j__ZdlPv_9(v801);
  Item::addCreativeItem((Item *)Item::mSkull, (Item *)3, (__int16)v800);
  Item::addCreativeItem((Item *)Item::mSkull, (Item *)2, v802);
  Item::addCreativeItem((Item *)Item::mSkull, (Item *)4, v803);
  Item::addCreativeItem((Item *)Item::mSkull, (Item *)5, v804);
  Item::addCreativeItem((Item *)Item::mSkull, 0, v805);
  Item::addCreativeItem((Item *)Item::mSkull, (Item *)1, v806);
  Item::addCreativeItem((Item *)Block::mBeacon, 0, v807);
  Item::addCreativeItem((Item *)Block::mDaylightDetector, 0, v808);
  Item::addCreativeItem((Item *)Block::mEndPortalFrame, 0, v809);
  Item::addCreativeItem((Item *)Item::mString, 0, v810);
  Item::addCreativeItem((Item *)Item::mBucket, 0, v811);
  Item::addCreativeItem((Item *)Item::mBucket, (Item *)1, v812);
  Item::addCreativeItem((Item *)Item::mBucket, (Item *)*(_BYTE *)(Block::mFlowingWater + 4), v813);
  Item::addCreativeItem((Item *)Item::mBucket, (Item *)*(_BYTE *)(Block::mFlowingLava + 4), v814);
  Item::addCreativeItem((Item *)Item::mFeather, 0, v815);
  Item::addCreativeItem((Item *)Item::mFlint, 0, v816);
  Item::addCreativeItem((Item *)Item::mSulphur, 0, v817);
  Item::addCreativeItem((Item *)Item::mLeather, 0, v818);
  Item::addCreativeItem((Item *)Item::mRabbitHide, 0, v819);
  Item::addCreativeItem((Item *)Item::mRabbitFoot, 0, v820);
  Item::addCreativeItem((Item *)Item::mIron_nugget, 0, v821);
  Item::addCreativeItem((Item *)Item::mGold_nugget, 0, v822);
  Item::addCreativeItem((Item *)Item::mFireCharge, 0, v823);
  Item::addCreativeItem((Item *)Item::mBlazePowder, 0, v824);
  Item::addCreativeItem((Item *)Item::mBlazeRod, 0, v825);
  Item::addCreativeItem((Item *)Item::mMagma_cream, 0, v826);
  Item::addCreativeItem((Item *)Item::mSpider_eye, 0, v827);
  Item::addCreativeItem((Item *)Item::mFermented_spider_eye, 0, v828);
  Item::addCreativeItem((Item *)Item::mDragon_breath, 0, v829);
  Item::addCreativeItem((Item *)Item::mShulkerShell, 0, v830);
  Item::addCreativeItem((Item *)Item::mGhast_tear, 0, v831);
  Item::addCreativeItem((Item *)Item::mSlimeBall, 0, v832);
  Item::addCreativeItem((Item *)Item::mEnderpearl, 0, v833);
  Item::addCreativeItem((Item *)Item::mEnderEye, 0, v834);
  Item::addCreativeItem((Item *)Item::mNetherStar, 0, v835);
  Item::addCreativeItem((Item *)Block::mEndRod, 0, v836);
  Item::addCreativeItem((Item *)Item::mEndCrystal, 0, v837);
  Item::addCreativeItem((Item *)Item::mPaper, 0, v838);
  Item::addCreativeItem((Item *)Item::mEmptyMap, 0, v839);
  Item::addCreativeItem((Item *)Item::mEmptyMap, (Item *)2, v840);
  Item::addCreativeItem((Item *)Item::mWritable_book, 0, v841);
  Item::addCreativeItem((Item *)Item::mBook, 0, v842);
  sub_21E94B4((void **)&v1026, "itemGroup.name.enchantedBook");
  Item::beginCreativeGroup(&v1026);
  v843 = (void *)(v1026 - 12);
  if ( (int *)(v1026 - 12) != &dword_28898C0 )
    v971 = (unsigned int *)(v1026 - 4);
        v972 = __ldrex(v971);
      while ( __strex(v972 - 1, v971) );
      v972 = (*v971)--;
    if ( v972 <= 0 )
      j_j_j_j__ZdlPv_9(v843);
  v844 = 0;
  do
    v845 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 4 * v844) + 16))();
    if ( v845 <= (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 4 * v844) + 20))() )
        LODWORD(v846) = v845;
        EnchantmentInstance::EnchantmentInstance(&v1021, v844, v846);
        EnchantUtils::generateEnchantedBook((EnchantUtils *)&v1022, (const EnchantmentInstance *)&v1021);
        if ( dword_2806D24 == unk_2806D28 )
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
            (unsigned __int64 *)&Item::mCreativeList,
            (int)&v1022);
          ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v1022);
          dword_2806D24 += 72;
        if ( (_BYTE)Item::mInCreativeGroup )
          v847 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
          v850 = *(ItemInstance **)(v847 + 4);
          v849 = v847 + 4;
          v848 = v850;
          if ( v850 == *(ItemInstance **)(v849 + 4) )
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              (unsigned __int64 *)(Item::mCreativeGroups
                                 + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
              (int)&v1022);
          else
            ItemInstance::ItemInstance(v848, (int)&v1022);
            *(_DWORD *)v849 += 72;
        if ( ptr )
          operator delete(ptr);
        if ( v1024 )
          operator delete(v1024);
        if ( v1023 )
          (*(void (**)(void))(*(_DWORD *)v1023 + 4))();
        v1023 = 0;
        v851 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 4 * v844) + 20))();
        v853 = __OFSUB__(v845, v851);
        v852 = v845++ - v851 < 0;
      while ( v852 ^ v853 );
    ++v844;
  while ( v844 < 27 );
  sub_21E94B4((void **)&v1020, "itemGroup.name.boat");
  Item::beginCreativeGroup(&v1020);
  v854 = (unsigned int *)&dword_28898C0;
  v855 = (void *)(v1020 - 12);
  if ( (int *)(v1020 - 12) != &dword_28898C0 )
    v854 = (unsigned int *)(v1020 - 4);
        v973 = __ldrex(v854);
      while ( __strex(v973 - 1, v854) );
      v973 = (*v854)--;
    if ( v973 <= 0 )
      j_j_j_j__ZdlPv_9(v855);
  Item::addCreativeItem((Item *)Item::mBoat, 0, (__int16)v854);
  Item::addCreativeItem((Item *)Item::mBoat, (Item *)1, v856);
  Item::addCreativeItem((Item *)Item::mBoat, (Item *)2, v857);
  Item::addCreativeItem((Item *)Item::mBoat, (Item *)3, v858);
  Item::addCreativeItem((Item *)Item::mBoat, (Item *)4, v859);
  Item::addCreativeItem((Item *)Item::mBoat, (Item *)5, v860);
  sub_21E94B4((void **)&v1019, "itemGroup.name.rail");
  Item::beginCreativeGroup(&v1019);
  v861 = (unsigned int *)&dword_28898C0;
  v862 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v861 = (unsigned int *)(v1019 - 4);
        v974 = __ldrex(v861);
      while ( __strex(v974 - 1, v861) );
      v974 = (*v861)--;
    if ( v974 <= 0 )
      j_j_j_j__ZdlPv_9(v862);
  Item::addCreativeItem((Item *)Block::mRail, 0, (__int16)v861);
  Item::addCreativeItem((Item *)Block::mGoldenRail, 0, v863);
  Item::addCreativeItem((Item *)Block::mDetectorRail, 0, v864);
  Item::addCreativeItem((Item *)Block::mActivatorRail, 0, v865);
  sub_21E94B4((void **)&v1018, "itemGroup.name.minecart");
  Item::beginCreativeGroup(&v1018);
  v866 = (unsigned int *)&dword_28898C0;
  v867 = (void *)(v1018 - 12);
  if ( (int *)(v1018 - 12) != &dword_28898C0 )
    v866 = (unsigned int *)(v1018 - 4);
        v975 = __ldrex(v866);
      while ( __strex(v975 - 1, v866) );
      v975 = (*v866)--;
    if ( v975 <= 0 )
      j_j_j_j__ZdlPv_9(v867);
  Item::addCreativeItem((Item *)Item::mMinecart, 0, (__int16)v866);
  Item::addCreativeItem((Item *)Item::mChestMinecart, 0, v868);
  Item::addCreativeItem((Item *)Item::mHopperMinecart, 0, v869);
  Item::addCreativeItem((Item *)Item::mTNTMinecart, 0, v870);
  Item::addCreativeItem((Item *)Block::mLever, 0, v871);
  Item::addCreativeItem((Item *)Block::mWoodButton, (const Block *)5, v872);
  Item::addCreativeItem((Item *)Block::mStoneButton, (const Block *)5, v873);
  Item::addCreativeItem((Item *)Item::mHopper, 0, v874);
  Item::addCreativeItem((Item *)Block::mDropper, (const Block *)3, v875);
  Item::addCreativeItem((Item *)Block::mDispenser, (const Block *)3, v876);
  Item::addCreativeItem((Item *)Block::mPiston, (const Block *)1, v877);
  Item::addCreativeItem((Item *)Block::mStickyPiston, (const Block *)1, v878);
  Item::addCreativeItem((Item *)Block::mObserver, 0, v879);
  Item::addCreativeItem((Item *)Item::mRepeater, 0, v880);
  Item::addCreativeItem((Item *)Item::mComparator, 0, v881);
  Item::addCreativeItem((Item *)Block::mTripwireHook, 0, v882);
  sub_21E94B4((void **)&v1017, "itemGroup.name.pressurePlate");
  Item::beginCreativeGroup(&v1017);
  v883 = (unsigned int *)&dword_28898C0;
  v884 = (void *)(v1017 - 12);
  if ( (int *)(v1017 - 12) != &dword_28898C0 )
    v883 = (unsigned int *)(v1017 - 4);
        v976 = __ldrex(v883);
      while ( __strex(v976 - 1, v883) );
      v976 = (*v883)--;
    if ( v976 <= 0 )
      j_j_j_j__ZdlPv_9(v884);
  Item::addCreativeItem((Item *)Block::mWoodPressurePlate, 0, (__int16)v883);
  Item::addCreativeItem((Item *)Block::mStonePressurePlate, 0, v885);
  Item::addCreativeItem((Item *)Block::mLightWeightedPressurePlate, 0, v886);
  Item::addCreativeItem((Item *)Block::mHeavyWeightedPressurePlate, 0, v887);
  Item::addCreativeItem((Item *)Item::mRedStone, 0, v888);
  Item::addCreativeItem((Item *)Item::mCoal, 0, v889);
  Item::addCreativeItem((Item *)Item::mCoal, (Item *)1, v890);
  Item::addCreativeItem((Item *)Item::mDiamond, 0, v891);
  Item::addCreativeItem((Item *)Item::mIronIngot, 0, v892);
  Item::addCreativeItem((Item *)Item::mGoldIngot, 0, v893);
  Item::addCreativeItem((Item *)Item::mEmerald, 0, v894);
  Item::addCreativeItem((Item *)Item::mBrick, 0, v895);
  Item::addCreativeItem((Item *)Item::mNetherbrick, 0, v896);
  Item::addCreativeItem((Item *)Item::mClay, 0, v897);
  Item::addCreativeItem((Item *)Item::mPrismarineShard, 0, v898);
  Item::addCreativeItem((Item *)Item::mPrismarineCrystals, 0, v899);
  Item::addCreativeItem((Item *)Block::mTNT, 0, v900);
  Item::addCreativeItem((Item *)Item::mLead, 0, v901);
  Item::addCreativeItem((Item *)Item::mNameTag, 0, v902);
  Item::addCreativeItem((Item *)Item::mClock, 0, v903);
  Item::addCreativeItem((Item *)Item::mCompass, 0, v904);
  sub_21E94B4((void **)&v1016, "itemGroup.name.banner");
  Item::beginCreativeGroup(&v1016);
  v905 = (unsigned int *)&dword_28898C0;
  v906 = (void *)(v1016 - 12);
  if ( (int *)(v1016 - 12) != &dword_28898C0 )
    v905 = (unsigned int *)(v1016 - 4);
        v977 = __ldrex(v905);
      while ( __strex(v977 - 1, v905) );
      v977 = (*v905)--;
    if ( v977 <= 0 )
      j_j_j_j__ZdlPv_9(v906);
  Item::addCreativeItem((Item *)Item::mBanner, 0, (__int16)v905);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)8, v907);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)7, v908);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xF, v909);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xC, v910);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xE, v911);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)1, v912);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)4, v913);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)5, v914);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xD, v915);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)9, v916);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)3, v917);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xB, v918);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)0xA, v919);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)2, v920);
  Item::addCreativeItem((Item *)Item::mBanner, (Item *)6, v921);
  sub_21E94B4((void **)&v1015, "itemGroup.name.firework");
  Item::beginCreativeGroup(&v1015);
  v922 = (void *)(v1015 - 12);
  if ( (int *)(v1015 - 12) != &dword_28898C0 )
    v978 = (unsigned int *)(v1015 - 4);
        v979 = __ldrex(v978);
      while ( __strex(v979 - 1, v978) );
      v979 = (*v978)--;
    if ( v979 <= 0 )
      j_j_j_j__ZdlPv_9(v922);
  v923 = ItemInstance::ItemInstance((ItemInstance *)&v1011, Item::mFireworksItem, 1);
  v1009 = 0LL;
  v1010 = 0;
  v924 = FireworksItem::initFireworksRocketItem((int)v923, (unsigned __int64 *)&v1009, 1);
  ItemInstance::operator=((int)&v1011, v924);
  v925 = v1009;
  if ( (_DWORD)v1009 != HIDWORD(v1009) )
      v926 = *(void **)(v925 + 52);
      if ( v926 )
        operator delete(v926);
      v927 = *(void **)(v925 + 36);
      if ( v927 )
        operator delete(v927);
      v928 = *(_DWORD *)(v925 + 8);
      if ( v928 )
        (*(void (**)(void))(*(_DWORD *)v928 + 4))();
      *(_DWORD *)(v925 + 8) = 0;
      LODWORD(v925) = v925 + 72;
    while ( HIDWORD(v925) != (_DWORD)v925 );
    LODWORD(v925) = v1009;
  if ( (_DWORD)v925 )
    operator delete((void *)v925);
  if ( dword_2806D24 == unk_2806D28 )
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&Item::mCreativeList,
      (int)&v1011);
  else
    ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v1011);
    dword_2806D24 += 72;
  if ( (_BYTE)Item::mInCreativeGroup )
    v931 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
    v934 = *(ItemInstance **)(v931 + 4);
    v933 = v931 + 4;
    v932 = v934;
    if ( v934 == *(ItemInstance **)(v933 + 4) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)(Item::mCreativeGroups
                           + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
        (int)&v1011);
      ItemInstance::ItemInstance(v932, (int)&v1011);
      *(_DWORD *)v933 += 72;
  if ( v1014 )
    operator delete(v1014);
  if ( v1013 )
    operator delete(v1013);
  if ( v1012 )
    (*(void (**)(void))(*(_DWORD *)v1012 + 4))();
  v935 = dword_262E670;
    v936 = *v935;
    v937 = operator new(1u);
    *(_BYTE *)v937 = v936;
    v1007 = 0;
    v1008 = 0LL;
    ItemInstance::ItemInstance((ItemInstance *)&v1003, Item::mFireworkCharge, 1);
    ItemInstance::ItemInstance((ItemInstance *)&v999, Item::mFireworksItem, 1);
    v996 = 0;
    v997 = 0;
    v998 = 0;
    v938 = operator new(1u);
    v939 = *(_BYTE *)v937;
    v996 = v938;
    v998 = (char *)v938 + 1;
    *(_BYTE *)v938 = v939;
    v997 = (char *)v938 + 1;
    v995 = 0;
    v993 = 0;
    v994 = 0;
    v940 = FireworkChargeItem::initFireworkChargeItem(
             (ItemInstance *)&v1003,
             0,
             (__int64 *)&v996,
             (__int64 *)&v993,
             0);
    if ( (_DWORD)v1008 == HIDWORD(v1008) )
        (unsigned __int64 *)&v1007,
        (int)v940);
      ItemInstance::ItemInstance((ItemInstance *)v1008, (int)v940);
      LODWORD(v1008) = v1008 + 72;
    if ( v993 )
      operator delete(v993);
    if ( v996 )
      operator delete(v996);
    v941 = FireworksItem::initFireworksRocketItem((int)&v999, (unsigned __int64 *)&v1007, 1);
    ItemInstance::operator=((int)&v999, v941);
    if ( dword_2806D24 == unk_2806D28 )
        (unsigned __int64 *)&Item::mCreativeList,
        (int)&v999);
      ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v999);
      dword_2806D24 += 72;
    if ( (_BYTE)Item::mInCreativeGroup )
      v942 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
      v945 = *(ItemInstance **)(v942 + 4);
      v944 = v942 + 4;
      v943 = v945;
      if ( v945 == *(ItemInstance **)(v944 + 4) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)(Item::mCreativeGroups
                             + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
          (int)&v999);
        ItemInstance::ItemInstance(v943, (int)&v999);
        *(_DWORD *)v944 += 72;
    if ( v1002 )
      operator delete(v1002);
    if ( v1001 )
      operator delete(v1001);
    if ( v1000 )
      (*(void (**)(void))(*(_DWORD *)v1000 + 4))();
    if ( v1006 )
      operator delete(v1006);
    if ( v1005 )
      operator delete(v1005);
    if ( v1004 )
      (*(void (**)(void))(*(_DWORD *)v1004 + 4))();
    v946 = v1008;
    v947 = v1007;
    if ( v1007 != (_DWORD)v1008 )
        v948 = *(void **)(v947 + 52);
        if ( v948 )
          operator delete(v948);
        v949 = *(void **)(v947 + 36);
        if ( v949 )
          operator delete(v949);
        v950 = *(_DWORD *)(v947 + 8);
        if ( v950 )
          (*(void (**)(void))(*(_DWORD *)v950 + 4))();
        *(_DWORD *)(v947 + 8) = 0;
        v947 += 72;
      while ( v946 != v947 );
      v947 = v1007;
    if ( v947 )
      operator delete((void *)v947);
    if ( v937 )
      operator delete(v937);
    ++v935;
  while ( (_UNKNOWN *)v935 != &ItemInstance::MAX_STACK_SIZE );
  sub_21E94B4((void **)&v992, "itemGroup.name.fireworkStars");
  Item::beginCreativeGroup(&v992);
  v951 = (void *)(v992 - 12);
  if ( (int *)(v992 - 12) != &dword_28898C0 )
    v980 = (unsigned int *)(v992 - 4);
        v981 = __ldrex(v980);
      while ( __strex(v981 - 1, v980) );
      v981 = (*v980)--;
    if ( v981 <= 0 )
      j_j_j_j__ZdlPv_9(v951);
  v952 = 0;
    v953 = operator new(1u);
    v954 = Item::mFireworkCharge;
    *(_BYTE *)v953 = dword_262E670[v952];
    ItemInstance::ItemInstance((ItemInstance *)&v988, v954, 1);
    v985 = 0;
    v986 = 0;
    v987 = 0;
    v955 = operator new(1u);
    v956 = *(_BYTE *)v953;
    v985 = v955;
    v987 = (char *)v955 + 1;
    *(_BYTE *)v955 = v956;
    v986 = (char *)v955 + 1;
    v984 = 0;
    v982 = 0;
    v983 = 0;
    v957 = FireworkChargeItem::initFireworkChargeItem(
             (ItemInstance *)&v988,
             (__int64 *)&v985,
             (__int64 *)&v982,
    ItemInstance::operator=((int)&v988, (int)v957);
    if ( v982 )
      operator delete(v982);
    if ( v985 )
      operator delete(v985);
        (int)&v988);
      ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)&v988);
      v958 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
      v961 = *(ItemInstance **)(v958 + 4);
      v960 = v958 + 4;
      v959 = v961;
      if ( v961 == *(ItemInstance **)(v960 + 4) )
          (int)&v988);
        ItemInstance::ItemInstance(v959, (int)&v988);
        *(_DWORD *)v960 += 72;
    if ( v991 )
      operator delete(v991);
    if ( v990 )
      operator delete(v990);
    if ( v989 )
      (*(void (**)(void))(*(_DWORD *)v989 + 4))();
    if ( v953 )
      operator delete(v953);
    ++v952;
  while ( v952 != 16 );
  result = &Item::mInCreativeGroup;
  return result;
}


void __fastcall Item::buildEffectDescriptionName(Item *this, const ItemInstance *a2, ItemInstance *a3)
{
  Item::buildEffectDescriptionName(this, a2, a3);
}


int __fastcall Item::isThrowable(Item *this)
{
  return 0;
}


_DWORD *__fastcall Item::setTextureAtlas(int a1)
{
  int v1; // r5@1
  unsigned int *v2; // r0@2
  unsigned int v3; // r1@4
  int v4; // r0@7
  unsigned int *v5; // r2@8
  unsigned int v6; // r1@10
  _DWORD *result; // r0@15

  Item::mItemTextureAtlas = *(_DWORD *)a1;
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    v2 = (unsigned int *)(v1 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex(v2);
      while ( __strex(v3 + 1, v2) );
    }
    else
      ++*v2;
  }
  v4 = dword_2806D1C;
  if ( dword_2806D1C )
    v5 = (unsigned int *)(dword_2806D1C + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  result = &Item::mEmptyMap;
  dword_2806D1C = v1;
  return result;
}


int __fastcall Item::setIcon(int a1, int **a2, int a3)
{
  int v3; // r7@1
  int v4; // r6@1
  int v5; // r4@1
  bool v6; // zf@1
  unsigned int *v7; // r0@4
  unsigned int v8; // r2@4
  unsigned int v9; // r3@7
  unsigned int v10; // r5@8
  signed int v11; // r2@9
  int v12; // r0@13
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  unsigned int *v15; // r6@22
  unsigned int v16; // r0@24

  v3 = a1;
  v4 = a3;
  v5 = dword_2806D1C;
  v6 = dword_2806D1C == 0;
  if ( dword_2806D1C )
    v6 = *(_DWORD *)(dword_2806D1C + 4) == 0;
  if ( !v6 )
  {
    v7 = (unsigned int *)(dword_2806D1C + 4);
    v8 = *(_DWORD *)(dword_2806D1C + 4);
    do
    {
      while ( 1 )
      {
        if ( !v8 )
        {
          v11 = 1;
          v5 = 0;
          goto LABEL_13;
        }
        __dmb();
        v9 = __ldrex(v7);
        if ( v9 == v8 )
          break;
        __clrex();
        v8 = v9;
      }
      v10 = __strex(v8 + 1, v7);
      v8 = v9;
    }
    while ( v10 );
    __dmb();
    v11 = 0;
    if ( !*v7 )
      v11 = 1;
LABEL_13:
    v12 = Item::mItemTextureAtlas;
    if ( v11 )
      v12 = 0;
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(*(_DWORD *)(TextureAtlas::getTextureItem(v12, a2) + 8) + 12 * v4);
    if ( v5 )
      v13 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return v3;
}


int __fastcall Item::getTextureUVCoordinateSet(TextureUVCoordinateSet *this, int **a2, int a3)
{
  TextureUVCoordinateSet *v3; // r9@1
  int v4; // r7@1
  int v5; // r4@1
  unsigned int v6; // r2@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r3@5
  unsigned int v9; // r6@6
  int v10; // r8@9
  int v11; // r2@9
  int v12; // r3@9
  int v13; // r5@9
  int v14; // r6@9
  int v15; // r7@9
  int result; // r0@11
  unsigned int *v17; // r1@12
  unsigned int *v18; // r5@18

  v3 = this;
  v4 = a3;
  v5 = dword_2806D1C;
  if ( dword_2806D1C )
  {
    v6 = *(_DWORD *)(dword_2806D1C + 4);
    v7 = (unsigned int *)(dword_2806D1C + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          __dmb();
          if ( *v7 && Item::mItemTextureAtlas )
          {
            v10 = *(_DWORD *)(*(_DWORD *)(TextureAtlas::getTextureItem(Item::mItemTextureAtlas, a2) + 8) + 12 * v4);
            v11 = *(_DWORD *)(v10 + 4);
            v12 = *(_DWORD *)(v10 + 8);
            v13 = *(_DWORD *)(v10 + 12);
            v14 = *(_DWORD *)(v10 + 16);
            v15 = *(_DWORD *)(v10 + 20);
            *(_DWORD *)v3 = *(_DWORD *)v10;
            *((_DWORD *)v3 + 1) = v11;
            *((_DWORD *)v3 + 2) = v12;
            *((_DWORD *)v3 + 3) = v13;
            *((_DWORD *)v3 + 4) = v14;
            *((_DWORD *)v3 + 5) = v15;
            sub_21E8AF4((int *)v3 + 6, (int *)(v10 + 24));
            *((_DWORD *)v3 + 7) = *(_DWORD *)(v10 + 28);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v5 = 0;
LABEL_11:
  result = TextureUVCoordinateSet::TextureUVCoordinateSet(v3);
  if ( v5 )
LABEL_12:
    v17 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
    else
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


signed int __fastcall Item::dispense(Item *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  BlockSource *v6; // r9@1
  int v7; // r10@1
  Container *v8; // r11@1
  signed int v13; // r6@2
  int *v14; // r5@2
  __int64 v15; // kr00_8@2
  int v16; // r6@3
  _DWORD *v17; // r7@5
  int v18; // r0@6
  int v19; // r4@6
  int v20; // r0@6
  ItemInstance *v22; // r0@13
  Player *v23; // r0@13
  char v25; // [sp+8h] [bp-B8h]@13
  int v26; // [sp+10h] [bp-B0h]@17
  void *v27; // [sp+2Ch] [bp-94h]@15
  void *ptr; // [sp+3Ch] [bp-84h]@13
  float v29; // [sp+50h] [bp-70h]@2
  float v32; // [sp+5Ch] [bp-64h]@2
  char v33; // [sp+68h] [bp-58h]@2
  char v34; // [sp+74h] [bp-4Ch]@2
  char v35; // [sp+90h] [bp-30h]@2

  v6 = a2;
  v7 = a4;
  v8 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 88))() == 1 )
  {
    BlockPos::BlockPos((int)&v35, (int)a5);
    Vec3::Vec3((int)&v33, (int)&v35);
    Vec3::Vec3((int)&v29, (int)&v35);
    __asm
    {
      VLDR            S6, [SP,#0xC0+var_70]
      VLDR            S8, [SP,#0xC0+var_6C]
      VLDR            S10, [SP,#0xC0+var_68]
    }
    _R0 = &Vec3::ONE;
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VSTR            S0, [SP,#0xC0+var_64]
      VSTR            S2, [SP,#0xC0+var_60]
      VSTR            S4, [SP,#0xC0+var_5C]
    AABB::AABB((int)&v34, (int)&v33, (int)&v32);
    v13 = 0;
    v15 = *(_QWORD *)BlockSource::fetchEntities((int)v6, 256, (int)&v34, 0);
    v14 = (int *)v15;
    if ( (_DWORD)v15 != HIDWORD(v15) )
      while ( 1 )
      {
        v16 = *v14;
        if ( Entity::hasCategory(*v14, 12) || Entity::hasType(v16, 317) == 1 )
        {
          v17 = (_DWORD *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)v8 + 16))(v8, v7);
          if ( *v17 )
          {
            v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 908))(v16);
            v19 = v18;
            v20 = *(_BYTE *)(v18 + 15);
            _ZF = v20 == 0;
            if ( v20 )
              _ZF = *(_DWORD *)v19 == 0;
            if ( _ZF || ItemInstance::isNull((ItemInstance *)v19) || !*(_BYTE *)(v19 + 14) )
              break;
          }
        }
        ++v14;
        if ( (int *)HIDWORD(v15) == v14 )
          goto LABEL_12;
      }
      v22 = ItemInstance::ItemInstance((ItemInstance *)&v25, (int)v17);
      ItemInstance::set(v22, 1);
      (*(void (__fastcall **)(int, char *))(*(_DWORD *)v16 + 912))(v16, &v25);
      (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 1064))(v16, 1);
      v23 = (Player *)BlockSource::getLevel(v6);
      Level::broadcastLevelEvent(v23, 1000, __PAIR__(1000, (unsigned int)a5), 0);
      (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
      if ( ptr )
        operator delete(ptr);
      if ( v27 )
        operator delete(v27);
      if ( v26 )
        (*(void (**)(void))(*(_DWORD *)v26 + 4))();
      v13 = 1;
  }
  else
LABEL_12:
  return v13;
}


int __fastcall Item::isValidRepairItem(Item *this, const ItemInstance *a2, const ItemInstance *a3)
{
  return 0;
}


int __fastcall Item::_useOn(int a1, float a2, float a3, float a4, int a5, float a6, float a7, float a8, ItemUseCallback *a9)
{
  return Item::_useOn(
           a1,
           (ItemInstance *)LODWORD(a2),
           (Entity *)LODWORD(a3),
           (BlockPos *)LODWORD(a4),
           a5,
           a6,
           a7,
           a8,
           a9);
}


char *__fastcall Item::addCreativeItem(Item *this, const ItemInstance *a2)
{
  Item *v2; // r4@1
  char *result; // r0@4
  int v4; // r5@5
  ItemInstance *v5; // r1@5
  int v6; // r5@5
  ItemInstance *v7; // t1@5

  v2 = this;
  if ( dword_2806D24 == unk_2806D28 )
  {
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&Item::mCreativeList,
      (int)this);
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)dword_2806D24, (int)this);
    dword_2806D24 += 72;
  result = (char *)(unsigned __int8)Item::mInCreativeGroup;
  if ( (_BYTE)Item::mInCreativeGroup )
    v4 = Item::mCreativeGroups + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1);
    v7 = *(ItemInstance **)(v4 + 4);
    v6 = v4 + 4;
    v5 = v7;
    if ( v7 == *(ItemInstance **)(v6 + 4) )
    {
      result = j_j_j__ZNSt6vectorI12ItemInstanceSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT__0(
                 (unsigned __int64 *)(Item::mCreativeGroups
                                    + 12 * (-1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) - 1)),
                 (int)v2);
    }
    else
      ItemInstance::ItemInstance(v5, (int)v2);
      result = (char *)(*(_DWORD *)v6 + 72);
      *(_DWORD *)v6 = result;
  return result;
}


int __fastcall Item::setShouldDespawn(int result, bool a2)
{
  *(_BYTE *)(result + 41) = a2;
  return result;
}


int __fastcall Item::isLiquidClipItem(Item *this, int a2)
{
  return 0;
}
