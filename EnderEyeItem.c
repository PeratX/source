

ItemInstance *__fastcall EnderEyeItem::use(EnderEyeItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r5@1
  ItemInstance *v4; // r9@1
  Level *v5; // r8@1
  void (__fastcall *v6)(Entity *, signed int, char *, signed int); // r4@1
  int v7; // r0@2
  Dimension *v8; // r0@2
  int v9; // r6@2
  int (__fastcall *v10)(int, signed int, char *, char *); // r7@2
  int v11; // r0@2
  void *v17; // r0@3
  void *v18; // r0@4
  void *v19; // r0@5
  void (__fastcall *v20)(Level *, int, EyeOfEnder **); // r4@6
  int v21; // r1@6
  EyeOfEnder *v22; // r0@6
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  unsigned int *v26; // r2@15
  signed int v27; // r1@17
  unsigned int *v28; // r2@19
  signed int v29; // r1@21
  EyeOfEnder *v30; // [sp+8h] [bp-68h]@6
  float v31; // [sp+Ch] [bp-64h]@3
  int v32; // [sp+18h] [bp-58h]@3
  int v33; // [sp+1Ch] [bp-54h]@4
  int v34; // [sp+20h] [bp-50h]@3
  EyeOfEnder *v35; // [sp+24h] [bp-4Ch]@3
  char v36; // [sp+28h] [bp-48h]@2
  char v37; // [sp+34h] [bp-3Ch]@2
  char v38; // [sp+40h] [bp-30h]@1

  v3 = a3;
  v4 = a2;
  (*(void (__fastcall **)(Player *))(*(_DWORD *)a3 + 928))(a3);
  v5 = (Level *)j_Entity::getLevel(v3);
  j_MinecraftEventing::fireEventItemUsed((int)v3, v4, 4);
  v6 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
  j_Entity::getAttachPos((AABB *)&v38, (int)v3, 4, 0);
  v6(v3, 39, &v38, -1);
  if ( !j_Level::isClientSide(v5) )
  {
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    j_BlockPos::BlockPos((int)&v37, v7);
    v8 = (Dimension *)j_Entity::getDimension(v3);
    v9 = j_Dimension::getWorldGenerator(v8);
    v10 = *(int (__fastcall **)(int, signed int, char *, char *))(*(_DWORD *)v9 + 12);
    v11 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    j_BlockPos::BlockPos((int)&v36, v11);
    if ( v10(v9, 5, &v36, &v37) == 1 )
    {
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v32, 70);
      _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
      __asm
      {
        VMOV.F32        S0, #0.5
        VLDR            S2, [R0]
        VLDR            S4, [R0,#4]
        VLDR            S6, [R0,#8]
        VADD.F32        S2, S2, S0
        VADD.F32        S4, S4, S0
        VADD.F32        S0, S6, S0
        VSTR            S2, [SP,#0x70+var_64]
        VSTR            S4, [SP,#0x70+var_60]
        VSTR            S0, [SP,#0x70+var_5C]
      }
      j_EntityFactory::createSpawnedEntity(&v35, (const void **)&v32, 0, (int)&v31, &Vec2::ZERO);
      v17 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v33 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v32 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      j_EyeOfEnder::signalTo(v35, v3, (BlockPos *)&v37);
      v20 = *(void (__fastcall **)(Level *, int, EyeOfEnder **))(*(_DWORD *)v5 + 44);
      v21 = j_Entity::getRegion(v3);
      v22 = v35;
      v35 = 0;
      v30 = v22;
      v20(v5, v21, &v30);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 32))();
      v30 = 0;
      if ( v35 )
        (*(void (**)(void))(*(_DWORD *)v35 + 32))();
    }
  }
  (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v3 + 612))(v3, v4);
  return v4;
}


_DWORD *__fastcall EnderEyeItem::EnderEyeItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Item::Item(a1, a2, a3);
  *result = &off_2720FC4;
  return result;
}


void __fastcall EnderEyeItem::~EnderEyeItem(EnderEyeItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall EnderEyeItem::isThrowable(EnderEyeItem *this)
{
  return 1;
}


void __fastcall EnderEyeItem::~EnderEyeItem(EnderEyeItem *this)
{
  EnderEyeItem::~EnderEyeItem(this);
}
