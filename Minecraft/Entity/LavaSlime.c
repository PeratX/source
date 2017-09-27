

void __fastcall LavaSlime::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r8@1
  void (__fastcall *v5)(int, signed int); // r4@3
  unsigned int v6; // r0@3
  _BOOL4 v7; // r4@4
  void *v8; // r0@4
  unsigned int v9; // r10@6
  unsigned __int64 v10; // kr08_8@6
  unsigned int v11; // r4@6
  int v12; // r7@6
  int v13; // r8@7
  _DWORD *v14; // r9@7
  int v15; // r5@7
  _DWORD *v16; // r1@9
  size_t v17; // r2@9
  Slime *v18; // r6@13
  int v19; // r0@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int v24; // [sp+4h] [bp-44h]@7
  void *s1; // [sp+Ch] [bp-3Ch]@6
  int v26; // [sp+14h] [bp-34h]@4

  v3 = a3;
  v4 = a1;
  if ( a2 == 3 )
  {
    sub_21E94B4((void **)&v26, "other");
    v7 = VariantParameterList::hasParameter(v3, (int **)&v26);
    v8 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( v7 == 1 )
      sub_21E94B4(&s1, "other");
      v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v10 = *v3;
      v11 = v9 % (*v3 >> 32);
      v12 = *(_DWORD *)(*v3 + 4 * v11);
      if ( v12 )
        v24 = v4;
        v13 = *(_DWORD *)v12;
        v14 = s1;
        v15 = *(_DWORD *)(*(_DWORD *)v12 + 32);
        while ( 1 )
        {
          if ( v15 == v9 )
          {
            v16 = *(_DWORD **)(v13 + 8);
            v17 = *(v14 - 3);
            if ( v17 == *(v16 - 3) && !memcmp(v14, v16, v17) )
              break;
          }
          if ( *(_DWORD *)v13 )
            v15 = *(_DWORD *)(v10 + 32);
            v12 = v13;
            v13 = *(_DWORD *)v13;
            if ( *(_DWORD *)(v10 + 32) % HIDWORD(v10) == v11 )
              continue;
          v18 = 0;
          v4 = v24;
          goto LABEL_15;
        }
        v4 = v24;
        if ( v12 )
          if ( *(_DWORD *)v12 )
            v18 = *(Slime **)(*(_DWORD *)v12 + 24);
          else
            v18 = 0;
        else
        v18 = 0;
LABEL_15:
      if ( v14 - 3 != &dword_28898C0 )
        v22 = v14 - 1;
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v14 - 3);
      if ( v18 && Entity::hasType((int)v18, 2858) == 1 )
        v19 = Slime::getSlimeSize(v18);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 1208))(v4, v19 / 2);
  }
  else if ( a2 == 2 )
    v5 = *(void (__fastcall **)(int, signed int))(*(_DWORD *)a1 + 1208);
    v6 = Random::_genRandInt32((Random *)(a1 + 552));
    v5(v4, 1 << v6 % 3);
}


signed int __fastcall LavaSlime::doPlayLandSound(LavaSlime *this)
{
  return 1;
}


signed int __fastcall LavaSlime::getBrightness(LavaSlime *this, float a2)
{
  return 1065353216;
}


int __fastcall LavaSlime::jumpFromGround(LavaSlime *this)
{
  int result; // r0@1

  result = Slime::getSlimeSize(this);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.1
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.42
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x70]
  }
  return result;
}


char *__fastcall LavaSlime::decreaseSquish(LavaSlime *this)
{
  char *result; // r0@1

  result = (char *)this + 4304;
  __asm
  {
    VLDR            S0, =0.9
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0]
  }
  return result;
}


int __fastcall LavaSlime::createChild(LavaSlime *this, int a2)
{
  Entity *v2; // r5@1
  LavaSlime *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  int result; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+Ch] [bp-1Ch]@1
  int v21; // [sp+10h] [bp-18h]@1

  v2 = (Entity *)a2;
  v3 = this;
  EntityTypeToString((void **)&v17, 0xB2Au, 1);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v18, &v17);
  EntityFactory::createBornEntity((EntityFactory *)&v21, (const EntityDefinitionIdentifier *)&v18, v2);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
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
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  result = v21;
  *(_DWORD *)v3 = v21;
  return result;
}


int __fastcall LavaSlime::checkSpawnRules(LavaSlime *this, bool a2)
{
  const AABB *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r6@1

  v2 = (LavaSlime *)((char *)this + 264);
  v3 = (BlockSource *)Entity::getRegion(this);
  v4 = 0;
  if ( BlockSource::isUnobstructedByEntities(v3, v2, 0) == 1 )
    v4 = BlockSource::containsAnyLiquid(v3, v2) ^ 1;
  return v4;
}


void __fastcall LavaSlime::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  LavaSlime::reloadHardcoded(a1, a2, a3);
}


signed int __fastcall LavaSlime::getEntityTypeId(LavaSlime *this)
{
  return 2858;
}


signed int __fastcall LavaSlime::canDealDamage(LavaSlime *this)
{
  return 1;
}


void __fastcall LavaSlime::~LavaSlime(LavaSlime *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LavaSlime::isInLava(LavaSlime *this)
{
  return 0;
}


int __fastcall LavaSlime::LavaSlime(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Slime::Slime(a1, a2, a3);
  *(_DWORD *)result = &off_26F7F20;
  *(_DWORD *)(result + 248) = 18;
  *(_DWORD *)(result + 4308) = 7;
  return result;
}


void __fastcall LavaSlime::~LavaSlime(LavaSlime *this)
{
  LavaSlime::~LavaSlime(this);
}


int __fastcall LavaSlime::isOnFire(LavaSlime *this)
{
  return 0;
}
