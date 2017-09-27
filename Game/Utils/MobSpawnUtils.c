

void __fastcall MobSpawnUtils::spawnPolarBearHerd(_QWORD *a1)
{
  _DWORD *v1; // r9@1
  __int64 v2; // r0@1
  unsigned int v3; // r5@1
  void **v4; // r4@2
  int *v5; // r2@2
  signed int v6; // r7@2
  int v7; // r10@4
  void **v8; // r6@5
  unsigned int v9; // r0@5
  void **v10; // r5@6
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int v23; // [sp+10h] [bp-50h]@1
  _DWORD *v24; // [sp+14h] [bp-4Ch]@1
  int v25; // [sp+1Ch] [bp-44h]@6
  int v26; // [sp+24h] [bp-3Ch]@2
  int v27; // [sp+2Ch] [bp-34h]@2
  int v28; // [sp+34h] [bp-2Ch]@6

  v1 = a1;
  v24 = a1;
  v2 = *a1;
  HIDWORD(v2) -= v2;
  v3 = SHIDWORD(v2) >> 2;
  v23 = SHIDWORD(v2) >> 2;
  if ( SHIDWORD(v2) >> 2 >= 2u )
  {
    v4 = (void **)&v27;
    v5 = &v26;
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v2 + 4 * v6);
      if ( v7 )
      {
        v8 = (void **)v5;
        v9 = Entity::isBaby(*(Entity **)(v2 + 4 * v6));
        v5 = (int *)v8;
        if ( !v9 )
        {
          sub_21E94B4((void **)&v28, "minecraft:adult");
          v10 = (void **)&v25;
          Entity::removeDefinitionGroup(v7, (int **)&v28);
          v11 = (void *)(v28 - 12);
          if ( (int *)(v28 - 12) != &dword_28898C0 )
          {
            v15 = (unsigned int *)(v28 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v10 = (void **)&v25;
            }
            else
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v11);
          }
          sub_21E94B4(v4, "minecraft:adult_wild");
          Entity::removeDefinitionGroup(v7, (int **)v4);
          v12 = (void *)(v27 - 12);
          if ( (int *)(v27 - 12) != &dword_28898C0 )
            v17 = (unsigned int *)(v27 - 4);
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
          sub_21E94B4(v8, "minecraft:baby");
          Entity::addDefinitionGroup(v7, (int **)v8);
          v1 = v24;
          v13 = (void *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v26 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          sub_21E94B4(v10, "minecraft:baby_wild");
          Entity::addDefinitionGroup(v7, (int **)v10);
          v14 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v25 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
          v3 = v23;
          v5 = (int *)v8;
          v4 = (void **)&v27;
        }
      }
      if ( ++v6 >= v3 )
        break;
      LODWORD(v2) = *v1;
    }
  }
}


void **__fastcall MobSpawnUtils::spawnZombie(MobSpawnUtils *this, Random *a2)
{
  void **v2; // r4@1
  int v3; // r1@2

  v2 = (void **)this;
  if ( Random::_genRandInt32(a2) % 5 )
    LOWORD(v3) = 2848;
  else
    LOWORD(v3) = 2860;
  HIWORD(v3) = 3;
  return EntityDefinitionIdentifier::EntityDefinitionIdentifier(v2, v3);
}


int __fastcall MobSpawnUtils::spawnHorseHerd(unsigned __int64 *a1, Random *a2)
{
  unsigned __int64 *v2; // r5@1
  Random *v3; // r8@1
  unsigned __int64 v4; // r0@1
  Entity **v5; // r4@2
  Entity **v6; // r6@2
  int v7; // r5@3
  unsigned int v8; // r7@6

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    LODWORD(v4) = Random::_genRandInt32(v3);
    v6 = (Entity **)(*v2 >> 32);
    v5 = (Entity **)*v2;
    if ( v5 != v6 )
    {
      v7 = (unsigned int)v4 % 7;
      do
      {
        LODWORD(v4) = *v5;
        if ( *v5 )
        {
          LODWORD(v4) = Entity::hasType(v4, 2118423);
          if ( (_DWORD)v4 == 1 )
          {
            v8 = Random::_genRandInt32(v3);
            Entity::setVariant(*v5, v7);
            LODWORD(v4) = Entity::setMarkVariant(*v5, v8 % 5);
          }
        }
        ++v5;
      }
      while ( v6 != v5 );
    }
  }
  return v4;
}
