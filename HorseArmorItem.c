

int __fastcall HorseArmorItem::getArmorValue(HorseArmorItem *this)
{
  return HorseArmorItem::mHealthPerTier[*((_DWORD *)this + 31)];
}


void __fastcall HorseArmorItem::~HorseArmorItem(HorseArmorItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall HorseArmorItem::clearColor(HorseArmorItem *this, ItemInstance *a2)
{
  HorseArmorItem::clearColor(this, a2);
}


int __fastcall HorseArmorItem::isTintable(HorseArmorItem *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 31);
  if ( result != 1 )
    result = 0;
  return result;
}


void __fastcall HorseArmorItem::getColor(HorseArmorItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  HorseArmorItem *v3; // r4@1
  ItemInstance *v4; // r5@1
  int v5; // r7@3
  signed int v6; // r6@3
  void *v7; // r0@3
  void *v15; // r0@5
  unsigned int *v16; // r2@6
  signed int v17; // r1@8
  float v18; // r2@10
  __int64 v19; // kr00_8@10
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  int v22; // [sp+8h] [bp-30h]@5
  int v23; // [sp+10h] [bp-28h]@3

  v3 = this;
  v4 = a3;
  if ( *((_DWORD *)a2 + 31) == 1 )
  {
    if ( j_ItemInstance::hasUserData(a3) != 1 )
      goto LABEL_26;
    v5 = *(_DWORD *)j_ItemInstance::getUserData(v4);
    sub_21E94B4((void **)&v23, "customColor");
    v6 = j_CompoundTag::contains(v5, (const void **)&v23);
    v7 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    if ( v6 != 1 )
LABEL_26:
      *(_DWORD *)v3 = 1059102881;
      *((_DWORD *)v3 + 1) = 1053477580;
      *((_DWORD *)v3 + 2) = 1048608897;
      *((_DWORD *)v3 + 3) = 1065353216;
    else
      sub_21E94B4((void **)&v22, "customColor");
      _R0 = j_CompoundTag::getInt(v5, (const void **)&v22);
      _R1 = (_R0 >> 16) & 0xFF;
      _R2 = (unsigned __int16)_R0 >> 8;
      _R0 = (unsigned __int8)_R0;
      __asm
        VLDR            S6, =0.0039216
        VMOV            S0, R1
        VMOV            S4, R0
        VMOV            S2, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      v15 = (void *)(v22 - 12);
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S6
        VSTR            S0, [R4]
        VSTR            S2, [R4,#4]
        VSTR            S4, [R4,#8]
      if ( !_ZF )
        v16 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
  }
  else
    v18 = unk_283E614;
    v19 = qword_283E618;
    *(_DWORD *)this = Color::WHITE;
    *((float *)this + 1) = v18;
    *((_QWORD *)this + 1) = v19;
}


void __fastcall HorseArmorItem::~HorseArmorItem(HorseArmorItem *this)
{
  HorseArmorItem::~HorseArmorItem(this);
}


void __fastcall HorseArmorItem::setColor(HorseArmorItem *this, ItemInstance *a2, const Color *a3)
{
  ItemInstance *v3; // r5@1
  Color *v4; // r4@1
  void *v5; // r6@2
  int v6; // r5@5
  int v7; // r0@5
  void *v8; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // [sp+8h] [bp-20h]@5
  void *v12; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = a3;
  if ( !j_ItemInstance::hasUserData(a2) )
  {
    v5 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v5);
    v12 = v5;
    j_ItemInstance::setUserData((int)v3, (int *)&v12);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
  }
  v6 = *(_DWORD *)j_ItemInstance::getUserData(v3);
  sub_21E94B4((void **)&v11, "customColor");
  v7 = j_Color::toARGB(v4);
  j_CompoundTag::putInt(v6, (const void **)&v11, v7);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall HorseArmorItem::clearColor(HorseArmorItem *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r4@2
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  if ( j_ItemInstance::hasUserData(a2) == 1 )
  {
    v3 = *(_DWORD *)j_ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v7, "customColor");
    j_CompoundTag::remove(v3, (const void **)&v7);
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
  }
}


signed int __fastcall HorseArmorItem::hasCustomColor(HorseArmorItem *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r4@3
  signed int v4; // r4@3
  void *v5; // r0@3
  unsigned int *v6; // r12@4
  signed int v7; // r1@6
  int v9; // [sp+4h] [bp-1Ch]@3

  v2 = a2;
  if ( *((_DWORD *)this + 31) != 1 || j_ItemInstance::hasUserData(a2) != 1 )
  {
    v4 = 0;
  }
  else
    v3 = *(_DWORD *)j_ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v9, "customColor");
    v4 = j_CompoundTag::contains(v3, (const void **)&v9);
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  return v4;
}


signed int __fastcall HorseArmorItem::dispense(HorseArmorItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  BlockSource *v6; // r9@1
  int v7; // r11@1
  Container *v8; // r8@1
  signed int v14; // r6@1
  __int64 v15; // r4@1
  int v16; // r7@2
  int v17; // r6@2
  Player *v18; // r0@7
  float v20; // [sp+8h] [bp-70h]@1
  float v23; // [sp+14h] [bp-64h]@1
  char v24; // [sp+20h] [bp-58h]@1
  char v25; // [sp+2Ch] [bp-4Ch]@1
  char v26; // [sp+48h] [bp-30h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  j_BlockPos::BlockPos((int)&v26, (int)a5);
  j_Vec3::Vec3((int)&v24, (int)&v26);
  j_Vec3::Vec3((int)&v20, (int)&v26);
  __asm
  {
    VLDR            S6, [SP,#0x78+var_70]
    VLDR            S8, [SP,#0x78+var_6C]
    VLDR            S10, [SP,#0x78+var_68]
  }
  _R0 = &Vec3::ONE;
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x78+var_64]
    VSTR            S2, [SP,#0x78+var_60]
    VSTR            S4, [SP,#0x78+var_5C]
  j_AABB::AABB((int)&v25, (int)&v24, (int)&v23);
  v14 = 0;
  v15 = *(_QWORD *)j_BlockSource::fetchEntities((int)v6, 256, (int)&v25, 0);
  if ( (_DWORD)v15 != HIDWORD(v15) )
    while ( 1 )
    {
      v16 = *(_DWORD *)v15;
      v17 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v8 + 16))(v8, v7);
      if ( ((*(int (__fastcall **)(int))(*(_DWORD *)v16 + 488))(v16) == 2118423 || j_Entity::hasCategory(v16, 1) == 1)
        && (*(int (**)(void))(**(_DWORD **)v17 + 92))() == 1 )
      {
        break;
      }
      LODWORD(v15) = v15 + 4;
      if ( HIDWORD(v15) == (_DWORD)v15 )
        return 0;
    }
    v18 = (Player *)j_BlockSource::getLevel(v6);
    j_Level::broadcastLevelEvent(v18, 1000, __PAIR__(1000, (unsigned int)a5), 0);
    v14 = 1;
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
  return v14;
}


int __fastcall HorseArmorItem::HorseArmorItem(int a1, const void **a2, __int16 a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1

  v5 = a4;
  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_27219F0;
  *(_DWORD *)(result + 116) = 1;
  *(_DWORD *)(result + 120) = v5;
  *(_BYTE *)(result + 4) = 1;
  *(_DWORD *)(result + 124) = a5;
  return result;
}


void __fastcall HorseArmorItem::setColor(HorseArmorItem *this, ItemInstance *a2, const Color *a3)
{
  HorseArmorItem::setColor(this, a2, a3);
}


void __fastcall HorseArmorItem::getColor(HorseArmorItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  HorseArmorItem::getColor(this, a2, a3);
}
