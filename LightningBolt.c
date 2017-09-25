

int __fastcall LightningBolt::_shouldSetOnFire(LightningBolt *this)
{
  LightningBolt *v1; // r5@1
  BlockSource *v2; // r4@1
  Level *v3; // r0@2
  Level *v4; // r0@4
  Level *v5; // r0@5
  unsigned __int64 *v6; // r0@5
  int result; // r0@5
  char v8; // [sp+4h] [bp-1Ch]@3

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  if ( !*((_BYTE *)v1 + 3424)
    || (v3 = (Level *)BlockSource::getLevel(v2), Level::isClientSide(v3))
    || (BlockPos::BlockPos((int)&v8, (int)v1 + 72), BlockSource::hasChunksAt(v2, (const BlockPos *)&v8, 10) != 1)
    || (v4 = (Level *)BlockSource::getLevel(v2), Level::getDifficulty(v4) < 2) )
  {
    result = 0;
  }
  else
    v5 = (Level *)BlockSource::getLevel(v2);
    v6 = (unsigned __int64 *)Level::getGameRules(v5);
    result = GameRules::getBool(v6, (int **)&GameRules::DO_FIRE_TICK);
  return result;
}


signed int __fastcall LightningBolt::shouldAlwaysRender(LightningBolt *this)
{
  return 1;
}


void __fastcall LightningBolt::~LightningBolt(LightningBolt *this)
{
  LightningBolt::~LightningBolt(this);
}


signed int __fastcall LightningBolt::getEntityTypeId(LightningBolt *this)
{
  return 93;
}


unsigned int __fastcall LightningBolt::reloadHardcoded(Entity *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@1
  Level *v4; // r0@1
  char *v5; // r0@1
  unsigned int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 854) = 2;
  v2 = (Level *)Entity::getLevel(this);
  v3 = Level::getRandom(v2);
  *((_DWORD *)v1 + 853) = Random::_genRandInt32((Random *)v3) >> 1;
  v4 = (Level *)Entity::getLevel(v1);
  v5 = Level::getRandom(v4);
  result = Random::_genRandInt32((Random *)v5) % 3 + 1;
  *((_DWORD *)v1 + 855) = result;
  return result;
}


void __fastcall LightningBolt::normalTick(LightningBolt *this)
{
  BlockSource *v2; // r9@1
  signed int v3; // r4@1
  int v4; // r0@3
  int *v5; // r0@3
  signed int v6; // r6@6
  Level *v7; // r0@7
  char *v8; // r0@7
  unsigned int v9; // r4@7
  Level *v10; // r0@7
  char *v11; // r0@7
  unsigned int v12; // r7@7
  Level *v13; // r0@7
  char *v14; // r0@7
  unsigned int v15; // r0@7
  int *v16; // r0@7
  int v17; // r0@12
  Level *v18; // r0@14
  char *v19; // r0@14
  int v20; // r0@15
  Level *v21; // r0@15
  char *v22; // r0@15
  int *v23; // r0@16
  Dimension *v24; // r0@22
  Weather *v25; // r0@22
  Level *v26; // r0@22
  char *v33; // r0@24
  char *v34; // r6@24
  _DWORD *v35; // r9@24
  int v36; // r1@24 OVERLAPPED
  int v37; // r2@24 OVERLAPPED
  signed int v38; // r0@24
  _DWORD *v39; // r0@26
  signed int v40; // r6@27
  unsigned int v41; // r7@30
  unsigned int v42; // r4@30
  Entity *v43; // r6@31
  int v44; // r0@32
  int v45; // [sp+0h] [bp-88h]@0
  int v46; // [sp+4h] [bp-84h]@0
  int v47; // [sp+8h] [bp-80h]@0
  char v48; // [sp+18h] [bp-70h]@24
  char v49; // [sp+34h] [bp-54h]@18
  char v50; // [sp+38h] [bp-50h]@9
  unsigned int v51; // [sp+3Ch] [bp-4Ch]@7
  unsigned int v52; // [sp+40h] [bp-48h]@7
  unsigned int v53; // [sp+44h] [bp-44h]@7
  char v54; // [sp+48h] [bp-40h]@5
  char v55; // [sp+4Ch] [bp-3Ch]@3
  char v56; // [sp+58h] [bp-30h]@1
  int v57; // [sp+5Ch] [bp-2Ch]@7
  int v58; // [sp+60h] [bp-28h]@7

  _R5 = this;
  Entity::normalTick(this);
  v2 = (BlockSource *)Entity::getRegion(_R5);
  BlockPos::BlockPos((int)&v56, (int)_R5 + 72);
  v3 = *((_DWORD *)_R5 + 854);
  if ( v3 == 2 )
  {
    (*(void (__fastcall **)(LightningBolt *, signed int, char *, signed int))(*(_DWORD *)_R5 + 556))(
      _R5,
      45,
      (char *)_R5 + 72,
      -1);
    v45 = 0;
      46,
    if ( LightningBolt::_shouldSetOnFire(_R5) == 1 )
    {
      v4 = (*(int (__cdecl **)(LightningBolt *))(*(_DWORD *)_R5 + 52))(_R5);
      BlockPos::BlockPos((int)&v55, v4);
      v5 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v55);
      if ( Material::isType(v5, 0) == 1
        && (*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mFire + 224))(Block::mFire) == 1 )
      {
        v54 = *(_BYTE *)(Block::mFire + 4);
        BlockSource::setBlock((int)v2, (BlockPos *)&v56, &v54, 2);
      }
      v6 = 4;
      do
        v7 = (Level *)BlockSource::getLevel(v2);
        v8 = Level::getRandom(v7);
        v9 = Random::_genRandInt32((Random *)v8);
        v10 = (Level *)BlockSource::getLevel(v2);
        v11 = Level::getRandom(v10);
        v12 = Random::_genRandInt32((Random *)v11);
        v13 = (Level *)BlockSource::getLevel(v2);
        v14 = Level::getRandom(v13);
        v15 = Random::_genRandInt32((Random *)v14);
        v51 = *(_DWORD *)&v56 + v9 % 3 - 1;
        v52 = v12 % 3 + v57 - 1;
        v53 = v15 % 3 + v58 - 1;
        v16 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v51);
        if ( Material::isType(v16, 0) == 1
          && (*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mFire + 224))(Block::mFire) == 1 )
        {
          v50 = *(_BYTE *)(Block::mFire + 4);
          BlockSource::setBlock((int)v2, (BlockPos *)&v56, &v50, 2);
        }
        --v6;
      while ( v6 );
    }
    v3 = *((_DWORD *)_R5 + 854);
  }
  v17 = v3 - 1;
  *((_DWORD *)_R5 + 854) = v3 - 1;
  if ( v3 <= 0 )
    if ( *((_DWORD *)_R5 + 855) )
      v18 = (Level *)BlockSource::getLevel(v2);
      v19 = Level::getRandom(v18);
      if ( v3 <= (signed int)(-3 - Random::_genRandInt32((Random *)v19) % 0xC) )
        v20 = *((_DWORD *)_R5 + 855);
        *((_DWORD *)_R5 + 854) = 1;
        *((_DWORD *)_R5 + 855) = v20 - 1;
        v21 = (Level *)BlockSource::getLevel(v2);
        v22 = Level::getRandom(v21);
        *((_DWORD *)_R5 + 853) = Random::_genRandInt32((Random *)v22) >> 1;
        if ( LightningBolt::_shouldSetOnFire(_R5) == 1 )
          v23 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v56);
          if ( Material::isType(v23, 0) == 1
            && (*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mFire + 224))(Block::mFire) == 1 )
          {
            v49 = *(_BYTE *)(Block::mFire + 4);
            BlockSource::setBlock((int)v2, *(int *)&v56, v57, v58, &v49, 2);
          }
    else
      (*(void (__fastcall **)(LightningBolt *))(*(_DWORD *)_R5 + 44))(_R5);
    v17 = *((_DWORD *)_R5 + 854);
  if ( v17 >= 0 )
    v24 = (Dimension *)BlockSource::getDimension(v2);
    v25 = (Weather *)Dimension::getWeather(v24);
    Weather::setSkyFlashTime(v25, 3);
    v26 = (Level *)Entity::getLevel(_R5);
    if ( !Level::isClientSide(v26) )
      if ( *((_BYTE *)_R5 + 3424) )
        __asm
          VMOV.F32        S0, #-3.0
          VLDR            S2, [R5,#0x48]
          VLDR            S4, [R5,#0x4C]
          VLDR            S6, [R5,#0x50]
          VADD.F32        S8, S2, S0
          VADD.F32        S10, S4, S0
          VADD.F32        S0, S6, S0
          VMOV            R1, S8
          VMOV            R2, S10
          VMOV            R3, S0
          VMOV.F32        S0, #3.0
          VMOV.F32        S8, #9.0
          VADD.F32        S6, S6, S0
          VADD.F32        S0, S2, S0
          VADD.F32        S4, S4, S8
          VSTR            S0, [SP,#0x88+var_88]
          VSTR            S4, [SP,#0x88+var_84]
          VSTR            S6, [SP,#0x88+var_80]
        AABB::AABB(COERCE_FLOAT(&v48), _R1, _R2, v45, v46, v47);
        v33 = BlockSource::fetchEntities(v2, _R5, (const AABB *)&v48);
        v34 = v33;
        v35 = 0;
        *(_QWORD *)&v36 = *(_QWORD *)v33;
        v38 = v37 - v36;
        if ( (v37 - v36) >> 2 )
          if ( (unsigned int)(v38 >> 2) >= 0x40000000 )
            sub_21E57F4();
          v39 = operator new(v38);
          *(_QWORD *)&v36 = *(_QWORD *)v34;
          v35 = v39;
        v40 = v37 - v36;
        if ( v37 != v36 )
          _aeabi_memmove4(v35, v36);
        if ( v40 >> 2 )
          v41 = v40 >> 2;
          v42 = 0;
          do
            v43 = (Entity *)v35[v42];
            if ( !Entity::getDamageSensorComponent((Entity *)v35[v42])
              || (v44 = Entity::getDamageSensorComponent(v43),
                  DamageSensorComponent::recordDamage(v44, (int)_R5, 2, 0, 0) == 1) )
            {
              (*(void (__fastcall **)(Entity *))(*(_DWORD *)v43 + 416))(v43);
            }
            ++v42;
          while ( v42 < v41 );
        else if ( !v35 )
          return;
        operator delete(v35);
}


int __fastcall LightningBolt::LightningBolt(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F1C70;
  *(_DWORD *)(v3 + 3412) = 0;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_BYTE *)(v3 + 3424) = 1;
  *(_DWORD *)(v3 + 248) = 47;
  Entity::setGlobal((Entity *)v3, 1);
  return v3;
}


int __fastcall LightningBolt::reloadHardcodedClient(int (***a1)(void))
{
  return (**a1)();
}


void __fastcall LightningBolt::normalTick(LightningBolt *this)
{
  LightningBolt::normalTick(this);
}


void __fastcall LightningBolt::~LightningBolt(LightningBolt *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}
