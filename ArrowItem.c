

signed int __fastcall ArrowItem::isValidAuxValue(ArrowItem *this, int a2)
{
  signed int v2; // r4@2
  signed int result; // r0@5

  if ( a2 )
  {
    v2 = 0;
    if ( a2 >= 6 && j_Potion::getPotionCount(this) > a2 )
      v2 = 1;
    result = v2;
  }
  else
    result = 1;
  return result;
}


void __fastcall ArrowItem::buildEffectDescriptionName(ArrowItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  void **v3; // r4@1
  __int16 v4; // r0@1
  int v5; // r5@2 OVERLAPPED
  int v6; // r6@2 OVERLAPPED
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r7@10
  unsigned int v10; // r0@12
  void *v11; // r5@17
  size_t v12; // r2@17
  const void **v13; // r0@19
  char *v14; // r0@19
  void *v15; // r0@20
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // [sp+0h] [bp-30h]@19
  char *v21; // [sp+4h] [bp-2Ch]@19
  void *s1; // [sp+8h] [bp-28h]@17
  char v23; // [sp+Ch] [bp-24h]@2
  int v24; // [sp+10h] [bp-20h]@2

  v3 = (void **)this;
  v4 = j_ItemInstance::getAuxValue(a3);
  if ( v4 )
  {
    j_Potion::getPotion((Potion *)&v23, (signed __int16)(v4 - 1));
    *(_QWORD *)&v5 = *(_QWORD *)&v23;
    if ( v24 )
    {
      v7 = (unsigned int *)(v24 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    j_Potion::getPotentencyDescription((int *)&s1, v5, 0, 1040187392);
    v11 = s1;
    v12 = *((_DWORD *)s1 - 3);
    if ( v12 != *((_DWORD *)Util::EMPTY_STRING - 3) || j_memcmp_0(s1, Util::EMPTY_STRING, v12) )
      sub_21E8AF4(&v20, (int *)&unk_282F9D4);
      sub_21E72F0((const void **)&v20, (const void **)&s1);
      v13 = sub_21E72F0((const void **)&v20, (const void **)&unk_282FA04);
      v21 = (char *)*v13;
      *v13 = &unk_28898CC;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&s1,
        (int *)&v21);
      v14 = v21 - 12;
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v21 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v20 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = s1;
    *v3 = v11;
  }
  else
    sub_21E94B4(v3, (const char *)&unk_257BC67);
}


int __fastcall ArrowItem::ArrowItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r11@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_271FE6C;
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 180));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 212));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 244));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 276));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 308));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 340));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 372));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 404));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 436));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 468));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 500));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 532));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 564));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 596));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 628));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 660));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 692));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 724));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 756));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 788));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 820));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 852));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 884));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 916));
  *(_BYTE *)(v3 + 34) = 1;
  return v3;
}


int __fastcall ArrowItem::getMobEffect(ArrowItem *this, int a2, int a3)
{
  ArrowItem *v3; // r4@1
  Potion *v4; // r5@1 OVERLAPPED
  int v5; // r6@1 OVERLAPPED
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r7@8
  unsigned int v9; // r0@10
  char *v10; // r0@15
  int v11; // r1@15
  int v12; // r2@15
  int v13; // r3@15
  int v14; // r0@15
  int v15; // kr00_4@15
  signed int v16; // r1@15
  char v18; // [sp+4h] [bp-1Ch]@1
  int v19; // [sp+8h] [bp-18h]@1

  v3 = this;
  j_Potion::getPotion((Potion *)&v18, a3);
  *(_QWORD *)&v4 = *(_QWORD *)&v18;
  if ( v19 )
  {
    v6 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v10 = j_Potion::getMobEffect(v4);
  v11 = *(_DWORD *)v10;
  v12 = *((_DWORD *)v10 + 1);
  v13 = *((_DWORD *)v10 + 2);
  v14 = *((_DWORD *)v10 + 3);
  *(_DWORD *)v3 = v11;
  *((_DWORD *)v3 + 1) = v12;
  *((_DWORD *)v3 + 2) = v13;
  *((_DWORD *)v3 + 3) = v14;
  v15 = j_MobEffectInstance::getDuration(v3);
  v16 = v15 / 8;
  if ( (unsigned int)(v15 + 7) < 0xF )
    v16 = 1;
  return j_MobEffectInstance::setDuration(v3, v16);
}


void __fastcall ArrowItem::buildDescriptionId(ArrowItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ArrowItem::buildDescriptionId(this, a2, a3);
}


void __fastcall ArrowItem::buildDescriptionId(ArrowItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ArrowItem *v3; // r4@1
  const ItemInstance *v4; // r6@1
  __int16 v5; // r0@1
  int v6; // r5@2
  int v7; // r6@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r7@10
  unsigned int v11; // r0@12
  void *v12; // r0@18
  int v13; // r5@19
  unsigned int *v14; // r1@20
  unsigned int v15; // r0@22
  unsigned int *v16; // r6@26
  unsigned int v17; // r0@28
  int v18; // r0@33
  void *v19; // r0@35
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  unsigned int *v22; // r2@44
  signed int v23; // r1@46
  void *v24; // [sp+4h] [bp-34h]@35
  int v25; // [sp+8h] [bp-30h]@18
  int v26; // [sp+Ch] [bp-2Ch]@19
  int v27; // [sp+10h] [bp-28h]@18
  int v28; // [sp+14h] [bp-24h]@2
  int v29; // [sp+18h] [bp-20h]@2
  int v30; // [sp+1Ch] [bp-1Ch]@2

  v3 = this;
  v4 = a2;
  v5 = j_ItemInstance::getAuxValue(a3);
  if ( v5 )
  {
    v6 = (signed __int16)(v5 - 1);
    j_Potion::getPotion((Potion *)&v28, v6);
    j_Potion::getDescriptionId((Potion *)&v30, v28);
    v7 = v29;
    if ( v29 )
    {
      v8 = (unsigned int *)(v29 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    if ( !*(_DWORD *)(v30 - 12) )
      j_Potion::getPotion((Potion *)&v25, v6);
      j_Potion::getPrefix((Potion *)&v27, v25);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v30, &v27);
      v12 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v27 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v13 = v26;
      if ( v26 )
        v14 = (unsigned int *)(v26 + 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 == 1 )
          v16 = (unsigned int *)(v13 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    v18 = *(_DWORD *)(v30 - 12);
    if ( !v18 )
      sub_21E8190((void **)&v30, "empty", (_BYTE *)5);
      v18 = *(_DWORD *)(v30 - 12);
    v24 = &unk_28898CC;
    sub_21E6FCC((const void **)&v24, v18 + 20);
    sub_21E7408((const void **)&v24, "tipped_arrow.effect.", 0x14u);
    sub_21E72F0((const void **)&v24, (const void **)&v30);
    *(_DWORD *)v3 = v24;
    v19 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v30 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  }
  else
    j_Item::buildDescriptionId(v3, v4);
}


signed int __fastcall ArrowItem::dispense(ArrowItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  ArrowItem *v6; // r8@1
  BlockSource *v7; // r4@1
  int v8; // r9@1
  Container *v9; // r6@1
  Level *v17; // r0@1
  Spawner *v18; // r5@1
  Entity *v19; // r5@1
  void *v20; // r0@1
  void *v21; // r0@2
  void *v22; // r0@3
  signed int v23; // r7@4
  const ItemInstance *v24; // r0@5
  Player *v25; // r0@5
  Player *v26; // r0@5
  int v27; // r2@5
  int v28; // r3@5
  __int64 v29; // r2@5
  unsigned int *v31; // r2@7
  signed int v32; // r1@9
  unsigned int *v33; // r2@11
  signed int v34; // r1@13
  unsigned int *v35; // r2@15
  signed int v36; // r1@17
  int v37; // [sp+8h] [bp-48h]@5
  int v38; // [sp+Ch] [bp-44h]@5
  int v39; // [sp+10h] [bp-40h]@5
  int v40; // [sp+14h] [bp-3Ch]@1
  int v41; // [sp+18h] [bp-38h]@2
  int v42; // [sp+1Ch] [bp-34h]@1
  float v43; // [sp+20h] [bp-30h]@1

  v6 = this;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  _R0 = &Facing::STEP_Y[a6];
  __asm
  {
    VLDR            S2, =0.1
    VLDR            S0, [R0]
    VCVT.F32.S32    S0, S0
  }
  _R0 = &Facing::STEP_X[a6];
  __asm { VLDR            S4, [R0] }
  _R0 = &Facing::STEP_Z[a6];
    VLDR            S6, [R0]
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S2
    VCVT.F32.S32    S2, S6
    VSTR            S4, [SP,#0x50+var_30]
    VSTR            S0, [SP,#0x50+var_2C]
    VSTR            S2, [SP,#0x50+var_28]
  v17 = (Level *)j_BlockSource::getLevel(a2);
  v18 = (Spawner *)j_Level::getSpawner(v17);
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v40, 4194384);
  v19 = j_Spawner::spawnProjectile(v18, v7, (const EntityDefinitionIdentifier *)&v40, 0, a5, (const Vec3 *)&v43);
  v20 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v41 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v40 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = 0;
  if ( v19 )
    v24 = (const ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)v9 + 16))(v9, v8);
    j_ArrowItem::applyEffect(v6, v19, v24);
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v9 + 36))(v9, v8, 1);
    v25 = (Player *)j_BlockSource::getLevel(v7);
    j_Level::broadcastLevelEvent(v25, 1000, __PAIR__(1000, (unsigned int)a5), 0);
    v26 = (Player *)j_BlockSource::getLevel(v7);
    v27 = *((_DWORD *)a5 + 1);
    v28 = *((_DWORD *)a5 + 2);
    v37 = *(_DWORD *)a5;
    v38 = v27;
    v39 = v28;
    HIDWORD(v29) = 78642;
    LODWORD(v29) = &v37;
    j_Level::broadcastLevelEvent(v26, 1002, v29, 0);
    v23 = 1;
  return v23;
}


void __fastcall ArrowItem::~ArrowItem(ArrowItem *this)
{
  ArrowItem::~ArrowItem(this);
}


void __fastcall ArrowItem::buildEffectDescriptionName(ArrowItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ArrowItem::buildEffectDescriptionName(this, a2, a3);
}


int __fastcall ArrowItem::getIcon(ArrowItem *this, int a2, int a3, bool a4)
{
  ArrowItem *v4; // r4@1
  int v5; // r0@2
  int v6; // r5@2
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  int result; // r0@7
  unsigned int *v11; // r6@10
  unsigned int v12; // r0@12
  Potion *v13; // [sp+0h] [bp-18h]@2
  int v14; // [sp+4h] [bp-14h]@2

  v4 = this;
  if ( a2 )
  {
    j_Potion::getPotion((Potion *)&v13, a2 - 1);
    v5 = j_Potion::getMobEffectId(v13);
    v6 = v14;
    v7 = (int)v4 + 32 * v5 + 116;
    if ( v14 )
    {
      v8 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v11 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    result = v7;
  }
  else
    result = j_j_j__ZNK4Item7getIconEiib_0(this, 0, a3, a4);
  return result;
}


signed int __fastcall ArrowItem::applyEffect(ArrowItem *this, Arrow *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r5@1
  Arrow *v4; // r4@1
  signed int result; // r0@1
  bool v6; // zf@1
  int v7; // r0@8
  int v8; // r1@8
  int (__fastcall *v9)(Arrow *, int); // r6@8
  int v10; // r0@8
  int v11[3]; // [sp+8h] [bp-20h]@8
  int v12; // [sp+14h] [bp-14h]@8

  v3 = a3;
  v4 = a2;
  result = *((_BYTE *)a3 + 15);
  v6 = result == 0;
  if ( *((_BYTE *)a3 + 15) )
  {
    result = *(_DWORD *)a3;
    v6 = *(_DWORD *)a3 == 0;
  }
  if ( !v6 )
    result = j_ItemInstance::isNull(a3);
    if ( !result )
    {
      result = *((_BYTE *)v3 + 14);
      if ( *((_BYTE *)v3 + 14) )
      {
        result = Item::mArrow;
        if ( *(_DWORD *)v3 == Item::mArrow )
        {
          result = j_ItemInstance::getAuxValue(v3);
          if ( result >= 1 )
          {
            v7 = j_ItemInstance::getAuxValue(v3);
            j_ArrowItem::getMobEffect((ArrowItem *)v11, v8, v7 - 1);
            j_Arrow::addMobEffect((int)v4, v11[0], v11[1], v11[2], v12);
            v9 = *(int (__fastcall **)(Arrow *, int))(*(_DWORD *)v4 + 676);
            v10 = j_ItemInstance::getAuxValue(v3);
            result = v9(v4, v10);
          }
        }
      }
    }
  return result;
}


int __fastcall ArrowItem::setIcon(int a1, int **a2, int a3)
{
  char *v3; // r4@1
  int v4; // r9@1
  unsigned int *v5; // r2@2
  signed int v6; // r1@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  char *v9; // r1@18
  int v10; // r2@18
  int v11; // r3@18
  int v12; // r4@18
  int v13; // r5@18
  int v14; // r6@18
  int v15; // r7@18
  int v16; // r8@18
  int v17; // r0@18
  void *v18; // r0@18
  void *v19; // r0@19
  int v21; // [sp+Ch] [bp-54h]@1
  int v22; // [sp+14h] [bp-4Ch]@6
  char v23; // [sp+18h] [bp-48h]@1
  int v24; // [sp+30h] [bp-30h]@2
  int v25; // [sp+34h] [bp-2Ch]@18

  v21 = a1;
  j_Item::setIcon(a1, a2, a3);
  v3 = &v23;
  v4 = 0;
  do
  {
    sub_21E94B4((void **)&v22, "tipped_arrow");
    j_Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)v3, (int **)&v22, v4);
    v9 = v3;
    v10 = *(_DWORD *)v3;
    v11 = *((_DWORD *)v3 + 1);
    v12 = *((_DWORD *)v3 + 2);
    v13 = *((_DWORD *)v9 + 3);
    v14 = *((_DWORD *)v9 + 4);
    v15 = *((_DWORD *)v9 + 5);
    v16 = v21 + 32 * v4;
    v17 = v16 + 116;
    *(_DWORD *)v17 = v10;
    *(_DWORD *)(v17 + 4) = v11;
    *(_DWORD *)(v17 + 8) = v12;
    *(_DWORD *)(v17 + 12) = v13;
    *(_DWORD *)(v17 + 16) = v14;
    *(_DWORD *)(v17 + 20) = v15;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v16 + 140),
      &v24);
    *(_DWORD *)(v16 + 144) = v25;
    v18 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v24 - 4);
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
        j_j_j_j__ZdlPv_9(v18);
    }
    v3 = &v23;
    v19 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v22 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    ++v4;
  }
  while ( v4 < 26 );
  return v21;
}


Item *__fastcall ArrowItem::~ArrowItem(ArrowItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 948;
  *(_DWORD *)this = &off_271FE6C;
  v3 = (char *)this + 116;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  j_Item::~Item(v1);
  return v1;
}


void __fastcall ArrowItem::~ArrowItem(ArrowItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 948;
  *(_DWORD *)this = &off_271FE6C;
  v3 = (char *)this + 116;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  j_Item::~Item(v1);
  j_operator delete((void *)v1);
}
