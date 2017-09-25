

void __fastcall FishingRodItem::~FishingRodItem(FishingRodItem *this)
{
  FishingRodItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2721464;
  v2 = *((_DWORD *)this + 43);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 35);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_Item::~Item(v1);
  j_operator delete((void *)v1);
}


_BOOL4 __fastcall FishingRodItem::getAnimationFrameFor(FishingRodItem *this, Mob *a2, bool a3)
{
  return *((_DWORD *)a2 + 133) != 0;
}


signed int __fastcall FishingRodItem::getEnchantValue(FishingRodItem *this)
{
  return 1;
}


signed int __fastcall FishingRodItem::getEnchantSlot(FishingRodItem *this)
{
  return 4096;
}


int __fastcall FishingRodItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@1
  void *v10; // r0@1
  void *v11; // r0@2
  int v12; // r0@3
  int v13; // r2@3
  int v14; // r3@3
  int v15; // r4@3
  int v16; // r5@3
  int v17; // r7@3
  void *v18; // r0@3
  void *v19; // r0@4
  unsigned int *v21; // r2@6
  signed int v22; // r1@8
  unsigned int *v23; // r2@10
  signed int v24; // r1@12
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  unsigned int *v27; // r2@18
  signed int v28; // r1@20
  int v29; // [sp+4h] [bp-44h]@1
  char v30; // [sp+8h] [bp-40h]@1
  int v31; // [sp+Ch] [bp-3Ch]@1
  int v32; // [sp+10h] [bp-38h]@1
  int v33; // [sp+14h] [bp-34h]@1
  int v34; // [sp+18h] [bp-30h]@1
  int v35; // [sp+1Ch] [bp-2Ch]@1
  int v36; // [sp+20h] [bp-28h]@1
  int v37; // [sp+24h] [bp-24h]@1

  v3 = a1;
  j_Item::setIcon(a1, a2, a3);
  *(_DWORD *)(v3 + 12) = 2;
  sub_21E94B4((void **)&v29, "fishing_rod");
  j_Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)&v30, (int **)&v29, 0);
  v4 = v3 + 116;
  v5 = v31;
  v6 = v32;
  v7 = v33;
  v8 = v34;
  v9 = v35;
  *(_DWORD *)v4 = *(_DWORD *)&v30;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 140),
    &v36);
  *(_DWORD *)(v3 + 144) = v37;
  v10 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v29 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  j_Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)&v30, (int **)&v29, 1);
  v12 = v3 + 148;
  v13 = v31;
  v14 = v32;
  v15 = v33;
  v16 = v34;
  v17 = v35;
  *(_DWORD *)v12 = *(_DWORD *)&v30;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)(v12 + 16) = v16;
  *(_DWORD *)(v12 + 20) = v17;
    (int *)(v3 + 172),
  *(_DWORD *)(v3 + 176) = v37;
  v18 = (void *)(v36 - 12);
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v29 - 12);
    v27 = (unsigned int *)(v29 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  return v3;
}


int __fastcall FishingRodItem::FishingRodItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2721464;
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  *(_BYTE *)(v3 + 4) = 1;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 28))(v3, 384);
  *(_DWORD *)(v3 + 12) = 0;
  *(_BYTE *)(v3 + 16) = 0;
  return v3;
}


signed int __fastcall FishingRodItem::isHandEquipped(FishingRodItem *this)
{
  return 1;
}


signed int __fastcall FishingRodItem::isMirroredArt(FishingRodItem *this)
{
  return 1;
}


FishingRodItem *__fastcall FishingRodItem::~FishingRodItem(FishingRodItem *this)
{
  FishingRodItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2721464;
  v2 = *((_DWORD *)this + 43);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 35);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_Item::~Item(v1);
  return v1;
}


void __fastcall FishingRodItem::getInteractText(FishingRodItem *this, const Player *a2)
{
  FishingRodItem::getInteractText(this, a2);
}


char *__fastcall FishingRodItem::getIcon(FishingRodItem *this, int a2, int a3, bool a4)
{
  return (char *)this + 32 * a3 + 116;
}


void __fastcall FishingRodItem::~FishingRodItem(FishingRodItem *this)
{
  FishingRodItem::~FishingRodItem(this);
}


void __fastcall FishingRodItem::getInteractText(FishingRodItem *this, const Player *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_21E94B4((void **)&v6, "action.interact.fishing");
  j_I18n::get(v2, (int **)&v6);
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


ItemInstance *__fastcall FishingRodItem::use(FishingRodItem *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v4; // r9@1
  FishingHook *v5; // r0@1
  int v6; // r0@2
  Level *v7; // r0@3
  Level *v8; // r0@4
  Spawner *v9; // r8@4
  BlockSource *v10; // r7@4
  Entity *v15; // r6@4
  void *v16; // r0@4
  void *v17; // r0@5
  void *v18; // r0@6
  void (__fastcall *v19)(Player *, signed int, char *, signed int); // r7@9
  unsigned int *v21; // r2@11
  signed int v22; // r1@13
  unsigned int *v23; // r2@15
  signed int v24; // r1@17
  unsigned int *v25; // r2@19
  signed int v26; // r1@21
  char v27; // [sp+Ch] [bp-64h]@9
  char v28; // [sp+18h] [bp-58h]@4
  char v29; // [sp+20h] [bp-50h]@4
  float v30; // [sp+2Ch] [bp-44h]@4
  float v33; // [sp+38h] [bp-38h]@4
  int v34; // [sp+44h] [bp-2Ch]@4
  int v35; // [sp+48h] [bp-28h]@5
  int v36; // [sp+4Ch] [bp-24h]@4

  _R5 = a3;
  v4 = a2;
  v5 = (FishingHook *)*((_DWORD *)a3 + 133);
  if ( v5 )
  {
    v6 = j_FishingHook::retrieve(v5);
    j_ItemInstance::hurtAndBreak(v4, v6, _R5);
    *((_DWORD *)_R5 + 133) = 0;
  }
  else
    v7 = (Level *)j_Entity::getLevel(a3);
    if ( !j_Level::isClientSide(v7) )
    {
      v8 = (Level *)j_Entity::getLevel(_R5);
      v9 = (Spawner *)j_Level::getSpawner(v8);
      v10 = (BlockSource *)j_Entity::getRegion(_R5);
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v34, 77);
      j_Entity::getAttachPos((AABB *)&v30, (int)_R5, 4, 0);
      __asm
      {
        VLDR            S0, [SP,#0x70+var_44]
        VLDR            S6, [R5,#0x6C]
        VLDR            S2, [SP,#0x70+var_40]
        VLDR            S8, [R5,#0x70]
        VADD.F32        S0, S6, S0
        VLDR            S10, [R5,#0x74]
        VLDR            S4, [SP,#0x70+var_3C]
        VADD.F32        S2, S8, S2
        VADD.F32        S4, S10, S4
        VSTR            S0, [SP,#0x70+var_38]
        VSTR            S2, [SP,#0x70+var_34]
        VSTR            S4, [SP,#0x70+var_30]
      }
      j_Entity::getRotation((Entity *)&v28, (int)_R5);
      j_Vec3::directionFromRotation((int)&v29, COERCE_FLOAT(&v28));
      v15 = j_Spawner::spawnProjectile(
              v9,
              v10,
              (const EntityDefinitionIdentifier *)&v34,
              _R5,
              (const Vec3 *)&v33,
              (const Vec3 *)&v29);
      v16 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v35 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v34 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      if ( v15 )
        *((_DWORD *)_R5 + 133) = v15;
    }
    v19 = *(void (__fastcall **)(Player *, signed int, char *, signed int))(*(_DWORD *)_R5 + 556);
    j_Entity::getAttachPos((AABB *)&v27, (int)_R5, 4, 0);
    v19(_R5, 39, &v27, -1);
  (*(void (__fastcall **)(Player *))(*(_DWORD *)_R5 + 928))(_R5);
  return v4;
}


signed int __fastcall FishingRodItem::requiresInteract(FishingRodItem *this)
{
  return 1;
}
