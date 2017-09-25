

void __fastcall ArmorStand::readAdditionalSaveData(ArmorStand *this, const CompoundTag *a2)
{
  ArmorStand::readAdditionalSaveData(this, a2);
}


signed int __fastcall ArmorStand::getEntityTypeId(ArmorStand *this)
{
  return 317;
}


int __fastcall ArmorStand::_hurt(ArmorStand *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  EntityDamageSource *v5; // r5@1
  Level *v7; // r0@1
  int v8; // r5@3
  BlockSource *v9; // r0@3
  BlockSource *v11; // r0@16
  int v12; // r6@19
  int v13; // r1@19
  int v14; // r6@19
  int v15; // r7@19
  int v16; // r1@19
  int v17; // r8@19
  int v18; // r6@21
  int v19; // r1@21
  signed int v20; // r5@22
  signed int v21; // r0@22
  signed int v22; // r7@23
  signed int v23; // r0@30
  int v24; // r5@36
  BlockSource *v25; // r0@36
  int v30; // r5@36
  BlockSource *v31; // r0@36
  Level *v32; // r0@38
  __int64 v33; // kr00_8@38
  int v34; // r6@38
  BlockSource *v35; // r0@38
  signed int v36; // r1@38
  int v37; // r6@43
  BlockSource *v38; // r0@43
  int v39; // r6@43
  BlockSource *v40; // r0@43
  int v41; // [sp+0h] [bp-40h]@19
  int v42; // [sp+0h] [bp-40h]@38
  unsigned int v43; // [sp+8h] [bp-38h]@21
  unsigned int v44; // [sp+Ch] [bp-34h]@21
  unsigned int v45; // [sp+10h] [bp-30h]@19
  unsigned int v46; // [sp+14h] [bp-2Ch]@19
  unsigned int v47; // [sp+18h] [bp-28h]@19
  unsigned int v48; // [sp+1Ch] [bp-24h]@19

  v5 = a2;
  _R4 = this;
  v7 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v7) )
  {
    if ( EntityDamageSource::getCause(v5) == 5 )
    {
      v8 = Entity::getLevel(_R4);
      v9 = (BlockSource *)Entity::getRegion(_R4);
      Level::broadcastDimensionEvent(v8, v9, 1062, (int)_R4 + 72, 0);
      return 0;
    }
    if ( EntityDamageSource::getCause(v5) == 13 )
      goto LABEL_47;
    if ( EntityDamageSource::getCause(v5) == 12 )
LABEL_9:
      (*(void (__fastcall **)(ArmorStand *))(*(_DWORD *)_R4 + 44))(_R4);
    if ( EntityDamageSource::getCause(v5) == 10 || EntityDamageSource::getCause(v5) == 11 )
LABEL_47:
      ArmorStand::_brokenByAnything(_R4);
      goto LABEL_9;
    if ( EntityDamageSource::getCause(v5) == 6 )
      if ( !(*(int (__fastcall **)(ArmorStand *))(*(_DWORD *)_R4 + 320))(_R4) )
        (*(void (__fastcall **)(ArmorStand *, signed int))(*(_DWORD *)_R4 + 504))(_R4, 5);
      ArmorStand::_causeDamage(_R4, 0.05);
    else if ( EntityDamageSource::getCause(v5) == 7 )
      v11 = (BlockSource *)Entity::getRegion(_R4);
      if ( !BlockSource::containsFireBlock(v11, (ArmorStand *)((char *)_R4 + 264)) )
        ArmorStand::_causeDamage(_R4, 1.0);
    else
      if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 12))(v5) == 1 )
      {
        v12 = Entity::getLevel(_R4);
        (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 52))(&v47, v5);
        v14 = Level::fetchEntity(v12, v13, v47, v48, 0);
        v15 = Entity::getLevel(_R4);
        (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v45, v5);
        v17 = Level::fetchEntity(v15, v16, v45, v46, 0);
      }
      else
        if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 8))(v5) != 1 )
          return 0;
        v18 = Entity::getLevel(_R4);
        (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v43, v5);
        v14 = Level::fetchEntity(v18, v19, v43, v44, 0);
        v17 = v14;
      v20 = 0;
      v21 = 0;
      if ( v14 )
        v22 = 0;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 488))(v14) == 4194384 )
          v22 = 1;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 488))(v14) == 319 )
          v20 = 1;
        v21 = v20;
        v20 = v22;
      if ( v17 && (v21 | v20) == 1 )
        v23 = v14;
        if ( v14 )
          v23 = 1;
        if ( (v23 & v20) == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 44))(v14);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 488))(v17) == 319 )
        {
          if ( Abilities::getBool(v17 + 4320, (int **)&Abilities::INSTABUILD) == 1 )
          {
            v24 = Entity::getLevel(_R4);
            v25 = (BlockSource *)Entity::getRegion(_R4);
            __asm
            {
              VLDR            S0, [R4,#0x134]
              VCVTR.S32.F32   S0, S0
              VSTR            S0, [SP,#0x40+var_40]
            }
            Level::broadcastDimensionEvent(v24, v25, 2017, (int)_R4 + 72, v41);
            v30 = Entity::getLevel(_R4);
            v31 = (BlockSource *)Entity::getRegion(_R4);
            Level::broadcastDimensionEvent(v30, v31, 1060, (int)_R4 + 72, 0);
          }
          else
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 656))(v17) )
              return 0;
            v32 = (Level *)Entity::getLevel(_R4);
            v33 = *(_QWORD *)Level::getCurrentTick(v32);
            v34 = Entity::getLevel(_R4);
            v35 = (BlockSource *)Entity::getRegion(_R4);
            Level::broadcastDimensionEvent(v34, v35, 1061, (int)_R4 + 72, 0);
            v36 = 0;
            if ( (unsigned int)(v33 - *((_DWORD *)_R4 + 1074)) < 6 )
              v36 = 1;
            if ( !((unsigned __int64)(v33 - *((_QWORD *)_R4 + 537)) >> 32) )
              v20 |= v36;
            if ( !v20 )
              *((_QWORD *)_R4 + 537) = v33;
            ArmorStand::_brokenByPlayer(_R4);
            v37 = Entity::getLevel(_R4);
            v38 = (BlockSource *)Entity::getRegion(_R4);
            Level::broadcastDimensionEvent(v37, v38, 2017, (int)_R4 + 72, v42);
            v39 = Entity::getLevel(_R4);
            v40 = (BlockSource *)Entity::getRegion(_R4);
            Level::broadcastDimensionEvent(v39, v40, 1060, (int)_R4 + 72, 0);
          goto LABEL_9;
        }
  }
  return 0;
}


int __fastcall ArmorStand::getShadowRadius(ArmorStand *this)
{
  return 0;
}


void __fastcall ArmorStand::~ArmorStand(ArmorStand *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ArmorStand::getInteraction(ArmorStand *this, Player *a2, EntityInteraction *a3, const Vec3 *a4)
{
  EntityInteraction *v5; // r4@1
  Player *v6; // r6@1
  void *v8; // r0@3
  _DWORD *v9; // r0@5
  __int64 v10; // r1@5
  void *v11; // r0@7
  signed int v12; // r8@9
  signed int v13; // r9@9
  int v14; // r10@9
  const ItemInstance *v15; // r1@10
  signed int v20; // r11@16
  void *v22; // r0@34
  _DWORD *v23; // r0@36
  __int64 v24; // r1@36
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  _DWORD *v29; // [sp+0h] [bp-A0h]@36
  __int64 v30; // [sp+8h] [bp-98h]@36
  int v31; // [sp+14h] [bp-8Ch]@34
  char v32; // [sp+18h] [bp-88h]@7
  int v33; // [sp+20h] [bp-80h]@31
  char v34; // [sp+27h] [bp-79h]@7
  void *v35; // [sp+3Ch] [bp-64h]@29
  void *ptr; // [sp+4Ch] [bp-54h]@27
  _DWORD *v37; // [sp+60h] [bp-40h]@5
  __int64 v38; // [sp+68h] [bp-38h]@5
  int v39; // [sp+74h] [bp-2Ch]@3

  _R7 = a4;
  v5 = a3;
  v6 = a2;
  _R5 = this;
  if ( Entity::getInteraction(this, a2, a3, a4) )
    return 1;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v6 + 312))(v6) == 1 )
  {
    sub_21E94B4((void **)&v39, "action.interact.armorstand.pose");
    EntityInteraction::setInteractText();
    v8 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( EntityInteraction::shouldCapture(v5) == 1 )
      v9 = operator new(8u);
      LODWORD(v10) = sub_16BF600;
      *v9 = v6;
      v9[1] = _R5;
      HIDWORD(v10) = sub_16BF2F8;
      v37 = v9;
      v38 = v10;
      EntityInteraction::capture((int)v5, (int)&v37);
      if ( (_DWORD)v38 )
        ((void (*)(void))v38)();
  }
  v11 = Player::getSelectedItem(v6);
  ItemInstance::ItemInstance((ItemInstance *)&v32, (int)v11);
  if ( v34 && !ItemInstance::isNull((ItemInstance *)&v32) )
    if ( ItemInstance::isWearableItem((ItemInstance *)&v32) == 1 )
      v14 = ArmorItem::getSlotForItem((ArmorItem *)&v32, v15) + 2;
      v12 = 1;
      v13 = 1;
    else
      v12 = 0;
      v14 = 0;
  else
    v12 = 0;
    v13 = 0;
    v14 = 0;
  __asm
    VLDR            S0, [R5,#0x4C]
    VLDR            S2, [R7,#4]
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.1
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
      VLDR            S2, =0.55
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v20 = 5;
      goto LABEL_34;
    VLDR            S2, =0.9
      VLDR            S2, =1.6
      v20 = 3;
    VLDR            S2, =0.4
      VLDR            S2, =1.2
      v20 = 4;
    VLDR            S2, =1.6
    v20 = 2;
LABEL_34:
    sub_21E94B4((void **)&v31, "action.interact.armorstand.equip");
    v22 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
      v23 = operator new(0x18u);
      LODWORD(v24) = sub_16BF68A;
      *v23 = v6;
      v23[1] = v12;
      HIDWORD(v24) = sub_16BF63A;
      v23[2] = _R5;
      v23[3] = v14;
      v23[4] = v13;
      v23[5] = v20;
      v29 = v23;
      v30 = v24;
      EntityInteraction::capture((int)v5, (int)&v29);
      if ( (_DWORD)v30 )
        ((void (*)(void))v30)();
    if ( ptr )
      operator delete(ptr);
    if ( v35 )
      operator delete(v35);
    if ( v33 )
      (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  if ( ptr )
    operator delete(ptr);
  if ( v35 )
    operator delete(v35);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  return 0;
}


ArmorStand::Pose *__fastcall ArmorStand::Pose::Pose(ArmorStand::Pose *this)
{
  ArmorStand::Pose *v1; // r4@1

  v1 = this;
  _aeabi_memclr4(this, 84);
  return v1;
}


int __fastcall ArmorStand::getHeadPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)v2;
  v4 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


int __fastcall ArmorStand::_updatePoseFromSynchedData(ArmorStand *this)
{
  ArmorStand *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = SynchedEntityData::getInt((ArmorStand *)((char *)this + 176), 79);
  *((_DWORD *)v1 + 1076) = result;
  return result;
}


int __fastcall ArmorStand::normalTick(ArmorStand *this)
{
  ArmorStand *v1; // r4@1
  int v2; // r0@1
  Dimension *v3; // r0@1
  CircuitSystem *v4; // r6@1
  int v5; // r5@2
  signed int v6; // r1@4
  int v7; // r1@6
  ArmorStand *v8; // r7@7
  int v9; // r0@7
  unsigned int v10; // r1@7
  unsigned int v11; // r1@9
  unsigned int v12; // r0@9
  Level *v13; // r0@14
  MinecraftEventing *v14; // r0@14
  int v15; // r5@17
  signed int v16; // r1@19
  int v17; // r1@21
  ArmorStand *v18; // r7@22
  int v19; // r0@22
  unsigned int v20; // r1@22
  unsigned int v21; // r1@24
  unsigned int v22; // r0@24
  Level *v23; // r0@29
  MinecraftEventing *v24; // r0@29
  int result; // r0@32
  int v26; // [sp+0h] [bp-38h]@17
  int v27; // [sp+4h] [bp-34h]@17
  int v28; // [sp+8h] [bp-30h]@17
  int v29; // [sp+Ch] [bp-2Ch]@16
  int v30; // [sp+10h] [bp-28h]@16
  int v31; // [sp+14h] [bp-24h]@16
  char v32; // [sp+18h] [bp-20h]@1
  int v33; // [sp+1Ch] [bp-1Ch]@16
  int v34; // [sp+20h] [bp-18h]@16

  v1 = this;
  v2 = *((_DWORD *)this + 31);
  *((_DWORD *)v1 + 853) = v2;
  *((_DWORD *)v1 + 854) = v2;
  *((_DWORD *)v1 + 855) = v2;
  BlockPos::BlockPos((int)&v32, (int)v1 + 72);
  v3 = (Dimension *)Entity::getDimension(v1);
  v4 = (CircuitSystem *)Dimension::getCircuitSystem(v3);
  if ( CircuitSystem::isAvailableAt(v4, (const BlockPos *)&v32) != 1
    || (v5 = CircuitSystem::getStrength(v4, (const BlockPos *)&v32), v5 < 1) )
  {
    v29 = *(_DWORD *)&v32;
    v30 = v33 - 1;
    v31 = v34;
    if ( CircuitSystem::isAvailableAt(v4, (const BlockPos *)&v29) != 1
      || (v26 = *(_DWORD *)&v32,
          v27 = v33 - 1,
          v28 = v34,
          v15 = CircuitSystem::getStrength(v4, (const BlockPos *)&v26),
          v15 < 1) )
    {
      *((_DWORD *)v1 + 1077) = 0;
    }
    else
      if ( v15 != *((_DWORD *)v1 + 1077) )
      {
        v16 = v15;
        if ( v15 >= 13 )
          v16 = 13;
        v17 = v16 - 1;
        if ( v17 != *((_DWORD *)v1 + 1076) )
        {
          v18 = (ArmorStand *)((char *)v1 + 4304);
          *((_DWORD *)v1 + 1076) = v17;
          v19 = SynchedEntityData::_get((ArmorStand *)((char *)v1 + 176), 79);
          v20 = *(_DWORD *)(v19 + 4);
          if ( (unsigned __int8)v20 == 2 && *(_DWORD *)(v19 + 12) != *(_DWORD *)v18 )
          {
            *(_DWORD *)(v19 + 12) = *(_DWORD *)v18;
            *(_BYTE *)(v19 + 8) = 1;
            v21 = v20 >> 16;
            v22 = *((_WORD *)v1 + 94);
            if ( v22 >= v21 )
              LOWORD(v22) = v21;
            *((_WORD *)v1 + 94) = v22;
            if ( *((_WORD *)v1 + 95) > v21 )
              LOWORD(v21) = *((_WORD *)v1 + 95);
            *((_WORD *)v1 + 95) = v21;
          }
          v23 = (Level *)Entity::getLevel(v1);
          v24 = (MinecraftEventing *)Level::getEventing(v23);
          MinecraftEventing::fireEventArmorStandPosed(v24, v1);
        }
      }
      *((_DWORD *)v1 + 1077) = v15;
  }
  else
    if ( v5 != *((_DWORD *)v1 + 1077) )
      v6 = v5;
      if ( v5 >= 13 )
        v6 = 13;
      v7 = v6 - 1;
      if ( v7 != *((_DWORD *)v1 + 1076) )
        v8 = (ArmorStand *)((char *)v1 + 4304);
        *((_DWORD *)v1 + 1076) = v7;
        v9 = SynchedEntityData::_get((ArmorStand *)((char *)v1 + 176), 79);
        v10 = *(_DWORD *)(v9 + 4);
        if ( (unsigned __int8)v10 == 2 && *(_DWORD *)(v9 + 12) != *(_DWORD *)v8 )
          *(_DWORD *)(v9 + 12) = *(_DWORD *)v8;
          *(_BYTE *)(v9 + 8) = 1;
          v11 = v10 >> 16;
          v12 = *((_WORD *)v1 + 94);
          if ( v12 >= v11 )
            LOWORD(v12) = v11;
          *((_WORD *)v1 + 94) = v12;
          if ( *((_WORD *)v1 + 95) > v11 )
            LOWORD(v11) = *((_WORD *)v1 + 95);
          *((_WORD *)v1 + 95) = v11;
        v13 = (Level *)Entity::getLevel(v1);
        v14 = (MinecraftEventing *)Level::getEventing(v13);
        MinecraftEventing::fireEventArmorStandPosed(v14, v1);
    *((_DWORD *)v1 + 1077) = v5;
  Mob::normalTick(v1);
  result = SynchedEntityData::getInt((ArmorStand *)((char *)v1 + 176), 79);
  *((_DWORD *)v1 + 1076) = result;
  return result;
}


void __fastcall ArmorStand::readAdditionalSaveData(ArmorStand *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ArmorStand *v3; // r4@1
  const CompoundTag *v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "Pose");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v8);
  ArmorStand::_readPose(v3, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall ArmorStand::_swapItem(int a1, Player *a2, signed int a3)
{
  signed int v3; // r8@1
  Player *v4; // r5@1
  Entity *v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@1
  int v8; // r6@4
  signed int v9; // r2@7
  signed int v10; // r1@7
  signed int v11; // r2@16
  PlayerInventoryProxy *v12; // r0@22
  PlayerInventoryProxy *v13; // r0@24
  void (__fastcall *v14)(Entity *, signed int, char *); // r6@31
  int v15; // r6@40
  int v16; // r7@40
  PlayerInventoryProxy *v17; // r0@40
  char v18; // r0@40
  PlayerInventoryProxy *v19; // r0@48
  Level *v20; // r0@55
  MinecraftEventing *v21; // r0@55
  int result; // r0@71
  int v23; // [sp+0h] [bp-210h]@55
  int v24; // [sp+8h] [bp-208h]@59
  void *v25; // [sp+24h] [bp-1ECh]@57
  void *v26; // [sp+34h] [bp-1DCh]@55
  char v27; // [sp+48h] [bp-1C8h]@41
  int v28; // [sp+50h] [bp-1C0h]@45
  void *v29; // [sp+6Ch] [bp-1A4h]@43
  void *v30; // [sp+7Ch] [bp-194h]@41
  char v31; // [sp+90h] [bp-180h]@32
  int v32; // [sp+98h] [bp-178h]@38
  void *v33; // [sp+B4h] [bp-15Ch]@36
  void *v34; // [sp+C4h] [bp-14Ch]@34
  char v35; // [sp+D8h] [bp-138h]@23
  int v36; // [sp+E0h] [bp-130h]@29
  void *v37; // [sp+FCh] [bp-114h]@27
  void *ptr; // [sp+10Ch] [bp-104h]@25
  char v39; // [sp+120h] [bp-F0h]@49
  int v40; // [sp+128h] [bp-E8h]@53
  void *v41; // [sp+144h] [bp-CCh]@51
  void *v42; // [sp+154h] [bp-BCh]@49
  int v43; // [sp+168h] [bp-A8h]@1
  int v44; // [sp+170h] [bp-A0h]@65
  unsigned __int16 v45; // [sp+176h] [bp-9Ah]@1
  void *v46; // [sp+18Ch] [bp-84h]@63
  void *v47; // [sp+19Ch] [bp-74h]@61
  char v48; // [sp+1B0h] [bp-60h]@1
  int v49; // [sp+1B4h] [bp-5Ch]@16
  int v50; // [sp+1B8h] [bp-58h]@71
  void *v51; // [sp+1D4h] [bp-3Ch]@69
  void *v52; // [sp+1E4h] [bp-2Ch]@67

  v3 = a3;
  v4 = a2;
  v5 = (Entity *)a1;
  v6 = Mob::getItemSlot(a1, a3);
  ItemInstance::ItemInstance((ItemInstance *)&v48, (int)v6);
  v7 = Player::getSelectedItem(v4);
  ItemInstance::ItemInstance((ItemInstance *)&v43, (int)v7);
  if ( HIBYTE(v45) )
  {
    if ( v43 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v43) )
      {
        v8 = 1;
      }
      else
        v9 = 0;
        v10 = 0;
        if ( v45 < 0x100u )
          v9 = 1;
        if ( !(_BYTE)v45 )
          v10 = 1;
        v8 = v10 | v9;
    }
    else
      v8 = 1;
  }
  else
    v8 = 1;
  if ( Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) == 1 )
    if ( ItemInstance::isNull((ItemInstance *)&v48) )
      if ( !v8 )
LABEL_49:
        ItemInstance::ItemInstance((ItemInstance *)&v39, (int)&v43);
        ItemInstance::set((ItemInstance *)&v39, 1);
        (*(void (__fastcall **)(Entity *, signed int, char *))(*(_DWORD *)v5 + 1092))(v5, v3, &v39);
        if ( v42 )
          operator delete(v42);
        if ( v41 )
          operator delete(v41);
        if ( v40 )
          (*(void (**)(void))(*(_DWORD *)v40 + 4))();
        goto LABEL_55;
      goto LABEL_31;
    v11 = 0;
    if ( v49 != Block::mAir )
      v11 = 1;
    if ( !(v8 | v11) )
      goto LABEL_49;
  if ( !v8 && (unsigned __int8)v45 >= 2u )
    if ( !ItemInstance::isNull((ItemInstance *)&v48) )
      v12 = (PlayerInventoryProxy *)Player::getSupplies(v4);
      if ( PlayerInventoryProxy::canAdd(v12, (const ItemInstance *)&v48) != 1 )
        goto LABEL_61;
    ItemInstance::ItemInstance((ItemInstance *)&v35, (int)&v43);
    ItemInstance::set((ItemInstance *)&v35, 1);
    (*(void (__fastcall **)(Entity *, signed int, char *))(*(_DWORD *)v5 + 1092))(v5, v3, &v35);
    (*(void (__fastcall **)(Entity *, signed int))(*(_DWORD *)v5 + 1064))(v5, 1);
    if ( !Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) )
      ItemInstance::remove((ItemInstance *)&v43, 1);
      v13 = (PlayerInventoryProxy *)Player::getSupplies(v4);
      PlayerInventoryProxy::setSelectedItem(v13, (const ItemInstance *)&v43);
    if ( ptr )
      operator delete(ptr);
    if ( v37 )
      operator delete(v37);
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 4))();
    goto LABEL_48;
LABEL_31:
  v14 = *(void (__fastcall **)(Entity *, signed int, char *))(*(_DWORD *)v5 + 1092);
  if ( ItemInstance::isNull((ItemInstance *)&v43) )
    ItemInstance::ItemInstance((int)&v31);
    ItemInstance::ItemInstance((ItemInstance *)&v31, (int)&v43);
  v14(v5, v3, &v31);
  if ( v34 )
    operator delete(v34);
  if ( v33 )
    operator delete(v33);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  v32 = 0;
  (*(void (__fastcall **)(Entity *, signed int))(*(_DWORD *)v5 + 1064))(v5, 1);
  v15 = Player::getSupplies(v4);
  v16 = Player::getSelectedItemSlot(v4);
  v17 = (PlayerInventoryProxy *)Player::getSupplies(v4);
  v18 = PlayerInventoryProxy::getSelectedContainerId(v17);
  PlayerInventoryProxy::removeItem(v15, v16, 1, v18);
  if ( ItemInstance::isNull((ItemInstance *)&v48) == 1 )
    ItemInstance::ItemInstance((int)&v27);
    ItemInstance::operator=((int)&v48, (int)&v27);
    if ( v30 )
      operator delete(v30);
    if ( v29 )
      operator delete(v29);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
    v28 = 0;
LABEL_48:
  v19 = (PlayerInventoryProxy *)Player::getSupplies(v4);
  PlayerInventoryProxy::add(v19, (ItemInstance *)&v48, 1);
  (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v4 + 1064))(v4, 1);
LABEL_55:
  ItemInstance::ItemInstance((ItemInstance *)&v23, (int)&v43);
  ItemInstance::set((ItemInstance *)&v23, 1);
  v20 = (Level *)Entity::getLevel(v5);
  v21 = (MinecraftEventing *)Level::getEventing(v20);
  MinecraftEventing::fireEventArmorStandItemEquipped(v21, v5, (const ItemInstance *)&v23);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 1064))(v5, 1);
  if ( v26 )
    operator delete(v26);
  if ( v25 )
    operator delete(v25);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
LABEL_61:
  if ( v47 )
    operator delete(v47);
  if ( v46 )
    operator delete(v46);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  if ( v52 )
    operator delete(v52);
  if ( v51 )
    operator delete(v51);
  result = v50;
  if ( v50 )
    result = (*(int (**)(void))(*(_DWORD *)v50 + 4))();
  return result;
}


void __fastcall ArmorStand::pushEntities(ArmorStand *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  unsigned __int64 *v3; // r0@1
  unsigned __int64 *v4; // r7@1
  char *v5; // r5@1
  int v6; // r6@1
  int v7; // r9@1
  signed int v8; // r0@1
  signed int v9; // r7@4
  int v14; // r6@9
  int v15; // r7@9

  v1 = this;
  v2 = Entity::getRegion(this);
  v3 = (unsigned __int64 *)BlockSource::fetchEntities(v2, 0x80000, (int)v1 + 264, 0);
  v4 = v3;
  v5 = 0;
  v7 = *v3 >> 32;
  v6 = *v3;
  v8 = v7 - v6;
  if ( 0 != (v7 - v6) >> 2 )
  {
    if ( (unsigned int)(v8 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v8 = (signed int)operator new(v8);
    v7 = *v4 >> 32;
    v6 = *v4;
    v5 = (char *)v8;
  }
  v9 = v7 - v6;
    v8 = _aeabi_memmove4(v5, v6);
  _ZF = v7 == v6;
  if ( v7 != v6 )
    v8 = v9 >> 2;
    _ZF = v9 >> 2 == 0;
  if ( !_ZF )
    __asm { VLDR            S16, =0.3 }
    v14 = 4 * v8;
    v15 = 0;
    do
    {
      _R0 = Entity::distanceToSqr(v1, *(const Entity **)&v5[v15]);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        (*(void (**)(void))(**(_DWORD **)&v5[v15] + 272))();
      v15 += 4;
    }
    while ( v14 != v15 );
  if ( v5 )
    j_j_j__ZdlPv_6(v5);
}


void __fastcall ArmorStand::addAdditionalSaveData(ArmorStand *this, CompoundTag *a2)
{
  ArmorStand::addAdditionalSaveData(this, a2);
}


void __fastcall ArmorStand::_writePose(ArmorStand *this, int a2)
{
  ArmorStand::_writePose(this, a2);
}


int __fastcall ArmorStand::getLeftLegPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 60);
  v4 = *(_DWORD *)(v2 + 68);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


int __fastcall ArmorStand::_updateEntityBodyRotation(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 124);
  *(_DWORD *)(result + 3412) = v1;
  *(_DWORD *)(result + 3416) = v1;
  *(_DWORD *)(result + 3420) = v1;
  return result;
}


void __fastcall ArmorStand::_readPose(ArmorStand *this, const CompoundTag *a2)
{
  ArmorStand::_readPose(this, a2);
}


int __fastcall ArmorStand::getNumSlotsFilled(ArmorStand *this)
{
  ArmorStand *v1; // r4@1
  ItemInstance *v2; // r0@1
  signed int v3; // r5@1
  ItemInstance *v4; // r0@1
  signed int v5; // r6@1
  int v6; // r5@1
  ItemInstance *v7; // r0@1
  signed int v8; // r0@1
  ItemInstance *v9; // r0@5
  ItemInstance *v10; // r0@7

  v1 = this;
  v2 = (ItemInstance *)(*(int (**)(void))(*(_DWORD *)this + 1028))();
  v3 = ItemInstance::isNull(v2);
  v4 = (ItemInstance *)(*(int (__fastcall **)(ArmorStand *, signed int))(*(_DWORD *)v1 + 1028))(v1, 1);
  v5 = ItemInstance::isNull(v4);
  v6 = v3 ^ 1;
  v7 = (ItemInstance *)(*(int (__fastcall **)(ArmorStand *, signed int))(*(_DWORD *)v1 + 1028))(v1, 2);
  v8 = ItemInstance::isNull(v7);
  if ( !v5 )
    ++v6;
  if ( !v8 )
  v9 = (ItemInstance *)(*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v1 + 1028))(v1, 3);
  if ( !ItemInstance::isNull(v9) )
  v10 = (ItemInstance *)Mob::getItemSlot((int)v1, 0);
  if ( !ItemInstance::isNull(v10) )
  return v6;
}


signed int __fastcall ArmorStand::isPushableByPiston(ArmorStand *this)
{
  return 1;
}


int __fastcall ArmorStand::Pose::Pose(int result, const Vec3 *a2, const Vec3 *a3, const Vec3 *a4, const Vec3 *a5, const Vec3 *a6, const Vec3 *a7, const Vec3 *a8)
{
  __int64 v8; // kr00_8@1
  int v9; // lr@1
  __int64 v10; // kr08_8@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // lr@1
  int v15; // r2@1
  int v16; // r3@1
  int v17; // lr@1
  int v18; // r2@1
  int v19; // r3@1
  int v20; // lr@1
  int v21; // r2@1
  int v22; // r3@1
  int v23; // r2@1
  int v24; // r3@1
  int v25; // r12@1

  v8 = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v8;
  v9 = result + 24;
  v10 = *(_QWORD *)a3;
  *(_DWORD *)(result + 20) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(result + 12) = v10;
  v11 = *(_DWORD *)a4;
  v12 = *((_DWORD *)a4 + 1);
  v13 = *((_DWORD *)a4 + 2);
  *(_DWORD *)v9 = v11;
  *(_DWORD *)(v9 + 4) = v12;
  *(_DWORD *)(v9 + 8) = v13;
  v14 = result + 36;
  v15 = *((_DWORD *)a5 + 1);
  v16 = *((_DWORD *)a5 + 2);
  *(_DWORD *)v14 = *(_DWORD *)a5;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  v17 = result + 48;
  v18 = *((_DWORD *)a6 + 1);
  v19 = *((_DWORD *)a6 + 2);
  *(_DWORD *)v17 = *(_DWORD *)a6;
  *(_DWORD *)(v17 + 4) = v18;
  *(_DWORD *)(v17 + 8) = v19;
  v20 = result + 60;
  v21 = *((_DWORD *)a7 + 1);
  v22 = *((_DWORD *)a7 + 2);
  *(_DWORD *)v20 = *(_DWORD *)a7;
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  v23 = *((_DWORD *)a8 + 1);
  v24 = *((_DWORD *)a8 + 2);
  v25 = result + 72;
  *(_DWORD *)v25 = *(_DWORD *)a8;
  *(_DWORD *)(v25 + 4) = v23;
  *(_DWORD *)(v25 + 8) = v24;
  return result;
}


int __fastcall ArmorStand::getLeftArmPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 36);
  v4 = *(_DWORD *)(v2 + 44);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


int __fastcall ArmorStand::_dropItem(ArmorStand *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  ArmorStand *v3; // r4@1
  Level *v4; // r0@1
  char *v5; // r0@1
  Random *v6; // r6@1
  float v7; // r1@1
  float v8; // r2@1
  Level *v16; // r0@1
  Spawner *v17; // r6@1
  BlockSource *v18; // r0@1
  float v20; // [sp+8h] [bp-38h]@1
  float v21; // [sp+Ch] [bp-34h]@1
  float v22; // [sp+10h] [bp-30h]@1

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  v5 = Level::getRandom(v4);
  v6 = (Random *)v5;
  v7 = *((float *)v3 + 19);
  v8 = *((float *)v3 + 20);
  v20 = *((float *)v3 + 18);
  v21 = v7;
  v22 = v8;
  _R0 = Random::_genRandInt32((Random *)v5);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S18, #-0.25
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VMOV.F32        S20, #0.5
    VLDR            S2, [SP,#0x40+var_38]
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S18
    VMUL.F32        S0, S0, S20
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x40+var_38]
  }
  _R0 = Random::_genRandInt32(v6);
    VMOV.F32        S2, #0.25
    VMOV.F32        S4, #1.5
    VLDR            S6, [SP,#0x40+var_34]
    VADD.F32        S2, S6, S2
    VMUL.F32        S0, S0, S4
    VSTR            S0, [SP,#0x40+var_34]
    VLDR            S2, [SP,#0x40+var_30]
    VSTR            S0, [SP,#0x40+var_30]
  v16 = (Level *)Entity::getLevel(v3);
  v17 = (Spawner *)Level::getSpawner(v16);
  v18 = (BlockSource *)Entity::getRegion(v3);
  return Spawner::spawnItem(v17, v18, v2, v3, (const Vec3 *)&v20, 0);
}


void __fastcall ArmorStand::~ArmorStand(ArmorStand *this)
{
  ArmorStand::~ArmorStand(this);
}


void __fastcall ArmorStand::addAdditionalSaveData(ArmorStand *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ArmorStand *v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+0h] [bp-28h]@1
  int v9; // [sp+4h] [bp-24h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v10, "Pose");
  ArmorStand::_writePose((ArmorStand *)&v8, (int)v3);
  v4 = v8;
  v8 = 0;
  v9 = v4;
  CompoundTag::put((int)v2, (const void **)&v10, &v9);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v9 = 0;
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall ArmorStand::getRightArmPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 24);
  v4 = *(_DWORD *)(v2 + 32);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


signed int __fastcall ArmorStand::_brokenByPlayer(ArmorStand *this)
{
  Level *v2; // r0@1
  Spawner *v3; // r5@1
  BlockSource *v4; // r6@1
  float v11; // [sp+Ch] [bp-6Ch]@1
  char v12; // [sp+18h] [bp-60h]@1
  int v13; // [sp+20h] [bp-58h]@5
  void *v14; // [sp+3Ch] [bp-3Ch]@3
  void *ptr; // [sp+4Ch] [bp-2Ch]@1

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = (Spawner *)Level::getSpawner(v2);
  v4 = (BlockSource *)Entity::getRegion(_R4);
  ItemInstance::ItemInstance((ItemInstance *)&v12, Item::mArmorStand);
  __asm
  {
    VLDR            S0, [R4,#0x48]
    VLDR            S2, [R4,#0x4C]
    VLDR            S4, [R4,#0x50]
  }
  _R0 = &Vec3::UNIT_Y;
    VLDR            S6, [R0]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x78+var_6C]
    VSTR            S2, [SP,#0x78+var_68]
    VSTR            S4, [SP,#0x78+var_64]
  Spawner::spawnItem(v3, v4, (const ItemInstance *)&v12, _R4, (const Vec3 *)&v11, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v14 )
    operator delete(v14);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  return ArmorStand::_brokenByAnything(_R4);
}


void __fastcall ArmorStand::pushEntities(ArmorStand *this)
{
  ArmorStand::pushEntities(this);
}


unsigned int __fastcall ArmorStand::_defineEntityData(ArmorStand *this)
{
  ArmorStand *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  unsigned int result; // r0@1
  int v4; // r5@2
  _BYTE *v5; // r0@2
  _BYTE *v6; // r1@2
  int v7; // r0@2
  unsigned int v8; // r0@4
  signed __int16 v9; // r1@4

  v1 = this;
  v2 = (ArmorStand *)((char *)this + 176);
  result = SynchedEntityData::_find((ArmorStand *)((char *)this + 176), 79);
  if ( !result )
  {
    SynchedEntityData::_resizeToContain(v2, 79);
    v4 = *((_DWORD *)v1 + 44);
    v5 = operator new(0x10u);
    v6 = v5;
    v5[4] = 2;
    *((_WORD *)v5 + 3) = 79;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F08C4;
    *((_DWORD *)v5 + 3) = *((_DWORD *)v1 + 1076);
    v7 = *(_DWORD *)(v4 + 316);
    *(_DWORD *)(v4 + 316) = v6;
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v8 = *((_WORD *)v1 + 94);
    v9 = 79;
    if ( v8 >= 0x4F )
      LOWORD(v8) = 79;
    *((_WORD *)v1 + 94) = v8;
    result = *((_WORD *)v1 + 95);
    if ( result > 0x4F )
      v9 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v9;
  }
  return result;
}


int __fastcall ArmorStand::_setBit(ArmorStand *this, char *a2, int a3, int a4)
{
  int v4; // r0@1
  int v5; // r1@1

  v4 = (unsigned __int8)*a2;
  v5 = v4 & ~a3;
  if ( a4 )
    LOBYTE(v5) = v4 | a3;
  return (char)v5;
}


int __fastcall ArmorStand::isPushable(ArmorStand *this)
{
  return 0;
}


int __fastcall ArmorStand::ArmorStand(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r7@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F0410;
  *(_DWORD *)(v3 + 4300) = 0;
  *(_DWORD *)(v3 + 4296) = 0;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 248) = 78;
  Entity::setSize((Entity *)v3, 0.5, 1.975);
  Entity::setPersistent((Entity *)v3);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 79) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 79);
    v4 = *(_DWORD *)(v3 + 176);
    v5 = operator new(0x10u);
    v5[4] = 2;
    v6 = 79;
    *((_WORD *)v5 + 3) = 79;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F08C4;
    *((_DWORD *)v5 + 3) = *(_DWORD *)(v3 + 4304);
    v7 = *(_DWORD *)(v4 + 316);
    *(_DWORD *)(v4 + 316) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *(_WORD *)(v3 + 188);
    if ( v8 >= 0x4F )
      LOWORD(v8) = 79;
    *(_WORD *)(v3 + 188) = v8;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x4F )
      v6 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v6;
  }
  return v3;
}


InstantaneousAttributeBuff *__fastcall ArmorStand::_causeDamage(ArmorStand *this, float a2)
{
  ArmorStand *v2; // r5@1
  AttributeInstance *v4; // r0@1
  AttributeInstance *v10; // r5@2
  __int64 v11; // r2@2
  InstantaneousAttributeBuff *result; // r0@2
  int v13; // [sp+0h] [bp-48h]@2

  v2 = this;
  _R4 = a2;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v4);
  __asm
  {
    VMOV            S0, R4
    VMOV            S2, R0
    VSUB.F32        S0, S2, S0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    ArmorStand::_brokenByAnything(v2);
    result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(ArmorStand *))(*(_DWORD *)v2 + 44))(v2);
  else
    v10 = (AttributeInstance *)(*(int (__fastcall **)(ArmorStand *, void *))(*(_DWORD *)v2 + 1000))(
                                 v2,
                                 &SharedAttributes::HEALTH);
    LODWORD(v11) = 10;
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v13, LODWORD(_R4) ^ 0x80000000, v11);
    AttributeInstance::addBuff(v10, (const AttributeBuff *)&v13);
    result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v13);
  return result;
}


unsigned int __fastcall ArmorStand::setPoseIndex(ArmorStand *this, int a2)
{
  ArmorStand *v2; // r4@1
  unsigned int result; // r0@1
  unsigned int v4; // r1@1
  int v5; // r2@2
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  *((_DWORD *)this + 1076) = a2;
  result = SynchedEntityData::_get((ArmorStand *)((char *)this + 176), 79);
  v4 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v4 == 2 )
  {
    v5 = *((_DWORD *)v2 + 1076);
    if ( *(_DWORD *)(result + 12) != v5 )
    {
      *(_DWORD *)(result + 12) = v5;
      *(_BYTE *)(result + 8) = 1;
      v6 = v4 >> 16;
      v7 = *((_WORD *)v2 + 94);
      if ( v7 >= v6 )
        LOWORD(v7) = v6;
      *((_WORD *)v2 + 94) = v7;
      result = *((_WORD *)v2 + 95);
      if ( result > v6 )
        LOWORD(v6) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v6;
    }
  }
  return result;
}


int __fastcall ArmorStand::getBodyPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 12);
  v4 = *(_DWORD *)(v2 + 20);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


void __fastcall ArmorStand::_readPose(ArmorStand *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ArmorStand *v3; // r4@1
  int v4; // r0@2
  unsigned int v5; // r1@2
  int v6; // r2@3
  unsigned int v7; // r1@4
  unsigned int v8; // r0@4
  void *v9; // r0@9
  void *v10; // r0@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+4h] [bp-2Ch]@10
  int v16; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    sub_21E94B4((void **)&v16, "PoseIndex");
    *((_DWORD *)v3 + 1076) = CompoundTag::getInt((int)v2, (const void **)&v16);
    v4 = SynchedEntityData::_get((ArmorStand *)((char *)v3 + 176), 79);
    v5 = *(_DWORD *)(v4 + 4);
    if ( (unsigned __int8)v5 == 2 )
    {
      v6 = *((_DWORD *)v3 + 1076);
      if ( *(_DWORD *)(v4 + 12) != v6 )
      {
        *(_DWORD *)(v4 + 12) = v6;
        *(_BYTE *)(v4 + 8) = 1;
        v7 = v5 >> 16;
        v8 = *((_WORD *)v3 + 94);
        if ( v8 >= v7 )
          LOWORD(v8) = v7;
        *((_WORD *)v3 + 94) = v8;
        if ( *((_WORD *)v3 + 95) > v7 )
          LOWORD(v7) = *((_WORD *)v3 + 95);
        *((_WORD *)v3 + 95) = v7;
      }
    }
    v9 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v15, "LastSignal");
    *((_DWORD *)v3 + 1077) = CompoundTag::getInt((int)v2, (const void **)&v15);
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  }
}


int __fastcall ArmorStand::getRightLegPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(_DWORD *)(v2 + 56);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


void __fastcall ArmorStand::_writePose(ArmorStand *this, int a2)
{
  ArmorStand *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1
  void *v5; // r0@1
  int v6; // r6@2
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+4h] [bp-2Ch]@2
  int v13; // [sp+Ch] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v13, "PoseIndex");
  CompoundTag::putInt((int)v4, (const void **)&v13, *(_DWORD *)(v3 + 4304));
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v12, "LastSignal");
  CompoundTag::putInt(v6, (const void **)&v12, *(_DWORD *)(v3 + 4308));
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


signed int __fastcall ArmorStand::_brokenByAnything(ArmorStand *this)
{
  ArmorStand *v1; // r4@1
  signed int v2; // r6@1
  int v3; // r7@2
  void (__fastcall *v4)(ArmorStand *, signed int, char *); // r7@4
  ItemInstance *v5; // r0@12
  ItemInstance *v6; // r5@12
  signed int result; // r0@12
  void (__fastcall *v8)(ArmorStand *, int *); // r6@14
  int v9; // [sp+0h] [bp-A8h]@14
  int v10; // [sp+8h] [bp-A0h]@18
  void *v11; // [sp+24h] [bp-84h]@16
  void *v12; // [sp+34h] [bp-74h]@14
  char v13; // [sp+48h] [bp-60h]@4
  int v14; // [sp+50h] [bp-58h]@8
  void *v15; // [sp+6Ch] [bp-3Ch]@6
  void *ptr; // [sp+7Ch] [bp-2Ch]@4

  v1 = this;
  v2 = 0;
  do
  {
    v3 = (*(int (__fastcall **)(ArmorStand *, signed int))(*(_DWORD *)v1 + 1028))(v1, v2);
    if ( !ItemInstance::isNull((ItemInstance *)v3) && *(_BYTE *)(v3 + 14) )
    {
      ArmorStand::_dropItem(v1, (const ItemInstance *)v3);
      v4 = *(void (__fastcall **)(ArmorStand *, signed int, char *))(*(_DWORD *)v1 + 1024);
      ItemInstance::ItemInstance((int)&v13);
      v4(v1, v2, &v13);
      if ( ptr )
        operator delete(ptr);
      if ( v15 )
        operator delete(v15);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      v14 = 0;
    }
    ++v2;
  }
  while ( v2 < 4 );
  v5 = (ItemInstance *)(*(int (__fastcall **)(ArmorStand *))(*(_DWORD *)v1 + 908))(v1);
  v6 = v5;
  result = ItemInstance::isNull(v5);
  if ( !result )
    result = *((_BYTE *)v6 + 14);
    if ( *((_BYTE *)v6 + 14) )
      ArmorStand::_dropItem(v1, v6);
      v8 = *(void (__fastcall **)(ArmorStand *, int *))(*(_DWORD *)v1 + 912);
      ItemInstance::ItemInstance((int)&v9);
      v8(v1, &v9);
      if ( v12 )
        operator delete(v12);
      if ( v11 )
        operator delete(v11);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      result = 0;
  return result;
}


int __fastcall ArmorStand::getRightItemPose(int result, int a2)
{
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r1@1

  v2 = ArmorStand::STAND_POSES[*(_DWORD *)(a2 + 4304)];
  v3 = *(_QWORD *)(v2 + 72);
  v4 = *(_DWORD *)(v2 + 80);
  *(_QWORD *)result = v3;
  *(_DWORD *)(result + 8) = v4;
  return result;
}
