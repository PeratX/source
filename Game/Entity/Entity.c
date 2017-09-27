

int __fastcall Entity::getRideRoot(Entity *this)
{
  int result; // r0@1
  signed int v2; // r1@3

  result = *((_DWORD *)this + 128);
  if ( result )
  {
    v2 = -1;
    do
    {
      if ( !*(_DWORD *)(result + 512) )
        break;
      ++v2;
      result = *(_DWORD *)(result + 512);
    }
    while ( v2 < 1023 );
  }
  else
    result = 0;
  return result;
}


void __fastcall Entity::getInterpolatedPosition2(Entity *this, float _R1, int _R2)
{
  Entity::getInterpolatedPosition2(this, _R1, _R2);
}


signed int __fastcall Entity::isInWorld(Entity *this)
{
  Entity *v1; // r1@1
  signed int result; // r0@2

  v1 = this;
  if ( *((_BYTE *)this + 40) )
  {
    result = 0;
    if ( *((_DWORD *)v1 + 771) )
    {
      if ( !*((_BYTE *)v1 + 3097) )
        result = 1;
    }
  }
  else
  return result;
}


signed int __fastcall Entity::canDestroyBlock(Entity *this, const Block *a2)
{
  return 1;
}


int __fastcall Entity::distanceTo(Entity *this, const Entity *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1,#0x48]
    VLDR            S6, [R0,#0x48]
    VLDR            S2, [R1,#0x4C]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#0x50]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Entity::doEnchantDamageEffects(Entity *this, Mob *a2, Mob *a3)
{
  int result; // r0@1

  result = *((_BYTE *)a3 + 172);
  if ( result & 2 )
    result = j_j_j__ZN12EnchantUtils17doPostHurtEffectsER3MobS1_(a3, a2, a3);
  return result;
}


int __fastcall Entity::setOnFire(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( !*((_DWORD *)this + 773) || (result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)this + 212))(this)) == 0 )
  {
    result = *((_DWORD *)v2 + 107);
    if ( result < 20 * v3 )
      result = 20 * v3;
    *((_DWORD *)v2 + 107) = result;
  }
  return result;
}


int __fastcall Entity::isControlledByLocalInstance(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int v4; // r0@1
  int result; // r0@2
  unsigned int v6; // [sp+0h] [bp-18h]@1
  unsigned int v7; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 773);
  (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)this + 540))(&v6, this);
  v4 = Level::getPlayer(v2, v3, v6, v7);
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 1408))();
  else
    result = Level::isClientSide(*((Level **)v1 + 773)) ^ 1;
  return result;
}


int __fastcall Entity::getTargetId(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 3272);
  v3 = *(_DWORD *)(a2 + 3276);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


char *__fastcall Entity::getEntityData(Entity *this)
{
  return (char *)this + 176;
}


int __fastcall Entity::getTarget(Entity *this)
{
  Entity *v1; // r1@1
  int v2; // r0@1
  unsigned int v3; // r2@2
  unsigned int v4; // r3@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 773);
  if ( v2 && (v3 = *((_DWORD *)v1 + 818), v4 = *((_DWORD *)v1 + 819), (v3 & v4) != -1) )
    result = Level::fetchEntity(v2, 0, v3, v4, 0);
  else
    result = 0;
  return result;
}


int __fastcall Entity::isPickable(Entity *this)
{
  return 0;
}


void __fastcall Entity::getInterpolatedPosition(Entity *this, float _R1, int _R2)
{
  Entity::getInterpolatedPosition(this, _R1, _R2);
}


int __fastcall Entity::isAdventure(Entity *this)
{
  return 0;
}


int __fastcall Entity::spawnAtLocation(int a1, int a2)
{
  int (*v2)(void); // lr@1
  char v4; // [sp+4h] [bp-Ch]@1
  char v5; // [sp+5h] [bp-Bh]@1

  v2 = *(int (**)(void))(*(_DWORD *)a1 + 448);
  v4 = *(_BYTE *)a2;
  v5 = *(_BYTE *)(a2 + 1);
  return v2();
}


signed int __fastcall Entity::hasFamily(int a1, int a2)
{
  int v2; // r0@1
  const void **v3; // r9@1
  bool v4; // zf@1
  int v5; // r10@4
  int v6; // r0@4
  int v7; // r8@4
  int v8; // r7@4
  const void *v9; // r5@5
  int v10; // r11@5
  size_t v11; // r4@5
  _DWORD *v12; // r0@7
  size_t v13; // r6@7
  size_t v14; // r2@7
  int v15; // r0@9
  signed int result; // r0@16
  _DWORD *v17; // r1@18
  unsigned int v18; // r4@18
  unsigned int v19; // r5@18
  size_t v20; // r2@18
  int v21; // r0@20

  v2 = *(_DWORD *)(a1 + 48);
  v3 = (const void **)a2;
  v4 = v2 == 0;
  if ( v2 )
  {
    a2 = *(_DWORD *)(v2 + 140);
    v4 = a2 == 0;
  }
  if ( v4 )
    result = 0;
  else
    v5 = a2 + 8;
    v6 = *(_DWORD *)(a2 + 12);
    v7 = a2 + 8;
    v8 = a2 + 8;
    if ( v6 )
    {
      v9 = *v3;
      v10 = a2 + 8;
      v11 = *((_DWORD *)*v3 - 3);
      do
      {
        v8 = v6;
        while ( 1 )
        {
          v12 = *(_DWORD **)(v8 + 16);
          v13 = *(v12 - 3);
          v14 = *(v12 - 3);
          if ( v13 > v11 )
            v14 = v11;
          v15 = memcmp(v12, v9, v14);
          if ( !v15 )
            v15 = v13 - v11;
          if ( v15 >= 0 )
            break;
          v8 = *(_DWORD *)(v8 + 12);
          if ( !v8 )
          {
            v8 = v10;
            goto LABEL_17;
          }
        }
        v6 = *(_DWORD *)(v8 + 8);
        v10 = v8;
      }
      while ( v6 );
    }
LABEL_17:
    if ( v8 != v5 )
      v17 = *(_DWORD **)(v8 + 16);
      v18 = *((_DWORD *)*v3 - 3);
      v19 = *(v17 - 3);
      v20 = *((_DWORD *)*v3 - 3);
      if ( v18 > v19 )
        v20 = *(v17 - 3);
      v21 = memcmp(*v3, v17, v20);
      if ( !v21 )
        v21 = v18 - v19;
      if ( v21 < 0 )
        v8 = v5;
      v7 = v8;
    if ( v7 != v5 )
      result = 1;
  return result;
}


void __fastcall Entity::pushInitialParameter<Mob>(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char v5; // r0@1
  ClassID *v6; // r0@2
  __int64 v7; // kr00_8@4
  int v8; // r0@4
  void *v9; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  sub_21E8AF4(&v12, a2);
  v5 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
  __dmb();
  if ( !(v5 & 1) )
  {
    v6 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
    if ( v6 )
    {
      ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v6);
      j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
    }
  }
  v7 = ClassID::getID<Mob>(void)::id;
  v8 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(v3 + 8),
         (int **)&v12);
  *(_QWORD *)v8 = v7;
  *(_DWORD *)(v8 + 8) = v4;
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall Entity::clearActionQueue(Entity *this)
{
  Entity *v1; // r4@1
  ActionQueue *v2; // r6@1
  int v3; // r5@2
  void *v4; // r0@3
  unsigned int v5; // r6@4
  unsigned int v6; // r1@4
  unsigned int v7; // r7@5
  void *v8; // t1@6

  v1 = this;
  v2 = (ActionQueue *)*((_DWORD *)this + 851);
  if ( !v2 )
  {
    v2 = (ActionQueue *)operator new(0x28u);
    ActionQueue::ActionQueue(v2);
    v3 = *((_DWORD *)v1 + 851);
    *((_DWORD *)v1 + 851) = v2;
    if ( v3 )
    {
      v4 = *(void **)v3;
      if ( *(_DWORD *)v3 )
      {
        v5 = *(_DWORD *)(v3 + 36);
        v6 = *(_DWORD *)(v3 + 20);
        if ( v6 < v5 + 4 )
        {
          v7 = v6 - 4;
          do
          {
            v8 = *(void **)(v7 + 4);
            v7 += 4;
            operator delete(v8);
          }
          while ( v7 < v5 );
          v4 = *(void **)v3;
        }
        operator delete(v4);
      }
      operator delete((void *)v3);
      v2 = (ActionQueue *)*((_DWORD *)v1 + 851);
    }
  }
  j_j_j__ZN11ActionQueue10clearQueueEv(v2);
}


int __fastcall Entity::getAddPacket(Entity *this, int a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1
  int result; // r0@2
  void *v5; // r6@3

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 488))(a2) == 1 )
  {
    result = 0;
    *(_DWORD *)v3 = 0;
  }
  else
    v5 = operator new(0x78u);
    result = AddEntityPacket::AddEntityPacket((int)v5, v2);
    *(_DWORD *)v3 = v5;
  return result;
}


int __fastcall Entity::playSynchronizedSound(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r10@1
  int result; // r0@1
  int v10; // r8@2
  Level *v11; // r9@2
  int v12; // r7@2
  SynchedEntityData *v13; // r0@2
  int v14; // r4@2
  int v15; // r0@2

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  result = (*(int (**)(void))(*(_DWORD *)a1 + 288))();
  if ( !result )
  {
    v10 = *(_DWORD *)(v5 + 3084);
    v11 = *(Level **)(v5 + 3092);
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 488))(v5);
    v13 = (SynchedEntityData *)(v5 + 176);
    v14 = 0;
    v15 = SynchedEntityData::_find(v13, 0);
    if ( v15 )
      v14 = (*(_BYTE *)(v15 + 17) & 8u) >> 3;
    result = Level::broadcastSoundEvent(v11, v10, v6, v8, v7, v12, v14, a5);
  }
  return result;
}


int __fastcall Entity::reloadComponents(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r1@1
  bool v5; // zf@1
  int result; // r0@5
  bool v7; // zf@5

  v1 = a1;
  v2 = EntityDefinitionDiffList::getChangedDescription((EntityDefinitionDiffList *)(a1 + 3340));
  v3 = *(_DWORD *)(v1 + 48);
  v4 = *(_DWORD *)(v3 + 272);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_DWORD *)(v2 + 272) == 0;
  if ( !v5 )
  {
    AddRiderComponent::reloadComponent(*(AddRiderComponent **)(v1 + 3100));
    v3 = *(_DWORD *)(v1 + 48);
  }
  result = *(_DWORD *)(v3 + 436);
  v7 = result == 0;
  if ( result )
    result = *(_DWORD *)(v2 + 436);
    v7 = result == 0;
  if ( !v7 )
    result = j_j_j__ZN23TransformationComponent15reloadComponentEv(*(TransformationComponent **)(v1 + 3192));
  return result;
}


void __fastcall Entity::saveEntityFlags(Entity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  Entity *v3; // r5@1
  void *v4; // r0@1
  SynchedEntityData *v5; // r5@2
  char v6; // r0@2
  unsigned __int8 v7; // r1@2
  char v8; // r0@2
  void *v9; // r0@2
  int v10; // r0@3
  void *v11; // r0@3
  int v12; // r0@4
  void *v13; // r0@4
  int v14; // r0@5
  unsigned int v15; // r2@6
  void *v16; // r0@8
  __int64 v17; // r0@9
  void *v18; // r0@9
  int v19; // r0@10
  unsigned int v20; // r2@11
  void *v21; // r0@13
  int v22; // r0@14
  unsigned int v23; // r2@15
  void *v24; // r0@17
  int v25; // r0@18
  unsigned int v26; // r2@19
  void *v27; // r0@21
  int v28; // r0@22
  char v29; // r2@23
  void *v30; // r0@25
  int v31; // r0@26
  void *v32; // r0@26
  int v33; // r0@27
  void *v34; // r0@27
  int v35; // r0@28
  char v36; // r2@29
  void *v37; // r0@31
  int v38; // r0@32
  unsigned int v39; // r2@33
  void *v40; // r0@35
  int v41; // r0@36
  unsigned int v42; // r2@37
  void *v43; // r0@39
  int v44; // r0@40
  unsigned int v45; // r2@41
  void *v46; // r0@43
  unsigned int *v47; // r2@45
  signed int v48; // r1@47
  unsigned int *v49; // r2@49
  signed int v50; // r1@51
  unsigned int *v51; // r2@53
  signed int v52; // r1@55
  unsigned int *v53; // r2@57
  signed int v54; // r1@59
  unsigned int *v55; // r2@61
  signed int v56; // r1@63
  unsigned int *v57; // r2@65
  signed int v58; // r1@67
  unsigned int *v59; // r2@69
  signed int v60; // r1@71
  unsigned int *v61; // r2@73
  signed int v62; // r1@75
  unsigned int *v63; // r2@77
  signed int v64; // r1@79
  unsigned int *v65; // r2@81
  signed int v66; // r1@83
  unsigned int *v67; // r2@85
  signed int v68; // r1@87
  unsigned int *v69; // r2@89
  signed int v70; // r1@91
  unsigned int *v71; // r2@93
  signed int v72; // r1@95
  unsigned int *v73; // r2@97
  signed int v74; // r1@99
  unsigned int *v75; // r2@101
  signed int v76; // r1@103
  unsigned int *v77; // r2@105
  signed int v78; // r1@107
  int v79; // [sp+8h] [bp-90h]@40
  int v80; // [sp+10h] [bp-88h]@36
  int v81; // [sp+18h] [bp-80h]@32
  int v82; // [sp+20h] [bp-78h]@28
  int v83; // [sp+28h] [bp-70h]@27
  int v84; // [sp+30h] [bp-68h]@26
  int v85; // [sp+38h] [bp-60h]@22
  int v86; // [sp+40h] [bp-58h]@18
  int v87; // [sp+48h] [bp-50h]@14
  int v88; // [sp+50h] [bp-48h]@10
  int v89; // [sp+58h] [bp-40h]@9
  int v90; // [sp+60h] [bp-38h]@5
  int v91; // [sp+68h] [bp-30h]@4
  int v92; // [sp+70h] [bp-28h]@3
  int v93; // [sp+78h] [bp-20h]@2
  int v94; // [sp+80h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v94, "LootDropped");
  CompoundTag::putBoolean((int)v2, (const void **)&v94, *((_BYTE *)v3 + 3281));
  v4 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v94 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    }
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v93, "Color");
  v5 = (Entity *)((char *)v3 + 176);
  v6 = SynchedEntityData::getInt8(v5, 3);
  v8 = Palette::fromByte((Palette *)(v6 & 0xF), v7);
  CompoundTag::putByte((int)v2, (const void **)&v93, v8);
  v9 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v93 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v92, "Strength");
  v10 = SynchedEntityData::getInt(v5, 75);
  CompoundTag::putInt((int)v2, (const void **)&v92, v10);
  v11 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v92 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v91, "StrengthMax");
  v12 = SynchedEntityData::getInt(v5, 76);
  CompoundTag::putInt((int)v2, (const void **)&v91, v12);
  v13 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v91 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v90, "Sheared");
  v14 = SynchedEntityData::_find(v5, 0);
  if ( v14 )
    v15 = (*(_BYTE *)(v14 + 19) & 0x20u) >> 5;
  else
    LOBYTE(v15) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v90, v15);
  v16 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v90 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v89, "OwnerNew");
  v17 = SynchedEntityData::getInt64(v5, 5);
  CompoundTag::putInt64((int)v2, (const void **)&v89, v17, SHIDWORD(v17));
  v18 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v89 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v88, "Sitting");
  v19 = SynchedEntityData::_find(v5, 0);
  if ( v19 )
    v20 = (unsigned int)*(_BYTE *)(v19 + 18) >> 7;
    LOBYTE(v20) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v88, v20);
  v21 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v88 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v87, "IsBaby");
  v22 = SynchedEntityData::_find(v5, 0);
  if ( v22 )
    v23 = (*(_BYTE *)(v22 + 17) & 8u) >> 3;
    LOBYTE(v23) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v87, v23);
  v24 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v87 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v86, "IsTamed");
  v25 = SynchedEntityData::_find(v5, 0);
  if ( v25 )
    v26 = (*(_BYTE *)(v25 + 19) & 8u) >> 3;
    LOBYTE(v26) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v86, v26);
  v27 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v86 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v85, "IsAngry");
  v28 = SynchedEntityData::_find(v5, 0);
  if ( v28 )
    v29 = *(_BYTE *)(v28 + 19) & 1;
    v29 = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v85, v29);
  v30 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v85 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v84, "Variant");
  v31 = SynchedEntityData::getInt(v5, 2);
  CompoundTag::putInt((int)v2, (const void **)&v84, v31);
  v32 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v84 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v83, "MarkVariant");
  v33 = SynchedEntityData::getInt(v5, 44);
  CompoundTag::putInt((int)v2, (const void **)&v83, v33);
  v34 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v83 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v82, "Saddled");
  v35 = SynchedEntityData::_find(v5, 0);
  if ( v35 )
    v36 = *(_BYTE *)(v35 + 17) & 1;
    v36 = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v82, v36);
  v37 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v82 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v81, "Chested");
  v38 = SynchedEntityData::_find(v5, 0);
  if ( v38 )
    v39 = (*(_BYTE *)(v38 + 20) & 4u) >> 2;
    LOBYTE(v39) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v81, v39);
  v40 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v81 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v80, "ShowBottom");
  v41 = SynchedEntityData::_find(v5, 0);
  if ( v41 )
    v42 = (*(_BYTE *)(v41 + 20) & 0x10u) >> 4;
    LOBYTE(v42) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v80, v42);
  v43 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v80 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v79, "IsGliding");
  v44 = SynchedEntityData::_find(v5, 0);
  if ( v44 )
    v45 = (*(_BYTE *)(v44 + 19) & 0x40u) >> 6;
    LOBYTE(v45) = 0;
  CompoundTag::putBoolean((int)v2, (const void **)&v79, v45);
  v46 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v79 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
}


int __fastcall Entity::getEquipSlots(Entity *this)
{
  EquippableComponent *v1; // r0@1
  int result; // r0@2

  v1 = (EquippableComponent *)*((_DWORD *)this + 794);
  if ( v1 )
    result = j_j_j__ZNK19EquippableComponent12getSlotCountEv(v1);
  else
    result = 0;
  return result;
}


int __fastcall Entity::getFiringPos(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r1@1
  int result; // r0@1

  v2 = this;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 52))(a2);
  v4 = *(_QWORD *)v3;
  result = *(_DWORD *)(v3 + 8);
  *(_QWORD *)v2 = v4;
  *((_DWORD *)v2 + 2) = result;
  return result;
}


void __fastcall Entity::addAdditionalSaveData(Entity *this, CompoundTag *a2)
{
  Entity::addAdditionalSaveData(this, a2);
}


int __fastcall Entity::getRenderLeashHolder(Entity *this, int a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1
  __int64 v4; // r0@1

  v2 = a2;
  v3 = this;
  v4 = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 38);
  if ( !v4 )
    v4 = -1LL;
  *(_QWORD *)v3 = v4;
  LODWORD(v4) = v4 & HIDWORD(v4);
  if ( (_DWORD)v4 == -1 )
  {
    LODWORD(v4) = *(_DWORD *)(v2 + 64);
    if ( (_DWORD)v4 )
    {
      v4 = *(_QWORD *)RopeSystem::getEndPinEntity((RopeSystem *)v4);
      *(_QWORD *)v3 = v4;
    }
  }
  return v4;
}


int __fastcall Entity::setTarget(Entity *this, Entity *a2)
{
  char *v3; // r8@1
  Entity *v4; // r5@1
  double v5; // r0@2
  char *v6; // r6@2
  unsigned int v7; // r0@8
  int v8; // r6@10
  int *v9; // r5@10
  int v10; // r5@11
  unsigned int v11; // r0@15
  int v12; // r6@17
  int *v13; // r5@17
  int v14; // r4@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  void *v17; // r7@28
  int v18; // r1@28
  void *v19; // r0@28
  __int16 v20; // r0@33
  int (__fastcall *v21)(Entity *, _DWORD, float *, signed int); // r6@34
  int v22; // r0@34
  char v23; // r7@34
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  void *v35; // r5@46
  int v36; // r1@46
  void *v37; // r0@46
  void *v39; // [sp+4h] [bp-94h]@18
  unsigned int v40; // [sp+8h] [bp-90h]@15
  int v41; // [sp+Ch] [bp-8Ch]@15
  int v42; // [sp+10h] [bp-88h]@15
  signed int v43; // [sp+14h] [bp-84h]@15
  int v44; // [sp+18h] [bp-80h]@15
  int v45; // [sp+1Ch] [bp-7Ch]@49
  float v46; // [sp+20h] [bp-78h]@37
  void *ptr; // [sp+2Ch] [bp-6Ch]@11
  unsigned int v48; // [sp+30h] [bp-68h]@8
  int v49; // [sp+34h] [bp-64h]@8
  int v50; // [sp+38h] [bp-60h]@8
  signed int v51; // [sp+3Ch] [bp-5Ch]@8
  int v52; // [sp+40h] [bp-58h]@8
  int v53; // [sp+44h] [bp-54h]@31
  char v54; // [sp+48h] [bp-50h]@3

  _R11 = this;
  v3 = (char *)this + 3272;
  v4 = a2;
  if ( !a2 )
  {
    v5 = *(double *)v3;
    LODWORD(v5) &= HIDWORD(v5);
    if ( LODWORD(v5) == -1 )
      return *(unsigned __int64 *)&v5;
    if ( *(_DWORD *)(*((_DWORD *)_R11 + 12) + 268) )
    {
      v41 = 0;
      v42 = 0;
      v43 = 1065353216;
      v44 = 0;
      LODWORD(v5) = &v43;
      v11 = sub_21E6254(v5);
      v40 = v11;
      if ( v11 == 1 )
      {
        v45 = 0;
        v13 = &v45;
      }
      else
        if ( v11 >= 0x40000000 )
          goto LABEL_55;
        v12 = 4 * v11;
        v13 = (int *)operator new(4 * v11);
        _aeabi_memclr4(v13, v12);
      v39 = v13;
      Entity::initParams(_R11, (VariantParameterList *)&v39);
      EntityDefinitionDescriptor::executeTrigger(
        *((_DWORD *)_R11 + 12),
        _R11,
        (DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)_R11 + 12) + 268) + 4),
        (const VariantParameterList *)&v39);
      v14 = v41;
      while ( v14 )
        v35 = (void *)v14;
        v36 = *(_DWORD *)(v14 + 8);
        v14 = *(_DWORD *)v14;
        v37 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
        {
          v33 = (unsigned int *)(v36 - 4);
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
            j_j_j_j__ZdlPv_9(v37);
        }
        operator delete(v35);
      _aeabi_memclr4(v39, 4 * v40);
      if ( v39 && &v45 != v39 )
        operator delete(v39);
    }
    LODWORD(v5) = -1;
    *(_DWORD *)v3 = -1;
    *((_DWORD *)v3 + 1) = -1;
    return *(unsigned __int64 *)&v5;
  }
  v6 = (char *)a2 + 56;
  v5 = *((double *)a2 + 7);
  if ( (LODWORD(v5) & HIDWORD(v5)) == -1 )
    Level::getNewUniqueID((Level *)&v54, *((_DWORD *)v4 + 773));
    v5 = *(double *)&v54;
    *(_QWORD *)v6 = *(_QWORD *)&v54;
  if ( *(_QWORD *)v3 ^ *(_QWORD *)&v5 )
    if ( (LODWORD(v5) & HIDWORD(v5)) == -1 )
      Level::getNewUniqueID((Level *)&v54, *((_DWORD *)v4 + 773));
      v5 = *(double *)&v54;
      *(_QWORD *)v6 = *(_QWORD *)&v54;
    *(double *)v3 = v5;
    if ( !*(_DWORD *)(*((_DWORD *)_R11 + 12) + 264) )
      goto LABEL_33;
    v49 = 0;
    v50 = 0;
    v51 = 1065353216;
    v52 = 0;
    LODWORD(v5) = &v51;
    v7 = sub_21E6254(v5);
    v48 = v7;
    if ( v7 == 1 )
      v53 = 0;
      v9 = &v53;
      goto LABEL_11;
    if ( v7 < 0x40000000 )
      v8 = 4 * v7;
      v9 = (int *)operator new(4 * v7);
      _aeabi_memclr4(v9, v8);
LABEL_11:
      ptr = v9;
      Entity::initParams(_R11, (VariantParameterList *)&ptr);
        (DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)_R11 + 12) + 264) + 4),
        (const VariantParameterList *)&ptr);
      v10 = v49;
      while ( v10 )
        v17 = (void *)v10;
        v18 = *(_DWORD *)(v10 + 8);
        v10 = *(_DWORD *)v10;
        v19 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v18 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        operator delete(v17);
      _aeabi_memclr4(ptr, 4 * v48);
      v49 = 0;
      v50 = 0;
      if ( ptr && &v53 != ptr )
        operator delete(ptr);
LABEL_33:
      v20 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R11 + 488))(_R11);
      LODWORD(v5) = EntityClassTree::isMob(v20);
      if ( LODWORD(v5) == 1 )
        v21 = *(int (__fastcall **)(Entity *, _DWORD, float *, signed int))(*(_DWORD *)_R11 + 556);
        v22 = SynchedEntityData::_find((Entity *)((char *)_R11 + 176), 0);
        v23 = 105;
        if ( v22 && *(_BYTE *)(v22 + 17) & 8 )
          v23 = 106;
        __asm
          VLDR            S16, [R11,#0x16C]
          VLDR            S18, [R11,#0x170]
          VLDR            S20, [R11,#0x174]
        _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R11 + 644))(_R11);
        __asm { VMOV            S0, R0 }
        _R1 = &mce::Math::DEGRAD;
          VLDR            S2, [R1]
          VMUL.F32        S0, S2, S0
          VMOV            R5, S0
        _R0 = cosf(_R5);
        __asm { VMOV            S22, R0 }
        _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
          VMOV            S0, R0
          VLDR            S8, [R11,#0x68]
          VMUL.F32        S2, S22, S16
          VMUL.F32        S4, S0, S20
          VMUL.F32        S6, S22, S20
          VMUL.F32        S0, S0, S16
          VADD.F32        S2, S4, S2
          VLDR            S4, [R11,#0x60]
          VSUB.F32        S0, S6, S0
          VLDR            S6, [R11,#0x64]
          VADD.F32        S2, S2, S4
          VADD.F32        S4, S6, S18
          VADD.F32        S0, S0, S8
          VSTR            S2, [SP,#0x98+var_78]
          VSTR            S4, [SP,#0x98+var_74]
          VSTR            S0, [SP,#0x98+var_70]
        LODWORD(v5) = v21(_R11, (unsigned __int8)v23, &v46, -1);
LABEL_55:
    sub_21E57F4();
  return *(unsigned __int64 *)&v5;
}


void __fastcall Entity::onSynchedDataUpdate(Entity *this, int a2)
{
  int v2; // r8@1
  Entity *v3; // r4@1
  signed int v4; // r0@3
  int v5; // r6@4
  int v6; // r0@4
  int v7; // r5@9
  int v8; // r9@9
  void *v9; // r7@11
  int v10; // r0@11
  _DWORD *v11; // r7@16
  int v12; // r5@16
  int *v13; // r0@18
  int *v14; // r0@18
  int v15; // r7@18
  int *v16; // r0@18
  Entity **v17; // r6@18
  int v18; // r2@18
  void *v19; // r0@20
  void *v20; // r0@21
  void *v21; // r0@22
  void *v22; // r0@23
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  int v25; // r6@28
  int v26; // r0@32
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // [sp+8h] [bp-30h]@18
  int v34; // [sp+Ch] [bp-2Ch]@18
  int v35; // [sp+10h] [bp-28h]@18
  int v36; // [sp+14h] [bp-24h]@18

  v2 = a2;
  v3 = this;
  if ( a2 <= 69 )
  {
    if ( (unsigned int)(a2 - 39) <= 0x10 )
    {
      v4 = 1 << (a2 - 39);
      if ( v4 & 0x18001 )
      {
        v5 = SynchedEntityData::getFloat((Entity *)((char *)v3 + 176), 54);
        v6 = SynchedEntityData::getFloat((Entity *)((char *)v3 + 176), 55);
        (*(void (__fastcall **)(Entity *, int, int))(*(_DWORD *)v3 + 680))(v3, v5, v6);
        return;
      }
      if ( v4 & 0xC0 )
        v7 = SynchedEntityData::getInt8((Entity *)((char *)v3 + 176), 45);
        v8 = SynchedEntityData::getInt((Entity *)((char *)v3 + 176), 46);
        SynchedEntityData::getInt((Entity *)((char *)v3 + 176), 47);
        if ( (unsigned __int8)v7 == 247 || v8 <= 0 )
        {
          v26 = *((_DWORD *)v3 + 782);
          *((_DWORD *)v3 + 782) = 0;
          if ( v26 )
            (*(void (**)(void))(*(_DWORD *)v26 + 8))();
        }
        else
          v9 = operator new(0x18u);
          ContainerComponent::ContainerComponent((int)v9, (int)v3);
          v10 = *((_DWORD *)v3 + 782);
          *((_DWORD *)v3 + 782) = v9;
          if ( v10 )
          {
            (*(void (**)(void))(*(_DWORD *)v10 + 8))();
            v9 = (void *)*((_DWORD *)v3 + 782);
          }
          ContainerComponent::rebuildContainer((int)v9, v7, v8, 0, 0);
    }
    if ( a2 != 4 )
      return;
    goto LABEL_15;
  }
  if ( (unsigned int)(a2 - 70) < 4 )
LABEL_15:
    if ( SynchedEntityData::getInt8((Entity *)((char *)v3 + 176), 70) <= 0 )
      v25 = *((_DWORD *)v3 + 804);
      *((_DWORD *)v3 + 804) = 0;
      if ( v25 )
        BaseCommandBlock::~BaseCommandBlock((BaseCommandBlock *)(v25 + 4));
        operator delete((void *)v25);
    else
      v11 = operator new(0x38u);
      CommandBlockComponent::CommandBlockComponent(v11, (int)v3);
      v12 = *((_DWORD *)v3 + 804);
      *((_DWORD *)v3 + 804) = v11;
      if ( v12 )
        BaseCommandBlock::~BaseCommandBlock((BaseCommandBlock *)(v12 + 4));
        operator delete((void *)v12);
      v13 = (int *)SynchedEntityData::getString((Entity *)((char *)v3 + 176), 71);
      sub_21E8AF4(&v36, v13);
      v14 = (int *)SynchedEntityData::getString((Entity *)((char *)v3 + 176), 72);
      sub_21E8AF4(&v35, v14);
      v15 = SynchedEntityData::getInt8((Entity *)((char *)v3 + 176), 73);
      v16 = (int *)SynchedEntityData::getString((Entity *)((char *)v3 + 176), 4);
      sub_21E8AF4(&v34, v16);
      v17 = (Entity **)*((_DWORD *)v3 + 804);
      sub_21E8AF4(&v33, &v34);
      v18 = 0;
      if ( v15 > 0 )
        v18 = 1;
      CommandBlockComponent::onCommandBlockUpdate(v17, &v36, v18, &v33);
      v19 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v33 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      CommandBlockComponent::setLastOutput(*((_DWORD *)v3 + 804), &v35);
      v20 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v34 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v35 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v36 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
    if ( v2 == 4 )
      sub_21E7EE0((const void **)v3 + 843, 0, *(_BYTE **)(*((_DWORD *)v3 + 843) - 12), 0);
    return;
  if ( a2 == 78 )
    *((_BYTE *)this + 3364) = 1;
    *((_DWORD *)this + 842) = SynchedEntityData::getInt((Entity *)((char *)this + 176), 78);
}


signed int __fastcall Entity::isUnderLiquid(int a1, int a2)
{
  int v3; // r9@1
  float v13; // r1@1
  int v14; // r0@1
  signed int v15; // r5@3
  int v16; // r8@5
  float v18; // r1@5
  float v21; // r1@5
  int v22; // r7@5
  float v23; // r1@5
  int v24; // r6@5
  int *v25; // r5@5
  signed int v26; // r0@6
  LiquidBlock *v27; // r0@7
  int v28; // r1@7
  float v32; // [sp+4h] [bp-4Ch]@2

  _R4 = a1;
  v3 = a2;
  __asm
  {
    VLDR            S16, [R4,#0x184]
    VLDR            S18, [R4,#0x188]
    VLDR            S20, [R4,#0x18C]
  }
  _R0 = (*(int (**)(void))(*(_DWORD *)a1 + 644))();
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R5, S0
  _R0 = cosf(_R5);
  __asm { VMOV            S22, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
    VMOV            S0, R0
    VLDR            S8, [R4,#0x68]
    VMUL.F32        S2, S22, S16
    VMUL.F32        S4, S0, S20
    VMUL.F32        S6, S22, S20
    VMUL.F32        S0, S0, S16
    VADD.F32        S2, S4, S2
    VLDR            S4, [R4,#0x60]
    VSUB.F32        S0, S6, S0
    VLDR            S6, [R4,#0x64]
    VADD.F32        S16, S6, S18
    VADD.F32        S2, S2, S4
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0x50+var_4C]
    VSTR            S16, [SP,#0x50+var_48]
    VSTR            S0, [SP,#0x50+var_44]
  v14 = *(_DWORD *)(_R4 + 512);
  if ( v14 )
    if ( AABB::contains((AABB *)(v14 + 264), (const Vec3 *)&v32) )
      return 0;
    __asm { VLDR            S16, [SP,#0x50+var_48] }
  v16 = mce::Math::floor(*(mce::Math **)(_R4 + 72), v13);
  __asm { VMOV            R0, S16 }
  _R0 = mce::Math::floor(_R0, v18);
    VCVT.F32.S32    S0, S0
    VMOV            R0, S0
  v22 = mce::Math::floor(_R0, v21);
  v24 = mce::Math::floor(*(mce::Math **)(_R4 + 80), v23);
  v25 = (int *)BlockSource::getMaterial(*(BlockSource **)(_R4 + 3084), v16, v22, v24);
  if ( Material::isLiquid((Material *)v25) == 1 )
    v26 = Material::isType(v25, v3);
    v15 = 0;
    if ( v26 == 1 )
    {
      v27 = (LiquidBlock *)BlockSource::getData(*(BlockSource **)(_R4 + 3084), v16, v22, v24);
      _R0 = LiquidBlock::getHeightFromData(v27, v28);
      _R1 = v22 + 1;
      __asm
      {
        VLDR            S2, =0.11111
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VADD.F32        S0, S0, S2
        VMOV            S2, R0
        VSUB.F32        S0, S0, S2
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v15 = 1;
    }
  else
  return v15;
}


int __fastcall Entity::getViewVector(Entity *this, float a2, float a3, float a4)
{
  Entity *v4; // r4@1
  float v13; // r1@1
  mce::Math *v16; // r5@1
  float v18; // r1@1
  int result; // r0@1
  float v20; // [sp+0h] [bp-28h]@1

  v4 = this;
  Entity::getInterpolatedRotation((Entity *)&v20, a2, a3, a4);
  __asm { VLDR            S0, [SP,#0x28+var_24] }
  _R0 = &mce::Math::DEGRAD;
  __asm { VLDR            S16, [R0] }
  _R0 = &mce::Math::PI;
  __asm
  {
    VNMUL.F32       S0, S0, S16
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMOV            R5, S0
  }
  _R6 = mce::Math::cos(_R5, COERCE_FLOAT(&mce::Math::PI));
  _R0 = mce::Math::sin(_R5, v13);
    VLDR            S0, [SP,#0x28+var_28]
    VMUL.F32        S0, S0, S16
    VMOV            S16, R0
    VMOV            R1, S0
  v16 = (mce::Math *)(LODWORD(_R1) ^ 0x80000000);
  _R0 = mce::Math::cos((mce::Math *)(LODWORD(_R1) ^ 0x80000000), _R1) ^ 0x80000000;
    VMOV            S2, R6
    VMOV            S0, R0
    VMUL.F32        S16, S16, S0
    VMUL.F32        S18, S2, S0
  result = mce::Math::sin(v16, v18);
  __asm { VSTR            S16, [R4] }
  *((_DWORD *)v4 + 1) = result;
  __asm { VSTR            S18, [R4,#8] }
  return result;
}


int __fastcall Entity::move(Entity *this, const Vec3 *a2)
{
  __int64 v3; // kr00_8@1
  int v7; // r0@8
  int result; // r0@12
  AABB *i3; // r4@12
  AABB *v11; // r6@12
  int v12; // r11@11
  char *v13; // r0@11
  __int64 v14; // kr10_8@15
  int v15; // r5@16
  int *v16; // r5@24
  int v17; // r3@24
  int v18; // r7@24
  int v19; // r3@24
  int v20; // r6@24
  int v21; // r7@24
  BlockSource *v22; // r4@28
  char *v23; // r0@28
  signed int v25; // r0@38
  char *v26; // r4@39
  int v27; // r0@39
  bool v28; // zf@39
  int *v29; // r6@42
  bool v30; // zf@46
  int v31; // r0@49
  float *v32; // r8@49
  int v33; // r0@51
  int v34; // r0@51
  const AABB *v35; // r5@51
  const AABB *i; // r6@51
  int *v37; // r0@52
  __int64 j; // r4@55
  const AABB *v39; // r5@57
  const AABB *k; // r7@57
  float *v41; // r0@58
  float *v42; // r9@61
  __int64 l; // r4@61
  const AABB *v44; // r7@63 OVERLAPPED
  const AABB *v45; // r8@63 OVERLAPPED
  float *v46; // r0@64
  __int64 m; // r4@67
  char v49; // r0@72
  int v51; // r0@79
  signed int v52; // r1@80
  signed int v53; // r0@80
  int v54; // r4@89
  int v55; // r3@89
  int v56; // r7@89
  int v57; // r3@89
  int v58; // r6@89
  int v59; // r7@89
  int v60; // r7@89
  int v61; // r11@89
  char *v62; // r9@90
  char *v63; // r12@90
  int v64; // r3@92
  int v65; // r6@92
  int v66; // r0@92
  int v67; // r3@92
  int v68; // r5@92
  int v69; // r6@92
  int v70; // r0@93
  int v71; // r5@93
  unsigned int v72; // r1@93
  unsigned int v73; // r0@95
  unsigned int v74; // r10@95
  char *v75; // r8@101
  int v76; // r0@103
  int v77; // r3@103
  int v78; // r5@103
  int v79; // r0@103
  int v80; // r3@103
  int v81; // r5@103
  int v82; // r6@103
  char *n; // r0@103
  char *v84; // r1@104
  int v85; // r2@104
  int v86; // r3@104
  int v87; // r5@104
  int v88; // r6@104
  int v89; // r5@104
  int v90; // r6@104
  int v91; // r7@104
  BlockSource *v92; // r4@113
  unsigned __int64 *v93; // r0@113
  const AABB *v94; // r5@115
  const AABB *ii; // r6@115
  __int64 jj; // r4@117
  const AABB *v97; // r5@119
  const AABB *kk; // r6@119
  __int64 ll; // r4@121
  const AABB *v100; // r5@123
  const AABB *mm; // r6@123
  __int64 nn; // r4@125
  const AABB *v103; // r5@127
  const AABB *i1; // r6@127
  __int64 i2; // r4@129
  char *v106; // r0@131
  char *v107; // r0@134
  int v108; // r0@136
  _QWORD *v109; // r4@136
  __int64 v110; // r0@138
  __int64 v111; // kr58_8@143
  unsigned int v112; // r3@144
  int v113; // r2@144
  int v114; // r5@145
  int v115; // r7@145
  unsigned int v116; // r3@149
  unsigned int v117; // r0@149
  char v118; // r2@158
  unsigned int v119; // r1@159
  Block *v121; // r4@169
  float v122; // r1@169
  BlockSource *v124; // r4@181
  char *v125; // r0@181
  BlockSource *v127; // r4@195
  char *v128; // r0@195
  AABB *v130; // [sp+10h] [bp-260h]@89
  int v131; // [sp+14h] [bp-25Ch]@39
  int v132; // [sp+18h] [bp-258h]@39
  int v133; // [sp+1Ch] [bp-254h]@89
  int *ptr; // [sp+20h] [bp-250h]@27
  char *ptra; // [sp+20h] [bp-250h]@100
  char *ptrb; // [sp+20h] [bp-250h]@113
  char **v137; // [sp+24h] [bp-24Ch]@51
  Entity *v138; // [sp+28h] [bp-248h]@49
  float *v139; // [sp+2Ch] [bp-244h]@67
  float v140; // [sp+30h] [bp-240h]@128
  float v141; // [sp+34h] [bp-23Ch]@128
  float v142; // [sp+38h] [bp-238h]@128
  float v143; // [sp+3Ch] [bp-234h]@128
  float v144; // [sp+40h] [bp-230h]@128
  float v145; // [sp+44h] [bp-22Ch]@128
  int v146; // [sp+48h] [bp-228h]@124
  int v147; // [sp+4Ch] [bp-224h]@124
  float v148; // [sp+50h] [bp-220h]@124
  float v149; // [sp+54h] [bp-21Ch]@120
  int v150; // [sp+58h] [bp-218h]@120
  int v151; // [sp+5Ch] [bp-214h]@120
  int v152; // [sp+60h] [bp-210h]@116
  float v153; // [sp+64h] [bp-20Ch]@116
  int v154; // [sp+68h] [bp-208h]@116
  char v155; // [sp+6Ch] [bp-204h]@113
  float v156; // [sp+88h] [bp-1E8h]@52
  int v157; // [sp+8Ch] [bp-1E4h]@89
  int v158; // [sp+90h] [bp-1E0h]@89
  int v159; // [sp+94h] [bp-1DCh]@89
  int v160; // [sp+98h] [bp-1D8h]@89
  int v161; // [sp+9Ch] [bp-1D4h]@89
  int v162; // [sp+A0h] [bp-1D0h]@89
  int v163; // [sp+A4h] [bp-1CCh]@89
  int v164; // [sp+A8h] [bp-1C8h]@89
  float v165; // [sp+ACh] [bp-1C4h]@124
  int v166; // [sp+B0h] [bp-1C0h]@89
  float v167; // [sp+B4h] [bp-1BCh]@116
  int v168; // [sp+B8h] [bp-1B8h]@89
  float v169; // [sp+BCh] [bp-1B4h]@120
  int v170; // [sp+C0h] [bp-1B0h]@89
  int v171; // [sp+C4h] [bp-1ACh]@89
  __int64 v172; // [sp+C8h] [bp-1A8h]@52
  int v173; // [sp+D0h] [bp-1A0h]@52
  float v174; // [sp+D4h] [bp-19Ch]@51
  float v175; // [sp+D8h] [bp-198h]@51
  int v176; // [sp+DCh] [bp-194h]@51
  __int64 v177; // [sp+E0h] [bp-190h]@19
  int v178; // [sp+E8h] [bp-188h]@51
  __int64 v179; // [sp+ECh] [bp-184h]@51
  int v180; // [sp+F4h] [bp-17Ch]@51
  __int64 v181; // [sp+F8h] [bp-178h]@51
  int v182; // [sp+100h] [bp-170h]@51
  char v183; // [sp+104h] [bp-16Ch]@39
  __int64 v184; // [sp+120h] [bp-150h]@39
  int v185; // [sp+128h] [bp-148h]@39
  float v186; // [sp+130h] [bp-140h]@195
  char v187; // [sp+13Ch] [bp-134h]@195
  int v188; // [sp+158h] [bp-118h]@181
  char v189; // [sp+164h] [bp-10Ch]@181
  float v190; // [sp+180h] [bp-F0h]@28
  int v191; // [sp+188h] [bp-E8h]@28
  char v192; // [sp+18Ch] [bp-E4h]@28
  float v193; // [sp+1A8h] [bp-C8h]@24
  int v194; // [sp+1ACh] [bp-C4h]@24
  int v195; // [sp+1B0h] [bp-C0h]@24
  int v196; // [sp+1B4h] [bp-BCh]@24
  int v197; // [sp+1B8h] [bp-B8h]@24
  int v198; // [sp+1BCh] [bp-B4h]@24
  int v199; // [sp+1C0h] [bp-B0h]@24
  __int64 v200; // [sp+1C8h] [bp-A8h]@15
  int v201; // [sp+1D0h] [bp-A0h]@15
  int v202; // [sp+1D4h] [bp-9Ch]@15
  int v203; // [sp+1D8h] [bp-98h]@15
  int v204; // [sp+1DCh] [bp-94h]@15
  int v205; // [sp+1E0h] [bp-90h]@15
  __int64 v206; // [sp+1E8h] [bp-88h]@1
  int v207; // [sp+1F0h] [bp-80h]@1
  char v208; // [sp+1F8h] [bp-78h]@139
  char v209; // [sp+200h] [bp-70h]@137

  _R8 = this;
  v3 = *(_QWORD *)a2;
  v207 = *((_DWORD *)a2 + 2);
  v206 = v3;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R8 + 284))(_R8) )
    goto LABEL_220;
  __asm
  {
    VLDR            S0, [SP,#0x270+var_88]
    VABS.F32        S2, S0
    VLDR            S0, =500.0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    VLDR            S2, [SP,#0x270+var_88+4]
    VABS.F32        S2, S2
    VLDR            S2, [SP,#0x270+var_80]
LABEL_220:
    v207 = 0;
    v206 = 0LL;
  v7 = SynchedEntityData::_find((Entity *)((char *)_R8 + 176), 0);
  _ZF = v7 == 0;
  if ( v7 )
    _ZF = (*(_BYTE *)(v7 + 21) & 0x20) == 0;
  if ( !_ZF )
    v12 = (int)_R8 + 264;
    v13 = BlockSource::fetchCollisionShapes(
            *((BlockSource **)_R8 + 771),
            (Entity *)((char *)_R8 + 264),
            (float *)_R8 + 78,
            0,
            _R8);
    v200 = *(_QWORD *)&AABB::EMPTY;
    v201 = unk_2822118;
    v202 = unk_282211C;
    v203 = unk_2822120;
    v204 = unk_2822124;
    v205 = unk_2822128;
    v14 = *(_QWORD *)v13;
    if ( (_DWORD)v14 != HIDWORD(v14) )
    {
      v15 = v14 + 12;
      do
      {
        if ( AABB::isEmpty((AABB *)&v200) == 1 )
        {
          v200 = *(_QWORD *)(v15 - 12);
          v201 = *(_DWORD *)(v15 - 4);
          v202 = *(_DWORD *)v15;
          v203 = *(_DWORD *)(v15 + 4);
          v204 = *(_DWORD *)(v15 + 8);
          LOBYTE(v205) = *(_BYTE *)(v15 + 12);
        }
        else
          AABB::merge((AABB *)&v177, (const AABB *)&v200, v15 - 12);
        v15 += 28;
      }
      while ( v15 - HIDWORD(v14) != 12 );
    }
    if ( *((_BYTE *)_R8 + 352) )
      __asm { VMOV.F32        S0, #0.25 }
      *((_BYTE *)_R8 + 352) = 0;
      __asm
        VLDR            S2, [SP,#0x270+var_88]
        VMUL.F32        S20, S2, S0
        VLDR            S2, =0.05
        VSTR            S20, [SP,#0x270+var_88]
        VLDR            S4, [SP,#0x270+var_88+4]
        VMUL.F32        S16, S4, S2
        VSTR            S16, [SP,#0x270+var_88+4]
        VLDR            S2, [SP,#0x270+var_80]
        VMUL.F32        S18, S2, S0
        VSTR            S18, [SP,#0x270+var_80]
      *((_DWORD *)_R8 + 27) = 0;
      *((_DWORD *)_R8 + 28) = 0;
      *((_DWORD *)_R8 + 29) = 0;
    else
        VLDR            S20, [SP,#0x270+var_88]
        VLDR            S16, [SP,#0x270+var_88+4]
        VLDR            S18, [SP,#0x270+var_80]
    v16 = &v207;
    v17 = *((_DWORD *)_R8 + 67);
    v18 = *((_DWORD *)_R8 + 68);
    v193 = *(float *)v12;
    v194 = v17;
    v195 = v18;
    v19 = *((_DWORD *)_R8 + 70);
    v20 = *((_DWORD *)_R8 + 71);
    v21 = *((_DWORD *)_R8 + 72);
    v196 = *((_DWORD *)_R8 + 69);
    v197 = v19;
    v198 = v20;
    v199 = v21;
    if ( *((_BYTE *)_R8 + 216) && (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R8 + 312))(_R8) == 1 )
        VLDR            S0, =1.01
        VLDR            S2, [R8,#0x148]
        VMUL.F32        S24, S2, S0
        VLDR            S0, [SP,#0x270+var_88]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        ptr = (int *)((unsigned int)&v206 | 4);
        __asm { VMOV.F32        S22, S20 }
      else
        __asm
          VNEG.F32        S26, S24
          VMOV.F32        S22, S20
          VLDR            S28, =0.05
          VLDR            S30, =-0.05
        do
          v22 = (BlockSource *)*((_DWORD *)_R8 + 771);
          __asm
          {
            VSTR            S0, [SP,#0x270+var_F0]
            VSTR            S26, [SP,#0x270+var_EC]
          }
          v191 = 0;
          AABB::cloneMove((AABB *)&v192, (Entity *)((char *)_R8 + 264), (int)&v190);
          v23 = BlockSource::fetchCollisionShapes(v22, v22, (const AABB *)&v192, 0, 0, _R8);
          if ( (unsigned int)*(_QWORD *)v23 != *(_QWORD *)v23 >> 32 )
            break;
            VLDR            S0, [SP,#0x270+var_88]
            VCMPE.F32       S0, S28
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm
            {
              VCMPE.F32       S0, S30
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !(_NF ^ _VF) )
              __asm { VLDR            S22, =0.0 }
              LODWORD(v206) = 0;
              break;
          __asm { VCMPE.F32       S0, #0.0 }
          _R0 = sub_16E3C00;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            _R0 = (int (__fastcall *)(int, int, int, int, int, int, int, int (__fastcall *)(_DWORD)))&loc_16E3C04;
            VLDR            S2, [R0]
            VADD.F32        S22, S0, S2
            VMOV.F32        S0, S22
            VSTR            S22, [SP,#0x270+var_88]
            VCMPE.F32       S22, #0.0
        while ( !_ZF );
        VLDR            S0, [SP,#0x270+var_80]
        __asm { VMOV.F32        S26, S18 }
          VNEG.F32        S20, S24
          VMOV.F32        S26, S18
          v124 = (BlockSource *)*((_DWORD *)_R8 + 771);
          v188 = 0;
            VSTR            S20, [SP,#0x270+var_114]
            VSTR            S0, [SP,#0x270+var_110]
          AABB::cloneMove((AABB *)&v189, (Entity *)((char *)_R8 + 264), (int)&v188);
          v125 = BlockSource::fetchCollisionShapes(v124, v124, (const AABB *)&v189, 0, 0, _R8);
          __asm { VLDR            S0, [SP,#0x270+var_80] }
          if ( (unsigned int)*(_QWORD *)v125 != *(_QWORD *)v125 >> 32 )
              __asm { VLDR            S18, =0.0 }
              v207 = 0;
              v25 = 1;
              goto LABEL_215;
            VADD.F32        S26, S0, S2
            VMOV.F32        S0, S26
            VSTR            S26, [SP,#0x270+var_80]
            VCMPE.F32       S26, #0.0
      __asm { VLDR            S20, [SP,#0x270+var_88] }
      v25 = 1;
        VCMPE.F32       S20, #0.0
        __asm { VMOV.F32        S18, S26 }
LABEL_215:
        __asm { VMOV.F32        S20, S22 }
        v16 = &v207;
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
            VNEG.F32        S24, S24
            VMOV.F32        S18, S0
            VLDR            S28, =0.05
            VLDR            S30, =-0.05
            VLDR            S17, =0.0
          while ( 1 )
            v127 = (BlockSource *)*((_DWORD *)_R8 + 771);
              VSTR            S20, [SP,#0x270+var_140]
              VSTR            S24, [SP,#0x270+var_13C]
              VSTR            S18, [SP,#0x270+var_138]
            AABB::cloneMove((AABB *)&v187, (Entity *)((char *)_R8 + 264), (int)&v186);
            v128 = BlockSource::fetchCollisionShapes(v127, v127, (const AABB *)&v187, 0, 0, _R8);
            if ( (unsigned int)*(_QWORD *)v128 != *(_QWORD *)v128 >> 32 )
              VLDR            S0, [SP,#0x270+var_88]
              VCMPE.F32       S0, S28
              goto LABEL_221;
            if ( _NF ^ _VF )
LABEL_221:
              __asm
              {
                VCMPE.F32       S0, #0.0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                __asm { VADDLE.F32      S20, S0, S28 }
              else
                __asm { VADDGT.F32      S20, S0, S30 }
              __asm { VSTR            S20, [SP,#0x270+var_88] }
            else
              __asm { VMOV.F32        S20, S17 }
              VLDR            S0, [SP,#0x270+var_80]
                VCMPE.F32       S0, S30
              if ( !(_NF ^ _VF) )
                __asm { VLDR            S18, =0.0 }
                v207 = 0;
                v25 = 1;
                goto LABEL_39;
            __asm { VCMPE.F32       S0, #0.0 }
            _R0 = sub_16E3C00;
              VCMPE.F32       S20, #0.0
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              _R0 = (int (__fastcall *)(int, int, int, int, int, int, int, int (__fastcall *)(_DWORD)))&loc_16E3C04;
              VLDR            S2, [R0]
            v25 = 1;
              VADD.F32        S18, S0, S2
              VSTR            S18, [SP,#0x270+var_80]
            if ( !_ZF )
                VMOV.F32        S22, S20
                VMOV.F32        S26, S18
                VCMPE.F32       S18, #0.0
              if ( !_ZF )
                continue;
            goto LABEL_39;
          v25 = 1;
          VMOV.F32        S18, S26
          VMOV.F32        S20, S22
      ptr = (int *)((unsigned int)&v206 | 4);
      v25 = 0;
LABEL_39:
    v132 = v25;
    v184 = v206;
    v185 = v207;
    AABB::expanded((AABB *)&v183, (Entity *)((char *)_R8 + 264), (int)&v206);
    v26 = BlockSource::fetchCollisionShapes(
            (const AABB *)&v183,
    v131 = *((_BYTE *)_R8 + 3400);
    v27 = SynchedEntityData::_find((Entity *)((char *)_R8 + 176), 0);
    v28 = v27 == 0;
    if ( v27 )
      v28 = (*(_BYTE *)(v27 + 20) & 8) == 0;
    if ( v28 )
      v29 = ptr;
      if ( *((_BYTE *)_R8 + 3400) )
        Entity::testForCollidableMobs(_R8, *((BlockSource **)_R8 + 771), (const Vec3 *)&v183, (int)v26);
        *((_BYTE *)_R8 + 3400) = 0;
      Entity::testForEntityStacking(_R8, *((BlockSource **)_R8 + 771), (const Vec3 *)&v183, (int)v26);
    if ( *((_DWORD *)_R8 + 845) != *((_DWORD *)_R8 + 846) )
      goto LABEL_222;
    v30 = *((_BYTE *)_R8 + 537) == 0;
    if ( !*((_BYTE *)_R8 + 537) )
      v30 = *((_BYTE *)_R8 + 3392) == 0;
    if ( v30 )
      v138 = _R8;
      v32 = 0;
LABEL_222:
      v31 = *((_BYTE *)_R8 + 3376);
      if ( !v31 )
        v32 = (float *)1;
    v33 = *v29;
    LODWORD(v177) = 0;
    HIDWORD(v177) = v206;
    v178 = 0;
    v179 = (unsigned int)v206;
    v34 = *v16;
    v180 = 0;
    v181 = 0LL;
    v176 = 0;
    v182 = v34;
    v174 = 0.0;
    v175 = 0.0;
    v137 = (char **)v26;
    v35 = (const AABB *)(*(_QWORD *)v26 >> 32);
    for ( i = (const AABB *)*(_QWORD *)v26; v35 != i; v176 = *v37 )
      AABB::clipCollide((AABB *)&v172, i, (const Vec3 *)v12, (int)&v177, v32, (int *)&v156);
      __asm { VLDR            S0, [SP,#0x270+var_1E8] }
      i = (const AABB *)((char *)i + 28);
        VLDR            S2, [SP,#0x270+var_194]
        VCMPE.F32       S2, S0
      v177 = v172;
      __asm { VMRS            APSR_nzcv, FPSCR }
      v178 = v173;
      v37 = &v176;
      if ( _NF ^ _VF )
        v37 = (int *)&v156;
    AABB::move((AABB *)v12, (const Vec3 *)&v177);
    for ( j = *(_QWORD *)((char *)v138 + 292); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 28 )
      AABB::move((AABB *)j, (const Vec3 *)&v177);
    v39 = (const AABB *)(*(_QWORD *)v137 >> 32);
    for ( k = (const AABB *)*(_QWORD *)v137; v39 != k; v175 = *v41 )
      AABB::clipCollide((AABB *)&v172, k, (const Vec3 *)v12, (int)&v179, v32, (int *)&v156);
      k = (const AABB *)((char *)k + 28);
        VLDR            S2, [SP,#0x270+var_198]
      v179 = v172;
      v180 = v173;
      v41 = &v175;
        v41 = &v156;
    v42 = v32;
    AABB::move((AABB *)v12, (const Vec3 *)&v179);
    for ( l = *(_QWORD *)((char *)v138 + 292); HIDWORD(l) != (_DWORD)l; LODWORD(l) = l + 28 )
      AABB::move((AABB *)l, (const Vec3 *)&v179);
    for ( *(_QWORD *)&v44 = *(_QWORD *)v137; v45 != v44; v174 = *v46 )
      AABB::clipCollide((AABB *)&v172, v44, (const Vec3 *)v12, (int)&v181, v42, (int *)&v156);
      v44 = (const AABB *)((char *)v44 + 28);
        VLDR            S2, [SP,#0x270+var_19C]
      v181 = v172;
      v182 = v173;
      v46 = &v174;
        v46 = &v156;
    v139 = v42;
    AABB::move((AABB *)v12, (const Vec3 *)&v181);
    _R8 = *(float *)&v138;
    for ( m = *(_QWORD *)((char *)v138 + 292); HIDWORD(m) != (_DWORD)m; LODWORD(m) = m + 28 )
      AABB::move((AABB *)m, (const Vec3 *)&v181);
    __asm
      VLDR            S0, [SP,#0x270+var_194]
      VLDR            S2, [SP,#0x270+var_198]
      VADD.F32        S0, S2, S0
      VLDR            S2, [SP,#0x270+var_19C]
      VADD.F32        S0, S0, S2
    if ( _ZF )
      goto LABEL_223;
      VLDR            S2, =1.1921e-7
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v49 = 0;
LABEL_223:
      if ( *((_BYTE *)v138 + 3392) )
        goto LABEL_78;
        VLDR            S2, =1.1921e-7
        VCMPE.F32       S0, S2
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      _R0 = (int)v138 + 3396;
        VLDRGT          S4, [R0]
        VCMPEGT.F32     S4, S2
        VMRSGT          APSR_nzcv, FPSCR
      v49 = 1;
    *((_BYTE *)v138 + 3392) = v49;
LABEL_78:
      VSTR            S0, [R0]
      VLDR            S0, [SP,#0x270+var_190]
      VLDR            S6, [SP,#0x270+var_184]
      VLDR            S2, [SP,#0x270+var_190+4]
      VLDR            S8, [SP,#0x270+var_184+4]
      VADD.F32        S0, S6, S0
      VLDR            S4, [SP,#0x270+var_188]
      VLDR            S10, [SP,#0x270+var_17C]
      VADD.F32        S2, S8, S2
      VLDR            S6, [SP,#0x270+var_178]
      VADD.F32        S4, S10, S4
      VLDR            S8, [SP,#0x270+var_178+4]
      VLDR            S10, [SP,#0x270+var_170]
      VADD.F32        S24, S0, S6
      VADD.F32        S22, S2, S8
      VADD.F32        S26, S4, S10
      VSTR            S24, [SP,#0x270+var_88]
      VSTR            S22, [SP,#0x270+var_88+4]
      VSTR            S26, [SP,#0x270+var_80]
    if ( *((_BYTE *)v138 + 216) )
      v51 = 1;
      __asm { VCMPE.F32       S16, S22 }
      v52 = 0;
        VCMPE.F32       S16, #0.0
      v53 = 0;
      if ( !_ZF )
        v52 = 1;
        v53 = 1;
      v51 = v53 & v52;
      VLDR            S0, [R8,#0x148]
      VCMPE.F32       S0, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !(v51 ^ 1) )
        VCMPE.F32       S20, S24
          VCMPEEQ.F32     S18, S26
          VMRSEQ          APSR_nzcv, FPSCR
        v54 = 0;
        __asm { VSTR            S20, [SP,#0x270+var_1B4] }
        v170 = 0;
        v171 = 0;
        v166 = 0;
        __asm { VSTR            S0, [SP,#0x270+var_1BC] }
        v168 = 0;
        v163 = 0;
        v164 = 0;
        __asm { VSTR            S18, [SP,#0x270+var_1C4] }
        v130 = (AABB *)v12;
        v55 = *(_DWORD *)(v12 + 4);
        v56 = *(_DWORD *)(v12 + 8);
        v156 = *(float *)v12;
        v157 = v55;
        v158 = v56;
        v57 = *(_DWORD *)(v12 + 16);
        v58 = *(_DWORD *)(v12 + 20);
        v59 = *(_DWORD *)(v12 + 24);
        v159 = *(_DWORD *)(v12 + 12);
        v160 = v57;
        v161 = v58;
        v162 = v59;
        v60 = *(_QWORD *)((char *)v138 + 292) >> 32;
        v61 = *(_QWORD *)((char *)v138 + 292);
        v133 = v60;
        if ( v61 == v60 )
          v63 = 0;
          v62 = 0;
          do
            if ( v62 == (char *)v54 )
              v70 = (v62 - v63) >> 2;
              v71 = -1227133513 * v70;
              v72 = -1227133513 * v70;
              if ( v62 == v63 )
                v72 = 1;
              v73 = v72 + -1227133513 * v70;
              v74 = v73;
              if ( v73 > 0x9249249 )
                v74 = 153391689;
              if ( v73 < v72 )
              if ( v74 )
                ptra = v63;
                if ( v74 >= 0x924924A )
                  sub_21E57F4();
                v75 = (char *)operator new(28 * v74);
                v63 = ptra;
                v75 = 0;
              v76 = 7 * v71;
              v77 = *(_DWORD *)(v61 + 4);
              v78 = *(_DWORD *)(v61 + 8);
              v62 = v75;
              v79 = (int)&v75[4 * v76];
              *(_DWORD *)v79 = *(_DWORD *)v61;
              *(_DWORD *)(v79 + 4) = v77;
              *(_DWORD *)(v79 + 8) = v78;
              v79 += 12;
              v80 = *(_DWORD *)(v61 + 16);
              v81 = *(_DWORD *)(v61 + 20);
              v82 = *(_DWORD *)(v61 + 24);
              *(_DWORD *)v79 = *(_DWORD *)(v61 + 12);
              *(_DWORD *)(v79 + 4) = v80;
              *(_DWORD *)(v79 + 8) = v81;
              *(_DWORD *)(v79 + 12) = v82;
              for ( n = v63; (char *)v54 != n; *((_DWORD *)v84 + 3) = v91 )
                v84 = v62;
                v86 = *(_DWORD *)n;
                v87 = *((_DWORD *)n + 1);
                v88 = *((_DWORD *)n + 2);
                v85 = (int)(n + 12);
                n += 28;
                v62 += 28;
                *(_DWORD *)v84 = v86;
                *((_DWORD *)v84 + 1) = v87;
                *((_DWORD *)v84 + 2) = v88;
                v84 += 12;
                v89 = *(_DWORD *)(v85 + 4);
                v90 = *(_DWORD *)(v85 + 8);
                v91 = *(_DWORD *)(v85 + 12);
                *(_DWORD *)v84 = *(_DWORD *)v85;
                *((_DWORD *)v84 + 1) = v89;
                *((_DWORD *)v84 + 2) = v90;
              if ( v63 )
                operator delete(v63);
              v60 = v133;
              v63 = v75;
              v54 = (int)&v75[28 * v74];
              v64 = *(_DWORD *)(v61 + 4);
              v65 = *(_DWORD *)(v61 + 8);
              *(_DWORD *)v62 = *(_DWORD *)v61;
              *((_DWORD *)v62 + 1) = v64;
              *((_DWORD *)v62 + 2) = v65;
              v66 = (int)(v62 + 12);
              v67 = *(_DWORD *)(v61 + 16);
              v68 = *(_DWORD *)(v61 + 20);
              v69 = *(_DWORD *)(v61 + 24);
              *(_DWORD *)v66 = *(_DWORD *)(v61 + 12);
              *(_DWORD *)(v66 + 4) = v67;
              *(_DWORD *)(v66 + 8) = v68;
              *(_DWORD *)(v66 + 12) = v69;
            v61 += 28;
            v62 += 28;
          while ( v61 != v60 );
        ptrb = v63;
        AABB::set(__PAIR__(&v193, (unsigned int)v130));
        v92 = (BlockSource *)*((_DWORD *)v138 + 771);
        AABB::expanded((AABB *)&v155, v130, (int)&v184);
        v93 = (unsigned __int64 *)BlockSource::fetchCollisionShapes(v92, v92, (const AABB *)&v155, 0, 1, v138);
        std::vector<AABB,std::allocator<AABB>>::operator=(v137, v93);
        if ( v131 )
          Entity::testForCollidableMobs(v138, *((BlockSource **)v138 + 771), (const Vec3 *)&v183, (int)v137);
        v94 = (const AABB *)(*(_QWORD *)v137 >> 32);
        for ( ii = (const AABB *)*(_QWORD *)v137; v94 != ii; v168 = v154 )
          AABB::clipCollide((AABB *)&v152, ii, v130, (int)&v166, v139, 0);
          ii = (const AABB *)((char *)ii + 28);
          v166 = v152;
          v167 = v153;
        AABB::move(v130, (const Vec3 *)&v166);
        for ( jj = *(_QWORD *)((char *)v138 + 292); HIDWORD(jj) != (_DWORD)jj; LODWORD(jj) = jj + 28 )
          AABB::move((AABB *)jj, (const Vec3 *)&v166);
        v97 = (const AABB *)(*(_QWORD *)v137 >> 32);
        for ( kk = (const AABB *)*(_QWORD *)v137; v97 != kk; v171 = v151 )
          AABB::clipCollide((AABB *)&v149, kk, v130, (int)&v169, v139, 0);
          kk = (const AABB *)((char *)kk + 28);
          v169 = v149;
          v170 = v150;
        AABB::move(v130, (const Vec3 *)&v169);
        for ( ll = *(_QWORD *)((char *)v138 + 292); HIDWORD(ll) != (_DWORD)ll; LODWORD(ll) = ll + 28 )
          AABB::move((AABB *)ll, (const Vec3 *)&v169);
        v100 = (const AABB *)(*(_QWORD *)v137 >> 32);
        for ( mm = (const AABB *)*(_QWORD *)v137; v100 != mm; v165 = v148 )
          AABB::clipCollide((AABB *)&v146, mm, v130, (int)&v163, v139, 0);
          mm = (const AABB *)((char *)mm + 28);
          v163 = v146;
          v164 = v147;
        AABB::move(v130, (const Vec3 *)&v163);
        for ( nn = *(_QWORD *)((char *)v138 + 292); HIDWORD(nn) != (_DWORD)nn; LODWORD(nn) = nn + 28 )
          AABB::move((AABB *)nn, (const Vec3 *)&v163);
          VLDR            S0, [SP,#0x270+var_1C0]
          VLDR            S2, [SP,#0x270+var_1BC]
          VLDR            S4, [SP,#0x270+var_1B8]
          VNEG.F32        S0, S0
          VNEG.F32        S2, S2
          VNEG.F32        S4, S4
          VSTR            S0, [SP,#0x270+var_234]
          VSTR            S2, [SP,#0x270+var_230]
          VSTR            S4, [SP,#0x270+var_22C]
        v103 = (const AABB *)(*(_QWORD *)v137 >> 32);
        for ( i1 = (const AABB *)*(_QWORD *)v137; v103 != i1; v145 = v142 )
          AABB::clipCollide((AABB *)&v140, i1, v130, (int)&v143, v139, 0);
          i1 = (const AABB *)((char *)i1 + 28);
          v143 = v140;
          v144 = v141;
        AABB::move(v130, (const Vec3 *)&v143);
        _R8 = *(float *)&v138;
        for ( i2 = *(_QWORD *)((char *)v138 + 292); HIDWORD(i2) != (_DWORD)i2; LODWORD(i2) = i2 + 28 )
          AABB::move((AABB *)i2, (const Vec3 *)&v143);
          VLDR            S0, [SP,#0x270+var_234]
          VLDR            S2, [SP,#0x270+var_1C0]
          VLDR            S8, [SP,#0x270+var_1B0]
          VADD.F32        S0, S2, S0
          VLDR            S2, [SP,#0x270+var_230]
          VLDR            S10, [SP,#0x270+var_1AC]
          VSTR            S0, [SP,#0x270+var_1C0]
          VLDR            S4, [SP,#0x270+var_1BC]
          VADD.F32        S2, S4, S2
          VLDR            S4, [SP,#0x270+var_22C]
          VSTR            S2, [SP,#0x270+var_1BC]
          VADD.F32        S2, S2, S8
          VLDR            S6, [SP,#0x270+var_1B8]
          VLDR            S8, [SP,#0x270+var_1C8]
          VADD.F32        S4, S6, S4
          VLDR            S6, [SP,#0x270+var_1B4]
          VADD.F32        S0, S0, S6
          VLDR            S6, [SP,#0x270+var_1CC]
          VSTR            S4, [SP,#0x270+var_1B8]
          VADD.F32        S4, S10, S4
          VLDR            S10, [SP,#0x270+var_1C4]
          VADD.F32        S4, S4, S10
          VSTR            S0, [SP,#0x270+var_88]
          VSTR            S2, [SP,#0x270+var_88+4]
          VSTR            S4, [SP,#0x270+var_80]
        v106 = BlockSource::fetchCollisionShapes(
                 *((BlockSource **)v138 + 771),
                 v130,
                 0,
                 1,
                 v138);
        if ( (unsigned int)*(_QWORD *)v106 != *(_QWORD *)v106 >> 32 )
          goto LABEL_224;
          VLDR            S0, [SP,#0x270+var_88]
          VMUL.F32        S4, S24, S24
          VLDR            S2, [SP,#0x270+var_80]
          VMUL.F32        S6, S26, S26
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VCMPE.F32       S4, S0
        if ( _NF ^ _VF )
          _ZF = Level::isClientSide(*((Level **)v138 + 773)) == 1;
          v107 = ptrb;
          if ( !_ZF )
            goto LABEL_225;
          v108 = Level::getPrimaryLocalPlayer(*((Level **)v138 + 773));
          v109 = (_QWORD *)(v108 + 56);
          if ( (*(_DWORD *)(v108 + 56) & *(_DWORD *)(v108 + 60)) == -1 )
            Level::getNewUniqueID((Level *)&v209, *(_DWORD *)(v108 + 3092));
            *v109 = *(_QWORD *)&v209;
          v110 = *((_QWORD *)v138 + 7);
          if ( ((unsigned int)v110 & HIDWORD(v110)) == -1 )
            Level::getNewUniqueID((Level *)&v208, *((_DWORD *)v138 + 773));
            v110 = *(_QWORD *)&v208;
            *((_QWORD *)v138 + 7) = *(_QWORD *)&v208;
          _ZF = *v109 == v110;
          if ( _ZF )
LABEL_225:
              VLDR            S0, [SP,#0x270+var_1BC]
              VLDR            S2, [R8,#0x168]
              VADD.F32        S0, S2, S0
              VSTR            S0, [R8,#0x168]
LABEL_224:
            VSTR            S24, [SP,#0x270+var_88]
            VSTR            S22, [SP,#0x270+var_88+4]
          AABB::set(__PAIR__(&v156, (unsigned int)v130));
          v111 = *(_QWORD *)((char *)v138 + 292);
          if ( HIDWORD(v111) != (_DWORD)v111 )
            v112 = 0;
            v113 = 0;
            do
              v114 = v111 + v113;
              *(_DWORD *)(v111 + v113) = *(_DWORD *)&ptrb[v113];
              v115 = (int)&ptrb[v113];
              ++v112;
              v113 += 28;
              *(_DWORD *)(v114 + 4) = *(_DWORD *)(v115 + 4);
              *(_DWORD *)(v114 + 8) = *(_DWORD *)(v115 + 8);
              *(_DWORD *)(v114 + 12) = *(_DWORD *)(v115 + 12);
              *(_DWORD *)(v114 + 16) = *(_DWORD *)(v115 + 16);
              *(_DWORD *)(v114 + 20) = *(_DWORD *)(v115 + 20);
              *(_BYTE *)(v114 + 24) = *(_BYTE *)(v115 + 24);
            while ( v112 < HIDWORD(v111) );
        if ( v107 )
          operator delete(v107);
          VLDR            S24, [SP,#0x270+var_88]
          VLDR            S22, [SP,#0x270+var_88+4]
          VLDR            S26, [SP,#0x270+var_80]
      VLDR            S0, [R8,#0x108]
      VMOV.F32        S4, #0.5
      VLDR            S2, [R8,#0x114]
      VCMPE.F32       S18, S26
    LOBYTE(v116) = 0;
    __asm { VADD.F32        S0, S2, S0 }
    LOBYTE(v117) = 0;
      VCMPE.F32       S20, S24
      VMUL.F32        S0, S0, S4
      VSTR            S0, [R8,#0x48]
      VLDR            S0, [R8,#0x10C]
      VLDR            S2, [R8,#0x13C]
      VLDR            S6, [R8,#0x168]
      VSUB.F32        S0, S0, S6
      VSTR            S0, [R8,#0x4C]
      VLDR            S0, [R8,#0x110]
      VLDR            S2, [R8,#0x11C]
      VSTR            S0, [R8,#0x50]
    if ( !_ZF )
      LOBYTE(v116) = 1;
      VCMPE.F32       S16, S22
    __asm { VMRS            APSR_nzcv, FPSCR }
    *(_BYTE *)(LODWORD(_R8) + 218) = v116;
    __asm { VCMPE.F32       S16, #0.0 }
      LOBYTE(v117) = 1;
    *(_BYTE *)(LODWORD(_R8) + 219) = v117;
    if ( !(_NF ^ _VF) )
      goto LABEL_226;
LABEL_226:
      v119 = *(_DWORD *)(LODWORD(_R8) + 216);
      v118 = 0;
      v117 = v119 >> 24;
      v116 = v119 >> 16;
        if ( (_BYTE)v119 )
          __asm { VCMPE.F32       S16, #0.0 }
          v118 = 0;
            v118 = 1;
      v118 = 1;
    __asm { VMOV            R1, S22 }
    *(_BYTE *)(LODWORD(_R8) + 216) = v118;
    if ( (_BYTE)v116 )
    *(_BYTE *)(LODWORD(_R8) + 220) = v117;
    result = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)LODWORD(_R8) + 544))(LODWORD(_R8), _R1);
      VLDR            S0, [SP,#0x270+var_88]
      VCMPE.F32       S20, S0
      result = 0;
      *(_DWORD *)(LODWORD(_R8) + 108) = 0;
      VLDR            S0, [SP,#0x270+var_88+4]
      VCMPE.F32       S16, S0
      Entity::_getBlockOnPos((Entity *)&v156, _R8);
      v121 = (Block *)BlockSource::getBlock(*(BlockSource **)(LODWORD(_R8) + 3084), (const BlockPos *)&v156);
      (*(void (**)(void))(*(_DWORD *)v121 + 196))();
      if ( !Block::isType(v121, (const Block *)Block::mAir) && *(_BYTE *)(LODWORD(_R8) + 216) )
        (*(void (__fastcall **)(Block *, _DWORD, float *))(*(_DWORD *)v121 + 168))(v121, LODWORD(_R8), &v156);
      result = v132;
      if ( !v132 )
          VLDR            S0, [R8,#0x48]
          VLDR            S2, [R8,#0x54]
          VLDR            S4, [R8,#0x50]
          VLDR            S6, [R8,#0x5C]
          VSUB.F32        S0, S0, S2
          VSUB.F32        S2, S4, S6
          VMOV            R0, S0
        result = mce::Math::sqrt(_R0, v122);
          VLDR            S0, =0.6
          VMOV            S2, R0
          VMUL.F32        S0, S2, S0
          VLDR            S2, [R8,#0x154]
          VSTR            S0, [R8,#0x154]
      VLDR            S0, [SP,#0x270+var_80]
      VCMPE.F32       S18, S0
      VLDR            S0, =0.4
      *(_DWORD *)(LODWORD(_R8) + 116) = 0;
      VLDR            S2, [R8,#0x168]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R8,#0x168]
    return result;
  result = AABB::move((Entity *)((char *)_R8 + 264), (const Vec3 *)&v206);
  v11 = (AABB *)(*(_QWORD *)((char *)_R8 + 292) >> 32);
  for ( i3 = (AABB *)*(_QWORD *)((char *)_R8 + 292); v11 != i3; i3 = (AABB *)((char *)i3 + 28) )
    result = AABB::move(i3, (const Vec3 *)&v206);
    VLDR            S0, [R8,#0x108]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R8,#0x114]
    VADD.F32        S0, S2, S0
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R8,#0x48]
    VLDR            S0, [R8,#0x10C]
    VLDR            S2, [R8,#0x13C]
    VLDR            S6, [R8,#0x168]
    VSUB.F32        S0, S0, S6
    VSTR            S0, [R8,#0x4C]
    VLDR            S0, [R8,#0x110]
    VLDR            S2, [R8,#0x11C]
    VSTR            S0, [R8,#0x50]
  return result;
}


int __fastcall Entity::setPos(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int, int); // r2@2
  int v5; // r1@5

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a2 + 21) )
  {
    v4 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 688);
  }
  else
    a2 = a1 + 72;
    v4 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 48);
  v4(a1, a2);
  if ( *(_BYTE *)(v2 + 20) )
    v5 = v2 + 12;
    v5 = v3 + 120;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 72))(v3, v5);
}


unsigned int __fastcall Entity::setHurtTime(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 11);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


unsigned int __fastcall Entity::setTradingPlayer(Entity *this, Player *a2)
{
  Entity *v2; // r8@1
  SynchedEntityData *v3; // r5@1
  char *v4; // r4@2
  __int64 v5; // r6@2
  unsigned int result; // r0@5
  unsigned int v7; // r1@5
  unsigned int v8; // r1@7
  unsigned int v9; // r0@7
  int v10; // [sp+0h] [bp-20h]@3

  v2 = this;
  v3 = (Entity *)((char *)this + 176);
  if ( a2 )
  {
    v4 = (char *)a2 + 56;
    v5 = *((_QWORD *)a2 + 7);
    if ( ((unsigned int)v5 & HIDWORD(v5)) == -1 )
    {
      Level::getNewUniqueID((Level *)&v10, *((_DWORD *)a2 + 773));
      v5 = *(_QWORD *)&v10;
      *(_QWORD *)v4 = *(_QWORD *)&v10;
    }
  }
  else
    v5 = 0LL;
  result = SynchedEntityData::_get(v3, 68);
  v7 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v7 == 7 && *(_QWORD *)(result + 16) != v5 )
    *(_QWORD *)(result + 16) = v5;
    *(_BYTE *)(result + 8) = 1;
    v8 = v7 >> 16;
    v9 = *((_WORD *)v2 + 94);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *((_WORD *)v2 + 94) = v9;
    result = *((_WORD *)v2 + 95);
    if ( result > v8 )
      LOWORD(v8) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v8;
  return result;
}


int __fastcall Entity::lerpMotion(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 108) = *(_DWORD *)a2;
  *(_DWORD *)(result + 112) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 116) = *((_DWORD *)a2 + 2);
  return result;
}


char *__fastcall Entity::getPosOld(Entity *this)
{
  return (char *)this + 84;
}


_BOOL4 __fastcall Entity::hasRuntimeID(Entity *this)
{
  return *((_QWORD *)this + 414) != 0LL;
}


signed int __fastcall Entity::isSpawnableInCreative(int a1)
{
  int v1; // r4@1
  char v2; // r0@1
  void *v3; // r1@4
  int v4; // r2@4
  void *v5; // r0@5
  void *v6; // r1@12
  signed int result; // r0@16

  v1 = a1;
  v2 = byte_27FDD34;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27FDD34) )
  {
    std::set<EntityType,std::less<EntityType>,std::allocator<EntityType>>::set(
      (int)&unk_27FDD40,
      (int *)&unk_262E1F8,
      41);
    _cxa_atexit(std::set<EntityType,std::less<EntityType>,std::allocator<EntityType>>::~set);
    j___cxa_guard_release((unsigned int *)&byte_27FDD34);
  }
  v3 = &unk_27FDD44;
  v4 = dword_27FDD48;
  if ( dword_27FDD48 )
    do
    {
      v5 = (void *)v4;
      while ( *((_DWORD *)v5 + 4) < v1 )
      {
        v5 = (void *)*((_DWORD *)v5 + 3);
        if ( !v5 )
          goto LABEL_11;
      }
      v4 = *((_DWORD *)v5 + 2);
      v3 = v5;
    }
    while ( v4 );
  else
LABEL_11:
    v5 = v3;
  v6 = &unk_27FDD44;
  if ( v5 != &unk_27FDD44 )
    if ( *((_DWORD *)v5 + 4) > v1 )
      v5 = &unk_27FDD44;
    v6 = v5;
  result = 0;
  if ( v6 != &unk_27FDD44 )
    result = 1;
  return result;
}


int __fastcall Entity::wobble(Entity *this)
{
  Entity *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int v3; // r6@1
  int v4; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3
  int v8; // r0@8
  unsigned int v9; // r1@8
  unsigned int v10; // r1@10
  unsigned int v11; // r0@10
  int v12; // r0@15
  unsigned int v13; // r1@15
  unsigned int v14; // r1@17
  unsigned int v15; // r0@17

  v1 = this;
  v2 = (Entity *)((char *)this + 176);
  v3 = SynchedEntityData::getInt((Entity *)((char *)this + 176), 12);
  v4 = SynchedEntityData::_get(v2, 12);
  v5 = *(_DWORD *)(v4 + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(v4 + 12) != -v3 )
  {
    *(_DWORD *)(v4 + 12) = -v3;
    *(_BYTE *)(v4 + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v1 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v1 + 94) = v7;
    if ( *((_WORD *)v1 + 95) > v6 )
      LOWORD(v6) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v6;
  }
  v8 = SynchedEntityData::_get(v2, 11);
  v9 = *(_DWORD *)(v8 + 4);
  if ( (unsigned __int8)v9 == 2 && *(_DWORD *)(v8 + 12) != 10 )
    v10 = v9 >> 16;
    *(_DWORD *)(v8 + 12) = 10;
    *(_BYTE *)(v8 + 8) = 1;
    v11 = *((_WORD *)v1 + 94);
    if ( v11 >= v10 )
      LOWORD(v11) = v10;
    *((_WORD *)v1 + 94) = v11;
    if ( *((_WORD *)v1 + 95) > v10 )
      LOWORD(v10) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v10;
  v12 = SynchedEntityData::_get(v2, 1);
  v13 = *(_DWORD *)(v12 + 4);
  if ( (unsigned __int8)v13 == 2 && *(_DWORD *)(v12 + 12) != -10 )
    v14 = v13 >> 16;
    *(_DWORD *)(v12 + 12) = -10;
    *(_BYTE *)(v12 + 8) = 1;
    v15 = *((_WORD *)v1 + 94);
    if ( v15 >= v14 )
      LOWORD(v15) = v14;
    *((_WORD *)v1 + 94) = v15;
    if ( *((_WORD *)v1 + 95) > v14 )
      LOWORD(v14) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v14;
  return (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 700))(v1);
}


int __fastcall Entity::canBeLeashed(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int result; // r0@4

  v1 = this;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (*(_BYTE *)(v2 + 19) & 0x10) == 0;
  if ( v3 )
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 580))(v1);
  else
    result = 0;
  return result;
}


int __fastcall Entity::getChestSlots(Entity *this)
{
  Entity *v1; // r6@1
  SynchedEntityData *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  char v5; // r0@2
  bool v6; // zf@2
  int v8; // r5@8

  v1 = this;
  v2 = (Entity *)((char *)this + 176);
  v3 = 0;
  v4 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( !v4 )
    return v3;
  v5 = *(_BYTE *)(v4 + 20);
  v6 = (v5 & 4) == 0;
  if ( v5 & 4 )
    v6 = *((_DWORD *)v1 + 782) == 0;
  if ( v6 )
    return 0;
  if ( SynchedEntityData::getInt(v2, 75) >= 1 )
  {
    v8 = SynchedEntityData::getInt(v2, 47);
    return v8 * SynchedEntityData::getInt(v2, 75);
  }
  return j_j_j__ZNK17SynchedEntityData6getIntEt_0(v2, 46);
}


char *__fastcall Entity::getPos(Entity *this)
{
  return (char *)this + 72;
}


unsigned int __fastcall Entity::setBlockTarget(Entity *this, const BlockPos *a2)
{
  Entity *v2; // r4@1
  const BlockPos *v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  __int64 v6; // r2@3
  unsigned int v7; // r1@7
  unsigned int v8; // r0@7

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 48);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 6 )
  {
    if ( *(_DWORD *)(result + 12) == *(_DWORD *)v3 )
    {
      HIDWORD(v6) = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(result + 16) == HIDWORD(v6) )
      {
        HIDWORD(v6) = *(_DWORD *)(result + 16);
        if ( *(_DWORD *)(result + 20) == *((_DWORD *)v3 + 2) )
          return result;
      }
    }
    else
    LODWORD(v6) = *(_DWORD *)v3;
    *(_QWORD *)(result + 12) = v6;
    v7 = v5 >> 16;
    *(_DWORD *)(result + 20) = *((_DWORD *)v3 + 2);
    *(_BYTE *)(result + 8) = 1;
    v8 = *((_WORD *)v2 + 94);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *((_WORD *)v2 + 94) = v8;
    result = *((_WORD *)v2 + 95);
    if ( result > v7 )
      LOWORD(v7) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v7;
  }
  return result;
}


Entity **__fastcall Entity::_findRider(Entity *this, Entity *a2)
{
  Entity **result; // r0@1
  Entity **v3; // r2@1
  __int64 v4; // kr00_8@1

  v4 = *(_QWORD *)((char *)this + 476);
  result = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
  v3 = (Entity **)v4;
  if ( (Entity **)v4 != result )
  {
    while ( *v3 != a2 )
    {
      ++v3;
      if ( result == v3 )
        return result;
    }
    result = v3;
  }
  return result;
}


int __fastcall Entity::isWorldBuilder(Entity *this)
{
  return 0;
}


    && (v9 = Entity::getTradeOffers(v8))
{
    && *(_DWORD *)MerchantRecipe::getBuyAItem((MerchantRecipe *)(v10 + 232 * v4)) != *v2 )
  {
    v12 = *(_DWORD *)MerchantRecipe::getBuyBItem(v11);
    result = 0;
    if ( v12 == *v2 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


void __fastcall Entity::loadEntityFlags(Entity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Entity *v3; // r4@1
  void *v4; // r0@1
  Palette *v5; // r0@2
  unsigned __int8 v6; // r1@2
  int v7; // r7@2
  int v8; // r0@2
  unsigned int v9; // r1@2
  unsigned int v10; // r1@4
  unsigned int v11; // r0@4
  void *v12; // r0@9
  int v13; // r7@10
  int v14; // r0@10
  int v15; // r0@12
  unsigned int v16; // r1@12
  unsigned int v17; // r1@14
  unsigned int v18; // r0@14
  void *v19; // r0@19
  int v20; // r7@20
  int v21; // r0@20
  int v22; // r0@22
  unsigned int v23; // r1@22
  unsigned int v24; // r1@24
  unsigned int v25; // r0@24
  void *v26; // r0@29
  int v27; // r0@30
  void *v28; // r0@30
  signed int v29; // r7@31
  void *v30; // r0@31
  void (__fastcall *v31)(Entity *, _BOOL4); // r6@33
  _BOOL4 v32; // r0@33
  void *v33; // r0@33
  int v34; // r0@34
  void *v35; // r0@34
  int v36; // r0@35
  void *v37; // r0@35
  int v38; // r0@36
  void *v39; // r0@36
  int v40; // r0@37
  void *v41; // r0@37
  int v42; // r0@38
  void *v43; // r0@38
  int v44; // r0@39
  void *v45; // r0@39
  int v46; // r0@40
  void *v47; // r0@40
  signed int v48; // r7@41
  void *v49; // r0@41
  void (__fastcall *v50)(Entity *); // r6@42
  void *v51; // r0@43
  unsigned int *v52; // r2@44
  signed int v53; // r1@46
  int v54; // r7@49
  int v55; // r0@49
  unsigned int v56; // r1@49
  unsigned int v57; // r1@51
  unsigned int v58; // r0@51
  void *v59; // r0@56
  int v60; // r5@57
  int v61; // r0@57
  unsigned int v62; // r1@57
  unsigned int v63; // r1@59
  unsigned int v64; // r0@59
  void *v65; // r0@64
  unsigned int *v66; // r2@66
  signed int v67; // r1@68
  unsigned int *v68; // r2@70
  signed int v69; // r1@72
  unsigned int *v70; // r2@74
  signed int v71; // r1@76
  unsigned int *v72; // r2@78
  signed int v73; // r1@80
  unsigned int *v74; // r2@82
  signed int v75; // r1@84
  unsigned int *v76; // r2@86
  signed int v77; // r1@88
  unsigned int *v78; // r2@90
  signed int v79; // r1@92
  unsigned int *v80; // r2@94
  signed int v81; // r1@96
  unsigned int *v82; // r2@98
  signed int v83; // r1@100
  unsigned int *v84; // r2@102
  signed int v85; // r1@104
  unsigned int *v86; // r2@106
  signed int v87; // r1@108
  unsigned int *v88; // r2@110
  signed int v89; // r1@112
  unsigned int *v90; // r2@114
  signed int v91; // r1@116
  unsigned int *v92; // r2@118
  signed int v93; // r1@120
  unsigned int *v94; // r2@122
  signed int v95; // r1@124
  unsigned int *v96; // r2@126
  signed int v97; // r1@128
  unsigned int *v98; // r2@154
  signed int v99; // r1@156
  int v100; // [sp+8h] [bp-B0h]@57
  int v101; // [sp+10h] [bp-A8h]@49
  int v102; // [sp+18h] [bp-A0h]@48
  int v103; // [sp+20h] [bp-98h]@43
  int v104; // [sp+28h] [bp-90h]@41
  int v105; // [sp+30h] [bp-88h]@40
  int v106; // [sp+38h] [bp-80h]@39
  int v107; // [sp+40h] [bp-78h]@38
  int v108; // [sp+48h] [bp-70h]@37
  int v109; // [sp+50h] [bp-68h]@36
  int v110; // [sp+58h] [bp-60h]@35
  int v111; // [sp+60h] [bp-58h]@34
  int v112; // [sp+68h] [bp-50h]@33
  int v113; // [sp+70h] [bp-48h]@31
  int v114; // [sp+78h] [bp-40h]@30
  int v115; // [sp+80h] [bp-38h]@20
  int v116; // [sp+88h] [bp-30h]@10
  int v117; // [sp+90h] [bp-28h]@2
  int v118; // [sp+98h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v118, "LootDropped");
  *((_BYTE *)v3 + 3281) = CompoundTag::getBoolean((int)v2, (const void **)&v118);
  v4 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
  {
    v66 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
    }
    else
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v117, "Color");
  v5 = (Palette *)CompoundTag::getByte((int)v2, (const void **)&v117);
  v7 = Palette::fromByte(v5, v6);
  v8 = SynchedEntityData::_get((Entity *)((char *)v3 + 176), 3);
  v9 = *(_DWORD *)(v8 + 4);
  if ( !(_BYTE)v9 && *(_BYTE *)(v8 + 9) != v7 )
    *(_BYTE *)(v8 + 9) = v7;
    *(_BYTE *)(v8 + 8) = 1;
    v10 = v9 >> 16;
    v11 = *((_WORD *)v3 + 94);
    if ( v11 >= v10 )
      LOWORD(v11) = v10;
    *((_WORD *)v3 + 94) = v11;
    if ( *((_WORD *)v3 + 95) > v10 )
      LOWORD(v10) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v10;
  v12 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v117 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v116, "Strength");
  v13 = CompoundTag::getInt((int)v2, (const void **)&v116);
  v14 = SynchedEntityData::getInt((Entity *)((char *)v3 + 176), 76);
  if ( v14 < v13 )
    v13 = v14;
  v15 = SynchedEntityData::_get((Entity *)((char *)v3 + 176), 75);
  v16 = *(_DWORD *)(v15 + 4);
  if ( (unsigned __int8)v16 == 2 && *(_DWORD *)(v15 + 12) != v13 )
    *(_DWORD *)(v15 + 12) = v13;
    *(_BYTE *)(v15 + 8) = 1;
    v17 = v16 >> 16;
    v18 = *((_WORD *)v3 + 94);
    if ( v18 >= v17 )
      LOWORD(v18) = v17;
    *((_WORD *)v3 + 94) = v18;
    if ( *((_WORD *)v3 + 95) > v17 )
      LOWORD(v17) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v17;
  v19 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v116 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v115, "StrengthMax");
  v20 = CompoundTag::getInt((int)v2, (const void **)&v115);
  v21 = SynchedEntityData::getInt((Entity *)((char *)v3 + 176), 76);
  if ( v21 < v20 )
    v20 = v21;
  v22 = SynchedEntityData::_get((Entity *)((char *)v3 + 176), 75);
  v23 = *(_DWORD *)(v22 + 4);
  if ( (unsigned __int8)v23 == 2 && *(_DWORD *)(v22 + 12) != v20 )
    *(_DWORD *)(v22 + 12) = v20;
    *(_BYTE *)(v22 + 8) = 1;
    v24 = v23 >> 16;
    v25 = *((_WORD *)v3 + 94);
    if ( v25 >= v24 )
      LOWORD(v25) = v24;
    *((_WORD *)v3 + 94) = v25;
    if ( *((_WORD *)v3 + 95) > v24 )
      LOWORD(v24) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v24;
  v26 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v115 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v114, "Sheared");
  v27 = CompoundTag::getBoolean((int)v2, (const void **)&v114);
  Entity::setStatusFlag((int)v3, 29, v27);
  v28 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v114 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v113, "Sitting");
  v29 = CompoundTag::contains((int)v2, (const void **)&v113);
  v30 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v113 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( v29 == 1 )
    v31 = *(void (__fastcall **)(Entity *, _BOOL4))(*(_DWORD *)v3 + 352);
    sub_21E94B4((void **)&v112, "Sitting");
    v32 = CompoundTag::getBoolean((int)v2, (const void **)&v112);
    v31(v3, v32);
    v33 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v98 = (unsigned int *)(v112 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v99 = __ldrex(v98);
        while ( __strex(v99 - 1, v98) );
      }
      else
        v99 = (*v98)--;
      if ( v99 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v111, "IsBaby");
  v34 = CompoundTag::getBoolean((int)v2, (const void **)&v111);
  Entity::setStatusFlag((int)v3, 11, v34);
  v35 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v111 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v110, "IsTamed");
  v36 = CompoundTag::getBoolean((int)v2, (const void **)&v110);
  Entity::setStatusFlag((int)v3, 27, v36);
  v37 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v110 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v109, "IsAngry");
  v38 = CompoundTag::getBoolean((int)v2, (const void **)&v109);
  Entity::setStatusFlag((int)v3, 24, v38);
  v39 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v109 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v108, "Saddled");
  v40 = CompoundTag::getBoolean((int)v2, (const void **)&v108);
  Entity::setStatusFlag((int)v3, 8, v40);
  v41 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v108 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v107, "Chested");
  v42 = CompoundTag::getBoolean((int)v2, (const void **)&v107);
  Entity::setStatusFlag((int)v3, 34, v42);
  v43 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v107 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v106, "ShowBottom");
  v44 = CompoundTag::getBoolean((int)v2, (const void **)&v106);
  Entity::setStatusFlag((int)v3, 36, v44);
  v45 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v106 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v105, "IsGliding");
  v46 = CompoundTag::getBoolean((int)v2, (const void **)&v105);
  Entity::setStatusFlag((int)v3, 30, v46);
  v47 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v105 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v104, "Owner");
  v48 = CompoundTag::contains((int)v2, (const void **)&v104);
  v49 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v104 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 348);
  if ( v48 == 1 )
    sub_21E94B4((void **)&v103, "Owner");
    CompoundTag::getInt((int)v2, (const void **)&v103);
    v50(v3);
    v51 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) == &dword_28898C0 )
      goto LABEL_49;
    v52 = (unsigned int *)(v103 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      goto LABEL_195;
LABEL_194:
    v53 = (*v52)--;
    goto LABEL_195;
  sub_21E94B4((void **)&v102, "OwnerNew");
  CompoundTag::getInt64((int)v2, (const void **)&v102);
  v50(v3);
  v51 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) == &dword_28898C0 )
    goto LABEL_49;
  v52 = (unsigned int *)(v102 - 4);
  if ( !&pthread_create )
    goto LABEL_194;
  __dmb();
  do
    v53 = __ldrex(v52);
  while ( __strex(v53 - 1, v52) );
LABEL_195:
  if ( v53 <= 0 )
    j_j_j_j__ZdlPv_9(v51);
LABEL_49:
  sub_21E94B4((void **)&v101, "Variant");
  v54 = CompoundTag::getInt((int)v2, (const void **)&v101);
  v55 = SynchedEntityData::_get((Entity *)((char *)v3 + 176), 2);
  v56 = *(_DWORD *)(v55 + 4);
  if ( (unsigned __int8)v56 == 2 && *(_DWORD *)(v55 + 12) != v54 )
    *(_DWORD *)(v55 + 12) = v54;
    *(_BYTE *)(v55 + 8) = 1;
    v57 = v56 >> 16;
    v58 = *((_WORD *)v3 + 94);
    if ( v58 >= v57 )
      LOWORD(v58) = v57;
    *((_WORD *)v3 + 94) = v58;
    if ( *((_WORD *)v3 + 95) > v57 )
      LOWORD(v57) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v57;
  v59 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v101 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  sub_21E94B4((void **)&v100, "MarkVariant");
  v60 = CompoundTag::getInt((int)v2, (const void **)&v100);
  v61 = SynchedEntityData::_get((Entity *)((char *)v3 + 176), 44);
  v62 = *(_DWORD *)(v61 + 4);
  if ( (unsigned __int8)v62 == 2 && *(_DWORD *)(v61 + 12) != v60 )
    *(_DWORD *)(v61 + 12) = v60;
    *(_BYTE *)(v61 + 8) = 1;
    v63 = v62 >> 16;
    v64 = *((_WORD *)v3 + 94);
    if ( v64 >= v63 )
      LOWORD(v64) = v63;
    *((_WORD *)v3 + 94) = v64;
    if ( *((_WORD *)v3 + 95) > v63 )
      LOWORD(v63) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v63;
  v65 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v100 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
}


int __fastcall Entity::hasSaddle(Entity *this)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = *(_BYTE *)(v2 + 17) & 1;
  return v1;
}


int __fastcall Entity::spawnAtLocation(Entity *this, int a2, int a3, float a4)
{
  Entity *v4; // r5@1
  float v5; // r4@1
  int (__fastcall *v6)(Entity *, int *, _DWORD); // r7@1
  int v7; // r4@1
  int v9; // [sp+0h] [bp-60h]@1
  int v10; // [sp+8h] [bp-58h]@5
  void *v11; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = *(int (__fastcall **)(Entity *, int *, _DWORD))(*(_DWORD *)this + 452);
  ItemInstance::ItemInstance((ItemInstance *)&v9, a2, a3, 0);
  v7 = v6(v4, &v9, LODWORD(v5));
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  return v7;
}


int __fastcall Entity::getColor(Entity *this)
{
  char v1; // r0@1
  unsigned __int8 v2; // r1@1

  v1 = SynchedEntityData::getInt8((Entity *)((char *)this + 176), 3);
  return j_j_j__ZN7Palette8fromByteEh((Palette *)(v1 & 0xF), v2);
}


unsigned int __fastcall Entity::canMate(Entity *this, const Entity *a2)
{
  BreedableComponent *v2; // r0@1
  unsigned int result; // r0@2

  v2 = (BreedableComponent *)*((_DWORD *)this + 781);
  if ( v2 )
    result = BreedableComponent::canMate(v2, a2);
  else
    result = 0;
  return result;
}


unsigned int __fastcall Entity::setStatusFlag(int a1, int a2, int a3)
{
  int v3; // r4@1
  SynchedEntityData *v4; // r8@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r0@2
  int v9; // r1@2
  int v10; // t1@2
  int v11; // r3@2
  int v12; // r2@2
  int v13; // r0@4
  unsigned int v14; // r0@4
  unsigned int v15; // r1@4
  int v16; // r0@10
  int v17; // r7@10
  signed int v18; // r3@10
  int v19; // r1@10 OVERLAPPED
  int v20; // r2@10 OVERLAPPED
  unsigned int v21; // r6@10
  unsigned int result; // r0@12
  int v23; // r0@15
  unsigned int v24; // r0@15
  unsigned int v25; // r1@15
  int v26; // r0@20
  int v27; // r7@20
  signed int v28; // r3@20
  int v29; // r1@20 OVERLAPPED
  int v30; // r2@20 OVERLAPPED
  unsigned int v31; // r6@20
  int v32; // r0@23
  unsigned int v33; // r1@23

  v3 = a1;
  v4 = (SynchedEntityData *)(a1 + 176);
  v5 = a2;
  v6 = a3;
  if ( a2 != 45 )
  {
    if ( a3 == 1 )
      goto LABEL_10;
LABEL_20:
    v26 = SynchedEntityData::_get(v4, 0);
    v27 = v5 - 32;
    v28 = 1 << v5;
    *(_QWORD *)&v29 = *(_QWORD *)(v26 + 16);
    v31 = 1u >> (32 - v5);
    if ( v27 >= 0 )
      v31 = 1 << v27;
    *(_DWORD *)(v26 + 16) = v29 & ~v28;
    *(_DWORD *)(v26 + 20) = v30 & ~v31;
    result = v29 & v28 | v30 & v31;
    if ( result )
      goto LABEL_23;
    return result;
  }
  v7 = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 0);
  v10 = *(_DWORD *)(v7 + 16);
  v8 = v7 + 16;
  v9 = v10;
  v11 = *(_DWORD *)(v8 + 4);
  v12 = *(_DWORD *)(v8 + 4) & 0x2000;
  if ( v6 != 1 )
    *(_DWORD *)v8 = v9;
    *(_DWORD *)(v8 + 4) = v11 & 0xFFFFDFFF;
    if ( v12 )
    {
      v23 = SynchedEntityData::_get(v4, 0);
      *(_BYTE *)(v23 + 8) = 1;
      v24 = *(_WORD *)(v23 + 6);
      v25 = *(_WORD *)(v3 + 188);
      if ( v25 >= v24 )
        LOWORD(v25) = v24;
      *(_WORD *)(v3 + 188) = v25;
      if ( *(_WORD *)(v3 + 190) > v24 )
        LOWORD(v24) = *(_WORD *)(v3 + 190);
      *(_WORD *)(v3 + 190) = v24;
    }
    goto LABEL_20;
  *(_DWORD *)v8 = v9;
  *(_DWORD *)(v8 + 4) = v11 | 0x2000;
  if ( !v12 )
    v13 = SynchedEntityData::_get(v4, 0);
    *(_BYTE *)(v13 + 8) = 1;
    v14 = *(_WORD *)(v13 + 6);
    v15 = *(_WORD *)(v3 + 188);
    if ( v15 >= v14 )
      LOWORD(v15) = v14;
    *(_WORD *)(v3 + 188) = v15;
    if ( *(_WORD *)(v3 + 190) > v14 )
      LOWORD(v14) = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v14;
LABEL_10:
  v16 = SynchedEntityData::_get(v4, 0);
  v17 = v5 - 32;
  v18 = 1 << v5;
  *(_QWORD *)&v19 = *(_QWORD *)(v16 + 16);
  v21 = 1u >> (32 - v5);
  if ( v17 >= 0 )
    v21 = 1 << v17;
  *(_DWORD *)(v16 + 16) = v19 | v18;
  *(_DWORD *)(v16 + 20) = v20 | v21;
  result = v19 & v18 | v20 & v21;
  if ( !result )
LABEL_23:
    v32 = SynchedEntityData::_get(v4, 0);
    *(_BYTE *)(v32 + 8) = 1;
    result = *(_WORD *)(v32 + 6);
    v33 = *(_WORD *)(v3 + 188);
    if ( v33 >= result )
      LOWORD(v33) = result;
    *(_WORD *)(v3 + 188) = v33;
    if ( *(_WORD *)(v3 + 190) > result )
      result = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = result;
  return result;
}


int __fastcall Entity::isAngry(Entity *this)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = *(_BYTE *)(v2 + 19) & 1;
  return v1;
}


int __fastcall Entity::isShootable(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::hasUniqueID(Entity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = (*((_QWORD *)this + 7) >> 32) & *((_QWORD *)this + 7);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


void __fastcall Entity::pushInitialParameter<Mob>(int a1, int *a2, int a3)
{
  Entity::pushInitialParameter<Mob>(a1, a2, a3);
}


signed int __fastcall Entity::isSurfaceMob(Entity *this)
{
  return 1;
}


int __fastcall Entity::lerpTo(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a1;
  v4 = a3;
  (*(void (**)(void))(*(_DWORD *)a1 + 48))();
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 72))(v3, v4);
}


int __fastcall Entity::setShakeTime(int result, int a2)
{
  *(_DWORD *)(result + 548) = a2;
  return result;
}


void __fastcall Entity::setEquipFromPacket(Entity *this, const UpdateEquipPacket *a2)
{
  Entity *v2; // r5@1
  const UpdateEquipPacket *v3; // r4@1
  EquippableComponent *v4; // r7@1
  int v5; // r6@2
  SlotDescriptor *v6; // r0@3
  SlotDescriptor *v7; // r7@3

  v2 = this;
  v3 = a2;
  v4 = (EquippableComponent *)*((_DWORD *)this + 794);
  if ( !v4 )
  {
    v4 = (EquippableComponent *)operator new(0x10u);
    EquippableComponent::EquippableComponent((int)v4, (int)v2);
    v5 = *((_DWORD *)v2 + 794);
    *((_DWORD *)v2 + 794) = v4;
    if ( v5 )
    {
      v7 = (SlotDescriptor *)(*(_QWORD *)(v5 + 4) >> 32);
      v6 = (SlotDescriptor *)*(_QWORD *)(v5 + 4);
      if ( v6 != v7 )
      {
        do
          v6 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v6) + 104);
        while ( v7 != v6 );
        v6 = *(SlotDescriptor **)(v5 + 4);
      }
      if ( v6 )
        operator delete((void *)v6);
      operator delete((void *)v5);
      v4 = (EquippableComponent *)*((_DWORD *)v2 + 794);
    }
  }
  j_j_j__ZN19EquippableComponent17setDataFromPacketERK17UpdateEquipPacket(v4, v3);
}


unsigned int __fastcall Entity::setMarkVariant(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 44);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


float __fastcall Entity::spawnPukeParticles(Entity *this)
{
  signed int v16; // r5@4
  char *v18; // r0@5
  float result; // r0@5
  float v22; // [sp+18h] [bp-78h]@5
  float v23; // [sp+24h] [bp-6Ch]@1

  _R4 = this;
  (*(void (__fastcall **)(float *, Entity *, signed int))(*(_DWORD *)this + 244))(&v23, this, 1065353216);
  __asm
  {
    VLDR            S0, [SP,#0x90+var_6C]
    VLDR            S2, [SP,#0x90+var_68]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [SP,#0x90+var_64]
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
    __asm
    {
      VLDR            S20, [R0]
      VLDR            S16, [R0,#4]
      VLDR            S18, [R0,#8]
    }
  else
      VDIV.F32        S18, S4, S6
      VDIV.F32        S16, S2, S6
      VDIV.F32        S20, S0, S6
  __asm { VMOV.F32        S0, #-0.25 }
  _R0 = &mce::Math::PI;
    VLDR            S22, [R0]
    VMUL.F32        S0, S22, S0
    VMOV            R6, S0
  _R5 = cosf(_R6);
  _R6 = sinf(_R6);
    VLDR            S24, [R4,#0x16C]
    VLDR            S26, [R4,#0x170]
    VLDR            S28, [R4,#0x174]
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 644))(_R4);
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R7, S0
  _R0 = cosf(_R7);
  __asm { VMOV            S30, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R7) ^ 0x80000000));
    VMOV            S0, R0
    VLDR            S1, =-0.6
    VMUL.F32        S2, S30, S28
    VLDR            S3, [R4,#0x64]
    VMUL.F32        S4, S0, S24
    VLDR            S5, [R4,#0x68]
    VMUL.F32        S8, S30, S24
    VMUL.F32        S0, S0, S28
    VMOV            S6, R6
    VLDR            S30, =-0.08
    VMOV            S10, R5
    VLDR            S17, =-0.16
    VMUL.F32        S12, S6, S20
    VLDR            S19, =-0.24
    VMUL.F32        S14, S10, S18
    VLDR            S21, =-0.32
    VSUB.F32        S2, S2, S4
    VLDR            S4, =0.0625
    VMUL.F32        S10, S10, S20
    VLDR            S23, =-0.4
    VMUL.F32        S4, S22, S4
  v16 = 8;
    VMUL.F32        S6, S6, S18
    VADD.F32        S0, S0, S8
    VLDR            S8, [R4,#0x60]
    VADD.F32        S18, S3, S26
    VMUL.F32        S16, S16, S1
    VSUB.F32        S20, S14, S12
    VADD.F32        S22, S2, S5
    VMOV            R8, S4
    VADD.F32        S26, S6, S10
    VADD.F32        S24, S0, S8
    VMOV.F32        S28, #0.5
  do
    v18 = Level::getRandom(*((Level **)_R4 + 773));
    _R0 = Random::nextGaussian((Random *)v18);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S28
      VADD.F32        S2, S24, S0
      VADD.F32        S4, S18, S0
      VADD.F32        S0, S22, S0
      VSTR            S2, [SP,#0x90+var_78]
      VSTR            S4, [SP,#0x90+var_74]
      VSTR            S0, [SP,#0x90+var_70]
      VSTR            S16, [SP,#0x90+var_80]
    Level::addParticle(*((_DWORD *)_R4 + 773), 41, (int)&v22);
      VMUL.F32        S0, S26, S30
      VMUL.F32        S2, S20, S30
      VSTR            S0, [SP,#0x90+var_84]
      VSTR            S2, [SP,#0x90+var_7C]
      VMUL.F32        S0, S26, S17
      VMUL.F32        S2, S20, S17
      VMUL.F32        S0, S26, S19
      VMUL.F32        S2, S20, S19
      VMUL.F32        S0, S26, S21
      VMUL.F32        S2, S20, S21
      VMUL.F32        S0, S26, S23
      VMUL.F32        S2, S20, S23
    _R7 = cosf(_R8);
    result = sinf(_R8);
    __asm { VMOV            S0, R0 }
    --v16;
      VMOV            S2, R7
      VMUL.F32        S4, S0, S26
      VMUL.F32        S6, S2, S20
      VMUL.F32        S0, S0, S20
      VMUL.F32        S2, S2, S26
      VSUB.F32        S20, S6, S4
      VADD.F32        S26, S0, S2
  while ( !_ZF );
  return result;
}


int __fastcall Entity::interactPreventDefault(Entity *this)
{
  return 0;
}


  if ( Entity::isRegionValid(**((Entity ***)v1 + 1)) )
{
    v6 = (Dimension *)Entity::getDimension(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 524))(v5);
    if ( v7 == 3 )
      v7 = 0;
    v6 = (Dimension *)Level::createDimension(*(_DWORD *)(v2 + 28), v7);
  v8 = **((_DWORD **)v1 + 1);
  v9 = *(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 1196);
  v10 = Dimension::getChunkSource(v6);
  v9(v8, v10);
  result = **((_DWORD **)v1 + 2);
  if ( result )
    Entity::reload(**((Entity ***)v1 + 1));
    v12 = *(__int64 *)((char *)v1 + 4);
    HIDWORD(v12) = *(_DWORD *)HIDWORD(v12);
    result = (*(int (**)(void))(**(_DWORD **)v12 + 480))();
  return result;
}


void __fastcall Entity::saveEntityFlags(Entity *this, CompoundTag *a2)
{
  Entity::saveEntityFlags(this, a2);
}


int __fastcall Entity::causeFallDamage(int result, float a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 476); v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 548))() )
  {
    v4 = *v2;
    ++v2;
  }
  return result;
}


signed int __fastcall Entity::getNextActionEvent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  ActionQueue *v4; // r7@1
  int v5; // r6@2
  void *v6; // r0@3
  unsigned int v7; // r7@4
  unsigned int v8; // r1@4
  unsigned int v9; // r4@5
  void *v10; // t1@6

  v2 = a1;
  v3 = a2;
  v4 = *(ActionQueue **)(a1 + 3404);
  if ( !v4 )
  {
    v4 = (ActionQueue *)operator new(0x28u);
    ActionQueue::ActionQueue(v4);
    v5 = *(_DWORD *)(v2 + 3404);
    *(_DWORD *)(v2 + 3404) = v4;
    if ( v5 )
    {
      v6 = *(void **)v5;
      if ( *(_DWORD *)v5 )
      {
        v7 = *(_DWORD *)(v5 + 36);
        v8 = *(_DWORD *)(v5 + 20);
        if ( v8 < v7 + 4 )
        {
          v9 = v8 - 4;
          do
          {
            v10 = *(void **)(v9 + 4);
            v9 += 4;
            operator delete(v10);
          }
          while ( v9 < v7 );
          v6 = *(void **)v5;
        }
        operator delete(v6);
      }
      operator delete((void *)v5);
      v4 = *(ActionQueue **)(v2 + 3404);
    }
  }
  return j_j_j__ZN11ActionQueue18getNextActionEventER11ActionEvent((int)v4, v3);
}


signed int __fastcall Entity::isTargetable(Entity *this)
{
  return 1;
}


void __fastcall Entity::loadEntityFlags(Entity *this, const CompoundTag *a2)
{
  Entity::loadEntityFlags(this, a2);
}


signed int __fastcall Entity::getTradingPlayer(Entity *this)
{
  Entity *v1; // r4@1
  signed int result; // r0@2
  __int64 v3; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 773) )
  {
    v3 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 68);
    result = j_j_j__ZNK5Level9getPlayerE14EntityUniqueID_0(*((_DWORD *)v1 + 773), SHIDWORD(v3), v3, HIDWORD(v3));
  }
  else
    result = 0;
  return result;
}


int __fastcall Entity::setCollidableMob(int result, bool a2)
{
  *(_BYTE *)(result + 3401) = a2;
  return result;
}


TickWorldComponent *__fastcall Entity::updateTickingData(Entity *this)
{
  Entity *v1; // r4@1
  TickWorldComponent *result; // r0@1
  Dimension *v3; // r5@4
  int v8; // r0@6
  __int64 *v11; // r7@10
  int v12; // r0@13
  int *v13; // r6@13
  unsigned int *v14; // r1@14
  unsigned int v15; // r2@16
  TickingAreasManager *v16; // r0@18
  int v17; // r5@20
  unsigned int *v18; // r1@21
  unsigned int v19; // r0@23
  unsigned int *v20; // r7@27
  unsigned int v21; // r0@29
  int v22; // r5@34
  unsigned int *v23; // r1@35
  unsigned int v24; // r0@37
  unsigned int *v25; // r6@41
  unsigned int v26; // r0@43
  int v27; // [sp+0h] [bp-38h]@13
  int v28; // [sp+4h] [bp-34h]@13
  int v29; // [sp+8h] [bp-30h]@12
  int v30; // [sp+Ch] [bp-2Ch]@13
  char v31; // [sp+10h] [bp-28h]@11

  v1 = this;
  result = (TickWorldComponent *)*((_BYTE *)this + 3097);
  if ( !result )
  {
    result = (TickWorldComponent *)*((_DWORD *)v1 + 816);
    if ( result )
    {
      if ( !TickWorldComponent::hasTickingArea(result) )
      {
        v3 = (Dimension *)*((_DWORD *)v1 + 772);
        if ( TickWorldComponent::isAlwaysActive(*((TickWorldComponent **)v1 + 816)) )
        {
          __asm { VLDR            S16, =3.4028e38 }
        }
        else
          v8 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
          _R0 = Dimension::distanceToNearestPlayerSqr2D(
                  (int)v3,
                  *(_DWORD *)v8,
                  *(_DWORD *)(v8 + 4),
                  *(_DWORD *)(v8 + 8));
          __asm { VMOV            S16, R0 }
          goto LABEL_52;
        _R0 = TickWorldComponent::getMaxDistToPlayers(*((TickWorldComponent **)v1 + 816));
        __asm
          VMOV            S0, R0
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_52:
          v11 = (__int64 *)Dimension::getTickingAreasConst(v3);
          if ( (*((_DWORD *)v1 + 14) & *((_DWORD *)v1 + 15)) == -1 )
          {
            Level::getNewUniqueID((Level *)&v31, *((_DWORD *)v1 + 773));
            *((_QWORD *)v1 + 7) = *(_QWORD *)&v31;
          }
          TickingAreaListBase::getAreaFor((int)&v29, v11, (unsigned __int64 *)v1 + 7);
          if ( v29 )
            v12 = *((_DWORD *)v1 + 816);
            v13 = &v30;
            v27 = v29;
            v28 = v30;
            if ( v30 )
            {
              v14 = (unsigned int *)(v30 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v15 = __ldrex(v14);
                while ( __strex(v15 + 1, v14) );
              }
              else
                ++*v14;
            }
            TickWorldComponent::setTickingArea(v12, (int)&v27);
            v17 = v28;
            if ( v28 )
              v18 = (unsigned int *)(v28 + 4);
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 == 1 )
                v20 = (unsigned int *)(v17 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v21 = __ldrex(v20);
                  while ( __strex(v21 - 1, v20) );
                }
                else
                  v21 = (*v20)--;
                if ( v21 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
          else
            v16 = (TickingAreasManager *)Level::getTickingAreasMgr(*((Level **)v1 + 773));
            TickingAreasManager::addEntityArea(v16, v3, v1);
          v22 = *v13;
          if ( *v13 )
            v23 = (unsigned int *)(v22 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            else
              v24 = (*v23)--;
            if ( v24 == 1 )
              v25 = (unsigned int *)(v22 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
                v26 = (*v25)--;
              if ( v26 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
      }
      result = (TickWorldComponent *)TickWorldComponent::hasTickingArea(*((TickWorldComponent **)v1 + 816));
      if ( result == (TickWorldComponent *)1 )
        result = (TickWorldComponent *)TickWorldComponent::updateArea(*((TickWorldComponent **)v1 + 816));
    }
  }
  return result;
}


int __fastcall Entity::canBePulledIntoVehicle(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::getPickRadius(Entity *this)
{
  return 1036831949;
}


signed int __fastcall Entity::isInLava(Entity *this)
{
  int v9; // [sp+0h] [bp-38h]@0
  int v10; // [sp+4h] [bp-34h]@0
  int v11; // [sp+8h] [bp-30h]@0
  char v12; // [sp+Ch] [bp-2Ch]@13

  _R4 = this;
  __asm
  {
    VLDR            S0, =-0.1
    VLDR            S8, [R4,#0x114]
    VLDR            S2, [R4,#0x108]
    VLDR            S1, =0.1
    VADD.F32        S8, S8, S0
    VLDR            S4, [R4,#0x10C]
    VADD.F32        S2, S2, S1
    VLDR            S3, =0.4
    VLDR            S10, [R4,#0x118]
    VLDR            S14, =-0.4
    VADD.F32        S4, S4, S3
    VLDR            S12, [R4,#0x11C]
    VADD.F32        S10, S10, S14
    VLDR            S6, [R4,#0x110]
    VADD.F32        S0, S12, S0
    VADD.F32        S6, S6, S1
    VCMPE.F32       S8, S2
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S12, S2
    VMOV.F32        S14, S4
    VCMPE.F32       S10, S4
    VMOV.F32        S1, S6
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S12, S8 }
    VCMPE.F32       S0, S6
    VMOV            R1, S12
    __asm { VMOVLT.F32      S14, S10 }
    VCMPE.F32       S6, S0
    VMOV            R2, S14
    __asm { VMOVLT.F32      S1, S0 }
    VCMPE.F32       S4, S10
    VMOV            R3, S1
    __asm { VMOVLT.F32      S6, S0 }
    VCMPE.F32       S2, S8
    __asm { VMOVLT.F32      S4, S10 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S2, S8 }
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S4, [SP,#0x38+var_34]
    VSTR            S6, [SP,#0x38+var_30]
  AABB::AABB(COERCE_FLOAT(&v12), _R1, _R2, v9, v10, v11);
  return BlockSource::containsMaterial(*((const BlockPos **)_R4 + 771), (mce::Math **)&v12, 6);
}


int __fastcall Entity::getSlotItems(int result, int a2, int a3)
{
  int v3; // r1@1

  v3 = *(_DWORD *)(a2 + 3176);
  if ( v3 )
  {
    result = EquippableComponent::getSlot((EquippableComponent *)result, v3, a3);
  }
  else
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
  return result;
}


signed int __fastcall Entity::isSkyLit(Entity *this, float a2)
{
  float v3; // r1@1
  int v4; // r2@1
  char v10; // [sp+4h] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-20h]@1
  float v12; // [sp+14h] [bp-1Ch]@1
  int v13; // [sp+18h] [bp-18h]@1

  _R4 = this;
  v3 = *((float *)this + 19);
  v4 = *((_DWORD *)this + 20);
  v11 = *((_DWORD *)this + 18);
  v12 = v3;
  v13 = v4;
  __asm
  {
    VLDR            S0, [R4,#0x10C]
    VLDR            S2, [R4,#0x118]
    VLDR            S4, [R4,#0x13C]
    VSUB.F32        S0, S2, S0
    VLDR            S2, [SP,#0x30+var_1C]
    VLDR            S6, =-0.66
    VSUB.F32        S2, S2, S4
    VMUL.F32        S0, S0, S6
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x30+var_1C]
  }
  BlockPos::BlockPos((int)&v10, (int)&v11);
  return BlockSource::canSeeSky(*((BlockSource **)_R4 + 771), (const BlockPos *)&v10);
}


int __fastcall Entity::setRegion(Entity *this, BlockSource *a2)
{
  Entity *v2; // r4@1
  BlockSource *v3; // r5@1
  TickWorldComponent *v4; // r0@1
  int result; // r0@2
  Dimension *v6; // r0@3
  Dimension *v7; // r5@3

  v2 = this;
  v3 = a2;
  v4 = (TickWorldComponent *)*((_DWORD *)this + 816);
  if ( !v4 || (result = TickWorldComponent::hasTickingArea(v4)) == 0 )
  {
    *((_DWORD *)v2 + 771) = v3;
    v6 = (Dimension *)BlockSource::getDimension(v3);
    v7 = v6;
    result = Dimension::getId(v6);
    *((_DWORD *)v2 + 9) = result;
    *((_DWORD *)v2 + 772) = v7;
  }
  return result;
}


int __fastcall Entity::setGlobal(int result, bool a2)
{
  *(_BYTE *)(result + 3098) = a2;
  return result;
}


unsigned int __fastcall Entity::setJumpDuration(Entity *this, int a2)
{
  Entity *v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 10);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
  {
    *(_BYTE *)(result + 9) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall Entity::spawnAtLocation(Entity *this, const ItemInstance *a2, float _R2)
{
  const ItemInstance *v4; // r4@1
  Spawner *v9; // r0@1
  BlockSource *v10; // r1@1
  int v11; // r2@1
  int result; // r0@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+14h] [bp-1Ch]@1

  _R5 = this;
  v4 = a2;
  __asm { VMOV            S16, R2 }
  v9 = (Spawner *)Level::getSpawner(*((Level **)this + 773));
  __asm { VLDR            S0, [R5,#0x4C] }
  v10 = (BlockSource *)*((_DWORD *)_R5 + 771);
  __asm { VADD.F32        S0, S0, S16 }
  v11 = *((_DWORD *)_R5 + 20);
  v13 = *((_DWORD *)_R5 + 18);
  __asm { VSTR            S0, [SP,#0x30+var_20] }
  v14 = v11;
  result = Spawner::spawnItem(v9, v10, v4, _R5, (const Vec3 *)&v13, 10);
  *(_DWORD *)(result + 3492) = 10;
  return result;
}


int __fastcall Entity::createUpdateEquipPacket(Entity *this, int a2, char a3)
{
  int v3; // r6@1
  char v4; // r8@1
  void *v5; // r4@1
  Entity *v6; // r5@1
  int v7; // r7@2
  SlotDescriptor *v8; // r0@3
  SlotDescriptor *v9; // r4@3

  v3 = a2;
  v4 = a3;
  v5 = *(void **)(a2 + 3176);
  v6 = this;
  if ( !v5 )
  {
    v5 = operator new(0x10u);
    EquippableComponent::EquippableComponent((int)v5, v3);
    v7 = *(_DWORD *)(v3 + 3176);
    *(_DWORD *)(v3 + 3176) = v5;
    if ( v7 )
    {
      v9 = (SlotDescriptor *)(*(_QWORD *)(v7 + 4) >> 32);
      v8 = (SlotDescriptor *)*(_QWORD *)(v7 + 4);
      if ( v8 != v9 )
      {
        do
          v8 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v8) + 104);
        while ( v9 != v8 );
        v8 = *(SlotDescriptor **)(v7 + 4);
      }
      if ( v8 )
        operator delete((void *)v8);
      operator delete((void *)v7);
      v5 = *(void **)(v3 + 3176);
    }
  }
  return EquippableComponent::createDataPacket((int)v6, (int)v5, v4);
}


void __fastcall Entity::transferTickingArea(Entity *this, Dimension *a2)
{
  Entity::transferTickingArea(this, a2);
}


int __fastcall Entity::isFree(Entity *this, const Vec3 *a2, float a3)
{
  const Vec3 *v3; // r5@1
  Entity *v4; // r4@1
  char *v5; // r0@1
  int result; // r0@2
  int v7; // [sp+0h] [bp-58h]@1
  float v8; // [sp+1Ch] [bp-3Ch]@1
  float v9; // [sp+20h] [bp-38h]@1
  float v10; // [sp+24h] [bp-34h]@1
  char v11; // [sp+28h] [bp-30h]@1

  v8 = a3;
  v9 = a3;
  v3 = a2;
  v4 = this;
  v10 = a3;
  AABB::grow((AABB *)&v7, (Entity *)((char *)this + 264), (int)&v8);
  AABB::cloneMove((AABB *)&v11, (const Vec3 *)&v7, (int)v3);
  v5 = BlockSource::fetchAABBs(*((BlockSource **)v4 + 771), (const AABB *)&v11, 1);
  if ( *(_QWORD *)v5 >> 32 == (unsigned int)*(_QWORD *)v5 )
    result = BlockSource::containsAnyLiquid(*((BlockSource **)v4 + 771), (const AABB *)&v11) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall Entity::updateBBFromDescription(int result, int a2, int a3)
{
  int v3; // r1@1
  bool v4; // zf@1
  __int64 v5; // r1@4

  v3 = *(_DWORD *)(result + 48);
  v4 = v3 == 0;
  if ( v3 )
  {
    a3 = *(_DWORD *)(v3 + 116);
    v4 = a3 == 0;
  }
  if ( !v4 )
    v5 = *(_QWORD *)(a3 + 4);
    result = (*(int (**)(void))(*(_DWORD *)result + 680))();
  return result;
}


int __fastcall Entity::getOwnerEntityType(Entity *this)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r0@1
  int result; // r0@2
  unsigned int v5; // [sp+8h] [bp-10h]@1
  unsigned int v6; // [sp+Ch] [bp-Ch]@1

  v1 = *((_DWORD *)this + 773);
  (*(void (__fastcall **)(unsigned int *))(*(_DWORD *)this + 500))(&v5);
  v3 = Level::fetchEntity(v1, v2, v5, v6, 0);
  if ( v3 )
    result = (*(int (**)(void))(*(_DWORD *)v3 + 488))();
  else
    result = 1;
  return result;
}


int __fastcall Entity::spawnAtLocation(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // r6@1
  _BYTE *v5; // r5@1
  int v6; // r8@1
  int v7; // r4@1
  int v8; // r7@1
  void (__fastcall *v9)(char *, int, int, char *); // r10@1
  int v10; // ST00_4@1
  int v11; // r4@1
  char v13; // [sp+4h] [bp-74h]@1
  char v14; // [sp+10h] [bp-68h]@1
  int v15; // [sp+18h] [bp-60h]@5
  void *v16; // [sp+34h] [bp-44h]@3
  void *ptr; // [sp+44h] [bp-34h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 3084);
  v8 = Block::mBlocks[*a2];
  v9 = *(void (__fastcall **)(char *, int, int, char *))(*(_DWORD *)v8 + 272);
  BlockPos::BlockPos((int)&v13, a1 + 72);
  v10 = v5[1];
  v9(&v14, v8, v7, &v13);
  v11 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v4 + 452))(v4, &v14, v6);
  if ( ptr )
    operator delete(ptr);
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v15 + 4))(v15);
  return v11;
}


int __fastcall Entity::getCommandPermissionLevel(Entity *this)
{
  return 0;
}


int __fastcall Entity::positionRider(Entity *this, Entity *a2, float a3)
{
  Entity *v4; // r4@1
  __int64 v5; // r0@1
  Entity *v6; // t1@2
  RideableComponent *v7; // r0@4
  int v8; // r0@8
  __int64 v9; // r1@8
  char v10; // r7@9
  int v11; // r8@9
  char v21; // r0@10
  Mob *v23; // r0@13
  float v24; // r1@13
  float v26; // [sp+0h] [bp-50h]@9
  float v27; // [sp+Ch] [bp-44h]@9

  _R5 = this;
  v4 = a2;
  v5 = *((_QWORD *)this + 61);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
LABEL_4:
    v7 = (RideableComponent *)*((_DWORD *)_R5 + 791);
    if ( v7 )
    {
      LODWORD(v5) = j_j_j__ZN17RideableComponent13positionRiderER6Entity(v7, v4);
    }
    else
      LODWORD(v5) = Level::isClientSide(*((Level **)_R5 + 773));
      if ( (_DWORD)v5 == 1 )
      {
        if ( !*((_BYTE *)v4 + 539) )
        {
          v8 = *((_DWORD *)v4 + 18);
          *((_DWORD *)v4 + 21) = v8;
          LODWORD(v9) = *((_DWORD *)v4 + 19);
          *((_DWORD *)v4 + 22) = v9;
          HIDWORD(v9) = *((_DWORD *)v4 + 20);
          *((_DWORD *)v4 + 23) = HIDWORD(v9);
          *((_DWORD *)v4 + 24) = v8;
          *(_QWORD *)((char *)v4 + 100) = v9;
          *((_QWORD *)v4 + 16) = *((_QWORD *)v4 + 15);
          *((_BYTE *)v4 + 539) = 1;
        }
        v10 = SynchedEntityData::getInt8((Entity *)((char *)v4 + 176), 58);
        v11 = SynchedEntityData::getFloat((Entity *)((char *)v4 + 176), 59);
        _R9 = SynchedEntityData::getFloat((Entity *)((char *)v4 + 176), 60);
        SynchedEntityData::getVec3((SynchedEntityData *)&v27, (int)v4 + 176, 0x39u);
        __asm { VLDR            S2, [R5,#0xA8] }
        _R0 = &mce::Math::DEGRAD;
        __asm
          VLDR            S0, [R0]
          VMUL.F32        S0, S0, S2
          VMOV            R6, S0
        _R0 = cosf(_R6);
          VMOV            S20, R0
          VLDR            S16, [SP,#0x50+var_44]
          VLDR            S18, [SP,#0x50+var_3C]
        _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
          VMOV            S0, R0
          VMUL.F32        S2, S16, S20
          VMUL.F32        S4, S18, S0
          VMUL.F32        S6, S18, S20
          VMUL.F32        S0, S16, S0
          VADD.F32        S2, S4, S2
          VSUB.F32        S0, S6, S0
          VSTR            S2, [SP,#0x50+var_44]
          VSTR            S0, [SP,#0x50+var_3C]
          VLDR            S4, [R5,#0x98]
          VLDR            S8, [R5,#0xA0]
          VLDR            S6, [R5,#0x9C]
          VADD.F32        S2, S2, S4
          VLDR            S10, [SP,#0x50+var_40]
          VADD.F32        S0, S8, S0
          VADD.F32        S4, S10, S6
          VSTR            S2, [SP,#0x50+var_50]
          VSTR            S4, [SP,#0x50+var_4C]
          VSTR            S0, [SP,#0x50+var_48]
        (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v4 + 48))(v4, &v26);
        LODWORD(v5) = *((_BYTE *)v4 + 172);
        if ( v5 & 2 )
          v21 = v10;
          if ( v10 )
            v21 = 1;
          *((_BYTE *)v4 + 3336) = v21;
          {
            __asm
            {
              VMOV            S0, R9
              VLDR            S2, [R5,#0xA8]
              VADD.F32        S0, S2, S0
              VMOV            R1, S0
              VSTR            S0, [R0]
            }
            Mob::setRiderLockedBodyRot(v4, _R1);
            v23 = v4;
            v24 = *(float *)&v11;
          }
          else
            Mob::setRiderLockedBodyRot(v4, 0.0);
            v24 = 181.0;
          LODWORD(v5) = Mob::setRiderRotLimit(v23, v24);
      }
  }
  else
    while ( 1 )
      v6 = *(Entity **)v5;
      LODWORD(v5) = v5 + 4;
      if ( v6 == v4 )
        break;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        goto LABEL_4;
  return v5;
}


int __fastcall Entity::queryEntityRenderer(Entity *this)
{
  return 0;
}


int __fastcall Entity::getShadowHeightOffs(Entity *this)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R0,#0x134]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Entity::handleEntityEvent(Entity *this, signed int a2, int a3)
{
  signed int v3; // r2@1
  bool v5; // r1@14
  signed int v9; // r9@17
  int v13; // r4@18
  unsigned int v15; // r0@18
  TradeableComponent *v18; // r0@23
  RopeSystem *v19; // r0@25
  int v21; // r0@29
  unsigned int v22; // r1@29
  unsigned int v23; // r1@31
  unsigned int v24; // r0@31
  int v25; // r0@36
  unsigned int v26; // r0@36
  unsigned int v27; // r1@36
  signed int v28; // r6@41
  int v32; // r11@42
  unsigned int v34; // r0@42
  BlockSource *v42; // r4@45
  Level *v43; // r5@45
  int v44; // r0@45
  unsigned int v45; // r1@46
  int result; // r0@49
  int v47; // r4@52
  unsigned int *v48; // r1@53
  unsigned int v49; // r0@55
  unsigned int *v50; // r5@59
  unsigned int v51; // r0@61
  int v52; // [sp+10h] [bp-E8h]@2
  int v53; // [sp+14h] [bp-E4h]@1
  char v54; // [sp+18h] [bp-E0h]@3
  int v55; // [sp+20h] [bp-D8h]@7
  void *v56; // [sp+3Ch] [bp-BCh]@5
  void *ptr; // [sp+4Ch] [bp-ACh]@3
  float v58; // [sp+60h] [bp-98h]@47
  float v59; // [sp+6Ch] [bp-8Ch]@42
  float v60; // [sp+78h] [bp-80h]@18

  v53 = a3;
  v3 = a2;
  _R10 = this;
  if ( a2 <= 38 )
  {
    if ( (unsigned int)(a2 - 6) < 2 )
    {
      v5 = 0;
      v52 = v3;
      if ( v3 == 7 )
        v5 = 1;
      Entity::spawnTamingParticles(this, v5);
    }
    else if ( a2 == 21 )
      __asm
      {
        VMOV.F32        S17, #0.5
        VLDR            S16, =0.02
        VLDR            D9, =2.32830644e-10
      }
      v9 = 3;
      v52 = a2;
      do
        _R0 = Random::nextGaussian((Entity *)((char *)_R10 + 552));
        __asm
        {
          VMOV            S0, R0
          VMUL.F32        S22, S0, S16
        }
        __asm { VMOV            S24, R0 }
          VMUL.F32        S2, S24, S16
          VSTR            S22, [SP,#0xF8+var_74]
          VMUL.F32        S0, S0, S16
          VSTR            S2, [SP,#0xF8+var_70]
          VSTR            S0, [SP,#0xF8+var_6C]
        v13 = *((_DWORD *)_R10 + 773);
        __asm { VLDR            S22, [R10,#0x48] }
        _R5 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
          VLDR            S24, [R10,#0x4C]
          VLDR            S26, [R10,#0x130]
        v15 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
        __asm { VMOV            S0, R5 }
        _R8 = v15;
          VLDR            S28, [R10,#0x50]
          VLDR            S30, [R10,#0x134]
          VCVT.F64.U32    D10, S0
        _R0 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
          VMOV            S2, R8
          VCVT.F64.U32    D0, S0
          VCVT.F64.U32    D1, S2
          VMUL.F64        D0, D0, D9
          VMUL.F64        D2, D10, D9
          VMUL.F64        D1, D1, D9
          VCVT.F32.F64    S4, D2
          VCVT.F32.F64    S0, D0
          VADD.F32        S4, S4, S4
          VLDR            S8, [R10,#0x130]
          VCVT.F32.F64    S2, D1
          VADD.F32        S0, S0, S0
          VSUB.F32        S6, S22, S26
          VMUL.F32        S4, S26, S4
          VADD.F32        S10, S24, S17
          VMUL.F32        S2, S2, S30
          VSUB.F32        S12, S28, S8
          VMUL.F32        S0, S8, S0
          VADD.F32        S4, S6, S4
          VADD.F32        S2, S10, S2
          VADD.F32        S0, S12, S0
          VSTR            S4, [SP,#0xF8+var_80]
          VSTR            S2, [SP,#0xF8+var_7C]
          VSTR            S0, [SP,#0xF8+var_78]
        Level::addParticle(v13, 17, (int)&v60);
        --v9;
      while ( v9 );
    else
      if ( a2 == 38 )
        Entity::spawnDustParticles(this, COERCE_FLOAT(38));
  }
  else
    v52 = a2;
    switch ( a2 )
      case 57:
        ItemInstance::ItemInstance((ItemInstance *)&v54, v53, 1, 0);
        Entity::spawnEatParticles(_R10, (const ItemInstance *)&v54, 5);
        if ( ptr )
          operator delete(ptr);
        if ( v56 )
          operator delete(v56);
        if ( v55 )
          (*(void (**)(void))(*(_DWORD *)v55 + 4))();
        v55 = 0;
        break;
      case 62:
        v18 = (TradeableComponent *)*((_DWORD *)this + 811);
        if ( v18 )
          TradeableComponent::notifyTrade(v18, v53);
      case 63:
        v19 = (RopeSystem *)v53;
        _ZF = v53 == 0;
        if ( v53 )
          v19 = (RopeSystem *)*((_DWORD *)_R10 + 16);
          _ZF = v19 == 0;
        if ( _ZF )
          *((_DWORD *)_R10 + 16) = 0;
          v47 = *((_DWORD *)_R10 + 17);
          *((_DWORD *)_R10 + 17) = 0;
          if ( v47 )
          {
            v48 = (unsigned int *)(v47 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
            }
            else
              v49 = (*v48)--;
            if ( v49 == 1 )
              v50 = (unsigned int *)(v47 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
              }
              else
                v51 = (*v50)--;
              if ( v51 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
          }
        else
          RopeSystem::cutAtPercent(v19, 0.5);
        Entity::setStatusFlag((int)_R10, 28, 0);
        v21 = SynchedEntityData::_get((Entity *)((char *)_R10 + 176), 38);
        v22 = *(_DWORD *)(v21 + 4);
        if ( (unsigned __int8)v22 == 7 && (*(_DWORD *)(v21 + 16) & *(_DWORD *)(v21 + 20)) != -1 )
          v23 = v22 >> 16;
          *(_DWORD *)(v21 + 16) = -1;
          *(_DWORD *)(v21 + 20) = -1;
          *(_BYTE *)(v21 + 8) = 1;
          v24 = *((_WORD *)_R10 + 94);
          if ( v24 >= v23 )
            LOWORD(v24) = v23;
          *((_WORD *)_R10 + 94) = v24;
          if ( *((_WORD *)_R10 + 95) > v23 )
            LOWORD(v23) = *((_WORD *)_R10 + 95);
          *((_WORD *)_R10 + 95) = v23;
        v25 = SynchedEntityData::_get((Entity *)((char *)_R10 + 176), 38);
        *(_BYTE *)(v25 + 8) = 1;
        v26 = *(_WORD *)(v25 + 6);
        v27 = *((_WORD *)_R10 + 94);
        if ( v27 >= v26 )
          LOWORD(v27) = v26;
        *((_WORD *)_R10 + 94) = v27;
        if ( *((_WORD *)_R10 + 95) > v26 )
          LOWORD(v26) = *((_WORD *)_R10 + 95);
        *((_WORD *)_R10 + 95) = v26;
      case 60:
          VMOV.F32        S17, #0.5; jumptable 016E8ABA case 60
          VLDR            S16, =0.02
          VLDR            D9, =2.32830644e-10
        v28 = 7;
        do
          _R0 = Random::nextGaussian((Entity *)((char *)_R10 + 552));
          __asm
            VMOV            S0, R0
            VMUL.F32        S22, S0, S16
          __asm { VMOV            S24, R0 }
            VMUL.F32        S2, S24, S16
            VSTR            S22, [SP,#0xF8+var_74]
            VMUL.F32        S0, S0, S16
            VSTR            S2, [SP,#0xF8+var_70]
            VSTR            S0, [SP,#0xF8+var_6C]
          v32 = *((_DWORD *)_R10 + 773);
          __asm { VLDR            S22, [R10,#0x48] }
          _R5 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
            VLDR            S24, [R10,#0x4C]
            VLDR            S26, [R10,#0x130]
          v34 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
          __asm { VMOV            S0, R5 }
          _R4 = v34;
            VLDR            S28, [R10,#0x50]
            VLDR            S30, [R10,#0x134]
            VCVT.F64.U32    D10, S0
          _R0 = Random::_genRandInt32((Entity *)((char *)_R10 + 552));
            VMOV            S2, R4
            VCVT.F64.U32    D0, S0
            VCVT.F64.U32    D1, S2
            VMUL.F64        D0, D0, D9
            VMUL.F64        D2, D10, D9
            VMUL.F64        D1, D1, D9
            VCVT.F32.F64    S4, D2
            VCVT.F32.F64    S0, D0
            VADD.F32        S4, S4, S4
            VLDR            S8, [R10,#0x130]
            VCVT.F32.F64    S2, D1
            VADD.F32        S0, S0, S0
            VSUB.F32        S6, S22, S26
            VMUL.F32        S4, S26, S4
            VADD.F32        S10, S24, S17
            VMUL.F32        S2, S2, S30
            VSUB.F32        S12, S28, S8
            VMUL.F32        S0, S8, S0
            VADD.F32        S4, S6, S4
            VADD.F32        S2, S10, S2
            VADD.F32        S0, S12, S0
            VSTR            S4, [SP,#0xF8+var_8C]
            VSTR            S2, [SP,#0xF8+var_88]
            VSTR            S0, [SP,#0xF8+var_84]
          Level::addParticle(v32, 33, (int)&v59);
          --v28;
        while ( v28 );
      case 61:
        Entity::spawnDeathParticles(this);
          VLDR            S16, [R10,#0x16C]
          VLDR            S18, [R10,#0x170]
          VLDR            S20, [R10,#0x174]
        _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R10 + 644))(_R10);
        __asm { VMOV            S2, R0 }
        _R1 = &mce::Math::DEGRAD;
          VLDR            S0, [R1]
          VMUL.F32        S0, S0, S2
          VMOV            R4, S0
        _R0 = cosf(_R4);
        __asm { VMOV            S22, R0 }
        _R0 = sinf(COERCE_FLOAT(LODWORD(_R4) ^ 0x80000000));
          VLDR            S8, [R10,#0x68]
          VMUL.F32        S2, S22, S16
          VMUL.F32        S4, S0, S20
          VMUL.F32        S6, S22, S20
          VADD.F32        S2, S4, S2
          VLDR            S4, [R10,#0x60]
          VSUB.F32        S0, S6, S0
          VLDR            S6, [R10,#0x64]
          VADD.F32        S2, S2, S4
          VADD.F32        S4, S6, S18
          VADD.F32        S0, S0, S8
          VSTR            S2, [SP,#0xF8+var_98]
          VSTR            S4, [SP,#0xF8+var_94]
          VSTR            S0, [SP,#0xF8+var_90]
        if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R10 + 288))(_R10) )
          v42 = (BlockSource *)*((_DWORD *)_R10 + 771);
          v43 = (Level *)*((_DWORD *)_R10 + 773);
          (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R10 + 488))(_R10);
          v44 = SynchedEntityData::_find((Entity *)((char *)_R10 + 176), 0);
          if ( v44 )
            v45 = (*(_BYTE *)(v44 + 17) & 8u) >> 3;
          Level::playSound(v43, v42, 14, (int)&v58);
      case 68:
        Entity::spawnPukeParticles(this);
      case 58:
      case 59:
      case 64:
      case 65:
      case 66:
      case 67:
      default:
        v52 = a2;
        if ( a2 == 39 )
          *((_DWORD *)this + 137) = v53;
  result = *((_DWORD *)_R10 + 811);
  if ( result )
    result = TradeableComponent::handleEntityEvent(result, v52);
  return result;
}


int __fastcall Entity::checkEntityOnewayCollision(Entity *this, BlockSource *a2, const BlockPos *a3)
{
  Entity *v3; // r8@1
  BlockSource *v4; // r4@1
  int v5; // r0@1
  int v6; // r3@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r5@1
  int v10; // r6@1
  int v11; // r7@1
  int result; // r0@1
  unsigned __int64 v13; // kr00_8@1
  int *v14; // r7@1
  unsigned __int64 v15; // kr08_8@1
  int v16; // ST08_4@1
  int v17; // r10@2
  int v18; // r0@2
  int v19; // r2@2
  int v20; // r3@2
  int v21; // r6@2
  int v22; // r3@2
  int v23; // r5@2
  int v24; // r6@2
  int v25; // [sp+Ch] [bp-BCh]@2
  int v26; // [sp+10h] [bp-B8h]@2
  int v27; // [sp+14h] [bp-B4h]@2
  char v28; // [sp+18h] [bp-B0h]@1
  char v29; // [sp+24h] [bp-A4h]@1
  int v30; // [sp+40h] [bp-88h]@1
  int v31; // [sp+44h] [bp-84h]@1
  int v32; // [sp+48h] [bp-80h]@1
  int v33; // [sp+4Ch] [bp-7Ch]@1
  int v34; // [sp+50h] [bp-78h]@1
  int v35; // [sp+54h] [bp-74h]@1
  int v36; // [sp+58h] [bp-70h]@1
  char v37; // [sp+60h] [bp-68h]@2
  char v38; // [sp+6Ch] [bp-5Ch]@2
  int v39; // [sp+88h] [bp-40h]@2
  int v40; // [sp+8Ch] [bp-3Ch]@2
  int v41; // [sp+90h] [bp-38h]@2
  int v42; // [sp+94h] [bp-34h]@2
  int v43; // [sp+98h] [bp-30h]@2
  int v44; // [sp+9Ch] [bp-2Ch]@2
  int v45; // [sp+A0h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  AABB::AABB((int)&v29, (int)&Vec3::ZERO, (int)&Vec3::ONE);
  Vec3::Vec3((int)&v28, (int)v4);
  v5 = AABB::move((AABB *)&v29, (const Vec3 *)&v28);
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(_DWORD *)(v5 + 8);
  v5 += 12;
  v30 = v6;
  v31 = v7;
  v32 = v8;
  v9 = *(_DWORD *)(v5 + 4);
  v10 = *(_DWORD *)(v5 + 8);
  v11 = *(_DWORD *)(v5 + 12);
  v33 = *(_DWORD *)v5;
  v34 = v9;
  v35 = v10;
  v36 = v11;
  v13 = *(_QWORD *)BlockSource::fetchEntities(v3, 0, (const AABB *)&v30);
  result = HIDWORD(v13);
  v15 = v13;
  v16 = v15 >> 32;
  v14 = (int *)v15;
  if ( (_DWORD)v13 != HIDWORD(v13) )
  {
    do
    {
      v17 = *v14;
      v25 = *(_DWORD *)v4;
      v26 = *((_DWORD *)v4 + 1);
      v27 = *((_DWORD *)v4 + 2);
      AABB::AABB((int)&v38, (int)&Vec3::ZERO, (int)&Vec3::ONE);
      Vec3::Vec3((int)&v37, (int)&v25);
      v18 = AABB::move((AABB *)&v38, (const Vec3 *)&v37);
      v19 = *(_DWORD *)v18;
      v20 = *(_DWORD *)(v18 + 4);
      v21 = *(_DWORD *)(v18 + 8);
      v18 += 12;
      v39 = v19;
      v40 = v20;
      v41 = v21;
      v22 = *(_DWORD *)(v18 + 4);
      v23 = *(_DWORD *)(v18 + 8);
      v24 = *(_DWORD *)(v18 + 12);
      v42 = *(_DWORD *)v18;
      v43 = v22;
      v44 = v23;
      v45 = v24;
      if ( std::__find_if<__gnu_cxx::__normal_iterator<AABB *,std::vector<AABB,std::allocator<AABB>>>,__gnu_cxx::__ops::_Iter_equals_val<AABB const>>(
             *(_DWORD *)(v17 + 3380),
             *(_DWORD *)(v17 + 3384),
             (int)&v39) == *(_DWORD *)(v17 + 3384) )
        std::vector<AABB,std::allocator<AABB>>::push_back(v17 + 3380, (int)&v39);
      ++v14;
      result = HIDWORD(v13);
    }
    while ( (int *)HIDWORD(v13) != v14 );
  }
  return result;
}


int __fastcall Entity::Entity(int a1, Level *a2)
{
  int v2; // r4@1
  Level *v3; // r10@1
  int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r5@3
  int v8; // r0@4
  int v9; // r12@4
  int v10; // r2@4
  int v11; // r3@4
  int v12; // r12@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r12@4
  int v16; // r2@4
  int v17; // r3@4
  int v18; // r12@4
  int v19; // r2@4
  int v20; // r3@4
  int v21; // r3@4
  __int64 v22; // r1@4
  __int64 v23; // r2@4
  int v24; // r12@4
  int v25; // r1@4
  int v26; // r3@4
  int v27; // r6@4
  int v28; // r12@4
  int v29; // r3@4
  int v30; // r6@4
  int v31; // r3@4
  int v32; // r2@4
  unsigned int v33; // r0@4
  signed int v34; // r2@4
  int v35; // r1@4
  int v36; // r0@5
  int v37; // r5@5
  int v38; // r6@5
  void *v39; // r0@6
  unsigned int *v41; // r2@9
  signed int v42; // r1@11
  int v43; // [sp+0h] [bp-48h]@6

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26F1074;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v4 = a1 + 24;
  *(_DWORD *)(a1 + 28) = 0;
  v5 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 24)));
  *(_DWORD *)(v4 - 12) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 32) = 0;
    v7 = (void *)(v2 + 32);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 8) = v7;
  *(_DWORD *)(v2 + 36) = 3;
  *(_BYTE *)(v2 + 40) = 0;
  v8 = Level::getEntityDefinitions(v3);
  v9 = v2 + 72;
  *(_DWORD *)(v2 + 44) = v8;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = -1;
  *(_DWORD *)(v2 + 60) = -1;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  v10 = *(&Vec3::ZERO + 1);
  v11 = dword_2822498;
  *(_DWORD *)v9 = Vec3::ZERO;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  v12 = v2 + 84;
  v13 = *(&Vec3::ZERO + 1);
  v14 = dword_2822498;
  *(_DWORD *)v12 = Vec3::ZERO;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  v15 = v2 + 96;
  v16 = *(&Vec3::ZERO + 1);
  v17 = dword_2822498;
  *(_DWORD *)v15 = Vec3::ZERO;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  v18 = v2 + 108;
  v19 = *(&Vec3::ZERO + 1);
  v20 = dword_2822498;
  *(_DWORD *)v18 = Vec3::ZERO;
  *(_DWORD *)(v18 + 4) = v19;
  *(_DWORD *)(v18 + 8) = v20;
  v21 = v2 + 136;
  *(_QWORD *)(v2 + 120) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)(v2 + 128) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)v21 = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  v22 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v2 + 160) = dword_2822498;
  *(_QWORD *)(v2 + 152) = v22;
  HIDWORD(v22) = v2 + 164;
  *(_QWORD *)HIDWORD(v22) = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(HIDWORD(v22) + 8) = 0;
  SynchedEntityData::SynchedEntityData(v2 + 176);
  *(_DWORD *)(v2 + 192) = 0;
  v23 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v2 + 204) = dword_2822498;
  *(_QWORD *)(v2 + 196) = v23;
  *(_DWORD *)(v2 + 208) = 1065353216;
  *(_BYTE *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 212) = 0;
  *(_DWORD *)(v2 + 216) = 0;
  *(_BYTE *)(v2 + 221) = BlockID::AIR;
  *(_DWORD *)(v2 + 224) = 0;
  *(_WORD *)(v2 + 228) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_DWORD *)(v2 + 236) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 244) = 0;
  *(_DWORD *)(v2 + 248) = 0;
  *(_DWORD *)(v2 + 252) = 1048576000;
  *(_DWORD *)(v2 + 256) = 1065353216;
  AABB::AABB((AABB *)(v2 + 264));
  *(_DWORD *)(v2 + 292) = 0;
  *(_DWORD *)(v2 + 296) = 0;
  *(_DWORD *)(v2 + 300) = 0;
  *(_DWORD *)(v2 + 304) = 1058642330;
  *(_DWORD *)(v2 + 308) = 1072064102;
  _aeabi_memclr8(v2 + 312, 36);
  v24 = v2 + 364;
  *(_DWORD *)(v2 + 348) = 1;
  *(_DWORD *)(v2 + 352) = 0;
  v25 = *(&Vec2::ZERO + 1);
  *(_DWORD *)(v2 + 356) = Vec2::ZERO;
  *(_DWORD *)(v2 + 360) = v25;
  v26 = *(&Vec3::ZERO + 1);
  v27 = dword_2822498;
  *(_DWORD *)v24 = Vec3::ZERO;
  *(_DWORD *)(v24 + 4) = v26;
  *(_DWORD *)(v24 + 8) = v27;
  v28 = v2 + 376;
  v29 = *(&Vec3::ZERO + 1);
  v30 = dword_2822498;
  *(_DWORD *)v28 = Vec3::ZERO;
  *(_DWORD *)(v28 + 4) = v29;
  *(_DWORD *)(v28 + 8) = v30;
  v31 = *(&Vec3::ZERO + 1);
  v32 = dword_2822498;
  *(_DWORD *)(v2 + 388) = Vec3::ZERO;
  *(_DWORD *)(v2 + 392) = v31;
  *(_DWORD *)(v2 + 396) = v32;
  *(_DWORD *)(v2 + 400) = 0;
  *(_DWORD *)(v2 + 404) = -1102263091;
  *(_DWORD *)(v2 + 408) = 1041865114;
  *(_BYTE *)(v2 + 412) = 1;
  *(_DWORD *)(v2 + 416) = 0;
  *(_DWORD *)(v2 + 420) = 0;
  *(_BYTE *)(v2 + 424) = 1;
  *(_DWORD *)(v2 + 437) = 0;
  *(_DWORD *)(v2 + 433) = 0;
  *(_DWORD *)(v2 + 429) = 0;
  *(_DWORD *)(v2 + 425) = 0;
  *(_DWORD *)(v2 + 444) = -1;
  *(_BYTE *)(v2 + 448) = 0;
  *(_BYTE *)(v2 + 449) = 0;
  *(_DWORD *)(v2 + 452) = 0;
  *(_DWORD *)(v2 + 456) = BlockPos::MAX;
  *(_DWORD *)(v2 + 460) = unk_2816260;
  *(_DWORD *)(v2 + 464) = dword_2816264;
  _aeabi_memclr4(v2 + 468, 48);
  *(_DWORD *)(v2 + 520) = -1;
  *(_DWORD *)(v2 + 524) = -1;
  *(_WORD *)(v2 + 528) = 0;
  *(_BYTE *)(v2 + 540) = 0;
  *(_DWORD *)(v2 + 532) = 0;
  *(_DWORD *)(v2 + 536) = 0;
  *(_DWORD *)(v2 + 544) = 1065353216;
  *(_DWORD *)(v2 + 548) = 0;
  v33 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v2 + 552) = v33;
  v34 = 1;
  *(_DWORD *)(v2 + 3052) = 625;
  v35 = 0;
  *(_BYTE *)(v2 + 3056) = 0;
  *(_DWORD *)(v2 + 3060) = 0;
  *(_DWORD *)(v2 + 556) = v33;
  do
    v36 = v33 ^ (v33 >> 30);
    v37 = v2 + 4 * v35;
    v38 = v35++ + 1812433253 * v36;
    v33 = v34++ + 1812433253 * v36;
    *(_DWORD *)(v37 + 560) = v38 + 1;
  while ( v35 != 397 );
  *(_DWORD *)(v2 + 3052) = 624;
  *(_DWORD *)(v2 + 3064) = 398;
  *(_DWORD *)(v2 + 3076) = -1;
  *(_DWORD *)(v2 + 3072) = -1;
  *(_BYTE *)(v2 + 3080) = 0;
  *(_BYTE *)(v2 + 3081) = 0;
  *(_DWORD *)(v2 + 3084) = 0;
  *(_DWORD *)(v2 + 3088) = 0;
  *(_DWORD *)(v2 + 3092) = v3;
  _aeabi_memclr8(v2 + 3096, 176);
  *(_DWORD *)(v2 + 3276) = -1;
  *(_DWORD *)(v2 + 3272) = -1;
  *(_BYTE *)(v2 + 3280) = 0;
  *(_BYTE *)(v2 + 3281) = 0;
  *(_DWORD *)(v2 + 3284) = -1082130432;
  *(_DWORD *)(v2 + 3288) = BlockPos::ZERO;
  *(_DWORD *)(v2 + 3292) = unk_2816278;
  *(_DWORD *)(v2 + 3296) = dword_281627C;
  *(_DWORD *)(v2 + 3304) = -1;
  *(_DWORD *)(v2 + 3308) = -1;
  *(_DWORD *)(v2 + 3312) = 0;
  *(_DWORD *)(v2 + 3316) = 0;
  *(_DWORD *)(v2 + 3320) = 1065353216;
  *(_DWORD *)(v2 + 3324) = 0;
  *(_DWORD *)(v2 + 3328) = 0;
  *(_DWORD *)(v2 + 3332) = 1058642330;
  *(_BYTE *)(v2 + 3336) = 0;
  EntityDefinitionDiffList::EntityDefinitionDiffList(v2 + 3340, *(_DWORD *)(v2 + 44));
  *(_BYTE *)(v2 + 3364) = 0;
  *(_DWORD *)(v2 + 3368) = 0;
  *(_DWORD *)(v2 + 3372) = &unk_28898CC;
  *(_BYTE *)(v2 + 3376) = 0;
  *(_DWORD *)(v2 + 3380) = 0;
  *(_DWORD *)(v2 + 3384) = 0;
  *(_DWORD *)(v2 + 3388) = 0;
  *(_BYTE *)(v2 + 3400) = 0;
  *(_BYTE *)(v2 + 3401) = 0;
  *(_BYTE *)(v2 + 3402) = 0;
  *(_DWORD *)(v2 + 3404) = 0;
  sub_16DD660((SynchedEntityData *)(v2 + 176));
  EntityTypeToString((void **)&v43, 0x13Fu, 1);
  Entity::setBaseDefinition(v2, (int **)&v43, 1, 1);
  v39 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  *(_QWORD *)(v2 + 108) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v2 + 116) = dword_2822498;
  return v2;
}


unsigned int __fastcall Entity::burn(Entity *this, int a2, int a3)
{
  Entity *v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  unsigned __int64 *v6; // r7@1
  unsigned int result; // r0@1
  bool v8; // zf@1
  char v9; // [sp+8h] [bp-28h]@8
  int v10; // [sp+Ch] [bp-24h]@8
  char v11; // [sp+10h] [bp-20h]@7
  int v12; // [sp+14h] [bp-1Ch]@8

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (unsigned __int64 *)Level::getGameRules(*((Level **)this + 773));
  result = SynchedEntityData::_find((Entity *)((char *)v3 + 176), 0);
  v8 = result == 0;
  if ( result )
  {
    result = *(_BYTE *)(result + 21);
    v8 = result >> 7 == 0;
  }
  if ( v8 )
    if ( GameRules::hasRule(v6, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1
      || (result = GameRules::getBool(v6, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS), result == 1) )
    {
      EntityDamageSource::EntityDamageSource((int)&v11, 7);
      if ( v4 == 1 )
      {
        EntityDamageSource::EntityDamageSource((int)&v9, 6);
        v12 = v10;
        EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v9);
      }
      if ( !(*(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v3 + 404))(v3, &v11) )
        (*(void (__fastcall **)(Entity *, char *, int, signed int))(*(_DWORD *)v3 + 696))(v3, &v11, v5, 1);
      result = EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v11);
    }
  return result;
}


signed int __fastcall Entity::isOverWater(Entity *this)
{
  Entity *v1; // r4@1
  signed int v2; // r4@2
  int v3; // r0@3
  Block *v4; // r0@5
  int v5; // r6@5
  signed int v6; // r6@5
  Block *v7; // r0@6
  int v8; // r4@6
  int v10; // [sp+0h] [bp-78h]@6
  char v11; // [sp+24h] [bp-54h]@4
  char v12; // [sp+25h] [bp-53h]@4
  char v13; // [sp+28h] [bp-50h]@5
  char v14; // [sp+4Ch] [bp-2Ch]@3
  char v15; // [sp+4Dh] [bp-2Bh]@4
  char v16; // [sp+50h] [bp-28h]@3
  int v17; // [sp+54h] [bp-24h]@4

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 208))() )
  {
    v2 = 1;
  }
  else
    v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
    BlockPos::BlockPos((int)&v16, v3);
    BlockSource::getBlockAndData((BlockSource *)&v14, *((const BlockPos **)v1 + 771), (int)&v16);
    while ( 1 )
    {
      v4 = (Block *)FullBlock::getBlock((FullBlock *)&v14);
      v5 = Block::getMaterial(v4);
      Material::Material((int)&v13, 0, 0, 0);
      v6 = Material::operator==(v5, (int)&v13);
      Material::~Material((Material *)&v13);
      if ( v6 != 1 )
        break;
      --v17;
      BlockSource::getBlockAndData((BlockSource *)&v11, *((const BlockPos **)v1 + 771), (int)&v16);
      v14 = v11;
      v15 = v12;
    }
    v7 = (Block *)FullBlock::getBlock((FullBlock *)&v14);
    v8 = Block::getMaterial(v7);
    Material::Material((int)&v10, 5, 0, 0);
    v2 = Material::operator==(v8, (int)&v10);
    Material::~Material((Material *)&v10);
  return v2;
}


signed int __fastcall Entity::isRider(Entity *this, Entity *a2)
{
  Entity **v2; // r2@1
  Entity **v3; // r3@1
  signed int result; // r0@5

  v2 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
  v3 = (Entity **)*(_QWORD *)((char *)this + 476);
  if ( v3 != v2 )
  {
    while ( *v3 != a2 )
    {
      ++v3;
      if ( v2 == v3 )
      {
        v3 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
        break;
      }
    }
  }
  result = 0;
    result = 1;
  return result;
}


int __fastcall Entity::pushBackActionEventToActionQueue(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  ActionQueue *v6; // r5@1
  int v7; // r9@1
  int v8; // r10@1
  int v9; // r4@2
  void *v10; // r0@3
  unsigned int v11; // r5@4
  unsigned int v12; // r1@4
  unsigned int v13; // r6@5
  void *v14; // t1@6

  v4 = a1;
  v5 = a4;
  v6 = *(ActionQueue **)(a1 + 3404);
  v7 = a3;
  v8 = a2;
  if ( !v6 )
  {
    v6 = (ActionQueue *)operator new(0x28u);
    ActionQueue::ActionQueue(v6);
    v9 = *(_DWORD *)(v4 + 3404);
    *(_DWORD *)(v4 + 3404) = v6;
    if ( v9 )
    {
      v10 = *(void **)v9;
      if ( *(_DWORD *)v9 )
      {
        v11 = *(_DWORD *)(v9 + 36);
        v12 = *(_DWORD *)(v9 + 20);
        if ( v12 < v11 + 4 )
        {
          v13 = v12 - 4;
          do
          {
            v14 = *(void **)(v13 + 4);
            v13 += 4;
            operator delete(v14);
          }
          while ( v13 < v11 );
          v10 = *(void **)v9;
        }
        operator delete(v10);
      }
      operator delete((void *)v9);
      v6 = *(ActionQueue **)(v4 + 3404);
    }
  }
  return j_j_j__ZN11ActionQueue19pushBackActionEventE11ActionEvent((int)v6, v8, v7, v5);
}


void __fastcall Entity::readAdditionalSaveData(Entity *this, const CompoundTag *a2)
{
  Entity *v2; // r4@1
  const CompoundTag *v3; // r5@1
  TradeableComponent **v4; // r2@1
  int v5; // r0@1
  TradeableComponent *v6; // r0@3
  void *v7; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+8h] [bp-20h]@5
  char v11; // [sp+Fh] [bp-19h]@3

  v2 = this;
  v3 = a2;
  v4 = (TradeableComponent **)((char *)this + 3244);
  v5 = *(_DWORD *)(*((_DWORD *)this + 12) + 432);
  if ( v5 )
    LOBYTE(v5) = 1;
  v11 = v5;
  _tryLoadComponent<Entity,bool,TradeableComponent>((int)v2, &v11, v4, a2);
  v6 = (TradeableComponent *)*((_DWORD *)v2 + 811);
  if ( v6 )
    TradeableComponent::readAdditionalSaveData(v6, v3);
  sub_21E94B4((void **)&v10, "limitedLife");
  *((_DWORD *)v2 + 842) = CompoundTag::getInt((int)v3, (const void **)&v10);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
}


Entity *__fastcall Entity::~Entity(Entity *this)
{
  Entity *v1; // r11@1
  int v2; // r5@1
  void *v3; // r0@2
  unsigned int v4; // r6@3
  unsigned int v5; // r1@3
  unsigned int v6; // r7@4
  void *v7; // t1@5
  void *v8; // r0@9
  int v9; // r1@11
  void *v10; // r0@11
  EntityDefinitionDescriptor *v11; // r0@12
  EntityDefinitionDescriptor *v12; // r0@13
  int v13; // r5@14
  int v14; // r6@14
  int v15; // r0@19
  TickWorldComponent *v16; // r0@21
  TickWorldComponent *v17; // r0@22
  void *v18; // r0@23
  int v19; // r5@25
  int v20; // r1@26
  void *v21; // r0@26
  int v22; // r1@27
  void *v23; // r0@27
  void *v24; // r0@29
  int v25; // r5@31
  int v26; // r0@32
  int v27; // r5@35
  void *v28; // r0@36
  int v29; // r1@38
  void *v30; // r0@38
  int v31; // r0@39
  void *v32; // r0@42
  int v33; // r5@44
  void *v34; // r0@45
  void *v35; // r6@46
  void *v36; // r0@47
  void *v37; // r0@51
  int v38; // r8@53
  __int64 v39; // r6@54
  void *v40; // r0@62
  NameableComponent *v41; // r0@64
  void *v42; // r0@65
  int v43; // r5@66
  void *v44; // r0@68
  LeashableComponent *v45; // r0@70
  void *v46; // r0@71
  void *v47; // r0@72
  void *v48; // r0@74
  void *v49; // r0@76
  void *v50; // r0@78
  void *v51; // r0@80
  void *v52; // r0@82
  void *v53; // r0@84
  int v54; // r5@86
  SlotDescriptor *v55; // r0@87
  SlotDescriptor *v56; // r7@87
  void *v57; // r0@93
  int v58; // r5@95
  int v59; // r1@96
  void *v60; // r0@96
  void *v61; // r0@98
  void *v62; // r0@100
  void *v63; // r0@102
  void *v64; // r0@104
  void *v65; // r0@106
  SitComponent *v66; // r0@108
  void *v67; // r0@109
  int v68; // r5@110
  void *v69; // r0@112
  int v70; // r0@114
  BreedableComponent *v71; // r0@116
  void *v72; // r0@117
  int v73; // r5@118
  int v74; // r1@120
  void *v75; // r0@122
  void *v76; // r0@124
  void *v77; // r0@126
  void *v78; // r0@128
  void *v79; // r0@130
  void *v80; // r0@132
  void *v81; // r0@134
  void *v82; // r0@136
  int v83; // r5@138
  unsigned int *v84; // r1@139
  unsigned int v85; // r0@141
  unsigned int *v86; // r6@145
  unsigned int v87; // r0@147
  EntityDefinitionDescriptor *v88; // r0@152
  EntityDefinitionDescriptor *v89; // r0@153
  int v90; // r5@154
  unsigned int *v91; // r2@156
  signed int v92; // r1@158
  void *v93; // r6@164
  int v94; // r1@164
  void *v95; // r0@164
  char *v96; // r0@166
  unsigned int *v98; // r2@170
  signed int v99; // r1@172
  unsigned int *v100; // r2@174
  signed int v101; // r1@176
  unsigned int *v102; // r2@178
  signed int v103; // r1@180
  unsigned int *v104; // r2@182
  signed int v105; // r1@184
  unsigned int *v106; // r2@186
  signed int v107; // r1@188

  v1 = this;
  *(_DWORD *)this = &off_26F1074;
  v2 = *((_DWORD *)this + 851);
  if ( v2 )
  {
    v3 = *(void **)v2;
    if ( *(_DWORD *)v2 )
    {
      v4 = *(_DWORD *)(v2 + 36);
      v5 = *(_DWORD *)(v2 + 20);
      if ( v5 < v4 + 4 )
      {
        v6 = v5 - 4;
        do
        {
          v7 = *(void **)(v6 + 4);
          v6 += 4;
          operator delete(v7);
        }
        while ( v6 < v4 );
        v3 = *(void **)v2;
      }
      operator delete(v3);
    }
    operator delete((void *)v2);
  }
  *((_DWORD *)v1 + 851) = 0;
  v8 = (void *)*((_DWORD *)v1 + 845);
  if ( v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 843);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
    else
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (EntityDefinitionDescriptor *)*((_DWORD *)v1 + 839);
  if ( v11 )
    v12 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v11);
    operator delete((void *)v12);
  *((_DWORD *)v1 + 839) = 0;
  v13 = *((_DWORD *)v1 + 836);
  v14 = *((_DWORD *)v1 + 837);
  if ( v13 != v14 )
    do
      EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v13 + 4));
      v13 += 12;
    while ( v14 != v13 );
    v13 = *((_DWORD *)v1 + 836);
  if ( v13 )
    operator delete((void *)v13);
  v15 = *((_DWORD *)v1 + 817);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 817) = 0;
  v16 = (TickWorldComponent *)*((_DWORD *)v1 + 816);
  if ( v16 )
    v17 = TickWorldComponent::~TickWorldComponent(v16);
    operator delete((void *)v17);
  *((_DWORD *)v1 + 816) = 0;
  v18 = (void *)*((_DWORD *)v1 + 815);
  if ( v18 )
    operator delete(v18);
  *((_DWORD *)v1 + 815) = 0;
  v19 = *((_DWORD *)v1 + 814);
  if ( v19 )
    v20 = *(_DWORD *)(v19 + 32);
    v21 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v100 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
          v101 = __ldrex(v100);
        while ( __strex(v101 - 1, v100) );
      else
        v101 = (*v100)--;
      if ( v101 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = *(_DWORD *)(v19 + 28);
    v23 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v102 = (unsigned int *)(v22 - 4);
          v103 = __ldrex(v102);
        while ( __strex(v103 - 1, v102) );
        v103 = (*v102)--;
      if ( v103 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    operator delete((void *)v19);
  *((_DWORD *)v1 + 814) = 0;
  v24 = (void *)*((_DWORD *)v1 + 813);
  if ( v24 )
    operator delete(v24);
  *((_DWORD *)v1 + 813) = 0;
  v25 = *((_DWORD *)v1 + 812);
  if ( v25 )
    v26 = *(_DWORD *)(v25 + 4);
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    operator delete((void *)v25);
  *((_DWORD *)v1 + 812) = 0;
  v27 = *((_DWORD *)v1 + 811);
  if ( v27 )
    v28 = *(void **)(v27 + 36);
    if ( v28 )
      operator delete(v28);
    v29 = *(_DWORD *)(v27 + 32);
    v30 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v104 = (unsigned int *)(v29 - 4);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = *(_DWORD *)(v27 + 28);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    operator delete((void *)v27);
  *((_DWORD *)v1 + 811) = 0;
  v32 = (void *)*((_DWORD *)v1 + 810);
  if ( v32 )
    operator delete(v32);
  *((_DWORD *)v1 + 810) = 0;
  v33 = *((_DWORD *)v1 + 809);
  if ( v33 )
    v34 = *(void **)(v33 + 56);
    if ( v34 )
        v35 = *(void **)v34;
        operator delete(v34);
        v34 = v35;
      while ( v35 );
    _aeabi_memclr4(*(_QWORD *)(v33 + 48), 4 * (*(_QWORD *)(v33 + 48) >> 32));
    *(_DWORD *)(v33 + 56) = 0;
    *(_DWORD *)(v33 + 60) = 0;
    v36 = *(void **)(v33 + 48);
    if ( v36 && (void *)(v33 + 72) != v36 )
      operator delete(v36);
    operator delete((void *)v33);
  *((_DWORD *)v1 + 809) = 0;
  v37 = (void *)*((_DWORD *)v1 + 808);
  if ( v37 )
    operator delete(v37);
  *((_DWORD *)v1 + 808) = 0;
  v38 = *((_DWORD *)v1 + 807);
  if ( v38 )
    v39 = *(_QWORD *)(v38 + 4);
    if ( (_DWORD)v39 != HIDWORD(v39) )
        if ( *(_DWORD *)v39 )
          (*(void (**)(void))(**(_DWORD **)v39 + 4))();
        *(_DWORD *)v39 = 0;
        LODWORD(v39) = v39 + 4;
      while ( HIDWORD(v39) != (_DWORD)v39 );
      LODWORD(v39) = *(_DWORD *)(v38 + 4);
    if ( (_DWORD)v39 )
      operator delete((void *)v39);
    operator delete((void *)v38);
  *((_DWORD *)v1 + 807) = 0;
  v40 = (void *)*((_DWORD *)v1 + 806);
  if ( v40 )
    operator delete(v40);
  *((_DWORD *)v1 + 806) = 0;
  v41 = (NameableComponent *)*((_DWORD *)v1 + 805);
  if ( v41 )
    v42 = (void *)NameableComponent::~NameableComponent(v41);
    operator delete(v42);
  *((_DWORD *)v1 + 805) = 0;
  v43 = *((_DWORD *)v1 + 804);
  if ( v43 )
    BaseCommandBlock::~BaseCommandBlock((BaseCommandBlock *)(v43 + 4));
    operator delete((void *)v43);
  *((_DWORD *)v1 + 804) = 0;
  v44 = (void *)*((_DWORD *)v1 + 803);
  if ( v44 )
    operator delete(v44);
  *((_DWORD *)v1 + 803) = 0;
  v45 = (LeashableComponent *)*((_DWORD *)v1 + 802);
  if ( v45 )
    v46 = (void *)LeashableComponent::~LeashableComponent(v45);
    operator delete(v46);
  *((_DWORD *)v1 + 802) = 0;
  v47 = (void *)*((_DWORD *)v1 + 801);
  if ( v47 )
    operator delete(v47);
  *((_DWORD *)v1 + 801) = 0;
  v48 = (void *)*((_DWORD *)v1 + 800);
  if ( v48 )
    operator delete(v48);
  *((_DWORD *)v1 + 800) = 0;
  v49 = (void *)*((_DWORD *)v1 + 799);
  if ( v49 )
    operator delete(v49);
  *((_DWORD *)v1 + 799) = 0;
  v50 = (void *)*((_DWORD *)v1 + 798);
  if ( v50 )
    operator delete(v50);
  *((_DWORD *)v1 + 798) = 0;
  v51 = (void *)*((_DWORD *)v1 + 797);
  if ( v51 )
    operator delete(v51);
  *((_DWORD *)v1 + 797) = 0;
  v52 = (void *)*((_DWORD *)v1 + 796);
  if ( v52 )
    operator delete(v52);
  *((_DWORD *)v1 + 796) = 0;
  v53 = (void *)*((_DWORD *)v1 + 795);
  if ( v53 )
    operator delete(v53);
  *((_DWORD *)v1 + 795) = 0;
  v54 = *((_DWORD *)v1 + 794);
  if ( v54 )
    v56 = (SlotDescriptor *)(*(_QWORD *)(v54 + 4) >> 32);
    v55 = (SlotDescriptor *)*(_QWORD *)(v54 + 4);
    if ( v55 != v56 )
        v55 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v55) + 104);
      while ( v56 != v55 );
      v55 = *(SlotDescriptor **)(v54 + 4);
    if ( v55 )
      operator delete((void *)v55);
    operator delete((void *)v54);
  *((_DWORD *)v1 + 794) = 0;
  v57 = (void *)*((_DWORD *)v1 + 793);
  if ( v57 )
    operator delete(v57);
  *((_DWORD *)v1 + 793) = 0;
  v58 = *((_DWORD *)v1 + 792);
  if ( v58 )
    v59 = *(_DWORD *)(v58 + 4);
    v60 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v106 = (unsigned int *)(v59 - 4);
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
        v107 = (*v106)--;
      if ( v107 <= 0 )
        j_j_j_j__ZdlPv_9(v60);
    operator delete((void *)v58);
  *((_DWORD *)v1 + 792) = 0;
  v61 = (void *)*((_DWORD *)v1 + 791);
  if ( v61 )
    operator delete(v61);
  *((_DWORD *)v1 + 791) = 0;
  v62 = (void *)*((_DWORD *)v1 + 790);
  if ( v62 )
    operator delete(v62);
  *((_DWORD *)v1 + 790) = 0;
  v63 = (void *)*((_DWORD *)v1 + 789);
  if ( v63 )
    operator delete(v63);
  *((_DWORD *)v1 + 789) = 0;
  v64 = (void *)*((_DWORD *)v1 + 788);
  if ( v64 )
    operator delete(v64);
  *((_DWORD *)v1 + 788) = 0;
  std::unique_ptr<ProjectileComponent,std::default_delete<ProjectileComponent>>::~unique_ptr((_DWORD *)v1 + 787);
  v65 = (void *)*((_DWORD *)v1 + 786);
  if ( v65 )
    operator delete(v65);
  *((_DWORD *)v1 + 786) = 0;
  v66 = (SitComponent *)*((_DWORD *)v1 + 785);
  if ( v66 )
    v67 = (void *)SitComponent::~SitComponent(v66);
    operator delete(v67);
  *((_DWORD *)v1 + 785) = 0;
  v68 = *((_DWORD *)v1 + 784);
  if ( v68 )
    std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_erase(
      v68 + 8,
      *(_DWORD *)(v68 + 16));
    operator delete((void *)v68);
  *((_DWORD *)v1 + 784) = 0;
  v69 = (void *)*((_DWORD *)v1 + 783);
  if ( v69 )
    operator delete(v69);
  *((_DWORD *)v1 + 783) = 0;
  v70 = *((_DWORD *)v1 + 782);
  if ( v70 )
    (*(void (**)(void))(*(_DWORD *)v70 + 8))();
  *((_DWORD *)v1 + 782) = 0;
  v71 = (BreedableComponent *)*((_DWORD *)v1 + 781);
  if ( v71 )
    v72 = (void *)BreedableComponent::~BreedableComponent(v71);
    operator delete(v72);
  *((_DWORD *)v1 + 781) = 0;
  v73 = *((_DWORD *)v1 + 780);
  if ( v73 )
    std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
      v73 + 36,
      *(_DWORD *)(v73 + 44));
      v73 + 12,
      *(_DWORD *)(v73 + 20));
    operator delete((void *)v73);
  *((_DWORD *)v1 + 780) = 0;
  v74 = *((_DWORD *)v1 + 779);
  if ( v74 )
    std::default_delete<BehaviorComponent>::operator()((int)v1 + 3116, v74);
  *((_DWORD *)v1 + 779) = 0;
  v75 = (void *)*((_DWORD *)v1 + 778);
  if ( v75 )
    operator delete(v75);
  *((_DWORD *)v1 + 778) = 0;
  v76 = (void *)*((_DWORD *)v1 + 777);
  if ( v76 )
    operator delete(v76);
  *((_DWORD *)v1 + 777) = 0;
  v77 = (void *)*((_DWORD *)v1 + 776);
  if ( v77 )
    operator delete(v77);
  *((_DWORD *)v1 + 776) = 0;
  std::unique_ptr<AddRiderComponent,std::default_delete<AddRiderComponent>>::~unique_ptr((_DWORD *)v1 + 775);
  v78 = (void *)*((_DWORD *)v1 + 125);
  if ( v78 )
    operator delete(v78);
  v79 = (void *)*((_DWORD *)v1 + 122);
  if ( v79 )
    operator delete(v79);
  v80 = (void *)*((_DWORD *)v1 + 119);
  if ( v80 )
    operator delete(v80);
  v81 = (void *)*((_DWORD *)v1 + 73);
  if ( v81 )
    operator delete(v81);
  v82 = (void *)*((_DWORD *)v1 + 48);
  if ( v82 )
    operator delete(v82);
  *((_DWORD *)v1 + 48) = 0;
  SynchedEntityData::~SynchedEntityData((Entity *)((char *)v1 + 176));
  v83 = *((_DWORD *)v1 + 17);
  if ( v83 )
    v84 = (unsigned int *)(v83 + 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 == 1 )
      v86 = (unsigned int *)(v83 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 8))(v83);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 12))(v83);
  v88 = (EntityDefinitionDescriptor *)*((_DWORD *)v1 + 12);
  if ( v88 )
    v89 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v88);
    operator delete((void *)v89);
  *((_DWORD *)v1 + 12) = 0;
  v90 = *((_DWORD *)v1 + 4);
  while ( v90 )
    v93 = (void *)v90;
    v94 = *(_DWORD *)(v90 + 8);
    v90 = *(_DWORD *)v90;
    v95 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v94 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j__ZdlPv_9(v95);
    operator delete(v93);
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v96 = (char *)*((_DWORD *)v1 + 2);
  if ( v96 && (char *)v1 + 32 != v96 )
    operator delete(v96);
  return v1;
}


signed int __fastcall Entity::spawnTrailBubbles(Entity *this)
{
  Entity *v1; // r4@1
  signed int result; // r0@1
  bool v3; // zf@2

  v1 = this;
  result = EntityClassTree::isInstanceOf((int)this, 0x400000);
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 208))(v1);
    v3 = result == 1;
    if ( result == 1 )
    {
      result = *((_BYTE *)v1 + 216);
      v3 = result == 0;
    }
    if ( v3 )
      Level::addParticle(*((_DWORD *)v1 + 773), 1, (int)v1 + 72);
      result = Level::addParticle(*((_DWORD *)v1 + 773), 1, (int)v1 + 72);
  }
  return result;
}


signed int __fastcall Entity::drop(Entity *this, const ItemInstance *a2, int a3)
{
  const ItemInstance *v3; // r5@1
  signed int result; // r0@1
  int v6; // r6@1
  Spawner *v8; // r8@6
  BlockSource *v13; // r9@6
  Random *v19; // r4@7
  float v24; // r1@7
  float v26; // r1@7
  float v32; // r1@8
  float v37; // r1@8
  Random *v39; // r4@8
  float v45; // r1@8
  float v46; // [sp+Ch] [bp-5Ch]@6

  v3 = a2;
  _R4 = this;
  result = *((_BYTE *)a2 + 15);
  v6 = a3;
  _ZF = result == 0;
  if ( *((_BYTE *)a2 + 15) )
  {
    result = *(_DWORD *)a2;
    _ZF = *(_DWORD *)a2 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull(a2);
    if ( !result )
    {
      result = *((_BYTE *)v3 + 14);
      if ( *((_BYTE *)v3 + 14) )
      {
        v8 = (Spawner *)Level::getSpawner(*((Level **)_R4 + 773));
        __asm
        {
          VLDR            S0, [R4,#0x7C]
          VLDR            S2, [R4,#0x174]
          VLDR            S4, [R4,#0x16C]
        }
        _R0 = &mce::Math::DEGRAD;
          VLDR            S6, [R4,#0x190]
          VLDR            S18, [R4,#0x170]
          VLDR            S16, [R0]
          VADD.F32        S22, S6, S4
          VLDR            S20, [R4,#0x194]
          VMUL.F32        S0, S16, S0
        v13 = (BlockSource *)*((_DWORD *)_R4 + 771);
          VMOV            R7, S0
          VLDR            S0, [R4,#0x198]
          VADD.F32        S24, S0, S2
        _R0 = cosf(_R7);
        __asm { VMOV            S26, R0 }
        _R0 = sinf(COERCE_FLOAT(LODWORD(_R7) ^ 0x80000000));
          VMOV            S0, R0
          VLDR            S8, [R4,#0x64]
          VMUL.F32        S2, S26, S22
          VLDR            S10, [R4,#0x68]
          VMUL.F32        S4, S0, S24
          VLDR            S12, [R4,#0x6C]
          VMUL.F32        S6, S26, S24
          VLDR            S14, [R4,#0x70]
          VMUL.F32        S0, S0, S22
          VLDR            S1, [R4,#0x74]
          VADD.F32        S2, S4, S2
          VADD.F32        S4, S20, S18
          VSUB.F32        S0, S6, S0
          VLDR            S6, [R4,#0x60]
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S4, S8
          VADD.F32        S0, S0, S10
          VADD.F32        S2, S2, S12
          VADD.F32        S4, S4, S14
          VADD.F32        S0, S0, S1
          VSTR            S2, [SP,#0x68+var_5C]
          VSTR            S4, [SP,#0x68+var_58]
          VSTR            S0, [SP,#0x68+var_54]
        _R5 = Spawner::spawnItem(v8, v13, v3, _R4, (const Vec3 *)&v46, 40);
        ItemEntity::setSourceEntity((ItemEntity *)_R5, _R4);
        _R0 = *((_QWORD *)_R4 + 15);
        *(_QWORD *)(_R5 + 120) = _R0;
        *(_DWORD *)(_R5 + 3492) = 10;
        if ( v6 == 1 )
          v19 = (Entity *)((char *)_R4 + 552);
          _R6 = Random::_genRandInt32(v19);
          _R0 = Random::_genRandInt32(v19);
          __asm
          {
            VMOV            S0, R0
            VLDR            D1, =2.32830644e-10
            VMOV            S4, R6
            VCVT.F64.U32    D0, S0
          }
          _R0 = &mce::Math::PI;
            VMUL.F64        D0, D0, D1
            VCVT.F32.F64    S0, D0
            VADD.F32        S0, S0, S0
            VLDR            S6, [R0]
            VCVT.F64.U32    D2, S4
            VMUL.F32        S0, S6, S0
            VMUL.F64        D1, D2, D1
            VMOV            R4, S0
            VMOV.F32        S0, #0.5
            VCVT.F32.F64    S2, D1
            VMUL.F32        S16, S2, S0
          _R0 = mce::Math::sin(_R4, v24);
            VNMUL.F32       S0, S0, S16
            VSTR            S0, [R5,#0x6C]
          _R0 = mce::Math::cos(_R4, v26);
          __asm { VMOV            S0, R0 }
          result = 1045220557;
            VMUL.F32        S0, S0, S16
            VSTR            S0, [R5,#0x74]
          *(_DWORD *)(_R5 + 112) = 1045220557;
        else
            VLDR            S0, [R4,#0x7C]
            VMUL.F32        S0, S16, S0
            VMOV            R0, S0
          _R0 = mce::Math::sin((mce::Math *)_R0, *((float *)&_R0 + 1));
            VLDR            S0, [R4,#0x78]
            VMOV            S18, R0
            VMOV            R1, S0
          _R0 = mce::Math::cos(_R1, *(float *)&_R1);
            VLDR            S20, =-0.3
            VMOV            S2, R0
            VMUL.F32        S0, S18, S20
            VMUL.F32        S0, S0, S2
          _R0 = mce::Math::cos(_R0, v32);
            VLDR            S0, =0.3
            VMUL.F32        S0, S18, S0
          _R0 = mce::Math::sin(_R0, v37);
          v39 = (Entity *)((char *)_R4 + 552);
            VMUL.F32        S0, S0, S20
            VSTR            S0, [R5,#0x70]
          _R0 = Random::_genRandInt32(v39);
            VLDR            D8, =2.32830644e-10
            VMUL.F64        D0, D0, D8
            VCVT.F32.F64    S18, D0
            VADD.F32        S2, S18, S18
            VLDR            S4, [R0]
            VMUL.F32        S2, S4, S2
            VMOV            R4, S2
            VLDR            S2, =0.02
            VMUL.F32        S16, S0, S2
          _R0 = mce::Math::cos(_R4, COERCE_FLOAT(&mce::Math::PI));
            VLDR            S2, [R5,#0x6C]
            VADD.F32        S0, S0, S2
          result = mce::Math::sin(_R4, v45);
            VLDR            S2, [R5,#0x74]
            VADD.F32        S0, S2, S0
      }
    }
  return result;
}


int __fastcall Entity::findAttackTarget(Entity *this)
{
  return 0;
}


BlockSource *__fastcall Entity::_updateOwnerChunk(Entity *this)
{
  Entity *v1; // r4@1
  BlockSource *result; // r0@1
  bool v3; // zf@1
  Entity *v4; // r5@7
  BlockSource *v5; // r6@7
  bool v6; // zf@7
  int v7; // [sp+4h] [bp-2Ch]@10
  __int64 v8; // [sp+8h] [bp-28h]@1
  char v9; // [sp+10h] [bp-20h]@1

  v1 = this;
  BlockPos::BlockPos((int)&v9, (int)this + 72);
  ChunkPos::ChunkPos((ChunkPos *)&v8, (const BlockPos *)&v9);
  result = (BlockSource *)*((_BYTE *)v1 + 40);
  v3 = result == 0;
  if ( *((_BYTE *)v1 + 40) )
  {
    result = (BlockSource *)*((_DWORD *)v1 + 771);
    v3 = result == 0;
  }
  if ( !v3 && !*((_BYTE *)v1 + 3097) && v8 != *((_QWORD *)v1 + 18) && !(*((_BYTE *)v1 + 172) & 1) )
    v4 = (Entity *)BlockSource::getChunk(result, (Entity *)((char *)v1 + 144));
    result = (BlockSource *)BlockSource::getChunk(*((BlockSource **)v1 + 771), (const ChunkPos *)&v8);
    v5 = result;
    v6 = v4 == 0;
    if ( v4 )
      v6 = result == 0;
    if ( !v6 )
    {
      LevelChunk::removeEntity((LevelChunk *)&v7, v4, (int)v1);
      LevelChunk::addEntity((int)v5, &v7);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 32))();
      result = 0;
    }
  return result;
}


EntityDefinitionPtr *__fastcall Entity::setBaseDefinition(int a1, int **a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r7@1
  int v6; // r8@1
  char *v7; // r0@2
  unsigned __int64 *v8; // r5@2
  _BYTE *v9; // r6@2
  signed int v10; // r0@2
  unsigned int v11; // r4@2
  int v12; // r5@5
  _BYTE *v13; // r4@7
  _BYTE *v14; // r0@10
  __int64 v15; // r0@16
  EntityDefinitionDescriptor *v16; // r1@16
  EntityDefinitionDescriptor *v17; // r0@16
  EntityDefinitionDescriptor *v18; // r0@17
  EntityDefinitionDescriptor *v19; // r0@18
  __int64 v20; // r4@19
  char v22; // [sp+4h] [bp-44h]@10
  int v23; // [sp+8h] [bp-40h]@10
  _BYTE *v24; // [sp+10h] [bp-38h]@2
  _BYTE *v25; // [sp+14h] [bp-34h]@2
  char *v26; // [sp+18h] [bp-30h]@2
  char v27; // [sp+1Ch] [bp-2Ch]@1
  int v28; // [sp+20h] [bp-28h]@1
  EntityDefinitionDescriptor *v29; // [sp+24h] [bp-24h]@16

  v4 = a1;
  v5 = a3;
  v6 = a4;
  EntityDefinitionGroup::tryGetDefinition((EntityDefinitionPtr *)&v27, *(_DWORD *)(a1 + 44), a2);
  if ( v28 )
  {
    v7 = EntityDefinitionDiffList::getDefinitionStack((EntityDefinitionDiffList *)(v4 + 3340));
    v8 = (unsigned __int64 *)v7;
    v9 = 0;
    v10 = (*(_QWORD *)v7 >> 32) - *(_QWORD *)v7;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v11 = -1431655765 * (v10 >> 2);
    if ( v10 )
    {
      if ( v11 >= 0x15555556 )
        sub_21E57F4();
      v9 = operator new(v10);
    }
    v24 = v9;
    v25 = v9;
    v26 = &v9[12 * v11];
    v12 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::pair<bool,EntityDefinitionPtr> const*,std::vector<std::pair<bool,EntityDefinitionPtr>,std::allocator<std::pair<bool,EntityDefinitionPtr>>>>,std::pair<bool,EntityDefinitionPtr>*>(
            *v8,
            *v8 >> 32,
            (int)v9);
    v25 = (_BYTE *)v12;
    EntityDefinitionDiffList::clearDefinitions((EntityDefinitionDiffList *)(v4 + 3340));
    if ( v5 == 1 )
      if ( (_BYTE *)v12 != v9 )
      {
        v13 = v9;
        do
        {
          EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v13 + 4));
          v13 += 12;
        }
        while ( (_BYTE *)v12 != v13 );
      }
      v12 = (int)v9;
      v25 = v9;
    v22 = 1;
    EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)&v23, (int)&v27);
    v14 = v24;
    if ( v24 == (_BYTE *)v12 )
      if ( (char *)v12 == v26 )
        std::vector<std::pair<bool,EntityDefinitionPtr>,std::allocator<std::pair<bool,EntityDefinitionPtr>>>::_M_emplace_back_aux<std::pair<bool,EntityDefinitionPtr> const&>(
          (unsigned __int64 *)&v24,
          &v22);
      else
        *(_BYTE *)v12 = v22;
        EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)(v12 + 4), (int)&v23);
        v25 += 12;
    else
      *v24 = v22;
      EntityDefinitionPtr::operator=((EntityDefinitionPtr *)(v14 + 4), (int)&v23);
    EntityDefinitionDiffList::setDefinitionStack(v4 + 3340, (unsigned __int64 *)&v24);
    if ( v6 == 1 )
      LODWORD(v15) = &v29;
      HIDWORD(v15) = v4 + 3340;
      EntityDefinitionDiffList::getDescription(v15, 1);
      v16 = v29;
      v29 = 0;
      v17 = *(EntityDefinitionDescriptor **)(v4 + 48);
      *(_DWORD *)(v4 + 48) = v16;
      if ( v17 )
        v18 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v17);
        operator delete((void *)v18);
        if ( v29 )
          v19 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v29);
          operator delete((void *)v19);
    EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v23);
    v20 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      do
        EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v20 + 4));
        LODWORD(v20) = v20 + 12;
      while ( HIDWORD(v20) != (_DWORD)v20 );
      LODWORD(v20) = v24;
    if ( (_DWORD)v20 )
      operator delete((void *)v20);
  }
  return EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v27);
}


int __fastcall Entity::breaksFallingBlocks(Entity *this)
{
  return 0;
}


int __fastcall Entity::createUpdateTradePacket(Entity *this, int a2, char a3)
{
  int v3; // r6@1
  char v4; // r8@1
  void *v5; // r4@1
  Entity *v6; // r5@1
  int v7; // r7@2
  void *v8; // r0@3
  int v9; // r1@5
  void *v10; // r0@5
  int v11; // r0@6
  unsigned int *v13; // r2@10
  signed int v14; // r1@12

  v3 = a2;
  v4 = a3;
  v5 = *(void **)(a2 + 3244);
  v6 = this;
  if ( !v5 )
  {
    v5 = operator new(0x30u);
    TradeableComponent::TradeableComponent((int)v5, v3);
    v7 = *(_DWORD *)(v3 + 3244);
    *(_DWORD *)(v3 + 3244) = v5;
    if ( v7 )
    {
      v8 = *(void **)(v7 + 36);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v7 + 32);
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = *(_DWORD *)(v7 + 28);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      operator delete((void *)v7);
      v5 = *(void **)(v3 + 3244);
    }
  }
  return TradeableComponent::createDataPacket((int)v6, (int)v5, v4);
}


int __fastcall Entity::getAlwaysShowNameTag(Entity *this)
{
  return 0;
}


int __fastcall Entity::isInWaterOrRain(Entity *this)
{
  Weather *v2; // r4@1
  int v8; // r1@1
  int result; // r0@2
  BlockSource *v10; // r5@3
  int v11; // [sp+0h] [bp-28h]@3
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+14h] [bp-14h]@1

  _R5 = this;
  v2 = (Weather *)Dimension::getWeather(*((Dimension **)this + 772));
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
  __asm
  {
    VLDR            S0, [R0,#4]
    VLDR            S2, [R5,#0x134]
  }
  v8 = *(_DWORD *)(_R0 + 8);
  __asm { VADD.F32        S0, S0, S2 }
  v12 = *(_DWORD *)_R0;
  __asm { VSTR            S0, [SP,#0x28+var_18] }
  v13 = v8;
  if ( *((_BYTE *)_R5 + 354) )
    result = 1;
  else
    v10 = (BlockSource *)*((_DWORD *)_R5 + 771);
    BlockPos::BlockPos((int)&v11, (int)&v12);
    result = Weather::isRainingAt(v2, v10, (const BlockPos *)&v11);
  return result;
}


int __fastcall Entity::isInClouds(Entity *this)
{
  signed int v5; // r1@1
  signed int v6; // r0@1

  __asm { VLDR            S4, [R0,#0x4C] }
  v5 = 0;
  __asm { VLDR            S0, =132.0 }
  v6 = 0;
  __asm
  {
    VLDR            S2, =128.0
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, S2
  }
  if ( _NF ^ _VF )
    v5 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v6 = 1;
  return v6 & v5;
}


int __fastcall Entity::getPosExtrapolated(Entity *this, float a2, int a3)
{
  float v3; // r6@1
  int result; // r0@1

  v3 = a2;
  _R8 = a3;
  _R7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(a2) + 56))(LODWORD(a2));
  _R5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v3) + 52))(LODWORD(v3));
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v3) + 56))(LODWORD(v3));
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [R5]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R5,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VMOV            S6, R8
    VLDR            S10, [R5,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S8, [R7,#4]
    VSUB.F32        S4, S10, S4
    VLDR            S10, [R7,#8]
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VLDR            S6, [R7]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
  }
  return result;
}


void __fastcall Entity::readAdditionalSaveData(Entity *this, const CompoundTag *a2)
{
  Entity::readAdditionalSaveData(this, a2);
}


signed int __fastcall Entity::getLinks(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r11@1
  signed int result; // r0@1
  __int64 *v5; // r8@2
  int v6; // r9@2
  int v7; // r10@2
  char v8; // r0@3
  __int64 v9; // r0@5
  int v10; // r0@7
  int v11; // r1@7
  int v12; // r0@7
  __int64 v13; // r0@7
  int v14; // r5@8
  __int64 v15; // r6@8
  int v16; // r2@8
  int v17; // r5@8
  __int64 v18; // r6@8
  signed int v19; // [sp+4h] [bp-5Ch]@2
  char v20; // [sp+10h] [bp-50h]@5
  int v21; // [sp+14h] [bp-4Ch]@8
  __int64 v22; // [sp+18h] [bp-48h]@7
  int v23; // [sp+20h] [bp-40h]@7
  int v24; // [sp+24h] [bp-3Ch]@7
  __int64 v25; // [sp+28h] [bp-38h]@7
  char v26; // [sp+30h] [bp-30h]@6

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = (*(_QWORD *)(a2 + 500) >> 32) - *(_QWORD *)(a2 + 500);
  if ( result >> 3 )
  {
    v5 = (__int64 *)(a2 + 56);
    v19 = result >> 3;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = 2;
      if ( !v7 )
        v8 = 1;
      v20 = v8;
      v9 = *v5;
      if ( ((unsigned int)v9 & HIDWORD(v9)) == -1 )
      {
        Level::getNewUniqueID((Level *)&v26, *(_DWORD *)(v3 + 3092));
        v9 = *(_QWORD *)&v26;
        *v5 = *(_QWORD *)&v26;
      }
      v22 = v9;
      v10 = *(_DWORD *)(v3 + 500);
      v11 = *(_DWORD *)(v10 + v6);
      v12 = *(_DWORD *)(v10 + v6 + 4);
      v23 = v11;
      v24 = v12;
      LOBYTE(v25) = 0;
      v13 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v13 == HIDWORD(v13) )
        std::vector<EntityLink,std::allocator<EntityLink>>::_M_emplace_back_aux<EntityLink>(__PAIR__(&v20, (unsigned int)v2));
      else
        v14 = v21;
        v15 = v22;
        *(_DWORD *)v13 = *(_DWORD *)&v20;
        *(_DWORD *)(v13 + 4) = v14;
        *(_QWORD *)(v13 + 8) = v15;
        v16 = v13 + 16;
        v17 = v24;
        v18 = v25;
        *(_DWORD *)v16 = v23;
        *(_DWORD *)(v16 + 4) = v17;
        *(_QWORD *)(v16 + 8) = v18;
        *((_DWORD *)v2 + 1) = v13 + 32;
      v6 += 8;
      ++v7;
      result = v19;
    }
    while ( v19 != v7 );
  }
  return result;
}


unsigned int __fastcall Entity::_initializeLeashRopeSystem(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // r0@1
  unsigned int v4; // r2@1
  unsigned int result; // r0@3
  int v6; // r5@3
  RopeSystem *v7; // r0@4
  int v8; // r5@6
  unsigned int *v9; // r1@7
  __int64 v10; // r0@11
  int v11; // r6@11
  unsigned int *v12; // r1@12
  unsigned int v13; // r0@14
  unsigned int *v14; // r4@18
  unsigned int *v15; // r7@24
  unsigned int v16; // r0@26
  int v17; // r6@35
  unsigned int *v18; // r1@36
  unsigned int v19; // r0@38
  unsigned int *v20; // r7@42
  unsigned int v21; // r0@44
  char v22; // [sp+4h] [bp-7Ch]@49
  char v23; // [sp+10h] [bp-70h]@49
  char v24; // [sp+1Ch] [bp-64h]@49
  char v25; // [sp+64h] [bp-1Ch]@11
  int v26; // [sp+68h] [bp-18h]@11

  v1 = this;
  v2 = *((_DWORD *)this + 773);
  v3 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 38);
  v4 = v3;
  if ( !v3 )
    v4 = -1;
  result = Level::fetchEntity(v2, SHIDWORD(v3), v4, HIDWORD(v3), 0);
  v6 = result;
  if ( result )
  {
    v7 = (RopeSystem *)*((_DWORD *)v1 + 16);
    if ( v7 )
    {
      result = j_j_j__ZN10RopeSystem15_initializePinsERK4Vec3S2_(
                 v7,
                 (Entity *)((char *)v1 + 72),
                 (const Vec3 *)(v6 + 72));
    }
    else
      j__ZNSt12__shared_ptrI10RopeSystemLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v25);
      v10 = *(_QWORD *)&v25;
      *(_DWORD *)&v25 = 0;
      v26 = 0;
      *((_DWORD *)v1 + 16) = v10;
      v11 = *((_DWORD *)v1 + 17);
      *((_DWORD *)v1 + 17) = HIDWORD(v10);
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          v15 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
      v17 = v26;
      if ( v26 )
        v18 = (unsigned int *)(v26 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      AABB::getCenter((AABB *)&v23, (int)v1 + 264);
      AABB::getCenter((AABB *)&v22, v6 + 264);
      RopeParams::RopeParams((RopeParams *)&v24, (const Vec3 *)&v23, (const Vec3 *)&v22, 3.5);
      RopeParams::leadInit((RopeParams *)&v24);
      result = RopeSystem::initialize(*((RopeSystem **)v1 + 16), (const RopeParams *)&v24);
  }
  else
    *((_DWORD *)v1 + 16) = 0;
    v8 = *((_DWORD *)v1 + 17);
    *((_DWORD *)v1 + 17) = 0;
    if ( v8 )
      v9 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
      else
        result = (*v9)--;
      if ( result == 1 )
        v14 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            result = __ldrex(v14);
          while ( __strex(result - 1, v14) );
          result = (*v14)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


int __fastcall Entity::hasTickingArea(Entity *this)
{
  TickWorldComponent *v1; // r0@1
  int result; // r0@2

  v1 = (TickWorldComponent *)*((_DWORD *)this + 816);
  if ( v1 )
    result = TickWorldComponent::hasTickingArea(v1);
  else
    result = 0;
  return result;
}


int __fastcall Entity::distanceTo(Entity *this, const Vec3 *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R0,#0x48]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMOV            R0, S0
  }
  return result;
}


char *__fastcall Entity::setNameTag(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r6@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2
  unsigned int v7; // r0@4
  unsigned int v8; // r1@4
  int v9; // r0@9

  v2 = a1;
  v3 = a2;
  v4 = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 4);
  if ( *(_BYTE *)(v4 + 4) == 4 )
  {
    v5 = *(_DWORD **)(v4 + 12);
    v6 = *(v5 - 3);
    if ( v6 != *(_DWORD *)(*v3 - 12) || memcmp(v5, (const void *)*v3, v6) )
    {
      EntityInteraction::setInteractText((int *)(v4 + 12), v3);
      *(_BYTE *)(v4 + 8) = 1;
      v7 = *(_WORD *)(v4 + 6);
      v8 = *(_WORD *)(v2 + 188);
      if ( v8 >= v7 )
        LOWORD(v8) = *(_WORD *)(v4 + 6);
      *(_WORD *)(v2 + 188) = v8;
      if ( *(_WORD *)(v2 + 190) > v7 )
        LOWORD(v7) = *(_WORD *)(v2 + 190);
      *(_WORD *)(v2 + 190) = v7;
    }
  }
  v9 = *(_DWORD *)(v2 + 3128);
  if ( v9 )
    (*(void (**)(void))(**(_DWORD **)(v9 + 4) + 92))();
  return sub_21E7EE0((const void **)(v2 + 3372), 0, *(_BYTE **)(*(_DWORD *)(v2 + 3372) - 12), 0);
}


int __fastcall Entity::shouldRender(Entity *this)
{
  return (*(int (**)(void))(*(_DWORD *)this + 172))() ^ 1;
}


char *__fastcall Entity::testForEntityStacking(Entity *a1, BlockSource *a2, const Vec3 *a3, int a4)
{
  const AABB *v4; // r5@1
  Entity *v5; // r7@1
  BlockSource *v6; // r6@1
  int v7; // r8@1
  char *result; // r0@1
  int i; // r4@1
  int v10; // r6@1
  bool v11; // zf@2
  signed int v12; // [sp+0h] [bp-40h]@1
  signed int v13; // [sp+4h] [bp-3Ch]@1
  int v14; // [sp+8h] [bp-38h]@1
  char v15; // [sp+Ch] [bp-34h]@1

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v12 = 1048576000;
  v13 = 1048576000;
  v14 = 1048576000;
  v7 = a4;
  AABB::grow((AABB *)&v15, a3, (int)&v12);
  result = BlockSource::fetchEntities(v6, v5, (const AABB *)&v15);
  v10 = *(_QWORD *)result >> 32;
  for ( i = *(_QWORD *)result; v10 != i; i += 4 )
  {
    result = (char *)SynchedEntityData::_find((SynchedEntityData *)(*(_DWORD *)i + 176), 0);
    v11 = result == 0;
    if ( result )
    {
      result = (char *)(unsigned __int8)result[20];
      v11 = ((unsigned __int8)result & 8) == 0;
    }
    if ( !v11 )
      result = (char *)AABB::intersects((AABB *)(*(_DWORD *)i + 264), v4);
      if ( result == (char *)1 )
        result = std::vector<AABB,std::allocator<AABB>>::push_back(v7, *(_DWORD *)i + 264);
  }
  return result;
}


signed int __fastcall Entity::checkBlockCollisions(Entity *this, const AABB *a2)
{
  Entity *v2; // r4@1
  int v9; // r0@1
  signed int v10; // r5@1
  float v12; // r1@1
  int v13; // r0@1
  int v14; // r8@1
  float v16; // r1@1
  int v17; // r0@1
  int v18; // r9@1
  float v20; // r1@1
  int v21; // r0@1
  __int64 v22; // r10@1
  float v24; // r1@1
  int v25; // r0@1
  float v27; // r1@1
  int v28; // r7@1
  BlockSource *v29; // ST00_4@1
  signed int result; // r0@1
  signed int v31; // r9@4
  int v32; // r10@5
  BlockSource *v33; // r0@6
  int v34; // r0@6
  int v35; // r1@6
  void (*v36)(void); // r6@6
  int v37; // [sp+4h] [bp-A4h]@1
  signed int v38; // [sp+8h] [bp-A0h]@1
  int v39; // [sp+Ch] [bp-9Ch]@1
  int v40; // [sp+10h] [bp-98h]@1
  int v41; // [sp+14h] [bp-94h]@6
  signed int v42; // [sp+18h] [bp-90h]@6
  int v43; // [sp+1Ch] [bp-8Ch]@6
  int v44; // [sp+20h] [bp-88h]@6
  signed int v45; // [sp+24h] [bp-84h]@6
  int v46; // [sp+28h] [bp-80h]@6
  __int64 v47; // [sp+2Ch] [bp-7Ch]@1
  int v48; // [sp+34h] [bp-74h]@1
  char v49; // [sp+38h] [bp-70h]@1
  int v50; // [sp+44h] [bp-64h]@1
  int v51; // [sp+48h] [bp-60h]@1
  int v52; // [sp+4Ch] [bp-5Ch]@1
  char v53; // [sp+50h] [bp-58h]@1
  char v54; // [sp+5Ch] [bp-4Ch]@1

  v2 = this;
  _R6 = a2;
  __asm { VLDR            S16, =0.001 }
  *((_BYTE *)this + 221) = BlockID::AIR;
  __asm
  {
    VLDR            S0, [R6]
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  }
  v9 = mce::Math::floor(_R0, *(float *)&a2);
  __asm { VLDR            S0, [R6,#4] }
  v10 = v9;
  v13 = mce::Math::floor(_R0, v12);
  __asm { VLDR            S0, [R6,#8] }
  v14 = v13;
  v38 = v13;
  v17 = mce::Math::floor(_R0, v16);
  __asm { VLDR            S16, =-0.001 }
  v18 = v17;
  __asm { VLDR            S0, [R6,#0xC] }
  v40 = v17;
  v21 = mce::Math::floor(_R0, v20);
  __asm { VLDR            S0, [R6,#0x10] }
  LODWORD(v22) = v21;
  v37 = v21;
  v25 = mce::Math::floor(_R0, v24);
  __asm { VLDR            S0, [R6,#0x14] }
  HIDWORD(v22) = v25;
  v39 = v25;
  v28 = mce::Math::floor(_R0, v27);
  v29 = (BlockSource *)*((_DWORD *)v2 + 771);
  v50 = v10;
  v51 = v14;
  v52 = v18;
  Vec3::Vec3((int)&v53, (int)&v50);
  v47 = v22;
  v48 = v28;
  Vec3::Vec3((int)&v49, (int)&v47);
  AABB::AABB((int)&v54, (int)&v53, (int)&v49);
  result = BlockSource::hasChunksAt(v29, (const AABB *)&v54);
  if ( v10 <= (signed int)v22 )
    result ^= 1u;
    if ( !result )
    {
      result = v38;
      if ( v38 <= v39 )
      {
        do
        {
          v31 = v38;
          if ( v40 <= v28 )
          {
            do
            {
              v32 = v40;
              do
              {
                v33 = (BlockSource *)*((_DWORD *)v2 + 771);
                v44 = v10;
                v45 = v31;
                v46 = v32;
                v34 = BlockSource::getBlock(v33, (const BlockPos *)&v44);
                v35 = *((_DWORD *)v2 + 771);
                v36 = *(void (**)(void))(*(_DWORD *)v34 + 316);
                v41 = v10;
                v42 = v31;
                v43 = v32;
                v36();
                _VF = __OFSUB__(v32, v28);
                _NF = v32++ - v28 < 0;
              }
              while ( _NF ^ _VF );
              _VF = __OFSUB__(v31, v39);
              _NF = v31++ - v39 < 0;
            }
            while ( _NF ^ _VF );
          }
          result = v10 + 1;
          _VF = __OFSUB__(v10, v37);
          _NF = v10++ - v37 < 0;
        }
        while ( _NF ^ _VF );
      }
    }
  return result;
}


signed int __fastcall Entity::getPlayerOwner(Entity *this)
{
  int v1; // r4@1
  __int64 v2; // r0@1

  v1 = *((_DWORD *)this + 773);
  v2 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 5);
  return j_j_j__ZNK5Level9getPlayerE14EntityUniqueID_0(v1, SHIDWORD(v2), v2, HIDWORD(v2));
}


void __fastcall Entity::addAdditionalSaveData(Entity *this, CompoundTag *a2)
{
  Entity *v2; // r5@1
  CompoundTag *v3; // r4@1
  TradeableComponent *v4; // r0@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@3

  v2 = this;
  v3 = a2;
  v4 = (TradeableComponent *)*((_DWORD *)this + 811);
  if ( v4 )
    TradeableComponent::addAdditionalSaveData(v4, a2);
  sub_21E94B4((void **)&v8, "limitedLife");
  CompoundTag::putInt((int)v3, (const void **)&v8, *((_DWORD *)v2 + 842));
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


int __fastcall Entity::_playMovementSound(Entity *this, int a2)
{
  int v3; // r5@1
  int result; // r0@1
  float v8; // r1@1
  int v9; // r6@2
  float v10; // r1@2
  int v11; // r7@2
  float v12; // r1@2
  int v13; // r0@2
  float v14; // r1@2
  bool v16; // zf@7
  int v19; // r6@14
  float v20; // r1@14
  int v21; // r7@14
  float v22; // r1@14
  int v23; // r0@14
  int v24; // r0@15
  bool v25; // zf@15
  int v26; // r0@19
  bool v27; // zf@19
  BlockSource *v29; // r8@27
  Level *v30; // r6@27
  int v31; // r0@27
  unsigned int v32; // r1@28
  const BlockPos *v33; // r7@31
  int (__fastcall *v34)(Entity *, char *, _DWORD); // r6@32
  int v35; // r1@33
  int v36; // r5@33
  BlockSource *v37; // r8@34
  Level *v38; // r7@34
  int v39; // r0@34
  unsigned int v40; // r1@35
  int v41; // r5@39
  int (__fastcall *v42)(Entity *, char *, int); // r7@40
  char v43; // [sp+10h] [bp-A0h]@40
  unsigned __int8 v44; // [sp+1Ch] [bp-94h]@39
  unsigned __int8 v45; // [sp+20h] [bp-90h]@2
  char v46; // [sp+2Ch] [bp-84h]@32
  unsigned __int8 v47; // [sp+38h] [bp-78h]@31
  char v48; // [sp+3Ch] [bp-74h]@31
  char v49; // [sp+48h] [bp-68h]@24
  int v50; // [sp+54h] [bp-5Ch]@33
  int v51; // [sp+5Ch] [bp-54h]@33

  _R4 = this;
  v3 = a2;
  __asm
  {
    VLDR            S20, [R4,#0x48]
    VLDR            S16, [R4,#0x4C]
    VLDR            S18, [R4,#0x50]
    VLDR            S22, [R4,#0x54]
    VLDR            S24, [R4,#0x58]
    VLDR            S26, [R4,#0x5C]
  }
  result = (*(int (**)(void))(*(_DWORD *)this + 288))();
  if ( !result )
    __asm
    {
      VSUB.F32        S18, S18, S26
      VSUB.F32        S16, S16, S24
      VSUB.F32        S20, S20, S22
    }
    v9 = mce::Math::floor(*((mce::Math **)_R4 + 18), v8);
    v11 = mce::Math::floor(*((mce::Math **)_R4 + 67), v10);
    v13 = mce::Math::floor(*((mce::Math **)_R4 + 20), v12);
    BlockSource::getBlockID((BlockSource *)&v45, *((_DWORD *)_R4 + 771), v9, v11, v13);
    LODWORD(v14) = v45;
    if ( v45 != *(_BYTE *)(Block::mLadder + 4) )
      goto LABEL_43;
    result = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
    _ZF = result == 0;
    if ( result )
      result = *(_BYTE *)(result + 18);
      _ZF = (result & 8) == 0;
    if ( !_ZF )
      goto LABEL_45;
    v16 = result == 0;
      v16 = (result & 4) == 0;
    if ( v16 )
LABEL_43:
      __asm
      {
        VMUL.F32        S0, S20, S20
        VMUL.F32        S2, S18, S18
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      result = mce::Math::sqrt(_R0, v14);
        VLDR            S0, =0.6
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
    else
LABEL_45:
        VMUL.F32        S2, S16, S16
        VMUL.F32        S4, S18, S18
        VLDR            S2, =0.3
        VADD.F32        S0, S0, S4
        VSQRT.F32       S0, S0
        VMUL.F32        S0, S0, S2
      VLDR            S2, [R4,#0x158]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x158]
      VLDR            S2, [R4,#0x15C]
      VCVT.F32.S32    S2, S2
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VCVTR.S32.F32   S0, S0
      *((_DWORD *)_R4 + 87) = _R0 + 1;
      v19 = mce::Math::floor(*((mce::Math **)_R4 + 18), v14);
      v21 = mce::Math::floor(*((mce::Math **)_R4 + 67), v20);
      v23 = mce::Math::floor(*((mce::Math **)_R4 + 20), v22);
      BlockSource::getBlockID((BlockSource *)&v45, *((_DWORD *)_R4 + 771), v19, v21, v23);
      if ( v45 != *(_BYTE *)(Block::mLadder + 4) )
        goto LABEL_44;
      v24 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
      v25 = v24 == 0;
      if ( v24 )
        v25 = (*(_BYTE *)(v24 + 18) & 8) == 0;
      if ( !v25 )
        goto LABEL_46;
      v26 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
      v27 = v26 == 0;
      if ( v26 )
        v27 = (*(_BYTE *)(v26 + 18) & 4) == 0;
      if ( v27 )
LABEL_44:
        if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 208))(_R4) == 1 )
        {
          AABB::getCenter((AABB *)&v49, (int)_R4 + 264);
          __asm
          {
            VMUL.F32        S0, S20, S20
            VMUL.F32        S2, S18, S18
            VMUL.F32        S4, S16, S16
            VADD.F32        S0, S2, S0
            VLDR            S2, =0.2
            VMUL.F32        S0, S0, S2
            VLDR            D1, =0.349999994
            VADD.F32        S0, S0, S4
            VCVT.F64.F32    D0, S0
            VSQRT.F64       D0, D0
            VMUL.F64        D0, D0, D1
            VMOV.F32        S2, #1.0
            VCVT.F32.F64    S0, D0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S0, S2 }
            VLDR            S2, =2.1475e9
            VCVTR.S32.F32   S16, S0
          result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4);
          if ( !result )
            __asm { VMOV            R5, S16 }
            v29 = (BlockSource *)*((_DWORD *)_R4 + 771);
            v30 = (Level *)*((_DWORD *)_R4 + 773);
            (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
            v31 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
            if ( v31 )
              v32 = (*(_BYTE *)(v31 + 17) & 8u) >> 3;
            result = Level::playSound(v30, v29, 29, (int)&v49);
        }
        else
          result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 724))(_R4);
          if ( result != 1
            || (v33 = (const BlockPos *)*((_DWORD *)_R4 + 771),
                BlockPos::BlockPos((int)&v48, (int)_R4 + 72),
                BlockSource::getBlockID((BlockSource *)&v47, v33, (int)&v48),
                result = BlockID::AIR,
                v47 != BlockID::AIR) )
            if ( v3 == 1 )
            {
              result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 312))(_R4);
              if ( !result )
              {
                Entity::_getBlockOnPos((Entity *)&v45, *(float *)&_R4);
                BlockSource::getBlockID((BlockSource *)&v44, *((const BlockPos **)_R4 + 771), (int)&v45);
                v41 = v44;
                result = BlockID::AIR;
                if ( v44 != BlockID::AIR )
                {
                  v42 = *(int (__fastcall **)(Entity *, char *, int))(*(_DWORD *)_R4 + 716);
                  BlockPos::BlockPos((int)&v43, (int)_R4 + 72);
                  result = v42(_R4, &v43, v41);
                }
              }
            }
          else
            v34 = *(int (__fastcall **)(Entity *, char *, _DWORD))(*(_DWORD *)_R4 + 720);
            BlockPos::BlockPos((int)&v46, (int)_R4 + 72);
            result = v34(_R4, &v46, BlockID::AIR);
      else
LABEL_46:
        __asm
          VLDR            S0, [R4,#0x64]
          VLDR            S2, [R4,#0x13C]
          VSUB.F32        S0, S0, S2
        v35 = *((_DWORD *)_R4 + 26);
        v50 = *((_DWORD *)_R4 + 24);
        __asm { VSTR            S0, [SP,#0xB0+var_58] }
        v51 = v35;
        v36 = *(_BYTE *)(Block::mLadder + 4);
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4);
        if ( !result )
          v37 = (BlockSource *)*((_DWORD *)_R4 + 771);
          v38 = (Level *)*((_DWORD *)_R4 + 773);
          (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
          v39 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
          if ( v39 )
            v40 = (*(_BYTE *)(v39 + 17) & 8u) >> 3;
          result = Level::playSound(v38, v37, 2, (int)&v50);
  return result;
}


signed int __fastcall Entity::isOnFire(Entity *this)
{
  signed int result; // r0@2
  int v2; // r4@3
  int v3; // r0@3

  if ( *((_DWORD *)this + 107) <= 0 )
  {
    v2 = 0;
    v3 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
    if ( v3 )
      v2 = *(_BYTE *)(v3 + 16) & 1;
    result = v2;
  }
  else
    result = 1;
  return result;
}


int __fastcall Entity::dropTowards(float a1, const ItemInstance *a2, int a3, int a4, int a5)
{
  const ItemInstance *v13; // r6@1
  Spawner *v17; // r0@1
  int result; // r0@1
  float v19; // [sp+Ch] [bp-4Ch]@1

  _R7 = a1;
  __asm { VLDR            S0, [R7,#0x7C] }
  _R5 = a4;
  __asm
  {
    VLDR            S2, [R7,#0x174]
    VLDR            S4, [R7,#0x16C]
  }
  _R8 = a3;
  _R0 = &mce::Math::DEGRAD;
  v13 = a2;
    VLDR            S16, [R7,#0x170]
    VLDR            S18, [R7,#0x194]
    VLDR            S6, [R0]
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R7,#0x198]
    VADD.F32        S22, S6, S2
    VMOV            R4, S0
    VLDR            S0, [R7,#0x190]
    VADD.F32        S20, S0, S4
  _R0 = cosf(_R4);
  __asm { VMOV            S24, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R4) ^ 0x80000000));
    VMOV            S0, R0
    VMUL.F32        S2, S24, S20
    VLDR            S8, [R7,#0x68]
    VMUL.F32        S4, S0, S22
    VLDR            S10, [R7,#0x60]
    VMUL.F32        S6, S24, S22
    VMUL.F32        S0, S0, S20
    VADD.F32        S2, S4, S2
    VADD.F32        S4, S18, S16
    VSUB.F32        S0, S6, S0
    VLDR            S6, [R7,#0x64]
    VADD.F32        S16, S2, S10
    VADD.F32        S18, S4, S6
    VADD.F32        S20, S8, S0
  v17 = (Spawner *)Level::getSpawner(*(Level **)(LODWORD(_R7) + 3092));
    VLDR            S0, [R7,#0x70]
    VLDR            S2, [R7,#0x74]
    VLDR            S4, [R7,#0x6C]
    VADD.F32        S0, S0, S18
    VADD.F32        S2, S2, S20
    VADD.F32        S4, S4, S16
    VSTR            S4, [SP,#0x58+var_4C]
    VSTR            S0, [SP,#0x58+var_48]
    VSTR            S2, [SP,#0x58+var_44]
  result = Spawner::spawnItem(v17, *(BlockSource **)(LODWORD(_R7) + 3084), v13, 0, (const Vec3 *)&v19, 40);
    VMOV            S0, R5
    VLDR            S4, [SP,#0x58+arg_0]
    VMOV            S2, R8
    VLDR            S6, =0.1
    VSUB.F32        S0, S0, S18
    VLDR            S8, =0.2
    VSUB.F32        S2, S2, S16
    VSUB.F32        S4, S4, S20
  *(_DWORD *)(result + 3492) = 10;
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S0, S8
    VSTR            S2, [R0,#0x6C]
    VSTR            S4, [R0,#0x74]
    VSTR            S0, [R0,#0x70]
  return result;
}


_QWORD *__fastcall Entity::_findRiderID(Entity *this, Entity *a2)
{
  Entity *v2; // r5@1
  _QWORD *v3; // r4@1
  _QWORD *v4; // r6@1
  unsigned int v5; // r0@1
  char *v6; // r7@1
  unsigned int v7; // r2@1
  __int64 v9; // [sp+0h] [bp-20h]@2

  v2 = this;
  v4 = (_QWORD *)(*(_QWORD *)((char *)this + 500) >> 32);
  v3 = (_QWORD *)*(_QWORD *)((char *)this + 500);
  v6 = (char *)a2 + 56;
  v5 = *((_DWORD *)a2 + 14);
  v7 = *((_DWORD *)a2 + 15);
  if ( (v5 & v7) == -1 )
  {
    Level::getNewUniqueID((Level *)&v9, *((_DWORD *)a2 + 773));
    v7 = HIDWORD(v9);
    v5 = v9;
    *(_QWORD *)v6 = v9;
  }
  if ( v3 == v4 )
LABEL_6:
    v3 = (_QWORD *)*((_DWORD *)v2 + 126);
  else
    while ( *v3 != __PAIR__(v7, v5) )
    {
      ++v3;
      if ( v4 == v3 )
        goto LABEL_6;
    }
  return v3;
}


int __fastcall Entity::getInventorySize(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 372))();
  return (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 376))(v1) + v2;
}


signed int __fastcall Entity::isImmobile(Entity *this)
{
  signed int result; // r0@2
  int v2; // r4@3
  int v3; // r0@3

  if ( *((_BYTE *)this + 353) )
  {
    result = 1;
  }
  else
    v2 = 0;
    v3 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
    if ( v3 )
      v2 = *(_BYTE *)(v3 + 18) & 1;
    result = v2;
  return result;
}


int __fastcall Entity::saveWithoutId(Entity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Entity *v3; // r5@1
  void *v4; // r0@1
  int v5; // r1@2
  void **v6; // r0@2
  void **v7; // r0@2
  int v8; // r1@2
  void *v9; // r0@6
  int v10; // r1@7
  void **v11; // r0@7
  int v12; // r1@7
  void *v13; // r0@11
  int v14; // r1@13
  void **v15; // r0@13
  void **v16; // r0@13
  int v17; // r1@13
  void *v18; // r0@17
  const void **v19; // r0@19
  int *v20; // r0@20
  void *v21; // r0@20
  char v22; // r0@21
  void *v23; // r0@21
  void *v24; // r0@22
  void *v25; // r0@23
  void *v26; // r0@24
  void *v27; // r0@25
  void *v28; // r0@26
  void *v29; // r0@27
  void *v30; // r0@28
  void *v31; // r0@29
  int v32; // r0@31
  void *v33; // r0@33
  unsigned int *v35; // r2@35
  signed int v36; // r1@37
  unsigned int *v37; // r2@39
  signed int v38; // r1@41
  unsigned int *v39; // r2@43
  signed int v40; // r1@45
  unsigned int *v41; // r2@47
  signed int v42; // r1@49
  unsigned int *v43; // r2@51
  signed int v44; // r1@53
  unsigned int *v45; // r2@55
  signed int v46; // r1@57
  unsigned int *v47; // r2@59
  signed int v48; // r1@61
  unsigned int *v49; // r2@63
  signed int v50; // r1@65
  unsigned int *v51; // r2@67
  signed int v52; // r1@69
  unsigned int *v53; // r2@71
  signed int v54; // r1@73
  unsigned int *v55; // r2@91
  signed int v56; // r1@93
  unsigned int *v57; // r2@119
  signed int v58; // r1@121
  unsigned int *v59; // r2@123
  signed int v60; // r1@125
  unsigned int *v61; // r2@127
  signed int v62; // r1@129
  unsigned int *v63; // r2@131
  signed int v64; // r1@133
  int v65; // [sp+4h] [bp-ACh]@31
  int v66; // [sp+8h] [bp-A8h]@31
  int v67; // [sp+10h] [bp-A0h]@31
  int v68; // [sp+18h] [bp-98h]@29
  int v69; // [sp+20h] [bp-90h]@28
  int v70; // [sp+28h] [bp-88h]@27
  int v71; // [sp+30h] [bp-80h]@26
  int v72; // [sp+38h] [bp-78h]@25
  int v73; // [sp+40h] [bp-70h]@24
  int v74; // [sp+48h] [bp-68h]@23
  int v75; // [sp+50h] [bp-60h]@22
  int v76; // [sp+58h] [bp-58h]@21
  int v77; // [sp+60h] [bp-50h]@20
  int v78; // [sp+64h] [bp-4Ch]@13
  int v79; // [sp+68h] [bp-48h]@13
  int v80; // [sp+70h] [bp-40h]@13
  int v81; // [sp+74h] [bp-3Ch]@7
  int v82; // [sp+78h] [bp-38h]@7
  int v83; // [sp+80h] [bp-30h]@7
  int v84; // [sp+84h] [bp-2Ch]@2
  int v85; // [sp+88h] [bp-28h]@2
  int v86; // [sp+90h] [bp-20h]@2
  int v87; // [sp+98h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v87, "UniqueID");
  CompoundTag::putInt64((int)v2, (const void **)&v87, *((_QWORD *)v3 + 7), *((_QWORD *)v3 + 7) >> 32);
  v4 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v87 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v86, "Pos");
  v5 = *((_DWORD *)v3 + 18);
  v84 = 0;
  ListTagFloatAdder::operator()((void **)&v84, v5);
  v6 = ListTagFloatAdder::operator()((void **)&v84, *((_DWORD *)v3 + 19));
  v7 = ListTagFloatAdder::operator()(v6, *((_DWORD *)v3 + 20));
  v8 = (int)*v7;
  *v7 = 0;
  v85 = v8;
  CompoundTag::put((int)v2, (const void **)&v86, &v85);
  if ( v85 )
    (*(void (**)(void))(*(_DWORD *)v85 + 4))();
  v85 = 0;
  if ( v84 )
    (*(void (**)(void))(*(_DWORD *)v84 + 4))();
  v9 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v86 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v83, "Rotation");
  v10 = *((_DWORD *)v3 + 31);
  v81 = 0;
  ListTagFloatAdder::operator()((void **)&v81, v10);
  v11 = ListTagFloatAdder::operator()((void **)&v81, *((_DWORD *)v3 + 30));
  v12 = (int)*v11;
  *v11 = 0;
  v82 = v12;
  CompoundTag::put((int)v2, (const void **)&v83, &v82);
  if ( v82 )
    (*(void (**)(void))(*(_DWORD *)v82 + 4))();
  v82 = 0;
  if ( v81 )
    (*(void (**)(void))(*(_DWORD *)v81 + 4))();
  v13 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v83 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( !*((_BYTE *)v3 + 216) )
    sub_21E94B4((void **)&v80, "Motion");
    v14 = *((_DWORD *)v3 + 27);
    v78 = 0;
    ListTagFloatAdder::operator()((void **)&v78, v14);
    v15 = ListTagFloatAdder::operator()((void **)&v78, *((_DWORD *)v3 + 28));
    v16 = ListTagFloatAdder::operator()(v15, *((_DWORD *)v3 + 29));
    v17 = (int)*v16;
    *v16 = 0;
    v79 = v17;
    CompoundTag::put((int)v2, (const void **)&v80, &v79);
    if ( v79 )
      (*(void (**)(void))(*(_DWORD *)v79 + 4))();
    v79 = 0;
    if ( v78 )
      (*(void (**)(void))(*(_DWORD *)v78 + 4))();
    v18 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      }
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  if ( !(*((_BYTE *)v3 + 172) & 1) )
    v19 = (const void **)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 188))(v3);
    if ( sub_21E7D6C(v19, (const char *)&unk_257BC67) )
      sub_21E94B4((void **)&v77, "CustomName");
      v20 = (int *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 188))(v3);
      CompoundTag::putString((int)v2, (const void **)&v77, v20);
      v21 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v77 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
        }
        else
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      sub_21E94B4((void **)&v76, "CustomNameVisible");
      v22 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 176))(v3);
      CompoundTag::putBoolean((int)v2, (const void **)&v76, v22);
      v23 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v76 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v75, "LastDimensionId");
    CompoundTag::putInt((int)v2, (const void **)&v75, *((_DWORD *)v3 + 9));
    v24 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v75 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v74, "FallDistance");
  CompoundTag::putFloat((int)v2, (const void **)&v74, *((_DWORD *)v3 + 56));
  v25 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v74 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v73, "Fire");
  CompoundTag::putShort((int)v2, (const void **)&v73, *((_WORD *)v3 + 214));
  v26 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v73 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v72, "OnGround");
  CompoundTag::putBoolean((int)v2, (const void **)&v72, *((_BYTE *)v3 + 216));
  v27 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v72 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v71, "Invulnerable");
  CompoundTag::putBoolean((int)v2, (const void **)&v71, *((_BYTE *)v3 + 426));
  v28 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v71 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v70, "PortalCooldown");
  CompoundTag::putInt((int)v2, (const void **)&v70, *((_DWORD *)v3 + 113));
  v29 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v70 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v69, "IsGlobal");
  CompoundTag::putBoolean((int)v2, (const void **)&v69, *((_BYTE *)v3 + 3098));
  v30 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v69 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v68, "IsAutonomous");
  CompoundTag::putBoolean((int)v2, (const void **)&v68, *((_BYTE *)v3 + 3099));
  v31 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v68 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( *(_QWORD *)((char *)v3 + 476) >> 32 != (unsigned int)*(_QWORD *)((char *)v3 + 476) )
    sub_21E94B4((void **)&v67, "LinksTag");
    Entity::saveLinks((Entity *)&v65, (int)v3);
    v32 = v65;
    v65 = 0;
    v66 = v32;
    CompoundTag::put((int)v2, (const void **)&v67, &v66);
    if ( v66 )
      (*(void (**)(void))(*(_DWORD *)v66 + 4))();
    v66 = 0;
    v33 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v67 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
  Entity::saveEntityFlags(v3, v2);
  return (*(int (__fastcall **)(Entity *, CompoundTag *))(*(_DWORD *)v3 + 712))(v3, v2);
}


int __fastcall Entity::getControllingPlayer(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall Entity::playSound(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r10@1
  int result; // r0@1
  BlockSource *v7; // r8@2
  Level *v8; // r9@2
  int v9; // r0@2
  unsigned int v10; // r1@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = (*(int (**)(void))(*(_DWORD *)a1 + 288))();
  if ( !result )
  {
    v7 = *(BlockSource **)(v3 + 3084);
    v8 = *(Level **)(v3 + 3092);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 488))(v3);
    v9 = SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 0);
    if ( v9 )
      v10 = (*(_BYTE *)(v9 + 17) & 8u) >> 3;
    result = Level::playSound(v8, v7, v4, v5);
  }
  return result;
}


signed int __fastcall Entity::hasCategory(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 172) & a2;
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


int __fastcall Entity::isCreative(Entity *this)
{
  return 0;
}


unsigned int __fastcall Entity::setStrengthMax(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 76);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall Entity::checkFallDamage(Entity *this, float a2, int a3)
{
  int v5; // r6@1
  int result; // r0@3
  Block *v11; // r5@7
  int v12; // r1@7
  float v13; // r1@10
  char v14; // [sp+8h] [bp-20h]@7

  _R4 = this;
  _R5 = a2;
  v5 = a3;
  if ( !(*(int (**)(void))(*(_DWORD *)this + 208))() )
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 736))(_R4);
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 208))(_R4);
  if ( result == 1 )
  {
    result = 0;
    *((_DWORD *)_R4 + 56) = 0;
  }
  if ( v5 == 1 )
    __asm
    {
      VLDR            S0, [R4,#0xE0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      Entity::_getBlockOnPos((Entity *)&v14, *(float *)&_R4);
      v11 = (Block *)BlockSource::getBlock(*((BlockSource **)_R4 + 771), (const BlockPos *)&v14);
      v12 = *((_DWORD *)_R4 + 771);
      __asm
      {
        VLDR            S0, [R4,#0xE0]
        VSTR            S0, [SP,#0x28+var_28]
      }
      (*(void (**)(void))(*(_DWORD *)v11 + 172))();
      if ( *((_BYTE *)_R4 + 172) & 2 )
        if ( !Block::isType(v11, (const Block *)Block::mAir) )
        {
          __asm
          {
            VMOV.F32        S0, #3.0
            VLDR            S2, [R4,#0xE0]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            if ( Level::isClientSide(*((Level **)_R4 + 773)) == 1 )
              Entity::spawnDustParticles(_R4, v13);
            else
              Level::broadcastEntityEvent(*((_DWORD *)_R4 + 773), (int)_R4, 38, 0);
        }
  else
      VMOV            S0, R5
    if ( _NF ^ _VF )
        VLDR            S2, [R4,#0xE0]
        VSUB.F32        S0, S2, S0
        VSTR            S0, [R4,#0xE0]
      return result;
  result = 0;
  *((_DWORD *)_R4 + 56) = 0;
  return result;
}


void __fastcall Entity::_convertOldSave(Entity *this, const CompoundTag *a2, const CompoundTag *a3)
{
  Entity *v3; // r4@1
  __int64 v4; // r0@1
  EntityDefinitionDescriptor *v5; // r1@1
  EntityDefinitionDescriptor *v6; // r0@1
  EntityDefinitionDescriptor *v7; // r0@2
  EntityDefinitionDescriptor *v8; // r0@3
  EntityDefinitionDescriptor *v9; // [sp+4h] [bp-Ch]@1

  v3 = this;
  EntityLegacySaveConverter::convertSave(this, a2, a3);
  HIDWORD(v4) = (char *)v3 + 3340;
  LODWORD(v4) = &v9;
  EntityDefinitionDiffList::getDescription(v4, 1);
  v5 = v9;
  v9 = 0;
  v6 = (EntityDefinitionDescriptor *)*((_DWORD *)v3 + 12);
  *((_DWORD *)v3 + 12) = v5;
  if ( v6 )
  {
    v7 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v6);
    operator delete((void *)v7);
    if ( v9 )
    {
      v8 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v9);
      operator delete((void *)v8);
    }
  }
}


signed int __fastcall Entity::saveLinks(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  signed int result; // r0@1
  signed int v6; // r9@2
  int v7; // r8@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  void *v12; // r5@19
  void *v13; // r0@19
  void *v14; // r0@20
  int v15; // r0@21
  void *v16; // [sp+4h] [bp-3Ch]@21
  int v17; // [sp+Ch] [bp-34h]@7
  int v18; // [sp+14h] [bp-2Ch]@3

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  result = (*(_QWORD *)(v3 + 500) >> 32) - *(_QWORD *)(v3 + 500);
  if ( result >> 3 )
  {
    v6 = result >> 3;
    v7 = 0;
    do
    {
      v12 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v12);
      sub_21E94B4((void **)&v18, "entityID");
      CompoundTag::putInt64(
        (int)v12,
        (const void **)&v18,
        *(_DWORD *)(*(_DWORD *)(v3 + 500) + 8 * v7),
        *(_DWORD *)(*(_DWORD *)(v3 + 500) + 8 * v7 + 4));
      v13 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v18 - 4);
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
          j_j_j_j__ZdlPv_9(v13);
      }
      sub_21E94B4((void **)&v17, "linkID");
      CompoundTag::putInt((int)v12, (const void **)&v17, v7);
      v14 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v17 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = *(_DWORD *)v2;
      v16 = v12;
      ListTag::add(v15, (int *)&v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      ++v7;
      result = 0;
      v16 = 0;
    }
    while ( v7 != v6 );
  }
  return result;
}


signed int __fastcall Entity::isWithinRestriction(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2
  char v12; // [sp+4h] [bp-14h]@1
  int v13; // [sp+8h] [bp-10h]@2
  int v14; // [sp+Ch] [bp-Ch]@2

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  BlockPos::BlockPos((int)&v12, v2);
  __asm { VMOV.F32        S2, #-1.0 }
  _R0 = (int)v1 + 3284;
  __asm
  {
    VLDR            S0, [R0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    result = 1;
  else
    __asm { VMUL.F32        S0, S0, S0 }
    _R0 = *((_DWORD *)v1 + 822) - *(_DWORD *)&v12;
    __asm { VMOV            S2, R0 }
    _R0 = *((_DWORD *)v1 + 823) - v13;
    __asm { VMOV            S4, R0 }
    _R0 = *((_DWORD *)v1 + 824) - v14;
    __asm
    {
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMOV            S6, R0
    }
    result = 0;
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VMUL.F32        S6, S6, S6
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  return result;
}


int __fastcall Entity::makeStuckInWeb(int result)
{
  *(_BYTE *)(result + 352) = 1;
  *(_DWORD *)(result + 224) = 0;
  return result;
}


unsigned int __fastcall Entity::isIgnited(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 17) & 4u) >> 2;
  return v1;
}


void __fastcall Entity::getDebugText(float a1, int a2)
{
  Entity::getDebugText(a1, a2);
}


signed int __fastcall Entity::hasRestriction(Entity *this)
{
  signed int result; // r0@1

  __asm { VMOV.F32        S0, #-1.0 }
  _R0 = (char *)this + 3284;
  __asm { VLDR            S2, [R0] }
  result = 0;
  __asm
  {
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    result = 1;
  return result;
}


int __fastcall Entity::canSeeInvisible(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::isInsideBorderBlock(Entity *this, float a2)
{
  Entity *v2; // r9@1
  float v8; // r1@1
  int v9; // r0@1
  int v10; // r5@1
  float v12; // r1@1
  int v13; // r0@1
  int v14; // r8@1
  float v16; // r1@1
  int v17; // r0@1
  int v18; // r4@1
  float v20; // r1@1
  int v21; // r0@1
  int v22; // r10@1
  float v24; // r1@1
  int v25; // r0@1
  int v26; // r7@1
  float v28; // r1@1
  int v29; // r0@1
  BlockSource *v30; // r11@1
  int v31; // r6@1
  BlockSource *v32; // r0@1
  int v33; // r11@1
  signed int v34; // r1@1
  signed int result; // r0@1
  int v36; // r1@2
  int v37; // r4@5
  int v38; // r10@5
  BlockSource *v39; // r0@6
  int v40; // [sp+4h] [bp-B4h]@1
  int v41; // [sp+8h] [bp-B0h]@6
  int v42; // [sp+Ch] [bp-ACh]@6
  int v43; // [sp+10h] [bp-A8h]@6
  int v44; // [sp+14h] [bp-A4h]@1
  int v45; // [sp+18h] [bp-A0h]@1
  int v46; // [sp+1Ch] [bp-9Ch]@1
  char v47; // [sp+20h] [bp-98h]@1
  int v48; // [sp+2Ch] [bp-8Ch]@1
  int v49; // [sp+30h] [bp-88h]@1
  int v50; // [sp+34h] [bp-84h]@1
  char v51; // [sp+38h] [bp-80h]@1
  char v52; // [sp+44h] [bp-74h]@1
  float v53; // [sp+60h] [bp-58h]@1
  float v54; // [sp+64h] [bp-54h]@1
  float v55; // [sp+68h] [bp-50h]@1
  float v56; // [sp+6Ch] [bp-4Ch]@1

  v2 = this;
  v53 = a2;
  v54 = a2;
  v55 = a2;
  AABB::grow((AABB *)&v56, (Entity *)((char *)this + 264), (int)&v53);
  __asm
  {
    VLDR            S16, =0.001
    VLDR            S0, [SP,#0xB8+var_4C]
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  }
  v9 = mce::Math::floor(_R0, v8);
  __asm { VLDR            S0, [SP,#0xB8+var_48] }
  v10 = v9;
  v13 = mce::Math::floor(_R0, v12);
  __asm { VLDR            S0, [SP,#0xB8+var_44] }
  v14 = v13;
  v17 = mce::Math::floor(_R0, v16);
  __asm { VLDR            S16, =-0.001 }
  v18 = v17;
  __asm { VLDR            S0, [SP,#0xB8+var_40] }
  v40 = v17;
  v21 = mce::Math::floor(_R0, v20);
  __asm { VLDR            S0, [SP,#0xB8+var_3C] }
  v22 = v21;
  v25 = mce::Math::floor(_R0, v24);
  __asm { VLDR            S0, [SP,#0xB8+var_38] }
  v26 = v25;
  v29 = mce::Math::floor(_R0, v28);
  v30 = (BlockSource *)*((_DWORD *)v2 + 771);
  v48 = v10;
  v49 = v14;
  v31 = v29;
  v50 = v18;
  Vec3::Vec3((int)&v51, (int)&v48);
  v44 = v22;
  v45 = v26;
  v46 = v31;
  Vec3::Vec3((int)&v47, (int)&v44);
  AABB::AABB((int)&v52, (int)&v51, (int)&v47);
  v32 = v30;
  v33 = v22;
  v34 = BlockSource::hasChunksAt(v32, (const AABB *)&v52);
  result = 0;
  if ( v10 <= v22 )
    _ZF = v34 == 1;
    v36 = v40;
    if ( _ZF )
    {
      result = 0;
      if ( v40 <= v31 )
      {
        while ( 2 )
        {
          v37 = v36;
          v38 = v36;
          do
          {
            v39 = (BlockSource *)*((_DWORD *)v2 + 771);
            v41 = v10;
            v42 = 0;
            v43 = v37;
            if ( BlockSource::hasBorderBlock(v39, (const BlockPos *)&v41) )
              return 1;
            _VF = __OFSUB__(v37, v31);
            _NF = v37++ - v31 < 0;
          }
          while ( _NF ^ _VF );
          _VF = __OFSUB__(v10, v33);
          _NF = v10 - v33 < 0;
          result = 0;
          ++v10;
          v36 = v38;
          if ( _NF ^ _VF )
            continue;
          break;
        }
      }
    }
  return result;
}


int __fastcall Entity::isFree(Entity *this, const Vec3 *a2)
{
  Entity *v2; // r4@1
  char *v3; // r0@1
  int result; // r0@2
  char v5; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  AABB::cloneMove((AABB *)&v5, (Entity *)((char *)this + 264), (int)a2);
  v3 = BlockSource::fetchAABBs(*((BlockSource **)v2 + 771), (const AABB *)&v5, 1);
  if ( *(_QWORD *)v3 >> 32 == (unsigned int)*(_QWORD *)v3 )
    result = BlockSource::containsAnyLiquid(*((BlockSource **)v2 + 771), (const AABB *)&v5) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall Entity::spawnEatParticles(Entity *this, const ItemInstance *a2, int a3)
{
  int v4; // r8@1
  int result; // r0@2
  BlockSource *v15; // r5@3
  Level *v16; // r6@3
  int v17; // r0@3
  unsigned int v18; // r1@4
  float *v19; // r3@5
  int v20; // r2@5
  Level *v21; // r0@5
  BlockSource *v22; // r1@5
  float v27; // r0@8
  float v29; // ST1C_4@8
  float v30; // ST18_4@8
  int v39; // r5@8
  BlockSource *v45; // r5@12
  Level *v46; // r6@12
  int v47; // r0@12
  unsigned int v48; // r1@13
  Random *v49; // [sp+10h] [bp-A8h]@7
  ItemInstance *v50; // [sp+14h] [bp-A4h]@1
  float v51; // [sp+20h] [bp-98h]@14
  float v52; // [sp+38h] [bp-80h]@8
  float v53; // [sp+44h] [bp-74h]@5

  _R4 = this;
  v4 = a3;
  v50 = a2;
  if ( ItemInstance::getUseAnimation(a2) == 2 )
  {
    __asm
    {
      VLDR            S16, [R4,#0x16C]
      VLDR            S18, [R4,#0x170]
      VLDR            S20, [R4,#0x174]
    }
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 644))(_R4);
    __asm { VMOV            S0, R0 }
    _R1 = &mce::Math::DEGRAD;
      VLDR            S2, [R1]
      VMUL.F32        S0, S2, S0
      VMOV            R5, S0
    _R0 = cosf(_R5);
    __asm { VMOV            S22, R0 }
    _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
      VMOV            S0, R0
      VLDR            S8, [R4,#0x68]
      VMUL.F32        S2, S22, S16
      VMUL.F32        S4, S0, S20
      VMUL.F32        S6, S22, S20
      VMUL.F32        S0, S0, S16
      VADD.F32        S2, S4, S2
      VLDR            S4, [R4,#0x60]
      VSUB.F32        S0, S6, S0
      VLDR            S6, [R4,#0x64]
      VADD.F32        S2, S2, S4
      VADD.F32        S4, S6, S18
      VADD.F32        S0, S0, S8
      VSTR            S2, [SP,#0xB8+var_74]
      VSTR            S4, [SP,#0xB8+var_70]
      VSTR            S0, [SP,#0xB8+var_6C]
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4);
    if ( result )
      return result;
    v15 = (BlockSource *)*((_DWORD *)_R4 + 771);
    v16 = (Level *)*((_DWORD *)_R4 + 773);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
    v17 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
    if ( v17 )
      v18 = (*(_BYTE *)(v17 + 17) & 8u) >> 3;
    v19 = &v53;
    v20 = 30;
    v21 = v16;
    v22 = v15;
    goto LABEL_15;
  }
  if ( v4 <= 0 )
    _R0 = &mce::Math::DEGRAD;
    __asm { VLDR            S16, [R0] }
  else
      VMOV.F32        S22, #-0.5
      VLDR            D9, =2.32830644e-10
      VLDR            S20, =0.1
      VLDR            S24, =0.05
    v49 = (Entity *)((char *)_R4 + 552);
    do
      __asm
      {
        VLDR            S0, [R4,#0x78]
        VMUL.F32        S0, S16, S0
        VLDR            S2, [R4,#0x7C]
        VMUL.F32        S26, S2, S16
        VMOV            R9, S0
      }
      _R10 = Random::_genRandInt32(v49);
      _R11 = Random::_genRandInt32(v49);
      v27 = cosf(_R9);
      __asm { VMOV            R6, S26 }
      v29 = v27;
      v30 = cosf(_R6);
      Random::_genRandInt32(v49);
        VMOV            S0, R11
        VMOV            S2, R10
        VCVT.F64.U32    D0, S0
        VCVT.F64.U32    D1, S2
        VMUL.F64        D0, D0, D9
        VMUL.F64        D1, D1, D9
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S2, D1
        VMUL.F32        S0, S0, S20
        VADD.F32        S26, S2, S22
        VADD.F32        S28, S0, S20
      _R7 = sinf(COERCE_FLOAT(LODWORD(_R9) ^ 0x80000000));
        VLDR            S30, [R4,#0x16C]
        VLDR            S17, [R4,#0x170]
        VLDR            S21, [R4,#0x174]
      _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 644))(_R4);
        VMOV            S0, R0
        VMOV            R5, S0
      _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
      __asm { VMOV            S23, R0 }
      _R0 = cosf(_R5);
      __asm { VMOV            S0, R0 }
      _R0 = v29;
      __asm { VMUL.F32        S4, S23, S21 }
      _R1 = v30;
        VMUL.F32        S2, S0, S30
        VMUL.F32        S21, S0, S21
        VMUL.F32        S30, S23, S30
        VMOV            S0, R7
        VMOV            S23, R0
        VMUL.F32        S26, S26, S20
        VMUL.F32        S25, S0, S28
        VMOV            S27, R1
        VADD.F32        S29, S4, S2
      _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
        VLDR            S10, [R4,#0x60]
        VMUL.F32        S6, S28, S23
        VLDR            S12, [R4,#0x64]
        VMUL.F32        S8, S0, S25
        VLDR            S14, [R4,#0x68]
        VSUB.F32        S2, S21, S30
        VMUL.F32        S4, S26, S27
        VMUL.F32        S0, S26, S0
        VNMUL.F32       S1, S25, S27
        VADD.F32        S10, S29, S10
        VADD.F32        S12, S12, S17
        VADD.F32        S6, S6, S24
        VADD.F32        S2, S2, S14
        VSUB.F32        S4, S4, S8
        VSUB.F32        S0, S1, S0
        VSTR            S10, [SP,#0xB8+var_80]
        VSTR            S12, [SP,#0xB8+var_7C]
        VSTR            S2, [SP,#0xB8+var_78]
        VSTR            S4, [SP,#0xB8+var_8C]
        VSTR            S6, [SP,#0xB8+var_88]
        VSTR            S0, [SP,#0xB8+var_84]
      v39 = *((_DWORD *)_R4 + 773);
      ItemInstance::getIdAux(v50);
      Level::addParticle(v39, 44, (int)&v52);
      --v4;
    while ( v4 );
  __asm
    VLDR            S18, [R4,#0x16C]
    VLDR            S20, [R4,#0x170]
    VLDR            S22, [R4,#0x174]
  _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 644))(_R4);
    VMOV            S0, R0
    VMUL.F32        S0, S16, S0
    VMOV            R5, S0
  _R0 = cosf(_R5);
  __asm { VMOV            S16, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
    VLDR            S8, [R4,#0x68]
    VMUL.F32        S2, S16, S18
    VMUL.F32        S4, S0, S22
    VMUL.F32        S6, S16, S22
    VMUL.F32        S0, S0, S18
    VADD.F32        S2, S4, S2
    VLDR            S4, [R4,#0x60]
    VSUB.F32        S0, S6, S0
    VLDR            S6, [R4,#0x64]
    VADD.F32        S2, S2, S4
    VADD.F32        S4, S6, S20
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0xB8+var_98]
    VSTR            S4, [SP,#0xB8+var_94]
    VSTR            S0, [SP,#0xB8+var_90]
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4);
  if ( !result )
    v45 = (BlockSource *)*((_DWORD *)_R4 + 771);
    v46 = (Level *)*((_DWORD *)_R4 + 773);
    v47 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
    if ( v47 )
      v48 = (*(_BYTE *)(v47 + 17) & 8u) >> 3;
    v19 = &v51;
    v20 = 31;
    v21 = v46;
    v22 = v45;
LABEL_15:
    result = Level::playSound(v21, v22, v20, (int)v19);
  return result;
}


void __fastcall Entity::initParams(Entity *this, VariantParameterList *a2)
{
  Entity::initParams(this, a2);
}


unsigned int __fastcall Entity::getTempted(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 16) & 0x40u) >> 6;
  return v1;
}


signed int __fastcall Entity::pullInEntity(Entity *this, Entity *a2)
{
  RideableComponent *v2; // r0@1
  signed int result; // r0@2

  v2 = (RideableComponent *)*((_DWORD *)this + 791);
  if ( v2 )
    result = RideableComponent::pullInEntity(v2, a2);
  else
    result = 0;
  return result;
}


signed int __fastcall Entity::getAmbientSoundIntervalMin(Entity *this, float *a2)
{
  int v2; // r0@1
  signed int result; // r0@2

  v2 = *(_DWORD *)(*((_DWORD *)this + 12) + 96);
  if ( v2 )
  {
    *a2 = *(float *)(v2 + 4);
    result = 1;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall Entity::setStructuralIntegrity(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 1);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


void __fastcall Entity::removeAllRiders(Entity *this, bool a2, int a3)
{
  int v3; // r8@1
  Entity *i; // r4@1
  int v5; // r1@2
  int v6; // r0@3
  int v7; // r1@4 OVERLAPPED
  int v8; // r2@4 OVERLAPPED
  char *v9; // r9@4
  signed int v10; // r0@4
  char *v11; // r0@6
  signed int v12; // r2@7
  signed int v13; // r5@8
  int v14; // r5@8
  char *v15; // r7@8

  v3 = a3;
  for ( i = this; ; (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)i + 760))(i, v5, 0) )
  {
    v6 = *((_DWORD *)i + 123);
    if ( v6 == *((_DWORD *)i + 122) )
      break;
    v5 = *(_DWORD *)(v6 - 4);
    *((_DWORD *)i + 123) = v6 - 4;
  }
  *(_QWORD *)&v7 = *(_QWORD *)((char *)i + 476);
  v9 = 0;
  v10 = v8 - v7;
  if ( (v8 - v7) >> 2 )
    if ( (unsigned int)(v10 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v11 = (char *)operator new(v10);
    *(_QWORD *)&v7 = *(_QWORD *)((char *)i + 476);
    v9 = v11;
  v12 = v8 - v7;
  if ( 0 != v12 >> 2 )
    v13 = v12 >> 2;
    _aeabi_memmove4(v9, v7);
    v14 = 4 * v13;
    v15 = v9;
    do
    {
      (*(void (**)(void))(**(_DWORD **)v15 + 596))();
      v14 -= 4;
      v15 += 4;
    }
    while ( v14 );
  if ( v3 )
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)i + 408))(i);
  if ( v9 )
    j_j_j__ZdlPv_6(v9);
}


__int64 __fastcall Entity::getOwnerId(Entity *this, int a2)
{
  Entity *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


int __fastcall Entity::_playStepSound(Entity *this, const BlockPos *a2, int a3)
{
  const BlockPos *v4; // r6@1
  Material *v5; // r0@1
  int result; // r0@1
  int v7; // r2@2
  int v8; // r3@2
  const BlockPos *v9; // r1@2
  int v14; // r1@2
  int v15; // r0@2
  BlockSource *v16; // r8@3
  Level *v17; // r7@3
  int v18; // r0@3
  unsigned int v19; // r1@4
  int v20; // [sp+14h] [bp-34h]@2
  int v21; // [sp+1Ch] [bp-2Ch]@2
  char v22; // [sp+20h] [bp-28h]@2
  int v23; // [sp+24h] [bp-24h]@2
  int v24; // [sp+28h] [bp-20h]@2
  int v25; // [sp+2Ch] [bp-1Ch]@2

  _R5 = this;
  v4 = a2;
  v5 = (Material *)Block::getMaterial((Block *)Block::mBlocks[a3]);
  result = Material::isLiquid(v5);
  if ( !result )
  {
    v7 = *((_DWORD *)v4 + 1);
    v8 = *((_DWORD *)v4 + 2);
    v9 = (const BlockPos *)*((_DWORD *)_R5 + 771);
    v23 = *(_DWORD *)v4;
    v24 = v7 + 1;
    v25 = v8;
    BlockSource::getBlockID((BlockSource *)&v22, v9, (int)&v23);
    __asm
    {
      VLDR            S0, [R5,#0x64]
      VLDR            S2, [R5,#0x13C]
    }
    v14 = *((_DWORD *)_R5 + 26);
    __asm { VSUB.F32        S0, S0, S2 }
    v15 = *(_BYTE *)(Block::mTopSnow + 4);
    v20 = *((_DWORD *)_R5 + 24);
    __asm { VSTR            S0, [SP,#0x48+var_30] }
    v21 = v14;
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 288))(_R5);
    if ( !result )
      v16 = (BlockSource *)*((_DWORD *)_R5 + 771);
      v17 = (Level *)*((_DWORD *)_R5 + 773);
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 488))(_R5);
      v18 = SynchedEntityData::_find((Entity *)((char *)_R5 + 176), 0);
      if ( v18 )
        v19 = (*(_BYTE *)(v18 + 17) & 8u) >> 3;
      result = Level::playSound(v17, v16, 2, (int)&v20);
  }
  return result;
}


int __fastcall Entity::getRiderDecorationRotation(Entity *this, Player *a2)
{
  int v3; // [sp+0h] [bp-10h]@1
  int v4; // [sp+4h] [bp-Ch]@1

  Entity::getRotation((Entity *)&v3, (int)a2);
  return v4;
}


int __fastcall Entity::clearRestriction(int result)
{
  *(_DWORD *)(result + 3284) = -1082130432;
  return result;
}


unsigned int __fastcall Entity::getRandomPointInAABB(Entity *this, Random *_R1, Random *a3)
{
  Random *v3; // r5@1
  unsigned int result; // r0@1

  v3 = a3;
  __asm
  {
    VLDR            S16, [R1,#0x108]
    VLDR            S18, [R1,#0x10C]
    VLDR            S20, [R1,#0x110]
    VLDR            S22, [R1,#0x114]
    VLDR            S24, [R1,#0x118]
    VLDR            S17, [R1,#0x11C]
  }
  _R0 = Random::_genRandInt32(a3);
    VMOV            S0, R0
    VCVT.F64.U32    D14, S0
  _R0 = Random::_genRandInt32(v3);
    VLDR            D13, =2.32830644e-10
    VCVT.F64.U32    D15, S0
  result = Random::_genRandInt32(v3);
    VMUL.F64        D1, D14, D13
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D13
    VMUL.F64        D2, D15, D13
    VSUB.F32        S6, S22, S16
    VCVT.F32.F64    S2, D1
    VSUB.F32        S8, S24, S18
    VCVT.F32.F64    S4, D2
    VSUB.F32        S10, S17, S20
    VCVT.F32.F64    S0, D0
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S8
    VMUL.F32        S0, S0, S10
    VADD.F32        S2, S2, S16
    VADD.F32        S4, S4, S18
    VADD.F32        S0, S0, S20
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  return result;
}


signed int __fastcall Entity::getInteraction(Entity *this, Player *a2, EntityInteraction *a3, const Vec3 *a4)
{
  Player *v4; // r5@1
  Entity *v5; // r6@1
  EntityInteraction *v6; // r4@1
  ItemInstance *v7; // r0@1
  ItemInstance *v8; // r7@1
  int v9; // r0@1
  bool v10; // zf@1
  ClothBlock *v11; // r0@7
  int v12; // r1@7
  char v13; // r0@8
  unsigned __int8 v14; // r1@8
  InteractComponent *v15; // r0@9
  TameableComponent *v16; // r0@11
  AgeableComponent *v17; // r0@13
  HealableComponent *v18; // r0@15
  BreedableComponent *v19; // r0@17
  LeashableComponent *v20; // r0@19
  NameableComponent *v21; // r0@21
  MountTamingComponent *v22; // r0@23
  RideableComponent *v23; // r0@25
  SitComponent *v24; // r0@27
  NpcComponent *v25; // r0@29
  TripodCameraComponent *v26; // r0@31
  TradeableComponent *v27; // r0@33
  ContainerComponent *v28; // r0@35
  bool v29; // zf@35
  void *v30; // r0@41
  int v31; // r4@41
  int v33; // r0@44
  _DWORD *v34; // r0@45
  __int64 v35; // r1@45
  _DWORD *v36; // r0@49
  __int64 v37; // r1@49
  void *v38; // r0@53
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  int v43; // [sp+4h] [bp-44h]@41
  int v44; // [sp+Ch] [bp-3Ch]@53
  _DWORD *v45; // [sp+10h] [bp-38h]@49
  __int64 v46; // [sp+18h] [bp-30h]@49
  _DWORD *v47; // [sp+20h] [bp-28h]@45
  __int64 v48; // [sp+28h] [bp-20h]@45

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (ItemInstance *)Player::getSelectedItem(a2);
  v8 = v7;
  v9 = *((_BYTE *)v7 + 15);
  v10 = v9 == 0;
  if ( v9 )
    v10 = *(_DWORD *)v8 == 0;
  if ( !v10
    && !ItemInstance::isNull(v8)
    && *((_BYTE *)v8 + 14)
    && *(_DWORD *)v8 == Item::mDye_powder
    && (v11 = (ClothBlock *)ItemInstance::getAuxValue(v8),
        LOBYTE(v8) = ClothBlock::getBlockDataForItemAuxValue(v11, v12),
        *(_DWORD *)(*((_DWORD *)v5 + 12) + 128))
    && (v13 = SynchedEntityData::getInt8((Entity *)((char *)v5 + 176), 3),
        v8 = (ItemInstance *)(unsigned __int8)v8,
        Palette::fromByte((Palette *)(v13 & 0xF), v14) != (unsigned __int8)v8) )
  {
    v33 = *(_DWORD *)(*((_DWORD *)v5 + 12) + 128);
    EntityInteraction::setInteractText();
    if ( EntityInteraction::shouldCapture(v6) == 1 )
    {
      v34 = operator new(0xCu);
      LODWORD(v35) = sub_16F63AE;
      *v34 = v5;
      v34[1] = v4;
      HIDWORD(v35) = sub_16F62E0;
      v34[2] = v8;
      v47 = v34;
      v48 = v35;
      EntityInteraction::capture((int)v6, (int)&v47);
      if ( (_DWORD)v48 )
        ((void (*)(void))v48)();
    }
  }
  else
    v15 = (InteractComponent *)*((_DWORD *)v5 + 793);
    if ( !v15 || !InteractComponent::getInteraction(v15, v4, v6) )
      v16 = (TameableComponent *)*((_DWORD *)v5 + 784);
      if ( !v16 || !TameableComponent::getInteraction(v16, v4, v6) )
      {
        v17 = (AgeableComponent *)*((_DWORD *)v5 + 777);
        if ( !v17 || !AgeableComponent::getInteraction(v17, v4, v6) )
        {
          v18 = (HealableComponent *)*((_DWORD *)v5 + 795);
          if ( !v18 || !HealableComponent::getInteraction(v18, v4, v6) )
          {
            v19 = (BreedableComponent *)*((_DWORD *)v5 + 781);
            if ( !v19 || !BreedableComponent::getInteraction(v19, v4, v6) )
            {
              v20 = (LeashableComponent *)*((_DWORD *)v5 + 802);
              if ( !v20 || !LeashableComponent::getInteraction(v20, v4, v6) )
              {
                v21 = (NameableComponent *)*((_DWORD *)v5 + 805);
                if ( !v21 || !NameableComponent::getInteraction(v21, v4, v6) )
                {
                  v22 = (MountTamingComponent *)*((_DWORD *)v5 + 789);
                  if ( !v22 || !MountTamingComponent::getInteraction(v22, v4, v6) )
                  {
                    v23 = (RideableComponent *)*((_DWORD *)v5 + 791);
                    if ( !v23 || !RideableComponent::getInteraction(v23, v4, v6) )
                    {
                      v24 = (SitComponent *)*((_DWORD *)v5 + 785);
                      if ( !v24 || !SitComponent::getInteraction(v24, v4, v6) )
                      {
                        v25 = (NpcComponent *)*((_DWORD *)v5 + 807);
                        if ( !v25 || !NpcComponent::getInteraction(v25, v4, v6) )
                        {
                          v26 = (TripodCameraComponent *)*((_DWORD *)v5 + 808);
                          if ( !v26 || !TripodCameraComponent::getInteraction(v26, v4, v6) )
                          {
                            v27 = (TradeableComponent *)*((_DWORD *)v5 + 811);
                            if ( !v27 || !TradeableComponent::getInteraction(v27, v4, v6) )
                            {
                              v28 = (ContainerComponent *)*((_DWORD *)v5 + 782);
                              v29 = v28 == 0;
                              if ( v28 )
                                v29 = *(_DWORD *)(*((_DWORD *)v5 + 12) + 304) == 0;
                              if ( v29 )
                                goto LABEL_71;
                              if ( ContainerComponent::canOpenContainer(v28, v4) != 1 )
                                return 0;
                              if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v5 + 12) + 304) + 13) )
                              {
LABEL_71:
                                if ( Level::isClientSide(*((Level **)v5 + 773)) != 1 )
                                  return 0;
                                Player::getInteractText((Player *)&v43, (int)v4);
                                v30 = (void *)(v43 - 12);
                                v31 = *(_DWORD *)(v43 - 12);
                                if ( (int *)(v43 - 12) != &dword_28898C0 )
                                {
                                  v41 = (unsigned int *)(v43 - 4);
                                  if ( &pthread_create )
                                  {
                                    __dmb();
                                    do
                                      v42 = __ldrex(v41);
                                    while ( __strex(v42 - 1, v41) );
                                  }
                                  else
                                    v42 = (*v41)--;
                                  if ( v42 <= 0 )
                                    j_j_j_j__ZdlPv_9(v30);
                                }
                                if ( !v31 )
                              }
                              else
                                if ( EntityInteraction::shouldCapture(v6) == 1 )
                                  v36 = operator new(8u);
                                  LODWORD(v37) = sub_16F63FA;
                                  *v36 = v5;
                                  v36[1] = v4;
                                  HIDWORD(v37) = sub_16F63EC;
                                  v45 = v36;
                                  v46 = v37;
                                  EntityInteraction::capture((int)v6, (int)&v45);
                                  if ( (_DWORD)v46 )
                                    ((void (*)(void))v46)();
                                if ( EntityClassTree::isInstanceOf((int)v5, 2118400) != 1
                                  || (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 312))(v4) == 1 )
                                  sub_21E94B4((void **)&v44, "action.interact.opencontainer");
                                  EntityInteraction::setInteractText();
                                  v38 = (void *)(v44 - 12);
                                  if ( (int *)(v44 - 12) != &dword_28898C0 )
                                    v39 = (unsigned int *)(v44 - 4);
                                    if ( &pthread_create )
                                    {
                                      __dmb();
                                      do
                                        v40 = __ldrex(v39);
                                      while ( __strex(v40 - 1, v39) );
                                    }
                                    else
                                      v40 = (*v39)--;
                                    if ( v40 <= 0 )
                                      j_j_j_j__ZdlPv_9(v38);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
  return 1;
}


int __fastcall Entity::reload(Entity *this)
{
  Entity *v1; // r11@1
  int result; // r0@1
  __int64 v3; // r0@2
  EntityDefinitionDescriptor *v4; // r1@2
  EntityDefinitionDescriptor *v5; // r0@2
  EntityDefinitionDescriptor *v6; // r0@3
  EntityDefinitionDescriptor *v7; // r0@4
  int v8; // r0@6
  char *v9; // r1@12
  __int64 v10; // r0@13
  EntityDefinitionDescriptor *v11; // r1@13
  EntityDefinitionDescriptor *v12; // r0@13
  EntityDefinitionDescriptor *v13; // r0@14
  EntityDefinitionDescriptor *v14; // r0@15
  char *v15; // r0@17
  int v16; // r0@18
  int v17; // r2@18
  int v18; // r1@19
  Entity *v19; // r9@19
  void (__fastcall *v20)(Entity *, int, Entity *); // r3@19
  void (__fastcall *v21)(Entity *, int); // r5@21
  int v22; // r0@21
  int v23; // r5@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  void *v26; // r7@31
  int v27; // r1@31
  void *v28; // r0@31
  unsigned int *v29; // r2@35
  signed int v30; // r1@37
  char *v31; // [sp+4h] [bp-3Ch]@6
  EntityDefinitionDescriptor *v32; // [sp+8h] [bp-38h]@2
  EntityDefinitionDescriptor *v33; // [sp+14h] [bp-2Ch]@13

  v1 = this;
  result = *((_DWORD *)this + 771);
  if ( result )
  {
    LODWORD(v3) = &v32;
    HIDWORD(v3) = (char *)v1 + 3340;
    EntityDefinitionDiffList::getDescription(v3, 0);
    v4 = v32;
    v32 = 0;
    v5 = (EntityDefinitionDescriptor *)*((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = v4;
    if ( v5 )
    {
      v6 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v5);
      operator delete((void *)v6);
      if ( v32 )
      {
        v7 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v32);
        operator delete((void *)v7);
      }
    }
    if ( !*((_BYTE *)v1 + 3081) )
      v31 = (char *)&unk_28898CC;
      v8 = *((_BYTE *)v1 + 4);
      switch ( v8 )
        case 4:
          sub_21E8190((void **)&v31, "minecraft:entity_transformed", (_BYTE *)0x1C);
          break;
        case 3:
          sub_21E8190((void **)&v31, "minecraft:entity_born", (_BYTE *)0x15);
        case 2:
          sub_21E8190((void **)&v31, "minecraft:entity_spawned", (_BYTE *)0x18);
      v9 = v31;
      if ( *((_DWORD *)v31 - 3) )
        EntityDefinitionDescriptor::executeEvent(
          *((_DWORD *)v1 + 12),
          (int)v1,
          (int **)&v31,
          (Entity *)((char *)v1 + 8));
        LODWORD(v10) = &v33;
        HIDWORD(v10) = (char *)v1 + 3340;
        EntityDefinitionDiffList::getDescription(v10, 1);
        v11 = v33;
        v33 = 0;
        v12 = (EntityDefinitionDescriptor *)*((_DWORD *)v1 + 12);
        *((_DWORD *)v1 + 12) = v11;
        if ( v12 )
        {
          v13 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v12);
          operator delete((void *)v13);
          if ( v33 )
          {
            v14 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v33);
            operator delete((void *)v14);
          }
        }
        v9 = v31;
      v15 = v9 - 12;
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
    v16 = Level::isClientSide(*((Level **)v1 + 773));
    v17 = *(_DWORD *)v1;
    if ( v16 )
      v18 = *((_BYTE *)v1 + 4);
      v19 = (Entity *)((char *)v1 + 8);
      v20 = *(void (__fastcall **)(Entity *, int, Entity *))(v17 + 4);
    else
      (*(void (__fastcall **)(Entity *, _DWORD, char *))(v17 + 8))(v1, *((_BYTE *)v1 + 4), (char *)v1 + 8);
      (*(void (__fastcall **)(Entity *, _DWORD, char *))(*(_DWORD *)v1 + 12))(v1, *((_BYTE *)v1 + 4), (char *)v1 + 8);
      EntityDefinitionDiffList::clearChangedDescription((Entity *)((char *)v1 + 3340));
      v20 = **(void (__fastcall ***)(Entity *, int, Entity *))v1;
    v20(v1, v18, v19);
    *((_BYTE *)v1 + 3081) = 1;
    v21 = (void (__fastcall *)(Entity *, int))*(_QWORD *)(*(_DWORD *)v1 + 48);
    v22 = ((int (__fastcall *)(Entity *))(*(_QWORD *)(*(_DWORD *)v1 + 48) >> 32))(v1);
    v21(v1, v22);
    *((_BYTE *)v1 + 4) = 5;
    v23 = *((_DWORD *)v1 + 4);
    while ( v23 )
      v26 = (void *)v23;
      v27 = *(_DWORD *)(v23 + 8);
      v23 = *(_DWORD *)v23;
      v28 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v27 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      operator delete(v26);
    _aeabi_memclr4(*(_DWORD *)v19, 4 * *((_DWORD *)v1 + 3));
    result = 0;
    *((_DWORD *)v1 + 4) = 0;
    *((_DWORD *)v1 + 5) = 0;
  }
  return result;
}


char *__fastcall Entity::onOnewayCollision(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1
  char *result; // r0@1
  int v12; // [sp+0h] [bp-58h]@1
  char v13; // [sp+Ch] [bp-4Ch]@1
  int v14; // [sp+28h] [bp-30h]@1
  int v15; // [sp+2Ch] [bp-2Ch]@1
  int v16; // [sp+30h] [bp-28h]@1
  int v17; // [sp+34h] [bp-24h]@1
  int v18; // [sp+38h] [bp-20h]@1
  int v19; // [sp+3Ch] [bp-1Ch]@1
  int v20; // [sp+40h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  AABB::AABB((int)&v13, (int)&Vec3::ZERO, (int)&Vec3::ONE);
  Vec3::Vec3((int)&v12, v3);
  v4 = AABB::move((AABB *)&v13, (const Vec3 *)&v12);
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 8);
  v4 += 12;
  v14 = v5;
  v15 = v6;
  v16 = v7;
  v8 = *(_DWORD *)(v4 + 4);
  v9 = *(_DWORD *)(v4 + 8);
  v10 = *(_DWORD *)(v4 + 12);
  v17 = *(_DWORD *)v4;
  v18 = v8;
  v19 = v9;
  v20 = v10;
  result = (char *)std::__find_if<__gnu_cxx::__normal_iterator<AABB *,std::vector<AABB,std::allocator<AABB>>>,__gnu_cxx::__ops::_Iter_equals_val<AABB const>>(
                     *(_DWORD *)(v2 + 3380),
                     *(_DWORD *)(v2 + 3384),
                     (int)&v14);
  if ( result == *(char **)(v2 + 3384) )
    result = std::vector<AABB,std::allocator<AABB>>::push_back(v2 + 3380, (int)&v14);
  return result;
}


int __fastcall Entity::markHurt(int result)
{
  *(_BYTE *)(result + 425) = 1;
  return result;
}


int __fastcall Entity::isCreativeModeAllowed(Entity *this)
{
  return 0;
}


int __fastcall Entity::add(Entity *this, ItemInstance *a2)
{
  ItemInstance *v2; // r2@1
  Entity *v3; // r1@1
  int v4; // r0@1
  signed int v5; // r4@2

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)this + 782);
  if ( v4 )
  {
    v5 = 1;
    v4 = ContainerComponent::addItem((ContainerComponent *)v4, *((BlockSource **)v3 + 771), v2, 0, 1);
  }
  else
    v5 = 0;
  return v4 & v5;
}


unsigned int __fastcall Entity::setSeatDescription(int a1, int a2, int a3)
{
  int v3; // r4@1
  SynchedEntityData *v4; // r6@1
  unsigned int v12; // r1@2
  _DWORD *v14; // r3@4
  unsigned int v15; // r1@10
  unsigned int v16; // r0@10
  int v17; // r7@15
  int v18; // r0@15
  unsigned int v19; // r1@15
  unsigned int v20; // r1@17
  unsigned int v21; // r0@17
  unsigned int v23; // r1@22
  unsigned int v24; // r1@24
  unsigned int v25; // r0@24
  unsigned int result; // r0@29
  unsigned int v27; // r1@29
  unsigned int v28; // r1@31
  unsigned int v29; // r0@31
  float v30; // [sp+4h] [bp-2Ch]@1

  v3 = a1;
  v4 = (SynchedEntityData *)(a1 + 176);
  _R5 = a3;
  _R7 = a2;
  SynchedEntityData::getVec3((SynchedEntityData *)&v30, a1 + 176, 0x39u);
  __asm
  {
    VLDR            S0, [R7]
    VLDR            S6, [SP,#0x30+var_2C]
    VLDR            S2, [R7,#4]
    VLDR            S8, [SP,#0x30+var_28]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R7,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x30+var_24]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =1.4211e-14
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R0 = SynchedEntityData::_get(v4, 57);
    v12 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v12 == 8 )
    {
      __asm
      {
        VLDR            S0, [R7]
        VLDR            S2, [R0,#0xC]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm { VLDR            S2, [R7,#4] }
        v14 = (_DWORD *)(_R0 + 16);
        __asm
        {
          VLDR            S4, [R0,#0x10]
          VMOV            R2, S2
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm
          {
            VLDR            S2, [R7,#8]
            VLDR            S4, [R0,#0x14]
            VCMPE.F32       S4, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            goto LABEL_15;
      else
        _R2 = *(_DWORD *)(_R7 + 4);
      __asm { VSTR            S0, [R0,#0xC] }
      v15 = v12 >> 16;
      *v14 = _R2;
      *(_DWORD *)(_R0 + 20) = *(_DWORD *)(_R7 + 8);
      *(_BYTE *)(_R0 + 8) = 1;
      v16 = *(_WORD *)(v3 + 188);
      if ( v16 >= v15 )
        LOWORD(v16) = v15;
      *(_WORD *)(v3 + 188) = v16;
      if ( *(_WORD *)(v3 + 190) > v15 )
        LOWORD(v15) = *(_WORD *)(v3 + 190);
      *(_WORD *)(v3 + 190) = v15;
    }
LABEL_15:
  v17 = *(_BYTE *)(_R5 + 24);
  v18 = SynchedEntityData::_get(v4, 58);
  v19 = *(_DWORD *)(v18 + 4);
  if ( !(_BYTE)v19 && *(_BYTE *)(v18 + 9) != v17 )
    *(_BYTE *)(v18 + 9) = v17;
    *(_BYTE *)(v18 + 8) = 1;
    v20 = v19 >> 16;
    v21 = *(_WORD *)(v3 + 188);
    if ( v21 >= v20 )
      LOWORD(v21) = v20;
    *(_WORD *)(v3 + 188) = v21;
    if ( *(_WORD *)(v3 + 190) > v20 )
      LOWORD(v20) = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v20;
  __asm { VLDR            S16, [R5,#0x1C] }
  _R0 = SynchedEntityData::_get(v4, 59);
  v23 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v23 == 3 )
    __asm
      VLDR            S0, [R0,#0xC]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      __asm { VSTR            S16, [R0,#0xC] }
      v24 = v23 >> 16;
      v25 = *(_WORD *)(v3 + 188);
      if ( v25 >= v24 )
        LOWORD(v25) = v24;
      *(_WORD *)(v3 + 188) = v25;
      if ( *(_WORD *)(v3 + 190) > v24 )
        LOWORD(v24) = *(_WORD *)(v3 + 190);
      *(_WORD *)(v3 + 190) = v24;
  __asm { VLDR            S16, [R5,#0x14] }
  result = SynchedEntityData::_get(v4, 60);
  v27 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v27 == 3 )
      *(_BYTE *)(result + 8) = 1;
      v28 = v27 >> 16;
      v29 = *(_WORD *)(v3 + 188);
      if ( v29 >= v28 )
        LOWORD(v29) = v28;
      *(_WORD *)(v3 + 188) = v29;
      result = *(_WORD *)(v3 + 190);
      if ( result > v28 )
        LOWORD(v28) = *(_WORD *)(v3 + 190);
      *(_WORD *)(v3 + 190) = v28;
  return result;
}


int __fastcall Entity::distanceToSqr(Entity *this, const Entity *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1,#0x48]
    VLDR            S6, [R0,#0x48]
    VLDR            S2, [R1,#0x4C]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#0x50]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Entity::getTradeOffers(Entity *this)
{
  TradeableComponent *v1; // r0@1
  int result; // r0@2

  v1 = (TradeableComponent *)*((_DWORD *)this + 811);
  if ( v1 )
    result = j_j_j__ZN18TradeableComponent9getOffersEv(v1);
  else
    result = 0;
  return result;
}


int __fastcall Entity::isInWall(Entity *this)
{
  BlockSource *v2; // r4@1
  float v13; // [sp+4h] [bp-3Ch]@1

  _R5 = this;
  v2 = (BlockSource *)*((_DWORD *)this + 771);
  __asm
  {
    VLDR            S16, [R5,#0x188]
    VLDR            S18, [R5,#0x18C]
    VLDR            S20, [R5,#0x184]
  }
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 644))();
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R0 = cosf(_R6);
  __asm { VMOV            S22, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
    VMOV            S0, R0
    VLDR            S8, [R5,#0x68]
    VMUL.F32        S2, S22, S20
    VMUL.F32        S4, S0, S18
    VMUL.F32        S6, S22, S18
    VMUL.F32        S0, S0, S20
    VADD.F32        S2, S4, S2
    VLDR            S4, [R5,#0x60]
    VSUB.F32        S0, S6, S0
    VLDR            S6, [R5,#0x64]
    VADD.F32        S2, S2, S4
    VADD.F32        S4, S6, S16
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0x40+var_3C]
    VSTR            S4, [SP,#0x40+var_38]
    VSTR            S0, [SP,#0x40+var_34]
  return BlockSource::isInWall(v2, (const Vec3 *)&v13);
}


unsigned int __fastcall Entity::canClimb(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 8u) >> 3;
  return v1;
}


signed int __fastcall Entity::remove(Entity *this)
{
  Entity *v1; // r4@1
  int i; // r5@2
  Player *v3; // r1@3
  signed int result; // r0@9

  v1 = this;
  if ( *((_DWORD *)this + 809) )
  {
    for ( i = *((_DWORD *)Level::getPlayerList(*((Level **)this + 773)) + 2); i; i = *(_DWORD *)i )
    {
      v3 = (Player *)Level::getPlayer(*((Level **)v1 + 773), (const mce::UUID *)(i + 8));
      if ( v3 )
        BossComponent::unRegisterPlayer(*((BossComponent **)v1 + 809), v3);
    }
  }
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 316))(v1) )
    Entity::removeAllRiders(v1, 1, 0);
  result = 1;
  *((_BYTE *)v1 + 3097) = 1;
  return result;
}


RopeSystem *__fastcall Entity::tickLeash(Entity *this, int a2, int a3, int a4, char a5, int a6, int a7)
{
  Entity *v7; // r5@1
  int v8; // r4@1
  __int64 v9; // r0@1
  unsigned int v10; // r2@1
  RopeSystem *v11; // r0@4
  RopeSystem *result; // r0@7
  int v13; // r3@8
  int v14; // r4@9
  unsigned int *v15; // r1@10
  unsigned int *v16; // r5@17

  v7 = this;
  v8 = *((_DWORD *)this + 773);
  v9 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 38);
  v10 = v9;
  if ( !v9 )
    v10 = -1;
  if ( Level::fetchEntity(v8, SHIDWORD(v9), v10, HIDWORD(v9), 0) )
  {
    v11 = (RopeSystem *)*((_DWORD *)v7 + 16);
    if ( !v11 || RopeSystem::isCut(v11) == 1 )
      Entity::_initializeLeashRopeSystem(v7);
  }
  result = (RopeSystem *)*((_DWORD *)v7 + 16);
  if ( result )
    if ( RopeSystem::isDestroyed(result) == 1 )
    {
      result = 0;
      *((_DWORD *)v7 + 16) = 0;
      v14 = *((_DWORD *)v7 + 17);
      *((_DWORD *)v7 + 17) = 0;
      if ( v14 )
      {
        v15 = (unsigned int *)(v14 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (RopeSystem *)__ldrex(v15);
          while ( __strex((unsigned int)result - 1, v15) );
        }
        else
          result = (RopeSystem *)(*v15)--;
        if ( result == (RopeSystem *)1 )
          v16 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (RopeSystem *)__ldrex(v16);
            while ( __strex((unsigned int)result - 1, v16) );
          }
          else
            result = (RopeSystem *)(*v16)--;
          if ( result == (RopeSystem *)1 )
            result = (RopeSystem *)(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      }
    }
    else
      result = j_j_j__ZN10RopeSystem9queueTickER11BlockSourceRSt10shared_ptrIS_E(
                 *((RopeSystem **)v7 + 16),
                 *((BlockSource **)v7 + 771),
                 (int)v7 + 64,
                 v13,
                 a5,
                 a6,
                 a7);
  return result;
}


int __fastcall Entity::isMoving(Entity *this)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = *(_BYTE *)(v2 + 20) & 1;
  return v1;
}


int __fastcall Entity::setCollidableMobNear(int result, bool a2)
{
  *(_BYTE *)(result + 3400) = a2;
  return result;
}


signed int __fastcall Entity::onLadder(Entity *this, int a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  float v5; // r1@1
  int v6; // r7@1
  float v7; // r1@1
  int v8; // r0@1
  int v9; // r2@1
  signed int result; // r0@1
  unsigned __int8 v11; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = mce::Math::floor(*((mce::Math **)this + 18), *(float *)&a2);
  v6 = mce::Math::floor(*((mce::Math **)v2 + 67), v5);
  v8 = mce::Math::floor(*((mce::Math **)v2 + 20), v7);
  BlockSource::getBlockID((BlockSource *)&v11, *((_DWORD *)v2 + 771), v4, v6, v8);
  v9 = *(_BYTE *)(Block::mLadder + 4);
  result = 0;
  if ( v11 == v9 )
    result = 1;
  if ( v11 != v9 && v3 == 1 )
  {
    result = 0;
    if ( v11 == *(_BYTE *)(Block::mVine + 4) )
      result = 1;
  }
  return result;
}


signed int __fastcall Entity::_tryPlaceAt(Entity *this, const Vec3 *a2)
{
  Entity *v2; // r9@1
  int v3; // r2@1
  int v4; // r3@1
  signed int v5; // r8@1
  __int64 v6; // r6@1
  char v7; // r4@2
  char v8; // r0@3
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1

  v2 = this;
  v3 = *((_DWORD *)this + 19);
  v4 = *((_DWORD *)this + 20);
  v10 = *((_DWORD *)this + 18);
  v11 = v3;
  v12 = v4;
  (*(void (__cdecl **)(Entity *, const Vec3 *, _DWORD))(*(_DWORD *)this + 48))(
    this,
    a2,
    *(_DWORD *)(*(_DWORD *)this + 48));
  v5 = 1;
  v6 = *(_QWORD *)BlockSource::fetchAABBs(*((BlockSource **)v2 + 771), (Entity *)((char *)v2 + 264), 1);
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    v7 = 0;
    do
    {
      v8 = AABB::intersects((AABB *)v6, (Entity *)((char *)v2 + 264));
      LODWORD(v6) = v6 + 28;
      v7 |= v8;
    }
    while ( HIDWORD(v6) != (_DWORD)v6 );
    if ( v7 & 1 )
      (*(void (__fastcall **)(Entity *, int *))(*(_DWORD *)v2 + 48))(v2, &v10);
      v5 = 0;
    else
      v5 = 1;
  }
  return v5;
}


char *__fastcall Entity::onOnewayCollision(Entity *this, const AABB *a2)
{
  Entity *v2; // r5@1
  const AABB *v3; // r4@1
  char *result; // r0@1

  v2 = this;
  v3 = a2;
  result = (char *)std::__find_if<__gnu_cxx::__normal_iterator<AABB *,std::vector<AABB,std::allocator<AABB>>>,__gnu_cxx::__ops::_Iter_equals_val<AABB const>>(
                     *((_DWORD *)this + 845),
                     *((_DWORD *)this + 846),
                     (int)a2);
  if ( result == *((char **)v2 + 846) )
    result = j_j_j__ZNSt6vectorI4AABBSaIS0_EE9push_backERKS0_((int)v2 + 3380, (int)v3);
  return result;
}


void __fastcall Entity::filterFormattedNameTag(Entity *this, const UIProfanityContext *a2)
{
  int *v2; // r5@2
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  int v6; // [sp+4h] [bp-1Ch]@2

  if ( !*(_DWORD *)(*((_DWORD *)this + 843) - 12) )
  {
    v2 = (int *)((char *)this + 3372);
    (*(void (**)(void))(*(_DWORD *)this + 188))();
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v6);
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
}


void __fastcall Entity::updateDescription(Entity *this)
{
  Entity::updateDescription(this);
}


char *__fastcall Entity::getVelocity(Entity *this)
{
  return (char *)this + 108;
}


unsigned int __fastcall Entity::isResting(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 0x40u) >> 6;
  return v1;
}


int __fastcall Entity::setPersistent(int result)
{
  *(_BYTE *)(result + 3280) = 1;
  return result;
}


signed int __fastcall Entity::canChangeDimensions(Entity *this)
{
  return 1;
}


void __fastcall Entity::onSynchedDataUpdate(Entity *this, int a2)
{
  Entity::onSynchedDataUpdate(this, a2);
}


int __fastcall Entity::getHandleWaterAABB(Entity *this, int _R1)
{
  Entity *v6; // r4@1
  int v9; // [sp+0h] [bp-48h]@0
  int v10; // [sp+4h] [bp-44h]@0
  int v11; // [sp+8h] [bp-40h]@0
  int v12; // [sp+10h] [bp-38h]@5
  signed int v13; // [sp+14h] [bp-34h]@5
  int v14; // [sp+18h] [bp-30h]@5
  char v15; // [sp+1Ch] [bp-2Ch]@5

  __asm
  {
    VLDR            S0, =-0.4
    VLDR            S6, [R1,#0x118]
  }
  v6 = this;
    VLDR            S2, [R1,#0x10C]
    VLDR            S10, =0.4
    VADD.F32        S0, S6, S0
    VLDR            S4, [R1,#0x114]
    VADD.F32        S2, S2, S10
    VLDR            S8, [R1,#0x11C]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S6, S2
    VCMPE.F32       S2, S0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S6, S0 }
    VMOV            R2, S6
    __asm { VMOVLT.F32      S2, S0 }
  HIDWORD(_R2) = *(_DWORD *)(_R1 + 272);
    VSTR            S4, [SP,#0x48+var_48]
    VSTR            S2, [SP,#0x48+var_44]
    VSTR            S8, [SP,#0x48+var_40]
  AABB::AABB(COERCE_FLOAT(&v15), *(float *)(_R1 + 264), _R2, v9, v10, v11);
  v12 = 981668463;
  v13 = 981668463;
  v14 = 981668463;
  return AABB::shrink(v6, (const Vec3 *)&v15, (int)&v12);
}


int __fastcall Entity::calcCenterPos(int result, int _R1)
{
  int v6; // r2@1

  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R1,#0x134]
  }
  v6 = *(_DWORD *)(_R1 + 80);
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R1,#0x10C]
  *(_DWORD *)result = *(_DWORD *)(_R1 + 72);
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#4]
  *(_DWORD *)(result + 8) = v6;
  return result;
}


  if ( Entity::isRegionValid(a2) == 1 )
{
    v4 = LevelChunk::getDimensionId(*v3);
    if ( v4 == (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 524))(v2) )
    {
      v5 = (BlockSource *)Entity::getRegion(v2);
      BlockSource::onChunkDiscarded(v5, *v3);
    }
  }
  return 1;
}


      if ( Entity::hasCategory(v12, 2) == 1 )
{
        Player::isHiddenFrom(v2, **(Mob ***)(v3 + 12));
        __asm
        {
          VMOV.F32        S0, #0.5
          VMUL.F32        S0, S16, S0
        }
        if ( !_ZF )
          __asm { VMOVNE.F32      S16, S0 }
      }
    }
    __asm
    {
      VMUL.F32        S0, S16, S16
      VCMPE.F32       S18, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOV.F32        S2, #-1.0 }
      _R0 = *(_DWORD *)v3;
      __asm
      {
        VLDR            S0, [R0]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        goto LABEL_26;
        VCMPE.F32       S18, S0
      if ( _NF ^ _VF )
LABEL_26:
        __asm { VSTR            S18, [R0] }
        **(_DWORD **)(v3 + 16) = v2;
    else
      _R0 = *(_DWORD *)(v3 + 8);
        VLDRGE          S0, [R0]
        VCMPEGE.F32     S0, #0.0
        VMRSGE          APSR_nzcv, FPSCR
  }
  return 1;
}


int __fastcall Entity::getInterpolatedRotation(Entity *this, float a2, float a3, float a4)
{
  float v4; // r7@1
  Entity *v5; // r4@1
  float v6; // r5@1
  float v8; // r3@1
  int result; // r0@1
  float v10; // r3@1
  float v11; // r1@1
  float v16; // [sp+0h] [bp-30h]@4

  v4 = a2;
  v5 = this;
  v6 = a3;
  _R6 = mce::Math::lerpRotate(*(mce::Math **)(LODWORD(a2) + 128), *(float *)(LODWORD(a2) + 120), a3, a4);
  result = mce::Math::lerpRotate(*(mce::Math **)(LODWORD(v4) + 132), *(float *)(LODWORD(v4) + 124), v6, v8);
  *(_DWORD *)v5 = _R6;
  *((_DWORD *)v5 + 1) = result;
  v11 = *(float *)(LODWORD(v4) + 512);
  _ZF = LODWORD(v11) == 0;
  if ( v11 != 0.0 )
    _ZF = *(_BYTE *)(LODWORD(v11) + 528) == 0;
  if ( !_ZF )
  {
    __asm
    {
      VMOV            S18, R0
      VMOV            S16, R6
    }
    result = Entity::getInterpolatedRotation((Entity *)&v16, v11, v6, v10);
      VLDR            S0, [SP,#0x30+var_30]
      VADD.F32        S0, S16, S0
      VSTR            S0, [R4]
      VLDR            S0, [SP,#0x30+var_2C]
      VADD.F32        S0, S18, S0
      VSTR            S0, [R4,#4]
  }
  return result;
}


void __fastcall Entity::buildDebugGroupInfo(int a1, const void **a2)
{
  const void **v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  EntityDefinitionDiffList::definitionListToString((EntityDefinitionDiffList *)&v6, a1 + 3340);
  sub_21E72F0(v2, (const void **)&v6);
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


BlockSource *__fastcall Entity::setPos(Entity *this, const Vec3 *_R1)
{
  BlockSource *result; // r0@1
  float v10; // [sp+0h] [bp-18h]@0
  float v11; // [sp+4h] [bp-14h]@0
  float v12; // [sp+8h] [bp-10h]@0

  _R4 = this;
  *((_DWORD *)this + 18) = *(_DWORD *)_R1;
  __asm { VMOV.F32        S0, #0.5 }
  *((_DWORD *)this + 19) = *((_DWORD *)_R1 + 1);
  *((_DWORD *)this + 20) = *((_DWORD *)_R1 + 2);
  LODWORD(_R0) = (char *)this + 264;
  __asm
  {
    VLDR            S4, [R4,#0x130]
    VLDR            S6, [R4,#0x13C]
    VLDR            S12, [R1,#4]
    VMUL.F32        S0, S4, S0
    VLDR            S8, [R4,#0x168]
    VSUB.F32        S4, S12, S6
    VLDR            S10, [R1]
    VLDR            S14, [R1,#8]
    VLDR            S2, [R4,#0x134]
    VSUB.F32        S6, S10, S0
    VADD.F32        S4, S4, S8
    VSUB.F32        S8, S14, S0
    VMOV            R1, S6
    VADD.F32        S6, S14, S0
    VMOV            R2, S4
    VMOV            R3, S8
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S4, S2
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S6, [SP,#0x18+var_10]
  }
  AABB::set(_R0, _R2, v10, v11, v12);
  result = (BlockSource *)*((_BYTE *)_R4 + 40);
  if ( *((_BYTE *)_R4 + 40) )
    result = (BlockSource *)Level::isClientSide(*((Level **)_R4 + 773));
    if ( !result )
      result = j_j_j__ZN6Entity17_updateOwnerChunkEv(_R4);
  return result;
}


unsigned int __fastcall Entity::isTame(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 19) & 8u) >> 3;
  return v1;
}


int __fastcall Entity::isLeashableType(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::checkInsideBlocks(Entity *this, float a2)
{
  Entity *v2; // r4@1
  const AABB *v3; // r5@1
  signed int result; // r0@1
  int v13; // r0@3
  int j; // r9@6
  BlockSource *v17; // r0@7
  int v18; // r0@7
  int v19; // r1@7
  void (*v20)(void); // r6@7
  signed int i; // [sp+0h] [bp-88h]@2
  int v22; // [sp+4h] [bp-84h]@3
  int v23; // [sp+8h] [bp-80h]@7
  int v24; // [sp+Ch] [bp-7Ch]@7
  int v25; // [sp+10h] [bp-78h]@7
  int v26; // [sp+14h] [bp-74h]@7
  int v27; // [sp+18h] [bp-70h]@7
  int v28; // [sp+1Ch] [bp-6Ch]@7
  char v29; // [sp+20h] [bp-68h]@1
  float v30; // [sp+3Ch] [bp-4Ch]@1
  float v31; // [sp+40h] [bp-48h]@1
  float v32; // [sp+44h] [bp-44h]@1
  float v33; // [sp+48h] [bp-40h]@1

  v2 = this;
  v3 = (Entity *)((char *)this + 264);
  v30 = a2;
  v31 = a2;
  v32 = a2;
  AABB::grow((AABB *)&v29, (Entity *)((char *)this + 264), (int)&v30);
  AABB::flooredCopy((AABB *)&v33, COERCE_FLOAT(&v29), 0.001, -1165815185);
  result = BlockSource::hasChunksAt(*((BlockSource **)v2 + 771), v3);
  if ( result == 1 )
  {
    __asm
    {
      VLDR            S0, [SP,#0x88+var_40]
      VLDR            S2, [SP,#0x88+var_34]
      VCVTR.S32.F32   S2, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S2
      VMOV            R7, S0
    }
    result = _R0 + 1;
    for ( i = result; _R7 != i; result = i )
      __asm
      {
        VLDR            S2, [SP,#0x88+var_30]
        VLDR            S0, [SP,#0x88+var_3C]
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S2
        VMOV            R5, S0
      }
      v13 = _R0 + 1;
      v22 = v13;
      while ( _R5 != v13 )
        __asm
        {
          VLDR            S2, [SP,#0x88+var_2C]
          VLDR            S0, [SP,#0x88+var_38]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R0, S2
          VMOV            R8, S0
        }
        for ( j = _R0 + 1; j != _R8; ++_R8 )
          v17 = (BlockSource *)*((_DWORD *)v2 + 771);
          v26 = _R7;
          v27 = _R5;
          v28 = _R8;
          v18 = BlockSource::getBlock(v17, (const BlockPos *)&v26);
          v19 = *((_DWORD *)v2 + 771);
          v20 = *(void (**)(void))(*(_DWORD *)v18 + 316);
          v23 = _R7;
          v24 = _R5;
          v25 = _R8;
          v20();
        ++_R5;
        v13 = v22;
      ++_R7;
  }
  return result;
}


int __fastcall Entity::wantsMoreFood(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r1@2

  v1 = this;
  if ( SynchedEntityData::getInt((Entity *)((char *)this + 176), 2) )
    v2 = 1;
  else
    v2 = 5;
  return Entity::_countFood(v1, v2) ^ 1;
}


int __fastcall Entity::getRuntimeID(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 3312);
  v3 = *(_DWORD *)(a2 + 3316);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


int __fastcall Entity::getRestrictCenter(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 3288);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 3292);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 3296);
  return result;
}


int __fastcall Entity::spawnTamingParticles(Entity *this, bool a2)
{
  int v7; // r10@1
  Random *v8; // r6@1
  signed int v9; // r8@3
  int v13; // r11@4
  unsigned int v15; // r0@4
  int result; // r0@4
  float v19; // [sp+10h] [bp-80h]@4

  __asm { VMOV.F32        S17, #0.5 }
  _R4 = this;
  v7 = 4;
  v8 = (Entity *)((char *)this + 552);
  __asm
  {
    VLDR            S16, =0.02
    VLDR            D9, =2.32830644e-10
  }
  if ( !_ZF )
    v7 = 17;
  v9 = 7;
  do
    _R0 = Random::nextGaussian(v8);
    __asm
    {
      VMOV            S0, R0
      VMUL.F32        S22, S0, S16
    }
    __asm { VMOV            S24, R0 }
      VMUL.F32        S2, S24, S16
      VSTR            S22, [SP,#0x90+var_74]
      VMUL.F32        S0, S0, S16
      VSTR            S2, [SP,#0x90+var_70]
      VSTR            S0, [SP,#0x90+var_6C]
    v13 = *((_DWORD *)_R4 + 773);
    __asm { VLDR            S22, [R4,#0x48] }
    _R5 = Random::_genRandInt32(v8);
      VLDR            S24, [R4,#0x4C]
      VLDR            S26, [R4,#0x130]
    v15 = Random::_genRandInt32(v8);
    __asm { VMOV            S0, R5 }
    _R7 = v15;
      VLDR            S28, [R4,#0x50]
      VLDR            S30, [R4,#0x134]
      VCVT.F64.U32    D10, S0
    _R0 = Random::_genRandInt32(v8);
      VMOV            S2, R7
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
      VMUL.F64        D0, D0, D9
      VMUL.F64        D2, D10, D9
      VMUL.F64        D1, D1, D9
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S4
      VLDR            S8, [R4,#0x130]
      VCVT.F32.F64    S2, D1
      VADD.F32        S0, S0, S0
      VSUB.F32        S6, S22, S26
      VMUL.F32        S4, S26, S4
      VADD.F32        S10, S24, S17
      VMUL.F32        S2, S2, S30
      VSUB.F32        S12, S28, S8
      VMUL.F32        S0, S8, S0
      VADD.F32        S4, S6, S4
      VADD.F32        S2, S10, S2
      VADD.F32        S0, S12, S0
      VSTR            S4, [SP,#0x90+var_80]
      VSTR            S2, [SP,#0x90+var_7C]
      VSTR            S0, [SP,#0x90+var_78]
    result = Level::addParticle(v13, v7, (int)&v19);
    --v9;
  while ( v9 );
  return result;
}


int __fastcall Entity::_sendLinkPacket(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  int v5; // r1@2
  int v6; // r4@2
  int v7; // r2@2
  int v8; // r3@2
  int v9; // r6@2
  int v10; // r2@2
  int v11; // r3@2
  int v12; // r6@2
  int v13; // r0@2
  int v14; // r3@2
  void **v15; // [sp+0h] [bp-48h]@2
  int v16; // [sp+4h] [bp-44h]@2
  int v17; // [sp+8h] [bp-40h]@2
  char v18; // [sp+Ch] [bp-3Ch]@2
  int v19; // [sp+10h] [bp-38h]@2
  int v20; // [sp+14h] [bp-34h]@2
  int v21; // [sp+18h] [bp-30h]@2
  int v22; // [sp+1Ch] [bp-2Ch]@2
  int v23; // [sp+20h] [bp-28h]@2
  int v24; // [sp+24h] [bp-24h]@2
  int v25; // [sp+28h] [bp-20h]@2
  int v26; // [sp+2Ch] [bp-1Ch]@2

  v2 = a1;
  v3 = a2;
  result = Level::isClientSide(*(Level **)(a1 + 3092));
  if ( !result )
  {
    v16 = 2;
    v17 = 1;
    v18 = 0;
    v15 = &off_26D9898;
    v5 = *(_DWORD *)v3;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(_DWORD *)(v3 + 8);
    v9 = *(_DWORD *)(v3 + 12);
    v6 = v3 + 16;
    v19 = v5;
    v20 = v7;
    v21 = v8;
    v22 = v9;
    v10 = *(_DWORD *)(v6 + 4);
    v11 = *(_DWORD *)(v6 + 8);
    v12 = *(_DWORD *)(v6 + 12);
    v23 = *(_DWORD *)v6;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v13 = Level::getPacketSender(*(Level **)(v2 + 3092));
    result = (*(int (__cdecl **)(int, void ***, _DWORD, int, void **, signed int, signed int, _DWORD, int, int, int, int))(*(_DWORD *)v13 + 8))(
               v13,
               &v15,
               *(_DWORD *)(*(_DWORD *)v13 + 8),
               v14,
               &off_26D9898,
               2,
               1,
               *(_DWORD *)&v18,
               v19,
               v20,
               v21,
               v22);
  }
  return result;
}


unsigned int __fastcall Entity::isSilent(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 2u) >> 1;
  return v1;
}


unsigned int __fastcall Entity::setVariant(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 2);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


void __fastcall Entity::updateDescription(Entity *this)
{
  Entity *v1; // r4@1
  __int64 v2; // r0@1
  EntityDefinitionDescriptor *v3; // r1@1
  EntityDefinitionDescriptor *v4; // r0@1
  EntityDefinitionDescriptor *v5; // r0@2
  EntityDefinitionDescriptor *v6; // r0@3
  EntityDefinitionDescriptor *v7; // [sp+4h] [bp-Ch]@1

  v1 = this;
  HIDWORD(v2) = (char *)this + 3340;
  LODWORD(v2) = &v7;
  EntityDefinitionDiffList::getDescription(v2, 1);
  v3 = v7;
  v7 = 0;
  v4 = (EntityDefinitionDescriptor *)*((_DWORD *)v1 + 12);
  *((_DWORD *)v1 + 12) = v3;
  if ( v4 )
  {
    v5 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v4);
    operator delete((void *)v5);
    if ( v7 )
    {
      v6 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v7);
      operator delete((void *)v6);
    }
  }
}


signed int __fastcall Entity::load(Entity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r9@1
  int v4; // r8@2
  int v5; // r7@2
  void *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  void *v11; // r0@10
  signed int v12; // r11@12
  int v13; // r4@13
  int *v14; // r4@14
  int v15; // t1@14
  void *v16; // r0@15
  int v17; // r4@17
  const CompoundTag *v18; // r2@18
  __int64 v19; // r0@19
  EntityDefinitionDescriptor *v20; // r1@19
  EntityDefinitionDescriptor *v21; // r0@19
  EntityDefinitionDescriptor *v22; // r0@20
  EntityDefinitionDescriptor *v23; // r0@21
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  int v28; // r10@34
  _BYTE *v29; // r1@35
  const void **v30; // r10@35
  _BYTE *v31; // t1@35
  int v32; // r0@35
  void *v33; // r0@40
  __int64 v34; // r0@48
  EntityDefinitionDescriptor *v35; // r1@48
  EntityDefinitionDescriptor *v36; // r0@48
  EntityDefinitionDescriptor *v37; // r0@49
  EntityDefinitionDescriptor *v38; // r0@50
  ListTag *v39; // r11@52
  void *v40; // r0@52
  ListTag *v41; // r7@53
  void *v42; // r0@53
  ListTag *v43; // r8@54
  void *v44; // r0@54
  char v45; // r0@55
  signed int v46; // r4@65
  void *v47; // r0@65
  void (__fastcall *v48)(Entity *, const void **); // r4@67
  const void **v49; // r0@67
  void *v50; // r0@67
  void (__fastcall *v51)(Entity *, _BOOL4); // r10@68
  _BOOL4 v52; // r1@69
  signed int v53; // r4@69
  void *v54; // r0@72
  void *v55; // r0@73
  signed int v56; // r4@74
  void *v57; // r0@74
  unsigned int v58; // r4@76
  void *v59; // r0@76
  int v66; // r0@89
  __int64 v67; // r1@89
  void *v76; // r0@89
  void *v77; // r0@90
  void *v78; // r0@91
  void *v79; // r0@92
  void *v80; // r0@93
  void *v81; // r0@94
  void *v82; // r0@95
  ContainerComponent *v83; // r6@97
  int v84; // r0@98
  int v85; // r0@101
  ExplodeComponent *v86; // r6@104
  void *v87; // r0@105
  void *v88; // r0@108
  AgeableComponent *v89; // r6@111
  void *v90; // r0@112
  void *v91; // r0@115
  int v92; // r0@117
  MountTamingComponent *v93; // r6@120
  void *v94; // r0@121
  void *v95; // r0@124
  TimerComponent *v96; // r6@127
  void *v97; // r0@128
  void *v98; // r0@131
  int v99; // r0@133
  int v100; // r0@135
  int v101; // r0@137
  int v102; // r0@139
  unsigned int *v104; // r2@142
  signed int v105; // r1@144
  unsigned int *v106; // r2@146
  signed int v107; // r1@148
  unsigned int *v108; // r2@150
  signed int v109; // r1@152
  unsigned int *v110; // r2@154
  signed int v111; // r1@156
  unsigned int *v112; // r2@158
  signed int v113; // r1@160
  unsigned int *v114; // r2@162
  signed int v115; // r1@164
  unsigned int *v116; // r2@166
  signed int v117; // r1@168
  unsigned int *v118; // r2@170
  signed int v119; // r1@172
  unsigned int *v120; // r2@174
  signed int v121; // r1@176
  unsigned int *v122; // r2@178
  signed int v123; // r1@180
  unsigned int *v124; // r2@182
  signed int v125; // r1@184
  unsigned int *v126; // r2@206
  signed int v127; // r1@208
  unsigned int *v128; // r2@214
  signed int v129; // r1@216
  unsigned int *v130; // r2@254
  signed int v131; // r1@256
  unsigned int *v132; // r2@262
  signed int v133; // r1@264
  unsigned int *v134; // r2@266
  signed int v135; // r1@268
  unsigned int *v136; // r2@270
  signed int v137; // r1@272
  unsigned int *v138; // r2@278
  signed int v139; // r1@280
  const char *v140; // r0@297
  const char *v141; // r1@297
  EntityDefinitionDiffList *v142; // [sp+10h] [bp-D8h]@16
  char v143; // [sp+17h] [bp-D1h]@141
  char v144; // [sp+18h] [bp-D0h]@139
  char v145; // [sp+19h] [bp-CFh]@137
  char v146; // [sp+1Ah] [bp-CEh]@135
  char v147; // [sp+1Bh] [bp-CDh]@119
  int v148; // [sp+20h] [bp-C8h]@95
  int v149; // [sp+28h] [bp-C0h]@94
  int v150; // [sp+30h] [bp-B8h]@93
  int v151; // [sp+38h] [bp-B0h]@92
  int v152; // [sp+40h] [bp-A8h]@91
  int v153; // [sp+48h] [bp-A0h]@90
  int v154; // [sp+50h] [bp-98h]@89
  int v155; // [sp+58h] [bp-90h]@76
  int v156; // [sp+60h] [bp-88h]@74
  int v157; // [sp+68h] [bp-80h]@69
  int v158; // [sp+70h] [bp-78h]@68
  int v159; // [sp+78h] [bp-70h]@67
  int v160; // [sp+80h] [bp-68h]@65
  int v161; // [sp+88h] [bp-60h]@54
  int v162; // [sp+90h] [bp-58h]@53
  int v163; // [sp+98h] [bp-50h]@52
  int v164; // [sp+9Ch] [bp-4Ch]@26
  int v165; // [sp+A0h] [bp-48h]@40
  int v166; // [sp+A4h] [bp-44h]@15
  int v167; // [sp+ACh] [bp-3Ch]@10
  int v168; // [sp+B4h] [bp-34h]@4
  int v169; // [sp+BCh] [bp-2Ch]@1
  EntityDefinitionDescriptor *v170; // [sp+C0h] [bp-28h]@19

  v2 = a2;
  _R5 = this;
  sub_21E94B4((void **)&v169, "UniqueID");
  if ( CompoundTag::contains((int)v2, (const void **)&v169) != 1 )
  {
    v7 = (void *)(v169 - 12);
    if ( (int *)(v169 - 12) == &dword_28898C0 )
      goto LABEL_10;
    v8 = (unsigned int *)(v169 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
LABEL_243:
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
LABEL_242:
    v9 = (*v8)--;
    goto LABEL_243;
  }
  v4 = *((_DWORD *)_R5 + 14);
  v5 = *((_DWORD *)_R5 + 15);
  v6 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v169 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
    else
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( (v4 & v5) == -1 )
    sub_21E94B4((void **)&v168, "UniqueID");
    *((_QWORD *)_R5 + 7) = CompoundTag::getInt64((int)v2, (const void **)&v168);
    v7 = (void *)(v168 - 12);
    if ( (int *)(v168 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v168 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_243;
      }
      goto LABEL_242;
LABEL_10:
  Entity::loadEntityFlags(_R5, v2);
  sub_21E94B4((void **)&v167, "definitions");
  _R6 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v167);
  v11 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v167 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( _R6 )
    v12 = ListTag::size(_R6);
    if ( v12 >= 1 )
      v13 = ListTag::get(_R6, 0);
      if ( (*(int (**)(void))(*(_DWORD *)v13 + 24))() == 8 )
        v15 = *(_DWORD *)(v13 + 4);
        v14 = (int *)(v13 + 4);
        if ( !*(_DWORD *)(v15 - 12) )
        {
          v140 = "%s: __pos (which is %zu) > this->size() (which is %zu)";
          v141 = "basic_string::substr";
LABEL_300:
          sub_21E5B04(v140, (int)v141, 1, 0);
        }
        sub_21E9040((void **)&v166, v14, 1u, 0xFFFFFFFF);
        Entity::setBaseDefinition((int)_R5, (int **)&v166, 1, 0);
        v16 = (void *)(v166 - 12);
        if ( (int *)(v166 - 12) != &dword_28898C0 )
          v136 = (unsigned int *)(v166 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v137 = __ldrex(v136);
            while ( __strex(v137 - 1, v136) );
          }
          else
            v137 = (*v136)--;
          if ( v137 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
      v142 = (Entity *)((char *)_R5 + 3340);
      if ( v12 >= 2 )
        v17 = 1;
          v28 = ListTag::get(_R6, v17);
          if ( (*(int (**)(void))(*(_DWORD *)v28 + 24))() == 8 )
            v31 = *(_BYTE **)(v28 + 4);
            v30 = (const void **)(v28 + 4);
            v29 = v31;
            v32 = *((_DWORD *)v31 - 3);
            if ( v32 )
            {
              if ( *((_DWORD *)v29 - 1) >= 0 )
              {
                sub_21E8010(v30);
                v29 = *v30;
                v32 = *((_DWORD *)*v30 - 3);
              }
              if ( *v29 == 43 )
                if ( !v32 )
                {
                  v140 = "%s: __pos (which is %zu) > this->size() (which is %zu)";
                  v141 = "basic_string::substr";
                  goto LABEL_300;
                }
                sub_21E9040((void **)&v165, (int *)v30, 1u, 0xFFFFFFFF);
                EntityDefinitionDiffList::addDefinition((int)v142, (int **)&v165);
                v33 = (void *)(v165 - 12);
                if ( (int *)(v165 - 12) != &dword_28898C0 )
                  v26 = (unsigned int *)(v165 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v27 = __ldrex(v26);
                    while ( __strex(v27 - 1, v26) );
                    goto LABEL_31;
                  }
                  goto LABEL_30;
              else
                sub_21E9040((void **)&v164, (int *)v30, 1u, 0xFFFFFFFF);
                EntityDefinitionDiffList::removeDefinition((int)v142, (int **)&v164);
                v33 = (void *)(v164 - 12);
                if ( (int *)(v164 - 12) != &dword_28898C0 )
                  v26 = (unsigned int *)(v164 - 4);
LABEL_31:
                    if ( v27 <= 0 )
                      j_j_j_j__ZdlPv_9(v33);
                    goto LABEL_47;
LABEL_30:
                  v27 = (*v26)--;
                  goto LABEL_31;
            }
LABEL_47:
          ++v17;
        while ( v17 < v12 );
      HIDWORD(v34) = (char *)_R5 + 3340;
      LODWORD(v34) = &v170;
      EntityDefinitionDiffList::getDescription(v34, 1);
      v35 = v170;
      v170 = 0;
      v36 = (EntityDefinitionDescriptor *)*((_DWORD *)_R5 + 12);
      *((_DWORD *)_R5 + 12) = v35;
      if ( v36 )
        v37 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v36);
        operator delete((void *)v37);
        if ( v170 )
          v38 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v170);
          operator delete((void *)v38);
      (*(void (__fastcall **)(Entity *, _DWORD, char *))(*(_DWORD *)_R5 + 8))(_R5, *((_BYTE *)_R5 + 4), (char *)_R5 + 8);
      EntityDefinitionDiffList::clearChangedDescription(v142);
  else if ( !CompoundTag::isEmpty(v2) )
    EntityLegacySaveConverter::convertSave(_R5, v2, v18);
    HIDWORD(v19) = (char *)_R5 + 3340;
    LODWORD(v19) = &v170;
    EntityDefinitionDiffList::getDescription(v19, 1);
    v20 = v170;
    v170 = 0;
    v21 = (EntityDefinitionDescriptor *)*((_DWORD *)_R5 + 12);
    *((_DWORD *)_R5 + 12) = v20;
    if ( v21 )
      v22 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v21);
      operator delete((void *)v22);
      if ( v170 )
        v23 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v170);
        operator delete((void *)v23);
  sub_21E94B4((void **)&v163, "Pos");
  v39 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v163);
  v40 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v163 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v162, "Motion");
  v41 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v162);
  v42 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v162 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v161, "Rotation");
  v43 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v161);
  v44 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v161 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = byte_27FDD20;
  __dmb();
  if ( !(v45 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27FDD20) )
    ListTag::ListTag((int)&unk_27FDD0C);
    _cxa_atexit(ListTag::~ListTag);
    j___cxa_guard_release((unsigned int *)&byte_27FDD20);
  if ( !v43 )
    v43 = (ListTag *)&unk_27FDD0C;
  if ( !v41 )
    v41 = (ListTag *)&unk_27FDD0C;
  if ( !v39 )
    v39 = (ListTag *)&unk_27FDD0C;
  if ( !(*((_BYTE *)_R5 + 172) & 1) )
    sub_21E94B4((void **)&v160, "CustomName");
    v46 = CompoundTag::contains((int)v2, (const void **)&v160);
    v47 = (void *)(v160 - 12);
    if ( (int *)(v160 - 12) != &dword_28898C0 )
      v126 = (unsigned int *)(v160 - 4);
          v127 = __ldrex(v126);
          _R6 = (ListTag *)__strex(v127 - 1, v126);
        while ( _R6 );
      else
        v127 = (*v126)--;
      if ( v127 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    if ( v46 == 1 )
      v48 = *(void (__fastcall **)(Entity *, const void **))(*(_DWORD *)_R5 + 200);
      sub_21E94B4((void **)&v159, "CustomName");
      v49 = CompoundTag::getString((int)v2, (const void **)&v159);
      v48(_R5, v49);
      v50 = (void *)(v159 - 12);
      if ( (int *)(v159 - 12) != &dword_28898C0 )
        v130 = (unsigned int *)(v159 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v131 = __ldrex(v130);
            _R6 = (ListTag *)__strex(v131 - 1, v130);
          while ( _R6 );
        else
          v131 = (*v130)--;
        if ( v131 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      v51 = *(void (__fastcall **)(Entity *, _BOOL4))(*(_DWORD *)_R5 + 184);
      sub_21E94B4((void **)&v158, "CustomNameVisible");
      if ( CompoundTag::contains((int)v2, (const void **)&v158) == 1 )
        sub_21E94B4((void **)&v157, "CustomNameVisible");
        v52 = CompoundTag::getBoolean((int)v2, (const void **)&v157);
        v53 = 1;
        v52 = 1;
        v53 = 0;
      v51(_R5, v52);
      if ( v53 == 1 )
        v54 = (void *)(v157 - 12);
        if ( (int *)(v157 - 12) != &dword_28898C0 )
          v138 = (unsigned int *)(v157 - 4);
              v139 = __ldrex(v138);
              _R6 = (ListTag *)__strex(v139 - 1, v138);
            while ( _R6 );
            v139 = (*v138)--;
          if ( v139 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
      v55 = (void *)(v158 - 12);
      if ( (int *)(v158 - 12) != &dword_28898C0 )
        v132 = (unsigned int *)(v158 - 4);
            v133 = __ldrex(v132);
            _R6 = (ListTag *)__strex(v133 - 1, v132);
          v133 = (*v132)--;
        if ( v133 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
    sub_21E94B4((void **)&v156, "LastDimensionId");
    v56 = CompoundTag::contains((int)v2, (const void **)&v156);
    v57 = (void *)(v156 - 12);
    if ( (int *)(v156 - 12) != &dword_28898C0 )
      v128 = (unsigned int *)(v156 - 4);
          v129 = __ldrex(v128);
          _R6 = (ListTag *)__strex(v129 - 1, v128);
        v129 = (*v128)--;
      if ( v129 <= 0 )
        j_j_j_j__ZdlPv_9(v57);
    if ( v56 == 1 )
      sub_21E94B4((void **)&v155, "LastDimensionId");
      v58 = CompoundTag::getInt((int)v2, (const void **)&v155);
      v59 = (void *)(v155 - 12);
      if ( (int *)(v155 - 12) != &dword_28898C0 )
        v134 = (unsigned int *)(v155 - 4);
            v135 = __ldrex(v134);
            _R6 = (ListTag *)__strex(v135 - 1, v134);
          v135 = (*v134)--;
        if ( v135 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      if ( v58 <= 2 )
        *((_DWORD *)_R5 + 9) = v58;
  *((_DWORD *)_R5 + 27) = ListTag::getFloat(v41, 0);
  *((_DWORD *)_R5 + 28) = ListTag::getFloat(v41, 1);
  _R0 = ListTag::getFloat(v41, 2);
  *((_DWORD *)_R5 + 29) = _R0;
  __asm
    VMOV.F32        S0, #10.0
    VLDR            S2, [R5,#0x6C]
    VABS.F32        S2, S2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    VMOV            S2, R0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *((_DWORD *)_R5 + 27) = 0;
    VLDR            S4, [R5,#0x70]
    VABS.F32        S4, S4
    VCMPE.F32       S4, S0
    *((_DWORD *)_R5 + 28) = 0;
  __asm { VMRS            APSR_nzcv, FPSCR }
    *((_DWORD *)_R5 + 29) = 0;
  *((_DWORD *)_R5 + 18) = ListTag::getFloat(v39, 0);
  _R0 = ListTag::getFloat(v39, 1);
    VMOV.F32        S0, #-5.0
    VLDR            S4, =266.0
    VCMPE.F32       S2, S4
    __asm { VMOVGT.F32      S0, S2 }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R7,#4] }
  v66 = ListTag::getFloat(v39, 2);
  *((_DWORD *)_R5 + 20) = v66;
  LODWORD(v67) = *((_DWORD *)_R5 + 18);
  *((_DWORD *)_R5 + 24) = *((_DWORD *)_R5 + 18);
  HIDWORD(v67) = *((_DWORD *)_R5 + 19);
  *((_DWORD *)_R5 + 25) = HIDWORD(v67);
  *((_DWORD *)_R5 + 26) = v66;
  *(_QWORD *)((char *)_R5 + 84) = v67;
  *((_DWORD *)_R5 + 23) = v66;
  *((_QWORD *)_R5 + 19) = v67;
  *((_DWORD *)_R5 + 40) = v66;
  _R0 = ListTag::getFloat(v43, 0);
    VMOV            S0, R0
    VLDR            D1, =360.0
    VCVT.F64.F32    D0, S0
    VMOV            R4, R6, D1
    VMOV            R0, R1, D0
  _R0 = COERCE_UNSIGNED_INT64(fmod(_R0, COERCE_DOUBLE(__PAIR__((unsigned int)_R6, _R4))));
    VMOV            D0, R0, R1
    VCVT.F32.F64    S0, D0
    VSTR            S0, [R7,#0x34]
    VSTR            S0, [R7,#0x3C]
  _R0 = ListTag::getFloat(v43, 1);
    VSTR            S0, [R7,#0x30]
    VSTR            S0, [R7,#0x38]
  sub_21E94B4((void **)&v154, "FallDistance");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v154);
    VSTR            S0, [R5,#0xE0]
  v76 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v154 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  sub_21E94B4((void **)&v153, "Fire");
  *((_DWORD *)_R5 + 107) = CompoundTag::getShort((int)v2, (const void **)&v153);
  v77 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v153 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  sub_21E94B4((void **)&v152, "OnGround");
  *((_BYTE *)_R5 + 216) = CompoundTag::getBoolean((int)v2, (const void **)&v152);
  v78 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v152 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  sub_21E94B4((void **)&v151, "Invulnerable");
  *((_BYTE *)_R5 + 426) = CompoundTag::getBoolean((int)v2, (const void **)&v151);
  v79 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v151 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  sub_21E94B4((void **)&v150, "PortalCooldown");
  *((_DWORD *)_R5 + 113) = CompoundTag::getInt((int)v2, (const void **)&v150);
  v80 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v150 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  sub_21E94B4((void **)&v149, "IsGlobal");
  *((_BYTE *)_R5 + 3098) = CompoundTag::getBoolean((int)v2, (const void **)&v149);
  v81 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v149 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  sub_21E94B4((void **)&v148, "IsAutonomous");
  *((_BYTE *)_R5 + 3099) = CompoundTag::getBoolean((int)v2, (const void **)&v148);
  v82 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v148 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R5 + 48))(_R5, (char *)_R5 + 72);
  (*(void (__fastcall **)(Entity *, const CompoundTag *))(*(_DWORD *)_R5 + 708))(_R5, v2);
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 12) + 304) )
    v83 = (ContainerComponent *)*((_DWORD *)_R5 + 782);
    if ( !v83 )
      v83 = (ContainerComponent *)operator new(0x18u);
      ContainerComponent::ContainerComponent((int)v83, (int)_R5);
      v84 = *((_DWORD *)_R5 + 782);
      *((_DWORD *)_R5 + 782) = v83;
      if ( v84 )
        (*(void (**)(void))(*(_DWORD *)v84 + 8))();
        v83 = (ContainerComponent *)*((_DWORD *)_R5 + 782);
    ContainerComponent::initFromDefinition(v83);
    ContainerComponent::readAdditionalSaveData(*((ContainerComponent **)_R5 + 782), v2);
  else
    v85 = *((_DWORD *)_R5 + 782);
    *((_DWORD *)_R5 + 782) = 0;
    if ( v85 )
      (*(void (**)(void))(*(_DWORD *)v85 + 8))();
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 12) + 320) )
    v86 = (ExplodeComponent *)*((_DWORD *)_R5 + 783);
    if ( !v86 )
      v86 = (ExplodeComponent *)operator new(0x1Cu);
      ExplodeComponent::ExplodeComponent(v86, _R5);
      v87 = (void *)*((_DWORD *)_R5 + 783);
      *((_DWORD *)_R5 + 783) = v86;
      if ( v87 )
        operator delete(v87);
        v86 = (ExplodeComponent *)*((_DWORD *)_R5 + 783);
    ExplodeComponent::initFromDefinition(v86);
    ExplodeComponent::readAdditionalSaveData(*((ExplodeComponent **)_R5 + 783), v2);
    v88 = (void *)*((_DWORD *)_R5 + 783);
    *((_DWORD *)_R5 + 783) = 0;
    if ( v88 )
      operator delete(v88);
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 12) + 276) )
    v89 = (AgeableComponent *)*((_DWORD *)_R5 + 777);
    if ( !v89 )
      v89 = (AgeableComponent *)operator new(8u);
      AgeableComponent::AgeableComponent(v89, _R5);
      v90 = (void *)*((_DWORD *)_R5 + 777);
      *((_DWORD *)_R5 + 777) = v89;
      if ( v90 )
        operator delete(v90);
        v89 = (AgeableComponent *)*((_DWORD *)_R5 + 777);
    AgeableComponent::initFromDefinition(v89);
    AgeableComponent::readAdditionalSaveData(*((AgeableComponent **)_R5 + 777), v2);
    v91 = (void *)*((_DWORD *)_R5 + 777);
    *((_DWORD *)_R5 + 777) = 0;
    if ( v91 )
      operator delete(v91);
  v92 = *(_DWORD *)(*((_DWORD *)_R5 + 12) + 368);
  if ( v92 )
    LOBYTE(v92) = 1;
  v147 = v92;
  _tryLoadComponent<Entity,bool,ProjectileComponent>(_R5, &v147, (int *)_R5 + 787, v2);
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 12) + 344) )
    v93 = (MountTamingComponent *)*((_DWORD *)_R5 + 789);
    if ( !v93 )
      v93 = (MountTamingComponent *)operator new(0x14u);
      MountTamingComponent::MountTamingComponent(v93, _R5);
      v94 = (void *)*((_DWORD *)_R5 + 789);
      *((_DWORD *)_R5 + 789) = v93;
      if ( v94 )
        operator delete(v94);
        v93 = (MountTamingComponent *)*((_DWORD *)_R5 + 789);
    MountTamingComponent::initFromDefinition(v93);
    MountTamingComponent::readAdditionalSaveData(*((MountTamingComponent **)_R5 + 789), v2);
    v95 = (void *)*((_DWORD *)_R5 + 789);
    *((_DWORD *)_R5 + 789) = 0;
    if ( v95 )
      operator delete(v95);
  if ( *(_DWORD *)(*((_DWORD *)_R5 + 12) + 428) )
    v96 = (TimerComponent *)*((_DWORD *)_R5 + 790);
    if ( !v96 )
      v96 = (TimerComponent *)operator new(0x18u);
      TimerComponent::TimerComponent(v96, _R5);
      v97 = (void *)*((_DWORD *)_R5 + 790);
      *((_DWORD *)_R5 + 790) = v96;
      if ( v97 )
        operator delete(v97);
        v96 = (TimerComponent *)*((_DWORD *)_R5 + 790);
    TimerComponent::initFromDefinition(v96);
    TimerComponent::readAdditionalSaveData(*((TimerComponent **)_R5 + 790), v2);
    v98 = (void *)*((_DWORD *)_R5 + 790);
    *((_DWORD *)_R5 + 790) = 0;
    if ( v98 )
      operator delete(v98);
  v99 = *(_DWORD *)(*((_DWORD *)_R5 + 12) + 484);
  if ( v99 )
    LOBYTE(v99) = 1;
  v146 = v99;
  _tryLoadComponent<Entity,bool,NpcComponent>((int)_R5, &v146, (NpcComponent **)_R5 + 807, v2);
  v100 = *(_DWORD *)(*((_DWORD *)_R5 + 12) + 432);
  if ( v100 )
    LOBYTE(v100) = 1;
  v145 = v100;
  _tryLoadComponent<Entity,bool,TradeableComponent>((int)_R5, &v145, (TradeableComponent **)_R5 + 811, v2);
  v101 = *(_DWORD *)(*((_DWORD *)_R5 + 12) + 300);
  if ( v101 )
    LOBYTE(v101) = 1;
  v144 = v101;
  _tryLoadComponent<Entity,bool,CommandBlockComponent>((int)_R5, &v144, (CommandBlockComponent **)_R5 + 804, v2);
  v102 = *(_DWORD *)(*((_DWORD *)_R5 + 12) + 400);
  if ( v102 )
    LOBYTE(v102) = 1;
  v143 = v102;
  _tryLoadComponent<Entity,bool,SpawnEntityComponent>((int)_R5, &v143, (SpawnEntityComponent **)_R5 + 814, v2);
  return 1;
}


int __fastcall Entity::acceptClientsideEntityData(Entity *this, Player *a2, const SetEntityDataPacket *a3)
{
  return 0;
}


signed int __fastcall Entity::canSynchronizeNewEntity(Entity *this)
{
  return 1;
}


Entity *__fastcall Entity::_getBlockOnPos(Entity *this, float a2)
{
  int v8; // r0@1
  int v9; // r11@1
  float v12; // r1@1
  int v13; // r7@1
  float v14; // r1@1
  float v15; // r1@1
  int v18; // r4@3
  float v19; // r1@3
  int v20; // r10@3
  const BlockPos *v21; // r1@4
  float v22; // r1@7
  float v23; // r1@7
  float v26; // r1@9
  int v27; // r9@9
  const BlockPos *v28; // r1@10
  float v29; // r1@13
  float v30; // r1@13
  float v33; // r1@15
  int v34; // r6@15
  const BlockPos *v35; // r1@16
  float v36; // r1@19
  float v37; // r1@19
  float v40; // r1@21
  int v41; // r10@21
  const BlockPos *v42; // r1@22
  float v44; // r1@25
  int v45; // r4@25
  int v48; // r7@26
  float v49; // r1@26
  int v50; // r0@26
  float v51; // r1@26
  int v52; // r11@29
  float v53; // r1@29
  int v54; // r9@29
  const BlockPos *v55; // r1@30
  Entity *result; // r0@37
  int v57; // [sp+0h] [bp-88h]@25
  Entity *v58; // [sp+4h] [bp-84h]@1
  mce::Math *v59; // [sp+8h] [bp-80h]@1
  mce::Math *v60; // [sp+Ch] [bp-7Ch]@1
  mce::Math *v61; // [sp+10h] [bp-78h]@2
  mce::Math *v62; // [sp+10h] [bp-78h]@8
  mce::Math *v63; // [sp+10h] [bp-78h]@14
  mce::Math *v64; // [sp+10h] [bp-78h]@20
  mce::Math *v65; // [sp+10h] [bp-78h]@25
  mce::Math *v66; // [sp+14h] [bp-74h]@2
  mce::Math *v67; // [sp+14h] [bp-74h]@8
  mce::Math *v68; // [sp+14h] [bp-74h]@14
  mce::Math *v69; // [sp+14h] [bp-74h]@20
  mce::Math *v70; // [sp+14h] [bp-74h]@25
  int v71; // [sp+18h] [bp-70h]@1
  int v72; // [sp+18h] [bp-70h]@7
  int v73; // [sp+18h] [bp-70h]@13
  int v74; // [sp+18h] [bp-70h]@19
  int v75; // [sp+18h] [bp-70h]@26
  int v76; // [sp+1Ch] [bp-6Ch]@30
  int v77; // [sp+20h] [bp-68h]@30
  int v78; // [sp+24h] [bp-64h]@30
  int v79; // [sp+28h] [bp-60h]@4
  int v80; // [sp+2Ch] [bp-5Ch]@4
  int v81; // [sp+30h] [bp-58h]@4
  float v82; // [sp+34h] [bp-54h]@4

  _R8 = a2;
  __asm
  {
    VLDR            S0, =-0.2
    VLDR            S18, [R8,#0x10C]
  }
  v58 = this;
    VADD.F32        S0, S18, S0
    VLDR            S16, [R8,#0x110]
    VLDR            S20, [R8,#0x114]
    VLDR            S22, [R8,#0x108]
    VLDR            S24, [R8,#0x11C]
    VMOV            R0, S0
  v8 = mce::Math::floor(_R0, a2);
  __asm { VMOV.F32        S0, #1.0 }
  v9 = v8;
    VMOV            R0, S22
    VADD.F32        S2, S20, S0
    VADD.F32        S20, S24, S0
    VMOV            R4, S2
  v60 = _R0;
  v59 = _R4;
  v13 = mce::Math::floor(_R0, v12);
  v71 = mce::Math::floor(_R4, v14) + 1;
  if ( v13 != v71 )
    __asm { VMOV            R0, S16 }
    v66 = _R0;
    __asm { VMOV            R0, S20 }
    v61 = _R0;
    while ( 1 )
    {
      v18 = mce::Math::floor(v66, v15);
      v20 = mce::Math::floor(v61, v19) + 1;
      if ( v18 != v20 )
        break;
LABEL_6:
      if ( ++v13 == v71 )
        goto LABEL_7;
    }
      v21 = *(const BlockPos **)(LODWORD(_R8) + 3084);
      v79 = v13;
      v80 = v9;
      v81 = v18;
      BlockSource::getBlockID((BlockSource *)&v82, v21, (int)&v79);
      LODWORD(v15) = LOBYTE(v82);
      if ( LOBYTE(v82) != BlockID::AIR )
        goto LABEL_40;
      if ( v20 == ++v18 )
        goto LABEL_6;
LABEL_7:
  v13 = mce::Math::floor(v60, v15);
  v72 = mce::Math::floor(v59, v22) + 1;
  if ( v13 != v72 )
    v67 = _R0;
    v62 = _R0;
      v18 = mce::Math::floor(v67, v23);
      v27 = mce::Math::floor(v62, v26) + 1;
      if ( v18 != v27 )
LABEL_12:
      if ( ++v13 == v72 )
        goto LABEL_13;
      v28 = *(const BlockPos **)(LODWORD(_R8) + 3084);
      v80 = v9 - 1;
      BlockSource::getBlockID((BlockSource *)&v82, v28, (int)&v79);
      LODWORD(v23) = LOBYTE(v82);
      if ( v27 == ++v18 )
        goto LABEL_12;
    --v9;
    goto LABEL_40;
LABEL_13:
  v13 = mce::Math::floor(v60, v23);
  v73 = mce::Math::floor(v59, v29) + 1;
  if ( v13 != v73 )
    v68 = _R0;
    v63 = _R0;
      v18 = mce::Math::floor(v68, v30);
      v34 = mce::Math::floor(v63, v33) + 1;
      if ( v18 != v34 )
LABEL_18:
      if ( ++v13 == v73 )
        goto LABEL_19;
      v35 = *(const BlockPos **)(LODWORD(_R8) + 3084);
      v80 = v9 - 2;
      BlockSource::getBlockID((BlockSource *)&v82, v35, (int)&v79);
      LODWORD(v30) = LOBYTE(v82);
      if ( v34 == ++v18 )
        goto LABEL_18;
    v9 -= 2;
LABEL_19:
  v13 = mce::Math::floor(v60, v30);
  v74 = mce::Math::floor(v59, v36) + 1;
  if ( v13 != v74 )
    v9 -= 3;
    v69 = _R0;
    v64 = _R0;
      v18 = mce::Math::floor(v69, v37);
      v41 = mce::Math::floor(v64, v40) + 1;
      if ( v18 != v41 )
LABEL_24:
      if ( ++v13 == v74 )
        goto LABEL_25;
      v42 = *(const BlockPos **)(LODWORD(_R8) + 3084);
      BlockSource::getBlockID((BlockSource *)&v82, v42, (int)&v79);
      LODWORD(v37) = LOBYTE(v82);
      if ( v41 == ++v18 )
        goto LABEL_24;
LABEL_40:
    result = v58;
    *(_DWORD *)v58 = v13;
    *((_DWORD *)v58 + 1) = v9;
    *((_DWORD *)v58 + 2) = v18;
    return result;
LABEL_25:
    VLDR            S0, =-1.2
  v45 = mce::Math::floor(_R0, v37);
  v57 = v45 - 3;
  __asm { VMOV            R0, S16 }
  v70 = _R0;
  __asm { VMOV            R0, S20 }
  v65 = _R0;
  while ( 2 )
    v48 = mce::Math::floor(v60, v44);
    v50 = mce::Math::floor(v59, v49) + 1;
    v75 = v50;
    while ( v48 != v50 )
      v52 = mce::Math::floor(v70, v51);
      v54 = mce::Math::floor(v65, v53) + 1;
      if ( v52 != v54 )
      {
        while ( 1 )
        {
          v55 = *(const BlockPos **)(LODWORD(_R8) + 3084);
          v76 = v48;
          v77 = v45;
          v78 = v52;
          BlockSource::getBlockID((BlockSource *)&v82, v55, (int)&v76);
          if ( *(_BYTE *)(Block::mFence + 4) == LOBYTE(v82) )
            break;
          if ( BlockID::hasProperty(&v82, LOBYTE(v82), 16, 0) )
          LODWORD(v51) = LOBYTE(v82);
          if ( *(_BYTE *)(Block::mCobblestoneWall + 4) == LOBYTE(v82) )
          if ( v54 == ++v52 )
            goto LABEL_27;
        }
        result = v58;
        *(_DWORD *)v58 = v48;
        *((_DWORD *)v58 + 1) = v45;
        *((_DWORD *)v58 + 2) = v52;
        return result;
      }
LABEL_27:
      ++v48;
      v50 = v75;
    v44 = *(float *)&v57;
    _ZF = v45-- == v57;
    if ( !_ZF )
      continue;
    return (Entity *)BlockPos::BlockPos((int)v58, LODWORD(_R8) + 72);
}


int __fastcall Entity::setAutonomous(int result, bool a2)
{
  *(_BYTE *)(result + 3099) = a2;
  return result;
}


int __fastcall Entity::isDebugging(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::getFirstAvailableSeatPos(Entity *this, Entity *a2, Vec3 *a3)
{
  RideableComponent *v3; // r0@1
  signed int result; // r0@2

  v3 = (RideableComponent *)*((_DWORD *)this + 791);
  if ( v3 )
    result = RideableComponent::getFirstAvailableSeatPosition(v3, a2, a3);
  else
    result = 0;
  return result;
}


void __fastcall Entity::getCenter(Entity *this, float a2, int _R2)
{
  char v8; // [sp+4h] [bp-34h]@1

  _R4 = a2;
  __asm
  {
    VMOV            S20, R2
    VLDR            S0, [R4,#0x50]
    VLDR            S6, [R4,#0x68]
    VLDR            S2, [R4,#0x48]
    VLDR            S4, [R4,#0x60]
    VSUB.F32        S0, S0, S6
    VLDR            S16, [R4,#0x4C]
    VSUB.F32        S2, S2, S4
    VLDR            S18, [R4,#0x64]
    VMUL.F32        S0, S0, S20
    VMUL.F32        S2, S2, S20
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S4
    VSTR            S2, [R5]
    VSTR            S0, [R5,#8]
  }
  AABB::getBounds((AABB *)&v8, LODWORD(a2) + 264);
    VSUB.F32        S0, S16, S18
    VLDR            S2, =0.66
    VLDR            S4, [SP,#0x38+var_30]
    VMUL.F32        S2, S4, S2
    VLDR            S4, [R4,#0x13C]
    VADD.F32        S0, S0, S18
    VADD.F32        S0, S2, S0
    VSTR            S0, [R5,#4]
}


char *__fastcall Entity::testForCollidableMobs(Entity *a1, BlockSource *a2, const Vec3 *a3, int a4)
{
  const AABB *v4; // r5@1
  BlockSource *v6; // r7@1
  int v7; // r4@1
  char *result; // r0@1
  int v9; // r6@1
  int i; // r7@1
  int v16; // [sp+4h] [bp-44h]@1
  signed int v17; // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  char v19; // [sp+10h] [bp-38h]@1

  v4 = a3;
  _R9 = a1;
  v6 = a2;
  v16 = 1048576000;
  v17 = 1048576000;
  v18 = 1048576000;
  v7 = a4;
  AABB::grow((AABB *)&v19, a3, (int)&v16);
  result = BlockSource::fetchEntities(v6, _R9, (const AABB *)&v19);
  v9 = *(_QWORD *)result >> 32;
  for ( i = *(_QWORD *)result; v9 != i; i += 4 )
  {
    result = *(char **)i;
    if ( *(_BYTE *)(*(_DWORD *)i + 3401) )
    {
      result = (char *)AABB::intersects((AABB *)(result + 264), v4);
      if ( result == (char *)1 )
      {
        result = (char *)(*(int (**)(void))(**(_DWORD **)i + 488))();
        _R1 = *(_DWORD *)i;
        if ( result != (char *)66 )
          goto LABEL_11;
        __asm
        {
          VLDR            S0, [R9,#0x10C]
          VLDR            S2, [R1,#0x118]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_11:
          result = std::vector<AABB,std::allocator<AABB>>::push_back(v7, _R1 + 264);
      }
    }
  }
  return result;
}


int __fastcall Entity::isFireImmune(Entity *this)
{
  Entity *v1; // r5@1
  unsigned __int64 *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  int result; // r0@4

  v1 = this;
  v2 = (unsigned __int64 *)Level::getGameRules(*((Level **)this + 773));
  v3 = SynchedEntityData::_find((Entity *)((char *)v1 + 176), 0);
  v4 = v3 == 0;
  if ( v3 )
    v4 = (unsigned int)*(_BYTE *)(v3 + 21) >> 7 == 0;
  if ( v4 )
  {
    if ( GameRules::hasRule(v2, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1 )
      result = GameRules::getBool(v2, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) ^ 1;
    else
      result = 0;
  }
  else
    result = 1;
  return result;
}


int __fastcall Entity::getRadius(Entity *this)
{
  int result; // r0@3

  __asm
  {
    VLDR            S0, [R0,#0x130]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R0,#0x134]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
    VMUL.F32        S0, S2, S4
    VMOV            R0, S0
  return result;
}


unsigned int __fastcall Entity::canFly(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 0x20u) >> 5;
  return v1;
}


int __fastcall Entity::moveTo(int a1, int a2)
{
  int v8; // r1@1
  int (__fastcall *v9)(int, int *); // r3@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+Ch] [bp-14h]@1

  _R5 = a1;
  _R4 = a2;
  (*(void (**)(void))(*(_DWORD *)a1 + 72))();
  __asm
  {
    VLDR            S0, [R5,#0x13C]
    VLDR            S2, [R4,#4]
    VADD.F32        S0, S2, S0
  }
  v8 = *(_DWORD *)(_R4 + 8);
  v9 = *(int (__fastcall **)(int, int *))(*(_DWORD *)_R5 + 48);
  v11 = *(_DWORD *)_R4;
  __asm { VSTR            S0, [SP,#0x20+var_18] }
  v12 = v8;
  return v9(_R5, &v11);
}


int __fastcall Entity::_usePortal(int result, int a2, int a3, int a4)
{
  bool v4; // zf@1
  int v5; // r4@1
  int v6; // r1@5
  char v7; // [sp+4h] [bp-Ch]@5
  PortalBlock *v8; // [sp+5h] [bp-Bh]@5

  v4 = a2 == 1;
  v5 = result;
  if ( a2 != 1 )
    v4 = a3 == 1;
  if ( v4 )
  {
    *(_DWORD *)(result + 452) = a4;
    BlockSource::getBlockAndData((BlockSource *)&v7, *(const BlockPos **)(result + 3084), result + 456);
    *(_DWORD *)(v5 + 468) = PortalBlock::getAxis((PortalBlock *)(unsigned __int8)v8, v6);
    *(_DWORD *)(v5 + 456) = BlockPos::MAX;
    *(_DWORD *)(v5 + 460) = unk_2816260;
    result = dword_2816264;
    *(_DWORD *)(v5 + 464) = dword_2816264;
  }
  return result;
}


signed int __fastcall Entity::canSee(Entity *this, const Entity *a2)
{
  const Vec3 *v4; // r4@1
  signed int v18; // r5@1
  float v20; // [sp+14h] [bp-9Ch]@1
  float v21; // [sp+20h] [bp-90h]@1
  int v22; // [sp+2Ch] [bp-84h]@1

  _R6 = this;
  _R5 = a2;
  v4 = (const Vec3 *)*((_DWORD *)this + 771);
  __asm
  {
    VLDR            S16, [R6,#0x16C]
    VLDR            S18, [R6,#0x170]
    VLDR            S20, [R6,#0x174]
  }
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 644))();
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S22, [R1]
    VMUL.F32        S0, S22, S0
    VMOV            R7, S0
  _R0 = cosf(_R7);
  __asm { VMOV            S24, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R7) ^ 0x80000000));
    VMOV            S0, R0
    VLDR            S8, [R6,#0x68]
    VMUL.F32        S2, S24, S16
    VMUL.F32        S4, S0, S20
    VMUL.F32        S6, S24, S20
    VMUL.F32        S0, S0, S16
    VADD.F32        S2, S4, S2
    VLDR            S4, [R6,#0x60]
    VSUB.F32        S0, S6, S0
    VLDR            S6, [R6,#0x64]
    VADD.F32        S2, S2, S4
    VADD.F32        S4, S6, S18
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0xB0+var_90]
    VSTR            S4, [SP,#0xB0+var_8C]
    VSTR            S0, [SP,#0xB0+var_88]
    VLDR            S16, [R5,#0x16C]
    VLDR            S18, [R5,#0x170]
    VLDR            S20, [R5,#0x174]
  _R0 = (*(int (__fastcall **)(const Entity *))(*(_DWORD *)_R5 + 644))(_R5);
    VMOV            R6, S0
  _R0 = cosf(_R6);
  __asm { VMOV            S22, R0 }
  _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
    VLDR            S8, [R5,#0x68]
    VMUL.F32        S2, S22, S16
    VMUL.F32        S6, S22, S20
    VLDR            S4, [R5,#0x60]
    VLDR            S6, [R5,#0x64]
  v18 = 0;
    VSTR            S2, [SP,#0xB0+var_9C]
    VSTR            S4, [SP,#0xB0+var_98]
    VSTR            S0, [SP,#0xB0+var_94]
  BlockSource::clip((BlockSource *)&v22, v4, (const Vec3 *)&v21, (int)&v20, 0, 1, 200, 0);
  if ( (v22 & 0xFFFFFFFE) == 2 )
    v18 = 1;
  return v18;
}


char *__fastcall Entity::getEntityData(Entity *this)
{
  return (char *)this + 176;
}


int __fastcall Entity::Entity(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int *v5; // r8@1
  int v6; // r7@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r7@3
  int v10; // r12@4
  int v11; // r2@4
  int v12; // r3@4
  int v13; // r12@4
  int v14; // r2@4
  int v15; // r3@4
  int v16; // r12@4
  int v17; // r2@4
  int v18; // r3@4
  int v19; // r12@4
  int v20; // r2@4
  int v21; // r3@4
  int v22; // r3@4
  __int64 v23; // r1@4
  __int64 v24; // r2@4
  int v25; // r7@4
  int v26; // r12@4
  int v27; // r1@4
  int v28; // r3@4
  int v29; // r6@4
  int v30; // r12@4
  int v31; // r3@4
  int v32; // r6@4
  int v33; // r3@4
  int v34; // r2@4
  unsigned int v35; // r0@4
  signed int v36; // r1@4
  int v37; // r0@5
  int v38; // r5@5
  int v39; // r6@5
  void *v40; // r0@6
  unsigned int *v42; // r2@9
  signed int v43; // r1@11
  int v44; // [sp+8h] [bp-48h]@6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26F1074;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v6 = a1 + 24;
  *(_DWORD *)(a1 + 28) = 0;
  v7 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 24)));
  *(_DWORD *)(v6 - 12) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    v9 = (void *)(v3 + 32);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 8) = v9;
  *(_DWORD *)(v3 + 36) = 3;
  v10 = v3 + 72;
  *(_BYTE *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = v4;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = -1;
  *(_DWORD *)(v3 + 60) = -1;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  v11 = *(&Vec3::ZERO + 1);
  v12 = dword_2822498;
  *(_DWORD *)v10 = Vec3::ZERO;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  v13 = v3 + 84;
  v14 = *(&Vec3::ZERO + 1);
  v15 = dword_2822498;
  *(_DWORD *)v13 = Vec3::ZERO;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  v16 = v3 + 96;
  v17 = *(&Vec3::ZERO + 1);
  v18 = dword_2822498;
  *(_DWORD *)v16 = Vec3::ZERO;
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  v19 = v3 + 108;
  v20 = *(&Vec3::ZERO + 1);
  v21 = dword_2822498;
  *(_DWORD *)v19 = Vec3::ZERO;
  *(_DWORD *)(v19 + 4) = v20;
  *(_DWORD *)(v19 + 8) = v21;
  v22 = v3 + 136;
  *(_QWORD *)(v3 + 120) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)(v3 + 128) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)v22 = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  v23 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v3 + 160) = dword_2822498;
  *(_QWORD *)(v3 + 152) = v23;
  HIDWORD(v23) = v3 + 164;
  *(_QWORD *)HIDWORD(v23) = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(HIDWORD(v23) + 8) = 0;
  SynchedEntityData::SynchedEntityData(v3 + 176);
  *(_DWORD *)(v3 + 192) = 0;
  v24 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v3 + 204) = dword_2822498;
  *(_QWORD *)(v3 + 196) = v24;
  *(_DWORD *)(v3 + 208) = 1065353216;
  *(_BYTE *)(v3 + 220) = 0;
  *(_DWORD *)(v3 + 212) = 0;
  *(_DWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 221) = BlockID::AIR;
  *(_DWORD *)(v3 + 224) = 0;
  *(_WORD *)(v3 + 228) = 0;
  *(_DWORD *)(v3 + 232) = 0;
  *(_DWORD *)(v3 + 236) = 0;
  *(_DWORD *)(v3 + 240) = 0;
  *(_DWORD *)(v3 + 244) = 0;
  *(_DWORD *)(v3 + 248) = 0;
  *(_DWORD *)(v3 + 252) = 1048576000;
  *(_DWORD *)(v3 + 256) = 1065353216;
  AABB::AABB((AABB *)(v3 + 264));
  v25 = 0;
  *(_DWORD *)(v3 + 292) = 0;
  *(_DWORD *)(v3 + 296) = 0;
  *(_DWORD *)(v3 + 300) = 0;
  *(_DWORD *)(v3 + 304) = 1058642330;
  *(_DWORD *)(v3 + 308) = 1072064102;
  _aeabi_memclr8(v3 + 312, 36);
  v26 = v3 + 364;
  *(_DWORD *)(v3 + 348) = 1;
  *(_DWORD *)(v3 + 352) = 0;
  v27 = *(&Vec2::ZERO + 1);
  *(_DWORD *)(v3 + 356) = Vec2::ZERO;
  *(_DWORD *)(v3 + 360) = v27;
  v28 = *(&Vec3::ZERO + 1);
  v29 = dword_2822498;
  *(_DWORD *)v26 = Vec3::ZERO;
  *(_DWORD *)(v26 + 4) = v28;
  *(_DWORD *)(v26 + 8) = v29;
  v30 = v3 + 376;
  v31 = *(&Vec3::ZERO + 1);
  v32 = dword_2822498;
  *(_DWORD *)v30 = Vec3::ZERO;
  *(_DWORD *)(v30 + 4) = v31;
  *(_DWORD *)(v30 + 8) = v32;
  v33 = *(&Vec3::ZERO + 1);
  v34 = dword_2822498;
  *(_DWORD *)(v3 + 388) = Vec3::ZERO;
  *(_DWORD *)(v3 + 392) = v33;
  *(_DWORD *)(v3 + 396) = v34;
  *(_DWORD *)(v3 + 400) = 0;
  *(_DWORD *)(v3 + 404) = -1102263091;
  *(_DWORD *)(v3 + 408) = 1041865114;
  *(_BYTE *)(v3 + 412) = 1;
  *(_DWORD *)(v3 + 416) = 0;
  *(_DWORD *)(v3 + 420) = 0;
  *(_BYTE *)(v3 + 424) = 1;
  *(_DWORD *)(v3 + 437) = 0;
  *(_DWORD *)(v3 + 433) = 0;
  *(_DWORD *)(v3 + 429) = 0;
  *(_DWORD *)(v3 + 425) = 0;
  *(_DWORD *)(v3 + 444) = -1;
  *(_BYTE *)(v3 + 448) = 0;
  *(_BYTE *)(v3 + 449) = 0;
  *(_DWORD *)(v3 + 452) = 0;
  *(_DWORD *)(v3 + 456) = BlockPos::MAX;
  *(_DWORD *)(v3 + 460) = unk_2816260;
  *(_DWORD *)(v3 + 464) = dword_2816264;
  _aeabi_memclr4(v3 + 468, 48);
  *(_DWORD *)(v3 + 520) = -1;
  *(_DWORD *)(v3 + 524) = -1;
  *(_WORD *)(v3 + 528) = 0;
  *(_BYTE *)(v3 + 540) = 0;
  *(_DWORD *)(v3 + 532) = 0;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 544) = 1065353216;
  *(_DWORD *)(v3 + 548) = 0;
  v35 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v3 + 552) = v35;
  *(_DWORD *)(v3 + 3052) = 625;
  v36 = 1;
  *(_BYTE *)(v3 + 3056) = 0;
  *(_DWORD *)(v3 + 3060) = 0;
  *(_DWORD *)(v3 + 556) = v35;
  do
    v37 = v35 ^ (v35 >> 30);
    v38 = v3 + 4 * v25;
    v39 = v25++ + 1812433253 * v37;
    v35 = v36++ + 1812433253 * v37;
    *(_DWORD *)(v38 + 560) = v39 + 1;
  while ( v25 != 397 );
  *(_DWORD *)(v3 + 3052) = 624;
  *(_DWORD *)(v3 + 3064) = 398;
  *(_DWORD *)(v3 + 3072) = -1;
  *(_DWORD *)(v3 + 3076) = -1;
  *(_WORD *)(v3 + 3080) = 0;
  _aeabi_memclr4(v3 + 3084, 188);
  *(_DWORD *)(v3 + 3276) = -1;
  *(_DWORD *)(v3 + 3272) = -1;
  *(_BYTE *)(v3 + 3280) = 0;
  *(_BYTE *)(v3 + 3281) = 0;
  *(_DWORD *)(v3 + 3284) = -1082130432;
  *(_DWORD *)(v3 + 3288) = BlockPos::ZERO;
  *(_DWORD *)(v3 + 3292) = unk_2816278;
  *(_DWORD *)(v3 + 3296) = dword_281627C;
  *(_DWORD *)(v3 + 3304) = -1;
  *(_DWORD *)(v3 + 3308) = -1;
  *(_DWORD *)(v3 + 3312) = 0;
  *(_DWORD *)(v3 + 3316) = 0;
  *(_DWORD *)(v3 + 3320) = 1065353216;
  *(_DWORD *)(v3 + 3324) = 0;
  *(_DWORD *)(v3 + 3328) = 0;
  *(_DWORD *)(v3 + 3332) = 1058642330;
  *(_BYTE *)(v3 + 3336) = 0;
  EntityDefinitionDiffList::EntityDefinitionDiffList(v3 + 3340, *(_DWORD *)(v3 + 44));
  *(_BYTE *)(v3 + 3364) = 0;
  *(_DWORD *)(v3 + 3368) = 0;
  *(_DWORD *)(v3 + 3372) = &unk_28898CC;
  *(_BYTE *)(v3 + 3376) = 0;
  *(_DWORD *)(v3 + 3380) = 0;
  *(_DWORD *)(v3 + 3384) = 0;
  *(_DWORD *)(v3 + 3388) = 0;
  *(_BYTE *)(v3 + 3400) = 0;
  *(_BYTE *)(v3 + 3401) = 0;
  *(_BYTE *)(v3 + 3402) = 0;
  *(_DWORD *)(v3 + 3404) = 0;
  sub_16DD660((SynchedEntityData *)(v3 + 176));
  EntityDefinitionIdentifier::getCanonicalName((EntityDefinitionIdentifier *)&v44, v5);
  Entity::setBaseDefinition(v3, (int **)&v44, 1, 1);
  v40 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  return v3;
}


unsigned int __fastcall Entity::isWASDControlled(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 21) & 4u) >> 2;
  return v1;
}


unsigned int __fastcall Entity::isClimbing(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 4u) >> 2;
  return v1;
}


signed int __fastcall Entity::intersects(Entity *this, const Vec3 *a2, const Vec3 *_R2)
{
  __int64 v3; // r2@1
  Entity *v4; // r6@1
  int v10; // [sp+0h] [bp-10h]@0
  int v11; // [sp+4h] [bp-Ch]@0
  int v12; // [sp+8h] [bp-8h]@0
  int v13; // [sp+10h] [bp+0h]@1

  HIDWORD(v3) = *((_DWORD *)a2 + 2);
  v4 = this;
  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R2,#4]
    VLDR            S4, [R2,#8]
  }
  LODWORD(v3) = *(_QWORD *)a2 >> 32;
    VSTR            S0, [SP,#0x2C+var_2C]
    VSTR            S2, [SP,#0x2C+var_28]
    VSTR            S4, [SP,#0x2C+var_24]
  AABB::AABB(COERCE_FLOAT(&v13), COERCE_FLOAT(*(_QWORD *)a2), v3, v10, v11, v12);
  return AABB::intersects((Entity *)((char *)v4 + 264), (const AABB *)&v13);
}


void __fastcall Entity::filterFormattedNameTag(Entity *this, const UIProfanityContext *a2)
{
  Entity::filterFormattedNameTag(this, a2);
}


unsigned int __fastcall Entity::setStrength(Entity *this, int a2)
{
  Entity *v2; // r4@1
  SynchedEntityData *v3; // r6@1
  int v4; // r5@1
  int v5; // r7@1
  unsigned int result; // r0@1
  unsigned int v7; // r1@1
  unsigned int v8; // r1@5
  unsigned int v9; // r0@5

  v2 = this;
  v3 = (Entity *)((char *)this + 176);
  v4 = a2;
  v5 = SynchedEntityData::getInt((Entity *)((char *)this + 176), 76);
  result = SynchedEntityData::_get(v3, 75);
  v7 = *(_DWORD *)(result + 4);
  if ( v5 < v4 )
    v4 = v5;
  if ( (unsigned __int8)v7 == 2 && *(_DWORD *)(result + 12) != v4 )
  {
    *(_DWORD *)(result + 12) = v4;
    *(_BYTE *)(result + 8) = 1;
    v8 = v7 >> 16;
    v9 = *((_WORD *)v2 + 94);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *((_WORD *)v2 + 94) = v9;
    result = *((_WORD *)v2 + 95);
    if ( result > v8 )
      LOWORD(v8) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v8;
  }
  return result;
}


unsigned int __fastcall Entity::isInvisible(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 16) & 0x20u) >> 5;
  return v1;
}


void __fastcall Entity::setEquipFromPacket(Entity *this, const UpdateEquipPacket *a2)
{
  Entity::setEquipFromPacket(this, a2);
}


void __fastcall Entity::getAttachPos(AABB *this, int a2, int a3, int _R3)
{
  Entity::getAttachPos(this, a2, a3, _R3);
}


int __fastcall Entity::isTrading(Entity *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  __int64 v3; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 773) )
  {
    v3 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 68);
    result = Level::getPlayer(*((_DWORD *)v1 + 773), SHIDWORD(v3), v3, HIDWORD(v3)) != 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall Entity::onLightningHit(Entity *this)
{
  Entity *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Entity::burn(this, 5, 1);
  result = *((_DWORD *)v1 + 107);
  if ( !result )
    result = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 504))(v1, 8);
  return result;
}


_BOOL4 __fastcall Entity::hasInventory(Entity *this)
{
  return *((_DWORD *)this + 782) != 0;
}


signed int __fastcall Entity::isWithinRestriction(Entity *this, const BlockPos *a2)
{
  signed int result; // r0@2
  __int64 v8; // kr00_8@3
  int v9; // r12@3

  __asm { VMOV.F32        S2, #-1.0 }
  _R2 = (char *)this + 3284;
  __asm
  {
    VLDR            S0, [R2]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    result = 1;
  else
    v8 = *(_QWORD *)a2;
    __asm { VMUL.F32        S0, S0, S0 }
    v9 = *((_DWORD *)a2 + 2);
    _R1 = *((_DWORD *)this + 822) - *(_QWORD *)a2;
    __asm { VMOV            S2, R1 }
    _R1 = *((_DWORD *)this + 823) - HIDWORD(v8);
    _R0 = *((_DWORD *)this + 824) - v9;
    __asm
    {
      VMOV            S4, R1
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMOV            S6, R0
    }
    result = 0;
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VMUL.F32        S6, S6, S6
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  return result;
}


void __fastcall Entity::transferTickingArea(Entity *this, Dimension *a2)
{
  Entity *v2; // r4@1
  Dimension *v3; // r5@1
  TickWorldComponent *v4; // r0@1
  TickingAreasManager *v5; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (TickWorldComponent *)*((_DWORD *)this + 816);
  if ( v4 )
  {
    if ( TickWorldComponent::hasTickingArea(v4) == 1 )
    {
      TickWorldComponent::removeArea(*((TickWorldComponent **)v2 + 816));
      v5 = (TickingAreasManager *)Level::getTickingAreasMgr(*((Level **)v2 + 773));
      j_j_j__ZN19TickingAreasManager13addEntityAreaER9DimensionRK6Entity(v5, v3, v2);
    }
  }
}


  if ( *(_BYTE *)Level::getAdventureSettings(v9) && Entity::hasCategory(*((_DWORD *)v1 + 2), 2) == 1 )
{
    result = (_BYTE *)*((_DWORD *)v1 + 3);
    *result = 0;
  }
  else
  {
    result = (_BYTE *)Player::attack(*(Player **)(v2 + 4), *((Entity **)v1 + 2));
  return result;
}


int __fastcall Entity::setSize(Entity *this, float a2, float a3)
{
  SynchedEntityData *v4; // r5@1
  int result; // r0@1
  unsigned int v16; // r1@8
  unsigned int v17; // r1@10
  unsigned int v18; // r0@10
  unsigned int v20; // r1@15
  unsigned int v21; // r1@17
  unsigned int v22; // r0@17
  float v23; // [sp+0h] [bp-40h]@0
  float v24; // [sp+4h] [bp-3Ch]@0
  float v25; // [sp+8h] [bp-38h]@0

  _R4 = this;
  v4 = (Entity *)((char *)this + 176);
  _R7 = a2;
  _R6 = a3;
  result = SynchedEntityData::getFloat((Entity *)((char *)this + 176), 39);
  __asm
  {
    VMOV            S18, R7
    VLDR            S4, =0.005
    VMOV            S2, R0
    VMOV            S16, R6
    VMUL.F32        S0, S2, S18
    VMUL.F32        S2, S2, S16
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S2, S4 }
    VLDR            S4, [R4,#0x130]
  if ( !_ZF )
    goto LABEL_25;
    VLDR            S4, [R4,#0x134]
LABEL_25:
    __asm
    {
      VMOV.F32        S4, #0.5
      VSTR            S0, [R4,#0x130]
      VSTR            S2, [R4,#0x134]
      VMUL.F32        S20, S0, S4
    }
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      VLDR            S0, [R0]
      VLDR            S2, [R0,#8]
    LODWORD(_R0) = (char *)_R4 + 264;
      VSUB.F32        S4, S0, S20
      VLDR            S8, [R4,#0x10C]
      VSUB.F32        S6, S2, S20
      VLDR            S10, [R4,#0x134]
      VMOV            R2, S8
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S20
      VMOV            R1, S4
      VMOV            R3, S6
      VADD.F32        S4, S10, S8
      VSTR            S0, [SP,#0x40+var_40]
      VSTR            S4, [SP,#0x40+var_3C]
      VSTR            S2, [SP,#0x40+var_38]
    AABB::set(_R0, _R2, v23, v24, v25);
    _R0 = SynchedEntityData::_get(v4, 54);
    v16 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v16 == 3 )
      __asm
      {
        VLDR            S0, [R0,#0xC]
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        __asm { VSTR            S18, [R0,#0xC] }
        *(_BYTE *)(_R0 + 8) = 1;
        v17 = v16 >> 16;
        v18 = *((_WORD *)_R4 + 94);
        if ( v18 >= v17 )
          LOWORD(v18) = v17;
        *((_WORD *)_R4 + 94) = v18;
        if ( *((_WORD *)_R4 + 95) > v17 )
          LOWORD(v17) = *((_WORD *)_R4 + 95);
        *((_WORD *)_R4 + 95) = v17;
    _R0 = SynchedEntityData::_get(v4, 55);
    v20 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v20 == 3 )
        VCMPE.F32       S0, S16
        __asm { VSTR            S16, [R0,#0xC] }
        v21 = v20 >> 16;
        v22 = *((_WORD *)_R4 + 94);
        if ( v22 >= v21 )
          LOWORD(v22) = v21;
        *((_WORD *)_R4 + 94) = v22;
        if ( *((_WORD *)_R4 + 95) > v21 )
          LOWORD(v21) = *((_WORD *)_R4 + 95);
        *((_WORD *)_R4 + 95) = v21;
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 764))(_R4);
  return result;
}


int __fastcall Entity::getLootTable(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  char *v4; // r5@4
  int v5; // r0@4
  int v6; // r4@4
  int v7; // r2@4
  int result; // r0@4

  v1 = this;
  v2 = *((_DWORD *)this + 12);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 208) == 0;
  if ( v3 )
  {
    result = 0;
  }
  else
    v4 = Level::getLootTables(*((Level **)v1 + 773));
    v5 = *((_DWORD *)v1 + 773);
    v6 = *(_DWORD *)(*((_DWORD *)v1 + 12) + 208);
    v7 = (*(int (**)(void))(*(_DWORD *)v5 + 120))();
    result = j_j_j__ZN10LootTables12lookupByNameERKSsR19ResourcePackManager_0((int)v4, (unsigned int *)(v6 + 4), v7);
  return result;
}


void __fastcall Entity::getInterpolatedPosition2(Entity *this, float _R1, int _R2)
{
  __asm
  {
    VLDR            S0, [R1,#0x48]
    VMOV            S12, R2
    VLDR            S6, [R1,#0x54]
    VLDR            S2, [R1,#0x4C]
    VLDR            S8, [R1,#0x58]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R1,#0x50]
    VLDR            S10, [R1,#0x5C]
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S12
    VMUL.F32        S2, S2, S12
    VMUL.F32        S4, S4, S12
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


int __fastcall Entity::dropLeash(Entity *this, int a2, int a3)
{
  Entity *v3; // r4@1
  SynchedEntityData *v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  int result; // r0@1
  bool v8; // zf@1
  int v9; // r5@4
  __int64 v10; // r0@4
  unsigned int v11; // r2@4
  LeashFenceKnotEntity *v12; // r5@6
  __int64 v13; // r1@6
  int v14; // r0@6
  int v15; // r0@10
  __int64 v16; // r1@10
  int v17; // r0@11
  unsigned int v18; // r0@11
  unsigned int v19; // r1@11
  int v20; // r0@16
  unsigned int v21; // r1@16
  unsigned int v22; // r1@18
  unsigned int v23; // r0@18
  int v24; // r0@23
  unsigned int v25; // r0@23
  unsigned int v26; // r1@23
  bool v27; // zf@27
  void **v28; // [sp+8h] [bp-40h]@6
  int v29; // [sp+Ch] [bp-3Ch]@6
  int v30; // [sp+10h] [bp-38h]@6
  char v31; // [sp+14h] [bp-34h]@6
  __int64 v32; // [sp+18h] [bp-30h]@6
  char v33; // [sp+20h] [bp-28h]@6
  int v34; // [sp+24h] [bp-24h]@6

  v3 = this;
  v4 = (Entity *)((char *)this + 176);
  v5 = a2;
  v6 = a3;
  result = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  v8 = result == 0;
  if ( result )
  {
    result = *(_BYTE *)(result + 19);
    v8 = (result & 0x10) == 0;
  }
  if ( !v8 )
    v9 = *((_DWORD *)v3 + 773);
    v10 = SynchedEntityData::getInt64(v4, 38);
    v11 = v10;
    if ( !v10 )
      v11 = -1;
    v12 = (LeashFenceKnotEntity *)Level::fetchEntity(v9, SHIDWORD(v10), v11, HIDWORD(v10), 0);
    HIDWORD(v13) = *((_DWORD *)v3 + 829);
    LODWORD(v13) = *((_DWORD *)v3 + 828);
    v29 = 2;
    v30 = 1;
    v31 = 0;
    v28 = &off_26DA5D0;
    v32 = v13;
    v33 = 63;
    v34 = v6;
    v14 = Level::getPacketSender(*((Level **)v3 + 773));
    (*(void (**)(void))(*(_DWORD *)v14 + 20))();
    if ( v12
      && (*(int (__fastcall **)(LeashFenceKnotEntity *))(*(_DWORD *)v12 + 488))(v12) == 88
      && LeashFenceKnotEntity::numberofAnimalsAttached(v12) <= 1 )
    {
      (*(void (__fastcall **)(LeashFenceKnotEntity *))(*(_DWORD *)v12 + 44))(v12);
    }
    v15 = SynchedEntityData::_get(v4, 0);
    v16 = *(_QWORD *)(v15 + 16);
    *(_DWORD *)(v15 + 16) = v16 & 0xEFFFFFFF;
    *(_DWORD *)(v15 + 20) = HIDWORD(v16);
    if ( v16 & 0x10000000 )
      v17 = SynchedEntityData::_get(v4, 0);
      *(_BYTE *)(v17 + 8) = 1;
      v18 = *(_WORD *)(v17 + 6);
      v19 = *((_WORD *)v3 + 94);
      if ( v19 >= v18 )
        LOWORD(v19) = v18;
      *((_WORD *)v3 + 94) = v19;
      if ( *((_WORD *)v3 + 95) > v18 )
        LOWORD(v18) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v18;
    v20 = SynchedEntityData::_get(v4, 38);
    v21 = *(_DWORD *)(v20 + 4);
    if ( (unsigned __int8)v21 == 7 && *(_QWORD *)(v20 + 16) )
      v22 = v21 >> 16;
      *(_DWORD *)(v20 + 16) = 0;
      *(_DWORD *)(v20 + 20) = 0;
      *(_BYTE *)(v20 + 8) = 1;
      v23 = *((_WORD *)v3 + 94);
      if ( v23 >= v22 )
        LOWORD(v23) = v22;
      *((_WORD *)v3 + 94) = v23;
      if ( *((_WORD *)v3 + 95) > v22 )
        LOWORD(v22) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v22;
    v24 = SynchedEntityData::_get(v4, 38);
    *(_BYTE *)(v24 + 8) = 1;
    v25 = *(_WORD *)(v24 + 6);
    v26 = *((_WORD *)v3 + 94);
    if ( v26 >= v25 )
      LOWORD(v26) = v25;
    *((_WORD *)v3 + 94) = v26;
    if ( *((_WORD *)v3 + 95) > v25 )
      LOWORD(v25) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v25;
    result = Level::isClientSide(*((Level **)v3 + 773));
    v27 = result == 0;
    if ( !result )
      result = v5 ^ 1;
      v27 = v5 == 1;
    if ( v27 )
      result = (*(int (__fastcall **)(Entity *, _DWORD, signed int))(*(_DWORD *)v3 + 436))(
                 v3,
                 *(_WORD *)(Item::mLead + 18),
                 1);
  return result;
}


int __fastcall Entity::isSneaking(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::isRide(Entity *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 476);
  result = 0;
  if ( HIDWORD(v1) != (_DWORD)v1 )
    result = 1;
  return result;
}


int __fastcall Entity::distanceSqrToBlockPosCenter(Entity *this, const BlockPos *_R1)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S8, [R0,#0x48]
    VLDR            S10, [R0,#0x4C]
    VLDR            S2, [R1]
    VLDR            S4, [R1,#4]
    VLDR            S6, [R1,#8]
    VLDR            S12, [R0,#0x50]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSUB.F32        S8, S0, S8
    VSUB.F32        S10, S0, S10
    VCVT.F32.S32    S6, S6
    VSUB.F32        S0, S0, S12
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S6, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VMUL.F32        S0, S0, S0
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Entity::buildForward(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v4; // [sp+0h] [bp-18h]@1

  v2 = this;
  Entity::getRotation((Entity *)&v4, a2);
  return Vec3::directionFromRotation((int)v2, COERCE_FLOAT(&v4));
}


int __fastcall Entity::updateWaterState(Entity *this)
{
  int v2; // r5@1
  BlockSource *v7; // r5@10
  Block *v8; // r0@10
  Material *v9; // r0@10
  Level *v10; // r0@13
  int v11; // r6@14
  CauldronBlock *v12; // r5@14
  int v13; // r1@14
  unsigned __int8 v15; // [sp+Ch] [bp-54h]@11
  CauldronBlock *v16; // [sp+Dh] [bp-53h]@11
  float v17; // [sp+1Ch] [bp-44h]@10
  char v18; // [sp+28h] [bp-38h]@10
  char v19; // [sp+34h] [bp-2Ch]@1

  _R4 = this;
  v2 = *((_DWORD *)this + 773);
  (*(void (__fastcall **)(char *, Entity *))(*(_DWORD *)this + 508))(&v19, this);
  if ( Level::checkAndHandleMaterial(v2, COERCE_FLOAT(&v19), 5, _R4) == 1 )
  {
    if ( !*((_DWORD *)_R4 + 128) )
    {
      _ZF = *((_BYTE *)_R4 + 354) == 0;
      if ( !*((_BYTE *)_R4 + 354) )
        _ZF = *((_BYTE *)_R4 + 412) == 0;
      if ( _ZF )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 740))(_R4);
    }
    *((_DWORD *)_R4 + 56) = 0;
    *((_BYTE *)_R4 + 354) = 1;
    *((_DWORD *)_R4 + 107) = 0;
  }
  else
    *((_BYTE *)_R4 + 354) = 0;
  __asm
    VLDR            S0, [R4,#0x4C]
    VLDR            S6, [R4,#0x170]
    VLDR            S2, [R4,#0x50]
    VLDR            S8, [R4,#0x174]
    VADD.F32        S0, S6, S0
    VLDR            S4, [R4,#0x48]
    VLDR            S10, [R4,#0x16C]
    VADD.F32        S2, S8, S2
  v7 = (BlockSource *)*((_DWORD *)_R4 + 771);
    VADD.F32        S4, S10, S4
    VSTR            S4, [SP,#0x60+var_44]
    VSTR            S0, [SP,#0x60+var_40]
    VSTR            S2, [SP,#0x60+var_3C]
  BlockPos::BlockPos((int)&v18, (int)&v17);
  v8 = (Block *)BlockSource::getBlock(v7, (const BlockPos *)&v18);
  v9 = (Material *)Block::getMaterial(v8);
  *((_BYTE *)_R4 + 355) = Material::isLiquid(v9);
  if ( *((_DWORD *)_R4 + 107) >= 1 )
    BlockPos::BlockPos((BlockPos *)((char *)&v16 + 3), *((float *)_R4 + 18), *((float *)_R4 + 67), *((float *)_R4 + 20));
    BlockSource::getBlockAndData((BlockSource *)&v15, *((const BlockPos **)_R4 + 771), (int)&v16 + 3);
    if ( v15 == *(_BYTE *)(Block::mCauldron + 4)
      && CauldronBlock::getWaterLevel((CauldronBlock *)(unsigned __int8)v16, v15) > 0 )
      v10 = (Level *)BlockSource::getLevel(*((BlockSource **)_R4 + 771));
      if ( !Level::isClientSide(v10) )
      {
        v11 = BlockSource::getBlockEntity(*((BlockSource **)_R4 + 771), (const BlockPos *)((char *)&v16 + 3));
        v12 = (CauldronBlock *)BlockEntity::getBlock((BlockEntity *)v11);
        if ( !MobEffect::getById(*(MobEffect **)(v11 + 216), v13) )
        {
          CauldronBlock::setWaterLevel(
            v12,
            *((BlockSource **)_R4 + 771),
            (const BlockPos *)((char *)&v16 + 3),
            (unsigned __int8)v16,
            (unsigned __int8)v16 - 1,
            _R4);
          *((_DWORD *)_R4 + 56) = 0;
          *((_BYTE *)_R4 + 354) = 1;
          *((_DWORD *)_R4 + 107) = 0;
        }
      }
  return *((_BYTE *)_R4 + 354);
}


int __fastcall Entity::inCaravan(Entity *this)
{
  return 0;
}


void __fastcall Entity::initParams(Entity *this, VariantParameterList *a2)
{
  unsigned __int64 *v2; // r4@1
  Entity *v3; // r5@1
  char v4; // r0@1
  ClassID *v5; // r0@2
  __int64 v6; // kr00_8@4
  int v7; // r0@4
  void *v8; // r0@4
  int v9; // r0@5
  unsigned int v10; // r2@6
  unsigned int v11; // r3@6
  int v12; // r5@7
  char v13; // r0@8
  ClassID *v14; // r0@9
  __int64 v15; // kr08_8@11
  int v16; // r0@11
  void *v17; // r0@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  int v22; // [sp+8h] [bp-30h]@8
  int v23; // [sp+10h] [bp-28h]@1

  v2 = (unsigned __int64 *)a2;
  v3 = this;
  sub_21E94B4((void **)&v23, "self");
  v4 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
  __dmb();
  if ( !(v4 & 1) )
  {
    v5 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
    if ( v5 )
    {
      ClassID::getID<Entity>(void)::id = ClassID::getNextID(v5);
      j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
    }
  }
  v6 = ClassID::getID<Entity>(void)::id;
  v7 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         v2,
         (int **)&v23);
  *(_QWORD *)v7 = v6;
  *(_DWORD *)(v7 + 8) = v3;
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v3 + 773);
  if ( v9 )
    v10 = *((_DWORD *)v3 + 818);
    v11 = *((_DWORD *)v3 + 819);
    if ( (v10 & v11) != -1 )
      v12 = Level::fetchEntity(v9, 0, v10, v11, 0);
      if ( v12 )
      {
        sub_21E94B4((void **)&v22, "target");
        v13 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
        __dmb();
        if ( !(v13 & 1) )
        {
          v14 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          if ( v14 )
          {
            ClassID::getID<Entity>(void)::id = ClassID::getNextID(v14);
            j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          }
        }
        v15 = ClassID::getID<Entity>(void)::id;
        v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                v2,
                (int **)&v22);
        *(_QWORD *)v16 = v15;
        *(_DWORD *)(v16 + 8) = v12;
        v17 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      }
}


signed int __fastcall Entity::addRider(Entity *this, Entity *a2)
{
  Entity *v2; // r10@1
  Entity *v3; // r4@1
  Entity **v4; // r0@2
  void **v5; // r8@2
  int *v6; // r9@2
  __int64 v7; // kr00_8@3
  _BYTE *v8; // r7@10
  signed int v9; // r1@10
  unsigned int v10; // r2@10
  unsigned int v11; // r1@12
  unsigned int v12; // r5@12
  char *v13; // r6@18
  int v14; // r8@20
  int v15; // r8@22
  __int64 v16; // r0@25
  __int64 v17; // r2@27
  int *v18; // r5@30
  int *v19; // r6@30
  int v20; // t1@31
  signed int result; // r0@32
  int v22; // r5@34
  int v23; // lr@34
  int v24; // r1@34
  int v25; // r2@34
  __int64 v26; // kr10_8@36
  int v27; // r12@36
  Entity *v28; // [sp+4h] [bp-34h]@5
  int v29; // [sp+8h] [bp-30h]@26
  int v30; // [sp+Ch] [bp-2Ch]@35

  v2 = a2;
  v3 = this;
  if ( !(*((_BYTE *)a2 + 172) & 1) )
  {
    v4 = (Entity **)*((_DWORD *)this + 120);
    v5 = (void **)((char *)v3 + 476);
    v6 = (int *)((char *)v3 + 480);
LABEL_8:
    if ( v4 == *((Entity ***)v3 + 121) )
    {
      v8 = *v5;
      v9 = (char *)v4 - (_BYTE *)*v5;
      v10 = v9 >> 2;
      if ( !(v9 >> 2) )
        v10 = 1;
      v11 = v10 + (v9 >> 2);
      v12 = v11;
      if ( 0 != v11 >> 30 )
        v12 = 0x3FFFFFFF;
      if ( v11 < v10 )
      if ( v12 )
      {
        if ( v12 >= 0x40000000 )
          sub_21E57F4();
        v13 = (char *)operator new(4 * v12);
        v8 = *v5;
        v4 = (Entity **)*v6;
      }
      else
        v13 = 0;
      v14 = (int)&v13[(char *)v4 - v8];
      *(_DWORD *)&v13[(char *)v4 - v8] = v2;
      if ( 0 != ((char *)v4 - v8) >> 2 )
        _aeabi_memmove4(v13, v8);
      v15 = v14 + 4;
      if ( v8 )
        operator delete(v8);
      *((_DWORD *)v3 + 119) = v13;
      *v6 = v15;
      *((_DWORD *)v3 + 121) = &v13[4 * v12];
    }
    else
      *v4 = a2;
      *v6 += 4;
    v16 = *((_QWORD *)v2 + 7);
    if ( ((unsigned int)v16 & HIDWORD(v16)) == -1 )
      Level::getNewUniqueID((Level *)&v29, *((_DWORD *)v2 + 773));
      v16 = *(_QWORD *)&v29;
      *((_QWORD *)v2 + 7) = *(_QWORD *)&v29;
    v17 = *((_QWORD *)v3 + 63);
    if ( (_DWORD)v17 == HIDWORD(v17) )
      std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID const&>(
        (unsigned __int64 *)((char *)v3 + 500),
        (_QWORD *)v2 + 7);
      *(_QWORD *)v17 = v16;
      *((_DWORD *)v3 + 126) = v17 + 8;
    goto LABEL_30;
  }
  v7 = *(_QWORD *)((char *)this + 476);
  v4 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
  v6 = (int *)((char *)v3 + 480);
  v5 = (void **)((char *)v3 + 476);
  if ( v4 == (Entity **)v7 || *(_BYTE *)(*(_DWORD *)v7 + 172) & 1 )
    goto LABEL_8;
  v28 = a2;
  if ( (Entity **)v7 != v4 || v4 == *((Entity ***)v3 + 121) )
    std::vector<Entity *,std::allocator<Entity *>>::_M_insert_aux<Entity *>((int)v3 + 476, (char *)v7, (int *)&v28);
  else
    *(_DWORD *)v7 = a2;
    *v6 += 4;
  v22 = *((_DWORD *)v3 + 125);
  v23 = *((_DWORD *)v2 + 14);
  v24 = *((_DWORD *)v2 + 15);
  v25 = *((_DWORD *)v3 + 125);
  if ( (v23 & v24) == -1 )
    Level::getNewUniqueID((Level *)&v29, *((_DWORD *)v2 + 773));
    v24 = v30;
    v23 = v29;
    *((_DWORD *)v2 + 14) = v29;
    *((_DWORD *)v2 + 15) = v24;
    v25 = *((_DWORD *)v3 + 125);
  v26 = *((_QWORD *)v3 + 63);
  v27 = (v22 - v25) >> 3;
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_insert_aux<EntityUniqueID const&>(
      (int)v3 + 500,
      (char *)(v25 + 8 * v27),
      (__int64 *)v2 + 7);
  else if ( v22 == (_DWORD)v26 )
    *(_DWORD *)v26 = v23;
    *(_DWORD *)(v26 + 4) = v24;
    *((_DWORD *)v3 + 126) = v26 + 8;
    v29 = v23;
    v30 = v24;
    std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_insert_aux<EntityUniqueID>(
      (__int64 *)&v29);
LABEL_30:
  v18 = (int *)*v6;
  v19 = (int *)*((_DWORD *)v3 + 119);
  if ( v19 != (int *)*v6 )
    do
      v20 = *v19;
      ++v19;
      (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v3 + 136))(v3, v20, 0);
    while ( v18 != v19 );
  result = 1;
  *((_BYTE *)v3 + 529) = 1;
  return result;
}


void __fastcall Entity::getInterpolatedRidingPosition(Entity *this, float a2, int a3)
{
  int v5; // r1@1
  float v15; // [sp+0h] [bp-40h]@2
  float v18; // [sp+Ch] [bp-34h]@2

  _R5 = a2;
  _R6 = a3;
  v5 = *(_DWORD *)(LODWORD(a2) + 512);
  __asm { VMOV            S0, R6 }
  if ( v5 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)v5 + 80))(&v18);
    SynchedEntityData::getVec3((SynchedEntityData *)&v15, LODWORD(_R5) + 176, 0x39u);
    _R0 = (*(int (**)(void))(**(_DWORD **)(LODWORD(_R5) + 512) + 84))();
    __asm { VMOV            S2, R0 }
    _R1 = &mce::Math::DEGRAD;
    __asm
    {
      VLDR            S0, [R1]
      VMUL.F32        S0, S0, S2
      VMOV            R5, S0
    }
    _R0 = cosf(_R5);
      VMOV            S20, R0
      VLDR            S16, [SP,#0x40+var_40]
      VLDR            S18, [SP,#0x40+var_38]
    _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
      VMOV            S0, R0
      VLDR            S8, [SP,#0x40+var_2C]
      VMUL.F32        S2, S16, S20
      VMUL.F32        S4, S18, S0
      VMUL.F32        S6, S18, S20
      VMUL.F32        S0, S16, S0
      VADD.F32        S2, S4, S2
      VLDR            S4, [SP,#0x40+var_34]
      VSUB.F32        S0, S6, S0
      VLDR            S6, [SP,#0x40+var_30]
      VSTR            S2, [SP,#0x40+var_40]
      VADD.F32        S4, S4, S2
      VSTR            S0, [SP,#0x40+var_38]
      VADD.F32        S0, S8, S0
      VLDR            S10, [SP,#0x40+var_3C]
      VADD.F32        S2, S10, S6
  }
  else
      VLDR            S2, [R5,#0x4C]
      VLDR            S10, [R5,#0x64]
      VLDR            S4, [R5,#0x50]
      VLDR            S12, [R5,#0x68]
      VSUB.F32        S2, S2, S10
      VLDR            S6, [R5,#0x48]
      VLDR            S8, [R5,#0x60]
      VSUB.F32        S4, S4, S12
      VSUB.F32        S6, S6, S8
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VADD.F32        S2, S2, S10
      VADD.F32        S0, S4, S12
      VADD.F32        S4, S6, S8
  __asm
    VSTR            S4, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S0, [R4,#8]
}


signed int __fastcall Entity::canAddRider(Entity *this, Entity *a2)
{
  Entity **v2; // r3@1
  Entity **v3; // r12@1
  signed int result; // r0@2
  Entity **v5; // r2@5

  v3 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
  v2 = (Entity **)*(_QWORD *)((char *)this + 476);
  if ( v3 == v2 )
  {
    if ( v2 == v3 )
    {
      v5 = (Entity **)*(_QWORD *)((char *)this + 476);
    }
    else
      while ( *v2 != a2 )
      {
        ++v2;
        v5 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
        if ( v3 == v2 )
          goto LABEL_9;
      }
      v5 = v2;
LABEL_9:
    result = 0;
    if ( v5 == v3 )
      result = 1;
  }
  else
  return result;
}


int __fastcall Entity::stopRiding(Entity *this, int a2, int a3)
{
  Entity *v3; // r4@1
  int v4; // r5@1
  float v5; // r3@1
  int v6; // r0@7
  _QWORD *v7; // r5@7
  int v8; // r1@14
  int v9; // r3@14
  int v10; // r1@14
  int v11; // r0@14
  int v12; // r3@14
  int result; // r0@15
  void **v14; // [sp+0h] [bp-38h]@8
  int v15; // [sp+4h] [bp-34h]@14
  int v16; // [sp+8h] [bp-30h]@14
  char v17; // [sp+Ch] [bp-2Ch]@14
  char v18; // [sp+Dh] [bp-2Bh]@14
  int v19; // [sp+10h] [bp-28h]@14
  int v20; // [sp+14h] [bp-24h]@14
  __int64 v21; // [sp+18h] [bp-20h]@14
  int v22; // [sp+20h] [bp-18h]@14

  v3 = this;
  v4 = a3;
  v5 = *((float *)this + 128);
  if ( v5 == 0.0 )
  {
    *((_DWORD *)this + 130) = -1;
    *((_DWORD *)this + 131) = -1;
  }
  else
    if ( a2 == 1 )
    {
      Entity::_exitRide(this, *((const Entity **)this + 128), 1.6, v5);
      v5 = *((float *)v3 + 128);
    }
    if ( v4 )
      (*(void (__fastcall **)(_DWORD, Entity *, signed int))(*(_DWORD *)LODWORD(v5) + 760))(LODWORD(v5), v3, 1);
      *((_DWORD *)v3 + 130) = -1;
      *((_DWORD *)v3 + 131) = -1;
    else
      (*(void (__fastcall **)(_DWORD, Entity *))(*(_DWORD *)LODWORD(v5) + 152))(LODWORD(v5), v3);
      v6 = *((_DWORD *)v3 + 128);
      v7 = (_QWORD *)(v6 + 56);
      if ( (*(_DWORD *)(v6 + 60) & *(_DWORD *)(v6 + 56)) == -1 )
      {
        Level::getNewUniqueID((Level *)&v14, *(_DWORD *)(v6 + 3092));
        *v7 = *(_QWORD *)&v14;
      }
      *((_QWORD *)v3 + 65) = *v7;
    if ( !*((_BYTE *)v3 + 3097)
      && Level::isClientSide(*((Level **)v3 + 773)) == 1
      && *((_BYTE *)v3 + 172) & 1
      && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 1408))(v3) == 1 )
      v8 = *((_DWORD *)v3 + 128);
      v9 = *(_DWORD *)(v8 + 3312);
      v10 = *(_DWORD *)(v8 + 3316);
      v15 = 2;
      v16 = 1;
      v17 = 0;
      v14 = &off_26DFA88;
      v18 = 3;
      v19 = v9;
      v20 = v10;
      v22 = dword_2822498;
      v21 = *(_QWORD *)&Vec3::ZERO;
      v11 = Level::getPacketSender(*((Level **)v3 + 773));
      (*(void (__cdecl **)(int, void ***, _DWORD, int, void **, int, int, _DWORD, int))(*(_DWORD *)v11 + 8))(
        v11,
        &v14,
        *(_DWORD *)(*(_DWORD *)v11 + 8),
        v12,
        v14,
        v15,
        v16,
        *(_DWORD *)&v17,
        v19);
  result = 0;
  *((_DWORD *)v3 + 128) = 0;
  return result;
}


signed int __fastcall Entity::tick(Entity *this, BlockSource *a2)
{
  Entity *v2; // r4@1
  const AABB *v3; // r5@1
  BlockSource *v4; // r9@1
  signed int v5; // r0@1
  bool v6; // zf@1
  TickWorldComponent *v7; // r0@5
  Dimension *v8; // r6@7
  TickWorldComponent *v9; // r0@8
  int v10; // r0@10
  int v11; // r8@10
  int v12; // r7@10
  unsigned int *v13; // r1@11
  unsigned int v14; // r0@13
  unsigned int *v16; // r6@18
  unsigned int v17; // r0@20
  __int64 v18; // r0@28
  EntityDefinitionDescriptor *v19; // r1@28
  EntityDefinitionDescriptor *v20; // r0@28
  EntityDefinitionDescriptor *v21; // r0@29
  EntityDefinitionDescriptor *v22; // r0@30
  int v23; // r0@32
  signed int v24; // r2@32
  signed int v25; // r3@32
  signed int v26; // r1@32
  int v27; // r0@39
  unsigned __int8 v28; // vf@39
  int v29; // r7@45
  int v30; // r6@46
  int v31; // r1@46
  signed int v32; // r0@46
  int v33; // r0@50
  __int64 v34; // r1@50
  int v35; // r0@51
  void (__fastcall *v36)(Entity *); // r1@52
  AABB *v37; // r6@54
  int v38; // r0@56
  AABB *v39; // r0@57
  signed int v40; // r1@58
  AABB *v41; // r2@59
  int v42; // r1@59
  int v43; // r0@63
  bool v44; // zf@63
  int v46; // [sp+0h] [bp-14h]@10
  int v47; // [sp+4h] [bp-10h]@10
  char v48; // [sp+8h] [bp-Ch]@1
  int v49; // [sp+14h] [bp+0h]@1
  EntityDefinitionDescriptor *v50; // [sp+20h] [bp+Ch]@28
  unsigned int v51; // [sp+24h] [bp+10h]@46

  v2 = this;
  v3 = (Entity *)((char *)this + 264);
  v4 = a2;
  BlockPos::BlockPos((int)&v49, (int)this + 264);
  BlockPos::BlockPos((int)&v48, (int)v2 + 276);
  v5 = BlockSource::hasChunksAt(v4, (const BlockPos *)&v49, (const BlockPos *)&v48);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = *((_BYTE *)v2 + 3098) == 0;
  if ( v6 )
    return 0;
  if ( !(*((_BYTE *)v2 + 172) & 1) )
  {
    v7 = (TickWorldComponent *)*((_DWORD *)v2 + 816);
    if ( !v7 || !TickWorldComponent::hasTickingArea(v7) )
    {
      *((_DWORD *)v2 + 771) = v4;
      v8 = (Dimension *)BlockSource::getDimension(v4);
      *((_DWORD *)v2 + 9) = Dimension::getId(v8);
      *((_DWORD *)v2 + 772) = v8;
    }
  }
  v9 = (TickWorldComponent *)*((_DWORD *)v2 + 816);
  if ( v9 && TickWorldComponent::hasTickingArea(v9) == 1 )
    TickWorldComponent::getTickingArea((TickWorldComponent *)&v46, *((_DWORD *)v2 + 816));
    v10 = (*(int (**)(void))(*(_DWORD *)v46 + 36))();
    v11 = (*(int (**)(void))(*(_DWORD *)v10 + 32))();
    v12 = v47;
    if ( !v47 )
      goto LABEL_73;
    v13 = (unsigned int *)(v47 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 != 1 )
    v16 = (unsigned int *)(v12 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      if ( !v11 )
        return 0;
LABEL_73:
  if ( EntityDefinitionDiffList::hasChanged((Entity *)((char *)v2 + 3340)) == 1 )
    LODWORD(v18) = &v50;
    HIDWORD(v18) = (char *)v2 + 3340;
    EntityDefinitionDiffList::getDescription(v18, 1);
    v19 = v50;
    v50 = 0;
    v20 = (EntityDefinitionDescriptor *)*((_DWORD *)v2 + 12);
    *((_DWORD *)v2 + 12) = v19;
    if ( v20 )
      v21 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v20);
      operator delete((void *)v21);
      if ( v50 )
      {
        v22 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v50);
        operator delete((void *)v22);
      }
    Entity::reload(v2);
  v23 = SynchedEntityData::getInt((Entity *)((char *)v2 + 176), 78);
  v24 = *((_BYTE *)v2 + 3364);
  v25 = 0;
  v26 = 0;
  if ( v23 > 0 )
    v25 = 1;
  if ( v24 != v25 )
    if ( v23 > 0 )
      v26 = 1;
    v24 = v26;
    *((_BYTE *)v2 + 3364) = v26;
    *((_DWORD *)v2 + 842) = v23;
  if ( v24 )
    v27 = *((_DWORD *)v2 + 842);
    v28 = __OFSUB__(v27--, 1);
    *((_DWORD *)v2 + 842) = v27;
    if ( (unsigned __int8)((v27 < 0) ^ v28) | (v27 == 0) )
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 44))(v2);
      return 0;
  if ( *((_BYTE *)v2 + 40) && !Level::isClientSide(*((Level **)v2 + 773)) )
    Entity::_updateOwnerChunk(v2);
  v29 = *((_DWORD *)v2 + 128);
  if ( !v29 )
    goto LABEL_50;
  v30 = *(_DWORD *)(v29 + 3092);
  (*(void (__fastcall **)(EntityDefinitionDescriptor **, _DWORD))(*(_DWORD *)v29 + 540))(&v50, *((_DWORD *)v2 + 128));
  v32 = Level::getPlayer(v30, v31, (unsigned int)v50, v51);
  if ( v32 )
    if ( (*(int (**)(void))(*(_DWORD *)v32 + 1408))() )
      goto LABEL_51;
  if ( Level::isClientSide(*(Level **)(v29 + 3092)) == 1 )
LABEL_50:
    v33 = *((_DWORD *)v2 + 18);
    *((_DWORD *)v2 + 21) = v33;
    LODWORD(v34) = *((_DWORD *)v2 + 19);
    *((_DWORD *)v2 + 22) = v34;
    HIDWORD(v34) = *((_DWORD *)v2 + 20);
    *((_DWORD *)v2 + 23) = HIDWORD(v34);
    *((_DWORD *)v2 + 24) = v33;
    *(_QWORD *)((char *)v2 + 100) = v34;
    *((_QWORD *)v2 + 16) = *((_QWORD *)v2 + 15);
LABEL_51:
  Entity::_manageRiders(v2, v4);
  v35 = *(_DWORD *)v2;
  if ( *((_DWORD *)v2 + 128) )
    v36 = *(void (__fastcall **)(Entity *))(v35 + 132);
  else
    v36 = *(void (__fastcall **)(Entity *))(v35 + 124);
  v36(v2);
  v37 = (AABB *)*((_DWORD *)v2 + 845);
  if ( v37 != *((AABB **)v2 + 846) )
    do
      if ( AABB::intersects(v37, v3) )
        v38 = *((_DWORD *)v2 + 846);
        v37 = (AABB *)((char *)v37 + 28);
      else
        v39 = (AABB *)*((_DWORD *)v2 + 846);
        if ( (AABB *)((char *)v37 + 28) != v39 )
        {
          v40 = v39 - (AABB *)((char *)v37 + 28);
          if ( v40 >= 1 )
          {
            v41 = v37;
            v42 = -1227133513 * (v40 >> 2) + 1;
            do
            {
              --v42;
              *(_DWORD *)v41 = *((_DWORD *)v41 + 7);
              *((_DWORD *)v41 + 1) = *((_DWORD *)v41 + 8);
              *((_DWORD *)v41 + 2) = *((_DWORD *)v41 + 9);
              *((_DWORD *)v41 + 3) = *((_DWORD *)v41 + 10);
              *((_DWORD *)v41 + 4) = *((_DWORD *)v41 + 11);
              *((_DWORD *)v41 + 5) = *((_DWORD *)v41 + 12);
              *((_BYTE *)v41 + 24) = *((_BYTE *)v41 + 52);
              v41 = (AABB *)((char *)v41 + 28);
            }
            while ( v42 > 1 );
          }
        }
        v38 = (int)v39 - 28;
        *((_DWORD *)v2 + 846) = v38;
    while ( v37 != (AABB *)v38 );
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 92))(v2);
  Entity::updateTickingData(v2);
  v43 = Level::isClientSide(*((Level **)v2 + 773));
  v44 = v43 == 1;
  if ( v43 == 1 )
    v44 = *((_DWORD *)v2 + 128) == 0;
  if ( v44 )
    Entity::_playMovementSound(v2, *((_BYTE *)v2 + 216));
  return 1;
}


unsigned int __fastcall Entity::isLeashed(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 19) & 0x10u) >> 4;
  return v1;
}


signed int __fastcall Entity::isInsidePortal(Entity *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_BYTE *)this + 221);
  if ( v1 == *(_BYTE *)(Block::mPortal + 4) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v1 == *(_BYTE *)(Block::mEndPortal + 4) )
      result = 1;
  return result;
}


int __fastcall Entity::updateInsideBlock(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r0@3
  unsigned __int8 v4; // vf@4
  int v5; // r0@4
  int v6; // r0@11
  int v7; // r1@11
  int v8; // r5@12
  signed int v9; // r1@12
  signed int v10; // r0@15
  int result; // r0@17
  char v12; // [sp+8h] [bp-20h]@18
  char v13; // [sp+9h] [bp-1Fh]@18
  char v14; // [sp+Ch] [bp-1Ch]@18

  v1 = this;
  v2 = *((_BYTE *)this + 221);
  if ( v2 == *(_BYTE *)(Block::mPortal + 4) && v2 != *(_BYTE *)(Block::mEndPortal + 4) )
  {
    if ( *((_DWORD *)v1 + 113) < 1 )
    {
      if ( !Level::isClientSide(*((Level **)v1 + 773))
        && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 316))(v1) == 1 )
      {
        v6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 520))(v1);
        v7 = *((_DWORD *)v1 + 118);
        *((_DWORD *)v1 + 118) = v7 + 1;
        if ( v7 >= v6 )
        {
          *((_DWORD *)v1 + 118) = v6;
          v8 = *((_DWORD *)v1 + 9);
          *((_DWORD *)v1 + 113) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 516))(v1);
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v1 + 532))(v1, v9, 1);
        }
      }
    }
    else
      *((_DWORD *)v1 + 113) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 516))(v1);
  }
  else
    v3 = *((_DWORD *)v1 + 118);
    if ( v3 >= 1 )
      v4 = __OFSUB__(v3, 4);
      v5 = v3 - 4;
      if ( (v5 < 0) ^ v4 )
        v5 = 0;
      *((_DWORD *)v1 + 118) = v5;
  v10 = *((_DWORD *)v1 + 113);
  if ( v10 >= 1 )
    *((_DWORD *)v1 + 113) = v10 - 1;
  result = *((_BYTE *)v1 + 221);
  if ( result == *(_BYTE *)(Block::mCactus + 4) )
    v12 = *((_BYTE *)v1 + 221);
    v13 = 0;
    EntityDamageByBlockSource::EntityDamageByBlockSource((int)&v14, (int)&v12, 1);
    if ( !(*(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v1 + 404))(v1, &v14) )
      (*(void (__fastcall **)(Entity *, char *, signed int, signed int))(*(_DWORD *)v1 + 696))(v1, &v14, 1, 1);
    result = EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v14);
  return result;
}


int __fastcall Entity::push(Entity *this, Entity *a2, int a3)
{
  int v4; // r8@1
  int v6; // r7@1
  int v7; // r1@1
  int result; // r0@1
  float v9; // r2@1
  int v10; // r1@1
  bool v12; // zf@5
  RideableComponent *v13; // r0@8
  int (__fastcall *v19)(Entity *, float *); // r2@13
  int (__fastcall *v20)(Entity *, float *); // r2@14
  float v21; // [sp+8h] [bp-48h]@14
  int v22; // [sp+Ch] [bp-44h]@14
  float v23; // [sp+14h] [bp-3Ch]@13
  int v24; // [sp+18h] [bp-38h]@13

  _R6 = this;
  v4 = a3;
  _R4 = a2;
  v6 = Level::fetchEntity(*((_DWORD *)this + 773), (int)a2, *((_QWORD *)this + 65), *((_QWORD *)this + 65) >> 32, 0);
  result = Level::fetchEntity(*((_DWORD *)_R4 + 773), v7, *((_QWORD *)_R4 + 65), *((_QWORD *)_R4 + 65) >> 32, 0);
  v10 = *((_DWORD *)_R6 + 128);
  _ZF = v10 == 0;
  if ( !v10 )
    _ZF = *((_DWORD *)_R4 + 128) == 0;
  if ( _ZF )
  {
    v12 = v6 == (_DWORD)_R4;
    if ( (Entity *)v6 != _R4 )
      v12 = result == (_DWORD)_R6;
    if ( !v12 )
    {
      v13 = (RideableComponent *)*((_DWORD *)_R4 + 791);
      if ( v13 )
        RideableComponent::pullInEntity(v13, _R6);
      __asm
      {
        VLDR            S0, [R6,#0x48]
        VLDR            S4, [R4,#0x48]
        VLDR            S2, [R6,#0x50]
        VLDR            S6, [R4,#0x50]
        VSUB.F32        S16, S4, S0
        VSUB.F32        S18, S6, S2
        VMOV            R0, S16
        VMOV            R1, S18
      }
      result = mce::Math::absMax(_R0, _R1, v9);
        VMOV            S0, R0
        VLDR            S2, =0.01
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        __asm
        {
          VSQRT.F32       S0, S0
          VMOV.F32        S2, #1.0
          VLDR            S8, =0.05
          VDIV.F32        S6, S16, S0
          VDIV.F32        S4, S2, S0
          VDIV.F32        S0, S18, S0
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
          VMUL.F32        S6, S6, S8
          VMUL.F32        S0, S0, S8
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S4, S2 }
          VLDR            S8, [R6,#0x14C]
          VMUL.F32        S18, S6, S4
          VSUB.F32        S16, S2, S8
          VMUL.F32        S20, S0, S4
        v19 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R6 + 276);
          VNMUL.F32       S0, S18, S16
          VNMUL.F32       S2, S20, S16
          VSTR            S0, [SP,#0x50+var_3C]
        v24 = 0;
        __asm { VSTR            S2, [SP,#0x50+var_34] }
        result = v19(_R6, &v23);
        if ( !v4 )
          __asm
          {
            VMUL.F32        S0, S20, S16
            VMUL.F32        S2, S18, S16
          }
          v20 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 276);
          __asm { VSTR            S2, [SP,#0x50+var_48] }
          v22 = 0;
          __asm { VSTR            S0, [SP,#0x50+var_40] }
          result = v20(_R4, &v21);
    }
  }
  return result;
}


int __fastcall Entity::getRotation(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int result; // r0@1
  int v5; // r1@1
  float v10; // [sp+0h] [bp-20h]@4

  v2 = this;
  _R2 = *(_QWORD *)(a2 + 120) >> 32;
  result = *(_QWORD *)(a2 + 120);
  *(_QWORD *)v2 = *(_QWORD *)(a2 + 120);
  v5 = *(_DWORD *)(a2 + 512);
  _ZF = v5 == 0;
  if ( v5 )
    _ZF = *(_BYTE *)(v5 + 528) == 0;
  if ( !_ZF )
  {
    __asm
    {
      VMOV            S18, R0
      VMOV            S16, R2
    }
    result = Entity::getRotation((Entity *)&v10, v5);
      VLDR            S0, [SP,#0x20+var_20]
      VADD.F32        S0, S18, S0
      VSTR            S0, [R4]
      VLDR            S0, [SP,#0x20+var_1C]
      VADD.F32        S0, S16, S0
      VSTR            S0, [R4,#4]
  }
  return result;
}


_BOOL4 __fastcall Entity::isTickingEntity(Entity *this)
{
  return *((_DWORD *)this + 816) != 0;
}


int __fastcall Entity::getOutputSignal(Entity *this)
{
  return 0;
}


unsigned int __fastcall Entity::isStanding(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 20) & 0x20u) >> 5;
  return v1;
}


int __fastcall Entity::moveBBs(Entity *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  int result; // r0@1
  AABB *v4; // r5@1 OVERLAPPED
  Entity *v5; // r6@1 OVERLAPPED

  v5 = this;
  v2 = a2;
  result = AABB::move((Entity *)((char *)this + 264), a2);
  for ( *(_QWORD *)&v4 = *(_QWORD *)((char *)v5 + 292); v5 != v4; v4 = (AABB *)((char *)v4 + 28) )
    result = AABB::move(v4, v2);
  return result;
}


ContainerComponent *__fastcall Entity::openContainerComponent(Entity *this, Player *a2)
{
  ContainerComponent *result; // r0@1

  result = (ContainerComponent *)*((_DWORD *)this + 782);
  if ( result )
    result = (ContainerComponent *)j_j_j__ZN18ContainerComponent13openContainerER6Player_1(result, a2);
  else
    JUMPOUT(0, Entity::getPhysicsComponent);
  return result;
}


BoostableComponent *__fastcall Entity::_removeRider(Entity *this, Entity *a2, bool a3)
{
  Entity *v3; // r5@1
  bool v4; // r8@1
  Entity **v5; // r0@1
  Entity **v6; // r2@1
  Entity *v7; // r4@1
  __int64 v8; // r6@7
  __int64 v9; // r0@7
  Entity *v10; // r11@7
  int v11; // r0@12
  signed int v12; // r1@15
  int v13; // r1@16
  int v14; // r9@18 OVERLAPPED
  int v15; // r10@18 OVERLAPPED
  __int64 v16; // r6@20
  int v17; // r0@23
  BoostableComponent *result; // r0@24
  int v19; // [sp+2h] [bp-66h]@0
  __int16 v20; // [sp+6h] [bp-62h]@0
  char v21; // [sp+8h] [bp-60h]@0
  int v22; // [sp+9h] [bp-5Fh]@0
  __int16 v23; // [sp+Dh] [bp-5Bh]@0
  char v24; // [sp+Fh] [bp-59h]@0
  void **v25; // [sp+10h] [bp-58h]@8
  int v26; // [sp+14h] [bp-54h]@23
  int v27; // [sp+18h] [bp-50h]@23
  char v28; // [sp+1Ch] [bp-4Ch]@23
  char v29; // [sp+20h] [bp-48h]@23
  int v30; // [sp+21h] [bp-47h]@23
  __int16 v31; // [sp+25h] [bp-43h]@23
  char v32; // [sp+27h] [bp-41h]@23
  __int64 v33; // [sp+28h] [bp-40h]@23
  __int64 v34; // [sp+30h] [bp-38h]@23
  bool v35; // [sp+38h] [bp-30h]@23
  int v36; // [sp+39h] [bp-2Fh]@23
  __int16 v37; // [sp+3Dh] [bp-2Bh]@23
  char v38; // [sp+3Fh] [bp-29h]@23

  v3 = this;
  v4 = a3;
  v6 = (Entity **)(*(_QWORD *)((char *)this + 476) >> 32);
  v5 = (Entity **)*(_QWORD *)((char *)this + 476);
  v7 = a2;
  if ( v5 != v6 )
  {
    while ( *v5 != a2 )
    {
      ++v5;
      if ( v6 == v5 )
      {
        v5 = v6;
        break;
      }
    }
  }
  if ( v6 != v5 + 1 )
    _aeabi_memmove4(v5, v5 + 1);
    v6 = (Entity **)*((_DWORD *)v3 + 120);
  *((_DWORD *)v3 + 120) = v6 - 1;
  v8 = *(_QWORD *)((char *)v3 + 500);
  v10 = (Entity *)((char *)v7 + 56);
  v9 = *((_QWORD *)v7 + 7);
  if ( ((unsigned int)v9 & HIDWORD(v9)) == -1 )
    Level::getNewUniqueID((Level *)&v25, *((_DWORD *)v7 + 773));
    v9 = *(_QWORD *)&v25;
    *(_QWORD *)v10 = *(_QWORD *)&v25;
  if ( (_DWORD)v8 == HIDWORD(v8) )
LABEL_12:
    v11 = *((_DWORD *)v3 + 126);
    LODWORD(v8) = *((_DWORD *)v3 + 126);
  else
    while ( *(_QWORD *)v8 ^ v9 )
      LODWORD(v8) = v8 + 8;
      if ( HIDWORD(v8) == (_DWORD)v8 )
        goto LABEL_12;
  if ( (_DWORD)v8 + 8 != v11 )
    v12 = v11 - (v8 + 8);
    if ( v12 >= 1 )
      v13 = (v12 >> 3) + 1;
      do
        --v13;
        HIDWORD(v8) = *(_DWORD *)(v8 + 12);
        *(_DWORD *)v8 = *(_DWORD *)(v8 + 8);
        *(_DWORD *)(v8 + 4) = HIDWORD(v8);
        LODWORD(v8) = v8 + 8;
      while ( v13 > 1 );
  *((_DWORD *)v3 + 126) = v11 - 8;
  *((_BYTE *)v3 + 529) = 1;
  v14 = *((_DWORD *)v3 + 14);
  v15 = *((_DWORD *)v3 + 15);
  if ( (v14 & v15) == -1 )
    Level::getNewUniqueID((Level *)&v25, *((_DWORD *)v3 + 773));
    *(_QWORD *)&v14 = *(_QWORD *)&v25;
    *((_QWORD *)v3 + 7) = *(_QWORD *)&v25;
  v16 = *(_QWORD *)v10;
  if ( ((unsigned int)v16 & HIDWORD(v16)) == -1 )
    v16 = *(_QWORD *)&v25;
  if ( !Level::isClientSide(*((Level **)v3 + 773)) )
    v26 = 2;
    v27 = 1;
    v28 = 0;
    v25 = &off_26D9898;
    v29 = 0;
    v32 = v24;
    v31 = v23;
    v30 = v22;
    v33 = *(_QWORD *)&v14;
    v34 = v16;
    v35 = v4;
    v38 = v21;
    v37 = v20;
    v36 = v19;
    v17 = Level::getPacketSender(*((Level **)v3 + 773));
    (*(void (**)(void))(*(_DWORD *)v17 + 8))();
  result = (BoostableComponent *)*((_DWORD *)v3 + 799);
  if ( result )
    if ( *((_BYTE *)v7 + 172) & 1 )
      result = (BoostableComponent *)BoostableComponent::removeRider(result, v7);
  return result;
}


int __fastcall Entity::_hurt(Entity *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  Entity *v5; // r8@1
  const EntityDamageSource *v6; // r10@1
  double v7; // r0@1
  bool v8; // zf@1
  unsigned int v9; // r0@4
  int v10; // r7@6
  int *v11; // r6@6
  int v12; // r7@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  void *v15; // r6@17
  int v16; // r1@17
  void *v17; // r0@17
  ProjectileComponent *v18; // r0@22
  void *ptr; // [sp+4h] [bp-44h]@7
  unsigned int v21; // [sp+8h] [bp-40h]@4
  int v22; // [sp+Ch] [bp-3Ch]@4
  int v23; // [sp+10h] [bp-38h]@4
  signed int v24; // [sp+14h] [bp-34h]@4
  int v25; // [sp+18h] [bp-30h]@4
  int v26; // [sp+1Ch] [bp-2Ch]@20

  v5 = this;
  v6 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 700))();
  LODWORD(v7) = *((_DWORD *)v5 + 12);
  v8 = LODWORD(v7) == 0;
  if ( LODWORD(v7) )
    v8 = *(_DWORD *)(LODWORD(v7) + 244) == 0;
  if ( !v8 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 1065353216;
    v25 = 0;
    LODWORD(v7) = &v24;
    v9 = sub_21E6254(v7);
    v21 = v9;
    if ( v9 == 1 )
    {
      v26 = 0;
      v11 = &v26;
    }
    else
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = 4 * v9;
      v11 = (int *)operator new(4 * v9);
      _aeabi_memclr4(v11, v10);
    ptr = v11;
    Entity::initParams(v5, (VariantParameterList *)&ptr);
    EntityDefinitionDescriptor::executeTrigger(
      *((_DWORD *)v5 + 12),
      v5,
      (DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)v5 + 12) + 244) + 4),
      (const VariantParameterList *)&ptr);
    v12 = v22;
    while ( v12 )
      v15 = (void *)v12;
      v16 = *(_DWORD *)(v12 + 8);
      v12 = *(_DWORD *)v12;
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      operator delete(v15);
    _aeabi_memclr4(ptr, 4 * v21);
    if ( ptr && &v26 != ptr )
      operator delete(ptr);
  }
  v18 = (ProjectileComponent *)*((_DWORD *)v5 + 787);
  if ( v18 )
    ProjectileComponent::hurt(v18, v6);
  return 0;
}


unsigned int __fastcall Entity::canShowNameTag(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 17) & 0x40u) >> 6;
  return v1;
}


int __fastcall Entity::setInheritRotationWhenRiding(int result, bool a2)
{
  *(_BYTE *)(result + 528) = a2;
  return result;
}


unsigned int __fastcall Entity::isSitting(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (unsigned int)*(_BYTE *)(v2 + 18) >> 7;
  return v1;
}


int __fastcall Entity::spawnDustParticles(Entity *this, float a2)
{
  char v9; // r0@3
  int result; // r0@6
  int v11; // r1@7
  unsigned int v12; // r6@8
  char *v13; // r0@9
  char *v15; // r0@9
  char *v17; // r0@9
  float v19; // [sp+8h] [bp-70h]@9
  int v20; // [sp+14h] [bp-64h]@7
  int v21; // [sp+1Ch] [bp-5Ch]@7
  unsigned __int8 v22; // [sp+20h] [bp-58h]@6
  unsigned __int8 v23; // [sp+21h] [bp-57h]@9
  char v24; // [sp+24h] [bp-54h]@6

  __asm { VMOV.F32        S0, #-3.0 }
  _R4 = this;
  __asm
  {
    VLDR            S2, [R4,#0xE0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::ceil(_R0, a2);
    VMOV            S0, R0
    VLDR            S2, =0.066667
    VLDR            S16, =0.2
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #2.5
    VADD.F32        S18, S0, S16
    VCMPE.F32       S18, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S2 }
  v9 = byte_27FDD3C[0];
  __dmb();
  if ( !(v9 & 1) && j___cxa_guard_acquire(byte_27FDD3C) )
    __asm
    {
      VCVT.F64.F32    D0, S18
      VLDR            D1, =150.0
      VMUL.F64        D0, D0, D1
      VCVTR.U32.F64   S0, D0
      VSTR            S0, [R0,#8]
    }
    j___cxa_guard_release(byte_27FDD3C);
  Entity::_getBlockOnPos((Entity *)&v24, *(float *)&_R4);
  BlockSource::getBlockAndData((BlockSource *)&v22, *((const BlockPos **)_R4 + 771), (int)&v24);
  result = v22;
  if ( v22 )
      VLDR            S0, [SP,#0x78+var_50]
      VMOV.F32        S2, #1.0
    v11 = *((_DWORD *)_R4 + 20);
    v20 = *((_DWORD *)_R4 + 18);
    v21 = v11;
    __asm { VCVT.F32.S32    S0, S0 }
    result = dword_27FDD38;
      VADD.F32        S0, S0, S2
      VSTR            S0, [SP,#0x78+var_60]
    if ( !_ZF )
      __asm
      {
        VLDR            D9, =2.32830644e-10
        VLDR            S20, =-0.1
        VLDR            S22, =0.1
      }
      v12 = 0;
      do
        v13 = Level::getRandom(*((Level **)_R4 + 773));
        _R0 = Random::_genRandInt32((Random *)v13);
        __asm { VMOV            S24, R0 }
        v15 = Level::getRandom(*((Level **)_R4 + 773));
        _R5 = Random::_genRandInt32((Random *)v15);
        __asm { VCVT.F64.U32    D12, S24 }
        v17 = Level::getRandom(*((Level **)_R4 + 773));
        _R0 = Random::_genRandInt32((Random *)v17);
        __asm
        {
          VMOV            S0, R0
          VMOV            S2, R5
          VCVT.F64.U32    D0, S0
          VCVT.F64.U32    D1, S2
          VMUL.F64        D0, D0, D9
          VMUL.F64        D2, D12, D9
          VMUL.F64        D1, D1, D9
          VCVT.F32.F64    S4, D2
          VCVT.F32.F64    S0, D0
          VMUL.F32        S4, S4, S16
          VCVT.F32.F64    S2, D1
          VMUL.F32        S0, S0, S16
          VADD.F32        S4, S4, S20
          VMUL.F32        S2, S2, S22
          VADD.F32        S0, S0, S20
          VSTR            S4, [SP,#0x78+var_70]
          VSTR            S2, [SP,#0x78+var_6C]
          VSTR            S0, [SP,#0x78+var_68]
        }
        Level::addTerrainParticle(
          *((Level **)_R4 + 773),
          (const Vec3 *)&v20,
          (const Vec3 *)&v19,
          v22 | (v23 << 8),
          (const BlockPos *)&v24);
        ++v12;
        result = dword_27FDD38;
      while ( v12 < dword_27FDD38 );
  return result;
}


void __fastcall Entity::removeAllRiders(Entity *this, bool a2, int a3)
{
  Entity::removeAllRiders(this, a2, a3);
}


int __fastcall Entity::getAge(Entity *this)
{
  AgeableComponent *v1; // r0@1
  int result; // r0@2

  v1 = (AgeableComponent *)*((_DWORD *)this + 777);
  if ( v1 )
    result = j_j_j__ZN16AgeableComponent6getAgeEv_0(v1);
  else
    result = 0;
  return result;
}


const Vec3 *__fastcall Entity::pushOutOfBlocks(Entity *this, const Vec3 *a2)
{
  __int64 v4; // r6@1
  float v5; // r1@1
  float v6; // r1@1
  int v7; // r0@1
  const Vec3 *result; // r0@1
  const BlockPos *v13; // r1@2
  int v14; // r5@2
  const BlockPos *v15; // r1@2
  int v16; // r9@2
  const BlockPos *v17; // r1@2
  int v18; // r10@2
  const BlockPos *v19; // r1@2
  int v20; // r4@2
  const BlockPos *v21; // r1@2
  int v22; // r7@2
  const BlockPos *v23; // r1@2
  char v24; // r0@2
  char v25; // r1@4
  signed int v26; // r8@4
  char v27; // r0@6
  char v28; // r1@6
  char v29; // r0@8
  char v30; // r1@8
  char v31; // r0@10
  char v32; // r1@10
  char v33; // r0@12
  int v34; // r9@12
  char v35; // r1@12
  int v36; // r6@12
  int v37; // r7@14
  signed int v39; // r2@24
  signed int v40; // r3@24
  signed int v41; // r1@24
  int v42; // r3@33
  signed int v43; // r2@36
  int v44; // r1@40
  int v45; // r2@52
  const Vec3 *v46; // [sp+8h] [bp-108h]@1
  int v47; // [sp+Ch] [bp-104h]@2
  int v48; // [sp+10h] [bp-100h]@2
  char v49; // [sp+14h] [bp-FCh]@53
  char v51; // [sp+20h] [bp-F0h]@52
  unsigned __int8 v52; // [sp+3Ch] [bp-D4h]@2
  __int64 v53; // [sp+40h] [bp-D0h]@2
  int v54; // [sp+48h] [bp-C8h]@2
  unsigned __int8 v55; // [sp+4Ch] [bp-C4h]@2
  __int64 v56; // [sp+50h] [bp-C0h]@2
  int v57; // [sp+58h] [bp-B8h]@2
  unsigned __int8 v58; // [sp+5Ch] [bp-B4h]@2
  __int64 v59; // [sp+60h] [bp-B0h]@2
  int v60; // [sp+68h] [bp-A8h]@2
  unsigned __int8 v61; // [sp+6Ch] [bp-A4h]@2
  __int64 v62; // [sp+70h] [bp-A0h]@2
  int v63; // [sp+78h] [bp-98h]@2
  unsigned __int8 v64; // [sp+7Ch] [bp-94h]@2
  int v65; // [sp+80h] [bp-90h]@2
  int v66; // [sp+84h] [bp-8Ch]@2
  int v67; // [sp+88h] [bp-88h]@2
  unsigned __int8 v68; // [sp+8Ch] [bp-84h]@2
  int v69; // [sp+90h] [bp-80h]@2
  int v70; // [sp+94h] [bp-7Ch]@2
  int v71; // [sp+98h] [bp-78h]@2
  unsigned __int8 v72; // [sp+9Ch] [bp-74h]@1
  float v73; // [sp+A0h] [bp-70h]@1
  __int64 v76; // [sp+ACh] [bp-64h]@1
  int v77; // [sp+B4h] [bp-5Ch]@1

  _R4 = a2;
  _R11 = this;
  v46 = a2;
  LODWORD(v4) = mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  HIDWORD(v4) = mce::Math::floor(*((mce::Math **)_R4 + 1), v5);
  v7 = mce::Math::floor(*((mce::Math **)_R4 + 2), v6);
  v76 = v4;
  v77 = v7;
  Vec3::Vec3((int)&v73, (int)&v76);
  __asm
  {
    VLDR            S20, [R4]
    VLDR            S22, [R4,#4]
    VLDR            S16, [R4,#8]
    VLDR            S26, [SP,#0x110+var_70]
    VLDR            S24, [SP,#0x110+var_6C]
    VLDR            S18, [SP,#0x110+var_68]
  }
  BlockSource::getBlockID((BlockSource *)&v72, *((const BlockPos **)_R11 + 771), (int)&v76);
  result = (const Vec3 *)Block::mPushesOutItems[v72];
  if ( Block::mPushesOutItems[v72] )
    __asm { VSUB.F32        S20, S20, S26 }
    v13 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v69 = v76 - 1;
    v70 = HIDWORD(v76);
    v71 = v77;
    BlockSource::getBlockID((BlockSource *)&v68, v13, (int)&v69);
    v14 = Block::mPushesOutItems[v68];
    v15 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v65 = v76 + 1;
    v66 = HIDWORD(v76);
    v67 = v77;
    BlockSource::getBlockID((BlockSource *)&v64, v15, (int)&v65);
    v16 = Block::mPushesOutItems[v64];
    v17 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v48 = Block::mPushesOutItems[v64];
    v62 = v76 - 0x100000000LL;
    v63 = v77;
    BlockSource::getBlockID((BlockSource *)&v61, v17, (int)&v62);
    v18 = Block::mPushesOutItems[v61];
    v19 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v59 = v76 + 0x100000000LL;
    v60 = v77;
    BlockSource::getBlockID((BlockSource *)&v58, v19, (int)&v59);
    v20 = Block::mPushesOutItems[v58];
    v21 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v56 = v76;
    v57 = v77 - 1;
    BlockSource::getBlockID((BlockSource *)&v55, v21, (int)&v56);
    v22 = Block::mPushesOutItems[v55];
    v47 = Block::mPushesOutItems[v55];
    v23 = (const BlockPos *)*((_DWORD *)_R11 + 771);
    v53 = v76;
    v54 = v77 + 1;
    BlockSource::getBlockID((BlockSource *)&v52, v23, (int)&v53);
    v24 = 0;
    if ( !v14 )
      v24 = 1;
    v25 = 0;
    v26 = 0;
    if ( v16 != 1 )
      v25 = 1;
    v27 = v24 | v25;
    v28 = 0;
    if ( v18 != 1 )
      v28 = 1;
    v29 = v27 | v28;
    v30 = 0;
    if ( v20 != 1 )
      v30 = 1;
    v31 = v29 | v30;
    v32 = 0;
    if ( v22 != 1 )
      v32 = 1;
    v33 = v31 | v32;
    v34 = Block::mPushesOutItems[v52];
    v35 = 0;
    v36 = 1;
    if ( v34 != 1 )
      v35 = 1;
    *((_BYTE *)_R11 + 3376) = ~(v33 | v35) & 1;
    v37 = BlockSource::getBlock(*((BlockSource **)_R11 + 771), (const BlockPos *)&v76);
    if ( !(*(int (**)(void))(*(_DWORD *)v37 + 84))() )
      v36 = (*(int (__fastcall **)(int))(*(_DWORD *)v37 + 88))(v37);
    __asm
    {
      VLDR            S0, =9999.0
      VSUB.F32        S2, S22, S24
      VMOV.F32        S4, S0
      VCMPE.F32       S20, S0
    }
    if ( _ZF )
      __asm { VMOVEQ.F32      S4, S20 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S4 }
    else
      v26 = 1;
    _R0 = v26 | (v14 != 0);
    __asm { SBFX.W          R0, R0, #0, #1 }
    if ( v48 != 1 )
      __asm
      {
        VMOV.F32        S4, #1.0
        VSUB.F32        S4, S4, S20
        VCMPE.F32       S4, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        result = (const Vec3 *)1;
        __asm { VMOVLT.F32      S0, S4 }
    __asm { VCMPE.F32       S2, S0 }
    v39 = 0;
      VMRS            APSR_nzcv, FPSCR
      VSUB.F32        S4, S16, S18
    v40 = 0;
    v41 = 0;
      v39 = 1;
      v40 = 1;
    if ( v39 & v40 & (v36 ^ 1) )
      __asm { VMOVNE.F32      S0, S2 }
      result = (const Vec3 *)2;
      v20 = 0;
    if ( v20 | v36 )
      v42 = v47;
      __asm { VMOV.F32        S6, #1.0 }
        VSUB.F32        S2, S6, S2
        VCMPE.F32       S2, S0
        result = (const Vec3 *)3;
        __asm { VMOVLT.F32      S0, S2 }
    __asm { VCMPE.F32       S4, S0 }
    v43 = 0;
      VMOV.F32        S16, #0.25
      VLDR            S2, =0.1
      v43 = 1;
    if ( v42 != 1 )
      v41 = 1;
    v44 = v41 & v43;
    if ( v44 )
      __asm { VMOVNE.F32      S0, S4 }
    if ( v36 )
      __asm { VMOVNE.F32      S16, S2 }
    if ( v34 == 1 )
      goto LABEL_62;
      VMOV.F32        S2, #1.0
      VSUB.F32        S2, S2, S4
      VCMPE.F32       S2, S0
LABEL_50:
      __asm { VSTR            S16, [R11,#0x74]; jumptable 016F014E case 5 }
LABEL_62:
      if ( v44 )
        result = (const Vec3 *)4;
      switch ( result )
        case 0u:
          __asm
          {
            VNEG.F32        S0, S16 ; jumptable 016F014E case 0
            VSTR            S0, [R11,#0x6C]
          }
          break;
        case 5u:
          goto LABEL_50;
        case 3u:
          AABB::AABB((AABB *)&v51);
          v45 = *((_DWORD *)_R11 + 771);
          result = (const Vec3 *)(*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v72] + 12))(Block::mBlocks[v72]);
          if ( result == (const Vec3 *)1 )
            __asm
            {
              VLDR            S0, [SP,#0x110+var_64+4]
              VCVT.F32.S32    S18, S0
              VLDR            S20, [R11,#0x13C]
            }
            AABB::getBounds((AABB *)&v49, (int)&v51);
              VADD.F32        S0, S18, S20
              VLDR            S2, [SP,#0x110+var_F8]
            result = v46;
              VADD.F32        S0, S0, S2
              VLDR            S2, [R0,#4]
              VSUB.F32        S0, S0, S2
              VLDR            S2, =0.0
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S2, S0 }
            __asm { VMUL.F32        S16, S2, S16 }
          __asm { VSTR            S16, [R11,#0x70] }
        case 1u:
          __asm { VSTR            S16, [R11,#0x6C]; jumptable 016F014E case 1 }
        case 2u:
            VNEG.F32        S0, S16 ; jumptable 016F014E case 2
            VSTR            S0, [R11,#0x70]
        case 4u:
            VNEG.F32        S0, S16 ; jumptable 016F014E case 4
            VSTR            S0, [R11,#0x74]
        default:
          return result;
  return result;
}


  if ( v3 && (v4 = Entity::getNpcComponent(v3)) != 0 )
{
  else
    result = sub_15901A4((int *)v2, (int *)&Util::EMPTY_STRING);
  return result;
}


int __fastcall Entity::rideTick(Entity *this)
{
  int result; // r0@2
  int v3; // r1@3
  int v4; // r5@4 OVERLAPPED
  int v5; // r6@4 OVERLAPPED
  int v6; // r0@5
  _QWORD *v7; // r7@5
  float v14; // r1@13
  __int64 v15; // [sp+0h] [bp-30h]@5
  char v16; // [sp+8h] [bp-28h]@4
  char v17; // [sp+10h] [bp-20h]@6

  _R4 = this;
  if ( *(_BYTE *)(*((_DWORD *)this + 128) + 3097) )
    return (*(int (__fastcall **)(Entity *, signed int, _DWORD))(*(_DWORD *)this + 596))(this, 1, 0);
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)this + 124))(this);
  v3 = *((_DWORD *)_R4 + 128);
  if ( v3 )
  {
    (*(void (__fastcall **)(char *))(*(_DWORD *)v3 + 540))(&v16);
    *(_QWORD *)&v4 = *(_QWORD *)&v16;
    if ( Level::getPrimaryLocalPlayer(*((Level **)_R4 + 773)) )
    {
      (*(void (__fastcall **)(__int64 *))(**((_DWORD **)_R4 + 128) + 540))(&v15);
      v6 = Level::getPrimaryLocalPlayer(*((Level **)_R4 + 773));
      v7 = (_QWORD *)(v6 + 56);
      if ( (*(_DWORD *)(v6 + 60) & *(_DWORD *)(v6 + 56)) == -1 )
      {
        Level::getNewUniqueID((Level *)&v17, *(_DWORD *)(v6 + 3092));
        *v7 = *(_QWORD *)&v17;
      }
      if ( (v4 & v5) != -1 && !(*v7 ^ v15) )
        goto LABEL_13;
    }
    else if ( (v4 & v5) != -1 )
LABEL_13:
      _R1 = *((float *)_R4 + 128);
      __asm
        VLDR            S0, [R1,#0x7C]
        VLDR            S2, [R1,#0x84]
        VSUB.F32        S0, S0, S2
        VLDR            S2, [R4,#0x8C]
        VADD.F32        S0, S0, S2
        VMOV            R0, S0
        VSTR            S0, [R4,#0x8C]
        VLDR            S0, [R1,#0x78]
        VLDR            S2, [R1,#0x80]
        VLDR            S2, [R4,#0x88]
        VSTR            S0, [R4,#0x88]
      *((_DWORD *)_R4 + 35) = mce::Math::wrapDegrees(_R0, _R1);
      result = mce::Math::wrapDegrees(*((mce::Math **)_R4 + 34), v14);
        VMOV.F32        S0, #0.5
        VMOV.F32        S6, #10.0
        VMOV            S4, R0
        VMOV.F32        S10, #-10.0
        VMUL.F32        S8, S2, S0
        VMUL.F32        S0, S4, S0
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S6
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S8, S6 }
        VCMPE.F32       S8, S10
        __asm { VMOVGT.F32      S0, S6 }
        VCMPE.F32       S0, S10
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S8, S10 }
        VSUB.F32        S2, S2, S8
        __asm { VMOVLT.F32      S0, S10 }
        VSUB.F32        S0, S4, S0
        VSTR            S2, [R4,#0x8C]
      return result;
    if ( !(*((_BYTE *)_R4 + 172) & 1) )
      (*(void (**)(void))(**((_DWORD **)_R4 + 128) + 136))();
    goto LABEL_13;
  }
  return result;
}


void __fastcall Entity::createBehaviorComponent(Entity *this)
{
  Entity *v1; // r4@1
  BehaviorComponent *v2; // r5@2
  int v3; // r1@2

  v1 = this;
  if ( !*((_DWORD *)this + 779) )
  {
    v2 = (BehaviorComponent *)operator new(0x38u);
    BehaviorComponent::BehaviorComponent(v2, v1);
    v3 = *((_DWORD *)v1 + 779);
    *((_DWORD *)v1 + 779) = v2;
    if ( v3 )
      j_j_j__ZNKSt14default_deleteI17BehaviorComponentEclEPS0_((int)v1 + 3116, v3);
  }
}


void __fastcall Entity::getDebugText(float a1, int a2)
{
  float v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r1@1
  __int64 v7; // kr00_8@1
  char *v8; // r1@2
  char *v9; // r0@4
  void *v10; // r0@5
  const void **v11; // r0@6
  void *v12; // r1@6
  __int64 v13; // kr08_8@6
  char *v14; // r1@7
  char *v15; // r0@9
  void *v16; // r0@10
  __int64 v17; // r0@11
  int v18; // r1@12
  void *v19; // r0@14
  SynchedEntityData *v20; // r5@15
  int v21; // r0@15
  const void **v22; // r0@15
  void *v23; // r1@15
  __int64 v24; // kr10_8@15
  char *v25; // r1@16
  char *v26; // r0@18
  void *v27; // r0@19
  int v28; // r0@20
  const void **v29; // r0@20
  void *v30; // r1@20
  __int64 v31; // kr18_8@20
  char *v32; // r1@21
  char *v33; // r0@23
  void *v34; // r0@24
  signed int v35; // r6@25
  int v36; // r0@26
  __int64 v37; // r0@27
  unsigned int v38; // r3@27
  __int64 v39; // r0@31
  int v40; // r1@32
  __int64 v41; // r0@33
  int v42; // r1@34
  __int64 v43; // r0@35
  int v44; // r1@36
  __int64 v45; // r0@37
  int v46; // r1@38
  __int64 v47; // r0@39
  int v48; // r1@40
  __int64 v49; // r0@41
  int v50; // r1@42
  __int64 v51; // r0@43
  int v52; // r1@44
  __int64 v53; // r0@45
  int v54; // r1@46
  __int64 v55; // r0@47
  int v56; // r1@48
  __int64 v57; // r0@49
  int v58; // r1@50
  __int64 v59; // r0@51
  int v60; // r1@52
  __int64 v61; // r0@53
  int v62; // r1@54
  __int64 v63; // r0@55
  int v64; // r1@56
  __int64 v65; // r0@57
  int v66; // r1@58
  __int64 v67; // r0@59
  int v68; // r1@60
  __int64 v69; // r0@61
  int v70; // r1@62
  __int64 v71; // r0@63
  int v72; // r1@64
  __int64 v73; // r0@65
  int v74; // r1@66
  __int64 v75; // r0@67
  int v76; // r1@68
  __int64 v77; // r0@69
  int v78; // r1@70
  __int64 v79; // r0@71
  int v80; // r1@72
  __int64 v81; // r0@73
  int v82; // r1@74
  __int64 v83; // r0@75
  int v84; // r1@76
  __int64 v85; // r0@77
  int v86; // r1@78
  __int64 v87; // r0@79
  int v88; // r1@80
  __int64 v89; // r0@81
  int v90; // r1@82
  __int64 v91; // r0@83
  int v92; // r1@84
  __int64 v93; // r0@85
  int v94; // r1@86
  __int64 v95; // r0@87
  int v96; // r1@88
  __int64 v97; // r0@89
  int v98; // r1@90
  __int64 v99; // r0@91
  int v100; // r1@92
  __int64 v101; // r0@93
  int v102; // r1@94
  __int64 v103; // r0@95
  int v104; // r1@96
  void *v105; // r0@98
  unsigned int *v106; // r2@99
  signed int v107; // r1@101
  unsigned int *v108; // r2@300
  signed int v109; // r1@302
  unsigned int *v110; // r2@304
  signed int v111; // r1@306
  unsigned int *v112; // r2@308
  signed int v113; // r1@310
  unsigned int *v114; // r2@312
  signed int v115; // r1@314
  unsigned int *v116; // r2@316
  signed int v117; // r1@318
  unsigned int *v118; // r2@320
  signed int v119; // r1@322
  unsigned int *v120; // r2@324
  signed int v121; // r1@326
  unsigned int *v122; // r2@328
  signed int v123; // r1@330
  unsigned int *v124; // r2@332
  signed int v125; // r1@334
  void *v126; // [sp+4h] [bp-154h]@95
  void *v127; // [sp+Ch] [bp-14Ch]@77
  void *v128; // [sp+14h] [bp-144h]@75
  void *v129; // [sp+1Ch] [bp-13Ch]@73
  void *v130; // [sp+24h] [bp-134h]@71
  void *v131; // [sp+2Ch] [bp-12Ch]@93
  void *v132; // [sp+34h] [bp-124h]@91
  void *v133; // [sp+3Ch] [bp-11Ch]@69
  void *v134; // [sp+44h] [bp-114h]@67
  void *v135; // [sp+4Ch] [bp-10Ch]@65
  void *v136; // [sp+54h] [bp-104h]@63
  void *v137; // [sp+5Ch] [bp-FCh]@35
  void *v138; // [sp+64h] [bp-F4h]@89
  void *v139; // [sp+6Ch] [bp-ECh]@61
  void *v140; // [sp+74h] [bp-E4h]@33
  void *v141; // [sp+7Ch] [bp-DCh]@87
  void *v142; // [sp+84h] [bp-D4h]@85
  void *v143; // [sp+8Ch] [bp-CCh]@59
  void *v144; // [sp+94h] [bp-C4h]@57
  void *v145; // [sp+9Ch] [bp-BCh]@83
  void *v146; // [sp+A4h] [bp-B4h]@55
  void *v147; // [sp+ACh] [bp-ACh]@53
  void *v148; // [sp+B4h] [bp-A4h]@81
  void *v149; // [sp+BCh] [bp-9Ch]@51
  void *v150; // [sp+C4h] [bp-94h]@49
  void *v151; // [sp+CCh] [bp-8Ch]@47
  void *v152; // [sp+D4h] [bp-84h]@45
  void *v153; // [sp+DCh] [bp-7Ch]@79
  void *v154; // [sp+E4h] [bp-74h]@43
  void *v155; // [sp+ECh] [bp-6Ch]@41
  void *v156; // [sp+F4h] [bp-64h]@39
  void *v157; // [sp+FCh] [bp-5Ch]@37
  void *v158; // [sp+104h] [bp-54h]@31
  int v159; // [sp+108h] [bp-50h]@20
  char *v160; // [sp+10Ch] [bp-4Ch]@20
  int v161; // [sp+110h] [bp-48h]@15
  char *v162; // [sp+114h] [bp-44h]@15
  void *v163; // [sp+11Ch] [bp-3Ch]@11
  char v164; // [sp+120h] [bp-38h]@6
  int v165; // [sp+12Ch] [bp-2Ch]@6
  char *v166; // [sp+130h] [bp-28h]@6
  int v167; // [sp+134h] [bp-24h]@1
  char *v168; // [sp+138h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)LODWORD(a1) + 488))();
  EntityTypeToString((void **)&v167, v4, 0);
  v5 = sub_21E82D8((const void **)&v167, 0, (unsigned int)"Entity type: ", (_BYTE *)0xD);
  v6 = (void *)*v5;
  v168 = (char *)*v5;
  *v5 = &unk_28898CC;
  v7 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)v3,
      &v168);
    v8 = v168;
  }
  else
    *(_DWORD *)v7 = v6;
    v8 = (char *)&unk_28898CC;
    v168 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v7 + 4;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
    }
    else
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v167 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Entity::_getBlockOnPos((Entity *)&v164, v2);
  BlockPos::toString((BlockPos *)&v165, (int)&v164);
  v11 = sub_21E82D8((const void **)&v165, 0, (unsigned int)"Position: ", (_BYTE *)0xA);
  v12 = (void *)*v11;
  v166 = (char *)*v11;
  *v11 = &unk_28898CC;
  v13 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v13 == HIDWORD(v13) )
      &v166);
    v14 = v166;
    *(_DWORD *)v13 = v12;
    v14 = (char *)&unk_28898CC;
    v166 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v13 + 4;
  v15 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v14 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v165 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4(&v163, "Synchronized Entity Data:");
  v17 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v17 == HIDWORD(v17) )
      &v163);
    v18 = (int)v163;
    *(_DWORD *)v17 = v163;
    HIDWORD(v17) = &unk_28898CC;
    v163 = &unk_28898CC;
    *(_DWORD *)(v3 + 4) = v17 + 4;
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v18 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (SynchedEntityData *)(LODWORD(v2) + 176);
  v21 = SynchedEntityData::getFloat(v20, 39);
  Util::toString((Util *)&v161, *(float *)&v21);
  v22 = sub_21E82D8((const void **)&v161, 0, (unsigned int)"Scale: ", (_BYTE *)7);
  v23 = (void *)*v22;
  v162 = (char *)*v22;
  *v22 = &unk_28898CC;
  v24 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v24 == HIDWORD(v24) )
      &v162);
    v25 = v162;
    *(_DWORD *)v24 = v23;
    v25 = (char *)&unk_28898CC;
    v162 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v24 + 4;
  v26 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v25 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v161 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = SynchedEntityData::getInt(v20, 2);
  Util::toString<int,(void *)0,(void *)0>((void **)&v159, v28);
  v29 = sub_21E82D8((const void **)&v159, 0, (unsigned int)"Variant: ", (_BYTE *)9);
  v30 = (void *)*v29;
  v160 = (char *)*v29;
  *v29 = &unk_28898CC;
  v31 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v31 == HIDWORD(v31) )
      &v160);
    v32 = v160;
    *(_DWORD *)v31 = v30;
    v32 = (char *)&unk_28898CC;
    v160 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v31 + 4;
  v33 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v32 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v159 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = 0;
  do
    v36 = SynchedEntityData::_find(v20, 0);
    if ( v36 )
      v37 = *(_QWORD *)(v36 + 16);
      v38 = 1u >> (32 - v35);
      if ( v35 - 32 >= 0 )
        v38 = 1 << (v35 - 32);
      if ( (unsigned int)v37 & (1 << v35) | HIDWORD(v37) & v38 )
      {
        switch ( v35 )
        {
          case 0:
            sub_21E94B4(&v158, "+ONFIRE");
            v39 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v39 == HIDWORD(v39) )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)v3,
                &v158);
              v40 = (int)v158;
            }
            else
              *(_DWORD *)v39 = v158;
              HIDWORD(v39) = &unk_28898CC;
              v158 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v39 + 4;
            v105 = (void *)(v40 - 12);
            if ( (int *)(v40 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v40 - 4);
              if ( !&pthread_create )
                goto LABEL_295;
              __dmb();
              do
                v107 = __ldrex(v106);
              while ( __strex(v107 - 1, v106) );
              goto LABEL_296;
            break;
          case 22:
            sub_21E94B4(&v140, "+RESTING");
            v41 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v41 == HIDWORD(v41) )
                &v140);
              v42 = (int)v140;
              *(_DWORD *)v41 = v140;
              HIDWORD(v41) = &unk_28898CC;
              v140 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v41 + 4;
            v105 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v42 - 4);
          case 25:
            sub_21E94B4(&v137, "+INTERESTED");
            v43 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v43 == HIDWORD(v43) )
                &v137);
              v44 = (int)v137;
              *(_DWORD *)v43 = v137;
              HIDWORD(v43) = &unk_28898CC;
              v137 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v43 + 4;
            v105 = (void *)(v44 - 12);
            if ( (int *)(v44 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v44 - 4);
          case 1:
            sub_21E94B4(&v157, "+SNEAKING");
            v45 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v45 == HIDWORD(v45) )
                &v157);
              v46 = (int)v157;
              *(_DWORD *)v45 = v157;
              HIDWORD(v45) = &unk_28898CC;
              v157 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v45 + 4;
            v105 = (void *)(v46 - 12);
            if ( (int *)(v46 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v46 - 4);
          case 2:
            sub_21E94B4(&v156, "+RIDING");
            v47 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v47 == HIDWORD(v47) )
                &v156);
              v48 = (int)v156;
              *(_DWORD *)v47 = v156;
              HIDWORD(v47) = &unk_28898CC;
              v156 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v47 + 4;
            v105 = (void *)(v48 - 12);
            if ( (int *)(v48 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v48 - 4);
          case 3:
            sub_21E94B4(&v155, "+SPRINTING");
            v49 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v49 == HIDWORD(v49) )
                &v155);
              v50 = (int)v155;
              *(_DWORD *)v49 = v155;
              HIDWORD(v49) = &unk_28898CC;
              v155 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v49 + 4;
            v105 = (void *)(v50 - 12);
            if ( (int *)(v50 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v50 - 4);
          case 4:
            sub_21E94B4(&v154, "+USINGITEM");
            v51 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v51 == HIDWORD(v51) )
                &v154);
              v52 = (int)v154;
              *(_DWORD *)v51 = v154;
              HIDWORD(v51) = &unk_28898CC;
              v154 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v51 + 4;
            v105 = (void *)(v52 - 12);
            if ( (int *)(v52 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v52 - 4);
          case 6:
            sub_21E94B4(&v152, "+TEMPTED");
            v53 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v53 == HIDWORD(v53) )
                &v152);
              v54 = (int)v152;
              *(_DWORD *)v53 = v152;
              HIDWORD(v53) = &unk_28898CC;
              v152 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v53 + 4;
            v105 = (void *)(v54 - 12);
            if ( (int *)(v54 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v54 - 4);
          case 7:
            sub_21E94B4(&v151, "+INLOVE");
            v55 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v55 == HIDWORD(v55) )
                &v151);
              v56 = (int)v151;
              *(_DWORD *)v55 = v151;
              HIDWORD(v55) = &unk_28898CC;
              v151 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v55 + 4;
            v105 = (void *)(v56 - 12);
            if ( (int *)(v56 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v56 - 4);
          case 8:
            sub_21E94B4(&v150, "+SADDLED");
            v57 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v57 == HIDWORD(v57) )
                &v150);
              v58 = (int)v150;
              *(_DWORD *)v57 = v150;
              HIDWORD(v57) = &unk_28898CC;
              v150 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v57 + 4;
            v105 = (void *)(v58 - 12);
            if ( (int *)(v58 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v58 - 4);
          case 9:
            sub_21E94B4(&v149, "+POWERED");
            v59 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v59 == HIDWORD(v59) )
                &v149);
              v60 = (int)v149;
              *(_DWORD *)v59 = v149;
              HIDWORD(v59) = &unk_28898CC;
              v149 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v59 + 4;
            v105 = (void *)(v60 - 12);
            if ( (int *)(v60 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v60 - 4);
          case 11:
            sub_21E94B4(&v147, "+BABY");
            v61 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v61 == HIDWORD(v61) )
                &v147);
              v62 = (int)v147;
              *(_DWORD *)v61 = v147;
              HIDWORD(v61) = &unk_28898CC;
              v147 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v61 + 4;
            v105 = (void *)(v62 - 12);
            if ( (int *)(v62 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v62 - 4);
          case 12:
            sub_21E94B4(&v146, "+CONVERTING");
            v63 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v63 == HIDWORD(v63) )
                &v146);
              v64 = (int)v146;
              *(_DWORD *)v63 = v146;
              HIDWORD(v63) = &unk_28898CC;
              v146 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v63 + 4;
            v105 = (void *)(v64 - 12);
            if ( (int *)(v64 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v64 - 4);
          case 14:
            sub_21E94B4(&v144, "+SHOWNAME");
            v65 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v65 == HIDWORD(v65) )
                &v144);
              v66 = (int)v144;
              *(_DWORD *)v65 = v144;
              HIDWORD(v65) = &unk_28898CC;
              v144 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v65 + 4;
            v105 = (void *)(v66 - 12);
            if ( (int *)(v66 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v66 - 4);
          case 16:
            sub_21E94B4(&v143, "+NOAI");
            v67 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v67 == HIDWORD(v67) )
                &v143);
              v68 = (int)v143;
              *(_DWORD *)v67 = v143;
              HIDWORD(v67) = &unk_28898CC;
              v143 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v67 + 4;
            v105 = (void *)(v68 - 12);
            if ( (int *)(v68 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v68 - 4);
          case 23:
            sub_21E94B4(&v139, "+SITTING");
            v69 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v69 == HIDWORD(v69) )
                &v139);
              v70 = (int)v139;
              *(_DWORD *)v69 = v139;
              HIDWORD(v69) = &unk_28898CC;
              v139 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v69 + 4;
            v105 = (void *)(v70 - 12);
            if ( (int *)(v70 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v70 - 4);
          case 26:
            sub_21E94B4(&v136, "+CHARGED");
            v71 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v71 == HIDWORD(v71) )
                &v136);
              v72 = (int)v136;
              *(_DWORD *)v71 = v136;
              HIDWORD(v71) = &unk_28898CC;
              v136 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v71 + 4;
            v105 = (void *)(v72 - 12);
            if ( (int *)(v72 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v72 - 4);
          case 27:
            sub_21E94B4(&v135, "+TAMED");
            v73 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v73 == HIDWORD(v73) )
                &v135);
              v74 = (int)v135;
              *(_DWORD *)v73 = v135;
              HIDWORD(v73) = &unk_28898CC;
              v135 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v73 + 4;
            v105 = (void *)(v74 - 12);
            if ( (int *)(v74 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v74 - 4);
          case 28:
            sub_21E94B4(&v134, "+LEASHED");
            v75 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v75 == HIDWORD(v75) )
                &v134);
              v76 = (int)v134;
              *(_DWORD *)v75 = v134;
              HIDWORD(v75) = &unk_28898CC;
              v134 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v75 + 4;
            v105 = (void *)(v76 - 12);
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v76 - 4);
          case 29:
            sub_21E94B4(&v133, "+SHEARED");
            v77 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v77 == HIDWORD(v77) )
                &v133);
              v78 = (int)v133;
              *(_DWORD *)v77 = v133;
              HIDWORD(v77) = &unk_28898CC;
              v133 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v77 + 4;
            v105 = (void *)(v78 - 12);
            if ( (int *)(v78 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v78 - 4);
          case 32:
            sub_21E94B4(&v130, "+MOVING");
            v79 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v79 == HIDWORD(v79) )
                &v130);
              v80 = (int)v130;
              *(_DWORD *)v79 = v130;
              HIDWORD(v79) = &unk_28898CC;
              v130 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v79 + 4;
            v105 = (void *)(v80 - 12);
            if ( (int *)(v80 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v80 - 4);
          case 33:
            sub_21E94B4(&v129, "+BREATHING");
            v81 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v81 == HIDWORD(v81) )
                &v129);
              v82 = (int)v129;
              *(_DWORD *)v81 = v129;
              HIDWORD(v81) = &unk_28898CC;
              v129 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v81 + 4;
            v105 = (void *)(v82 - 12);
            if ( (int *)(v82 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v82 - 4);
          case 34:
            sub_21E94B4(&v128, "+CHESTED");
            v83 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v83 == HIDWORD(v83) )
                &v128);
              v84 = (int)v128;
              *(_DWORD *)v83 = v128;
              HIDWORD(v83) = &unk_28898CC;
              v128 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v83 + 4;
            v105 = (void *)(v84 - 12);
            if ( (int *)(v84 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v84 - 4);
          case 35:
            sub_21E94B4(&v127, "+STACKABLE");
            v85 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v85 == HIDWORD(v85) )
                &v127);
              v86 = (int)v127;
              *(_DWORD *)v85 = v127;
              HIDWORD(v85) = &unk_28898CC;
              v127 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v85 + 4;
            v105 = (void *)(v86 - 12);
            if ( (int *)(v86 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v86 - 4);
          case 5:
            sub_21E94B4(&v153, "+INVISIBLE");
            v87 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v87 == HIDWORD(v87) )
                &v153);
              v88 = (int)v153;
              *(_DWORD *)v87 = v153;
              HIDWORD(v87) = &unk_28898CC;
              v153 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v87 + 4;
            v105 = (void *)(v88 - 12);
            if ( (int *)(v88 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v88 - 4);
          case 10:
            sub_21E94B4(&v148, "+IGNITED");
            v89 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v89 == HIDWORD(v89) )
                &v148);
              v90 = (int)v148;
              *(_DWORD *)v89 = v148;
              HIDWORD(v89) = &unk_28898CC;
              v148 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v89 + 4;
            v105 = (void *)(v90 - 12);
            if ( (int *)(v90 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v90 - 4);
          case 13:
            sub_21E94B4(&v145, "+CRITICAL");
            v91 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v91 == HIDWORD(v91) )
                &v145);
              v92 = (int)v145;
              *(_DWORD *)v91 = v145;
              HIDWORD(v91) = &unk_28898CC;
              v145 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v91 + 4;
            v105 = (void *)(v92 - 12);
            if ( (int *)(v92 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v92 - 4);
          case 17:
            sub_21E94B4(&v142, "+SILENT");
            v93 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v93 == HIDWORD(v93) )
                &v142);
              v94 = (int)v142;
              *(_DWORD *)v93 = v142;
              HIDWORD(v93) = &unk_28898CC;
              v142 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v93 + 4;
            v105 = (void *)(v94 - 12);
            if ( (int *)(v94 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v94 - 4);
          case 18:
            sub_21E94B4(&v141, "+WALLCLIMBING");
            v95 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v95 == HIDWORD(v95) )
                &v141);
              v96 = (int)v141;
              *(_DWORD *)v95 = v141;
              HIDWORD(v95) = &unk_28898CC;
              v141 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v95 + 4;
            v105 = (void *)(v96 - 12);
            if ( (int *)(v96 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v96 - 4);
          case 24:
            sub_21E94B4(&v138, "+ANGRY");
            v97 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v97 == HIDWORD(v97) )
                &v138);
              v98 = (int)v138;
              *(_DWORD *)v97 = v138;
              HIDWORD(v97) = &unk_28898CC;
              v138 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v97 + 4;
            v105 = (void *)(v98 - 12);
            if ( (int *)(v98 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v98 - 4);
          case 30:
            sub_21E94B4(&v132, "+GLIDING");
            v99 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v99 == HIDWORD(v99) )
                &v132);
              v100 = (int)v132;
              *(_DWORD *)v99 = v132;
              HIDWORD(v99) = &unk_28898CC;
              v132 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v99 + 4;
            v105 = (void *)(v100 - 12);
            if ( (int *)(v100 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v100 - 4);
          case 31:
            sub_21E94B4(&v131, "+ELDER");
            v101 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v101 == HIDWORD(v101) )
                &v131);
              v102 = (int)v131;
              *(_DWORD *)v101 = v131;
              HIDWORD(v101) = &unk_28898CC;
              v131 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v101 + 4;
            v105 = (void *)(v102 - 12);
            if ( (int *)(v102 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v102 - 4);
          case 39:
            sub_21E94B4(&v126, "+IDLING");
            v103 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v103 == HIDWORD(v103) )
                &v126);
              v104 = (int)v126;
              *(_DWORD *)v103 = v126;
              HIDWORD(v103) = &unk_28898CC;
              v126 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v103 + 4;
            v105 = (void *)(v104 - 12);
            if ( (int *)(v104 - 12) != &dword_28898C0 )
              v106 = (unsigned int *)(v104 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v107 = __ldrex(v106);
                while ( __strex(v107 - 1, v106) );
              }
              else
LABEL_295:
                v107 = (*v106)--;
LABEL_296:
              if ( v107 <= 0 )
                j_j_j_j__ZdlPv_9(v105);
          default:
        }
      }
    ++v35;
  while ( v35 < 49 );
}


  if ( Entity::isRegionValid(**((Entity ***)v1 + 1)) )
{
    v6 = (Dimension *)Entity::getDimension(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 524))(v5);
    if ( v7 == 3 )
      v7 = 0;
    v6 = (Dimension *)Level::createDimension(*(_DWORD *)(v2 + 28), v7);
  v8 = **((_DWORD **)v1 + 1);
  v9 = *(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 1196);
  v10 = Dimension::getChunkSource(v6);
  v9(v8, v10);
  result = **((_DWORD **)v1 + 2);
  if ( result )
    Entity::reload(**((Entity ***)v1 + 1));
    v12 = *(__int64 *)((char *)v1 + 4);
    HIDWORD(v12) = *(_DWORD *)HIDWORD(v12);
    result = (*(int (**)(void))(**(_DWORD **)v12 + 480))();
  return result;
}


unsigned int __fastcall Entity::getViewVector2(Entity *this, float a2, float a3, float a4)
{
  Entity *v4; // r4@1
  unsigned int v12; // r6@1
  float v13; // r1@1
  unsigned int result; // r0@1
  int v15; // [sp+0h] [bp-18h]@1

  v4 = this;
  Entity::getInterpolatedRotation((Entity *)&v15, a2, a3, a4);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VLDR            S4, [SP,#0x18+var_14]
  }
  _R0 = &mce::Math::PI;
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R0]
    VLDR            S6, [R1]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S6, S4
    VADD.F32        S0, S2, S0
    VMOV            R5, S0
  v12 = mce::Math::cos(_R5, COERCE_FLOAT(&mce::Math::DEGRAD)) ^ 0x80000000;
  result = mce::Math::sin(_R5, v13) ^ 0x80000000;
  *(_DWORD *)v4 = v12;
  *((_DWORD *)v4 + 1) = result;
  return result;
}


int __fastcall Entity::canOpenContainer(Entity *this, Player *a2)
{
  ContainerComponent *v2; // r0@1
  int result; // r0@2

  v2 = (ContainerComponent *)*((_DWORD *)this + 782);
  if ( v2 )
    result = ContainerComponent::canOpenContainer(v2, a2);
  else
    result = 0;
  return result;
}


int __fastcall Entity::getBrightness(Entity *this, float _R1)
{
  BlockSource *v7; // r4@1
  float v9; // [sp+4h] [bp-4Ch]@1
  char v10; // [sp+10h] [bp-40h]@1
  char v11; // [sp+1Ch] [bp-34h]@1

  _R5 = this;
  __asm
  {
    VMOV            S18, R1
    VLDR            S0, [R5,#0x50]
    VLDR            S6, [R5,#0x68]
    VLDR            S2, [R5,#0x48]
    VLDR            S4, [R5,#0x60]
    VSUB.F32        S0, S0, S6
  }
  v7 = (BlockSource *)*((_DWORD *)this + 771);
    VSUB.F32        S2, S2, S4
    VLDR            S16, [R5,#0x4C]
    VLDR            S20, [R5,#0x64]
    VMUL.F32        S0, S0, S18
    VMUL.F32        S2, S2, S18
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S4
    VSTR            S2, [SP,#0x50+var_4C]
    VSTR            S0, [SP,#0x50+var_44]
  AABB::getBounds((AABB *)&v11, (int)this + 264);
    VSUB.F32        S0, S16, S20
    VLDR            S6, [R5,#0x13C]
    VLDR            S2, =0.66
    VLDR            S4, [SP,#0x50+var_30]
    VMUL.F32        S2, S4, S2
    VADD.F32        S0, S0, S20
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x50+var_48]
  BlockPos::BlockPos((int)&v10, (int)&v9);
  return BlockSource::getBrightness(v7, (const BlockPos *)&v10);
}


char *__fastcall Entity::flagRiderToRemove(Entity *this, Entity *a2)
{
  Entity *v2; // r4@1
  Entity *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 492);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 122);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 61) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 61);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 61) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 124) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 123) + 4);
    *((_DWORD *)v2 + 123) = result;
  return result;
}


      if ( v5 && Entity::getNpcComponent(v5) )
{
        v6 = (Entity *)ClientInstanceScreenModel::getEntity(*(_DWORD *)(v3 + 424), (unsigned __int64 *)(v3 + 440));
        if ( v6 )
          v7 = (NpcComponent *)Entity::getNpcComponent(v6);
        else
          v7 = 0;
        v9 = (int *)NpcComponent::getName(v7);
        result = sub_15901A4((int *)v2, v9);
      }
      else
      {
        result = sub_1590164(v2, (const char *)&unk_257BC67);
    }
    else
    {
      result = sub_1590164(v2, (const char *)&unk_257BC67);
  }
  else
  {
    result = sub_1590164(v2, "npcscreen.basictitle");
  return result;
}


unsigned int __fastcall Entity::isInLove(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (unsigned int)*(_BYTE *)(v2 + 16) >> 7;
  return v1;
}


signed int __fastcall Entity::_countFood(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r0@1
  int v6; // r8@3
  int v7; // r5@3
  int v8; // r9@3
  int v9; // r0@4
  int v10; // r6@4
  int v11; // r0@4
  bool v12; // zf@4
  int v13; // r0@8
  int v14; // r1@9
  int v15; // r0@18
  int v16; // r6@18
  int v17; // r0@18
  bool v18; // zf@18
  int v19; // r0@22
  int v20; // r1@23
  signed int result; // r0@32
  int v22; // [sp+4h] [bp-2Ch]@17

  v2 = this;
  v3 = a2;
  v4 = SynchedEntityData::getInt((Entity *)((char *)this + 176), 2);
  v5 = *((_DWORD *)v2 + 782);
  if ( v5 && (*(int (**)(void))(**(_DWORD **)(v5 + 4) + 44))() >= 1 )
  {
    v6 = 3 * v3;
    v7 = 0;
    v8 = 12 * v3;
    if ( v4 )
    {
      while ( 1 )
      {
        v9 = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v2 + 782) + 4) + 16))();
        v10 = v9;
        v11 = *(_BYTE *)(v9 + 15);
        v12 = v11 == 0;
        if ( v11 )
          v12 = *(_DWORD *)v10 == 0;
        if ( !v12 && !ItemInstance::isNull((ItemInstance *)v10) )
        {
          v13 = *(_BYTE *)(v10 + 14);
          if ( *(_BYTE *)(v10 + 14) )
          {
            v14 = *(_DWORD *)v10;
            if ( *(_DWORD *)v10 == Item::mBread && v13 >= v6 )
              break;
            if ( v14 == Item::mPotato && v13 >= v8 || v14 == Item::mCarrot && v13 >= v8 )
          }
        }
        if ( ++v7 >= (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v2 + 782) + 4) + 44))() )
          goto LABEL_32;
      }
    }
    else
      v22 = 9 * v3;
        v15 = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v2 + 782) + 4) + 16))();
        v16 = v15;
        v17 = *(_BYTE *)(v15 + 15);
        v18 = v17 == 0;
        if ( v17 )
          v18 = *(_DWORD *)v16 == 0;
        if ( !v18 && !ItemInstance::isNull((ItemInstance *)v16) )
          v19 = *(_BYTE *)(v16 + 14);
          if ( *(_BYTE *)(v16 + 14) )
            v20 = *(_DWORD *)v16;
            if ( *(_DWORD *)v16 == Item::mBread && v19 >= v6 )
            if ( v20 == Item::mPotato && v19 >= v8
              || v20 == Item::mCarrot && v19 >= v8
              || v20 == Item::mWheat && v19 >= v22 )
            {
            }
    result = 1;
  }
  else
LABEL_32:
    result = 0;
  return result;
}


int *__fastcall Entity::getFormattedNameTag(Entity *this, int a2)
{
  int v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = (int *)this;
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 188))(a2);
  return sub_21E8AF4(v3, (int *)(v2 + 3372));
}


int __fastcall Entity::setChainedDamageEffects(int result, bool a2)
{
  *(_BYTE *)(result + 3402) = a2;
  return result;
}


_BOOL4 __fastcall Entity::isRegionValid(Entity *this)
{
  return *((_DWORD *)this + 771) != 0;
}


int __fastcall Entity::_setLevelPtr(int result, Level *a2)
{
  *(_DWORD *)(result + 3092) = a2;
  return result;
}


unsigned int __fastcall Entity::isSwimmer(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 18) & 0x10u) >> 4;
  return v1;
}


void __fastcall Entity::getCenter(Entity *this, float a2, int _R2)
{
  Entity::getCenter(this, a2, _R2);
}


int __fastcall Entity::Entity(int a1, BlockSource *a2, int **a3)
{
  int v3; // r8@1
  BlockSource *v4; // r11@1
  int **v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r5@3
  Level *v10; // r0@4
  int v11; // r12@4
  int v12; // r2@4
  int v13; // r3@4
  int v14; // r12@4
  int v15; // r2@4
  int v16; // r3@4
  int v17; // r12@4
  int v18; // r2@4
  int v19; // r3@4
  int v20; // r12@4
  int v21; // r2@4
  int v22; // r3@4
  int v23; // r3@4
  __int64 v24; // r1@4
  __int64 v25; // r2@4
  int v26; // r5@4
  int v27; // r12@4
  int v28; // r1@4
  int v29; // r3@4
  int v30; // r7@4
  int v31; // r12@4
  int v32; // r3@4
  int v33; // r7@4
  int v34; // r3@4
  int v35; // r2@4
  unsigned int v36; // r0@4
  signed int v37; // r1@4
  int v38; // r0@5
  int v39; // r6@5
  int v40; // r7@5
  TickWorldComponent *v41; // r0@6
  Dimension *v42; // r7@8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26F1074;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v6 = a1 + 24;
  *(_DWORD *)(a1 + 28) = 0;
  v7 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 24)));
  *(_DWORD *)(v6 - 12) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    v9 = (void *)(v3 + 32);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 8) = v9;
  *(_DWORD *)(v3 + 36) = 3;
  *(_BYTE *)(v3 + 40) = 0;
  v10 = (Level *)BlockSource::getLevel(v4);
  *(_DWORD *)(v3 + 44) = Level::getEntityDefinitions(v10);
  v11 = v3 + 72;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = -1;
  *(_DWORD *)(v3 + 60) = -1;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  v12 = *(&Vec3::ZERO + 1);
  v13 = dword_2822498;
  *(_DWORD *)v11 = Vec3::ZERO;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  v14 = v3 + 84;
  v15 = *(&Vec3::ZERO + 1);
  v16 = dword_2822498;
  *(_DWORD *)v14 = Vec3::ZERO;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  v17 = v3 + 96;
  v18 = *(&Vec3::ZERO + 1);
  v19 = dword_2822498;
  *(_DWORD *)v17 = Vec3::ZERO;
  *(_DWORD *)(v17 + 4) = v18;
  *(_DWORD *)(v17 + 8) = v19;
  v20 = v3 + 108;
  v21 = *(&Vec3::ZERO + 1);
  v22 = dword_2822498;
  *(_DWORD *)v20 = Vec3::ZERO;
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  v23 = v3 + 136;
  *(_QWORD *)(v3 + 120) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)(v3 + 128) = *(_QWORD *)&Vec2::ZERO;
  *(_QWORD *)v23 = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  v24 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v3 + 160) = dword_2822498;
  *(_QWORD *)(v3 + 152) = v24;
  HIDWORD(v24) = v3 + 164;
  *(_QWORD *)HIDWORD(v24) = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(HIDWORD(v24) + 8) = 0;
  SynchedEntityData::SynchedEntityData(v3 + 176);
  *(_DWORD *)(v3 + 192) = 0;
  v25 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v3 + 204) = dword_2822498;
  *(_QWORD *)(v3 + 196) = v25;
  *(_DWORD *)(v3 + 208) = 1065353216;
  *(_BYTE *)(v3 + 220) = 0;
  *(_DWORD *)(v3 + 212) = 0;
  *(_DWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 221) = BlockID::AIR;
  *(_DWORD *)(v3 + 224) = 0;
  *(_WORD *)(v3 + 228) = 0;
  *(_DWORD *)(v3 + 232) = 0;
  *(_DWORD *)(v3 + 236) = 0;
  *(_DWORD *)(v3 + 240) = 0;
  *(_DWORD *)(v3 + 244) = 0;
  *(_DWORD *)(v3 + 248) = 0;
  *(_DWORD *)(v3 + 252) = 1048576000;
  *(_DWORD *)(v3 + 256) = 1065353216;
  AABB::AABB((AABB *)(v3 + 264));
  v26 = 0;
  *(_DWORD *)(v3 + 292) = 0;
  *(_DWORD *)(v3 + 296) = 0;
  *(_DWORD *)(v3 + 300) = 0;
  *(_DWORD *)(v3 + 304) = 1058642330;
  *(_DWORD *)(v3 + 308) = 1072064102;
  _aeabi_memclr8(v3 + 312, 36);
  v27 = v3 + 364;
  *(_DWORD *)(v3 + 348) = 1;
  *(_DWORD *)(v3 + 352) = 0;
  v28 = *(&Vec2::ZERO + 1);
  *(_DWORD *)(v3 + 356) = Vec2::ZERO;
  *(_DWORD *)(v3 + 360) = v28;
  v29 = *(&Vec3::ZERO + 1);
  v30 = dword_2822498;
  *(_DWORD *)v27 = Vec3::ZERO;
  *(_DWORD *)(v27 + 4) = v29;
  *(_DWORD *)(v27 + 8) = v30;
  v31 = v3 + 376;
  v32 = *(&Vec3::ZERO + 1);
  v33 = dword_2822498;
  *(_DWORD *)v31 = Vec3::ZERO;
  *(_DWORD *)(v31 + 4) = v32;
  *(_DWORD *)(v31 + 8) = v33;
  v34 = *(&Vec3::ZERO + 1);
  v35 = dword_2822498;
  *(_DWORD *)(v3 + 388) = Vec3::ZERO;
  *(_DWORD *)(v3 + 392) = v34;
  *(_DWORD *)(v3 + 396) = v35;
  *(_DWORD *)(v3 + 400) = 0;
  *(_DWORD *)(v3 + 404) = -1102263091;
  *(_DWORD *)(v3 + 408) = 1041865114;
  *(_BYTE *)(v3 + 412) = 1;
  *(_DWORD *)(v3 + 416) = 0;
  *(_DWORD *)(v3 + 420) = 0;
  *(_BYTE *)(v3 + 424) = 1;
  *(_DWORD *)(v3 + 437) = 0;
  *(_DWORD *)(v3 + 433) = 0;
  *(_DWORD *)(v3 + 429) = 0;
  *(_DWORD *)(v3 + 425) = 0;
  *(_DWORD *)(v3 + 444) = -1;
  *(_BYTE *)(v3 + 448) = 0;
  *(_BYTE *)(v3 + 449) = 0;
  *(_DWORD *)(v3 + 452) = 0;
  *(_DWORD *)(v3 + 456) = BlockPos::MAX;
  *(_DWORD *)(v3 + 460) = unk_2816260;
  *(_DWORD *)(v3 + 464) = dword_2816264;
  _aeabi_memclr4(v3 + 468, 48);
  *(_DWORD *)(v3 + 520) = -1;
  *(_DWORD *)(v3 + 524) = -1;
  *(_WORD *)(v3 + 528) = 0;
  *(_BYTE *)(v3 + 540) = 0;
  *(_DWORD *)(v3 + 532) = 0;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 544) = 1065353216;
  *(_DWORD *)(v3 + 548) = 0;
  v36 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v3 + 552) = v36;
  *(_DWORD *)(v3 + 3052) = 625;
  v37 = 1;
  *(_BYTE *)(v3 + 3056) = 0;
  *(_DWORD *)(v3 + 3060) = 0;
  *(_DWORD *)(v3 + 556) = v36;
  do
    v38 = v36 ^ (v36 >> 30);
    v39 = v3 + 4 * v26;
    v40 = v26++ + 1812433253 * v38;
    v36 = v37++ + 1812433253 * v38;
    *(_DWORD *)(v39 + 560) = v40 + 1;
  while ( v26 != 397 );
  *(_DWORD *)(v3 + 3052) = 624;
  *(_DWORD *)(v3 + 3064) = 398;
  *(_DWORD *)(v3 + 3076) = -1;
  *(_DWORD *)(v3 + 3072) = -1;
  *(_BYTE *)(v3 + 3080) = 0;
  *(_BYTE *)(v3 + 3081) = 0;
  *(_DWORD *)(v3 + 3084) = 0;
  *(_DWORD *)(v3 + 3088) = 0;
  *(_DWORD *)(v3 + 3092) = BlockSource::getLevel(v4);
  _aeabi_memclr8(v3 + 3096, 176);
  *(_DWORD *)(v3 + 3276) = -1;
  *(_DWORD *)(v3 + 3272) = -1;
  *(_BYTE *)(v3 + 3280) = 0;
  *(_BYTE *)(v3 + 3281) = 0;
  *(_DWORD *)(v3 + 3284) = -1082130432;
  *(_DWORD *)(v3 + 3288) = BlockPos::ZERO;
  *(_DWORD *)(v3 + 3292) = unk_2816278;
  *(_DWORD *)(v3 + 3296) = dword_281627C;
  *(_DWORD *)(v3 + 3304) = -1;
  *(_DWORD *)(v3 + 3308) = -1;
  *(_DWORD *)(v3 + 3312) = 0;
  *(_DWORD *)(v3 + 3316) = 0;
  *(_DWORD *)(v3 + 3320) = 1065353216;
  *(_DWORD *)(v3 + 3324) = 0;
  *(_DWORD *)(v3 + 3328) = 0;
  *(_DWORD *)(v3 + 3332) = 1058642330;
  *(_BYTE *)(v3 + 3336) = 0;
  EntityDefinitionDiffList::EntityDefinitionDiffList(v3 + 3340, *(_DWORD *)(v3 + 44));
  *(_BYTE *)(v3 + 3364) = 0;
  *(_DWORD *)(v3 + 3368) = 0;
  *(_DWORD *)(v3 + 3372) = &unk_28898CC;
  *(_BYTE *)(v3 + 3376) = 0;
  *(_DWORD *)(v3 + 3380) = 0;
  *(_DWORD *)(v3 + 3384) = 0;
  *(_DWORD *)(v3 + 3388) = 0;
  *(_BYTE *)(v3 + 3400) = 0;
  *(_BYTE *)(v3 + 3401) = 0;
  *(_BYTE *)(v3 + 3402) = 0;
  *(_DWORD *)(v3 + 3404) = 0;
  v41 = *(TickWorldComponent **)(v3 + 3264);
  if ( !v41 || !TickWorldComponent::hasTickingArea(v41) )
    *(_DWORD *)(v3 + 3084) = v4;
    v42 = (Dimension *)BlockSource::getDimension(v4);
    *(_DWORD *)(v3 + 36) = Dimension::getId(v42);
    *(_DWORD *)(v3 + 3088) = v42;
  sub_16DD660((SynchedEntityData *)(v3 + 176));
  Entity::setBaseDefinition(v3, v5, 1, 1);
  return v3;
}


signed int __fastcall Entity::isFishable(Entity *this)
{
  return 1;
}


  if ( Entity::isRemoved(a2) != 1 || **(_BYTE **)v3 )
{
    Entity::getRuntimeID((Entity *)&v5, v2);
    result = 0;
    if ( *(_QWORD *)*(_DWORD *)(v3 + 4) == v5 )
      result = 1;
  }
  else
  {
  return result;
}


unsigned int __fastcall Entity::isStackable(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 20) & 8u) >> 3;
  return v1;
}


int __fastcall Entity::resetRegion(int result)
{
  *(_DWORD *)(result + 3084) = 0;
  return result;
}


unsigned int __fastcall Entity::setControllingSeat(Entity *this, int a2)
{
  Entity *v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 74);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
  {
    *(_BYTE *)(result + 9) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall Entity::hasOutputSignal(Entity *this, signed __int8 a2)
{
  return 0;
}


unsigned int __fastcall Entity::setColor(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = a1;
  v3 = a2;
  result = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 3);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
  {
    *(_BYTE *)(result + 9) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    result = *(_WORD *)(v2 + 190);
    if ( result > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  return result;
}


void __fastcall Entity::~Entity(Entity *this)
{
  Entity::~Entity(this);
}


int __fastcall Entity::isPushable(Entity *this)
{
  return 0;
}


unsigned int __fastcall Entity::_randomHeartPos(Entity *this, int a2)
{
  Random *v3; // r6@1
  unsigned int v9; // r0@1
  unsigned int result; // r0@1

  _R5 = a2;
  v3 = (Random *)(a2 + 552);
  __asm { VLDR            S16, [R5,#0x48] }
  _R7 = Random::_genRandInt32((Random *)(a2 + 552));
  __asm
  {
    VLDR            S18, [R5,#0x4C]
    VLDR            S20, [R5,#0x130]
  }
  v9 = Random::_genRandInt32(v3);
  __asm { VMOV            S0, R7 }
  _R8 = v9;
    VLDR            S22, [R5,#0x50]
    VLDR            S24, [R5,#0x134]
    VCVT.F64.U32    D13, S0
  result = Random::_genRandInt32(v3);
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VMOV            S4, R8
    VCVT.F64.U32    D1, S2
    VCVT.F64.U32    D2, S4
    VMUL.F64        D1, D1, D0
    VMUL.F64        D3, D13, D0
    VMUL.F64        D0, D2, D0
    VCVT.F32.F64    S4, D3
    VCVT.F32.F64    S2, D1
    VADD.F32        S4, S4, S4
    VLDR            S10, [R5,#0x130]
    VMOV.F32        S6, #0.5
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S2
    VSUB.F32        S8, S16, S20
    VMUL.F32        S4, S20, S4
    VADD.F32        S6, S18, S6
    VMUL.F32        S0, S0, S24
    VSUB.F32        S12, S22, S10
    VMUL.F32        S2, S10, S2
    VADD.F32        S4, S8, S4
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S12, S2
    VSTR            S4, [R4]
    VSTR            S0, [R4,#4]
    VSTR            S2, [R4,#8]
  return result;
}


void __fastcall Entity::enableAutoSendPosRot(Entity *this, int a2)
{
  Entity::enableAutoSendPosRot(this, a2);
}


int __fastcall Entity::spawnDeathParticles(Entity *this)
{
  Random *v2; // r5@1
  signed int v7; // r9@1
  unsigned int v12; // r0@2
  int result; // r0@2
  float v16; // [sp+1Ch] [bp-74h]@2

  _R4 = this;
  v2 = (Entity *)((char *)this + 552);
  __asm { VLDR            D8, =2.32830644e-10 }
  v7 = 20;
  __asm { VLDR            S21, =0.02 }
  do
  {
    _R10 = Random::_genRandInt32(v2);
    _R11 = Random::_genRandInt32(v2);
    _R6 = Random::_genRandInt32(v2);
    __asm { VLDR            S20, [R4,#0x48] }
    _R7 = Random::_genRandInt32(v2);
    __asm
    {
      VLDR            S22, [R4,#0x4C]
      VLDR            S24, [R4,#0x130]
    }
    v12 = Random::_genRandInt32(v2);
    __asm { VMOV            S0, R7 }
    _R8 = v12;
      VLDR            S26, [R4,#0x50]
      VLDR            S28, [R4,#0x134]
      VLDR            S30, [R4,#0x13C]
      VCVT.F64.U32    D9, S0
    _R0 = Random::_genRandInt32(v2);
      VMOV            S0, R0
      VMOV            S4, R8
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D2, S4
      VMUL.F64        D0, D0, D8
      VMUL.F64        D1, D9, D8
      VMOV            S6, R10
      VMOV            S8, R11
      VMOV            S10, R6
      VCVT.F64.U32    D3, S6
      VCVT.F64.U32    D4, S8
      VCVT.F64.U32    D5, S10
      VMUL.F64        D2, D2, D8
      VCVT.F32.F64    S0, D0
      VCVT.F32.F64    S2, D1
      VMUL.F64        D3, D3, D8
      VMUL.F64        D4, D4, D8
      VMUL.F64        D5, D5, D8
      VADD.F32        S2, S2, S2
      VLDR            S14, [R4,#0x130]
      VCVT.F32.F64    S4, D2
      VADD.F32        S0, S0, S0
      VCVT.F32.F64    S6, D3
      VCVT.F32.F64    S8, D4
      VCVT.F32.F64    S10, D5
      VSUB.F32        S12, S20, S24
      VMUL.F32        S2, S24, S2
      VSUB.F32        S1, S22, S30
      VMUL.F32        S4, S4, S28
      VSUB.F32        S3, S26, S14
      VMUL.F32        S0, S14, S0
      VMUL.F32        S6, S6, S21
      VMUL.F32        S8, S8, S21
      VADD.F32        S2, S12, S2
      VMUL.F32        S10, S10, S21
      VADD.F32        S4, S1, S4
      VADD.F32        S0, S3, S0
      VSTR            S6, [SP,#0x90+var_80]
      VSTR            S8, [SP,#0x90+var_7C]
      VSTR            S2, [SP,#0x90+var_74]
      VSTR            S10, [SP,#0x90+var_78]
      VSTR            S4, [SP,#0x90+var_70]
      VSTR            S0, [SP,#0x90+var_6C]
    result = Level::addParticle(*((_DWORD *)_R4 + 773), 5, (int)&v16);
    --v7;
  }
  while ( v7 );
  return result;
}


void __fastcall Entity::~Entity(Entity *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Entity::getDefaultLootTable(Entity *this)
{
  return 0;
}


signed int __fastcall Entity::hasType(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = (*(int (**)(void))(*(_DWORD *)a1 + 488))() & a2;
  result = 0;
  if ( v3 == v2 )
    result = 1;
  return result;
}


int __fastcall Entity::_updateOnewayCollisions(Entity *this, BlockSource *a2)
{
  Entity *v2; // r4@1
  AABB *v3; // r5@1
  int result; // r0@1
  AABB *v5; // r0@4
  signed int v6; // r1@5
  AABB *v7; // r2@6
  int v8; // r1@6

  v2 = this;
  v3 = (AABB *)*((_DWORD *)this + 845);
  result = *((_DWORD *)this + 846);
  while ( v3 != (AABB *)result )
  {
    if ( AABB::intersects(v3, (Entity *)((char *)v2 + 264)) )
    {
      result = *((_DWORD *)v2 + 846);
      v3 = (AABB *)((char *)v3 + 28);
    }
    else
      v5 = (AABB *)*((_DWORD *)v2 + 846);
      if ( (AABB *)((char *)v3 + 28) != v5 )
      {
        v6 = v5 - (AABB *)((char *)v3 + 28);
        if ( v6 >= 1 )
        {
          v7 = v3;
          v8 = -1227133513 * (v6 >> 2) + 1;
          do
          {
            --v8;
            *(_DWORD *)v7 = *((_DWORD *)v7 + 7);
            *((_DWORD *)v7 + 1) = *((_DWORD *)v7 + 8);
            *((_DWORD *)v7 + 2) = *((_DWORD *)v7 + 9);
            *((_DWORD *)v7 + 3) = *((_DWORD *)v7 + 10);
            *((_DWORD *)v7 + 4) = *((_DWORD *)v7 + 11);
            *((_DWORD *)v7 + 5) = *((_DWORD *)v7 + 12);
            *((_BYTE *)v7 + 24) = *((_BYTE *)v7 + 52);
            v7 = (AABB *)((char *)v7 + 28);
          }
          while ( v8 > 1 );
        }
      }
      result = (int)v5 - 28;
      *((_DWORD *)v2 + 846) = result;
  }
  return result;
}


int __fastcall Entity::_makeFlySound(Entity *this)
{
  return 0;
}


unsigned int __fastcall Entity::setLimitedLife(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  *((_BYTE *)this + 3364) = 1;
  v3 = a2;
  *((_DWORD *)this + 842) = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 78);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


char *__fastcall Entity::getHurtColor(Entity *this)
{
  return (char *)this + 3320;
}


int __fastcall Entity::setRuntimeID(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 3312) = a3;
  *(_DWORD *)(result + 3316) = a4;
  return result;
}


signed int __fastcall Entity::reset(Entity *this)
{
  Entity *v1; // r4@1
  signed int result; // r0@3

  v1 = this;
  *((_BYTE *)this + 3081) = 0;
  if ( !Level::isClientSide(*((Level **)this + 773)) )
    Entity::initializeComponents((int)v1, *((_BYTE *)v1 + 4));
  result = 1;
  *((_BYTE *)v1 + 3081) = 1;
  return result;
}


unsigned int __fastcall Entity::setOwner(int a1, int a2, __int64 a3)
{
  int v3; // r4@1
  __int64 v4; // r6@1
  unsigned int result; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3

  v3 = a1;
  v4 = a3;
  result = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 5);
  v6 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v6 == 7 && *(_QWORD *)(result + 16) != v4 )
  {
    *(_QWORD *)(result + 16) = v4;
    *(_BYTE *)(result + 8) = 1;
    v7 = v6 >> 16;
    v8 = *(_WORD *)(v3 + 188);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *(_WORD *)(v3 + 188) = v8;
    result = *(_WORD *)(v3 + 190);
    if ( result > v7 )
      LOWORD(v7) = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  return result;
}


_BOOL4 __fastcall Entity::isAutoSendEnabled(Entity *this)
{
  return *((_DWORD *)this + 48) != 0;
}


_BOOL4 __fastcall Entity::isRiding(Entity *this)
{
  return *((_DWORD *)this + 128) != 0;
}


signed int __fastcall Entity::startRiding(Entity *this, Entity *a2)
{
  Entity *v2; // r5@1
  Entity *v3; // r4@1
  int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (*(int (__fastcall **)(Entity *, Entity *))(*(_DWORD *)a2 + 564))(a2, this);
  result = 0;
  if ( v4 == 1 )
  {
    *((_DWORD *)v3 + 34) = 0;
    *((_DWORD *)v3 + 35) = 0;
    if ( *((_DWORD *)v3 + 128) )
      (*(void (__fastcall **)(Entity *, signed int, _DWORD))(*(_DWORD *)v3 + 596))(v3, 1, 0);
    *((_DWORD *)v3 + 128) = v2;
    (*(void (__fastcall **)(Entity *, Entity *))(*(_DWORD *)v2 + 148))(v2, v3);
    *((_DWORD *)v2 + 56) = 0;
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 92))(v3);
    result = 1;
  }
  return result;
}


unsigned int __fastcall Entity::isSheared(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 19) & 0x20u) >> 5;
  return v1;
}


int __fastcall Entity::moveRelative(int result, float _R1, float _R2, float _R3)
{
  __asm { VMOV            S0, R1 }
  _R4 = result;
  __asm
  {
    VMOV            S2, R2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.01
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S8, #1.0
      VMOV            S6, R3
    }
    _R0 = &mce::Math::DEGRAD;
      VCMPE.F32       S4, S8
      VLDR            S10, [R0]
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S4, S8 }
      VLDR            S8, [R4,#0x7C]
      VDIV.F32        S4, S6, S4
      VMUL.F32        S8, S10, S8
      VLDR            S16, [R4,#0x6C]
      VMUL.F32        S18, S4, S2
      VMUL.F32        S20, S4, S0
      VMOV            R5, S8
    _R0 = sinf(_R5);
    __asm { VMOV            S22, R0 }
    result = cosf(_R5);
      VMOV            S0, R0
      VMUL.F32        S2, S22, S18
      VMUL.F32        S4, S0, S20
      VMUL.F32        S0, S0, S18
      VSUB.F32        S2, S4, S2
      VMUL.F32        S4, S22, S20
      VADD.F32        S2, S2, S16
      VADD.F32        S0, S0, S4
      VSTR            S2, [R4,#0x6C]
      VLDR            S2, [R4,#0x74]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x74]
  return result;
}


signed int __fastcall Entity::getAmbientSoundIntervalRange(Entity *this, float *a2)
{
  int v2; // r0@1
  signed int result; // r0@2

  v2 = *(_DWORD *)(*((_DWORD *)this + 12) + 96);
  if ( v2 )
  {
    *a2 = *(float *)(v2 + 8);
    result = 1;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall Entity::isChested(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 20) & 4u) >> 2;
  return v1;
}


void __fastcall Entity::getInterpolatedPosition(Entity *this, float _R1, int _R2)
{
  __asm
  {
    VLDR            S0, [R1,#0x4C]
    VMOV            S12, R2
    VLDR            S8, [R1,#0x64]
    VLDR            S2, [R1,#0x50]
    VLDR            S10, [R1,#0x68]
    VSUB.F32        S0, S0, S8
    VLDR            S4, [R1,#0x48]
    VLDR            S6, [R1,#0x60]
    VSUB.F32        S2, S2, S10
    VSUB.F32        S4, S4, S6
    VMUL.F32        S0, S0, S12
    VMUL.F32        S2, S2, S12
    VMUL.F32        S4, S4, S12
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S6
    VSTR            S4, [R0]
    VSTR            S0, [R0,#4]
    VSTR            S2, [R0,#8]
  }
}


signed int __fastcall Entity::tryTeleportTo(Entity *this, const Vec3 *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r8@1
  int v8; // r5@1
  const BlockPos *v10; // r6@1
  signed int v12; // r1@4
  int v17; // r3@9
  int v18; // r7@9
  int v19; // r3@9
  int v20; // r4@9
  int v21; // r7@9
  char *v24; // r0@9
  float v26; // [sp+0h] [bp-70h]@0
  float v27; // [sp+4h] [bp-6Ch]@0
  float v28; // [sp+8h] [bp-68h]@0
  int v29; // [sp+Ch] [bp-64h]@9
  unsigned __int8 v30; // [sp+18h] [bp-58h]@4
  int v31; // [sp+1Ch] [bp-54h]@9
  int v32; // [sp+20h] [bp-50h]@9
  int v33; // [sp+24h] [bp-4Ch]@9
  int v34; // [sp+28h] [bp-48h]@9
  int v35; // [sp+2Ch] [bp-44h]@9
  int v36; // [sp+30h] [bp-40h]@9
  int v37; // [sp+34h] [bp-3Ch]@4
  int v38; // [sp+38h] [bp-38h]@4
  int v39; // [sp+3Ch] [bp-34h]@4
  int v40; // [sp+40h] [bp-30h]@1
  int v41; // [sp+44h] [bp-2Ch]@2
  int v42; // [sp+48h] [bp-28h]@4

  _R9 = this;
  v7 = a4;
  v8 = a3;
  _R10 = a2;
  BlockPos::BlockPos((int)&v40, (int)a2);
  v10 = (const BlockPos *)*((_DWORD *)_R9 + 771);
  if ( BlockSource::hasChunksAt(*((BlockSource **)_R9 + 771), (const BlockPos *)&v40, 1) != 1 )
    return 0;
  _R0 = v41;
  if ( v41 < 1 || v8 != 1 )
  {
LABEL_6:
    if ( v8 )
      return 0;
  }
  else
    while ( 1 )
    {
      v37 = v40;
      v38 = _R0 - 1;
      v39 = v42;
      BlockSource::getBlockID((BlockSource *)&v30, v10, (int)&v37);
      v12 = v41;
      if ( Block::mSolid[v30] )
        break;
      _R0 = v41-- - 1;
      if ( v12 < 2 )
        goto LABEL_6;
    }
    _R0 = v41;
  __asm
    VMOV.F32        S0, #0.5
    VMOV            S6, R0
    VLDR            S2, [R9,#0x130]
    VLDR            S4, [R9,#0x134]
    VCVT.F32.S32    S6, S6
  v17 = *((_DWORD *)_R9 + 67);
  v18 = *((_DWORD *)_R9 + 68);
  *(_DWORD *)&v30 = *((_DWORD *)_R9 + 66);
  v31 = v17;
  v32 = v18;
  __asm { VMUL.F32        S0, S2, S0 }
  v19 = *((_DWORD *)_R9 + 70);
  v20 = *((_DWORD *)_R9 + 71);
  v21 = *((_DWORD *)_R9 + 72);
  v33 = *((_DWORD *)_R9 + 69);
  v34 = v19;
  v35 = v20;
  v36 = v21;
  __asm { VLDR            S8, [R10,#8] }
  v29 = *(_DWORD *)_R10;
    VSUB.F32        S12, S8, S0
    VSTR            S6, [SP,#0x70+var_60]
    VSTR            S8, [SP,#0x70+var_5C]
    VMOV            S10, R0
    VLDR            S2, [R9,#0x168]
  LODWORD(_R0) = &v30;
    VADD.F32        S2, S2, S6
    VSUB.F32        S6, S10, S0
    VMOV            R3, S12
    VMOV            R2, S2
    VMOV            R1, S6
    VADD.F32        S6, S8, S0
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S2, S4
    VSTR            S0, [SP,#0x70+var_70]
    VSTR            S2, [SP,#0x70+var_6C]
    VSTR            S6, [SP,#0x70+var_68]
  AABB::set(_R0, _R2, v26, v27, v28);
  v24 = BlockSource::fetchAABBs(v10, (const AABB *)&v30, 1);
  if ( (unsigned int)*(_QWORD *)v24 != *(_QWORD *)v24 >> 32
    || v7 == 1 && BlockSource::containsAnyLiquid(v10, (const AABB *)&v30) == 1 )
  (*(void (__fastcall **)(Entity *, int *, int, int))(*(_DWORD *)_R9 + 104))(_R9, &v29, a5, a6);
  return 1;
}


unsigned int __fastcall Entity::setLeashHolder(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r7@1
  unsigned int v5; // r5@1
  int v6; // r4@1
  bool v7; // zf@1
  int v8; // r2@1
  int v9; // r0@3
  unsigned int v10; // r1@3
  unsigned int v11; // r1@5
  unsigned int v12; // r0@5
  int v13; // r0@10
  unsigned int result; // r0@10
  unsigned int v15; // r1@10

  v4 = a3;
  v5 = a4;
  v6 = a1;
  v7 = (a3 & a4) == -1;
  v8 = 0;
  if ( !v7 )
    v8 = 1;
  Entity::setStatusFlag(a1, 28, v8);
  v9 = SynchedEntityData::_get((SynchedEntityData *)(v6 + 176), 38);
  v10 = *(_DWORD *)(v9 + 4);
  if ( (unsigned __int8)v10 == 7 && *(_QWORD *)(v9 + 16) != __PAIR__(v5, v4) )
  {
    *(_DWORD *)(v9 + 16) = v4;
    *(_DWORD *)(v9 + 20) = v5;
    *(_BYTE *)(v9 + 8) = 1;
    v11 = v10 >> 16;
    v12 = *(_WORD *)(v6 + 188);
    if ( v12 >= v11 )
      LOWORD(v12) = v11;
    *(_WORD *)(v6 + 188) = v12;
    if ( *(_WORD *)(v6 + 190) > v11 )
      LOWORD(v11) = *(_WORD *)(v6 + 190);
    *(_WORD *)(v6 + 190) = v11;
  }
  v13 = SynchedEntityData::_get((SynchedEntityData *)(v6 + 176), 38);
  *(_BYTE *)(v13 + 8) = 1;
  result = *(_WORD *)(v13 + 6);
  v15 = *(_WORD *)(v6 + 188);
  if ( v15 >= result )
    LOWORD(v15) = result;
  *(_WORD *)(v6 + 188) = v15;
  if ( *(_WORD *)(v6 + 190) > result )
    result = *(_WORD *)(v6 + 190);
  *(_WORD *)(v6 + 190) = result;
  return result;
}


signed int __fastcall Entity::save(Entity *this, CompoundTag *a2)
{
  Entity *v2; // r5@1
  CompoundTag *v3; // r4@1
  int v4; // r6@1
  signed int result; // r0@1
  void *v6; // r0@3
  void *v7; // r8@4
  int i; // r11@4
  __int64 v9; // kr00_8@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // r6@14
  int v13; // r9@14
  char *v14; // r1@14
  int v15; // r0@16
  char *v16; // r0@18
  void *v17; // r0@22
  ContainerComponent *v18; // r0@23
  ExplodeComponent *v19; // r0@25
  AgeableComponent *v20; // r0@27
  BreedableComponent *v21; // r0@29
  BreathableComponent *v22; // r0@31
  ProjectileComponent *v23; // r0@33
  MountTamingComponent *v24; // r0@35
  TimerComponent *v25; // r0@37
  NpcComponent *v26; // r0@39
  TradeableComponent *v27; // r0@41
  CommandBlockComponent *v28; // r0@43
  SpawnEntityComponent *v29; // r0@45
  unsigned int *v30; // r2@49
  signed int v31; // r1@51
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  void *v34; // [sp+10h] [bp-48h]@20
  int v35; // [sp+18h] [bp-40h]@20
  char *v36; // [sp+1Ch] [bp-3Ch]@6
  int v37; // [sp+20h] [bp-38h]@16
  int v38; // [sp+24h] [bp-34h]@16
  int v39; // [sp+2Ch] [bp-2Ch]@3

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 488))();
  result = 0;
  if ( v4 != 1 && !*((_BYTE *)v2 + 3097) )
  {
    sub_21E94B4((void **)&v39, "id");
    CompoundTag::putInt((int)v3, (const void **)&v39, v4);
    v6 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v30 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = operator new(0x14u);
    ListTag::ListTag((int)v7);
    v9 = *(_QWORD *)EntityDefinitionDiffList::getDefinitionStack((Entity *)((char *)v2 + 3340));
    for ( i = v9; i != HIDWORD(v9); i += 12 )
      v12 = *(_DWORD *)(i + 8);
      v13 = *(_BYTE *)i;
      v36 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v36, *(_DWORD *)(*(_DWORD *)(v12 + 496) - 12) + 1);
      v14 = "-";
      if ( v13 )
        v14 = "+";
      sub_21E7408((const void **)&v36, v14, 1u);
      sub_21E72F0((const void **)&v36, (const void **)(v12 + 496));
      std::make_unique<StringTag,char const(&)[1],std::string>(&v37, (const char *)&unk_257BC67, (int *)&v36);
      v15 = v37;
      v37 = 0;
      v38 = v15;
      ListTag::add((int)v7, &v38);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      v16 = v36 - 12;
      v38 = 0;
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v35, "definitions");
    v34 = v7;
    CompoundTag::put((int)v3, (const void **)&v35, (int *)&v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
    v17 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v35 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    (*(void (__fastcall **)(Entity *, CompoundTag *))(*(_DWORD *)v2 + 476))(v2, v3);
    v18 = (ContainerComponent *)*((_DWORD *)v2 + 782);
    if ( v18 )
      ContainerComponent::addAdditionalSaveData(v18, v3);
    v19 = (ExplodeComponent *)*((_DWORD *)v2 + 783);
    if ( v19 )
      ExplodeComponent::addAdditionalSaveData(v19, v3);
    v20 = (AgeableComponent *)*((_DWORD *)v2 + 777);
    if ( v20 )
      AgeableComponent::addAdditionalSaveData(v20, v3);
    v21 = (BreedableComponent *)*((_DWORD *)v2 + 781);
    if ( v21 )
      BreedableComponent::addAdditionalSaveData(v21, v3);
    v22 = (BreathableComponent *)*((_DWORD *)v2 + 780);
    if ( v22 )
      BreathableComponent::addAdditionalSaveData(v22, v3);
    v23 = (ProjectileComponent *)*((_DWORD *)v2 + 787);
    if ( v23 )
      ProjectileComponent::addAdditionalSaveData(v23, v3);
    v24 = (MountTamingComponent *)*((_DWORD *)v2 + 789);
    if ( v24 )
      MountTamingComponent::addAdditionalSaveData(v24, v3);
    v25 = (TimerComponent *)*((_DWORD *)v2 + 790);
    if ( v25 )
      TimerComponent::addAdditionalSaveData(v25, v3);
    v26 = (NpcComponent *)*((_DWORD *)v2 + 807);
    if ( v26 )
      NpcComponent::addAdditionalSaveData(v26, v3);
    v27 = (TradeableComponent *)*((_DWORD *)v2 + 811);
    if ( v27 )
      TradeableComponent::addAdditionalSaveData(v27, v3);
    v28 = (CommandBlockComponent *)*((_DWORD *)v2 + 804);
    if ( v28 )
      CommandBlockComponent::addAdditionalSaveData(v28, v3);
    v29 = (SpawnEntityComponent *)*((_DWORD *)v2 + 814);
    if ( v29 )
      SpawnEntityComponent::addAdditionalSaveData(v29, v3);
    result = 1;
  }
  return result;
}


int __fastcall Entity::isInvulnerableTo(Entity *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  int result; // r0@3

  v2 = a2;
  if ( *((_BYTE *)this + 426) && EntityDamageSource::getCause(a2) != 12 )
    result = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v2 + 24))(v2) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall Entity::getSourceUniqueID(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


void __fastcall Entity::pushInitialParameter<Villager>(int a1, int *a2, int a3)
{
  Entity::pushInitialParameter<Villager>(a1, a2, a3);
}


int __fastcall Entity::getSpeedInMetersPerSecond(Entity *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x48]
    VLDR            S6, [R0,#0x54]
    VLDR            S2, [R0,#0x4C]
    VLDR            S8, [R0,#0x58]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R0,#0x50]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [R0,#0x5C]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #20.0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


void __fastcall Entity::getInterpolatedRidingPosition(Entity *this, float a2, int a3)
{
  Entity::getInterpolatedRidingPosition(this, a2, a3);
}


int __fastcall Entity::doFireHurt(__int64 this)
{
  __int64 v1; // kr00_8@1
  int v2; // r0@1
  bool v3; // zf@1
  unsigned int v4; // r0@4
  int v5; // r7@6
  int *v6; // r6@6
  int v7; // r7@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  void *v10; // r6@17
  int v11; // r1@17
  void *v12; // r0@17
  int v13; // r6@22
  char v15; // [sp+4h] [bp-4Ch]@22
  void *ptr; // [sp+Ch] [bp-44h]@7
  unsigned int v17; // [sp+10h] [bp-40h]@4
  int v18; // [sp+14h] [bp-3Ch]@4
  int v19; // [sp+18h] [bp-38h]@4
  signed int v20; // [sp+1Ch] [bp-34h]@4
  int v21; // [sp+20h] [bp-30h]@4
  int v22; // [sp+24h] [bp-2Ch]@20

  v1 = this;
  v2 = *(_DWORD *)(this + 48);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 252) == 0;
  if ( !v3 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 1065353216;
    v21 = 0;
    LODWORD(this) = &v20;
    v4 = sub_21E6254(*(double *)&this);
    v17 = v4;
    if ( v4 == 1 )
    {
      v22 = 0;
      v6 = &v22;
    }
    else
      if ( v4 >= 0x40000000 )
        sub_21E57F4();
      v5 = 4 * v4;
      v6 = (int *)operator new(4 * v4);
      _aeabi_memclr4(v6, v5);
    ptr = v6;
    Entity::initParams((Entity *)v1, (VariantParameterList *)&ptr);
    EntityDefinitionDescriptor::executeTrigger(
      *(_DWORD *)(v1 + 48),
      (const Entity *)v1,
      (DefinitionTrigger *)(*(_DWORD *)(*(_DWORD *)(v1 + 48) + 252) + 4),
      (const VariantParameterList *)&ptr);
    v7 = v18;
    while ( v7 )
      v10 = (void *)v7;
      v11 = *(_DWORD *)(v7 + 8);
      v7 = *(_DWORD *)v7;
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      operator delete(v10);
    _aeabi_memclr4(ptr, 4 * v17);
    if ( ptr && &v22 != ptr )
      operator delete(ptr);
  }
  EntityDamageSource::EntityDamageSource((int)&v15, 7);
  v13 = 0;
  if ( !(*(int (__fastcall **)(_DWORD, char *))(*(_DWORD *)v1 + 404))(v1, &v15) )
    v13 = (*(int (__fastcall **)(_DWORD, char *, _DWORD, signed int))(*(_DWORD *)v1 + 696))(v1, &v15, HIDWORD(v1), 1);
  EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v15);
  return v13;
}


int __fastcall Entity::sendMotionToServer(Entity *this, int a2)
{
  int v3; // r6@1
  int result; // r0@1
  const MoveEntityPacketData *v5; // r7@2
  const Vec3 *v6; // r0@2
  void (*v7)(void); // r12@4
  int v8; // r0@5
  int v9; // r3@5
  int v10; // r0@5
  int v14; // r1@10
  int v16; // r0@14
  int v17; // r3@14
  void **v18; // [sp+0h] [bp-C0h]@14
  int v19; // [sp+4h] [bp-BCh]@14
  int v20; // [sp+8h] [bp-B8h]@14
  char v21; // [sp+Ch] [bp-B4h]@14
  int v22; // [sp+10h] [bp-B0h]@14
  int v23; // [sp+14h] [bp-ACh]@14
  int v24; // [sp+18h] [bp-A8h]@14
  int v25; // [sp+1Ch] [bp-A4h]@14
  int v26; // [sp+20h] [bp-A0h]@14
  void **v27; // [sp+28h] [bp-98h]@5
  signed __int64 v28; // [sp+2Ch] [bp-94h]@5
  char v29; // [sp+34h] [bp-8Ch]@5
  int v30; // [sp+38h] [bp-88h]@5
  int v31; // [sp+3Ch] [bp-84h]@5
  int v32; // [sp+40h] [bp-80h]@5
  int v33; // [sp+44h] [bp-7Ch]@5
  int v34; // [sp+48h] [bp-78h]@5
  int v35; // [sp+4Ch] [bp-74h]@5
  int v36; // [sp+50h] [bp-70h]@5
  int v37; // [sp+54h] [bp-6Ch]@5
  void **v38; // [sp+58h] [bp-68h]@4
  signed __int64 v39; // [sp+5Ch] [bp-64h]@4
  char v40; // [sp+64h] [bp-5Ch]@4
  int v41; // [sp+68h] [bp-58h]@4
  int v42; // [sp+6Ch] [bp-54h]@4
  int v43; // [sp+70h] [bp-50h]@4
  int v44; // [sp+74h] [bp-4Ch]@4
  int v45; // [sp+78h] [bp-48h]@4
  int v46; // [sp+7Ch] [bp-44h]@4
  int v47; // [sp+80h] [bp-40h]@4
  int v48; // [sp+84h] [bp-3Ch]@4
  char v49; // [sp+88h] [bp-38h]@2
  int v50; // [sp+8Ch] [bp-34h]@4
  int v51; // [sp+90h] [bp-30h]@4
  int v52; // [sp+94h] [bp-2Ch]@4
  int v53; // [sp+98h] [bp-28h]@4
  int v54; // [sp+9Ch] [bp-24h]@4
  int v55; // [sp+A0h] [bp-20h]@4
  int v56; // [sp+A4h] [bp-1Ch]@4

  _R4 = this;
  v3 = a2;
  result = Level::isClientSide(*((Level **)this + 773));
  if ( result == 1 )
  {
    MoveEntityPacketData::MoveEntityPacketData((Entity *)&v49, (int)_R4);
    v5 = (const MoveEntityPacketData *)*((_DWORD *)_R4 + 48);
    v6 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 64))(_R4);
    if ( MoveEntityPacketData::distantEnough((MoveEntityPacketData *)&v49, v5, v6, 1.0) == 1 )
    {
      if ( v3 == 1 )
      {
        v7 = *(void (**)(void))(*(_DWORD *)BlockSource::getDimension(*((BlockSource **)_R4 + 771)) + 212);
        v39 = 4294967298LL;
        v40 = 0;
        v38 = &off_26E94A4;
        v41 = *(_DWORD *)&v49;
        v42 = v50;
        v43 = v51;
        v44 = v52;
        v45 = v53;
        v46 = v54;
        v47 = v55;
        v48 = v56;
        v7();
      }
      v8 = *((_DWORD *)_R4 + 48);
      *(_QWORD *)v8 = *(_QWORD *)&v49;
      *(_DWORD *)(v8 + 8) = v51;
      *(_DWORD *)(v8 + 12) = v52;
      *(_DWORD *)(v8 + 16) = v53;
      v9 = v54;
      *(_BYTE *)(v8 + 24) = v55;
      *(_DWORD *)(v8 + 20) = v9;
      v28 = 4294967298LL;
      v29 = 0;
      v27 = &off_26E94A4;
      v30 = *(_DWORD *)&v49;
      v31 = v50;
      v32 = v51;
      v33 = v52;
      v34 = v53;
      v35 = v54;
      v36 = v55;
      v37 = v56;
      v10 = Level::getPacketSender(*((Level **)_R4 + 773));
      (*(void (**)(void))(*(_DWORD *)v10 + 8))();
    }
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 64))(_R4);
    __asm
      VLDR            S0, [R0]
      VLDR            S6, [R4,#0xC4]
      VLDR            S2, [R0,#4]
      VLDR            S8, [R4,#0xC8]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R0,#8]
      VSUB.F32        S2, S2, S8
      VLDR            S10, [R4,#0xCC]
      VSUB.F32        S4, S4, S10
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.04
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      goto LABEL_17;
      VCMPE.F32       S0, #0.0
      result = 0x7FFFFFFF;
      if ( !(*((_DWORD *)_R4 + 27) & 0x7FFFFFFF) )
        v14 = *((_DWORD *)_R4 + 28);
        _ZF = (v14 & 0x7FFFFFFF) == 0;
        if ( !(v14 & 0x7FFFFFFF) )
        {
          result = *((_DWORD *)_R4 + 29);
          _ZF = (result & 0x7FFFFFFF) == 0;
        }
        if ( _ZF )
LABEL_17:
          v19 = 2;
          v20 = 1;
          v21 = 0;
          v18 = &off_26E9684;
          v26 = 0;
          v24 = 0;
          v25 = 0;
          v22 = 0;
          v23 = 0;
          v16 = Level::getPacketSender(*((Level **)_R4 + 773));
          (*(void (__cdecl **)(int, void ***, _DWORD, int, void **, signed int, signed int, _DWORD, _DWORD))(*(_DWORD *)v16 + 8))(
            v16,
            &v18,
            *(_DWORD *)(*(_DWORD *)v16 + 8),
            v17,
            &off_26E9684,
            2,
            1,
            *(_DWORD *)&v21,
            0);
          *((_DWORD *)_R4 + 49) = *((_DWORD *)_R4 + 27);
          *((_DWORD *)_R4 + 50) = *((_DWORD *)_R4 + 28);
          *((_DWORD *)_R4 + 51) = result;
  }
  return result;
}


float __fastcall Entity::doWaterSplashEffect(Entity *this)
{
  BlockSource *v7; // r8@4
  Level *v8; // r6@4
  int v9; // r0@4
  unsigned int v10; // r1@5
  float result; // r0@7
  char *v13; // r0@9
  char *v15; // r0@9
  char *v18; // r0@12
  char *v20; // r0@12
  float v22; // [sp+14h] [bp-84h]@12
  float v23; // [sp+20h] [bp-78h]@9
  char v24; // [sp+2Ch] [bp-6Ch]@1

  _R4 = this;
  __asm
  {
    VLDR            S16, [R4,#0x6C]
    VLDR            S18, [R4,#0x70]
    VLDR            S20, [R4,#0x74]
  }
  AABB::getCenter((AABB *)&v24, (int)this + 264);
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S20, S20
    VMUL.F32        S4, S18, S18
    VMOV.F32        S16, #1.0
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.2
    VMUL.F32        S0, S0, S2
    VLDR            D1, =0.200000003
    VADD.F32        S0, S0, S4
    VCVT.F64.F32    D0, S0
    VSQRT.F64       D0, D0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S16
    VLDR            S2, =2.1475e9
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S16 }
    VCVTR.S32.F32   S18, S0
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4) )
    __asm { VMOV            R5, S18 }
    v7 = (BlockSource *)*((_DWORD *)_R4 + 771);
    v8 = (Level *)*((_DWORD *)_R4 + 773);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
    v9 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
    if ( v9 )
      v10 = (*(_BYTE *)(v9 + 17) & 8u) >> 3;
    Level::playSound(v8, v7, 26, (int)&v24);
    VMOV.F32        S18, #20.0
    VLDR            S28, [R4,#0x130]
    VMUL.F32        S0, S28, S18
    VADD.F32        S22, S0, S16
  result = floorf(*((float *)_R4 + 67));
    VMOV            S20, R0
    VCMPE.F32       S22, #0.0
    __asm
    {
      VADD.F32        S22, S20, S16
      VMOV.F32        S26, #-1.0
      VLDR            D12, =2.32830644e-10
    }
    _R7 = 1;
    do
      v13 = Level::getRandom(*((Level **)_R4 + 773));
      _R0 = Random::_genRandInt32((Random *)v13);
      __asm
      {
        VMOV            S0, R0
        VLDR            S28, [R4,#0x130]
        VCVT.F64.U32    D15, S0
      }
      v15 = Level::getRandom(*((Level **)_R4 + 773));
      _R0 = Random::_genRandInt32((Random *)v15);
        VMUL.F64        D1, D15, D12
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D12
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S0, D0
        VADD.F32        S2, S2, S2
        VLDR            S8, [R4,#0x130]
        VADD.F32        S0, S0, S0
        VLDR            S4, [R4,#0x48]
        VLDR            S6, [R4,#0x50]
        VADD.F32        S2, S2, S26
        VADD.F32        S0, S0, S26
        VMUL.F32        S2, S2, S28
        VMUL.F32        S0, S0, S8
        VADD.F32        S2, S4, S2
        VADD.F32        S0, S0, S6
        VSTR            S2, [SP,#0x98+var_78]
        VSTR            S22, [SP,#0x98+var_74]
        VSTR            S0, [SP,#0x98+var_70]
      result = COERCE_FLOAT(Level::addParticle(*((_DWORD *)_R4 + 773), 1, (int)&v23));
        VMOV            S2, R7
      ++_R7;
        VMUL.F32        S0, S28, S18
        VCVT.F32.S32    S2, S2
        VADD.F32        S0, S0, S16
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
    while ( _NF ^ _VF );
    VADD.F32        S0, S0, S16
    VCMPE.F32       S0, #0.0
      VADD.F32        S20, S20, S16
      VMOV.F32        S24, #-1.0
      VLDR            D11, =2.32830644e-10
      v18 = Level::getRandom(*((Level **)_R4 + 773));
      _R0 = Random::_genRandInt32((Random *)v18);
        VLDR            S26, [R4,#0x130]
        VCVT.F64.U32    D14, S0
      v20 = Level::getRandom(*((Level **)_R4 + 773));
      _R0 = Random::_genRandInt32((Random *)v20);
        VMUL.F64        D1, D14, D11
        VMUL.F64        D0, D0, D11
        VADD.F32        S2, S2, S24
        VADD.F32        S0, S0, S24
        VMUL.F32        S2, S2, S26
        VSTR            S2, [SP,#0x98+var_84]
        VSTR            S20, [SP,#0x98+var_80]
        VSTR            S0, [SP,#0x98+var_7C]
      result = COERCE_FLOAT(Level::addParticle(*((_DWORD *)_R4 + 773), 21, (int)&v22));
        VLDR            S0, [R4,#0x130]
        VMUL.F32        S0, S0, S18
  return result;
}


unsigned int __fastcall Entity::isPowered(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 17) & 2u) >> 1;
  return v1;
}


int __fastcall Entity::getCameraOffset(Entity *this)
{
  return 0;
}


__int64 __fastcall Entity::getLeashHolder(Entity *this, int a2)
{
  Entity *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 38);
  if ( !result )
    result = -1LL;
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall Entity::isRider(int a1, _QWORD *a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r7@2
  int v6; // r2@3
  _QWORD *v7; // r6@4
  int v9; // [sp+0h] [bp-20h]@5

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 476);
  if ( HIDWORD(v4) == (_DWORD)v4 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 4 * v5);
    if ( v6 )
      break;
LABEL_8:
    if ( ++v5 >= (unsigned int)((HIDWORD(v4) - (signed int)v4) >> 2) )
      return 0;
  }
  v7 = (_QWORD *)(v6 + 56);
  if ( (*(_DWORD *)(v6 + 56) & *(_DWORD *)(v6 + 60)) == -1 )
    Level::getNewUniqueID((Level *)&v9, *(_DWORD *)(v6 + 3092));
    *v7 = *(_QWORD *)&v9;
  if ( *v3 ^ *v7 )
    v4 = *(_QWORD *)(v2 + 476);
    goto LABEL_8;
  return 1;
}


signed int __fastcall Entity::getRiderIndex(Entity *this, Entity *a2)
{
  int v2; // r3@1
  int v3; // r12@1
  signed int result; // r0@2

  v2 = *(_QWORD *)((char *)this + 476) >> 32;
  v3 = *(_QWORD *)((char *)this + 476);
  if ( v3 == v2 )
  {
LABEL_5:
    result = -1;
  }
  else
    result = 0;
    while ( *(Entity **)(v3 + 4 * result) != a2 )
    {
      v2 -= 4;
      ++result;
      if ( v3 == v2 )
        goto LABEL_5;
    }
  return result;
}


void __fastcall Entity::getAttachPos(AABB *this, int a2, int a3, int _R3)
{
  void **v10; // r1@5

  __asm { VMOV            S16, R3 }
  _R5 = a2;
  switch ( a3 )
  {
    case 1:
    case 2:
      AABB::getCenter(this, a2 + 264);
      return;
    case 0:
      __asm
      {
        VLDR            S0, [R5,#0x4C]; jumptable 016E26AE case 0
        VLDR            S6, [R5,#0x64]
        VLDR            S2, [R5,#0x50]
        VSUB.F32        S0, S0, S6
        VLDR            S8, [R5,#0x68]
        VLDR            S4, [R5,#0x48]
        VLDR            S10, [R5,#0x60]
        VSUB.F32        S2, S2, S8
        VSUB.F32        S4, S4, S10
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VADD.F32        S0, S0, S6
        VLDR            S6, [R5,#0x13C]
        VADD.F32        S2, S2, S8
        VADD.F32        S4, S4, S10
      }
      goto LABEL_8;
    case 3:
        VLDR            S18, [R5,#0x16C]
        VLDR            S20, [R5,#0x170]
        VLDR            S22, [R5,#0x174]
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 644))(a2);
      v10 = &mce::Math::DEGRAD;
      goto LABEL_11;
    case 4:
        VLDR            S0, [R5,#0x7C]
        VLDR            S2, [R5,#0x174]
        VLDR            S4, [R5,#0x16C]
      _R0 = &mce::Math::DEGRAD;
        VLDR            S18, [R5,#0x170]
        VLDR            S20, [R5,#0x194]
        VLDR            S6, [R0]
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R5,#0x198]
        VADD.F32        S24, S6, S2
        VMOV            R6, S0
        VLDR            S0, [R5,#0x190]
        VADD.F32        S22, S0, S4
      _R0 = cosf(_R6);
      __asm { VMOV            S26, R0 }
      _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
        VMOV            S0, R0
        VLDR            S8, [R5,#0x4C]
        VMUL.F32        S2, S26, S22
        VLDR            S1, [R5,#0x64]
        VMUL.F32        S4, S0, S24
        VLDR            S10, [R5,#0x50]
        VMUL.F32        S6, S26, S24
        VLDR            S3, [R5,#0x68]
        VMUL.F32        S0, S0, S22
        VLDR            S12, [R5,#0x48]
        VLDR            S14, [R5,#0x60]
        VSUB.F32        S8, S8, S1
        VSUB.F32        S10, S10, S3
        VSUB.F32        S12, S12, S14
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S20, S18
        VSUB.F32        S0, S6, S0
        VMUL.F32        S8, S8, S16
        VMUL.F32        S10, S10, S16
        VMUL.F32        S6, S12, S16
        VADD.F32        S2, S2, S14
        VADD.F32        S4, S4, S1
        VADD.F32        S0, S0, S3
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S8
        VADD.F32        S0, S0, S10
      goto LABEL_12;
    case 5:
        VLDR            S0, [R5,#0x4C]; jumptable 016E26AE case 5
        VLDR            S12, [R5,#0x140]
        VADD.F32        S0, S0, S12
    case 6:
        VLDR            S18, [R5,#0x178]
        VLDR            S20, [R5,#0x17C]
        VLDR            S22, [R5,#0x180]
    case 7:
        VLDR            S18, [R5,#0x184]
        VLDR            S20, [R5,#0x188]
        VLDR            S22, [R5,#0x18C]
      _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 644))(a2);
LABEL_11:
      _R1 = *v10;
        VLDR            S2, [R1]
        VMUL.F32        S0, S2, S0
      __asm { VMOV            S24, R0 }
        VMUL.F32        S2, S24, S18
        VMUL.F32        S4, S0, S22
        VMUL.F32        S6, S24, S22
        VMUL.F32        S0, S0, S18
        VSUB.F32        S4, S8, S1
        VSUB.F32        S8, S10, S3
        VADD.F32        S10, S1, S20
        VADD.F32        S4, S10, S4
        VADD.F32        S0, S0, S8
LABEL_12:
        VSTR            S2, [R4]
        VSTR            S4, [R4,#4]
        VSTR            S0, [R4,#8]
      break;
    default:
        VLDR            S0, [R5,#0x4C]; jumptable 016E26AE default case
        VLDR            S8, [R5,#0x64]
        VLDR            S10, [R5,#0x68]
        VSUB.F32        S0, S0, S8
        VLDR            S6, [R5,#0x60]
        VSUB.F32        S2, S2, S10
        VSUB.F32        S4, S4, S6
        VADD.F32        S2, S2, S10
        VADD.F32        S4, S4, S6
LABEL_8:
        VSTR            S4, [R4]
        VSTR            S0, [R4,#4]
        VSTR            S2, [R4,#8]
  }
}


unsigned int __fastcall Entity::lavaHurt(Entity *this)
{
  Entity *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  unsigned int result; // r0@1
  bool v4; // zf@1
  char v5; // [sp+8h] [bp-18h]@7

  v1 = this;
  v2 = (unsigned __int64 *)Level::getGameRules(*((Level **)this + 773));
  result = SynchedEntityData::_find((Entity *)((char *)v1 + 176), 0);
  v4 = result == 0;
  if ( result )
  {
    result = *(_BYTE *)(result + 21);
    v4 = result >> 7 == 0;
  }
  if ( v4 )
    if ( GameRules::hasRule(v2, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1
      || (result = GameRules::getBool(v2, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS), result == 1) )
    {
      EntityDamageSource::EntityDamageSource((int)&v5, 8);
      if ( !(*(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v1 + 404))(v1, &v5) )
        (*(void (__fastcall **)(Entity *, char *, signed int, signed int))(*(_DWORD *)v1 + 696))(v1, &v5, 4, 1);
      result = EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v5);
    }
  return result;
}


int __fastcall Entity::setOffersFromPacket(Entity *this, const UpdateTradePacket *a2)
{
  Entity *v2; // r5@1
  const UpdateTradePacket *v3; // r4@1
  TradeableComponent *v4; // r7@1
  int v5; // r6@2
  void *v6; // r0@3
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r0@6
  unsigned int *v11; // r2@10
  signed int v12; // r1@12

  v2 = this;
  v3 = a2;
  v4 = (TradeableComponent *)*((_DWORD *)this + 811);
  if ( !v4 )
  {
    v4 = (TradeableComponent *)operator new(0x30u);
    TradeableComponent::TradeableComponent((int)v4, (int)v2);
    v5 = *((_DWORD *)v2 + 811);
    *((_DWORD *)v2 + 811) = v4;
    if ( v5 )
    {
      v6 = *(void **)(v5 + 36);
      if ( v6 )
        operator delete(v6);
      v7 = *(_DWORD *)(v5 + 32);
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = *(_DWORD *)(v5 + 28);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      operator delete((void *)v5);
      v4 = (TradeableComponent *)*((_DWORD *)v2 + 811);
    }
  }
  return TradeableComponent::setDataFromPacket(v4, v3);
}


int __fastcall Entity::getStatusFlag(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  __int64 v5; // kr00_8@2
  unsigned int v6; // r5@2

  v2 = a2;
  v3 = 0;
  v4 = SynchedEntityData::_find((SynchedEntityData *)(a1 + 176), 0);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v6 = 1u >> (32 - v2);
    if ( v2 - 32 >= 0 )
      v6 = 1 << (v2 - 32);
    v3 = ((unsigned int)v5 & (1 << v2) | HIDWORD(v5) & v6) != 0;
  }
  return v3;
}


signed int __fastcall Entity::canExistInPeaceful(Entity *this)
{
  return 1;
}


int __fastcall Entity::setChanged(int result)
{
  *(_BYTE *)(result + 3096) = 1;
  return result;
}


int __fastcall Entity::hurt(Entity *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Entity *v5; // r7@1
  int v6; // r5@1
  int v7; // r8@1
  const EntityDamageSource *v8; // r6@1
  int result; // r0@2

  v5 = this;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 404))() )
    result = 0;
  else
    result = (*(int (__fastcall **)(Entity *, const EntityDamageSource *, int, int))(*(_DWORD *)v5 + 696))(
               v5,
               v8,
               v6,
               v7);
  return result;
}


signed int __fastcall Entity::getPortalCooldown(Entity *this)
{
  return 300;
}


int __fastcall Entity::getPortalWaitTime(Entity *this)
{
  return 0;
}


void __fastcall Entity::enableAutoSendPosRot(Entity *this, int a2)
{
  Entity *v2; // r4@1
  _WORD *v3; // r5@1
  _WORD *v4; // r0@2
  void *v5; // r0@3

  v2 = this;
  v3 = 0;
  if ( a2 == 1 )
  {
    v4 = operator new(0x20u);
    v4[11] = 0;
    *((_BYTE *)v4 + 24) = 0;
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 4) = 0;
    v3 = v4;
  }
  v5 = (void *)*((_DWORD *)v2 + 48);
  *((_DWORD *)v2 + 48) = v3;
  if ( v5 )
    j_j_j__ZdlPv_6(v5);
}


unsigned int __fastcall Entity::setHurtDir(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Entity *)((char *)this + 176), 12);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall Entity::setUniqueID(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 56) = a3;
  return result;
}


int __fastcall Entity::handleInsidePortal(Entity *this, const BlockPos *a2)
{
  Entity *v2; // r4@1
  const BlockPos *v3; // r5@1
  _BYTE *v4; // r1@2
  int v5; // r0@2
  int result; // r0@5

  v2 = this;
  v3 = a2;
  if ( Level::isClientSide(*((Level **)this + 773)) == 1 )
  {
    v4 = (char *)v2 + 221;
    v5 = Block::mPortal;
  }
  else
    if ( *((_BYTE *)v2 + 221) != *(_BYTE *)(Block::mPortal + 4) )
    {
      *((_DWORD *)v2 + 114) = *(_DWORD *)v3;
      *((_DWORD *)v2 + 115) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v2 + 116) = *((_DWORD *)v3 + 2);
    }
  result = *(_BYTE *)(v5 + 4);
  *v4 = result;
  return result;
}


int __fastcall Entity::changeDimension(Entity *a1, unsigned int a2, int a3)
{
  Entity *v3; // r5@1
  unsigned int v4; // r4@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r0@2
  bool v8; // zf@2
  int v9; // r1@6
  unsigned __int8 v11; // [sp+0h] [bp-18h]@6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (*(int (**)(void))(*(_DWORD *)a1 + 524))();
  if ( v5 == 1 )
  {
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 516))(v3);
    v8 = v4 == 1;
    if ( v4 != 1 )
      v8 = v6 == 1;
    if ( v8 )
    {
      *((_DWORD *)v3 + 113) = v7;
      BlockSource::getBlockAndData((BlockSource *)&v11, *((const BlockPos **)v3 + 771), (int)v3 + 456);
      *((_DWORD *)v3 + 117) = PortalBlock::getAxis((PortalBlock *)*(&v11 + 1), v9);
      *((_DWORD *)v3 + 114) = BlockPos::MAX;
      *((_DWORD *)v3 + 115) = unk_2816260;
      *((_DWORD *)v3 + 116) = dword_2816264;
    }
  }
  return Level::entityChangeDimension(*((_DWORD *)v3 + 773), v3, v4);
}


ListTag *__fastcall Entity::loadLinks(int a1, int a2, unsigned int a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1
  void *v5; // r0@1
  ListTag *result; // r0@2
  void **v7; // r5@4
  int v8; // r11@4
  __int64 *v9; // r7@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  int v14; // r8@21
  bool v15; // zf@21
  char v16; // r0@21
  __int64 v17; // r0@23
  __int64 v18; // r0@25
  unsigned int v19; // r6@25
  void **v20; // r8@25
  __int64 v21; // r0@25
  __int64 *v22; // r4@26
  int v23; // r5@26
  int v24; // r7@26
  int v25; // r3@26
  int v26; // r0@26
  int v27; // r3@26
  int v28; // r5@26
  int v29; // r7@26
  void *v30; // r0@28
  void *v31; // r0@29
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  int v34; // [sp+4h] [bp-7Ch]@1
  ListTag *v35; // [sp+10h] [bp-70h]@3
  ListTag *v36; // [sp+14h] [bp-6Ch]@1
  int v37; // [sp+1Ch] [bp-64h]@5
  int v38; // [sp+24h] [bp-5Ch]@4
  char v39; // [sp+28h] [bp-58h]@23
  int v40; // [sp+2Ch] [bp-54h]@26
  __int64 v41; // [sp+30h] [bp-50h]@25
  __int64 v42; // [sp+38h] [bp-48h]@25
  char v43; // [sp+40h] [bp-40h]@25
  int v44; // [sp+44h] [bp-3Ch]@26
  int v45; // [sp+4Ch] [bp-34h]@1
  char v46; // [sp+50h] [bp-30h]@24

  v3 = a2;
  v4 = a3;
  v34 = a1;
  sub_21E94B4((void **)&v45, "LinksTag");
  v36 = (ListTag *)CompoundTag::get(v3, (const void **)&v45);
  v5 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  result = v36;
  if ( v36 )
    result = (ListTag *)ListTag::size(v36);
    v35 = result;
    if ( result )
      v7 = (void **)&v38;
      v8 = 0;
      v9 = (__int64 *)(v34 + 56);
      {
        v14 = ListTag::get(v36, v8);
        sub_21E94B4(v7, "linkID");
        v15 = CompoundTag::getInt(v14, (const void **)v7) == 0;
        v16 = 2;
        if ( v15 )
          v16 = 1;
        v39 = v16;
        v17 = *v9;
        if ( ((unsigned int)v17 & HIDWORD(v17)) == -1 )
        {
          Level::getNewUniqueID((Level *)&v46, *(_DWORD *)(v34 + 3092));
          v17 = *(_QWORD *)&v46;
          *v9 = *(_QWORD *)&v46;
        }
        v41 = v17;
        sub_21E94B4((void **)&v37, "entityID");
        v18 = CompoundTag::getInt64(v14, (const void **)&v37);
        v19 = v4;
        v20 = v7;
        v42 = v18;
        v43 = 0;
        v21 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v21 == HIDWORD(v21) )
          std::vector<EntityLink,std::allocator<EntityLink>>::_M_emplace_back_aux<EntityLink>(__PAIR__(&v39, v4));
        else
          v22 = v9;
          v25 = v40;
          v24 = HIDWORD(v41);
          v23 = v41;
          *(_DWORD *)v21 = *(_DWORD *)&v39;
          *(_DWORD *)(v21 + 4) = v25;
          *(_DWORD *)(v21 + 8) = v23;
          *(_DWORD *)(v21 + 12) = v24;
          v26 = v21 + 16;
          v27 = HIDWORD(v42);
          v28 = *(_DWORD *)&v43;
          v29 = v44;
          *(_DWORD *)v26 = v42;
          *(_DWORD *)(v26 + 4) = v27;
          *(_DWORD *)(v26 + 8) = v28;
          *(_DWORD *)(v26 + 12) = v29;
          v9 = v22;
          v7 = v20;
          *(_DWORD *)(v19 + 4) += 32;
        v30 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v37 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v38 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        ++v8;
        result = v35;
        v4 = v19;
      }
      while ( (ListTag *)v8 != v35 );
  return result;
}


char *__fastcall Entity::_exitRide(Entity *this, const Entity *_R1, float _R2, float a4)
{
  float v13; // r1@2
  int v14; // r0@2
  mce::Math *v17; // r7@2
  float v18; // r1@2
  int v19; // r5@2
  float v20; // r1@2
  char *result; // r0@6
  void (__fastcall *v31)(Entity *, char *); // r4@7
  __int64 v32; // r0@7
  float v33; // r2@7
  float *v34; // r8@7
  __int64 v35; // r6@7
  char v36; // r4@8
  float v37; // r1@11
  float v38; // r2@11
  __int64 v39; // r6@11
  char v40; // r4@12
  float v41; // r1@15
  float v42; // r2@15
  __int64 v43; // r6@15
  char v44; // r4@16
  char v45; // [sp+4h] [bp-84h]@6
  char v46; // [sp+Ch] [bp-7Ch]@7
  float v47; // [sp+14h] [bp-74h]@7
  float v49; // [sp+20h] [bp-68h]@2
  float v50; // [sp+24h] [bp-64h]@2
  float v51; // [sp+28h] [bp-60h]@7

  __asm { VMOV            S0, R2 }
  _R9 = this;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R0 = &mce::Math::DEGRAD;
    __asm { VLDR            S16, [R0] }
LABEL_6:
    __asm
    {
      VLDR            S18, [R9,#0x16C]
      VLDR            S20, [R9,#0x170]
      VLDR            S22, [R9,#0x174]
    }
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R9 + 644))(_R9);
      VMOV            S0, R0
      VMUL.F32        S0, S16, S0
      VMOV            R5, S0
    _R6 = cosf(_R5);
      VLDR            S16, [R9,#0x60]
      VLDR            S24, [R9,#0x64]
      VLDR            S26, [R9,#0x68]
    Entity::getRotation((Entity *)&v45, (int)_R9);
    (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R9 + 72))(_R9, &v45);
    __asm { VMOV            S28, R6 }
    _R0 = sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
      VMUL.F32        S2, S28, S18
      VMUL.F32        S4, S0, S22
      VMUL.F32        S6, S28, S22
      VMUL.F32        S0, S0, S18
      VADD.F32        S2, S4, S2
      VADD.F32        S4, S24, S20
      VSUB.F32        S0, S6, S0
      VLDR            S6, [R9,#0x13C]
      VADD.F32        S2, S2, S16
      VADD.F32        S4, S4, S6
      VADD.F32        S0, S0, S26
      VSTR            S2, [SP,#0x88+var_68]
      VSTR            S4, [SP,#0x88+var_64]
      VSTR            S0, [SP,#0x88+var_60]
    return (char *)(*(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R9 + 48))(_R9, &v49);
    VLDR            S20, [R1,#0x48]
    VLDR            S22, [R1,#0x4C]
    VLDR            S24, [R1,#0x50]
  Entity::getInterpolatedRotation((Entity *)&v49, *(float *)&this, 0.0, a4);
  __asm { VLDR            S0, [SP,#0x88+var_64] }
  _R0 = &mce::Math::DEGRAD;
  __asm { VLDR            S16, [R0] }
  _R0 = &mce::Math::PI;
    VNMUL.F32       S0, S0, S16
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMOV            R6, S0
  _R8 = mce::Math::cos(_R6, COERCE_FLOAT(&mce::Math::PI));
  v14 = mce::Math::sin(_R6, v13);
  __asm { VLDR            S0, [SP,#0x88+var_68] }
  _R6 = v14;
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  v17 = (mce::Math *)(_R0 ^ 0x80000000);
  v19 = mce::Math::cos((mce::Math *)(_R0 ^ 0x80000000), v18);
  mce::Math::sin(v17, v20);
  __asm { VLDR            S26, [R9,#0x170] }
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R9 + 644))(_R9);
    VMOV            S0, R0
  cosf(_R0);
  __asm { VMOV.F32        S18, #1.0 }
  _R0 = v19 ^ 0x80000000;
    VMOV            S0, R6
    VLDR            S6, [R9,#0x64]
    VMOV            S2, R0
    VMOV            S4, R8
    VMUL.F32        S0, S0, S2
    VMUL.F32        S2, S4, S2
    VADD.F32        S4, S26, S18
    VMUL.F32        S8, S0, S0
    VMUL.F32        S10, S2, S2
    VADD.F32        S4, S4, S6
    VADD.F32        S6, S10, S8
    VMUL.F32        S8, S4, S4
    VADD.F32        S6, S6, S8
    VLDR            S8, =0.0001
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
      VLDR            S0, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S2, [R0,#8]
  else
      VDIV.F32        S2, S2, S6
      VDIV.F32        S4, S4, S6
      VDIV.F32        S0, S0, S6
    VLDR            S6, =1.6
    VMUL.F32        S0, S0, S6
    VMUL.F32        S4, S4, S6
    VMUL.F32        S2, S2, S6
    VADD.F32        S0, S0, S20
    VADD.F32        S4, S4, S22
    VADD.F32        S2, S2, S24
    VSTR            S0, [SP,#0x88+var_74]
    VSTR            S4, [SP,#0x88+var_70]
    VSTR            S2, [SP,#0x88+var_6C]
  v31 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R9 + 72);
  Entity::getRotation((Entity *)&v46, (int)_R9);
  v31(_R9, &v46);
  v32 = *(_QWORD *)((char *)_R9 + 76);
  v34 = (float *)((char *)_R9 + 72);
  v33 = *((float *)_R9 + 18);
  LODWORD(v51) = *(_QWORD *)((char *)_R9 + 76) >> 32;
  v49 = v33;
  v50 = *(float *)&v32;
  (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)_R9 + 48))(_R9, &v47);
  result = BlockSource::fetchAABBs(*((BlockSource **)_R9 + 771), (Entity *)((char *)_R9 + 264), 1);
  v35 = *(_QWORD *)result;
  if ( (_DWORD)v35 != HIDWORD(v35) )
    v36 = 0;
    do
      result = (char *)AABB::intersects((AABB *)v35, (Entity *)((char *)_R9 + 264));
      LODWORD(v35) = v35 + 28;
      v36 |= (unsigned __int8)result;
    while ( HIDWORD(v35) != (_DWORD)v35 );
    if ( v36 & 1 )
      (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)_R9 + 48))(_R9, &v49);
      __asm
      {
        VLDR            S0, [SP,#0x88+var_70]
        VADD.F32        S0, S0, S18
        VSTR            S0, [SP,#0x88+var_70]
      }
      v37 = *((float *)_R9 + 19);
      v38 = *((float *)_R9 + 20);
      v49 = *v34;
      v50 = v37;
      v51 = v38;
      (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)_R9 + 48))(_R9, &v47);
      result = BlockSource::fetchAABBs(*((BlockSource **)_R9 + 771), (Entity *)((char *)_R9 + 264), 1);
      v39 = *(_QWORD *)result;
      if ( (_DWORD)v39 != HIDWORD(v39) )
        v40 = 0;
        do
        {
          result = (char *)AABB::intersects((AABB *)v39, (Entity *)((char *)_R9 + 264));
          LODWORD(v39) = v39 + 28;
          v40 |= (unsigned __int8)result;
        }
        while ( HIDWORD(v39) != (_DWORD)v39 );
        if ( v40 & 1 )
          (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)_R9 + 48))(_R9, &v49);
          __asm
          {
            VLDR            S0, [SP,#0x88+var_70]
            VADD.F32        S0, S0, S18
            VSTR            S0, [SP,#0x88+var_70]
          }
          v41 = *((float *)_R9 + 19);
          v42 = *((float *)_R9 + 20);
          v49 = *v34;
          v50 = v41;
          v51 = v42;
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R9 + 48))(_R9, &v47);
          result = BlockSource::fetchAABBs(*((BlockSource **)_R9 + 771), (Entity *)((char *)_R9 + 264), 1);
          v43 = *(_QWORD *)result;
          if ( (_DWORD)v43 != HIDWORD(v43) )
            v44 = 0;
            do
            {
              result = (char *)AABB::intersects((AABB *)v43, (Entity *)((char *)_R9 + 264));
              LODWORD(v43) = v43 + 28;
              v44 |= (unsigned __int8)result;
            }
            while ( HIDWORD(v43) != (_DWORD)v43 );
            if ( v44 & 1 )
              (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R9 + 48))(_R9, &v49);
              goto LABEL_6;
  return result;
}


int __fastcall Entity::isDancing(Entity *this)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = *(_BYTE *)(v2 + 22) & 1;
  return v1;
}


int __fastcall Entity::_playFlySound(Entity *this, const BlockPos *a2, int a3)
{
  Entity *v3; // r7@1
  int result; // r0@1
  BlockSource *v5; // r8@2
  Level *v6; // r6@2
  int v7; // r0@2
  unsigned int v8; // r1@3
  char v9; // [sp+14h] [bp-24h]@1

  v3 = this;
  AABB::getCenter((AABB *)&v9, (int)this + 264);
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 288))(v3);
  if ( !result )
  {
    v5 = (BlockSource *)*((_DWORD *)v3 + 771);
    v6 = (Level *)*((_DWORD *)v3 + 773);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 488))(v3);
    v7 = SynchedEntityData::_find((Entity *)((char *)v3 + 176), 0);
    if ( v7 )
      v8 = (*(_BYTE *)(v7 + 17) & 8u) >> 3;
    result = Level::playSound(v6, v5, 3, (int)&v9);
  }
  return result;
}


int __fastcall Entity::getYHeadRot(Entity *this)
{
  return 0;
}


int __fastcall Entity::distanceToSqr(Entity *this, const Vec3 *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R0,#0x48]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Entity::restrictTo(int result, const BlockPos *a2, float a3)
{
  *(_DWORD *)(result + 3288) = *(_DWORD *)a2;
  *(_DWORD *)(result + 3292) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 3296) = *((_DWORD *)a2 + 2);
  *(float *)(result + 3284) = a3;
  return result;
}


unsigned int __fastcall Entity::isCharged(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 19) & 4u) >> 2;
  return v1;
}


int __fastcall Entity::getMapDecorationRotation(Entity *this)
{
  int v2; // [sp+0h] [bp-10h]@1
  int v3; // [sp+4h] [bp-Ch]@1

  Entity::getRotation((Entity *)&v2, (int)this);
  return v3;
}


signed int __fastcall Entity::teleportTo(Entity *this, const Vec3 *a2, int a3, int a4)
{
  int v6; // r12@3
  int v7; // r1@3
  int v8; // r2@3
  int v9; // r3@3
  int v14; // r1@3
  void (__fastcall *v15)(Entity *, int *); // r3@3
  signed int result; // r0@3
  int v17; // [sp+4h] [bp-1Ch]@3
  int v18; // [sp+Ch] [bp-14h]@3

  _R4 = this;
  _R5 = a2;
  if ( *((_DWORD *)this + 128) )
    (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)this + 596))(this, 1, 1);
  v6 = (int)_R4 + 84;
  *((_DWORD *)_R4 + 56) = 0;
  v7 = *(_DWORD *)_R5;
  *((_DWORD *)_R4 + 24) = *(_DWORD *)_R5;
  v8 = *((_DWORD *)_R5 + 1);
  *((_DWORD *)_R4 + 25) = v8;
  v9 = *((_DWORD *)_R5 + 2);
  *(_DWORD *)v6 = v7;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 8) = v9;
  *((_DWORD *)_R4 + 28) = 0;
  *((_DWORD *)_R4 + 29) = 0;
  *((_DWORD *)_R4 + 26) = v9;
  *((_DWORD *)_R4 + 27) = 0;
  (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R4 + 72))(_R4, (char *)_R4 + 120);
  __asm
  {
    VLDR            S0, [R4,#0x13C]
    VLDR            S2, [R5,#4]
    VADD.F32        S0, S2, S0
  }
  v14 = *((_DWORD *)_R5 + 2);
  v15 = *(void (__fastcall **)(Entity *, int *))(*(_DWORD *)_R4 + 48);
  v17 = *(_DWORD *)_R5;
  __asm { VSTR            S0, [SP,#0x20+var_18] }
  v18 = v14;
  v15(_R4, &v17);
  result = 1;
  *((_BYTE *)_R4 + 540) = 1;
  return result;
}


unsigned int __fastcall Entity::setInLove(Entity *this, Entity *a2)
{
  Entity *v2; // r4@1
  char *v3; // r5@1
  int v4; // r0@2
  char *v5; // r6@2
  int v6; // r2@2
  SynchedEntityData *v7; // r5@4
  unsigned int result; // r0@4
  __int64 v9; // r1@4
  __int64 v10; // r1@6
  int v11; // r0@7
  unsigned int v12; // r1@7
  __int64 v13; // [sp+0h] [bp-18h]@3

  v2 = this;
  v3 = (char *)this + 3304;
  if ( !a2 )
  {
    *(_DWORD *)v3 = -1;
    *((_DWORD *)this + 827) = -1;
    v7 = (Entity *)((char *)this + 176);
    result = SynchedEntityData::_get((Entity *)((char *)this + 176), 0);
    v10 = *(_QWORD *)(result + 16);
    *(_DWORD *)(result + 16) = v10 & 0xFFFFFF7F;
    *(_DWORD *)(result + 20) = HIDWORD(v10);
    if ( !(v10 & 0x80) )
      return result;
    goto LABEL_7;
  }
  v5 = (char *)a2 + 56;
  v4 = *((_DWORD *)a2 + 14);
  v6 = *((_DWORD *)a2 + 15);
  if ( (v4 & v6) == -1 )
    Level::getNewUniqueID((Level *)&v13, *((_DWORD *)a2 + 773));
    v6 = HIDWORD(v13);
    v4 = v13;
    *(_QWORD *)v5 = v13;
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 1) = v6;
  v7 = (Entity *)((char *)v2 + 176);
  result = SynchedEntityData::_get((Entity *)((char *)v2 + 176), 0);
  v9 = *(_QWORD *)(result + 16);
  *(_DWORD *)(result + 16) = v9 | 0x80;
  *(_DWORD *)(result + 20) = HIDWORD(v9);
  if ( !(v9 & 0x80) )
LABEL_7:
    v11 = SynchedEntityData::_get(v7, 0);
    *(_BYTE *)(v11 + 8) = 1;
    result = *(_WORD *)(v11 + 6);
    v12 = *((_WORD *)v2 + 94);
    if ( v12 >= result )
      LOWORD(v12) = result;
    *((_WORD *)v2 + 94) = v12;
    if ( *((_WORD *)v2 + 95) > result )
      result = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = result;
  return result;
}


unsigned int __fastcall Entity::isBaby(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 17) & 8u) >> 3;
  return v1;
}


signed int __fastcall Entity::getOwner(Entity *this)
{
  int v1; // r4@1
  __int64 v2; // r0@1

  v1 = *((_DWORD *)this + 773);
  v2 = SynchedEntityData::getInt64((Entity *)((char *)this + 176), 5);
  return j_j_j__ZNK5Level6getMobE14EntityUniqueID(v1, SHIDWORD(v2), v2, HIDWORD(v2));
}


Entity *__fastcall Entity::normalTick(Entity *this)
{
  Entity *v1; // r4@1
  int v2; // r2@2
  RailMovementComponent *v3; // r0@5
  AgeableComponent *v4; // r0@7
  BreedableComponent *v5; // r0@9
  EnvironmentSensorComponent *v6; // r0@11
  ExplodeComponent *v7; // r0@13
  BossComponent *v8; // r0@15
  AngryComponent *v9; // r0@17
  BreathableComponent *v10; // r0@19
  ProjectileComponent *v11; // r0@21
  LookAtComponent *v12; // r0@23
  TeleportComponent *v13; // r0@25
  MountTamingComponent *v14; // r0@27
  TimerComponent *v15; // r0@29
  PeekComponent *v16; // r0@31
  BoostableComponent *v17; // r0@33
  InteractComponent *v18; // r0@35
  ScaleByAgeComponent *v19; // r0@37
  TransformationComponent *v20; // r0@39
  TargetNearbyComponent *v21; // r0@41
  LeashableComponent *v22; // r0@43
  HopperComponent *v23; // r0@45
  CommandBlockComponent *v24; // r0@47
  RailActivatorComponent *v25; // r0@49
  AgentCommandComponent *v26; // r0@51
  SpawnEntityComponent *v27; // r0@53
  Entity *result; // r0@55

  v1 = this;
  *((_DWORD *)this + 38) = *((_DWORD *)this + 18);
  *((_DWORD *)this + 39) = *((_DWORD *)this + 19);
  *((_DWORD *)this + 40) = *((_DWORD *)this + 20);
  if ( !Level::isClientSide(*((Level **)this + 773)) )
  {
    v2 = 0;
    if ( *((_DWORD *)v1 + 107) > 0 )
      v2 = 1;
    Entity::setStatusFlag((int)v1, 0, v2);
  }
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v1 + 744))(v1);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v1 + 128))(v1);
  v3 = (RailMovementComponent *)*((_DWORD *)v1 + 800);
  if ( v3 )
    RailMovementComponent::tick(v3);
  v4 = (AgeableComponent *)*((_DWORD *)v1 + 777);
  if ( v4 )
    AgeableComponent::tick(v4);
  v5 = (BreedableComponent *)*((_DWORD *)v1 + 781);
  if ( v5 )
    BreedableComponent::tick(v5);
  v6 = (EnvironmentSensorComponent *)*((_DWORD *)v1 + 776);
  if ( v6 )
    EnvironmentSensorComponent::tick(v6);
  v7 = (ExplodeComponent *)*((_DWORD *)v1 + 783);
  if ( v7 )
    ExplodeComponent::tick(v7);
  v8 = (BossComponent *)*((_DWORD *)v1 + 809);
  if ( v8 )
    BossComponent::tick(v8);
  v9 = (AngryComponent *)*((_DWORD *)v1 + 778);
  if ( v9 )
    AngryComponent::tick(v9);
  v10 = (BreathableComponent *)*((_DWORD *)v1 + 780);
  if ( v10 )
    BreathableComponent::tick(v10);
  v11 = (ProjectileComponent *)*((_DWORD *)v1 + 787);
  if ( v11 )
    ProjectileComponent::tick(v11);
  v12 = (LookAtComponent *)*((_DWORD *)v1 + 786);
  if ( v12 )
    LookAtComponent::tick(v12);
  v13 = (TeleportComponent *)*((_DWORD *)v1 + 788);
  if ( v13 )
    TeleportComponent::tick(v13);
  v14 = (MountTamingComponent *)*((_DWORD *)v1 + 789);
  if ( v14 )
    MountTamingComponent::tick(v14);
  v15 = (TimerComponent *)*((_DWORD *)v1 + 790);
  if ( v15 )
    TimerComponent::tick(v15);
  v16 = (PeekComponent *)*((_DWORD *)v1 + 810);
  if ( v16 )
    PeekComponent::tick(v16);
  v17 = (BoostableComponent *)*((_DWORD *)v1 + 799);
  if ( v17 )
    BoostableComponent::tick(v17);
  v18 = (InteractComponent *)*((_DWORD *)v1 + 793);
  if ( v18 )
    InteractComponent::tick(v18);
  v19 = (ScaleByAgeComponent *)*((_DWORD *)v1 + 796);
  if ( v19 )
    ScaleByAgeComponent::tick(v19);
  v20 = (TransformationComponent *)*((_DWORD *)v1 + 798);
  if ( v20 )
    TransformationComponent::tick(v20);
  v21 = (TargetNearbyComponent *)*((_DWORD *)v1 + 797);
  if ( v21 )
    TargetNearbyComponent::tick(v21);
  v22 = (LeashableComponent *)*((_DWORD *)v1 + 802);
  if ( v22 )
    LeashableComponent::tick(v22);
  v23 = (HopperComponent *)*((_DWORD *)v1 + 803);
  if ( v23 )
    HopperComponent::tick(v23);
  v24 = (CommandBlockComponent *)*((_DWORD *)v1 + 804);
  if ( v24 )
    CommandBlockComponent::tick(v24);
  v25 = (RailActivatorComponent *)*((_DWORD *)v1 + 806);
  if ( v25 )
    RailActivatorComponent::tick(v25);
  v26 = (AgentCommandComponent *)*((_DWORD *)v1 + 812);
  if ( v26 )
    AgentCommandComponent::tick(v26);
  v27 = (SpawnEntityComponent *)*((_DWORD *)v1 + 814);
  if ( v27 )
    SpawnEntityComponent::tick(v27);
  result = (Entity *)*((_DWORD *)v1 + 817);
  if ( result )
    result = j_j_j__ZN14DanceComponent4tickEv(result);
  return result;
}


char *__fastcall Entity::getUniqueID(Entity *this)
{
  char *v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@2

  v1 = (char *)this + 56;
  if ( (*((_DWORD *)this + 14) & *((_DWORD *)this + 15)) == -1 )
  {
    Level::getNewUniqueID((Level *)&v3, *((_DWORD *)this + 773));
    *(_QWORD *)v1 = *(_QWORD *)&v3;
  }
  return v1;
}


    || (v4 = Entity::getDimension(v2), (*(int (**)(void))(*(_DWORD *)v4 + 132))() != 1) )
{
    result = 1;
  }
  else
  {
    result = 0;
    *(_BYTE *)(v3 + 6044) = 0;
  return result;
}


unsigned int __fastcall Entity::canPowerJump(Entity *this)
{
  unsigned int v1; // r4@1
  int v2; // r0@1

  v1 = 0;
  v2 = SynchedEntityData::_find((Entity *)((char *)this + 176), 0);
  if ( v2 )
    v1 = (*(_BYTE *)(v2 + 21) & 8u) >> 3;
  return v1;
}


int __fastcall Entity::setRot(int a1, int a2)
{
  mce::Math *v3; // r0@1
  float v4; // r1@1
  float v11; // r1@1
  float v12; // r1@1
  float v15; // r1@1
  int result; // r0@1

  _R4 = a1;
  v3 = *(mce::Math **)(a2 + 4);
  *(_DWORD *)(_R4 + 124) = v3;
  v4 = *(float *)a2;
  *(float *)(_R4 + 120) = v4;
  _R5 = mce::Math::wrapDegrees(v3, v4);
  __asm
  {
    VLDR            S2, [R4,#0x84]
    VMOV            S4, R5
    VLDR            S0, [R4,#0x7C]
    VADD.F32        S2, S2, S4
    VSUB.F32        S0, S2, S0
    VMOV            R0, S0
  }
  *(_DWORD *)(_R4 + 132) = mce::Math::wrapDegrees(_R0, v11);
  *(_DWORD *)(_R4 + 124) = _R5;
  _R5 = mce::Math::wrapDegrees(*(mce::Math **)(_R4 + 120), v12);
    VLDR            S2, [R4,#0x80]
    VLDR            S0, [R4,#0x78]
  result = mce::Math::wrapDegrees(_R0, v15);
  *(_DWORD *)(_R4 + 128) = result;
  *(_DWORD *)(_R4 + 120) = _R5;
  return result;
}


signed int __fastcall Entity::isAlive(Entity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 3097);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall Entity::setLastHitBB(int result, const Vec3 *a2, const Vec3 *a3)
{
  int v3; // r8@1
  const Vec3 *v4; // r9@1
  const Vec3 *v5; // r4@1
  const Vec3 *v6; // r7@1
  const Vec3 *i; // r5@1
  int v8; // [sp+0h] [bp-38h]@2

  v3 = result;
  v4 = a3;
  v5 = (const Vec3 *)(*(_QWORD *)(result + 292) >> 32);
  v6 = (const Vec3 *)*(_QWORD *)(result + 292);
  for ( i = a2; v5 != v6; v6 = (const Vec3 *)((char *)v6 + 28) )
  {
    AABB::grow((AABB *)&v8, v6, (int)v4);
    result = AABB::contains((AABB *)&v8, i);
    if ( result == 1 )
      *(_DWORD *)(v3 + 260) = v6;
  }
  return result;
}


int __fastcall Entity::_manageRiders(Entity *this, BlockSource *a2)
{
  BlockSource *v2; // r7@1
  Entity *i; // r4@1
  int v4; // r1@2
  int v5; // r0@3
  int result; // r0@4
  int *v7; // r5@5 OVERLAPPED
  int *v8; // r6@5 OVERLAPPED
  int v9; // t1@6
  __int64 v10; // r0@9
  unsigned int v11; // r3@9
  unsigned int v12; // r2@9
  int v13; // r5@10
  int v14; // r6@10
  int v15; // r5@18
  int v16; // r10@19
  int v17; // r3@21
  int v18; // r6@21
  int v19; // r7@21
  int v20; // r3@21
  int v21; // r6@21
  int v22; // r7@21
  int v23; // r0@21
  int v24; // r5@25
  int v25; // r6@26
  int v26; // r0@27
  bool v27; // zf@33
  BlockSource *v28; // [sp+4h] [bp-6Ch]@18
  void *ptr; // [sp+8h] [bp-68h]@18
  void *v30; // [sp+Ch] [bp-64h]@18
  void *v31; // [sp+10h] [bp-60h]@18
  void **v32; // [sp+18h] [bp-58h]@21
  int v33; // [sp+1Ch] [bp-54h]@21
  int v34; // [sp+20h] [bp-50h]@21
  char v35; // [sp+24h] [bp-4Ch]@21
  int v36; // [sp+28h] [bp-48h]@21
  int v37; // [sp+2Ch] [bp-44h]@21
  int v38; // [sp+30h] [bp-40h]@21
  int v39; // [sp+34h] [bp-3Ch]@21
  int v40; // [sp+38h] [bp-38h]@21
  int v41; // [sp+3Ch] [bp-34h]@21
  int v42; // [sp+40h] [bp-30h]@21
  int v43; // [sp+44h] [bp-2Ch]@21

  v2 = a2;
  for ( i = this; ; (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)i + 760))(i, v4, 0) )
  {
    v5 = *((_DWORD *)i + 123);
    if ( v5 == *((_DWORD *)i + 122) )
      break;
    v4 = *(_DWORD *)(v5 - 4);
    *((_DWORD *)i + 123) = v5 - 4;
  }
  result = Level::isClientSide(*((Level **)i + 773));
  if ( result )
    for ( *(_QWORD *)&v7 = *(_QWORD *)((char *)i + 476);
          v8 != v7;
          result = (*(int (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)i + 136))(i, v9, 0) )
    {
      v9 = *v7;
      ++v7;
    }
  else
    if ( *((_DWORD *)i + 791) )
      v10 = *(_QWORD *)((char *)i + 476);
      v11 = (HIDWORD(v10) - (signed int)v10) >> 2;
      v12 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)i + 12) + 380) + 4);
      if ( v11 > v12 )
      {
        v13 = v12 - v11;
        v14 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)(v10 + 4 * (v14 + ((unsigned int)(HIDWORD(v10) - v10) >> 2)) - 4) )
            (*(void (__fastcall **)(Entity *))(*(_DWORD *)i + 760))(i);
          if ( v13 == --v14 )
            break;
          v10 = *(_QWORD *)((char *)i + 476);
        }
      }
    else
      Entity::removeAllRiders(i, 0, 0);
    if ( *((_BYTE *)i + 529) )
      v28 = v2;
      Entity::getLinks((Entity *)&v30, (int)i);
      v15 = (int)v31;
      ptr = v30;
      if ( v30 != v31 )
        v16 = (int)v30;
        do
          if ( !Level::isClientSide(*((Level **)i + 773)) )
          {
            v33 = 2;
            v34 = 1;
            v35 = 0;
            v32 = &off_26D9898;
            v17 = *(_DWORD *)(v16 + 4);
            v18 = *(_DWORD *)(v16 + 8);
            v19 = *(_DWORD *)(v16 + 12);
            v36 = *(_DWORD *)v16;
            v37 = v17;
            v38 = v18;
            v39 = v19;
            v20 = *(_DWORD *)(v16 + 20);
            v21 = *(_DWORD *)(v16 + 24);
            v22 = *(_DWORD *)(v16 + 28);
            v40 = *(_DWORD *)(v16 + 16);
            v41 = v20;
            v42 = v21;
            v43 = v22;
            v23 = Level::getPacketSender(*((Level **)i + 773));
            (*(void (**)(void))(*(_DWORD *)v23 + 8))();
          }
          v16 += 32;
        while ( v15 != v16 );
      v2 = v28;
      if ( ptr )
        operator delete(ptr);
    *((_BYTE *)i + 529) = 0;
    result = *(_QWORD *)((char *)i + 476) >> 32;
    v24 = *(_QWORD *)((char *)i + 476);
    if ( v24 != result )
      v25 = result - 4;
      do
        v26 = *(_DWORD *)v24;
        if ( *(_BYTE *)(*(_DWORD *)v24 + 172) & 1 )
          result = 0;
        else if ( *(_BYTE *)(v26 + 3097) )
        else
          Entity::tick((Entity *)v26, v2);
          result = *((_BYTE *)i + 529);
        if ( result )
          break;
        result = v24 + 4;
        v27 = v25 == v24;
        v24 += 4;
      while ( !v27 );
  return result;
}


int __fastcall Entity::_setDimension(Entity *this, Dimension *a2)
{
  Dimension *v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  result = Dimension::getId(a2);
  *((_DWORD *)v3 + 9) = result;
  *((_DWORD *)v3 + 772) = v2;
  return result;
}


char *__fastcall Entity::lovePartnerId(Entity *this)
{
  return (char *)this + 3304;
}


int __fastcall Entity::setEnforceRiderRotationLimit(int result, bool a2)
{
  *(_BYTE *)(result + 3336) = a2;
  return result;
}


void __fastcall Entity::pushInitialParameter<Villager>(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char v5; // r0@1
  ClassID *v6; // r0@2
  __int64 v7; // kr00_8@4
  int v8; // r0@4
  void *v9; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  sub_21E8AF4(&v12, a2);
  v5 = `guard variable for'unsigned long long ClassID::getID<Villager>(void)::id[0];
  __dmb();
  if ( !(v5 & 1) )
  {
    v6 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Villager>(void)::id);
    if ( v6 )
    {
      ClassID::getID<Villager>(void)::id = j_ClassID::getNextID(v6);
      j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Villager>(void)::id);
    }
  }
  v7 = ClassID::getID<Villager>(void)::id;
  v8 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(v3 + 8),
         (int **)&v12);
  *(_QWORD *)v8 = v7;
  *(_DWORD *)(v8 + 8) = v4;
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall Entity::push(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0,#0x6C]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x6C]
    VLDR            S0, [R1,#4]
    VLDR            S2, [R0,#0x70]
    VSTR            S0, [R0,#0x70]
    VLDR            S0, [R1,#8]
    VLDR            S2, [R0,#0x74]
    VSTR            S0, [R0,#0x74]
  }
  return result;
}


int __fastcall Entity::getInterpolatedBodyRot(Entity *this, float a2, int a3, float a4)
{
  int v5; // [sp+0h] [bp-10h]@1
  int v6; // [sp+4h] [bp-Ch]@1

  Entity::getInterpolatedRotation((Entity *)&v5, *(float *)&this, a2, a4);
  return v6;
}


int __fastcall Entity::initializeComponents(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  int v4; // r0@2
  int v5; // r12@2
  int v6; // r1@2
  int v7; // r2@2
  __int64 v8; // r0@2
  int v9; // r3@2
  int v10; // r2@2
  int v11; // r5@3
  AgeableComponent *v12; // r7@5
  void *v13; // r0@6
  void *v14; // r0@9
  int v15; // r0@11
  EnvironmentSensorComponent *v16; // r7@17
  void *v17; // r0@18
  void *v18; // r0@21
  DamageSensorComponent *v19; // r7@25
  void *v20; // r0@26
  void *v21; // r0@29
  ProjectileComponent **v22; // r7@32
  ProjectileComponent *v23; // r0@33
  ProjectileComponent *v24; // r6@34
  MountTamingComponent *v25; // r7@39
  void *v26; // r0@40
  void *v27; // r0@43
  TimerComponent *v28; // r7@47
  void *v29; // r0@48
  void *v30; // r0@51
  ScaleByAgeComponent *v31; // r7@55
  void *v32; // r0@56
  void *v33; // r0@59
  TransformationComponent *v34; // r7@63
  void *v35; // r0@64
  void *v36; // r0@67
  RailMovementComponent *v37; // r7@71
  void *v38; // r0@72
  void *v39; // r0@75
  TargetNearbyComponent *v40; // r7@79
  void *v41; // r0@80
  void *v42; // r0@83
  RideableComponent *v43; // r7@87
  void *v44; // r0@88
  void *v45; // r0@91
  int v46; // r0@93
  int v47; // r1@93
  int v48; // r0@97
  InteractComponent *v49; // r7@103
  void *v50; // r0@104
  void *v51; // r0@107
  int v52; // r0@109
  HopperComponent *v53; // r7@115
  void *v54; // r0@116
  void *v55; // r0@119
  RailActivatorComponent *v56; // r7@123
  void *v57; // r0@124
  void *v58; // r0@127
  PeekComponent *v59; // r7@131
  void *v60; // r0@132
  void *v61; // r0@135
  AddRiderComponent **v62; // r7@138
  AddRiderComponent *v63; // r0@139
  AddRiderComponent *v64; // r6@140
  int v65; // r0@143
  ShareableComponent *v66; // r7@149
  void *v67; // r0@150
  void *v68; // r0@153
  int v69; // r0@155
  PhysicsComponent *v70; // r7@161
  void *v71; // r0@162
  void *v72; // r0@165
  int v73; // r0@167
  int v74; // r0@172
  int v76; // r6@175
  int v77; // r0@175
  unsigned int v78; // r1@175
  unsigned int v79; // r1@177
  unsigned int v80; // r0@177
  int v81; // r0@182
  bool v82; // zf@182
  int v83; // r6@185
  int v84; // r0@185
  unsigned int v85; // r1@185
  unsigned int v86; // r1@187
  unsigned int v87; // r0@187
  int v88; // r0@192
  bool v89; // zf@192
  int v90; // r6@195
  int v91; // r0@195
  unsigned int v92; // r1@195
  unsigned int v93; // r1@197
  unsigned int v94; // r0@197
  ExplodeComponent *v95; // r6@204
  void *v96; // r0@205
  void *v97; // r0@208
  int v98; // r0@210
  __int64 v99; // r1@210
  int v100; // r0@211
  unsigned int v101; // r0@211
  unsigned int v102; // r1@211
  int v103; // r0@217
  int v104; // r0@220
  __int64 v105; // r1@220
  int v106; // r0@221
  unsigned int v107; // r0@221
  unsigned int v108; // r1@221
  ContainerComponent *v109; // r5@228
  int v110; // r0@229
  int v111; // r0@232
  int v112; // r0@234
  unsigned int v113; // r1@234
  unsigned int v114; // r1@236
  unsigned int v115; // r0@236
  int v116; // r0@241
  unsigned int v117; // r1@241
  unsigned int v118; // r1@243
  unsigned int v119; // r0@243
  int v120; // r0@248
  unsigned int v121; // r1@248
  unsigned int v122; // r1@250
  unsigned int v123; // r0@250
  int v124; // r0@255
  int v125; // r1@255
  int v126; // r1@257
  int v127; // r0@259
  int v128; // r0@261
  __int64 v129; // r1@261
  int v130; // r0@262
  unsigned int v131; // r0@262
  unsigned int v132; // r1@262
  unsigned int v135; // r2@267
  unsigned int v136; // r1@267
  unsigned int v140; // r0@274
  int v141; // r0@279
  int v142; // r2@279
  int v143; // r6@281
  int v144; // r7@282
  int v145; // r0@282
  unsigned int v146; // r1@282
  unsigned int v147; // r1@284
  unsigned int v148; // r0@284
  int v149; // r7@289
  int v150; // r6@289
  int v151; // r0@289
  unsigned int v152; // r1@289
  unsigned int v153; // r1@293
  unsigned int v154; // r0@293
  int v155; // r0@298
  int result; // r0@298
  char v157; // [sp+0h] [bp-28h]@219
  char v158; // [sp+1h] [bp-27h]@169
  char v159; // [sp+2h] [bp-26h]@157
  char v160; // [sp+3h] [bp-25h]@145
  char v161; // [sp+4h] [bp-24h]@111
  char v162; // [sp+5h] [bp-23h]@99
  char v163; // [sp+6h] [bp-22h]@95
  char v164; // [sp+7h] [bp-21h]@13
  int v165; // [sp+8h] [bp-20h]@34
  int v166; // [sp+Ch] [bp-1Ch]@140

  v2 = a1;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 3081) )
  {
    v4 = *(_DWORD *)(a1 + 72);
    v5 = v2 + 84;
    *(_DWORD *)(v2 + 96) = v4;
    v6 = *(_DWORD *)(v2 + 76);
    *(_DWORD *)(v2 + 100) = v6;
    v7 = *(_DWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 104) = v7;
    *(_DWORD *)v5 = v4;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    *(_QWORD *)(v2 + 128) = *(_QWORD *)(v2 + 120);
    *(_BYTE *)(v2 + 3097) = 0;
    *(_DWORD *)(v2 + 3320) = 1065353216;
    *(_DWORD *)(v2 + 3324) = 0;
    *(_DWORD *)(v2 + 3328) = 0;
    *(_DWORD *)(v2 + 3332) = 1058642330;
    v8 = *(_QWORD *)&Color::NIL;
    v9 = qword_283E6B8;
    *(_DWORD *)(v2 + 244) = HIDWORD(qword_283E6B8);
    v10 = v2 + 232;
    *(_QWORD *)v10 = v8;
    *(_DWORD *)(v10 + 8) = v9;
  }
  v11 = EntityDefinitionDiffList::getChangedDescription((EntityDefinitionDiffList *)(v2 + 3340));
  if ( *(_DWORD *)(v11 + 276) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 276) )
    {
      v12 = *(AgeableComponent **)(v2 + 3108);
      if ( !v12 )
      {
        v12 = (AgeableComponent *)operator new(8u);
        AgeableComponent::AgeableComponent(v12, (Entity *)v2);
        v13 = *(void **)(v2 + 3108);
        *(_DWORD *)(v2 + 3108) = v12;
        if ( v13 )
        {
          operator delete(v13);
          v12 = *(AgeableComponent **)(v2 + 3108);
        }
      }
      AgeableComponent::initFromDefinition(v12);
    }
    else
      v14 = *(void **)(v2 + 3108);
      *(_DWORD *)(v2 + 3108) = 0;
      if ( v14 )
        operator delete(v14);
  v15 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 412);
  if ( v15 )
    LOBYTE(v15) = 1;
  v164 = v15;
  if ( *(_DWORD *)(v11 + 412) )
    _tryInitializeComponent<Entity,bool &,TameableComponent>(v2, &v164, (TameableComponent **)(v2 + 3136));
  if ( *(_DWORD *)(v11 + 312) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 312) )
      v16 = *(EnvironmentSensorComponent **)(v2 + 3104);
      if ( !v16 )
        v16 = (EnvironmentSensorComponent *)operator new(4u);
        EnvironmentSensorComponent::EnvironmentSensorComponent(v16, (Entity *)v2);
        v17 = *(void **)(v2 + 3104);
        *(_DWORD *)(v2 + 3104) = v16;
        if ( v17 )
          operator delete(v17);
          v16 = *(EnvironmentSensorComponent **)(v2 + 3104);
      EnvironmentSensorComponent::initFromDefinition(v16);
      v18 = *(void **)(v2 + 3104);
      *(_DWORD *)(v2 + 3104) = 0;
      if ( v18 )
        operator delete(v18);
  if ( *(_DWORD *)(v11 + 308) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 308) )
      v19 = *(DamageSensorComponent **)(v2 + 3204);
      if ( !v19 )
        v19 = (DamageSensorComponent *)operator new(0x10u);
        DamageSensorComponent::DamageSensorComponent(v19, (Entity *)v2);
        v20 = *(void **)(v2 + 3204);
        *(_DWORD *)(v2 + 3204) = v19;
        if ( v20 )
          operator delete(v20);
          v19 = *(DamageSensorComponent **)(v2 + 3204);
      DamageSensorComponent::initFromDefinition(v19);
      v21 = *(void **)(v2 + 3204);
      *(_DWORD *)(v2 + 3204) = 0;
      if ( v21 )
        operator delete(v21);
  if ( *(_DWORD *)(v11 + 368) )
    v22 = (ProjectileComponent **)(v2 + 3148);
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 368) )
      v23 = *v22;
      if ( !*v22 )
        v24 = (ProjectileComponent *)operator new(0x1D0u);
        ProjectileComponent::ProjectileComponent(v24, (Entity *)v2);
        v165 = 0;
        std::unique_ptr<ProjectileComponent,std::default_delete<ProjectileComponent>>::reset(
          (int *)(v2 + 3148),
          (int)v24);
        std::unique_ptr<ProjectileComponent,std::default_delete<ProjectileComponent>>::~unique_ptr(&v165);
        v23 = *v22;
      ProjectileComponent::initFromDefinition(v23);
      std::unique_ptr<ProjectileComponent,std::default_delete<ProjectileComponent>>::reset((int *)(v2 + 3148), 0);
  if ( *(_DWORD *)(v11 + 344) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 344) )
      v25 = *(MountTamingComponent **)(v2 + 3156);
      if ( !v25 )
        v25 = (MountTamingComponent *)operator new(0x14u);
        MountTamingComponent::MountTamingComponent(v25, (Entity *)v2);
        v26 = *(void **)(v2 + 3156);
        *(_DWORD *)(v2 + 3156) = v25;
        if ( v26 )
          operator delete(v26);
          v25 = *(MountTamingComponent **)(v2 + 3156);
      MountTamingComponent::initFromDefinition(v25);
      v27 = *(void **)(v2 + 3156);
      *(_DWORD *)(v2 + 3156) = 0;
      if ( v27 )
        operator delete(v27);
  if ( *(_DWORD *)(v11 + 428) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 428) )
      v28 = *(TimerComponent **)(v2 + 3160);
      if ( !v28 )
        v28 = (TimerComponent *)operator new(0x18u);
        TimerComponent::TimerComponent(v28, (Entity *)v2);
        v29 = *(void **)(v2 + 3160);
        *(_DWORD *)(v2 + 3160) = v28;
        if ( v29 )
          operator delete(v29);
          v28 = *(TimerComponent **)(v2 + 3160);
      TimerComponent::initFromDefinition(v28);
      v30 = *(void **)(v2 + 3160);
      *(_DWORD *)(v2 + 3160) = 0;
      if ( v30 )
        operator delete(v30);
  if ( *(_DWORD *)(v11 + 384) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 384) )
      v31 = *(ScaleByAgeComponent **)(v2 + 3184);
      if ( !v31 )
        v31 = (ScaleByAgeComponent *)operator new(0xCu);
        ScaleByAgeComponent::ScaleByAgeComponent(v31, (Entity *)v2);
        v32 = *(void **)(v2 + 3184);
        *(_DWORD *)(v2 + 3184) = v31;
        if ( v32 )
          operator delete(v32);
          v31 = *(ScaleByAgeComponent **)(v2 + 3184);
      ScaleByAgeComponent::initFromDefinition(v31);
      v33 = *(void **)(v2 + 3184);
      *(_DWORD *)(v2 + 3184) = 0;
      if ( v33 )
        operator delete(v33);
  if ( *(_DWORD *)(v11 + 436) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 436) )
      v34 = *(TransformationComponent **)(v2 + 3192);
      if ( !v34 )
        v34 = (TransformationComponent *)operator new(8u);
        TransformationComponent::TransformationComponent(v34, (Entity *)v2);
        v35 = *(void **)(v2 + 3192);
        *(_DWORD *)(v2 + 3192) = v34;
        if ( v35 )
          operator delete(v35);
          v34 = *(TransformationComponent **)(v2 + 3192);
      TransformationComponent::initFromDefinition(v34);
      v36 = *(void **)(v2 + 3192);
      *(_DWORD *)(v2 + 3192) = 0;
      if ( v36 )
        operator delete(v36);
  if ( *(_DWORD *)(v11 + 376) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 376) )
      v37 = *(RailMovementComponent **)(v2 + 3200);
      if ( !v37 )
        v37 = (RailMovementComponent *)operator new(8u);
        RailMovementComponent::RailMovementComponent(v37, (Entity *)v2);
        v38 = *(void **)(v2 + 3200);
        *(_DWORD *)(v2 + 3200) = v37;
        if ( v38 )
          operator delete(v38);
          v37 = *(RailMovementComponent **)(v2 + 3200);
      RailMovementComponent::initFromDefinition(v37);
      v39 = *(void **)(v2 + 3200);
      *(_DWORD *)(v2 + 3200) = 0;
      if ( v39 )
        operator delete(v39);
  if ( *(_DWORD *)(v11 + 416) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 416) )
      v40 = *(TargetNearbyComponent **)(v2 + 3188);
      if ( !v40 )
        v40 = (TargetNearbyComponent *)operator new(0xCu);
        TargetNearbyComponent::TargetNearbyComponent(v40, (Entity *)v2);
        v41 = *(void **)(v2 + 3188);
        *(_DWORD *)(v2 + 3188) = v40;
        if ( v41 )
          operator delete(v41);
          v40 = *(TargetNearbyComponent **)(v2 + 3188);
      TargetNearbyComponent::initFromDefinition(v40);
      v42 = *(void **)(v2 + 3188);
      *(_DWORD *)(v2 + 3188) = 0;
      if ( v42 )
        operator delete(v42);
  if ( *(_DWORD *)(v11 + 380) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 380) )
      v43 = *(RideableComponent **)(v2 + 3164);
      if ( !v43 )
        v43 = (RideableComponent *)operator new(4u);
        RideableComponent::RideableComponent(v43, (Entity *)v2);
        v44 = *(void **)(v2 + 3164);
        *(_DWORD *)(v2 + 3164) = v43;
        if ( v44 )
          operator delete(v44);
          v43 = *(RideableComponent **)(v2 + 3164);
      RideableComponent::initFromDefinition(v43);
      v45 = *(void **)(v2 + 3164);
      *(_DWORD *)(v2 + 3164) = 0;
      if ( v45 )
        operator delete(v45);
  v46 = *(_DWORD *)(v2 + 48);
  v47 = *(_DWORD *)(v46 + 356);
  if ( v47 )
    LOBYTE(v47) = 1;
  v163 = v47;
  if ( *(_DWORD *)(v11 + 356) )
    _tryInitializeComponent<Entity,bool &,NameableComponent>(v2, &v163, (NameableComponent **)(v2 + 3220));
    v46 = *(_DWORD *)(v2 + 48);
  v48 = *(_DWORD *)(v46 + 408);
  if ( v48 )
    LOBYTE(v48) = 1;
  v162 = v48;
  if ( *(_DWORD *)(v11 + 408) )
    _tryInitializeComponent<Entity,bool &,ShooterComponent>((Entity *)v2, &v162, (ShooterComponent **)(v2 + 3168));
  if ( *(_DWORD *)(v11 + 332) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 332) )
      v49 = *(InteractComponent **)(v2 + 3172);
      if ( !v49 )
        v49 = (InteractComponent *)operator new(8u);
        InteractComponent::InteractComponent(v49, (Entity *)v2);
        v50 = *(void **)(v2 + 3172);
        *(_DWORD *)(v2 + 3172) = v49;
        if ( v50 )
          operator delete(v50);
          v49 = *(InteractComponent **)(v2 + 3172);
      InteractComponent::initFromDefinition(v49);
      v51 = *(void **)(v2 + 3172);
      *(_DWORD *)(v2 + 3172) = 0;
      if ( v51 )
        operator delete(v51);
  v52 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 316);
  if ( v52 )
    LOBYTE(v52) = 1;
  v161 = v52;
  if ( *(_DWORD *)(v11 + 316) )
    _tryInitializeComponent<Entity,bool &,EquippableComponent>(v2, &v161, (EquippableComponent **)(v2 + 3176));
  if ( *(_DWORD *)(v11 + 476) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 476) )
      v53 = *(HopperComponent **)(v2 + 3212);
      if ( !v53 )
        v53 = (HopperComponent *)operator new(0x1Cu);
        HopperComponent::HopperComponent(v53, (Entity *)v2);
        v54 = *(void **)(v2 + 3212);
        *(_DWORD *)(v2 + 3212) = v53;
        if ( v54 )
          operator delete(v54);
          v53 = *(HopperComponent **)(v2 + 3212);
      HopperComponent::initFromDefinition(v53);
      v55 = *(void **)(v2 + 3212);
      *(_DWORD *)(v2 + 3212) = 0;
      if ( v55 )
        operator delete(v55);
  if ( *(_DWORD *)(v11 + 372) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 372) )
      v56 = *(RailActivatorComponent **)(v2 + 3224);
      if ( !v56 )
        v56 = (RailActivatorComponent *)operator new(4u);
        RailActivatorComponent::RailActivatorComponent(v56, (Entity *)v2);
        v57 = *(void **)(v2 + 3224);
        *(_DWORD *)(v2 + 3224) = v56;
        if ( v57 )
          operator delete(v57);
          v56 = *(RailActivatorComponent **)(v2 + 3224);
      RailActivatorComponent::initFromDefinition(v56);
      v58 = *(void **)(v2 + 3224);
      *(_DWORD *)(v2 + 3224) = 0;
      if ( v58 )
        operator delete(v58);
  if ( *(_DWORD *)(v11 + 364) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 364) )
      v59 = *(PeekComponent **)(v2 + 3240);
      if ( !v59 )
        v59 = (PeekComponent *)operator new(0xCu);
        PeekComponent::PeekComponent(v59, (Entity *)v2);
        v60 = *(void **)(v2 + 3240);
        *(_DWORD *)(v2 + 3240) = v59;
        if ( v60 )
          operator delete(v60);
          v59 = *(PeekComponent **)(v2 + 3240);
      PeekComponent::initFromDefinition(v59);
      v61 = *(void **)(v2 + 3240);
      *(_DWORD *)(v2 + 3240) = 0;
      if ( v61 )
        operator delete(v61);
  if ( *(_DWORD *)(v11 + 272) )
    v62 = (AddRiderComponent **)(v2 + 3100);
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 272) )
      v63 = *v62;
      if ( !*v62 )
        v64 = (AddRiderComponent *)operator new(0x10u);
        AddRiderComponent::AddRiderComponent(v64, (Entity *)v2);
        v166 = 0;
        std::unique_ptr<AddRiderComponent,std::default_delete<AddRiderComponent>>::reset((int *)(v2 + 3100), (int)v64);
        std::unique_ptr<AddRiderComponent,std::default_delete<AddRiderComponent>>::~unique_ptr(&v166);
        v63 = *v62;
      AddRiderComponent::initFromDefinition(v63);
      std::unique_ptr<AddRiderComponent,std::default_delete<AddRiderComponent>>::reset((int *)(v2 + 3100), 0);
  v65 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 432);
  if ( v65 )
    LOBYTE(v65) = 1;
  v160 = v65;
  if ( *(_DWORD *)(v11 + 432) )
    _tryInitializeComponent<Entity,bool &,TradeableComponent>(v2, &v160, (TradeableComponent **)(v2 + 3244));
  if ( *(_DWORD *)(v11 + 404) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 404) )
      v66 = *(ShareableComponent **)(v2 + 3252);
      if ( !v66 )
        v66 = (ShareableComponent *)operator new(4u);
        ShareableComponent::ShareableComponent(v66, (Entity *)v2);
        v67 = *(void **)(v2 + 3252);
        *(_DWORD *)(v2 + 3252) = v66;
        if ( v67 )
          operator delete(v67);
          v66 = *(ShareableComponent **)(v2 + 3252);
      ShareableComponent::initFromDefinition(v66);
      v68 = *(void **)(v2 + 3252);
      *(_DWORD *)(v2 + 3252) = 0;
      if ( v68 )
        operator delete(v68);
  v69 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 400);
  if ( v69 )
    LOBYTE(v69) = 1;
  v159 = v69;
  if ( *(_DWORD *)(v11 + 400) )
    _tryInitializeComponent<Entity,bool &,SpawnEntityComponent>(v2, &v159, (SpawnEntityComponent **)(v2 + 3256));
  if ( *(_DWORD *)(v11 + 460) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 460) )
      v70 = *(PhysicsComponent **)(v2 + 3260);
      if ( !v70 )
        v70 = (PhysicsComponent *)operator new(4u);
        PhysicsComponent::PhysicsComponent(v70, (Entity *)v2);
        v71 = *(void **)(v2 + 3260);
        *(_DWORD *)(v2 + 3260) = v70;
        if ( v71 )
          operator delete(v71);
          v70 = *(PhysicsComponent **)(v2 + 3260);
      PhysicsComponent::initFromDefinition(v70);
      v72 = *(void **)(v2 + 3260);
      *(_DWORD *)(v2 + 3260) = 0;
      if ( v72 )
        operator delete(v72);
  v73 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 424);
  if ( v73 )
    LOBYTE(v73) = 1;
  v158 = v73;
  if ( *(_DWORD *)(v11 + 424) )
    _tryInitializeComponent<Entity,bool &,TickWorldComponent>((Entity *)v2, &v158, (TickWorldComponent **)(v2 + 3264));
  if ( v3 != 1 )
    v74 = *(_DWORD *)(v11 + 440);
    _ZF = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 440);
      _ZF = v74 == 0;
    if ( !_ZF )
      v76 = *(_DWORD *)(v74 + 4);
      v77 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 2);
      v78 = *(_DWORD *)(v77 + 4);
      if ( (unsigned __int8)v78 == 2 && *(_DWORD *)(v77 + 12) != v76 )
        *(_DWORD *)(v77 + 12) = v76;
        *(_BYTE *)(v77 + 8) = 1;
        v79 = v78 >> 16;
        v80 = *(_WORD *)(v2 + 188);
        if ( v80 >= v79 )
          LOWORD(v80) = v79;
        *(_WORD *)(v2 + 188) = v80;
        if ( *(_WORD *)(v2 + 190) > v79 )
          LOWORD(v79) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v79;
    v81 = *(_DWORD *)(v11 + 444);
    v82 = v81 == 0;
    if ( v81 )
      v81 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 444);
      v82 = v81 == 0;
    if ( !v82 )
      v83 = *(_DWORD *)(v81 + 4);
      v84 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 44);
      v85 = *(_DWORD *)(v84 + 4);
      if ( (unsigned __int8)v85 == 2 && *(_DWORD *)(v84 + 12) != v83 )
        *(_DWORD *)(v84 + 12) = v83;
        *(_BYTE *)(v84 + 8) = 1;
        v86 = v85 >> 16;
        v87 = *(_WORD *)(v2 + 188);
        if ( v87 >= v86 )
          LOWORD(v87) = v86;
        *(_WORD *)(v2 + 188) = v87;
        if ( *(_WORD *)(v2 + 190) > v86 )
          LOWORD(v86) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v86;
    v88 = *(_DWORD *)(v11 + 120);
    v89 = v88 == 0;
    if ( v88 )
      v88 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 120);
      v89 = v88 == 0;
    if ( !v89 )
      v90 = *(_BYTE *)(v88 + 4);
      v91 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 3);
      v92 = *(_DWORD *)(v91 + 4);
      if ( !(_BYTE)v92 && *(_BYTE *)(v91 + 9) != v90 )
        *(_BYTE *)(v91 + 9) = v90;
        *(_BYTE *)(v91 + 8) = 1;
        v93 = v92 >> 16;
        v94 = *(_WORD *)(v2 + 188);
        if ( v94 >= v93 )
          LOWORD(v94) = v93;
        *(_WORD *)(v2 + 188) = v94;
        if ( *(_WORD *)(v2 + 190) > v93 )
          LOWORD(v93) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v93;
  if ( *(_DWORD *)(v11 + 320) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 320) )
      v95 = *(ExplodeComponent **)(v2 + 3132);
      if ( !v95 )
        v95 = (ExplodeComponent *)operator new(0x1Cu);
        ExplodeComponent::ExplodeComponent(v95, (Entity *)v2);
        v96 = *(void **)(v2 + 3132);
        *(_DWORD *)(v2 + 3132) = v95;
        if ( v96 )
          operator delete(v96);
          v95 = *(ExplodeComponent **)(v2 + 3132);
      ExplodeComponent::initFromDefinition(v95);
      v97 = *(void **)(v2 + 3132);
      *(_DWORD *)(v2 + 3132) = 0;
      if ( v97 )
        operator delete(v97);
      v98 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
      v99 = *(_QWORD *)(v98 + 16);
      *(_DWORD *)(v98 + 16) = v99 & 0xFFFFFBFF;
      *(_DWORD *)(v98 + 20) = HIDWORD(v99);
      if ( v99 & 0x400 )
        v100 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
        *(_BYTE *)(v100 + 8) = 1;
        v101 = *(_WORD *)(v100 + 6);
        v102 = *(_WORD *)(v2 + 188);
        if ( v102 >= v101 )
          LOWORD(v102) = v101;
        *(_WORD *)(v2 + 188) = v102;
        if ( *(_WORD *)(v2 + 190) > v101 )
          LOWORD(v101) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v101;
  if ( *(_DWORD *)(v11 + 388) )
    v103 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 388);
    if ( v103 )
      LOBYTE(v103) = 1;
    v157 = v103;
    if ( !_tryInitializeComponent<Entity,bool,SitComponent>(v2, &v157, (SitComponent **)(v2 + 3140)) )
      v104 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
      v105 = *(_QWORD *)(v104 + 16);
      *(_DWORD *)(v104 + 16) = v105 & 0xFF7FFFFF;
      *(_DWORD *)(v104 + 20) = HIDWORD(v105);
      if ( v105 & 0x800000 )
        v106 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
        *(_BYTE *)(v106 + 8) = 1;
        v107 = *(_WORD *)(v106 + 6);
        v108 = *(_WORD *)(v2 + 188);
        if ( v108 >= v107 )
          LOWORD(v108) = v107;
        *(_WORD *)(v2 + 188) = v108;
        if ( *(_WORD *)(v2 + 190) > v107 )
          LOWORD(v107) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v107;
  if ( *(_DWORD *)(v11 + 304) )
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 304) )
      v109 = *(ContainerComponent **)(v2 + 3128);
      if ( !v109 )
        v109 = (ContainerComponent *)operator new(0x18u);
        ContainerComponent::ContainerComponent((int)v109, v2);
        v110 = *(_DWORD *)(v2 + 3128);
        *(_DWORD *)(v2 + 3128) = v109;
        if ( v110 )
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v110 + 8))(v110, *(_DWORD *)(*(_DWORD *)v110 + 8));
          v109 = *(ContainerComponent **)(v2 + 3128);
      ContainerComponent::initFromDefinition(v109);
      v111 = *(_DWORD *)(v2 + 3128);
      *(_DWORD *)(v2 + 3128) = 0;
      if ( v111 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v111 + 8))(v111, *(_DWORD *)(*(_DWORD *)v111 + 8));
      v112 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 45);
      v113 = *(_DWORD *)(v112 + 4);
      if ( !(_BYTE)v113 && *(_BYTE *)(v112 + 9) )
        v114 = v113 >> 16;
        *(_WORD *)(v112 + 8) = 1;
        v115 = *(_WORD *)(v2 + 188);
        if ( v115 >= v114 )
          LOWORD(v115) = v114;
        *(_WORD *)(v2 + 188) = v115;
        if ( *(_WORD *)(v2 + 190) > v114 )
          LOWORD(v114) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v114;
      v116 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 46);
      v117 = *(_DWORD *)(v116 + 4);
      if ( (unsigned __int8)v117 == 2 && *(_DWORD *)(v116 + 12) )
        v118 = v117 >> 16;
        *(_DWORD *)(v116 + 12) = 0;
        *(_BYTE *)(v116 + 8) = 1;
        v119 = *(_WORD *)(v2 + 188);
        if ( v119 >= v118 )
          LOWORD(v119) = v118;
        *(_WORD *)(v2 + 188) = v119;
        if ( *(_WORD *)(v2 + 190) > v118 )
          LOWORD(v118) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v118;
      v120 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 47);
      v121 = *(_DWORD *)(v120 + 4);
      if ( (unsigned __int8)v121 == 2 && *(_DWORD *)(v120 + 12) )
        v122 = v121 >> 16;
        *(_DWORD *)(v120 + 12) = 0;
        *(_BYTE *)(v120 + 8) = 1;
        v123 = *(_WORD *)(v2 + 188);
        if ( v123 >= v122 )
          LOWORD(v123) = v122;
        *(_WORD *)(v2 + 188) = v123;
        if ( *(_WORD *)(v2 + 190) > v122 )
          LOWORD(v122) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v122;
  v124 = *(_DWORD *)(v2 + 48);
  v125 = *(_DWORD *)(v124 + 164);
  if ( v125 )
    *(_DWORD *)(v2 + 312) = *(_DWORD *)(v125 + 4);
  v126 = *(_DWORD *)(v124 + 212);
  if ( v126 )
    *(_DWORD *)(v2 + 332) = *(_DWORD *)(v126 + 4);
  v127 = *(_DWORD *)(v124 + 220);
  if ( v127 )
    *(_DWORD *)(v2 + 544) = *(_DWORD *)(v127 + 4);
  v128 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
  v129 = *(_QWORD *)(v128 + 16);
  *(_DWORD *)(v128 + 16) = v129 & 0xFFFF7FFF;
  *(_DWORD *)(v128 + 20) = HIDWORD(v129);
  if ( v129 & 0x8000 )
    v130 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 0);
    *(_BYTE *)(v130 + 8) = 1;
    v131 = *(_WORD *)(v130 + 6);
    v132 = *(_WORD *)(v2 + 188);
    if ( v132 >= v131 )
      LOWORD(v132) = v131;
    *(_WORD *)(v2 + 188) = v132;
    if ( *(_WORD *)(v2 + 190) > v131 )
      LOWORD(v131) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v131;
  Entity::setStatusFlag(v2, 11, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 168) != 0);
  Entity::setStatusFlag(v2, 35, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 196) != 0);
  Entity::setStatusFlag(v2, 9, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 172) != 0);
  Entity::setStatusFlag(v2, 8, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 184) != 0);
  Entity::setStatusFlag(v2, 34, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 176) != 0);
  Entity::setStatusFlag(v2, 10, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 180) != 0);
  Entity::setStatusFlag(v2, 38, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 188) != 0);
  Entity::setStatusFlag(v2, 29, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 192) != 0);
  Entity::setStatusFlag(v2, 27, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 200) != 0);
  _R6 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 216);
  _R0 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 39);
  v135 = *(_DWORD *)(_R0 + 4);
  v136 = v135 >> 16;
  if ( _R6 )
    if ( (unsigned __int8)v135 != 3 )
      goto LABEL_279;
    __asm
      VLDR            S0, [R6,#4]
      VLDR            S2, [R0,#0xC]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
    __asm { VSTR            S0, [R0,#0xC] }
  else
      VMOV.F32        S0, #1.0
    *(_DWORD *)(_R0 + 12) = 1065353216;
  *(_BYTE *)(_R0 + 8) = 1;
  v140 = *(_WORD *)(v2 + 188);
  if ( v140 >= v136 )
    LOWORD(v140) = HIWORD(v135);
  *(_WORD *)(v2 + 188) = v140;
  if ( *(_WORD *)(v2 + 190) > v136 )
    LOWORD(v136) = *(_WORD *)(v2 + 190);
  *(_WORD *)(v2 + 190) = v136;
LABEL_279:
  v141 = *(_DWORD *)(v2 + 48);
  v142 = *(_DWORD *)(v141 + 116);
  if ( v142 )
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 680))(
      v2,
      *(_QWORD *)(v142 + 4),
      *(_QWORD *)(v142 + 4) >> 32);
    v141 = *(_DWORD *)(v2 + 48);
  Entity::setStatusFlag(v2, 19, *(_DWORD *)(v141 + 104) != 0);
  Entity::setStatusFlag(v2, 21, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 108) != 0);
  Entity::setStatusFlag(v2, 42, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 232) != 0);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 388))(v2, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 112) != 0);
  v143 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 292);
  if ( v143 )
    v144 = *(_DWORD *)(v143 + 12);
    v145 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 76);
    v146 = *(_DWORD *)(v145 + 4);
    if ( (unsigned __int8)v146 == 2 && *(_DWORD *)(v145 + 12) != v144 )
      *(_DWORD *)(v145 + 12) = v144;
      *(_BYTE *)(v145 + 8) = 1;
      v147 = v146 >> 16;
      v148 = *(_WORD *)(v2 + 188);
      if ( v148 >= v147 )
        LOWORD(v148) = v147;
      *(_WORD *)(v2 + 188) = v148;
      if ( *(_WORD *)(v2 + 190) > v147 )
        LOWORD(v147) = *(_WORD *)(v2 + 190);
      *(_WORD *)(v2 + 190) = v147;
    v149 = *(_DWORD *)(v143 + 8);
    v150 = SynchedEntityData::getInt((SynchedEntityData *)(v2 + 176), 76);
    v151 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 75);
    v152 = *(_DWORD *)(v151 + 4);
    if ( v150 < v149 )
      v149 = v150;
    if ( (unsigned __int8)v152 == 2 && *(_DWORD *)(v151 + 12) != v149 )
      *(_DWORD *)(v151 + 12) = v149;
      *(_BYTE *)(v151 + 8) = 1;
      v153 = v152 >> 16;
      v154 = *(_WORD *)(v2 + 188);
      if ( v154 >= v153 )
        LOWORD(v154) = v153;
      *(_WORD *)(v2 + 188) = v154;
      if ( *(_WORD *)(v2 + 190) > v153 )
        LOWORD(v153) = *(_WORD *)(v2 + 190);
      *(_WORD *)(v2 + 190) = v153;
  Entity::setStatusFlag(v2, 47, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 136) != 0);
  v155 = *(_DWORD *)(v2 + 48);
  *(_BYTE *)(v2 + 427) = *(_DWORD *)(v155 + 136) != 0;
  result = *(_DWORD *)(v155 + 160) != 0;
  *(_BYTE *)(v2 + 449) = result;
  return result;
}


int __fastcall Entity::baseTick(Entity *this)
{
  int v2; // r0@2
  __int64 v3; // r1@2
  int v5; // r0@3
  int *v9; // r1@8
  int v10; // r5@13
  int v11; // r0@13
  int v12; // r0@17
  signed int v13; // r0@21
  unsigned __int64 *v14; // r6@23
  int v15; // r0@23
  int v17; // r7@29
  BlockSource *v18; // r8@36
  Level *v19; // r7@36
  int v20; // r0@36
  unsigned int v21; // r1@37
  signed int v22; // r6@39
  char *v23; // r0@40
  Random *v24; // r7@40
  int v28; // r5@42
  int v29; // r0@42
  unsigned __int64 *v30; // r6@46
  int v31; // r0@46
  bool v32; // zf@46
  int v33; // r0@51
  int v35; // r0@52
  int v38; // r2@67
  int result; // r0@70
  float v40; // [sp+14h] [bp-8Ch]@40
  char v41; // [sp+20h] [bp-80h]@35
  int v42; // [sp+2Ch] [bp-74h]@8
  float v43; // [sp+30h] [bp-70h]@8
  float v46; // [sp+3Ch] [bp-64h]@11

  _R4 = this;
  ++*((_DWORD *)this + 104);
  *((_DWORD *)_R4 + 84) = *((_DWORD *)_R4 + 85);
  if ( !*((_BYTE *)this + 539) )
  {
    v2 = *((_DWORD *)this + 18);
    *((_DWORD *)_R4 + 21) = v2;
    LODWORD(v3) = *((_DWORD *)_R4 + 19);
    *((_DWORD *)_R4 + 22) = v3;
    HIDWORD(v3) = *((_DWORD *)_R4 + 20);
    *((_DWORD *)_R4 + 23) = HIDWORD(v3);
    *((_DWORD *)_R4 + 24) = v2;
    *(_QWORD *)((char *)_R4 + 100) = v3;
    *((_QWORD *)_R4 + 16) = *((_QWORD *)_R4 + 15);
    *((_BYTE *)_R4 + 539) = 1;
  }
  *(_WORD *)((char *)_R4 + 539) = 0;
  _R1 = *((_DWORD *)_R4 + 52);
  *((_DWORD *)_R4 + 53) = _R1;
  v5 = *((_DWORD *)_R4 + 128);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 136))();
    __asm { VLDR            S16, [R4,#0xD0] }
  else
    __asm { VMOV            S16, R1 }
  __asm
    VMOV.F32        S18, #1.0
    VCMPE.F32       S16, S18
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    Vec3::xz((Vec3 *)&v43, (int)_R4 + 108);
    __asm
    {
      VLDR            S0, [SP,#0xA0+var_70]
      VLDR            S2, [SP,#0xA0+var_6C]
    }
    v9 = &v42;
      VMUL.F32        S0, S0, S0
      VLDR            S4, [SP,#0xA0+var_68]
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.2
      VADD.F32        S0, S0, S4
      VSQRT.F32       S0, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
    v42 = 1065353216;
      VADD.F32        S0, S0, S16
      VCMPE.F32       S0, S18
      VSTR            S0, [SP,#0xA0+var_64]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v9 = (int *)&v46;
    *((_DWORD *)_R4 + 52) = *v9;
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 748))(_R4);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 736))(_R4);
  v10 = 0;
  v11 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
  if ( v11 )
    v10 = *(_BYTE *)(v11 + 16) & 1;
  if ( *((_BYTE *)_R4 + 412) )
    *((_BYTE *)_R4 + 448) = v10;
    if ( !v10 )
      goto LABEL_21;
    v12 = 0;
    if ( v10 == *((_BYTE *)_R4 + 448) )
    v12 = *((_DWORD *)_R4 + 104);
  *((_DWORD *)_R4 + 111) = v12;
LABEL_21:
  v13 = *((_DWORD *)_R4 + 137);
  if ( v13 >= 1 )
    *((_DWORD *)_R4 + 137) = v13 - 1;
  v14 = (unsigned __int64 *)Level::getGameRules(*((Level **)_R4 + 773));
  v15 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
  _ZF = v15 == 0;
  if ( v15 )
    _ZF = (unsigned int)*(_BYTE *)(v15 + 21) >> 7 == 0;
  if ( _ZF
    && (GameRules::hasRule(v14, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1
     || GameRules::getBool(v14, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1) )
    v17 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 212))(_R4);
    if ( BlockSource::containsFireBlock(*((BlockSource **)_R4 + 771), (Entity *)((char *)_R4 + 264)) == 1 )
      Entity::burn(_R4, 1, 1);
      if ( !v17 )
      {
        (*(void (__fastcall **)(Entity *, signed int))(*(_DWORD *)_R4 + 504))(_R4, 8);
        goto LABEL_41;
      }
    else if ( v17 != 1 )
      goto LABEL_41;
    if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 320))(_R4) == 1
      && !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 216))(_R4) )
      AABB::getCenter((AABB *)&v41, (int)_R4 + 264);
      if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4) )
        v18 = (BlockSource *)*((_DWORD *)_R4 + 771);
        v19 = (Level *)*((_DWORD *)_R4 + 773);
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
        v20 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
        if ( v20 )
          v21 = (*(_BYTE *)(v20 + 17) & 8u) >> 3;
        Level::playSound(v19, v18, 27, (int)&v41);
      __asm { VLDR            D14, =2.32830644e-10 }
      v22 = 5;
      *((_DWORD *)_R4 + 107) = 0;
      do
        v23 = Level::getRandom(*((Level **)_R4 + 773));
        v24 = (Random *)v23;
        __asm
        {
          VLDR            S18, [R4,#0x108]
          VLDR            S20, [R4,#0x10C]
          VLDR            S22, [R4,#0x110]
          VLDR            S24, [R4,#0x114]
          VLDR            S26, [R4,#0x118]
          VLDR            S19, [R4,#0x11C]
        }
        _R0 = Random::_genRandInt32((Random *)v23);
          VMOV            S0, R0
          VCVT.F64.U32    D15, S0
        _R0 = Random::_genRandInt32(v24);
          VCVT.F64.U32    D8, S0
          VMUL.F64        D1, D15, D14
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D14
          VMUL.F64        D2, D8, D14
          VSUB.F32        S6, S24, S18
          VCVT.F32.F64    S2, D1
          VSUB.F32        S8, S26, S20
          VCVT.F32.F64    S4, D2
          VSUB.F32        S10, S19, S22
          VCVT.F32.F64    S0, D0
          VMUL.F32        S2, S2, S6
          VMUL.F32        S4, S4, S8
          VMUL.F32        S0, S0, S10
          VADD.F32        S2, S2, S18
          VADD.F32        S4, S4, S20
          VADD.F32        S0, S0, S22
          VSTR            S2, [SP,#0xA0+var_8C]
          VSTR            S4, [SP,#0xA0+var_88]
          VSTR            S0, [SP,#0xA0+var_84]
        Level::addParticle(*((_DWORD *)_R4 + 773), 6, (int)&v40);
        --v22;
      while ( v22 );
LABEL_41:
  if ( Level::isClientSide(*((Level **)_R4 + 773)) != 1 )
    if ( *((_DWORD *)_R4 + 107) < 1 )
      goto LABEL_60;
    v30 = (unsigned __int64 *)Level::getGameRules(*((Level **)_R4 + 773));
    v31 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
    v32 = v31 == 0;
    if ( v31 )
      v32 = (*(_BYTE *)(v31 + 21) & 0x80) == 0;
    if ( !v32 )
      _R1 = *((_DWORD *)_R4 + 107);
      goto LABEL_52;
    if ( GameRules::hasRule(v30, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) )
      v33 = GameRules::getBool(v30, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS);
      if ( !v33 )
LABEL_52:
        v35 = _R1 - 4;
        if ( _R1 - 4 < 0 )
          v35 = 0;
LABEL_59:
        *((_DWORD *)_R4 + 107) = v35;
        goto LABEL_60;
    else
    _R0 = 1717986919;
    __asm { SMMUL.W         R0, R1, R0 }
    if ( _R1 == 20 * (((signed int)_R0 >> 3) + (_R0 >> 31)) )
      (*(void (__fastcall **)(Entity *, signed int))(*(_DWORD *)_R4 + 412))(_R4, 1);
    v35 = _R1 - 1;
    goto LABEL_59;
  v28 = 0;
  v29 = SynchedEntityData::_find((Entity *)((char *)_R4 + 176), 0);
  if ( v29 )
    v28 = *(_BYTE *)(v29 + 16) & 1;
  *((_DWORD *)_R4 + 107) = v28;
LABEL_60:
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 216))(_R4) == 1 )
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 704))(_R4);
      VMOV.F32        S0, #0.5
      VLDR            S2, [R4,#0xE0]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0xE0]
    VLDR            S0, [R4,#0x4C]
    VCMPE.F32       S0, #0.0
  if ( _NF ^ _VF && !Level::isClientSide(*((Level **)_R4 + 773)) )
    *((_DWORD *)_R4 + 56) = 0;
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 692))(_R4);
  if ( !Level::isClientSide(*((Level **)_R4 + 773)) )
    v38 = 0;
    if ( *((_DWORD *)_R4 + 107) > 0 )
      v38 = 1;
    Entity::setStatusFlag((int)_R4, 0, v38);
  *((_BYTE *)_R4 + 412) = 0;
  result = *((_BYTE *)_R4 + 3096);
  if ( *((_BYTE *)_R4 + 3096) )
    result = BlockSource::fireEntityChanged(*((BlockSource **)_R4 + 771), _R4);
    *((_BYTE *)_R4 + 3096) = 0;
  return result;
}


int __fastcall Entity::setPreviousPosRot(int result, int a2, _QWORD *a3)
{
  int v3; // r12@2
  int v4; // r3@2
  int v5; // r1@2

  if ( !*(_BYTE *)(result + 539) )
  {
    v3 = *(_DWORD *)a2;
    *(_DWORD *)(result + 84) = *(_DWORD *)a2;
    v4 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(result + 88) = v4;
    v5 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(result + 92) = v5;
    *(_DWORD *)(result + 96) = v3;
    *(_DWORD *)(result + 100) = v4;
    *(_DWORD *)(result + 104) = v5;
    *(_QWORD *)(result + 128) = *a3;
    *(_BYTE *)(result + 539) = 1;
  }
  return result;
}


int __fastcall Entity::sendMotionPacketIfNeeded(Entity *this)
{
  int result; // r0@1
  int v3; // r5@2
  int v4; // r1@2
  signed int v5; // r0@2
  const MoveEntityPacketData *v6; // r6@6
  const Vec3 *v7; // r0@6
  Dimension *v8; // r0@7
  int v9; // r0@7
  int v10; // r2@7
  int v18; // r12@10
  Dimension *v19; // r5@10
  int v20; // r0@10
  __int64 v21; // r1@10
  void **v22; // [sp+0h] [bp-90h]@10
  signed int v23; // [sp+4h] [bp-8Ch]@10
  signed int v24; // [sp+8h] [bp-88h]@10
  char v25; // [sp+Ch] [bp-84h]@10
  __int64 v26; // [sp+10h] [bp-80h]@10
  __int64 v27; // [sp+18h] [bp-78h]@10
  int v28; // [sp+20h] [bp-70h]@10
  void **v29; // [sp+28h] [bp-68h]@7
  int v30; // [sp+2Ch] [bp-64h]@7
  int v31; // [sp+30h] [bp-60h]@7
  char v32; // [sp+34h] [bp-5Ch]@7
  unsigned int v33; // [sp+38h] [bp-58h]@7
  unsigned int v34; // [sp+3Ch] [bp-54h]@7
  int v35; // [sp+40h] [bp-50h]@7
  int v36; // [sp+44h] [bp-4Ch]@7
  int v37; // [sp+48h] [bp-48h]@7
  int v38; // [sp+4Ch] [bp-44h]@7
  int v39; // [sp+50h] [bp-40h]@7
  int v40; // [sp+54h] [bp-3Ch]@7
  unsigned int v41; // [sp+58h] [bp-38h]@2
  unsigned int v42; // [sp+5Ch] [bp-34h]@2
  int v43; // [sp+60h] [bp-30h]@7
  int v44; // [sp+64h] [bp-2Ch]@7
  int v45; // [sp+68h] [bp-28h]@7
  int v46; // [sp+6Ch] [bp-24h]@7
  int v47; // [sp+70h] [bp-20h]@7
  int v48; // [sp+74h] [bp-1Ch]@7

  _R4 = this;
  result = *((_DWORD *)this + 48);
  if ( result )
  {
    v3 = *((_DWORD *)_R4 + 773);
    (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)_R4 + 540))(&v41, _R4);
    v5 = Level::getPlayer(v3, v4, v41, v42);
    if ( v5 )
    {
      result = (*(int (**)(void))(*(_DWORD *)v5 + 1408))();
      if ( !result )
        return result;
    }
    else
      result = Level::isClientSide(*((Level **)_R4 + 773));
      if ( result )
    MoveEntityPacketData::MoveEntityPacketData((Entity *)&v41, (int)_R4);
    v6 = (const MoveEntityPacketData *)*((_DWORD *)_R4 + 48);
    v7 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 64))(_R4);
    if ( MoveEntityPacketData::distantEnough((MoveEntityPacketData *)&v41, v6, v7, 1.0) == 1 )
      v8 = (Dimension *)*((_DWORD *)_R4 + 772);
      v30 = 2;
      v31 = 1;
      v32 = 0;
      v29 = &off_26E94A4;
      v33 = v41;
      v34 = v42;
      v35 = v43;
      v36 = v44;
      v37 = v45;
      v38 = v46;
      v39 = v47;
      v40 = v48;
      Dimension::sendPacketForEntity(v8, _R4, (const Packet *)&v29, 0);
      v9 = *((_DWORD *)_R4 + 48);
      *(_QWORD *)v9 = *(_QWORD *)&v41;
      *(_DWORD *)(v9 + 8) = v43;
      *(_DWORD *)(v9 + 12) = v44;
      *(_DWORD *)(v9 + 16) = v45;
      v10 = v46;
      *(_BYTE *)(v9 + 24) = v47;
      *(_DWORD *)(v9 + 20) = v10;
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 64))(_R4);
    __asm
      VLDR            S0, [R0]
      VLDR            S6, [R4,#0xC4]
      VLDR            S2, [R0,#4]
      VLDR            S8, [R4,#0xC8]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R0,#8]
      VSUB.F32        S2, S2, S8
      VLDR            S10, [R4,#0xCC]
      VSUB.F32        S4, S4, S10
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.04
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      _R0 = *((_DWORD *)_R4 + 27);
      _R1 = *((_DWORD *)_R4 + 28);
      _R2 = *((_DWORD *)_R4 + 29);
LABEL_10:
      v18 = (int)_R4 + 196;
      *(_DWORD *)v18 = _R0;
      *(_DWORD *)(v18 + 4) = _R1;
      *(_DWORD *)(v18 + 8) = _R2;
      v19 = (Dimension *)*((_DWORD *)_R4 + 772);
      v23 = 2;
      v24 = 1;
      v25 = 0;
      v22 = &off_26E9684;
      v26 = *((_QWORD *)_R4 + 414);
      v20 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 64))(_R4);
      v21 = *(_QWORD *)v20;
      v28 = *(_DWORD *)(v20 + 8);
      v27 = v21;
      return Dimension::sendPacketForEntity(v19, _R4, (const Packet *)&v22, 0);
      VCMPE.F32       S0, #0.0
      __asm
      {
        VLDR            S0, [R4,#0x6C]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VLDR            S2, [R4,#0x70]
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm
          {
            VLDREQ          S4, [R4,#0x74]
            VCMPEEQ.F32     S4, #0.0
            VMRSEQ          APSR_nzcv, FPSCR
            VMOV            R0, S0
            VMOV            R1, S2
            VMOV            R2, S4
          }
          goto LABEL_10;
  }
  return result;
}
