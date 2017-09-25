

signed int __fastcall TripodCamera::breaksFallingBlocks(TripodCamera *this)
{
  return 1;
}


signed int __fastcall TripodCamera::canExistWhenDisallowMob(TripodCamera *this)
{
  return 1;
}


int __fastcall TripodCamera::getShadowHeightOffs(TripodCamera *this)
{
  return 0;
}


signed int __fastcall TripodCamera::setPlayerOwner(TripodCamera *this, Player *a2)
{
  TripodCamera *v2; // r4@1
  signed int result; // r0@1
  Player *v4; // r6@1
  unsigned int v5; // r5@2
  bool v6; // zf@2
  TripodCamera *v7; // r4@6
  int v8; // r0@5

  v2 = this;
  result = 4300;
  v4 = a2;
  if ( *((Player **)v2 + 1075) != a2 )
  {
    v5 = (unsigned int)v2 + 4296;
    v6 = a2 == 0;
    if ( a2 )
      v6 = *((_DWORD *)a2 + 773) == 0;
    if ( v6 )
    {
      *((_DWORD *)v2 + 1075) = 0;
      *((_DWORD *)v2 + 1077) = -1;
      *((_DWORD *)v2 + 1076) = -1;
      *((_BYTE *)v2 + 4316) = 0;
      result = *((_DWORD *)v2 + 1078);
      v7 = (TripodCamera *)((char *)v2 + 4312);
      if ( result )
        result = Level::unregisterTemporaryPointer(result, v5);
      *(_DWORD *)v7 = 0;
    }
    else
      *((_QWORD *)v2 + 538) = *(_QWORD *)Entity::getUniqueID(a2);
      v8 = *((_DWORD *)v4 + 773);
      *((_DWORD *)v2 + 1078) = v8;
      Level::registerTemporaryPointer(v8, (unsigned int)v2 + 4296);
      result = 4316;
  }
  return result;
}


void __fastcall TripodCamera::reloadHardcoded(int a1)
{
  int v1; // r4@1
  _DWORD *v2; // r5@2
  void *v3; // r0@2

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 3081) )
  {
    v2 = operator new(4u);
    TripodCameraComponent::TripodCameraComponent(v2, v1);
    v3 = *(void **)(v1 + 3232);
    *(_DWORD *)(v1 + 3232) = v2;
    if ( v3 )
      j_j_j__ZdlPv_6(v3);
  }
}


int __fastcall TripodCamera::isPushable(TripodCamera *this)
{
  return 0;
}


void __fastcall TripodCamera::reloadHardcoded(int a1)
{
  TripodCamera::reloadHardcoded(a1);
}


Entity *__fastcall TripodCamera::~TripodCamera(TripodCamera *this)
{
  TripodCamera *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F478C;
  *((_DWORD *)this + 1074) = &off_26F4C40;
  *((_DWORD *)this + 1075) = 0;
  *((_DWORD *)this + 1077) = -1;
  *((_DWORD *)this + 1076) = -1;
  *((_BYTE *)this + 4316) = 0;
  v2 = *((_DWORD *)this + 1078);
  if ( v2 )
    Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 4296);
  *((_DWORD *)v1 + 1078) = 0;
  return j_j_j__ZN3MobD2Ev_0(v1);
}


int __fastcall TripodCamera::TripodCamera(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Mob::Mob(a1, a2, a3);
  *(_DWORD *)result = &off_26F478C;
  *(_DWORD *)(result + 4296) = &off_26F4C40;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4308) = -1;
  *(_DWORD *)(result + 4304) = -1;
  *(_DWORD *)(result + 4312) = 0;
  *(_BYTE *)(result + 4316) = 0;
  *(_DWORD *)(result + 248) = 57;
  *(_BYTE *)(result + 536) = 1;
  *(_DWORD *)(result + 4324) = 90;
  *(_BYTE *)(result + 4320) = 0;
  *(_DWORD *)(result + 316) = 1067869798;
  return result;
}


int __fastcall TripodCamera::isTargetable(TripodCamera *this)
{
  return 0;
}


void __fastcall TripodCamera::~TripodCamera(TripodCamera *this)
{
  TripodCamera::~TripodCamera(this);
}


int __fastcall TripodCamera::isPickable(TripodCamera *this)
{
  return Entity::isRemoved(this) ^ 1;
}


signed int __fastcall TripodCamera::interactPreventDefault(TripodCamera *this)
{
  return 1;
}


signed int __fastcall TripodCamera::startTakingPicture(TripodCamera *this, Player *a2)
{
  TripodCamera *v2; // r4@1
  Player *v3; // r5@1
  int v4; // r0@3
  int v5; // r0@4
  Level *v6; // r0@7
  int v7; // r0@7
  _BYTE *v8; // r6@7
  bool v9; // zf@7
  __int64 v10; // kr00_8@11
  __int64 v11; // kr08_8@11
  Level *v12; // r0@11
  int v13; // r0@11
  int v14; // r3@11
  signed int result; // r0@12
  void **v16; // [sp+0h] [bp-38h]@11
  signed int v17; // [sp+4h] [bp-34h]@11
  signed int v18; // [sp+8h] [bp-30h]@11
  char v19; // [sp+Ch] [bp-2Ch]@11
  __int64 v20; // [sp+10h] [bp-28h]@11
  __int64 v21; // [sp+18h] [bp-20h]@11

  v2 = this;
  v3 = a2;
  if ( *((Player **)this + 1075) != a2 )
  {
    if ( *((_DWORD *)a2 + 773) )
    {
      *((_QWORD *)this + 538) = *(_QWORD *)Entity::getUniqueID(a2);
      v4 = *((_DWORD *)v3 + 773);
      *((_DWORD *)v2 + 1078) = v4;
      Level::registerTemporaryPointer(v4, (unsigned int)v2 + 4296);
      *((_BYTE *)v2 + 4316) = 0;
    }
    else
      *((_DWORD *)this + 1075) = 0;
      *((_DWORD *)this + 1077) = -1;
      *((_DWORD *)this + 1076) = -1;
      *((_BYTE *)this + 4316) = 0;
      v5 = *((_DWORD *)this + 1078);
      if ( v5 )
        Level::unregisterTemporaryPointer(v5, (unsigned int)v2 + 4296);
      *((_DWORD *)v2 + 1078) = 0;
  }
  v6 = (Level *)Entity::getLevel(v2);
  v7 = Level::isClientSide(v6);
  v8 = (char *)v2 + 4320;
  v9 = v7 == 0;
  if ( !v7 )
    v9 = *v8 == 0;
  if ( v9 )
    v10 = *(_QWORD *)Entity::getUniqueID(v2);
    v11 = *(_QWORD *)Entity::getUniqueID(v3);
    v17 = 2;
    v18 = 1;
    v19 = 0;
    v16 = &off_26E99A4;
    v20 = v10;
    v21 = v11;
    v12 = (Level *)Entity::getLevel(v2);
    v13 = Level::getPacketSender(v12);
    (*(void (__cdecl **)(int, void ***, _DWORD, int, void **, signed int, signed int, _DWORD))(*(_DWORD *)v13 + 8))(
      v13,
      &v16,
      *(_DWORD *)(*(_DWORD *)v13 + 8),
      v14,
      &off_26E99A4,
      2,
      1,
      *(_DWORD *)&v19);
  result = 1;
  *v8 = 1;
  return result;
}


signed int __fastcall TripodCamera::getShadowRadius(TripodCamera *this)
{
  return 1056964608;
}


signed int __fastcall TripodCamera::interactWithPlayer(TripodCamera *this, Player *a2)
{
  signed int result; // r0@2

  if ( *((_BYTE *)this + 4320) )
  {
    result = 0;
  }
  else
    TripodCamera::startTakingPicture(this, a2);
    result = 1;
  return result;
}


void __fastcall TripodCamera::~TripodCamera(TripodCamera *this)
{
  TripodCamera *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F478C;
  *((_DWORD *)this + 1074) = &off_26F4C40;
  *((_DWORD *)this + 1075) = 0;
  *((_DWORD *)this + 1077) = -1;
  *((_DWORD *)this + 1076) = -1;
  *((_BYTE *)this + 4316) = 0;
  v2 = *((_DWORD *)this + 1078);
  if ( v2 )
    Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 4296);
  *((_DWORD *)v1 + 1078) = 0;
  Mob::~Mob(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TripodCamera::normalTick(TripodCamera *this)
{
  int result; // r0@1
  _BYTE *v3; // r6@2
  int v4; // r0@3
  unsigned int v5; // r3@4
  unsigned int v6; // r2@4
  int v7; // r0@5
  Entity *v8; // r5@8
  double v10; // r2@9
  int v15; // r0@12
  __int64 v16; // r0@15
  Level *v17; // r0@15
  signed int v18; // r1@15
  Level *v19; // r8@17
  BlockSource *v20; // r7@17
  int v21; // r0@17
  int v22; // r0@17
  int v23; // r0@17
  int v24; // r0@21
  int v25; // r0@23
  int v26; // r0@23
  int v27; // r0@23
  int v28; // r0@23
  float v29; // [sp+14h] [bp-C4h]@23
  float v30; // [sp+20h] [bp-B8h]@23
  float v31; // [sp+2Ch] [bp-ACh]@23
  float v32; // [sp+38h] [bp-A0h]@23
  float v33; // [sp+44h] [bp-94h]@15
  char v35; // [sp+50h] [bp-88h]@21
  float v36; // [sp+58h] [bp-80h]@17
  float v37; // [sp+64h] [bp-74h]@17
  char v38; // [sp+70h] [bp-68h]@17
  __int64 v39; // [sp+78h] [bp-60h]@11
  int v40; // [sp+80h] [bp-58h]@11
  float v41; // [sp+84h] [bp-54h]@9

  _R4 = this;
  Mob::normalTick(this);
  result = *((_BYTE *)_R4 + 4320);
  if ( *((_BYTE *)_R4 + 4320) )
  {
    --*((_DWORD *)_R4 + 1081);
    v3 = (char *)_R4 + 4316;
    if ( !*((_BYTE *)_R4 + 4316) )
    {
      v4 = *((_DWORD *)_R4 + 1078);
      if ( v4 )
      {
        v5 = *((_DWORD *)_R4 + 1077);
        v6 = *((_DWORD *)_R4 + 1076);
        if ( (v6 & v5) != -1 )
        {
          v7 = Level::fetchEntity(v4, v6 & v5, v6, v5, 0);
          *((_DWORD *)_R4 + 1075) = v7;
          if ( !v7 )
            *((_DWORD *)_R4 + 1075) = Level::fetchEntity(
                                        *((_DWORD *)_R4 + 1078),
                                        4300,
                                        *((_QWORD *)_R4 + 538),
                                        *((_QWORD *)_R4 + 538) >> 32,
                                        0);
        }
      }
      *v3 = 1;
    }
    v8 = (Entity *)*((_DWORD *)_R4 + 1075);
    if ( v8 )
      _R6 = (*(int (__fastcall **)(TripodCamera *))(*(_DWORD *)_R4 + 52))(_R4);
      Entity::getAttachPos((AABB *)&v41, (int)v8, 3, 0);
      __asm
        VLDR            S0, [R6]
        VLDR            S6, [SP,#0xD8+var_54]
        VLDR            S2, [R6,#4]
        VLDR            S8, [SP,#0xD8+var_50]
        VSUB.F32        S0, S0, S6
        VLDR            S4, [R6,#8]
        VSUB.F32        S2, S2, S8
        VLDR            S10, [SP,#0xD8+var_4C]
        VSUB.F32        S4, S4, S10
        VMUL.F32        S6, S0, S0
        VMUL.F32        S8, S2, S2
        VMUL.F32        S10, S4, S4
        VADD.F32        S6, S8, S6
        VLDR            S8, =0.0001
        VADD.F32        S6, S6, S10
        VSQRT.F32       S6, S6
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        LODWORD(v10) = *(&Vec3::ZERO + 1);
        v40 = dword_2822498;
        v39 = *(_QWORD *)&Vec3::ZERO;
      else
        __asm
          VDIV.F32        S0, S0, S6
          VDIV.F32        S2, S2, S6
          VDIV.F32        S4, S4, S6
          VSTR            S0, [SP,#0xD8+var_60]
          VSTR            S2, [SP,#0xD8+var_60+4]
          VSTR            S4, [SP,#0xD8+var_58]
      LODWORD(v16) = &v33;
      HIDWORD(v16) = &v39;
      Vec3::rotationFromDirection(v16, v10);
        VLDR            S0, =-180.0
        VLDR            S2, [SP,#0xD8+var_90]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R0]
      v17 = (Level *)Entity::getLevel(v8);
      result = Level::isClientSide(v17);
      v18 = *((_DWORD *)_R4 + 1081);
      if ( !result )
        if ( v18 )
          return result;
        return (*(int (__fastcall **)(TripodCamera *))(*(_DWORD *)_R4 + 44))(_R4);
      if ( v18 == 8 )
        Entity::getRotation((Entity *)&v38, (int)_R4);
        Vec3::directionFromRotation((int)&v39, COERCE_FLOAT(&v38));
          VLDR            S16, [R4,#0x48]
          VLDR            S18, [R4,#0x4C]
          VLDR            S20, [R4,#0x50]
        v19 = (Level *)Entity::getLevel(_R4);
        v20 = (BlockSource *)Entity::getRegion(_R4);
        v21 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 52))(v8);
        Level::playSound(v19, v20, 123, v21);
        v22 = Entity::getLevel(_R4);
          VMOV.F32        S0, #0.5
          VLDR            S2, [SP,#0xD8+var_60]
          VLDR            S4, [SP,#0xD8+var_60+4]
          VLDR            S6, [SP,#0xD8+var_58]
          VMUL.F32        S2, S2, S0
          VMUL.F32        S4, S4, S0
          VMUL.F32        S0, S6, S0
          VADD.F32        S2, S2, S16
          VADD.F32        S4, S4, S18
          VADD.F32        S0, S0, S20
          VSTR            S2, [SP,#0xD8+var_74]
          VSTR            S4, [SP,#0xD8+var_70]
          VSTR            S0, [SP,#0xD8+var_6C]
        Level::addParticle(v22, 14, (int)&v37);
        v23 = Entity::getLevel(_R4);
          VLDR            S0, =0.6
          VSTR            S2, [SP,#0xD8+var_80]
          VSTR            S4, [SP,#0xD8+var_7C]
          VSTR            S0, [SP,#0xD8+var_78]
        return Level::addParticle(v23, 14, (int)&v36);
      if ( v18 >= 9 )
        Entity::getRotation((Entity *)&v35, (int)_R4);
        Vec3::directionFromRotation((int)&v39, COERCE_FLOAT(&v35));
          VMOV.F32        S0, #0.25
          VLDR            S8, [R4,#0x4C]
          VLDR            S10, [R4,#0x50]
          VLDR            S6, [R4,#0x48]
          VSUB.F32        S4, S8, S4
          VSUB.F32        S2, S6, S2
          VSUB.F32        S0, S10, S0
          VSTR            S2, [SP,#0xD8+var_94]
          VSTR            S4, [SP,#0xD8+var_90]
          VSTR            S0, [SP,#0xD8+var_8C]
        v24 = Entity::getLevel(_R4);
        return Level::addParticle(v24, 4, (int)&v33);
      if ( !v18 )
          VLDR            S18, =0.1
          VLDR            S22, [R4,#0x10C]
          VLDR            S20, [R4,#0x48]
          VLDR            S16, [R4,#0x50]
          VADD.F32        S24, S22, S18
        v25 = Entity::getLevel(_R4);
          VSTR            S20, [SP,#0xD8+var_A0]
          VSTR            S24, [SP,#0xD8+var_9C]
          VSTR            S16, [SP,#0xD8+var_98]
        Level::addParticle(v25, 9, (int)&v32);
          VLDR            S0, =0.2
          VADD.F32        S18, S16, S18
          VADD.F32        S24, S22, S0
        v26 = Entity::getLevel(_R4);
          VSTR            S20, [SP,#0xD8+var_AC]
          VSTR            S24, [SP,#0xD8+var_A8]
          VSTR            S18, [SP,#0xD8+var_A4]
        Level::addParticle(v26, 9, (int)&v31);
          VLDR            S0, =-0.1
          VLDR            S2, =0.3
          VADD.F32        S18, S20, S0
          VADD.F32        S20, S22, S2
        v27 = Entity::getLevel(_R4);
          VSTR            S18, [SP,#0xD8+var_B8]
          VSTR            S20, [SP,#0xD8+var_B4]
          VSTR            S16, [SP,#0xD8+var_B0]
        Level::addParticle(v27, 9, (int)&v30);
        v28 = Entity::getLevel(_R4);
          VSTR            S18, [SP,#0xD8+var_C4]
          VSTR            S24, [SP,#0xD8+var_C0]
          VSTR            S16, [SP,#0xD8+var_BC]
        Level::addParticle(v28, 9, (int)&v29);
    else
      *((_BYTE *)_R4 + 4320) = 0;
      *((_DWORD *)_R4 + 1075) = 0;
      *((_DWORD *)_R4 + 1077) = -1;
      *((_DWORD *)_R4 + 1076) = -1;
      *v3 = 0;
      v15 = *((_DWORD *)_R4 + 1078);
      if ( v15 )
        Level::unregisterTemporaryPointer(v15, (unsigned int)_R4 + 4296);
      *((_DWORD *)_R4 + 1078) = 0;
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 44))(_R4);
  }
  return result;
}


signed int __fastcall TripodCamera::getEntityTypeId(TripodCamera *this)
{
  return 318;
}
