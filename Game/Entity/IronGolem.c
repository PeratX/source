

void __fastcall IronGolem::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  MinecraftEventing *v3; // r4@1
  void (__fastcall *v4)(MinecraftEventing *, signed int, char *, signed int); // r6@4
  signed int v5; // r1@5
  char v6; // [sp+8h] [bp-20h]@4

  v3 = a1;
  if ( a2 == 20 )
  {
    v5 = 0;
LABEL_7:
    *((_DWORD *)a1 + 1077) = v5;
    return;
  }
  if ( a2 == 19 )
    v5 = 400;
    goto LABEL_7;
  if ( a2 == 4 )
    *((_DWORD *)a1 + 1076) = 10;
    v4 = *(void (__fastcall **)(MinecraftEventing *, signed int, char *, signed int))(*(_DWORD *)a1 + 556);
    Entity::getAttachPos((AABB *)&v6, (int)a1, 2, 0);
    v4(v3, 39, &v6, -1);
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi(a1, a2, a3);
}


int __fastcall IronGolem::IronGolem(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26EE220;
  *(_DWORD *)(v3 + 4308) = 0;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 4300) = 0;
  *(_DWORD *)(v3 + 4296) = 0;
  *(_DWORD *)(v3 + 4292) = 0;
  *(_DWORD *)(v3 + 248) = 48;
  Entity::setPersistent((Entity *)v3);
  *(_DWORD *)(v3 + 3984) = 0x40000000;
  return v3;
}


int __fastcall IronGolem::offerFlower(IronGolem *this, int a2)
{
  char v2; // r5@1
  IronGolem *v3; // r4@1
  int v4; // r0@3

  v2 = 20;
  v3 = this;
  if ( a2 )
    v2 = 19;
  v4 = Entity::getLevel(this);
  return j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v4, (int)v3, v2, 0);
}


int __fastcall IronGolem::getShadowRadius(IronGolem *this)
{
  Entity *v1; // r4@1
  unsigned int v7; // r0@1
  int result; // r0@3

  v1 = this;
  _R0 = Entity::getShadowRadius(this);
  __asm
  {
    VMOV            S20, R0
    VMOV.F32        S16, #1.0
    VMOV.F32        S18, #0.5
  }
  v7 = Entity::isBaby(v1);
  __asm { VMUL.F32        S0, S20, S18 }
  if ( v7 )
    __asm { VMOVNE.F32      S16, S18 }
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


signed int __fastcall IronGolem::useNewAi(IronGolem *this)
{
  return 1;
}


Entity *__fastcall IronGolem::~IronGolem(IronGolem *this)
{
  Mob *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26EE220;
  v2 = *((_DWORD *)this + 1075);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return j_j_j__ZN3MobD2Ev_0(v1);
}


int __fastcall IronGolem::doHurtTarget(IronGolem *this, Entity *a2)
{
  IronGolem *v3; // r4@1
  int v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@1
  void (__fastcall *v11)(IronGolem *, signed int, char *, signed int); // r5@3
  char v13; // [sp+4h] [bp-4Ch]@3
  char v14; // [sp+10h] [bp-40h]@1

  _R5 = a2;
  v3 = this;
  *((_DWORD *)this + 1076) = 10;
  v4 = Entity::getLevel(this);
  Level::broadcastEntityEvent(v4, (int)v3, 4, 0);
  EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v14, v3, 2);
  v5 = Random::_genRandInt32((IronGolem *)((char *)v3 + 552));
  v6 = Entity::hurt(_R5, (const EntityDamageSource *)&v14, v5 % 0xF + 7, 1, 0);
  if ( v6 == 1 )
  {
    __asm
    {
      VLDREQ          S0, =0.4
      VLDREQ          S2, [R5,#0x70]
      VADDEQ.F32      S0, S2, S0
      VSTREQ          S0, [R5,#0x70]
    }
  }
  v11 = *(void (__fastcall **)(IronGolem *, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
  Entity::getAttachPos((AABB *)&v13, (int)v3, 2, 0);
  v11(v3, 39, &v13, -1);
  EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v14);
  return v6;
}


void __fastcall IronGolem::~IronGolem(IronGolem *this)
{
  Mob *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26EE220;
  v2 = *((_DWORD *)this + 1075);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  Mob::~Mob(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall IronGolem::~IronGolem(IronGolem *this)
{
  IronGolem::~IronGolem(this);
}


signed int __fastcall IronGolem::getEntityTypeId(IronGolem *this)
{
  return 788;
}


int __fastcall IronGolem::_serverAiMobStep(IronGolem *this)
{
  IronGolem *v1; // r4@1
  signed int v2; // r0@1
  int v3; // r1@1
  Level *v5; // r0@3
  char *v6; // r0@3
  int v7; // r5@3
  void (__fastcall *v8)(int *, int, char *, signed int); // r7@3
  int v9; // r5@3
  unsigned int *v10; // r0@4
  unsigned int v11; // r1@6
  int *v12; // r7@9
  int v13; // r0@9
  unsigned int *v14; // r2@10
  unsigned int v15; // r1@12
  int v16; // r0@17
  unsigned int *v17; // r2@18
  unsigned int v18; // r1@20
  unsigned int *v20; // r0@29
  unsigned int v21; // r2@29
  unsigned int v22; // r3@33
  unsigned int v23; // r7@34
  unsigned int v24; // r2@35
  Village *v25; // r6@35
  unsigned int *v26; // r7@44
  unsigned int v27; // r0@46
  char *v28; // r5@51
  char v34; // [sp+4h] [bp-2Ch]@3
  int v35; // [sp+10h] [bp-20h]@3
  int v36; // [sp+14h] [bp-1Ch]@3

  v1 = this;
  v2 = 4292;
  v3 = *((_DWORD *)v1 + 1073);
  _VF = __OFSUB__(v3--, 1);
  *((_DWORD *)v1 + 1073) = v3;
  if ( (unsigned __int8)((v3 < 0) ^ _VF) | (v3 == 0) )
  {
    *(_DWORD *)((char *)v1 + v2) = Random::_genRandInt32((IronGolem *)((char *)v1 + 552)) % 0x32 + 70;
    v5 = (Level *)Entity::getLevel(v1);
    v6 = Level::getVillages(v5);
    v7 = *(_DWORD *)v6;
    v8 = *(void (__fastcall **)(int *, int, char *, signed int))(**(_DWORD **)v6 + 28);
    BlockPos::BlockPos((int)&v34, (int)v1 + 72);
    v8(&v35, v7, &v34, 32);
    *((_DWORD *)v1 + 1074) = v35;
    v9 = v36;
    if ( v36 )
    {
      v10 = (unsigned int *)(v36 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    }
    v12 = (int *)((char *)v1 + 4300);
    v13 = *((_DWORD *)v1 + 1075);
    if ( v13 )
      v14 = (unsigned int *)(v13 + 8);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (**)(void))(*(_DWORD *)v13 + 12))();
    *v12 = v9;
    v16 = v36;
      v17 = (unsigned int *)(v36 + 8);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (**)(void))(*(_DWORD *)v16 + 12))();
      v9 = *v12;
    _ZF = v9 == 0;
    if ( v9 )
      _ZF = *(_DWORD *)(v9 + 4) == 0;
    if ( _ZF )
      Entity::clearRestriction(v1);
    else
      v20 = (unsigned int *)(v9 + 4);
      v21 = *(_DWORD *)(v9 + 4);
      do
        while ( 1 )
        {
          if ( !v21 )
          {
            v25 = 0;
            goto LABEL_51;
          }
          __dmb();
          v22 = __ldrex(v20);
          if ( v22 == v21 )
            break;
          __clrex();
          v21 = v22;
        }
        v23 = __strex(v21 + 1, v20);
        v21 = v22;
      while ( v23 );
      __dmb();
      v24 = *v20;
      v25 = (Village *)*((_DWORD *)v1 + 1074);
      if ( !*v20 )
        v25 = (Village *)*v20;
          v24 = __ldrex(v20);
        while ( __strex(v24 - 1, v20) );
        *v20 = v24 - 1;
      if ( v24 == 1 )
        v26 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
LABEL_51:
      v28 = Village::getCenter(v25);
      _R0 = Village::getRadius(v25);
      __asm
        VMOV            S0, R0
        VLDR            S2, =0.6
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R2, S0
      Entity::restrictTo(v1, (const BlockPos *)v28, _R2);
  }
  return Mob::_serverAiMobStep(v1);
}


int __fastcall IronGolem::_playStepSound(IronGolem *this, const BlockPos *a2, int a3)
{
  IronGolem *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return Entity::playSound((int)v3, 2, (int)&v5);
}


void __fastcall IronGolem::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  IronGolem::handleEntityEvent(a1, a2, a3);
}


signed int __fastcall IronGolem::aiStep(IronGolem *this)
{
  IronGolem *v1; // r4@1
  signed int v2; // r0@1
  signed int result; // r0@3

  v1 = this;
  Mob::aiStep(this);
  v2 = *((_DWORD *)v1 + 1076);
  if ( v2 >= 1 )
    *((_DWORD *)v1 + 1076) = v2 - 1;
  result = *((_DWORD *)v1 + 1077);
  if ( result >= 1 )
    *((_DWORD *)v1 + 1077) = --result;
  return result;
}


int __fastcall IronGolem::push(IronGolem *this, Entity *a2, int a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r6@1
  int v5; // r4@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( Entity::hasCategory((int)a2, 4) == 1
    && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 488))(v3) != 2849
    && !(Random::_genRandInt32((Entity *)((char *)v4 + 552)) % 0x14) )
  {
    (*(void (__fastcall **)(Entity *, Entity *))(*(_DWORD *)v4 + 340))(v4, v3);
  }
  return j_j_j__ZN6Entity4pushERS_b(v4, v3, v5);
}
