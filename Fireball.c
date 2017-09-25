

int __fastcall Fireball::Fireball(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FE204;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 3424) = -1;
  *(_DWORD *)(v3 + 3428) = -1;
  *(_DWORD *)(v3 + 3432) = -1;
  *(_DWORD *)(v3 + 3436) = 0;
  *(_BYTE *)(v3 + 3440) = 0;
  MovementInterpolator::MovementInterpolator(v3 + 3444);
  Fireball::_defineEntityData((Fireball *)v3);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v3 + 680))(v3, 1065353216, 1065353216);
  Fireball::_setPower((Fireball *)v3, (const Vec3 *)&Vec3::ZERO);
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  return v3;
}


int __fastcall Fireball::getShadowHeightOffs(Fireball *this)
{
  return 0;
}


int __fastcall Fireball::normalTick(Fireball *this)
{
  int v2; // r5@3
  int v3; // r0@3
  int v8; // r1@3
  int v9; // r0@3
  int v11; // [sp+1Ch] [bp-1Ch]@3
  int v12; // [sp+24h] [bp-14h]@3

  _R4 = this;
  Entity::normalTick(this);
  if ( (*(int (__fastcall **)(Fireball *))(*(_DWORD *)_R4 + 780))(_R4) == 1 )
    (*(void (__fastcall **)(Fireball *, signed int))(*(_DWORD *)_R4 + 504))(_R4, 1);
  MovementInterpolator::tick((Fireball *)((char *)_R4 + 3444), _R4);
  v2 = Entity::getLevel(_R4);
  v3 = (*(int (__fastcall **)(Fireball *))(*(_DWORD *)_R4 + 776))(_R4);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x4C]
  }
  v8 = v3;
  v9 = *((_DWORD *)_R4 + 20);
  v11 = *((_DWORD *)_R4 + 18);
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x38+var_18]
  v12 = v9;
  return Level::addParticle(v2, v8, (int)&v11);
}


unsigned int __fastcall Fireball::_setPower(Fireball *this, const Vec3 *a2)
{
  Fireball *v2; // r4@1
  SynchedEntityData *v3; // r6@1
  unsigned int v10; // r1@1
  unsigned int v11; // r1@3
  unsigned int v12; // r0@3
  unsigned int v14; // r1@8
  unsigned int v15; // r1@10
  unsigned int v16; // r0@10
  unsigned int result; // r0@15
  unsigned int v18; // r1@15
  unsigned int v19; // r1@17
  unsigned int v20; // r0@17

  v2 = this;
  v3 = (Fireball *)((char *)this + 176);
  _R5 = a2;
  __asm { VLDR            S16, [R5] }
  _R0 = SynchedEntityData::_get((Fireball *)((char *)this + 176), 30);
  v10 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v10 == 3 )
  {
    __asm
    {
      VLDR            S0, [R0,#0xC]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      __asm { VSTR            S16, [R0,#0xC] }
      *(_BYTE *)(_R0 + 8) = 1;
      v11 = v10 >> 16;
      v12 = *((_WORD *)v2 + 94);
      if ( v12 >= v11 )
        LOWORD(v12) = v11;
      *((_WORD *)v2 + 94) = v12;
      if ( *((_WORD *)v2 + 95) > v11 )
        LOWORD(v11) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v11;
  }
  __asm { VLDR            S16, [R5,#4] }
  _R0 = SynchedEntityData::_get(v3, 31);
  v14 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v14 == 3 )
      v15 = v14 >> 16;
      v16 = *((_WORD *)v2 + 94);
      if ( v16 >= v15 )
        LOWORD(v16) = v15;
      *((_WORD *)v2 + 94) = v16;
      if ( *((_WORD *)v2 + 95) > v15 )
        LOWORD(v15) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v15;
  __asm { VLDR            S16, [R5,#8] }
  result = SynchedEntityData::_get(v3, 32);
  v18 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v18 == 3 )
      *(_BYTE *)(result + 8) = 1;
      v19 = v18 >> 16;
      v20 = *((_WORD *)v2 + 94);
      if ( v20 >= v19 )
        LOWORD(v20) = v19;
      *((_WORD *)v2 + 94) = v20;
      result = *((_WORD *)v2 + 95);
      if ( result > v19 )
        LOWORD(v19) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v19;
  return result;
}


signed int __fastcall Fireball::isPickable(Fireball *this)
{
  return 1;
}


signed int __fastcall Fireball::getPickRadius(Fireball *this)
{
  return 1065353216;
}


signed int __fastcall Fireball::getTrailParticle(Fireball *this)
{
  return 4;
}


void __fastcall Fireball::addAdditionalSaveData(Fireball *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Fireball *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  int v9; // r1@6
  void **v10; // r0@6
  void **v11; // r0@6
  int v12; // r1@6
  void *v13; // r0@10
  SynchedEntityData *v14; // r5@11
  int v15; // r7@11
  int v16; // r6@11
  int v17; // r5@11
  void **v18; // r0@11
  void **v19; // r0@11
  int v20; // r1@11
  void *v21; // r0@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  unsigned int *v34; // r2@41
  signed int v35; // r1@43
  int v36; // [sp+0h] [bp-60h]@11
  int v37; // [sp+4h] [bp-5Ch]@11
  int v38; // [sp+Ch] [bp-54h]@11
  int v39; // [sp+10h] [bp-50h]@6
  int v40; // [sp+14h] [bp-4Ch]@6
  int v41; // [sp+1Ch] [bp-44h]@6
  int v42; // [sp+24h] [bp-3Ch]@5
  int v43; // [sp+2Ch] [bp-34h]@4
  int v44; // [sp+34h] [bp-2Ch]@3
  int v45; // [sp+3Ch] [bp-24h]@2
  int v46; // [sp+44h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v46, "xTile");
  CompoundTag::putShort((int)v2, (const void **)&v46, *((_WORD *)v3 + 1712));
  v4 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v45, "yTile");
  CompoundTag::putShort((int)v2, (const void **)&v45, *((_WORD *)v3 + 1714));
  v5 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v45 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v44, "zTile");
  CompoundTag::putShort((int)v2, (const void **)&v44, *((_WORD *)v3 + 1716));
  v6 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v43, "inTile");
  CompoundTag::putByte((int)v2, (const void **)&v43, *((_BYTE *)v3 + 3436));
  v7 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v43 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v42, "inGround");
  CompoundTag::putByte((int)v2, (const void **)&v42, *((_BYTE *)v3 + 3440));
  v8 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v41, "direction");
  v9 = *((_DWORD *)v3 + 27);
  v39 = 0;
  ListTagFloatAdder::operator()((void **)&v39, v9);
  v10 = ListTagFloatAdder::operator()((void **)&v39, *((_DWORD *)v3 + 28));
  v11 = ListTagFloatAdder::operator()(v10, *((_DWORD *)v3 + 29));
  v12 = (int)*v11;
  *v11 = 0;
  v40 = v12;
  CompoundTag::put((int)v2, (const void **)&v41, &v40);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v40 = 0;
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  v13 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v41 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (Fireball *)((char *)v3 + 176);
  v15 = SynchedEntityData::getFloat(v14, 30);
  v16 = SynchedEntityData::getFloat(v14, 31);
  v17 = SynchedEntityData::getFloat(v14, 32);
  sub_21E94B4((void **)&v38, "power");
  v36 = 0;
  ListTagFloatAdder::operator()((void **)&v36, v15);
  v18 = ListTagFloatAdder::operator()((void **)&v36, v16);
  v19 = ListTagFloatAdder::operator()(v18, v17);
  v20 = (int)*v19;
  *v19 = 0;
  v37 = v20;
  CompoundTag::put((int)v2, (const void **)&v38, &v37);
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v37 = 0;
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v21 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v38 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


void __fastcall Fireball::addAdditionalSaveData(Fireball *this, CompoundTag *a2)
{
  Fireball::addAdditionalSaveData(this, a2);
}


__int64 __fastcall Fireball::getSourceUniqueID(Fireball *this, int a2)
{
  Fireball *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall Fireball::shouldBurn(Fireball *this)
{
  return 1;
}


int __fastcall Fireball::_getPower(Fireball *this, int a2)
{
  SynchedEntityData *v2; // r5@1
  Fireball *v3; // r4@1
  __int64 v4; // r6@1
  int result; // r0@1

  v2 = (SynchedEntityData *)(a2 + 176);
  v3 = this;
  LODWORD(v4) = SynchedEntityData::getFloat((SynchedEntityData *)(a2 + 176), 30);
  HIDWORD(v4) = SynchedEntityData::getFloat(v2, 31);
  result = SynchedEntityData::getFloat(v2, 32);
  *(_QWORD *)v3 = v4;
  *((_DWORD *)v3 + 2) = result;
  return result;
}


unsigned int __fastcall Fireball::_defineEntityData(Fireball *this)
{
  Fireball *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int v3; // r7@2
  _BYTE *v4; // r0@2
  _BYTE *v5; // r1@2
  int v6; // r0@2
  unsigned int v7; // r0@4
  signed __int16 v8; // r1@4
  int v9; // r7@10
  _BYTE *v10; // r0@10
  _BYTE *v11; // r1@10
  int v12; // r0@10
  unsigned int v13; // r0@12
  signed __int16 v14; // r1@12
  unsigned int result; // r0@17
  int v16; // r5@18
  _BYTE *v17; // r0@18
  _BYTE *v18; // r1@18
  int v19; // r0@18
  unsigned int v20; // r0@20
  signed __int16 v21; // r1@20

  v1 = this;
  v2 = (Fireball *)((char *)this + 176);
  if ( !SynchedEntityData::_find((Fireball *)((char *)this + 176), 30) )
  {
    SynchedEntityData::_resizeToContain(v2, 30);
    v3 = *(_DWORD *)v2;
    v4 = operator new(0x10u);
    v5 = v4;
    v4[4] = 3;
    *((_WORD *)v4 + 3) = 30;
    v4[8] = 1;
    *(_DWORD *)v4 = &off_26F137C;
    *((_DWORD *)v4 + 3) = 0;
    v6 = *(_DWORD *)(v3 + 120);
    *(_DWORD *)(v3 + 120) = v5;
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v7 = *((_WORD *)v1 + 94);
    v8 = 30;
    if ( v7 >= 0x1E )
      LOWORD(v7) = 30;
    *((_WORD *)v1 + 94) = v7;
    if ( (unsigned int)*((_WORD *)v1 + 95) > 0x1E )
      v8 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v8;
  }
  if ( !SynchedEntityData::_find(v2, 31) )
    SynchedEntityData::_resizeToContain(v2, 31);
    v9 = *(_DWORD *)v2;
    v10 = operator new(0x10u);
    v11 = v10;
    v10[4] = 3;
    *((_WORD *)v10 + 3) = 31;
    v10[8] = 1;
    *(_DWORD *)v10 = &off_26F137C;
    *((_DWORD *)v10 + 3) = 0;
    v12 = *(_DWORD *)(v9 + 124);
    *(_DWORD *)(v9 + 124) = v11;
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v13 = *((_WORD *)v1 + 94);
    v14 = 31;
    if ( v13 >= 0x1F )
      LOWORD(v13) = 31;
    *((_WORD *)v1 + 94) = v13;
    if ( (unsigned int)*((_WORD *)v1 + 95) > 0x1F )
      v14 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v14;
  result = SynchedEntityData::_find(v2, 32);
  if ( !result )
    SynchedEntityData::_resizeToContain(v2, 32);
    v16 = *(_DWORD *)v2;
    v17 = operator new(0x10u);
    v18 = v17;
    v17[4] = 3;
    *((_WORD *)v17 + 3) = 32;
    v17[8] = 1;
    *(_DWORD *)v17 = &off_26F137C;
    *((_DWORD *)v17 + 3) = 0;
    v19 = *(_DWORD *)(v16 + 128);
    *(_DWORD *)(v16 + 128) = v18;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v20 = *((_WORD *)v1 + 94);
    v21 = 32;
    if ( v20 >= 0x20 )
      LOWORD(v20) = 32;
    *((_WORD *)v1 + 94) = v20;
    result = *((_WORD *)v1 + 95);
    if ( result > 0x20 )
      v21 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v21;
  return result;
}


void __fastcall Fireball::readAdditionalSaveData(Fireball *this, const CompoundTag *a2)
{
  Fireball::readAdditionalSaveData(this, a2);
}


signed int __fastcall Fireball::getBrightness(Fireball *this, float a2)
{
  return 1065353216;
}


signed int __fastcall Fireball::getInertia(Fireball *this)
{
  return 1064514355;
}


void __fastcall Fireball::~Fireball(Fireball *this)
{
  Fireball::~Fireball(this);
}


void __fastcall Fireball::readAdditionalSaveData(Fireball *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Fireball *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  int v8; // r0@5
  void *v9; // r0@7
  signed int v10; // r6@8
  void *v11; // r0@8
  ListTag *v12; // r6@10
  void *v13; // r0@10
  signed int v14; // r6@13
  void *v15; // r0@13
  ListTag *v16; // r5@15
  void *v17; // r0@15
  __int64 v18; // r6@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  unsigned int *v31; // r2@42
  signed int v32; // r1@44
  unsigned int *v33; // r2@70
  signed int v34; // r1@72
  unsigned int *v35; // r2@78
  signed int v36; // r1@80
  __int64 v37; // [sp+0h] [bp-68h]@16
  int v38; // [sp+8h] [bp-60h]@16
  int v39; // [sp+10h] [bp-58h]@15
  int v40; // [sp+18h] [bp-50h]@13
  int v41; // [sp+20h] [bp-48h]@10
  int v42; // [sp+28h] [bp-40h]@8
  int v43; // [sp+30h] [bp-38h]@5
  int v44; // [sp+38h] [bp-30h]@4
  int v45; // [sp+40h] [bp-28h]@3
  int v46; // [sp+48h] [bp-20h]@2
  int v47; // [sp+50h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v47, "xTile");
  *((_DWORD *)v3 + 856) = CompoundTag::getShort((int)v2, (const void **)&v47);
  v4 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v46, "yTile");
  *((_DWORD *)v3 + 857) = CompoundTag::getShort((int)v2, (const void **)&v46);
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v46 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v45, "zTile");
  *((_DWORD *)v3 + 858) = CompoundTag::getShort((int)v2, (const void **)&v45);
  v6 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v45 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v44, "inTile");
  *((_DWORD *)v3 + 859) = CompoundTag::getByte((int)v2, (const void **)&v44);
  v7 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v44 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v43, "inGround");
  v8 = CompoundTag::getByte((int)v2, (const void **)&v43);
  if ( v8 != 1 )
    LOBYTE(v8) = 0;
  *((_BYTE *)v3 + 3440) = v8;
  v9 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v42, "direction");
  v10 = CompoundTag::contains((int)v2, (const void **)&v42, 9);
  v11 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v42 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v10 == 1 )
    sub_21E94B4((void **)&v41, "direction");
    v12 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v41);
    v13 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      }
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    *((_DWORD *)v3 + 27) = ListTag::getFloat(v12, 0);
    *((_DWORD *)v3 + 28) = ListTag::getFloat(v12, 1);
    *((_DWORD *)v3 + 29) = ListTag::getFloat(v12, 2);
  else
    (*(void (__fastcall **)(Fireball *))(*(_DWORD *)v3 + 44))(v3);
  sub_21E94B4((void **)&v40, "power");
  v14 = CompoundTag::contains((int)v2, (const void **)&v40, 9);
  v15 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v40 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v14 == 1 )
    sub_21E94B4((void **)&v39, "power");
    v16 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v39);
    v17 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v39 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    LODWORD(v18) = ListTag::getFloat(v16, 0);
    HIDWORD(v18) = ListTag::getFloat(v16, 1);
    v37 = v18;
    v38 = ListTag::getFloat(v16, 2);
    Fireball::_setPower(v3, (const Vec3 *)&v37);
}


void __fastcall Fireball::~Fireball(Fireball *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}
