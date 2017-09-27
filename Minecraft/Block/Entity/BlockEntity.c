

void __fastcall BlockEntity::loadStatic(BlockEntity *this, const CompoundTag *a2)
{
  BlockEntity::loadStatic(this, a2);
}


int __fastcall BlockEntity::distanceToSqr(BlockEntity *this, const Vec3 *a2)
{
  BlockEntity *v2; // r5@1
  int v4; // r1@1
  int v5; // r12@1
  int result; // r0@1
  signed int v11; // [sp+0h] [bp-40h]@1
  signed int v12; // [sp+4h] [bp-3Ch]@1
  int v13; // [sp+8h] [bp-38h]@1
  int v14; // [sp+Ch] [bp-34h]@1
  int v15; // [sp+10h] [bp-30h]@1
  int v16; // [sp+14h] [bp-2Ch]@1
  int v17; // [sp+18h] [bp-28h]@1
  int v18; // [sp+1Ch] [bp-24h]@1
  int v19; // [sp+20h] [bp-20h]@1
  float v20; // [sp+24h] [bp-1Ch]@1

  v2 = this;
  v11 = 1056964608;
  v12 = 1056964608;
  _R4 = a2;
  v13 = 1056964608;
  BlockPos::BlockPos((int)&v14, (int)&v11);
  v4 = *((_DWORD *)v2 + 9);
  v5 = *((_DWORD *)v2 + 10);
  v17 = *((_DWORD *)v2 + 8) + v14;
  v18 = v15 + v4;
  v19 = v16 + v5;
  Vec3::Vec3((int)&v20, (int)&v17);
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S6, [SP,#0x40+var_1C]
    VLDR            S2, [R4,#4]
    VLDR            S8, [SP,#0x40+var_18]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x40+var_14]
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


int __fastcall BlockEntity::setRunningId(int result, int a2)
{
  *(_DWORD *)(result + 80) = a2;
  return result;
}


signed int __fastcall BlockEntity::isType(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 76);
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


char *__fastcall BlockEntity::getPosition(BlockEntity *this)
{
  return (char *)this + 32;
}


  if ( v3 && BlockEntity::isType(v3, 17) == 1 )
{
    v5 = ItemFrameBlockEntity::getFramedItem(v4);
    ItemInstance::ItemInstance((ItemInstance *)&v8, (int)v5);
    if ( v8 == Item::mFilledMap )
    {
      v6 = (Level *)BlockSource::getLevel(*(BlockSource **)(v2 + 4));
      *(_DWORD *)(*(_DWORD *)*(_QWORD *)(v2 + 8) + 4 * *(_DWORD *)(*(_QWORD *)(v2 + 8) >> 32)) = Level::getMapSavedData(
                                                                                                   v6,
                                                                                                   (const ItemInstance *)&v8);
      ++**(_DWORD **)(v2 + 16);
    }
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  result = *(_DWORD **)(v2 + 12);
  ++*result;
  return result;
}


char *__fastcall BlockEntity::canRenderCustomName(BlockEntity *this)
{
  return (char *)this + 99;
}


int __fastcall BlockEntity::setRendererId(int result, int a2)
{
  *(_DWORD *)(result + 84) = a2;
  return result;
}


void __fastcall BlockEntity::~BlockEntity(BlockEntity *this)
{
  BlockEntity::~BlockEntity(this);
}


int __fastcall BlockEntity::saveItemInstanceData(BlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r5@1
  int v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+8h] [bp-28h]@3
  int v15; // [sp+10h] [bp-20h]@2
  int v16; // [sp+18h] [bp-18h]@1

  v2 = a2;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 12))();
  sub_21E94B4((void **)&v16, "x");
  CompoundTag::safeRemove((int)v2, (const void **)&v16);
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v15, "y");
  CompoundTag::safeRemove((int)v2, (const void **)&v15);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v14, (const char *)&aRtuz[3]);
  CompoundTag::safeRemove((int)v2, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v3;
}


char *__fastcall BlockEntity::getRendererId(BlockEntity *this)
{
  return (char *)this + 84;
}


signed int __fastcall BlockEntity::isInWorld(BlockEntity *this)
{
  int v1; // r2@3
  signed int result; // r0@3

  if ( *((_DWORD *)this + 8) != BlockPos::MIN || *((_DWORD *)this + 9) != dword_2816254 )
  {
    result = 1;
  }
  else
    v1 = *((_DWORD *)this + 10);
    result = 0;
    if ( v1 != dword_2816258 )
      result = 1;
  return result;
}


void __fastcall BlockEntity::load(BlockEntity *this, const CompoundTag *a2)
{
  BlockEntity::load(this, a2);
}


int __fastcall BlockEntity::setCustomNameSaved(int result, bool a2)
{
  *(_BYTE *)(result + 98) = a2;
  return result;
}


int __fastcall BlockEntity::stopDestroy(int result)
{
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall BlockEntity::setMovable(int result, bool a2)
{
  *(_BYTE *)(result + 97) = a2;
  return result;
}


int __fastcall BlockEntity::isFinished(BlockEntity *this)
{
  return 0;
}


char *__fastcall BlockEntity::setCustomName(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 88), a2);
  return sub_21E7EE0((const void **)(v2 + 92), 0, *(_BYTE **)(*(_DWORD *)(v2 + 92) - 12), 0);
}


int __fastcall BlockEntity::moveTo(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 32) = *(_DWORD *)a2;
  *(_DWORD *)(result + 36) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 40) = *((_DWORD *)a2 + 2);
  return result;
}


char *__fastcall BlockEntity::getAABB(BlockEntity *this)
{
  return (char *)this + 44;
}


int __fastcall BlockEntity::hasAlphaLayer(BlockEntity *this)
{
  return 0;
}


void __fastcall BlockEntity::getDebugText(int a1, int a2)
{
  BlockEntity::getDebugText(a1, a2);
}


signed int __fastcall BlockEntity::save(BlockEntity *this, CompoundTag *a2)
{
  BlockEntity *v2; // r4@1
  CompoundTag *v3; // r5@1
  int v4; // r2@1
  int v5; // r0@2
  int *v6; // r1@2
  int *v7; // r6@3
  signed int result; // r0@12
  void *v9; // r0@13
  void *v10; // r0@14
  void *v11; // r0@15
  void *v12; // r0@16
  void *v13; // r0@17
  int *v14; // r4@18
  int v15; // t1@18
  void *v16; // r0@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  unsigned int *v27; // r2@41
  signed int v28; // r1@43
  int v29; // [sp+8h] [bp-40h]@19
  int v30; // [sp+10h] [bp-38h]@17
  int v31; // [sp+18h] [bp-30h]@16
  int v32; // [sp+20h] [bp-28h]@15
  int v33; // [sp+28h] [bp-20h]@14
  int v34; // [sp+30h] [bp-18h]@13

  v2 = this;
  v3 = a2;
  v4 = dword_280E4A0;
  if ( dword_280E4A0 )
  {
    v5 = *((_DWORD *)this + 19);
    v6 = &dword_280E49C;
    do
    {
      v7 = (int *)v4;
      while ( v7[4] < v5 )
      {
        v7 = (int *)v7[3];
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = v7[2];
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = &dword_280E49C;
LABEL_10:
  if ( v7 != &dword_280E49C && *((_DWORD *)v2 + 19) >= v7[4] )
    sub_21E94B4((void **)&v34, "id");
    CompoundTag::putString((int)v3, (const void **)&v34, v7 + 5);
    v9 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v33, "x");
    CompoundTag::putInt((int)v3, (const void **)&v33, *((_DWORD *)v2 + 8));
    v10 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v33 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v32, "y");
    CompoundTag::putInt((int)v3, (const void **)&v32, *((_DWORD *)v2 + 9));
    v11 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v32 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v31, (const char *)&aRtuz[3]);
    CompoundTag::putInt((int)v3, (const void **)&v31, *((_DWORD *)v2 + 10));
    v12 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v31 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v30, "isMovable");
    CompoundTag::putBoolean((int)v3, (const void **)&v30, *((_BYTE *)v2 + 97));
    v13 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v15 = *((_DWORD *)v2 + 22);
    v14 = (int *)((char *)v2 + 88);
    if ( *(_DWORD *)(v15 - 12) )
      sub_21E94B4((void **)&v29, "CustomName");
      CompoundTag::putString((int)v3, (const void **)&v29, v14);
      v16 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    result = 1;
    result = 0;
  return result;
}


void __fastcall BlockEntity::getDebugText(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // r0@2
  int v6; // r1@3
  __int64 v7; // r0@4
  int v8; // r1@5
  void *v9; // r0@7
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // r2@14
  int *v13; // r1@15
  int *v14; // r6@16
  __int64 v15; // r0@25
  int v16; // r1@26
  void *v17; // r0@28
  const void **v18; // r0@29
  void *v19; // r1@29
  __int64 v20; // kr00_8@29
  char *v21; // r1@30
  char *v22; // r0@32
  void *v23; // r0@33
  const void **v24; // r0@34
  void *v25; // r1@34
  __int64 v26; // kr08_8@34
  char *v27; // r1@35
  char *v28; // r0@37
  void *v29; // r0@38
  unsigned int *v30; // r2@40
  signed int v31; // r1@42
  unsigned int *v32; // r2@44
  signed int v33; // r1@46
  unsigned int *v34; // r2@48
  signed int v35; // r1@50
  unsigned int *v36; // r2@52
  signed int v37; // r1@54
  unsigned int *v38; // r2@56
  signed int v39; // r1@58
  int v40; // [sp+0h] [bp-38h]@34
  char *v41; // [sp+4h] [bp-34h]@34
  int v42; // [sp+8h] [bp-30h]@29
  char *v43; // [sp+Ch] [bp-2Ch]@29
  void *v44; // [sp+10h] [bp-28h]@25
  void *v45; // [sp+18h] [bp-20h]@4
  void *v46; // [sp+20h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
  {
    Block::getDebugText(v4, a2);
    sub_21E94B4(&v46, (const char *)&unk_257BC67);
    v5 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v3,
        &v46);
      v6 = (int)v46;
    }
    else
      *(_DWORD *)v5 = v46;
      HIDWORD(v5) = &unk_28898CC;
      v46 = &unk_28898CC;
      *(_DWORD *)(v3 + 4) = v5 + 4;
    v9 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) == &dword_28898C0 )
      goto LABEL_14;
    v10 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_85;
LABEL_84:
    v11 = (*v10)--;
    goto LABEL_85;
  }
  sub_21E94B4(&v45, "No valid block");
  v7 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v45);
    v8 = (int)v45;
  else
    *(_DWORD *)v7 = v45;
    HIDWORD(v7) = &unk_28898CC;
    v45 = &unk_28898CC;
    *(_DWORD *)(v3 + 4) = v7 + 4;
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) == &dword_28898C0 )
    goto LABEL_14;
  v10 = (unsigned int *)(v8 - 4);
  if ( !&pthread_create )
    goto LABEL_84;
  __dmb();
  do
    v11 = __ldrex(v10);
  while ( __strex(v11 - 1, v10) );
LABEL_85:
  if ( v11 <= 0 )
    j_j_j_j__ZdlPv_9(v9);
LABEL_14:
  v12 = dword_280E4A0;
  if ( dword_280E4A0 )
    v13 = &dword_280E49C;
    do
      v14 = (int *)v12;
      while ( v14[4] < *(_DWORD *)(v2 + 76) )
      {
        v14 = (int *)v14[3];
        if ( !v14 )
        {
          v14 = v13;
          goto LABEL_23;
        }
      }
      v12 = v14[2];
      v13 = v14;
    while ( v12 );
    v14 = &dword_280E49C;
LABEL_23:
  if ( v14 == &dword_280E49C || *(_DWORD *)(v2 + 76) < v14[4] )
    sub_21E5A84("map::at");
  v44 = &unk_28898CC;
  sub_21E6FCC((const void **)&v44, *(_DWORD *)(v14[5] - 12) + 6);
  sub_21E7408((const void **)&v44, "Type: ", 6u);
  sub_21E72F0((const void **)&v44, (const void **)v14 + 5);
  v15 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v15 == HIDWORD(v15) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v44);
    v16 = (int)v44;
    *(_DWORD *)v15 = v44;
    HIDWORD(v15) = &unk_28898CC;
    v44 = &unk_28898CC;
    *(_DWORD *)(v3 + 4) = v15 + 4;
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v16 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  BlockPos::toString((BlockPos *)&v42, v2 + 32);
  v18 = sub_21E82D8((const void **)&v42, 0, (unsigned int)"Position: ", (_BYTE *)0xA);
  v19 = (void *)*v18;
  v43 = (char *)*v18;
  *v18 = &unk_28898CC;
  v20 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v43);
    v21 = v43;
    *(_DWORD *)v20 = v19;
    v21 = (char *)&unk_28898CC;
    v43 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v20 + 4;
  v22 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v21 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  Util::toString<int,(void *)0,(void *)0>((void **)&v40, *(_DWORD *)(v2 + 72));
  v24 = sub_21E82D8((const void **)&v40, 0, (unsigned int)"Data: ", (_BYTE *)6);
  v25 = (void *)*v24;
  v41 = (char *)*v24;
  *v24 = &unk_28898CC;
  v26 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v41);
    v27 = v41;
    *(_DWORD *)v26 = v25;
    v27 = (char *)&unk_28898CC;
    v41 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v26 + 4;
  v28 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v27 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v40 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


void __fastcall BlockEntity::initBlockEntities(BlockEntity *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  void *v18; // r0@18
  void *v19; // r0@19
  void *v20; // r0@20
  void *v21; // r0@21
  void *v22; // r0@22
  void *v23; // r0@23
  void *v24; // r0@24
  void *v25; // r0@25
  void *v26; // r0@26
  void *v27; // r0@27
  void *v28; // r0@28
  void *v29; // r0@29
  void *v30; // r0@30
  unsigned int *v31; // r2@32
  signed int v32; // r1@34
  unsigned int *v33; // r2@36
  signed int v34; // r1@38
  unsigned int *v35; // r2@40
  signed int v36; // r1@42
  unsigned int *v37; // r2@44
  signed int v38; // r1@46
  unsigned int *v39; // r2@48
  signed int v40; // r1@50
  unsigned int *v41; // r2@52
  signed int v42; // r1@54
  unsigned int *v43; // r2@56
  signed int v44; // r1@58
  unsigned int *v45; // r2@60
  signed int v46; // r1@62
  unsigned int *v47; // r2@64
  signed int v48; // r1@66
  unsigned int *v49; // r2@68
  signed int v50; // r1@70
  unsigned int *v51; // r2@72
  signed int v52; // r1@74
  unsigned int *v53; // r2@76
  signed int v54; // r1@78
  unsigned int *v55; // r2@80
  signed int v56; // r1@82
  unsigned int *v57; // r2@84
  signed int v58; // r1@86
  unsigned int *v59; // r2@88
  signed int v60; // r1@90
  unsigned int *v61; // r2@92
  signed int v62; // r1@94
  unsigned int *v63; // r2@96
  signed int v64; // r1@98
  unsigned int *v65; // r2@100
  signed int v66; // r1@102
  unsigned int *v67; // r2@104
  signed int v68; // r1@106
  unsigned int *v69; // r2@108
  signed int v70; // r1@110
  unsigned int *v71; // r2@112
  signed int v72; // r1@114
  unsigned int *v73; // r2@116
  signed int v74; // r1@118
  unsigned int *v75; // r2@120
  signed int v76; // r1@122
  unsigned int *v77; // r2@124
  signed int v78; // r1@126
  unsigned int *v79; // r2@128
  signed int v80; // r1@130
  unsigned int *v81; // r2@132
  signed int v82; // r1@134
  unsigned int *v83; // r2@136
  signed int v84; // r1@138
  unsigned int *v85; // r2@140
  signed int v86; // r1@142
  unsigned int *v87; // r2@144
  signed int v88; // r1@146
  unsigned int *v89; // r2@148
  signed int v90; // r1@150
  int v91; // [sp+8h] [bp-100h]@30
  int v92; // [sp+10h] [bp-F8h]@29
  int v93; // [sp+18h] [bp-F0h]@28
  int v94; // [sp+20h] [bp-E8h]@27
  int v95; // [sp+28h] [bp-E0h]@26
  int v96; // [sp+30h] [bp-D8h]@25
  int v97; // [sp+38h] [bp-D0h]@24
  int v98; // [sp+40h] [bp-C8h]@23
  int v99; // [sp+48h] [bp-C0h]@22
  int v100; // [sp+50h] [bp-B8h]@21
  int v101; // [sp+58h] [bp-B0h]@20
  int v102; // [sp+60h] [bp-A8h]@19
  int v103; // [sp+68h] [bp-A0h]@18
  int v104; // [sp+70h] [bp-98h]@17
  int v105; // [sp+78h] [bp-90h]@16
  int v106; // [sp+80h] [bp-88h]@15
  int v107; // [sp+88h] [bp-80h]@14
  int v108; // [sp+90h] [bp-78h]@13
  int v109; // [sp+98h] [bp-70h]@12
  int v110; // [sp+A0h] [bp-68h]@11
  int v111; // [sp+A8h] [bp-60h]@10
  int v112; // [sp+B0h] [bp-58h]@9
  int v113; // [sp+B8h] [bp-50h]@8
  int v114; // [sp+C0h] [bp-48h]@7
  int v115; // [sp+C8h] [bp-40h]@6
  int v116; // [sp+D0h] [bp-38h]@5
  int v117; // [sp+D8h] [bp-30h]@4
  int v118; // [sp+E0h] [bp-28h]@3
  int v119; // [sp+E8h] [bp-20h]@2
  int v120; // [sp+F0h] [bp-18h]@1

  sub_21E94B4((void **)&v120, "Furnace");
  BlockEntity::setId(1, (const void **)&v120);
  v1 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v120 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v119, "Chest");
  BlockEntity::setId(2, (const void **)&v119);
  v2 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v119 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v118, "NetherReactor");
  BlockEntity::setId(3, (const void **)&v118);
  v3 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v118 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v117, "Sign");
  BlockEntity::setId(4, (const void **)&v117);
  v4 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v117 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v116, "MobSpawner");
  BlockEntity::setId(5, (const void **)&v116);
  v5 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v116 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v115, "EnchantTable");
  BlockEntity::setId(9, (const void **)&v115);
  v6 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v115 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v114, "Skull");
  BlockEntity::setId(6, (const void **)&v114);
  v7 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v114 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v113, "FlowerPot");
  BlockEntity::setId(7, (const void **)&v113);
  v8 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v113 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v112, "BrewingStand");
  BlockEntity::setId(8, (const void **)&v112);
  v9 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v112 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v111, "DaylightDetector");
  BlockEntity::setId(10, (const void **)&v111);
  v10 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v111 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v110, "Music");
  BlockEntity::setId(11, (const void **)&v110);
  v11 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v110 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v109, "Jukebox");
  BlockEntity::setId(33, (const void **)&v109);
  v12 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v109 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v108, "Comparator");
  BlockEntity::setId(12, (const void **)&v108);
  v13 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v108 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v107, "Dispenser");
  BlockEntity::setId(13, (const void **)&v107);
  v14 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v107 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v106, "Dropper");
  BlockEntity::setId(14, (const void **)&v106);
  v15 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v106 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v105, "Hopper");
  BlockEntity::setId(15, (const void **)&v105);
  v16 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v105 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v104, "Cauldron");
  BlockEntity::setId(16, (const void **)&v104);
  v17 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v104 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v103, "ItemFrame");
  BlockEntity::setId(17, (const void **)&v103);
  v18 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v103 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v102, "PistonArm");
  BlockEntity::setId(18, (const void **)&v102);
  v19 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v102 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v101, "Beacon");
  BlockEntity::setId(21, (const void **)&v101);
  v20 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v101 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v100, "MovingBlock");
  BlockEntity::setId(19, (const void **)&v100);
  v21 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v100 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v99, "EndPortal");
  BlockEntity::setId(22, (const void **)&v99);
  v22 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v99 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v98, "EnderChest");
  BlockEntity::setId(23, (const void **)&v98);
  v23 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v98 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v97, "EndGateway");
  BlockEntity::setId(24, (const void **)&v97);
  v24 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v97 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v96, "Banner");
  BlockEntity::setId(28, (const void **)&v96);
  v25 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v96 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v95, "StructureBlock");
  BlockEntity::setId(32, (const void **)&v95);
  v26 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v95 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v94, "ChalkboardBlock");
  BlockEntity::setId(20, (const void **)&v94);
  v27 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v94 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v93, "ShulkerBox");
  BlockEntity::setId(25, (const void **)&v93);
  v28 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v93 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v92, "CommandBlock");
  BlockEntity::setId(26, (const void **)&v92);
  v29 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v92 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v91, "Bed");
  BlockEntity::setId(27, (const void **)&v91);
  v30 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v91 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


int __fastcall BlockEntity::getShadowRadius(BlockEntity *this, BlockSource *a2)
{
  return 0;
}


signed int __fastcall BlockEntity::isType(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 76);
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


int __fastcall BlockEntity::clearCache(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 72) = -1;
  return result;
}


void __fastcall BlockEntity::~BlockEntity(BlockEntity *this)
{
  BlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_27090B4;
  v2 = *((_DWORD *)this + 23);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 22);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


int __fastcall BlockEntity::tick(BlockEntity *this, BlockSource *a2)
{
  BlockEntity *v2; // r4@1
  BlockSource *v3; // r5@1
  int result; // r0@3
  unsigned __int8 v5; // [sp+4h] [bp-14h]@2

  v2 = this;
  v3 = a2;
  ++*((_DWORD *)this + 1);
  if ( !*((_DWORD *)this + 2) )
  {
    BlockSource::getBlockID((BlockSource *)&v5, a2, (int)this + 32);
    *((_DWORD *)v2 + 2) = Block::mBlocks[v5];
  }
  result = *((_BYTE *)v2 + 101);
  if ( *((_BYTE *)v2 + 101) )
    BlockSource::fireBlockEntityChanged(v3, v2);
    (*(void (__fastcall **)(BlockEntity *, BlockSource *))(*(_DWORD *)v2 + 40))(v2, v3);
    result = 0;
    *((_BYTE *)v2 + 101) = 0;
  return result;
}


void __fastcall BlockEntity::initBlockEntities(BlockEntity *this)
{
  BlockEntity::initBlockEntities(this);
}


int __fastcall BlockEntity::BlockEntity(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r1@1
  int v7; // r2@1
  unsigned int v8; // r0@2
  unsigned int v9; // r0@2
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1
  int v19; // [sp+10h] [bp-18h]@1
  int v20; // [sp+14h] [bp-14h]@1
  int v21; // [sp+18h] [bp-10h]@1
  char v22; // [sp+1Ch] [bp-Ch]@1
  int v23; // [sp+28h] [bp+0h]@1
  float v24; // [sp+38h] [bp+10h]@3
  float v25; // [sp+44h] [bp+1Ch]@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = &off_27090B4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a3 + 8);
  Vec3::Vec3((int)&v23, a3);
  BlockPos::BlockPos((int)&v16, (int)&Vec3::ONE);
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 8);
  v19 = *(_DWORD *)v4 + v16;
  v20 = v17 + v6;
  v21 = v18 + v7;
  Vec3::Vec3((int)&v22, (int)&v19);
  AABB::AABB(v3 + 44, (int)&v23, (int)&v22);
  *(_DWORD *)(v3 + 72) = -1;
  *(_DWORD *)(v3 + 76) = v5;
  __dmb();
  do
  {
    v8 = __ldrex((unsigned int *)&BlockEntity::_runningId);
    v9 = v8 + 1;
  }
  while ( __strex(v9, (unsigned int *)&BlockEntity::_runningId) );
  *(_DWORD *)(v3 + 80) = v9;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 88) = &unk_28898CC;
  *(_DWORD *)(v3 + 92) = &unk_28898CC;
  *(_DWORD *)(v3 + 96) = 256;
  *(_BYTE *)(v3 + 101) = 1;
  Vec3::Vec3((int)&v25, v3 + 32);
  __asm
    VLDR            S0, [SP,#0x50+var_C]
    VLDR            S2, [SP,#0x50+var_8]
    VLDR            S4, [SP,#0x50+var_4]
  _R0 = &Vec3::ONE;
    VLDR            S6, [R0]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x50+var_18]
    VSTR            S2, [SP,#0x50+var_14]
    VSTR            S4, [SP,#0x50+var_10]
  AABB::set((AABB *)(v3 + 44), (const Vec3 *)&v25, (const Vec3 *)&v24);
  return v3;
}


void __fastcall BlockEntity::setId(int a1, const void **a2)
{
  const void **v2; // r9@1
  int v3; // r8@1
  int v4; // r0@1
  const void *v5; // r6@2
  size_t v6; // r5@2
  int *v7; // r10@2
  int *v8; // r7@3
  _DWORD *v9; // r0@4
  size_t v10; // r4@4
  size_t v11; // r2@4
  int v12; // r0@6
  _DWORD *v13; // r1@15
  unsigned int v14; // r4@15
  unsigned int v15; // r5@15
  size_t v16; // r2@15
  int v17; // r0@17
  void *v18; // r0@20
  int v19; // r0@21
  int v20; // r1@22
  int *v21; // r4@23
  int *v22; // r0@23
  int v23; // r2@23
  int v24; // r0@26
  int v25; // r5@34
  _DWORD *v26; // r0@38
  char *v27; // r0@39
  unsigned int *v28; // r2@41
  signed int v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  char *v32; // [sp+8h] [bp-38h]@21
  char v33; // [sp+Ch] [bp-34h]@20
  int v34; // [sp+14h] [bp-2Ch]@20
  int v35; // [sp+18h] [bp-28h]@20

  v2 = a2;
  v3 = a1;
  v4 = dword_280E488;
  if ( dword_280E488 )
  {
    v5 = *a2;
    v6 = *((_DWORD *)*a2 - 3);
    v7 = &dword_280E484;
    do
    {
      v8 = (int *)v4;
      while ( 1 )
      {
        v9 = (_DWORD *)v8[4];
        v10 = *(v9 - 3);
        v11 = *(v9 - 3);
        if ( v10 > v6 )
          v11 = v6;
        v12 = memcmp(v9, v5, v11);
        if ( !v12 )
          v12 = v10 - v6;
        if ( v12 >= 0 )
          break;
        v8 = (int *)v8[3];
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_14;
        }
      }
      v4 = v8[2];
      v7 = v8;
    }
    while ( v4 );
  }
  else
    v8 = &dword_280E484;
LABEL_14:
  if ( v8 == &dword_280E484 )
    goto LABEL_59;
  v13 = (_DWORD *)v8[4];
  v14 = *((_DWORD *)*v2 - 3);
  v15 = *(v13 - 3);
  v16 = *((_DWORD *)*v2 - 3);
  if ( v14 > v15 )
    v16 = *(v13 - 3);
  v17 = memcmp(*v2, v13, v16);
  if ( !v17 )
    v17 = v14 - v15;
  if ( v17 <= -1 )
LABEL_59:
    sub_21E8AF4(&v34, (int *)v2);
    v35 = v3;
    std::_Rb_tree<std::string,std::pair<std::string const,BlockEntityType>,std::_Select1st<std::pair<std::string const,BlockEntityType>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockEntityType>>>::_M_insert_unique<std::pair<std::string,BlockEntityType>>(
      (int *)&v33,
      (int)&BlockEntity::idClassMap,
      (const void **)&v34);
    v18 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E8AF4((int *)&v32, (int *)v2);
    v19 = dword_280E4A0;
    if ( dword_280E4A0 )
      v20 = v3;
      do
        v21 = (int *)v19;
        v22 = (int *)(v19 + 12);
        v23 = v21[4];
        if ( v3 < v23 )
          v22 = v21 + 2;
        v19 = *v22;
      while ( v19 );
      v24 = (int)v21;
      if ( v3 >= v23 )
        goto LABEL_31;
    else
      v21 = &dword_280E49C;
    if ( v21 == (int *)dword_280E4A4 )
      goto LABEL_32;
    v24 = sub_21D4858((int)v21);
    v20 = v3;
LABEL_31:
    if ( *(_DWORD *)(v24 + 16) >= v20 )
LABEL_39:
      v27 = v32 - 12;
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v32 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      return;
LABEL_32:
    if ( v21 )
      if ( v21 == &dword_280E49C )
        v25 = 1;
        v25 = 0;
        if ( v3 < v21[4] )
          v25 = 1;
      v26 = operator new(0x18u);
      v26[4] = v3;
      v26[5] = v32;
      v32 = (char *)&unk_28898CC;
      sub_21D4928(v25, (int)v26, (int)v21, (int)&dword_280E49C);
      ++dword_280E4AC;
    goto LABEL_39;
}


int *__fastcall BlockEntity::getFilteredCustomName(BlockEntity *this, const UIProfanityContext *a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)((char *)this + 92);
  if ( !*(_DWORD *)(*((_DWORD *)this + 23) - 12) )
  {
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v7);
    v3 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v3);
    }
  }
  return v2;
}


  if ( BlockEntity::isType(a1, 24) != 1 )
{
  v6 = EndGatewayBlockEntity::isSpawning(v5);
  if ( EndGatewayBlockEntity::isCoolingDown(v5) == 1 )
  {
    _R1 = &mce::Math::PI;
    v8 = dword_27F3BEC;
    v9 = unk_27F3BF0;
    v10 = dword_27F3BF4;
    *(_DWORD *)v3 = Palette::PURPLE;
    *(_DWORD *)(v3 + 4) = v8;
    *(_DWORD *)(v3 + 8) = v9;
    *(_DWORD *)(v3 + 12) = v10;
    __asm { VLDR            S16, [R1] }
    _R0 = EndGatewayBlockEntity::getCoolDownPercentage(v5);
LABEL_7:
    __asm
    {
      VMOV            S0, R0
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    }
    *v4 = mce::Math::sin(_R0, v16);
    return 1;
  }
  if ( v6 == 1 )
    v19 = dword_27F3B6C;
    v20 = unk_27F3B70;
    v21 = dword_27F3B74;
    *(_DWORD *)v3 = Palette::MAGENTA;
    *(_DWORD *)(v3 + 4) = v19;
    *(_DWORD *)(v3 + 8) = v20;
    *(_DWORD *)(v3 + 12) = v21;
    _R0 = EndGatewayBlockEntity::getSpawnPercentage(v5);
    goto LABEL_7;
  v23 = *(&Color::NIL + 1);
  v24 = HIDWORD(qword_283E6B8);
  v25 = qword_283E6B8;
  *(_DWORD *)v3 = Color::NIL;
  *(_DWORD *)(v3 + 4) = v23;
  *(_QWORD *)(v3 + 8) = __PAIR__(v24, v25);
  result = 0;
  *v4 = 0;
  return result;
}


void __fastcall BlockEntity::loadStatic(BlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r9@1
  NetherReactorBlockEntity **v3; // r8@1
  int *v4; // r0@1
  void *v5; // r0@1
  int v6; // r0@2
  void *v7; // r6@3
  size_t v8; // r4@3
  int *v9; // r10@3
  int *v10; // r7@4
  _DWORD *v11; // r0@5
  size_t v12; // r5@5
  size_t v13; // r2@5
  int v14; // r0@7
  _DWORD *v15; // r1@16
  unsigned int v16; // r4@16
  unsigned int v17; // r5@16
  size_t v18; // r2@16
  int v19; // r0@18
  void *v20; // r0@21
  void *v21; // r0@22
  void *v22; // r0@23
  int v23; // r1@24
  char *v24; // r0@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@46
  signed int v30; // r1@48
  unsigned int *v31; // r2@50
  signed int v32; // r1@52
  unsigned int *v33; // r2@54
  signed int v34; // r1@56
  char v35; // [sp+0h] [bp-58h]@24
  int v36; // [sp+8h] [bp-50h]@23
  int v37; // [sp+10h] [bp-48h]@22
  int v38; // [sp+18h] [bp-40h]@21
  int v39; // [sp+1Ch] [bp-3Ch]@21
  int v40; // [sp+20h] [bp-38h]@21
  int v41; // [sp+24h] [bp-34h]@21
  int v42; // [sp+2Ch] [bp-2Ch]@1
  void *s2; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v3 = (NetherReactorBlockEntity **)this;
  sub_21E94B4((void **)&v42, "id");
  v4 = (int *)CompoundTag::getString((int)v2, (const void **)&v42);
  sub_21E8AF4((int *)&s2, v4);
  v5 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = dword_280E488;
  if ( dword_280E488 )
    v7 = s2;
    v8 = *((_DWORD *)s2 - 3);
    v9 = &dword_280E484;
    do
      v10 = (int *)v6;
      while ( 1 )
      {
        v11 = (_DWORD *)v10[4];
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v8 )
          v13 = v8;
        v14 = memcmp(v11, v7, v13);
        if ( !v14 )
          v14 = v12 - v8;
        if ( v14 >= 0 )
          break;
        v10 = (int *)v10[3];
        if ( !v10 )
        {
          v10 = v9;
          goto LABEL_15;
        }
      }
      v6 = v10[2];
      v9 = v10;
    while ( v6 );
  else
    v10 = &dword_280E484;
LABEL_15:
  if ( v10 != &dword_280E484 )
    v15 = (_DWORD *)v10[4];
    v16 = *((_DWORD *)s2 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)s2 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(s2, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 > -1 )
      v39 = 0;
      v40 = 0;
      v41 = 0;
      sub_21E94B4((void **)&v38, "x");
      v39 = CompoundTag::getInt((int)v2, (const void **)&v38);
      v20 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      sub_21E94B4((void **)&v37, "y");
      v40 = CompoundTag::getInt((int)v2, (const void **)&v37);
      v21 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v37 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      sub_21E94B4((void **)&v36, (const char *)&aRtuz[3]);
      v41 = CompoundTag::getInt((int)v2, (const void **)&v36);
      v22 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v36 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = v10[5];
      v35 = 0;
      BlockEntityFactory::createBlockEntity(v3, v23, (int)&v39, &v35);
      if ( *v3 )
        (*(void (**)(void))(*(_DWORD *)*v3 + 8))();
        goto LABEL_28;
      *v3 = 0;
  *v3 = 0;
LABEL_28:
  v24 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)((char *)s2 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
}


int __fastcall BlockEntity::setData(int result, int a2)
{
  *(_DWORD *)(result + 72) = a2;
  return result;
}


char *__fastcall BlockEntity::getType(BlockEntity *this)
{
  return (char *)this + 76;
}


int __fastcall BlockEntity::getOwningPiston(BlockEntity *this, BlockSource *a2)
{
  return 0;
}


int *__fastcall BlockEntity::getDisplayName(BlockEntity *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r0@2
  int *result; // r0@2

  v2 = a2;
  v3 = (int *)this;
  if ( *(_DWORD *)(*(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 100))(a2) - 12) )
  {
    v4 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 100))(v2);
    result = sub_21E8AF4(v3, v4);
  }
  else
    result = (int *)(*(int (__fastcall **)(int *, int))(*(_DWORD *)v2 + 108))(v3, v2);
  return result;
}


void __fastcall BlockEntity::setId(int a1, const void **a2)
{
  BlockEntity::setId(a1, a2);
}


int __fastcall BlockEntity::setBB(int result, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8; // r7@1

  v8 = result + 44;
  *(_DWORD *)v8 = a2;
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 8) = a4;
  *(_DWORD *)(v8 + 12) = a5;
  *(_DWORD *)(v8 + 16) = a6;
  *(_DWORD *)(v8 + 20) = a7;
  *(_BYTE *)(result + 68) = a8;
  return result;
}


BlockEntity *__fastcall BlockEntity::~BlockEntity(BlockEntity *this)
{
  BlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_27090B4;
  v2 = *((_DWORD *)this + 23);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 22);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


char *__fastcall BlockEntity::getCustomName(BlockEntity *this)
{
  return (char *)this + 88;
}


void __fastcall BlockEntity::load(BlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BlockEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int v7; // r6@4
  void *v8; // r0@4
  int *v9; // r0@6
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  int v19; // [sp+4h] [bp-34h]@6
  int v20; // [sp+Ch] [bp-2Ch]@4
  int v21; // [sp+14h] [bp-24h]@3
  int v22; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v22, "isMovable");
  v4 = CompoundTag::contains((int)v2, (const void **)&v22);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v21, "isMovable");
    *((_BYTE *)v3 + 97) = CompoundTag::getBoolean((int)v2, (const void **)&v21);
    v6 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v20, "CustomName");
  v7 = CompoundTag::contains((int)v2, (const void **)&v20);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v19, "CustomName");
    v9 = (int *)CompoundTag::getString((int)v2, (const void **)&v19);
    EntityInteraction::setInteractText((int *)v3 + 22, v9);
    sub_21E7EE0((const void **)v3 + 23, 0, *(_BYTE **)(*((_DWORD *)v3 + 23) - 12), 0);
    v10 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
}


int __fastcall BlockEntity::setClientSideOnly(int result, bool a2)
{
  *(_BYTE *)(result + 96) = a2;
  return result;
}


int __fastcall BlockEntity::setChanged(int result)
{
  *(_BYTE *)(result + 101) = 1;
  return result;
}


int __fastcall BlockEntity::_resetAABB(BlockEntity *this)
{
  BlockEntity *v1; // r4@1
  float v8; // [sp+0h] [bp-28h]@1
  float v9; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  Vec3::Vec3((int)&v9, (int)this + 32);
  __asm
  {
    VLDR            S0, [SP,#0x28+var_1C]
    VLDR            S2, [SP,#0x28+var_18]
    VLDR            S4, [SP,#0x28+var_14]
  }
  _R0 = &Vec3::ONE;
    VLDR            S6, [R0]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S2, [SP,#0x28+var_24]
    VSTR            S4, [SP,#0x28+var_20]
  return AABB::set((BlockEntity *)((char *)v1 + 44), (const Vec3 *)&v9, (const Vec3 *)&v8);
}


int __fastcall BlockEntity::_destructionWobble(int result, float *a2, float *a3, float *a4)
{
  Random *v12; // r0@3
  Random *v13; // r4@3

  _R5 = result;
  _R8 = a4;
  __asm { VLDR            S16, [R5,#0x1C] }
  _R9 = a3;
  _R7 = a2;
  __asm
  {
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S0, =0.016667
      VLDR            S2, [R5,#0xC]
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.2
      VCMPE.F32       S0, S2
      VSTR            S0, [R5,#0xC]
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VLDR            S18, [R5,#0x10]
        VLDR            S20, [R5,#0x14]
        VLDR            S22, [R5,#0x18]
      }
      v12 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      v13 = v12;
      _R0 = Random::_genRandInt32(v12);
        VMOV            S0, R0
        VLDR            D12, =2.32830644e-10
        VMOV.F32        S26, #-0.5
        VCVT.F64.U32    D0, S0
      _R0 = &mce::Math::TAU;
        VMUL.F64        D0, D0, D12
        VCVT.F32.F64    S0, D0
        VLDR            S2, =0.15
        VADD.F32        S0, S0, S26
        VLDR            S4, [R0]
        VMUL.F32        S28, S4, S2
        VMUL.F32        S0, S28, S0
        VMOV            R6, S0
      _R10 = cosf(_R6);
      _R6 = sinf(_R6);
      _R0 = Random::_genRandInt32(v13);
        VLDR            S2, =0.05
        VLDR            S4, =0.01
        VMUL.F32        S2, S16, S2
        VMOV            S24, R10
        VADD.F32        S2, S2, S4
        VMOV            R4, S0
        VMUL.F32        S16, S20, S2
        VMUL.F32        S20, S22, S2
        VMOV            S22, R6
        VMUL.F32        S18, S2, S18
        VMUL.F32        S0, S22, S16
        VMUL.F32        S4, S24, S20
        VSUB.F32        S26, S4, S0
      _R0 = cosf(_R4);
      __asm { VMOV            S28, R0 }
      _R0 = sinf(_R4);
        VLDR            S8, [R7]
        VMUL.F32        S2, S28, S18
      result = 0;
        VMUL.F32        S4, S0, S26
        VMUL.F32        S6, S22, S20
        VMUL.F32        S0, S0, S18
        VADD.F32        S2, S4, S2
        VMUL.F32        S4, S24, S16
        VADD.F32        S2, S2, S8
        VADD.F32        S4, S6, S4
        VMUL.F32        S6, S26, S28
        VSTR            S2, [R7]
        VLDR            S2, [R9]
        VSUB.F32        S0, S6, S0
        VSTR            S2, [R9]
        VLDR            S2, [R8]
        VADD.F32        S0, S0, S2
        VSTR            S0, [R8]
      *(_DWORD *)(_R5 + 12) = 0;
  return result;
}


int __fastcall BlockEntity::getUpdatePacket(int result, BlockSource *a2)
{
  *(_DWORD *)result = 0;
  return result;
}
