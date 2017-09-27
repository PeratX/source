

void __fastcall BucketItem::getAuxValuesDescription(BucketItem *this)
{
  int *v1; // r4@1
  const void **v2; // r0@1
  char *v3; // r0@1
  void *v4; // r0@2
  const void **v5; // r0@3
  const void **v6; // r0@3
  char *v7; // r0@3
  char *v8; // r0@4
  char *v9; // r0@5
  const void **v16; // r0@6
  const void **v17; // r0@6
  char *v18; // r0@6
  char *v19; // r0@7
  void *v20; // r0@8
  const void **v23; // r0@9
  const void **v24; // r0@9
  char *v25; // r0@9
  char *v26; // r0@10
  void *v27; // r0@11
  unsigned int *v28; // r2@13
  signed int v29; // r1@15
  unsigned int *v30; // r2@17
  signed int v31; // r1@19
  unsigned int *v32; // r2@21
  signed int v33; // r1@23
  unsigned int *v34; // r2@25
  signed int v35; // r1@27
  unsigned int *v36; // r2@29
  signed int v37; // r1@31
  unsigned int *v38; // r2@33
  signed int v39; // r1@35
  unsigned int *v40; // r2@37
  signed int v41; // r1@39
  unsigned int *v42; // r2@41
  signed int v43; // r1@43
  unsigned int *v44; // r2@45
  signed int v45; // r1@47
  unsigned int *v46; // r2@49
  signed int v47; // r1@51
  unsigned int *v48; // r2@53
  signed int v49; // r1@55
  int v50; // [sp+8h] [bp-48h]@9
  char *v51; // [sp+Ch] [bp-44h]@9
  char *v52; // [sp+10h] [bp-40h]@9
  int v53; // [sp+14h] [bp-3Ch]@6
  char *v54; // [sp+18h] [bp-38h]@6
  char *v55; // [sp+1Ch] [bp-34h]@6
  char *v56; // [sp+20h] [bp-30h]@3
  char *v57; // [sp+24h] [bp-2Ch]@3
  char *v58; // [sp+28h] [bp-28h]@3
  int v59; // [sp+2Ch] [bp-24h]@1
  char *v60; // [sp+30h] [bp-20h]@1
  char *v61; // [sp+38h] [bp-18h]@3

  v1 = (int *)this;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E94B4((void **)&v59, "0");
  v2 = sub_21E7408((const void **)&v59, " = Empty Bucket\n", 0x10u);
  v60 = (char *)*v2;
  *v2 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v1, (int *)&v60);
  v3 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v59 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v61 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v61, 0, 0, (_BYTE *)1, 0x31u);
  v56 = v61;
  v5 = sub_21E82D8((const void **)&v56, 0, (unsigned int)"\n", (_BYTE *)1);
  v57 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_21E7408((const void **)&v57, " = Milk\n", 8u);
  v58 = (char *)*v6;
  *v6 = &unk_28898CC;
  sub_21E72F0((const void **)v1, (const void **)&v58);
  v7 = v58 - 12;
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v58 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v57 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v56 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  _R0 = *(_BYTE *)(Block::mFlowingLava + 4);
  __asm
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VMOV            R1, S0
  Util::toString((Util *)&v53, _R1);
  v16 = sub_21E82D8((const void **)&v53, 0, (unsigned int)"\n", (_BYTE *)1);
  v54 = (char *)*v16;
  *v16 = &unk_28898CC;
  v17 = sub_21E7408((const void **)&v54, " = Lava\n", 8u);
  v55 = (char *)*v17;
  *v17 = &unk_28898CC;
  sub_21E72F0((const void **)v1, (const void **)&v55);
  v18 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v55 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v54 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v53 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  _R0 = *(_BYTE *)(Block::mFlowingWater + 4);
  Util::toString((Util *)&v50, _R1);
  v23 = sub_21E82D8((const void **)&v50, 0, (unsigned int)"\n", (_BYTE *)1);
  v51 = (char *)*v23;
  *v23 = &unk_28898CC;
  v24 = sub_21E7408((const void **)&v51, " = Water", 8u);
  v52 = (char *)*v24;
  *v24 = &unk_28898CC;
  sub_21E72F0((const void **)v1, (const void **)&v52);
  v25 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v52 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v51 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v50 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}


signed int __fastcall BucketItem::isLiquidClipItem(BucketItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( !a2 )
    result = 1;
  return result;
}


signed int __fastcall BucketItem::uniqueAuxValues(BucketItem *this)
{
  return 1;
}


int __fastcall BucketItem::useTimeDepleted(BucketItem *this, ItemInstance *a2, Level *a3, Player *a4)
{
  Player *v4; // r4@1
  ItemInstance *v5; // r5@1
  int result; // r0@3
  PlayerInventoryProxy *v7; // r0@5
  int v8; // [sp+0h] [bp-58h]@4
  int v9; // [sp+8h] [bp-50h]@11
  void *v10; // [sp+24h] [bp-34h]@9
  void *ptr; // [sp+34h] [bp-24h]@7

  v4 = a4;
  v5 = a2;
  if ( !Level::isClientSide(a3) )
    Mob::removeAllEffects(v4);
  result = Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD);
  if ( !result )
  {
    ItemInstance::remove(v5, 1);
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mBucket);
    if ( *((_BYTE *)v5 + 14) )
    {
      v7 = (PlayerInventoryProxy *)Player::getSupplies(v4);
      PlayerInventoryProxy::add(v7, (ItemInstance *)&v8, 1);
    }
    else
      ItemInstance::operator=((int)v5, (int)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    result = v9;
    if ( v9 )
      result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  }
  return result;
}


int __fastcall BucketItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r9@1
  int *v4; // r8@1
  void *v5; // r0@1
  int v6; // r12@2
  int v7; // r5@2
  int v8; // r2@2
  int v9; // r3@2
  int v10; // r4@2
  int v11; // r6@2
  int v12; // r7@2
  int v13; // r12@2
  int v14; // r4@2
  int v15; // r2@2
  int v16; // r3@2
  int v17; // r5@2
  int v18; // r6@2
  int v19; // r7@2
  int v20; // r12@2
  int v21; // r4@2
  int v22; // r2@2
  int v23; // r3@2
  int v24; // r5@2
  int v25; // r6@2
  int v26; // r7@2
  int v27; // r12@2
  int v28; // r4@2
  int v29; // r2@2
  int v30; // r3@2
  int v31; // r5@2
  int v32; // r6@2
  int v33; // r7@2
  unsigned int *v35; // r2@3
  signed int v36; // r1@5
  int v37; // [sp+8h] [bp-28h]@1

  v3 = a1;
  Item::setIcon(a1, a2, a3);
  sub_21E94B4((void **)&v37, "bucket");
  v4 = Item::getTextureItem((int **)&v37);
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v3 + 116;
  v7 = *(_DWORD *)v4[2];
  v8 = *(_DWORD *)(v7 + 4);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(_DWORD *)(v7 + 12);
  v11 = *(_DWORD *)(v7 + 16);
  v12 = *(_DWORD *)(v7 + 20);
  *(_DWORD *)v6 = *(_DWORD *)v7;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 8) = v9;
  *(_DWORD *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  *(_DWORD *)(v6 + 20) = v12;
  EntityInteraction::setInteractText((int *)(v3 + 140), (int *)(v7 + 24));
  v13 = v3 + 180;
  *(_DWORD *)(v3 + 144) = *(_DWORD *)(v7 + 28);
  v14 = *(_DWORD *)(v4[2] + 12);
  v15 = *(_DWORD *)(v14 + 4);
  v16 = *(_DWORD *)(v14 + 8);
  v17 = *(_DWORD *)(v14 + 12);
  v18 = *(_DWORD *)(v14 + 16);
  v19 = *(_DWORD *)(v14 + 20);
  *(_DWORD *)v13 = *(_DWORD *)v14;
  *(_DWORD *)(v13 + 4) = v15;
  *(_DWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 12) = v17;
  *(_DWORD *)(v13 + 16) = v18;
  *(_DWORD *)(v13 + 20) = v19;
  EntityInteraction::setInteractText((int *)(v3 + 204), (int *)(v14 + 24));
  v20 = v3 + 212;
  *(_DWORD *)(v3 + 208) = *(_DWORD *)(v14 + 28);
  v21 = *(_DWORD *)(v4[2] + 24);
  v22 = *(_DWORD *)(v21 + 4);
  v23 = *(_DWORD *)(v21 + 8);
  v24 = *(_DWORD *)(v21 + 12);
  v25 = *(_DWORD *)(v21 + 16);
  v26 = *(_DWORD *)(v21 + 20);
  *(_DWORD *)v20 = *(_DWORD *)v21;
  *(_DWORD *)(v20 + 4) = v22;
  *(_DWORD *)(v20 + 8) = v23;
  *(_DWORD *)(v20 + 12) = v24;
  *(_DWORD *)(v20 + 16) = v25;
  *(_DWORD *)(v20 + 20) = v26;
  EntityInteraction::setInteractText((int *)(v3 + 236), (int *)(v21 + 24));
  v27 = v3 + 148;
  *(_DWORD *)(v3 + 240) = *(_DWORD *)(v21 + 28);
  v28 = *(_DWORD *)(v4[2] + 36);
  v29 = *(_DWORD *)(v28 + 4);
  v30 = *(_DWORD *)(v28 + 8);
  v31 = *(_DWORD *)(v28 + 12);
  v32 = *(_DWORD *)(v28 + 16);
  v33 = *(_DWORD *)(v28 + 20);
  *(_DWORD *)v27 = *(_DWORD *)v28;
  *(_DWORD *)(v27 + 4) = v29;
  *(_DWORD *)(v27 + 8) = v30;
  *(_DWORD *)(v27 + 12) = v31;
  *(_DWORD *)(v27 + 16) = v32;
  *(_DWORD *)(v27 + 20) = v33;
  EntityInteraction::setInteractText((int *)(v3 + 172), (int *)(v28 + 24));
  *(_DWORD *)(v3 + 176) = *(_DWORD *)(v28 + 28);
  return v3;
}


void __fastcall BucketItem::buildDescriptionId(BucketItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BucketItem::buildDescriptionId(this, a2, a3);
}


int __fastcall BucketItem::isValidAuxValue(BucketItem *this, int a2)
{
  int result; // r0@3
  signed int v3; // r2@4

  if ( a2 && *(_BYTE *)(Block::mFlowingWater + 4) != a2 )
  {
    v3 = 0;
    if ( *(_BYTE *)(Block::mFlowingLava + 4) == a2 )
      v3 = 1;
    if ( a2 != 1 )
      a2 = 0;
    result = a2 | v3;
  }
  else
    result = 1;
  return result;
}


char *__fastcall BucketItem::getIcon(BucketItem *this, int a2, int a3, bool a4)
{
  char *result; // r0@2

  if ( *(_BYTE *)(Block::mFlowingWater + 4) == a2 )
  {
    result = (char *)this + 212;
  }
  else if ( *(_BYTE *)(Block::mFlowingLava + 4) == a2 )
    result = (char *)this + 148;
  else if ( a2 == 1 )
    result = (char *)this + 180;
  else
    result = (char *)this + 116;
  return result;
}


void __fastcall BucketItem::getAuxValuesDescription(BucketItem *this)
{
  BucketItem::getAuxValuesDescription(this);
}


void __fastcall BucketItem::~BucketItem(BucketItem *this)
{
  BucketItem *v1; // r0@1

  v1 = BucketItem::~BucketItem(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ItemInstance *__fastcall BucketItem::use(BucketItem *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r4@1
  BucketItem *v4; // r6@1
  Player *v5; // r5@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (unsigned __int8)ItemInstance::getAuxValue(a2) == 1 )
    Player::startUsingItem(v5, v3, *((_DWORD *)v4 + 9));
  return v3;
}


signed int __fastcall BucketItem::getMaxStackSize(BucketItem *this, const ItemInstance *a2)
{
  __int16 v2; // r0@1
  signed int v3; // r1@1

  v2 = ItemInstance::getAuxValue(a2);
  v3 = 16;
  if ( v2 )
    v3 = 1;
  return v3;
}


int __fastcall BucketItem::_useOn(int a1, ItemInstance *this, int a3, int a4, int a5, float a6, float a7, float a8, ItemUseCallback *a9)
{
  ItemInstance *v9; // r9@1
  char v12; // r6@1
  const BlockPos *v13; // r8@1
  signed int v14; // r5@4
  const Vec3 *v22; // r0@8
  int v23; // r0@9
  int v24; // r1@9
  int v25; // r2@9
  int v26; // r0@14
  int *v27; // r5@18
  Level *v28; // r5@19
  Level *v30; // r5@23
  char v31; // [sp+10h] [bp-F8h]@23
  char v32; // [sp+1Ch] [bp-ECh]@19
  char v33; // [sp+28h] [bp-E0h]@18
  int v34; // [sp+30h] [bp-D8h]@33
  void *v35; // [sp+4Ch] [bp-BCh]@31
  void *ptr; // [sp+5Ch] [bp-ACh]@29
  char v37; // [sp+70h] [bp-98h]@17
  char v38; // [sp+71h] [bp-97h]@17
  int v39; // [sp+74h] [bp-94h]@8
  char v40; // [sp+78h] [bp-90h]@9
  int v41; // [sp+7Ch] [bp-8Ch]@9
  int v42; // [sp+80h] [bp-88h]@9
  int v43; // [sp+84h] [bp-84h]@9
  float v44; // [sp+B8h] [bp-50h]@8
  float v45; // [sp+C4h] [bp-44h]@5

  v9 = this;
  _R7 = a4;
  _R4 = (Entity *)a3;
  v12 = ItemInstance::getAuxValue(this);
  v13 = (const BlockPos *)Entity::getRegion(_R4);
  if ( v12 == 1 )
    return 0;
  if ( !v12 )
  {
    if ( BucketItem::_takeLiquid(0, v9, _R4, (const BlockPos *)_R7, a9) )
      return 1;
  }
  __asm
    VLDR            S16, [SP,#0x108+arg_C]
    VLDR            S18, [SP,#0x108+arg_8]
    VLDR            S20, [SP,#0x108+arg_4]
  Entity::getInterpolatedPosition((Entity *)&v45, *(float *)&_R4, 1065353216);
    VLDR            S0, [R4,#0x170]
    VLDR            S2, [SP,#0x108+var_40]
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x108+var_40]
    VLDR            S2, [R7]
    VLDR            S4, [R7,#4]
    VLDR            S6, [R7,#8]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VADD.F32        S10, S2, S20
    VLDR            S2, [SP,#0x108+var_3C]
    VADD.F32        S8, S4, S18
    VLDR            S4, [SP,#0x108+var_44]
    VADD.F32        S12, S6, S16
    VSTR            S10, [SP,#0x108+var_50]
    VSUB.F32        S6, S10, S4
    VSTR            S8, [SP,#0x108+var_4C]
    VSUB.F32        S8, S8, S0
    VSUB.F32        S10, S12, S2
    VSTR            S12, [SP,#0x108+var_48]
    VMUL.F32        S14, S6, S6
    VMUL.F32        S12, S8, S8
    VMUL.F32        S1, S10, S10
    VADD.F32        S12, S12, S14
    VLDR            S14, =0.0001
    VADD.F32        S12, S12, S1
    VSQRT.F32       S12, S12
    VCMPE.F32       S12, S14
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
    _R0 = dword_2822498;
  else
    __asm
    {
      VDIV.F32        S10, S10, S12
      VDIV.F32        S8, S8, S12
      VDIV.F32        S6, S6, S12
      VMOV            R0, S10
      VMOV            R2, S8
      VMOV            R1, S6
    }
    VMOV.F32        S6, #5.0
    VMOV            S8, R2
    VMOV            S10, R1
    VMOV            S12, R0
    VMUL.F32        S10, S10, S6
    VMUL.F32        S8, S8, S6
    VMUL.F32        S6, S12, S6
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S2, S6
    VSTR            S4, [SP,#0x108+var_50]
    VSTR            S0, [SP,#0x108+var_4C]
    VSTR            S2, [SP,#0x108+var_48]
  v22 = (const Vec3 *)Entity::getRegion(_R4);
  v14 = 0;
  BlockSource::clip((BlockSource *)&v39, v22, (const Vec3 *)&v45, (int)&v44, 0, 1, 200, 0);
  if ( (v39 & 0xFFFFFFFE) != 2 )
    v23 = v41;
    *(_DWORD *)_R7 = v41;
    v24 = v42;
    *(_DWORD *)(_R7 + 4) = v42;
    v25 = v43;
    *(_DWORD *)(_R7 + 8) = v43;
    switch ( v40 )
      case 0:
        *(_DWORD *)(_R7 + 4) = v24 - 1;
        break;
      case 1:
        *(_DWORD *)(_R7 + 4) = v24 + 1;
      case 2:
        *(_DWORD *)(_R7 + 8) = v25 - 1;
      case 3:
        *(_DWORD *)(_R7 + 8) = v25 + 1;
      case 4:
        v26 = v23 - 1;
        goto LABEL_16;
      case 5:
        v26 = v23 + 1;
LABEL_16:
        *(_DWORD *)_R7 = v26;
      default:
    v37 = v12;
    v38 = 0;
    if ( BucketItem::_emptyBucket(0, v13, &v37, _R7, (int)_R4, (int)a9) != 1 )
      return 0;
    ItemInstance::ItemInstance((ItemInstance *)&v33, Item::mBucket, 1, 0);
    v27 = (int *)BlockSource::getMaterial(v13, (const BlockPos *)_R7);
    if ( Material::isType(v27, 5) == 1 )
      v28 = (Level *)Entity::getLevel(_R4);
      Entity::getAttachPos((AABB *)&v32, (int)_R4, 0, 0);
      Level::broadcastSoundEvent(v28, (int)v13, 88, (int)&v32, -1, 1, 0, 0);
    else if ( Material::isType(v27, 6) == 1 )
      v30 = (Level *)Entity::getLevel(_R4);
      Entity::getAttachPos((AABB *)&v31, (int)_R4, 0, 0);
      Level::broadcastSoundEvent(v30, (int)v13, 89, (int)&v31, -1, 1, 0, 0);
    (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)_R4 + 612))(_R4, v9);
    if ( Entity::hasCategory((int)_R4, 1) == 1 && !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 652))(_R4) )
      if ( *((_BYTE *)v9 + 14) )
        (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R4 + 660))(_R4, &v33);
      else
        ItemInstance::operator=((int)v9, (int)&v33);
    if ( ptr )
      operator delete(ptr);
    if ( v35 )
      operator delete(v35);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v14 = 1;
  return v14;
}


signed int __fastcall BucketItem::isEmissive(BucketItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( *(_BYTE *)(Block::mFlowingLava + 4) == a2 )
    result = 1;
  return result;
}


BucketItem *__fastcall BucketItem::~BucketItem(BucketItem *this)
{
  BucketItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_2700E1C;
  v2 = *((_DWORD *)this + 59);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 51);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 43);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 35);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Item::~Item(v1);
  return v1;
}


signed int __fastcall BucketItem::_takeLiquid(BucketItem *this, ItemInstance *a2, Entity *a3, const BlockPos *a4, ItemUseCallback *a5)
{
  Entity *v5; // r8@1
  const BlockPos *v6; // r4@1
  ItemInstance *v7; // r9@1
  BlockSource *v8; // r6@1
  int *v9; // r7@1
  ItemUseCallback *v10; // r10@4
  char *v12; // r11@8
  int v13; // r10@8
  Level *v14; // r0@8
  int v15; // r1@8
  int v16; // r2@8
  int v17; // r10@10
  int v18; // r6@12
  signed int v19; // r0@12
  _DWORD *v20; // r1@12
  char v21; // [sp+10h] [bp-88h]@14
  int v22; // [sp+18h] [bp-80h]@26
  void *v23; // [sp+34h] [bp-64h]@24
  void *ptr; // [sp+44h] [bp-54h]@22
  char v25; // [sp+58h] [bp-40h]@10
  char v26; // [sp+64h] [bp-34h]@8
  char v27; // [sp+70h] [bp-28h]@1
  char v28; // [sp+71h] [bp-27h]@3

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = (BlockSource *)Entity::getRegion(a3);
  v9 = (int *)BlockSource::getMaterial(v8, *(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2));
  BlockSource::getBlockAndData((BlockSource *)&v27, v8, (int)v6);
  if ( !Material::isType(v9, 5) && Material::isType(v9, 6) != 1 )
    return 0;
  if ( v28 )
  v10 = a5;
  if ( a5 )
  {
    if ( (*(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, _DWORD *))(*(_DWORD *)a5 + 16))(
           a5,
           v6,
           &v27,
           &FullBlock::AIR) )
    {
      return 0;
    }
  }
  BlockSource::removeBlock(v8, *(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2));
  if ( Material::isType(v9, 5) == 1 )
    v12 = &v26;
    v13 = Entity::getLevel(v5);
    Entity::getAttachPos((AABB *)&v26, (int)v5, 0, 0);
    v14 = (Level *)v13;
    v15 = (int)v8;
    v10 = a5;
    v16 = 86;
LABEL_11:
    Level::broadcastSoundEvent(v14, v15, v16, (int)v12, -1, 1, 0, 0);
    goto LABEL_12;
  if ( Material::isType(v9, 6) == 1 )
    v12 = &v25;
    v17 = Entity::getLevel(v5);
    Entity::getAttachPos((AABB *)&v25, (int)v5, 0, 0);
    v14 = (Level *)v17;
    v16 = 87;
    goto LABEL_11;
LABEL_12:
  v18 = Item::mBucket;
  v19 = Material::isType(v9, 5);
  v20 = &Block::mFlowingLava;
  if ( v19 )
    v20 = &Block::mFlowingWater;
  ItemInstance::ItemInstance((ItemInstance *)&v21, v18, 1, *(_BYTE *)(*v20 + 4));
  if ( Entity::hasCategory((int)v5, 1) != 1 || !Abilities::getBool((int)v5 + 4320, (int **)&Abilities::INSTABUILD) )
    ItemInstance::remove(v7, 1);
    if ( *((_BYTE *)v7 + 14) )
      if ( !(*(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v5 + 660))(v5, &v21) )
        (*(void (__fastcall **)(Entity *, char *, _DWORD))(*(_DWORD *)v5 + 664))(v5, &v21, 0);
    else
      ItemInstance::operator=((int)v7, (int)&v21);
  if ( v10 )
    (*(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, _DWORD *))(*(_DWORD *)v10 + 16))(
      v10,
      v6,
      &v27,
      &FullBlock::AIR);
  if ( ptr )
    operator delete(ptr);
  if ( v23 )
    operator delete(v23);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  return 1;
}


signed int __fastcall BucketItem::dispense(BucketItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  Container *v6; // r7@1
  int v7; // r6@1
  BlockSource *v8; // r4@1
  ItemInstance *v9; // r0@1
  char v10; // r5@1
  int v11; // r0@2
  int v12; // r5@4
  Player *v13; // r0@5
  int v14; // r0@11
  int *v16; // r5@21
  int **v17; // r0@22
  int v18; // r10@25
  Player *v19; // r0@26
  ItemInstance *v20; // [sp+0h] [bp-D0h]@5
  ItemInstance *v21; // [sp+0h] [bp-D0h]@26
  char v22; // [sp+8h] [bp-C8h]@5
  int v23; // [sp+10h] [bp-C0h]@11
  void *v24; // [sp+2Ch] [bp-A4h]@9
  void *ptr; // [sp+3Ch] [bp-94h]@7
  char v26; // [sp+54h] [bp-7Ch]@4
  char v27; // [sp+55h] [bp-7Bh]@4
  char v28; // [sp+58h] [bp-78h]@26
  int v29; // [sp+60h] [bp-70h]@32
  void *v30; // [sp+7Ch] [bp-54h]@30
  void *v31; // [sp+8Ch] [bp-44h]@28
  unsigned __int8 v32; // [sp+A0h] [bp-30h]@15
  char v33; // [sp+A1h] [bp-2Fh]@17
  char v34; // [sp+A4h] [bp-2Ch]@1

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  v10 = ItemInstance::getAuxValue(v9);
  BlockPos::BlockPos((int)&v34, (int)a5);
  if ( v10 )
  {
    v11 = (unsigned __int8)v10;
    if ( (unsigned __int8)v10 != *(_BYTE *)(Block::mFlowingWater + 4)
      && (unsigned __int8)v10 != *(_BYTE *)(Block::mFlowingLava + 4) )
    {
      return 0;
    }
    v26 = v10;
    v12 = 0;
    v27 = 0;
    if ( BucketItem::_emptyBucket(v11, v8, &v26, (int)&v34, 0, 0) == 1 )
      v13 = (Player *)BlockSource::getLevel(v8);
      Level::broadcastLevelEvent(v13, 1000, __PAIR__(1000, (unsigned int)a5), 0);
      (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v6 + 36))(v6, v7, 1);
      ItemInstance::ItemInstance((ItemInstance *)&v22, Item::mBucket, 1, 0);
      if ( !(*(int (__fastcall **)(Container *, char *))(*(_DWORD *)v6 + 28))(v6, &v22) )
        DispenserBlock::ejectItem(v8, a5, (const Vec3 *)a6, (int)&v22, v20);
      if ( ptr )
        operator delete(ptr);
      if ( v24 )
        operator delete(v24);
      v14 = v23;
LABEL_12:
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      return 1;
  }
  else
    BlockSource::getBlockAndData((BlockSource *)&v32, v8, (int)&v34);
    if ( v32 == *(_BYTE *)(Block::mAir + 4) )
    if ( v33 )
    v16 = (int *)Block::getMaterial((Block *)Block::mBlocks[v32]);
    if ( Material::isType(v16, 5) )
      v17 = Block::mFlowingWater;
    else
      if ( Material::isType(v16, 6) != 1 )
        return 0;
      v17 = Block::mFlowingLava;
    v18 = **v17;
    if ( v18 )
      BlockSource::removeBlock(v8, (const BlockPos *)&v34);
      v19 = (Player *)BlockSource::getLevel(v8);
      Level::broadcastLevelEvent(v19, 1000, __PAIR__(1000, (unsigned int)a5), 0);
      ItemInstance::ItemInstance((ItemInstance *)&v28, Item::mBucket, 1, *(_BYTE *)(v18 + 4));
      if ( !(*(int (__fastcall **)(Container *, char *))(*(_DWORD *)v6 + 28))(v6, &v28) )
        DispenserBlock::ejectItem(v8, a5, (const Vec3 *)a6, (int)&v28, v21);
      if ( v31 )
        operator delete(v31);
      if ( v30 )
        operator delete(v30);
      v14 = v29;
      goto LABEL_12;
  return v12;
}


void __fastcall BucketItem::~BucketItem(BucketItem *this)
{
  BucketItem::~BucketItem(this);
}


signed int __fastcall BucketItem::_emptyBucket(int a1, const BlockPos *a2, _BYTE *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // r6@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r4@1
  int v9; // r7@2
  Material *v10; // r0@2
  int v11; // r0@2
  signed int result; // r0@5
  Dimension *v14; // r0@10
  Level *v15; // r7@12
  char *v19; // r4@12
  signed int v20; // r10@12
  int v24; // r10@16
  void (__fastcall *v25)(int, BlockSource *, const BlockPos *, unsigned int); // r9@16
  unsigned int v26; // r0@16
  Material *v27; // r0@19
  Level *v28; // r4@20
  BlockSource *v29; // [sp+14h] [bp-9Ch]@12
  int v30; // [sp+18h] [bp-98h]@12
  _WORD *v31; // [sp+1Ch] [bp-94h]@12
  float v32; // [sp+20h] [bp-90h]@20
  float v35; // [sp+2Ch] [bp-84h]@20
  char v36; // [sp+38h] [bp-78h]@17
  char v37; // [sp+39h] [bp-77h]@17
  float v38; // [sp+3Ch] [bp-74h]@13
  float v41; // [sp+48h] [bp-68h]@13
  float v42; // [sp+54h] [bp-5Ch]@12
  float v45; // [sp+60h] [bp-50h]@12
  unsigned __int8 v46; // [sp+6Ch] [bp-44h]@2

  v6 = a3;
  v7 = (const BlockPos *)a4;
  v8 = a2;
  if ( *a3 )
  {
    BlockSource::getBlockAndData((BlockSource *)&v46, a2, a4);
    v9 = v46;
    v10 = (Material *)BlockSource::getMaterial(v8, v7);
    v11 = Material::isSolid(v10);
    _ZF = v9 == 0;
    if ( v9 )
      _ZF = (v11 ^ 1) == 1;
    if ( _ZF )
    {
      if ( a6 && (*(int (**)(void))(*(_DWORD *)a6 + 16))() )
      {
        result = 0;
      }
      else
        v14 = (Dimension *)BlockSource::getDimensionConst(v8);
        if ( Dimension::isUltraWarm(v14) != 1 || *v6 != *(_BYTE *)(Block::mFlowingWater + 4) )
        {
          if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v9] + 128))() == 1 )
          {
            v24 = Block::mBlocks[v9];
            v25 = *(void (__fastcall **)(int, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v24 + 276);
            v26 = BlockSource::getData(v8, v7);
            v25(v24, v8, v7, v26);
          }
          v36 = *v6;
          v37 = v6[1];
          v30 = v9;
          v31 = v6;
          v29 = v8;
          BlockSource::setBlockAndData((int)v8, v7, (int)&v36, 3, a5);
        }
        else
          v15 = (Level *)BlockSource::getLevel(v8);
          Vec3::Vec3((int)&v42, (int)v7);
          __asm
            VMOV.F32        S0, #0.5
            VLDR            S2, [SP,#0xB0+var_5C]
            VLDR            S4, [SP,#0xB0+var_58]
            VLDR            S6, [SP,#0xB0+var_54]
            VADD.F32        S2, S2, S0
            VADD.F32        S4, S4, S0
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0xB0+var_50]
            VSTR            S4, [SP,#0xB0+var_4C]
            VSTR            S0, [SP,#0xB0+var_48]
          Level::broadcastSoundEvent(v15, (int)v8, 27, (int)&v45, -1, 1, 0, 0);
          v19 = Level::getRandom(v15);
          __asm { VLDR            D8, =2.32830644e-10 }
          v20 = 8;
          do
            Vec3::Vec3((int)&v38, (int)v7);
            _R0 = Random::_genRandInt32((Random *)v19);
            __asm
            {
              VMOV            S0, R0
              VCVT.F64.U32    D9, S0
            }
              VCVT.F64.U32    D10, S0
              VMUL.F64        D1, D9, D8
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D8
              VMUL.F64        D2, D10, D8
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S4, D2
              VCVT.F32.F64    S0, D0
              VLDR            S6, [SP,#0xB0+var_74]
              VLDR            S8, [SP,#0xB0+var_70]
              VLDR            S10, [SP,#0xB0+var_6C]
              VADD.F32        S2, S2, S6
              VADD.F32        S4, S4, S8
              VADD.F32        S0, S0, S10
              VSTR            S2, [SP,#0xB0+var_68]
              VSTR            S4, [SP,#0xB0+var_64]
              VSTR            S0, [SP,#0xB0+var_60]
            Level::addParticle((int)v15, 6, (int)&v41);
            --v20;
          while ( v20 );
        if ( *v31 == *(_BYTE *)(Block::mFlowingWater + 4) )
          v27 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v30]);
          if ( Material::isSuperHot(v27) == 1 )
            v28 = (Level *)BlockSource::getLevel(v29);
            Vec3::Vec3((int)&v32, (int)v7);
              VMOV.F32        S0, #0.5
              VLDR            S2, [SP,#0xB0+var_90]
              VLDR            S4, [SP,#0xB0+var_8C]
              VLDR            S6, [SP,#0xB0+var_88]
              VADD.F32        S2, S2, S0
              VADD.F32        S4, S4, S0
              VADD.F32        S0, S6, S0
              VSTR            S2, [SP,#0xB0+var_84]
              VSTR            S4, [SP,#0xB0+var_80]
              VSTR            S0, [SP,#0xB0+var_7C]
            Level::broadcastSoundEvent(v28, (int)v29, 27, (int)&v35, -1, 1, 0, 0);
        if ( a6 )
          (*(void (__cdecl **)(int, const BlockPos *, unsigned __int8 *))(*(_DWORD *)a6 + 16))(a6, v7, &v46);
        result = 1;
    }
    else
      result = 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall BucketItem::BucketItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2700E1C;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 180));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 212));
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 24))(v3, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 28))(v3, 0);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 40))(v3, 32);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 36))(v3, 2);
  return v3;
}


void __fastcall BucketItem::buildDescriptionId(BucketItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  int *v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  char *v8; // r0@27
  unsigned int *v9; // r2@29
  signed int v10; // r1@31
  int v11; // [sp+0h] [bp-28h]@19
  int v12; // [sp+4h] [bp-24h]@14
  int v13; // [sp+8h] [bp-20h]@8
  int v14; // [sp+Ch] [bp-1Ch]@2
  char *v15; // [sp+10h] [bp-18h]@1

  v3 = (int *)this;
  v4 = ItemInstance::getAuxValue(a3);
  v15 = (char *)&unk_28898CC;
  if ( v4 == *(_BYTE *)(Block::mFlowingWater + 4) )
  {
    sub_21E8AF4(&v14, (int *)&Item::ICON_DESCRIPTION_PREFIX);
    sub_21E7408((const void **)&v14, "bucketWater", 0xBu);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v15,
      &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) == &dword_28898C0 )
      goto LABEL_27;
    v6 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      goto LABEL_25;
    }
LABEL_24:
    v7 = (*v6)--;
    goto LABEL_25;
  }
  if ( v4 == *(_BYTE *)(Block::mFlowingLava + 4) )
    sub_21E8AF4(&v13, (int *)&Item::ICON_DESCRIPTION_PREFIX);
    sub_21E7408((const void **)&v13, "bucketLava", 0xAu);
      &v13);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v13 - 4);
    if ( !&pthread_create )
      goto LABEL_24;
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
  else if ( (unsigned __int16)v4 == 1 )
    sub_21E8AF4(&v12, (int *)&Item::ICON_DESCRIPTION_PREFIX);
    sub_21E7408((const void **)&v12, "milk", 4u);
      &v12);
    v5 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v12 - 4);
  else
    sub_21E8AF4(&v11, (int *)&Item::ICON_DESCRIPTION_PREFIX);
    sub_21E7408((const void **)&v11, "bucket", 6u);
      &v11);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v11 - 4);
LABEL_25:
  if ( v7 <= 0 )
    j_j_j_j__ZdlPv_9(v5);
LABEL_27:
  sub_21E8AF4(v3, (int *)&v15);
  sub_21E7408((const void **)v3, ".name", 5u);
  v8 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


signed int __fastcall BucketItem::isDestructive(BucketItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( *(_BYTE *)(Block::mFlowingLava + 4) == a2 )
    result = 1;
  return result;
}
