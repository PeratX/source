

int __fastcall Llama::feed(Llama *this, int a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  Level *v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-38h]@1
  void **v8; // [sp+8h] [bp-30h]@1
  int v9; // [sp+Ch] [bp-2Ch]@1
  int v10; // [sp+10h] [bp-28h]@1
  char v11; // [sp+14h] [bp-24h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  char v13; // [sp+20h] [bp-18h]@1
  int v14; // [sp+24h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  j_Entity::getRuntimeID((Entity *)&v7, (int)this);
  v9 = 2;
  v10 = 1;
  v11 = 0;
  v8 = &off_26DA5D0;
  v12 = *(_QWORD *)&v7;
  v13 = 57;
  v14 = v3;
  v4 = (Level *)j_Entity::getLevel(v2);
  v5 = j_Level::getPacketSender(v4);
  return (*(int (**)(void))(*(_DWORD *)v5 + 8))();
}


int __fastcall Llama::onFailedTame(Llama *this)
{
  Llama *v1; // r4@1
  int (__fastcall *v2)(Llama *, signed int, char *, signed int); // r6@1
  char v4; // [sp+8h] [bp-20h]@1

  v1 = this;
  v2 = *(int (__fastcall **)(Llama *, signed int, char *, signed int))(*(_DWORD *)this + 556);
  j_Entity::getAttachPos((AABB *)&v4, (int)this, 3, 0);
  return v2(v1, 19, &v4, -1);
}


void __fastcall Llama::~Llama(Llama *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall Llama::~Llama(Llama *this)
{
  Llama::~Llama(this);
}


int __fastcall Llama::causeFallDamage(int result, float _R1)
{
  int v5; // r4@1
  int v7; // r5@2
  Level *v8; // r0@3
  Level *v9; // r0@4
  int v10; // r0@4
  Entity *v11; // r6@6
  __int64 v12; // r0@6
  float v15; // r3@10
  float v16; // r1@10
  BlockSource *v19; // r0@10
  Block *v20; // r0@10
  Block *v21; // r5@10
  int *v22; // r0@10
  int (__fastcall *v23)(int, signed int, char *, _DWORD); // r7@11
  char v24; // [sp+8h] [bp-70h]@11
  char v25; // [sp+14h] [bp-64h]@10
  char v26; // [sp+20h] [bp-58h]@9
  char v27; // [sp+28h] [bp-50h]@6
  int v28; // [sp+30h] [bp-48h]@4
  int v29; // [sp+34h] [bp-44h]@4
  void **v30; // [sp+38h] [bp-40h]@4
  signed int v31; // [sp+3Ch] [bp-3Ch]@4
  signed int v32; // [sp+40h] [bp-38h]@4
  char v33; // [sp+44h] [bp-34h]@4
  int v34; // [sp+48h] [bp-30h]@4
  int v35; // [sp+4Ch] [bp-2Ch]@4
  char v36; // [sp+54h] [bp-24h]@4

  __asm { VMOV.F32        S0, #0.5 }
  v5 = result;
  __asm
  {
    VMOV            S16, R1
    VMOV.F32        S2, #-3.0
    VMUL.F32        S0, S16, S0
    VADD.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOV            R0, S0 }
    result = j_mce::Math::ceil(_R0, _R1);
    v7 = result;
    if ( result >= 1 )
    {
      v8 = (Level *)j_Entity::getLevel((Entity *)v5);
      if ( j_Level::isClientSide(v8) == 1 )
      {
        j_Entity::getRuntimeID((Entity *)&v28, v5);
        v31 = 2;
        v32 = 1;
        v33 = 0;
        v30 = &off_26DA788;
        v34 = v28;
        v35 = v29;
        __asm { VSTR            S16, [SP,#0x78+var_28] }
        v36 = 0;
        v9 = (Level *)j_Entity::getLevel((Entity *)v5);
        v10 = j_Level::getPacketSender(v9);
        (*(void (**)(void))(*(_DWORD *)v10 + 8))();
      }
      __asm
        VMOV.F32        S0, #6.0
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        v11 = (Entity *)&v27;
        j_EntityDamageSource::EntityDamageSource((int)&v27, 5);
        j_Entity::hurt((Entity *)v5, (const EntityDamageSource *)&v27, v7, 1, 0);
        j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v27);
        v12 = *(_QWORD *)(v5 + 476);
        _ZF = HIDWORD(v12) == (_DWORD)v12;
        if ( HIDWORD(v12) != (_DWORD)v12 )
        {
          v11 = *(Entity **)v12;
          _ZF = *(_DWORD *)v12 == 0;
        }
        if ( !_ZF )
          j_EntityDamageSource::EntityDamageSource((int)&v26, 5);
          j_Entity::hurt(v11, (const EntityDamageSource *)&v26, v7, 1, 0);
          j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v26);
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 52))(v5);
        VLDR            S0, =-0.2
        VLDR            S2, [R0,#4]
      v15 = *(float *)(_R0 + 8);
      __asm { VADD.F32        S0, S2, S0 }
      v16 = *(float *)_R0;
      _R0 = v5 + 4156;
        VLDR            S2, [R0]
        VSUB.F32        S0, S0, S2
        VMOV            R2, S0
      j_BlockPos::BlockPos((BlockPos *)&v25, v16, _R2, v15);
      v19 = (BlockSource *)j_Entity::getRegion((Entity *)v5);
      v20 = (Block *)j_BlockSource::getBlock(v19, (const BlockPos *)&v25);
      v21 = v20;
      v22 = (int *)j_Block::getMaterial(v20);
      result = j_Material::isType(v22, 0);
      if ( !result )
        v23 = *(int (__fastcall **)(int, signed int, char *, _DWORD))(*(_DWORD *)v5 + 556);
        j_Entity::getAttachPos((AABB *)&v24, v5, 0, 0);
        result = v23(v5, 9, &v24, *((_BYTE *)v21 + 4));
    }
  return result;
}


int __fastcall Llama::_playStepSound(Llama *this, const BlockPos *a2, int a3)
{
  Llama *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  j_Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return j_Entity::playSound((int)v3, 2, (int)&v5);
}


signed int __fastcall Llama::getEntityTypeId(Llama *this)
{
  return 4893;
}


int __fastcall Llama::Llama(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_271CAC4;
  *(_DWORD *)(result + 248) = 56;
  return result;
}


int __fastcall Llama::getArmorValue(Llama *this)
{
  return 0;
}


signed int __fastcall Llama::useNewAi(Llama *this)
{
  return 1;
}
