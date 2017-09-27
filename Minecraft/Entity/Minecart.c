

char *__fastcall Minecart::getCustomName(Minecart *this)
{
  return (char *)this + 3412;
}


signed int __fastcall Minecart::getEntityTypeId(Minecart *this)
{
  return 524372;
}


void __fastcall Minecart::readAdditionalSaveData(Minecart *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Minecart *v3; // r4@1
  _BOOL4 v4; // r6@1
  void *v5; // r0@1
  int v6; // r0@3
  void *v7; // r0@3
  int v8; // r0@4
  void *v9; // r0@4
  int v10; // r7@5
  int v11; // r0@5
  unsigned int v12; // r1@5
  unsigned int v13; // r1@7
  unsigned int v14; // r0@7
  int v15; // r0@12
  unsigned int v16; // r1@12
  unsigned int v17; // r1@14
  unsigned int v18; // r0@14
  void *v19; // r0@19
  int v20; // r6@21
  void *v21; // r0@21
  int v22; // r6@21
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  void *v25; // r0@27
  int *v26; // r0@29
  void *v27; // r0@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  unsigned int *v38; // r2@59
  signed int v39; // r1@61
  int v40; // [sp+4h] [bp-4Ch]@29
  int v41; // [sp+Ch] [bp-44h]@21
  int v42; // [sp+14h] [bp-3Ch]@20
  int v43; // [sp+1Ch] [bp-34h]@5
  int v44; // [sp+24h] [bp-2Ch]@4
  int v45; // [sp+2Ch] [bp-24h]@3
  int v46; // [sp+34h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v46, "CustomDisplayTile");
  v4 = CompoundTag::getBoolean((int)v2, (const void **)&v46);
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v45, "DisplayTile");
    v6 = CompoundTag::getInt((int)v2, (const void **)&v45);
    Minecart::setDisplayBlock(v3, v6);
    v7 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
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
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v44, "DisplayData");
    v8 = CompoundTag::getInt((int)v2, (const void **)&v44);
    Minecart::setDisplayData(v3, v8);
    v9 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v44 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v43, "DisplayOffset");
    v10 = CompoundTag::getInt((int)v2, (const void **)&v43);
    v11 = SynchedEntityData::_get((Minecart *)((char *)v3 + 176), 17);
    v12 = *(_DWORD *)(v11 + 4);
    if ( (unsigned __int8)v12 == 2 && *(_DWORD *)(v11 + 12) != v10 )
      *(_DWORD *)(v11 + 12) = v10;
      *(_BYTE *)(v11 + 8) = 1;
      v13 = v12 >> 16;
      v14 = *((_WORD *)v3 + 94);
      if ( v14 >= v13 )
        LOWORD(v14) = v13;
      *((_WORD *)v3 + 94) = v14;
      if ( *((_WORD *)v3 + 95) > v13 )
        LOWORD(v13) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v13;
    v15 = SynchedEntityData::_get((Minecart *)((char *)v3 + 176), 18);
    v16 = *(_DWORD *)(v15 + 4);
    if ( !(_BYTE)v16 && *(_BYTE *)(v15 + 9) != 1 )
      v17 = v16 >> 16;
      *(_WORD *)(v15 + 8) = 257;
      v18 = *((_WORD *)v3 + 94);
      if ( v18 >= v17 )
        LOWORD(v18) = v17;
      *((_WORD *)v3 + 94) = v18;
      if ( *((_WORD *)v3 + 95) > v17 )
        LOWORD(v17) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v17;
    v19 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v43 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v42, "CustomName");
  if ( CompoundTag::contains((int)v2, (const void **)&v42) == 1 )
    sub_21E94B4((void **)&v41, "CustomName");
    v20 = *((_DWORD *)*CompoundTag::getString((int)v2, (const void **)&v41) - 3);
    v21 = (void *)(v41 - 12);
    v22 = v20 != 0;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v41 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  else
    v22 = 0;
  v25 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( v22 == 1 )
    sub_21E94B4((void **)&v40, "CustomName");
    v26 = (int *)CompoundTag::getString((int)v2, (const void **)&v40);
    EntityInteraction::setInteractText((int *)v3 + 853, v26);
    v27 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v40 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
}


Minecart *__fastcall Minecart::~Minecart(Minecart *this)
{
  Minecart *v1; // r4@1
  int v2; // r0@2
  int v3; // r5@2
  int v4; // r2@2
  int v5; // r3@2
  int v6; // r2@2
  int v7; // r3@2
  int v8; // r1@3
  void *v9; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26F31C4;
  if ( *((_DWORD *)this + 773) )
  {
    v2 = Entity::getLevel(this);
    v3 = *(_DWORD *)(v2 + 60);
    v4 = *((_DWORD *)v1 + 866);
    v5 = *((_DWORD *)v1 + 867);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(*(_DWORD *)(v2 + 60));
    v6 = *((_DWORD *)v1 + 864);
    v7 = *((_DWORD *)v1 + 865);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  }
  v8 = *((_DWORD *)v1 + 853);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  Entity::~Entity(v1);
  return v1;
}


void *__fastcall Minecart::getAName(Minecart *this, int a2)
{
  void *result; // r0@2

  if ( *(_DWORD *)(*(_DWORD *)(a2 + 3412) - 12) )
    result = sub_21E8AF4((int *)this, (int *)(a2 + 3412));
  else
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  return result;
}


int __fastcall Minecart::getDisplayOffset(Minecart *this)
{
  Minecart *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int result; // r0@2

  v1 = this;
  v2 = (Minecart *)((char *)this + 176);
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) == 1 )
    result = j_j_j__ZNK17SynchedEntityData6getIntEt_0(v2, 17);
  else
    result = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v1 + 784))(v1);
  return result;
}


_BOOL4 __fastcall Minecart::hasCustomName(Minecart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 853) - 12) != 0;
}


void __fastcall Minecart::reloadHardcodedClient(int a1)
{
  __int64 v6; // kr00_8@1
  int v8; // r1@1
  int v9; // [sp+4h] [bp-24h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1

  _R4 = (Minecart *)a1;
  *(_WORD *)(a1 + 536) = 257;
  (*(void (**)(void))(*(_DWORD *)a1 + 680))();
  __asm
  {
    VMOV.F32        S16, #0.5
    VLDR            S0, [R4,#0x134]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R4,#0x13C]
  }
  v6 = *(_QWORD *)(*(_DWORD *)_R4 + 48);
  _R0 = ((int (__fastcall *)(_DWORD))HIDWORD(v6))(_R4);
    VLDR            S0, [R4,#0x13C]
    VLDR            S2, [R0,#4]
  v8 = *(_DWORD *)(_R0 + 8);
  v9 = *(_DWORD *)_R0;
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x28+var_20]
  v10 = v8;
  ((void (__fastcall *)(Minecart *, int *))v6)(_R4, &v9);
  Minecart::registerLoopingSounds(_R4);
}


void __fastcall Minecart::registerLoopingSounds(Minecart *this)
{
  Minecart::registerLoopingSounds(this);
}


signed int __fastcall Minecart::isPushable(Minecart *this)
{
  return 1;
}


void __fastcall Minecart::registerLoopingSounds(Minecart *this)
{
  Minecart *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r2@1
  int v7; // r3@1
  int (__fastcall *v8)(int, int *, _DWORD **); // r6@1
  _DWORD *v9; // r0@1
  __int64 v10; // r1@1
  __int64 v11; // r0@1
  void *v12; // r0@3
  int (__fastcall *v13)(int, int *, _DWORD **); // r6@4
  _DWORD *v14; // r0@4
  __int64 v15; // r1@4
  __int64 v16; // r0@4
  void *v17; // r0@6
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  _DWORD *v22; // [sp+4h] [bp-44h]@4
  __int64 v23; // [sp+Ch] [bp-3Ch]@4
  int v24; // [sp+18h] [bp-30h]@4
  _DWORD *v25; // [sp+1Ch] [bp-2Ch]@1
  __int64 v26; // [sp+24h] [bp-24h]@1
  int v27; // [sp+30h] [bp-18h]@1

  v1 = this;
  v2 = Entity::getLevel(this);
  v3 = *(_DWORD *)(v2 + 60);
  v4 = *((_DWORD *)v1 + 866);
  v5 = *((_DWORD *)v1 + 867);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(*(_DWORD *)(v2 + 60));
  v6 = *((_DWORD *)v1 + 864);
  v7 = *((_DWORD *)v1 + 865);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  v8 = *(int (__fastcall **)(int, int *, _DWORD **))(*(_DWORD *)v3 + 48);
  sub_21E94B4((void **)&v27, "minecart.inside");
  v9 = operator new(4u);
  LODWORD(v10) = sub_17430F8;
  *v9 = v1;
  HIDWORD(v10) = sub_1743064;
  v25 = v9;
  v26 = v10;
  LODWORD(v11) = v8(v3, &v27, &v25);
  *((_QWORD *)v1 + 433) = v11;
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = *(int (__fastcall **)(int, int *, _DWORD **))(*(_DWORD *)v3 + 48);
  sub_21E94B4((void **)&v24, "minecart.base");
  v14 = operator new(4u);
  LODWORD(v15) = sub_17431F4;
  *v14 = v1;
  HIDWORD(v15) = sub_1743130;
  v22 = v14;
  v23 = v15;
  LODWORD(v16) = v13(v3, &v24, &v22);
  *((_QWORD *)v1 + 432) = v16;
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v17 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall Minecart::applyNaturalSlowdown(Minecart *this)
{
  int result; // r0@4

  _R4 = this;
  Entity::isRide(this);
  __asm { VLDR            S0, [R4,#0x6C] }
  if ( _ZF )
    __asm { VLDREQ          S2, =0.997 }
  else
    __asm { VLDRNE          S2, =0.96 }
  result = 0;
  __asm
  {
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x6C]
  }
  *((_DWORD *)_R4 + 28) = 0;
    VLDR            S0, [R4,#0x74]
    VSTR            S0, [R4,#0x74]
  return result;
}


int __fastcall Minecart::Minecart(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  int v10; // r7@10
  _BYTE *v11; // r0@10
  signed __int16 v12; // r6@10
  int v13; // r1@10
  unsigned int v14; // r0@12
  int v15; // r6@18
  _BYTE *v16; // r0@18
  int v17; // r1@18
  unsigned int v18; // r0@20
  signed __int16 v19; // r1@20
  int v20; // r7@26
  _BYTE *v21; // r0@26
  signed __int16 v22; // r6@26
  int v23; // r1@26
  unsigned int v24; // r0@28
  int v25; // r6@34
  _BYTE *v26; // r0@34
  signed __int16 v27; // r5@34
  int v28; // r1@34
  unsigned int v29; // r0@36

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F31C4;
  *(_DWORD *)(v3 + 3412) = &unk_28898CC;
  MovementInterpolator::MovementInterpolator(v3 + 3416);
  *(_DWORD *)(v3 + 3448) = 0;
  *(_DWORD *)(v3 + 3456) = -1;
  *(_DWORD *)(v3 + 3460) = -1;
  *(_DWORD *)(v3 + 3464) = -1;
  *(_DWORD *)(v3 + 3468) = -1;
  *(_DWORD *)(v3 + 3472) = 0;
  *(_DWORD *)(v3 + 172) |= 0x10000u;
  *(_DWORD *)(v3 + 248) = 38;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  v4 = (int *)(v3 + 176);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 11) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 11);
    v5 = *v4;
    v6 = operator new(0x10u);
    v6[4] = 2;
    v7 = 11;
    *((_WORD *)v6 + 3) = 11;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F08C4;
    *((_DWORD *)v6 + 3) = 0;
    v8 = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v5 + 44) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0xB )
      LOWORD(v9) = 11;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xB )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 12) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 12);
    v10 = *v4;
    v11 = operator new(0x10u);
    v11[4] = 2;
    v12 = 12;
    *((_WORD *)v11 + 3) = 12;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F08C4;
    *((_DWORD *)v11 + 3) = 1;
    v13 = *(_DWORD *)(v10 + 48);
    *(_DWORD *)(v10 + 48) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0xC )
      LOWORD(v14) = 12;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xC )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 16) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 16);
    v15 = *v4;
    v16 = operator new(0x10u);
    v16[4] = 2;
    *((_WORD *)v16 + 3) = 16;
    v16[8] = 1;
    *(_DWORD *)v16 = &off_26F08C4;
    *((_DWORD *)v16 + 3) = 0;
    v17 = *(_DWORD *)(v15 + 64);
    *(_DWORD *)(v15 + 64) = v16;
    if ( v17 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
    v18 = *(_WORD *)(v3 + 188);
    v19 = 16;
    if ( v18 >= 0x10 )
      LOWORD(v18) = 16;
    *(_WORD *)(v3 + 188) = v18;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x10 )
      v19 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v19;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 17) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 17);
    v20 = *v4;
    v21 = operator new(0x10u);
    v21[4] = 2;
    v22 = 17;
    *((_WORD *)v21 + 3) = 17;
    v21[8] = 1;
    *(_DWORD *)v21 = &off_26F08C4;
    *((_DWORD *)v21 + 3) = 6;
    v23 = *(_DWORD *)(v20 + 68);
    *(_DWORD *)(v20 + 68) = v21;
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
    v24 = *(_WORD *)(v3 + 188);
    if ( v24 >= 0x11 )
      LOWORD(v24) = 17;
    *(_WORD *)(v3 + 188) = v24;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x11 )
      v22 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v22;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 18) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 18);
    v25 = *v4;
    v26 = operator new(0xCu);
    v27 = 18;
    v26[4] = 0;
    *((_WORD *)v26 + 3) = 18;
    v26[8] = 1;
    *(_DWORD *)v26 = &off_26F1394;
    v26[9] = 0;
    v28 = *(_DWORD *)(v25 + 72);
    *(_DWORD *)(v25 + 72) = v26;
    if ( v28 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 4))(v28);
    v29 = *(_WORD *)(v3 + 188);
    if ( v29 >= 0x12 )
      LOWORD(v29) = 18;
    *(_WORD *)(v3 + 188) = v29;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x12 )
      v27 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v27;
  Entity::setStructuralIntegrity((Entity *)v3, 40);
  return v3;
}


void __fastcall Minecart::~Minecart(Minecart *this)
{
  Minecart *v1; // r0@1

  v1 = Minecart::~Minecart(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Minecart::getDefaultDisplayBlock(Minecart *this)
{
  return 0;
}


unsigned int __fastcall Minecart::setDisplayOffset(Minecart *this, int a2)
{
  Minecart *v2; // r4@1
  SynchedEntityData *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3
  unsigned int result; // r0@8
  unsigned int v10; // r1@8
  unsigned int v11; // r1@10
  unsigned int v12; // r0@10

  v2 = this;
  v3 = (Minecart *)((char *)this + 176);
  v4 = a2;
  v5 = SynchedEntityData::_get((Minecart *)((char *)this + 176), 17);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned __int8)v6 == 2 && *(_DWORD *)(v5 + 12) != v4 )
  {
    *(_DWORD *)(v5 + 12) = v4;
    *(_BYTE *)(v5 + 8) = 1;
    v7 = v6 >> 16;
    v8 = *((_WORD *)v2 + 94);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *((_WORD *)v2 + 94) = v8;
    if ( *((_WORD *)v2 + 95) > v7 )
      LOWORD(v7) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v7;
  }
  result = SynchedEntityData::_get(v3, 18);
  v10 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v10 && *(_BYTE *)(result + 9) != 1 )
    v11 = v10 >> 16;
    *(_WORD *)(result + 8) = 257;
    v12 = *((_WORD *)v2 + 94);
    if ( v12 >= v11 )
      LOWORD(v12) = v11;
    *((_WORD *)v2 + 94) = v12;
    result = *((_WORD *)v2 + 95);
    if ( result > v11 )
      LOWORD(v11) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v11;
  return result;
}


_DWORD *__fastcall Minecart::push(Minecart *this, Entity *a2, int a3)
{
  int v3; // r6@1
  Level *v6; // r0@1
  _DWORD *result; // r0@1
  float v8; // r1@2
  int (__fastcall *v16)(Entity *, float *); // r2@11
  float *v17; // r1@12
  int (__fastcall *v18)(Entity *, float *); // r2@12
  int (__fastcall *v23)(Entity *, float *); // r2@19
  void (__fastcall *v24)(Entity *, float *); // r2@22
  int (__fastcall *v25)(Entity *, float *); // r2@25
  float v26; // [sp+0h] [bp-A0h]@12
  int v27; // [sp+4h] [bp-9Ch]@12
  float v28; // [sp+Ch] [bp-94h]@11
  int v29; // [sp+10h] [bp-90h]@11
  float v30; // [sp+18h] [bp-88h]@22
  int v31; // [sp+1Ch] [bp-84h]@22
  float v32; // [sp+24h] [bp-7Ch]@22
  int v33; // [sp+28h] [bp-78h]@22
  float v34; // [sp+30h] [bp-70h]@25
  int v35; // [sp+34h] [bp-6Ch]@25
  float v36; // [sp+3Ch] [bp-64h]@19
  int v37; // [sp+40h] [bp-60h]@19

  v3 = a3;
  _R4 = a2;
  _R5 = this;
  v6 = (Level *)Entity::getLevel(this);
  result = (_DWORD *)Level::isClientSide(v6);
  if ( !result )
  {
    result = (_DWORD *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 772))(_R5);
    if ( !result )
      result = (_DWORD *)Entity::pullInEntity(_R5, _R4);
    __asm
    {
      VLDR            S0, [R5,#0x48]
      VLDR            S4, [R4,#0x48]
      VLDR            S2, [R5,#0x50]
      VLDR            S6, [R4,#0x50]
      VSUB.F32        S16, S4, S0
      VLDR            S26, =0.0001
      VSUB.F32        S18, S6, S2
      VMUL.F32        S0, S16, S16
      VMUL.F32        S2, S18, S18
      VADD.F32        S0, S2, S0
      VCMPE.F32       S0, S26
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm { VMOV            R0, S0 }
      _R0 = mce::Math::sqrt(_R0, v8);
      __asm
      {
        VMOV.F32        S2, #1.0
        VLDR            S8, [R5,#0x14C]
        VMOV            S0, R0
        VLDR            S10, =0.1
        VMOV.F32        S20, #0.5
        VDIV.F32        S4, S18, S0
        VDIV.F32        S6, S16, S0
        VDIV.F32        S0, S2, S0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
        VSUB.F32        S8, S2, S8
        VMUL.F32        S4, S4, S10
        VMUL.F32        S6, S6, S10
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
        VMUL.F32        S2, S4, S8
        VMUL.F32        S4, S6, S8
        VMUL.F32        S16, S2, S0
        VMUL.F32        S18, S4, S0
        VMUL.F32        S22, S16, S20
        VMUL.F32        S24, S18, S20
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4) != 524372 )
        __asm
        {
          VNEG.F32        S0, S24
          VNEG.F32        S2, S22
        }
        v16 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R5 + 276);
        __asm { VSTR            S0, [SP,#0xA0+var_94] }
        v29 = 0;
        __asm { VSTR            S2, [SP,#0xA0+var_8C] }
        result = (_DWORD *)v16(_R5, &v28);
        if ( v3 )
          return result;
        __asm { VMOV.F32        S0, #0.125 }
        v17 = &v26;
        v18 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 276);
          VMUL.F32        S2, S18, S0
          VMUL.F32        S0, S16, S0
          VSTR            S2, [SP,#0xA0+var_A0]
        v27 = 0;
        __asm { VSTR            S0, [SP,#0xA0+var_98] }
        return (_DWORD *)v18(_R4, v17);
        VLDR            S0, [R5,#0x48]
        VLDR            S4, [R4,#0x48]
        VLDR            S2, [R5,#0x50]
        VLDR            S6, [R4,#0x50]
        VSUB.F32        S0, S4, S0
        VSUB.F32        S2, S6, S2
        VMUL.F32        S4, S0, S0
        VMUL.F32        S6, S2, S2
        VADD.F32        S4, S6, S4
        VSQRT.F32       S4, S4
        VCMPE.F32       S4, S26
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
          VLDR            S28, [R0]
          VLDR            S30, [R0,#4]
          VLDR            S17, [R0,#8]
      else
          VDIV.F32        S17, S2, S4
          VDIV.F32        S28, S0, S4
          VLDR            S30, =0.0
      __asm { VLDR            S0, [R5,#0x7C] }
      _R0 = &mce::Math::DEGRAD;
        VLDR            S19, [R0]
        VMUL.F32        S0, S19, S0
        VMOV            R0, S0
      _R0 = mce::Math::cos(_R0, COERCE_FLOAT(524372));
        VLDR            S0, [R5,#0x7C]
        VMUL.F32        S0, S0, S19
        VMOV            S19, R0
        VMOV            R1, S0
      result = (_DWORD *)mce::Math::sin(_R1, *(float *)&_R1);
        VMUL.F32        S2, S19, S19
        VADD.F32        S2, S4, S2
        VSQRT.F32       S4, S2
        result = &Vec3::ZERO;
          VLDR            S0, [R0]
          VLDR            S4, [R0,#4]
          VLDR            S2, [R0,#8]
          VDIV.F32        S2, S0, S4
          VDIV.F32        S0, S19, S4
          VLDR            S4, =0.0
        VMUL.F32        S2, S2, S17
        VMUL.F32        S4, S4, S30
        VMUL.F32        S0, S0, S28
        VADD.F32        S0, S2, S0
        VLDR            S2, =0.8
        VABS.F32        S0, S0
      if ( !(_NF ^ _VF) )
          VLDR            S26, [R5,#0x6C]
          VLDR            S28, [R5,#0x74]
          VLDR            S30, [R4,#0x74]
          VLDR            S17, [R4,#0x6C]
        if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 772))(_R4)
          && (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 772))(_R5) )
          __asm
          {
            VLDR            S0, =0.2
            VLDR            S2, [R5,#0x6C]
            VMUL.F32        S2, S2, S0
            VSTR            S2, [R5,#0x6C]
            VLDR            S2, [R5,#0x74]
            VMUL.F32        S0, S2, S0
            VSTR            S0, [R5,#0x74]
            VLDR            S0, [R4,#0x6C]
            VLDR            S2, [R4,#0x74]
            VSUB.F32        S0, S0, S24
            VSUB.F32        S2, S2, S22
          }
          v23 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R5 + 276);
          __asm { VSTR            S0, [SP,#0xA0+var_64] }
          v37 = 0;
          __asm { VSTR            S2, [SP,#0xA0+var_5C] }
          result = (_DWORD *)v23(_R5, &v36);
            VLDR            S0, =0.95
            VLDR            S2, [R4,#0x6C]
            VSTR            S2, [R4,#0x6C]
            VSTR            S0, [R4,#0x74]
          || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R5 + 772))(_R5) )
            VADD.F32        S24, S26, S17
            VLDR            S26, =0.2
            VLDR            S0, [R5,#0x6C]
            VADD.F32        S22, S28, S30
            VMUL.F32        S0, S0, S26
            VSUB.F32        S2, S24, S18
            VSUB.F32        S4, S22, S16
            VSTR            S0, [R5,#0x6C]
            VLDR            S0, [R5,#0x74]
            VMUL.F32        S2, S2, S20
            VMUL.F32        S4, S4, S20
          v24 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)_R5 + 276);
          __asm { VSTR            S2, [SP,#0xA0+var_7C] }
          v33 = 0;
          __asm { VSTR            S4, [SP,#0xA0+var_74] }
          v24(_R5, &v32);
            VADD.F32        S2, S24, S18
            VADD.F32        S4, S22, S16
          v17 = &v30;
            VSTR            S0, [R4,#0x6C]
            VLDR            S0, [R4,#0x74]
          v18 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 276);
          __asm { VSTR            S2, [SP,#0xA0+var_88] }
          v31 = 0;
          __asm { VSTR            S4, [SP,#0xA0+var_80] }
          return (_DWORD *)v18(_R4, v17);
          VLDR            S0, =0.2
          VLDR            S2, [R4,#0x6C]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R4,#0x6C]
          VLDR            S2, [R4,#0x74]
          VMUL.F32        S0, S2, S0
          VSTR            S0, [R4,#0x74]
          VLDR            S0, [R5,#0x6C]
          VLDR            S2, [R5,#0x74]
          VADD.F32        S0, S0, S24
          VADD.F32        S2, S2, S22
        v25 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 276);
        __asm { VSTR            S0, [SP,#0xA0+var_70] }
        v35 = 0;
        __asm { VSTR            S2, [SP,#0xA0+var_68] }
        result = (_DWORD *)v25(_R4, &v34);
          VLDR            S0, =0.95
          VLDR            S2, [R5,#0x6C]
          VSTR            S2, [R5,#0x6C]
          VSTR            S0, [R5,#0x74]
  }
  return result;
}


unsigned int __fastcall Minecart::setDisplayData(Minecart *this, int a2)
{
  Minecart *v2; // r4@1
  SynchedEntityData *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@2
  int v6; // r0@3
  int v7; // r7@6
  int v8; // r0@10
  unsigned int v9; // r1@10
  int v10; // r2@11
  unsigned int v11; // r1@12
  unsigned int v12; // r0@12
  unsigned int result; // r0@17
  unsigned int v14; // r1@17
  unsigned int v15; // r1@19
  unsigned int v16; // r0@19

  v2 = this;
  v3 = (Minecart *)((char *)this + 176);
  v4 = a2;
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) == 1 )
  {
    v5 = SynchedEntityData::getInt(v3, 16);
    if ( (unsigned int)(v5 - 1) > 0xFD )
    {
      v7 = 0;
      goto LABEL_10;
    }
    v6 = Block::mBlocks[(unsigned __int16)v5];
  }
  else
    v6 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 776))(v2);
  if ( v6 )
    v7 = *(_BYTE *)(v6 + 4);
    v7 = 0;
LABEL_10:
  v8 = SynchedEntityData::_get(v3, 16);
  v9 = *(_DWORD *)(v8 + 4);
  if ( (unsigned __int8)v9 == 2 )
    v10 = v7 | (v4 << 16);
    if ( *(_DWORD *)(v8 + 12) != v10 )
      *(_DWORD *)(v8 + 12) = v7 | (v4 << 16);
      *(_BYTE *)(v8 + 8) = 1;
      v11 = v9 >> 16;
      v12 = *((_WORD *)v2 + 94);
      if ( v12 >= v11 )
        LOWORD(v12) = v11;
      *((_WORD *)v2 + 94) = v12;
      if ( *((_WORD *)v2 + 95) > v11 )
        LOWORD(v11) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v11;
  result = SynchedEntityData::_get(v3, 18);
  v14 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v14 && *(_BYTE *)(result + 9) != 1 )
    v15 = v14 >> 16;
    *(_WORD *)(result + 8) = 257;
    v16 = *((_WORD *)v2 + 94);
    if ( v16 >= v15 )
      LOWORD(v16) = v15;
    *((_WORD *)v2 + 94) = v16;
    result = *((_WORD *)v2 + 95);
    if ( result > v15 )
      LOWORD(v15) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v15;
  return result;
}


unsigned int __fastcall Minecart::setDisplayBlock(Minecart *this, int a2)
{
  Minecart *v2; // r4@1
  SynchedEntityData *v3; // r5@1
  unsigned __int16 v4; // r6@1
  int v5; // r7@2
  int v6; // r0@4
  unsigned int v7; // r1@4
  int v8; // r2@5
  unsigned int v9; // r1@6
  unsigned int v10; // r0@6
  unsigned int result; // r0@11
  unsigned int v12; // r1@11
  unsigned int v13; // r1@13
  unsigned int v14; // r0@13

  v2 = this;
  v3 = (Minecart *)((char *)this + 176);
  v4 = a2;
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) == 1 )
    v5 = SynchedEntityData::getInt(v3, 16) >> 16;
  else
    v5 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 780))(v2);
  v6 = SynchedEntityData::_get(v3, 16);
  v7 = *(_DWORD *)(v6 + 4);
  if ( (unsigned __int8)v7 == 2 )
  {
    v8 = v4 | (v5 << 16);
    if ( *(_DWORD *)(v6 + 12) != v8 )
    {
      *(_DWORD *)(v6 + 12) = v4 | (v5 << 16);
      *(_BYTE *)(v6 + 8) = 1;
      v9 = v7 >> 16;
      v10 = *((_WORD *)v2 + 94);
      if ( v10 >= v9 )
        LOWORD(v10) = v9;
      *((_WORD *)v2 + 94) = v10;
      if ( *((_WORD *)v2 + 95) > v9 )
        LOWORD(v9) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v9;
    }
  }
  result = SynchedEntityData::_get(v3, 18);
  v12 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v12 && *(_BYTE *)(result + 9) != 1 )
    v13 = v12 >> 16;
    *(_WORD *)(result + 8) = 257;
    v14 = *((_WORD *)v2 + 94);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *((_WORD *)v2 + 94) = v14;
    result = *((_WORD *)v2 + 95);
    if ( result > v13 )
      LOWORD(v13) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v13;
  return result;
}


void __fastcall Minecart::reloadHardcodedClient(int a1)
{
  Minecart::reloadHardcodedClient(a1);
}


signed int __fastcall Minecart::getDefaultDisplayOffset(Minecart *this)
{
  return 6;
}


void __fastcall Minecart::normalTick(Minecart *this)
{
  char *v2; // r7@1
  char *v3; // r5@1
  Level *v4; // r0@1
  int *v5; // r5@2 OVERLAPPED
  int *v6; // r6@2 OVERLAPPED
  int v7; // t1@3
  int v13; // r0@6
  int v14; // r0@8
  BaseRailBlock *v15; // r6@12
  int v16; // r1@14
  float v17; // r1@16
  __int64 v18; // r2@16
  int v20; // r0@17
  mce::Degree *v21; // r0@17
  char *v26; // r0@24
  char *v27; // r6@24
  Entity **v28; // r8@24
  int v29; // r1@24 OVERLAPPED
  int v30; // r2@24 OVERLAPPED
  signed int v31; // r0@24
  Entity **v32; // r0@26
  signed int v33; // r2@27
  signed int v34; // r5@28
  int v35; // r7@28
  Entity **v36; // r5@28
  Entity *v37; // r6@29
  int *v38; // r5@35 OVERLAPPED
  int *v39; // r6@35 OVERLAPPED
  int v41; // [sp+0h] [bp-60h]@24
  int v42; // [sp+4h] [bp-5Ch]@24
  signed int v43; // [sp+8h] [bp-58h]@24
  char v44; // [sp+Ch] [bp-54h]@24
  char v45; // [sp+28h] [bp-38h]@17
  BaseRailBlock *v46; // [sp+2Ch] [bp-34h]@14
  int v47; // [sp+30h] [bp-30h]@12
  int v48; // [sp+34h] [bp-2Ch]@12
  const BlockPos *v49; // [sp+38h] [bp-28h]@12
  char v50; // [sp+3Ch] [bp-24h]@12
  int v51; // [sp+40h] [bp-20h]@12
  const BlockPos *v52; // [sp+44h] [bp-1Ch]@12

  _R4 = this;
  v2 = (char *)this + 72;
  v3 = (char *)this + 120;
  Entity::setPreviousPosRot((int)this, (int)this + 72, (_QWORD *)this + 15);
  v4 = (Level *)Entity::getLevel(_R4);
  if ( Level::isClientSide(v4) == 1 )
  {
    MovementInterpolator::tick((Minecart *)((char *)_R4 + 3416), _R4);
    *(_QWORD *)&v5 = *(_QWORD *)((char *)_R4 + 476);
    while ( v6 != v5 )
    {
      Entity::setPreviousPosRot(*v5, *v5 + 72, (_QWORD *)(*v5 + 120));
      v7 = *v5;
      ++v5;
      (*(void (__fastcall **)(Minecart *, int, _DWORD))(*(_DWORD *)_R4 + 136))(_R4, v7, 0);
    }
    __asm { VLDR            S0, [R4,#0x48] }
    _R0 = (int)_R4 + 3472;
    __asm
      VLDR            S6, [R4,#0x54]
      VLDR            S2, [R4,#0x4C]
      VLDR            S8, [R4,#0x58]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R4,#0x50]
      VSUB.F32        S2, S2, S8
      VLDR            S10, [R4,#0x5C]
      VLDR            S6, =0.05
      VSUB.F32        S4, S4, S10
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.95
      VADD.F32        S0, S0, S4
      VLDR            S4, [R0]
      VMUL.F32        S2, S4, S2
      VSQRT.F32       S0, S0
      VMUL.F32        S0, S0, S6
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0]
  }
  else
    if ( Entity::getHurtTime(_R4) >= 1 )
      v13 = Entity::getHurtTime(_R4);
      Entity::setHurtTime(_R4, v13 - 1);
    if ( Entity::getStructuralIntegrity(_R4) <= 19 )
      v14 = Entity::getStructuralIntegrity(_R4);
      Entity::setStructuralIntegrity(_R4, v14 + 1);
      VMOV.F32        S0, #-16.0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      (*(void (__fastcall **)(Minecart *))(*(_DWORD *)_R4 + 692))(_R4);
      VLDR            S0, =-0.04
      VLDR            S2, [R4,#0x70]
      VSTR            S0, [R4,#0x70]
    v15 = (BaseRailBlock *)Entity::getRegion(_R4);
    BlockPos::BlockPos((int)&v50, (int)v2);
    v47 = *(_DWORD *)&v50;
    v48 = v51 - 1;
    v49 = v52;
    if ( BaseRailBlock::isRail(v15, (BlockSource *)&v47, v52) == 1 )
      --v51;
      *((_DWORD *)_R4 + 56) = 0;
    BlockSource::getBlockAndData((BlockSource *)&v46, v15, (int)&v50);
    if ( BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v46, v16) == 1 )
      (*(void (__fastcall **)(Minecart *))(*(_DWORD *)_R4 + 788))(_R4);
    Entity::normalTick(_R4);
    (*(void (__fastcall **)(Minecart *, signed int))(*(_DWORD *)_R4 + 728))(_R4, 981668463);
    *((_DWORD *)_R4 + 30) = 0;
      VLDR            S0, [R4,#0x48]
      VLDR            S2, [R4,#0x54]
      VLDR            S6, [R4,#0x5C]
      VSUB.F32        S0, S2, S0
      VSUB.F32        S2, S6, S4
      VMUL.F32        S4, S0, S0
      VMUL.F32        S6, S2, S2
      VADD.F32        S4, S6, S4
      VLDR            D3, =0.001
      VCVT.F64.F32    D2, S4
      VCMPE.F64       D2, D3
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDR            S0, [R4,#0x7C] }
      _R7 = (int)_R4 + 124;
    else
      __asm
      {
        VMOV            R0, S2
        VMOV            R1, S0
      }
      v20 = mce::Math::atan2(_R0, v18);
      mce::Degree::Degree((int)&v45, v20);
      _R0 = mce::Degree::asFloat(v21);
      __asm { VLDR            S0, [R0] }
      __asm { VSTR            S0, [R4,#0x7C] }
      if ( *((_BYTE *)_R4 + 3409) )
        __asm
        {
          VLDRNE          S2, =180.0
          VADDNE.F32      S0, S0, S2
          VSTRNE          S0, [R7]
        }
      VLDR            S2, [R4,#0x84]
      VSUB.F32        S0, S0, S2
      VMOV            R0, S0
    _R0 = mce::Math::wrapDegrees(_R0, v17);
      VMOV            S0, R0
      VLDR            S2, =-170.0
      VCMPE.F32       S0, S2
      goto LABEL_43;
      VLDR            S2, =170.0
    if ( !(_NF ^ _VF) )
LABEL_43:
        VLDR            S0, =180.0
        VLDR            S2, [R7]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R7]
      *((_BYTE *)_R4 + 3409) ^= 1u;
    (*(void (__fastcall **)(Minecart *, char *))(*(_DWORD *)_R4 + 72))(_R4, v3);
    v41 = 1045220557;
    v42 = 0;
    v43 = 1045220557;
    AABB::grow((AABB *)&v44, (Minecart *)((char *)_R4 + 264), (int)&v41);
    v26 = BlockSource::fetchEntities(v15, _R4, (const AABB *)&v44);
    v27 = v26;
    v28 = 0;
    *(_QWORD *)&v29 = *(_QWORD *)v26;
    v31 = v30 - v29;
    if ( 0 != (v30 - v29) >> 2 )
      if ( (unsigned int)(v31 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v32 = (Entity **)operator new(v31);
      *(_QWORD *)&v29 = *(_QWORD *)v27;
      v28 = v32;
    v33 = v30 - v29;
    if ( 0 != v33 >> 2 )
      v34 = v33 >> 2;
      _aeabi_memmove4(v28, v29);
      v35 = 4 * v34;
      v36 = v28;
      do
        v37 = *v36;
        if ( *v36
          && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v37 + 300))(*v36) == 1
          && Entity::hasCategory((int)v37, 0x10000) == 1
          && !Entity::isRider(_R4, v37) )
          (*(void (__fastcall **)(Entity *, Minecart *, _DWORD))(*(_DWORD *)v37 + 272))(v37, _R4, 0);
        v35 -= 4;
        ++v36;
      while ( v35 );
    (*(void (__fastcall **)(Minecart *))(*(_DWORD *)_R4 + 736))(_R4);
    (*(void (__fastcall **)(Minecart *))(*(_DWORD *)_R4 + 748))(_R4);
    for ( *(_QWORD *)&v38 = *(_QWORD *)((char *)_R4 + 476); v39 != v38; ++v38 )
      Entity::setPreviousPosRot(*v38, *v38 + 72, (_QWORD *)(*v38 + 120));
      (*(void (__fastcall **)(Minecart *, int, _DWORD))(*(_DWORD *)_R4 + 136))(_R4, *v38, 0);
    if ( !_ZF )
      operator delete(v28);
}


int __fastcall Minecart::getDefaultDisplayData(Minecart *this)
{
  return 0;
}


void __fastcall Minecart::~Minecart(Minecart *this)
{
  Minecart::~Minecart(this);
}


int __fastcall Minecart::getControllingPlayer(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall Minecart::hasCustomDisplay(Minecart *this)
{
  int result; // r0@1

  result = (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18);
  if ( (unsigned __int8)result != 1 )
    result = 0;
  return result;
}


int __fastcall Minecart::onBounceStarted(int result, const BlockPos *a2, const FullBlock *a3)
{
  __asm
  {
    VLDR            S0, =0.95
    VLDR            S2, [R0,#0x70]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x70]
  }
  return result;
}


void __fastcall Minecart::reloadHardcoded(int a1)
{
  _R4 = a1;
  if ( !*(_BYTE *)(a1 + 3081) )
  {
    *(_BYTE *)(a1 + 536) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 680))(a1);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R4,#0x134]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0x13C]
    }
    *(_BYTE *)(_R4 + 537) = 1;
    j_j_j__ZN8Minecart21registerLoopingSoundsEv((Minecart *)_R4);
  }
}


int __fastcall Minecart::isPickable(Minecart *this)
{
  return Entity::isRemoved(this) ^ 1;
}


void __fastcall Minecart::normalTick(Minecart *this)
{
  Minecart::normalTick(this);
}


int __fastcall Minecart::getShadowRadius(Minecart *this)
{
  return 0;
}


unsigned int __fastcall Minecart::setCustomDisplay(Minecart *this, int a2)
{
  Minecart *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Minecart *)((char *)this + 176), 18);
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


int __fastcall Minecart::getShadowHeightOffs(Minecart *this)
{
  return 0;
}


int __fastcall Minecart::getDisplayData(Minecart *this)
{
  Minecart *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int result; // r0@2

  v1 = this;
  v2 = (Minecart *)((char *)this + 176);
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) == 1 )
    result = SynchedEntityData::getInt(v2, 16) >> 16;
  else
    result = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v1 + 780))(v1);
  return result;
}


int __fastcall Minecart::destroy(Minecart *this, const EntityDamageSource *a2, int a3)
{
  Minecart *v3; // r4@1
  void (__fastcall *v4)(Minecart *, int *, _DWORD); // r6@2
  ContainerComponent *v5; // r5@9
  BlockSource *v6; // r0@10
  int v8; // [sp+0h] [bp-58h]@2
  int v9; // [sp+8h] [bp-50h]@6
  void *v10; // [sp+24h] [bp-34h]@4
  void *ptr; // [sp+34h] [bp-24h]@2

  v3 = this;
  if ( a3 == 1 )
  {
    v4 = *(void (__fastcall **)(Minecart *, int *, _DWORD))(*(_DWORD *)this + 452);
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mMinecart, 1);
    v4(v3, &v8, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
  }
  v5 = (ContainerComponent *)*((_DWORD *)v3 + 782);
  if ( v5 )
    v6 = (BlockSource *)Entity::getRegion(v3);
    ContainerComponent::dropContents(v5, v6, (Minecart *)((char *)v3 + 72), 1);
  return (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v3 + 44))(v3);
}


void __fastcall Minecart::addAdditionalSaveData(Minecart *this, CompoundTag *a2)
{
  Minecart *v2; // r5@1
  SynchedEntityData *v3; // r6@1
  CompoundTag *v4; // r7@1
  void *v5; // r0@2
  int v6; // r0@4
  int v7; // r0@5
  int v8; // r0@9
  int v9; // r2@10
  void *v10; // r0@14
  int v11; // r2@16
  void *v12; // r0@18
  int v13; // r2@20
  void *v14; // r0@22
  void *v15; // r0@24
  unsigned int *v16; // r2@26
  signed int v17; // r1@28
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  unsigned int *v22; // r2@38
  signed int v23; // r1@40
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  int v26; // [sp+4h] [bp-3Ch]@24
  int v27; // [sp+Ch] [bp-34h]@19
  int v28; // [sp+14h] [bp-2Ch]@15
  int v29; // [sp+1Ch] [bp-24h]@3
  int v30; // [sp+24h] [bp-1Ch]@2

  v2 = this;
  v3 = (Minecart *)((char *)this + 176);
  v4 = a2;
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) != 1 )
    goto LABEL_23;
  sub_21E94B4((void **)&v30, "CustomDisplayTile");
  CompoundTag::putBoolean((int)v4, (const void **)&v30, 1);
  v5 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v29, "DisplayTile");
  if ( (unsigned __int8)SynchedEntityData::getInt8(v3, 18) != 1 )
    v7 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 776))(v2);
LABEL_7:
    if ( v7 )
      if ( (unsigned __int8)SynchedEntityData::getInt8(v3, 18) == 1 )
        v8 = Block::mBlocks[(unsigned __int16)SynchedEntityData::getInt(v3, 16)];
      else
        v8 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 776))(v2);
      v9 = *(_BYTE *)(v8 + 4);
      v9 = 0;
    goto LABEL_14;
  v6 = SynchedEntityData::getInt(v3, 16);
  if ( (unsigned int)(v6 - 1) <= 0xFD )
    v7 = Block::mBlocks[(unsigned __int16)v6];
    goto LABEL_7;
  v9 = 0;
LABEL_14:
  CompoundTag::putInt((int)v4, (const void **)&v29, v9);
  v10 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v28, "DisplayData");
  if ( (unsigned __int8)SynchedEntityData::getInt8(v3, 18) == 1 )
    v11 = SynchedEntityData::getInt(v3, 16) >> 16;
  else
    v11 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 780))(v2);
  CompoundTag::putInt((int)v4, (const void **)&v28, v11);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v27, "DisplayOffset");
    v13 = SynchedEntityData::getInt(v3, 17);
    v13 = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v2 + 784))(v2);
  CompoundTag::putInt((int)v4, (const void **)&v27, v13);
  v14 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
LABEL_23:
  if ( *(_DWORD *)(*((_DWORD *)v2 + 853) - 12) )
    sub_21E94B4((void **)&v26, "CustomName");
    CompoundTag::putString((int)v4, (const void **)&v26, (int *)v2 + 853);
    v15 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


signed int __fastcall Minecart::_hurt(Minecart *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  int v5; // r6@1
  const EntityDamageSource *v6; // r8@1
  Level *v8; // r0@1
  int v9; // r0@3
  int v10; // r0@3
  int v11; // r6@3
  int v12; // r1@3
  int v13; // r0@3
  int v14; // r6@3
  signed int v15; // r9@6
  signed int v20; // r6@9
  Level *v21; // r0@10
  char *v22; // r0@10
  Level *v24; // r0@10
  char *v25; // r0@10
  Level *v27; // r0@10
  char *v28; // r0@10
  int v30; // r0@10
  void (__fastcall *v31)(Entity *, const EntityDamageSource *, int); // r4@11
  int v32; // r2@12
  Level *v33; // r0@13
  unsigned __int64 *v34; // r0@13
  float v36; // [sp+Ch] [bp-7Ch]@10
  unsigned int v37; // [sp+18h] [bp-70h]@3
  unsigned int v38; // [sp+1Ch] [bp-6Ch]@3

  v5 = a3;
  v6 = a2;
  _R5 = this;
  v8 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v8) && !Entity::isRemoved(_R5) )
  {
    v9 = Entity::getHurtDir(_R5);
    Entity::setHurtDir(_R5, -v9);
    Entity::setHurtTime(_R5, 10);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 700))(_R5);
    v10 = Entity::getStructuralIntegrity(_R5);
    Entity::setStructuralIntegrity(_R5, v10 - 8 * v5);
    v11 = Entity::getLevel(_R5);
    (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v6 + 32))(&v37, v6);
    v13 = Level::fetchEntity(v11, v12, v37, v38, 0);
    v14 = v13;
    if ( v13 && Entity::hasCategory(v13, 1) == 1 && Abilities::getBool(v14 + 4320, (int **)&Abilities::INSTABUILD) )
    {
      v15 = 1;
    }
    else
      if ( Entity::getStructuralIntegrity(_R5) > 0 )
        return 1;
      v15 = 0;
    Entity::removeAllRiders(_R5, 1, 0);
    __asm { VLDR            D8, =2.32830644e-10 }
    v20 = 4;
    __asm
      VLDR            S18, =-0.15
      VLDR            S20, =0.3
      VLDR            S19, =0.1
    do
      __asm { VLDR            S24, [R5,#0x48] }
      v21 = (Level *)Entity::getLevel(_R5);
      v22 = Level::getRandom(v21);
      _R4 = Random::_genRandInt32((Random *)v22);
      __asm { VLDR            S26, [R5,#0x4C] }
      v24 = (Level *)Entity::getLevel(_R5);
      v25 = Level::getRandom(v24);
      _R0 = Random::_genRandInt32((Random *)v25);
      __asm
      {
        VMOV            S0, R4
        VLDR            S28, [R5,#0x50]
        VCVT.F64.U32    D15, S0
        VMOV            S0, R0
        VCVT.F64.U32    D11, S0
      }
      v27 = (Level *)Entity::getLevel(_R5);
      v28 = Level::getRandom(v27);
      _R0 = Random::_genRandInt32((Random *)v28);
        VMUL.F64        D1, D15, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VMUL.F64        D2, D11, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S4, D2
        VCVT.F32.F64    S0, D0
        VADD.F32        S6, S24, S18
        VMUL.F32        S2, S2, S20
        VMUL.F32        S4, S4, S19
        VADD.F32        S8, S28, S18
        VMUL.F32        S0, S0, S20
        VADD.F32        S22, S6, S2
        VADD.F32        S24, S4, S26
        VADD.F32        S26, S8, S0
      v30 = Entity::getLevel(_R5);
        VSTR            S22, [SP,#0x88+var_7C]
        VSTR            S24, [SP,#0x88+var_78]
        VSTR            S26, [SP,#0x88+var_74]
      Level::addParticle(v30, 4, (int)&v36);
      --v20;
    while ( v20 );
    v31 = *(void (__fastcall **)(Entity *, const EntityDamageSource *, int))(*(_DWORD *)_R5 + 768);
    if ( v15 )
      v32 = 0;
      v33 = (Level *)Entity::getLevel(_R5);
      v34 = (unsigned __int64 *)Level::getGameRules(v33);
      v32 = GameRules::getBool(v34, (int **)&GameRules::DO_ENTITY_DROPS);
    v31(_R5, v6, v32);
  }
  return 1;
}


void __fastcall Minecart::reloadHardcoded(int a1)
{
  Minecart::reloadHardcoded(a1);
}


int __fastcall Minecart::getDisplayBlock(Minecart *this)
{
  Minecart *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int v3; // r0@2
  int result; // r0@3

  v1 = this;
  v2 = (Minecart *)((char *)this + 176);
  if ( (unsigned __int8)SynchedEntityData::getInt8((Minecart *)((char *)this + 176), 18) == 1 )
  {
    v3 = SynchedEntityData::getInt(v2, 16);
    if ( (unsigned int)(v3 - 1) <= 0xFD )
      result = Block::mBlocks[(unsigned __int16)v3];
    else
      result = 0;
  }
  else
    result = (*(int (__fastcall **)(Minecart *))(*(_DWORD *)v1 + 776))(v1);
  return result;
}


void __fastcall Minecart::addAdditionalSaveData(Minecart *this, CompoundTag *a2)
{
  Minecart::addAdditionalSaveData(this, a2);
}


void __fastcall Minecart::readAdditionalSaveData(Minecart *this, const CompoundTag *a2)
{
  Minecart::readAdditionalSaveData(this, a2);
}
