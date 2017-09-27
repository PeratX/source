

void __fastcall BossComponent::_handleRegisterPlayers(BossComponent *this)
{
  BossComponent::_handleRegisterPlayers(this);
}


void __fastcall BossComponent::setOverlay(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 20) != a2 )
  {
    *(_DWORD *)(a1 + 20) = a2;
    j_j_j__ZN13BossComponent19_broadcastBossEventE19BossEventUpdateType(a1, 7);
  }
}


int __fastcall BossComponent::setRangeSqr(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


void __fastcall BossComponent::setColor(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 16) != a2 )
  {
    *(_DWORD *)(a1 + 16) = a2;
    j_j_j__ZN13BossComponent19_broadcastBossEventE19BossEventUpdateType(a1, 7);
  }
}


int __fastcall BossComponent::registerPlayer(int result, Player *a2)
{
  Player *v2; // r4@1
  int v3; // r5@1
  bool v4; // zf@1
  Level *v5; // r0@4
  Entity *v6; // r0@5
  int (__fastcall *v7)(Player *); // r5@5
  __int64 v8; // r2@5

  v2 = a2;
  v3 = result;
  v4 = a2 == 0;
  if ( a2 )
  {
    result = *(_BYTE *)(result + 4);
    v4 = result == 0;
  }
  if ( !v4 )
    ++*(_DWORD *)(v3 + 28);
    v5 = (Level *)Entity::getLevel(*(Entity **)v3);
    result = Level::getPrimaryLocalPlayer(v5);
    if ( (Player *)result != v2 )
    {
      v6 = *(Entity **)v3;
      v7 = *(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 1424);
      v8 = *(_QWORD *)Entity::getUniqueID(v6);
      result = v7(v2);
    }
  return result;
}


signed int __fastcall BossComponent::isWithinRange(BossComponent *this, const Player *a2)
{
  signed int result; // r0@1

  _R4 = this;
  _R0 = Entity::distanceToSqr(*(Entity **)this, a2);
  __asm
  {
    VLDR            S0, [R4,#0x24]
    VMOV            S2, R0
  }
  result = 0;
    VCVT.F32.S32    S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


signed int __fastcall BossComponent::tick(BossComponent *this)
{
  BossComponent *v1; // r4@1
  __int64 v8; // r6@5
  int v9; // r3@5
  signed int result; // r0@5
  signed int v11; // r7@5
  signed int v12; // [sp+0h] [bp-30h]@12
  unsigned int v13; // [sp+8h] [bp-28h]@5
  int v14; // [sp+Ch] [bp-24h]@7

  v1 = this;
  _R0 = Mob::getHealth(*(Mob **)this);
  if ( *((_DWORD *)v1 + 8) != _R0 )
  {
    *((_DWORD *)v1 + 8) = _R0;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
    _R0 = Mob::getMaxHealth(*(Mob **)v1);
      VMOV.F32        S2, #1.0
      VCVT.F32.S32    S0, S0
      VDIV.F32        S0, S16, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
    __asm { VSTR            S2, [R4,#8] }
    BossComponent::_broadcastBossEvent((int)v1, 4);
  }
  v8 = *((_QWORD *)v1 + 5);
  sub_21E034C(&v13);
  v9 = (unsigned __int64)(v8 + 1000000000) >> 32;
  result = 0;
  v11 = 0;
  if ( (signed int)v8 + 1000000000 >= v13 )
    result = 1;
  if ( v9 >= v14 )
    v11 = 1;
  if ( v9 == v14 )
    v11 = result;
  if ( !v11 )
    BossComponent::_handleRegisterPlayers(v1);
    sub_21E034C(&v12);
    result = v12;
    *((_QWORD *)v1 + 5) = *(_QWORD *)&v12;
  return result;
}


int __fastcall BossComponent::BossComponent(int a1, Mob *a2, char a3)
{
  int v3; // r4@1
  int v4; // r1@1
  unsigned __int8 v5; // cf@1
  double v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r5@3
  int v11; // [sp+0h] [bp-20h]@1
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 8) = 1065353216;
  *(_BYTE *)(a1 + 12) = a3;
  *(_BYTE *)(a1 + 13) = 0;
  *(_DWORD *)(a1 + 16) = 5;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = __PAIR__(3000, Mob::getHealth(a2));
  sub_21E034C(&v11);
  v4 = v12;
  v5 = __CFADD__(v11, -900000000);
  *(_DWORD *)(v3 + 40) = v11 - 900000000;
  *(_DWORD *)(v3 + 44) = v4 - !v5;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  HIDWORD(v6) = 10;
  *(_DWORD *)(v3 + 64) = 1065353216;
  LODWORD(v6) = v3 + 64;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = sub_21E6254(v6);
  *(_DWORD *)(v3 + 52) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v3 + 72) = 0;
    v9 = (void *)(v3 + 72);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 48) = v9;
  return v3;
}


void __fastcall BossComponent::setDarkenSky(BossComponent *this, int a2)
{
  if ( *((_BYTE *)this + 12) != a2 )
  {
    *((_BYTE *)this + 12) = a2;
    j_j_j__ZN13BossComponent19_broadcastBossEventE19BossEventUpdateType((int)this, 6);
  }
}


int __fastcall BossComponent::unRegisterPlayer(int result, Player *a2)
{
  Player *v2; // r5@1
  int v3; // r4@1
  Level *v4; // r0@2
  void (__fastcall *v5)(Player *); // r6@3
  __int64 v6; // r2@3
  int v7; // r0@4
  Entity *v8; // r2@4

  v2 = a2;
  v3 = result;
  if ( a2 )
  {
    v4 = (Level *)Entity::getLevel(*(Entity **)result);
    if ( (Player *)Level::getPrimaryLocalPlayer(v4) == v2 )
    {
      v7 = Entity::getLevel(*(Entity **)v3);
      v8 = *(Entity **)v3;
      Level::broadcastBossEvent(v7);
    }
    else
      v5 = *(void (__fastcall **)(Player *))(*(_DWORD *)v2 + 1428);
      v6 = *(_QWORD *)Entity::getUniqueID(*(Entity **)v3);
      v5(v2);
    result = *(_DWORD *)(v3 + 28) - 1;
    *(_DWORD *)(v3 + 28) = result;
  }
  return result;
}


int __fastcall BossComponent::addPlayerToParty(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r9@1
  int v6; // r10@1
  unsigned int v7; // r5@1
  unsigned int v8; // r7@1
  int v9; // r4@1
  int result; // r0@1
  int v11; // r8@2
  int v12; // r6@2
  bool v13; // zf@3
  int v14; // r11@8
  bool v15; // zf@11
  _DWORD *v16; // r0@15
  int v17; // [sp+0h] [bp-28h]@1

  v5 = HIDWORD(a3);
  v6 = a3;
  v17 = a1 + 48;
  v7 = *(_DWORD *)(a1 + 52);
  v8 = 522133279 * a3 ^ a4 ^ HIDWORD(a3) ^ ((522133279 * (unsigned __int64)(unsigned int)a4 >> 32)
                                          + 522133279 * HIDWORD(a4));
  v9 = v8 % *(_DWORD *)(a1 + 52);
  result = *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4 * v9);
  if ( !result )
    goto LABEL_15;
  v11 = *(_DWORD *)result;
  v12 = *(_DWORD *)(*(_DWORD *)result + 32);
  while ( 1 )
  {
    v13 = v12 == v8;
    if ( v12 == v8 )
      v13 = *(_QWORD *)(v11 + 8) == a3;
    if ( v13 && *(_QWORD *)(v11 + 16) == a4 )
      break;
    v14 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
    {
      v12 = *(_DWORD *)(v14 + 32);
      result = v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v14 + 32) % v7 == v9 )
        continue;
    }
  }
  v15 = result == 0;
  if ( result )
    result = *(_DWORD *)result;
    v15 = result == 0;
  if ( v15 )
LABEL_15:
    v16 = operator new(0x28u);
    *v16 = 0;
    v16[2] = v6;
    v16[3] = v5;
    *((_QWORD *)v16 + 2) = a4;
    v16[6] = 0;
    result = std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v17,
               v9,
               v8,
               (int)v16);
  *(_DWORD *)(result + 24) += a5;
  return result;
}


unsigned int __fastcall BossComponent::setCreateWorldFog(BossComponent *this, int a2, int a3)
{
  int v3; // r8@1
  BossComponent *v4; // r9@1
  int v5; // r3@3
  int v6; // r4@3
  int v7; // r5@3
  int v8; // r6@3
  int v9; // r7@3
  int v10; // r0@3
  int v11; // r3@3
  int v12; // r4@3
  int v13; // r5@3
  int v14; // r6@3
  int v15; // r7@3
  int v16; // r9@3

  v3 = a2;
  v4 = this;
  if ( a3 != *(_BYTE *)(a2 + 13) )
  {
    *(_BYTE *)(a2 + 13) = a3;
    BossComponent::_broadcastBossEvent(a2, 6);
  }
  v5 = *(_DWORD *)(v3 + 4);
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  v8 = *(_DWORD *)(v3 + 16);
  v9 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)v4 = *(_DWORD *)v3;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  *((_DWORD *)v4 + 4) = v8;
  *((_DWORD *)v4 + 5) = v9;
  v10 = (int)v4 + 24;
  v11 = *(_DWORD *)(v3 + 28);
  v12 = *(_DWORD *)(v3 + 32);
  v13 = *(_DWORD *)(v3 + 36);
  v14 = *(_DWORD *)(v3 + 40);
  v15 = *(_DWORD *)(v3 + 44);
  *(_DWORD *)v10 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  *(_DWORD *)(v10 + 20) = v15;
  *((_DWORD *)v4 + 12) = 0;
  v16 = (int)v4 + 48;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(v16 + 8) = 0;
  *(_DWORD *)(v16 + 12) = *(_DWORD *)(v3 + 60);
  *(_QWORD *)(v16 + 16) = *(_QWORD *)(v3 + 64);
  return std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<mce::UUID const,int>,true> const*)#1}>(
           v16,
           v3 + 48);
}


void __fastcall BossComponent::setHealthBarVisible(BossComponent *this, int a2)
{
  int v2; // r2@2

  if ( a2 != *((_BYTE *)this + 4) )
  {
    v2 = 2;
    *((_BYTE *)this + 4) = a2;
    if ( a2 )
      v2 = 0;
    j_j_j__ZN13BossComponent19_broadcastBossEventE19BossEventUpdateType((int)this, v2);
  }
}


void __fastcall BossComponent::_sendBossEvent(Entity **a1, int a2, Player *a3)
{
  BossComponent::_sendBossEvent(a1, a2, a3);
}


void __fastcall BossComponent::setPercent(BossComponent *this, float _R1)
{
  BossComponent::setPercent(this, _R1);
}


void __fastcall BossComponent::setHealthBarVisible(BossComponent *this, int a2)
{
  BossComponent::setHealthBarVisible(this, a2);
}


__int64 __fastcall BossComponent::getOwnerUniqueID(BossComponent *this, Entity **a2)
{
  BossComponent *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = *(_QWORD *)Entity::getUniqueID(*a2);
  *(_QWORD *)v2 = result;
  return result;
}


int *__fastcall BossComponent::getName(BossComponent *this, int a2)
{
  int *v2; // r4@1
  int *v3; // r0@1

  v2 = (int *)this;
  v3 = (int *)(*(int (**)(void))(**(_DWORD **)a2 + 188))();
  return sub_21E8AF4(v2, v3);
}


void __fastcall BossComponent::_sendBossEvent(Entity **a1, int a2, Player *a3)
{
  Entity **v3; // r8@1
  Player *v4; // r9@1
  int v5; // r11@1
  Level *v6; // r0@1
  int v7; // r10@1
  Entity *v8; // ST00_4@1
  int v9; // ST08_4@1
  Entity *v10; // ST0C_4@1
  int v11; // ST10_4@1
  int v12; // ST14_4@1
  Entity *v13; // ST18_4@1
  int *v14; // r0@1
  void *v15; // r0@1
  void *v16; // r4@2
  void (__fastcall *v17)(int, char *, void ***, int); // r6@6
  int v18; // r0@6
  void *v19; // r0@6
  unsigned int *v20; // r2@8
  signed int v21; // r1@10
  void *v22; // [sp+30h] [bp-88h]@1
  Entity *v23; // [sp+34h] [bp-84h]@1
  void *ptr; // [sp+38h] [bp-80h]@1
  Entity *v25; // [sp+3Ch] [bp-7Ch]@1
  __int64 v26; // [sp+40h] [bp-78h]@1
  int v27; // [sp+48h] [bp-70h]@4
  void **v28; // [sp+50h] [bp-68h]@1
  int v29; // [sp+54h] [bp-64h]@1
  int v30; // [sp+58h] [bp-60h]@1
  char v31; // [sp+5Ch] [bp-5Ch]@1
  signed int v32; // [sp+60h] [bp-58h]@1
  signed int v33; // [sp+64h] [bp-54h]@1
  __int64 v34; // [sp+68h] [bp-50h]@1
  signed int v35; // [sp+70h] [bp-48h]@1
  signed int v36; // [sp+74h] [bp-44h]@1
  int v37; // [sp+78h] [bp-40h]@1
  int v38; // [sp+7Ch] [bp-3Ch]@1
  int v39; // [sp+80h] [bp-38h]@1
  int v40; // [sp+84h] [bp-34h]@1
  int v41; // [sp+88h] [bp-30h]@1
  __int16 v42; // [sp+8Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (Level *)Entity::getLevel(*a1);
  v7 = Level::getPacketSender(v6);
  v8 = *v3;
  v9 = (int)v3[2];
  v10 = v3[3];
  v11 = (int)v3[4];
  v12 = (int)v3[5];
  v13 = v3[6];
  v22 = 0;
  v23 = v3[13];
  ptr = 0;
  v25 = v3[15];
  v26 = *((_QWORD *)v3 + 8);
  std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<mce::UUID,std::pair<mce::UUID const,int>,std::allocator<std::pair<mce::UUID const,int>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<mce::UUID const,int>,true> const*)#1}>(
    (int)&v22,
    (int)(v3 + 12));
  v29 = 2;
  v30 = 1;
  v31 = 0;
  v28 = &off_26E6444;
  v32 = 1;
  v33 = 2;
  v34 = *(_QWORD *)Entity::getUniqueID(v8);
  v35 = -1;
  v36 = -1;
  v37 = v5;
  v14 = (int *)(*(int (**)(void))(*(_DWORD *)v8 + 188))();
  sub_21E8AF4(&v38, v14);
  v39 = v9;
  v40 = v11;
  v41 = v12;
  v42 = (signed __int16)v10;
  v15 = ptr;
  if ( ptr )
  {
    do
    {
      v16 = *(void **)v15;
      operator delete(v15);
      v15 = v16;
    }
    while ( v16 );
  }
  _aeabi_memclr4(v22, 4 * (_DWORD)v23);
  v25 = 0;
  if ( v22 && &v27 != v22 )
    operator delete(v22);
  v17 = *(void (__fastcall **)(int, char *, void ***, int))(*(_DWORD *)v7 + 16);
  v18 = Player::getClientSubId(v4);
  v17(v7, (char *)v4 + 4392, &v28, v18);
  v19 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall BossComponent::sendDeathTelemetry(BossComponent *this)
{
  BossComponent::sendDeathTelemetry(this);
}


void __fastcall BossComponent::_handleRegisterPlayers(BossComponent *this)
{
  Level *v2; // r0@1
  int i; // r11@1
  Level *v4; // r0@4
  Player *v5; // r0@4
  Player *v6; // r9@4
  int v7; // r6@5
  __int64 *v8; // r0@5
  int v9; // r0@5
  int v10; // r7@6
  int v11; // r5@7
  int v12; // r8@7
  __int64 v13; // r0@7
  __int64 *v14; // r5@7
  unsigned int v15; // r8@8
  unsigned int v16; // r4@8
  unsigned int v17; // r8@9
  unsigned int v18; // r4@9
  unsigned int v19; // r8@10
  unsigned int v20; // r4@10
  int v21; // r0@13
  __int64 v22; // r4@15
  __int64 v23; // r0@15
  __int64 v24; // kr08_8@19
  __int64 v25; // kr10_8@21
  __int64 *v26; // r7@25
  Dimension *v27; // r0@25
  int v28; // r6@25
  Dimension *v29; // r0@25
  Entity **v35; // r0@30
  int v36; // r1@30
  __int64 *v37; // [sp+0h] [bp-28h]@5

  _R10 = this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  for ( i = *((_DWORD *)Level::getPlayerList(v2) + 2); i; i = *(_DWORD *)i )
  {
    v4 = (Level *)Entity::getLevel(*(Entity **)_R10);
    v5 = (Player *)Level::getPlayer(v4, (const mce::UUID *)(i + 8));
    v6 = v5;
    if ( !v5 )
      continue;
    v7 = *(_DWORD *)Player::getTrackedBosses(v5);
    v8 = (__int64 *)*((_DWORD *)Player::getTrackedBosses(v6) + 1);
    v37 = v8;
    v9 = ((signed int)v8 - v7) >> 5;
    if ( v9 < 1 )
    {
LABEL_12:
      if ( 1 == ((signed int)v37 - v7) >> 3 )
      {
        v14 = (__int64 *)v7;
        goto LABEL_21;
      }
      v21 = ((signed int)v37 - v7) >> 3;
      if ( v21 == 2 )
LABEL_19:
        v24 = *v14;
        if ( *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10) == v24 )
          goto LABEL_25;
        ++v14;
LABEL_21:
        v25 = *v14;
        if ( *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10) != v25 )
          v14 = v37;
        goto LABEL_25;
      if ( v21 != 3 )
        v14 = v37;
      v22 = *(_QWORD *)v7;
      v23 = *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10);
      HIDWORD(v23) ^= HIDWORD(v22);
      v14 = (__int64 *)v7;
      if ( v23 != (unsigned int)v22 )
        v14 = (__int64 *)(v7 + 8);
        goto LABEL_19;
    }
    else
      v10 = v9 + 1;
      while ( 1 )
        v12 = *(_QWORD *)v7 >> 32;
        v11 = *(_QWORD *)v7;
        v13 = *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10);
        LODWORD(v13) = v13 ^ v11;
        if ( !((unsigned int)v13 | HIDWORD(v13) ^ v12) )
          break;
        v15 = *(_DWORD *)(v7 + 8);
        v16 = *(_DWORD *)(v7 + 12);
        if ( *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10) == __PAIR__(v16, v15) )
        v14 = (__int64 *)(v7 + 16);
        v17 = *(_DWORD *)(v7 + 16);
        v18 = *(_DWORD *)(v7 + 20);
        if ( *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10) == __PAIR__(v18, v17) )
        v14 = (__int64 *)(v7 + 24);
        v19 = *(_DWORD *)(v7 + 24);
        v20 = *(_DWORD *)(v7 + 28);
        if ( *(_QWORD *)Entity::getUniqueID(*(Entity **)_R10) == __PAIR__(v20, v19) )
        --v10;
        v7 += 32;
        if ( v10 <= 1 )
          goto LABEL_12;
LABEL_25:
    v26 = (__int64 *)*((_DWORD *)Player::getTrackedBosses(v6) + 1);
    v27 = (Dimension *)Entity::getDimension(v6);
    v28 = Dimension::getId(v27);
    v29 = (Dimension *)Entity::getDimension(*(Entity **)_R10);
    if ( v28 != Dimension::getId(v29) )
      goto LABEL_36;
    _R0 = Entity::distanceToSqr(*(Entity **)_R10, v6);
    __asm
      VLDR            S0, [R10,#0x24]
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
LABEL_36:
      if ( v14 == v26 )
        continue;
      v35 = (Entity **)_R10;
      v36 = 2;
      goto LABEL_33;
    if ( v14 == v26 && *((_BYTE *)_R10 + 4) )
      v36 = 0;
LABEL_33:
      BossComponent::_sendBossEvent(v35, v36, v6);
  }
}


void __fastcall BossComponent::_broadcastBossEvent(int a1, int a2)
{
  Entity **v2; // r5@1
  int v3; // r4@1
  Level *v4; // r0@2
  int i; // r7@2
  Level *v6; // r0@5
  Player *v7; // r0@5
  Player *v8; // r6@5
  char *v9; // r0@6
  int v10; // r0@9
  Entity *v11; // r2@9

  v2 = (Entity **)a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 28) < 1 )
  {
    v10 = Entity::getLevel(*(Entity **)a1);
    v11 = *v2;
    j_j_j__ZN5Level18broadcastBossEventE19BossEventUpdateTypeP3Mob(v10);
  }
  else
    v4 = (Level *)Entity::getLevel(*(Entity **)a1);
    for ( i = *((_DWORD *)Level::getPlayerList(v4) + 2); i; i = *(_DWORD *)i )
    {
      v6 = (Level *)Entity::getLevel(*v2);
      v7 = (Player *)Level::getPlayer(v6, (const mce::UUID *)(i + 8));
      v8 = v7;
      if ( v7 )
      {
        v9 = Player::getTrackedBosses(v7);
        if ( (unsigned int)*(_QWORD *)v9 != *(_QWORD *)v9 >> 32 )
          BossComponent::_sendBossEvent(v2, v3, v8);
      }
    }
}


void __fastcall BossComponent::_broadcastBossEvent(int a1, int a2)
{
  BossComponent::_broadcastBossEvent(a1, a2);
}


void __fastcall BossComponent::sendDeathTelemetry(BossComponent *this)
{
  BossComponent *v1; // r4@1
  Level *v2; // r5@1
  int i; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@27
  int v11; // r2@27
  int v12; // r3@27
  Entity *v13; // r6@27
  void *v14; // r0@28
  void *v15; // r0@29
  void *v16; // r0@30
  void **v17; // [sp+8h] [bp-80h]@28
  int v18; // [sp+40h] [bp-48h]@11
  int v19; // [sp+44h] [bp-44h]@7
  int v20; // [sp+48h] [bp-40h]@3
  int v21; // [sp+50h] [bp-38h]@27
  int v22; // [sp+54h] [bp-34h]@27
  int v23; // [sp+58h] [bp-30h]@27
  int v24; // [sp+5Ch] [bp-2Ch]@27

  v1 = this;
  v2 = (Level *)Entity::getLevel(*(Entity **)this);
  Level::broadcastEntityEvent((int)v2, *(_DWORD *)v1, 3, 0);
  for ( i = *((_DWORD *)v1 + 14); i; i = *(_DWORD *)i )
  {
    v10 = *(_DWORD *)(i + 12);
    v11 = *(_DWORD *)(i + 16);
    v12 = *(_DWORD *)(i + 20);
    v21 = *(_DWORD *)(i + 8);
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v13 = (Entity *)Level::getPlayer(v2, (const mce::UUID *)&v21);
    if ( v13 )
    {
      EventPacket::EventPacket((int)&v17, v13, *((_DWORD *)v1 + 15), *(Entity **)v1);
      (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v13 + 1448))(v13, &v17);
      v17 = &off_26E9D30;
      v14 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v20 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      }
      v15 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v19 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v18 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    }
  }
}


void __fastcall BossComponent::setPercent(BossComponent *this, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#8]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VSTRNE          S0, [R0,#8] }
    j_j_j__ZN13BossComponent19_broadcastBossEventE19BossEventUpdateType((int)this, 4);
}


char *__fastcall BossComponent::getPlayerParty(BossComponent *this)
{
  return (char *)this + 48;
}
