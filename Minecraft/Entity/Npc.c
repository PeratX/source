

int __fastcall Npc::canBePulledIntoVehicle(Npc *this)
{
  return 0;
}


void __fastcall Npc::_setActions(Npc *this, const Player *a2, const NpcRequestPacket *a3)
{
  Npc *v3; // r4@1
  const NpcRequestPacket *v4; // r6@1
  signed int v5; // r7@1
  int v6; // r5@1
  signed int v7; // r0@1
  unsigned __int64 v8; // r4@8
  unsigned __int64 v9; // [sp+4h] [bp-24h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  char v11; // [sp+12h] [bp-16h]@1
  unsigned __int8 v12; // [sp+13h] [bp-15h]@1

  v3 = this;
  v4 = a3;
  v5 = 0;
  v6 = (*(int (__fastcall **)(const Player *))(*(_DWORD *)a2 + 604))(a2);
  v9 = 0LL;
  v10 = 0;
  NpcComponent::getUpdatedActions(*((_DWORD *)v3 + 807), (int *)v4 + 7, &v9, &v12, &v11);
  v7 = v12;
  if ( !v6 )
    v5 = 1;
  if ( v12 )
    v7 = 1;
  if ( !(v5 & v7) && v11 )
    NpcComponent::setActions(*((Entity ***)v3 + 807), (int)&v9);
  v8 = v9;
  if ( (_DWORD)v9 != HIDWORD(v9) )
  {
    do
    {
      if ( *(_DWORD *)v8 )
        (*(void (**)(void))(**(_DWORD **)v8 + 4))();
      *(_DWORD *)v8 = 0;
      LODWORD(v8) = v8 + 4;
    }
    while ( HIDWORD(v8) != (_DWORD)v8 );
    LODWORD(v8) = v9;
  }
  if ( (_DWORD)v8 )
    operator delete((void *)v8);
}


void __fastcall Npc::buildDebugInfo(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  void *v10; // r0@3
  char *v11; // r0@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  int v16; // [sp+0h] [bp-28h]@3
  _DWORD *v17; // [sp+4h] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  v17 = &unk_28898CC;
  GoalSelector::buildDebugInfo((__int64 *)(a1 + 4124), (const void **)&v17);
  if ( *(v17 - 3) )
  {
    sub_21E7408(v3, " : ", 3u);
    sub_21E72F0(v3, (const void **)&v17);
  }
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 820))(v2);
  __asm
    VMOV            S0, R0
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  Util::format((Util *)&v16, " %.2f", _R2);
  sub_21E72F0(v3, (const void **)&v16);
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v17 - 3);
  if ( v17 - 3 != &dword_28898C0 )
    v14 = v17 - 1;
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall Npc::handleNpcRequest(Npc *this, const Player *a2, const NpcRequestPacket *a3)
{
  int v3; // r3@1

  v3 = *((_BYTE *)a3 + 24);
  if ( v3 == 2 )
  {
LABEL_6:
    j_j_j__ZN12NpcComponent22executeClosingCommandsEv(*((NpcComponent **)this + 807));
    return;
  }
  if ( v3 != 1 )
    if ( *((_BYTE *)a3 + 24) )
      return;
    if ( !*((_BYTE *)a3 + 24) )
    {
      j_j_j__ZN3Npc11_setActionsERK6PlayerRK16NpcRequestPacket(this, a2, a3);
    }
    goto LABEL_6;
  j_j_j__ZN12NpcComponent20executeCommandActionEi(*((NpcComponent **)this + 807), *((_BYTE *)a3 + 32));
}


signed int __fastcall Npc::useNewAi(Npc *this)
{
  return 1;
}


int __fastcall Npc::Npc(int a1, int a2, int *a3)
{
  int v3; // r4@1
  void *v4; // r6@1
  int v5; // r8@1
  __int64 v6; // r6@2

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FC20C;
  *(_DWORD *)(v3 + 248) = 63;
  SynchedEntityData::define<std::string>((SynchedEntityData *)(v3 + 176), 41, (int *)Npc::Skins);
  *(_BYTE *)(v3 + 4292) = 0;
  Entity::setPersistent((Entity *)v3);
  *(_DWORD *)(v3 + 3984) = 1072064102;
  v4 = operator new(0x10u);
  NpcComponent::NpcComponent((int)v4, v3);
  v5 = *(_DWORD *)(v3 + 3228);
  *(_DWORD *)(v3 + 3228) = v4;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v6 != HIDWORD(v6) )
    {
      do
      {
        if ( *(_DWORD *)v6 )
          (*(void (**)(void))(**(_DWORD **)v6 + 4))();
        *(_DWORD *)v6 = 0;
        LODWORD(v6) = v6 + 4;
      }
      while ( HIDWORD(v6) != (_DWORD)v6 );
      LODWORD(v6) = *(_DWORD *)(v5 + 4);
    }
    if ( (_DWORD)v6 )
      operator delete((void *)v6);
    operator delete((void *)v5);
  }
  return v3;
}


void __fastcall Npc::getButtonCounts(Npc *this, Entity *a2)
{
  Npc *v2; // r8@1
  NpcComponent *v3; // r0@1
  unsigned int v4; // r0@1
  unsigned int v5; // r10@1
  char *v6; // r0@3
  unsigned int v7; // r7@3
  NpcAction *v8; // r5@4
  int *v9; // r0@6
  int *v10; // r5@6
  int *v11; // r9@6
  int v12; // r8@6
  __int64 v13; // r0@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  void *v16; // r0@18
  int v17; // r4@18
  __int64 v18; // r0@22
  void *v19; // r1@24
  char *v20; // r5@24
  signed int v21; // r9@24
  signed int v22; // r4@24
  unsigned int v23; // r0@24
  unsigned int v24; // r2@26
  unsigned int v25; // r6@26
  int v26; // r8@33
  void *v27; // r4@34
  int v28; // r4@35
  void *v29; // r1@38
  _DWORD *v30; // r5@38
  signed int v31; // r9@38
  signed int v32; // r4@38
  unsigned int v33; // r0@38
  unsigned int v34; // r2@40
  unsigned int v35; // r6@40
  int v36; // r8@47
  void *v37; // r4@48
  int v38; // r4@49
  int *v39; // r5@52 OVERLAPPED
  int *v40; // r6@52 OVERLAPPED
  unsigned int *v41; // r2@54
  signed int v42; // r1@56
  int *v43; // r0@62
  void *v44; // [sp+4h] [bp-4Ch]@31
  void *v45; // [sp+4h] [bp-4Ch]@45
  Npc *v46; // [sp+10h] [bp-40h]@1
  NpcComponent *v47; // [sp+14h] [bp-3Ch]@1
  int v48; // [sp+18h] [bp-38h]@10
  int *v49; // [sp+1Ch] [bp-34h]@6
  int *v50; // [sp+20h] [bp-30h]@6

  v2 = this;
  v46 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = (NpcComponent *)Entity::getNpcComponent(a2);
  v47 = v3;
  v4 = NpcComponent::getActionCount(v3);
  v5 = v4;
  if ( v4 >= 0x40000000 )
    sub_21E5A04("vector::reserve");
  if ( v4 )
  {
    v6 = (char *)operator new(4 * v4);
    *(_DWORD *)v2 = v6;
    *((_DWORD *)v2 + 1) = v6;
    v7 = 0;
    *((_DWORD *)v2 + 2) = &v6[4 * v5];
    do
    {
      v8 = (NpcAction *)NpcComponent::getActionAt(v47, v7);
      if ( !NpcAction::getMode(v8) )
      {
        if ( NpcAction::getType(v8) == 1 )
        {
          v9 = (int *)NpcAction::getText(v8);
          Util::split((int)&v49, v9, NpcCommandAction::COMMAND_DELIMITER);
          v10 = v50;
          v11 = v49;
          v12 = 0;
          while ( v11 != v10 )
          {
            Util::stringTrim(&v48, v11);
            v16 = (void *)(v48 - 12);
            v17 = *(_DWORD *)(v48 - 12);
            if ( (int *)(v48 - 12) != &dword_28898C0 )
            {
              v14 = (unsigned int *)(v48 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v15 = __ldrex(v14);
                while ( __strex(v15 - 1, v14) );
              }
              else
                v15 = (*v14)--;
              if ( v15 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
            }
            ++v11;
            if ( v17 )
              ++v12;
          }
          v18 = *(_QWORD *)((char *)v46 + 4);
          if ( (_DWORD)v18 == HIDWORD(v18) )
            HIDWORD(v18) = *(_DWORD *)v46;
            v30 = 0;
            v31 = v18 - *(_DWORD *)v46;
            v32 = v31 >> 2;
            v33 = v31 >> 2;
            if ( !(v31 >> 2) )
              v33 = 1;
            v34 = v33 + (v31 >> 2);
            v35 = v33 + (v31 >> 2);
            if ( 0 != v34 >> 30 )
              v35 = 0x3FFFFFFF;
            if ( v34 < v33 )
            if ( v35 )
              v45 = *(void **)v46;
              if ( v35 >= 0x40000000 )
                sub_21E57F4();
              v30 = operator new(4 * v35);
              v29 = v45;
            v30[v32] = v12;
            v36 = (int)&v30[v32];
            if ( v32 )
              v37 = v29;
              _aeabi_memmove4(v30, v29);
              v29 = v37;
            v38 = v36 + 4;
            if ( v29 )
              operator delete(v29);
            v2 = v46;
            *(_DWORD *)v46 = v30;
            *((_DWORD *)v46 + 1) = v38;
            *((_DWORD *)v46 + 2) = &v30[v35];
          else
            *(_DWORD *)v18 = v12;
            *((_DWORD *)v46 + 1) = v18 + 4;
          *(_QWORD *)&v39 = *(_QWORD *)&v49;
          if ( v49 != v50 )
            do
              v43 = (int *)(*v39 - 12);
              if ( v43 != &dword_28898C0 )
                v41 = (unsigned int *)(*v39 - 4);
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
                  j_j_j_j__ZdlPv_9(v43);
              ++v39;
            while ( v39 != v40 );
            v39 = v49;
          if ( v39 )
            operator delete(v39);
        }
        else
          v13 = *(_QWORD *)((char *)v2 + 4);
          if ( (_DWORD)v13 == HIDWORD(v13) )
            HIDWORD(v13) = *(_DWORD *)v2;
            v20 = 0;
            v21 = v13 - *(_DWORD *)v2;
            v22 = v21 >> 2;
            v23 = v21 >> 2;
            if ( !(v21 >> 2) )
              v23 = 1;
            v24 = v23 + (v21 >> 2);
            v25 = v23 + (v21 >> 2);
            if ( 0 != v24 >> 30 )
              v25 = 0x3FFFFFFF;
            if ( v24 < v23 )
            if ( v25 )
              v44 = *(void **)v2;
              if ( v25 >= 0x40000000 )
              v20 = (char *)operator new(4 * v25);
              v19 = v44;
            v46 = v2;
            v26 = (int)&v20[4 * v22];
            *(_DWORD *)&v20[4 * v22] = 0;
            if ( v22 )
              v27 = v19;
              _aeabi_memmove4(v20, v19);
              v19 = v27;
            v28 = v26 + 4;
            if ( v19 )
              operator delete(v19);
            *(_DWORD *)v46 = v20;
            *((_DWORD *)v46 + 1) = v28;
            *((_DWORD *)v46 + 2) = &v20[4 * v25];
            *(_DWORD *)v13 = 0;
            *((_DWORD *)v2 + 1) = v13 + 4;
      }
      ++v7;
    }
    while ( v7 < v5 );
  }
}


signed int __fastcall Npc::getAlwaysShowNameTag(Npc *this)
{
  return 1;
}


void __fastcall Npc::getFormattedNameTag(Npc *this, int a2)
{
  Npc::getFormattedNameTag(this, a2);
}


void __fastcall Npc::~Npc(Npc *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Npc::_hurt(Npc *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  const EntityDamageSource *v5; // r5@1
  Entity *v6; // r4@1
  int v7; // r0@1
  Level *v8; // r0@4
  int v9; // r0@5

  v5 = a2;
  v6 = this;
  v7 = EntityDamageSource::getCause(a2);
  if ( (unsigned int)(v7 - 12) < 2
    || v7 == 2 && (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 28))(v5) == 1 )
  {
    v8 = (Level *)Entity::getLevel(v6);
    if ( !Level::isClientSide(v8) )
    {
      v9 = Entity::getLevel(v6);
      Level::broadcastEntityEvent(v9, (int)v6, 61, 0);
    }
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 44))(v6);
  }
  return 0;
}


int __fastcall Npc::getDescriptionCharCount(Npc *this)
{
  void *v1; // r0@1
  int v2; // r5@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+0h] [bp-18h]@1

  NpcComponent::getInteractiveText((NpcComponent *)&v6, *((_DWORD *)this + 807));
  v1 = (void *)(v6 - 12);
  v2 = *(_DWORD *)(v6 - 12);
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
      j_j_j_j__ZdlPv_9(v1);
  }
  return v2;
}


signed int __fastcall Npc::canShowNameTag(Npc *this)
{
  return 1;
}


signed int __fastcall Npc::getCommandPermissionLevel(Npc *this)
{
  return 1;
}


int __fastcall Npc::isTargetable(Npc *this)
{
  return 0;
}


void __fastcall Npc::setSkinId(Entity *this, int *a2, int a3)
{
  int *v3; // r5@1
  Entity *v4; // r4@1
  Level *v5; // r0@2
  int v6; // r6@3
  _DWORD *v7; // r0@4
  size_t v8; // r2@4
  unsigned int v9; // r0@6
  unsigned int v10; // r1@6
  int v11; // r6@12
  _DWORD *v12; // r0@13
  size_t v13; // r2@13
  unsigned int v14; // r0@15
  unsigned int v15; // r1@15

  v3 = a2;
  v4 = this;
  if ( a3 || (v5 = (Level *)Entity::getLevel(this), !Level::isClientSide(v5)) )
  {
    v11 = SynchedEntityData::_get((Entity *)((char *)v4 + 176), 41);
    if ( *(_BYTE *)(v11 + 4) == 4 )
    {
      v12 = *(_DWORD **)(v11 + 12);
      v13 = *(v12 - 3);
      if ( v13 != *(_DWORD *)(*v3 - 12) || memcmp(v12, (const void *)*v3, v13) )
      {
        EntityInteraction::setInteractText((int *)(v11 + 12), v3);
        *(_BYTE *)(v11 + 8) = 1;
        v14 = *(_WORD *)(v11 + 6);
        v15 = *((_WORD *)v4 + 94);
        if ( v15 >= v14 )
          LOWORD(v15) = *(_WORD *)(v11 + 6);
        *((_WORD *)v4 + 94) = v15;
        if ( *((_WORD *)v4 + 95) > v14 )
          LOWORD(v14) = *((_WORD *)v4 + 95);
        *((_WORD *)v4 + 95) = v14;
      }
    }
  }
  else
    v6 = SynchedEntityData::_get((Entity *)((char *)v4 + 176), 41);
    if ( *(_BYTE *)(v6 + 4) == 4 )
      v7 = *(_DWORD **)(v6 + 12);
      v8 = *(v7 - 3);
      if ( v8 != *(_DWORD *)(*v3 - 12) || memcmp(v7, (const void *)*v3, v8) )
        EntityInteraction::setInteractText((int *)(v6 + 12), v3);
        *(_BYTE *)(v6 + 8) = 1;
        v9 = *(_WORD *)(v6 + 6);
        v10 = *((_WORD *)v4 + 94);
        if ( v10 >= v9 )
          LOWORD(v10) = *(_WORD *)(v6 + 6);
        *((_WORD *)v4 + 94) = v10;
        if ( *((_WORD *)v4 + 95) > v9 )
          LOWORD(v9) = *((_WORD *)v4 + 95);
        *((_WORD *)v4 + 95) = v9;
    j_j_j__ZN12NpcComponent17sendChangedPacketEv(*((NpcComponent **)v4 + 807));
}


void __fastcall Npc::handleNpcRequest(Npc *this, const Player *a2, const NpcRequestPacket *a3)
{
  Npc::handleNpcRequest(this, a2, a3);
}


signed int __fastcall Npc::getEntityTypeId(Npc *this)
{
  return 307;
}


signed int __fastcall Npc::acceptClientsideEntityData(Npc *this, Player *a2, const SetEntityDataPacket *a3)
{
  Npc *v3; // r8@1
  const SetEntityDataPacket *v4; // r4@1
  int v5; // r4@2
  int v6; // r7@2
  int v7; // t1@2
  int v8; // r5@2
  _DWORD *v9; // r0@4
  _DWORD *v10; // r1@4
  size_t v11; // r2@4
  char *v12; // r0@7

  v3 = this;
  v4 = a3;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 648))(a2) == 1 )
  {
    v7 = *((_DWORD *)v4 + 6);
    v5 = (int)v4 + 24;
    v6 = v7;
    v8 = *(_DWORD *)(v5 + 4);
    if ( v7 == v8 )
    {
LABEL_7:
      v12 = Entity::getEntityData(v3);
      SynchedEntityData::assignValues((int)v12, (unsigned __int64 *)v5, (int)v3);
      return 1;
    }
    while ( 1 )
      if ( *(_WORD *)(*(_DWORD *)v6 + 6) == 42 )
      {
        v9 = *SynchedEntityData::getString((Npc *)((char *)v3 + 176), 42);
        v10 = *(_DWORD **)(*(_DWORD *)v6 + 12);
        v11 = *(v9 - 3);
        if ( v11 != *(v10 - 3) || memcmp(v9, v10, v11) )
          break;
      }
      v6 += 4;
      if ( v8 == v6 )
        goto LABEL_7;
  }
  return 0;
}


void __fastcall Npc::_setActions(Npc *this, const Player *a2, const NpcRequestPacket *a3)
{
  Npc::_setActions(this, a2, a3);
}


void __fastcall Npc::getFormattedNameTag(Npc *this, int a2)
{
  int *v2; // r5@1
  void *v3; // r0@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  int v6; // [sp+0h] [bp-20h]@1

  v2 = (int *)this;
  Entity::getFormattedNameTag((Entity *)&v6, a2);
  if ( *(_DWORD *)(v6 - 12) )
  {
    sub_21E8AF4(v2, (int *)&unk_28018A0);
    sub_21E72F0((const void **)v2, (const void **)&v6);
  }
  else
    sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
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


signed int __fastcall Npc::interactPreventDefault(Npc *this)
{
  return 1;
}


int __fastcall Npc::addAdditionalSaveData(Npc *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Npc *v3; // r5@1
  const void **v4; // r0@1
  int *v5; // r2@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  v4 = SynchedEntityData::getString((Npc *)((char *)v3 + 176), 41);
  v5 = (int *)v4;
  result = *((_DWORD *)*v4 - 3);
  if ( result )
    result = j_j_j__ZN11CompoundTag9putStringERKSsS1__1((int)v2, (const void **)&Npc::SKIN_ID_TAG, v5);
  return result;
}


int __fastcall Npc::isFishable(Npc *this)
{
  return 0;
}


void __fastcall Npc::onSynchedDataUpdate(Npc *this, int a2)
{
  Npc::onSynchedDataUpdate(this, a2);
}


void __fastcall Npc::getButtonCounts(Npc *this, Entity *a2)
{
  Npc::getButtonCounts(this, a2);
}


void __fastcall Npc::onSynchedDataUpdate(Npc *this, int a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1

  v2 = a2;
  v3 = this;
  if ( a2 == 42 )
    NpcComponent::loadActions(*((NpcComponent **)this + 807));
  j_j_j__ZN6Entity19onSynchedDataUpdateEi_0(v3, v2);
}


signed int __fastcall Npc::canExistWhenDisallowMob(Npc *this)
{
  return 1;
}


int __fastcall Npc::canBeAffected(Npc *this, const MobEffectInstance *a2)
{
  return 0;
}


int __fastcall Npc::getUrlCount(Npc *this)
{
  NpcComponent *v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r6@2
  NpcAction *v4; // r0@3

  v1 = (NpcComponent *)Entity::getNpcComponent(this);
  v2 = 0;
  if ( NpcComponent::getActionCount(v1) )
  {
    v3 = 0;
    do
    {
      v4 = (NpcAction *)NpcComponent::getActionAt(v1, v3);
      if ( !NpcAction::getType(v4) )
        ++v2;
      ++v3;
    }
    while ( v3 < NpcComponent::getActionCount(v1) );
  }
  return v2;
}


void __fastcall Npc::~Npc(Npc *this)
{
  Npc::~Npc(this);
}


int __fastcall Npc::onSizeUpdated(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 1070554153;
  LODWORD(v1) = 0;
  *(_QWORD *)(result + 376) = v1;
  *(_DWORD *)(result + 384) = 0;
  return result;
}


signed int __fastcall Npc::breaksFallingBlocks(Npc *this)
{
  return 1;
}


void __fastcall Npc::setSkinId(Entity *this, int *a2, int a3)
{
  Npc::setSkinId(this, a2, a3);
}


unsigned int __fastcall Npc::readAdditionalSaveData(Npc *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Npc *v3; // r4@1
  unsigned int result; // r0@1
  int *v5; // r5@2
  int v6; // r0@2
  int v7; // r6@2
  _DWORD *v8; // r0@3
  size_t v9; // r2@3
  unsigned int v10; // r1@5

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  result = CompoundTag::contains((int)v2, (const void **)&Npc::SKIN_ID_TAG);
  if ( result == 1 )
  {
    v5 = (int *)CompoundTag::getString((int)v2, (const void **)&Npc::SKIN_ID_TAG);
    v6 = SynchedEntityData::_get((Npc *)((char *)v3 + 176), 41);
    v7 = v6;
    result = *(_BYTE *)(v6 + 4);
    if ( result == 4 )
    {
      v8 = *(_DWORD **)(v7 + 12);
      v9 = *(v8 - 3);
      if ( v9 != *(_DWORD *)(*v5 - 12) || (result = memcmp(v8, (const void *)*v5, v9)) != 0 )
      {
        EntityInteraction::setInteractText((int *)(v7 + 12), v5);
        *(_BYTE *)(v7 + 8) = 1;
        result = *(_WORD *)(v7 + 6);
        v10 = *((_WORD *)v3 + 94);
        if ( v10 >= result )
          LOWORD(v10) = *(_WORD *)(v7 + 6);
        *((_WORD *)v3 + 94) = v10;
        if ( *((_WORD *)v3 + 95) > result )
          result = *((_WORD *)v3 + 95);
        *((_WORD *)v3 + 95) = result;
      }
    }
  }
  return result;
}


unsigned int __fastcall Npc::initializeComponents(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  unsigned int result; // r0@1
  int *v5; // r5@2
  int v6; // r0@2
  int v7; // r6@2
  _DWORD *v8; // r0@3
  size_t v9; // r2@3
  unsigned int v10; // r1@5

  v2 = a2;
  v3 = a1;
  result = Mob::initializeComponents(a1, a2);
  if ( v2 == 2 )
  {
    v5 = (int *)Npc::Skins;
    v6 = SynchedEntityData::_get((SynchedEntityData *)(v3 + 176), 41);
    v7 = v6;
    result = *(_BYTE *)(v6 + 4);
    if ( result == 4 )
    {
      v8 = *(_DWORD **)(v7 + 12);
      v9 = *(v8 - 3);
      if ( v9 != *(_DWORD *)(*v5 - 12) || (result = memcmp(v8, (const void *)*v5, v9)) != 0 )
      {
        EntityInteraction::setInteractText((int *)(v7 + 12), v5);
        *(_BYTE *)(v7 + 8) = 1;
        result = *(_WORD *)(v7 + 6);
        v10 = *(_WORD *)(v3 + 188);
        if ( v10 >= result )
          LOWORD(v10) = *(_WORD *)(v7 + 6);
        *(_WORD *)(v3 + 188) = v10;
        if ( *(_WORD *)(v3 + 190) > result )
          result = *(_WORD *)(v3 + 190);
        *(_WORD *)(v3 + 190) = result;
      }
    }
  }
  return result;
}


int __fastcall Npc::isPushable(Npc *this)
{
  return 0;
}


void __fastcall Npc::buildDebugInfo(int a1, const void **a2)
{
  Npc::buildDebugInfo(a1, a2);
}
